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

    hide();
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
                this->sys.login_rest(id_s,password_s);
            else
                this->sys.login_user(id_s,password_s);

    else

        QMessageBox::warning(this,"Error Autenticado","Id o Password incorrectos");


}

void Login::on_pushButton_2_clicked()
{
    close();
}
