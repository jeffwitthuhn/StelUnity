/****************************************************************************
** Meta object code from reading C++ file 'Quasars.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Quasars/src/Quasars.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Quasars.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Quasars_t {
    QByteArrayData data[30];
    char stringdata0[423];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Quasars_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Quasars_t qt_meta_stringdata_Quasars = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Quasars"
QT_MOC_LITERAL(1, 8, 18), // "updateStateChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 20), // "Quasars::UpdateState"
QT_MOC_LITERAL(4, 49, 5), // "state"
QT_MOC_LITERAL(5, 55, 18), // "jsonUpdateComplete"
QT_MOC_LITERAL(6, 74, 28), // "flagQuasarsVisibilityChanged"
QT_MOC_LITERAL(7, 103, 1), // "b"
QT_MOC_LITERAL(8, 105, 10), // "updateJSON"
QT_MOC_LITERAL(9, 116, 18), // "setFlagShowQuasars"
QT_MOC_LITERAL(10, 135, 18), // "getFlagShowQuasars"
QT_MOC_LITERAL(11, 154, 24), // "setFlagShowQuasarsButton"
QT_MOC_LITERAL(12, 179, 24), // "getFlagShowQuasarsButton"
QT_MOC_LITERAL(13, 204, 15), // "getCountQuasars"
QT_MOC_LITERAL(14, 220, 14), // "getDisplayMode"
QT_MOC_LITERAL(15, 235, 14), // "setDisplayMode"
QT_MOC_LITERAL(16, 250, 14), // "getMarkerColor"
QT_MOC_LITERAL(17, 265, 5), // "Vec3f"
QT_MOC_LITERAL(18, 271, 14), // "setMarkerColor"
QT_MOC_LITERAL(19, 286, 1), // "c"
QT_MOC_LITERAL(20, 288, 14), // "checkForUpdate"
QT_MOC_LITERAL(21, 303, 22), // "updateDownloadComplete"
QT_MOC_LITERAL(22, 326, 14), // "QNetworkReply*"
QT_MOC_LITERAL(23, 341, 5), // "reply"
QT_MOC_LITERAL(24, 347, 14), // "displayMessage"
QT_MOC_LITERAL(25, 362, 7), // "message"
QT_MOC_LITERAL(26, 370, 8), // "hexColor"
QT_MOC_LITERAL(27, 379, 14), // "messageTimeout"
QT_MOC_LITERAL(28, 394, 13), // "reloadCatalog"
QT_MOC_LITERAL(29, 408, 14) // "quasarsVisible"

    },
    "Quasars\0updateStateChanged\0\0"
    "Quasars::UpdateState\0state\0"
    "jsonUpdateComplete\0flagQuasarsVisibilityChanged\0"
    "b\0updateJSON\0setFlagShowQuasars\0"
    "getFlagShowQuasars\0setFlagShowQuasarsButton\0"
    "getFlagShowQuasarsButton\0getCountQuasars\0"
    "getDisplayMode\0setDisplayMode\0"
    "getMarkerColor\0Vec3f\0setMarkerColor\0"
    "c\0checkForUpdate\0updateDownloadComplete\0"
    "QNetworkReply*\0reply\0displayMessage\0"
    "message\0hexColor\0messageTimeout\0"
    "reloadCatalog\0quasarsVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Quasars[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       1,  148, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    1,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  116,    2, 0x0a /* Public */,
       9,    1,  117,    2, 0x0a /* Public */,
      10,    0,  120,    2, 0x0a /* Public */,
      11,    1,  121,    2, 0x0a /* Public */,
      12,    0,  124,    2, 0x0a /* Public */,
      13,    0,  125,    2, 0x0a /* Public */,
      14,    0,  126,    2, 0x0a /* Public */,
      15,    1,  127,    2, 0x0a /* Public */,
      16,    0,  130,    2, 0x0a /* Public */,
      18,    1,  131,    2, 0x0a /* Public */,
      20,    0,  134,    2, 0x08 /* Private */,
      21,    1,  135,    2, 0x08 /* Private */,
      24,    2,  138,    2, 0x08 /* Private */,
      24,    1,  143,    2, 0x28 /* Private | MethodCloned */,
      27,    0,  146,    2, 0x08 /* Private */,
      28,    0,  147,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    7,
    0x80000000 | 17,
    QMetaType::Void, 0x80000000 | 17,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   25,   26,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      29, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       2,

       0        // eod
};

