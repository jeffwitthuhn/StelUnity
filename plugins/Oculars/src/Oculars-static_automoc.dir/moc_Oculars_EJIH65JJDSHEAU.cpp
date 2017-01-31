/****************************************************************************
** Meta object code from reading C++ file 'Oculars.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Oculars/src/Oculars.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Oculars.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Oculars_t {
    QByteArrayData data[67];
    char stringdata0[1139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Oculars_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Oculars_t qt_meta_stringdata_Oculars = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Oculars"
QT_MOC_LITERAL(1, 8, 19), // "enableOcularChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "value"
QT_MOC_LITERAL(4, 35, 23), // "enableCrosshairsChanged"
QT_MOC_LITERAL(5, 59, 16), // "enableCCDChanged"
QT_MOC_LITERAL(6, 76, 19), // "enableTelradChanged"
QT_MOC_LITERAL(7, 96, 18), // "selectedCCDChanged"
QT_MOC_LITERAL(8, 115, 21), // "selectedOcularChanged"
QT_MOC_LITERAL(9, 137, 24), // "selectedTelescopeChanged"
QT_MOC_LITERAL(10, 162, 19), // "selectedLensChanged"
QT_MOC_LITERAL(11, 182, 11), // "updateLists"
QT_MOC_LITERAL(12, 194, 16), // "ccdRotationReset"
QT_MOC_LITERAL(13, 211, 17), // "decrementCCDIndex"
QT_MOC_LITERAL(14, 229, 20), // "decrementOcularIndex"
QT_MOC_LITERAL(15, 250, 23), // "decrementTelescopeIndex"
QT_MOC_LITERAL(16, 274, 18), // "decrementLensIndex"
QT_MOC_LITERAL(17, 293, 16), // "displayPopupMenu"
QT_MOC_LITERAL(18, 310, 12), // "enableOcular"
QT_MOC_LITERAL(19, 323, 1), // "b"
QT_MOC_LITERAL(20, 325, 15), // "getEnableOcular"
QT_MOC_LITERAL(21, 341, 17), // "incrementCCDIndex"
QT_MOC_LITERAL(22, 359, 20), // "incrementOcularIndex"
QT_MOC_LITERAL(23, 380, 23), // "incrementTelescopeIndex"
QT_MOC_LITERAL(24, 404, 18), // "incrementLensIndex"
QT_MOC_LITERAL(25, 423, 11), // "disableLens"
QT_MOC_LITERAL(26, 435, 9), // "rotateCCD"
QT_MOC_LITERAL(27, 445, 6), // "amount"
QT_MOC_LITERAL(28, 452, 16), // "selectCCDAtIndex"
QT_MOC_LITERAL(29, 469, 11), // "indexString"
QT_MOC_LITERAL(30, 481, 19), // "selectOcularAtIndex"
QT_MOC_LITERAL(31, 501, 22), // "selectTelescopeAtIndex"
QT_MOC_LITERAL(32, 524, 17), // "selectLensAtIndex"
QT_MOC_LITERAL(33, 542, 9), // "toggleCCD"
QT_MOC_LITERAL(34, 552, 4), // "show"
QT_MOC_LITERAL(35, 557, 12), // "getEnableCCD"
QT_MOC_LITERAL(36, 570, 16), // "toggleCrosshairs"
QT_MOC_LITERAL(37, 587, 19), // "getEnableCrosshairs"
QT_MOC_LITERAL(38, 607, 12), // "toggleTelrad"
QT_MOC_LITERAL(39, 620, 15), // "getEnableTelrad"
QT_MOC_LITERAL(40, 636, 14), // "enableGuiPanel"
QT_MOC_LITERAL(41, 651, 6), // "enable"
QT_MOC_LITERAL(42, 658, 21), // "setFlagDecimalDegrees"
QT_MOC_LITERAL(43, 680, 21), // "getFlagDecimalDegrees"
QT_MOC_LITERAL(44, 702, 21), // "setFlagLimitMagnitude"
QT_MOC_LITERAL(45, 724, 21), // "getFlagLimitMagnitude"
QT_MOC_LITERAL(46, 746, 19), // "setFlagInitFovUsage"
QT_MOC_LITERAL(47, 766, 19), // "getFlagInitFovUsage"
QT_MOC_LITERAL(48, 786, 25), // "setFlagAutosetMountForCCD"
QT_MOC_LITERAL(49, 812, 25), // "getFlagAutosetMountForCCD"
QT_MOC_LITERAL(50, 838, 26), // "setFlagUseSemiTransparency"
QT_MOC_LITERAL(51, 865, 26), // "getFlagUseSemiTransparency"
QT_MOC_LITERAL(52, 892, 21), // "setFlagHideGridsLines"
QT_MOC_LITERAL(53, 914, 21), // "getFlagHideGridsLines"
QT_MOC_LITERAL(54, 936, 17), // "instrumentChanged"
QT_MOC_LITERAL(55, 954, 25), // "determineMaxEyepieceAngle"
QT_MOC_LITERAL(56, 980, 19), // "setRequireSelection"
QT_MOC_LITERAL(57, 1000, 5), // "state"
QT_MOC_LITERAL(58, 1006, 19), // "setScaleImageCircle"
QT_MOC_LITERAL(59, 1026, 18), // "setScreenFOVForCCD"
QT_MOC_LITERAL(60, 1045, 14), // "retranslateGui"
QT_MOC_LITERAL(61, 1060, 12), // "setStelStyle"
QT_MOC_LITERAL(62, 1073, 5), // "style"
QT_MOC_LITERAL(63, 1079, 19), // "updateOcularReticle"
QT_MOC_LITERAL(64, 1099, 16), // "enableCrosshairs"
QT_MOC_LITERAL(65, 1116, 9), // "enableCCD"
QT_MOC_LITERAL(66, 1126, 12) // "enableTelrad"

    },
    "Oculars\0enableOcularChanged\0\0value\0"
    "enableCrosshairsChanged\0enableCCDChanged\0"
    "enableTelradChanged\0selectedCCDChanged\0"
    "selectedOcularChanged\0selectedTelescopeChanged\0"
    "selectedLensChanged\0updateLists\0"
    "ccdRotationReset\0decrementCCDIndex\0"
    "decrementOcularIndex\0decrementTelescopeIndex\0"
    "decrementLensIndex\0displayPopupMenu\0"
    "enableOcular\0b\0getEnableOcular\0"
    "incrementCCDIndex\0incrementOcularIndex\0"
    "incrementTelescopeIndex\0incrementLensIndex\0"
    "disableLens\0rotateCCD\0amount\0"
    "selectCCDAtIndex\0indexString\0"
    "selectOcularAtIndex\0selectTelescopeAtIndex\0"
    "selectLensAtIndex\0toggleCCD\0show\0"
    "getEnableCCD\0toggleCrosshairs\0"
    "getEnableCrosshairs\0toggleTelrad\0"
    "getEnableTelrad\0enableGuiPanel\0enable\0"
    "setFlagDecimalDegrees\0getFlagDecimalDegrees\0"
    "setFlagLimitMagnitude\0getFlagLimitMagnitude\0"
    "setFlagInitFovUsage\0getFlagInitFovUsage\0"
    "setFlagAutosetMountForCCD\0"
    "getFlagAutosetMountForCCD\0"
    "setFlagUseSemiTransparency\0"
    "getFlagUseSemiTransparency\0"
    "setFlagHideGridsLines\0getFlagHideGridsLines\0"
    "instrumentChanged\0determineMaxEyepieceAngle\0"
    "setRequireSelection\0state\0setScaleImageCircle\0"
    "setScreenFOVForCCD\0retranslateGui\0"
    "setStelStyle\0style\0updateOcularReticle\0"
    "enableCrosshairs\0enableCCD\0enableTelrad"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Oculars[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       4,  408, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  304,    2, 0x06 /* Public */,
       4,    1,  307,    2, 0x06 /* Public */,
       5,    1,  310,    2, 0x06 /* Public */,
       6,    1,  313,    2, 0x06 /* Public */,
       7,    0,  316,    2, 0x06 /* Public */,
       8,    0,  317,    2, 0x06 /* Public */,
       9,    0,  318,    2, 0x06 /* Public */,
      10,    0,  319,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  320,    2, 0x0a /* Public */,
      12,    0,  321,    2, 0x0a /* Public */,
      13,    0,  322,    2, 0x0a /* Public */,
      14,    0,  323,    2, 0x0a /* Public */,
      15,    0,  324,    2, 0x0a /* Public */,
      16,    0,  325,    2, 0x0a /* Public */,
      17,    0,  326,    2, 0x0a /* Public */,
      18,    1,  327,    2, 0x0a /* Public */,
      20,    0,  330,    2, 0x0a /* Public */,
      21,    0,  331,    2, 0x0a /* Public */,
      22,    0,  332,    2, 0x0a /* Public */,
      23,    0,  333,    2, 0x0a /* Public */,
      24,    0,  334,    2, 0x0a /* Public */,
      25,    0,  335,    2, 0x0a /* Public */,
      26,    1,  336,    2, 0x0a /* Public */,
      28,    1,  339,    2, 0x0a /* Public */,
      30,    1,  342,    2, 0x0a /* Public */,
      31,    1,  345,    2, 0x0a /* Public */,
      32,    1,  348,    2, 0x0a /* Public */,
      33,    1,  351,    2, 0x0a /* Public */,
      33,    0,  354,    2, 0x0a /* Public */,
      35,    0,  355,    2, 0x0a /* Public */,
      36,    1,  356,    2, 0x0a /* Public */,
      36,    0,  359,    2, 0x2a /* Public | MethodCloned */,
      37,    0,  360,    2, 0x0a /* Public */,
      38,    1,  361,    2, 0x0a /* Public */,
      39,    0,  364,    2, 0x0a /* Public */,
      38,    0,  365,    2, 0x0a /* Public */,
      40,    1,  366,    2, 0x0a /* Public */,
      40,    0,  369,    2, 0x2a /* Public | MethodCloned */,
      42,    1,  370,    2, 0x0a /* Public */,
      43,    0,  373,    2, 0x0a /* Public */,
      44,    1,  374,    2, 0x0a /* Public */,
      45,    0,  377,    2, 0x0a /* Public */,
      46,    1,  378,    2, 0x0a /* Public */,
      47,    0,  381,    2, 0x0a /* Public */,
      48,    1,  382,    2, 0x0a /* Public */,
      49,    0,  385,    2, 0x0a /* Public */,
      50,    1,  386,    2, 0x0a /* Public */,
      51,    0,  389,    2, 0x0a /* Public */,
      52,    1,  390,    2, 0x0a /* Public */,
      53,    0,  393,    2, 0x0a /* Public */,
      54,    0,  394,    2, 0x08 /* Private */,
      55,    0,  395,    2, 0x08 /* Private */,
      56,    1,  396,    2, 0x08 /* Private */,
      58,    1,  399,    2, 0x08 /* Private */,
      59,    0,  402,    2, 0x08 /* Private */,
      60,    0,  403,    2, 0x08 /* Private */,
      61,    1,  404,    2, 0x08 /* Private */,
      63,    0,  407,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00495003,
      64, QMetaType::Bool, 0x00495003,
      65, QMetaType::Bool, 0x00495003,
      66, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Oculars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Oculars *_t = static_cast<Oculars *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableOcularChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->enableCrosshairsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enableCCDChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableTelradChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->selectedCCDChanged(); break;
        case 5: _t->selectedOcularChanged(); break;
        case 6: _t->selectedTelescopeChanged(); break;
        case 7: _t->selectedLensChanged(); break;
        case 8: _t->updateLists(); break;
        case 9: _t->ccdRotationReset(); break;
        case 10: _t->decrementCCDIndex(); break;
        case 11: _t->decrementOcularIndex(); break;
        case 12: _t->decrementTelescopeIndex(); break;
        case 13: _t->decrementLensIndex(); break;
        case 14: _t->displayPopupMenu(); break;
        case 15: _t->enableOcular((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: { bool _r = _t->getEnableOcular();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: _t->incrementCCDIndex(); break;
        case 18: _t->incrementOcularIndex(); break;
        case 19: _t->incrementTelescopeIndex(); break;
        case 20: _t->incrementLensIndex(); break;
        case 21: _t->disableLens(); break;
        case 22: _t->rotateCCD((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->selectCCDAtIndex((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->selectOcularAtIndex((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->selectTelescopeAtIndex((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->selectLensAtIndex((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->toggleCCD((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->toggleCCD(); break;
        case 29: { bool _r = _t->getEnableCCD();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: _t->toggleCrosshairs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->toggleCrosshairs(); break;
        case 32: { bool _r = _t->getEnableCrosshairs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: _t->toggleTelrad((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: { bool _r = _t->getEnableTelrad();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: _t->toggleTelrad(); break;
        case 36: _t->enableGuiPanel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->enableGuiPanel(); break;
        case 38: _t->setFlagDecimalDegrees((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 39: { bool _r = _t->getFlagDecimalDegrees();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: _t->setFlagLimitMagnitude((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 41: { bool _r = _t->getFlagLimitMagnitude();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: _t->setFlagInitFovUsage((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 43: { bool _r = _t->getFlagInitFovUsage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: _t->setFlagAutosetMountForCCD((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 45: { bool _r = _t->getFlagAutosetMountForCCD();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: _t->setFlagUseSemiTransparency((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 47: { bool _r = _t->getFlagUseSemiTransparency();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: _t->setFlagHideGridsLines((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 49: { bool _r = _t->getFlagHideGridsLines();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: _t->instrumentChanged(); break;
        case 51: _t->determineMaxEyepieceAngle(); break;
        case 52: _t->setRequireSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->setScaleImageCircle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->setScreenFOVForCCD(); break;
        case 55: _t->retranslateGui(); break;
        case 56: _t->setStelStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 57: _t->updateOcularReticle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Oculars::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Oculars::enableOcularChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Oculars::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Oculars::enableCrosshairsChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Oculars::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Oculars::enableCCDChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (Oculars::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Oculars::enableTelradChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (Oculars::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Oculars::selectedCCDChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (Oculars::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Oculars::selectedOcularChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (Oculars::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Oculars::selectedTelescopeChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (Oculars::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Oculars::selectedLensChanged)) {
                *result = 7;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Oculars *_t = static_cast<Oculars *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getEnableOcular(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getEnableCrosshairs(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getEnableCCD(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getEnableTelrad(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Oculars *_t = static_cast<Oculars *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->enableOcular(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->toggleCrosshairs(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->toggleCCD(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->toggleTelrad(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Oculars::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_Oculars.data,
      qt_meta_data_Oculars,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Oculars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Oculars::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Oculars.stringdata0))
        return static_cast<void*>(const_cast< Oculars*>(this));
    return StelModule::qt_metacast(_clname);
}

int Oculars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 58;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Oculars::enableOcularChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Oculars::enableCrosshairsChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Oculars::enableCCDChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Oculars::enableTelradChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Oculars::selectedCCDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Oculars::selectedOcularChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Oculars::selectedTelescopeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Oculars::selectedLensChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
struct qt_meta_stringdata_OcularsStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OcularsStelPluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OcularsStelPluginInterface_t qt_meta_stringdata_OcularsStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 26) // "OcularsStelPluginInterface"

    },
    "OcularsStelPluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OcularsStelPluginInterface[] = {

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

void OcularsStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OcularsStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OcularsStelPluginInterface.data,
      qt_meta_data_OcularsStelPluginInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OcularsStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OcularsStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OcularsStelPluginInterface.stringdata0))
        return static_cast<void*>(const_cast< OcularsStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< OcularsStelPluginInterface*>(this));
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< OcularsStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int OcularsStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    'a',  'm',  'e',  0x00, 0x1a, 0x00, 'O',  'c', 
    'u',  'l',  'a',  'r',  's',  'S',  't',  'e', 
    'l',  'P',  'l',  'u',  'g',  'i',  'n',  'I', 
    'n',  't',  'e',  'r',  'f',  'a',  'c',  'e', 
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
    0x1a, 0x00, 'O',  'c',  'u',  'l',  'a',  'r', 
    's',  'S',  't',  'e',  'l',  'P',  'l',  'u', 
    'g',  'i',  'n',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(OcularsStelPluginInterface, OcularsStelPluginInterface)

QT_END_MOC_NAMESPACE
