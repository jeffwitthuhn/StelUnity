/****************************************************************************
** Meta object code from reading C++ file 'Scenery3dMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/Scenery3d/src/Scenery3dMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scenery3dMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scenery3dMgr_t {
    QByteArrayData data[127];
    char stringdata0[2320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scenery3dMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scenery3dMgr_t qt_meta_stringdata_Scenery3dMgr = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Scenery3dMgr"
QT_MOC_LITERAL(1, 13, 18), // "enableSceneChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "val"
QT_MOC_LITERAL(4, 37, 26), // "enablePixelLightingChanged"
QT_MOC_LITERAL(5, 64, 20), // "enableShadowsChanged"
QT_MOC_LITERAL(6, 85, 23), // "useSimpleShadowsChanged"
QT_MOC_LITERAL(7, 109, 18), // "enableBumpsChanged"
QT_MOC_LITERAL(8, 128, 26), // "shadowFilterQualityChanged"
QT_MOC_LITERAL(9, 155, 28), // "S3DEnum::ShadowFilterQuality"
QT_MOC_LITERAL(10, 184, 17), // "enablePCSSChanged"
QT_MOC_LITERAL(11, 202, 22), // "cubemappingModeChanged"
QT_MOC_LITERAL(12, 225, 24), // "S3DEnum::CubemappingMode"
QT_MOC_LITERAL(13, 250, 28), // "useFullCubemapShadowsChanged"
QT_MOC_LITERAL(14, 279, 22), // "enableDebugInfoChanged"
QT_MOC_LITERAL(15, 302, 25), // "enableLocationInfoChanged"
QT_MOC_LITERAL(16, 328, 23), // "enableTorchLightChanged"
QT_MOC_LITERAL(17, 352, 20), // "torchStrengthChanged"
QT_MOC_LITERAL(18, 373, 17), // "torchRangeChanged"
QT_MOC_LITERAL(19, 391, 24), // "enableLazyDrawingChanged"
QT_MOC_LITERAL(20, 416, 26), // "lazyDrawingIntervalChanged"
QT_MOC_LITERAL(21, 443, 33), // "onlyDominantFaceWhenMovingCha..."
QT_MOC_LITERAL(22, 477, 35), // "secondDominantFaceWhenMovingC..."
QT_MOC_LITERAL(23, 513, 18), // "cubemapSizeChanged"
QT_MOC_LITERAL(24, 532, 20), // "shadowmapSizeChanged"
QT_MOC_LITERAL(25, 553, 19), // "currentSceneChanged"
QT_MOC_LITERAL(26, 573, 9), // "SceneInfo"
QT_MOC_LITERAL(27, 583, 9), // "sceneInfo"
QT_MOC_LITERAL(28, 593, 14), // "progressReport"
QT_MOC_LITERAL(29, 608, 3), // "str"
QT_MOC_LITERAL(30, 612, 3), // "min"
QT_MOC_LITERAL(31, 616, 3), // "max"
QT_MOC_LITERAL(32, 620, 13), // "reloadShaders"
QT_MOC_LITERAL(33, 634, 11), // "showMessage"
QT_MOC_LITERAL(34, 646, 7), // "message"
QT_MOC_LITERAL(35, 654, 20), // "showStoredViewDialog"
QT_MOC_LITERAL(36, 675, 14), // "setEnableScene"
QT_MOC_LITERAL(37, 690, 14), // "getEnableScene"
QT_MOC_LITERAL(38, 705, 22), // "setEnablePixelLighting"
QT_MOC_LITERAL(39, 728, 22), // "getEnablePixelLighting"
QT_MOC_LITERAL(40, 751, 16), // "setEnableShadows"
QT_MOC_LITERAL(41, 768, 13), // "enableShadows"
QT_MOC_LITERAL(42, 782, 16), // "getEnableShadows"
QT_MOC_LITERAL(43, 799, 19), // "setUseSimpleShadows"
QT_MOC_LITERAL(44, 819, 13), // "simpleShadows"
QT_MOC_LITERAL(45, 833, 19), // "getUseSimpleShadows"
QT_MOC_LITERAL(46, 853, 14), // "setEnableBumps"
QT_MOC_LITERAL(47, 868, 11), // "enableBumps"
QT_MOC_LITERAL(48, 880, 14), // "getEnableBumps"
QT_MOC_LITERAL(49, 895, 22), // "getShadowFilterQuality"
QT_MOC_LITERAL(50, 918, 22), // "setShadowFilterQuality"
QT_MOC_LITERAL(51, 941, 13), // "setEnablePCSS"
QT_MOC_LITERAL(52, 955, 13), // "getEnablePCSS"
QT_MOC_LITERAL(53, 969, 18), // "getCubemappingMode"
QT_MOC_LITERAL(54, 988, 18), // "setCubemappingMode"
QT_MOC_LITERAL(55, 1007, 24), // "getUseFullCubemapShadows"
QT_MOC_LITERAL(56, 1032, 24), // "setUseFullCubemapShadows"
QT_MOC_LITERAL(57, 1057, 21), // "useFullCubemapShadows"
QT_MOC_LITERAL(58, 1079, 18), // "setEnableDebugInfo"
QT_MOC_LITERAL(59, 1098, 12), // "debugEnabled"
QT_MOC_LITERAL(60, 1111, 18), // "getEnableDebugInfo"
QT_MOC_LITERAL(61, 1130, 21), // "setEnableLocationInfo"
QT_MOC_LITERAL(62, 1152, 18), // "enableLocationInfo"
QT_MOC_LITERAL(63, 1171, 21), // "getEnableLocationInfo"
QT_MOC_LITERAL(64, 1193, 19), // "setEnableTorchLight"
QT_MOC_LITERAL(65, 1213, 16), // "enableTorchLight"
QT_MOC_LITERAL(66, 1230, 19), // "getEnableTorchLight"
QT_MOC_LITERAL(67, 1250, 16), // "setTorchStrength"
QT_MOC_LITERAL(68, 1267, 13), // "torchStrength"
QT_MOC_LITERAL(69, 1281, 16), // "getTorchStrength"
QT_MOC_LITERAL(70, 1298, 13), // "setTorchRange"
QT_MOC_LITERAL(71, 1312, 10), // "torchRange"
QT_MOC_LITERAL(72, 1323, 13), // "getTorchRange"
QT_MOC_LITERAL(73, 1337, 20), // "setEnableLazyDrawing"
QT_MOC_LITERAL(74, 1358, 20), // "getEnableLazyDrawing"
QT_MOC_LITERAL(75, 1379, 29), // "setOnlyDominantFaceWhenMoving"
QT_MOC_LITERAL(76, 1409, 29), // "getOnlyDominantFaceWhenMoving"
QT_MOC_LITERAL(77, 1439, 31), // "setSecondDominantFaceWhenMoving"
QT_MOC_LITERAL(78, 1471, 31), // "getSecondDominantFaceWhenMoving"
QT_MOC_LITERAL(79, 1503, 18), // "forceCubemapRedraw"
QT_MOC_LITERAL(80, 1522, 22), // "setLazyDrawingInterval"
QT_MOC_LITERAL(81, 1545, 22), // "getLazyDrawingInterval"
QT_MOC_LITERAL(82, 1568, 14), // "setCubemapSize"
QT_MOC_LITERAL(83, 1583, 14), // "getCubemapSize"
QT_MOC_LITERAL(84, 1598, 16), // "setShadowmapSize"
QT_MOC_LITERAL(85, 1615, 16), // "getShadowmapSize"
QT_MOC_LITERAL(86, 1632, 28), // "getIsGeometryShaderSupported"
QT_MOC_LITERAL(87, 1661, 22), // "getAreShadowsSupported"
QT_MOC_LITERAL(88, 1684, 29), // "getIsShadowFilteringSupported"
QT_MOC_LITERAL(89, 1714, 10), // "getIsANGLE"
QT_MOC_LITERAL(90, 1725, 25), // "getMaximumFramebufferSize"
QT_MOC_LITERAL(91, 1751, 15), // "getCurrentScene"
QT_MOC_LITERAL(92, 1767, 15), // "getLoadingScene"
QT_MOC_LITERAL(93, 1783, 19), // "loadScenery3dByName"
QT_MOC_LITERAL(94, 1803, 4), // "name"
QT_MOC_LITERAL(95, 1808, 17), // "loadScenery3dByID"
QT_MOC_LITERAL(96, 1826, 2), // "id"
QT_MOC_LITERAL(97, 1829, 21), // "getDefaultScenery3dID"
QT_MOC_LITERAL(98, 1851, 21), // "setDefaultScenery3dID"
QT_MOC_LITERAL(99, 1873, 7), // "setView"
QT_MOC_LITERAL(100, 1881, 10), // "StoredView"
QT_MOC_LITERAL(101, 1892, 4), // "view"
QT_MOC_LITERAL(102, 1897, 7), // "setDate"
QT_MOC_LITERAL(103, 1905, 14), // "getCurrentView"
QT_MOC_LITERAL(104, 1920, 12), // "clearMessage"
QT_MOC_LITERAL(105, 1933, 18), // "loadSceneCompleted"
QT_MOC_LITERAL(106, 1952, 15), // "progressReceive"
QT_MOC_LITERAL(107, 1968, 9), // "loadScene"
QT_MOC_LITERAL(108, 1978, 5), // "scene"
QT_MOC_LITERAL(109, 1984, 11), // "enableScene"
QT_MOC_LITERAL(110, 1996, 19), // "enablePixelLighting"
QT_MOC_LITERAL(111, 2016, 16), // "useSimpleShadows"
QT_MOC_LITERAL(112, 2033, 19), // "shadowFilterQuality"
QT_MOC_LITERAL(113, 2053, 10), // "enablePCSS"
QT_MOC_LITERAL(114, 2064, 15), // "cubemappingMode"
QT_MOC_LITERAL(115, 2080, 15), // "enableDebugInfo"
QT_MOC_LITERAL(116, 2096, 17), // "enableLazyDrawing"
QT_MOC_LITERAL(117, 2114, 19), // "lazyDrawingInterval"
QT_MOC_LITERAL(118, 2134, 26), // "onlyDominantFaceWhenMoving"
QT_MOC_LITERAL(119, 2161, 28), // "secondDominantFaceWhenMoving"
QT_MOC_LITERAL(120, 2190, 11), // "cubemapSize"
QT_MOC_LITERAL(121, 2202, 13), // "shadowmapSize"
QT_MOC_LITERAL(122, 2216, 25), // "isGeometryShaderSupported"
QT_MOC_LITERAL(123, 2242, 19), // "areShadowsSupported"
QT_MOC_LITERAL(124, 2262, 26), // "isShadowFilteringSupported"
QT_MOC_LITERAL(125, 2289, 7), // "isANGLE"
QT_MOC_LITERAL(126, 2297, 22) // "maximumFramebufferSize"

    },
    "Scenery3dMgr\0enableSceneChanged\0\0val\0"
    "enablePixelLightingChanged\0"
    "enableShadowsChanged\0useSimpleShadowsChanged\0"
    "enableBumpsChanged\0shadowFilterQualityChanged\0"
    "S3DEnum::ShadowFilterQuality\0"
    "enablePCSSChanged\0cubemappingModeChanged\0"
    "S3DEnum::CubemappingMode\0"
    "useFullCubemapShadowsChanged\0"
    "enableDebugInfoChanged\0enableLocationInfoChanged\0"
    "enableTorchLightChanged\0torchStrengthChanged\0"
    "torchRangeChanged\0enableLazyDrawingChanged\0"
    "lazyDrawingIntervalChanged\0"
    "onlyDominantFaceWhenMovingChanged\0"
    "secondDominantFaceWhenMovingChanged\0"
    "cubemapSizeChanged\0shadowmapSizeChanged\0"
    "currentSceneChanged\0SceneInfo\0sceneInfo\0"
    "progressReport\0str\0min\0max\0reloadShaders\0"
    "showMessage\0message\0showStoredViewDialog\0"
    "setEnableScene\0getEnableScene\0"
    "setEnablePixelLighting\0getEnablePixelLighting\0"
    "setEnableShadows\0enableShadows\0"
    "getEnableShadows\0setUseSimpleShadows\0"
    "simpleShadows\0getUseSimpleShadows\0"
    "setEnableBumps\0enableBumps\0getEnableBumps\0"
    "getShadowFilterQuality\0setShadowFilterQuality\0"
    "setEnablePCSS\0getEnablePCSS\0"
    "getCubemappingMode\0setCubemappingMode\0"
    "getUseFullCubemapShadows\0"
    "setUseFullCubemapShadows\0useFullCubemapShadows\0"
    "setEnableDebugInfo\0debugEnabled\0"
    "getEnableDebugInfo\0setEnableLocationInfo\0"
    "enableLocationInfo\0getEnableLocationInfo\0"
    "setEnableTorchLight\0enableTorchLight\0"
    "getEnableTorchLight\0setTorchStrength\0"
    "torchStrength\0getTorchStrength\0"
    "setTorchRange\0torchRange\0getTorchRange\0"
    "setEnableLazyDrawing\0getEnableLazyDrawing\0"
    "setOnlyDominantFaceWhenMoving\0"
    "getOnlyDominantFaceWhenMoving\0"
    "setSecondDominantFaceWhenMoving\0"
    "getSecondDominantFaceWhenMoving\0"
    "forceCubemapRedraw\0setLazyDrawingInterval\0"
    "getLazyDrawingInterval\0setCubemapSize\0"
    "getCubemapSize\0setShadowmapSize\0"
    "getShadowmapSize\0getIsGeometryShaderSupported\0"
    "getAreShadowsSupported\0"
    "getIsShadowFilteringSupported\0getIsANGLE\0"
    "getMaximumFramebufferSize\0getCurrentScene\0"
    "getLoadingScene\0loadScenery3dByName\0"
    "name\0loadScenery3dByID\0id\0"
    "getDefaultScenery3dID\0setDefaultScenery3dID\0"
    "setView\0StoredView\0view\0setDate\0"
    "getCurrentView\0clearMessage\0"
    "loadSceneCompleted\0progressReceive\0"
    "loadScene\0scene\0enableScene\0"
    "enablePixelLighting\0useSimpleShadows\0"
    "shadowFilterQuality\0enablePCSS\0"
    "cubemappingMode\0enableDebugInfo\0"
    "enableLazyDrawing\0lazyDrawingInterval\0"
    "onlyDominantFaceWhenMoving\0"
    "secondDominantFaceWhenMoving\0cubemapSize\0"
    "shadowmapSize\0isGeometryShaderSupported\0"
    "areShadowsSupported\0isShadowFilteringSupported\0"
    "isANGLE\0maximumFramebufferSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scenery3dMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      83,   14, // methods
      25,  624, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  429,    2, 0x06 /* Public */,
       4,    1,  432,    2, 0x06 /* Public */,
       5,    1,  435,    2, 0x06 /* Public */,
       6,    1,  438,    2, 0x06 /* Public */,
       7,    1,  441,    2, 0x06 /* Public */,
       8,    1,  444,    2, 0x06 /* Public */,
      10,    1,  447,    2, 0x06 /* Public */,
      11,    1,  450,    2, 0x06 /* Public */,
      13,    1,  453,    2, 0x06 /* Public */,
      14,    1,  456,    2, 0x06 /* Public */,
      15,    1,  459,    2, 0x06 /* Public */,
      16,    1,  462,    2, 0x06 /* Public */,
      17,    1,  465,    2, 0x06 /* Public */,
      18,    1,  468,    2, 0x06 /* Public */,
      19,    1,  471,    2, 0x06 /* Public */,
      20,    1,  474,    2, 0x06 /* Public */,
      21,    1,  477,    2, 0x06 /* Public */,
      22,    1,  480,    2, 0x06 /* Public */,
      23,    1,  483,    2, 0x06 /* Public */,
      24,    1,  486,    2, 0x06 /* Public */,
      25,    1,  489,    2, 0x06 /* Public */,
      28,    4,  492,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      32,    0,  501,    2, 0x0a /* Public */,
      33,    1,  502,    2, 0x0a /* Public */,
      35,    0,  505,    2, 0x0a /* Public */,
      36,    1,  506,    2, 0x0a /* Public */,
      37,    0,  509,    2, 0x0a /* Public */,
      38,    1,  510,    2, 0x0a /* Public */,
      39,    0,  513,    2, 0x0a /* Public */,
      40,    1,  514,    2, 0x0a /* Public */,
      42,    0,  517,    2, 0x0a /* Public */,
      43,    1,  518,    2, 0x0a /* Public */,
      45,    0,  521,    2, 0x0a /* Public */,
      46,    1,  522,    2, 0x0a /* Public */,
      48,    0,  525,    2, 0x0a /* Public */,
      49,    0,  526,    2, 0x0a /* Public */,
      50,    1,  527,    2, 0x0a /* Public */,
      51,    1,  530,    2, 0x0a /* Public */,
      52,    0,  533,    2, 0x0a /* Public */,
      53,    0,  534,    2, 0x0a /* Public */,
      54,    1,  535,    2, 0x0a /* Public */,
      55,    0,  538,    2, 0x0a /* Public */,
      56,    1,  539,    2, 0x0a /* Public */,
      58,    1,  542,    2, 0x0a /* Public */,
      60,    0,  545,    2, 0x0a /* Public */,
      61,    1,  546,    2, 0x0a /* Public */,
      63,    0,  549,    2, 0x0a /* Public */,
      64,    1,  550,    2, 0x0a /* Public */,
      66,    0,  553,    2, 0x0a /* Public */,
      67,    1,  554,    2, 0x0a /* Public */,
      69,    0,  557,    2, 0x0a /* Public */,
      70,    1,  558,    2, 0x0a /* Public */,
      72,    0,  561,    2, 0x0a /* Public */,
      73,    1,  562,    2, 0x0a /* Public */,
      74,    0,  565,    2, 0x0a /* Public */,
      75,    1,  566,    2, 0x0a /* Public */,
      76,    0,  569,    2, 0x0a /* Public */,
      77,    1,  570,    2, 0x0a /* Public */,
      78,    0,  573,    2, 0x0a /* Public */,
      79,    0,  574,    2, 0x0a /* Public */,
      80,    1,  575,    2, 0x0a /* Public */,
      81,    0,  578,    2, 0x0a /* Public */,
      82,    1,  579,    2, 0x0a /* Public */,
      83,    0,  582,    2, 0x0a /* Public */,
      84,    1,  583,    2, 0x0a /* Public */,
      85,    0,  586,    2, 0x0a /* Public */,
      86,    0,  587,    2, 0x0a /* Public */,
      87,    0,  588,    2, 0x0a /* Public */,
      88,    0,  589,    2, 0x0a /* Public */,
      89,    0,  590,    2, 0x0a /* Public */,
      90,    0,  591,    2, 0x0a /* Public */,
      91,    0,  592,    2, 0x0a /* Public */,
      92,    0,  593,    2, 0x0a /* Public */,
      93,    1,  594,    2, 0x0a /* Public */,
      95,    1,  597,    2, 0x0a /* Public */,
      97,    0,  600,    2, 0x0a /* Public */,
      98,    1,  601,    2, 0x0a /* Public */,
      99,    2,  604,    2, 0x0a /* Public */,
     103,    0,  609,    2, 0x0a /* Public */,
     104,    0,  610,    2, 0x08 /* Private */,
     105,    0,  611,    2, 0x08 /* Private */,
     106,    4,  612,    2, 0x08 /* Private */,
     107,    1,  621,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 9,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 12,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,   29,    3,   30,   31,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Bool,
    0x80000000 | 9,
    QMetaType::Void, 0x80000000 | 9,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    0x80000000 | 12,
    QMetaType::Void, 0x80000000 | 12,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   65,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Float,   68,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   71,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Double,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::UInt,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::UInt,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::UInt,
    0x80000000 | 26,
    0x80000000 | 26,
    0x80000000 | 26, QMetaType::QString,   94,
    0x80000000 | 26, QMetaType::QString,   96,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   96,
    QMetaType::Void, 0x80000000 | 100, QMetaType::Bool,  101,  102,
    0x80000000 | 100,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,   29,    3,   30,   31,
    QMetaType::Void, 0x80000000 | 26,  108,

 // properties: name, type, flags
     109, QMetaType::Bool, 0x00495103,
     110, QMetaType::Bool, 0x00495103,
      41, QMetaType::Bool, 0x00495103,
     111, QMetaType::Bool, 0x00495103,
      47, QMetaType::Bool, 0x00495103,
     112, 0x80000000 | 9, 0x0049510b,
     113, QMetaType::Bool, 0x00495103,
     114, 0x80000000 | 12, 0x0049510b,
      57, QMetaType::Bool, 0x00495103,
     115, QMetaType::Bool, 0x00495103,
      62, QMetaType::Bool, 0x00495103,
      65, QMetaType::Bool, 0x00495103,
      68, QMetaType::Float, 0x00495103,
      71, QMetaType::Float, 0x00495103,
     116, QMetaType::Bool, 0x00495103,
     117, QMetaType::Double, 0x00495103,
     118, QMetaType::Bool, 0x00495103,
     119, QMetaType::Bool, 0x00495103,
     120, QMetaType::UInt, 0x00495103,
     121, QMetaType::UInt, 0x00495103,
     122, QMetaType::Bool, 0x00095001,
     123, QMetaType::Bool, 0x00095001,
     124, QMetaType::Bool, 0x00095001,
     125, QMetaType::Bool, 0x00095001,
     126, QMetaType::UInt, 0x00095001,

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
      14,
      15,
      16,
      17,
      18,
      19,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void Scenery3dMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scenery3dMgr *_t = static_cast<Scenery3dMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableSceneChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->enablePixelLightingChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->enableShadowsChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->useSimpleShadowsChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->enableBumpsChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->shadowFilterQualityChanged((*reinterpret_cast< const S3DEnum::ShadowFilterQuality(*)>(_a[1]))); break;
        case 6: _t->enablePCSSChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->cubemappingModeChanged((*reinterpret_cast< const S3DEnum::CubemappingMode(*)>(_a[1]))); break;
        case 8: _t->useFullCubemapShadowsChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 9: _t->enableDebugInfoChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 10: _t->enableLocationInfoChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 11: _t->enableTorchLightChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 12: _t->torchStrengthChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->torchRangeChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 14: _t->enableLazyDrawingChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 15: _t->lazyDrawingIntervalChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 16: _t->onlyDominantFaceWhenMovingChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 17: _t->secondDominantFaceWhenMovingChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 18: _t->cubemapSizeChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 19: _t->shadowmapSizeChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 20: _t->currentSceneChanged((*reinterpret_cast< const SceneInfo(*)>(_a[1]))); break;
        case 21: _t->progressReport((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 22: _t->reloadShaders(); break;
        case 23: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->showStoredViewDialog(); break;
        case 25: _t->setEnableScene((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 26: { bool _r = _t->getEnableScene();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->setEnablePixelLighting((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 28: { bool _r = _t->getEnablePixelLighting();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: _t->setEnableShadows((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 30: { bool _r = _t->getEnableShadows();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: _t->setUseSimpleShadows((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 32: { bool _r = _t->getUseSimpleShadows();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: _t->setEnableBumps((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 34: { bool _r = _t->getEnableBumps();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { S3DEnum::ShadowFilterQuality _r = _t->getShadowFilterQuality();
            if (_a[0]) *reinterpret_cast< S3DEnum::ShadowFilterQuality*>(_a[0]) = _r; }  break;
        case 36: _t->setShadowFilterQuality((*reinterpret_cast< const S3DEnum::ShadowFilterQuality(*)>(_a[1]))); break;
        case 37: _t->setEnablePCSS((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 38: { bool _r = _t->getEnablePCSS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { S3DEnum::CubemappingMode _r = _t->getCubemappingMode();
            if (_a[0]) *reinterpret_cast< S3DEnum::CubemappingMode*>(_a[0]) = _r; }  break;
        case 40: _t->setCubemappingMode((*reinterpret_cast< const S3DEnum::CubemappingMode(*)>(_a[1]))); break;
        case 41: { bool _r = _t->getUseFullCubemapShadows();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: _t->setUseFullCubemapShadows((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 43: _t->setEnableDebugInfo((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 44: { bool _r = _t->getEnableDebugInfo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: _t->setEnableLocationInfo((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 46: { bool _r = _t->getEnableLocationInfo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: _t->setEnableTorchLight((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 48: { bool _r = _t->getEnableTorchLight();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: _t->setTorchStrength((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 50: { float _r = _t->getTorchStrength();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 51: _t->setTorchRange((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 52: { float _r = _t->getTorchRange();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 53: _t->setEnableLazyDrawing((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 54: { bool _r = _t->getEnableLazyDrawing();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 55: _t->setOnlyDominantFaceWhenMoving((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 56: { bool _r = _t->getOnlyDominantFaceWhenMoving();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 57: _t->setSecondDominantFaceWhenMoving((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 58: { bool _r = _t->getSecondDominantFaceWhenMoving();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 59: _t->forceCubemapRedraw(); break;
        case 60: _t->setLazyDrawingInterval((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 61: { double _r = _t->getLazyDrawingInterval();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 62: _t->setCubemapSize((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 63: { uint _r = _t->getCubemapSize();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 64: _t->setShadowmapSize((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 65: { uint _r = _t->getShadowmapSize();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 66: { bool _r = _t->getIsGeometryShaderSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 67: { bool _r = _t->getAreShadowsSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 68: { bool _r = _t->getIsShadowFilteringSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 69: { bool _r = _t->getIsANGLE();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 70: { uint _r = _t->getMaximumFramebufferSize();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 71: { SceneInfo _r = _t->getCurrentScene();
            if (_a[0]) *reinterpret_cast< SceneInfo*>(_a[0]) = _r; }  break;
        case 72: { SceneInfo _r = _t->getLoadingScene();
            if (_a[0]) *reinterpret_cast< SceneInfo*>(_a[0]) = _r; }  break;
        case 73: { SceneInfo _r = _t->loadScenery3dByName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< SceneInfo*>(_a[0]) = _r; }  break;
        case 74: { SceneInfo _r = _t->loadScenery3dByID((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< SceneInfo*>(_a[0]) = _r; }  break;
        case 75: { QString _r = _t->getDefaultScenery3dID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 76: _t->setDefaultScenery3dID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 77: _t->setView((*reinterpret_cast< const StoredView(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 78: { StoredView _r = _t->getCurrentView();
            if (_a[0]) *reinterpret_cast< StoredView*>(_a[0]) = _r; }  break;
        case 79: _t->clearMessage(); break;
        case 80: _t->loadSceneCompleted(); break;
        case 81: _t->progressReceive((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 82: _t->loadScene((*reinterpret_cast< const SceneInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SceneInfo >(); break;
            }
            break;
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SceneInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Scenery3dMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::enableSceneChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::enablePixelLightingChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::enableShadowsChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::useSimpleShadowsChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::enableBumpsChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const S3DEnum::ShadowFilterQuality );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::shadowFilterQualityChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::enablePCSSChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const S3DEnum::CubemappingMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::cubemappingModeChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::useFullCubemapShadowsChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::enableDebugInfoChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::enableLocationInfoChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::enableTorchLightChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::torchStrengthChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::torchRangeChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::enableLazyDrawingChanged)) {
                *result = 14;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::lazyDrawingIntervalChanged)) {
                *result = 15;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::onlyDominantFaceWhenMovingChanged)) {
                *result = 16;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::secondDominantFaceWhenMovingChanged)) {
                *result = 17;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::cubemapSizeChanged)) {
                *result = 18;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::shadowmapSizeChanged)) {
                *result = 19;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const SceneInfo & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::currentSceneChanged)) {
                *result = 20;
            }
        }
        {
            typedef void (Scenery3dMgr::*_t)(const QString & , int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scenery3dMgr::progressReport)) {
                *result = 21;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Scenery3dMgr *_t = static_cast<Scenery3dMgr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getEnableScene(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getEnablePixelLighting(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getEnableShadows(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getUseSimpleShadows(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getEnableBumps(); break;
        case 5: *reinterpret_cast< S3DEnum::ShadowFilterQuality*>(_v) = _t->getShadowFilterQuality(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getEnablePCSS(); break;
        case 7: *reinterpret_cast< S3DEnum::CubemappingMode*>(_v) = _t->getCubemappingMode(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getUseFullCubemapShadows(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getEnableDebugInfo(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getEnableLocationInfo(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getEnableTorchLight(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->getTorchStrength(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getTorchRange(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->getEnableLazyDrawing(); break;
        case 15: *reinterpret_cast< double*>(_v) = _t->getLazyDrawingInterval(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->getOnlyDominantFaceWhenMoving(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->getSecondDominantFaceWhenMoving(); break;
        case 18: *reinterpret_cast< uint*>(_v) = _t->getCubemapSize(); break;
        case 19: *reinterpret_cast< uint*>(_v) = _t->getShadowmapSize(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->getIsGeometryShaderSupported(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->getAreShadowsSupported(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->getIsShadowFilteringSupported(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->getIsANGLE(); break;
        case 24: *reinterpret_cast< uint*>(_v) = _t->getMaximumFramebufferSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Scenery3dMgr *_t = static_cast<Scenery3dMgr *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnableScene(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setEnablePixelLighting(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setEnableShadows(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setUseSimpleShadows(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setEnableBumps(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setShadowFilterQuality(*reinterpret_cast< S3DEnum::ShadowFilterQuality*>(_v)); break;
        case 6: _t->setEnablePCSS(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setCubemappingMode(*reinterpret_cast< S3DEnum::CubemappingMode*>(_v)); break;
        case 8: _t->setUseFullCubemapShadows(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setEnableDebugInfo(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setEnableLocationInfo(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setEnableTorchLight(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setTorchStrength(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setTorchRange(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setEnableLazyDrawing(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setLazyDrawingInterval(*reinterpret_cast< double*>(_v)); break;
        case 16: _t->setOnlyDominantFaceWhenMoving(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setSecondDominantFaceWhenMoving(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->setCubemapSize(*reinterpret_cast< uint*>(_v)); break;
        case 19: _t->setShadowmapSize(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_Scenery3dMgr[] = {
        &S3DEnum::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject Scenery3dMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_Scenery3dMgr.data,
      qt_meta_data_Scenery3dMgr,  qt_static_metacall, qt_meta_extradata_Scenery3dMgr, Q_NULLPTR}
};


const QMetaObject *Scenery3dMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scenery3dMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scenery3dMgr.stringdata0))
        return static_cast<void*>(const_cast< Scenery3dMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int Scenery3dMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 83)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 83;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 83)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 83;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 25;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Scenery3dMgr::enableSceneChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Scenery3dMgr::enablePixelLightingChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Scenery3dMgr::enableShadowsChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Scenery3dMgr::useSimpleShadowsChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Scenery3dMgr::enableBumpsChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Scenery3dMgr::shadowFilterQualityChanged(const S3DEnum::ShadowFilterQuality _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Scenery3dMgr::enablePCSSChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Scenery3dMgr::cubemappingModeChanged(const S3DEnum::CubemappingMode _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Scenery3dMgr::useFullCubemapShadowsChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Scenery3dMgr::enableDebugInfoChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Scenery3dMgr::enableLocationInfoChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Scenery3dMgr::enableTorchLightChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Scenery3dMgr::torchStrengthChanged(const float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Scenery3dMgr::torchRangeChanged(const float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Scenery3dMgr::enableLazyDrawingChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Scenery3dMgr::lazyDrawingIntervalChanged(const double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Scenery3dMgr::onlyDominantFaceWhenMovingChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Scenery3dMgr::secondDominantFaceWhenMovingChanged(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Scenery3dMgr::cubemapSizeChanged(const uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Scenery3dMgr::shadowmapSizeChanged(const uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Scenery3dMgr::currentSceneChanged(const SceneInfo & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Scenery3dMgr::progressReport(const QString & _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
struct qt_meta_stringdata_Scenery3dStelPluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scenery3dStelPluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scenery3dStelPluginInterface_t qt_meta_stringdata_Scenery3dStelPluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 28) // "Scenery3dStelPluginInterface"

    },
    "Scenery3dStelPluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scenery3dStelPluginInterface[] = {

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

void Scenery3dStelPluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Scenery3dStelPluginInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Scenery3dStelPluginInterface.data,
      qt_meta_data_Scenery3dStelPluginInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Scenery3dStelPluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scenery3dStelPluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scenery3dStelPluginInterface.stringdata0))
        return static_cast<void*>(const_cast< Scenery3dStelPluginInterface*>(this));
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< Scenery3dStelPluginInterface*>(this));
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface"))
        return static_cast< StelPluginInterface*>(const_cast< Scenery3dStelPluginInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int Scenery3dStelPluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0xb8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 'o',  'r',  'g',  '.',  's',  't', 
    'e',  'l',  'l',  'a',  'r',  'i',  'u',  'm', 
    '.',  'S',  't',  'e',  'l',  'P',  'l',  'u', 
    'g',  'i',  'n',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  0x9b, 0x09, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x1c, 0x00, 'S',  'c', 
    'e',  'n',  'e',  'r',  'y',  '3',  'd',  'S', 
    't',  'e',  'l',  'P',  'l',  'u',  'g',  'i', 
    'n',  'I',  'n',  't',  'e',  'r',  'f',  'a', 
    'c',  'e',  0x00, 0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x13, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    '|',  0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
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
    0x1c, 0x00, 'S',  'c',  'e',  'n',  'e',  'r', 
    'y',  '3',  'd',  'S',  't',  'e',  'l',  'P', 
    'l',  'u',  'g',  'i',  'n',  'I',  'n',  't', 
    'e',  'r',  'f',  'a',  'c',  'e',  0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(Scenery3dStelPluginInterface, Scenery3dStelPluginInterface)

QT_END_MOC_NAMESPACE
