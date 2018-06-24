/********************************************************************************
** Form generated from reading UI file 'register_rest_tdc.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_REST_TDC_H
#define UI_REGISTER_REST_TDC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register_rest_tdc
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;

    void setupUi(QWidget *Register_rest_tdc)
    {
        if (Register_rest_tdc->objectName().isEmpty())
            Register_rest_tdc->setObjectName(QStringLiteral("Register_rest_tdc"));
        Register_rest_tdc->resize(223, 296);
        layoutWidget = new QWidget(Register_rest_tdc);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 204, 273));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEdit);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_3->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEdit_3);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(12);

        horizontalLayout_2->addWidget(spinBox);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMinimum(18);
        spinBox_2->setMaximum(32);

        horizontalLayout_2->addWidget(spinBox_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_6->setClearButtonEnabled(true);

        verticalLayout_4->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_7->setClearButtonEnabled(true);

        verticalLayout_4->addWidget(lineEdit_7);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(Register_rest_tdc);

        QMetaObject::connectSlotsByName(Register_rest_tdc);
    } // setupUi

    void retranslateUi(QWidget *Register_rest_tdc)
    {
        Register_rest_tdc->setWindowTitle(QApplication::translate("Register_rest_tdc", "Form", 0));
        label_6->setText(QApplication::translate("Register_rest_tdc", "Tarjeta de Credito", 0));
        label->setText(QApplication::translate("Register_rest_tdc", "No Card", 0));
        label_2->setText(QApplication::translate("Register_rest_tdc", "Tipo", 0));
        label_3->setText(QApplication::translate("Register_rest_tdc", "CVC", 0));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Register_rest_tdc", "Visa", 0)
         << QApplication::translate("Register_rest_tdc", "Mastercard", 0)
         << QApplication::translate("Register_rest_tdc", "American Express", 0)
        );
        lineEdit_3->setInputMask(QString());
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QString());
        label_4->setText(QApplication::translate("Register_rest_tdc", "Nombre", 0));
        label_5->setText(QApplication::translate("Register_rest_tdc", "Cedula", 0));
        lineEdit_6->setInputMask(QString());
        lineEdit_6->setText(QString());
        lineEdit_6->setPlaceholderText(QString());
        lineEdit_7->setInputMask(QString());
        lineEdit_7->setText(QString());
        lineEdit_7->setPlaceholderText(QString());
        pushButton->setText(QApplication::translate("Register_rest_tdc", "Registrar", 0));
    } // retranslateUi

};

namespace Ui {
    class Register_rest_tdc: public Ui_Register_rest_tdc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_REST_TDC_H
