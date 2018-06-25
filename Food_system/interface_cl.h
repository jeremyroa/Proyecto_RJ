#ifndef INTERFACE_CL_H
#define INTERFACE_CL_H

#include <QWidget>
#include "system.h"
#include "list_user_rest.h"

namespace Ui {
  class Interface_cl;
}

class Interface_cl : public QWidget
{
  Q_OBJECT

public:
  explicit Interface_cl(QWidget *parent = 0);
  ~Interface_cl();
  System sys;
  List_user_rest *lur;

private slots:
  void on_pushButton_clicked();

  void on_commandLinkButton_3_clicked();

private:
  Ui::Interface_cl *ui;
};

#endif // INTERFACE_CL_H
