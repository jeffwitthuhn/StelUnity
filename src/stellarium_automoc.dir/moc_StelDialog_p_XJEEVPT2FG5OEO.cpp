/****************************************************************************
** Meta object code from reading C++ file 'StelDialog_p.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/StelDialog_p.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelDialog_p.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAbstractButtonStelPropertyConnectionHelper_t {
    QByteArrayData data[4];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractButtonStelPropertyConnectionHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractButtonStelPropertyConnectionHelper_t qt_meta_stringdata_QAbstractButtonStelPropertyConnectionHelper = {
    {
QT_MOC_LITERAL(0, 0, 43), // "QAbstractButtonStelPropertyCo..."
QT_MOC_LITERAL(1, 44, 17), // "onPropertyChanged"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 5) // "value"

    },
    "QAbstractButtonStelPropertyConnectionHelper\0"
    "onPropertyChanged\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractButtonStelPropertyConnectionHelper[] = {

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

void QAbstractButtonStelPropertyConnectionHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractButtonStelPropertyConnectionHelper *_t = static_cast<QAbstractButtonStelPropertyConnectionHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onPropertyChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QAbstractButtonStelPropertyConnectionHelper::staticMetaObject = {
    { &StelPropertyProxy::staticMetaObject, qt_meta_stringdata_QAbstractButtonStelPropertyConnectionHelper.data,
      qt_meta_data_QAbstractButtonStelPropertyConnectionHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractButtonStelPropertyConnectionHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractButtonStelPropertyConnectionHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractButtonStelPropertyConnectionHelper.stringdata0))
        return static_cast<void*>(const_cast< QAbstractButtonStelPropertyConnectionHelper*>(this));
    return StelPropertyProxy::qt_metacast(_clname);
}

int QAbstractButtonStelPropertyConnectionHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelPropertyProxy::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QComboBoxStelPropertyConnectionHelper_t {
    QByteArrayData data[4];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QComboBoxStelPropertyConnectionHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QComboBoxStelPropertyConnectionHelper_t qt_meta_stringdata_QComboBoxStelPropertyConnectionHelper = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QComboBoxStelPropertyConnecti..."
QT_MOC_LITERAL(1, 38, 17), // "onPropertyChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 5) // "value"

    },
    "QComboBoxStelPropertyConnectionHelper\0"
    "onPropertyChanged\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QComboBoxStelPropertyConnectionHelper[] = {

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

void QComboBoxStelPropertyConnectionHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QComboBoxStelPropertyConnectionHelper *_t = static_cast<QComboBoxStelPropertyConnectionHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onPropertyChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QComboBoxStelPropertyConnectionHelper::staticMetaObject = {
    { &StelPropertyProxy::staticMetaObject, qt_meta_stringdata_QComboBoxStelPropertyConnectionHelper.data,
      qt_meta_data_QComboBoxStelPropertyConnectionHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QComboBoxStelPropertyConnectionHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QComboBoxStelPropertyConnectionHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QComboBoxStelPropertyConnectionHelper.stringdata0))
        return static_cast<void*>(const_cast< QComboBoxStelPropertyConnectionHelper*>(this));
    return StelPropertyProxy::qt_metacast(_clname);
}

int QComboBoxStelPropertyConnectionHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelPropertyProxy::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QSpinBoxStelPropertyConnectionHelper_t {
    QByteArrayData data[4];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSpinBoxStelPropertyConnectionHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSpinBoxStelPropertyConnectionHelper_t qt_meta_stringdata_QSpinBoxStelPropertyConnectionHelper = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QSpinBoxStelPropertyConnectio..."
QT_MOC_LITERAL(1, 37, 17), // "onPropertyChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 5) // "value"

    },
    "QSpinBoxStelPropertyConnectionHelper\0"
    "onPropertyChanged\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSpinBoxStelPropertyConnectionHelper[] = {

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

void QSpinBoxStelPropertyConnectionHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSpinBoxStelPropertyConnectionHelper *_t = static_cast<QSpinBoxStelPropertyConnectionHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onPropertyChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QSpinBoxStelPropertyConnectionHelper::staticMetaObject = {
    { &StelPropertyProxy::staticMetaObject, qt_meta_stringdata_QSpinBoxStelPropertyConnectionHelper.data,
      qt_meta_data_QSpinBoxStelPropertyConnectionHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSpinBoxStelPropertyConnectionHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSpinBoxStelPropertyConnectionHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSpinBoxStelPropertyConnectionHelper.stringdata0))
        return static_cast<void*>(const_cast< QSpinBoxStelPropertyConnectionHelper*>(this));
    return StelPropertyProxy::qt_metacast(_clname);
}

int QSpinBoxStelPropertyConnectionHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelPropertyProxy::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QDoubleSpinBoxStelPropertyConnectionHelper_t {
    QByteArrayData data[4];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDoubleSpinBoxStelPropertyConnectionHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDoubleSpinBoxStelPropertyConnectionHelper_t qt_meta_stringdata_QDoubleSpinBoxStelPropertyConnectionHelper = {
    {
QT_MOC_LITERAL(0, 0, 42), // "QDoubleSpinBoxStelPropertyCon..."
QT_MOC_LITERAL(1, 43, 17), // "onPropertyChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 5) // "value"

    },
    "QDoubleSpinBoxStelPropertyConnectionHelper\0"
    "onPropertyChanged\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDoubleSpinBoxStelPropertyConnectionHelper[] = {

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

void QDoubleSpinBoxStelPropertyConnectionHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDoubleSpinBoxStelPropertyConnectionHelper *_t = static_cast<QDoubleSpinBoxStelPropertyConnectionHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onPropertyChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QDoubleSpinBoxStelPropertyConnectionHelper::staticMetaObject = {
    { &StelPropertyProxy::staticMetaObject, qt_meta_stringdata_QDoubleSpinBoxStelPropertyConnectionHelper.data,
      qt_meta_data_QDoubleSpinBoxStelPropertyConnectionHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDoubleSpinBoxStelPropertyConnectionHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDoubleSpinBoxStelPropertyConnectionHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDoubleSpinBoxStelPropertyConnectionHelper.stringdata0))
        return static_cast<void*>(const_cast< QDoubleSpinBoxStelPropertyConnectionHelper*>(this));
    return StelPropertyProxy::qt_metacast(_clname);
}

int QDoubleSpinBoxStelPropertyConnectionHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelPropertyProxy::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QSliderStelPropertyConnectionHelper_t {
    QByteArrayData data[6];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSliderStelPropertyConnectionHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSliderStelPropertyConnectionHelper_t qt_meta_stringdata_QSliderStelPropertyConnectionHelper = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QSliderStelPropertyConnection..."
QT_MOC_LITERAL(1, 36, 17), // "onPropertyChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 5), // "value"
QT_MOC_LITERAL(4, 61, 21), // "sliderIntValueChanged"
QT_MOC_LITERAL(5, 83, 3) // "val"

    },
    "QSliderStelPropertyConnectionHelper\0"
    "onPropertyChanged\0\0value\0sliderIntValueChanged\0"
    "val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSliderStelPropertyConnectionHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void QSliderStelPropertyConnectionHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSliderStelPropertyConnectionHelper *_t = static_cast<QSliderStelPropertyConnectionHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onPropertyChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->sliderIntValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QSliderStelPropertyConnectionHelper::staticMetaObject = {
    { &StelPropertyProxy::staticMetaObject, qt_meta_stringdata_QSliderStelPropertyConnectionHelper.data,
      qt_meta_data_QSliderStelPropertyConnectionHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSliderStelPropertyConnectionHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSliderStelPropertyConnectionHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSliderStelPropertyConnectionHelper.stringdata0))
        return static_cast<void*>(const_cast< QSliderStelPropertyConnectionHelper*>(this));
    return StelPropertyProxy::qt_metacast(_clname);
}

int QSliderStelPropertyConnectionHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
