/****************************************************************************
** Meta object code from reading C++ file 'ObservabilityDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Observability/src/gui/ObservabilityDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObservabilityDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ObservabilityDialog_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObservabilityDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObservabilityDialog_t qt_meta_stringdata_ObservabilityDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ObservabilityDialog"
QT_MOC_LITERAL(1, 20, 11), // "retranslate"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "setColor"
QT_MOC_LITERAL(4, 42, 19), // "updateAltitudeLabel"
QT_MOC_LITERAL(5, 62, 8), // "altitude"
QT_MOC_LITERAL(6, 71, 18), // "updateHorizonLabel"
QT_MOC_LITERAL(7, 90, 7), // "horizon"
QT_MOC_LITERAL(8, 98, 14) // "updateControls"

    },
    "ObservabilityDialog\0retranslate\0\0"
    "setColor\0updateAltitudeLabel\0altitude\0"
    "updateHorizonLabel\0horizon\0updateControls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObservabilityDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void ObservabilityDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObservabilityDialog *_t = static_cast<ObservabilityDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->setColor(); break;
        case 2: _t->updateAltitudeLabel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateHorizonLabel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateControls(); break;
        default: ;
        }
    }
}

const QMetaObject ObservabilityDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_ObservabilityDialog.data,
      qt_meta_data_ObservabilityDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ObservabilityDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObservabilityDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ObservabilityDialog.stringdata0))
        return static_cast<void*>(const_cast< ObservabilityDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int ObservabilityDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
