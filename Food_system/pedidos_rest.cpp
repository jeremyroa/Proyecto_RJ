#include "pedidos_rest.h"
#include "ui_pedidos_rest.h"

Pedidos_rest::Pedidos_rest(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Pedidos_rest)
{
  ui->setupUi(this);
}

Pedidos_rest::~Pedidos_rest()
{
  delete ui;
}
