/********************************************************************************
** Form generated from reading UI file 'mylineedit.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYLINEEDIT_H
#define UI_MYLINEEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_mylineedit
{
public:

    void setupUi(QDialog *mylineedit)
    {
        if (mylineedit->objectName().isEmpty())
            mylineedit->setObjectName(QString::fromUtf8("mylineedit"));
        mylineedit->resize(400, 300);

        retranslateUi(mylineedit);

        QMetaObject::connectSlotsByName(mylineedit);
    } // setupUi

    void retranslateUi(QDialog *mylineedit)
    {
        mylineedit->setWindowTitle(QApplication::translate("mylineedit", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mylineedit: public Ui_mylineedit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYLINEEDIT_H
