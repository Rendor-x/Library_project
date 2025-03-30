#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QMessageBox>
#include "addbookdialog.h"
#include "editbookdialog.h"
#include "viewbookdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addButton_clicked();
    void on_editButton_clicked();
    void on_deleteButton_clicked();
    void on_viewButton_clicked();
    void refreshTable();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    void setupDatabase();
    void setupTable();
};
#endif // MAINWINDOW_H
