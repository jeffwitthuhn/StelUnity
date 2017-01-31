/****************************************************************************
** Meta object code from reading C++ file 'Ocular.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Oculars/src/Ocular.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Ocular.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Ocular_t {
    QByteArrayData data[11];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ocular_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ocular_t qt_meta_stringdata_Ocular = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Ocular"
QT_MOC_LITERAL(1, 7, 0), // ""
QT_MOC_LITERAL(2, 8, 7), // "QObject"
QT_MOC_LITERAL(3, 16, 5), // "other"
QT_MOC_LITERAL(4, 22, 10), // "binoculars"
QT_MOC_LITERAL(5, 33, 18), // "permanentCrosshair"
QT_MOC_LITERAL(6, 52, 12), // "appearentFOV"
QT_MOC_LITERAL(7, 65, 20), // "effectiveFocalLength"
QT_MOC_LITERAL(8, 86, 9), // "fieldStop"
QT_MOC_LITERAL(9, 96, 4), // "name"
QT_MOC_LITERAL(10, 101, 11) // "reticlePath"

    },
    "Ocular\0\0QObject\0other\0binoculars\0"
    "permanentCrosshair\0appearentFOV\0"
    "effectiveFocalLength\0fieldStop\0name\0"
    "reticlePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ocular[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   17, // properties
       0,    0, // enums/sets
       1,   38, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, 0x80000000 | 2,    3,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00095103,
       5, QMetaType::Bool, 0x00095103,
       6, QMetaType::Double, 0x00095103,
       7, QMetaType::Double, 0x00095103,
       8, QMetaType::Double, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QString, 0x00095103,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   14,    1, 0x0e /* Public */,

       0        // eod
};

void Ocular::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Ocular *_r = new Ocular((*reinterpret_cast< const QObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Ocular *_t = static_cast<Ocular *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isBinoculars(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasPermanentCrosshair(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->appearentFOV(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->effectiveFocalLength(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->fieldStop(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->reticlePath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Ocular *_t = static_cast<Ocular *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBinoculars(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setPermanentCrosshair(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAppearentFOV(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setEffectiveFocalLength(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setFieldStop(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setReticlePath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject Ocular::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Ocular.data,
      qt_meta_data_Ocular,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Ocular::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ocular::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Ocular.stringdata0))
        return static_cast<void*>(const_cast< Ocular*>(this));
    return QObject::qt_metacast(_clname);
}

int Ocular::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
