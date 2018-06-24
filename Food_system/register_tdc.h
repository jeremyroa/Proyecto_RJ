#ifndef REGISTER_TDC_H
#define REGISTER_TDC_H

#include <QWidget>

namespace Ui {
class Register_tdc;
}

class Register_tdc : public QWidget
{
    Q_OBJECT

public:
    explicit Register_tdc(QWidget *parent = 0);
    ~Register_tdc();

private:
    Ui::Register_tdc *ui;
};

#endif // REGISTER_TDC_H
