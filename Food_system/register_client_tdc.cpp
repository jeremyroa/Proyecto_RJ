#include "register_client_tdc.h"
#include "ui_register_client_tdc.h"

register_client_tdc::register_client_tdc(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::register_client_tdc)
{
  ui->setupUi(this);
}

register_client_tdc::~register_client_tdc()
{
  delete ui;
}
