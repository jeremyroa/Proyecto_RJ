#include "pedidos_rest.h"
#include "ui_pedidos_rest.h"

Pedidos_rest::Pedidos_rest(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Pedidos_rest)
{
  ui->setupUi(this);
}

Pedidos_rest::~Pedidos_rest()
{
  delete ui;
}

void Pedidos_rest::set_item()
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
      aux.push_back(val);
  }
  out.close();
  for(int i = 0; i < aux.size() ;i++){
      this->ui->listWidget->addItem(QString::fromStdString(aux[i]));
  }
}

void Pedidos_rest::on_pushButton_clicked()
{
    this->close();
}
