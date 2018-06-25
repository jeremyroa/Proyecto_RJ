/********************************************************************************
** Form generated from reading UI file 'pedidos_rest.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEDIDOS_REST_H
#define UI_PEDIDOS_REST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pedidos_rest
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Pedidos_rest)
    {
        if (Pedidos_rest->objectName().isEmpty())
            Pedidos_rest->setObjectName(QStringLiteral("Pedidos_rest"));
        Pedidos_rest->resize(355, 300);
        verticalLayout = new QVBoxLayout(Pedidos_rest);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(Pedidos_rest);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(Pedidos_rest);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Pedidos_rest);

        QMetaObject::connectSlotsByName(Pedidos_rest);
    } // setupUi

    void retranslateUi(QWidget *Pedidos_rest)
    {
        Pedidos_rest->setWindowTitle(QApplication::translate("Pedidos_rest", "Form", 0));
        pushButton->setText(QApplication::translate("Pedidos_rest", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class Pedidos_rest: public Ui_Pedidos_rest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEDIDOS_REST_H
