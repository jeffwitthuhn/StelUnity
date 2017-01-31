/****************************************************************************
** Meta object code from reading C++ file 'SatellitesListModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Satellites/src/SatellitesListModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SatellitesListModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SatellitesListModel_t {
    QByteArrayData data[6];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SatellitesListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SatellitesListModel_t qt_meta_stringdata_SatellitesListModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SatellitesListModel"
QT_MOC_LITERAL(1, 20, 21), // "beginSatellitesChange"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 19), // "endSatellitesChange"
QT_MOC_LITERAL(4, 63, 18), // "enableColoredNames"
QT_MOC_LITERAL(5, 82, 6) // "enable"

    },
    "SatellitesListModel\0beginSatellitesChange\0"
    "\0endSatellitesChange\0enableColoredNames\0"
    "enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SatellitesListModel[] = {

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
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       4,    0,   39,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

       0        // eod
};

void SatellitesListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SatellitesListModel *_t = static_cast<SatellitesListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->beginSatellitesChange(); break;
        case 1: _t->endSatellitesChange(); break;
        case 2: _t->enableColoredNames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableColoredNames(); break;
        default: ;
        }
    }
}

const QMetaObject SatellitesListModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_SatellitesListModel.data,
      qt_meta_data_SatellitesListModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SatellitesListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SatellitesListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SatellitesListModel.stringdata0))
        return static_cast<void*>(const_cast< SatellitesListModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int SatellitesListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
