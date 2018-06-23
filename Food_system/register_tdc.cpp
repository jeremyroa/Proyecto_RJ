#include "register_tdc.h"
#include "ui_register_tdc.h"

Register_tdc::Register_tdc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register_tdc)
{
    ui->setupUi(this);
}

Register_tdc::~Register_tdc()
{
    delete ui;
}
