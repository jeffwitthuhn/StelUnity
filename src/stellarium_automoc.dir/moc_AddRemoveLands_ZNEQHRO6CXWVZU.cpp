/****************************************************************************
** Meta object code from reading C++ file 'AddRemoveLandscapesDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/AddRemoveLandscapesDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddRemoveLandscapesDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddRemoveLandscapesDialog_t {
    QByteArrayData data[16];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddRemoveLandscapesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddRemoveLandscapesDialog_t qt_meta_stringdata_AddRemoveLandscapesDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AddRemoveLandscapesDialog"
QT_MOC_LITERAL(1, 26, 11), // "retranslate"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 10), // "setVisible"
QT_MOC_LITERAL(4, 50, 13), // "populateLists"
QT_MOC_LITERAL(5, 64, 23), // "browseForArchiveClicked"
QT_MOC_LITERAL(6, 88, 13), // "removeClicked"
QT_MOC_LITERAL(7, 102, 14), // "updateSidePane"
QT_MOC_LITERAL(8, 117, 6), // "newRow"
QT_MOC_LITERAL(9, 124, 19), // "messageAcknowledged"
QT_MOC_LITERAL(10, 144, 19), // "messageUnableToOpen"
QT_MOC_LITERAL(11, 164, 4), // "path"
QT_MOC_LITERAL(12, 169, 17), // "messageNotArchive"
QT_MOC_LITERAL(13, 187, 16), // "messageNotUnique"
QT_MOC_LITERAL(14, 204, 8), // "nameOrID"
QT_MOC_LITERAL(15, 213, 21) // "messageRemoveManually"

    },
    "AddRemoveLandscapesDialog\0retranslate\0"
    "\0setVisible\0populateLists\0"
    "browseForArchiveClicked\0removeClicked\0"
    "updateSidePane\0newRow\0messageAcknowledged\0"
    "messageUnableToOpen\0path\0messageNotArchive\0"
    "messageNotUnique\0nameOrID\0"
    "messageRemoveManually"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddRemoveLandscapesDialog[] = {

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
       4,    0,   73,    2, 0x0a /* Public */,
       5,    0,   74,    2, 0x08 /* Private */,
       6,    0,   75,    2, 0x08 /* Private */,
       7,    1,   76,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,
      13,    1,   84,    2, 0x08 /* Private */,
      15,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void AddRemoveLandscapesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddRemoveLandscapesDialog *_t = static_cast<AddRemoveLandscapesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->populateLists(); break;
        case 3: _t->browseForArchiveClicked(); break;
        case 4: _t->removeClicked(); break;
        case 5: _t->updateSidePane((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->messageAcknowledged(); break;
        case 7: _t->messageUnableToOpen((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->messageNotArchive(); break;
        case 9: _t->messageNotUnique((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->messageRemoveManually((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AddRemoveLandscapesDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_AddRemoveLandscapesDialog.data,
      qt_meta_data_AddRemoveLandscapesDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddRemoveLandscapesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddRemoveLandscapesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddRemoveLandscapesDialog.stringdata0))
        return static_cast<void*>(const_cast< AddRemoveLandscapesDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int AddRemoveLandscapesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
