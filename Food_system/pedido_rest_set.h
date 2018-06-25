#ifndef PEDIDO_REST_SET_H
#define PEDIDO_REST_SET_H

#include <QWidget>
#include "system.h"

namespace Ui {
  class Pedido_rest_set;
}

class Pedido_rest_set : public QWidget
{
  Q_OBJECT

public:
  explicit Pedido_rest_set(QWidget *parent = 0);
  ~Pedido_rest_set();
  System sys;
  void get_pedido();
  std::string ind;

private slots:
  void on_pushButton_clicked();

  void on_listWidget_doubleClicked(const QModelIndex &index);

  void on_listWidget_clicked(const QModelIndex &index);

  void on_pushButton_2_clicked();

  void on_pushButton_3_clicked();

private:
  Ui::Pedido_rest_set *ui;
};

#endif // PEDIDO_REST_SET_H
