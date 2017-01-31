/****************************************************************************
** Meta object code from reading C++ file 'StarMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/modules/StarMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StarMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StarMgr_t {
    QByteArrayData data[29];
    char stringdata0[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StarMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StarMgr_t qt_meta_stringdata_StarMgr = {
    {
QT_MOC_LITERAL(0, 0, 7), // "StarMgr"
QT_MOC_LITERAL(1, 8, 26), // "starLabelsDisplayedChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "displayed"
QT_MOC_LITERAL(4, 46, 21), // "starsDisplayedChanged"
QT_MOC_LITERAL(5, 68, 19), // "labelsAmountChanged"
QT_MOC_LITERAL(6, 88, 1), // "a"
QT_MOC_LITERAL(7, 90, 13), // "setLabelColor"
QT_MOC_LITERAL(8, 104, 5), // "Vec3f"
QT_MOC_LITERAL(9, 110, 1), // "c"
QT_MOC_LITERAL(10, 112, 13), // "getLabelColor"
QT_MOC_LITERAL(11, 126, 12), // "setFlagStars"
QT_MOC_LITERAL(12, 139, 1), // "b"
QT_MOC_LITERAL(13, 141, 12), // "getFlagStars"
QT_MOC_LITERAL(14, 154, 13), // "setFlagLabels"
QT_MOC_LITERAL(15, 168, 13), // "getFlagLabels"
QT_MOC_LITERAL(16, 182, 15), // "setLabelsAmount"
QT_MOC_LITERAL(17, 198, 15), // "getLabelsAmount"
QT_MOC_LITERAL(18, 214, 11), // "setFontSize"
QT_MOC_LITERAL(19, 226, 11), // "newFontSize"
QT_MOC_LITERAL(20, 238, 15), // "setFlagSciNames"
QT_MOC_LITERAL(21, 254, 1), // "f"
QT_MOC_LITERAL(22, 256, 15), // "getFlagSciNames"
QT_MOC_LITERAL(23, 272, 10), // "updateI18n"
QT_MOC_LITERAL(24, 283, 16), // "updateSkyCulture"
QT_MOC_LITERAL(25, 300, 13), // "skyCultureDir"
QT_MOC_LITERAL(26, 314, 18), // "flagStarsDisplayed"
QT_MOC_LITERAL(27, 333, 19), // "flagLabelsDisplayed"
QT_MOC_LITERAL(28, 353, 12) // "labelsAmount"

    },
    "StarMgr\0starLabelsDisplayedChanged\0\0"
    "displayed\0starsDisplayedChanged\0"
    "labelsAmountChanged\0a\0setLabelColor\0"
    "Vec3f\0c\0getLabelColor\0setFlagStars\0b\0"
    "getFlagStars\0setFlagLabels\0getFlagLabels\0"
    "setLabelsAmount\0getLabelsAmount\0"
    "setFontSize\0newFontSize\0setFlagSciNames\0"
    "f\0getFlagSciNames\0updateI18n\0"
    "updateSkyCulture\0skyCultureDir\0"
    "flagStarsDisplayed\0flagLabelsDisplayed\0"
    "labelsAmount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StarMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       3,  130, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       5,    1,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  103,    2, 0x0a /* Public */,
      10,    0,  106,    2, 0x0a /* Public */,
      11,    1,  107,    2, 0x0a /* Public */,
      13,    0,  110,    2, 0x0a /* Public */,
      14,    1,  111,    2, 0x0a /* Public */,
      15,    0,  114,    2, 0x0a /* Public */,
      16,    1,  115,    2, 0x0a /* Public */,
      17,    0,  118,    2, 0x0a /* Public */,
      18,    1,  119,    2, 0x0a /* Public */,
      20,    1,  122,    2, 0x0a /* Public */,
      22,    0,  125,    2, 0x0a /* Public */,
      23,    0,  126,    2, 0x08 /* Private */,
      24,    1,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Float,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    0x80000000 | 8,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,

 // properties: name, type, flags
      26, QMetaType::Bool, 0x00495003,
      27, QMetaType::Bool, 0x00495003,
      28, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       1,
       0,
       2,

       0        // eod
};

void StarMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StarMgr *_t = static_cast<StarMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->starLabelsDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->starsDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->labelsAmountChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setLabelColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 4: { Vec3f _r = _t->getLabelColor();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 5: _t->setFlagStars((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { bool _r = _t->getFlagStars();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->setFlagLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: { bool _r = _t->getFlagLabels();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->setLabelsAmount((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: { double _r = _t->getLabelsAmount();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 11: _t->setFontSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->setFlagSciNames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: { bool _r = _t->getFlagSciNames();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->updateI18n(); break;
        case 15: _t->updateSkyCulture((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            typedef void (StarMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StarMgr::starLabelsDisplayedChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (StarMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StarMgr::starsDisplayedChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (StarMgr::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StarMgr::labelsAmountChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StarMgr *_t = static_cast<StarMgr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getFlagStars(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getFlagLabels(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getLabelsAmount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        StarMgr *_t = static_cast<StarMgr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlagStars(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setFlagLabels(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setLabelsAmount(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject StarMgr::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_StarMgr.data,
      qt_meta_data_StarMgr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StarMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StarMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StarMgr.stringdata0))
        return static_cast<void*>(const_cast< StarMgr*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int StarMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StarMgr::starLabelsDisplayedChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StarMgr::starsDisplayedChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StarMgr::labelsAmountChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
