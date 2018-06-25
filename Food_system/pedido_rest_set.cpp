#include "pedido_rest_set.h"
#include "ui_pedido_rest_set.h"
#include "qdebug.h"
#include "sstream"

Pedido_rest_set::Pedido_rest_set(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Pedido_rest_set)
{
  ui->setupUi(this);
}

Pedido_rest_set::~Pedido_rest_set()
{
  delete ui;
}

void Pedido_rest_set::get_pedido()
{
  std::string def = "../database/rest/" + this->sys.r.get_rif();
  std::string o = def + "/" + this->sys.r.get_rif() + "_orders_end.txt";
  std::ifstream out(o);

  std::vector<std::string> aux;
  std::string val,val1;
  int ban = 0;
  while(!out.eof()){
      if(out.eof()) break;
      std::getline(out,val,'\n');
      if(val[0] == '*'){
        val1 = val.substr(8);
        //qDebug() << QString::fromStdString(val1);
        if(val1[0] != 'r'){
          ban = 1;
        }
        else ban = 2;
      }
      if(ban == 1) aux.push_back(val);
      ban = 0;
  }
  out.close();
  for(int i = 0; i < aux.size() ;i++){
      this->ui->listWidget->addItem(QString::fromStdString(aux[i]));
  }
}

void Pedido_rest_set::on_pushButton_clicked()
{
  std::stringstream aux(this->ind);
  std::string abc,defi,ghi,jkl;

  std::getline(aux,abc,':');
  std::getline(aux,defi,':');
  std::getline(aux,ghi,':');
  std::getline(aux,jkl,' ');

  std::string def = "../database/clients/" + ghi;
  std::string o = def + "/" + ghi + "_orders.txt";
  std::fstream arch;

  arch.open(o);

  std::string aux_s;

  while(!arch.eof())
  {
     std::getline(arch,aux_s,'\n');

     if(aux_s == this->ind)
     {
        qDebug() << QString::fromStdString(aux_s);
        arch.seekp(-53,std::ios::cur);
        arch << aux_s.substr(0,8) << 'r' << aux_s.substr(9) << '\n';
        break;
     }
  }

  arch.close();

  def = "../database/rest/" + this->sys.r.get_rif();
  o = def + "/" + this->sys.r.get_rif() + "_orders_end.txt";
  arch.open(o);

  while(!arch.eof())
  {
     std::getline(arch,aux_s,'\n');

     if(aux_s == this->ind)
     {
        qDebug() << QString::fromStdString(aux_s);
        arch.seekp(-53,std::ios::cur);
        arch << aux_s.substr(0,8) << 'r' << aux_s.substr(9) << '\n';
        break;
     }
  }
  arch.close();
  this->ui->listWidget->clear();
  this->get_pedido();
}

void Pedido_rest_set::on_listWidget_doubleClicked(const QModelIndex &index)
{

}

void Pedido_rest_set::on_listWidget_clicked(const QModelIndex &index)
{
  QString sd = index.data().toString();
  this->ind = sd.toStdString();
  qDebug() << sd;
}
