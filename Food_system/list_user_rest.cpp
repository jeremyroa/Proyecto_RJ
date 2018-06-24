#include "list_user_rest.h"
#include "ui_list_user_rest.h"

List_user_rest::List_user_rest(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::List_user_rest)
{
  ui->setupUi(this);
}

List_user_rest::~List_user_rest()
{
  delete ui;
}
