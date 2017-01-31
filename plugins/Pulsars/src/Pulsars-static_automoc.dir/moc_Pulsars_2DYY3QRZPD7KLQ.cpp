/****************************************************************************
** Meta object code from reading C++ file 'Pulsars.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Pulsars/src/Pulsars.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Pulsars.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Pulsars_t {
    QByteArrayData data[33];
    char stringdata0[457];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pulsars_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pulsars_t qt_meta_stringdata_Pulsars = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Pulsars"
QT_MOC_LITERAL(1, 8, 18), // "updateStateChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 20), // "Pulsars::UpdateState"
QT_MOC_LITERAL(4, 49, 5), // "state"
QT_MOC_LITERAL(5, 55, 18), // "jsonUpdateComplete"
QT_MOC_LITERAL(6, 74, 28), // "flagPulsarsVisibilityChanged"
QT_MOC_LITERAL(7, 103, 1), // "b"
QT_MOC_LITERAL(8, 105, 24), // "setFlagShowPulsarsButton"
QT_MOC_LITERAL(9, 130, 24), // "getFlagShowPulsarsButton"
QT_MOC_LITERAL(10, 155, 18), // "setFlagShowPulsars"
QT_MOC_LITERAL(11, 174, 18), // "getFlagShowPulsars"
QT_MOC_LITERAL(12, 193, 14), // "getDisplayMode"
QT_MOC_LITERAL(13, 208, 14), // "setDisplayMode"
QT_MOC_LITERAL(14, 223, 13), // "getGlitchFlag"
QT_MOC_LITERAL(15, 237, 13), // "setGlitchFlag"
QT_MOC_LITERAL(16, 251, 14), // "getMarkerColor"
QT_MOC_LITERAL(17, 266, 5), // "Vec3f"
QT_MOC_LITERAL(18, 272, 5), // "mtype"
QT_MOC_LITERAL(19, 278, 14), // "setMarkerColor"
QT_MOC_LITERAL(20, 293, 1), // "c"
QT_MOC_LITERAL(21, 295, 15), // "getCountPulsars"
QT_MOC_LITERAL(22, 311, 10), // "updateJSON"
QT_MOC_LITERAL(23, 322, 14), // "checkForUpdate"
QT_MOC_LITERAL(24, 337, 22), // "updateDownloadComplete"
QT_MOC_LITERAL(25, 360, 14), // "QNetworkReply*"
QT_MOC_LITERAL(26, 375, 5), // "reply"
QT_MOC_LITERAL(27, 381, 13), // "reloadCatalog"
QT_MOC_LITERAL(28, 395, 14), // "displayMessage"
QT_MOC_LITERAL(29, 410, 7), // "message"
QT_MOC_LITERAL(30, 418, 8), // "hexColor"
QT_MOC_LITERAL(31, 427, 14), // "messageTimeout"
QT_MOC_LITERAL(32, 442, 14) // "pulsarsVisible"

    },
    "Pulsars\0updateStateChanged\0\0"
    "Pulsars::UpdateState\0state\0"
    "jsonUpdateComplete\0flagPulsarsVisibilityChanged\0"
    "b\0setFlagShowPulsarsButton\0"
    "getFlagShowPulsarsButton\0setFlagShowPulsars\0"
    "getFlagShowPulsars\0getDisplayMode\0"
    "setDisplayMode\0getGlitchFlag\0setGlitchFlag\0"
    "getMarkerColor\0Vec3f\0mtype\0setMarkerColor\0"
    "c\0getCountPulsars\0updateJSON\0"
    "checkForUpdate\0updateDownloadComplete\0"
    "QNetworkReply*\0reply\0reloadCatalog\0"
    "displayMessage\0message\0hexColor\0"
    "messageTimeout\0pulsarsVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pulsars[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       1,  180, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,
       5,    0,  132,    2, 0x06 /* Public */,
       6,    1,  133,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  136,    2, 0x0a /* Public */,
       9,    0,  139,    2, 0x0a /* Public */,
      10,    1,  140,    2, 0x0a /* Public */,
      11,    0,  143,    2, 0x0a /* Public */,
      12,    0,  144,    2, 0x0a /* Public */,
      13,    1,  145,    2, 0x0a /* Public */,
      14,    0,  148,    2, 0x0a /* Public */,
      15,    1,  149,    2, 0x0a /* Public */,
      16,    1,  152,    2, 0x0a /* Public */,
      16,    0,  155,    2, 0x2a /* Public | MethodCloned */,
      19,    2,  156,    2, 0x0a /* Public */,
      19,    1,  161,    2, 0x2a /* Public | MethodCloned */,
      21,    0,  164,    2, 0x0a /* Public */,
      22,    0,  165,    2, 0x0a /* Public */,
      23,    0,  166,    2, 0x08 /* Private */,
      24,    1,  167,    2, 0x08 /* Private */,
      27,    0,  170,    2, 0x08 /* Private */,
      28,    2,  171,    2, 0x08 /* Private */,
      28,    1,  176,    2, 0x28 /* Private | MethodCloned */,
      31,    0,  179,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    7,
    0x80000000 | 17, QMetaType::Bool,   18,
    0x80000000 | 17,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Bool,   20,   18,
    QMetaType::Void, 0x80000000 | 17,   20,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   29,   30,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,

 // properties: name, type, flags
      32, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       2,

       0        // eod
};

