#include "register_restaurant.h"
#include "ui_register_restaurant.h"

register_restaurant::register_restaurant(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::register_restaurant)
{
    ui->setupUi(this);
}

register_restaurant::~register_restaurant()
{
    delete ui;
}

void register_restaurant::on_pushButton_clicked()
{
    this->tdc = new Register_rest_tdc;
    this->tdc->rest_tdc = this->rest;
    this->tdc->show();
    hide();
}

void register_restaurant::on_pushButton_2_clicked()
{
    close();
}
