/****************************************************************************
** Meta object code from reading C++ file 'TelescopeControl.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/TelescopeControl/src/TelescopeControl.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TelescopeControl.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TelescopeControl_t {
    QByteArrayData data[28];
    char stringdata0[449];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TelescopeControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TelescopeControl_t qt_meta_stringdata_TelescopeControl = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TelescopeControl"
QT_MOC_LITERAL(1, 17, 15), // "clientConnected"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "slot"
QT_MOC_LITERAL(4, 39, 4), // "name"
QT_MOC_LITERAL(5, 44, 18), // "clientDisconnected"
QT_MOC_LITERAL(6, 63, 24), // "setFlagTelescopeReticles"
QT_MOC_LITERAL(7, 88, 1), // "b"
QT_MOC_LITERAL(8, 90, 24), // "getFlagTelescopeReticles"
QT_MOC_LITERAL(9, 115, 22), // "setFlagTelescopeLabels"
QT_MOC_LITERAL(10, 138, 22), // "getFlagTelescopeLabels"
QT_MOC_LITERAL(11, 161, 23), // "setFlagTelescopeCircles"
QT_MOC_LITERAL(12, 185, 23), // "getFlagTelescopeCircles"
QT_MOC_LITERAL(13, 209, 15), // "setReticleColor"
QT_MOC_LITERAL(14, 225, 5), // "Vec3f"
QT_MOC_LITERAL(15, 231, 1), // "c"
QT_MOC_LITERAL(16, 233, 15), // "getReticleColor"
QT_MOC_LITERAL(17, 249, 13), // "getLabelColor"
QT_MOC_LITERAL(18, 263, 13), // "setLabelColor"
QT_MOC_LITERAL(19, 277, 14), // "setCircleColor"
QT_MOC_LITERAL(20, 292, 14), // "getCircleColor"
QT_MOC_LITERAL(21, 307, 11), // "setFontSize"
QT_MOC_LITERAL(22, 319, 8), // "fontSize"
QT_MOC_LITERAL(23, 328, 29), // "slewTelescopeToSelectedObject"
QT_MOC_LITERAL(24, 358, 3), // "idx"
QT_MOC_LITERAL(25, 362, 28), // "slewTelescopeToViewDirection"
QT_MOC_LITERAL(26, 391, 29), // "setFlagUseTelescopeServerLogs"
QT_MOC_LITERAL(27, 421, 27) // "translateActionDescriptions"

    },
    "TelescopeControl\0clientConnected\0\0"
    "slot\0name\0clientDisconnected\0"
    "setFlagTelescopeReticles\0b\0"
    "getFlagTelescopeReticles\0"
    "setFlagTelescopeLabels\0getFlagTelescopeLabels\0"
    "setFlagTelescopeCircles\0getFlagTelescopeCircles\0"
    "setReticleColor\0Vec3f\0c\0getReticleColor\0"
    "getLabelColor\0setLabelColor\0setCircleColor\0"
    "getCircleColor\0setFontSize\0fontSize\0"
    "slewTelescopeToSelectedObject\0idx\0"
    "slewTelescopeToViewDirection\0"
    "setFlagUseTelescopeServerLogs\0"
    "translateActionDescriptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelescopeControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  109,    2, 0x06 /* Public */,
       5,    1,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  117,    2, 0x0a /* Public */,
       8,    0,  120,    2, 0x0a /* Public */,
       9,    1,  121,    2, 0x0a /* Public */,
      10,    0,  124,    2, 0x0a /* Public */,
      11,    1,  125,    2, 0x0a /* Public */,
      12,    0,  128,    2, 0x0a /* Public */,
      13,    1,  129,    2, 0x0a /* Public */,
      16,    0,  132,    2, 0x0a /* Public */,
      17,    0,  133,    2, 0x0a /* Public */,
      18,    1,  134,    2, 0x0a /* Public */,
      19,    1,  137,    2, 0x0a /* Public */,
      20,    0,  140,    2, 0x0a /* Public */,
      21,    1,  141,    2, 0x0a /* Public */,
      23,    1,  144,    2, 0x0a /* Public */,
      25,    1,  147,    2, 0x0a /* Public */,
      26,    1,  150,    2, 0x0a /* Public */,
      27,    0,  153,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void TelescopeControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TelescopeControl *_t = static_cast<TelescopeControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clientConnected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->clientDisconnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setFlagTelescopeReticles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { bool _r = _t->getFlagTelescopeReticles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->setFlagTelescopeLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->getFlagTelescopeLabels();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setFlagTelescopeCircles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->getFlagTelescopeCircles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->setReticleColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 9: _t->getReticleColor(); break;
        case 10: _t->getLabelColor(); break;
        case 11: _t->setLabelColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 12: _t->setCircleColor((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 13: _t->getCircleColor(); break;
        case 14: _t->setFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->slewTelescopeToSelectedObject((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 16: _t->slewTelescopeToViewDirection((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 17: _t->setFlagUseTelescopeServerLogs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->translateActionDescriptions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
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
            typedef void (TelescopeControl::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelescopeControl::clientConnected)) {
                *result = 0;
            }
        }
        {
            typedef void (TelescopeControl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TelescopeControl::clientDisconnected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject TelescopeControl::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_TelescopeControl.data,
      qt_meta_data_TelescopeControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TelescopeControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelescopeControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeControl.stringdata0))
        return static_cast<void*>(const_cast< TelescopeControl*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int TelescopeControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void TelescopeControl::clientConnected(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TelescopeControl::clientDisconnected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_TelescopeControlStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TelescopeControlStelPluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TelescopeControlStelPluginInterface_t qt_meta_stringdata_TelescopeControlStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 35) // "TelescopeControlStelPluginInt..."

    },
    "TelescopeControlStelPluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelescopeControlStelPluginInterface[] = {

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

void TelescopeControlStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TelescopeControlStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TelescopeControlStelPluginInterface.data,
      qt_meta_data_TelescopeControlStelPluginInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TelescopeControlStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelescopeControlStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TelescopeControlStelPluginInterface.stringdata0))
        return static_cast<void*>(const_cast< TelescopeControlStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< TelescopeControlStelPluginInterface*>(this));
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< TelescopeControlStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int TelescopeControlStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0xc0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 'o',  'r',  'g',  '.',  's',  't', 
    'e',  'l',  'l',  'a',  'r',  'i',  'u',  'm', 
    '.',  'S',  't',  'e',  'l',  'P',  'l',  'u', 
    'g',  'i',  'n',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  0x9b, 0x09, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, '#',  0x00, 'T',  'e', 
    'l',  'e',  's',  'c',  'o',  'p',  'e',  'C', 
    'o',  'n',  't',  'r',  'o',  'l',  'S',  't', 
    'e',  'l',  'P',  'l',  'u',  'g',  'i',  'n', 
    'I',  'n',  't',  'e',  'r',  'f',  'a',  'c', 
    'e',  0x00, 0x00, 0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x14, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 't',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xc0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
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
    '#',  0x00, 'T',  'e',  'l',  'e',  's',  'c', 
    'o',  'p',  'e',  'C',  'o',  'n',  't',  'r', 
    'o',  'l',  'S',  't',  'e',  'l',  'P',  'l', 
    'u',  'g',  'i',  'n',  'I',  'n',  't',  'e', 
    'r',  'f',  'a',  'c',  'e',  0x00, 0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(TelescopeControlStelPluginInterface, TelescopeControlStelPluginInterface)

QT_END_MOC_NAMESPACE
