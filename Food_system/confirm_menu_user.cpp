#include "confirm_menu_user.h"
#include "ui_confirm_menu_user.h"
#include "QStandardItemModel"
#include "sstream"
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

void Confirm_menu_user::set_item()
{
  for(auto j : this->ord.get_service()){
      QListWidgetItem *asd = new QListWidgetItem;
      std::string n = j.first.get_name();
      float p = j.first.get_price();
      int c = j.second;
      std::stringstream var;
      var << n << std::setfill('.') << std::setw(40) << " " << std::to_string(c) << " " << std::to_string(p) << " " << std::to_string(p*c);
      std::getline(var,n);
      this->ui->listWidget->addItem(QString::fromStdString(n));
  }
  this->ui->listWidget->addItem("\n");
  float tot = this->ord.get_total();
  this->ui->listWidget->addItem(QString::fromStdString("Total      ") + QString::fromStdString(std::to_string(tot)));
}
