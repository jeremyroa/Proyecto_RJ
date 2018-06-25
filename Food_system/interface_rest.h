#ifndef INTERFACE_REST_H
#define INTERFACE_REST_H

#include <QWidget>
#include "system.h"
#include "pedido_rest_set.h"
#include "pedidos_rest.h"

namespace Ui {
  class Interface_rest;
}

class Interface_rest : public QWidget
{
  Q_OBJECT

public:
  explicit Interface_rest(QWidget *parent = 0);
  ~Interface_rest();
  System sys;
  Pedido_rest_set *prs;
  void set_image(std::string);
  Pedidos_rest *ped_rest;

private slots:
  void on_pushButton_clicked();

  void on_commandLinkButton_clicked();

  void on_commandLinkButton_2_clicked();

private:
  Ui::Interface_rest *ui;
};

#endif // INTERFACE_REST_H
