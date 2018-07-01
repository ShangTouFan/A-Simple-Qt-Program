/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButton4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setEnabled(true);
        Widget->resize(916, 611);
        Widget->setMinimumSize(QSize(800, 600));
        Widget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(300, 100));
        label->setStyleSheet(QString::fromUtf8("font: 57 36pt \"Ubuntu\";"));

        horizontalLayout->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        pushButton1 = new QPushButton(Widget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        pushButton1->setMinimumSize(QSize(200, 50));
        pushButton1->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pushButton1);

        pushButton2 = new QPushButton(Widget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        pushButton2->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(pushButton2);

        pushButton3 = new QPushButton(Widget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));
        pushButton3->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(pushButton3);

        pushButton4 = new QPushButton(Widget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));
        pushButton4->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(pushButton4);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "Qt\347\274\226\347\250\213\347\244\272\344\276\213", 0, QApplication::UnicodeUTF8));
        pushButton1->setText(QApplication::translate("Widget", "Mykeyboard", 0, QApplication::UnicodeUTF8));
        pushButton2->setText(QApplication::translate("Widget", "To Dialog", 0, QApplication::UnicodeUTF8));
        pushButton3->setText(QApplication::translate("Widget", "Result", 0, QApplication::UnicodeUTF8));
        pushButton4->setText(QApplication::translate("Widget", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
