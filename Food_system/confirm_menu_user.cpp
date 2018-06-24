#include "confirm_menu_user.h"
#include "ui_confirm_menu_user.h"

Confirm_menu_user::Confirm_menu_user(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Confirm_menu_user)
{
  ui->setupUi(this);
}

Confirm_menu_user::~Confirm_menu_user()
{
  delete ui;
}
