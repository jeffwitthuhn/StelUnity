/****************************************************************************
** Meta object code from reading C++ file 'Lens.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Oculars/src/Lens.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Lens.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Lens_t {
    QByteArrayData data[6];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Lens_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Lens_t qt_meta_stringdata_Lens = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Lens"
QT_MOC_LITERAL(1, 5, 0), // ""
QT_MOC_LITERAL(2, 6, 7), // "QObject"
QT_MOC_LITERAL(3, 14, 5), // "other"
QT_MOC_LITERAL(4, 20, 4), // "name"
QT_MOC_LITERAL(5, 25, 9) // "multipler"

    },
    "Lens\0\0QObject\0other\0name\0multipler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Lens[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   17, // properties
       0,    0, // enums/sets
       1,   23, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, 0x80000000 | 2,    3,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095103,
       5, QMetaType::Double, 0x00095103,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   14,    1, 0x0e /* Public */,

       0        // eod
};

void Lens::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Lens *_r = new Lens((*reinterpret_cast< const QObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Lens *_t = static_cast<Lens *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getMultipler(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Lens *_t = static_cast<Lens *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setMultipler(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject Lens::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Lens.data,
      qt_meta_data_Lens,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Lens::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lens::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Lens.stringdata0))
        return static_cast<void*>(const_cast< Lens*>(this));
    return QObject::qt_metacast(_clname);
}

int Lens::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
