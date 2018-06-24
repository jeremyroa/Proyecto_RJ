#include "register_restaurant.h"
#include "ui_register_restaurant.h"
#include "qdebug.h"

register_restaurant::register_restaurant(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::register_restaurant)
{
    ui->setupUi(this);
}

register_restaurant::~register_restaurant()
{
    delete ui;
}

void register_restaurant::on_pushButton_clicked()
{
    QString name = this->ui->lineEdit->text();
    QString rif = this->ui->lineEdit_2->text();
    QString state = this->ui->lineEdit_3->text();
    QString city = this->ui->lineEdit_4->text();
    QString address = this->ui->lineEdit_5->text();
    QString email = this->ui->lineEdit_6->text();
    int resta = this->ui->comboBox_3->currentIndex();
    rest resta_res = ((rest)(resta));
    QString desc = this->ui->plainTextEdit->toPlainText();
    auto phone = this->restau.get_tlf();
    QString pass = this->ui->lineEdit_7->text();
    QString pass_conf = this->ui->lineEdit_8->text();
    QString image = this->ui->lineEdit_9->text();

    int ban = 0;

    if((!name.isEmpty()) && (!rif.isEmpty()) && (!state.isEmpty()) && (!city.isEmpty())
       && (!address.isEmpty()) && (!email.isEmpty()) && (!phone.empty()) && (!desc.isEmpty()) && (!image.isEmpty()))
    {
        if(this->restau.set_name(name.toStdString()) != 0)
        {
            QMessageBox::warning(this,"Error Nombre","No se pudo registrar el nombre.\nEl nombre no debe contener numeros");
            ban = 1;
        }

        if(this->restau.set_rif(rif.toStdString()) != 0)
        {
            QMessageBox::warning(this,"Error Rif","El rif debe contener la letra J al principio, ademas deben ser solo numeros");
            ban = 1;
        }
        if(this->restau.set_state(state.toStdString()) != 0)
        {
            QMessageBox::warning(this,"Error Estado","");
            ban = 1;
        }
        if(this->restau.set_city(city.toStdString()) != 0)
        {
            QMessageBox::warning(this,"Error Ciudad","");
            ban = 1;
        }
        if(this->restau.set_address(address.toStdString()) != 0)
        {
            QMessageBox::warning(this,"Error Direccion","");
            ban = 1;
        }
        if(this->restau.set_email(email.toStdString()) != 0)
        {
            QMessageBox::warning(this,"Error Email","Debe tener un @ o correo invalido");
            ban = 1;
        }
        if(this->restau.set_type_rest(resta_res) != 0)
        {
            QMessageBox::warning(this,"Error Tipo","");
            ban = 1;
        }
        if(this->restau.set_description(desc.toStdString()) != 0)
        {
            QMessageBox::warning(this,"Error Descripcion","");
            ban = 1;
        }
        if(pass == pass_conf){
          if(this->restau.set_password(pass.toStdString()) != 0)
          {
              QMessageBox::warning(this,"Error Password","Debe contener un numero,\nuna letra mayuscula,un caracter especial excepto espacios");
              ban = 1;
          }
        }else{
            ban = 1;
            QMessageBox::warning(this,"Error Password","Claves diferentes");
        }
        if(this->restau.set_image(image.toStdString()) != 0)
        {
            QMessageBox::warning(this,"Error Image","");
            ban = 1;
        }


        if(ban == 0)
        {
          this->tdc = new Register_rest_tdc;
          this->tdc->rest_tdc = this->restau;
          this->tdc->show();
          hide();
        }
    }
    else
    {
       QMessageBox::warning(this,"Campos","Campos Requeridos Vacios");
    }

}

void register_restaurant::on_pushButton_2_clicked()
{
    close();
}


void register_restaurant::on_pushButton_3_clicked()
{
    auto aux = this->restau.get_tlf();

    if(!aux.empty())
      qDebug() << QString::fromStdString(aux[0]);

    this->tlf = new Add_TLF;
    this->tlf->tel = &this->restau;
    this->tlf->show();

}

void register_restaurant::on_pushButton_4_clicked()
{
  QUrl img_url = QFileDialog::getOpenFileUrl(this,"Image");
  QString img_name = img_url.toEncoded();
  std::string aux_img = img_name.toStdString();

  aux_img = aux_img.substr(7);
  img_name = QString::fromStdString(aux_img);

  this->ui->lineEdit_9->setText(img_name);
  QPixmap aux(img_name);

  this->ui->label_14->setPixmap(aux);
  this->ui->label_14->setScaledContents(true);

  this->ui->label_15->setPixmap(aux);
  this->ui->label_15->setScaledContents(true);
}
