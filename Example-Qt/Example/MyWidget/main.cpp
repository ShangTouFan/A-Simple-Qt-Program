#include "widget.h"
#include "mykeyboard.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
