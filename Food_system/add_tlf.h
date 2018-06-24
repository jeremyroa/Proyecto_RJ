#ifndef ADD_TLF_H
#define ADD_TLF_H

#include <QWidget>
#include "restaurant.h"
#include "QMessageBox"
namespace Ui {
  class Add_TLF;
}

class Add_TLF : public QWidget
{
  Q_OBJECT

public:
  explicit Add_TLF(QWidget *parent = 0);
  ~Add_TLF();
  Restaurant *tel;

private slots:
  void on_pushButton_clicked();

private:
  Ui::Add_TLF *ui;
};

#endif // ADD_TLF_H
