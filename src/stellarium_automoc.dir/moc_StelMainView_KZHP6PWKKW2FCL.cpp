/****************************************************************************
** Meta object code from reading C++ file 'StelMainView.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/StelMainView.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelMainView.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelMainView_t {
    QByteArrayData data[32];
    char stringdata0[470];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelMainView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelMainView_t qt_meta_stringdata_StelMainView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "StelMainView"
QT_MOC_LITERAL(1, 13, 19), // "screenshotRequested"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "fullScreenChanged"
QT_MOC_LITERAL(4, 52, 1), // "b"
QT_MOC_LITERAL(5, 54, 13), // "setFullScreen"
QT_MOC_LITERAL(6, 68, 13), // "setFocusOnSky"
QT_MOC_LITERAL(7, 82, 14), // "saveScreenShot"
QT_MOC_LITERAL(8, 97, 10), // "filePrefix"
QT_MOC_LITERAL(9, 108, 7), // "saveDir"
QT_MOC_LITERAL(10, 116, 9), // "overwrite"
QT_MOC_LITERAL(11, 126, 29), // "getFlagInvertScreenShotColors"
QT_MOC_LITERAL(12, 156, 29), // "setFlagInvertScreenShotColors"
QT_MOC_LITERAL(13, 186, 27), // "getFlagOverwriteScreenShots"
QT_MOC_LITERAL(14, 214, 27), // "setFlagOverwriteScreenShots"
QT_MOC_LITERAL(15, 242, 20), // "getFlagCursorTimeout"
QT_MOC_LITERAL(16, 263, 16), // "getCursorTimeout"
QT_MOC_LITERAL(17, 280, 20), // "setFlagCursorTimeout"
QT_MOC_LITERAL(18, 301, 16), // "setCursorTimeout"
QT_MOC_LITERAL(19, 318, 1), // "t"
QT_MOC_LITERAL(20, 320, 9), // "setMinFps"
QT_MOC_LITERAL(21, 330, 1), // "m"
QT_MOC_LITERAL(22, 332, 9), // "getMinFps"
QT_MOC_LITERAL(23, 342, 9), // "setMaxFps"
QT_MOC_LITERAL(24, 352, 9), // "getMaxFps"
QT_MOC_LITERAL(25, 362, 17), // "maxFpsSceneUpdate"
QT_MOC_LITERAL(26, 380, 11), // "updateScene"
QT_MOC_LITERAL(27, 392, 15), // "thereWasAnEvent"
QT_MOC_LITERAL(28, 408, 12), // "doScreenshot"
QT_MOC_LITERAL(29, 421, 13), // "minFpsChanged"
QT_MOC_LITERAL(30, 435, 23), // "updateNightModeProperty"
QT_MOC_LITERAL(31, 459, 10) // "fullScreen"

    },
    "StelMainView\0screenshotRequested\0\0"
    "fullScreenChanged\0b\0setFullScreen\0"
    "setFocusOnSky\0saveScreenShot\0filePrefix\0"
    "saveDir\0overwrite\0getFlagInvertScreenShotColors\0"
    "setFlagInvertScreenShotColors\0"
    "getFlagOverwriteScreenShots\0"
    "setFlagOverwriteScreenShots\0"
    "getFlagCursorTimeout\0getCursorTimeout\0"
    "setFlagCursorTimeout\0setCursorTimeout\0"
    "t\0setMinFps\0m\0getMinFps\0setMaxFps\0"
    "getMaxFps\0maxFpsSceneUpdate\0updateScene\0"
    "thereWasAnEvent\0doScreenshot\0minFpsChanged\0"
    "updateNightModeProperty\0fullScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelMainView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       1,  200, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x06 /* Public */,
       3,    1,  145,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  148,    2, 0x0a /* Public */,
       6,    0,  151,    2, 0x0a /* Public */,
       7,    3,  152,    2, 0x0a /* Public */,
       7,    2,  159,    2, 0x2a /* Public | MethodCloned */,
       7,    1,  164,    2, 0x2a /* Public | MethodCloned */,
       7,    0,  167,    2, 0x2a /* Public | MethodCloned */,
      11,    0,  168,    2, 0x0a /* Public */,
      12,    1,  169,    2, 0x0a /* Public */,
      13,    0,  172,    2, 0x0a /* Public */,
      14,    1,  173,    2, 0x0a /* Public */,
      15,    0,  176,    2, 0x0a /* Public */,
      16,    0,  177,    2, 0x0a /* Public */,
      17,    1,  178,    2, 0x0a /* Public */,
      18,    1,  181,    2, 0x0a /* Public */,
      20,    1,  184,    2, 0x0a /* Public */,
      22,    0,  187,    2, 0x0a /* Public */,
      23,    1,  188,    2, 0x0a /* Public */,
      24,    0,  191,    2, 0x0a /* Public */,
      25,    0,  192,    2, 0x0a /* Public */,
      26,    0,  193,    2, 0x0a /* Public */,
      27,    0,  194,    2, 0x0a /* Public */,
      28,    0,  195,    2, 0x08 /* Private */,
      29,    0,  196,    2, 0x08 /* Private */,
      30,    1,  197,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Bool,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Void, QMetaType::Float,   21,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   21,
    QMetaType::Float,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

 // properties: name, type, flags
      31, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,

       0        // eod
};

void StelMainView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelMainView *_t = static_cast<StelMainView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->screenshotRequested(); break;
        case 1: _t->fullScreenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setFocusOnSky(); break;
        case 4: _t->saveScreenShot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 5: _t->saveScreenShot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->saveScreenShot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->saveScreenShot(); break;
        case 8: { bool _r = _t->getFlagInvertScreenShotColors();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->setFlagInvertScreenShotColors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: { bool _r = _t->getFlagOverwriteScreenShots();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->setFlagOverwriteScreenShots((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: { bool _r = _t->getFlagCursorTimeout();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { float _r = _t->getCursorTimeout();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 14: _t->setFlagCursorTimeout((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setCursorTimeout((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->setMinFps((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 17: { float _r = _t->getMinFps();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 18: _t->setMaxFps((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 19: { float _r = _t->getMaxFps();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 20: _t->maxFpsSceneUpdate(); break;
        case 21: _t->updateScene(); break;
        case 22: _t->thereWasAnEvent(); break;
        case 23: _t->doScreenshot(); break;
        case 24: _t->minFpsChanged(); break;
        case 25: _t->updateNightModeProperty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelMainView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainView::screenshotRequested)) {
                *result = 0;
            }
        }
        {
            typedef void (StelMainView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainView::fullScreenChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StelMainView *_t = static_cast<StelMainView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isFullScreen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        StelMainView *_t = static_cast<StelMainView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFullScreen(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject StelMainView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_StelMainView.data,
      qt_meta_data_StelMainView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelMainView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelMainView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelMainView.stringdata0))
        return static_cast<void*>(const_cast< StelMainView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int StelMainView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StelMainView::screenshotRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void StelMainView::fullScreenChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
