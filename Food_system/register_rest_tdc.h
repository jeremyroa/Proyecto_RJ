#ifndef REGISTER_REST_TDC_H
#define REGISTER_REST_TDC_H

#include <QWidget>
#include "system.h"
#include "register_menu.h"

namespace Ui {
class Register_rest_tdc;
}

class Register_rest_tdc : public QWidget
{
    Q_OBJECT

public:
    explicit Register_rest_tdc(QWidget *parent = 0);
    ~Register_rest_tdc();
    System sys_tdc;
    Restaurant rest_tdc;
    Register_Menu *menu;

private slots:
    void on_pushButton_clicked();


private:
    Ui::Register_rest_tdc *ui;
};

#endif // REGISTER_REST_TDC_H
