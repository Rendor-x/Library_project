#ifndef VIEWBOOKDIALOG_H
#define VIEWBOOKDIALOG_H

#include <QDialog>

namespace Ui {
class ViewBookDialog;
}

class ViewBookDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ViewBookDialog(int bookId, QWidget *parent = nullptr);
    ~ViewBookDialog();

private:
    Ui::ViewBookDialog *ui;
    void loadBookData(int bookId);
};

#endif // VIEWBOOKDIALOG_H