void Pulsars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Pulsars *_t = static_cast<Pulsars *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateStateChanged((*reinterpret_cast< Pulsars::UpdateState(*)>(_a[1]))); break;
        case 1: _t->jsonUpdateComplete(); break;
        case 2: _t->flagPulsarsVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setFlagShowPulsarsButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { bool _r = _t->getFlagShowPulsarsButton();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setFlagShowPulsars((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { bool _r = _t->getFlagShowPulsars();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->getDisplayMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->setDisplayMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: { bool _r = _t->getGlitchFlag();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->setGlitchFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { Vec3f _r = _t->getMarkerColor((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 12: { Vec3f _r = _t->getMarkerColor();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 13: _t->setMarkerColor((*reinterpret_cast< const Vec3f(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->setMarkerColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 15: { int _r = _t->getCountPulsars();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: _t->updateJSON(); break;
        case 17: _t->checkForUpdate(); break;
        case 18: _t->updateDownloadComplete((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 19: _t->reloadCatalog(); break;
        case 20: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->messageTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 14:
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
            typedef void (Pulsars::*_t)(Pulsars::UpdateState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pulsars::updateStateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Pulsars::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pulsars::jsonUpdateComplete)) {
                *result = 1;
            }
        }
        {
            typedef void (Pulsars::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pulsars::flagPulsarsVisibilityChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Pulsars *_t = static_cast<Pulsars *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getFlagShowPulsars(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Pulsars *_t = static_cast<Pulsars *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlagShowPulsars(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Pulsars::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_Pulsars.data,
      qt_meta_data_Pulsars,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pulsars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pulsars::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pulsars.stringdata0))
        return static_cast<void*>(const_cast< Pulsars*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int Pulsars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
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
void Pulsars::updateStateChanged(Pulsars::UpdateState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Pulsars::jsonUpdateComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Pulsars::flagPulsarsVisibilityChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_PulsarsStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PulsarsStelPluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PulsarsStelPluginInterface_t qt_meta_stringdata_PulsarsStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 26) // "PulsarsStelPluginInterface"

    },
    "PulsarsStelPluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PulsarsStelPluginInterface[] = {

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

void PulsarsStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PulsarsStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PulsarsStelPluginInterface.data,
      qt_meta_data_PulsarsStelPluginInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PulsarsStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PulsarsStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PulsarsStelPluginInterface.stringdata0))
        return static_cast<void*>(const_cast< PulsarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< PulsarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< PulsarsStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int PulsarsStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    'a',  'm',  'e',  0x00, 0x1a, 0x00, 'P',  'u', 
    'l',  's',  'a',  'r',  's',  'S',  't',  'e', 
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
    0x1a, 0x00, 'P',  'u',  'l',  's',  'a',  'r', 
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

QT_MOC_EXPORT_PLUGIN(PulsarsStelPluginInterface, PulsarsStelPluginInterface)

QT_END_MOC_NAMESPACE
