/****************************************************************************
** Meta object code from reading C++ file 'TelescopeClient.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/TelescopeControl/src/clients/TelescopeClient.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TelescopeClient.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TelescopeClient_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TelescopeClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TelescopeClient_t qt_meta_stringdata_TelescopeClient = {
    {
QT_MOC_LITERAL(0, 0, 15) // "TelescopeClient"

    },
    "TelescopeClient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelescopeClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TelescopeClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TelescopeClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TelescopeClient.data,
      qt_meta_data_TelescopeClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TelescopeClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelescopeClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeClient.stringdata0))
        return static_cast<void*>(const_cast< TelescopeClient*>(this));
    if (!strcmp(_clname, "StelObject"))
        return static_cast< StelObject*>(const_cast< TelescopeClient*>(this));
    return QObject::qt_metacast(_clname);
}

int TelescopeClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_TelescopeTCP_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TelescopeTCP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TelescopeTCP_t qt_meta_stringdata_TelescopeTCP = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TelescopeTCP"
QT_MOC_LITERAL(1, 13, 15), // "socketConnected"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "socketFailed"
QT_MOC_LITERAL(4, 43, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(5, 72, 11) // "socketError"

    },
    "TelescopeTCP\0socketConnected\0\0"
    "socketFailed\0QAbstractSocket::SocketError\0"
    "socketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelescopeTCP[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void TelescopeTCP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TelescopeTCP *_t = static_cast<TelescopeTCP *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->socketConnected(); break;
        case 1: _t->socketFailed((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject TelescopeTCP::staticMetaObject = {
    { &TelescopeClient::staticMetaObject, qt_meta_stringdata_TelescopeTCP.data,
      qt_meta_data_TelescopeTCP,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TelescopeTCP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelescopeTCP::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeTCP.stringdata0))
        return static_cast<void*>(const_cast< TelescopeTCP*>(this));
    return TelescopeClient::qt_metacast(_clname);
}

int TelescopeTCP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TelescopeClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
