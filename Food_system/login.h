#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <system.h>
#include "register_client.h"
#include <qmessagebox.h>
#include "register_client.h"
#include "register_restaurant.h"
#include "qdebug.h"


namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    System sys;


private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
