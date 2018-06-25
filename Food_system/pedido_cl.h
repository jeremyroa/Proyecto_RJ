#ifndef PEDIDO_CL_H
#define PEDIDO_CL_H

#include <QWidget>
#include "system.h"
namespace Ui {
  class Pedido_cl;
}

class Pedido_cl : public QWidget
{
  Q_OBJECT

public:
  explicit Pedido_cl(QWidget *parent = 0);
  ~Pedido_cl();
  System sys;
  void set_item();

private slots:
  void on_pushButton_2_clicked();

  void on_pushButton_clicked();

private:
  Ui::Pedido_cl *ui;
};

#endif // PEDIDO_CL_H
