#ifndef REGISTER_CLIENT_H
#define REGISTER_CLIENT_H

#include <QWidget>
#include "login.h"

namespace Ui {
class register_client;
}

class register_client : public QWidget
{
    Q_OBJECT

public:
    explicit register_client(QWidget *parent = 0);
    ~register_client();

private:
    Ui::register_client *ui;
};

#endif // REGISTER_CLIENT_H
