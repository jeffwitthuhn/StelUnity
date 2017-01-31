/****************************************************************************
** Meta object code from reading C++ file 'AngleSpinBox.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/AngleSpinBox.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AngleSpinBox.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AngleSpinBox_t {
    QByteArrayData data[9];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AngleSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AngleSpinBox_t qt_meta_stringdata_AngleSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AngleSpinBox"
QT_MOC_LITERAL(1, 13, 12), // "valueChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "clear"
QT_MOC_LITERAL(4, 33, 10), // "setRadians"
QT_MOC_LITERAL(5, 44, 7), // "radians"
QT_MOC_LITERAL(6, 52, 10), // "setDegrees"
QT_MOC_LITERAL(7, 63, 7), // "degrees"
QT_MOC_LITERAL(8, 71, 11) // "updateValue"

    },
    "AngleSpinBox\0valueChanged\0\0clear\0"
    "setRadians\0radians\0setDegrees\0degrees\0"
    "updateValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AngleSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void,

       0        // eod
};

void AngleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AngleSpinBox *_t = static_cast<AngleSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->clear(); break;
        case 2: _t->setRadians((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setDegrees((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->updateValue(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AngleSpinBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AngleSpinBox::valueChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject AngleSpinBox::staticMetaObject = {
    { &QAbstractSpinBox::staticMetaObject, qt_meta_stringdata_AngleSpinBox.data,
      qt_meta_data_AngleSpinBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AngleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AngleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AngleSpinBox.stringdata0))
        return static_cast<void*>(const_cast< AngleSpinBox*>(this));
    return QAbstractSpinBox::qt_metacast(_clname);
}

int AngleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AngleSpinBox::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
