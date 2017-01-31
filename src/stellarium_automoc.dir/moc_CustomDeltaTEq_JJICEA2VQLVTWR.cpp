/****************************************************************************
** Meta object code from reading C++ file 'CustomDeltaTEquationDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/CustomDeltaTEquationDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CustomDeltaTEquationDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CustomDeltaTEquationDialog_t {
    QByteArrayData data[11];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomDeltaTEquationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomDeltaTEquationDialog_t qt_meta_stringdata_CustomDeltaTEquationDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "CustomDeltaTEquationDialog"
QT_MOC_LITERAL(1, 27, 11), // "retranslate"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 10), // "setVisible"
QT_MOC_LITERAL(4, 51, 12), // "saveSettings"
QT_MOC_LITERAL(5, 64, 7), // "setNDot"
QT_MOC_LITERAL(6, 72, 1), // "v"
QT_MOC_LITERAL(7, 74, 7), // "setYear"
QT_MOC_LITERAL(8, 82, 9), // "setCoeffA"
QT_MOC_LITERAL(9, 92, 9), // "setCoeffB"
QT_MOC_LITERAL(10, 102, 9) // "setCoeffC"

    },
    "CustomDeltaTEquationDialog\0retranslate\0"
    "\0setVisible\0saveSettings\0setNDot\0v\0"
    "setYear\0setCoeffA\0setCoeffB\0setCoeffC"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomDeltaTEquationDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    1,   55,    2, 0x0a /* Public */,
       4,    0,   58,    2, 0x08 /* Private */,
       5,    1,   59,    2, 0x08 /* Private */,
       7,    1,   62,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
       9,    1,   68,    2, 0x08 /* Private */,
      10,    1,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void CustomDeltaTEquationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomDeltaTEquationDialog *_t = static_cast<CustomDeltaTEquationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->saveSettings(); break;
        case 3: _t->setNDot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setYear((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setCoeffA((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setCoeffB((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setCoeffC((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CustomDeltaTEquationDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_CustomDeltaTEquationDialog.data,
      qt_meta_data_CustomDeltaTEquationDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CustomDeltaTEquationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomDeltaTEquationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CustomDeltaTEquationDialog.stringdata0))
        return static_cast<void*>(const_cast< CustomDeltaTEquationDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int CustomDeltaTEquationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
