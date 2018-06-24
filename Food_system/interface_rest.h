#ifndef INTERFACE_REST_H
#define INTERFACE_REST_H

#include <QWidget>
#include "system.h"

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
  void set_image(std::string);

private slots:
  void on_pushButton_clicked();

private:
  Ui::Interface_rest *ui;
};

#endif // INTERFACE_REST_H
