/********************************************************************************
** Form generated from reading UI file 'addform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFORM_H
#define UI_ADDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backButton;
    QPushButton *addButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_title;
    QLineEdit *lineEdit_genre;
    QLineEdit *lineEdit_author;
    QLineEdit *lineEdit_year;
    QLineEdit *lineEdit_pages;
    QLineEdit *lineEdit_presence;

    void setupUi(QWidget *AddForm)
    {
        if (AddForm->objectName().isEmpty())
            AddForm->setObjectName("AddForm");
        AddForm->resize(708, 411);
        horizontalLayoutWidget = new QWidget(AddForm);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(250, 330, 195, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(horizontalLayoutWidget);
        backButton->setObjectName("backButton");

        horizontalLayout_2->addWidget(backButton);

        addButton = new QPushButton(horizontalLayoutWidget);
        addButton->setObjectName("addButton");

        horizontalLayout_2->addWidget(addButton);

        verticalLayoutWidget = new QWidget(AddForm);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(1, 24, 261, 253));
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

        verticalLayoutWidget_2 = new QWidget(AddForm);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(260, 20, 271, 271));
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


        retranslateUi(AddForm);

        QMetaObject::connectSlotsByName(AddForm);
    } // setupUi

    void retranslateUi(QWidget *AddForm)
    {
        AddForm->setWindowTitle(QCoreApplication::translate("AddForm", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("AddForm", "Back", nullptr));
        addButton->setText(QCoreApplication::translate("AddForm", "Add", nullptr));
        label_2->setText(QCoreApplication::translate("AddForm", "Title", nullptr));
        label_5->setText(QCoreApplication::translate("AddForm", "Genre", nullptr));
        label->setText(QCoreApplication::translate("AddForm", "Author", nullptr));
        label_4->setText(QCoreApplication::translate("AddForm", "Year of publishing", nullptr));
        label_3->setText(QCoreApplication::translate("AddForm", "Number of pages", nullptr));
        label_6->setText(QCoreApplication::translate("AddForm", "Presence", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddForm: public Ui_AddForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFORM_H
