/****************************************************************************
** Meta object code from reading C++ file 'NovaeDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Novae/src/gui/NovaeDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NovaeDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NovaeDialog_t {
    QByteArrayData data[15];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NovaeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NovaeDialog_t qt_meta_stringdata_NovaeDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "NovaeDialog"
QT_MOC_LITERAL(1, 12, 11), // "retranslate"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 19), // "refreshUpdateValues"
QT_MOC_LITERAL(4, 45, 15), // "setUpdateValues"
QT_MOC_LITERAL(5, 61, 4), // "days"
QT_MOC_LITERAL(6, 66, 17), // "setUpdatesEnabled"
QT_MOC_LITERAL(7, 84, 10), // "checkState"
QT_MOC_LITERAL(8, 95, 19), // "updateStateReceiver"
QT_MOC_LITERAL(9, 115, 18), // "Novae::UpdateState"
QT_MOC_LITERAL(10, 134, 5), // "state"
QT_MOC_LITERAL(11, 140, 22), // "updateCompleteReceiver"
QT_MOC_LITERAL(12, 163, 15), // "restoreDefaults"
QT_MOC_LITERAL(13, 179, 12), // "saveSettings"
QT_MOC_LITERAL(14, 192, 10) // "updateJSON"

    },
    "NovaeDialog\0retranslate\0\0refreshUpdateValues\0"
    "setUpdateValues\0days\0setUpdatesEnabled\0"
    "checkState\0updateStateReceiver\0"
    "Novae::UpdateState\0state\0"
    "updateCompleteReceiver\0restoreDefaults\0"
    "saveSettings\0updateJSON"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NovaeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    1,   61,    2, 0x08 /* Private */,
       6,    1,   64,    2, 0x08 /* Private */,
       8,    1,   67,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,
      13,    0,   72,    2, 0x08 /* Private */,
      14,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NovaeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NovaeDialog *_t = static_cast<NovaeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->refreshUpdateValues(); break;
        case 2: _t->setUpdateValues((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setUpdatesEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateStateReceiver((*reinterpret_cast< Novae::UpdateState(*)>(_a[1]))); break;
        case 5: _t->updateCompleteReceiver(); break;
        case 6: _t->restoreDefaults(); break;
        case 7: _t->saveSettings(); break;
        case 8: _t->updateJSON(); break;
        default: ;
        }
    }
}

const QMetaObject NovaeDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_NovaeDialog.data,
      qt_meta_data_NovaeDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NovaeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NovaeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NovaeDialog.stringdata0))
        return static_cast<void*>(const_cast< NovaeDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int NovaeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
