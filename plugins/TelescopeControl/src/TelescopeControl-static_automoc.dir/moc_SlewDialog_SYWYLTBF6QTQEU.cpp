/****************************************************************************
** Meta object code from reading C++ file 'SlewDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/TelescopeControl/src/gui/SlewDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SlewDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SlewDialog_t {
    QByteArrayData data[23];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SlewDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SlewDialog_t qt_meta_stringdata_SlewDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SlewDialog"
QT_MOC_LITERAL(1, 11, 11), // "retranslate"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 17), // "showConfiguration"
QT_MOC_LITERAL(4, 42, 4), // "slew"
QT_MOC_LITERAL(5, 47, 12), // "addTelescope"
QT_MOC_LITERAL(6, 60, 4), // "slot"
QT_MOC_LITERAL(7, 65, 4), // "name"
QT_MOC_LITERAL(8, 70, 15), // "removeTelescope"
QT_MOC_LITERAL(9, 86, 12), // "setFormatHMS"
QT_MOC_LITERAL(10, 99, 3), // "set"
QT_MOC_LITERAL(11, 103, 12), // "setFormatDMS"
QT_MOC_LITERAL(12, 116, 16), // "setFormatDecimal"
QT_MOC_LITERAL(13, 133, 20), // "getCurrentObjectInfo"
QT_MOC_LITERAL(14, 154, 13), // "getCenterInfo"
QT_MOC_LITERAL(15, 168, 16), // "editStoredPoints"
QT_MOC_LITERAL(16, 185, 24), // "addStoredPointToComboBox"
QT_MOC_LITERAL(17, 210, 6), // "number"
QT_MOC_LITERAL(18, 217, 9), // "radiansRA"
QT_MOC_LITERAL(19, 227, 10), // "radiansDec"
QT_MOC_LITERAL(20, 238, 29), // "removeStoredPointFromComboBox"
QT_MOC_LITERAL(21, 268, 29), // "clearStoredPointsFromComboBox"
QT_MOC_LITERAL(22, 298, 18) // "getStoredPointInfo"

    },
    "SlewDialog\0retranslate\0\0showConfiguration\0"
    "slew\0addTelescope\0slot\0name\0removeTelescope\0"
    "setFormatHMS\0set\0setFormatDMS\0"
    "setFormatDecimal\0getCurrentObjectInfo\0"
    "getCenterInfo\0editStoredPoints\0"
    "addStoredPointToComboBox\0number\0"
    "radiansRA\0radiansDec\0removeStoredPointFromComboBox\0"
    "clearStoredPointsFromComboBox\0"
    "getStoredPointInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SlewDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    2,   92,    2, 0x08 /* Private */,
       8,    1,   97,    2, 0x08 /* Private */,
       9,    1,  100,    2, 0x08 /* Private */,
      11,    1,  103,    2, 0x08 /* Private */,
      12,    1,  106,    2, 0x08 /* Private */,
      13,    0,  109,    2, 0x08 /* Private */,
      14,    0,  110,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,
      16,    4,  112,    2, 0x08 /* Private */,
      20,    1,  121,    2, 0x08 /* Private */,
      21,    0,  124,    2, 0x08 /* Private */,
      22,    0,  125,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Double, QMetaType::Double,   17,    7,   18,   19,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SlewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SlewDialog *_t = static_cast<SlewDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->showConfiguration(); break;
        case 2: _t->slew(); break;
        case 3: _t->addTelescope((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->removeTelescope((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setFormatHMS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setFormatDMS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setFormatDecimal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->getCurrentObjectInfo(); break;
        case 9: _t->getCenterInfo(); break;
        case 10: _t->editStoredPoints(); break;
        case 11: _t->addStoredPointToComboBox((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 12: _t->removeStoredPointFromComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->clearStoredPointsFromComboBox(); break;
        case 14: _t->getStoredPointInfo(); break;
        default: ;
        }
    }
}

const QMetaObject SlewDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_SlewDialog.data,
      qt_meta_data_SlewDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SlewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SlewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SlewDialog.stringdata0))
        return static_cast<void*>(const_cast< SlewDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int SlewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
