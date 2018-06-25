#ifndef LIST_USER_REST_H
#define LIST_USER_REST_H

#include <QWidget>
#include "system.h"
#include "user_menu.h"
namespace Ui {
  class List_user_rest;
}

class List_user_rest : public QWidget
{
  Q_OBJECT

public:
  explicit List_user_rest(QWidget *parent = 0);
  ~List_user_rest();
  System sys;
  std::vector<Restaurant> list_ur_rest;
  void set_opcion();
  std::vector<User_Menu*> u_menu;

private slots:
  void on_commandLinkButton_clicked();

private:
  Ui::List_user_rest *ui;
};

#endif // LIST_USER_REST_H
