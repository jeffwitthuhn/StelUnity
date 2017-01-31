/****************************************************************************
** Meta object code from reading C++ file 'AstroCalcDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/AstroCalcDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AstroCalcDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AstroCalcDialog_t {
    QByteArrayData data[23];
    char stringdata0[374];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AstroCalcDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AstroCalcDialog_t qt_meta_stringdata_AstroCalcDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AstroCalcDialog"
QT_MOC_LITERAL(1, 16, 11), // "retranslate"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 25), // "currentPlanetaryPositions"
QT_MOC_LITERAL(4, 55, 30), // "selectCurrentPlanetaryPosition"
QT_MOC_LITERAL(5, 86, 10), // "modelIndex"
QT_MOC_LITERAL(6, 97, 26), // "onChangedEphemerisPosition"
QT_MOC_LITERAL(7, 124, 17), // "generateEphemeris"
QT_MOC_LITERAL(8, 142, 16), // "cleanupEphemeris"
QT_MOC_LITERAL(9, 159, 23), // "selectCurrentEphemeride"
QT_MOC_LITERAL(10, 183, 13), // "saveEphemeris"
QT_MOC_LITERAL(11, 197, 18), // "calculatePhenomena"
QT_MOC_LITERAL(12, 216, 21), // "selectCurrentPhenomen"
QT_MOC_LITERAL(13, 238, 13), // "savePhenomena"
QT_MOC_LITERAL(14, 252, 20), // "drawAltVsTimeDiagram"
QT_MOC_LITERAL(15, 273, 22), // "drawCurrentTimeDiagram"
QT_MOC_LITERAL(16, 296, 13), // "mouseOverLine"
QT_MOC_LITERAL(17, 310, 12), // "QMouseEvent*"
QT_MOC_LITERAL(18, 323, 5), // "event"
QT_MOC_LITERAL(19, 329, 10), // "changePage"
QT_MOC_LITERAL(20, 340, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(21, 357, 7), // "current"
QT_MOC_LITERAL(22, 365, 8) // "previous"

    },
    "AstroCalcDialog\0retranslate\0\0"
    "currentPlanetaryPositions\0"
    "selectCurrentPlanetaryPosition\0"
    "modelIndex\0onChangedEphemerisPosition\0"
    "generateEphemeris\0cleanupEphemeris\0"
    "selectCurrentEphemeride\0saveEphemeris\0"
    "calculatePhenomena\0selectCurrentPhenomen\0"
    "savePhenomena\0drawAltVsTimeDiagram\0"
    "drawCurrentTimeDiagram\0mouseOverLine\0"
    "QMouseEvent*\0event\0changePage\0"
    "QListWidgetItem*\0current\0previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AstroCalcDialog[] = {

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
       4,    1,   91,    2, 0x08 /* Private */,
       6,    1,   94,    2, 0x08 /* Private */,
       7,    0,   97,    2, 0x08 /* Private */,
       8,    0,   98,    2, 0x08 /* Private */,
       9,    1,   99,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    1,  104,    2, 0x08 /* Private */,
      13,    0,  107,    2, 0x08 /* Private */,
      14,    0,  108,    2, 0x08 /* Private */,
      15,    0,  109,    2, 0x08 /* Private */,
      16,    1,  110,    2, 0x08 /* Private */,
      19,    2,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 20,   21,   22,

       0        // eod
};

void AstroCalcDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AstroCalcDialog *_t = static_cast<AstroCalcDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->currentPlanetaryPositions(); break;
        case 2: _t->selectCurrentPlanetaryPosition((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->onChangedEphemerisPosition((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->generateEphemeris(); break;
        case 5: _t->cleanupEphemeris(); break;
        case 6: _t->selectCurrentEphemeride((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->saveEphemeris(); break;
        case 8: _t->calculatePhenomena(); break;
        case 9: _t->selectCurrentPhenomen((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->savePhenomena(); break;
        case 11: _t->drawAltVsTimeDiagram(); break;
        case 12: _t->drawCurrentTimeDiagram(); break;
        case 13: _t->mouseOverLine((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 14: _t->changePage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject AstroCalcDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_AstroCalcDialog.data,
      qt_meta_data_AstroCalcDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AstroCalcDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AstroCalcDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AstroCalcDialog.stringdata0))
        return static_cast<void*>(const_cast< AstroCalcDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int AstroCalcDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
