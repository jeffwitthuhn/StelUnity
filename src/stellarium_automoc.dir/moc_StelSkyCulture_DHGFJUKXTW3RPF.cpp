/****************************************************************************
** Meta object code from reading C++ file 'StelSkyCultureMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelSkyCultureMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelSkyCultureMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelSkyCultureMgr_t {
    QByteArrayData data[21];
    char stringdata0[466];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelSkyCultureMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelSkyCultureMgr_t qt_meta_stringdata_StelSkyCultureMgr = {
    {
QT_MOC_LITERAL(0, 0, 17), // "StelSkyCultureMgr"
QT_MOC_LITERAL(1, 18, 24), // "defaultSkyCultureChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 2), // "id"
QT_MOC_LITERAL(4, 47, 24), // "currentSkyCultureChanged"
QT_MOC_LITERAL(5, 72, 31), // "getCurrentSkyCultureEnglishName"
QT_MOC_LITERAL(6, 104, 27), // "getCurrentSkyCultureNameI18"
QT_MOC_LITERAL(7, 132, 27), // "setCurrentSkyCultureNameI18"
QT_MOC_LITERAL(8, 160, 11), // "cultureName"
QT_MOC_LITERAL(9, 172, 22), // "getCurrentSkyCultureID"
QT_MOC_LITERAL(10, 195, 22), // "setCurrentSkyCultureID"
QT_MOC_LITERAL(11, 218, 33), // "getCurrentSkyCultureBoundarie..."
QT_MOC_LITERAL(12, 252, 35), // "getCurrentSkyCultureHtmlDescr..."
QT_MOC_LITERAL(13, 288, 22), // "getDefaultSkyCultureID"
QT_MOC_LITERAL(14, 311, 22), // "setDefaultSkyCultureID"
QT_MOC_LITERAL(15, 334, 24), // "getSkyCultureListEnglish"
QT_MOC_LITERAL(16, 359, 20), // "getSkyCultureListI18"
QT_MOC_LITERAL(17, 380, 20), // "getSkyCultureListIDs"
QT_MOC_LITERAL(18, 401, 15), // "getDirToNameMap"
QT_MOC_LITERAL(19, 417, 28), // "QMap<QString,StelSkyCulture>"
QT_MOC_LITERAL(20, 446, 19) // "currentSkyCultureID"

    },
    "StelSkyCultureMgr\0defaultSkyCultureChanged\0"
    "\0id\0currentSkyCultureChanged\0"
    "getCurrentSkyCultureEnglishName\0"
    "getCurrentSkyCultureNameI18\0"
    "setCurrentSkyCultureNameI18\0cultureName\0"
    "getCurrentSkyCultureID\0setCurrentSkyCultureID\0"
    "getCurrentSkyCultureBoundariesIdx\0"
    "getCurrentSkyCultureHtmlDescription\0"
    "getDefaultSkyCultureID\0setDefaultSkyCultureID\0"
    "getSkyCultureListEnglish\0getSkyCultureListI18\0"
    "getSkyCultureListIDs\0getDirToNameMap\0"
    "QMap<QString,StelSkyCulture>\0"
    "currentSkyCultureID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelSkyCultureMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       1,  114, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   95,    2, 0x0a /* Public */,
       6,    0,   96,    2, 0x0a /* Public */,
       7,    1,   97,    2, 0x0a /* Public */,
       9,    0,  100,    2, 0x0a /* Public */,
      10,    1,  101,    2, 0x0a /* Public */,
      11,    0,  104,    2, 0x0a /* Public */,
      12,    0,  105,    2, 0x0a /* Public */,
      13,    0,  106,    2, 0x0a /* Public */,
      14,    1,  107,    2, 0x0a /* Public */,
      15,    0,  110,    2, 0x0a /* Public */,
      16,    0,  111,    2, 0x0a /* Public */,
      17,    0,  112,    2, 0x0a /* Public */,
      18,    0,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,    8,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::QStringList,
    QMetaType::QStringList,
    0x80000000 | 19,

 // properties: name, type, flags
      20, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       1,

       0        // eod
};

void StelSkyCultureMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelSkyCultureMgr *_t = static_cast<StelSkyCultureMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->defaultSkyCultureChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->currentSkyCultureChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { QString _r = _t->getCurrentSkyCultureEnglishName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->getCurrentSkyCultureNameI18();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->setCurrentSkyCultureNameI18((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->getCurrentSkyCultureID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->setCurrentSkyCultureID((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->getCurrentSkyCultureBoundariesIdx();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->getCurrentSkyCultureHtmlDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->getDefaultSkyCultureID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->setDefaultSkyCultureID((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->getSkyCultureListEnglish();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QStringList _r = _t->getSkyCultureListI18();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 13: { QStringList _r = _t->getSkyCultureListIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 14: { QMap<QString,StelSkyCulture> _r = _t->getDirToNameMap();
            if (_a[0]) *reinterpret_cast< QMap<QString,StelSkyCulture>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelSkyCultureMgr::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyCultureMgr::defaultSkyCultureChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (StelSkyCultureMgr::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyCultureMgr::currentSkyCultureChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StelSkyCultureMgr *_t = static_cast<StelSkyCultureMgr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getCurrentSkyCultureID(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        StelSkyCultureMgr *_t = static_cast<StelSkyCultureMgr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentSkyCultureID(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject StelSkyCultureMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelSkyCultureMgr.data,
      qt_meta_data_StelSkyCultureMgr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelSkyCultureMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelSkyCultureMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelSkyCultureMgr.stringdata0))
        return static_cast<void*>(const_cast< StelSkyCultureMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int StelSkyCultureMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StelSkyCultureMgr::defaultSkyCultureChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StelSkyCultureMgr::currentSkyCultureChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
