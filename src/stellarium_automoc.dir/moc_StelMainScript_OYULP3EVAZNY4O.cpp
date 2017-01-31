/****************************************************************************
** Meta object code from reading C++ file 'StelMainScriptAPI.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/scripting/StelMainScriptAPI.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelMainScriptAPI.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelMainScriptAPI_t {
    QByteArrayData data[219];
    char stringdata0[2556];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelMainScriptAPI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelMainScriptAPI_t qt_meta_stringdata_StelMainScriptAPI = {
    {
QT_MOC_LITERAL(0, 0, 17), // "StelMainScriptAPI"
QT_MOC_LITERAL(1, 18, 19), // "requestLoadSkyImage"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 2), // "id"
QT_MOC_LITERAL(4, 42, 8), // "filename"
QT_MOC_LITERAL(5, 51, 2), // "c1"
QT_MOC_LITERAL(6, 54, 2), // "c2"
QT_MOC_LITERAL(7, 57, 2), // "c3"
QT_MOC_LITERAL(8, 60, 2), // "c4"
QT_MOC_LITERAL(9, 63, 2), // "c5"
QT_MOC_LITERAL(10, 66, 2), // "c6"
QT_MOC_LITERAL(11, 69, 2), // "c7"
QT_MOC_LITERAL(12, 72, 2), // "c8"
QT_MOC_LITERAL(13, 75, 6), // "minRes"
QT_MOC_LITERAL(14, 82, 9), // "maxBright"
QT_MOC_LITERAL(15, 92, 7), // "visible"
QT_MOC_LITERAL(16, 100, 24), // "requestLoadSkyImageAltAz"
QT_MOC_LITERAL(17, 125, 21), // "requestRemoveSkyImage"
QT_MOC_LITERAL(18, 147, 16), // "requestLoadSound"
QT_MOC_LITERAL(19, 164, 16), // "requestPlaySound"
QT_MOC_LITERAL(20, 181, 17), // "requestPauseSound"
QT_MOC_LITERAL(21, 199, 16), // "requestStopSound"
QT_MOC_LITERAL(22, 216, 16), // "requestDropSound"
QT_MOC_LITERAL(23, 233, 16), // "requestLoadVideo"
QT_MOC_LITERAL(24, 250, 1), // "x"
QT_MOC_LITERAL(25, 252, 1), // "y"
QT_MOC_LITERAL(26, 254, 4), // "show"
QT_MOC_LITERAL(27, 259, 5), // "alpha"
QT_MOC_LITERAL(28, 265, 16), // "requestPlayVideo"
QT_MOC_LITERAL(29, 282, 16), // "keepVisibleAtEnd"
QT_MOC_LITERAL(30, 299, 22), // "requestPlayVideoPopout"
QT_MOC_LITERAL(31, 322, 5), // "fromX"
QT_MOC_LITERAL(32, 328, 5), // "fromY"
QT_MOC_LITERAL(33, 334, 9), // "atCenterX"
QT_MOC_LITERAL(34, 344, 9), // "atCenterY"
QT_MOC_LITERAL(35, 354, 10), // "finalSizeX"
QT_MOC_LITERAL(36, 365, 10), // "finalSizeY"
QT_MOC_LITERAL(37, 376, 13), // "popupDuration"
QT_MOC_LITERAL(38, 390, 18), // "frozenInTransition"
QT_MOC_LITERAL(39, 409, 17), // "requestPauseVideo"
QT_MOC_LITERAL(40, 427, 16), // "requestStopVideo"
QT_MOC_LITERAL(41, 444, 16), // "requestDropVideo"
QT_MOC_LITERAL(42, 461, 16), // "requestSeekVideo"
QT_MOC_LITERAL(43, 478, 2), // "ms"
QT_MOC_LITERAL(44, 481, 5), // "pause"
QT_MOC_LITERAL(45, 487, 17), // "requestSetVideoXY"
QT_MOC_LITERAL(46, 505, 8), // "relative"
QT_MOC_LITERAL(47, 514, 20), // "requestSetVideoAlpha"
QT_MOC_LITERAL(48, 535, 18), // "requestResizeVideo"
QT_MOC_LITERAL(49, 554, 1), // "w"
QT_MOC_LITERAL(50, 556, 1), // "h"
QT_MOC_LITERAL(51, 558, 16), // "requestShowVideo"
QT_MOC_LITERAL(52, 575, 19), // "requestSetNightMode"
QT_MOC_LITERAL(53, 595, 1), // "b"
QT_MOC_LITERAL(54, 597, 24), // "requestSetProjectionMode"
QT_MOC_LITERAL(55, 622, 20), // "requestSetSkyCulture"
QT_MOC_LITERAL(56, 643, 22), // "requestSetDiskViewport"
QT_MOC_LITERAL(57, 666, 11), // "requestExit"
QT_MOC_LITERAL(58, 678, 22), // "requestSetHomePosition"
QT_MOC_LITERAL(59, 701, 7), // "setJDay"
QT_MOC_LITERAL(60, 709, 2), // "JD"
QT_MOC_LITERAL(61, 712, 7), // "getJDay"
QT_MOC_LITERAL(62, 720, 8), // "setMJDay"
QT_MOC_LITERAL(63, 729, 3), // "MJD"
QT_MOC_LITERAL(64, 733, 8), // "getMJDay"
QT_MOC_LITERAL(65, 742, 7), // "setDate"
QT_MOC_LITERAL(66, 750, 7), // "dateStr"
QT_MOC_LITERAL(67, 758, 4), // "spec"
QT_MOC_LITERAL(68, 763, 8), // "dateIsDT"
QT_MOC_LITERAL(69, 772, 7), // "getDate"
QT_MOC_LITERAL(70, 780, 9), // "getDeltaT"
QT_MOC_LITERAL(71, 790, 18), // "getDeltaTAlgorithm"
QT_MOC_LITERAL(72, 809, 18), // "setDeltaTAlgorithm"
QT_MOC_LITERAL(73, 828, 13), // "algorithmName"
QT_MOC_LITERAL(74, 842, 11), // "setTimeRate"
QT_MOC_LITERAL(75, 854, 2), // "ts"
QT_MOC_LITERAL(76, 857, 11), // "getTimeRate"
QT_MOC_LITERAL(77, 869, 10), // "isRealTime"
QT_MOC_LITERAL(78, 880, 11), // "setRealTime"
QT_MOC_LITERAL(79, 892, 18), // "selectObjectByName"
QT_MOC_LITERAL(80, 911, 4), // "name"
QT_MOC_LITERAL(81, 916, 7), // "pointer"
QT_MOC_LITERAL(82, 924, 17), // "getObjectPosition"
QT_MOC_LITERAL(83, 942, 13), // "getObjectInfo"
QT_MOC_LITERAL(84, 956, 21), // "getSelectedObjectInfo"
QT_MOC_LITERAL(85, 978, 5), // "clear"
QT_MOC_LITERAL(86, 984, 5), // "state"
QT_MOC_LITERAL(87, 990, 20), // "getViewAltitudeAngle"
QT_MOC_LITERAL(88, 1011, 19), // "getViewAzimuthAngle"
QT_MOC_LITERAL(89, 1031, 14), // "getViewRaAngle"
QT_MOC_LITERAL(90, 1046, 15), // "getViewDecAngle"
QT_MOC_LITERAL(91, 1062, 19), // "getViewRaJ2000Angle"
QT_MOC_LITERAL(92, 1082, 20), // "getViewDecJ2000Angle"
QT_MOC_LITERAL(93, 1103, 12), // "moveToAltAzi"
QT_MOC_LITERAL(94, 1116, 3), // "alt"
QT_MOC_LITERAL(95, 1120, 3), // "azi"
QT_MOC_LITERAL(96, 1124, 8), // "duration"
QT_MOC_LITERAL(97, 1133, 11), // "moveToRaDec"
QT_MOC_LITERAL(98, 1145, 2), // "ra"
QT_MOC_LITERAL(99, 1148, 3), // "dec"
QT_MOC_LITERAL(100, 1152, 16), // "moveToRaDecJ2000"
QT_MOC_LITERAL(101, 1169, 19), // "setObserverLocation"
QT_MOC_LITERAL(102, 1189, 9), // "longitude"
QT_MOC_LITERAL(103, 1199, 8), // "latitude"
QT_MOC_LITERAL(104, 1208, 8), // "altitude"
QT_MOC_LITERAL(105, 1217, 6), // "planet"
QT_MOC_LITERAL(106, 1224, 19), // "getObserverLocation"
QT_MOC_LITERAL(107, 1244, 23), // "getObserverLocationInfo"
QT_MOC_LITERAL(108, 1268, 10), // "screenshot"
QT_MOC_LITERAL(109, 1279, 6), // "prefix"
QT_MOC_LITERAL(110, 1286, 6), // "invert"
QT_MOC_LITERAL(111, 1293, 3), // "dir"
QT_MOC_LITERAL(112, 1297, 9), // "overwrite"
QT_MOC_LITERAL(113, 1307, 13), // "setGuiVisible"
QT_MOC_LITERAL(114, 1321, 9), // "setMinFps"
QT_MOC_LITERAL(115, 1331, 1), // "m"
QT_MOC_LITERAL(116, 1333, 9), // "getMinFps"
QT_MOC_LITERAL(117, 1343, 9), // "setMaxFps"
QT_MOC_LITERAL(118, 1353, 9), // "getMaxFps"
QT_MOC_LITERAL(119, 1363, 12), // "getMountMode"
QT_MOC_LITERAL(120, 1376, 12), // "setMountMode"
QT_MOC_LITERAL(121, 1389, 4), // "mode"
QT_MOC_LITERAL(122, 1394, 12), // "getNightMode"
QT_MOC_LITERAL(123, 1407, 12), // "setNightMode"
QT_MOC_LITERAL(124, 1420, 17), // "getProjectionMode"
QT_MOC_LITERAL(125, 1438, 17), // "setProjectionMode"
QT_MOC_LITERAL(126, 1456, 15), // "getDiskViewport"
QT_MOC_LITERAL(127, 1472, 15), // "setDiskViewport"
QT_MOC_LITERAL(128, 1488, 16), // "setSphericMirror"
QT_MOC_LITERAL(129, 1505, 17), // "setViewportOffset"
QT_MOC_LITERAL(130, 1523, 18), // "setViewportStretch"
QT_MOC_LITERAL(131, 1542, 7), // "stretch"
QT_MOC_LITERAL(132, 1550, 19), // "getAllSkyCultureIDs"
QT_MOC_LITERAL(133, 1570, 13), // "getSkyCulture"
QT_MOC_LITERAL(134, 1584, 13), // "setSkyCulture"
QT_MOC_LITERAL(135, 1598, 17), // "getSkyCultureName"
QT_MOC_LITERAL(136, 1616, 21), // "getSkyCultureNameI18n"
QT_MOC_LITERAL(137, 1638, 20), // "getFlagGravityLabels"
QT_MOC_LITERAL(138, 1659, 20), // "setFlagGravityLabels"
QT_MOC_LITERAL(139, 1680, 12), // "loadSkyImage"
QT_MOC_LITERAL(140, 1693, 3), // "ra0"
QT_MOC_LITERAL(141, 1697, 4), // "dec0"
QT_MOC_LITERAL(142, 1702, 3), // "ra1"
QT_MOC_LITERAL(143, 1706, 4), // "dec1"
QT_MOC_LITERAL(144, 1711, 3), // "ra2"
QT_MOC_LITERAL(145, 1715, 4), // "dec2"
QT_MOC_LITERAL(146, 1720, 3), // "ra3"
QT_MOC_LITERAL(147, 1724, 4), // "dec3"
QT_MOC_LITERAL(148, 1729, 7), // "angSize"
QT_MOC_LITERAL(149, 1737, 8), // "rotation"
QT_MOC_LITERAL(150, 1746, 17), // "loadSkyImageAltAz"
QT_MOC_LITERAL(151, 1764, 4), // "azi0"
QT_MOC_LITERAL(152, 1769, 4), // "alt0"
QT_MOC_LITERAL(153, 1774, 4), // "azi1"
QT_MOC_LITERAL(154, 1779, 4), // "alt1"
QT_MOC_LITERAL(155, 1784, 4), // "azi2"
QT_MOC_LITERAL(156, 1789, 4), // "alt2"
QT_MOC_LITERAL(157, 1794, 4), // "azi3"
QT_MOC_LITERAL(158, 1799, 4), // "alt3"
QT_MOC_LITERAL(159, 1804, 14), // "removeSkyImage"
QT_MOC_LITERAL(160, 1819, 21), // "getScreenXYFromAltAzi"
QT_MOC_LITERAL(161, 1841, 9), // "loadSound"
QT_MOC_LITERAL(162, 1851, 9), // "playSound"
QT_MOC_LITERAL(163, 1861, 10), // "pauseSound"
QT_MOC_LITERAL(164, 1872, 9), // "stopSound"
QT_MOC_LITERAL(165, 1882, 9), // "dropSound"
QT_MOC_LITERAL(166, 1892, 16), // "getSoundPosition"
QT_MOC_LITERAL(167, 1909, 16), // "getSoundDuration"
QT_MOC_LITERAL(168, 1926, 9), // "loadVideo"
QT_MOC_LITERAL(169, 1936, 9), // "playVideo"
QT_MOC_LITERAL(170, 1946, 15), // "playVideoPopout"
QT_MOC_LITERAL(171, 1962, 10), // "pauseVideo"
QT_MOC_LITERAL(172, 1973, 9), // "stopVideo"
QT_MOC_LITERAL(173, 1983, 9), // "dropVideo"
QT_MOC_LITERAL(174, 1993, 9), // "seekVideo"
QT_MOC_LITERAL(175, 2003, 10), // "setVideoXY"
QT_MOC_LITERAL(176, 2014, 13), // "setVideoAlpha"
QT_MOC_LITERAL(177, 2028, 11), // "resizeVideo"
QT_MOC_LITERAL(178, 2040, 9), // "showVideo"
QT_MOC_LITERAL(179, 2050, 16), // "getVideoDuration"
QT_MOC_LITERAL(180, 2067, 16), // "getVideoPosition"
QT_MOC_LITERAL(181, 2084, 14), // "getScreenWidth"
QT_MOC_LITERAL(182, 2099, 15), // "getScreenHeight"
QT_MOC_LITERAL(183, 2115, 13), // "getScriptRate"
QT_MOC_LITERAL(184, 2129, 13), // "setScriptRate"
QT_MOC_LITERAL(185, 2143, 1), // "r"
QT_MOC_LITERAL(186, 2145, 11), // "pauseScript"
QT_MOC_LITERAL(187, 2157, 21), // "setSelectedObjectInfo"
QT_MOC_LITERAL(188, 2179, 5), // "level"
QT_MOC_LITERAL(189, 2185, 4), // "exit"
QT_MOC_LITERAL(190, 2190, 14), // "quitStellarium"
QT_MOC_LITERAL(191, 2205, 5), // "debug"
QT_MOC_LITERAL(192, 2211, 1), // "s"
QT_MOC_LITERAL(193, 2213, 6), // "output"
QT_MOC_LITERAL(194, 2220, 11), // "resetOutput"
QT_MOC_LITERAL(195, 2232, 12), // "saveOutputAs"
QT_MOC_LITERAL(196, 2245, 14), // "getAppLanguage"
QT_MOC_LITERAL(197, 2260, 14), // "setAppLanguage"
QT_MOC_LITERAL(198, 2275, 8), // "langCode"
QT_MOC_LITERAL(199, 2284, 14), // "getSkyLanguage"
QT_MOC_LITERAL(200, 2299, 14), // "setSkyLanguage"
QT_MOC_LITERAL(201, 2314, 6), // "goHome"
QT_MOC_LITERAL(202, 2321, 18), // "setMilkyWayVisible"
QT_MOC_LITERAL(203, 2340, 20), // "setMilkyWayIntensity"
QT_MOC_LITERAL(204, 2361, 1), // "i"
QT_MOC_LITERAL(205, 2363, 20), // "getMilkyWayIntensity"
QT_MOC_LITERAL(206, 2384, 23), // "setZodiacalLightVisible"
QT_MOC_LITERAL(207, 2408, 25), // "setZodiacalLightIntensity"
QT_MOC_LITERAL(208, 2434, 25), // "getZodiacalLightIntensity"
QT_MOC_LITERAL(209, 2460, 19), // "getBortleScaleIndex"
QT_MOC_LITERAL(210, 2480, 19), // "setBortleScaleIndex"
QT_MOC_LITERAL(211, 2500, 5), // "index"
QT_MOC_LITERAL(212, 2506, 16), // "jdFromDateString"
QT_MOC_LITERAL(213, 2523, 2), // "dt"
QT_MOC_LITERAL(214, 2526, 4), // "wait"
QT_MOC_LITERAL(215, 2531, 1), // "t"
QT_MOC_LITERAL(216, 2533, 7), // "waitFor"
QT_MOC_LITERAL(217, 2541, 4), // "JDay"
QT_MOC_LITERAL(218, 2546, 9) // "timeSpeed"

    },
    "StelMainScriptAPI\0requestLoadSkyImage\0"
    "\0id\0filename\0c1\0c2\0c3\0c4\0c5\0c6\0c7\0c8\0"
    "minRes\0maxBright\0visible\0"
    "requestLoadSkyImageAltAz\0requestRemoveSkyImage\0"
    "requestLoadSound\0requestPlaySound\0"
    "requestPauseSound\0requestStopSound\0"
    "requestDropSound\0requestLoadVideo\0x\0"
    "y\0show\0alpha\0requestPlayVideo\0"
    "keepVisibleAtEnd\0requestPlayVideoPopout\0"
    "fromX\0fromY\0atCenterX\0atCenterY\0"
    "finalSizeX\0finalSizeY\0popupDuration\0"
    "frozenInTransition\0requestPauseVideo\0"
    "requestStopVideo\0requestDropVideo\0"
    "requestSeekVideo\0ms\0pause\0requestSetVideoXY\0"
    "relative\0requestSetVideoAlpha\0"
    "requestResizeVideo\0w\0h\0requestShowVideo\0"
    "requestSetNightMode\0b\0requestSetProjectionMode\0"
    "requestSetSkyCulture\0requestSetDiskViewport\0"
    "requestExit\0requestSetHomePosition\0"
    "setJDay\0JD\0getJDay\0setMJDay\0MJD\0"
    "getMJDay\0setDate\0dateStr\0spec\0dateIsDT\0"
    "getDate\0getDeltaT\0getDeltaTAlgorithm\0"
    "setDeltaTAlgorithm\0algorithmName\0"
    "setTimeRate\0ts\0getTimeRate\0isRealTime\0"
    "setRealTime\0selectObjectByName\0name\0"
    "pointer\0getObjectPosition\0getObjectInfo\0"
    "getSelectedObjectInfo\0clear\0state\0"
    "getViewAltitudeAngle\0getViewAzimuthAngle\0"
    "getViewRaAngle\0getViewDecAngle\0"
    "getViewRaJ2000Angle\0getViewDecJ2000Angle\0"
    "moveToAltAzi\0alt\0azi\0duration\0moveToRaDec\0"
    "ra\0dec\0moveToRaDecJ2000\0setObserverLocation\0"
    "longitude\0latitude\0altitude\0planet\0"
    "getObserverLocation\0getObserverLocationInfo\0"
    "screenshot\0prefix\0invert\0dir\0overwrite\0"
    "setGuiVisible\0setMinFps\0m\0getMinFps\0"
    "setMaxFps\0getMaxFps\0getMountMode\0"
    "setMountMode\0mode\0getNightMode\0"
    "setNightMode\0getProjectionMode\0"
    "setProjectionMode\0getDiskViewport\0"
    "setDiskViewport\0setSphericMirror\0"
    "setViewportOffset\0setViewportStretch\0"
    "stretch\0getAllSkyCultureIDs\0getSkyCulture\0"
    "setSkyCulture\0getSkyCultureName\0"
    "getSkyCultureNameI18n\0getFlagGravityLabels\0"
    "setFlagGravityLabels\0loadSkyImage\0ra0\0"
    "dec0\0ra1\0dec1\0ra2\0dec2\0ra3\0dec3\0angSize\0"
    "rotation\0loadSkyImageAltAz\0azi0\0alt0\0"
    "azi1\0alt1\0azi2\0alt2\0azi3\0alt3\0"
    "removeSkyImage\0getScreenXYFromAltAzi\0"
    "loadSound\0playSound\0pauseSound\0stopSound\0"
    "dropSound\0getSoundPosition\0getSoundDuration\0"
    "loadVideo\0playVideo\0playVideoPopout\0"
    "pauseVideo\0stopVideo\0dropVideo\0seekVideo\0"
    "setVideoXY\0setVideoAlpha\0resizeVideo\0"
    "showVideo\0getVideoDuration\0getVideoPosition\0"
    "getScreenWidth\0getScreenHeight\0"
    "getScriptRate\0setScriptRate\0r\0pauseScript\0"
    "setSelectedObjectInfo\0level\0exit\0"
    "quitStellarium\0debug\0s\0output\0resetOutput\0"
    "saveOutputAs\0getAppLanguage\0setAppLanguage\0"
    "langCode\0getSkyLanguage\0setSkyLanguage\0"
    "goHome\0setMilkyWayVisible\0"
    "setMilkyWayIntensity\0i\0getMilkyWayIntensity\0"
    "setZodiacalLightVisible\0"
    "setZodiacalLightIntensity\0"
    "getZodiacalLightIntensity\0getBortleScaleIndex\0"
    "setBortleScaleIndex\0index\0jdFromDateString\0"
    "dt\0wait\0t\0waitFor\0JDay\0timeSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelMainScriptAPI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     178,   14, // methods
       2, 2004, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      27,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,   13,  904,    2, 0x06 /* Public */,
      16,   13,  931,    2, 0x06 /* Public */,
      17,    1,  958,    2, 0x06 /* Public */,
      18,    2,  961,    2, 0x06 /* Public */,
      19,    1,  966,    2, 0x06 /* Public */,
      20,    1,  969,    2, 0x06 /* Public */,
      21,    1,  972,    2, 0x06 /* Public */,
      22,    1,  975,    2, 0x06 /* Public */,
      23,    6,  978,    2, 0x06 /* Public */,
      28,    2,  991,    2, 0x06 /* Public */,
      30,    9,  996,    2, 0x06 /* Public */,
      39,    1, 1015,    2, 0x06 /* Public */,
      40,    1, 1018,    2, 0x06 /* Public */,
      41,    1, 1021,    2, 0x06 /* Public */,
      42,    3, 1024,    2, 0x06 /* Public */,
      42,    2, 1031,    2, 0x26 /* Public | MethodCloned */,
      45,    4, 1036,    2, 0x06 /* Public */,
      45,    3, 1045,    2, 0x26 /* Public | MethodCloned */,
      47,    2, 1052,    2, 0x06 /* Public */,
      48,    3, 1057,    2, 0x06 /* Public */,
      51,    2, 1064,    2, 0x06 /* Public */,
      52,    1, 1069,    2, 0x06 /* Public */,
      54,    1, 1072,    2, 0x06 /* Public */,
      55,    1, 1075,    2, 0x06 /* Public */,
      56,    1, 1078,    2, 0x06 /* Public */,
      57,    0, 1081,    2, 0x06 /* Public */,
      58,    0, 1082,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      59,    1, 1083,    2, 0x0a /* Public */,
      61,    0, 1086,    2, 0x0a /* Public */,
      62,    1, 1087,    2, 0x0a /* Public */,
      64,    0, 1090,    2, 0x0a /* Public */,
      65,    3, 1091,    2, 0x0a /* Public */,
      65,    2, 1098,    2, 0x2a /* Public | MethodCloned */,
      65,    1, 1103,    2, 0x2a /* Public | MethodCloned */,
      69,    1, 1106,    2, 0x0a /* Public */,
      69,    0, 1109,    2, 0x2a /* Public | MethodCloned */,
      70,    0, 1110,    2, 0x0a /* Public */,
      71,    0, 1111,    2, 0x0a /* Public */,
      72,    1, 1112,    2, 0x0a /* Public */,
      74,    1, 1115,    2, 0x0a /* Public */,
      76,    0, 1118,    2, 0x0a /* Public */,
      77,    0, 1119,    2, 0x0a /* Public */,
      78,    0, 1120,    2, 0x0a /* Public */,
      79,    2, 1121,    2, 0x0a /* Public */,
      79,    1, 1126,    2, 0x2a /* Public | MethodCloned */,
      82,    1, 1129,    2, 0x0a /* Public */,
      83,    1, 1132,    2, 0x0a /* Public */,
      84,    0, 1135,    2, 0x0a /* Public */,
      85,    1, 1136,    2, 0x0a /* Public */,
      85,    0, 1139,    2, 0x2a /* Public | MethodCloned */,
      87,    0, 1140,    2, 0x0a /* Public */,
      88,    0, 1141,    2, 0x0a /* Public */,
      89,    0, 1142,    2, 0x0a /* Public */,
      90,    0, 1143,    2, 0x0a /* Public */,
      91,    0, 1144,    2, 0x0a /* Public */,
      92,    0, 1145,    2, 0x0a /* Public */,
      93,    3, 1146,    2, 0x0a /* Public */,
      93,    2, 1153,    2, 0x2a /* Public | MethodCloned */,
      97,    3, 1158,    2, 0x0a /* Public */,
      97,    2, 1165,    2, 0x2a /* Public | MethodCloned */,
     100,    3, 1170,    2, 0x0a /* Public */,
     100,    2, 1177,    2, 0x2a /* Public | MethodCloned */,
     101,    6, 1182,    2, 0x0a /* Public */,
     101,    5, 1195,    2, 0x2a /* Public | MethodCloned */,
     101,    4, 1206,    2, 0x2a /* Public | MethodCloned */,
     101,    3, 1215,    2, 0x2a /* Public | MethodCloned */,
     101,    2, 1222,    2, 0x0a /* Public */,
     101,    1, 1227,    2, 0x2a /* Public | MethodCloned */,
     106,    0, 1230,    2, 0x0a /* Public */,
     107,    0, 1231,    2, 0x0a /* Public */,
     108,    4, 1232,    2, 0x0a /* Public */,
     108,    3, 1241,    2, 0x2a /* Public | MethodCloned */,
     108,    2, 1248,    2, 0x2a /* Public | MethodCloned */,
     108,    1, 1253,    2, 0x2a /* Public | MethodCloned */,
     113,    1, 1256,    2, 0x0a /* Public */,
     114,    1, 1259,    2, 0x0a /* Public */,
     116,    0, 1262,    2, 0x0a /* Public */,
     117,    1, 1263,    2, 0x0a /* Public */,
     118,    0, 1266,    2, 0x0a /* Public */,
     119,    0, 1267,    2, 0x0a /* Public */,
     120,    1, 1268,    2, 0x0a /* Public */,
     122,    0, 1271,    2, 0x0a /* Public */,
     123,    1, 1272,    2, 0x0a /* Public */,
     124,    0, 1275,    2, 0x0a /* Public */,
     125,    1, 1276,    2, 0x0a /* Public */,
     126,    0, 1279,    2, 0x0a /* Public */,
     127,    1, 1280,    2, 0x0a /* Public */,
     128,    1, 1283,    2, 0x0a /* Public */,
     129,    2, 1286,    2, 0x0a /* Public */,
     130,    1, 1291,    2, 0x0a /* Public */,
     132,    0, 1294,    2, 0x0a /* Public */,
     133,    0, 1295,    2, 0x0a /* Public */,
     134,    1, 1296,    2, 0x0a /* Public */,
     135,    0, 1299,    2, 0x0a /* Public */,
     136,    0, 1300,    2, 0x0a /* Public */,
     137,    0, 1301,    2, 0x0a /* Public */,
     138,    1, 1302,    2, 0x0a /* Public */,
     139,   13, 1305,    2, 0x0a /* Public */,
     139,   12, 1332,    2, 0x2a /* Public | MethodCloned */,
     139,   11, 1357,    2, 0x2a /* Public | MethodCloned */,
     139,   10, 1380,    2, 0x2a /* Public | MethodCloned */,
     139,   13, 1401,    2, 0x0a /* Public */,
     139,   12, 1428,    2, 0x2a /* Public | MethodCloned */,
     139,   11, 1453,    2, 0x2a /* Public | MethodCloned */,
     139,   10, 1476,    2, 0x2a /* Public | MethodCloned */,
     139,    9, 1497,    2, 0x0a /* Public */,
     139,    8, 1516,    2, 0x2a /* Public | MethodCloned */,
     139,    7, 1533,    2, 0x2a /* Public | MethodCloned */,
     139,    6, 1548,    2, 0x2a /* Public | MethodCloned */,
     139,    9, 1561,    2, 0x0a /* Public */,
     139,    8, 1580,    2, 0x2a /* Public | MethodCloned */,
     139,    7, 1597,    2, 0x2a /* Public | MethodCloned */,
     139,    6, 1612,    2, 0x2a /* Public | MethodCloned */,
     150,   13, 1625,    2, 0x0a /* Public */,
     150,   12, 1652,    2, 0x2a /* Public | MethodCloned */,
     150,   11, 1677,    2, 0x2a /* Public | MethodCloned */,
     150,   10, 1700,    2, 0x2a /* Public | MethodCloned */,
     150,    9, 1721,    2, 0x0a /* Public */,
     150,    8, 1740,    2, 0x2a /* Public | MethodCloned */,
     150,    7, 1757,    2, 0x2a /* Public | MethodCloned */,
     150,    6, 1772,    2, 0x2a /* Public | MethodCloned */,
     159,    1, 1785,    2, 0x0a /* Public */,
     160,    2, 1788,    2, 0x0a /* Public */,
     161,    2, 1793,    2, 0x0a /* Public */,
     162,    1, 1798,    2, 0x0a /* Public */,
     163,    1, 1801,    2, 0x0a /* Public */,
     164,    1, 1804,    2, 0x0a /* Public */,
     165,    1, 1807,    2, 0x0a /* Public */,
     166,    1, 1810,    2, 0x0a /* Public */,
     167,    1, 1813,    2, 0x0a /* Public */,
     168,    6, 1816,    2, 0x0a /* Public */,
     168,    5, 1829,    2, 0x2a /* Public | MethodCloned */,
     168,    4, 1840,    2, 0x2a /* Public | MethodCloned */,
     169,    2, 1849,    2, 0x0a /* Public */,
     169,    1, 1854,    2, 0x2a /* Public | MethodCloned */,
     170,    9, 1857,    2, 0x0a /* Public */,
     171,    1, 1876,    2, 0x0a /* Public */,
     172,    1, 1879,    2, 0x0a /* Public */,
     173,    1, 1882,    2, 0x0a /* Public */,
     174,    3, 1885,    2, 0x0a /* Public */,
     174,    2, 1892,    2, 0x2a /* Public | MethodCloned */,
     175,    4, 1897,    2, 0x0a /* Public */,
     175,    3, 1906,    2, 0x2a /* Public | MethodCloned */,
     176,    2, 1913,    2, 0x0a /* Public */,
     177,    3, 1918,    2, 0x0a /* Public */,
     178,    2, 1925,    2, 0x0a /* Public */,
     178,    1, 1930,    2, 0x2a /* Public | MethodCloned */,
     179,    1, 1933,    2, 0x0a /* Public */,
     180,    1, 1936,    2, 0x0a /* Public */,
     181,    0, 1939,    2, 0x0a /* Public */,
     182,    0, 1940,    2, 0x0a /* Public */,
     183,    0, 1941,    2, 0x0a /* Public */,
     184,    1, 1942,    2, 0x0a /* Public */,
     186,    0, 1945,    2, 0x0a /* Public */,
     187,    1, 1946,    2, 0x0a /* Public */,
     189,    0, 1949,    2, 0x0a /* Public */,
     190,    0, 1950,    2, 0x0a /* Public */,
     191,    1, 1951,    2, 0x0a /* Public */,
     193,    1, 1954,    2, 0x0a /* Public */,
     194,    0, 1957,    2, 0x0a /* Public */,
     195,    1, 1958,    2, 0x0a /* Public */,
     196,    0, 1961,    2, 0x0a /* Public */,
     197,    1, 1962,    2, 0x0a /* Public */,
     199,    0, 1965,    2, 0x0a /* Public */,
     200,    1, 1966,    2, 0x0a /* Public */,
     201,    0, 1969,    2, 0x0a /* Public */,
     202,    1, 1970,    2, 0x0a /* Public */,
     203,    1, 1973,    2, 0x0a /* Public */,
     205,    0, 1976,    2, 0x0a /* Public */,
     206,    1, 1977,    2, 0x0a /* Public */,
     207,    1, 1980,    2, 0x0a /* Public */,
     208,    0, 1983,    2, 0x0a /* Public */,
     209,    0, 1984,    2, 0x0a /* Public */,
     210,    1, 1985,    2, 0x0a /* Public */,
     212,    2, 1988,    2, 0x0a /* Public */,
     214,    1, 1993,    2, 0x0a /* Public */,
     216,    2, 1996,    2, 0x0a /* Public */,
     216,    1, 2001,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool,    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool,    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Float,    4,    3,   24,   25,   26,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   29,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    3,   31,   32,   33,   34,   35,   36,   37,   38,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, QMetaType::Bool,    3,   43,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,    3,   43,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    3,   24,   25,   46,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,    3,   24,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,    3,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,    3,   49,   50,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   26,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,   60,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   63,
    QMetaType::Double,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   66,   67,   68,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   66,   67,
    QMetaType::Void, QMetaType::QString,   66,
    QMetaType::QString, QMetaType::QString,   67,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   73,
    QMetaType::Void, QMetaType::Double,   75,
    QMetaType::Double,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   80,   81,
    QMetaType::Void, QMetaType::QString,   80,
    QMetaType::QVariantMap, QMetaType::QString,   80,
    QMetaType::QVariantMap, QMetaType::QString,   80,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QString,   86,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float,   94,   95,   96,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   94,   95,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float,   98,   99,   96,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   98,   99,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float,   98,   99,   96,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   98,   99,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::QString, QMetaType::QString,  102,  103,  104,   96,   80,  105,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::QString,  102,  103,  104,   96,   80,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  102,  103,  104,   96,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,  102,  103,  104,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,    3,   96,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString, QMetaType::Bool,  109,  110,  111,  112,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,  109,  110,  111,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,  109,  110,
    QMetaType::Void, QMetaType::QString,  109,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::Float,  115,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,  115,
    QMetaType::Float,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,  121,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   24,   25,
    QMetaType::Void, QMetaType::Float,  131,
    QMetaType::QStringList,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool,    3,    4,  140,  141,  142,  143,  144,  145,  146,  147,   13,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,  140,  141,  142,  143,  144,  145,  146,  147,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,  140,  141,  142,  143,  144,  145,  146,  147,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,  140,  141,  142,  143,  144,  145,  146,  147,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Bool,    3,    4,  140,  141,  142,  143,  144,  145,  146,  147,   13,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double,    3,    4,  140,  141,  142,  143,  144,  145,  146,  147,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Double,    3,    4,  140,  141,  142,  143,  144,  145,  146,  147,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,  140,  141,  142,  143,  144,  145,  146,  147,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool,    3,    4,   98,   99,  148,  149,   13,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,   98,   99,  148,  149,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,   98,   99,  148,  149,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,   98,   99,  148,  149,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool,    3,    4,   98,   99,  148,  149,   13,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,   98,   99,  148,  149,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,   98,   99,  148,  149,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double,    3,    4,   98,   99,  148,  149,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool,    3,    4,  151,  152,  153,  154,  155,  156,  157,  158,   13,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,  151,  152,  153,  154,  155,  156,  157,  158,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,  151,  152,  153,  154,  155,  156,  157,  158,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,  151,  152,  153,  154,  155,  156,  157,  158,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool,    3,    4,   94,   95,  148,  149,   13,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,   94,   95,  148,  149,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,   94,   95,  148,  149,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,   94,   95,  148,  149,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString,   94,   95,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::LongLong, QMetaType::QString,    3,
    QMetaType::LongLong, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Float,    4,    3,   24,   25,   26,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    4,    3,   24,   25,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float,    4,    3,   24,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   29,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    3,   31,   32,   33,   34,   35,   36,   37,   38,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, QMetaType::Bool,    3,   43,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,    3,   43,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    3,   24,   25,   46,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,    3,   24,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,    3,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,    3,   49,   50,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   26,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::LongLong, QMetaType::QString,    3,
    QMetaType::LongLong, QMetaType::QString,    3,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,  185,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  188,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  192,
    QMetaType::Void, QMetaType::QString,  192,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,  198,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,  198,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::Double,  204,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::Double,  204,
    QMetaType::Double,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,  211,
    QMetaType::Double, QMetaType::QString, QMetaType::QString,  213,   67,
    QMetaType::Void, QMetaType::Double,  215,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  213,   67,
    QMetaType::Void, QMetaType::QString,  213,

 // properties: name, type, flags
     217, QMetaType::Double, 0x00095103,
     218, QMetaType::Double, 0x00095003,

       0        // eod
};

void StelMainScriptAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelMainScriptAPI *_t = static_cast<StelMainScriptAPI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestLoadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13]))); break;
        case 1: _t->requestLoadSkyImageAltAz((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13]))); break;
        case 2: _t->requestRemoveSkyImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->requestLoadSound((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->requestPlaySound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->requestPauseSound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->requestStopSound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->requestDropSound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->requestLoadVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 9: _t->requestPlayVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 10: _t->requestPlayVideoPopout((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 11: _t->requestPauseVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->requestStopVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->requestDropVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->requestSeekVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 15: _t->requestSeekVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 16: _t->requestSetVideoXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 17: _t->requestSetVideoXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 18: _t->requestSetVideoAlpha((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 19: _t->requestResizeVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 20: _t->requestShowVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->requestSetNightMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->requestSetProjectionMode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->requestSetSkyCulture((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->requestSetDiskViewport((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->requestExit(); break;
        case 26: _t->requestSetHomePosition(); break;
        case 27: _t->setJDay((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 28: { double _r = _t->getJDay();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 29: _t->setMJDay((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 30: { double _r = _t->getMJDay();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 31: _t->setDate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 32: _t->setDate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 33: _t->setDate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: { QString _r = _t->getDate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->getDate();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { QString _r = _t->getDeltaT();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 37: { QString _r = _t->getDeltaTAlgorithm();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 38: _t->setDeltaTAlgorithm((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 39: _t->setTimeRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 40: { double _r = _t->getTimeRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->isRealTime();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: _t->setRealTime(); break;
        case 43: _t->selectObjectByName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 44: _t->selectObjectByName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 45: { QVariantMap _r = _t->getObjectPosition((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 46: { QVariantMap _r = _t->getObjectInfo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 47: { QVariantMap _r = _t->getSelectedObjectInfo();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 48: _t->clear((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 49: _t->clear(); break;
        case 50: { double _r = _t->getViewAltitudeAngle();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 51: { double _r = _t->getViewAzimuthAngle();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 52: { double _r = _t->getViewRaAngle();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 53: { double _r = _t->getViewDecAngle();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 54: { double _r = _t->getViewRaJ2000Angle();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 55: { double _r = _t->getViewDecJ2000Angle();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 56: _t->moveToAltAzi((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 57: _t->moveToAltAzi((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 58: _t->moveToRaDec((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 59: _t->moveToRaDec((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 60: _t->moveToRaDecJ2000((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 61: _t->moveToRaDecJ2000((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 62: _t->setObserverLocation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 63: _t->setObserverLocation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 64: _t->setObserverLocation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 65: _t->setObserverLocation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 66: _t->setObserverLocation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 67: _t->setObserverLocation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 68: { QString _r = _t->getObserverLocation();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 69: { QVariantMap _r = _t->getObserverLocationInfo();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 70: _t->screenshot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const bool(*)>(_a[4]))); break;
        case 71: _t->screenshot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 72: _t->screenshot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 73: _t->screenshot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 74: _t->setGuiVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: _t->setMinFps((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 76: { float _r = _t->getMinFps();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 77: _t->setMaxFps((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 78: { float _r = _t->getMaxFps();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 79: { QString _r = _t->getMountMode();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 80: _t->setMountMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 81: { bool _r = _t->getNightMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 82: _t->setNightMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: { QString _r = _t->getProjectionMode();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 84: _t->setProjectionMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 85: { bool _r = _t->getDiskViewport();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 86: _t->setDiskViewport((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: _t->setSphericMirror((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->setViewportOffset((*reinterpret_cast< const float(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 89: _t->setViewportStretch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 90: { QStringList _r = _t->getAllSkyCultureIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 91: { QString _r = _t->getSkyCulture();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 92: _t->setSkyCulture((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 93: { QString _r = _t->getSkyCultureName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 94: { QString _r = _t->getSkyCultureNameI18n();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 95: { bool _r = _t->getFlagGravityLabels();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 96: _t->setFlagGravityLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 97: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13]))); break;
        case 98: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12]))); break;
        case 99: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11]))); break;
        case 100: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10]))); break;
        case 101: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13]))); break;
        case 102: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12]))); break;
        case 103: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11]))); break;
        case 104: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10]))); break;
        case 105: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 106: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8]))); break;
        case 107: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 108: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 109: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 110: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8]))); break;
        case 111: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 112: _t->loadSkyImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 113: _t->loadSkyImageAltAz((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13]))); break;
        case 114: _t->loadSkyImageAltAz((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12]))); break;
        case 115: _t->loadSkyImageAltAz((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11]))); break;
        case 116: _t->loadSkyImageAltAz((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10]))); break;
        case 117: _t->loadSkyImageAltAz((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 118: _t->loadSkyImageAltAz((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8]))); break;
        case 119: _t->loadSkyImageAltAz((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 120: _t->loadSkyImageAltAz((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 121: _t->removeSkyImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 122: { QVariantMap _r = _t->getScreenXYFromAltAzi((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 123: _t->loadSound((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 124: _t->playSound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 125: _t->pauseSound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 126: _t->stopSound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 127: _t->dropSound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 128: { qint64 _r = _t->getSoundPosition((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 129: { qint64 _r = _t->getSoundDuration((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 130: _t->loadVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 131: _t->loadVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 132: _t->loadVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 133: _t->playVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 134: _t->playVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 135: _t->playVideoPopout((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 136: _t->pauseVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 137: _t->stopVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 138: _t->dropVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 139: _t->seekVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 140: _t->seekVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 141: _t->setVideoXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 142: _t->setVideoXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 143: _t->setVideoAlpha((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 144: _t->resizeVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 145: _t->showVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 146: _t->showVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 147: { qint64 _r = _t->getVideoDuration((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 148: { qint64 _r = _t->getVideoPosition((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 149: { int _r = _t->getScreenWidth();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 150: { int _r = _t->getScreenHeight();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 151: { double _r = _t->getScriptRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 152: _t->setScriptRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 153: _t->pauseScript(); break;
        case 154: _t->setSelectedObjectInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 155: _t->exit(); break;
        case 156: _t->quitStellarium(); break;
        case 157: _t->debug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 158: _t->output((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 159: _t->resetOutput(); break;
        case 160: _t->saveOutputAs((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 161: { QString _r = _t->getAppLanguage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 162: _t->setAppLanguage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 163: { QString _r = _t->getSkyLanguage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 164: _t->setSkyLanguage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 165: _t->goHome(); break;
        case 166: _t->setMilkyWayVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 167: _t->setMilkyWayIntensity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 168: { double _r = _t->getMilkyWayIntensity();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 169: _t->setZodiacalLightVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 170: _t->setZodiacalLightIntensity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 171: { double _r = _t->getZodiacalLightIntensity();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 172: { int _r = _t->getBortleScaleIndex();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 173: _t->setBortleScaleIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 174: { double _r = _t->jdFromDateString((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 175: _t->wait((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 176: _t->waitFor((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 177: _t->waitFor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & , const QString & , double , double , double , double , double , double , double , double , double , double , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestLoadSkyImage)) {
                *result = 0;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & , const QString & , double , double , double , double , double , double , double , double , double , double , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestLoadSkyImageAltAz)) {
                *result = 1;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestRemoveSkyImage)) {
                *result = 2;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestLoadSound)) {
                *result = 3;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestPlaySound)) {
                *result = 4;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestPauseSound)) {
                *result = 5;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestStopSound)) {
                *result = 6;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestDropSound)) {
                *result = 7;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & , const QString & , float , float , bool , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestLoadVideo)) {
                *result = 8;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & , const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestPlayVideo)) {
                *result = 9;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & , float , float , float , float , float , float , float , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestPlayVideoPopout)) {
                *result = 10;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestPauseVideo)) {
                *result = 11;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestStopVideo)) {
                *result = 12;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestDropVideo)) {
                *result = 13;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & , qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestSeekVideo)) {
                *result = 14;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & , float , float , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestSetVideoXY)) {
                *result = 16;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestSetVideoAlpha)) {
                *result = 18;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestResizeVideo)) {
                *result = 19;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestShowVideo)) {
                *result = 20;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestSetNightMode)) {
                *result = 21;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestSetProjectionMode)) {
                *result = 22;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestSetSkyCulture)) {
                *result = 23;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestSetDiskViewport)) {
                *result = 24;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestExit)) {
                *result = 25;
            }
        }
        {
            typedef void (StelMainScriptAPI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelMainScriptAPI::requestSetHomePosition)) {
                *result = 26;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StelMainScriptAPI *_t = static_cast<StelMainScriptAPI *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getJDay(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getTimeRate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        StelMainScriptAPI *_t = static_cast<StelMainScriptAPI *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setJDay(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setTimeRate(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject StelMainScriptAPI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelMainScriptAPI.data,
      qt_meta_data_StelMainScriptAPI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelMainScriptAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelMainScriptAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelMainScriptAPI.stringdata0))
        return static_cast<void*>(const_cast< StelMainScriptAPI*>(this));
    return QObject::qt_metacast(_clname);
}

int StelMainScriptAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 178)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 178;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 178)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 178;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StelMainScriptAPI::requestLoadSkyImage(const QString & _t1, const QString & _t2, double _t3, double _t4, double _t5, double _t6, double _t7, double _t8, double _t9, double _t10, double _t11, double _t12, bool _t13)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StelMainScriptAPI::requestLoadSkyImageAltAz(const QString & _t1, const QString & _t2, double _t3, double _t4, double _t5, double _t6, double _t7, double _t8, double _t9, double _t10, double _t11, double _t12, bool _t13)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StelMainScriptAPI::requestRemoveSkyImage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StelMainScriptAPI::requestLoadSound(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StelMainScriptAPI::requestPlaySound(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StelMainScriptAPI::requestPauseSound(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StelMainScriptAPI::requestStopSound(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StelMainScriptAPI::requestDropSound(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void StelMainScriptAPI::requestLoadVideo(const QString & _t1, const QString & _t2, float _t3, float _t4, bool _t5, float _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void StelMainScriptAPI::requestPlayVideo(const QString & _t1, const bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void StelMainScriptAPI::requestPlayVideoPopout(const QString & _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, float _t8, bool _t9)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void StelMainScriptAPI::requestPauseVideo(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void StelMainScriptAPI::requestStopVideo(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void StelMainScriptAPI::requestDropVideo(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void StelMainScriptAPI::requestSeekVideo(const QString & _t1, qint64 _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 16
void StelMainScriptAPI::requestSetVideoXY(const QString & _t1, float _t2, float _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 18
void StelMainScriptAPI::requestSetVideoAlpha(const QString & _t1, float _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void StelMainScriptAPI::requestResizeVideo(const QString & _t1, float _t2, float _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void StelMainScriptAPI::requestShowVideo(const QString & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void StelMainScriptAPI::requestSetNightMode(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void StelMainScriptAPI::requestSetProjectionMode(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void StelMainScriptAPI::requestSetSkyCulture(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void StelMainScriptAPI::requestSetDiskViewport(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void StelMainScriptAPI::requestExit()
{
    QMetaObject::activate(this, &staticMetaObject, 25, Q_NULLPTR);
}

// SIGNAL 26
void StelMainScriptAPI::requestSetHomePosition()
{
    QMetaObject::activate(this, &staticMetaObject, 26, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
