#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    setupDatabase();
    setupTable();
    loadBooks();
    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::addBook);
    connect(ui->deleteButton, &QPushButton::clicked, this, &MainWindow::deleteBook);
    connect(ui->editButton, &QPushButton::clicked, this, &MainWindow::editBook);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::setupDatabase() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("library.db");

    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", db.lastError().text());
        return;
    }

    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS books ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "title TEXT,"
               "author TEXT,"
               "year INTEGER,"
               "pages INTEGER,"
               "copies INTEGER,"
               "description TEXT"
               ");");
}

void MainWindow::setupTable() {
    model = new QStandardItemModel(this);
    model->setColumnCount(5);
    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Название");
    model->setHeaderData(2, Qt::Horizontal, "Автор");
    model->setHeaderData(3, Qt::Horizontal, "Год");
    model->setHeaderData(4, Qt::Horizontal, "Экземпляры");

    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
}

void MainWindow::loadBooks() {
    model->removeRows(0, model->rowCount());
    QSqlQuery query("SELECT id, title, author, year, copies FROM books");
    while (query.next()) {
        QList<QStandardItem *> row;
        row.append(new QStandardItem(query.value(0).toString()));
        row.append(new QStandardItem(query.value(1).toString()));
        row.append(new QStandardItem(query.value(2).toString()));
        row.append(new QStandardItem(query.value(3).toString()));
        row.append(new QStandardItem(query.value(4).toString()));
        model->appendRow(row);
    }
}

void MainWindow::addBook() {
    QString title = QInputDialog::getText(this, "Добавить книгу", "Введите название книги:");
    if (title.isEmpty()) return;

    QString author = QInputDialog::getText(this, "Добавить книгу", "Введите автора книги:");
    if (author.isEmpty()) return;

    int year = QInputDialog::getInt(this, "Добавить книгу", "Введите год издания:", 1900, 1000, 2100);
    int pages = QInputDialog::getInt(this, "Добавить книгу", "Введите количество страниц:", 1, 1, 10000);
    int copies = QInputDialog::getInt(this, "Добавить книгу", "Введите количество экземпляров:", 1, 1, 100);
    QString description = QInputDialog::getText(this, "Добавить книгу", "Введите описание:");

    QSqlQuery query;
    query.prepare("INSERT INTO books (title, author, year, pages, copies, description) VALUES (?, ?, ?, ?, ?, ?)");
    query.addBindValue(title);
    query.addBindValue(author);
    query.addBindValue(year);
    query.addBindValue(pages);
    query.addBindValue(copies);
    query.addBindValue(description);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось добавить книгу: " + query.lastError().text());
        return;
    }

    loadBooks();
}

void MainWindow::deleteBook() {
    QModelIndexList selection = ui->tableView->selectionModel()->selectedRows();
    if (selection.isEmpty()) {
        QMessageBox::warning(this, "Удаление книги", "Выберите книгу для удаления.");
        return;
    }

    int bookId = model->data(selection.first()).toInt();
    QSqlQuery query;
    query.prepare("DELETE FROM books WHERE id = ?");
    query.addBindValue(bookId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось удалить книгу: " + query.lastError().text());
        return;
    }

    loadBooks();
}

void MainWindow::editBook() {
    QModelIndexList selection = ui->tableView->selectionModel()->selectedRows();
    if (selection.isEmpty()) {
        QMessageBox::warning(this, "Редактирование книги", "Выберите книгу для редактирования.");
        return;
    }

    int bookId = model->data(selection.first()).toInt();
    QString newTitle = QInputDialog::getText(this, "Редактировать книгу", "Введите новое название книги:");
    if (newTitle.isEmpty()) return;

    QSqlQuery query;
    query.prepare("UPDATE books SET title = ? WHERE id = ?");
    query.addBindValue(newTitle);
    query.addBindValue(bookId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось изменить данные книги: " + query.lastError().text());
        return;
    }

    QMessageBox::information(this, "Успех", "Информация успешно изменена.");
    loadBooks();
}
