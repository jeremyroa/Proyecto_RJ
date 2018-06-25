#ifndef REGISTER_CLIENT_TDC_H
#define REGISTER_CLIENT_TDC_H

#include <QWidget>

namespace Ui {
  class register_client_tdc;
}

class register_client_tdc : public QWidget
{
  Q_OBJECT

public:
  explicit register_client_tdc(QWidget *parent = 0);
  ~register_client_tdc();

private:
  Ui::register_client_tdc *ui;
};

#endif // REGISTER_CLIENT_TDC_H
