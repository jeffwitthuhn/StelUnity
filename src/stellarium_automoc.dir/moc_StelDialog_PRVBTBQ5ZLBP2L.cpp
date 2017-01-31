/****************************************************************************
** Meta object code from reading C++ file 'StelDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/StelDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelDialog_t {
    QByteArrayData data[13];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelDialog_t qt_meta_stringdata_StelDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "StelDialog"
QT_MOC_LITERAL(1, 11, 14), // "visibleChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "retranslate"
QT_MOC_LITERAL(4, 39, 10), // "setVisible"
QT_MOC_LITERAL(5, 50, 5), // "close"
QT_MOC_LITERAL(6, 56, 13), // "handleMovedTo"
QT_MOC_LITERAL(7, 70, 6), // "newPos"
QT_MOC_LITERAL(8, 77, 23), // "handleDialogSizeChanged"
QT_MOC_LITERAL(9, 101, 4), // "size"
QT_MOC_LITERAL(10, 106, 13), // "getDialogName"
QT_MOC_LITERAL(11, 120, 23), // "updateNightModeProperty"
QT_MOC_LITERAL(12, 144, 7) // "visible"

    },
    "StelDialog\0visibleChanged\0\0retranslate\0"
    "setVisible\0close\0handleMovedTo\0newPos\0"
    "handleDialogSizeChanged\0size\0getDialogName\0"
    "updateNightModeProperty\0visible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   57,    2, 0x0a /* Public */,
       4,    1,   58,    2, 0x0a /* Public */,
       5,    0,   61,    2, 0x0a /* Public */,
       6,    1,   62,    2, 0x0a /* Public */,
       8,    1,   65,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::QSizeF,    9,
    QMetaType::QString,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void StelDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelDialog *_t = static_cast<StelDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->retranslate(); break;
        case 2: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->close(); break;
        case 4: _t->handleMovedTo((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: _t->handleDialogSizeChanged((*reinterpret_cast< QSizeF(*)>(_a[1]))); break;
        case 6: { QString _r = _t->getDialogName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->updateNightModeProperty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelDialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelDialog::visibleChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StelDialog *_t = static_cast<StelDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        StelDialog *_t = static_cast<StelDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject StelDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelDialog.data,
      qt_meta_data_StelDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelDialog.stringdata0))
        return static_cast<void*>(const_cast< StelDialog*>(this));
    return QObject::qt_metacast(_clname);
}

int StelDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void StelDialog::visibleChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CustomProxy_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomProxy_t qt_meta_stringdata_CustomProxy = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CustomProxy"
QT_MOC_LITERAL(1, 12, 11), // "sizeChanged"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "CustomProxy\0sizeChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QSizeF,    2,

       0        // eod
};

void CustomProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomProxy *_t = static_cast<CustomProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChanged((*reinterpret_cast< QSizeF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CustomProxy::*_t)(QSizeF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CustomProxy::sizeChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CustomProxy::staticMetaObject = {
    { &QGraphicsProxyWidget::staticMetaObject, qt_meta_stringdata_CustomProxy.data,
      qt_meta_data_CustomProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CustomProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CustomProxy.stringdata0))
        return static_cast<void*>(const_cast< CustomProxy*>(this));
    return QGraphicsProxyWidget::qt_metacast(_clname);
}

int CustomProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsProxyWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CustomProxy::sizeChanged(QSizeF _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
