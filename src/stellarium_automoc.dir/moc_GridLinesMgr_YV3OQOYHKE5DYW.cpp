/****************************************************************************
** Meta object code from reading C++ file 'GridLinesMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/modules/GridLinesMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GridLinesMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GridLinesMgr_t {
    QByteArrayData data[240];
    char stringdata0[5890];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GridLinesMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GridLinesMgr_t qt_meta_stringdata_GridLinesMgr = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GridLinesMgr"
QT_MOC_LITERAL(1, 13, 29), // "azimuthalGridDisplayedChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 25), // "azimuthalGridColorChanged"
QT_MOC_LITERAL(4, 70, 5), // "Vec3f"
QT_MOC_LITERAL(5, 76, 8), // "newColor"
QT_MOC_LITERAL(6, 85, 27), // "equatorGridDisplayedChanged"
QT_MOC_LITERAL(7, 113, 9), // "displayed"
QT_MOC_LITERAL(8, 123, 23), // "equatorGridColorChanged"
QT_MOC_LITERAL(9, 147, 32), // "equatorJ2000GridDisplayedChanged"
QT_MOC_LITERAL(10, 180, 28), // "equatorJ2000GridColorChanged"
QT_MOC_LITERAL(11, 209, 28), // "eclipticGridDisplayedChanged"
QT_MOC_LITERAL(12, 238, 24), // "eclipticGridColorChanged"
QT_MOC_LITERAL(13, 263, 33), // "eclipticJ2000GridDisplayedCha..."
QT_MOC_LITERAL(14, 297, 29), // "eclipticJ2000GridColorChanged"
QT_MOC_LITERAL(15, 327, 28), // "galacticGridDisplayedChanged"
QT_MOC_LITERAL(16, 356, 24), // "galacticGridColorChanged"
QT_MOC_LITERAL(17, 381, 33), // "supergalacticGridDisplayedCha..."
QT_MOC_LITERAL(18, 415, 29), // "supergalacticGridColorChanged"
QT_MOC_LITERAL(19, 445, 27), // "equatorLineDisplayedChanged"
QT_MOC_LITERAL(20, 473, 23), // "equatorLineColorChanged"
QT_MOC_LITERAL(21, 497, 32), // "equatorJ2000LineDisplayedChanged"
QT_MOC_LITERAL(22, 530, 28), // "equatorJ2000LineColorChanged"
QT_MOC_LITERAL(23, 559, 28), // "eclipticLineDisplayedChanged"
QT_MOC_LITERAL(24, 588, 24), // "eclipticLineColorChanged"
QT_MOC_LITERAL(25, 613, 33), // "eclipticJ2000LineDisplayedCha..."
QT_MOC_LITERAL(26, 647, 29), // "eclipticJ2000LineColorChanged"
QT_MOC_LITERAL(27, 677, 33), // "precessionCirclesDisplayedCha..."
QT_MOC_LITERAL(28, 711, 29), // "precessionCirclesColorChanged"
QT_MOC_LITERAL(29, 741, 28), // "meridianLineDisplayedChanged"
QT_MOC_LITERAL(30, 770, 24), // "meridianLineColorChanged"
QT_MOC_LITERAL(31, 795, 29), // "longitudeLineDisplayedChanged"
QT_MOC_LITERAL(32, 825, 25), // "longitudeLineColorChanged"
QT_MOC_LITERAL(33, 851, 27), // "horizonLineDisplayedChanged"
QT_MOC_LITERAL(34, 879, 23), // "horizonLineColorChanged"
QT_MOC_LITERAL(35, 903, 35), // "galacticEquatorLineDisplayedC..."
QT_MOC_LITERAL(36, 939, 31), // "galacticEquatorLineColorChanged"
QT_MOC_LITERAL(37, 971, 40), // "supergalacticEquatorLineDispl..."
QT_MOC_LITERAL(38, 1012, 36), // "supergalacticEquatorLineColor..."
QT_MOC_LITERAL(39, 1049, 33), // "primeVerticalLineDisplayedCha..."
QT_MOC_LITERAL(40, 1083, 29), // "primeVerticalLineColorChanged"
QT_MOC_LITERAL(41, 1113, 27), // "colureLinesDisplayedChanged"
QT_MOC_LITERAL(42, 1141, 23), // "colureLinesColorChanged"
QT_MOC_LITERAL(43, 1165, 34), // "circumpolarCirclesDisplayedCh..."
QT_MOC_LITERAL(44, 1200, 30), // "circumpolarCirclesColorChanged"
QT_MOC_LITERAL(45, 1231, 35), // "celestialJ2000PolesDisplayedC..."
QT_MOC_LITERAL(46, 1267, 31), // "celestialJ2000PolesColorChanged"
QT_MOC_LITERAL(47, 1299, 30), // "celestialPolesDisplayedChanged"
QT_MOC_LITERAL(48, 1330, 26), // "celestialPolesColorChanged"
QT_MOC_LITERAL(49, 1357, 27), // "zenithNadirDisplayedChanged"
QT_MOC_LITERAL(50, 1385, 23), // "zenithNadirColorChanged"
QT_MOC_LITERAL(51, 1409, 34), // "eclipticJ2000PolesDisplayedCh..."
QT_MOC_LITERAL(52, 1444, 30), // "eclipticJ2000PolesColorChanged"
QT_MOC_LITERAL(53, 1475, 29), // "eclipticPolesDisplayedChanged"
QT_MOC_LITERAL(54, 1505, 25), // "eclipticPolesColorChanged"
QT_MOC_LITERAL(55, 1531, 29), // "galacticPolesDisplayedChanged"
QT_MOC_LITERAL(56, 1561, 25), // "galacticPolesColorChanged"
QT_MOC_LITERAL(57, 1587, 34), // "supergalacticPolesDisplayedCh..."
QT_MOC_LITERAL(58, 1622, 30), // "supergalacticPolesColorChanged"
QT_MOC_LITERAL(59, 1653, 34), // "equinoxJ2000PointsDisplayedCh..."
QT_MOC_LITERAL(60, 1688, 30), // "equinoxJ2000PointsColorChanged"
QT_MOC_LITERAL(61, 1719, 29), // "equinoxPointsDisplayedChanged"
QT_MOC_LITERAL(62, 1749, 25), // "equinoxPointsColorChanged"
QT_MOC_LITERAL(63, 1775, 20), // "setFlagAzimuthalGrid"
QT_MOC_LITERAL(64, 1796, 20), // "getFlagAzimuthalGrid"
QT_MOC_LITERAL(65, 1817, 21), // "getColorAzimuthalGrid"
QT_MOC_LITERAL(66, 1839, 21), // "setColorAzimuthalGrid"
QT_MOC_LITERAL(67, 1861, 18), // "setFlagEquatorGrid"
QT_MOC_LITERAL(68, 1880, 18), // "getFlagEquatorGrid"
QT_MOC_LITERAL(69, 1899, 19), // "getColorEquatorGrid"
QT_MOC_LITERAL(70, 1919, 19), // "setColorEquatorGrid"
QT_MOC_LITERAL(71, 1939, 23), // "setFlagEquatorJ2000Grid"
QT_MOC_LITERAL(72, 1963, 23), // "getFlagEquatorJ2000Grid"
QT_MOC_LITERAL(73, 1987, 24), // "getColorEquatorJ2000Grid"
QT_MOC_LITERAL(74, 2012, 24), // "setColorEquatorJ2000Grid"
QT_MOC_LITERAL(75, 2037, 24), // "setFlagEclipticJ2000Grid"
QT_MOC_LITERAL(76, 2062, 24), // "getFlagEclipticJ2000Grid"
QT_MOC_LITERAL(77, 2087, 25), // "getColorEclipticJ2000Grid"
QT_MOC_LITERAL(78, 2113, 25), // "setColorEclipticJ2000Grid"
QT_MOC_LITERAL(79, 2139, 19), // "setFlagEclipticGrid"
QT_MOC_LITERAL(80, 2159, 19), // "getFlagEclipticGrid"
QT_MOC_LITERAL(81, 2179, 20), // "getColorEclipticGrid"
QT_MOC_LITERAL(82, 2200, 20), // "setColorEclipticGrid"
QT_MOC_LITERAL(83, 2221, 19), // "setFlagGalacticGrid"
QT_MOC_LITERAL(84, 2241, 19), // "getFlagGalacticGrid"
QT_MOC_LITERAL(85, 2261, 20), // "getColorGalacticGrid"
QT_MOC_LITERAL(86, 2282, 20), // "setColorGalacticGrid"
QT_MOC_LITERAL(87, 2303, 24), // "setFlagSupergalacticGrid"
QT_MOC_LITERAL(88, 2328, 24), // "getFlagSupergalacticGrid"
QT_MOC_LITERAL(89, 2353, 25), // "getColorSupergalacticGrid"
QT_MOC_LITERAL(90, 2379, 25), // "setColorSupergalacticGrid"
QT_MOC_LITERAL(91, 2405, 18), // "setFlagEquatorLine"
QT_MOC_LITERAL(92, 2424, 18), // "getFlagEquatorLine"
QT_MOC_LITERAL(93, 2443, 19), // "getColorEquatorLine"
QT_MOC_LITERAL(94, 2463, 19), // "setColorEquatorLine"
QT_MOC_LITERAL(95, 2483, 23), // "setFlagEquatorJ2000Line"
QT_MOC_LITERAL(96, 2507, 23), // "getFlagEquatorJ2000Line"
QT_MOC_LITERAL(97, 2531, 24), // "getColorEquatorJ2000Line"
QT_MOC_LITERAL(98, 2556, 24), // "setColorEquatorJ2000Line"
QT_MOC_LITERAL(99, 2581, 24), // "setFlagEclipticJ2000Line"
QT_MOC_LITERAL(100, 2606, 24), // "getFlagEclipticJ2000Line"
QT_MOC_LITERAL(101, 2631, 25), // "getColorEclipticJ2000Line"
QT_MOC_LITERAL(102, 2657, 25), // "setColorEclipticJ2000Line"
QT_MOC_LITERAL(103, 2683, 19), // "setFlagEclipticLine"
QT_MOC_LITERAL(104, 2703, 19), // "getFlagEclipticLine"
QT_MOC_LITERAL(105, 2723, 20), // "getColorEclipticLine"
QT_MOC_LITERAL(106, 2744, 20), // "setColorEclipticLine"
QT_MOC_LITERAL(107, 2765, 24), // "setFlagPrecessionCircles"
QT_MOC_LITERAL(108, 2790, 24), // "getFlagPrecessionCircles"
QT_MOC_LITERAL(109, 2815, 25), // "getColorPrecessionCircles"
QT_MOC_LITERAL(110, 2841, 25), // "setColorPrecessionCircles"
QT_MOC_LITERAL(111, 2867, 19), // "setFlagMeridianLine"
QT_MOC_LITERAL(112, 2887, 19), // "getFlagMeridianLine"
QT_MOC_LITERAL(113, 2907, 20), // "getColorMeridianLine"
QT_MOC_LITERAL(114, 2928, 20), // "setColorMeridianLine"
QT_MOC_LITERAL(115, 2949, 20), // "setFlagLongitudeLine"
QT_MOC_LITERAL(116, 2970, 20), // "getFlagLongitudeLine"
QT_MOC_LITERAL(117, 2991, 21), // "getColorLongitudeLine"
QT_MOC_LITERAL(118, 3013, 21), // "setColorLongitudeLine"
QT_MOC_LITERAL(119, 3035, 18), // "setFlagHorizonLine"
QT_MOC_LITERAL(120, 3054, 18), // "getFlagHorizonLine"
QT_MOC_LITERAL(121, 3073, 19), // "getColorHorizonLine"
QT_MOC_LITERAL(122, 3093, 19), // "setColorHorizonLine"
QT_MOC_LITERAL(123, 3113, 26), // "setFlagGalacticEquatorLine"
QT_MOC_LITERAL(124, 3140, 24), // "setFlagGalacticPlaneLine"
QT_MOC_LITERAL(125, 3165, 26), // "getFlagGalacticEquatorLine"
QT_MOC_LITERAL(126, 3192, 24), // "getFlagGalacticPlaneLine"
QT_MOC_LITERAL(127, 3217, 27), // "getColorGalacticEquatorLine"
QT_MOC_LITERAL(128, 3245, 27), // "setColorGalacticEquatorLine"
QT_MOC_LITERAL(129, 3273, 31), // "setFlagSupergalacticEquatorLine"
QT_MOC_LITERAL(130, 3305, 31), // "getFlagSupergalacticEquatorLine"
QT_MOC_LITERAL(131, 3337, 32), // "getColorSupergalacticEquatorLine"
QT_MOC_LITERAL(132, 3370, 32), // "setColorSupergalacticEquatorLine"
QT_MOC_LITERAL(133, 3403, 24), // "setFlagPrimeVerticalLine"
QT_MOC_LITERAL(134, 3428, 24), // "getFlagPrimeVerticalLine"
QT_MOC_LITERAL(135, 3453, 25), // "getColorPrimeVerticalLine"
QT_MOC_LITERAL(136, 3479, 25), // "setColorPrimeVerticalLine"
QT_MOC_LITERAL(137, 3505, 18), // "setFlagColureLines"
QT_MOC_LITERAL(138, 3524, 18), // "getFlagColureLines"
QT_MOC_LITERAL(139, 3543, 19), // "getColorColureLines"
QT_MOC_LITERAL(140, 3563, 19), // "setColorColureLines"
QT_MOC_LITERAL(141, 3583, 25), // "setFlagCircumpolarCircles"
QT_MOC_LITERAL(142, 3609, 25), // "getFlagCircumpolarCircles"
QT_MOC_LITERAL(143, 3635, 26), // "getColorCircumpolarCircles"
QT_MOC_LITERAL(144, 3662, 26), // "setColorCircumpolarCircles"
QT_MOC_LITERAL(145, 3689, 26), // "setFlagCelestialJ2000Poles"
QT_MOC_LITERAL(146, 3716, 26), // "getFlagCelestialJ2000Poles"
QT_MOC_LITERAL(147, 3743, 27), // "getColorCelestialJ2000Poles"
QT_MOC_LITERAL(148, 3771, 27), // "setColorCelestialJ2000Poles"
QT_MOC_LITERAL(149, 3799, 21), // "setFlagCelestialPoles"
QT_MOC_LITERAL(150, 3821, 21), // "getFlagCelestialPoles"
QT_MOC_LITERAL(151, 3843, 22), // "getColorCelestialPoles"
QT_MOC_LITERAL(152, 3866, 22), // "setColorCelestialPoles"
QT_MOC_LITERAL(153, 3889, 18), // "setFlagZenithNadir"
QT_MOC_LITERAL(154, 3908, 18), // "getFlagZenithNadir"
QT_MOC_LITERAL(155, 3927, 19), // "getColorZenithNadir"
QT_MOC_LITERAL(156, 3947, 19), // "setColorZenithNadir"
QT_MOC_LITERAL(157, 3967, 25), // "setFlagEclipticJ2000Poles"
QT_MOC_LITERAL(158, 3993, 25), // "getFlagEclipticJ2000Poles"
QT_MOC_LITERAL(159, 4019, 26), // "getColorEclipticJ2000Poles"
QT_MOC_LITERAL(160, 4046, 26), // "setColorEclipticJ2000Poles"
QT_MOC_LITERAL(161, 4073, 20), // "setFlagEclipticPoles"
QT_MOC_LITERAL(162, 4094, 20), // "getFlagEclipticPoles"
QT_MOC_LITERAL(163, 4115, 21), // "getColorEclipticPoles"
QT_MOC_LITERAL(164, 4137, 21), // "setColorEclipticPoles"
QT_MOC_LITERAL(165, 4159, 20), // "setFlagGalacticPoles"
QT_MOC_LITERAL(166, 4180, 20), // "getFlagGalacticPoles"
QT_MOC_LITERAL(167, 4201, 21), // "getColorGalacticPoles"
QT_MOC_LITERAL(168, 4223, 21), // "setColorGalacticPoles"
QT_MOC_LITERAL(169, 4245, 25), // "setFlagSupergalacticPoles"
QT_MOC_LITERAL(170, 4271, 25), // "getFlagSupergalacticPoles"
QT_MOC_LITERAL(171, 4297, 26), // "getColorSupergalacticPoles"
QT_MOC_LITERAL(172, 4324, 26), // "setColorSupergalacticPoles"
QT_MOC_LITERAL(173, 4351, 25), // "setFlagEquinoxJ2000Points"
QT_MOC_LITERAL(174, 4377, 25), // "getFlagEquinoxJ2000Points"
QT_MOC_LITERAL(175, 4403, 26), // "getColorEquinoxJ2000Points"
QT_MOC_LITERAL(176, 4430, 26), // "setColorEquinoxJ2000Points"
QT_MOC_LITERAL(177, 4457, 20), // "setFlagEquinoxPoints"
QT_MOC_LITERAL(178, 4478, 20), // "getFlagEquinoxPoints"
QT_MOC_LITERAL(179, 4499, 21), // "getColorEquinoxPoints"
QT_MOC_LITERAL(180, 4521, 21), // "setColorEquinoxPoints"
QT_MOC_LITERAL(181, 4543, 16), // "updateLineLabels"
QT_MOC_LITERAL(182, 4560, 22), // "azimuthalGridDisplayed"
QT_MOC_LITERAL(183, 4583, 18), // "azimuthalGridColor"
QT_MOC_LITERAL(184, 4602, 20), // "equatorGridDisplayed"
QT_MOC_LITERAL(185, 4623, 16), // "equatorGridColor"
QT_MOC_LITERAL(186, 4640, 25), // "equatorJ2000GridDisplayed"
QT_MOC_LITERAL(187, 4666, 21), // "equatorJ2000GridColor"
QT_MOC_LITERAL(188, 4688, 26), // "eclipticJ2000GridDisplayed"
QT_MOC_LITERAL(189, 4715, 22), // "eclipticJ2000GridColor"
QT_MOC_LITERAL(190, 4738, 21), // "eclipticGridDisplayed"
QT_MOC_LITERAL(191, 4760, 17), // "eclipticGridColor"
QT_MOC_LITERAL(192, 4778, 21), // "galacticGridDisplayed"
QT_MOC_LITERAL(193, 4800, 17), // "galacticGridColor"
QT_MOC_LITERAL(194, 4818, 26), // "supergalacticGridDisplayed"
QT_MOC_LITERAL(195, 4845, 22), // "supergalacticGridColor"
QT_MOC_LITERAL(196, 4868, 20), // "equatorLineDisplayed"
QT_MOC_LITERAL(197, 4889, 16), // "equatorLineColor"
QT_MOC_LITERAL(198, 4906, 25), // "equatorJ2000LineDisplayed"
QT_MOC_LITERAL(199, 4932, 21), // "equatorJ2000LineColor"
QT_MOC_LITERAL(200, 4954, 21), // "eclipticLineDisplayed"
QT_MOC_LITERAL(201, 4976, 17), // "eclipticLineColor"
QT_MOC_LITERAL(202, 4994, 26), // "eclipticJ2000LineDisplayed"
QT_MOC_LITERAL(203, 5021, 22), // "eclipticJ2000LineColor"
QT_MOC_LITERAL(204, 5044, 26), // "precessionCirclesDisplayed"
QT_MOC_LITERAL(205, 5071, 22), // "precessionCirclesColor"
QT_MOC_LITERAL(206, 5094, 21), // "meridianLineDisplayed"
QT_MOC_LITERAL(207, 5116, 17), // "meridianLineColor"
QT_MOC_LITERAL(208, 5134, 22), // "longitudeLineDisplayed"
QT_MOC_LITERAL(209, 5157, 18), // "longitudeLineColor"
QT_MOC_LITERAL(210, 5176, 20), // "horizonLineDisplayed"
QT_MOC_LITERAL(211, 5197, 16), // "horizonLineColor"
QT_MOC_LITERAL(212, 5214, 28), // "galacticEquatorLineDisplayed"
QT_MOC_LITERAL(213, 5243, 24), // "galacticEquatorLineColor"
QT_MOC_LITERAL(214, 5268, 33), // "supergalacticEquatorLineDispl..."
QT_MOC_LITERAL(215, 5302, 29), // "supergalacticEquatorLineColor"
QT_MOC_LITERAL(216, 5332, 26), // "primeVerticalLineDisplayed"
QT_MOC_LITERAL(217, 5359, 22), // "primeVerticalLineColor"
QT_MOC_LITERAL(218, 5382, 20), // "colureLinesDisplayed"
QT_MOC_LITERAL(219, 5403, 16), // "colureLinesColor"
QT_MOC_LITERAL(220, 5420, 27), // "circumpolarCirclesDisplayed"
QT_MOC_LITERAL(221, 5448, 23), // "circumpolarCirclesColor"
QT_MOC_LITERAL(222, 5472, 28), // "celestialJ2000PolesDisplayed"
QT_MOC_LITERAL(223, 5501, 24), // "celestialJ2000PolesColor"
QT_MOC_LITERAL(224, 5526, 23), // "celestialPolesDisplayed"
QT_MOC_LITERAL(225, 5550, 19), // "celestialPolesColor"
QT_MOC_LITERAL(226, 5570, 20), // "zenithNadirDisplayed"
QT_MOC_LITERAL(227, 5591, 16), // "zenithNadirColor"
QT_MOC_LITERAL(228, 5608, 27), // "eclipticJ2000PolesDisplayed"
QT_MOC_LITERAL(229, 5636, 23), // "eclipticJ2000PolesColor"
QT_MOC_LITERAL(230, 5660, 22), // "eclipticPolesDisplayed"
QT_MOC_LITERAL(231, 5683, 18), // "eclipticPolesColor"
QT_MOC_LITERAL(232, 5702, 22), // "galacticPolesDisplayed"
QT_MOC_LITERAL(233, 5725, 18), // "galacticPolesColor"
QT_MOC_LITERAL(234, 5744, 27), // "supergalacticPolesDisplayed"
QT_MOC_LITERAL(235, 5772, 23), // "supergalacticPolesColor"
QT_MOC_LITERAL(236, 5796, 27), // "equinoxJ2000PointsDisplayed"
QT_MOC_LITERAL(237, 5824, 23), // "equinoxJ2000PointsColor"
QT_MOC_LITERAL(238, 5848, 22), // "equinoxPointsDisplayed"
QT_MOC_LITERAL(239, 5871, 18) // "equinoxPointsColor"

    },
    "GridLinesMgr\0azimuthalGridDisplayedChanged\0"
    "\0azimuthalGridColorChanged\0Vec3f\0"
    "newColor\0equatorGridDisplayedChanged\0"
    "displayed\0equatorGridColorChanged\0"
    "equatorJ2000GridDisplayedChanged\0"
    "equatorJ2000GridColorChanged\0"
    "eclipticGridDisplayedChanged\0"
    "eclipticGridColorChanged\0"
    "eclipticJ2000GridDisplayedChanged\0"
    "eclipticJ2000GridColorChanged\0"
    "galacticGridDisplayedChanged\0"
    "galacticGridColorChanged\0"
    "supergalacticGridDisplayedChanged\0"
    "supergalacticGridColorChanged\0"
    "equatorLineDisplayedChanged\0"
    "equatorLineColorChanged\0"
    "equatorJ2000LineDisplayedChanged\0"
    "equatorJ2000LineColorChanged\0"
    "eclipticLineDisplayedChanged\0"
    "eclipticLineColorChanged\0"
    "eclipticJ2000LineDisplayedChanged\0"
    "eclipticJ2000LineColorChanged\0"
    "precessionCirclesDisplayedChanged\0"
    "precessionCirclesColorChanged\0"
    "meridianLineDisplayedChanged\0"
    "meridianLineColorChanged\0"
    "longitudeLineDisplayedChanged\0"
    "longitudeLineColorChanged\0"
    "horizonLineDisplayedChanged\0"
    "horizonLineColorChanged\0"
    "galacticEquatorLineDisplayedChanged\0"
    "galacticEquatorLineColorChanged\0"
    "supergalacticEquatorLineDisplayedChanged\0"
    "supergalacticEquatorLineColorChanged\0"
    "primeVerticalLineDisplayedChanged\0"
    "primeVerticalLineColorChanged\0"
    "colureLinesDisplayedChanged\0"
    "colureLinesColorChanged\0"
    "circumpolarCirclesDisplayedChanged\0"
    "circumpolarCirclesColorChanged\0"
    "celestialJ2000PolesDisplayedChanged\0"
    "celestialJ2000PolesColorChanged\0"
    "celestialPolesDisplayedChanged\0"
    "celestialPolesColorChanged\0"
    "zenithNadirDisplayedChanged\0"
    "zenithNadirColorChanged\0"
    "eclipticJ2000PolesDisplayedChanged\0"
    "eclipticJ2000PolesColorChanged\0"
    "eclipticPolesDisplayedChanged\0"
    "eclipticPolesColorChanged\0"
    "galacticPolesDisplayedChanged\0"
    "galacticPolesColorChanged\0"
    "supergalacticPolesDisplayedChanged\0"
    "supergalacticPolesColorChanged\0"
    "equinoxJ2000PointsDisplayedChanged\0"
    "equinoxJ2000PointsColorChanged\0"
    "equinoxPointsDisplayedChanged\0"
    "equinoxPointsColorChanged\0"
    "setFlagAzimuthalGrid\0getFlagAzimuthalGrid\0"
    "getColorAzimuthalGrid\0setColorAzimuthalGrid\0"
    "setFlagEquatorGrid\0getFlagEquatorGrid\0"
    "getColorEquatorGrid\0setColorEquatorGrid\0"
    "setFlagEquatorJ2000Grid\0getFlagEquatorJ2000Grid\0"
    "getColorEquatorJ2000Grid\0"
    "setColorEquatorJ2000Grid\0"
    "setFlagEclipticJ2000Grid\0"
    "getFlagEclipticJ2000Grid\0"
    "getColorEclipticJ2000Grid\0"
    "setColorEclipticJ2000Grid\0setFlagEclipticGrid\0"
    "getFlagEclipticGrid\0getColorEclipticGrid\0"
    "setColorEclipticGrid\0setFlagGalacticGrid\0"
    "getFlagGalacticGrid\0getColorGalacticGrid\0"
    "setColorGalacticGrid\0setFlagSupergalacticGrid\0"
    "getFlagSupergalacticGrid\0"
    "getColorSupergalacticGrid\0"
    "setColorSupergalacticGrid\0setFlagEquatorLine\0"
    "getFlagEquatorLine\0getColorEquatorLine\0"
    "setColorEquatorLine\0setFlagEquatorJ2000Line\0"
    "getFlagEquatorJ2000Line\0"
    "getColorEquatorJ2000Line\0"
    "setColorEquatorJ2000Line\0"
    "setFlagEclipticJ2000Line\0"
    "getFlagEclipticJ2000Line\0"
    "getColorEclipticJ2000Line\0"
    "setColorEclipticJ2000Line\0setFlagEclipticLine\0"
    "getFlagEclipticLine\0getColorEclipticLine\0"
    "setColorEclipticLine\0setFlagPrecessionCircles\0"
    "getFlagPrecessionCircles\0"
    "getColorPrecessionCircles\0"
    "setColorPrecessionCircles\0setFlagMeridianLine\0"
    "getFlagMeridianLine\0getColorMeridianLine\0"
    "setColorMeridianLine\0setFlagLongitudeLine\0"
    "getFlagLongitudeLine\0getColorLongitudeLine\0"
    "setColorLongitudeLine\0setFlagHorizonLine\0"
    "getFlagHorizonLine\0getColorHorizonLine\0"
    "setColorHorizonLine\0setFlagGalacticEquatorLine\0"
    "setFlagGalacticPlaneLine\0"
    "getFlagGalacticEquatorLine\0"
    "getFlagGalacticPlaneLine\0"
    "getColorGalacticEquatorLine\0"
    "setColorGalacticEquatorLine\0"
    "setFlagSupergalacticEquatorLine\0"
    "getFlagSupergalacticEquatorLine\0"
    "getColorSupergalacticEquatorLine\0"
    "setColorSupergalacticEquatorLine\0"
    "setFlagPrimeVerticalLine\0"
    "getFlagPrimeVerticalLine\0"
    "getColorPrimeVerticalLine\0"
    "setColorPrimeVerticalLine\0setFlagColureLines\0"
    "getFlagColureLines\0getColorColureLines\0"
    "setColorColureLines\0setFlagCircumpolarCircles\0"
    "getFlagCircumpolarCircles\0"
    "getColorCircumpolarCircles\0"
    "setColorCircumpolarCircles\0"
    "setFlagCelestialJ2000Poles\0"
    "getFlagCelestialJ2000Poles\0"
    "getColorCelestialJ2000Poles\0"
    "setColorCelestialJ2000Poles\0"
    "setFlagCelestialPoles\0getFlagCelestialPoles\0"
    "getColorCelestialPoles\0setColorCelestialPoles\0"
    "setFlagZenithNadir\0getFlagZenithNadir\0"
    "getColorZenithNadir\0setColorZenithNadir\0"
    "setFlagEclipticJ2000Poles\0"
    "getFlagEclipticJ2000Poles\0"
    "getColorEclipticJ2000Poles\0"
    "setColorEclipticJ2000Poles\0"
    "setFlagEclipticPoles\0getFlagEclipticPoles\0"
    "getColorEclipticPoles\0setColorEclipticPoles\0"
    "setFlagGalacticPoles\0getFlagGalacticPoles\0"
    "getColorGalacticPoles\0setColorGalacticPoles\0"
    "setFlagSupergalacticPoles\0"
    "getFlagSupergalacticPoles\0"
    "getColorSupergalacticPoles\0"
    "setColorSupergalacticPoles\0"
    "setFlagEquinoxJ2000Points\0"
    "getFlagEquinoxJ2000Points\0"
    "getColorEquinoxJ2000Points\0"
    "setColorEquinoxJ2000Points\0"
    "setFlagEquinoxPoints\0getFlagEquinoxPoints\0"
    "getColorEquinoxPoints\0setColorEquinoxPoints\0"
    "updateLineLabels\0azimuthalGridDisplayed\0"
    "azimuthalGridColor\0equatorGridDisplayed\0"
    "equatorGridColor\0equatorJ2000GridDisplayed\0"
    "equatorJ2000GridColor\0eclipticJ2000GridDisplayed\0"
    "eclipticJ2000GridColor\0eclipticGridDisplayed\0"
    "eclipticGridColor\0galacticGridDisplayed\0"
    "galacticGridColor\0supergalacticGridDisplayed\0"
    "supergalacticGridColor\0equatorLineDisplayed\0"
    "equatorLineColor\0equatorJ2000LineDisplayed\0"
    "equatorJ2000LineColor\0eclipticLineDisplayed\0"
    "eclipticLineColor\0eclipticJ2000LineDisplayed\0"
    "eclipticJ2000LineColor\0"
    "precessionCirclesDisplayed\0"
    "precessionCirclesColor\0meridianLineDisplayed\0"
    "meridianLineColor\0longitudeLineDisplayed\0"
    "longitudeLineColor\0horizonLineDisplayed\0"
    "horizonLineColor\0galacticEquatorLineDisplayed\0"
    "galacticEquatorLineColor\0"
    "supergalacticEquatorLineDisplayed\0"
    "supergalacticEquatorLineColor\0"
    "primeVerticalLineDisplayed\0"
    "primeVerticalLineColor\0colureLinesDisplayed\0"
    "colureLinesColor\0circumpolarCirclesDisplayed\0"
    "circumpolarCirclesColor\0"
    "celestialJ2000PolesDisplayed\0"
    "celestialJ2000PolesColor\0"
    "celestialPolesDisplayed\0celestialPolesColor\0"
    "zenithNadirDisplayed\0zenithNadirColor\0"
    "eclipticJ2000PolesDisplayed\0"
    "eclipticJ2000PolesColor\0eclipticPolesDisplayed\0"
    "eclipticPolesColor\0galacticPolesDisplayed\0"
    "galacticPolesColor\0supergalacticPolesDisplayed\0"
    "supergalacticPolesColor\0"
    "equinoxJ2000PointsDisplayed\0"
    "equinoxJ2000PointsColor\0equinoxPointsDisplayed\0"
    "equinoxPointsColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GridLinesMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     177,   14, // methods
      58, 1310, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      58,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  899,    2, 0x06 /* Public */,
       3,    1,  902,    2, 0x06 /* Public */,
       6,    1,  905,    2, 0x06 /* Public */,
       8,    1,  908,    2, 0x06 /* Public */,
       9,    1,  911,    2, 0x06 /* Public */,
      10,    1,  914,    2, 0x06 /* Public */,
      11,    1,  917,    2, 0x06 /* Public */,
      12,    1,  920,    2, 0x06 /* Public */,
      13,    1,  923,    2, 0x06 /* Public */,
      14,    1,  926,    2, 0x06 /* Public */,
      15,    1,  929,    2, 0x06 /* Public */,
      16,    1,  932,    2, 0x06 /* Public */,
      17,    1,  935,    2, 0x06 /* Public */,
      18,    1,  938,    2, 0x06 /* Public */,
      19,    1,  941,    2, 0x06 /* Public */,
      20,    1,  944,    2, 0x06 /* Public */,
      21,    1,  947,    2, 0x06 /* Public */,
      22,    1,  950,    2, 0x06 /* Public */,
      23,    1,  953,    2, 0x06 /* Public */,
      24,    1,  956,    2, 0x06 /* Public */,
      25,    1,  959,    2, 0x06 /* Public */,
      26,    1,  962,    2, 0x06 /* Public */,
      27,    1,  965,    2, 0x06 /* Public */,
      28,    1,  968,    2, 0x06 /* Public */,
      29,    1,  971,    2, 0x06 /* Public */,
      30,    1,  974,    2, 0x06 /* Public */,
      31,    1,  977,    2, 0x06 /* Public */,
      32,    1,  980,    2, 0x06 /* Public */,
      33,    1,  983,    2, 0x06 /* Public */,
      34,    1,  986,    2, 0x06 /* Public */,
      35,    1,  989,    2, 0x06 /* Public */,
      36,    1,  992,    2, 0x06 /* Public */,
      37,    1,  995,    2, 0x06 /* Public */,
      38,    1,  998,    2, 0x06 /* Public */,
      39,    1, 1001,    2, 0x06 /* Public */,
      40,    1, 1004,    2, 0x06 /* Public */,
      41,    1, 1007,    2, 0x06 /* Public */,
      42,    1, 1010,    2, 0x06 /* Public */,
      43,    1, 1013,    2, 0x06 /* Public */,
      44,    1, 1016,    2, 0x06 /* Public */,
      45,    1, 1019,    2, 0x06 /* Public */,
      46,    1, 1022,    2, 0x06 /* Public */,
      47,    1, 1025,    2, 0x06 /* Public */,
      48,    1, 1028,    2, 0x06 /* Public */,
      49,    1, 1031,    2, 0x06 /* Public */,
      50,    1, 1034,    2, 0x06 /* Public */,
      51,    1, 1037,    2, 0x06 /* Public */,
      52,    1, 1040,    2, 0x06 /* Public */,
      53,    1, 1043,    2, 0x06 /* Public */,
      54,    1, 1046,    2, 0x06 /* Public */,
      55,    1, 1049,    2, 0x06 /* Public */,
      56,    1, 1052,    2, 0x06 /* Public */,
      57,    1, 1055,    2, 0x06 /* Public */,
      58,    1, 1058,    2, 0x06 /* Public */,
      59,    1, 1061,    2, 0x06 /* Public */,
      60,    1, 1064,    2, 0x06 /* Public */,
      61,    1, 1067,    2, 0x06 /* Public */,
      62,    1, 1070,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      63,    1, 1073,    2, 0x0a /* Public */,
      64,    0, 1076,    2, 0x0a /* Public */,
      65,    0, 1077,    2, 0x0a /* Public */,
      66,    1, 1078,    2, 0x0a /* Public */,
      67,    1, 1081,    2, 0x0a /* Public */,
      68,    0, 1084,    2, 0x0a /* Public */,
      69,    0, 1085,    2, 0x0a /* Public */,
      70,    1, 1086,    2, 0x0a /* Public */,
      71,    1, 1089,    2, 0x0a /* Public */,
      72,    0, 1092,    2, 0x0a /* Public */,
      73,    0, 1093,    2, 0x0a /* Public */,
      74,    1, 1094,    2, 0x0a /* Public */,
      75,    1, 1097,    2, 0x0a /* Public */,
      76,    0, 1100,    2, 0x0a /* Public */,
      77,    0, 1101,    2, 0x0a /* Public */,
      78,    1, 1102,    2, 0x0a /* Public */,
      79,    1, 1105,    2, 0x0a /* Public */,
      80,    0, 1108,    2, 0x0a /* Public */,
      81,    0, 1109,    2, 0x0a /* Public */,
      82,    1, 1110,    2, 0x0a /* Public */,
      83,    1, 1113,    2, 0x0a /* Public */,
      84,    0, 1116,    2, 0x0a /* Public */,
      85,    0, 1117,    2, 0x0a /* Public */,
      86,    1, 1118,    2, 0x0a /* Public */,
      87,    1, 1121,    2, 0x0a /* Public */,
      88,    0, 1124,    2, 0x0a /* Public */,
      89,    0, 1125,    2, 0x0a /* Public */,
      90,    1, 1126,    2, 0x0a /* Public */,
      91,    1, 1129,    2, 0x0a /* Public */,
      92,    0, 1132,    2, 0x0a /* Public */,
      93,    0, 1133,    2, 0x0a /* Public */,
      94,    1, 1134,    2, 0x0a /* Public */,
      95,    1, 1137,    2, 0x0a /* Public */,
      96,    0, 1140,    2, 0x0a /* Public */,
      97,    0, 1141,    2, 0x0a /* Public */,
      98,    1, 1142,    2, 0x0a /* Public */,
      99,    1, 1145,    2, 0x0a /* Public */,
     100,    0, 1148,    2, 0x0a /* Public */,
     101,    0, 1149,    2, 0x0a /* Public */,
     102,    1, 1150,    2, 0x0a /* Public */,
     103,    1, 1153,    2, 0x0a /* Public */,
     104,    0, 1156,    2, 0x0a /* Public */,
     105,    0, 1157,    2, 0x0a /* Public */,
     106,    1, 1158,    2, 0x0a /* Public */,
     107,    1, 1161,    2, 0x0a /* Public */,
     108,    0, 1164,    2, 0x0a /* Public */,
     109,    0, 1165,    2, 0x0a /* Public */,
     110,    1, 1166,    2, 0x0a /* Public */,
     111,    1, 1169,    2, 0x0a /* Public */,
     112,    0, 1172,    2, 0x0a /* Public */,
     113,    0, 1173,    2, 0x0a /* Public */,
     114,    1, 1174,    2, 0x0a /* Public */,
     115,    1, 1177,    2, 0x0a /* Public */,
     116,    0, 1180,    2, 0x0a /* Public */,
     117,    0, 1181,    2, 0x0a /* Public */,
     118,    1, 1182,    2, 0x0a /* Public */,
     119,    1, 1185,    2, 0x0a /* Public */,
     120,    0, 1188,    2, 0x0a /* Public */,
     121,    0, 1189,    2, 0x0a /* Public */,
     122,    1, 1190,    2, 0x0a /* Public */,
     123,    1, 1193,    2, 0x0a /* Public */,
     124,    1, 1196,    2, 0x0a /* Public */,
     125,    0, 1199,    2, 0x0a /* Public */,
     126,    0, 1200,    2, 0x0a /* Public */,
     127,    0, 1201,    2, 0x0a /* Public */,
     128,    1, 1202,    2, 0x0a /* Public */,
     129,    1, 1205,    2, 0x0a /* Public */,
     130,    0, 1208,    2, 0x0a /* Public */,
     131,    0, 1209,    2, 0x0a /* Public */,
     132,    1, 1210,    2, 0x0a /* Public */,
     133,    1, 1213,    2, 0x0a /* Public */,
     134,    0, 1216,    2, 0x0a /* Public */,
     135,    0, 1217,    2, 0x0a /* Public */,
     136,    1, 1218,    2, 0x0a /* Public */,
     137,    1, 1221,    2, 0x0a /* Public */,
     138,    0, 1224,    2, 0x0a /* Public */,
     139,    0, 1225,    2, 0x0a /* Public */,
     140,    1, 1226,    2, 0x0a /* Public */,
     141,    1, 1229,    2, 0x0a /* Public */,
     142,    0, 1232,    2, 0x0a /* Public */,
     143,    0, 1233,    2, 0x0a /* Public */,
     144,    1, 1234,    2, 0x0a /* Public */,
     145,    1, 1237,    2, 0x0a /* Public */,
     146,    0, 1240,    2, 0x0a /* Public */,
     147,    0, 1241,    2, 0x0a /* Public */,
     148,    1, 1242,    2, 0x0a /* Public */,
     149,    1, 1245,    2, 0x0a /* Public */,
     150,    0, 1248,    2, 0x0a /* Public */,
     151,    0, 1249,    2, 0x0a /* Public */,
     152,    1, 1250,    2, 0x0a /* Public */,
     153,    1, 1253,    2, 0x0a /* Public */,
     154,    0, 1256,    2, 0x0a /* Public */,
     155,    0, 1257,    2, 0x0a /* Public */,
     156,    1, 1258,    2, 0x0a /* Public */,
     157,    1, 1261,    2, 0x0a /* Public */,
     158,    0, 1264,    2, 0x0a /* Public */,
     159,    0, 1265,    2, 0x0a /* Public */,
     160,    1, 1266,    2, 0x0a /* Public */,
     161,    1, 1269,    2, 0x0a /* Public */,
     162,    0, 1272,    2, 0x0a /* Public */,
     163,    0, 1273,    2, 0x0a /* Public */,
     164,    1, 1274,    2, 0x0a /* Public */,
     165,    1, 1277,    2, 0x0a /* Public */,
     166,    0, 1280,    2, 0x0a /* Public */,
     167,    0, 1281,    2, 0x0a /* Public */,
     168,    1, 1282,    2, 0x0a /* Public */,
     169,    1, 1285,    2, 0x0a /* Public */,
     170,    0, 1288,    2, 0x0a /* Public */,
     171,    0, 1289,    2, 0x0a /* Public */,
     172,    1, 1290,    2, 0x0a /* Public */,
     173,    1, 1293,    2, 0x0a /* Public */,
     174,    0, 1296,    2, 0x0a /* Public */,
     175,    0, 1297,    2, 0x0a /* Public */,
     176,    1, 1298,    2, 0x0a /* Public */,
     177,    1, 1301,    2, 0x0a /* Public */,
     178,    0, 1304,    2, 0x0a /* Public */,
     179,    0, 1305,    2, 0x0a /* Public */,
     180,    1, 1306,    2, 0x0a /* Public */,
     181,    0, 1309,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // properties: name, type, flags
     182, QMetaType::Bool, 0x00495003,
     183, 0x80000000 | 4, 0x0049500b,
     184, QMetaType::Bool, 0x00495003,
     185, 0x80000000 | 4, 0x0049500b,
     186, QMetaType::Bool, 0x00495003,
     187, 0x80000000 | 4, 0x0049500b,
     188, QMetaType::Bool, 0x00495003,
     189, 0x80000000 | 4, 0x0049500b,
     190, QMetaType::Bool, 0x00495003,
     191, 0x80000000 | 4, 0x0049500b,
     192, QMetaType::Bool, 0x00495003,
     193, 0x80000000 | 4, 0x0049500b,
     194, QMetaType::Bool, 0x00495003,
     195, 0x80000000 | 4, 0x0049500b,
     196, QMetaType::Bool, 0x00495003,
     197, 0x80000000 | 4, 0x0049500b,
     198, QMetaType::Bool, 0x00495003,
     199, 0x80000000 | 4, 0x0049500b,
     200, QMetaType::Bool, 0x00495003,
     201, 0x80000000 | 4, 0x0049500b,
     202, QMetaType::Bool, 0x00495003,
     203, 0x80000000 | 4, 0x0049500b,
     204, QMetaType::Bool, 0x00495003,
     205, 0x80000000 | 4, 0x0049500b,
     206, QMetaType::Bool, 0x00495003,
     207, 0x80000000 | 4, 0x0049500b,
     208, QMetaType::Bool, 0x00495003,
     209, 0x80000000 | 4, 0x0049500b,
     210, QMetaType::Bool, 0x00495003,
     211, 0x80000000 | 4, 0x0049500b,
     212, QMetaType::Bool, 0x00495003,
     213, 0x80000000 | 4, 0x0049500b,
     214, QMetaType::Bool, 0x00495003,
     215, 0x80000000 | 4, 0x0049500b,
     216, QMetaType::Bool, 0x00495003,
     217, 0x80000000 | 4, 0x0049500b,
     218, QMetaType::Bool, 0x00495003,
     219, 0x80000000 | 4, 0x0049500b,
     220, QMetaType::Bool, 0x00495003,
     221, 0x80000000 | 4, 0x0049500b,
     222, QMetaType::Bool, 0x00495003,
     223, 0x80000000 | 4, 0x0049500b,
     224, QMetaType::Bool, 0x00495003,
     225, 0x80000000 | 4, 0x0049500b,
     226, QMetaType::Bool, 0x00495003,
     227, 0x80000000 | 4, 0x0049500b,
     228, QMetaType::Bool, 0x00495003,
     229, 0x80000000 | 4, 0x0049500b,
     230, QMetaType::Bool, 0x00495003,
     231, 0x80000000 | 4, 0x0049500b,
     232, QMetaType::Bool, 0x00495003,
     233, 0x80000000 | 4, 0x0049500b,
     234, QMetaType::Bool, 0x00495003,
     235, 0x80000000 | 4, 0x0049500b,
     236, QMetaType::Bool, 0x00495003,
     237, 0x80000000 | 4, 0x0049500b,
     238, QMetaType::Bool, 0x00495003,
     239, 0x80000000 | 4, 0x0049500b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       8,
       9,
       6,
       7,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      22,
      23,
      24,
      25,
      26,
      27,
      28,
      29,
      30,
      31,
      32,
      33,
      34,
      35,
      36,
      37,
      38,
      39,
      40,
      41,
      42,
      43,
      44,
      45,
      46,
      47,
      48,
      49,
      50,
      51,
      52,
      53,
      54,
      55,
      56,
      57,

       0        // eod
};

void GridLinesMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GridLinesMgr *_t = static_cast<GridLinesMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->azimuthalGridDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->azimuthalGridColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 2: _t->equatorGridDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->equatorGridColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 4: _t->equatorJ2000GridDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->equatorJ2000GridColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 6: _t->eclipticGridDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->eclipticGridColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 8: _t->eclipticJ2000GridDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 9: _t->eclipticJ2000GridColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 10: _t->galacticGridDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 11: _t->galacticGridColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 12: _t->supergalacticGridDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 13: _t->supergalacticGridColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 14: _t->equatorLineDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 15: _t->equatorLineColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 16: _t->equatorJ2000LineDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 17: _t->equatorJ2000LineColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 18: _t->eclipticLineDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 19: _t->eclipticLineColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 20: _t->eclipticJ2000LineDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 21: _t->eclipticJ2000LineColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 22: _t->precessionCirclesDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 23: _t->precessionCirclesColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 24: _t->meridianLineDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 25: _t->meridianLineColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 26: _t->longitudeLineDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 27: _t->longitudeLineColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 28: _t->horizonLineDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 29: _t->horizonLineColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 30: _t->galacticEquatorLineDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 31: _t->galacticEquatorLineColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 32: _t->supergalacticEquatorLineDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 33: _t->supergalacticEquatorLineColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 34: _t->primeVerticalLineDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 35: _t->primeVerticalLineColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 36: _t->colureLinesDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 37: _t->colureLinesColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 38: _t->circumpolarCirclesDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 39: _t->circumpolarCirclesColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 40: _t->celestialJ2000PolesDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 41: _t->celestialJ2000PolesColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 42: _t->celestialPolesDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 43: _t->celestialPolesColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 44: _t->zenithNadirDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 45: _t->zenithNadirColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 46: _t->eclipticJ2000PolesDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 47: _t->eclipticJ2000PolesColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 48: _t->eclipticPolesDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 49: _t->eclipticPolesColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 50: _t->galacticPolesDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 51: _t->galacticPolesColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 52: _t->supergalacticPolesDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 53: _t->supergalacticPolesColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 54: _t->equinoxJ2000PointsDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 55: _t->equinoxJ2000PointsColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 56: _t->equinoxPointsDisplayedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 57: _t->equinoxPointsColorChanged((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 58: _t->setFlagAzimuthalGrid((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 59: { bool _r = _t->getFlagAzimuthalGrid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 60: { Vec3f _r = _t->getColorAzimuthalGrid();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 61: _t->setColorAzimuthalGrid((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 62: _t->setFlagEquatorGrid((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 63: { bool _r = _t->getFlagEquatorGrid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 64: { Vec3f _r = _t->getColorEquatorGrid();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 65: _t->setColorEquatorGrid((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 66: _t->setFlagEquatorJ2000Grid((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 67: { bool _r = _t->getFlagEquatorJ2000Grid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 68: { Vec3f _r = _t->getColorEquatorJ2000Grid();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 69: _t->setColorEquatorJ2000Grid((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 70: _t->setFlagEclipticJ2000Grid((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 71: { bool _r = _t->getFlagEclipticJ2000Grid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 72: { Vec3f _r = _t->getColorEclipticJ2000Grid();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 73: _t->setColorEclipticJ2000Grid((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 74: _t->setFlagEclipticGrid((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 75: { bool _r = _t->getFlagEclipticGrid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 76: { Vec3f _r = _t->getColorEclipticGrid();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 77: _t->setColorEclipticGrid((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 78: _t->setFlagGalacticGrid((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 79: { bool _r = _t->getFlagGalacticGrid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 80: { Vec3f _r = _t->getColorGalacticGrid();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 81: _t->setColorGalacticGrid((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 82: _t->setFlagSupergalacticGrid((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 83: { bool _r = _t->getFlagSupergalacticGrid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 84: { Vec3f _r = _t->getColorSupergalacticGrid();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 85: _t->setColorSupergalacticGrid((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 86: _t->setFlagEquatorLine((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 87: { bool _r = _t->getFlagEquatorLine();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 88: { Vec3f _r = _t->getColorEquatorLine();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 89: _t->setColorEquatorLine((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 90: _t->setFlagEquatorJ2000Line((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 91: { bool _r = _t->getFlagEquatorJ2000Line();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 92: { Vec3f _r = _t->getColorEquatorJ2000Line();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 93: _t->setColorEquatorJ2000Line((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 94: _t->setFlagEclipticJ2000Line((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 95: { bool _r = _t->getFlagEclipticJ2000Line();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 96: { Vec3f _r = _t->getColorEclipticJ2000Line();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 97: _t->setColorEclipticJ2000Line((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 98: _t->setFlagEclipticLine((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 99: { bool _r = _t->getFlagEclipticLine();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 100: { Vec3f _r = _t->getColorEclipticLine();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 101: _t->setColorEclipticLine((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 102: _t->setFlagPrecessionCircles((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 103: { bool _r = _t->getFlagPrecessionCircles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 104: { Vec3f _r = _t->getColorPrecessionCircles();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 105: _t->setColorPrecessionCircles((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 106: _t->setFlagMeridianLine((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 107: { bool _r = _t->getFlagMeridianLine();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 108: { Vec3f _r = _t->getColorMeridianLine();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 109: _t->setColorMeridianLine((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 110: _t->setFlagLongitudeLine((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 111: { bool _r = _t->getFlagLongitudeLine();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 112: { Vec3f _r = _t->getColorLongitudeLine();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 113: _t->setColorLongitudeLine((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 114: _t->setFlagHorizonLine((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 115: { bool _r = _t->getFlagHorizonLine();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 116: { Vec3f _r = _t->getColorHorizonLine();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 117: _t->setColorHorizonLine((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 118: _t->setFlagGalacticEquatorLine((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 119: _t->setFlagGalacticPlaneLine((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 120: { bool _r = _t->getFlagGalacticEquatorLine();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 121: { bool _r = _t->getFlagGalacticPlaneLine();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 122: { Vec3f _r = _t->getColorGalacticEquatorLine();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 123: _t->setColorGalacticEquatorLine((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 124: _t->setFlagSupergalacticEquatorLine((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 125: { bool _r = _t->getFlagSupergalacticEquatorLine();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 126: { Vec3f _r = _t->getColorSupergalacticEquatorLine();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 127: _t->setColorSupergalacticEquatorLine((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 128: _t->setFlagPrimeVerticalLine((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 129: { bool _r = _t->getFlagPrimeVerticalLine();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 130: { Vec3f _r = _t->getColorPrimeVerticalLine();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 131: _t->setColorPrimeVerticalLine((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 132: _t->setFlagColureLines((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 133: { bool _r = _t->getFlagColureLines();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 134: { Vec3f _r = _t->getColorColureLines();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 135: _t->setColorColureLines((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 136: _t->setFlagCircumpolarCircles((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 137: { bool _r = _t->getFlagCircumpolarCircles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 138: { Vec3f _r = _t->getColorCircumpolarCircles();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 139: _t->setColorCircumpolarCircles((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 140: _t->setFlagCelestialJ2000Poles((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 141: { bool _r = _t->getFlagCelestialJ2000Poles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 142: { Vec3f _r = _t->getColorCelestialJ2000Poles();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 143: _t->setColorCelestialJ2000Poles((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 144: _t->setFlagCelestialPoles((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 145: { bool _r = _t->getFlagCelestialPoles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 146: { Vec3f _r = _t->getColorCelestialPoles();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 147: _t->setColorCelestialPoles((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 148: _t->setFlagZenithNadir((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 149: { bool _r = _t->getFlagZenithNadir();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 150: { Vec3f _r = _t->getColorZenithNadir();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 151: _t->setColorZenithNadir((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 152: _t->setFlagEclipticJ2000Poles((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 153: { bool _r = _t->getFlagEclipticJ2000Poles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 154: { Vec3f _r = _t->getColorEclipticJ2000Poles();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 155: _t->setColorEclipticJ2000Poles((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 156: _t->setFlagEclipticPoles((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 157: { bool _r = _t->getFlagEclipticPoles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 158: { Vec3f _r = _t->getColorEclipticPoles();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 159: _t->setColorEclipticPoles((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 160: _t->setFlagGalacticPoles((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 161: { bool _r = _t->getFlagGalacticPoles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 162: { Vec3f _r = _t->getColorGalacticPoles();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 163: _t->setColorGalacticPoles((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 164: _t->setFlagSupergalacticPoles((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 165: { bool _r = _t->getFlagSupergalacticPoles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 166: { Vec3f _r = _t->getColorSupergalacticPoles();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 167: _t->setColorSupergalacticPoles((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 168: _t->setFlagEquinoxJ2000Points((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 169: { bool _r = _t->getFlagEquinoxJ2000Points();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 170: { Vec3f _r = _t->getColorEquinoxJ2000Points();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 171: _t->setColorEquinoxJ2000Points((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 172: _t->setFlagEquinoxPoints((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 173: { bool _r = _t->getFlagEquinoxPoints();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 174: { Vec3f _r = _t->getColorEquinoxPoints();
            if (_a[0]) *reinterpret_cast< Vec3f*>(_a[0]) = _r; }  break;
        case 175: _t->setColorEquinoxPoints((*reinterpret_cast< const Vec3f(*)>(_a[1]))); break;
        case 176: _t->updateLineLabels(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 69:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 73:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 77:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 81:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 89:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 93:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 97:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 101:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 105:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 109:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 113:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 117:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 123:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 127:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 131:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 135:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 139:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 147:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 151:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 155:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 159:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 163:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 167:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 171:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        case 175:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::azimuthalGridDisplayedChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::azimuthalGridColorChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::equatorGridDisplayedChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::equatorGridColorChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::equatorJ2000GridDisplayedChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::equatorJ2000GridColorChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::eclipticGridDisplayedChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::eclipticGridColorChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::eclipticJ2000GridDisplayedChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::eclipticJ2000GridColorChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::galacticGridDisplayedChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::galacticGridColorChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::supergalacticGridDisplayedChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::supergalacticGridColorChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::equatorLineDisplayedChanged)) {
                *result = 14;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::equatorLineColorChanged)) {
                *result = 15;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::equatorJ2000LineDisplayedChanged)) {
                *result = 16;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::equatorJ2000LineColorChanged)) {
                *result = 17;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::eclipticLineDisplayedChanged)) {
                *result = 18;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::eclipticLineColorChanged)) {
                *result = 19;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::eclipticJ2000LineDisplayedChanged)) {
                *result = 20;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::eclipticJ2000LineColorChanged)) {
                *result = 21;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::precessionCirclesDisplayedChanged)) {
                *result = 22;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::precessionCirclesColorChanged)) {
                *result = 23;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::meridianLineDisplayedChanged)) {
                *result = 24;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::meridianLineColorChanged)) {
                *result = 25;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::longitudeLineDisplayedChanged)) {
                *result = 26;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::longitudeLineColorChanged)) {
                *result = 27;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::horizonLineDisplayedChanged)) {
                *result = 28;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::horizonLineColorChanged)) {
                *result = 29;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::galacticEquatorLineDisplayedChanged)) {
                *result = 30;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::galacticEquatorLineColorChanged)) {
                *result = 31;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::supergalacticEquatorLineDisplayedChanged)) {
                *result = 32;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::supergalacticEquatorLineColorChanged)) {
                *result = 33;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::primeVerticalLineDisplayedChanged)) {
                *result = 34;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::primeVerticalLineColorChanged)) {
                *result = 35;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::colureLinesDisplayedChanged)) {
                *result = 36;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::colureLinesColorChanged)) {
                *result = 37;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::circumpolarCirclesDisplayedChanged)) {
                *result = 38;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::circumpolarCirclesColorChanged)) {
                *result = 39;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::celestialJ2000PolesDisplayedChanged)) {
                *result = 40;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::celestialJ2000PolesColorChanged)) {
                *result = 41;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::celestialPolesDisplayedChanged)) {
                *result = 42;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::celestialPolesColorChanged)) {
                *result = 43;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::zenithNadirDisplayedChanged)) {
                *result = 44;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::zenithNadirColorChanged)) {
                *result = 45;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::eclipticJ2000PolesDisplayedChanged)) {
                *result = 46;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::eclipticJ2000PolesColorChanged)) {
                *result = 47;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::eclipticPolesDisplayedChanged)) {
                *result = 48;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::eclipticPolesColorChanged)) {
                *result = 49;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::galacticPolesDisplayedChanged)) {
                *result = 50;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::galacticPolesColorChanged)) {
                *result = 51;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::supergalacticPolesDisplayedChanged)) {
                *result = 52;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::supergalacticPolesColorChanged)) {
                *result = 53;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::equinoxJ2000PointsDisplayedChanged)) {
                *result = 54;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::equinoxJ2000PointsColorChanged)) {
                *result = 55;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const bool ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::equinoxPointsDisplayedChanged)) {
                *result = 56;
            }
        }
        {
            typedef void (GridLinesMgr::*_t)(const Vec3f & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GridLinesMgr::equinoxPointsColorChanged)) {
                *result = 57;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 57:
        case 55:
        case 53:
        case 51:
        case 49:
        case 47:
        case 45:
        case 43:
        case 41:
        case 39:
        case 37:
        case 35:
        case 33:
        case 31:
        case 29:
        case 27:
        case 25:
        case 23:
        case 21:
        case 19:
        case 17:
        case 15:
        case 13:
        case 11:
        case 9:
        case 7:
        case 5:
        case 3:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vec3f >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GridLinesMgr *_t = static_cast<GridLinesMgr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getFlagAzimuthalGrid(); break;
        case 1: *reinterpret_cast< Vec3f*>(_v) = _t->getColorAzimuthalGrid(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getFlagEquatorGrid(); break;
        case 3: *reinterpret_cast< Vec3f*>(_v) = _t->getColorEquatorGrid(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getFlagEquatorJ2000Grid(); break;
        case 5: *reinterpret_cast< Vec3f*>(_v) = _t->getColorEquatorJ2000Grid(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getFlagEclipticJ2000Grid(); break;
        case 7: *reinterpret_cast< Vec3f*>(_v) = _t->getColorEclipticJ2000Grid(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getFlagEclipticGrid(); break;
        case 9: *reinterpret_cast< Vec3f*>(_v) = _t->getColorEclipticGrid(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getFlagGalacticGrid(); break;
        case 11: *reinterpret_cast< Vec3f*>(_v) = _t->getColorGalacticGrid(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getFlagSupergalacticGrid(); break;
        case 13: *reinterpret_cast< Vec3f*>(_v) = _t->getColorSupergalacticGrid(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->getFlagEquatorLine(); break;
        case 15: *reinterpret_cast< Vec3f*>(_v) = _t->getColorEquatorLine(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->getFlagEquatorJ2000Line(); break;
        case 17: *reinterpret_cast< Vec3f*>(_v) = _t->getColorEquatorJ2000Line(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->getFlagEclipticLine(); break;
        case 19: *reinterpret_cast< Vec3f*>(_v) = _t->getColorEclipticLine(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->getFlagEclipticJ2000Line(); break;
        case 21: *reinterpret_cast< Vec3f*>(_v) = _t->getColorEclipticJ2000Line(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->getFlagPrecessionCircles(); break;
        case 23: *reinterpret_cast< Vec3f*>(_v) = _t->getColorPrecessionCircles(); break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->getFlagMeridianLine(); break;
        case 25: *reinterpret_cast< Vec3f*>(_v) = _t->getColorMeridianLine(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->getFlagLongitudeLine(); break;
        case 27: *reinterpret_cast< Vec3f*>(_v) = _t->getColorLongitudeLine(); break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->getFlagHorizonLine(); break;
        case 29: *reinterpret_cast< Vec3f*>(_v) = _t->getColorHorizonLine(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->getFlagGalacticEquatorLine(); break;
        case 31: *reinterpret_cast< Vec3f*>(_v) = _t->getColorGalacticEquatorLine(); break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->getFlagSupergalacticEquatorLine(); break;
        case 33: *reinterpret_cast< Vec3f*>(_v) = _t->getColorSupergalacticEquatorLine(); break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->getFlagPrimeVerticalLine(); break;
        case 35: *reinterpret_cast< Vec3f*>(_v) = _t->getColorPrimeVerticalLine(); break;
        case 36: *reinterpret_cast< bool*>(_v) = _t->getFlagColureLines(); break;
        case 37: *reinterpret_cast< Vec3f*>(_v) = _t->getColorColureLines(); break;
        case 38: *reinterpret_cast< bool*>(_v) = _t->getFlagCircumpolarCircles(); break;
        case 39: *reinterpret_cast< Vec3f*>(_v) = _t->getColorCircumpolarCircles(); break;
        case 40: *reinterpret_cast< bool*>(_v) = _t->getFlagCelestialJ2000Poles(); break;
        case 41: *reinterpret_cast< Vec3f*>(_v) = _t->getColorCelestialJ2000Poles(); break;
        case 42: *reinterpret_cast< bool*>(_v) = _t->getFlagCelestialPoles(); break;
        case 43: *reinterpret_cast< Vec3f*>(_v) = _t->getColorCelestialPoles(); break;
        case 44: *reinterpret_cast< bool*>(_v) = _t->getFlagZenithNadir(); break;
        case 45: *reinterpret_cast< Vec3f*>(_v) = _t->getColorZenithNadir(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->getFlagEclipticJ2000Poles(); break;
        case 47: *reinterpret_cast< Vec3f*>(_v) = _t->getColorEclipticJ2000Poles(); break;
        case 48: *reinterpret_cast< bool*>(_v) = _t->getFlagEclipticPoles(); break;
        case 49: *reinterpret_cast< Vec3f*>(_v) = _t->getColorEclipticPoles(); break;
        case 50: *reinterpret_cast< bool*>(_v) = _t->getFlagGalacticPoles(); break;
        case 51: *reinterpret_cast< Vec3f*>(_v) = _t->getColorGalacticPoles(); break;
        case 52: *reinterpret_cast< bool*>(_v) = _t->getFlagSupergalacticPoles(); break;
        case 53: *reinterpret_cast< Vec3f*>(_v) = _t->getColorSupergalacticPoles(); break;
        case 54: *reinterpret_cast< bool*>(_v) = _t->getFlagEquinoxJ2000Points(); break;
        case 55: *reinterpret_cast< Vec3f*>(_v) = _t->getColorEquinoxJ2000Points(); break;
        case 56: *reinterpret_cast< bool*>(_v) = _t->getFlagEquinoxPoints(); break;
        case 57: *reinterpret_cast< Vec3f*>(_v) = _t->getColorEquinoxPoints(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        GridLinesMgr *_t = static_cast<GridLinesMgr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlagAzimuthalGrid(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setColorAzimuthalGrid(*reinterpret_cast< Vec3f*>(_v)); break;
        case 2: _t->setFlagEquatorGrid(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setColorEquatorGrid(*reinterpret_cast< Vec3f*>(_v)); break;
        case 4: _t->setFlagEquatorJ2000Grid(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setColorEquatorJ2000Grid(*reinterpret_cast< Vec3f*>(_v)); break;
        case 6: _t->setFlagEclipticJ2000Grid(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setColorEclipticJ2000Grid(*reinterpret_cast< Vec3f*>(_v)); break;
        case 8: _t->setFlagEclipticGrid(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setColorEclipticGrid(*reinterpret_cast< Vec3f*>(_v)); break;
        case 10: _t->setFlagGalacticGrid(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setColorGalacticGrid(*reinterpret_cast< Vec3f*>(_v)); break;
        case 12: _t->setFlagSupergalacticGrid(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setColorSupergalacticGrid(*reinterpret_cast< Vec3f*>(_v)); break;
        case 14: _t->setFlagEquatorLine(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setColorEquatorLine(*reinterpret_cast< Vec3f*>(_v)); break;
        case 16: _t->setFlagEquatorJ2000Line(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setColorEquatorJ2000Line(*reinterpret_cast< Vec3f*>(_v)); break;
        case 18: _t->setFlagEclipticLine(*reinterpret_cast< bool*>(_v)); break;
        case 19: _t->setColorEclipticLine(*reinterpret_cast< Vec3f*>(_v)); break;
        case 20: _t->setFlagEclipticJ2000Line(*reinterpret_cast< bool*>(_v)); break;
        case 21: _t->setColorEclipticJ2000Line(*reinterpret_cast< Vec3f*>(_v)); break;
        case 22: _t->setFlagPrecessionCircles(*reinterpret_cast< bool*>(_v)); break;
        case 23: _t->setColorPrecessionCircles(*reinterpret_cast< Vec3f*>(_v)); break;
        case 24: _t->setFlagMeridianLine(*reinterpret_cast< bool*>(_v)); break;
        case 25: _t->setColorMeridianLine(*reinterpret_cast< Vec3f*>(_v)); break;
        case 26: _t->setFlagLongitudeLine(*reinterpret_cast< bool*>(_v)); break;
        case 27: _t->setColorLongitudeLine(*reinterpret_cast< Vec3f*>(_v)); break;
        case 28: _t->setFlagHorizonLine(*reinterpret_cast< bool*>(_v)); break;
        case 29: _t->setColorHorizonLine(*reinterpret_cast< Vec3f*>(_v)); break;
        case 30: _t->setFlagGalacticEquatorLine(*reinterpret_cast< bool*>(_v)); break;
        case 31: _t->setColorGalacticEquatorLine(*reinterpret_cast< Vec3f*>(_v)); break;
        case 32: _t->setFlagSupergalacticEquatorLine(*reinterpret_cast< bool*>(_v)); break;
        case 33: _t->setColorSupergalacticEquatorLine(*reinterpret_cast< Vec3f*>(_v)); break;
        case 34: _t->setFlagPrimeVerticalLine(*reinterpret_cast< bool*>(_v)); break;
        case 35: _t->setColorPrimeVerticalLine(*reinterpret_cast< Vec3f*>(_v)); break;
        case 36: _t->setFlagColureLines(*reinterpret_cast< bool*>(_v)); break;
        case 37: _t->setColorColureLines(*reinterpret_cast< Vec3f*>(_v)); break;
        case 38: _t->setFlagCircumpolarCircles(*reinterpret_cast< bool*>(_v)); break;
        case 39: _t->setColorCircumpolarCircles(*reinterpret_cast< Vec3f*>(_v)); break;
        case 40: _t->setFlagCelestialJ2000Poles(*reinterpret_cast< bool*>(_v)); break;
        case 41: _t->setColorCelestialJ2000Poles(*reinterpret_cast< Vec3f*>(_v)); break;
        case 42: _t->setFlagCelestialPoles(*reinterpret_cast< bool*>(_v)); break;
        case 43: _t->setColorCelestialPoles(*reinterpret_cast< Vec3f*>(_v)); break;
        case 44: _t->setFlagZenithNadir(*reinterpret_cast< bool*>(_v)); break;
        case 45: _t->setColorZenithNadir(*reinterpret_cast< Vec3f*>(_v)); break;
        case 46: _t->setFlagEclipticJ2000Poles(*reinterpret_cast< bool*>(_v)); break;
        case 47: _t->setColorEclipticJ2000Poles(*reinterpret_cast< Vec3f*>(_v)); break;
        case 48: _t->setFlagEclipticPoles(*reinterpret_cast< bool*>(_v)); break;
        case 49: _t->setColorEclipticPoles(*reinterpret_cast< Vec3f*>(_v)); break;
        case 50: _t->setFlagGalacticPoles(*reinterpret_cast< bool*>(_v)); break;
        case 51: _t->setColorGalacticPoles(*reinterpret_cast< Vec3f*>(_v)); break;
        case 52: _t->setFlagSupergalacticPoles(*reinterpret_cast< bool*>(_v)); break;
        case 53: _t->setColorSupergalacticPoles(*reinterpret_cast< Vec3f*>(_v)); break;
        case 54: _t->setFlagEquinoxJ2000Points(*reinterpret_cast< bool*>(_v)); break;
        case 55: _t->setColorEquinoxJ2000Points(*reinterpret_cast< Vec3f*>(_v)); break;
        case 56: _t->setFlagEquinoxPoints(*reinterpret_cast< bool*>(_v)); break;
        case 57: _t->setColorEquinoxPoints(*reinterpret_cast< Vec3f*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject GridLinesMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_GridLinesMgr.data,
      qt_meta_data_GridLinesMgr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GridLinesMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GridLinesMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GridLinesMgr.stringdata0))
        return static_cast<void*>(const_cast< GridLinesMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int GridLinesMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 177)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 177;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 177)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 177;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 58;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 58;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 58;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 58;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 58;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GridLinesMgr::azimuthalGridDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GridLinesMgr::azimuthalGridColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GridLinesMgr::equatorGridDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GridLinesMgr::equatorGridColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GridLinesMgr::equatorJ2000GridDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GridLinesMgr::equatorJ2000GridColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GridLinesMgr::eclipticGridDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GridLinesMgr::eclipticGridColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GridLinesMgr::eclipticJ2000GridDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GridLinesMgr::eclipticJ2000GridColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GridLinesMgr::galacticGridDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GridLinesMgr::galacticGridColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GridLinesMgr::supergalacticGridDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GridLinesMgr::supergalacticGridColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GridLinesMgr::equatorLineDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GridLinesMgr::equatorLineColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 15, _a);
}

// SIGNAL 16
void GridLinesMgr::equatorJ2000LineDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GridLinesMgr::equatorJ2000LineColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 17, _a);
}

// SIGNAL 18
void GridLinesMgr::eclipticLineDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 18, _a);
}

// SIGNAL 19
void GridLinesMgr::eclipticLineColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 19, _a);
}

// SIGNAL 20
void GridLinesMgr::eclipticJ2000LineDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 20, _a);
}

// SIGNAL 21
void GridLinesMgr::eclipticJ2000LineColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 21, _a);
}

// SIGNAL 22
void GridLinesMgr::precessionCirclesDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 22, _a);
}

// SIGNAL 23
void GridLinesMgr::precessionCirclesColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 23, _a);
}

// SIGNAL 24
void GridLinesMgr::meridianLineDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 24, _a);
}

// SIGNAL 25
void GridLinesMgr::meridianLineColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 25, _a);
}

// SIGNAL 26
void GridLinesMgr::longitudeLineDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 26, _a);
}

// SIGNAL 27
void GridLinesMgr::longitudeLineColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 27, _a);
}

// SIGNAL 28
void GridLinesMgr::horizonLineDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 28, _a);
}

// SIGNAL 29
void GridLinesMgr::horizonLineColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 29, _a);
}

// SIGNAL 30
void GridLinesMgr::galacticEquatorLineDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 30, _a);
}

// SIGNAL 31
void GridLinesMgr::galacticEquatorLineColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 31, _a);
}

// SIGNAL 32
void GridLinesMgr::supergalacticEquatorLineDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 32, _a);
}

// SIGNAL 33
void GridLinesMgr::supergalacticEquatorLineColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 33, _a);
}

// SIGNAL 34
void GridLinesMgr::primeVerticalLineDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 34, _a);
}

// SIGNAL 35
void GridLinesMgr::primeVerticalLineColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 35, _a);
}

// SIGNAL 36
void GridLinesMgr::colureLinesDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 36, _a);
}

// SIGNAL 37
void GridLinesMgr::colureLinesColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 37, _a);
}

// SIGNAL 38
void GridLinesMgr::circumpolarCirclesDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 38, _a);
}

// SIGNAL 39
void GridLinesMgr::circumpolarCirclesColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 39, _a);
}

// SIGNAL 40
void GridLinesMgr::celestialJ2000PolesDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 40, _a);
}

// SIGNAL 41
void GridLinesMgr::celestialJ2000PolesColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 41, _a);
}

// SIGNAL 42
void GridLinesMgr::celestialPolesDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 42, _a);
}

// SIGNAL 43
void GridLinesMgr::celestialPolesColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 43, _a);
}

// SIGNAL 44
void GridLinesMgr::zenithNadirDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 44, _a);
}

// SIGNAL 45
void GridLinesMgr::zenithNadirColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 45, _a);
}

// SIGNAL 46
void GridLinesMgr::eclipticJ2000PolesDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 46, _a);
}

// SIGNAL 47
void GridLinesMgr::eclipticJ2000PolesColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 47, _a);
}

// SIGNAL 48
void GridLinesMgr::eclipticPolesDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 48, _a);
}

// SIGNAL 49
void GridLinesMgr::eclipticPolesColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 49, _a);
}

// SIGNAL 50
void GridLinesMgr::galacticPolesDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 50, _a);
}

// SIGNAL 51
void GridLinesMgr::galacticPolesColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 51, _a);
}

// SIGNAL 52
void GridLinesMgr::supergalacticPolesDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 52, _a);
}

// SIGNAL 53
void GridLinesMgr::supergalacticPolesColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 53, _a);
}

// SIGNAL 54
void GridLinesMgr::equinoxJ2000PointsDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 54, _a);
}

// SIGNAL 55
void GridLinesMgr::equinoxJ2000PointsColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 55, _a);
}

// SIGNAL 56
void GridLinesMgr::equinoxPointsDisplayedChanged(const bool _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 56, _a);
}

// SIGNAL 57
void GridLinesMgr::equinoxPointsColorChanged(const Vec3f & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GridLinesMgr *>(this), &staticMetaObject, 57, _a);
}
QT_END_MOC_NAMESPACE
