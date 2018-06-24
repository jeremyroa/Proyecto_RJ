#include "login.h"
#include "ui_login.h"


Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_3_clicked()
{
    QString reply;

    register_client *temp_c;
    register_restaurant *temp_r;

    temp_c = new register_client;
    temp_r = new register_restaurant;

    reply = QMessageBox::question(this,"Tipo de Registro","","Usuario","Restaurant");

    if(!(reply == "\u0001"))
    {
       temp_c->show();
    }
    else
    {
        temp_r->show();
    }

}

void Login::on_pushButton_clicked()
{
    QString id,password;
    std::string id_s,password_s;

    id = this->ui->lineEdit_id->text();
    password = this->ui->lineEdit_2_password->text();

    id_s = id.toStdString();
    password_s = password.toStdString();

    if(!(id_s == "") and (!(password_s == "")))

            if(id_s[0] == 'J')
            {
               if(this->sys.login_rest(id_s,password_s) == 0)
               {
                 QMessageBox::information(this,"Restaurante Accesido","Se ha encontrado el restaurante");
                 this->int_rest = new Interface_rest;
                 this->int_rest->sys = this->sys;
                 this->int_rest->set_image(this->sys.r.get_image());
                 this->int_rest->show();
                 hide();

               }else QMessageBox::warning(this,"Error Login Rest","Problemas al buscar restaurant");

               qDebug() << this->sys.login_rest(id_s,password_s) << "---" ;
            }
            else
            {
                if(this->sys.login_user(id_s,password_s) == 0)
                {
                    QMessageBox::information(this,"Cliente Accesido","Se ha encontrado el cliente");
                    this->int_cl = new Interface_cl;
                    this->int_cl->sys = this->sys;
                    this->int_cl->show();
                    hide();
                }

            }

    else

        QMessageBox::warning(this,"Error Autenticado","Id o Password incorrectos");


}

void Login::on_pushButton_2_clicked()
{
    close();
}
