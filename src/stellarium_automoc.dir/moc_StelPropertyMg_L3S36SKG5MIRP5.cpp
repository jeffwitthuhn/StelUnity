/****************************************************************************
** Meta object code from reading C++ file 'StelPropertyMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelPropertyMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelPropertyMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelPropertyProxy_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelPropertyProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelPropertyProxy_t qt_meta_stringdata_StelPropertyProxy = {
    {
QT_MOC_LITERAL(0, 0, 17), // "StelPropertyProxy"
QT_MOC_LITERAL(1, 18, 17), // "onPropertyChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5) // "value"

    },
    "StelPropertyProxy\0onPropertyChanged\0"
    "\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelPropertyProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    3,

       0        // eod
};

void StelPropertyProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelPropertyProxy *_t = static_cast<StelPropertyProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onPropertyChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject StelPropertyProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelPropertyProxy.data,
      qt_meta_data_StelPropertyProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelPropertyProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelPropertyProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelPropertyProxy.stringdata0))
        return static_cast<void*>(const_cast< StelPropertyProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int StelPropertyProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_StelPropertyIntProxy_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelPropertyIntProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelPropertyIntProxy_t qt_meta_stringdata_StelPropertyIntProxy = {
    {
QT_MOC_LITERAL(0, 0, 20), // "StelPropertyIntProxy"
QT_MOC_LITERAL(1, 21, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "value"
QT_MOC_LITERAL(4, 44, 17) // "onPropertyChanged"

    },
    "StelPropertyIntProxy\0propertyChanged\0"
    "\0value\0onPropertyChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelPropertyIntProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    3,

       0        // eod
};

void StelPropertyIntProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelPropertyIntProxy *_t = static_cast<StelPropertyIntProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onPropertyChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelPropertyIntProxy::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelPropertyIntProxy::propertyChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject StelPropertyIntProxy::staticMetaObject = {
    { &StelPropertyProxy::staticMetaObject, qt_meta_stringdata_StelPropertyIntProxy.data,
      qt_meta_data_StelPropertyIntProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelPropertyIntProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelPropertyIntProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelPropertyIntProxy.stringdata0))
        return static_cast<void*>(const_cast< StelPropertyIntProxy*>(this));
    return StelPropertyProxy::qt_metacast(_clname);
}

int StelPropertyIntProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelPropertyProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void StelPropertyIntProxy::propertyChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_StelPropertyBoolProxy_t {
    QByteArrayData data[5];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelPropertyBoolProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelPropertyBoolProxy_t qt_meta_stringdata_StelPropertyBoolProxy = {
    {
QT_MOC_LITERAL(0, 0, 21), // "StelPropertyBoolProxy"
QT_MOC_LITERAL(1, 22, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "value"
QT_MOC_LITERAL(4, 45, 17) // "onPropertyChanged"

    },
    "StelPropertyBoolProxy\0propertyChanged\0"
    "\0value\0onPropertyChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelPropertyBoolProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    3,

       0        // eod
};

void StelPropertyBoolProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelPropertyBoolProxy *_t = static_cast<StelPropertyBoolProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onPropertyChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelPropertyBoolProxy::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelPropertyBoolProxy::propertyChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject StelPropertyBoolProxy::staticMetaObject = {
    { &StelPropertyProxy::staticMetaObject, qt_meta_stringdata_StelPropertyBoolProxy.data,
      qt_meta_data_StelPropertyBoolProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelPropertyBoolProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelPropertyBoolProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelPropertyBoolProxy.stringdata0))
        return static_cast<void*>(const_cast< StelPropertyBoolProxy*>(this));
    return StelPropertyProxy::qt_metacast(_clname);
}

int StelPropertyBoolProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelPropertyProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void StelPropertyBoolProxy::propertyChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_StelPropertyDoubleProxy_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelPropertyDoubleProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelPropertyDoubleProxy_t qt_meta_stringdata_StelPropertyDoubleProxy = {
    {
QT_MOC_LITERAL(0, 0, 23), // "StelPropertyDoubleProxy"
QT_MOC_LITERAL(1, 24, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "value"
QT_MOC_LITERAL(4, 47, 17) // "onPropertyChanged"

    },
    "StelPropertyDoubleProxy\0propertyChanged\0"
    "\0value\0onPropertyChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelPropertyDoubleProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    3,

       0        // eod
};

void StelPropertyDoubleProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelPropertyDoubleProxy *_t = static_cast<StelPropertyDoubleProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->onPropertyChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelPropertyDoubleProxy::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelPropertyDoubleProxy::propertyChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject StelPropertyDoubleProxy::staticMetaObject = {
    { &StelPropertyProxy::staticMetaObject, qt_meta_stringdata_StelPropertyDoubleProxy.data,
      qt_meta_data_StelPropertyDoubleProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelPropertyDoubleProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelPropertyDoubleProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelPropertyDoubleProxy.stringdata0))
        return static_cast<void*>(const_cast< StelPropertyDoubleProxy*>(this));
    return StelPropertyProxy::qt_metacast(_clname);
}

int StelPropertyDoubleProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelPropertyProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void StelPropertyDoubleProxy::propertyChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_StelProperty_t {
    QByteArrayData data[16];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelProperty_t qt_meta_stringdata_StelProperty = {
    {
QT_MOC_LITERAL(0, 0, 12), // "StelProperty"
QT_MOC_LITERAL(1, 13, 7), // "changed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "newValue"
QT_MOC_LITERAL(4, 31, 5), // "getId"
QT_MOC_LITERAL(5, 37, 8), // "getValue"
QT_MOC_LITERAL(6, 46, 8), // "setValue"
QT_MOC_LITERAL(7, 55, 5), // "value"
QT_MOC_LITERAL(8, 61, 10), // "isReadOnly"
QT_MOC_LITERAL(9, 72, 9), // "canNotify"
QT_MOC_LITERAL(10, 82, 7), // "getType"
QT_MOC_LITERAL(11, 90, 15), // "QMetaType::Type"
QT_MOC_LITERAL(12, 106, 11), // "getMetaProp"
QT_MOC_LITERAL(13, 118, 13), // "QMetaProperty"
QT_MOC_LITERAL(14, 132, 9), // "getTarget"
QT_MOC_LITERAL(15, 142, 15) // "propertyChanged"

    },
    "StelProperty\0changed\0\0newValue\0getId\0"
    "getValue\0setValue\0value\0isReadOnly\0"
    "canNotify\0getType\0QMetaType::Type\0"
    "getMetaProp\0QMetaProperty\0getTarget\0"
    "propertyChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x0a /* Public */,
       5,    0,   68,    2, 0x0a /* Public */,
       6,    1,   69,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x0a /* Public */,
      14,    0,   76,    2, 0x0a /* Public */,
      15,    0,   77,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,

 // slots: parameters
    QMetaType::QString,
    QMetaType::QVariant,
    QMetaType::Bool, QMetaType::QVariant,    7,
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 11,
    0x80000000 | 13,
    QMetaType::QObjectStar,
    QMetaType::Void,

       0        // eod
};

void StelProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelProperty *_t = static_cast<StelProperty *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: { QString _r = _t->getId();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QVariant _r = _t->getValue();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->setValue((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isReadOnly();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->canNotify();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QMetaType::Type _r = _t->getType();
            if (_a[0]) *reinterpret_cast< QMetaType::Type*>(_a[0]) = _r; }  break;
        case 7: { QMetaProperty _r = _t->getMetaProp();
            if (_a[0]) *reinterpret_cast< QMetaProperty*>(_a[0]) = _r; }  break;
        case 8: { QObject* _r = _t->getTarget();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 9: _t->propertyChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelProperty::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelProperty::changed)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject StelProperty::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelProperty.data,
      qt_meta_data_StelProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelProperty.stringdata0))
        return static_cast<void*>(const_cast< StelProperty*>(this));
    return QObject::qt_metacast(_clname);
}

int StelProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void StelProperty::changed(const QVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_StelPropertyMgr_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelPropertyMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelPropertyMgr_t qt_meta_stringdata_StelPropertyMgr = {
    {
QT_MOC_LITERAL(0, 0, 15), // "StelPropertyMgr"
QT_MOC_LITERAL(1, 16, 15), // "stelPropChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 2), // "id"
QT_MOC_LITERAL(4, 36, 5), // "value"
QT_MOC_LITERAL(5, 42, 17), // "onStelPropChanged"
QT_MOC_LITERAL(6, 60, 3) // "val"

    },
    "StelPropertyMgr\0stelPropChanged\0\0id\0"
    "value\0onStelPropChanged\0val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelPropertyMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    6,

       0        // eod
};

void StelPropertyMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelPropertyMgr *_t = static_cast<StelPropertyMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stelPropChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->onStelPropChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelPropertyMgr::*_t)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelPropertyMgr::stelPropChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject StelPropertyMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelPropertyMgr.data,
      qt_meta_data_StelPropertyMgr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelPropertyMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelPropertyMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelPropertyMgr.stringdata0))
        return static_cast<void*>(const_cast< StelPropertyMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int StelPropertyMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void StelPropertyMgr::stelPropChanged(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
