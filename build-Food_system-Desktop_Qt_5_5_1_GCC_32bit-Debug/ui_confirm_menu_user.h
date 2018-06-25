/********************************************************************************
** Form generated from reading UI file 'confirm_menu_user.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRM_MENU_USER_H
#define UI_CONFIRM_MENU_USER_H

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

class Ui_Confirm_menu_user
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Confirm_menu_user)
    {
        if (Confirm_menu_user->objectName().isEmpty())
            Confirm_menu_user->setObjectName(QStringLiteral("Confirm_menu_user"));
        Confirm_menu_user->resize(314, 320);
        verticalLayout_2 = new QVBoxLayout(Confirm_menu_user);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(Confirm_menu_user);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(Confirm_menu_user);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(Confirm_menu_user);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Confirm_menu_user);

        QMetaObject::connectSlotsByName(Confirm_menu_user);
    } // setupUi

    void retranslateUi(QWidget *Confirm_menu_user)
    {
        Confirm_menu_user->setWindowTitle(QApplication::translate("Confirm_menu_user", "Form", 0));
        pushButton->setText(QApplication::translate("Confirm_menu_user", "Confirmar", 0));
        pushButton_2->setText(QApplication::translate("Confirm_menu_user", "Atras", 0));
    } // retranslateUi

};

namespace Ui {
    class Confirm_menu_user: public Ui_Confirm_menu_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRM_MENU_USER_H
