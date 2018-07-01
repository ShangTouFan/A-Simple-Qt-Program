/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_MyDialog
{
public:
    QPushButton *button;
    QSpinBox *spinbox;

    void setupUi(QDialog *MyDialog)
    {
        if (MyDialog->objectName().isEmpty())
            MyDialog->setObjectName(QString::fromUtf8("MyDialog"));
        MyDialog->resize(400, 300);
        button = new QPushButton(MyDialog);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(150, 170, 99, 27));
        spinbox = new QSpinBox(MyDialog);
        spinbox->setObjectName(QString::fromUtf8("spinbox"));
        spinbox->setGeometry(QRect(170, 110, 48, 27));

        retranslateUi(MyDialog);

        QMetaObject::connectSlotsByName(MyDialog);
    } // setupUi

    void retranslateUi(QDialog *MyDialog)
    {
        MyDialog->setWindowTitle(QApplication::translate("MyDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        button->setText(QApplication::translate("MyDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyDialog: public Ui_MyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
