#ifndef REGISTER_RESTAURANT_H
#define REGISTER_RESTAURANT_H

#include <QWidget>
#include "register_rest_tdc.h"
#include "system.h"
#include "add_tlf.h"

namespace Ui {
class register_restaurant;
}

class register_restaurant : public QWidget
{
    Q_OBJECT

public:
    explicit register_restaurant(QWidget *parent = 0);
    ~register_restaurant();

    Register_rest_tdc *tdc;
    System sys;
    Restaurant restau;
    Add_TLF *tlf;


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    
    void on_pushButton_4_clicked();

private:
    Ui::register_restaurant *ui;

};

#endif // REGISTER_RESTAURANT_H
