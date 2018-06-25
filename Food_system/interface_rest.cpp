#include "interface_rest.h"
#include "ui_interface_rest.h"
#include "qdebug.h"

Interface_rest::Interface_rest(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Interface_rest)
{
  ui->setupUi(this);

}

Interface_rest::~Interface_rest()
{
  delete ui;
}

void Interface_rest::set_image(std::string img)
{
  qDebug() << QString::fromStdString(img);
  QPixmap a(QString::fromStdString(img));
  this->ui->label_2->setPixmap(a);
  this->ui->label->setText(QString::fromStdString(this->sys.r.get_name()));

}

void Interface_rest::on_pushButton_clicked()
{
    close();
}

void Interface_rest::on_commandLinkButton_clicked()
{
    this->prs = new Pedido_rest_set;
    this->prs->sys = this->sys;
    this->prs->get_pedido();
    this->prs->show();
}
