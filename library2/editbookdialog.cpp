#include "editbookdialog.h"
#include "ui_editbookdialog.h"
#include <QSqlQuery>
#include <QMessageBox>

EditBookDialog::EditBookDialog(int bookId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditBookDialog),
    bookId(bookId)
{
    ui->setupUi(this);
    setWindowTitle("Редактировать книгу");
    loadBookData();
}

EditBookDialog::~EditBookDialog()
{
    delete ui;
}

void EditBookDialog::loadBookData()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM books WHERE id = ?");
    query.addBindValue(bookId);
    if (!query.exec() || !query.next()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось загрузить данные книги");
        reject();
        return;
    }

    ui->titleEdit->setText(query.value("title").toString());
    ui->authorEdit->setText(query.value("author").toString());
    ui->yearSpin->setValue(query.value("year").toInt());
    ui->pagesSpin->setValue(query.value("pages").toInt());
    ui->descriptionEdit->setPlainText(query.value("description").toString());
    ui->copiesSpin->setValue(query.value("copies").toInt());
    ui->conditionEdit->setText(query.value("condition").toString());
    ui->availableSpin->setValue(query.value("available").toInt());
}

void EditBookDialog::on_buttonBox_accepted()
{
    QString title = ui->titleEdit->text();
    QString author = ui->authorEdit->text();
    int year = ui->yearSpin->value();
    int pages = ui->pagesSpin->value();
    QString description = ui->descriptionEdit->toPlainText();
    int copies = ui->copiesSpin->value();
    QString condition = ui->conditionEdit->text();
    int available = ui->availableSpin->value();

    if (title.isEmpty() || author.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Название и автор обязательны для заполнения");
        return;
    }

    QSqlQuery query;
    query.prepare("UPDATE books SET title = ?, author = ?, year = ?, pages = ?, "
                  "description = ?, copies = ?, condition = ?, available = ? WHERE id = ?");
    query.addBindValue(title);
    query.addBindValue(author);
    query.addBindValue(year);
    query.addBindValue(pages);
    query.addBindValue(description);
    query.addBindValue(copies);
    query.addBindValue(condition);
    query.addBindValue(available);
    query.addBindValue(bookId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось обновить данные книги");
    } else {
        accept();
    }
}
