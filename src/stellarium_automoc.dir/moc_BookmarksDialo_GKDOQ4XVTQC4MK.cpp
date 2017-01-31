/****************************************************************************
** Meta object code from reading C++ file 'BookmarksDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/BookmarksDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BookmarksDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BookmarksDialog_t {
    QByteArrayData data[9];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookmarksDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookmarksDialog_t qt_meta_stringdata_BookmarksDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BookmarksDialog"
QT_MOC_LITERAL(1, 16, 11), // "retranslate"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 24), // "addBookmarkButtonPressed"
QT_MOC_LITERAL(4, 54, 27), // "removeBookmarkButtonPressed"
QT_MOC_LITERAL(5, 82, 25), // "goToBookmarkButtonPressed"
QT_MOC_LITERAL(6, 108, 27), // "clearBookmarksButtonPressed"
QT_MOC_LITERAL(7, 136, 21), // "selectCurrentBookmark"
QT_MOC_LITERAL(8, 158, 8) // "modelIdx"

    },
    "BookmarksDialog\0retranslate\0\0"
    "addBookmarkButtonPressed\0"
    "removeBookmarkButtonPressed\0"
    "goToBookmarkButtonPressed\0"
    "clearBookmarksButtonPressed\0"
    "selectCurrentBookmark\0modelIdx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarksDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    8,

       0        // eod
};

void BookmarksDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookmarksDialog *_t = static_cast<BookmarksDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->addBookmarkButtonPressed(); break;
        case 2: _t->removeBookmarkButtonPressed(); break;
        case 3: _t->goToBookmarkButtonPressed(); break;
        case 4: _t->clearBookmarksButtonPressed(); break;
        case 5: _t->selectCurrentBookmark((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject BookmarksDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_BookmarksDialog.data,
      qt_meta_data_BookmarksDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BookmarksDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarksDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksDialog.stringdata0))
        return static_cast<void*>(const_cast< BookmarksDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int BookmarksDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
