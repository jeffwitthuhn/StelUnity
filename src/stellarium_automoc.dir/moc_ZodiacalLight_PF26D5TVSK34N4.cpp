/****************************************************************************
** Meta object code from reading C++ file 'ZodiacalLight.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/modules/ZodiacalLight.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZodiacalLight.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ZodiacalLight_t {
    QByteArrayData data[17];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZodiacalLight_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZodiacalLight_t qt_meta_stringdata_ZodiacalLight = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ZodiacalLight"
QT_MOC_LITERAL(1, 14, 29), // "zodiacalLightDisplayedChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 9), // "displayed"
QT_MOC_LITERAL(4, 55, 16), // "intensityChanged"
QT_MOC_LITERAL(5, 72, 9), // "intensity"
QT_MOC_LITERAL(6, 82, 12), // "getIntensity"
QT_MOC_LITERAL(7, 95, 12), // "setIntensity"
QT_MOC_LITERAL(8, 108, 10), // "aintensity"
QT_MOC_LITERAL(9, 119, 8), // "getColor"
QT_MOC_LITERAL(10, 128, 5), // "Vec3f"
QT_MOC_LITERAL(11, 134, 8), // "setColor"
QT_MOC_LITERAL(12, 143, 1), // "c"
QT_MOC_LITERAL(13, 145, 11), // "setFlagShow"
QT_MOC_LITERAL(14, 157, 1), // "b"
QT_MOC_LITERAL(15, 159, 11), // "getFlagShow"
QT_MOC_LITERAL(16, 171, 26) // "flagZodiacalLightDisplayed"

    },
    "ZodiacalLight\0zodiacalLightDisplayedChanged\0"
    "\0displayed\0intensityChanged\0intensity\0"
    "getIntensity\0setIntensity\0aintensity\0"
    "getColor\0Vec3f\0setColor\0c\0setFlagShow\0"
    "b\0getFlagShow\0flagZodiacalLightDisplayed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZodiacalLight[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   60,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x0a /* Public */,
       9,    0,   64,    2, 0x0a /* Public */,
      11,    1,   65,    2, 0x0a /* Public */,
      13,    1,   68,    2, 0x0a /* Public */,
      15,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    5,

 // slots: parameters
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,    8,
    0x80000000 | 10,
    QMetaType::Void, 0x80000000 | 10,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Bool,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00495003,
       5, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ZodiacalLight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZodiacalLight *_t = static_cast<ZodiacalLight *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zodiacalLightDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->intensityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: { double _r = _t->getIntensity();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 3: _t->setIntensity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: { Vec3f _r = _t->getColor();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 5: _t->setColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 6: _t->setFlagShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->getFlagShow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ZodiacalLight::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZodiacalLight::zodiacalLightDisplayedChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ZodiacalLight::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZodiacalLight::intensityChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ZodiacalLight *_t = static_cast<ZodiacalLight *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getFlagShow(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getIntensity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ZodiacalLight *_t = static_cast<ZodiacalLight *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlagShow(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setIntensity(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ZodiacalLight::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_ZodiacalLight.data,
      qt_meta_data_ZodiacalLight,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ZodiacalLight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZodiacalLight::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ZodiacalLight.stringdata0))
        return static_cast<void*>(const_cast< ZodiacalLight*>(this));
    return StelModule::qt_metacast(_clname);
}

int ZodiacalLight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void ZodiacalLight::zodiacalLightDisplayedChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ZodiacalLight::intensityChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
