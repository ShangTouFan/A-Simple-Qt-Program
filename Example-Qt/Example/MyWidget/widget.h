#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "mykeyboard.h"
#include "dialog.h"
#include "result.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton4_clicked();

    void on_pushButton2_clicked();

    void on_pushButton1_clicked();

    void on_pushButton3_clicked();

private:
    Ui::Widget *ui;
    Mykeyboard *mkb ;
    Dialog *mydialog ;
    Result *curresult ;
};

#endif // WIDGET_H
