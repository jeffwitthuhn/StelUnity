/****************************************************************************
** Meta object code from reading C++ file 'DateTimeDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/DateTimeDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DateTimeDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DateTimeDialog_t {
    QByteArrayData data[21];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DateTimeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DateTimeDialog_t qt_meta_stringdata_DateTimeDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DateTimeDialog"
QT_MOC_LITERAL(1, 15, 11), // "retranslate"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "setDateTime"
QT_MOC_LITERAL(4, 40, 5), // "newJd"
QT_MOC_LITERAL(5, 46, 5), // "close"
QT_MOC_LITERAL(6, 52, 11), // "yearChanged"
QT_MOC_LITERAL(7, 64, 2), // "ny"
QT_MOC_LITERAL(8, 67, 12), // "monthChanged"
QT_MOC_LITERAL(9, 80, 2), // "nm"
QT_MOC_LITERAL(10, 83, 10), // "dayChanged"
QT_MOC_LITERAL(11, 94, 2), // "nd"
QT_MOC_LITERAL(12, 97, 11), // "hourChanged"
QT_MOC_LITERAL(13, 109, 2), // "nh"
QT_MOC_LITERAL(14, 112, 13), // "minuteChanged"
QT_MOC_LITERAL(15, 126, 13), // "secondChanged"
QT_MOC_LITERAL(16, 140, 2), // "ns"
QT_MOC_LITERAL(17, 143, 9), // "jdChanged"
QT_MOC_LITERAL(18, 153, 3), // "njd"
QT_MOC_LITERAL(19, 157, 10), // "mjdChanged"
QT_MOC_LITERAL(20, 168, 4) // "nmjd"

    },
    "DateTimeDialog\0retranslate\0\0setDateTime\0"
    "newJd\0close\0yearChanged\0ny\0monthChanged\0"
    "nm\0dayChanged\0nd\0hourChanged\0nh\0"
    "minuteChanged\0secondChanged\0ns\0jdChanged\0"
    "njd\0mjdChanged\0nmjd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DateTimeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    1,   70,    2, 0x0a /* Public */,
       5,    0,   73,    2, 0x0a /* Public */,
       6,    1,   74,    2, 0x08 /* Private */,
       8,    1,   77,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      12,    1,   83,    2, 0x08 /* Private */,
      14,    1,   86,    2, 0x08 /* Private */,
      15,    1,   89,    2, 0x08 /* Private */,
      17,    1,   92,    2, 0x08 /* Private */,
      19,    1,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Double,   20,

       0        // eod
};

void DateTimeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DateTimeDialog *_t = static_cast<DateTimeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->setDateTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->close(); break;
        case 3: _t->yearChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->monthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->dayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->hourChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->minuteChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->secondChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->jdChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->mjdChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DateTimeDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_DateTimeDialog.data,
      qt_meta_data_DateTimeDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DateTimeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DateTimeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DateTimeDialog.stringdata0))
        return static_cast<void*>(const_cast< DateTimeDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int DateTimeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
