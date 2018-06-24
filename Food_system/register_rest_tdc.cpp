#include "register_rest_tdc.h"
#include "ui_register_rest_tdc.h"
#include "qmessagebox.h"

Register_rest_tdc::Register_rest_tdc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register_rest_tdc)
{
    ui->setupUi(this);
}

Register_rest_tdc::~Register_rest_tdc()
{
    delete ui;
}

void Register_rest_tdc::on_pushButton_clicked()
{
  int ban = 0;
  QString no_card = this->ui->lineEdit->text();
  QString tip_card = this->ui->comboBox->currentText();
  QString security = this->ui->lineEdit_3->text();
  date fecha;
  fecha.month = this->ui->spinBox->value();
  fecha.year = this->ui->spinBox_2->value();
  QString name = this->ui->lineEdit_6->text();
  QString id = this->ui->lineEdit_7->text();

  if((!name.isEmpty()) && (!no_card.isEmpty()) && (!tip_card.isEmpty()) && (!security.isEmpty())
     && (!id.isEmpty()))
  {
      if(this->rest_tdc.card.set_no_id(no_card.toStdString()) != 0){
          QMessageBox::warning(this,"Error Numero de tarjeta","Deben contener puros numeros y 16 digitos");
          ban = 1;
      }
      if(this->rest_tdc.card.set_name(name.toStdString()) != 0){
          QMessageBox::warning(this,"Error Nombre","Debe ser del propietario");
          ban = 1;
      }
      if(this->rest_tdc.card.set_id(id.toStdString()) != 0){
          QMessageBox::warning(this,"Error Cedula","Debe contener puros numeros y 8 digitos");
          ban = 1;
      }
      if(this->rest_tdc.card.set_security(security.toStdString()) != 0){
          QMessageBox::warning(this,"Error CVC","Deben contener puros numeros y 3 digitos");
          ban = 1;
      }
      if(this->rest_tdc.card.set_expired_date(fecha) != 0){
          QMessageBox::warning(this,"Error Fecha de Vencimiento","");
          ban = 1;
      }
      if(ban == 0){
        this->menu = new Register_Menu;
        this->menu->rest_menu = this->rest_tdc;
        this->menu->show();
        hide();
       }

  }
}

