#include "mykeyboard.h"
#include "ui_mykeyboard.h"
#include <QDesktopWidget>

Mykeyboard::Mykeyboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mykeyboard)
{
    ui->setupUi(this);
    setWindowFlags(this->windowFlags() | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);
    //WindowStaysOnTopHint设置窗口再最上端，FramelessWindowHint设置无边窗口
    this->setFixedSize(QApplication::desktop()->width()/2,QApplication::desktop()->height()/2);//设置键盘的窗口大小
    QString Toolbuttonformat = "QToolButton{background-color:rgba(242,141,102,255);\
                            color:rgba(50,25,25,255);\
                            border:2px groove rgb(242,141,102);border-radius:20px;padding:2px 2px;\
                            background-color: qconicalgradient(cx:0.5, cy:0.522909, angle:179.9, stop:0.494318 rgba(242,141,102,255), \
                            stop:0.5 rgba(242,141,102,255));}\
                            QToolButton:pressed{background-color:rgba(200,200,200,255);}";//把待会儿要用的窗口样式用字符串保存

    Line = new QLineEdit(this) ;
    QFont fontalnum("Microsoft YaHei",this->width()/30,50);
    QFont fontfun("Microsoft YaHei",this->width()/35,50);
    for(int i = 0 ; i < 40 ; ++i)
        SoftKey[i] = new QToolButton(this) ;
    char tmp[2] = {0} ;
    char Alnum1[30] = "1234567890QWERTYUIOPASDFGHJKL";
    char Alnum2[8] = "ZXCVBNM" ;
    for(int i = 0 ; i < 29 ; ++i )
    {
        tmp[0] = Alnum1[i] ;
        SoftKey[i]->setText(tmp) ;//设置文本
        SoftKey[i]->setFont(fontalnum);//设置字体样式
    }
    int j = 0 ;
    for(int i = 31; i < 38 && Alnum2[j] != '\0' ; ++i,++j )
    {
        tmp[0] = Alnum2[j] ;
        SoftKey[i]->setText(tmp);
        SoftKey[i]->setFont(fontalnum);
    }

    for(int i = 0 ; i < 40 ; ++i)
        SoftKey[i]->setStyleSheet(Toolbuttonformat);//设置窗口样式

    Line->setFixedSize(this->width()/1.2,this->height()/4);
    Line->setStyleSheet("background-color:rgba(247,192,193,255);");
    Line->setFont(fontalnum) ;

    for(int i = 0 ; i < 40 ; ++i)
        SoftKey[i]->resize(this->width()/10,this->height()/6);

    Line->move((this->width()-Line->width())/2,(this->height()-4*SoftKey[0]->height()-Line->height())/2);

    int k = 0 ;
    for( int i = 0 ; i < 4 ; ++i)
    {
        for( j = 0 ; j < 10 ; ++j)
        {
            SoftKey[k++]->move(j*SoftKey[i]->width(),(i+2)*SoftKey[i]->height());
        }
    }

    SoftKey[29]->setIcon(QIcon(":/Backspace.png"));//给按钮对象添加图标
    SoftKey[29]->setToolButtonStyle(Qt::ToolButtonIconOnly);//设置按钮只有图标没有文本
    SoftKey[29]->setIconSize(QSize(SoftKey[29]->width()/2,SoftKey[29]->height()/2));
    SoftKey[30]->setText(QObject::tr("关闭"));
    SoftKey[30]->setFont(fontfun);
    SoftKey[38]->setText(QObject::tr("."));
    SoftKey[38]->setFont(fontalnum);
    SoftKey[39]->setText(QObject::tr("确定"));
    SoftKey[39]->setFont(fontfun);
    Init();
}

