#ifndef REGISTER_MENU_H
#define REGISTER_MENU_H

#include <QWidget>
#include "system.h"
#include "QFileDialog"
#include "QPicture"

namespace Ui {
class Register_Menu;
}

class Register_Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Register_Menu(QWidget *parent = 0);
    ~Register_Menu();
    Restaurant rest_menu;
    System sys;

private slots:
    void on_pushButton_4_clicked();

    void on_label_5_prueba_linkActivated(const QString &link);

    void on_pushButton_clicked();

private:
    Ui::Register_Menu *ui;
};

#endif // REGISTER_MENU_H
