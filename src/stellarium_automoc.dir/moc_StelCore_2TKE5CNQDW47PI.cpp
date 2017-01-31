/****************************************************************************
** Meta object code from reading C++ file 'StelCore.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelCore.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelCore.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelCore_t {
    QByteArrayData data[240];
    char stringdata0[4000];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelCore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelCore_t qt_meta_stringdata_StelCore = {
    {
QT_MOC_LITERAL(0, 0, 8), // "StelCore"
QT_MOC_LITERAL(1, 9, 15), // "locationChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "StelLocation"
QT_MOC_LITERAL(4, 39, 15), // "timeRateChanged"
QT_MOC_LITERAL(5, 55, 4), // "rate"
QT_MOC_LITERAL(6, 60, 16), // "timeSyncOccurred"
QT_MOC_LITERAL(7, 77, 4), // "jDay"
QT_MOC_LITERAL(8, 82, 11), // "dateChanged"
QT_MOC_LITERAL(9, 94, 15), // "flipHorzChanged"
QT_MOC_LITERAL(10, 110, 1), // "b"
QT_MOC_LITERAL(11, 112, 15), // "flipVertChanged"
QT_MOC_LITERAL(12, 128, 22), // "flagUseNutationChanged"
QT_MOC_LITERAL(13, 151, 36), // "flagUseTopocentricCoordinates..."
QT_MOC_LITERAL(14, 188, 28), // "currentProjectionTypeChanged"
QT_MOC_LITERAL(15, 217, 24), // "StelCore::ProjectionType"
QT_MOC_LITERAL(16, 242, 7), // "newType"
QT_MOC_LITERAL(17, 250, 31), // "currentProjectionTypeKeyChanged"
QT_MOC_LITERAL(18, 282, 8), // "newValue"
QT_MOC_LITERAL(19, 291, 32), // "currentProjectionNameI18nChanged"
QT_MOC_LITERAL(20, 324, 14), // "moveObserverTo"
QT_MOC_LITERAL(21, 339, 6), // "target"
QT_MOC_LITERAL(22, 346, 8), // "duration"
QT_MOC_LITERAL(23, 355, 22), // "durationIfPlanetChange"
QT_MOC_LITERAL(24, 378, 24), // "setCurrentProjectionType"
QT_MOC_LITERAL(25, 403, 14), // "ProjectionType"
QT_MOC_LITERAL(26, 418, 4), // "type"
QT_MOC_LITERAL(27, 423, 24), // "getCurrentProjectionType"
QT_MOC_LITERAL(28, 448, 27), // "getCurrentProjectionTypeKey"
QT_MOC_LITERAL(29, 476, 27), // "setCurrentProjectionTypeKey"
QT_MOC_LITERAL(30, 504, 28), // "getCurrentProjectionNameI18n"
QT_MOC_LITERAL(31, 533, 24), // "getAllProjectionTypeKeys"
QT_MOC_LITERAL(32, 558, 25), // "setCurrentDeltaTAlgorithm"
QT_MOC_LITERAL(33, 584, 15), // "DeltaTAlgorithm"
QT_MOC_LITERAL(34, 600, 9), // "algorithm"
QT_MOC_LITERAL(35, 610, 25), // "getCurrentDeltaTAlgorithm"
QT_MOC_LITERAL(36, 636, 36), // "getCurrentDeltaTAlgorithmDesc..."
QT_MOC_LITERAL(37, 673, 28), // "getCurrentDeltaTAlgorithmKey"
QT_MOC_LITERAL(38, 702, 28), // "setCurrentDeltaTAlgorithmKey"
QT_MOC_LITERAL(39, 731, 11), // "setMaskType"
QT_MOC_LITERAL(40, 743, 36), // "StelProjector::StelProjectorM..."
QT_MOC_LITERAL(41, 780, 1), // "m"
QT_MOC_LITERAL(42, 782, 20), // "setFlagGravityLabels"
QT_MOC_LITERAL(43, 803, 7), // "gravity"
QT_MOC_LITERAL(44, 811, 29), // "setDefaultAngleForGravityText"
QT_MOC_LITERAL(45, 841, 1), // "a"
QT_MOC_LITERAL(46, 843, 11), // "setFlipHorz"
QT_MOC_LITERAL(47, 855, 4), // "flip"
QT_MOC_LITERAL(48, 860, 11), // "setFlipVert"
QT_MOC_LITERAL(49, 872, 11), // "getFlipHorz"
QT_MOC_LITERAL(50, 884, 11), // "getFlipVert"
QT_MOC_LITERAL(51, 896, 27), // "getViewportHorizontalOffset"
QT_MOC_LITERAL(52, 924, 27), // "setViewportHorizontalOffset"
QT_MOC_LITERAL(53, 952, 12), // "newOffsetPct"
QT_MOC_LITERAL(54, 965, 25), // "getViewportVerticalOffset"
QT_MOC_LITERAL(55, 991, 25), // "setViewportVerticalOffset"
QT_MOC_LITERAL(56, 1017, 17), // "setViewportOffset"
QT_MOC_LITERAL(57, 1035, 22), // "newHorizontalOffsetPct"
QT_MOC_LITERAL(58, 1058, 20), // "newVerticalOffsetPct"
QT_MOC_LITERAL(59, 1079, 18), // "setViewportStretch"
QT_MOC_LITERAL(60, 1098, 7), // "stretch"
QT_MOC_LITERAL(61, 1106, 20), // "getDefaultLocationID"
QT_MOC_LITERAL(62, 1127, 20), // "setDefaultLocationID"
QT_MOC_LITERAL(63, 1148, 2), // "id"
QT_MOC_LITERAL(64, 1151, 23), // "returnToDefaultLocation"
QT_MOC_LITERAL(65, 1175, 12), // "returnToHome"
QT_MOC_LITERAL(66, 1188, 19), // "getJDOfLastJDUpdate"
QT_MOC_LITERAL(67, 1208, 29), // "setMilliSecondsOfLastJDUpdate"
QT_MOC_LITERAL(68, 1238, 6), // "millis"
QT_MOC_LITERAL(69, 1245, 29), // "getMilliSecondsOfLastJDUpdate"
QT_MOC_LITERAL(70, 1275, 5), // "setJD"
QT_MOC_LITERAL(71, 1281, 5), // "newJD"
QT_MOC_LITERAL(72, 1287, 6), // "setJDE"
QT_MOC_LITERAL(73, 1294, 6), // "newJDE"
QT_MOC_LITERAL(74, 1301, 5), // "getJD"
QT_MOC_LITERAL(75, 1307, 6), // "getJDE"
QT_MOC_LITERAL(76, 1314, 25), // "getSolutionEquationOfTime"
QT_MOC_LITERAL(77, 1340, 3), // "JDE"
QT_MOC_LITERAL(78, 1344, 9), // "getUseDST"
QT_MOC_LITERAL(79, 1354, 9), // "setUseDST"
QT_MOC_LITERAL(80, 1364, 8), // "setMJDay"
QT_MOC_LITERAL(81, 1373, 3), // "MJD"
QT_MOC_LITERAL(82, 1377, 8), // "getMJDay"
QT_MOC_LITERAL(83, 1386, 13), // "computeDeltaT"
QT_MOC_LITERAL(84, 1400, 2), // "JD"
QT_MOC_LITERAL(85, 1403, 9), // "getDeltaT"
QT_MOC_LITERAL(86, 1413, 14), // "getUseNutation"
QT_MOC_LITERAL(87, 1428, 14), // "setUseNutation"
QT_MOC_LITERAL(88, 1443, 3), // "use"
QT_MOC_LITERAL(89, 1447, 28), // "getUseTopocentricCoordinates"
QT_MOC_LITERAL(90, 1476, 28), // "setUseTopocentricCoordinates"
QT_MOC_LITERAL(91, 1505, 16), // "getPresetSkyTime"
QT_MOC_LITERAL(92, 1522, 16), // "setPresetSkyTime"
QT_MOC_LITERAL(93, 1539, 1), // "d"
QT_MOC_LITERAL(94, 1541, 11), // "setTimeRate"
QT_MOC_LITERAL(95, 1553, 2), // "ts"
QT_MOC_LITERAL(96, 1556, 11), // "getTimeRate"
QT_MOC_LITERAL(97, 1568, 19), // "revertTimeDirection"
QT_MOC_LITERAL(98, 1588, 17), // "increaseTimeSpeed"
QT_MOC_LITERAL(99, 1606, 17), // "decreaseTimeSpeed"
QT_MOC_LITERAL(100, 1624, 21), // "increaseTimeSpeedLess"
QT_MOC_LITERAL(101, 1646, 21), // "decreaseTimeSpeedLess"
QT_MOC_LITERAL(102, 1668, 16), // "setZeroTimeSpeed"
QT_MOC_LITERAL(103, 1685, 16), // "setRealTimeSpeed"
QT_MOC_LITERAL(104, 1702, 19), // "toggleRealTimeSpeed"
QT_MOC_LITERAL(105, 1722, 16), // "getRealTimeSpeed"
QT_MOC_LITERAL(106, 1739, 10), // "setTimeNow"
QT_MOC_LITERAL(107, 1750, 12), // "setTodayTime"
QT_MOC_LITERAL(108, 1763, 12), // "getIsTimeNow"
QT_MOC_LITERAL(109, 1776, 16), // "getInitTodayTime"
QT_MOC_LITERAL(110, 1793, 16), // "setInitTodayTime"
QT_MOC_LITERAL(111, 1810, 4), // "time"
QT_MOC_LITERAL(112, 1815, 8), // "dateTime"
QT_MOC_LITERAL(113, 1824, 9), // "addMinute"
QT_MOC_LITERAL(114, 1834, 7), // "addHour"
QT_MOC_LITERAL(115, 1842, 6), // "addDay"
QT_MOC_LITERAL(116, 1849, 7), // "addWeek"
QT_MOC_LITERAL(117, 1857, 14), // "addSiderealDay"
QT_MOC_LITERAL(118, 1872, 15), // "addSiderealYear"
QT_MOC_LITERAL(119, 1888, 16), // "addSiderealYears"
QT_MOC_LITERAL(120, 1905, 1), // "n"
QT_MOC_LITERAL(121, 1907, 14), // "subtractMinute"
QT_MOC_LITERAL(122, 1922, 12), // "subtractHour"
QT_MOC_LITERAL(123, 1935, 11), // "subtractDay"
QT_MOC_LITERAL(124, 1947, 12), // "subtractWeek"
QT_MOC_LITERAL(125, 1960, 19), // "subtractSiderealDay"
QT_MOC_LITERAL(126, 1980, 20), // "subtractSiderealYear"
QT_MOC_LITERAL(127, 2001, 21), // "subtractSiderealYears"
QT_MOC_LITERAL(128, 2023, 15), // "addSynodicMonth"
QT_MOC_LITERAL(129, 2039, 15), // "addDraconicYear"
QT_MOC_LITERAL(130, 2055, 16), // "addDraconicMonth"
QT_MOC_LITERAL(131, 2072, 19), // "addAnomalisticMonth"
QT_MOC_LITERAL(132, 2092, 18), // "addAnomalisticYear"
QT_MOC_LITERAL(133, 2111, 19), // "addAnomalisticYears"
QT_MOC_LITERAL(134, 2131, 20), // "addMeanTropicalMonth"
QT_MOC_LITERAL(135, 2152, 19), // "addMeanTropicalYear"
QT_MOC_LITERAL(136, 2172, 20), // "addMeanTropicalYears"
QT_MOC_LITERAL(137, 2193, 15), // "addTropicalYear"
QT_MOC_LITERAL(138, 2209, 13), // "addJulianYear"
QT_MOC_LITERAL(139, 2223, 14), // "addJulianYears"
QT_MOC_LITERAL(140, 2238, 15), // "addGaussianYear"
QT_MOC_LITERAL(141, 2254, 20), // "subtractSynodicMonth"
QT_MOC_LITERAL(142, 2275, 20), // "subtractDraconicYear"
QT_MOC_LITERAL(143, 2296, 21), // "subtractDraconicMonth"
QT_MOC_LITERAL(144, 2318, 24), // "subtractAnomalisticMonth"
QT_MOC_LITERAL(145, 2343, 23), // "subtractAnomalisticYear"
QT_MOC_LITERAL(146, 2367, 24), // "subtractAnomalisticYears"
QT_MOC_LITERAL(147, 2392, 25), // "subtractMeanTropicalMonth"
QT_MOC_LITERAL(148, 2418, 24), // "subtractMeanTropicalYear"
QT_MOC_LITERAL(149, 2443, 25), // "subtractMeanTropicalYears"
QT_MOC_LITERAL(150, 2469, 20), // "subtractTropicalYear"
QT_MOC_LITERAL(151, 2490, 18), // "subtractJulianYear"
QT_MOC_LITERAL(152, 2509, 19), // "subtractJulianYears"
QT_MOC_LITERAL(153, 2529, 20), // "subtractGaussianYear"
QT_MOC_LITERAL(154, 2550, 12), // "addSolarDays"
QT_MOC_LITERAL(155, 2563, 15), // "addSiderealDays"
QT_MOC_LITERAL(156, 2579, 22), // "moveObserverToSelected"
QT_MOC_LITERAL(157, 2602, 19), // "setDeltaTCustomYear"
QT_MOC_LITERAL(158, 2622, 1), // "y"
QT_MOC_LITERAL(159, 2624, 19), // "setDeltaTCustomNDot"
QT_MOC_LITERAL(160, 2644, 1), // "v"
QT_MOC_LITERAL(161, 2646, 35), // "setDeltaTCustomEquationCoeffi..."
QT_MOC_LITERAL(162, 2682, 5), // "Vec3f"
QT_MOC_LITERAL(163, 2688, 1), // "c"
QT_MOC_LITERAL(164, 2690, 19), // "getDeltaTCustomYear"
QT_MOC_LITERAL(165, 2710, 19), // "getDeltaTCustomNDot"
QT_MOC_LITERAL(166, 2730, 35), // "getDeltaTCustomEquationCoeffi..."
QT_MOC_LITERAL(167, 2766, 24), // "initEphemeridesFunctions"
QT_MOC_LITERAL(168, 2791, 16), // "de430IsAvailable"
QT_MOC_LITERAL(169, 2808, 16), // "de431IsAvailable"
QT_MOC_LITERAL(170, 2825, 13), // "de430IsActive"
QT_MOC_LITERAL(171, 2839, 13), // "de431IsActive"
QT_MOC_LITERAL(172, 2853, 14), // "setDe430Active"
QT_MOC_LITERAL(173, 2868, 6), // "status"
QT_MOC_LITERAL(174, 2875, 14), // "setDe431Active"
QT_MOC_LITERAL(175, 2890, 19), // "getIAUConstellation"
QT_MOC_LITERAL(176, 2910, 5), // "Vec3d"
QT_MOC_LITERAL(177, 2916, 13), // "positionJ2000"
QT_MOC_LITERAL(178, 2930, 8), // "flipHorz"
QT_MOC_LITERAL(179, 2939, 8), // "flipVert"
QT_MOC_LITERAL(180, 2948, 15), // "flagUseNutation"
QT_MOC_LITERAL(181, 2964, 29), // "flagUseTopocentricCoordinates"
QT_MOC_LITERAL(182, 2994, 21), // "currentProjectionType"
QT_MOC_LITERAL(183, 3016, 24), // "currentProjectionTypeKey"
QT_MOC_LITERAL(184, 3041, 25), // "currentProjectionNameI18n"
QT_MOC_LITERAL(185, 3067, 9), // "FrameType"
QT_MOC_LITERAL(186, 3077, 18), // "FrameUninitialized"
QT_MOC_LITERAL(187, 3096, 10), // "FrameAltAz"
QT_MOC_LITERAL(188, 3107, 30), // "FrameHeliocentricEclipticJ2000"
QT_MOC_LITERAL(189, 3138, 33), // "FrameObservercentricEclipticJ..."
QT_MOC_LITERAL(190, 3172, 34), // "FrameObservercentricEclipticO..."
QT_MOC_LITERAL(191, 3207, 15), // "FrameEquinoxEqu"
QT_MOC_LITERAL(192, 3223, 10), // "FrameJ2000"
QT_MOC_LITERAL(193, 3234, 13), // "FrameGalactic"
QT_MOC_LITERAL(194, 3248, 18), // "FrameSupergalactic"
QT_MOC_LITERAL(195, 3267, 21), // "ProjectionPerspective"
QT_MOC_LITERAL(196, 3289, 23), // "ProjectionStereographic"
QT_MOC_LITERAL(197, 3313, 17), // "ProjectionFisheye"
QT_MOC_LITERAL(198, 3331, 22), // "ProjectionOrthographic"
QT_MOC_LITERAL(199, 3354, 19), // "ProjectionEqualArea"
QT_MOC_LITERAL(200, 3374, 16), // "ProjectionHammer"
QT_MOC_LITERAL(201, 3391, 20), // "ProjectionSinusoidal"
QT_MOC_LITERAL(202, 3412, 18), // "ProjectionMercator"
QT_MOC_LITERAL(203, 3431, 16), // "ProjectionMiller"
QT_MOC_LITERAL(204, 3448, 18), // "ProjectionCylinder"
QT_MOC_LITERAL(205, 3467, 14), // "RefractionMode"
QT_MOC_LITERAL(206, 3482, 14), // "RefractionAuto"
QT_MOC_LITERAL(207, 3497, 12), // "RefractionOn"
QT_MOC_LITERAL(208, 3510, 13), // "RefractionOff"
QT_MOC_LITERAL(209, 3524, 17), // "WithoutCorrection"
QT_MOC_LITERAL(210, 3542, 6), // "Schoch"
QT_MOC_LITERAL(211, 3549, 8), // "Clemence"
QT_MOC_LITERAL(212, 3558, 3), // "IAU"
QT_MOC_LITERAL(213, 3562, 21), // "AstronomicalEphemeris"
QT_MOC_LITERAL(214, 3584, 18), // "TuckermanGoldstine"
QT_MOC_LITERAL(215, 3603, 16), // "MullerStephenson"
QT_MOC_LITERAL(216, 3620, 14), // "Stephenson1978"
QT_MOC_LITERAL(217, 3635, 16), // "SchmadelZech1979"
QT_MOC_LITERAL(218, 3652, 22), // "MorrisonStephenson1982"
QT_MOC_LITERAL(219, 3675, 22), // "StephensonMorrison1984"
QT_MOC_LITERAL(220, 3698, 17), // "StephensonHoulden"
QT_MOC_LITERAL(221, 3716, 7), // "Espenak"
QT_MOC_LITERAL(222, 3724, 9), // "Borkowski"
QT_MOC_LITERAL(223, 3734, 16), // "SchmadelZech1988"
QT_MOC_LITERAL(224, 3751, 13), // "ChaprontTouze"
QT_MOC_LITERAL(225, 3765, 22), // "StephensonMorrison1995"
QT_MOC_LITERAL(226, 3788, 14), // "Stephenson1997"
QT_MOC_LITERAL(227, 3803, 13), // "ChaprontMeeus"
QT_MOC_LITERAL(228, 3817, 11), // "JPLHorizons"
QT_MOC_LITERAL(229, 3829, 11), // "MeeusSimons"
QT_MOC_LITERAL(230, 3841, 18), // "MontenbruckPfleger"
QT_MOC_LITERAL(231, 3860, 18), // "ReingoldDershowitz"
QT_MOC_LITERAL(232, 3879, 22), // "MorrisonStephenson2004"
QT_MOC_LITERAL(233, 3902, 5), // "Reijs"
QT_MOC_LITERAL(234, 3908, 12), // "EspenakMeeus"
QT_MOC_LITERAL(235, 3921, 25), // "EspenakMeeusZeroMoonAccel"
QT_MOC_LITERAL(236, 3947, 8), // "Banjevic"
QT_MOC_LITERAL(237, 3956, 17), // "IslamSadiqQureshi"
QT_MOC_LITERAL(238, 3974, 18), // "KhalidSultanaZaidi"
QT_MOC_LITERAL(239, 3993, 6) // "Custom"

    },
    "StelCore\0locationChanged\0\0StelLocation\0"
    "timeRateChanged\0rate\0timeSyncOccurred\0"
    "jDay\0dateChanged\0flipHorzChanged\0b\0"
    "flipVertChanged\0flagUseNutationChanged\0"
    "flagUseTopocentricCoordinatesChanged\0"
    "currentProjectionTypeChanged\0"
    "StelCore::ProjectionType\0newType\0"
    "currentProjectionTypeKeyChanged\0"
    "newValue\0currentProjectionNameI18nChanged\0"
    "moveObserverTo\0target\0duration\0"
    "durationIfPlanetChange\0setCurrentProjectionType\0"
    "ProjectionType\0type\0getCurrentProjectionType\0"
    "getCurrentProjectionTypeKey\0"
    "setCurrentProjectionTypeKey\0"
    "getCurrentProjectionNameI18n\0"
    "getAllProjectionTypeKeys\0"
    "setCurrentDeltaTAlgorithm\0DeltaTAlgorithm\0"
    "algorithm\0getCurrentDeltaTAlgorithm\0"
    "getCurrentDeltaTAlgorithmDescription\0"
    "getCurrentDeltaTAlgorithmKey\0"
    "setCurrentDeltaTAlgorithmKey\0setMaskType\0"
    "StelProjector::StelProjectorMaskType\0"
    "m\0setFlagGravityLabels\0gravity\0"
    "setDefaultAngleForGravityText\0a\0"
    "setFlipHorz\0flip\0setFlipVert\0getFlipHorz\0"
    "getFlipVert\0getViewportHorizontalOffset\0"
    "setViewportHorizontalOffset\0newOffsetPct\0"
    "getViewportVerticalOffset\0"
    "setViewportVerticalOffset\0setViewportOffset\0"
    "newHorizontalOffsetPct\0newVerticalOffsetPct\0"
    "setViewportStretch\0stretch\0"
    "getDefaultLocationID\0setDefaultLocationID\0"
    "id\0returnToDefaultLocation\0returnToHome\0"
    "getJDOfLastJDUpdate\0setMilliSecondsOfLastJDUpdate\0"
    "millis\0getMilliSecondsOfLastJDUpdate\0"
    "setJD\0newJD\0setJDE\0newJDE\0getJD\0getJDE\0"
    "getSolutionEquationOfTime\0JDE\0getUseDST\0"
    "setUseDST\0setMJDay\0MJD\0getMJDay\0"
    "computeDeltaT\0JD\0getDeltaT\0getUseNutation\0"
    "setUseNutation\0use\0getUseTopocentricCoordinates\0"
    "setUseTopocentricCoordinates\0"
    "getPresetSkyTime\0setPresetSkyTime\0d\0"
    "setTimeRate\0ts\0getTimeRate\0"
    "revertTimeDirection\0increaseTimeSpeed\0"
    "decreaseTimeSpeed\0increaseTimeSpeedLess\0"
    "decreaseTimeSpeedLess\0setZeroTimeSpeed\0"
    "setRealTimeSpeed\0toggleRealTimeSpeed\0"
    "getRealTimeSpeed\0setTimeNow\0setTodayTime\0"
    "getIsTimeNow\0getInitTodayTime\0"
    "setInitTodayTime\0time\0dateTime\0addMinute\0"
    "addHour\0addDay\0addWeek\0addSiderealDay\0"
    "addSiderealYear\0addSiderealYears\0n\0"
    "subtractMinute\0subtractHour\0subtractDay\0"
    "subtractWeek\0subtractSiderealDay\0"
    "subtractSiderealYear\0subtractSiderealYears\0"
    "addSynodicMonth\0addDraconicYear\0"
    "addDraconicMonth\0addAnomalisticMonth\0"
    "addAnomalisticYear\0addAnomalisticYears\0"
    "addMeanTropicalMonth\0addMeanTropicalYear\0"
    "addMeanTropicalYears\0addTropicalYear\0"
    "addJulianYear\0addJulianYears\0"
    "addGaussianYear\0subtractSynodicMonth\0"
    "subtractDraconicYear\0subtractDraconicMonth\0"
    "subtractAnomalisticMonth\0"
    "subtractAnomalisticYear\0"
    "subtractAnomalisticYears\0"
    "subtractMeanTropicalMonth\0"
    "subtractMeanTropicalYear\0"
    "subtractMeanTropicalYears\0"
    "subtractTropicalYear\0subtractJulianYear\0"
    "subtractJulianYears\0subtractGaussianYear\0"
    "addSolarDays\0addSiderealDays\0"
    "moveObserverToSelected\0setDeltaTCustomYear\0"
    "y\0setDeltaTCustomNDot\0v\0"
    "setDeltaTCustomEquationCoefficients\0"
    "Vec3f\0c\0getDeltaTCustomYear\0"
    "getDeltaTCustomNDot\0"
    "getDeltaTCustomEquationCoefficients\0"
    "initEphemeridesFunctions\0de430IsAvailable\0"
    "de431IsAvailable\0de430IsActive\0"
    "de431IsActive\0setDe430Active\0status\0"
    "setDe431Active\0getIAUConstellation\0"
    "Vec3d\0positionJ2000\0flipHorz\0flipVert\0"
    "flagUseNutation\0flagUseTopocentricCoordinates\0"
    "currentProjectionType\0currentProjectionTypeKey\0"
    "currentProjectionNameI18n\0FrameType\0"
    "FrameUninitialized\0FrameAltAz\0"
    "FrameHeliocentricEclipticJ2000\0"
    "FrameObservercentricEclipticJ2000\0"
    "FrameObservercentricEclipticOfDate\0"
    "FrameEquinoxEqu\0FrameJ2000\0FrameGalactic\0"
    "FrameSupergalactic\0ProjectionPerspective\0"
    "ProjectionStereographic\0ProjectionFisheye\0"
    "ProjectionOrthographic\0ProjectionEqualArea\0"
    "ProjectionHammer\0ProjectionSinusoidal\0"
    "ProjectionMercator\0ProjectionMiller\0"
    "ProjectionCylinder\0RefractionMode\0"
    "RefractionAuto\0RefractionOn\0RefractionOff\0"
    "WithoutCorrection\0Schoch\0Clemence\0IAU\0"
    "AstronomicalEphemeris\0TuckermanGoldstine\0"
    "MullerStephenson\0Stephenson1978\0"
    "SchmadelZech1979\0MorrisonStephenson1982\0"
    "StephensonMorrison1984\0StephensonHoulden\0"
    "Espenak\0Borkowski\0SchmadelZech1988\0"
    "ChaprontTouze\0StephensonMorrison1995\0"
    "Stephenson1997\0ChaprontMeeus\0JPLHorizons\0"
    "MeeusSimons\0MontenbruckPfleger\0"
    "ReingoldDershowitz\0MorrisonStephenson2004\0"
    "Reijs\0EspenakMeeus\0EspenakMeeusZeroMoonAccel\0"
    "Banjevic\0IslamSadiqQureshi\0"
    "KhalidSultanaZaidi\0Custom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelCore[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     144,   14, // methods
       7, 1000, // properties
       4, 1028, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  734,    2, 0x06 /* Public */,
       4,    1,  737,    2, 0x06 /* Public */,
       6,    1,  740,    2, 0x06 /* Public */,
       8,    0,  743,    2, 0x06 /* Public */,
       9,    1,  744,    2, 0x06 /* Public */,
      11,    1,  747,    2, 0x06 /* Public */,
      12,    1,  750,    2, 0x06 /* Public */,
      13,    1,  753,    2, 0x06 /* Public */,
      14,    1,  756,    2, 0x06 /* Public */,
      17,    1,  759,    2, 0x06 /* Public */,
      19,    1,  762,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    3,  765,    2, 0x0a /* Public */,
      20,    2,  772,    2, 0x2a /* Public | MethodCloned */,
      20,    1,  777,    2, 0x2a /* Public | MethodCloned */,
      24,    1,  780,    2, 0x0a /* Public */,
      27,    0,  783,    2, 0x0a /* Public */,
      28,    0,  784,    2, 0x0a /* Public */,
      29,    1,  785,    2, 0x0a /* Public */,
      30,    0,  788,    2, 0x0a /* Public */,
      31,    0,  789,    2, 0x0a /* Public */,
      32,    1,  790,    2, 0x0a /* Public */,
      35,    0,  793,    2, 0x0a /* Public */,
      36,    0,  794,    2, 0x0a /* Public */,
      37,    0,  795,    2, 0x0a /* Public */,
      38,    1,  796,    2, 0x0a /* Public */,
      39,    1,  799,    2, 0x0a /* Public */,
      42,    1,  802,    2, 0x0a /* Public */,
      44,    1,  805,    2, 0x0a /* Public */,
      46,    1,  808,    2, 0x0a /* Public */,
      48,    1,  811,    2, 0x0a /* Public */,
      49,    0,  814,    2, 0x0a /* Public */,
      50,    0,  815,    2, 0x0a /* Public */,
      51,    0,  816,    2, 0x0a /* Public */,
      52,    1,  817,    2, 0x0a /* Public */,
      54,    0,  820,    2, 0x0a /* Public */,
      55,    1,  821,    2, 0x0a /* Public */,
      56,    2,  824,    2, 0x0a /* Public */,
      59,    1,  829,    2, 0x0a /* Public */,
      61,    0,  832,    2, 0x0a /* Public */,
      62,    1,  833,    2, 0x0a /* Public */,
      64,    0,  836,    2, 0x0a /* Public */,
      65,    0,  837,    2, 0x0a /* Public */,
      66,    0,  838,    2, 0x0a /* Public */,
      67,    1,  839,    2, 0x0a /* Public */,
      69,    0,  842,    2, 0x0a /* Public */,
      70,    1,  843,    2, 0x0a /* Public */,
      72,    1,  846,    2, 0x0a /* Public */,
      74,    0,  849,    2, 0x0a /* Public */,
      75,    0,  850,    2, 0x0a /* Public */,
      76,    1,  851,    2, 0x0a /* Public */,
      78,    0,  854,    2, 0x0a /* Public */,
      79,    1,  855,    2, 0x0a /* Public */,
      80,    1,  858,    2, 0x0a /* Public */,
      82,    0,  861,    2, 0x0a /* Public */,
      83,    1,  862,    2, 0x0a /* Public */,
      85,    0,  865,    2, 0x0a /* Public */,
      86,    0,  866,    2, 0x0a /* Public */,
      87,    1,  867,    2, 0x0a /* Public */,
      89,    0,  870,    2, 0x0a /* Public */,
      90,    1,  871,    2, 0x0a /* Public */,
      91,    0,  874,    2, 0x0a /* Public */,
      92,    1,  875,    2, 0x0a /* Public */,
      94,    1,  878,    2, 0x0a /* Public */,
      96,    0,  881,    2, 0x0a /* Public */,
      97,    0,  882,    2, 0x0a /* Public */,
      98,    0,  883,    2, 0x0a /* Public */,
      99,    0,  884,    2, 0x0a /* Public */,
     100,    0,  885,    2, 0x0a /* Public */,
     101,    0,  886,    2, 0x0a /* Public */,
     102,    0,  887,    2, 0x0a /* Public */,
     103,    0,  888,    2, 0x0a /* Public */,
     104,    0,  889,    2, 0x0a /* Public */,
     105,    0,  890,    2, 0x0a /* Public */,
     106,    0,  891,    2, 0x0a /* Public */,
     107,    1,  892,    2, 0x0a /* Public */,
     108,    0,  895,    2, 0x0a /* Public */,
     109,    0,  896,    2, 0x0a /* Public */,
     110,    1,  897,    2, 0x0a /* Public */,
      92,    1,  900,    2, 0x0a /* Public */,
     113,    0,  903,    2, 0x0a /* Public */,
     114,    0,  904,    2, 0x0a /* Public */,
     115,    0,  905,    2, 0x0a /* Public */,
     116,    0,  906,    2, 0x0a /* Public */,
     117,    0,  907,    2, 0x0a /* Public */,
     118,    0,  908,    2, 0x0a /* Public */,
     119,    1,  909,    2, 0x0a /* Public */,
     119,    0,  912,    2, 0x2a /* Public | MethodCloned */,
     121,    0,  913,    2, 0x0a /* Public */,
     122,    0,  914,    2, 0x0a /* Public */,
     123,    0,  915,    2, 0x0a /* Public */,
     124,    0,  916,    2, 0x0a /* Public */,
     125,    0,  917,    2, 0x0a /* Public */,
     126,    0,  918,    2, 0x0a /* Public */,
     127,    1,  919,    2, 0x0a /* Public */,
     127,    0,  922,    2, 0x2a /* Public | MethodCloned */,
     128,    0,  923,    2, 0x0a /* Public */,
     129,    0,  924,    2, 0x0a /* Public */,
     130,    0,  925,    2, 0x0a /* Public */,
     131,    0,  926,    2, 0x0a /* Public */,
     132,    0,  927,    2, 0x0a /* Public */,
     133,    1,  928,    2, 0x0a /* Public */,
     133,    0,  931,    2, 0x2a /* Public | MethodCloned */,
     134,    0,  932,    2, 0x0a /* Public */,
     135,    0,  933,    2, 0x0a /* Public */,
     136,    1,  934,    2, 0x0a /* Public */,
     136,    0,  937,    2, 0x2a /* Public | MethodCloned */,
     137,    0,  938,    2, 0x0a /* Public */,
     138,    0,  939,    2, 0x0a /* Public */,
     139,    1,  940,    2, 0x0a /* Public */,
     139,    0,  943,    2, 0x2a /* Public | MethodCloned */,
     140,    0,  944,    2, 0x0a /* Public */,
     141,    0,  945,    2, 0x0a /* Public */,
     142,    0,  946,    2, 0x0a /* Public */,
     143,    0,  947,    2, 0x0a /* Public */,
     144,    0,  948,    2, 0x0a /* Public */,
     145,    0,  949,    2, 0x0a /* Public */,
     146,    1,  950,    2, 0x0a /* Public */,
     146,    0,  953,    2, 0x2a /* Public | MethodCloned */,
     147,    0,  954,    2, 0x0a /* Public */,
     148,    0,  955,    2, 0x0a /* Public */,
     149,    1,  956,    2, 0x0a /* Public */,
     149,    0,  959,    2, 0x2a /* Public | MethodCloned */,
     150,    0,  960,    2, 0x0a /* Public */,
     151,    0,  961,    2, 0x0a /* Public */,
     152,    1,  962,    2, 0x0a /* Public */,
     152,    0,  965,    2, 0x2a /* Public | MethodCloned */,
     153,    0,  966,    2, 0x0a /* Public */,
     154,    1,  967,    2, 0x0a /* Public */,
     155,    1,  970,    2, 0x0a /* Public */,
     156,    0,  973,    2, 0x0a /* Public */,
     157,    1,  974,    2, 0x0a /* Public */,
     159,    1,  977,    2, 0x0a /* Public */,
     161,    1,  980,    2, 0x0a /* Public */,
     164,    0,  983,    2, 0x0a /* Public */,
     165,    0,  984,    2, 0x0a /* Public */,
     166,    0,  985,    2, 0x0a /* Public */,
     167,    0,  986,    2, 0x0a /* Public */,
     168,    0,  987,    2, 0x0a /* Public */,
     169,    0,  988,    2, 0x0a /* Public */,
     170,    0,  989,    2, 0x0a /* Public */,
     171,    0,  990,    2, 0x0a /* Public */,
     172,    1,  991,    2, 0x0a /* Public */,
     174,    1,  994,    2, 0x0a /* Public */,
     175,    1,  997,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double,   21,   22,   23,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,   21,   22,
    QMetaType::Void, 0x80000000 | 3,   21,
    QMetaType::Void, 0x80000000 | 25,   26,
    0x80000000 | 25,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::QString,
    QMetaType::QStringList,
    QMetaType::Void, 0x80000000 | 33,   34,
    0x80000000 | 33,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Float,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   53,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   53,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   57,   58,
    QMetaType::Void, QMetaType::Float,   60,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Void, QMetaType::LongLong,   68,
    QMetaType::LongLong,
    QMetaType::Void, QMetaType::Double,   71,
    QMetaType::Void, QMetaType::Double,   73,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double, QMetaType::Double,   77,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Double,   81,
    QMetaType::Double,
    QMetaType::Double, QMetaType::Double,   84,
    QMetaType::Double,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   88,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   88,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   93,
    QMetaType::Void, QMetaType::Double,   95,
    QMetaType::Double,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QTime,   21,
    QMetaType::Bool,
    QMetaType::QTime,
    QMetaType::Void, QMetaType::QTime,  111,
    QMetaType::Void, QMetaType::QDateTime,  112,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,  120,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,  120,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,  120,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,  120,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,  120,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,  120,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,  120,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,  120,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   93,
    QMetaType::Void, QMetaType::Double,   93,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,  158,
    QMetaType::Void, QMetaType::Float,  160,
    QMetaType::Void, 0x80000000 | 162,  163,
    QMetaType::Float,
    QMetaType::Float,
    0x80000000 | 162,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  173,
    QMetaType::Void, QMetaType::Bool,  173,
    QMetaType::QString, 0x80000000 | 176,  177,

 // properties: name, type, flags
     178, QMetaType::Bool, 0x00495103,
     179, QMetaType::Bool, 0x00495103,
     180, QMetaType::Bool, 0x00495003,
     181, QMetaType::Bool, 0x00495003,
     182, 0x80000000 | 25, 0x0049510b,
     183, QMetaType::QString, 0x00485103,
     184, QMetaType::QString, 0x00485001,

 // properties: notify_signal_id
       4,
       5,
       6,
       7,
       8,
       9,
      10,

 // enums: name, flags, count, data
     185, 0x0,    9, 1044,
      25, 0x0,   10, 1062,
     205, 0x0,    3, 1082,
      33, 0x0,   31, 1088,

 // enum data: key, value
     186, uint(StelCore::FrameUninitialized),
     187, uint(StelCore::FrameAltAz),
     188, uint(StelCore::FrameHeliocentricEclipticJ2000),
     189, uint(StelCore::FrameObservercentricEclipticJ2000),
     190, uint(StelCore::FrameObservercentricEclipticOfDate),
     191, uint(StelCore::FrameEquinoxEqu),
     192, uint(StelCore::FrameJ2000),
     193, uint(StelCore::FrameGalactic),
     194, uint(StelCore::FrameSupergalactic),
     195, uint(StelCore::ProjectionPerspective),
     196, uint(StelCore::ProjectionStereographic),
     197, uint(StelCore::ProjectionFisheye),
     198, uint(StelCore::ProjectionOrthographic),
     199, uint(StelCore::ProjectionEqualArea),
     200, uint(StelCore::ProjectionHammer),
     201, uint(StelCore::ProjectionSinusoidal),
     202, uint(StelCore::ProjectionMercator),
     203, uint(StelCore::ProjectionMiller),
     204, uint(StelCore::ProjectionCylinder),
     206, uint(StelCore::RefractionAuto),
     207, uint(StelCore::RefractionOn),
     208, uint(StelCore::RefractionOff),
     209, uint(StelCore::WithoutCorrection),
     210, uint(StelCore::Schoch),
     211, uint(StelCore::Clemence),
     212, uint(StelCore::IAU),
     213, uint(StelCore::AstronomicalEphemeris),
     214, uint(StelCore::TuckermanGoldstine),
     215, uint(StelCore::MullerStephenson),
     216, uint(StelCore::Stephenson1978),
     217, uint(StelCore::SchmadelZech1979),
     218, uint(StelCore::MorrisonStephenson1982),
     219, uint(StelCore::StephensonMorrison1984),
     220, uint(StelCore::StephensonHoulden),
     221, uint(StelCore::Espenak),
     222, uint(StelCore::Borkowski),
     223, uint(StelCore::SchmadelZech1988),
     224, uint(StelCore::ChaprontTouze),
     225, uint(StelCore::StephensonMorrison1995),
     226, uint(StelCore::Stephenson1997),
     227, uint(StelCore::ChaprontMeeus),
     228, uint(StelCore::JPLHorizons),
     229, uint(StelCore::MeeusSimons),
     230, uint(StelCore::MontenbruckPfleger),
     231, uint(StelCore::ReingoldDershowitz),
     232, uint(StelCore::MorrisonStephenson2004),
     233, uint(StelCore::Reijs),
     234, uint(StelCore::EspenakMeeus),
     235, uint(StelCore::EspenakMeeusZeroMoonAccel),
     236, uint(StelCore::Banjevic),
     237, uint(StelCore::IslamSadiqQureshi),
     238, uint(StelCore::KhalidSultanaZaidi),
     239, uint(StelCore::Custom),

       0        // eod
};

void StelCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelCore *_t = static_cast<StelCore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->locationChanged((*reinterpret_cast< StelLocation(*)>(_a[1]))); break;
        case 1: _t->timeRateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->timeSyncOccurred((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->dateChanged(); break;
        case 4: _t->flipHorzChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->flipVertChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->flagUseNutationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->flagUseTopocentricCoordinatesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->currentProjectionTypeChanged((*reinterpret_cast< StelCore::ProjectionType(*)>(_a[1]))); break;
        case 9: _t->currentProjectionTypeKeyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->currentProjectionNameI18nChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->moveObserverTo((*reinterpret_cast< const StelLocation(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 12: _t->moveObserverTo((*reinterpret_cast< const StelLocation(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 13: _t->moveObserverTo((*reinterpret_cast< const StelLocation(*)>(_a[1]))); break;
        case 14: _t->setCurrentProjectionType((*reinterpret_cast< ProjectionType(*)>(_a[1]))); break;
        case 15: { ProjectionType _r = _t->getCurrentProjectionType();
            if (_a[0]) *reinterpret_cast< ProjectionType*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->getCurrentProjectionTypeKey();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: _t->setCurrentProjectionTypeKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: { QString _r = _t->getCurrentProjectionNameI18n();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { QStringList _r = _t->getAllProjectionTypeKeys();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 20: _t->setCurrentDeltaTAlgorithm((*reinterpret_cast< DeltaTAlgorithm(*)>(_a[1]))); break;
        case 21: { DeltaTAlgorithm _r = _t->getCurrentDeltaTAlgorithm();
            if (_a[0]) *reinterpret_cast< DeltaTAlgorithm*>(_a[0]) = _r; }  break;
        case 22: { QString _r = _t->getCurrentDeltaTAlgorithmDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->getCurrentDeltaTAlgorithmKey();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: _t->setCurrentDeltaTAlgorithmKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->setMaskType((*reinterpret_cast< StelProjector::StelProjectorMaskType(*)>(_a[1]))); break;
        case 26: _t->setFlagGravityLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->setDefaultAngleForGravityText((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->setFlipHorz((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->setFlipVert((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: { bool _r = _t->getFlipHorz();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->getFlipVert();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { double _r = _t->getViewportHorizontalOffset();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 33: _t->setViewportHorizontalOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 34: { double _r = _t->getViewportVerticalOffset();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 35: _t->setViewportVerticalOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 36: _t->setViewportOffset((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 37: _t->setViewportStretch((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: { QString _r = _t->getDefaultLocationID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 39: _t->setDefaultLocationID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->returnToDefaultLocation(); break;
        case 41: _t->returnToHome(); break;
        case 42: { double _r = _t->getJDOfLastJDUpdate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 43: _t->setMilliSecondsOfLastJDUpdate((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 44: { qint64 _r = _t->getMilliSecondsOfLastJDUpdate();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 45: _t->setJD((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 46: _t->setJDE((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 47: { double _r = _t->getJD();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 48: { double _r = _t->getJDE();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 49: { double _r = _t->getSolutionEquationOfTime((*reinterpret_cast< const double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->getUseDST();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: _t->setUseDST((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 52: _t->setMJDay((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 53: { double _r = _t->getMJDay();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 54: { double _r = _t->computeDeltaT((*reinterpret_cast< const double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 55: { double _r = _t->getDeltaT();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 56: { bool _r = _t->getUseNutation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 57: _t->setUseNutation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: { bool _r = _t->getUseTopocentricCoordinates();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 59: _t->setUseTopocentricCoordinates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: { double _r = _t->getPresetSkyTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 61: _t->setPresetSkyTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 62: _t->setTimeRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 63: { double _r = _t->getTimeRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 64: _t->revertTimeDirection(); break;
        case 65: _t->increaseTimeSpeed(); break;
        case 66: _t->decreaseTimeSpeed(); break;
        case 67: _t->increaseTimeSpeedLess(); break;
        case 68: _t->decreaseTimeSpeedLess(); break;
        case 69: _t->setZeroTimeSpeed(); break;
        case 70: _t->setRealTimeSpeed(); break;
        case 71: _t->toggleRealTimeSpeed(); break;
        case 72: { bool _r = _t->getRealTimeSpeed();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 73: _t->setTimeNow(); break;
        case 74: _t->setTodayTime((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 75: { bool _r = _t->getIsTimeNow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 76: { QTime _r = _t->getInitTodayTime();
            if (_a[0]) *reinterpret_cast< QTime*>(_a[0]) = _r; }  break;
        case 77: _t->setInitTodayTime((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 78: _t->setPresetSkyTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 79: _t->addMinute(); break;
        case 80: _t->addHour(); break;
        case 81: _t->addDay(); break;
        case 82: _t->addWeek(); break;
        case 83: _t->addSiderealDay(); break;
        case 84: _t->addSiderealYear(); break;
        case 85: _t->addSiderealYears((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 86: _t->addSiderealYears(); break;
        case 87: _t->subtractMinute(); break;
        case 88: _t->subtractHour(); break;
        case 89: _t->subtractDay(); break;
        case 90: _t->subtractWeek(); break;
        case 91: _t->subtractSiderealDay(); break;
        case 92: _t->subtractSiderealYear(); break;
        case 93: _t->subtractSiderealYears((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 94: _t->subtractSiderealYears(); break;
        case 95: _t->addSynodicMonth(); break;
        case 96: _t->addDraconicYear(); break;
        case 97: _t->addDraconicMonth(); break;
        case 98: _t->addAnomalisticMonth(); break;
        case 99: _t->addAnomalisticYear(); break;
        case 100: _t->addAnomalisticYears((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 101: _t->addAnomalisticYears(); break;
        case 102: _t->addMeanTropicalMonth(); break;
        case 103: _t->addMeanTropicalYear(); break;
        case 104: _t->addMeanTropicalYears((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 105: _t->addMeanTropicalYears(); break;
        case 106: _t->addTropicalYear(); break;
        case 107: _t->addJulianYear(); break;
        case 108: _t->addJulianYears((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 109: _t->addJulianYears(); break;
        case 110: _t->addGaussianYear(); break;
        case 111: _t->subtractSynodicMonth(); break;
        case 112: _t->subtractDraconicYear(); break;
        case 113: _t->subtractDraconicMonth(); break;
        case 114: _t->subtractAnomalisticMonth(); break;
        case 115: _t->subtractAnomalisticYear(); break;
        case 116: _t->subtractAnomalisticYears((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 117: _t->subtractAnomalisticYears(); break;
        case 118: _t->subtractMeanTropicalMonth(); break;
        case 119: _t->subtractMeanTropicalYear(); break;
        case 120: _t->subtractMeanTropicalYears((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 121: _t->subtractMeanTropicalYears(); break;
        case 122: _t->subtractTropicalYear(); break;
        case 123: _t->subtractJulianYear(); break;
        case 124: _t->subtractJulianYears((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 125: _t->subtractJulianYears(); break;
        case 126: _t->subtractGaussianYear(); break;
        case 127: _t->addSolarDays((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 128: _t->addSiderealDays((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 129: _t->moveObserverToSelected(); break;
        case 130: _t->setDeltaTCustomYear((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 131: _t->setDeltaTCustomNDot((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 132: _t->setDeltaTCustomEquationCoefficients((*reinterpret_cast< Vec3f(*)>(_a[1]))); break;
        case 133: { float _r = _t->getDeltaTCustomYear();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 134: { float _r = _t->getDeltaTCustomNDot();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 135: { Vec3f _r = _t->getDeltaTCustomEquationCoefficients();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 136: _t->initEphemeridesFunctions(); break;
        case 137: { bool _r = _t->de430IsAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 138: { bool _r = _t->de431IsAvailable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 139: { bool _r = _t->de430IsActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 140: { bool _r = _t->de431IsActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 141: _t->setDe430Active((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 142: _t->setDe431Active((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 143: { QString _r = _t->getIAUConstellation((*reinterpret_cast< const Vec3d(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StelLocation >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StelLocation >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StelLocation >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StelLocation >(); break;
            }
            break;
        case 132:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 143:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3d >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelCore::*_t)(StelLocation );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelCore::locationChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (StelCore::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelCore::timeRateChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (StelCore::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelCore::timeSyncOccurred)) {
                *result = 2;
            }
        }
        {
            typedef void (StelCore::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelCore::dateChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (StelCore::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelCore::flipHorzChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (StelCore::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelCore::flipVertChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (StelCore::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelCore::flagUseNutationChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (StelCore::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelCore::flagUseTopocentricCoordinatesChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (StelCore::*_t)(StelCore::ProjectionType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelCore::currentProjectionTypeChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (StelCore::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelCore::currentProjectionTypeKeyChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (StelCore::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelCore::currentProjectionNameI18nChanged)) {
                *result = 10;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StelCore *_t = static_cast<StelCore *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getFlipHorz(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getFlipVert(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getUseNutation(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getUseTopocentricCoordinates(); break;
        case 4: *reinterpret_cast< ProjectionType*>(_v) = _t->getCurrentProjectionType(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getCurrentProjectionTypeKey(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getCurrentProjectionNameI18n(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        StelCore *_t = static_cast<StelCore *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlipHorz(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setFlipVert(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setUseNutation(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setUseTopocentricCoordinates(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setCurrentProjectionType(*reinterpret_cast< ProjectionType*>(_v)); break;
        case 5: _t->setCurrentProjectionTypeKey(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject StelCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelCore.data,
      qt_meta_data_StelCore,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelCore::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelCore.stringdata0))
        return static_cast<void*>(const_cast< StelCore*>(this));
    return QObject::qt_metacast(_clname);
}

int StelCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 144)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 144;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 144)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 144;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StelCore::locationChanged(StelLocation _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StelCore::timeRateChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StelCore::timeSyncOccurred(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StelCore::dateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void StelCore::flipHorzChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StelCore::flipVertChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StelCore::flagUseNutationChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StelCore::flagUseTopocentricCoordinatesChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void StelCore::currentProjectionTypeChanged(StelCore::ProjectionType _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void StelCore::currentProjectionTypeKeyChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void StelCore::currentProjectionNameI18nChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
