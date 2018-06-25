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
    register_menu.cpp \
    add_tlf.cpp \
    interface_cl.cpp \
    interface_rest.cpp \
    list_user_rest.cpp \
    user_menu.cpp \
    confirm_menu_user.cpp \
    register_client_tdc.cpp

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
    register_menu.h \
    add_tlf.h \
    interface_cl.h \
    interface_rest.h \
    list_user_rest.h \
    user_menu.h \
    confirm_menu_user.h \
    register_client_tdc.h

FORMS    += login.ui \
    register_client.ui \
    register_restaurant.ui \
    register_rest_tdc.ui \
    register_menu.ui \
    add_tlf.ui \
    interface_cl.ui \
    interface_rest.ui \
    list_user_rest.ui \
    user_menu.ui \
    confirm_menu_user.ui \
    register_client_tdc.ui
