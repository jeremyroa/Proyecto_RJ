#ifndef CONFIRM_MENU_USER_H
#define CONFIRM_MENU_USER_H

#include <QWidget>

namespace Ui {
  class Confirm_menu_user;
}

class Confirm_menu_user : public QWidget
{
  Q_OBJECT

public:
  explicit Confirm_menu_user(QWidget *parent = 0);
  ~Confirm_menu_user();

private:
  Ui::Confirm_menu_user *ui;
};

#endif // CONFIRM_MENU_USER_H
