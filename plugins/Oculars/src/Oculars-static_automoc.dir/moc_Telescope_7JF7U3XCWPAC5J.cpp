/****************************************************************************
** Meta object code from reading C++ file 'Telescope.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Oculars/src/Telescope.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Telescope.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Telescope_t {
    QByteArrayData data[10];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Telescope_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Telescope_t qt_meta_stringdata_Telescope = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Telescope"
QT_MOC_LITERAL(1, 10, 0), // ""
QT_MOC_LITERAL(2, 11, 7), // "QObject"
QT_MOC_LITERAL(3, 19, 5), // "other"
QT_MOC_LITERAL(4, 25, 4), // "name"
QT_MOC_LITERAL(5, 30, 8), // "diameter"
QT_MOC_LITERAL(6, 39, 11), // "focalLength"
QT_MOC_LITERAL(7, 51, 8), // "hFlipped"
QT_MOC_LITERAL(8, 60, 8), // "vFlipped"
QT_MOC_LITERAL(9, 69, 10) // "equatorial"

    },
    "Telescope\0\0QObject\0other\0name\0diameter\0"
    "focalLength\0hFlipped\0vFlipped\0equatorial"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Telescope[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   17, // properties
       0,    0, // enums/sets
       1,   35, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, 0x80000000 | 2,    3,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095103,
       5, QMetaType::Double, 0x00095103,
       6, QMetaType::Double, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,
       9, QMetaType::Bool, 0x00095103,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   14,    1, 0x0e /* Public */,

       0        // eod
};

void Telescope::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Telescope *_r = new Telescope((*reinterpret_cast< const QObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Telescope *_t = static_cast<Telescope *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->diameter(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->focalLength(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isHFlipped(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isVFlipped(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isEquatorial(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Telescope *_t = static_cast<Telescope *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDiameter(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setFocalLength(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setHFlipped(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setVFlipped(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setEquatorial(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject Telescope::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Telescope.data,
      qt_meta_data_Telescope,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Telescope::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Telescope::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Telescope.stringdata0))
        return static_cast<void*>(const_cast< Telescope*>(this));
    return QObject::qt_metacast(_clname);
}

int Telescope::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
