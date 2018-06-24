#include "register_client.h"
#include "ui_register_client.h"
#include "qmessagebox.h"

register_client::register_client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::register_client)
{
    ui->setupUi(this);
}

register_client::~register_client()
{
    delete ui;
}

void register_client::on_pushButton_clicked()
{
    QString correo = this->ui->lineEdit_correo->text();
    QString name = this->ui->lineEdit_nombre->text();
    QString lname = this->ui->lineEdit_apellido->text();
    QString cedula = this->ui->lineEdit_cedula->text();
    QString tlf = this->ui->lineEdit_telefono->text();
    QString estado = this->ui->lineEdit_estado->text();
    QString ciudad = this->ui->lineEdit_ciudad->text();
    QString sexo = this->ui->comboBox_sexo->currentText();
    QString pass = this->ui->lineEdit_password->text();
    QString pass_c = this->ui->lineEdit_confirm->text();
    int a = this->ui->comboBox_2->currentIndex();
    int b = this->ui->comboBox_3->currentIndex();
    int c = this->ui->comboBox_4->currentIndex();
    int ban = 0;
    std::vector<rest> aux;
    aux.push_back(static_cast<rest>(a));
    aux.push_back(static_cast<rest>(b));
    aux.push_back(static_cast<rest>(c));

    if((!name.isEmpty()) && (!lname.isEmpty()) && (!correo.isEmpty()) && (!cedula.isEmpty())
       && (!tlf.isEmpty()) && (!estado.isEmpty()) && (!ciudad.isEmpty()) && (!sexo.isEmpty())
       && (!pass.isEmpty()) && (!pass_c.isEmpty()))
    {
      if(this->client.set_email(correo.toStdString()) != 0){
         QMessageBox::warning(this,"Error Correo","Algo contiene mal");
         ban = 1;
      }
      if(this->client.set_name(name.toStdString()) != 0){
         QMessageBox::warning(this,"Error Nombre","Sin numeros");
         ban = 1;
      }
      if(this->client.set_lname(lname.toStdString()) != 0){
         QMessageBox::warning(this,"Error Apellido","Sin numeros");
         ban = 1;
      }
      if(this->client.set_id(cedula.toStdString()) != 0){
         QMessageBox::warning(this,"Error Cedula","Debe contener numeros y 8 caracteres");
         ban = 1;
      }
      if(this->client.set_phone(tlf.toStdString()) != 0){
         QMessageBox::warning(this,"Error Telefono","11 Numeros");
         ban = 1;
      }
      if(this->client.set_state(estado.toStdString()) != 0){
         QMessageBox::warning(this,"Error Estado","");
         ban = 1;
      }
      if(this->client.set_city(ciudad.toStdString()) != 0){
         QMessageBox::warning(this,"Error Ciudad","");
         ban = 1;
      }
      if(pass == pass_c){
        if(this->client.set_password(pass.toStdString()) != 0){
           QMessageBox::warning(this,"Error Password","Debe tener 8 caracteres\nUna letra mayuscula\nUn numero\nCaracter Especial excepto espacio");
           ban = 1;
        }
      }else{
         QMessageBox::warning(this,"Error Password","Claves Diferentes");
         ban = 1;
      }
      std::string sex = sexo.toStdString();
      if(this->client.set_sex(sex[0]) != 0){
         QMessageBox::warning(this,"Error Sexo","");
         ban = 1;
      }
      if(this->client.set_fav(aux) != 0){
         QMessageBox::warning(this,"Error Favoritos","");
         ban = 1;
      }
      if(this->sys.add_user(this->client) != 0){
          QMessageBox::information(this,"Creacion","Se Registro con Exito");
      }
      else QMessageBox::warning(this,"Creacion","Usuario ya existente");

      if(ban == 0) close();
    }

}
