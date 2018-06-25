#include "interface_cl.h"
#include "ui_interface_cl.h"


Interface_cl::Interface_cl(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Interface_cl)
{
  ui->setupUi(this);
}

Interface_cl::~Interface_cl()
{
  delete ui;
}

void Interface_cl::on_pushButton_clicked()
{
    close();
}

void Interface_cl::on_commandLinkButton_3_clicked()
{
    this->lur = new List_user_rest;
    this->lur->sys = this->sys;
    this->lur->set_opcion();
    this->lur->show();
    close();
}

void Interface_cl::on_commandLinkButton_2_clicked()
{
    this->p_cl = new Pedido_cl;
    this->p_cl->sys = this->sys;
    this->p_cl->set_item();
    this->p_cl->show();
}
