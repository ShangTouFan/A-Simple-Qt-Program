#include "widget.h"
#include "ui_widget.h"
#include "ui_result.h"
#include <QDesktopWidget>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this) ;
    QPixmap pixmap(":/img5.png");
    QPalette palette = this->palette();
    palette.setBrush(QPalette::Background,QBrush(pixmap.scaled(QApplication::desktop()->size())));
    this->setPalette(palette);//添加图片背景

    //setWindowState(Qt::WindowFullScreen);
    mkb = new Mykeyboard ;
    mydialog = new Dialog ;
    curresult = new Result ;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton4_clicked()
{
    close();
}

void Widget::on_pushButton2_clicked()
{
    mydialog->show();
}

void Widget::on_pushButton1_clicked()
{
    mkb->exec();
}

void Widget::on_pushButton3_clicked()
{
    curresult->ui->label->setText(tr("The Result:%1").arg(mkb->CurString));
    curresult->show();
}
