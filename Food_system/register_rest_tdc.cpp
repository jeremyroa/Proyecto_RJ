#include "register_rest_tdc.h"
#include "ui_register_rest_tdc.h"

Register_rest_tdc::Register_rest_tdc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register_rest_tdc)
{
    ui->setupUi(this);
}

Register_rest_tdc::~Register_rest_tdc()
{
    delete ui;
}

void Register_rest_tdc::on_pushButton_clicked()
{
  this->menu = new Register_Menu;
  this->menu->rest_menu = this->rest_tdc;
  this->menu->show();
  hide();
}
