#include "user_menu.h"
#include "ui_user_menu.h"

User_Menu::User_Menu(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::User_Menu)
{
  ui->setupUi(this);
}

User_Menu::~User_Menu()
{
  delete ui;
}
