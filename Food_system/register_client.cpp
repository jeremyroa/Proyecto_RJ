#include "register_client.h"
#include "ui_register_client.h"

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
