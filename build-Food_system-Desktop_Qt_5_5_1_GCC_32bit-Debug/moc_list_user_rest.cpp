/****************************************************************************
** Meta object code from reading C++ file 'list_user_rest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Food_system/list_user_rest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'list_user_rest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_List_user_rest_t {
    QByteArrayData data[6];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_List_user_rest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_List_user_rest_t qt_meta_stringdata_List_user_rest = {
    {
QT_MOC_LITERAL(0, 0, 14), // "List_user_rest"
QT_MOC_LITERAL(1, 15, 28), // "on_commandLinkButton_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 30), // "on_commandLinkButton_2_clicked"
QT_MOC_LITERAL(4, 76, 30), // "on_commandLinkButton_3_clicked"
QT_MOC_LITERAL(5, 107, 30) // "on_commandLinkButton_5_clicked"

    },
    "List_user_rest\0on_commandLinkButton_clicked\0"
    "\0on_commandLinkButton_2_clicked\0"
    "on_commandLinkButton_3_clicked\0"
    "on_commandLinkButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_List_user_rest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void List_user_rest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        List_user_rest *_t = static_cast<List_user_rest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_commandLinkButton_clicked(); break;
        case 1: _t->on_commandLinkButton_2_clicked(); break;
        case 2: _t->on_commandLinkButton_3_clicked(); break;
        case 3: _t->on_commandLinkButton_5_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject List_user_rest::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_List_user_rest.data,
      qt_meta_data_List_user_rest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *List_user_rest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *List_user_rest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_List_user_rest.stringdata0))
        return static_cast<void*>(const_cast< List_user_rest*>(this));
    return QWidget::qt_metacast(_clname);
}

int List_user_rest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
