/********************************************************************************
** Form generated from reading UI file 'editform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITFORM_H
#define UI_EDITFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditForm
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_title;
    QLineEdit *lineEdit_genre;
    QLineEdit *lineEdit_author;
    QLineEdit *lineEdit_year;
    QLineEdit *lineEdit_pages;
    QLineEdit *lineEdit_presence;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;
    QPushButton *saveButton;

    void setupUi(QWidget *EditForm)
    {
        if (EditForm->objectName().isEmpty())
            EditForm->setObjectName("EditForm");
        EditForm->resize(694, 421);
        verticalLayoutWidget_2 = new QWidget(EditForm);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(259, 36, 271, 271));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_title = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_title->setObjectName("lineEdit_title");

        verticalLayout_2->addWidget(lineEdit_title);

        lineEdit_genre = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_genre->setObjectName("lineEdit_genre");

        verticalLayout_2->addWidget(lineEdit_genre);

        lineEdit_author = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_author->setObjectName("lineEdit_author");

        verticalLayout_2->addWidget(lineEdit_author);

        lineEdit_year = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_year->setObjectName("lineEdit_year");

        verticalLayout_2->addWidget(lineEdit_year);

        lineEdit_pages = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_pages->setObjectName("lineEdit_pages");

        verticalLayout_2->addWidget(lineEdit_pages);

        lineEdit_presence = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_presence->setObjectName("lineEdit_presence");

        verticalLayout_2->addWidget(lineEdit_presence);

        verticalLayoutWidget = new QWidget(EditForm);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 40, 261, 253));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        horizontalLayoutWidget = new QWidget(EditForm);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(250, 340, 195, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(horizontalLayoutWidget);
        backButton->setObjectName("backButton");

        horizontalLayout->addWidget(backButton);

        saveButton = new QPushButton(horizontalLayoutWidget);
        saveButton->setObjectName("saveButton");

        horizontalLayout->addWidget(saveButton);


        retranslateUi(EditForm);

        QMetaObject::connectSlotsByName(EditForm);
    } // setupUi

    void retranslateUi(QWidget *EditForm)
    {
        EditForm->setWindowTitle(QCoreApplication::translate("EditForm", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("EditForm", "Title", nullptr));
        label_5->setText(QCoreApplication::translate("EditForm", "Genre", nullptr));
        label->setText(QCoreApplication::translate("EditForm", "Author", nullptr));
        label_4->setText(QCoreApplication::translate("EditForm", "Year of publishing", nullptr));
        label_3->setText(QCoreApplication::translate("EditForm", "Number of pages", nullptr));
        label_6->setText(QCoreApplication::translate("EditForm", "Presence", nullptr));
        backButton->setText(QCoreApplication::translate("EditForm", "Back", nullptr));
        saveButton->setText(QCoreApplication::translate("EditForm", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditForm: public Ui_EditForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITFORM_H
