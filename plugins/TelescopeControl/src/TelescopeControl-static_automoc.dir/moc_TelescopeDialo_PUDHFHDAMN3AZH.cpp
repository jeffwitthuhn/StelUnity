/****************************************************************************
** Meta object code from reading C++ file 'TelescopeDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/TelescopeControl/src/gui/TelescopeDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TelescopeDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TelescopeDialog_t {
    QByteArrayData data[17];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TelescopeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TelescopeDialog_t qt_meta_stringdata_TelescopeDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TelescopeDialog"
QT_MOC_LITERAL(1, 16, 11), // "retranslate"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 25), // "buttonChangeStatusPressed"
QT_MOC_LITERAL(4, 55, 22), // "buttonConfigurePressed"
QT_MOC_LITERAL(5, 78, 16), // "buttonAddPressed"
QT_MOC_LITERAL(6, 95, 19), // "buttonRemovePressed"
QT_MOC_LITERAL(7, 115, 29), // "checkBoxUseExecutablesToggled"
QT_MOC_LITERAL(8, 145, 34), // "buttonBrowseServerDirectoryPr..."
QT_MOC_LITERAL(9, 180, 11), // "saveChanges"
QT_MOC_LITERAL(10, 192, 4), // "name"
QT_MOC_LITERAL(11, 197, 14), // "ConnectionType"
QT_MOC_LITERAL(12, 212, 4), // "type"
QT_MOC_LITERAL(13, 217, 14), // "discardChanges"
QT_MOC_LITERAL(14, 232, 14), // "selectTelecope"
QT_MOC_LITERAL(15, 247, 18), // "configureTelescope"
QT_MOC_LITERAL(16, 266, 21) // "updateTelescopeStates"

    },
    "TelescopeDialog\0retranslate\0\0"
    "buttonChangeStatusPressed\0"
    "buttonConfigurePressed\0buttonAddPressed\0"
    "buttonRemovePressed\0checkBoxUseExecutablesToggled\0"
    "buttonBrowseServerDirectoryPressed\0"
    "saveChanges\0name\0ConnectionType\0type\0"
    "discardChanges\0selectTelecope\0"
    "configureTelescope\0updateTelescopeStates"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelescopeDialog[] = {

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
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    2,   83,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    1,   89,    2, 0x08 /* Private */,
      15,    1,   92,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,   10,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,

       0        // eod
};

void TelescopeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TelescopeDialog *_t = static_cast<TelescopeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->buttonChangeStatusPressed(); break;
        case 2: _t->buttonConfigurePressed(); break;
        case 3: _t->buttonAddPressed(); break;
        case 4: _t->buttonRemovePressed(); break;
        case 5: _t->checkBoxUseExecutablesToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->buttonBrowseServerDirectoryPressed(); break;
        case 7: _t->saveChanges((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< ConnectionType(*)>(_a[2]))); break;
        case 8: _t->discardChanges(); break;
        case 9: _t->selectTelecope((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->configureTelescope((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->updateTelescopeStates(); break;
        default: ;
        }
    }
}

const QMetaObject TelescopeDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_TelescopeDialog.data,
      qt_meta_data_TelescopeDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TelescopeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelescopeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeDialog.stringdata0))
        return static_cast<void*>(const_cast< TelescopeDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int TelescopeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
