#include "dialog.h"
#include "ui_dialog.h"
#include <QDesktopWidget>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //setWindowFlags(Qt::Window);
    //setWindowState(Qt::WindowFullScreen);
    QPixmap pixmap(":/img3.png");
    QPalette palette = this->palette();
    palette.setBrush(QPalette::Background,QBrush(pixmap.scaled(QApplication::desktop()->size())));
    this->setPalette(palette);
}

Dialog::~Dialog()
{
    delete ui;
}
