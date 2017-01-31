/****************************************************************************
** Meta object code from reading C++ file 'LandscapeMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/modules/LandscapeMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LandscapeMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LandscapeMgr_t {
    QByteArrayData data[127];
    char stringdata0[2575];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LandscapeMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LandscapeMgr_t qt_meta_stringdata_LandscapeMgr = {
    {
QT_MOC_LITERAL(0, 0, 12), // "LandscapeMgr"
QT_MOC_LITERAL(1, 13, 26), // "atmosphereDisplayedChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "displayed"
QT_MOC_LITERAL(4, 51, 31), // "cardinalsPointsDisplayedChanged"
QT_MOC_LITERAL(5, 83, 27), // "cardinalsPointsColorChanged"
QT_MOC_LITERAL(6, 111, 5), // "Vec3f"
QT_MOC_LITERAL(7, 117, 8), // "newColor"
QT_MOC_LITERAL(8, 126, 19), // "fogDisplayedChanged"
QT_MOC_LITERAL(9, 146, 25), // "landscapeDisplayedChanged"
QT_MOC_LITERAL(10, 172, 28), // "illuminationDisplayedChanged"
QT_MOC_LITERAL(11, 201, 22), // "labelsDisplayedChanged"
QT_MOC_LITERAL(12, 224, 26), // "lightPollutionUsageChanged"
QT_MOC_LITERAL(13, 251, 5), // "usage"
QT_MOC_LITERAL(14, 257, 33), // "flagLandscapeAutoSelectionCha..."
QT_MOC_LITERAL(15, 291, 5), // "value"
QT_MOC_LITERAL(16, 297, 32), // "flagLandscapeSetsLocationChanged"
QT_MOC_LITERAL(17, 330, 40), // "flagLandscapeUseMinimalBright..."
QT_MOC_LITERAL(18, 371, 41), // "flagLandscapeSetsMinimalBrigh..."
QT_MOC_LITERAL(19, 413, 31), // "defaultMinimalBrightnessChanged"
QT_MOC_LITERAL(20, 445, 34), // "setFlagAtmosphereAutoEnableCh..."
QT_MOC_LITERAL(21, 480, 7), // "enabled"
QT_MOC_LITERAL(22, 488, 23), // "defaultLandscapeChanged"
QT_MOC_LITERAL(23, 512, 2), // "id"
QT_MOC_LITERAL(24, 515, 17), // "landscapesChanged"
QT_MOC_LITERAL(25, 533, 17), // "errorUnableToOpen"
QT_MOC_LITERAL(26, 551, 4), // "path"
QT_MOC_LITERAL(27, 556, 15), // "errorNotArchive"
QT_MOC_LITERAL(28, 572, 14), // "errorNotUnique"
QT_MOC_LITERAL(29, 587, 8), // "nameOrID"
QT_MOC_LITERAL(30, 596, 19), // "errorRemoveManually"
QT_MOC_LITERAL(31, 616, 23), // "currentLandscapeChanged"
QT_MOC_LITERAL(32, 640, 18), // "currentLandscapeID"
QT_MOC_LITERAL(33, 659, 20), // "currentLandscapeName"
QT_MOC_LITERAL(34, 680, 12), // "getLuminance"
QT_MOC_LITERAL(35, 693, 29), // "getAtmosphereAverageLuminance"
QT_MOC_LITERAL(36, 723, 29), // "setAtmosphereAverageLuminance"
QT_MOC_LITERAL(37, 753, 17), // "overrideLuminance"
QT_MOC_LITERAL(38, 771, 15), // "getNameToDirMap"
QT_MOC_LITERAL(39, 787, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(40, 809, 20), // "getAllLandscapeNames"
QT_MOC_LITERAL(41, 830, 18), // "getAllLandscapeIDs"
QT_MOC_LITERAL(42, 849, 19), // "getUserLandscapeIDs"
QT_MOC_LITERAL(43, 869, 21), // "getCurrentLandscapeID"
QT_MOC_LITERAL(44, 891, 21), // "setCurrentLandscapeID"
QT_MOC_LITERAL(45, 913, 22), // "changeLocationDuration"
QT_MOC_LITERAL(46, 936, 23), // "getCurrentLandscapeName"
QT_MOC_LITERAL(47, 960, 23), // "setCurrentLandscapeName"
QT_MOC_LITERAL(48, 984, 4), // "name"
QT_MOC_LITERAL(49, 989, 19), // "getCurrentLandscape"
QT_MOC_LITERAL(50, 1009, 10), // "Landscape*"
QT_MOC_LITERAL(51, 1020, 21), // "getDefaultLandscapeID"
QT_MOC_LITERAL(52, 1042, 21), // "setDefaultLandscapeID"
QT_MOC_LITERAL(53, 1064, 34), // "getCurrentLandscapeHtmlDescri..."
QT_MOC_LITERAL(54, 1099, 14), // "getDescription"
QT_MOC_LITERAL(55, 1114, 16), // "getFlagLandscape"
QT_MOC_LITERAL(56, 1131, 16), // "setFlagLandscape"
QT_MOC_LITERAL(57, 1148, 26), // "getIsLandscapeFullyVisible"
QT_MOC_LITERAL(58, 1175, 31), // "getLandscapeSinMinAltitudeLimit"
QT_MOC_LITERAL(59, 1207, 10), // "getFlagFog"
QT_MOC_LITERAL(60, 1218, 10), // "setFlagFog"
QT_MOC_LITERAL(61, 1229, 19), // "getFlagIllumination"
QT_MOC_LITERAL(62, 1249, 19), // "setFlagIllumination"
QT_MOC_LITERAL(63, 1269, 2), // "on"
QT_MOC_LITERAL(64, 1272, 13), // "getFlagLabels"
QT_MOC_LITERAL(65, 1286, 13), // "setFlagLabels"
QT_MOC_LITERAL(66, 1300, 28), // "getFlagLandscapeSetsLocation"
QT_MOC_LITERAL(67, 1329, 28), // "setFlagLandscapeSetsLocation"
QT_MOC_LITERAL(68, 1358, 1), // "b"
QT_MOC_LITERAL(69, 1360, 36), // "getFlagLandscapeUseMinimalBri..."
QT_MOC_LITERAL(70, 1397, 36), // "setFlagLandscapeUseMinimalBri..."
QT_MOC_LITERAL(71, 1434, 37), // "getFlagLandscapeSetsMinimalBr..."
QT_MOC_LITERAL(72, 1472, 37), // "setFlagLandscapeSetsMinimalBr..."
QT_MOC_LITERAL(73, 1510, 27), // "getDefaultMinimalBrightness"
QT_MOC_LITERAL(74, 1538, 27), // "setDefaultMinimalBrightness"
QT_MOC_LITERAL(75, 1566, 36), // "setFlagUseLightPollutionFromD..."
QT_MOC_LITERAL(76, 1603, 36), // "getFlagUseLightPollutionFromD..."
QT_MOC_LITERAL(77, 1640, 22), // "getFlagCardinalsPoints"
QT_MOC_LITERAL(78, 1663, 22), // "setFlagCardinalsPoints"
QT_MOC_LITERAL(79, 1686, 22), // "getColorCardinalPoints"
QT_MOC_LITERAL(80, 1709, 22), // "setColorCardinalPoints"
QT_MOC_LITERAL(81, 1732, 1), // "v"
QT_MOC_LITERAL(82, 1734, 17), // "getFlagAtmosphere"
QT_MOC_LITERAL(83, 1752, 17), // "setFlagAtmosphere"
QT_MOC_LITERAL(84, 1770, 25), // "getAtmosphereFadeDuration"
QT_MOC_LITERAL(85, 1796, 25), // "setAtmosphereFadeDuration"
QT_MOC_LITERAL(86, 1822, 1), // "f"
QT_MOC_LITERAL(87, 1824, 12), // "setZRotation"
QT_MOC_LITERAL(88, 1837, 1), // "d"
QT_MOC_LITERAL(89, 1839, 27), // "installLandscapeFromArchive"
QT_MOC_LITERAL(90, 1867, 19), // "pathToSourceArchive"
QT_MOC_LITERAL(91, 1887, 7), // "display"
QT_MOC_LITERAL(92, 1895, 11), // "forAllUsers"
QT_MOC_LITERAL(93, 1907, 15), // "removeLandscape"
QT_MOC_LITERAL(94, 1923, 11), // "landscapeID"
QT_MOC_LITERAL(95, 1935, 17), // "loadLandscapeName"
QT_MOC_LITERAL(96, 1953, 17), // "loadLandscapeSize"
QT_MOC_LITERAL(97, 1971, 29), // "getFlagLandscapeAutoSelection"
QT_MOC_LITERAL(98, 2001, 29), // "setFlagLandscapeAutoSelection"
QT_MOC_LITERAL(99, 2031, 16), // "enableAutoSelect"
QT_MOC_LITERAL(100, 2048, 27), // "getFlagAtmosphereAutoEnable"
QT_MOC_LITERAL(101, 2076, 27), // "setFlagAtmosphereAutoEnable"
QT_MOC_LITERAL(102, 2104, 19), // "getLandscapeOpacity"
QT_MOC_LITERAL(103, 2124, 5), // "Vec3d"
QT_MOC_LITERAL(104, 2130, 5), // "azalt"
QT_MOC_LITERAL(105, 2136, 7), // "azimuth"
QT_MOC_LITERAL(106, 2144, 8), // "altitude"
QT_MOC_LITERAL(107, 2153, 33), // "setAtmosphereBortleLightPollu..."
QT_MOC_LITERAL(108, 2187, 6), // "bIndex"
QT_MOC_LITERAL(109, 2194, 28), // "updateLocationBasedPollution"
QT_MOC_LITERAL(110, 2223, 12), // "StelLocation"
QT_MOC_LITERAL(111, 2236, 3), // "loc"
QT_MOC_LITERAL(112, 2240, 10), // "updateI18n"
QT_MOC_LITERAL(113, 2251, 19), // "atmosphereDisplayed"
QT_MOC_LITERAL(114, 2271, 24), // "cardinalsPointsDisplayed"
QT_MOC_LITERAL(115, 2296, 20), // "cardinalsPointsColor"
QT_MOC_LITERAL(116, 2317, 12), // "fogDisplayed"
QT_MOC_LITERAL(117, 2330, 18), // "landscapeDisplayed"
QT_MOC_LITERAL(118, 2349, 21), // "illuminationDisplayed"
QT_MOC_LITERAL(119, 2371, 15), // "labelsDisplayed"
QT_MOC_LITERAL(120, 2387, 13), // "databaseUsage"
QT_MOC_LITERAL(121, 2401, 26), // "flagLandscapeAutoSelection"
QT_MOC_LITERAL(122, 2428, 25), // "flagLandscapeSetsLocation"
QT_MOC_LITERAL(123, 2454, 33), // "flagLandscapeUseMinimalBright..."
QT_MOC_LITERAL(124, 2488, 34), // "flagLandscapeSetsMinimalBrigh..."
QT_MOC_LITERAL(125, 2523, 24), // "defaultMinimalBrightness"
QT_MOC_LITERAL(126, 2548, 26) // "flagAtmosphereAutoEnabling"

    },
    "LandscapeMgr\0atmosphereDisplayedChanged\0"
    "\0displayed\0cardinalsPointsDisplayedChanged\0"
    "cardinalsPointsColorChanged\0Vec3f\0"
    "newColor\0fogDisplayedChanged\0"
    "landscapeDisplayedChanged\0"
    "illuminationDisplayedChanged\0"
    "labelsDisplayedChanged\0"
    "lightPollutionUsageChanged\0usage\0"
    "flagLandscapeAutoSelectionChanged\0"
    "value\0flagLandscapeSetsLocationChanged\0"
    "flagLandscapeUseMinimalBrightnessChanged\0"
    "flagLandscapeSetsMinimalBrightnessChanged\0"
    "defaultMinimalBrightnessChanged\0"
    "setFlagAtmosphereAutoEnableChanged\0"
    "enabled\0defaultLandscapeChanged\0id\0"
    "landscapesChanged\0errorUnableToOpen\0"
    "path\0errorNotArchive\0errorNotUnique\0"
    "nameOrID\0errorRemoveManually\0"
    "currentLandscapeChanged\0currentLandscapeID\0"
    "currentLandscapeName\0getLuminance\0"
    "getAtmosphereAverageLuminance\0"
    "setAtmosphereAverageLuminance\0"
    "overrideLuminance\0getNameToDirMap\0"
    "QMap<QString,QString>\0getAllLandscapeNames\0"
    "getAllLandscapeIDs\0getUserLandscapeIDs\0"
    "getCurrentLandscapeID\0setCurrentLandscapeID\0"
    "changeLocationDuration\0getCurrentLandscapeName\0"
    "setCurrentLandscapeName\0name\0"
    "getCurrentLandscape\0Landscape*\0"
    "getDefaultLandscapeID\0setDefaultLandscapeID\0"
    "getCurrentLandscapeHtmlDescription\0"
    "getDescription\0getFlagLandscape\0"
    "setFlagLandscape\0getIsLandscapeFullyVisible\0"
    "getLandscapeSinMinAltitudeLimit\0"
    "getFlagFog\0setFlagFog\0getFlagIllumination\0"
    "setFlagIllumination\0on\0getFlagLabels\0"
    "setFlagLabels\0getFlagLandscapeSetsLocation\0"
    "setFlagLandscapeSetsLocation\0b\0"
    "getFlagLandscapeUseMinimalBrightness\0"
    "setFlagLandscapeUseMinimalBrightness\0"
    "getFlagLandscapeSetsMinimalBrightness\0"
    "setFlagLandscapeSetsMinimalBrightness\0"
    "getDefaultMinimalBrightness\0"
    "setDefaultMinimalBrightness\0"
    "setFlagUseLightPollutionFromDatabase\0"
    "getFlagUseLightPollutionFromDatabase\0"
    "getFlagCardinalsPoints\0setFlagCardinalsPoints\0"
    "getColorCardinalPoints\0setColorCardinalPoints\0"
    "v\0getFlagAtmosphere\0setFlagAtmosphere\0"
    "getAtmosphereFadeDuration\0"
    "setAtmosphereFadeDuration\0f\0setZRotation\0"
    "d\0installLandscapeFromArchive\0"
    "pathToSourceArchive\0display\0forAllUsers\0"
    "removeLandscape\0landscapeID\0"
    "loadLandscapeName\0loadLandscapeSize\0"
    "getFlagLandscapeAutoSelection\0"
    "setFlagLandscapeAutoSelection\0"
    "enableAutoSelect\0getFlagAtmosphereAutoEnable\0"
    "setFlagAtmosphereAutoEnable\0"
    "getLandscapeOpacity\0Vec3d\0azalt\0azimuth\0"
    "altitude\0setAtmosphereBortleLightPollution\0"
    "bIndex\0updateLocationBasedPollution\0"
    "StelLocation\0loc\0updateI18n\0"
    "atmosphereDisplayed\0cardinalsPointsDisplayed\0"
    "cardinalsPointsColor\0fogDisplayed\0"
    "landscapeDisplayed\0illuminationDisplayed\0"
    "labelsDisplayed\0databaseUsage\0"
    "flagLandscapeAutoSelection\0"
    "flagLandscapeSetsLocation\0"
    "flagLandscapeUseMinimalBrightness\0"
    "flagLandscapeSetsMinimalBrightness\0"
    "defaultMinimalBrightness\0"
    "flagAtmosphereAutoEnabling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LandscapeMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      84,   14, // methods
      15,  636, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  434,    2, 0x06 /* Public */,
       4,    1,  437,    2, 0x06 /* Public */,
       5,    1,  440,    2, 0x06 /* Public */,
       8,    1,  443,    2, 0x06 /* Public */,
       9,    1,  446,    2, 0x06 /* Public */,
      10,    1,  449,    2, 0x06 /* Public */,
      11,    1,  452,    2, 0x06 /* Public */,
      12,    1,  455,    2, 0x06 /* Public */,
      14,    1,  458,    2, 0x06 /* Public */,
      16,    1,  461,    2, 0x06 /* Public */,
      17,    1,  464,    2, 0x06 /* Public */,
      18,    1,  467,    2, 0x06 /* Public */,
      19,    1,  470,    2, 0x06 /* Public */,
      20,    1,  473,    2, 0x06 /* Public */,
      22,    1,  476,    2, 0x06 /* Public */,
      24,    0,  479,    2, 0x06 /* Public */,
      25,    1,  480,    2, 0x06 /* Public */,
      27,    0,  483,    2, 0x06 /* Public */,
      28,    1,  484,    2, 0x06 /* Public */,
      30,    1,  487,    2, 0x06 /* Public */,
      31,    2,  490,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      34,    0,  495,    2, 0x0a /* Public */,
      35,    0,  496,    2, 0x0a /* Public */,
      36,    1,  497,    2, 0x0a /* Public */,
      38,    0,  500,    2, 0x0a /* Public */,
      40,    0,  501,    2, 0x0a /* Public */,
      41,    0,  502,    2, 0x0a /* Public */,
      42,    0,  503,    2, 0x0a /* Public */,
      43,    0,  504,    2, 0x0a /* Public */,
      44,    2,  505,    2, 0x0a /* Public */,
      44,    1,  510,    2, 0x2a /* Public | MethodCloned */,
      46,    0,  513,    2, 0x0a /* Public */,
      47,    2,  514,    2, 0x0a /* Public */,
      47,    1,  519,    2, 0x2a /* Public | MethodCloned */,
      49,    0,  522,    2, 0x0a /* Public */,
      51,    0,  523,    2, 0x0a /* Public */,
      52,    1,  524,    2, 0x0a /* Public */,
      53,    0,  527,    2, 0x0a /* Public */,
      54,    0,  528,    2, 0x0a /* Public */,
      55,    0,  529,    2, 0x0a /* Public */,
      56,    1,  530,    2, 0x0a /* Public */,
      57,    0,  533,    2, 0x0a /* Public */,
      58,    0,  534,    2, 0x0a /* Public */,
      59,    0,  535,    2, 0x0a /* Public */,
      60,    1,  536,    2, 0x0a /* Public */,
      61,    0,  539,    2, 0x0a /* Public */,
      62,    1,  540,    2, 0x0a /* Public */,
      64,    0,  543,    2, 0x0a /* Public */,
      65,    1,  544,    2, 0x0a /* Public */,
      66,    0,  547,    2, 0x0a /* Public */,
      67,    1,  548,    2, 0x0a /* Public */,
      69,    0,  551,    2, 0x0a /* Public */,
      70,    1,  552,    2, 0x0a /* Public */,
      71,    0,  555,    2, 0x0a /* Public */,
      72,    1,  556,    2, 0x0a /* Public */,
      73,    0,  559,    2, 0x0a /* Public */,
      74,    1,  560,    2, 0x0a /* Public */,
      75,    1,  563,    2, 0x0a /* Public */,
      76,    0,  566,    2, 0x0a /* Public */,
      77,    0,  567,    2, 0x0a /* Public */,
      78,    1,  568,    2, 0x0a /* Public */,
      79,    0,  571,    2, 0x0a /* Public */,
      80,    1,  572,    2, 0x0a /* Public */,
      82,    0,  575,    2, 0x0a /* Public */,
      83,    1,  576,    2, 0x0a /* Public */,
      84,    0,  579,    2, 0x0a /* Public */,
      85,    1,  580,    2, 0x0a /* Public */,
      87,    1,  583,    2, 0x0a /* Public */,
      89,    3,  586,    2, 0x0a /* Public */,
      89,    2,  593,    2, 0x2a /* Public | MethodCloned */,
      89,    1,  598,    2, 0x2a /* Public | MethodCloned */,
      93,    1,  601,    2, 0x0a /* Public */,
      95,    1,  604,    2, 0x0a /* Public */,
      96,    1,  607,    2, 0x0a /* Public */,
      97,    0,  610,    2, 0x0a /* Public */,
      98,    1,  611,    2, 0x0a /* Public */,
     100,    0,  614,    2, 0x0a /* Public */,
     101,    1,  615,    2, 0x0a /* Public */,
     102,    1,  618,    2, 0x0a /* Public */,
     102,    1,  621,    2, 0x0a /* Public */,
     102,    2,  624,    2, 0x0a /* Public */,
     107,    1,  629,    2, 0x08 /* Private */,
     109,    1,  632,    2, 0x08 /* Private */,
     112,    0,  635,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   32,   33,

 // slots: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   37,
    0x80000000 | 39,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString, QMetaType::Double,   23,   45,
    QMetaType::Bool, QMetaType::QString,   23,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString, QMetaType::Double,   48,   45,
    QMetaType::Bool, QMetaType::QString,   48,
    0x80000000 | 50,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,   23,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Float,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   68,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    0x80000000 | 6,
    QMetaType::Void, 0x80000000 | 6,   81,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   86,
    QMetaType::Void, QMetaType::Float,   88,
    QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   90,   91,   92,
    QMetaType::QString, QMetaType::QString, QMetaType::Bool,   90,   91,
    QMetaType::QString, QMetaType::QString,   90,
    QMetaType::Bool, QMetaType::QString,   94,
    QMetaType::QString, QMetaType::QString,   94,
    QMetaType::ULongLong, QMetaType::QString,   94,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   99,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Float, 0x80000000 | 103,  104,
    QMetaType::Float, 0x80000000 | 6,  104,
    QMetaType::Float, QMetaType::Float, QMetaType::Float,  105,  106,
    QMetaType::Void, QMetaType::Int,  108,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Void,

 // properties: name, type, flags
     113, QMetaType::Bool, 0x00495003,
     114, QMetaType::Bool, 0x00495003,
     115, 0x80000000 | 6, 0x0049500b,
     116, QMetaType::Bool, 0x00495003,
     117, QMetaType::Bool, 0x00495003,
     118, QMetaType::Bool, 0x00495003,
     119, QMetaType::Bool, 0x00495003,
     120, QMetaType::Bool, 0x00495003,
     121, QMetaType::Bool, 0x00495103,
     122, QMetaType::Bool, 0x00495103,
     123, QMetaType::Bool, 0x00495103,
     124, QMetaType::Bool, 0x00495103,
     125, QMetaType::Double, 0x00495103,
     126, QMetaType::Bool, 0x00495003,
      32, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      20,

       0        // eod
};

void LandscapeMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LandscapeMgr *_t = static_cast<LandscapeMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->atmosphereDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->cardinalsPointsDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->cardinalsPointsColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 3: _t->fogDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->landscapeDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->illuminationDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 6: _t->labelsDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->lightPollutionUsageChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 8: _t->flagLandscapeAutoSelectionChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 9: _t->flagLandscapeSetsLocationChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 10: _t->flagLandscapeUseMinimalBrightnessChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 11: _t->flagLandscapeSetsMinimalBrightnessChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 12: _t->defaultMinimalBrightnessChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 13: _t->setFlagAtmosphereAutoEnableChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 14: _t->defaultLandscapeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->landscapesChanged(); break;
        case 16: _t->errorUnableToOpen((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->errorNotArchive(); break;
        case 18: _t->errorNotUnique((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->errorRemoveManually((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->currentLandscapeChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 21: { float _r = _t->getLuminance();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 22: { float _r = _t->getAtmosphereAverageLuminance();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 23: _t->setAtmosphereAverageLuminance((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 24: { QMap<QString,QString> _r = _t->getNameToDirMap();
            if (_a[0]) *reinterpret_cast< QMap<QString,QString>*>(_a[0]) = _r; }  break;
        case 25: { QStringList _r = _t->getAllLandscapeNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 26: { QStringList _r = _t->getAllLandscapeIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 27: { QStringList _r = _t->getUserLandscapeIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 28: { QString _r = _t->getCurrentLandscapeID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->setCurrentLandscapeID((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->setCurrentLandscapeID((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { QString _r = _t->getCurrentLandscapeName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->setCurrentLandscapeName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->setCurrentLandscapeName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { Landscape* _r = _t->getCurrentLandscape();
            if (_a[0]) *reinterpret_cast< Landscape**>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->getDefaultLandscapeID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->setDefaultLandscapeID((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { QString _r = _t->getCurrentLandscapeHtmlDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 38: { QString _r = _t->getDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->getFlagLandscape();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: _t->setFlagLandscape((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 41: { bool _r = _t->getIsLandscapeFullyVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { float _r = _t->getLandscapeSinMinAltitudeLimit();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->getFlagFog();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: _t->setFlagFog((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 45: { bool _r = _t->getFlagIllumination();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: _t->setFlagIllumination((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 47: { bool _r = _t->getFlagLabels();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: _t->setFlagLabels((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 49: { bool _r = _t->getFlagLandscapeSetsLocation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: _t->setFlagLandscapeSetsLocation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: { bool _r = _t->getFlagLandscapeUseMinimalBrightness();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 52: _t->setFlagLandscapeUseMinimalBrightness((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: { bool _r = _t->getFlagLandscapeSetsMinimalBrightness();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 54: _t->setFlagLandscapeSetsMinimalBrightness((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: { double _r = _t->getDefaultMinimalBrightness();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 56: _t->setDefaultMinimalBrightness((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 57: _t->setFlagUseLightPollutionFromDatabase((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 58: { bool _r = _t->getFlagUseLightPollutionFromDatabase();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 59: { bool _r = _t->getFlagCardinalsPoints();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 60: _t->setFlagCardinalsPoints((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 61: { Vec3f _r = _t->getColorCardinalPoints();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 62: _t->setColorCardinalPoints((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 63: { bool _r = _t->getFlagAtmosphere();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 64: _t->setFlagAtmosphere((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 65: { float _r = _t->getAtmosphereFadeDuration();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 66: _t->setAtmosphereFadeDuration((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 67: _t->setZRotation((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 68: { QString _r = _t->installLandscapeFromArchive((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 69: { QString _r = _t->installLandscapeFromArchive((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 70: { QString _r = _t->installLandscapeFromArchive((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 71: { bool _r = _t->removeLandscape((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 72: { QString _r = _t->loadLandscapeName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 73: { quint64 _r = _t->loadLandscapeSize((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 74: { bool _r = _t->getFlagLandscapeAutoSelection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 75: _t->setFlagLandscapeAutoSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 76: { bool _r = _t->getFlagAtmosphereAutoEnable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 77: _t->setFlagAtmosphereAutoEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 78: { float _r = _t->getLandscapeOpacity((*reinterpret_cast< Vec3d(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 79: { float _r = _t->getLandscapeOpacity((*reinterpret_cast< Vec3f(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 80: { float _r = _t->getLandscapeOpacity((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 81: _t->setAtmosphereBortleLightPollution((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 82: _t->updateLocationBasedPollution((*reinterpret_cast< StelLocation(*)>(_a[1]))); break;
        case 83: _t->updateI18n(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3d >(); break;
            }
            break;
        case 79:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StelLocation >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LandscapeMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::atmosphereDisplayedChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::cardinalsPointsDisplayedChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::cardinalsPointsColorChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::fogDisplayedChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::landscapeDisplayedChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::illuminationDisplayedChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::labelsDisplayedChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::lightPollutionUsageChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::flagLandscapeAutoSelectionChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::flagLandscapeSetsLocationChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::flagLandscapeUseMinimalBrightnessChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::flagLandscapeSetsMinimalBrightnessChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::defaultMinimalBrightnessChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::setFlagAtmosphereAutoEnableChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::defaultLandscapeChanged)) {
                *result = 14;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::landscapesChanged)) {
                *result = 15;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::errorUnableToOpen)) {
                *result = 16;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::errorNotArchive)) {
                *result = 17;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::errorNotUnique)) {
                *result = 18;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::errorRemoveManually)) {
                *result = 19;
            }
        }
        {
            typedef void (LandscapeMgr::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LandscapeMgr::currentLandscapeChanged)) {
                *result = 20;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LandscapeMgr *_t = static_cast<LandscapeMgr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getFlagAtmosphere(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getFlagCardinalsPoints(); break;
        case 2: *reinterpret_cast< Vec3f*>(_v) = _t->getColorCardinalPoints(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getFlagFog(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getFlagLandscape(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getFlagIllumination(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getFlagLabels(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getFlagUseLightPollutionFromDatabase(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getFlagLandscapeAutoSelection(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getFlagLandscapeSetsLocation(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getFlagLandscapeUseMinimalBrightness(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getFlagLandscapeSetsMinimalBrightness(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->getDefaultMinimalBrightness(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getFlagAtmosphereAutoEnable(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->getCurrentLandscapeID(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        LandscapeMgr *_t = static_cast<LandscapeMgr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlagAtmosphere(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setFlagCardinalsPoints(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setColorCardinalPoints(*reinterpret_cast< Vec3f*>(_v)); break;
        case 3: _t->setFlagFog(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setFlagLandscape(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setFlagIllumination(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setFlagLabels(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setFlagUseLightPollutionFromDatabase(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setFlagLandscapeAutoSelection(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setFlagLandscapeSetsLocation(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setFlagLandscapeUseMinimalBrightness(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setFlagLandscapeSetsMinimalBrightness(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setDefaultMinimalBrightness(*reinterpret_cast< double*>(_v)); break;
        case 13: _t->setFlagAtmosphereAutoEnable(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setCurrentLandscapeID(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject LandscapeMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_LandscapeMgr.data,
      qt_meta_data_LandscapeMgr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LandscapeMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LandscapeMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LandscapeMgr.stringdata0))
        return static_cast<void*>(const_cast< LandscapeMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int LandscapeMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 84)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 84;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 84)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 84;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LandscapeMgr::atmosphereDisplayedChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LandscapeMgr::cardinalsPointsDisplayedChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LandscapeMgr::cardinalsPointsColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< LandscapeMgr *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LandscapeMgr::fogDisplayedChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LandscapeMgr::landscapeDisplayedChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LandscapeMgr::illuminationDisplayedChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LandscapeMgr::labelsDisplayedChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LandscapeMgr::lightPollutionUsageChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void LandscapeMgr::flagLandscapeAutoSelectionChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void LandscapeMgr::flagLandscapeSetsLocationChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void LandscapeMgr::flagLandscapeUseMinimalBrightnessChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void LandscapeMgr::flagLandscapeSetsMinimalBrightnessChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void LandscapeMgr::defaultMinimalBrightnessChanged(const double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void LandscapeMgr::setFlagAtmosphereAutoEnableChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void LandscapeMgr::defaultLandscapeChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void LandscapeMgr::landscapesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void LandscapeMgr::errorUnableToOpen(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void LandscapeMgr::errorNotArchive()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void LandscapeMgr::errorNotUnique(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void LandscapeMgr::errorRemoveManually(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void LandscapeMgr::currentLandscapeChanged(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
QT_END_MOC_NAMESPACE
