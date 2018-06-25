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
  System sys;
  std::string ind;
  std::string ic;
  Order ord;
private slots:
  void on_pushButton_4_clicked();

  void on_pushButton_2_clicked();

  void on_listWidget_clicked(const QModelIndex &index);

private:
  Ui::User_Menu *ui;
};

#endif // USER_MENU_H
