/****************************************************************************
** Meta object code from reading C++ file 'RequestHandler.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/RemoteControl/src/RequestHandler.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RequestHandler.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RequestHandler_t {
    QByteArrayData data[8];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RequestHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RequestHandler_t qt_meta_stringdata_RequestHandler = {
    {
QT_MOC_LITERAL(0, 0, 14), // "RequestHandler"
QT_MOC_LITERAL(1, 15, 14), // "setUsePassword"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 1), // "v"
QT_MOC_LITERAL(4, 33, 14), // "getUsePassword"
QT_MOC_LITERAL(5, 48, 11), // "setPassword"
QT_MOC_LITERAL(6, 60, 2), // "pw"
QT_MOC_LITERAL(7, 63, 16) // "refreshTemplates"

    },
    "RequestHandler\0setUsePassword\0\0v\0"
    "getUsePassword\0setPassword\0pw\0"
    "refreshTemplates"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RequestHandler[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       4,    0,   37,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       7,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void RequestHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RequestHandler *_t = static_cast<RequestHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setUsePassword((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->getUsePassword();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->setPassword((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->refreshTemplates(); break;
        default: ;
        }
    }
}

const QMetaObject RequestHandler::staticMetaObject = {
    { &HttpRequestHandler::staticMetaObject, qt_meta_stringdata_RequestHandler.data,
      qt_meta_data_RequestHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RequestHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RequestHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RequestHandler.stringdata0))
        return static_cast<void*>(const_cast< RequestHandler*>(this));
    return HttpRequestHandler::qt_metacast(_clname);
}

int RequestHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpRequestHandler::qt_metacall(_c, _id, _a);
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
