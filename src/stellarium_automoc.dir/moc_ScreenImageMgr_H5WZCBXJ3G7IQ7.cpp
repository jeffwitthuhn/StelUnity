/****************************************************************************
** Meta object code from reading C++ file 'ScreenImageMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/scripting/ScreenImageMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenImageMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScreenImage_t {
    QByteArrayData data[4];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreenImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreenImage_t qt_meta_stringdata_ScreenImage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ScreenImage"
QT_MOC_LITERAL(1, 12, 10), // "setOpacity"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5) // "alpha"

    },
    "ScreenImage\0setOpacity\0\0alpha"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenImage[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,

       0        // eod
};

void ScreenImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreenImage *_t = static_cast<ScreenImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setOpacity((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ScreenImage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScreenImage.data,
      qt_meta_data_ScreenImage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScreenImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenImage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenImage.stringdata0))
        return static_cast<void*>(const_cast< ScreenImage*>(this));
    return QObject::qt_metacast(_clname);
}

int ScreenImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ScreenImageMgr_t {
    QByteArrayData data[28];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreenImageMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreenImageMgr_t qt_meta_stringdata_ScreenImageMgr = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ScreenImageMgr"
QT_MOC_LITERAL(1, 15, 17), // "createScreenImage"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 2), // "id"
QT_MOC_LITERAL(4, 37, 8), // "filename"
QT_MOC_LITERAL(5, 46, 1), // "x"
QT_MOC_LITERAL(6, 48, 1), // "y"
QT_MOC_LITERAL(7, 50, 5), // "scale"
QT_MOC_LITERAL(8, 56, 7), // "visible"
QT_MOC_LITERAL(9, 64, 5), // "alpha"
QT_MOC_LITERAL(10, 70, 12), // "fadeDuration"
QT_MOC_LITERAL(11, 83, 12), // "getShowImage"
QT_MOC_LITERAL(12, 96, 9), // "showImage"
QT_MOC_LITERAL(13, 106, 4), // "show"
QT_MOC_LITERAL(14, 111, 13), // "getImageWidth"
QT_MOC_LITERAL(15, 125, 14), // "getImageHeight"
QT_MOC_LITERAL(16, 140, 13), // "setImageScale"
QT_MOC_LITERAL(17, 154, 6), // "scaleX"
QT_MOC_LITERAL(18, 161, 6), // "scaleY"
QT_MOC_LITERAL(19, 168, 8), // "duration"
QT_MOC_LITERAL(20, 177, 14), // "getImageScaleX"
QT_MOC_LITERAL(21, 192, 14), // "getImageScaleY"
QT_MOC_LITERAL(22, 207, 13), // "setImageAlpha"
QT_MOC_LITERAL(23, 221, 10), // "setImageXY"
QT_MOC_LITERAL(24, 232, 10), // "addImageXY"
QT_MOC_LITERAL(25, 243, 11), // "deleteImage"
QT_MOC_LITERAL(26, 255, 15), // "deleteAllImages"
QT_MOC_LITERAL(27, 271, 14) // "getAllImageIDs"

    },
    "ScreenImageMgr\0createScreenImage\0\0id\0"
    "filename\0x\0y\0scale\0visible\0alpha\0"
    "fadeDuration\0getShowImage\0showImage\0"
    "show\0getImageWidth\0getImageHeight\0"
    "setImageScale\0scaleX\0scaleY\0duration\0"
    "getImageScaleX\0getImageScaleY\0"
    "setImageAlpha\0setImageXY\0addImageXY\0"
    "deleteImage\0deleteAllImages\0getAllImageIDs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenImageMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    8,  119,    2, 0x0a /* Public */,
       1,    7,  136,    2, 0x2a /* Public | MethodCloned */,
       1,    6,  151,    2, 0x2a /* Public | MethodCloned */,
       1,    5,  164,    2, 0x2a /* Public | MethodCloned */,
       1,    4,  175,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  184,    2, 0x0a /* Public */,
      12,    2,  187,    2, 0x0a /* Public */,
      14,    1,  192,    2, 0x0a /* Public */,
      15,    1,  195,    2, 0x0a /* Public */,
      16,    4,  198,    2, 0x0a /* Public */,
      16,    3,  207,    2, 0x2a /* Public | MethodCloned */,
      20,    1,  214,    2, 0x0a /* Public */,
      21,    1,  217,    2, 0x0a /* Public */,
      22,    2,  220,    2, 0x0a /* Public */,
      23,    4,  225,    2, 0x0a /* Public */,
      23,    3,  234,    2, 0x2a /* Public | MethodCloned */,
      24,    4,  241,    2, 0x0a /* Public */,
      24,    3,  250,    2, 0x2a /* Public | MethodCloned */,
      25,    1,  257,    2, 0x0a /* Public */,
      26,    0,  260,    2, 0x0a /* Public */,
      27,    0,  261,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Float, QMetaType::Float,    3,    4,    5,    6,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Float,    3,    4,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float,    3,    4,    5,    6,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   13,
    QMetaType::Int, QMetaType::QString,    3,
    QMetaType::Int, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,   17,   18,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,    3,   17,   18,
    QMetaType::Float, QMetaType::QString,    3,
    QMetaType::Float, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,    3,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    5,    6,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,    3,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    5,    6,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,    3,    5,    6,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::QStringList,

       0        // eod
};

void ScreenImageMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreenImageMgr *_t = static_cast<ScreenImageMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8]))); break;
        case 1: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 2: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 3: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 4: _t->createScreenImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 5: { bool _r = _t->getShowImage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->showImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: { int _r = _t->getImageWidth((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->getImageHeight((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: _t->setImageScale((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 10: _t->setImageScale((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 11: { float _r = _t->getImageScaleX((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 12: { float _r = _t->getImageScaleY((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 13: _t->setImageAlpha((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 14: _t->setImageXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 15: _t->setImageXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 16: _t->addImageXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 17: _t->addImageXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 18: _t->deleteImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->deleteAllImages(); break;
        case 20: { QStringList _r = _t->getAllImageIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ScreenImageMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_ScreenImageMgr.data,
      qt_meta_data_ScreenImageMgr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScreenImageMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenImageMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenImageMgr.stringdata0))
        return static_cast<void*>(const_cast< ScreenImageMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int ScreenImageMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