void Quasars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Quasars *_t = static_cast<Quasars *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateStateChanged((*reinterpret_cast< Quasars::UpdateState(*)>(_a[1]))); break;
        case 1: _t->jsonUpdateComplete(); break;
        case 2: _t->flagQuasarsVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->updateJSON(); break;
        case 4: _t->setFlagShowQuasars((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->getFlagShowQuasars();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setFlagShowQuasarsButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->getFlagShowQuasarsButton();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->getCountQuasars();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->getDisplayMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->setDisplayMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { Vec3f _r = _t->getMarkerColor();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 12: _t->setMarkerColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 13: _t->checkForUpdate(); break;
        case 14: _t->updateDownloadComplete((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 15: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->messageTimeout(); break;
        case 18: _t->reloadCatalog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Quasars::*_t)(Quasars::UpdateState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Quasars::updateStateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Quasars::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Quasars::jsonUpdateComplete)) {
                *result = 1;
            }
        }
        {
            typedef void (Quasars::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Quasars::flagQuasarsVisibilityChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Quasars *_t = static_cast<Quasars *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getFlagShowQuasars(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Quasars *_t = static_cast<Quasars *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlagShowQuasars(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Quasars::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_Quasars.data,
      qt_meta_data_Quasars,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Quasars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Quasars::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Quasars.stringdata0))
        return static_cast<void*>(const_cast< Quasars*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int Quasars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
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
void Quasars::updateStateChanged(Quasars::UpdateState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Quasars::jsonUpdateComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Quasars::flagQuasarsVisibilityChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QuasarsStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuasarsStelPluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuasarsStelPluginInterface_t qt_meta_stringdata_QuasarsStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 26) // "QuasarsStelPluginInterface"

    },
    "QuasarsStelPluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuasarsStelPluginInterface[] = {

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

void QuasarsStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QuasarsStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QuasarsStelPluginInterface.data,
      qt_meta_data_QuasarsStelPluginInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QuasarsStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuasarsStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QuasarsStelPluginInterface.stringdata0))
        return static_cast<void*>(const_cast< QuasarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< QuasarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< QuasarsStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int QuasarsStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 'o',  'r',  'g',  '.',  's',  't', 
    'e',  'l',  'l',  'a',  'r',  'i',  'u',  'm', 
    '.',  'S',  't',  'e',  'l',  'P',  'l',  'u', 
    'g',  'i',  'n',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  0x9b, 0x09, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x1a, 0x00, 'Q',  'u', 
    'a',  's',  'a',  'r',  's',  'S',  't',  'e', 
    'l',  'P',  'l',  'u',  'g',  'i',  'n',  'I', 
    'n',  't',  'e',  'r',  'f',  'a',  'c',  'e', 
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x12, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 'x',  0x00, 0x00, 0x00,
    'h',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 'o',  'r',  'g',  '.',  's',  't', 
    'e',  'l',  'l',  'a',  'r',  'i',  'u',  'm', 
    '.',  'S',  't',  'e',  'l',  'P',  'l',  'u', 
    'g',  'i',  'n',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  0x95, 0x09, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0d, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x1a, 0x00, 'Q',  'u',  'a',  's',  'a',  'r', 
    's',  'S',  't',  'e',  'l',  'P',  'l',  'u', 
    'g',  'i',  'n',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(QuasarsStelPluginInterface, QuasarsStelPluginInterface)

QT_END_MOC_NAMESPACE
