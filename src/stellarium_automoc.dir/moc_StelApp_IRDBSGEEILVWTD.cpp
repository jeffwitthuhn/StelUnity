/****************************************************************************
** Meta object code from reading C++ file 'StelApp.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelApp.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelApp.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelApp_t {
    QByteArrayData data[27];
    char stringdata0[440];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelApp_t qt_meta_stringdata_StelApp = {
    {
QT_MOC_LITERAL(0, 0, 7), // "StelApp"
QT_MOC_LITERAL(1, 8, 22), // "visionNightModeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "colorSchemeChanged"
QT_MOC_LITERAL(4, 51, 15), // "languageChanged"
QT_MOC_LITERAL(5, 67, 16), // "progressBarAdded"
QT_MOC_LITERAL(6, 84, 29), // "const StelProgressController*"
QT_MOC_LITERAL(7, 114, 18), // "progressBarRemoved"
QT_MOC_LITERAL(8, 133, 11), // "aboutToQuit"
QT_MOC_LITERAL(9, 145, 18), // "setVisionModeNight"
QT_MOC_LITERAL(10, 164, 18), // "getVisionModeNight"
QT_MOC_LITERAL(11, 183, 25), // "setFlagShowDecimalDegrees"
QT_MOC_LITERAL(12, 209, 1), // "b"
QT_MOC_LITERAL(13, 211, 25), // "getFlagShowDecimalDegrees"
QT_MOC_LITERAL(14, 237, 24), // "getFlagSouthAzimuthUsage"
QT_MOC_LITERAL(15, 262, 24), // "setFlagSouthAzimuthUsage"
QT_MOC_LITERAL(16, 287, 3), // "use"
QT_MOC_LITERAL(17, 291, 22), // "getFlagOldAzimuthUsage"
QT_MOC_LITERAL(18, 314, 22), // "setFlagOldAzimuthUsage"
QT_MOC_LITERAL(19, 337, 6), // "getFps"
QT_MOC_LITERAL(20, 344, 15), // "getTotalRunTime"
QT_MOC_LITERAL(21, 360, 16), // "getAnimationTime"
QT_MOC_LITERAL(22, 377, 26), // "reportFileDownloadFinished"
QT_MOC_LITERAL(23, 404, 14), // "QNetworkReply*"
QT_MOC_LITERAL(24, 419, 5), // "reply"
QT_MOC_LITERAL(25, 425, 4), // "quit"
QT_MOC_LITERAL(26, 430, 9) // "nightMode"

    },
    "StelApp\0visionNightModeChanged\0\0"
    "colorSchemeChanged\0languageChanged\0"
    "progressBarAdded\0const StelProgressController*\0"
    "progressBarRemoved\0aboutToQuit\0"
    "setVisionModeNight\0getVisionModeNight\0"
    "setFlagShowDecimalDegrees\0b\0"
    "getFlagShowDecimalDegrees\0"
    "getFlagSouthAzimuthUsage\0"
    "setFlagSouthAzimuthUsage\0use\0"
    "getFlagOldAzimuthUsage\0setFlagOldAzimuthUsage\0"
    "getFps\0getTotalRunTime\0getAnimationTime\0"
    "reportFileDownloadFinished\0QNetworkReply*\0"
    "reply\0quit\0nightMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       1,  146, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       3,    1,  112,    2, 0x06 /* Public */,
       4,    0,  115,    2, 0x06 /* Public */,
       5,    1,  116,    2, 0x06 /* Public */,
       7,    1,  119,    2, 0x06 /* Public */,
       8,    0,  122,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  123,    2, 0x0a /* Public */,
      10,    0,  126,    2, 0x0a /* Public */,
      11,    1,  127,    2, 0x0a /* Public */,
      13,    0,  130,    2, 0x0a /* Public */,
      14,    0,  131,    2, 0x0a /* Public */,
      15,    1,  132,    2, 0x0a /* Public */,
      17,    0,  135,    2, 0x0a /* Public */,
      18,    1,  136,    2, 0x0a /* Public */,
      19,    0,  139,    2, 0x0a /* Public */,
      20,    0,  140,    2, 0x0a /* Public */,
      21,    0,  141,    2, 0x0a /* Public */,
      22,    1,  142,    2, 0x0a /* Public */,
      25,    0,  145,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Float,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,

 // properties: name, type, flags
      26, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void StelApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelApp *_t = static_cast<StelApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visionNightModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->colorSchemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->languageChanged(); break;
        case 3: _t->progressBarAdded((*reinterpret_cast< const StelProgressController*(*)>(_a[1]))); break;
        case 4: _t->progressBarRemoved((*reinterpret_cast< const StelProgressController*(*)>(_a[1]))); break;
        case 5: _t->aboutToQuit(); break;
        case 6: _t->setVisionModeNight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->getVisionModeNight();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->setFlagShowDecimalDegrees((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: { bool _r = _t->getFlagShowDecimalDegrees();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->getFlagSouthAzimuthUsage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->setFlagSouthAzimuthUsage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: { bool _r = _t->getFlagOldAzimuthUsage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->setFlagOldAzimuthUsage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: { float _r = _t->getFps();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 15: { double _r = _t->getTotalRunTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 16: { double _r = _t->getAnimationTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 17: _t->reportFileDownloadFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 18: _t->quit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelApp::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelApp::visionNightModeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (StelApp::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelApp::colorSchemeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (StelApp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelApp::languageChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (StelApp::*_t)(const StelProgressController * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelApp::progressBarAdded)) {
                *result = 3;
            }
        }
        {
            typedef void (StelApp::*_t)(const StelProgressController * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelApp::progressBarRemoved)) {
                *result = 4;
            }
        }
        {
            typedef void (StelApp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelApp::aboutToQuit)) {
                *result = 5;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StelApp *_t = static_cast<StelApp *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getVisionModeNight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        StelApp *_t = static_cast<StelApp *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVisionModeNight(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject StelApp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelApp.data,
      qt_meta_data_StelApp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelApp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelApp.stringdata0))
        return static_cast<void*>(const_cast< StelApp*>(this));
    return QObject::qt_metacast(_clname);
}

int StelApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
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
void StelApp::visionNightModeChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StelApp::colorSchemeChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StelApp::languageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void StelApp::progressBarAdded(const StelProgressController * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StelApp::progressBarRemoved(const StelProgressController * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StelApp::aboutToQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
