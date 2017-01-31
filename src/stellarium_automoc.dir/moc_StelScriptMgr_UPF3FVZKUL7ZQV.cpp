/****************************************************************************
** Meta object code from reading C++ file 'StelScriptMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/scripting/StelScriptMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelScriptMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelScriptMgr_t {
    QByteArrayData data[41];
    char stringdata0[475];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelScriptMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelScriptMgr_t qt_meta_stringdata_StelScriptMgr = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StelScriptMgr"
QT_MOC_LITERAL(1, 14, 22), // "runningScriptIdChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 2), // "id"
QT_MOC_LITERAL(4, 41, 13), // "scriptRunning"
QT_MOC_LITERAL(5, 55, 13), // "scriptStopped"
QT_MOC_LITERAL(6, 69, 11), // "scriptDebug"
QT_MOC_LITERAL(7, 81, 12), // "scriptOutput"
QT_MOC_LITERAL(8, 94, 18), // "getHtmlDescription"
QT_MOC_LITERAL(9, 113, 1), // "s"
QT_MOC_LITERAL(10, 115, 20), // "generateDocumentTags"
QT_MOC_LITERAL(11, 136, 7), // "getName"
QT_MOC_LITERAL(12, 144, 9), // "getAuthor"
QT_MOC_LITERAL(13, 154, 10), // "getLicense"
QT_MOC_LITERAL(14, 165, 14), // "getDescription"
QT_MOC_LITERAL(15, 180, 11), // "getShortcut"
QT_MOC_LITERAL(16, 192, 9), // "runScript"
QT_MOC_LITERAL(17, 202, 8), // "fileName"
QT_MOC_LITERAL(18, 211, 11), // "includePath"
QT_MOC_LITERAL(19, 223, 15), // "runScriptDirect"
QT_MOC_LITERAL(20, 239, 10), // "scriptCode"
QT_MOC_LITERAL(21, 250, 21), // "runPreprocessedScript"
QT_MOC_LITERAL(22, 272, 18), // "preprocessedScript"
QT_MOC_LITERAL(23, 291, 8), // "scriptId"
QT_MOC_LITERAL(24, 300, 13), // "prepareScript"
QT_MOC_LITERAL(25, 314, 8), // "QString&"
QT_MOC_LITERAL(26, 323, 6), // "script"
QT_MOC_LITERAL(27, 330, 10), // "stopScript"
QT_MOC_LITERAL(28, 341, 13), // "setScriptRate"
QT_MOC_LITERAL(29, 355, 1), // "r"
QT_MOC_LITERAL(30, 357, 13), // "getScriptRate"
QT_MOC_LITERAL(31, 371, 5), // "debug"
QT_MOC_LITERAL(32, 377, 3), // "msg"
QT_MOC_LITERAL(33, 381, 6), // "output"
QT_MOC_LITERAL(34, 388, 11), // "resetOutput"
QT_MOC_LITERAL(35, 400, 12), // "saveOutputAs"
QT_MOC_LITERAL(36, 413, 8), // "filename"
QT_MOC_LITERAL(37, 422, 11), // "pauseScript"
QT_MOC_LITERAL(38, 434, 12), // "resumeScript"
QT_MOC_LITERAL(39, 447, 11), // "scriptEnded"
QT_MOC_LITERAL(40, 459, 15) // "runningScriptId"

    },
    "StelScriptMgr\0runningScriptIdChanged\0"
    "\0id\0scriptRunning\0scriptStopped\0"
    "scriptDebug\0scriptOutput\0getHtmlDescription\0"
    "s\0generateDocumentTags\0getName\0getAuthor\0"
    "getLicense\0getDescription\0getShortcut\0"
    "runScript\0fileName\0includePath\0"
    "runScriptDirect\0scriptCode\0"
    "runPreprocessedScript\0preprocessedScript\0"
    "scriptId\0prepareScript\0QString&\0script\0"
    "stopScript\0setScriptRate\0r\0getScriptRate\0"
    "debug\0msg\0output\0resetOutput\0saveOutputAs\0"
    "filename\0pauseScript\0resumeScript\0"
    "scriptEnded\0runningScriptId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelScriptMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       1,  244, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  159,    2, 0x06 /* Public */,
       4,    0,  162,    2, 0x06 /* Public */,
       5,    0,  163,    2, 0x06 /* Public */,
       6,    1,  164,    2, 0x06 /* Public */,
       7,    1,  167,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,  170,    2, 0x0a /* Public */,
       8,    1,  175,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  178,    2, 0x0a /* Public */,
      12,    1,  181,    2, 0x0a /* Public */,
      13,    1,  184,    2, 0x0a /* Public */,
      14,    1,  187,    2, 0x0a /* Public */,
      15,    1,  190,    2, 0x0a /* Public */,
      16,    2,  193,    2, 0x0a /* Public */,
      16,    1,  198,    2, 0x2a /* Public | MethodCloned */,
      19,    2,  201,    2, 0x0a /* Public */,
      19,    1,  206,    2, 0x2a /* Public | MethodCloned */,
      21,    2,  209,    2, 0x0a /* Public */,
      24,    3,  214,    2, 0x0a /* Public */,
      24,    2,  221,    2, 0x2a /* Public | MethodCloned */,
      27,    0,  226,    2, 0x0a /* Public */,
      28,    1,  227,    2, 0x0a /* Public */,
      30,    0,  230,    2, 0x0a /* Public */,
      31,    1,  231,    2, 0x0a /* Public */,
      33,    1,  234,    2, 0x0a /* Public */,
      34,    0,  237,    2, 0x0a /* Public */,
      35,    1,  238,    2, 0x0a /* Public */,
      37,    0,  241,    2, 0x0a /* Public */,
      38,    0,  242,    2, 0x0a /* Public */,
      39,    0,  243,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::QString, QMetaType::QString, QMetaType::Bool,    9,   10,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   17,   18,
    QMetaType::Bool, QMetaType::QString,   17,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   20,   18,
    QMetaType::Bool, QMetaType::QString,   20,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   22,   23,
    QMetaType::Bool, 0x80000000 | 25, QMetaType::QString, QMetaType::QString,   26,   17,   18,
    QMetaType::Bool, 0x80000000 | 25, QMetaType::QString,   26,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   29,
    QMetaType::Double,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      40, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void StelScriptMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelScriptMgr *_t = static_cast<StelScriptMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->runningScriptIdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->scriptRunning(); break;
        case 2: _t->scriptStopped(); break;
        case 3: _t->scriptDebug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->scriptOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { QString _r = _t->getHtmlDescription((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->getHtmlDescription((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->getName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->getAuthor((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->getLicense((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->getDescription((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->getShortcut((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->runScript((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->runScript((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->runScriptDirect((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->runScriptDirect((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->runPreprocessedScript((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->prepareScript((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->prepareScript((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: _t->stopScript(); break;
        case 20: _t->setScriptRate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 21: { double _r = _t->getScriptRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 22: _t->debug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->output((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->resetOutput(); break;
        case 25: _t->saveOutputAs((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->pauseScript(); break;
        case 27: _t->resumeScript(); break;
        case 28: _t->scriptEnded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelScriptMgr::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelScriptMgr::runningScriptIdChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (StelScriptMgr::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelScriptMgr::scriptRunning)) {
                *result = 1;
            }
        }
        {
            typedef void (StelScriptMgr::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelScriptMgr::scriptStopped)) {
                *result = 2;
            }
        }
        {
            typedef void (StelScriptMgr::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelScriptMgr::scriptDebug)) {
                *result = 3;
            }
        }
        {
            typedef void (StelScriptMgr::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelScriptMgr::scriptOutput)) {
                *result = 4;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StelScriptMgr *_t = static_cast<StelScriptMgr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->runningScriptId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject StelScriptMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelScriptMgr.data,
      qt_meta_data_StelScriptMgr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelScriptMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelScriptMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelScriptMgr.stringdata0))
        return static_cast<void*>(const_cast< StelScriptMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int StelScriptMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 29;
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
void StelScriptMgr::runningScriptIdChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StelScriptMgr::scriptRunning()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void StelScriptMgr::scriptStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void StelScriptMgr::scriptDebug(const QString & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< StelScriptMgr *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StelScriptMgr::scriptOutput(const QString & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< StelScriptMgr *>(this), &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
