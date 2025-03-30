#ifndef EDITBOOKDIALOG_H
#define EDITBOOKDIALOG_H

#include <QDialog>

namespace Ui {
class EditBookDialog;
}

class EditBookDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditBookDialog(int bookId, QWidget *parent = nullptr);
    ~EditBookDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::EditBookDialog *ui;
    int bookId;
    void loadBookData();
};

#endif // EDITBOOKDIALOG_H
