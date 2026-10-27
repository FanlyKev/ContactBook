/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *contactBook;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLineEdit *lineEdit_1;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *insertButton;
    QPushButton *exportButton;
    QPushButton *importButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName("MyWidget");
        MyWidget->resize(800, 600);
        verticalLayout = new QVBoxLayout(MyWidget);
        verticalLayout->setObjectName("verticalLayout");
        contactBook = new QTableWidget(MyWidget);
        contactBook->setObjectName("contactBook");

        verticalLayout->addWidget(contactBook);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_1 = new QLabel(MyWidget);
        label_1->setObjectName("label_1");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_1);

        lineEdit_1 = new QLineEdit(MyWidget);
        lineEdit_1->setObjectName("lineEdit_1");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEdit_1);

        label_2 = new QLabel(MyWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(MyWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, lineEdit_2);

        label_3 = new QLabel(MyWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(MyWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, lineEdit_3);

        label_4 = new QLabel(MyWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(MyWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, lineEdit_4);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        insertButton = new QPushButton(MyWidget);
        insertButton->setObjectName("insertButton");

        horizontalLayout_2->addWidget(insertButton);

        exportButton = new QPushButton(MyWidget);
        exportButton->setObjectName("exportButton");

        horizontalLayout_2->addWidget(exportButton);

        importButton = new QPushButton(MyWidget);
        importButton->setObjectName("importButton");

        horizontalLayout_2->addWidget(importButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        label_1->setText(QCoreApplication::translate("MyWidget", "\345\255\270\350\231\237 :", nullptr));
        label_2->setText(QCoreApplication::translate("MyWidget", "\347\217\255\347\264\232 :", nullptr));
        label_3->setText(QCoreApplication::translate("MyWidget", "\345\247\223\345\220\215 :", nullptr));
        label_4->setText(QCoreApplication::translate("MyWidget", "\351\233\273\350\251\261 :", nullptr));
        insertButton->setText(QCoreApplication::translate("MyWidget", "\346\226\260\345\242\236", nullptr));
        exportButton->setText(QCoreApplication::translate("MyWidget", "\345\214\257\345\207\272", nullptr));
        importButton->setText(QCoreApplication::translate("MyWidget", "\345\214\257\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
