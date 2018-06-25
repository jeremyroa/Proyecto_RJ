#ifndef CONFIRM_MENU_USER_H
#define CONFIRM_MENU_USER_H

#include <QWidget>
#include "system.h"


namespace Ui {
  class Confirm_menu_user;
}

class Confirm_menu_user : public QWidget
{
  Q_OBJECT

public:
  explicit Confirm_menu_user(QWidget *parent = 0);
  ~Confirm_menu_user();
  Order ord;
  System sys;
  std::string ind;

  void set_item();
private slots:
  void on_pushButton_clicked();

  void on_listWidget_clicked(const QModelIndex &index);

private:
  Ui::Confirm_menu_user *ui;
};

#endif // CONFIRM_MENU_USER_H
