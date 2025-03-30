#include "addbookdialog.h"
#include "ui_addbookdialog.h"
#include <QSqlQuery>
#include <QMessageBox>

AddBookDialog::AddBookDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBookDialog)
{
    ui->setupUi(this);
    setWindowTitle("Добавить книгу");
}

AddBookDialog::~AddBookDialog()
{
    delete ui;
}

void AddBookDialog::on_buttonBox_accepted()
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
    query.prepare("INSERT INTO books (title, author, year, pages, description, copies, condition, available) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(title);
    query.addBindValue(author);
    query.addBindValue(year);
    query.addBindValue(pages);
    query.addBindValue(description);
    query.addBindValue(copies);
    query.addBindValue(condition);
    query.addBindValue(available);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось добавить книгу");
    } else {
        accept();
    }
}
