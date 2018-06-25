/********************************************************************************
** Form generated from reading UI file 'interface_rest.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_REST_H
#define UI_INTERFACE_REST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interface_rest
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Interface_rest)
    {
        if (Interface_rest->objectName().isEmpty())
            Interface_rest->setObjectName(QStringLiteral("Interface_rest"));
        Interface_rest->resize(240, 320);
        Interface_rest->setMaximumSize(QSize(300, 350));
        horizontalLayout_3 = new QHBoxLayout(Interface_rest);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(Interface_rest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(60, 60));
        label_2->setMaximumSize(QSize(60, 60));
        label_2->setScaledContents(true);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(Interface_rest);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        commandLinkButton = new QCommandLinkButton(Interface_rest);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QIcon icon;
        icon.addFile(QStringLiteral("../img_system/kisspng-chroma-key-check-mark-tilde-symbol-green-tick-5ac32c3e1d4770.2128125115227402861199.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon);
        commandLinkButton->setIconSize(QSize(40, 40));

        verticalLayout_2->addWidget(commandLinkButton);

        commandLinkButton_2 = new QCommandLinkButton(Interface_rest);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../img_system/check-list2.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton_2->setIcon(icon1);
        commandLinkButton_2->setIconSize(QSize(40, 40));

        verticalLayout_2->addWidget(commandLinkButton_2);

        commandLinkButton_3 = new QCommandLinkButton(Interface_rest);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../img_system/Twemoji_270f.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton_3->setIcon(icon2);
        commandLinkButton_3->setIconSize(QSize(40, 40));

        verticalLayout_2->addWidget(commandLinkButton_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(Interface_rest);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        retranslateUi(Interface_rest);

        QMetaObject::connectSlotsByName(Interface_rest);
    } // setupUi

    void retranslateUi(QWidget *Interface_rest)
    {
        Interface_rest->setWindowTitle(QApplication::translate("Interface_rest", "Form", 0));
        label_2->setText(QString());
        label->setText(QApplication::translate("Interface_rest", "Restaurante", 0));
        commandLinkButton->setText(QApplication::translate("Interface_rest", "       Cambiar Pedido", 0));
        commandLinkButton_2->setText(QApplication::translate("Interface_rest", "             Ver Pedidos", 0));
        commandLinkButton_3->setText(QApplication::translate("Interface_rest", "           Editar Menu", 0));
        pushButton->setText(QApplication::translate("Interface_rest", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class Interface_rest: public Ui_Interface_rest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_REST_H
