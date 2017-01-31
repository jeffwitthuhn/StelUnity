/****************************************************************************
** Meta object code from reading C++ file 'GreatRedSpotDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/GreatRedSpotDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GreatRedSpotDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GreatRedSpotDialog_t {
    QByteArrayData data[7];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GreatRedSpotDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GreatRedSpotDialog_t qt_meta_stringdata_GreatRedSpotDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "GreatRedSpotDialog"
QT_MOC_LITERAL(1, 19, 11), // "retranslate"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "setVisible"
QT_MOC_LITERAL(4, 43, 8), // "setGrsJD"
QT_MOC_LITERAL(5, 52, 2), // "dt"
QT_MOC_LITERAL(6, 55, 24) // "openRecentGrsMeasurement"

    },
    "GreatRedSpotDialog\0retranslate\0\0"
    "setVisible\0setGrsJD\0dt\0openRecentGrsMeasurement"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GreatRedSpotDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       4,    1,   38,    2, 0x08 /* Private */,
       6,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QDateTime,    5,
    QMetaType::Void,

       0        // eod
};

void GreatRedSpotDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GreatRedSpotDialog *_t = static_cast<GreatRedSpotDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setGrsJD((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 3: _t->openRecentGrsMeasurement(); break;
        default: ;
        }
    }
}

const QMetaObject GreatRedSpotDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_GreatRedSpotDialog.data,
      qt_meta_data_GreatRedSpotDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GreatRedSpotDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GreatRedSpotDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GreatRedSpotDialog.stringdata0))
        return static_cast<void*>(const_cast< GreatRedSpotDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int GreatRedSpotDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
