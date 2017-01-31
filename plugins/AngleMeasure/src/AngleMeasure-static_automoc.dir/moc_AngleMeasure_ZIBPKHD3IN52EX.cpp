/****************************************************************************
** Meta object code from reading C++ file 'AngleMeasure.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/AngleMeasure/src/AngleMeasure.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AngleMeasure.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AngleMeasure_t {
    QByteArrayData data[17];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AngleMeasure_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AngleMeasure_t qt_meta_stringdata_AngleMeasure = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AngleMeasure"
QT_MOC_LITERAL(1, 13, 23), // "flagAngleMeasureChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 1), // "b"
QT_MOC_LITERAL(4, 40, 18), // "enableAngleMeasure"
QT_MOC_LITERAL(5, 59, 12), // "useDmsFormat"
QT_MOC_LITERAL(6, 72, 17), // "showPositionAngle"
QT_MOC_LITERAL(7, 90, 20), // "showPositionAngleHor"
QT_MOC_LITERAL(8, 111, 14), // "showEquatorial"
QT_MOC_LITERAL(9, 126, 14), // "showHorizontal"
QT_MOC_LITERAL(10, 141, 28), // "showHorizontalStartSkylinked"
QT_MOC_LITERAL(11, 170, 26), // "showHorizontalEndSkylinked"
QT_MOC_LITERAL(12, 197, 17), // "updateMessageText"
QT_MOC_LITERAL(13, 215, 12), // "clearMessage"
QT_MOC_LITERAL(14, 228, 7), // "enabled"
QT_MOC_LITERAL(15, 236, 9), // "dmsFormat"
QT_MOC_LITERAL(16, 246, 11) // "paDisplayed"

    },
    "AngleMeasure\0flagAngleMeasureChanged\0"
    "\0b\0enableAngleMeasure\0useDmsFormat\0"
    "showPositionAngle\0showPositionAngleHor\0"
    "showEquatorial\0showHorizontal\0"
    "showHorizontalStartSkylinked\0"
    "showHorizontalEndSkylinked\0updateMessageText\0"
    "clearMessage\0enabled\0dmsFormat\0"
    "paDisplayed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AngleMeasure[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   72,    2, 0x0a /* Public */,
       5,    1,   75,    2, 0x0a /* Public */,
       6,    1,   78,    2, 0x0a /* Public */,
       7,    1,   81,    2, 0x0a /* Public */,
       8,    1,   84,    2, 0x0a /* Public */,
       9,    1,   87,    2, 0x0a /* Public */,
      10,    1,   90,    2, 0x0a /* Public */,
      11,    1,   93,    2, 0x0a /* Public */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00495003,
      15, QMetaType::Bool, 0x00095003,
      16, QMetaType::Bool, 0x00095003,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void AngleMeasure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AngleMeasure *_t = static_cast<AngleMeasure *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flagAngleMeasureChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->enableAngleMeasure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->useDmsFormat((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showPositionAngle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showPositionAngleHor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showEquatorial((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showHorizontal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showHorizontalStartSkylinked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showHorizontalEndSkylinked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->updateMessageText(); break;
        case 10: _t->clearMessage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AngleMeasure::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AngleMeasure::flagAngleMeasureChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AngleMeasure *_t = static_cast<AngleMeasure *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isDmsFormat(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isPaDisplayed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AngleMeasure *_t = static_cast<AngleMeasure *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->enableAngleMeasure(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->useDmsFormat(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->showPositionAngle(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject AngleMeasure::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_AngleMeasure.data,
      qt_meta_data_AngleMeasure,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AngleMeasure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AngleMeasure::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AngleMeasure.stringdata0))
        return static_cast<void*>(const_cast< AngleMeasure*>(this));
    return StelModule::qt_metacast(_clname);
}

int AngleMeasure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void AngleMeasure::flagAngleMeasureChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AngleMeasureStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AngleMeasureStelPluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AngleMeasureStelPluginInterface_t qt_meta_stringdata_AngleMeasureStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 31) // "AngleMeasureStelPluginInterface"

    },
    "AngleMeasureStelPluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AngleMeasureStelPluginInterface[] = {

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

void AngleMeasureStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject AngleMeasureStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AngleMeasureStelPluginInterface.data,
      qt_meta_data_AngleMeasureStelPluginInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AngleMeasureStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AngleMeasureStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AngleMeasureStelPluginInterface.stringdata0))
        return static_cast<void*>(const_cast< AngleMeasureStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< AngleMeasureStelPluginInterface*>(this));
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< AngleMeasureStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int AngleMeasureStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    'a',  'm',  'e',  0x00, 0x1f, 0x00, 'A',  'n', 
    'g',  'l',  'e',  'M',  'e',  'a',  's',  'u', 
    'r',  'e',  'S',  't',  'e',  'l',  'P',  'l', 
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
    0x1f, 0x00, 'A',  'n',  'g',  'l',  'e',  'M', 
    'e',  'a',  's',  'u',  'r',  'e',  'S',  't', 
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

QT_MOC_EXPORT_PLUGIN(AngleMeasureStelPluginInterface, AngleMeasureStelPluginInterface)

QT_END_MOC_NAMESPACE
