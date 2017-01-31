/****************************************************************************
** Meta object code from reading C++ file 'StoredViewDialog_p.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Scenery3d/src/gui/StoredViewDialog_p.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StoredViewDialog_p.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CustomTextEdit_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomTextEdit_t qt_meta_stringdata_CustomTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CustomTextEdit"
QT_MOC_LITERAL(1, 15, 15), // "editingFinished"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16) // "handleTextChange"

    },
    "CustomTextEdit\0editingFinished\0\0"
    "handleTextChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomTextEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CustomTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomTextEdit *_t = static_cast<CustomTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editingFinished(); break;
        case 1: _t->handleTextChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CustomTextEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CustomTextEdit::editingFinished)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CustomTextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_CustomTextEdit.data,
      qt_meta_data_CustomTextEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CustomTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CustomTextEdit.stringdata0))
        return static_cast<void*>(const_cast< CustomTextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int CustomTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CustomTextEdit::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_StoredViewModel_t {
    QByteArrayData data[5];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StoredViewModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StoredViewModel_t qt_meta_stringdata_StoredViewModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "StoredViewModel"
QT_MOC_LITERAL(1, 16, 8), // "setScene"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "SceneInfo"
QT_MOC_LITERAL(4, 36, 5) // "scene"

    },
    "StoredViewModel\0setScene\0\0SceneInfo\0"
    "scene"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StoredViewModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void StoredViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StoredViewModel *_t = static_cast<StoredViewModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setScene((*reinterpret_cast< const SceneInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SceneInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject StoredViewModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_StoredViewModel.data,
      qt_meta_data_StoredViewModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StoredViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StoredViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StoredViewModel.stringdata0))
        return static_cast<void*>(const_cast< StoredViewModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int StoredViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
