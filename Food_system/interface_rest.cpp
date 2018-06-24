#include "interface_rest.h"
#include "ui_interface_rest.h"
#include "qdebug.h"

Interface_rest::Interface_rest(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Interface_rest)
{
  ui->setupUi(this);
  qDebug() << QString::fromStdString(this->sys.r.get_image());
  QPixmap a(QString::fromStdString(this->sys.r.get_image()));
  this->ui->label_2->setPixmap(a);
}

Interface_rest::~Interface_rest()
{
  delete ui;
}

void Interface_rest::on_pushButton_clicked()
{
    close();
}
