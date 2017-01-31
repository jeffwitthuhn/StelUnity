/****************************************************************************
** Meta object code from reading C++ file 'CCD.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Oculars/src/CCD.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CCD.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CCD_t {
    QByteArrayData data[17];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CCD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CCD_t qt_meta_stringdata_CCD = {
    {
QT_MOC_LITERAL(0, 0, 3), // "CCD"
QT_MOC_LITERAL(1, 4, 0), // ""
QT_MOC_LITERAL(2, 5, 7), // "QObject"
QT_MOC_LITERAL(3, 13, 5), // "other"
QT_MOC_LITERAL(4, 19, 4), // "name"
QT_MOC_LITERAL(5, 24, 11), // "resolutionX"
QT_MOC_LITERAL(6, 36, 11), // "resolutionY"
QT_MOC_LITERAL(7, 48, 9), // "chipWidth"
QT_MOC_LITERAL(8, 58, 10), // "chipHeight"
QT_MOC_LITERAL(9, 69, 10), // "pixelWidth"
QT_MOC_LITERAL(10, 80, 11), // "pixelHeight"
QT_MOC_LITERAL(11, 92, 12), // "chipRotAngle"
QT_MOC_LITERAL(12, 105, 6), // "hasOAG"
QT_MOC_LITERAL(13, 112, 11), // "prismHeight"
QT_MOC_LITERAL(14, 124, 10), // "prismWidth"
QT_MOC_LITERAL(15, 135, 13), // "prismDistance"
QT_MOC_LITERAL(16, 149, 13) // "prismPosAngle"

    },
    "CCD\0\0QObject\0other\0name\0resolutionX\0"
    "resolutionY\0chipWidth\0chipHeight\0"
    "pixelWidth\0pixelHeight\0chipRotAngle\0"
    "hasOAG\0prismHeight\0prismWidth\0"
    "prismDistance\0prismPosAngle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CCD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      13,   17, // properties
       0,    0, // enums/sets
       1,   56, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, 0x80000000 | 2,    3,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Double, 0x00095103,
       8, QMetaType::Double, 0x00095103,
       9, QMetaType::Double, 0x00095103,
      10, QMetaType::Double, 0x00095103,
      11, QMetaType::Double, 0x00095103,
      12, QMetaType::Double, 0x00095103,
      13, QMetaType::Double, 0x00095103,
      14, QMetaType::Double, 0x00095103,
      15, QMetaType::Double, 0x00095103,
      16, QMetaType::Double, 0x00095103,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   14,    1, 0x0e /* Public */,

       0        // eod
};

void CCD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { CCD *_r = new CCD((*reinterpret_cast< const QObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CCD *_t = static_cast<CCD *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->resolutionX(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->resolutionY(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->chipWidth(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->chipHeight(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->pixelWidth(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->pixelHeight(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->chipRotAngle(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->hasOAG(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->prismHeight(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->prismWidth(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->prismDistance(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->prismPosAngle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CCD *_t = static_cast<CCD *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setResolutionX(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setResolutionY(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setChipWidth(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setChipHeight(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setPixelWidth(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setPixelHeight(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setChipRotAngle(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setHasOAG(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setPrismHeight(*reinterpret_cast< double*>(_v)); break;
        case 10: _t->setPrismWidth(*reinterpret_cast< double*>(_v)); break;
        case 11: _t->setPrismDistance(*reinterpret_cast< double*>(_v)); break;
        case 12: _t->setPrismPosAngle(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject CCD::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CCD.data,
      qt_meta_data_CCD,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CCD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CCD::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CCD.stringdata0))
        return static_cast<void*>(const_cast< CCD*>(this));
    return QObject::qt_metacast(_clname);
}

int CCD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
