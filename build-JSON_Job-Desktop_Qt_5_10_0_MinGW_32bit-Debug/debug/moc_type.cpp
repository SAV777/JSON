/****************************************************************************
** Meta object code from reading C++ file 'type.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../JSON_Job/type.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'type.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Type_t {
    QByteArrayData data[6];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Type_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Type_t qt_meta_stringdata_Type = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Type"
QT_MOC_LITERAL(1, 5, 9), // "ClassType"
QT_MOC_LITERAL(2, 15, 4), // "Info"
QT_MOC_LITERAL(3, 20, 5), // "Debug"
QT_MOC_LITERAL(4, 26, 7), // "Warning"
QT_MOC_LITERAL(5, 34, 5) // "Error"

    },
    "Type\0ClassType\0Info\0Debug\0Warning\0"
    "Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Type[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    4,   18,

 // enum data: key, value
       2, uint(Type::Info),
       3, uint(Type::Debug),
       4, uint(Type::Warning),
       5, uint(Type::Error),

       0        // eod
};

const QMetaObject Type::staticMetaObject = {
    { nullptr, qt_meta_stringdata_Type.data,
      qt_meta_data_Type,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
