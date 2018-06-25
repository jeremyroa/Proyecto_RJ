#include "pedido_cl.h"
#include "ui_pedido_cl.h"
#include "qdebug.h"
Pedido_cl::Pedido_cl(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Pedido_cl)
{
  ui->setupUi(this);
}

Pedido_cl::~Pedido_cl()
{
  delete ui;
}

void Pedido_cl::set_item()
{
  std::string def = "../database/clients/" + this->sys.client.get_id();
  std::string o = def + "/" + this->sys.client.get_id() + "_orders.txt";
  std::ifstream out(o);
  std::vector<std::string> aux;
  std::string val,val1;
  int ban = 0;
  while(!out.eof()){
      if(out.eof()) break;
      std::getline(out,val,'\n');
      if(val[0] == '*'){
        val1 = val.substr(8);
        qDebug() << QString::fromStdString(val1);
        if(val1[0] != 'r'){
          ban = 1;
        }
        else ban = 2;
      }
      if(ban != 2) aux.push_back(val);
      if(val[0] == '+')
        ban = 0;
  }
  out.close();
  for(int i = 0; i < aux.size() ;i++){
      this->ui->listWidget->addItem(QString::fromStdString(aux[i]));
  }
}

void Pedido_cl::on_pushButton_2_clicked()
{
    this->close();
}

void Pedido_cl::on_pushButton_clicked()
{
    this->on_pushButton_2_clicked();
}
