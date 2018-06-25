/********************************************************************************
** Form generated from reading UI file 'list_user_rest.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIST_USER_REST_H
#define UI_LIST_USER_REST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_List_user_rest
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_5;
    QCommandLinkButton *commandLinkButton_5;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QCommandLinkButton *commandLinkButton_4;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *List_user_rest)
    {
        if (List_user_rest->objectName().isEmpty())
            List_user_rest->setObjectName(QStringLiteral("List_user_rest"));
        List_user_rest->resize(295, 194);
        verticalLayout_4 = new QVBoxLayout(List_user_rest);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_5 = new QSpacerItem(10, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        commandLinkButton_5 = new QCommandLinkButton(List_user_rest);
        commandLinkButton_5->setObjectName(QStringLiteral("commandLinkButton_5"));
        commandLinkButton_5->setEnabled(false);
        commandLinkButton_5->setMinimumSize(QSize(10, 10));
        commandLinkButton_5->setMaximumSize(QSize(30, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral("../img_system/left-pointing-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton_5->setIcon(icon);

        verticalLayout_3->addWidget(commandLinkButton_5);

        verticalSpacer_6 = new QSpacerItem(30, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        commandLinkButton = new QCommandLinkButton(List_user_rest);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));

        verticalLayout->addWidget(commandLinkButton);

        commandLinkButton_2 = new QCommandLinkButton(List_user_rest);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));

        verticalLayout->addWidget(commandLinkButton_2);

        commandLinkButton_3 = new QCommandLinkButton(List_user_rest);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));

        verticalLayout->addWidget(commandLinkButton_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(10, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        commandLinkButton_4 = new QCommandLinkButton(List_user_rest);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));
        commandLinkButton_4->setEnabled(false);
        commandLinkButton_4->setMinimumSize(QSize(10, 10));
        commandLinkButton_4->setMaximumSize(QSize(30, 16777215));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../img_system/right-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton_4->setIcon(icon1);

        verticalLayout_2->addWidget(commandLinkButton_4);

        verticalSpacer_4 = new QSpacerItem(30, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(List_user_rest);

        QMetaObject::connectSlotsByName(List_user_rest);
    } // setupUi

    void retranslateUi(QWidget *List_user_rest)
    {
        List_user_rest->setWindowTitle(QApplication::translate("List_user_rest", "Form", 0));
        commandLinkButton_5->setText(QString());
        commandLinkButton->setText(QApplication::translate("List_user_rest", "CommandLinkButton", 0));
        commandLinkButton_2->setText(QApplication::translate("List_user_rest", "CommandLinkButton", 0));
        commandLinkButton_3->setText(QApplication::translate("List_user_rest", "CommandLinkButton", 0));
        commandLinkButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class List_user_rest: public Ui_List_user_rest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST_USER_REST_H
