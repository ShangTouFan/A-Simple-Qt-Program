/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Result
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Result)
    {
        if (Result->objectName().isEmpty())
            Result->setObjectName(QString::fromUtf8("Result"));
        Result->resize(800, 600);
        horizontalLayout_2 = new QHBoxLayout(Result);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(Result);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(400, 100));
        label->setMaximumSize(QSize(800, 100));
        label->setStyleSheet(QString::fromUtf8("font: 57 36pt \"Ubuntu\";"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Result);

        QMetaObject::connectSlotsByName(Result);
    } // setupUi

    void retranslateUi(QDialog *Result)
    {
        Result->setWindowTitle(QApplication::translate("Result", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Result: public Ui_Result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
