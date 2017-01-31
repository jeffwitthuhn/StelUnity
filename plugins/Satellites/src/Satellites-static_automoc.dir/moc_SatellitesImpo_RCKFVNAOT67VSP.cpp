/****************************************************************************
** Meta object code from reading C++ file 'SatellitesImportDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Satellites/src/gui/SatellitesImportDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SatellitesImportDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SatellitesImportDialog_t {
    QByteArrayData data[17];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SatellitesImportDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SatellitesImportDialog_t qt_meta_stringdata_SatellitesImportDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SatellitesImportDialog"
QT_MOC_LITERAL(1, 23, 18), // "satellitesAccepted"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "TleDataList"
QT_MOC_LITERAL(4, 55, 13), // "newSatellites"
QT_MOC_LITERAL(5, 69, 11), // "retranslate"
QT_MOC_LITERAL(6, 81, 10), // "setVisible"
QT_MOC_LITERAL(7, 92, 7), // "visible"
QT_MOC_LITERAL(8, 100, 7), // "getData"
QT_MOC_LITERAL(9, 108, 15), // "receiveDownload"
QT_MOC_LITERAL(10, 124, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 139, 12), // "networkReply"
QT_MOC_LITERAL(12, 152, 14), // "abortDownloads"
QT_MOC_LITERAL(13, 167, 19), // "acceptNewSatellites"
QT_MOC_LITERAL(14, 187, 20), // "discardNewSatellites"
QT_MOC_LITERAL(15, 208, 7), // "markAll"
QT_MOC_LITERAL(16, 216, 8) // "markNone"

    },
    "SatellitesImportDialog\0satellitesAccepted\0"
    "\0TleDataList\0newSatellites\0retranslate\0"
    "setVisible\0visible\0getData\0receiveDownload\0"
    "QNetworkReply*\0networkReply\0abortDownloads\0"
    "acceptNewSatellites\0discardNewSatellites\0"
    "markAll\0markNone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SatellitesImportDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   72,    2, 0x0a /* Public */,
       6,    1,   73,    2, 0x0a /* Public */,
       6,    0,   76,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    1,   78,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SatellitesImportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SatellitesImportDialog *_t = static_cast<SatellitesImportDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->satellitesAccepted((*reinterpret_cast< const TleDataList(*)>(_a[1]))); break;
        case 1: _t->retranslate(); break;
        case 2: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setVisible(); break;
        case 4: _t->getData(); break;
        case 5: _t->receiveDownload((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->abortDownloads(); break;
        case 7: _t->acceptNewSatellites(); break;
        case 8: _t->discardNewSatellites(); break;
        case 9: _t->markAll(); break;
        case 10: _t->markNone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SatellitesImportDialog::*_t)(const TleDataList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SatellitesImportDialog::satellitesAccepted)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SatellitesImportDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_SatellitesImportDialog.data,
      qt_meta_data_SatellitesImportDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SatellitesImportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SatellitesImportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SatellitesImportDialog.stringdata0))
        return static_cast<void*>(const_cast< SatellitesImportDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int SatellitesImportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void SatellitesImportDialog::satellitesAccepted(const TleDataList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
