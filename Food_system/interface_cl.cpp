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
