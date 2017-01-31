/****************************************************************************
** Meta object code from reading C++ file 'ShortcutsDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/ShortcutsDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShortcutsDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ShortcutsFilterModel_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShortcutsFilterModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShortcutsFilterModel_t qt_meta_stringdata_ShortcutsFilterModel = {
    {
QT_MOC_LITERAL(0, 0, 20) // "ShortcutsFilterModel"

    },
    "ShortcutsFilterModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShortcutsFilterModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ShortcutsFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ShortcutsFilterModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_ShortcutsFilterModel.data,
      qt_meta_data_ShortcutsFilterModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ShortcutsFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortcutsFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutsFilterModel.stringdata0))
        return static_cast<void*>(const_cast< ShortcutsFilterModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ShortcutsFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ShortcutsDialog_t {
    QByteArrayData data[25];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShortcutsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShortcutsDialog_t qt_meta_stringdata_ShortcutsDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ShortcutsDialog"
QT_MOC_LITERAL(1, 16, 15), // "resetCollisions"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "retranslate"
QT_MOC_LITERAL(4, 45, 11), // "initEditors"
QT_MOC_LITERAL(5, 57, 22), // "prefixMatchKeySequence"
QT_MOC_LITERAL(6, 80, 3), // "ks1"
QT_MOC_LITERAL(7, 84, 3), // "ks2"
QT_MOC_LITERAL(8, 88, 18), // "findCollidingItems"
QT_MOC_LITERAL(9, 107, 21), // "QList<QStandardItem*>"
QT_MOC_LITERAL(10, 129, 2), // "ks"
QT_MOC_LITERAL(11, 132, 16), // "handleCollisions"
QT_MOC_LITERAL(12, 149, 17), // "ShortcutLineEdit*"
QT_MOC_LITERAL(13, 167, 11), // "currentEdit"
QT_MOC_LITERAL(14, 179, 13), // "handleChanges"
QT_MOC_LITERAL(15, 193, 12), // "applyChanges"
QT_MOC_LITERAL(16, 206, 15), // "switchToEditors"
QT_MOC_LITERAL(17, 222, 5), // "index"
QT_MOC_LITERAL(18, 228, 19), // "updateShortcutsItem"
QT_MOC_LITERAL(19, 248, 11), // "StelAction*"
QT_MOC_LITERAL(20, 260, 6), // "action"
QT_MOC_LITERAL(21, 267, 14), // "QStandardItem*"
QT_MOC_LITERAL(22, 282, 12), // "shortcutItem"
QT_MOC_LITERAL(23, 295, 23), // "restoreDefaultShortcuts"
QT_MOC_LITERAL(24, 319, 14) // "updateTreeData"

    },
    "ShortcutsDialog\0resetCollisions\0\0"
    "retranslate\0initEditors\0prefixMatchKeySequence\0"
    "ks1\0ks2\0findCollidingItems\0"
    "QList<QStandardItem*>\0ks\0handleCollisions\0"
    "ShortcutLineEdit*\0currentEdit\0"
    "handleChanges\0applyChanges\0switchToEditors\0"
    "index\0updateShortcutsItem\0StelAction*\0"
    "action\0QStandardItem*\0shortcutItem\0"
    "restoreDefaultShortcuts\0updateTreeData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShortcutsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    2,   82,    2, 0x0a /* Public */,
       8,    1,   87,    2, 0x0a /* Public */,
      11,    1,   90,    2, 0x0a /* Public */,
      14,    0,   93,    2, 0x0a /* Public */,
      15,    0,   94,    2, 0x0a /* Public */,
      16,    1,   95,    2, 0x0a /* Public */,
      18,    2,   98,    2, 0x0a /* Public */,
      18,    1,  103,    2, 0x2a /* Public | MethodCloned */,
      23,    0,  106,    2, 0x0a /* Public */,
      24,    0,  107,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QKeySequence, QMetaType::QKeySequence,    6,    7,
    0x80000000 | 9, QMetaType::QKeySequence,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   17,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21,   20,   22,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ShortcutsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShortcutsDialog *_t = static_cast<ShortcutsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetCollisions(); break;
        case 1: _t->retranslate(); break;
        case 2: _t->initEditors(); break;
        case 3: { bool _r = _t->prefixMatchKeySequence((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< const QKeySequence(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QList<QStandardItem*> _r = _t->findCollidingItems((*reinterpret_cast< QKeySequence(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 5: _t->handleCollisions((*reinterpret_cast< ShortcutLineEdit*(*)>(_a[1]))); break;
        case 6: _t->handleChanges(); break;
        case 7: _t->applyChanges(); break;
        case 8: _t->switchToEditors((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->updateShortcutsItem((*reinterpret_cast< StelAction*(*)>(_a[1])),(*reinterpret_cast< QStandardItem*(*)>(_a[2]))); break;
        case 10: _t->updateShortcutsItem((*reinterpret_cast< StelAction*(*)>(_a[1]))); break;
        case 11: _t->restoreDefaultShortcuts(); break;
        case 12: _t->updateTreeData(); break;
        default: ;
        }
    }
}

const QMetaObject ShortcutsDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_ShortcutsDialog.data,
      qt_meta_data_ShortcutsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ShortcutsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortcutsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutsDialog.stringdata0))
        return static_cast<void*>(const_cast< ShortcutsDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int ShortcutsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
