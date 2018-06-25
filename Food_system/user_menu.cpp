#include "user_menu.h"
#include "ui_user_menu.h"
#include "sstream"
#include "qdebug.h"


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

void User_Menu::on_pushButton_4_clicked()
{
  this->ui->listWidget->clear();
  QString aux = this->ui->comboBox->currentText();
  std::string cat = aux.toStdString();
  Menu men = this->sys.r.get_menu();
  for(auto primero : men.get_catalog()){
    if(primero.second == cat){
      for(auto segundo : primero.first){
        QListWidgetItem *a = new QListWidgetItem;
        std::string b = segundo.get_name();
        std::string m;
        std::stringstream var;
        var << b << std::setfill('.') << std::setw(40) << " " << std::to_string(segundo.get_price());
        std::getline(var,m);
        //qDebug() << QString::fromStdString(m);
        b = m;
        a->setText(QString::fromStdString(b));
        QIcon p(QString::fromStdString(segundo.get_image()));
        a->setIcon(p);
        this->ui->listWidget->addItem(a);
      }
      break;
    }
  }
}

void User_Menu::on_pushButton_2_clicked()
{
  std::string::size_type sz;
  std::stringstream rm(this->ind);
  std::string k;
  std::getline(rm,k,'.');
  std::pair<Food,int> aux;
  aux.first.set_name(k);
  std::getline(rm,k,' ');
  std::getline(rm,k);
  aux.first.set_price(std::stof(k,&sz));
  aux.first.set_image("");
  aux.second = this->ui->spinBox->value();
  this->ord.set_service_item(aux);
  qDebug() <<  this->ord.get_total();
}

void User_Menu::on_listWidget_clicked(const QModelIndex &index)
{
  QString sd = index.data().toString();
  this->ind = sd.toStdString();
}

void User_Menu::on_pushButton_3_clicked()
{
    this->Cmenu = new Confirm_menu_user;
    this->Cmenu->sys = this->sys;
    this->Cmenu->ord = this->ord;
    this->Cmenu->set_item();
    this->Cmenu->show();
    close();
}
