#ifndef USER_MENU_H
#define USER_MENU_H

#include <QWidget>
#include "system.h"

namespace Ui {
  class User_Menu;
}

class User_Menu : public QWidget
{
  Q_OBJECT

public:
  explicit User_Menu(QWidget *parent = 0);
  void set_item(Restaurant);
  ~User_Menu();

private:
  Ui::User_Menu *ui;
};

#endif // USER_MENU_H
