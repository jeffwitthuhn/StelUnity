/****************************************************************************
** Meta object code from reading C++ file 'SpoutSender.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/SpoutSender.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpoutSender.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpoutSender_t {
    QByteArrayData data[9];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpoutSender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpoutSender_t qt_meta_stringdata_SpoutSender = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SpoutSender"
QT_MOC_LITERAL(1, 12, 19), // "captureAndSendFrame"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "GLuint"
QT_MOC_LITERAL(4, 40, 3), // "fbo"
QT_MOC_LITERAL(5, 44, 6), // "resize"
QT_MOC_LITERAL(6, 51, 5), // "width"
QT_MOC_LITERAL(7, 57, 6), // "height"
QT_MOC_LITERAL(8, 64, 7) // "isValid"

    },
    "SpoutSender\0captureAndSendFrame\0\0"
    "GLuint\0fbo\0resize\0width\0height\0isValid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpoutSender[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    2,   32,    2, 0x0a /* Public */,
       8,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    6,    7,
    QMetaType::Bool,

       0        // eod
};

void SpoutSender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpoutSender *_t = static_cast<SpoutSender *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->captureAndSendFrame((*reinterpret_cast< GLuint(*)>(_a[1]))); break;
        case 1: _t->resize((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: { bool _r = _t->isValid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject SpoutSender::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpoutSender.data,
      qt_meta_data_SpoutSender,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpoutSender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpoutSender::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpoutSender.stringdata0))
        return static_cast<void*>(const_cast< SpoutSender*>(this));
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(const_cast< SpoutSender*>(this));
    return QObject::qt_metacast(_clname);
}

int SpoutSender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
