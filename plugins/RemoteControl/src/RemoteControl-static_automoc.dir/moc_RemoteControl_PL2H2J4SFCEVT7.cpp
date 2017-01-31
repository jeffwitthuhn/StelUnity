/****************************************************************************
** Meta object code from reading C++ file 'RemoteControl.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/RemoteControl/src/RemoteControl.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RemoteControl.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RemoteControl_t {
    QByteArrayData data[24];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteControl_t qt_meta_stringdata_RemoteControl = {
    {
QT_MOC_LITERAL(0, 0, 13), // "RemoteControl"
QT_MOC_LITERAL(1, 14, 18), // "flagEnabledChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "val"
QT_MOC_LITERAL(4, 38, 20), // "flagAutoStartChanged"
QT_MOC_LITERAL(5, 59, 22), // "flagUsePasswordChanged"
QT_MOC_LITERAL(6, 82, 11), // "portChanged"
QT_MOC_LITERAL(7, 94, 15), // "passwordChanged"
QT_MOC_LITERAL(8, 110, 14), // "setFlagEnabled"
QT_MOC_LITERAL(9, 125, 1), // "b"
QT_MOC_LITERAL(10, 127, 16), // "setFlagAutoStart"
QT_MOC_LITERAL(11, 144, 18), // "setFlagUsePassword"
QT_MOC_LITERAL(12, 163, 11), // "setPassword"
QT_MOC_LITERAL(13, 175, 8), // "password"
QT_MOC_LITERAL(14, 184, 7), // "setPort"
QT_MOC_LITERAL(15, 192, 4), // "port"
QT_MOC_LITERAL(16, 197, 12), // "loadSettings"
QT_MOC_LITERAL(17, 210, 12), // "saveSettings"
QT_MOC_LITERAL(18, 223, 22), // "restoreDefaultSettings"
QT_MOC_LITERAL(19, 246, 11), // "startServer"
QT_MOC_LITERAL(20, 258, 10), // "stopServer"
QT_MOC_LITERAL(21, 269, 7), // "enabled"
QT_MOC_LITERAL(22, 277, 9), // "autoStart"
QT_MOC_LITERAL(23, 287, 11) // "usePassword"

    },
    "RemoteControl\0flagEnabledChanged\0\0val\0"
    "flagAutoStartChanged\0flagUsePasswordChanged\0"
    "portChanged\0passwordChanged\0setFlagEnabled\0"
    "b\0setFlagAutoStart\0setFlagUsePassword\0"
    "setPassword\0password\0setPort\0port\0"
    "loadSettings\0saveSettings\0"
    "restoreDefaultSettings\0startServer\0"
    "stopServer\0enabled\0autoStart\0usePassword"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       3,  124, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       5,    1,   95,    2, 0x06 /* Public */,
       6,    1,   98,    2, 0x06 /* Public */,
       7,    1,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  104,    2, 0x0a /* Public */,
      10,    1,  107,    2, 0x0a /* Public */,
      11,    1,  110,    2, 0x0a /* Public */,
      12,    1,  113,    2, 0x0a /* Public */,
      14,    1,  116,    2, 0x0a /* Public */,
      16,    0,  119,    2, 0x0a /* Public */,
      17,    0,  120,    2, 0x0a /* Public */,
      18,    0,  121,    2, 0x0a /* Public */,
      19,    0,  122,    2, 0x0a /* Public */,
      20,    0,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      21, QMetaType::Bool, 0x00495003,
      22, QMetaType::Bool, 0x00495003,
      23, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void RemoteControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RemoteControl *_t = static_cast<RemoteControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flagEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->flagAutoStartChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->flagUsePasswordChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->portChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->passwordChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setFlagEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setFlagAutoStart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setFlagUsePassword((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setPassword((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setPort((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 10: _t->loadSettings(); break;
        case 11: _t->saveSettings(); break;
        case 12: _t->restoreDefaultSettings(); break;
        case 13: _t->startServer(); break;
        case 14: _t->stopServer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RemoteControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteControl::flagEnabledChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (RemoteControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteControl::flagAutoStartChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (RemoteControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteControl::flagUsePasswordChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (RemoteControl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteControl::portChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (RemoteControl::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteControl::passwordChanged)) {
                *result = 4;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        RemoteControl *_t = static_cast<RemoteControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getFlagEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getFlagAutoStart(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getFlagUsePassword(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        RemoteControl *_t = static_cast<RemoteControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlagEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setFlagAutoStart(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setFlagUsePassword(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject RemoteControl::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_RemoteControl.data,
      qt_meta_data_RemoteControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RemoteControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteControl.stringdata0))
        return static_cast<void*>(const_cast< RemoteControl*>(this));
    return StelModule::qt_metacast(_clname);
}

int RemoteControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RemoteControl::flagEnabledChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RemoteControl::flagAutoStartChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RemoteControl::flagUsePasswordChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RemoteControl::portChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RemoteControl::passwordChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_RemoteControlStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteControlStelPluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteControlStelPluginInterface_t qt_meta_stringdata_RemoteControlStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 32) // "RemoteControlStelPluginInterface"

    },
    "RemoteControlStelPluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteControlStelPluginInterface[] = {

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

void RemoteControlStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject RemoteControlStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RemoteControlStelPluginInterface.data,
      qt_meta_data_RemoteControlStelPluginInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RemoteControlStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteControlStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteControlStelPluginInterface.stringdata0))
        return static_cast<void*>(const_cast< RemoteControlStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< RemoteControlStelPluginInterface*>(this));
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< RemoteControlStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int RemoteControlStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0xbc, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa8, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 'o',  'r',  'g',  '.',  's',  't', 
    'e',  'l',  'l',  'a',  'r',  'i',  'u',  'm', 
    '.',  'S',  't',  'e',  'l',  'P',  'l',  'u', 
    'g',  'i',  'n',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  0x9b, 0x09, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, ' ',  0x00, 'R',  'e', 
    'm',  'o',  't',  'e',  'C',  'o',  'n',  't', 
    'r',  'o',  'l',  'S',  't',  'e',  'l',  'P', 
    'l',  'u',  'g',  'i',  'n',  'I',  'n',  't', 
    'e',  'r',  'f',  'a',  'c',  'e',  0x00, 0x00,
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x13, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xbc, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa8, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
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
    ' ',  0x00, 'R',  'e',  'm',  'o',  't',  'e', 
    'C',  'o',  'n',  't',  'r',  'o',  'l',  'S', 
    't',  'e',  'l',  'P',  'l',  'u',  'g',  'i', 
    'n',  'I',  'n',  't',  'e',  'r',  'f',  'a', 
    'c',  'e',  0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(RemoteControlStelPluginInterface, RemoteControlStelPluginInterface)

QT_END_MOC_NAMESPACE
