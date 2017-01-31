/****************************************************************************
** Meta object code from reading C++ file 'TelescopeConfigurationDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/TelescopeControl/src/gui/TelescopeConfigurationDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TelescopeConfigurationDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TelescopeConfigurationDialog_t {
    QByteArrayData data[16];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TelescopeConfigurationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TelescopeConfigurationDialog_t qt_meta_stringdata_TelescopeConfigurationDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "TelescopeConfigurationDialog"
QT_MOC_LITERAL(1, 29, 12), // "changesSaved"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4), // "name"
QT_MOC_LITERAL(4, 48, 14), // "ConnectionType"
QT_MOC_LITERAL(5, 63, 4), // "type"
QT_MOC_LITERAL(6, 68, 16), // "changesDiscarded"
QT_MOC_LITERAL(7, 85, 11), // "retranslate"
QT_MOC_LITERAL(8, 97, 17), // "buttonSavePressed"
QT_MOC_LITERAL(9, 115, 20), // "buttonDiscardPressed"
QT_MOC_LITERAL(10, 136, 15), // "toggleTypeLocal"
QT_MOC_LITERAL(11, 152, 20), // "toggleTypeConnection"
QT_MOC_LITERAL(12, 173, 17), // "toggleTypeVirtual"
QT_MOC_LITERAL(13, 191, 19), // "deviceModelSelected"
QT_MOC_LITERAL(14, 211, 12), // "validateHost"
QT_MOC_LITERAL(15, 224, 8) // "hostName"

    },
    "TelescopeConfigurationDialog\0changesSaved\0"
    "\0name\0ConnectionType\0type\0changesDiscarded\0"
    "retranslate\0buttonSavePressed\0"
    "buttonDiscardPressed\0toggleTypeLocal\0"
    "toggleTypeConnection\0toggleTypeVirtual\0"
    "deviceModelSelected\0validateHost\0"
    "hostName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelescopeConfigurationDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       6,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   70,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      11,    1,   76,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,
      13,    1,   82,    2, 0x08 /* Private */,
      14,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Bool, QMetaType::QString,   15,

       0        // eod
};

void TelescopeConfigurationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TelescopeConfigurationDialog *_t = static_cast<TelescopeConfigurationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changesSaved((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< ConnectionType(*)>(_a[2]))); break;
        case 1: _t->changesDiscarded(); break;
        case 2: _t->retranslate(); break;
        case 3: _t->buttonSavePressed(); break;
        case 4: _t->buttonDiscardPressed(); break;
        case 5: _t->toggleTypeLocal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->toggleTypeConnection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->toggleTypeVirtual((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->deviceModelSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: { bool _r = _t->validateHost((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TelescopeConfigurationDialog::*_t)(QString , ConnectionType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelescopeConfigurationDialog::changesSaved)) {
                *result = 0;
            }
        }
        {
            typedef void (TelescopeConfigurationDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelescopeConfigurationDialog::changesDiscarded)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject TelescopeConfigurationDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_TelescopeConfigurationDialog.data,
      qt_meta_data_TelescopeConfigurationDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TelescopeConfigurationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelescopeConfigurationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeConfigurationDialog.stringdata0))
        return static_cast<void*>(const_cast< TelescopeConfigurationDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int TelescopeConfigurationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
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
void TelescopeConfigurationDialog::changesSaved(QString _t1, ConnectionType _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TelescopeConfigurationDialog::changesDiscarded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