void Mykeyboard::Init()
{
    connect(SoftKey[0],SIGNAL(clicked(bool)),this,SLOT(Click1())) ;
    connect(SoftKey[1],SIGNAL(clicked(bool)),this,SLOT(Click2())) ;
    connect(SoftKey[2],SIGNAL(clicked(bool)),this,SLOT(Click3())) ;
    connect(SoftKey[3],SIGNAL(clicked(bool)),this,SLOT(Click4())) ;
    connect(SoftKey[4],SIGNAL(clicked(bool)),this,SLOT(Click5())) ;
    connect(SoftKey[5],SIGNAL(clicked(bool)),this,SLOT(Click6())) ;
    connect(SoftKey[6],SIGNAL(clicked(bool)),this,SLOT(Click7())) ;
    connect(SoftKey[7],SIGNAL(clicked(bool)),this,SLOT(Click8())) ;
    connect(SoftKey[8],SIGNAL(clicked(bool)),this,SLOT(Click9())) ;
    connect(SoftKey[9],SIGNAL(clicked(bool)),this,SLOT(Click0())) ;
    connect(SoftKey[10],SIGNAL(clicked(bool)),this,SLOT(ClickQ())) ;
    connect(SoftKey[11],SIGNAL(clicked(bool)),this,SLOT(ClickW())) ;
    connect(SoftKey[12],SIGNAL(clicked(bool)),this,SLOT(ClickE())) ;
    connect(SoftKey[13],SIGNAL(clicked(bool)),this,SLOT(ClickR())) ;
    connect(SoftKey[14],SIGNAL(clicked(bool)),this,SLOT(ClickT())) ;
    connect(SoftKey[15],SIGNAL(clicked(bool)),this,SLOT(ClickY())) ;
    connect(SoftKey[16],SIGNAL(clicked(bool)),this,SLOT(ClickU())) ;
    connect(SoftKey[17],SIGNAL(clicked(bool)),this,SLOT(ClickI())) ;
    connect(SoftKey[18],SIGNAL(clicked(bool)),this,SLOT(ClickO())) ;
    connect(SoftKey[19],SIGNAL(clicked(bool)),this,SLOT(ClickP())) ;
    connect(SoftKey[20],SIGNAL(clicked(bool)),this,SLOT(ClickA())) ;
    connect(SoftKey[21],SIGNAL(clicked(bool)),this,SLOT(ClickS())) ;
    connect(SoftKey[22],SIGNAL(clicked(bool)),this,SLOT(ClickD())) ;
    connect(SoftKey[23],SIGNAL(clicked(bool)),this,SLOT(ClickF())) ;
    connect(SoftKey[24],SIGNAL(clicked(bool)),this,SLOT(ClickG())) ;
    connect(SoftKey[25],SIGNAL(clicked(bool)),this,SLOT(ClickH())) ;
    connect(SoftKey[26],SIGNAL(clicked(bool)),this,SLOT(ClickJ())) ;
    connect(SoftKey[27],SIGNAL(clicked(bool)),this,SLOT(ClickK())) ;
    connect(SoftKey[28],SIGNAL(clicked(bool)),this,SLOT(ClickL())) ;
    connect(SoftKey[29],SIGNAL(clicked(bool)),this,SLOT(ClickBack())) ;
    connect(SoftKey[30],SIGNAL(clicked(bool)),this,SLOT(ClickClose())) ;
    connect(SoftKey[31],SIGNAL(clicked(bool)),this,SLOT(ClickZ())) ;
    connect(SoftKey[32],SIGNAL(clicked(bool)),this,SLOT(ClickX())) ;
    connect(SoftKey[33],SIGNAL(clicked(bool)),this,SLOT(ClickC())) ;
    connect(SoftKey[34],SIGNAL(clicked(bool)),this,SLOT(ClickV())) ;
    connect(SoftKey[35],SIGNAL(clicked(bool)),this,SLOT(ClickB())) ;
    connect(SoftKey[36],SIGNAL(clicked(bool)),this,SLOT(ClickN())) ;
    connect(SoftKey[37],SIGNAL(clicked(bool)),this,SLOT(ClickM())) ;
    connect(SoftKey[38],SIGNAL(clicked(bool)),this,SLOT(ClickPoint())) ;
    connect(SoftKey[39],SIGNAL(clicked(bool)),this,SLOT(ClickEnter())) ;
}
void Mykeyboard::Click1()
{
    Line->setText(Line->text()+"1");
}
void Mykeyboard::Click2()
{
    Line->setText(Line->text()+"2");
}
void Mykeyboard::Click3()
{
    Line->setText(Line->text()+"3");
}
void Mykeyboard::Click4()
{
    Line->setText(Line->text()+"4");
}
void Mykeyboard::Click5()
{
    Line->setText(Line->text()+"5");
}
void Mykeyboard::Click6()
{
    Line->setText(Line->text()+"6");
}
void Mykeyboard::Click7()
{
    Line->setText(Line->text()+"7");
}
void Mykeyboard::Click8()
{
    Line->setText(Line->text()+"8");
}
void Mykeyboard::Click9()
{
    Line->setText(Line->text()+"9");
}
void Mykeyboard::Click0()
{
    Line->setText(Line->text()+"0");
}
void Mykeyboard::ClickQ()
{
    Line->setText(Line->text()+"Q");
}
void Mykeyboard::ClickW()
{
    Line->setText(Line->text()+"W");
}
void Mykeyboard::ClickE()
{
    Line->setText(Line->text()+"E");
}
void Mykeyboard::ClickR()
{
    Line->setText(Line->text()+"R");
}
void Mykeyboard::ClickT()
{
    Line->setText(Line->text()+"T");
}
void Mykeyboard::ClickY()
{
    Line->setText(Line->text()+"Y");
}
void Mykeyboard::ClickU()
{
    Line->setText(Line->text()+"U");
}
void Mykeyboard::ClickI()
{
    Line->setText(Line->text()+"I");
}
void Mykeyboard::ClickO()
{
    Line->setText(Line->text()+"O");
}
void Mykeyboard::ClickP()
{
    Line->setText(Line->text()+"P");
}
void Mykeyboard::ClickA()
{
    Line->setText(Line->text()+"A");
}
void Mykeyboard::ClickS()
{
    Line->setText(Line->text()+"S");
}
void Mykeyboard::ClickD()
{
    Line->setText(Line->text()+"D");
}
void Mykeyboard::ClickF()
{
    Line->setText(Line->text()+"F");
}
void Mykeyboard::ClickG()
{
    Line->setText(Line->text()+"G");
}
void Mykeyboard::ClickH()
{
    Line->setText(Line->text()+"H");
}
void Mykeyboard::ClickJ()
{
    Line->setText(Line->text()+"J");
}
void Mykeyboard::ClickK()
{
    Line->setText(Line->text()+"K");
}
void Mykeyboard::ClickL()
{
    Line->setText(Line->text()+"L");
}
void Mykeyboard::ClickBack()
{
    QString s = Line->text();
    int len = s.length();
    QString s2 = s.remove(len-1,1);
    Line->setText(s2);
}
void Mykeyboard::ClickClose()
{
    Line->setText("");
    this->close();
}
void Mykeyboard::ClickZ()
{
    Line->setText(Line->text()+"Z");
}
void Mykeyboard::ClickX()
{
    Line->setText(Line->text()+"X");
}
void Mykeyboard::ClickC()
{
    Line->setText(Line->text()+"C");
}
void Mykeyboard::ClickV()
{
    Line->setText(Line->text()+"V");
}
void Mykeyboard::ClickB()
{
    Line->setText(Line->text()+"B");
}
void Mykeyboard::ClickN()
{
    Line->setText(Line->text()+"N");
}
void Mykeyboard::ClickM()
{
    Line->setText(Line->text()+"M");
}
void Mykeyboard::ClickPoint()
{
    Line->setText(Line->text()+".");
}

void Mykeyboard::ClickEnter()
{
    CurString = Line->text() ;
    Line->setText("");
    this->close();
}

Mykeyboard::~Mykeyboard()
{
    delete ui;
    for(int i = 0 ; i < 40 ; ++i)
        delete SoftKey[i] ;

    delete Line ;
}
