/********************************************************************************
** Form generated from reading UI file 'register_client.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_CLIENT_H
#define UI_REGISTER_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register_client
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_10;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_correo;
    QLineEdit *lineEdit_nombre;
    QLineEdit *lineEdit_apellido;
    QLineEdit *lineEdit_cedula;
    QLineEdit *lineEdit_telefono;
    QLineEdit *lineEdit_estado;
    QLineEdit *lineEdit_ciudad;
    QComboBox *comboBox_sexo;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_confirm;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_3;
    QComboBox *comboBox_2;
    QComboBox *comboBox_4;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QWidget *register_client)
    {
        if (register_client->objectName().isEmpty())
            register_client->setObjectName(QStringLiteral("register_client"));
        register_client->resize(267, 467);
        register_client->setMaximumSize(QSize(300, 500));
        horizontalLayout_4 = new QHBoxLayout(register_client);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_12 = new QLabel(register_client);
        label_12->setObjectName(QStringLiteral("label_12"));
        QFont font;
        font.setFamily(QStringLiteral("Lohit Bengali"));
        font.setPointSize(13);
        label_12->setFont(font);

        horizontalLayout_3->addWidget(label_12);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_10 = new QLabel(register_client);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_10);

        label = new QLabel(register_client);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(register_client);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(register_client);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(register_client);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        label_7 = new QLabel(register_client);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_7);

        label_6 = new QLabel(register_client);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        label_5 = new QLabel(register_client);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        label_8 = new QLabel(register_client);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(register_client);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_9);

        label_11 = new QLabel(register_client);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_11);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_correo = new QLineEdit(register_client);
        lineEdit_correo->setObjectName(QStringLiteral("lineEdit_correo"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_correo->sizePolicy().hasHeightForWidth());
        lineEdit_correo->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit_correo);

        lineEdit_nombre = new QLineEdit(register_client);
        lineEdit_nombre->setObjectName(QStringLiteral("lineEdit_nombre"));
        sizePolicy.setHeightForWidth(lineEdit_nombre->sizePolicy().hasHeightForWidth());
        lineEdit_nombre->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit_nombre);

        lineEdit_apellido = new QLineEdit(register_client);
        lineEdit_apellido->setObjectName(QStringLiteral("lineEdit_apellido"));
        sizePolicy.setHeightForWidth(lineEdit_apellido->sizePolicy().hasHeightForWidth());
        lineEdit_apellido->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit_apellido);

        lineEdit_cedula = new QLineEdit(register_client);
        lineEdit_cedula->setObjectName(QStringLiteral("lineEdit_cedula"));
        sizePolicy.setHeightForWidth(lineEdit_cedula->sizePolicy().hasHeightForWidth());
        lineEdit_cedula->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit_cedula);

        lineEdit_telefono = new QLineEdit(register_client);
        lineEdit_telefono->setObjectName(QStringLiteral("lineEdit_telefono"));
        sizePolicy.setHeightForWidth(lineEdit_telefono->sizePolicy().hasHeightForWidth());
        lineEdit_telefono->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit_telefono);

        lineEdit_estado = new QLineEdit(register_client);
        lineEdit_estado->setObjectName(QStringLiteral("lineEdit_estado"));
        sizePolicy.setHeightForWidth(lineEdit_estado->sizePolicy().hasHeightForWidth());
        lineEdit_estado->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit_estado);

        lineEdit_ciudad = new QLineEdit(register_client);
        lineEdit_ciudad->setObjectName(QStringLiteral("lineEdit_ciudad"));
        sizePolicy.setHeightForWidth(lineEdit_ciudad->sizePolicy().hasHeightForWidth());
        lineEdit_ciudad->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit_ciudad);

        comboBox_sexo = new QComboBox(register_client);
        comboBox_sexo->setObjectName(QStringLiteral("comboBox_sexo"));
        sizePolicy.setHeightForWidth(comboBox_sexo->sizePolicy().hasHeightForWidth());
        comboBox_sexo->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(comboBox_sexo);

        lineEdit_password = new QLineEdit(register_client);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        sizePolicy.setHeightForWidth(lineEdit_password->sizePolicy().hasHeightForWidth());
        lineEdit_password->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit_password);

        lineEdit_confirm = new QLineEdit(register_client);
        lineEdit_confirm->setObjectName(QStringLiteral("lineEdit_confirm"));
        sizePolicy.setHeightForWidth(lineEdit_confirm->sizePolicy().hasHeightForWidth());
        lineEdit_confirm->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit_confirm);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBox_3 = new QComboBox(register_client);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        sizePolicy.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy);
        comboBox_3->setMinimumSize(QSize(50, 0));
        comboBox_3->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(comboBox_3);

        comboBox_2 = new QComboBox(register_client);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);
        comboBox_2->setMinimumSize(QSize(50, 0));
        comboBox_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(comboBox_2);

        comboBox_4 = new QComboBox(register_client);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        sizePolicy.setHeightForWidth(comboBox_4->sizePolicy().hasHeightForWidth());
        comboBox_4->setSizePolicy(sizePolicy);
        comboBox_4->setMinimumSize(QSize(50, 0));
        comboBox_4->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(comboBox_4);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(register_client);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(register_client);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_4);


        retranslateUi(register_client);

        QMetaObject::connectSlotsByName(register_client);
    } // setupUi

    void retranslateUi(QWidget *register_client)
    {
        register_client->setWindowTitle(QApplication::translate("register_client", "Form", 0));
        label_12->setText(QApplication::translate("register_client", "Cliente", 0));
        label_10->setText(QApplication::translate("register_client", "Correo", 0));
        label->setText(QApplication::translate("register_client", "Nombre", 0));
        label_2->setText(QApplication::translate("register_client", "Apellido", 0));
        label_3->setText(QApplication::translate("register_client", "Cedula", 0));
        label_4->setText(QApplication::translate("register_client", "Telefono", 0));
        label_7->setText(QApplication::translate("register_client", "Estado", 0));
        label_6->setText(QApplication::translate("register_client", "Ciudad", 0));
        label_5->setText(QApplication::translate("register_client", "Sexo", 0));
        label_8->setText(QApplication::translate("register_client", "Password", 0));
        label_9->setText(QApplication::translate("register_client", "Confirmar", 0));
        label_11->setText(QApplication::translate("register_client", "Comida\n"
" Favorita", 0));
        comboBox_sexo->clear();
        comboBox_sexo->insertItems(0, QStringList()
         << QApplication::translate("register_client", "Masculino", 0)
         << QApplication::translate("register_client", "Femenino", 0)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("register_client", "Comida Rapida", 0)
         << QApplication::translate("register_client", "Italiano", 0)
         << QApplication::translate("register_client", "Arabe", 0)
         << QApplication::translate("register_client", "Francesa", 0)
         << QApplication::translate("register_client", "Espa\303\261ola", 0)
         << QApplication::translate("register_client", "China", 0)
         << QApplication::translate("register_client", "Gourmet", 0)
         << QApplication::translate("register_client", "Grill", 0)
         << QApplication::translate("register_client", "Japonesa", 0)
         << QApplication::translate("register_client", "Venezolana", 0)
         << QApplication::translate("register_client", "Latina", 0)
         << QApplication::translate("register_client", "Mexicana", 0)
         << QApplication::translate("register_client", "Postres", 0)
         << QString()
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("register_client", "Comida Rapida", 0)
         << QApplication::translate("register_client", "Italiano", 0)
         << QApplication::translate("register_client", "Arabe", 0)
         << QApplication::translate("register_client", "Francesa", 0)
         << QApplication::translate("register_client", "Espa\303\261ola", 0)
         << QApplication::translate("register_client", "China", 0)
         << QApplication::translate("register_client", "Gourmet", 0)
         << QApplication::translate("register_client", "Grill", 0)
         << QApplication::translate("register_client", "Japonesa", 0)
         << QApplication::translate("register_client", "Venezolana", 0)
         << QApplication::translate("register_client", "Latina", 0)
         << QApplication::translate("register_client", "Mexicana", 0)
         << QApplication::translate("register_client", "Postres", 0)
         << QString()
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("register_client", "Comida Rapida", 0)
         << QApplication::translate("register_client", "Italiano", 0)
         << QApplication::translate("register_client", "Arabe", 0)
         << QApplication::translate("register_client", "Francesa", 0)
         << QApplication::translate("register_client", "Espa\303\261ola", 0)
         << QApplication::translate("register_client", "China", 0)
         << QApplication::translate("register_client", "Gourmet", 0)
         << QApplication::translate("register_client", "Grill", 0)
         << QApplication::translate("register_client", "Japonesa", 0)
         << QApplication::translate("register_client", "Venezolana", 0)
         << QApplication::translate("register_client", "Latina", 0)
         << QApplication::translate("register_client", "Mexicana", 0)
         << QApplication::translate("register_client", "Postres", 0)
         << QString()
        );
        pushButton->setText(QApplication::translate("register_client", "Registrar", 0));
        pushButton_2->setText(QApplication::translate("register_client", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class register_client: public Ui_register_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_CLIENT_H
