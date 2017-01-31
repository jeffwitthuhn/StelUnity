/****************************************************************************
** Meta object code from reading C++ file 'Novae.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Novae/src/Novae.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Novae.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Novae_t {
    QByteArrayData data[16];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Novae_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Novae_t qt_meta_stringdata_Novae = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Novae"
QT_MOC_LITERAL(1, 6, 18), // "updateStateChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 18), // "Novae::UpdateState"
QT_MOC_LITERAL(4, 45, 5), // "state"
QT_MOC_LITERAL(5, 51, 18), // "jsonUpdateComplete"
QT_MOC_LITERAL(6, 70, 10), // "updateJSON"
QT_MOC_LITERAL(7, 81, 14), // "displayMessage"
QT_MOC_LITERAL(8, 96, 7), // "message"
QT_MOC_LITERAL(9, 104, 8), // "hexColor"
QT_MOC_LITERAL(10, 113, 14), // "messageTimeout"
QT_MOC_LITERAL(11, 128, 13), // "reloadCatalog"
QT_MOC_LITERAL(12, 142, 14), // "checkForUpdate"
QT_MOC_LITERAL(13, 157, 22), // "updateDownloadComplete"
QT_MOC_LITERAL(14, 180, 14), // "QNetworkReply*"
QT_MOC_LITERAL(15, 195, 5) // "reply"

    },
    "Novae\0updateStateChanged\0\0Novae::UpdateState\0"
    "state\0jsonUpdateComplete\0updateJSON\0"
    "displayMessage\0message\0hexColor\0"
    "messageTimeout\0reloadCatalog\0"
    "checkForUpdate\0updateDownloadComplete\0"
    "QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Novae[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   63,    2, 0x0a /* Public */,
       7,    2,   64,    2, 0x0a /* Public */,
       7,    1,   69,    2, 0x2a /* Public | MethodCloned */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void Novae::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Novae *_t = static_cast<Novae *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateStateChanged((*reinterpret_cast< Novae::UpdateState(*)>(_a[1]))); break;
        case 1: _t->jsonUpdateComplete(); break;
        case 2: _t->updateJSON(); break;
        case 3: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->messageTimeout(); break;
        case 6: _t->reloadCatalog(); break;
        case 7: _t->checkForUpdate(); break;
        case 8: _t->updateDownloadComplete((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Novae::*_t)(Novae::UpdateState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Novae::updateStateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Novae::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Novae::jsonUpdateComplete)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Novae::staticMetaObject = {
    { &StelObjectModule::staticMetaObject, qt_meta_stringdata_Novae.data,
      qt_meta_data_Novae,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Novae::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Novae::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Novae.stringdata0))
        return static_cast<void*>(const_cast< Novae*>(this));
    return StelObjectModule::qt_metacast(_clname);
}

int Novae::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelObjectModule::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Novae::updateStateChanged(Novae::UpdateState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Novae::jsonUpdateComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_NovaeStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NovaeStelPluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NovaeStelPluginInterface_t qt_meta_stringdata_NovaeStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 24) // "NovaeStelPluginInterface"

    },
    "NovaeStelPluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NovaeStelPluginInterface[] = {

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

void NovaeStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject NovaeStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NovaeStelPluginInterface.data,
      qt_meta_data_NovaeStelPluginInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NovaeStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NovaeStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NovaeStelPluginInterface.stringdata0))
        return static_cast<void*>(const_cast< NovaeStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< NovaeStelPluginInterface*>(this));
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< NovaeStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int NovaeStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    'a',  'm',  'e',  0x00, 0x18, 0x00, 'N',  'o', 
    'v',  'a',  'e',  'S',  't',  'e',  'l',  'P', 
    'l',  'u',  'g',  'i',  'n',  'I',  'n',  't', 
    'e',  'r',  'f',  'a',  'c',  'e',  0x00, 0x00,
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
    0x18, 0x00, 'N',  'o',  'v',  'a',  'e',  'S', 
    't',  'e',  'l',  'P',  'l',  'u',  'g',  'i', 
    'n',  'I',  'n',  't',  'e',  'r',  'f',  'a', 
    'c',  'e',  0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(NovaeStelPluginInterface, NovaeStelPluginInterface)

QT_END_MOC_NAMESPACE
