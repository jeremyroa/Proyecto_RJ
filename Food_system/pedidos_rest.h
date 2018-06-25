#ifndef PEDIDOS_REST_H
#define PEDIDOS_REST_H

#include <QWidget>
#include "system.h"

namespace Ui {
  class Pedidos_rest;
}

class Pedidos_rest : public QWidget
{
  Q_OBJECT

public:
  explicit Pedidos_rest(QWidget *parent = 0);
  ~Pedidos_rest();
  System sys;
  void set_item();

private slots:
  void on_pushButton_clicked();

private:
  Ui::Pedidos_rest *ui;
};

#endif // PEDIDOS_REST_H
