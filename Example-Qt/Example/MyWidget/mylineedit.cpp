#include "mylineedit.h"

//可使用clicked()继承了QLineEdit的mylineedit类

mylineedit::mylineedit(QWidget *parent) :
    QLineEdit(parent)
{

}

void mylineedit::mousePressEvent(QMouseEvent *event)
{
    //如果单击了就触发clicked信号
    if (event->button() == Qt::LeftButton)
    {
        //触发clicked信号
        emit clicked();
    }
    //将该事件传给父类处理
    QLineEdit::mousePressEvent(event);
}

