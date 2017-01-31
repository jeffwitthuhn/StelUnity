/****************************************************************************
** Meta object code from reading C++ file 'FOV.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/FOV/src/FOV.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FOV.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FOV_t {
    QByteArrayData data[4];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FOV_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FOV_t qt_meta_stringdata_FOV = {
    {
QT_MOC_LITERAL(0, 0, 3), // "FOV"
QT_MOC_LITERAL(1, 4, 6), // "setFOV"
QT_MOC_LITERAL(2, 11, 0), // ""
QT_MOC_LITERAL(3, 12, 3) // "idx"

    },
    "FOV\0setFOV\0\0idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FOV[] = {

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
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void FOV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FOV *_t = static_cast<FOV *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFOV((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FOV::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_FOV.data,
      qt_meta_data_FOV,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FOV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FOV::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FOV.stringdata0))
        return static_cast<void*>(const_cast< FOV*>(this));
    return StelModule::qt_metacast(_clname);
}

int FOV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FOVStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FOVStelPluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FOVStelPluginInterface_t qt_meta_stringdata_FOVStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 22) // "FOVStelPluginInterface"

    },
    "FOVStelPluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FOVStelPluginInterface[] = {

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

void FOVStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject FOVStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FOVStelPluginInterface.data,
      qt_meta_data_FOVStelPluginInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FOVStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FOVStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FOVStelPluginInterface.stringdata0))
        return static_cast<void*>(const_cast< FOVStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< FOVStelPluginInterface*>(this));
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< FOVStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int FOVStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0xb0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 'o',  'r',  'g',  '.',  's',  't', 
    'e',  'l',  'l',  'a',  'r',  'i',  'u',  'm', 
    '.',  'S',  't',  'e',  'l',  'P',  'l',  'u', 
    'g',  'i',  'n',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  0x9b, 0x09, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x16, 0x00, 'F',  'O', 
    'V',  'S',  't',  'e',  'l',  'P',  'l',  'u', 
    'g',  'i',  'n',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x12, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    't',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
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
    0x16, 0x00, 'F',  'O',  'V',  'S',  't',  'e', 
    'l',  'P',  'l',  'u',  'g',  'i',  'n',  'I', 
    'n',  't',  'e',  'r',  'f',  'a',  'c',  'e', 
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(FOVStelPluginInterface, FOVStelPluginInterface)

QT_END_MOC_NAMESPACE
