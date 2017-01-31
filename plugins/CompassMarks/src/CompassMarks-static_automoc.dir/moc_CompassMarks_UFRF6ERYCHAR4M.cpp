/****************************************************************************
** Meta object code from reading C++ file 'CompassMarks.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/CompassMarks/src/CompassMarks.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CompassMarks.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CompassMarks_t {
    QByteArrayData data[8];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CompassMarks_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CompassMarks_t qt_meta_stringdata_CompassMarks = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CompassMarks"
QT_MOC_LITERAL(1, 13, 19), // "compassMarksChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "getCompassMarks"
QT_MOC_LITERAL(4, 50, 15), // "setCompassMarks"
QT_MOC_LITERAL(5, 66, 1), // "b"
QT_MOC_LITERAL(6, 68, 21), // "cardinalPointsChanged"
QT_MOC_LITERAL(7, 90, 12) // "marksVisible"

    },
    "CompassMarks\0compassMarksChanged\0\0"
    "getCompassMarks\0setCompassMarks\0b\0"
    "cardinalPointsChanged\0marksVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompassMarks[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   37,    2, 0x0a /* Public */,
       4,    1,   38,    2, 0x0a /* Public */,
       6,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void CompassMarks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CompassMarks *_t = static_cast<CompassMarks *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->compassMarksChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->getCompassMarks();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->setCompassMarks((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->cardinalPointsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CompassMarks::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CompassMarks::compassMarksChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CompassMarks *_t = static_cast<CompassMarks *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getCompassMarks(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CompassMarks *_t = static_cast<CompassMarks *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCompassMarks(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CompassMarks::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_CompassMarks.data,
      qt_meta_data_CompassMarks,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CompassMarks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompassMarks::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CompassMarks.stringdata0))
        return static_cast<void*>(const_cast< CompassMarks*>(this));
    return StelModule::qt_metacast(_clname);
}

int CompassMarks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void CompassMarks::compassMarksChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CompassMarksStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CompassMarksStelPluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CompassMarksStelPluginInterface_t qt_meta_stringdata_CompassMarksStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 31) // "CompassMarksStelPluginInterface"

    },
    "CompassMarksStelPluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompassMarksStelPluginInterface[] = {

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

void CompassMarksStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CompassMarksStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CompassMarksStelPluginInterface.data,
      qt_meta_data_CompassMarksStelPluginInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CompassMarksStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompassMarksStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CompassMarksStelPluginInterface.stringdata0))
        return static_cast<void*>(const_cast< CompassMarksStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< CompassMarksStelPluginInterface*>(this));
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< CompassMarksStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int CompassMarksStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    'a',  'm',  'e',  0x00, 0x1f, 0x00, 'C',  'o', 
    'm',  'p',  'a',  's',  's',  'M',  'a',  'r', 
    'k',  's',  'S',  't',  'e',  'l',  'P',  'l', 
    'u',  'g',  'i',  'n',  'I',  'n',  't',  'e', 
    'r',  'f',  'a',  'c',  'e',  0x00, 0x00, 0x00,
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
    0x1f, 0x00, 'C',  'o',  'm',  'p',  'a',  's', 
    's',  'M',  'a',  'r',  'k',  's',  'S',  't', 
    'e',  'l',  'P',  'l',  'u',  'g',  'i',  'n', 
    'I',  'n',  't',  'e',  'r',  'f',  'a',  'c', 
    'e',  0x00, 0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(CompassMarksStelPluginInterface, CompassMarksStelPluginInterface)

QT_END_MOC_NAMESPACE
