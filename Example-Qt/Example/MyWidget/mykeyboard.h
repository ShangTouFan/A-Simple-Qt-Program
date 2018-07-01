#ifndef MYKEYBOARD_H
#define MYKEYBOARD_H

#include <QDialog>
#include <QToolButton>
#include <QLineEdit>

namespace Ui {
class Mykeyboard;
}

class Mykeyboard : public QDialog
{
    Q_OBJECT

public:
    explicit Mykeyboard(QWidget *parent = 0);
    ~Mykeyboard();
    friend class Widget ;

private:
    Ui::Mykeyboard *ui;
    QToolButton *SoftKey[40] ;//所有的软键盘按钮
    QLineEdit *Line ;//文本输入框
    QString CurString ;//按下确定后保存再CurString里

private slots:
    void Init() ;
    void Click1() ;
    void Click2() ;
    void Click3() ;
    void Click4() ;
    void Click5() ;
    void Click6() ;
    void Click7() ;
    void Click8() ;
    void Click9() ;
    void Click0() ;
    void ClickQ() ;
    void ClickW() ;
    void ClickE() ;
    void ClickR() ;
    void ClickT() ;
    void ClickY() ;
    void ClickU() ;
    void ClickI() ;
    void ClickO() ;
    void ClickP() ;
    void ClickA() ;
    void ClickS() ;
    void ClickD() ;
    void ClickF() ;
    void ClickG() ;
    void ClickH() ;
    void ClickJ() ;
    void ClickK() ;
    void ClickL() ;
    void ClickBack() ;
    void ClickClose() ;
    void ClickZ() ;
    void ClickX() ;
    void ClickC() ;
    void ClickV() ;
    void ClickB() ;
    void ClickN() ;
    void ClickM() ;
    void ClickPoint() ;
    void ClickEnter() ;
};

#endif // MYKEYBOARD_H
