/****************************************************************************
** Meta object code from reading C++ file 'ScriptConsole.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/ScriptConsole.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptConsole.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScriptConsole_t {
    QByteArrayData data[17];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptConsole_t qt_meta_stringdata_ScriptConsole = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ScriptConsole"
QT_MOC_LITERAL(1, 14, 11), // "retranslate"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "runScript"
QT_MOC_LITERAL(4, 37, 10), // "loadScript"
QT_MOC_LITERAL(5, 48, 10), // "saveScript"
QT_MOC_LITERAL(6, 59, 18), // "clearButtonPressed"
QT_MOC_LITERAL(7, 78, 16), // "preprocessScript"
QT_MOC_LITERAL(8, 95, 13), // "scriptStarted"
QT_MOC_LITERAL(9, 109, 11), // "scriptEnded"
QT_MOC_LITERAL(10, 121, 13), // "appendLogLine"
QT_MOC_LITERAL(11, 135, 1), // "s"
QT_MOC_LITERAL(12, 137, 16), // "appendOutputLine"
QT_MOC_LITERAL(13, 154, 13), // "includeBrowse"
QT_MOC_LITERAL(14, 168, 8), // "quickRun"
QT_MOC_LITERAL(15, 177, 3), // "idx"
QT_MOC_LITERAL(16, 181, 16) // "rowColumnChanged"

    },
    "ScriptConsole\0retranslate\0\0runScript\0"
    "loadScript\0saveScript\0clearButtonPressed\0"
    "preprocessScript\0scriptStarted\0"
    "scriptEnded\0appendLogLine\0s\0"
    "appendOutputLine\0includeBrowse\0quickRun\0"
    "idx\0rowColumnChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    1,   87,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    1,   94,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,

       0        // eod
};

void ScriptConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptConsole *_t = static_cast<ScriptConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->runScript(); break;
        case 2: _t->loadScript(); break;
        case 3: _t->saveScript(); break;
        case 4: _t->clearButtonPressed(); break;
        case 5: _t->preprocessScript(); break;
        case 6: _t->scriptStarted(); break;
        case 7: _t->scriptEnded(); break;
        case 8: _t->appendLogLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->appendOutputLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->includeBrowse(); break;
        case 11: _t->quickRun((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->rowColumnChanged(); break;
        default: ;
        }
    }
}

const QMetaObject ScriptConsole::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_ScriptConsole.data,
      qt_meta_data_ScriptConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScriptConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptConsole.stringdata0))
        return static_cast<void*>(const_cast< ScriptConsole*>(this));
    return StelDialog::qt_metacast(_clname);
}

int ScriptConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
