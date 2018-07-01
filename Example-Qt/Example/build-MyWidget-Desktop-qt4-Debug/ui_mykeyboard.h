/********************************************************************************
** Form generated from reading UI file 'mykeyboard.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYKEYBOARD_H
#define UI_MYKEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Mykeyboard
{
public:

    void setupUi(QDialog *Mykeyboard)
    {
        if (Mykeyboard->objectName().isEmpty())
            Mykeyboard->setObjectName(QString::fromUtf8("Mykeyboard"));
        Mykeyboard->resize(400, 300);

        retranslateUi(Mykeyboard);

        QMetaObject::connectSlotsByName(Mykeyboard);
    } // setupUi

    void retranslateUi(QDialog *Mykeyboard)
    {
        Mykeyboard->setWindowTitle(QApplication::translate("Mykeyboard", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Mykeyboard: public Ui_Mykeyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYKEYBOARD_H
