#-------------------------------------------------
#
# Project created by QtCreator 2018-06-21T23:24:05
#
#-------------------------------------------------

QT       += core gui

QMAKE_CXXFLAGS+= -std=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Food_system
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    credit_card.cpp \
    food.cpp \
    food_user.cpp \
    menu.cpp \
    order.cpp \
    restaurant.cpp \
    system.cpp \
    user.cpp \
    register_client.cpp \
    register_restaurant.cpp \
    register_rest_tdc.cpp \
    register_menu.cpp

HEADERS  += login.h \
    credit_card.h \
    enumerados.h \
    food.h \
    food_user.h \
    menu.h \
    order.h \
    restaurant.h \
    system.h \
    user.h \
    register_client.h \
    register_restaurant.h \
    register_rest_tdc.h \
    register_menu.h

FORMS    += login.ui \
    register_client.ui \
    register_restaurant.ui \
    register_rest_tdc.ui \
    register_menu.ui
