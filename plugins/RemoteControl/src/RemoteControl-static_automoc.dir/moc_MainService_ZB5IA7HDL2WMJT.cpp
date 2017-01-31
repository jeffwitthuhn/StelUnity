/****************************************************************************
** Meta object code from reading C++ file 'MainService.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/RemoteControl/src/MainService.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainService.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainService_t {
    QByteArrayData data[21];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainService_t qt_meta_stringdata_MainService = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainService"
QT_MOC_LITERAL(1, 12, 17), // "getSelectedObject"
QT_MOC_LITERAL(2, 30, 11), // "StelObjectP"
QT_MOC_LITERAL(3, 42, 0), // ""
QT_MOC_LITERAL(4, 43, 13), // "getInfoString"
QT_MOC_LITERAL(5, 57, 11), // "focusObject"
QT_MOC_LITERAL(6, 69, 4), // "name"
QT_MOC_LITERAL(7, 74, 13), // "focusPosition"
QT_MOC_LITERAL(8, 88, 5), // "Vec3d"
QT_MOC_LITERAL(9, 94, 3), // "pos"
QT_MOC_LITERAL(10, 98, 14), // "updateMovement"
QT_MOC_LITERAL(11, 113, 1), // "x"
QT_MOC_LITERAL(12, 115, 1), // "y"
QT_MOC_LITERAL(13, 117, 8), // "xUpdated"
QT_MOC_LITERAL(14, 126, 8), // "yUpdated"
QT_MOC_LITERAL(15, 135, 6), // "setFov"
QT_MOC_LITERAL(16, 142, 3), // "fov"
QT_MOC_LITERAL(17, 146, 13), // "actionToggled"
QT_MOC_LITERAL(18, 160, 2), // "id"
QT_MOC_LITERAL(19, 163, 3), // "val"
QT_MOC_LITERAL(20, 167, 15) // "propertyChanged"

    },
    "MainService\0getSelectedObject\0StelObjectP\0"
    "\0getInfoString\0focusObject\0name\0"
    "focusPosition\0Vec3d\0pos\0updateMovement\0"
    "x\0y\0xUpdated\0yUpdated\0setFov\0fov\0"
    "actionToggled\0id\0val\0propertyChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    3, 0x08 /* Private */,
       4,    0,   55,    3, 0x08 /* Private */,
       5,    1,   56,    3, 0x08 /* Private */,
       7,    1,   59,    3, 0x08 /* Private */,
      10,    4,   62,    3, 0x08 /* Private */,
      15,    1,   71,    3, 0x08 /* Private */,
      17,    2,   74,    3, 0x08 /* Private */,
      20,    2,   79,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Bool,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   18,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   18,   19,

       0        // eod
};

void MainService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainService *_t = static_cast<MainService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { StelObjectP _r = _t->getSelectedObject();
            if (_a[0]) *reinterpret_cast< StelObjectP*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->getInfoString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->focusObject((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->focusPosition((*reinterpret_cast< const Vec3d(*)>(_a[1]))); break;
        case 4: _t->updateMovement((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 5: _t->setFov((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->actionToggled((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3d >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainService::staticMetaObject = {
    { &AbstractAPIService::staticMetaObject, qt_meta_stringdata_MainService.data,
      qt_meta_data_MainService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainService.stringdata0))
        return static_cast<void*>(const_cast< MainService*>(this));
    return AbstractAPIService::qt_metacast(_clname);
}

int MainService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAPIService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
