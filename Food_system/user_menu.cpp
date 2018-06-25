#include "user_menu.h"
#include "ui_user_menu.h"


User_Menu::User_Menu(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::User_Menu)
{
  ui->setupUi(this);
}

void User_Menu::set_item(Restaurant asd)
{
  QPixmap a(QString::fromStdString(asd.get_image()));
  this->ui->label->setPixmap(a);
  this->ui->label_2->setText(QString::fromStdString(asd.get_name()));
  this->ui->label_3->setText(QString::fromStdString(asd.get_description()));
  QList<QString> jkl;
  Menu men = asd.get_menu();
  for(auto primero : men.get_catalog()){
     QString iop = QString::fromStdString(primero.second);
     jkl.push_back(iop);
  }
  this->ui->comboBox->addItems(jkl);
}

User_Menu::~User_Menu()
{
  delete ui;
}
