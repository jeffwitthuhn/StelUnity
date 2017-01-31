/****************************************************************************
** Meta object code from reading C++ file 'S3DEnum.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Scenery3d/src/S3DEnum.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'S3DEnum.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_S3DEnum_t {
    QByteArrayData data[12];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_S3DEnum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_S3DEnum_t qt_meta_stringdata_S3DEnum = {
    {
QT_MOC_LITERAL(0, 0, 7), // "S3DEnum"
QT_MOC_LITERAL(1, 8, 15), // "CubemappingMode"
QT_MOC_LITERAL(2, 24, 11), // "CM_TEXTURES"
QT_MOC_LITERAL(3, 36, 10), // "CM_CUBEMAP"
QT_MOC_LITERAL(4, 47, 18), // "CM_CUBEMAP_GSACCEL"
QT_MOC_LITERAL(5, 66, 19), // "ShadowFilterQuality"
QT_MOC_LITERAL(6, 86, 7), // "SFQ_OFF"
QT_MOC_LITERAL(7, 94, 12), // "SFQ_HARDWARE"
QT_MOC_LITERAL(8, 107, 7), // "SFQ_LOW"
QT_MOC_LITERAL(9, 115, 16), // "SFQ_LOW_HARDWARE"
QT_MOC_LITERAL(10, 132, 8), // "SFQ_HIGH"
QT_MOC_LITERAL(11, 141, 17) // "SFQ_HIGH_HARDWARE"

    },
    "S3DEnum\0CubemappingMode\0CM_TEXTURES\0"
    "CM_CUBEMAP\0CM_CUBEMAP_GSACCEL\0"
    "ShadowFilterQuality\0SFQ_OFF\0SFQ_HARDWARE\0"
    "SFQ_LOW\0SFQ_LOW_HARDWARE\0SFQ_HIGH\0"
    "SFQ_HIGH_HARDWARE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_S3DEnum[] = {

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
       1, 0x0,    3,   22,
       5, 0x0,    6,   28,

 // enum data: key, value
       2, uint(S3DEnum::CM_TEXTURES),
       3, uint(S3DEnum::CM_CUBEMAP),
       4, uint(S3DEnum::CM_CUBEMAP_GSACCEL),
       6, uint(S3DEnum::SFQ_OFF),
       7, uint(S3DEnum::SFQ_HARDWARE),
       8, uint(S3DEnum::SFQ_LOW),
       9, uint(S3DEnum::SFQ_LOW_HARDWARE),
      10, uint(S3DEnum::SFQ_HIGH),
      11, uint(S3DEnum::SFQ_HIGH_HARDWARE),

       0        // eod
};

const QMetaObject S3DEnum::staticMetaObject = {
    { Q_NULLPTR, qt_meta_stringdata_S3DEnum.data,
      qt_meta_data_S3DEnum,  Q_NULLPTR, Q_NULLPTR, Q_NULLPTR}
};

QT_END_MOC_NAMESPACE
