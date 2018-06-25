#include "confirm_menu_user.h"
#include "ui_confirm_menu_user.h"
#include "QStandardItemModel"
#include "sstream"
#include "login.h"
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

void Confirm_menu_user::on_pushButton_clicked()
{
  QString reply;

  Login *log = new Login;

  reply = QMessageBox::question(this,"Pago De la Compra","Desea Confirmar el pedido","Si","No");

  if(!(reply == "\u0001"))
  {
     if(this->sys.add_order_temporal(this->ord) == 0)
     {
        log->sys = this->sys;
        log->show();
        this->close();
     }else QMessageBox::warning(this,"Error Pedido","Error al procesar el pedido");
  }
}
