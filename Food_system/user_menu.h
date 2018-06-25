#ifndef USER_MENU_H
#define USER_MENU_H

#include <QWidget>
#include "system.h"
#include "confirm_menu_user.h"
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
  System sys;
  std::string ind;
  Order ord;
  Confirm_menu_user *Cmenu;
private slots:
  void on_pushButton_4_clicked();

  void on_pushButton_2_clicked();

  void on_listWidget_clicked(const QModelIndex &index);

  void on_pushButton_3_clicked();

private:
  Ui::User_Menu *ui;
};

#endif // USER_MENU_H
