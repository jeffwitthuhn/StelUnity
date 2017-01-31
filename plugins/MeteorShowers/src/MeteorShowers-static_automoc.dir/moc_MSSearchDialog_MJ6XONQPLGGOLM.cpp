/****************************************************************************
** Meta object code from reading C++ file 'MSSearchDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/MeteorShowers/src/gui/MSSearchDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MSSearchDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MSSearchDialog_t {
    QByteArrayData data[8];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MSSearchDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MSSearchDialog_t qt_meta_stringdata_MSSearchDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MSSearchDialog"
QT_MOC_LITERAL(1, 15, 11), // "retranslate"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "checkDates"
QT_MOC_LITERAL(4, 39, 12), // "searchEvents"
QT_MOC_LITERAL(5, 52, 11), // "selectEvent"
QT_MOC_LITERAL(6, 64, 10), // "modelIndex"
QT_MOC_LITERAL(7, 75, 17) // "refreshRangeDates"

    },
    "MSSearchDialog\0retranslate\0\0checkDates\0"
    "searchEvents\0selectEvent\0modelIndex\0"
    "refreshRangeDates"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MSSearchDialog[] = {

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
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,

       0        // eod
};

void MSSearchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MSSearchDialog *_t = static_cast<MSSearchDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->checkDates(); break;
        case 2: _t->searchEvents(); break;
        case 3: _t->selectEvent((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->refreshRangeDates(); break;
        default: ;
        }
    }
}

const QMetaObject MSSearchDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_MSSearchDialog.data,
      qt_meta_data_MSSearchDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MSSearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSSearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MSSearchDialog.stringdata0))
        return static_cast<void*>(const_cast< MSSearchDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int MSSearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
