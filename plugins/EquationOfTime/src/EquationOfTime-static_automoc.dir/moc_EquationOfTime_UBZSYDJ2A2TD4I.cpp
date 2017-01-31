/****************************************************************************
** Meta object code from reading C++ file 'EquationOfTime.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/EquationOfTime/src/EquationOfTime.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EquationOfTime.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EquationOfTime_t {
    QByteArrayData data[13];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EquationOfTime_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EquationOfTime_t qt_meta_stringdata_EquationOfTime = {
    {
QT_MOC_LITERAL(0, 0, 14), // "EquationOfTime"
QT_MOC_LITERAL(1, 15, 26), // "equationOfTimeStateChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 1), // "b"
QT_MOC_LITERAL(4, 45, 20), // "enableEquationOfTime"
QT_MOC_LITERAL(5, 66, 20), // "setFlagInvertedValue"
QT_MOC_LITERAL(6, 87, 15), // "setFlagMsFormat"
QT_MOC_LITERAL(7, 103, 22), // "setFlagEnableAtStartup"
QT_MOC_LITERAL(8, 126, 11), // "setFontSize"
QT_MOC_LITERAL(9, 138, 4), // "size"
QT_MOC_LITERAL(10, 143, 20), // "setFlagShowEOTButton"
QT_MOC_LITERAL(11, 164, 17), // "updateMessageText"
QT_MOC_LITERAL(12, 182, 7) // "showEOT"

    },
    "EquationOfTime\0equationOfTimeStateChanged\0"
    "\0b\0enableEquationOfTime\0setFlagInvertedValue\0"
    "setFlagMsFormat\0setFlagEnableAtStartup\0"
    "setFontSize\0size\0setFlagShowEOTButton\0"
    "updateMessageText\0showEOT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EquationOfTime[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x0a /* Public */,
       5,    1,   60,    2, 0x0a /* Public */,
       6,    1,   63,    2, 0x0a /* Public */,
       7,    1,   66,    2, 0x0a /* Public */,
       8,    1,   69,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x0a /* Public */,
      11,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void EquationOfTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EquationOfTime *_t = static_cast<EquationOfTime *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->equationOfTimeStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->enableEquationOfTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setFlagInvertedValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setFlagMsFormat((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setFlagEnableAtStartup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setFlagShowEOTButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateMessageText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EquationOfTime::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EquationOfTime::equationOfTimeStateChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        EquationOfTime *_t = static_cast<EquationOfTime *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        EquationOfTime *_t = static_cast<EquationOfTime *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->enableEquationOfTime(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject EquationOfTime::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_EquationOfTime.data,
      qt_meta_data_EquationOfTime,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EquationOfTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EquationOfTime::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EquationOfTime.stringdata0))
        return static_cast<void*>(const_cast< EquationOfTime*>(this));
    return StelModule::qt_metacast(_clname);
}

int EquationOfTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void EquationOfTime::equationOfTimeStateChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_EquationOfTimeStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EquationOfTimeStelPluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EquationOfTimeStelPluginInterface_t qt_meta_stringdata_EquationOfTimeStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 33) // "EquationOfTimeStelPluginInter..."

    },
    "EquationOfTimeStelPluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EquationOfTimeStelPluginInterface[] = {

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

void EquationOfTimeStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject EquationOfTimeStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EquationOfTimeStelPluginInterface.data,
      qt_meta_data_EquationOfTimeStelPluginInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EquationOfTimeStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EquationOfTimeStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EquationOfTimeStelPluginInterface.stringdata0))
        return static_cast<void*>(const_cast< EquationOfTimeStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< EquationOfTimeStelPluginInterface*>(this));
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< EquationOfTimeStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int EquationOfTimeStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    'a',  'm',  'e',  0x00, '!',  0x00, 'E',  'q', 
    'u',  'a',  't',  'i',  'o',  'n',  'O',  'f', 
    'T',  'i',  'm',  'e',  'S',  't',  'e',  'l', 
    'P',  'l',  'u',  'g',  'i',  'n',  'I',  'n', 
    't',  'e',  'r',  'f',  'a',  'c',  'e',  0x00,
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
    '!',  0x00, 'E',  'q',  'u',  'a',  't',  'i', 
    'o',  'n',  'O',  'f',  'T',  'i',  'm',  'e', 
    'S',  't',  'e',  'l',  'P',  'l',  'u',  'g', 
    'i',  'n',  'I',  'n',  't',  'e',  'r',  'f', 
    'a',  'c',  'e',  0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(EquationOfTimeStelPluginInterface, EquationOfTimeStelPluginInterface)

QT_END_MOC_NAMESPACE
