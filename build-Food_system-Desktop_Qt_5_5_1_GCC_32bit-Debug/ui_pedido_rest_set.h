/********************************************************************************
** Form generated from reading UI file 'pedido_rest_set.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEDIDO_REST_SET_H
#define UI_PEDIDO_REST_SET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pedido_rest_set
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Pedido_rest_set)
    {
        if (Pedido_rest_set->objectName().isEmpty())
            Pedido_rest_set->setObjectName(QStringLiteral("Pedido_rest_set"));
        Pedido_rest_set->resize(345, 264);
        verticalLayout_2 = new QVBoxLayout(Pedido_rest_set);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(Pedido_rest_set);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(Pedido_rest_set);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Pedido_rest_set);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Pedido_rest_set);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Pedido_rest_set);

        QMetaObject::connectSlotsByName(Pedido_rest_set);
    } // setupUi

    void retranslateUi(QWidget *Pedido_rest_set)
    {
        Pedido_rest_set->setWindowTitle(QApplication::translate("Pedido_rest_set", "Form", 0));
        pushButton->setText(QApplication::translate("Pedido_rest_set", "Realizado", 0));
        pushButton_2->setText(QApplication::translate("Pedido_rest_set", "Enviado", 0));
        pushButton_3->setText(QApplication::translate("Pedido_rest_set", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class Pedido_rest_set: public Ui_Pedido_rest_set {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEDIDO_REST_SET_H
