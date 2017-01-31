/****************************************************************************
** Meta object code from reading C++ file 'StelMovementMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelMovementMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelMovementMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelMovementMgr_t {
    QByteArrayData data[102];
    char stringdata0[1606];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelMovementMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelMovementMgr_t qt_meta_stringdata_StelMovementMgr = {
    {
QT_MOC_LITERAL(0, 0, 15), // "StelMovementMgr"
QT_MOC_LITERAL(1, 16, 19), // "flagTrackingChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 1), // "b"
QT_MOC_LITERAL(4, 39, 22), // "equatorialMountChanged"
QT_MOC_LITERAL(5, 62, 37), // "flagAutoZoomOutResetsDirectio..."
QT_MOC_LITERAL(6, 100, 37), // "viewportHorizontalOffsetTarge..."
QT_MOC_LITERAL(7, 138, 1), // "f"
QT_MOC_LITERAL(8, 140, 35), // "viewportVerticalOffsetTargetC..."
QT_MOC_LITERAL(9, 176, 15), // "toggleMountMode"
QT_MOC_LITERAL(10, 192, 18), // "setEquatorialMount"
QT_MOC_LITERAL(11, 211, 15), // "setFlagTracking"
QT_MOC_LITERAL(12, 227, 15), // "getFlagTracking"
QT_MOC_LITERAL(13, 243, 17), // "setFlagLockEquPos"
QT_MOC_LITERAL(14, 261, 17), // "getFlagLockEquPos"
QT_MOC_LITERAL(15, 279, 7), // "panView"
QT_MOC_LITERAL(16, 287, 7), // "deltaAz"
QT_MOC_LITERAL(17, 295, 8), // "deltaAlt"
QT_MOC_LITERAL(18, 304, 19), // "setAutoMoveDuration"
QT_MOC_LITERAL(19, 324, 19), // "getAutoMoveDuration"
QT_MOC_LITERAL(20, 344, 33), // "setFlagAutoZoomOutResetsDirec..."
QT_MOC_LITERAL(21, 378, 33), // "getFlagAutoZoomOutResetsDirec..."
QT_MOC_LITERAL(22, 412, 21), // "getFlagEnableZoomKeys"
QT_MOC_LITERAL(23, 434, 21), // "setFlagEnableZoomKeys"
QT_MOC_LITERAL(24, 456, 21), // "getFlagEnableMoveKeys"
QT_MOC_LITERAL(25, 478, 21), // "setFlagEnableMoveKeys"
QT_MOC_LITERAL(26, 500, 29), // "getFlagEnableMoveAtScreenEdge"
QT_MOC_LITERAL(27, 530, 29), // "setFlagEnableMoveAtScreenEdge"
QT_MOC_LITERAL(28, 560, 28), // "getFlagEnableMouseNavigation"
QT_MOC_LITERAL(29, 589, 28), // "setFlagEnableMouseNavigation"
QT_MOC_LITERAL(30, 618, 11), // "moveToJ2000"
QT_MOC_LITERAL(31, 630, 5), // "Vec3d"
QT_MOC_LITERAL(32, 636, 3), // "aim"
QT_MOC_LITERAL(33, 640, 5), // "aimUp"
QT_MOC_LITERAL(34, 646, 12), // "moveDuration"
QT_MOC_LITERAL(35, 659, 11), // "ZoomingMode"
QT_MOC_LITERAL(36, 671, 7), // "zooming"
QT_MOC_LITERAL(37, 679, 12), // "moveToObject"
QT_MOC_LITERAL(38, 692, 11), // "StelObjectP"
QT_MOC_LITERAL(39, 704, 6), // "target"
QT_MOC_LITERAL(40, 711, 12), // "moveToAltAzi"
QT_MOC_LITERAL(41, 724, 6), // "zoomTo"
QT_MOC_LITERAL(42, 731, 6), // "aimFov"
QT_MOC_LITERAL(43, 738, 13), // "getCurrentFov"
QT_MOC_LITERAL(44, 752, 10), // "getInitFov"
QT_MOC_LITERAL(45, 763, 10), // "setInitFov"
QT_MOC_LITERAL(46, 774, 3), // "fov"
QT_MOC_LITERAL(47, 778, 23), // "getInitViewingDirection"
QT_MOC_LITERAL(48, 802, 29), // "setInitViewDirectionToCurrent"
QT_MOC_LITERAL(49, 832, 21), // "getViewDirectionJ2000"
QT_MOC_LITERAL(50, 854, 21), // "setViewDirectionJ2000"
QT_MOC_LITERAL(51, 876, 1), // "v"
QT_MOC_LITERAL(52, 878, 9), // "setMaxFov"
QT_MOC_LITERAL(53, 888, 3), // "max"
QT_MOC_LITERAL(54, 892, 9), // "getMaxFov"
QT_MOC_LITERAL(55, 902, 9), // "getMinFov"
QT_MOC_LITERAL(56, 912, 10), // "autoZoomIn"
QT_MOC_LITERAL(57, 923, 15), // "allowManualZoom"
QT_MOC_LITERAL(58, 939, 11), // "autoZoomOut"
QT_MOC_LITERAL(59, 951, 4), // "full"
QT_MOC_LITERAL(60, 956, 9), // "getAimFov"
QT_MOC_LITERAL(61, 966, 9), // "turnRight"
QT_MOC_LITERAL(62, 976, 8), // "turnLeft"
QT_MOC_LITERAL(63, 985, 6), // "turnUp"
QT_MOC_LITERAL(64, 992, 8), // "turnDown"
QT_MOC_LITERAL(65, 1001, 8), // "moveSlow"
QT_MOC_LITERAL(66, 1010, 6), // "zoomIn"
QT_MOC_LITERAL(67, 1017, 7), // "zoomOut"
QT_MOC_LITERAL(68, 1025, 8), // "lookEast"
QT_MOC_LITERAL(69, 1034, 8), // "lookWest"
QT_MOC_LITERAL(70, 1043, 9), // "lookNorth"
QT_MOC_LITERAL(71, 1053, 9), // "lookSouth"
QT_MOC_LITERAL(72, 1063, 10), // "lookZenith"
QT_MOC_LITERAL(73, 1074, 14), // "lookTowardsNCP"
QT_MOC_LITERAL(74, 1089, 14), // "lookTowardsSCP"
QT_MOC_LITERAL(75, 1104, 12), // "moveViewport"
QT_MOC_LITERAL(76, 1117, 7), // "offsetX"
QT_MOC_LITERAL(77, 1125, 7), // "offsetY"
QT_MOC_LITERAL(78, 1133, 8), // "duration"
QT_MOC_LITERAL(79, 1142, 12), // "setMountMode"
QT_MOC_LITERAL(80, 1155, 9), // "MountMode"
QT_MOC_LITERAL(81, 1165, 1), // "m"
QT_MOC_LITERAL(82, 1167, 12), // "getMountMode"
QT_MOC_LITERAL(83, 1180, 18), // "getEquatorialMount"
QT_MOC_LITERAL(84, 1199, 22), // "setInhibitAllAutomoves"
QT_MOC_LITERAL(85, 1222, 7), // "inhibit"
QT_MOC_LITERAL(86, 1230, 23), // "getViewportOffsetTarget"
QT_MOC_LITERAL(87, 1254, 5), // "Vec2f"
QT_MOC_LITERAL(88, 1260, 33), // "getViewportHorizontalOffsetTa..."
QT_MOC_LITERAL(89, 1294, 31), // "getViewportVerticalOffsetTarget"
QT_MOC_LITERAL(90, 1326, 33), // "setViewportHorizontalOffsetTa..."
QT_MOC_LITERAL(91, 1360, 31), // "setViewportVerticalOffsetTarget"
QT_MOC_LITERAL(92, 1392, 20), // "selectedObjectChange"
QT_MOC_LITERAL(93, 1413, 34), // "StelModule::StelModuleSelectA..."
QT_MOC_LITERAL(94, 1448, 6), // "action"
QT_MOC_LITERAL(95, 1455, 28), // "handleViewportOffsetMovement"
QT_MOC_LITERAL(96, 1484, 5), // "value"
QT_MOC_LITERAL(97, 1490, 15), // "equatorialMount"
QT_MOC_LITERAL(98, 1506, 8), // "tracking"
QT_MOC_LITERAL(99, 1515, 30), // "viewportHorizontalOffsetTarget"
QT_MOC_LITERAL(100, 1546, 28), // "viewportVerticalOffsetTarget"
QT_MOC_LITERAL(101, 1575, 30) // "flagAutoZoomOutResetsDirection"

    },
    "StelMovementMgr\0flagTrackingChanged\0"
    "\0b\0equatorialMountChanged\0"
    "flagAutoZoomOutResetsDirectionChanged\0"
    "viewportHorizontalOffsetTargetChanged\0"
    "f\0viewportVerticalOffsetTargetChanged\0"
    "toggleMountMode\0setEquatorialMount\0"
    "setFlagTracking\0getFlagTracking\0"
    "setFlagLockEquPos\0getFlagLockEquPos\0"
    "panView\0deltaAz\0deltaAlt\0setAutoMoveDuration\0"
    "getAutoMoveDuration\0"
    "setFlagAutoZoomOutResetsDirection\0"
    "getFlagAutoZoomOutResetsDirection\0"
    "getFlagEnableZoomKeys\0setFlagEnableZoomKeys\0"
    "getFlagEnableMoveKeys\0setFlagEnableMoveKeys\0"
    "getFlagEnableMoveAtScreenEdge\0"
    "setFlagEnableMoveAtScreenEdge\0"
    "getFlagEnableMouseNavigation\0"
    "setFlagEnableMouseNavigation\0moveToJ2000\0"
    "Vec3d\0aim\0aimUp\0moveDuration\0ZoomingMode\0"
    "zooming\0moveToObject\0StelObjectP\0"
    "target\0moveToAltAzi\0zoomTo\0aimFov\0"
    "getCurrentFov\0getInitFov\0setInitFov\0"
    "fov\0getInitViewingDirection\0"
    "setInitViewDirectionToCurrent\0"
    "getViewDirectionJ2000\0setViewDirectionJ2000\0"
    "v\0setMaxFov\0max\0getMaxFov\0getMinFov\0"
    "autoZoomIn\0allowManualZoom\0autoZoomOut\0"
    "full\0getAimFov\0turnRight\0turnLeft\0"
    "turnUp\0turnDown\0moveSlow\0zoomIn\0zoomOut\0"
    "lookEast\0lookWest\0lookNorth\0lookSouth\0"
    "lookZenith\0lookTowardsNCP\0lookTowardsSCP\0"
    "moveViewport\0offsetX\0offsetY\0duration\0"
    "setMountMode\0MountMode\0m\0getMountMode\0"
    "getEquatorialMount\0setInhibitAllAutomoves\0"
    "inhibit\0getViewportOffsetTarget\0Vec2f\0"
    "getViewportHorizontalOffsetTarget\0"
    "getViewportVerticalOffsetTarget\0"
    "setViewportHorizontalOffsetTarget\0"
    "setViewportVerticalOffsetTarget\0"
    "selectedObjectChange\0"
    "StelModule::StelModuleSelectAction\0"
    "action\0handleViewportOffsetMovement\0"
    "value\0equatorialMount\0tracking\0"
    "viewportHorizontalOffsetTarget\0"
    "viewportVerticalOffsetTarget\0"
    "flagAutoZoomOutResetsDirection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelMovementMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      80,   14, // methods
       5,  634, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  414,    2, 0x06 /* Public */,
       4,    1,  417,    2, 0x06 /* Public */,
       5,    1,  420,    2, 0x06 /* Public */,
       6,    1,  423,    2, 0x06 /* Public */,
       8,    1,  426,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  429,    2, 0x0a /* Public */,
      10,    1,  430,    2, 0x0a /* Public */,
      11,    1,  433,    2, 0x0a /* Public */,
      11,    0,  436,    2, 0x2a /* Public | MethodCloned */,
      12,    0,  437,    2, 0x0a /* Public */,
      13,    1,  438,    2, 0x0a /* Public */,
      14,    0,  441,    2, 0x0a /* Public */,
      15,    2,  442,    2, 0x0a /* Public */,
      18,    1,  447,    2, 0x0a /* Public */,
      19,    0,  450,    2, 0x0a /* Public */,
      20,    1,  451,    2, 0x0a /* Public */,
      21,    0,  454,    2, 0x0a /* Public */,
      22,    0,  455,    2, 0x0a /* Public */,
      23,    1,  456,    2, 0x0a /* Public */,
      24,    0,  459,    2, 0x0a /* Public */,
      25,    1,  460,    2, 0x0a /* Public */,
      26,    0,  463,    2, 0x0a /* Public */,
      27,    1,  464,    2, 0x0a /* Public */,
      28,    0,  467,    2, 0x0a /* Public */,
      29,    1,  468,    2, 0x0a /* Public */,
      30,    4,  471,    2, 0x0a /* Public */,
      30,    3,  480,    2, 0x2a /* Public | MethodCloned */,
      30,    2,  487,    2, 0x2a /* Public | MethodCloned */,
      37,    3,  492,    2, 0x0a /* Public */,
      37,    2,  499,    2, 0x2a /* Public | MethodCloned */,
      37,    1,  504,    2, 0x2a /* Public | MethodCloned */,
      40,    4,  507,    2, 0x0a /* Public */,
      40,    3,  516,    2, 0x2a /* Public | MethodCloned */,
      40,    2,  523,    2, 0x2a /* Public | MethodCloned */,
      41,    2,  528,    2, 0x0a /* Public */,
      41,    1,  533,    2, 0x2a /* Public | MethodCloned */,
      43,    0,  536,    2, 0x0a /* Public */,
      44,    0,  537,    2, 0x0a /* Public */,
      45,    1,  538,    2, 0x0a /* Public */,
      47,    0,  541,    2, 0x0a /* Public */,
      48,    0,  542,    2, 0x0a /* Public */,
      49,    0,  543,    2, 0x0a /* Public */,
      50,    1,  544,    2, 0x0a /* Public */,
      52,    1,  547,    2, 0x0a /* Public */,
      54,    0,  550,    2, 0x0a /* Public */,
      55,    0,  551,    2, 0x0a /* Public */,
      56,    2,  552,    2, 0x0a /* Public */,
      56,    1,  557,    2, 0x2a /* Public | MethodCloned */,
      56,    0,  560,    2, 0x2a /* Public | MethodCloned */,
      58,    2,  561,    2, 0x0a /* Public */,
      58,    1,  566,    2, 0x2a /* Public | MethodCloned */,
      58,    0,  569,    2, 0x2a /* Public | MethodCloned */,
      60,    0,  570,    2, 0x0a /* Public */,
      61,    1,  571,    2, 0x0a /* Public */,
      62,    1,  574,    2, 0x0a /* Public */,
      63,    1,  577,    2, 0x0a /* Public */,
      64,    1,  580,    2, 0x0a /* Public */,
      65,    1,  583,    2, 0x0a /* Public */,
      66,    1,  586,    2, 0x0a /* Public */,
      67,    1,  589,    2, 0x0a /* Public */,
      68,    0,  592,    2, 0x0a /* Public */,
      69,    0,  593,    2, 0x0a /* Public */,
      70,    0,  594,    2, 0x0a /* Public */,
      71,    0,  595,    2, 0x0a /* Public */,
      72,    0,  596,    2, 0x0a /* Public */,
      73,    0,  597,    2, 0x0a /* Public */,
      74,    0,  598,    2, 0x0a /* Public */,
      75,    3,  599,    2, 0x0a /* Public */,
      75,    2,  606,    2, 0x2a /* Public | MethodCloned */,
      79,    1,  611,    2, 0x0a /* Public */,
      82,    0,  614,    2, 0x0a /* Public */,
      83,    0,  615,    2, 0x0a /* Public */,
      84,    1,  616,    2, 0x0a /* Public */,
      86,    0,  619,    2, 0x0a /* Public */,
      88,    0,  620,    2, 0x0a /* Public */,
      89,    0,  621,    2, 0x0a /* Public */,
      90,    1,  622,    2, 0x0a /* Public */,
      91,    1,  625,    2, 0x0a /* Public */,
      92,    1,  628,    2, 0x08 /* Private */,
      95,    1,  631,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   16,   17,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 31, QMetaType::Float, 0x80000000 | 35,   32,   33,   34,   36,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 31, QMetaType::Float,   32,   33,   34,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 31,   32,   33,
    QMetaType::Void, 0x80000000 | 38, QMetaType::Float, 0x80000000 | 35,   39,   34,   36,
    QMetaType::Void, 0x80000000 | 38, QMetaType::Float,   39,   34,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 31, QMetaType::Float, 0x80000000 | 35,   32,   33,   34,   36,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 31, QMetaType::Float,   32,   33,   34,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 31,   32,   33,
    QMetaType::Void, QMetaType::Double, QMetaType::Float,   42,   34,
    QMetaType::Void, QMetaType::Double,   42,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   46,
    0x80000000 | 31,
    QMetaType::Void,
    0x80000000 | 31,
    QMetaType::Void, 0x80000000 | 31,   51,
    QMetaType::Void, QMetaType::Double,   53,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Float, QMetaType::Bool,   34,   57,
    QMetaType::Void, QMetaType::Float,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Bool,   34,   59,
    QMetaType::Void, QMetaType::Float,   34,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   76,   77,   78,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   76,   77,
    QMetaType::Void, 0x80000000 | 80,   81,
    0x80000000 | 80,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   85,
    0x80000000 | 87,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, 0x80000000 | 93,   94,
    QMetaType::Void, QMetaType::QReal,   96,

 // properties: name, type, flags
      97, QMetaType::Bool, 0x00495103,
      98, QMetaType::Bool, 0x00495003,
      99, QMetaType::Float, 0x00495103,
     100, QMetaType::Float, 0x00495103,
     101, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,
       0,
       3,
       4,
       2,

       0        // eod
};

void StelMovementMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelMovementMgr *_t = static_cast<StelMovementMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flagTrackingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->equatorialMountChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->flagAutoZoomOutResetsDirectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->viewportHorizontalOffsetTargetChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->viewportVerticalOffsetTargetChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->toggleMountMode(); break;
        case 6: _t->setEquatorialMount((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setFlagTracking((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setFlagTracking(); break;
        case 9: { bool _r = _t->getFlagTracking();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->setFlagLockEquPos((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { bool _r = _t->getFlagLockEquPos();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->panView((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 13: _t->setAutoMoveDuration((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: { float _r = _t->getAutoMoveDuration();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 15: _t->setFlagAutoZoomOutResetsDirection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: { bool _r = _t->getFlagAutoZoomOutResetsDirection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->getFlagEnableZoomKeys();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->setFlagEnableZoomKeys((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: { bool _r = _t->getFlagEnableMoveKeys();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->setFlagEnableMoveKeys((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: { bool _r = _t->getFlagEnableMoveAtScreenEdge();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: _t->setFlagEnableMoveAtScreenEdge((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: { bool _r = _t->getFlagEnableMouseNavigation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: _t->setFlagEnableMouseNavigation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->moveToJ2000((*reinterpret_cast< const Vec3d(*)>(_a[1])),(*reinterpret_cast< const Vec3d(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< ZoomingMode(*)>(_a[4]))); break;
        case 26: _t->moveToJ2000((*reinterpret_cast< const Vec3d(*)>(_a[1])),(*reinterpret_cast< const Vec3d(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 27: _t->moveToJ2000((*reinterpret_cast< const Vec3d(*)>(_a[1])),(*reinterpret_cast< const Vec3d(*)>(_a[2]))); break;
        case 28: _t->moveToObject((*reinterpret_cast< const StelObjectP(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< ZoomingMode(*)>(_a[3]))); break;
        case 29: _t->moveToObject((*reinterpret_cast< const StelObjectP(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 30: _t->moveToObject((*reinterpret_cast< const StelObjectP(*)>(_a[1]))); break;
        case 31: _t->moveToAltAzi((*reinterpret_cast< const Vec3d(*)>(_a[1])),(*reinterpret_cast< const Vec3d(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< ZoomingMode(*)>(_a[4]))); break;
        case 32: _t->moveToAltAzi((*reinterpret_cast< const Vec3d(*)>(_a[1])),(*reinterpret_cast< const Vec3d(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 33: _t->moveToAltAzi((*reinterpret_cast< const Vec3d(*)>(_a[1])),(*reinterpret_cast< const Vec3d(*)>(_a[2]))); break;
        case 34: _t->zoomTo((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 35: _t->zoomTo((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 36: { double _r = _t->getCurrentFov();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 37: { double _r = _t->getInitFov();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 38: _t->setInitFov((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 39: { Vec3d _r = _t->getInitViewingDirection();
            if (_a[0]) *reinterpret_cast< Vec3d*>(_a[0]) = _r; }  break;
        case 40: _t->setInitViewDirectionToCurrent(); break;
        case 41: { Vec3d _r = _t->getViewDirectionJ2000();
            if (_a[0]) *reinterpret_cast< Vec3d*>(_a[0]) = _r; }  break;
        case 42: _t->setViewDirectionJ2000((*reinterpret_cast< const Vec3d(*)>(_a[1]))); break;
        case 43: _t->setMaxFov((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 44: { double _r = _t->getMaxFov();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 45: { double _r = _t->getMinFov();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 46: _t->autoZoomIn((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 47: _t->autoZoomIn((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->autoZoomIn(); break;
        case 49: _t->autoZoomOut((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 50: _t->autoZoomOut((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 51: _t->autoZoomOut(); break;
        case 52: { double _r = _t->getAimFov();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 53: _t->turnRight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->turnLeft((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->turnUp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->turnDown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->moveSlow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->zoomIn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->zoomOut((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->lookEast(); break;
        case 61: _t->lookWest(); break;
        case 62: _t->lookNorth(); break;
        case 63: _t->lookSouth(); break;
        case 64: _t->lookZenith(); break;
        case 65: _t->lookTowardsNCP(); break;
        case 66: _t->lookTowardsSCP(); break;
        case 67: _t->moveViewport((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3]))); break;
        case 68: _t->moveViewport((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 69: _t->setMountMode((*reinterpret_cast< MountMode(*)>(_a[1]))); break;
        case 70: { MountMode _r = _t->getMountMode();
            if (_a[0]) *reinterpret_cast< MountMode*>(_a[0]) = _r; }  break;
        case 71: { bool _r = _t->getEquatorialMount();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 72: _t->setInhibitAllAutomoves((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 73: { Vec2f _r = _t->getViewportOffsetTarget();
            if (_a[0]) *reinterpret_cast< Vec2f*>(_a[0]) = _r; }  break;
        case 74: { float _r = _t->getViewportHorizontalOffsetTarget();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 75: { float _r = _t->getViewportVerticalOffsetTarget();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 76: _t->setViewportHorizontalOffsetTarget((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 77: _t->setViewportVerticalOffsetTarget((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 78: _t->selectedObjectChange((*reinterpret_cast< StelModule::StelModuleSelectAction(*)>(_a[1]))); break;
        case 79: _t->handleViewportOffsetMovement((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3d >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3d >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3d >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StelObjectP >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StelObjectP >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StelObjectP >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3d >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3d >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3d >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3d >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StelModule::StelModuleSelectAction >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelMovementMgr::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMovementMgr::flagTrackingChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (StelMovementMgr::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMovementMgr::equatorialMountChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (StelMovementMgr::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMovementMgr::flagAutoZoomOutResetsDirectionChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (StelMovementMgr::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMovementMgr::viewportHorizontalOffsetTargetChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (StelMovementMgr::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMovementMgr::viewportVerticalOffsetTargetChanged)) {
                *result = 4;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StelMovementMgr *_t = static_cast<StelMovementMgr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getEquatorialMount(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getFlagTracking(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getViewportHorizontalOffsetTarget(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getViewportVerticalOffsetTarget(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getFlagAutoZoomOutResetsDirection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        StelMovementMgr *_t = static_cast<StelMovementMgr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEquatorialMount(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setFlagTracking(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setViewportHorizontalOffsetTarget(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setViewportVerticalOffsetTarget(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setFlagAutoZoomOutResetsDirection(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject StelMovementMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_StelMovementMgr.data,
      qt_meta_data_StelMovementMgr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelMovementMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelMovementMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelMovementMgr.stringdata0))
        return static_cast<void*>(const_cast< StelMovementMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int StelMovementMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 80)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 80;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 80)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 80;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StelMovementMgr::flagTrackingChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StelMovementMgr::equatorialMountChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StelMovementMgr::flagAutoZoomOutResetsDirectionChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StelMovementMgr::viewportHorizontalOffsetTargetChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StelMovementMgr::viewportVerticalOffsetTargetChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
