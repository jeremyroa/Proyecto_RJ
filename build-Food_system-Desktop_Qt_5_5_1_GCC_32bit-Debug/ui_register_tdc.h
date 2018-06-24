/********************************************************************************
** Form generated from reading UI file 'register_tdc.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_TDC_H
#define UI_REGISTER_TDC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register_tdc
{
public:
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Register_tdc)
    {
        if (Register_tdc->objectName().isEmpty())
            Register_tdc->setObjectName(QStringLiteral("Register_tdc"));
        Register_tdc->resize(240, 320);
        label = new QLabel(Register_tdc);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 59, 17));
        lineEdit = new QLineEdit(Register_tdc);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 80, 113, 27));

        retranslateUi(Register_tdc);

        QMetaObject::connectSlotsByName(Register_tdc);
    } // setupUi

    void retranslateUi(QWidget *Register_tdc)
    {
        Register_tdc->setWindowTitle(QApplication::translate("Register_tdc", "Form", 0));
        label->setText(QApplication::translate("Register_tdc", "TextLabel", 0));
        lineEdit->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class Register_tdc: public Ui_Register_tdc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_TDC_H
