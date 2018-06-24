#ifndef LIST_USER_REST_H
#define LIST_USER_REST_H

#include <QWidget>

namespace Ui {
  class List_user_rest;
}

class List_user_rest : public QWidget
{
  Q_OBJECT

public:
  explicit List_user_rest(QWidget *parent = 0);
  ~List_user_rest();

private:
  Ui::List_user_rest *ui;
};

#endif // LIST_USER_REST_H
