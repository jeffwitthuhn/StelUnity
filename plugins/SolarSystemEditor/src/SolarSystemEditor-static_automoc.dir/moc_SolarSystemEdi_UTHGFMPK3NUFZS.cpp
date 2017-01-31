/****************************************************************************
** Meta object code from reading C++ file 'SolarSystemEditor.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/SolarSystemEditor/src/SolarSystemEditor.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SolarSystemEditor.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SolarSystemEditor_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SolarSystemEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SolarSystemEditor_t qt_meta_stringdata_SolarSystemEditor = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SolarSystemEditor"
QT_MOC_LITERAL(1, 18, 18), // "solarSystemChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 25), // "resetSolarSystemToDefault"
QT_MOC_LITERAL(4, 64, 10) // "updateI18n"

    },
    "SolarSystemEditor\0solarSystemChanged\0"
    "\0resetSolarSystemToDefault\0updateI18n"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SolarSystemEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SolarSystemEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SolarSystemEditor *_t = static_cast<SolarSystemEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->solarSystemChanged(); break;
        case 1: _t->resetSolarSystemToDefault(); break;
        case 2: _t->updateI18n(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SolarSystemEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SolarSystemEditor::solarSystemChanged)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SolarSystemEditor::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_SolarSystemEditor.data,
      qt_meta_data_SolarSystemEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SolarSystemEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SolarSystemEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SolarSystemEditor.stringdata0))
        return static_cast<void*>(const_cast< SolarSystemEditor*>(this));
    return StelModule::qt_metacast(_clname);
}

int SolarSystemEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SolarSystemEditor::solarSystemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_SolarSystemEditorStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SolarSystemEditorStelPluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SolarSystemEditorStelPluginInterface_t qt_meta_stringdata_SolarSystemEditorStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 36) // "SolarSystemEditorStelPluginIn..."

    },
    "SolarSystemEditorStelPluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SolarSystemEditorStelPluginInterface[] = {

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

void SolarSystemEditorStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SolarSystemEditorStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SolarSystemEditorStelPluginInterface.data,
      qt_meta_data_SolarSystemEditorStelPluginInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SolarSystemEditorStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SolarSystemEditorStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SolarSystemEditorStelPluginInterface.stringdata0))
        return static_cast<void*>(const_cast< SolarSystemEditorStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< SolarSystemEditorStelPluginInterface*>(this));
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< SolarSystemEditorStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int SolarSystemEditorStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    'a',  'm',  'e',  0x00, '$',  0x00, 'S',  'o', 
    'l',  'a',  'r',  'S',  'y',  's',  't',  'e', 
    'm',  'E',  'd',  'i',  't',  'o',  'r',  'S', 
    't',  'e',  'l',  'P',  'l',  'u',  'g',  'i', 
    'n',  'I',  'n',  't',  'e',  'r',  'f',  'a', 
    'c',  'e',  0x00, 0x00, ':',  0xa0, 0xa0, 0x00,
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
    '$',  0x00, 'S',  'o',  'l',  'a',  'r',  'S', 
    'y',  's',  't',  'e',  'm',  'E',  'd',  'i', 
    't',  'o',  'r',  'S',  't',  'e',  'l',  'P', 
    'l',  'u',  'g',  'i',  'n',  'I',  'n',  't', 
    'e',  'r',  'f',  'a',  'c',  'e',  0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(SolarSystemEditorStelPluginInterface, SolarSystemEditorStelPluginInterface)

QT_END_MOC_NAMESPACE
