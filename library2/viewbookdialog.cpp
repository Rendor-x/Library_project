#include "viewbookdialog.h"
#include "ui_viewbookdialog.h"
#include <QSqlQuery>

ViewBookDialog::ViewBookDialog(int bookId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewBookDialog)
{
    ui->setupUi(this);
    setWindowTitle("Просмотр книги");
    loadBookData(bookId);
}

ViewBookDialog::~ViewBookDialog()
{
    delete ui;
}

void ViewBookDialog::loadBookData(int bookId)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM books WHERE id = ?");
    query.addBindValue(bookId);
    if (!query.exec() || !query.next()) {
        return;
    }

    ui->titleLabel->setText(query.value("title").toString());
    ui->authorLabel->setText(query.value("author").toString());
    ui->yearLabel->setText(query.value("year").toString());
    ui->pagesLabel->setText(query.value("pages").toString());
    ui->descriptionLabel->setText(query.value("description").toString());
    ui->copiesLabel->setText(query.value("copies").toString());
    ui->conditionLabel->setText(query.value("condition").toString());
    ui->availableLabel->setText(query.value("available").toString());
}
