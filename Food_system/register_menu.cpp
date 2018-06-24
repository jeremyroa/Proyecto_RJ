#include "register_menu.h"
#include "ui_register_menu.h"
#include "qdebug.h"
#include "QMessageBox"

Register_Menu::Register_Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register_Menu)
{
    ui->setupUi(this);

    QPixmap aux("/home/raiden/Desktop/Proyecto_RJ/img_system/Graphicloads-Colorful-Long-Shadow-Lock.ico");

    //pic.load(img_name);

    //qDebug() << img_name;

    this->ui->label_5_prueba->setPixmap(aux);
    this->ui->label_5_prueba->setScaledContents(true);
}

Register_Menu::~Register_Menu()
{
    delete ui;
}

void Register_Menu::on_pushButton_4_clicked()
{
   QUrl img_url = QFileDialog::getOpenFileUrl(this,"Image");
   QString img_name = img_url.toEncoded();
   std::string aux_img = img_name.toStdString();

   aux_img = aux_img.substr(7);
   img_name = QString::fromStdString(aux_img);

   this->ui->lineEdit->setText(img_name);
   QPixmap aux(img_name);

   qDebug() << img_name;

   this->ui->label_5_prueba->setPixmap(aux);
   this->ui->label_5_prueba->setScaledContents(true);
   //hide();
   //show();
}


void Register_Menu::on_pushButton_clicked()
{
    std::pair<Food,std::string> aux_comida;
       QString category = this->ui->lineEdit_2->text();
       QString name = this->ui->lineEdit_3->text();
       float price = this->ui->doubleSpinBox->value();
       QString image = this->ui->lineEdit->text();

       this->ui->lineEdit_2->clear();
       this->ui->lineEdit_3->clear();
       this->ui->lineEdit->clear();
       this->ui->doubleSpinBox->clear();
       this->ui->label_5_prueba->clear();

       aux_comida.first.set_name(name.toStdString());
       aux_comida.first.set_image(image.toStdString());
       aux_comida.first.set_price(price);
       aux_comida.second = category.toStdString();
       this->rest_menu.menu.set_catalog_item(aux_comida);
       std::string aux = image.toStdString();
       aux = "cp "+image.toStdString()+" "+"../database/rest" + this->rest_menu.get_rif();
       //system(aux.c_str());


}

void Register_Menu::on_label_5_prueba_linkActivated(const QString &link)
{

}

void Register_Menu::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Creacion","Se Registro con Exito");
    this->close();
}
