/****************************************************************************
** Meta object code from reading C++ file 'QuasarsDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Quasars/src/gui/QuasarsDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QuasarsDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QuasarsDialog_t {
    QByteArrayData data[18];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuasarsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuasarsDialog_t qt_meta_stringdata_QuasarsDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QuasarsDialog"
QT_MOC_LITERAL(1, 14, 11), // "retranslate"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 19), // "refreshUpdateValues"
QT_MOC_LITERAL(4, 47, 15), // "setUpdateValues"
QT_MOC_LITERAL(5, 63, 4), // "days"
QT_MOC_LITERAL(6, 68, 17), // "setUpdatesEnabled"
QT_MOC_LITERAL(7, 86, 10), // "checkState"
QT_MOC_LITERAL(8, 97, 22), // "setDistributionEnabled"
QT_MOC_LITERAL(9, 120, 26), // "setDisplayAtStartupEnabled"
QT_MOC_LITERAL(10, 147, 27), // "setDisplayShowQuasarsButton"
QT_MOC_LITERAL(11, 175, 19), // "updateStateReceiver"
QT_MOC_LITERAL(12, 195, 20), // "Quasars::UpdateState"
QT_MOC_LITERAL(13, 216, 5), // "state"
QT_MOC_LITERAL(14, 222, 22), // "updateCompleteReceiver"
QT_MOC_LITERAL(15, 245, 15), // "restoreDefaults"
QT_MOC_LITERAL(16, 261, 12), // "saveSettings"
QT_MOC_LITERAL(17, 274, 10) // "updateJSON"

    },
    "QuasarsDialog\0retranslate\0\0"
    "refreshUpdateValues\0setUpdateValues\0"
    "days\0setUpdatesEnabled\0checkState\0"
    "setDistributionEnabled\0"
    "setDisplayAtStartupEnabled\0"
    "setDisplayShowQuasarsButton\0"
    "updateStateReceiver\0Quasars::UpdateState\0"
    "state\0updateCompleteReceiver\0"
    "restoreDefaults\0saveSettings\0updateJSON"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuasarsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    1,   76,    2, 0x08 /* Private */,
       6,    1,   79,    2, 0x08 /* Private */,
       8,    1,   82,    2, 0x08 /* Private */,
       9,    1,   85,    2, 0x08 /* Private */,
      10,    1,   88,    2, 0x08 /* Private */,
      11,    1,   91,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,
      16,    0,   96,    2, 0x08 /* Private */,
      17,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QuasarsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuasarsDialog *_t = static_cast<QuasarsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->refreshUpdateValues(); break;
        case 2: _t->setUpdateValues((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setUpdatesEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setDistributionEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setDisplayAtStartupEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setDisplayShowQuasarsButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateStateReceiver((*reinterpret_cast< Quasars::UpdateState(*)>(_a[1]))); break;
        case 8: _t->updateCompleteReceiver(); break;
        case 9: _t->restoreDefaults(); break;
        case 10: _t->saveSettings(); break;
        case 11: _t->updateJSON(); break;
        default: ;
        }
    }
}

const QMetaObject QuasarsDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_QuasarsDialog.data,
      qt_meta_data_QuasarsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QuasarsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuasarsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QuasarsDialog.stringdata0))
        return static_cast<void*>(const_cast< QuasarsDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int QuasarsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE