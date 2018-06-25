#include "list_user_rest.h"
#include "ui_list_user_rest.h"
#include "qdebug.h"

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
  this->list_ur_rest.push_back(aux);
  //this->list_ur_rest[0] = aux;
  this->ui->commandLinkButton->setIcon(a);
  this->ui->commandLinkButton->setText(QString::fromStdString(aux.get_name()));
  /*Restaurant aux = this->sys.search_first(c);
  if(aux.get_password() != Restaurant().get_password()){
  if(c == 1){
    QIcon a(QString::fromStdString(aux.get_image()));
    qDebug() << QString::fromStdString(aux.get_name());
    this->list_ur_rest[c-1] = aux;
    this->ui->commandLinkButton->setIcon(a);
    this->ui->commandLinkButton->setText(QString::fromStdString(aux.get_name()));*/
  //}
  /*if(c == 2){
    QIcon q(QString::fromStdString(aux.get_image()));
    qDebug() << QString::fromStdString(aux.get_name());
    this->list_ur_rest[c-1] = aux;
    this->ui->commandLinkButton_2->setIcon(q);
    this->ui->commandLinkButton_2->setText(QString::fromStdString(aux.get_name()));
  }
  if(c == 3){
    QIcon h(QString::fromStdString(aux.get_image()));
    qDebug() << QString::fromStdString(aux.get_name());
    this->list_ur_rest[c-1] = aux;
    this->ui->commandLinkButton_3->setIcon(h);
    this->ui->commandLinkButton_3->setText(QString::fromStdString(aux.get_name()));
  }*/
  //}
}

void List_user_rest::set_opcion_2()
{
  Restaurant aux = this->sys.search_second();
  QIcon a(QString::fromStdString(aux.get_image()));
  this->list_ur_rest.push_back(aux);
  this->list_ur_rest[1] = aux;
  this->ui->commandLinkButton_2->setIcon(a);
  this->ui->commandLinkButton_2->setText(QString::fromStdString(aux.get_name()));
}

void List_user_rest::set_opcion_3()
{
  Restaurant aux = this->sys.search_third();
  QIcon a(QString::fromStdString(aux.get_image()));
  this->list_ur_rest[2] = aux;
  this->ui->commandLinkButton_3->setIcon(a);
  this->ui->commandLinkButton_3->setText(QString::fromStdString(aux.get_name()));
}

void List_user_rest::on_commandLinkButton_clicked()
{
   User_Menu *aux = new User_Menu;
   this->sys.r = this->list_ur_rest[0];
   this->u_menu[0] = aux;
   this->u_menu[0]->sys = this->sys;
   this->u_menu[0]->set_item(this->list_ur_rest[0]);
   this->u_menu[0]->show();
   close();

}

void List_user_rest::on_commandLinkButton_2_clicked()
{
  User_Menu *aux = new User_Menu;
  this->sys.r = this->list_ur_rest[1];
  this->u_menu[1] = aux;
  this->u_menu[1]->sys = this->sys;
  this->u_menu[1]->set_item(this->list_ur_rest[1]);
  this->u_menu[1]->show();
  close();
}

void List_user_rest::on_commandLinkButton_3_clicked()
{
  User_Menu *aux = new User_Menu;
  this->sys.r = this->list_ur_rest[2];
  this->u_menu[2] = aux;
  this->u_menu[2]->sys = this->sys;
  this->u_menu[2]->set_item(this->list_ur_rest[2]);
  this->u_menu[2]->show();
  close();
}

void List_user_rest::on_commandLinkButton_5_clicked()
{
    this->close();
}
