#include "list_user_rest.h"
#include "ui_list_user_rest.h"

List_user_rest::List_user_rest(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::List_user_rest)
{
  std::vector<Restaurant> aux(3);
  std::vector<User_Menu*> aux_2(3);
  this->u_menu = aux_2;
  this->list_ur_rest = aux;
  ui->setupUi(this);
}

List_user_rest::~List_user_rest()
{
  delete ui;
}

void List_user_rest::set_opcion()
{
  Restaurant aux = this->sys.search_first();
  QIcon a(QString::fromStdString(aux.get_image()));
  this->list_ur_rest[0] = aux;
  this->ui->commandLinkButton->setIcon(a);
  this->ui->commandLinkButton->setText(QString::fromStdString(aux.get_name()));
}

void List_user_rest::on_commandLinkButton_clicked()
{
   User_Menu *aux = new User_Menu;
   this->sys.r = this->list_ur_rest[0];
   this->u_menu[0] = aux;
   this->u_menu[0]->set_item(this->list_ur_rest[0]);
   this->u_menu[0]->show();

}
