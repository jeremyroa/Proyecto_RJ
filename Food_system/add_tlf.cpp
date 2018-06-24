#include "add_tlf.h"
#include "ui_add_tlf.h"

Add_TLF::Add_TLF(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Add_TLF)
{
  ui->setupUi(this);
  this->ui->lineEdit->clear();
}

Add_TLF::~Add_TLF()
{
  delete ui;
}

void Add_TLF::on_pushButton_clicked()
{
    QString tlf_add = this->ui->lineEdit->text();

    if(!(tlf_add.isEmpty()) && (this->tel->set_tlf(tlf_add.toStdString()) == 0))
    {
      QMessageBox::information(this,"Telefono","Telefono Agregado");
      this->close();
    }
    else
    {
       QMessageBox::warning(this,"Telefono","Error al agregar telefono. Intente de nuevo");
    }


}
