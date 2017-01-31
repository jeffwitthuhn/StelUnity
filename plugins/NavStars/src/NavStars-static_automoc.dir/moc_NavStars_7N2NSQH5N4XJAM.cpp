/****************************************************************************
** Meta object code from reading C++ file 'NavStars.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/NavStars/src/NavStars.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NavStars.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NavStars_t {
    QByteArrayData data[19];
    char stringdata0[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavStars_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavStars_t qt_meta_stringdata_NavStars = {
    {
QT_MOC_LITERAL(0, 0, 8), // "NavStars"
QT_MOC_LITERAL(1, 9, 20), // "navStarsMarksChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 1), // "b"
QT_MOC_LITERAL(4, 33, 16), // "setNavStarsMarks"
QT_MOC_LITERAL(5, 50, 16), // "getNavStarsMarks"
QT_MOC_LITERAL(6, 67, 30), // "setCurrentNavigationalStarsSet"
QT_MOC_LITERAL(7, 98, 20), // "NavigationalStarsSet"
QT_MOC_LITERAL(8, 119, 5), // "nsset"
QT_MOC_LITERAL(9, 125, 30), // "getCurrentNavigationalStarsSet"
QT_MOC_LITERAL(10, 156, 33), // "getCurrentNavigationalStarsSe..."
QT_MOC_LITERAL(11, 190, 41), // "getCurrentNavigationalStarsSe..."
QT_MOC_LITERAL(12, 232, 33), // "setCurrentNavigationalStarsSe..."
QT_MOC_LITERAL(13, 266, 3), // "key"
QT_MOC_LITERAL(14, 270, 16), // "starNamesChanged"
QT_MOC_LITERAL(15, 287, 15), // "navStarsVisible"
QT_MOC_LITERAL(16, 303, 13), // "AngloAmerican"
QT_MOC_LITERAL(17, 317, 6), // "French"
QT_MOC_LITERAL(18, 324, 7) // "Russian"

    },
    "NavStars\0navStarsMarksChanged\0\0b\0"
    "setNavStarsMarks\0getNavStarsMarks\0"
    "setCurrentNavigationalStarsSet\0"
    "NavigationalStarsSet\0nsset\0"
    "getCurrentNavigationalStarsSet\0"
    "getCurrentNavigationalStarsSetKey\0"
    "getCurrentNavigationalStarsSetDescription\0"
    "setCurrentNavigationalStarsSetKey\0key\0"
    "starNamesChanged\0navStarsVisible\0"
    "AngloAmerican\0French\0Russian"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavStars[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   78, // properties
       1,   82, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   62,    2, 0x0a /* Public */,
       5,    0,   65,    2, 0x0a /* Public */,
       6,    1,   66,    2, 0x0a /* Public */,
       9,    0,   69,    2, 0x0a /* Public */,
      10,    0,   70,    2, 0x0a /* Public */,
      11,    0,   71,    2, 0x0a /* Public */,
      12,    1,   72,    2, 0x0a /* Public */,
      14,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 7,    8,
    0x80000000 | 7,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,

 // enums: name, flags, count, data
       7, 0x0,    3,   86,

 // enum data: key, value
      16, uint(NavStars::AngloAmerican),
      17, uint(NavStars::French),
      18, uint(NavStars::Russian),

       0        // eod
};

void NavStars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NavStars *_t = static_cast<NavStars *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->navStarsMarksChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setNavStarsMarks((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->getNavStarsMarks();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->setCurrentNavigationalStarsSet((*reinterpret_cast< NavigationalStarsSet(*)>(_a[1]))); break;
        case 4: { NavigationalStarsSet _r = _t->getCurrentNavigationalStarsSet();
            if (_a[0]) *reinterpret_cast< NavigationalStarsSet*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->getCurrentNavigationalStarsSetKey();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->getCurrentNavigationalStarsSetDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->setCurrentNavigationalStarsSetKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->starNamesChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NavStars::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavStars::navStarsMarksChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        NavStars *_t = static_cast<NavStars *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getNavStarsMarks(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        NavStars *_t = static_cast<NavStars *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNavStarsMarks(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject NavStars::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_NavStars.data,
      qt_meta_data_NavStars,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NavStars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavStars::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NavStars.stringdata0))
        return static_cast<void*>(const_cast< NavStars*>(this));
    return StelModule::qt_metacast(_clname);
}

int NavStars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void NavStars::navStarsMarksChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_NavStarsStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavStarsStelPluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavStarsStelPluginInterface_t qt_meta_stringdata_NavStarsStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 27) // "NavStarsStelPluginInterface"

    },
    "NavStarsStelPluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavStarsStelPluginInterface[] = {

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

void NavStarsStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject NavStarsStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NavStarsStelPluginInterface.data,
      qt_meta_data_NavStarsStelPluginInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NavStarsStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavStarsStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NavStarsStelPluginInterface.stringdata0))
        return static_cast<void*>(const_cast< NavStarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< NavStarsStelPluginInterface*>(this));
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< NavStarsStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int NavStarsStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0xb8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 'o',  'r',  'g',  '.',  's',  't', 
    'e',  'l',  'l',  'a',  'r',  'i',  'u',  'm', 
    '.',  'S',  't',  'e',  'l',  'P',  'l',  'u', 
    'g',  'i',  'n',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  0x9b, 0x09, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x1b, 0x00, 'N',  'a', 
    'v',  'S',  't',  'a',  'r',  's',  'S',  't', 
    'e',  'l',  'P',  'l',  'u',  'g',  'i',  'n', 
    'I',  'n',  't',  'e',  'r',  'f',  'a',  'c', 
    'e',  0x00, 0x00, 0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x13, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    '|',  0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
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
    0x1b, 0x00, 'N',  'a',  'v',  'S',  't',  'a', 
    'r',  's',  'S',  't',  'e',  'l',  'P',  'l', 
    'u',  'g',  'i',  'n',  'I',  'n',  't',  'e', 
    'r',  'f',  'a',  'c',  'e',  0x00, 0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(NavStarsStelPluginInterface, NavStarsStelPluginInterface)

QT_END_MOC_NAMESPACE
