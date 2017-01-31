/****************************************************************************
** Meta object code from reading C++ file 'ObjectService.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/RemoteControl/src/ObjectService.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectService.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ObjectService_t {
    QByteArrayData data[10];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectService_t qt_meta_stringdata_ObjectService = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ObjectService"
QT_MOC_LITERAL(1, 14, 13), // "performSearch"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "text"
QT_MOC_LITERAL(4, 34, 15), // "substituteGreek"
QT_MOC_LITERAL(5, 50, 10), // "findObject"
QT_MOC_LITERAL(6, 61, 11), // "StelObjectP"
QT_MOC_LITERAL(7, 73, 4), // "name"
QT_MOC_LITERAL(8, 78, 13), // "getInfoString"
QT_MOC_LITERAL(9, 92, 3) // "obj"

    },
    "ObjectService\0performSearch\0\0text\0"
    "substituteGreek\0findObject\0StelObjectP\0"
    "name\0getInfoString\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectService[] = {

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
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::QStringList, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    0x80000000 | 6, QMetaType::QString,    7,
    QMetaType::QString, 0x80000000 | 6,    9,

       0        // eod
};

void ObjectService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjectService *_t = static_cast<ObjectService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QStringList _r = _t->performSearch((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->substituteGreek((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { StelObjectP _r = _t->findObject((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< StelObjectP*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->getInfoString((*reinterpret_cast< const StelObjectP(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StelObjectP >(); break;
            }
            break;
        }
    }
}

const QMetaObject ObjectService::staticMetaObject = {
    { &AbstractAPIService::staticMetaObject, qt_meta_stringdata_ObjectService.data,
      qt_meta_data_ObjectService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ObjectService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectService.stringdata0))
        return static_cast<void*>(const_cast< ObjectService*>(this));
    return AbstractAPIService::qt_metacast(_clname);
}

int ObjectService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAPIService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
