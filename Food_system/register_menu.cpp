#include "register_menu.h"
#include "ui_register_menu.h"
#include "qdebug.h"

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

   QPixmap aux(img_name);

   qDebug() << img_name;

   this->ui->label_5_prueba->setPixmap(aux);
   this->ui->label_5_prueba->setScaledContents(true);
   //hide();
   //show();
}


void Register_Menu::on_pushButton_clicked()
{

}

void Register_Menu::on_label_5_prueba_linkActivated(const QString &link)
{

}
