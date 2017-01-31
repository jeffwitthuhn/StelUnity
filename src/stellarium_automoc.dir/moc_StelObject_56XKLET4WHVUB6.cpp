/****************************************************************************
** Meta object code from reading C++ file 'StelObject.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelObject.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelObject.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelObject_t {
    QByteArrayData data[22];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelObject_t qt_meta_stringdata_StelObject = {
    {
QT_MOC_LITERAL(0, 0, 10), // "StelObject"
QT_MOC_LITERAL(1, 11, 20), // "InfoStringGroupFlags"
QT_MOC_LITERAL(2, 32, 4), // "Name"
QT_MOC_LITERAL(3, 37, 13), // "CatalogNumber"
QT_MOC_LITERAL(4, 51, 9), // "Magnitude"
QT_MOC_LITERAL(5, 61, 10), // "RaDecJ2000"
QT_MOC_LITERAL(6, 72, 11), // "RaDecOfDate"
QT_MOC_LITERAL(7, 84, 6), // "AltAzi"
QT_MOC_LITERAL(8, 91, 8), // "Distance"
QT_MOC_LITERAL(9, 100, 4), // "Size"
QT_MOC_LITERAL(10, 105, 5), // "Extra"
QT_MOC_LITERAL(11, 111, 9), // "HourAngle"
QT_MOC_LITERAL(12, 121, 17), // "AbsoluteMagnitude"
QT_MOC_LITERAL(13, 139, 13), // "GalacticCoord"
QT_MOC_LITERAL(14, 153, 18), // "SupergalacticCoord"
QT_MOC_LITERAL(15, 172, 10), // "ObjectType"
QT_MOC_LITERAL(16, 183, 18), // "EclipticCoordJ2000"
QT_MOC_LITERAL(17, 202, 19), // "EclipticCoordOfDate"
QT_MOC_LITERAL(18, 222, 16), // "IAUConstellation"
QT_MOC_LITERAL(19, 239, 6), // "NoFont"
QT_MOC_LITERAL(20, 246, 9), // "PlainText"
QT_MOC_LITERAL(21, 256, 15) // "InfoStringGroup"

    },
    "StelObject\0InfoStringGroupFlags\0Name\0"
    "CatalogNumber\0Magnitude\0RaDecJ2000\0"
    "RaDecOfDate\0AltAzi\0Distance\0Size\0Extra\0"
    "HourAngle\0AbsoluteMagnitude\0GalacticCoord\0"
    "SupergalacticCoord\0ObjectType\0"
    "EclipticCoordJ2000\0EclipticCoordOfDate\0"
    "IAUConstellation\0NoFont\0PlainText\0"
    "InfoStringGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x1,   19,   22,
      21, 0x1,   19,   60,

 // enum data: key, value
       2, uint(StelObject::Name),
       3, uint(StelObject::CatalogNumber),
       4, uint(StelObject::Magnitude),
       5, uint(StelObject::RaDecJ2000),
       6, uint(StelObject::RaDecOfDate),
       7, uint(StelObject::AltAzi),
       8, uint(StelObject::Distance),
       9, uint(StelObject::Size),
      10, uint(StelObject::Extra),
      11, uint(StelObject::HourAngle),
      12, uint(StelObject::AbsoluteMagnitude),
      13, uint(StelObject::GalacticCoord),
      14, uint(StelObject::SupergalacticCoord),
      15, uint(StelObject::ObjectType),
      16, uint(StelObject::EclipticCoordJ2000),
      17, uint(StelObject::EclipticCoordOfDate),
      18, uint(StelObject::IAUConstellation),
      19, uint(StelObject::NoFont),
      20, uint(StelObject::PlainText),
       2, uint(StelObject::Name),
       3, uint(StelObject::CatalogNumber),
       4, uint(StelObject::Magnitude),
       5, uint(StelObject::RaDecJ2000),
       6, uint(StelObject::RaDecOfDate),
       7, uint(StelObject::AltAzi),
       8, uint(StelObject::Distance),
       9, uint(StelObject::Size),
      10, uint(StelObject::Extra),
      11, uint(StelObject::HourAngle),
      12, uint(StelObject::AbsoluteMagnitude),
      13, uint(StelObject::GalacticCoord),
      14, uint(StelObject::SupergalacticCoord),
      15, uint(StelObject::ObjectType),
      16, uint(StelObject::EclipticCoordJ2000),
      17, uint(StelObject::EclipticCoordOfDate),
      18, uint(StelObject::IAUConstellation),
      19, uint(StelObject::NoFont),
      20, uint(StelObject::PlainText),

       0        // eod
};

const QMetaObject StelObject::staticMetaObject = {
    { &StelRegionObject::staticMetaObject, qt_meta_stringdata_StelObject.data,
      qt_meta_data_StelObject,  Q_NULLPTR, Q_NULLPTR, Q_NULLPTR}
};

QT_END_MOC_NAMESPACE
