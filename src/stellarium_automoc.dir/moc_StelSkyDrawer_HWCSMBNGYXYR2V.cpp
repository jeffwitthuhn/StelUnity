/****************************************************************************
** Meta object code from reading C++ file 'StelSkyDrawer.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelSkyDrawer.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelSkyDrawer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelSkyDrawer_t {
    QByteArrayData data[80];
    char stringdata0[1686];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelSkyDrawer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelSkyDrawer_t qt_meta_stringdata_StelSkyDrawer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StelSkyDrawer"
QT_MOC_LITERAL(1, 14, 24), // "relativeStarScaleChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 1), // "b"
QT_MOC_LITERAL(4, 42, 24), // "absoluteStarScaleChanged"
QT_MOC_LITERAL(5, 67, 20), // "twinkleAmountChanged"
QT_MOC_LITERAL(6, 88, 18), // "flagTwinkleChanged"
QT_MOC_LITERAL(7, 107, 23), // "bortleScaleIndexChanged"
QT_MOC_LITERAL(8, 131, 5), // "index"
QT_MOC_LITERAL(9, 137, 29), // "flagStarMagnitudeLimitChanged"
QT_MOC_LITERAL(10, 167, 31), // "flagNebulaMagnitudeLimitChanged"
QT_MOC_LITERAL(11, 199, 31), // "flagPlanetMagnitudeLimitChanged"
QT_MOC_LITERAL(12, 231, 25), // "customStarMagLimitChanged"
QT_MOC_LITERAL(13, 257, 5), // "limit"
QT_MOC_LITERAL(14, 263, 27), // "customNebulaMagLimitChanged"
QT_MOC_LITERAL(15, 291, 27), // "customPlanetMagLimitChanged"
QT_MOC_LITERAL(16, 319, 30), // "flagLuminanceAdaptationChanged"
QT_MOC_LITERAL(17, 350, 28), // "extinctionCoefficientChanged"
QT_MOC_LITERAL(18, 379, 5), // "coeff"
QT_MOC_LITERAL(19, 385, 28), // "atmosphereTemperatureChanged"
QT_MOC_LITERAL(20, 414, 7), // "celsius"
QT_MOC_LITERAL(21, 422, 25), // "atmospherePressureChanged"
QT_MOC_LITERAL(22, 448, 4), // "mbar"
QT_MOC_LITERAL(23, 453, 20), // "setRelativeStarScale"
QT_MOC_LITERAL(24, 474, 20), // "getRelativeStarScale"
QT_MOC_LITERAL(25, 495, 20), // "setAbsoluteStarScale"
QT_MOC_LITERAL(26, 516, 20), // "getAbsoluteStarScale"
QT_MOC_LITERAL(27, 537, 16), // "setTwinkleAmount"
QT_MOC_LITERAL(28, 554, 16), // "getTwinkleAmount"
QT_MOC_LITERAL(29, 571, 14), // "setFlagTwinkle"
QT_MOC_LITERAL(30, 586, 14), // "getFlagTwinkle"
QT_MOC_LITERAL(31, 601, 20), // "setFlagForcedTwinkle"
QT_MOC_LITERAL(32, 622, 20), // "getFlagForcedTwinkle"
QT_MOC_LITERAL(33, 643, 19), // "setBortleScaleIndex"
QT_MOC_LITERAL(34, 663, 19), // "getBortleScaleIndex"
QT_MOC_LITERAL(35, 683, 17), // "getLimitMagnitude"
QT_MOC_LITERAL(36, 701, 25), // "setFlagStarMagnitudeLimit"
QT_MOC_LITERAL(37, 727, 25), // "getFlagStarMagnitudeLimit"
QT_MOC_LITERAL(38, 753, 27), // "setFlagNebulaMagnitudeLimit"
QT_MOC_LITERAL(39, 781, 27), // "getFlagNebulaMagnitudeLimit"
QT_MOC_LITERAL(40, 809, 27), // "setFlagPlanetMagnitudeLimit"
QT_MOC_LITERAL(41, 837, 27), // "getFlagPlanetMagnitudeLimit"
QT_MOC_LITERAL(42, 865, 27), // "getCustomStarMagnitudeLimit"
QT_MOC_LITERAL(43, 893, 27), // "setCustomStarMagnitudeLimit"
QT_MOC_LITERAL(44, 921, 29), // "getCustomNebulaMagnitudeLimit"
QT_MOC_LITERAL(45, 951, 29), // "setCustomNebulaMagnitudeLimit"
QT_MOC_LITERAL(46, 981, 29), // "getCustomPlanetMagnitudeLimit"
QT_MOC_LITERAL(47, 1011, 29), // "setCustomPlanetMagnitudeLimit"
QT_MOC_LITERAL(48, 1041, 17), // "getLimitLuminance"
QT_MOC_LITERAL(49, 1059, 26), // "setFlagLuminanceAdaptation"
QT_MOC_LITERAL(50, 1086, 26), // "getFlagLuminanceAdaptation"
QT_MOC_LITERAL(51, 1113, 20), // "setFlagHasAtmosphere"
QT_MOC_LITERAL(52, 1134, 20), // "getFlagHasAtmosphere"
QT_MOC_LITERAL(53, 1155, 24), // "setExtinctionCoefficient"
QT_MOC_LITERAL(54, 1180, 8), // "extCoeff"
QT_MOC_LITERAL(55, 1189, 24), // "getExtinctionCoefficient"
QT_MOC_LITERAL(56, 1214, 24), // "setAtmosphereTemperature"
QT_MOC_LITERAL(57, 1239, 24), // "getAtmosphereTemperature"
QT_MOC_LITERAL(58, 1264, 21), // "setAtmospherePressure"
QT_MOC_LITERAL(59, 1286, 21), // "getAtmospherePressure"
QT_MOC_LITERAL(60, 1308, 13), // "getExtinction"
QT_MOC_LITERAL(61, 1322, 13), // "getRefraction"
QT_MOC_LITERAL(62, 1336, 23), // "getBig3dModelHaloRadius"
QT_MOC_LITERAL(63, 1360, 23), // "setBig3dModelHaloRadius"
QT_MOC_LITERAL(64, 1384, 1), // "r"
QT_MOC_LITERAL(65, 1386, 17), // "relativeStarScale"
QT_MOC_LITERAL(66, 1404, 17), // "absoluteStarScale"
QT_MOC_LITERAL(67, 1422, 13), // "twinkleAmount"
QT_MOC_LITERAL(68, 1436, 11), // "flagTwinkle"
QT_MOC_LITERAL(69, 1448, 16), // "bortleScaleIndex"
QT_MOC_LITERAL(70, 1465, 22), // "flagStarMagnitudeLimit"
QT_MOC_LITERAL(71, 1488, 24), // "flagNebulaMagnitudeLimit"
QT_MOC_LITERAL(72, 1513, 24), // "flagPlanetMagnitudeLimit"
QT_MOC_LITERAL(73, 1538, 18), // "customStarMagLimit"
QT_MOC_LITERAL(74, 1557, 20), // "customNebulaMagLimit"
QT_MOC_LITERAL(75, 1578, 20), // "customPlanetMagLimit"
QT_MOC_LITERAL(76, 1599, 23), // "flagLuminanceAdaptation"
QT_MOC_LITERAL(77, 1623, 21), // "extinctionCoefficient"
QT_MOC_LITERAL(78, 1645, 21), // "atmosphereTemperature"
QT_MOC_LITERAL(79, 1667, 18) // "atmospherePressure"

    },
    "StelSkyDrawer\0relativeStarScaleChanged\0"
    "\0b\0absoluteStarScaleChanged\0"
    "twinkleAmountChanged\0flagTwinkleChanged\0"
    "bortleScaleIndexChanged\0index\0"
    "flagStarMagnitudeLimitChanged\0"
    "flagNebulaMagnitudeLimitChanged\0"
    "flagPlanetMagnitudeLimitChanged\0"
    "customStarMagLimitChanged\0limit\0"
    "customNebulaMagLimitChanged\0"
    "customPlanetMagLimitChanged\0"
    "flagLuminanceAdaptationChanged\0"
    "extinctionCoefficientChanged\0coeff\0"
    "atmosphereTemperatureChanged\0celsius\0"
    "atmospherePressureChanged\0mbar\0"
    "setRelativeStarScale\0getRelativeStarScale\0"
    "setAbsoluteStarScale\0getAbsoluteStarScale\0"
    "setTwinkleAmount\0getTwinkleAmount\0"
    "setFlagTwinkle\0getFlagTwinkle\0"
    "setFlagForcedTwinkle\0getFlagForcedTwinkle\0"
    "setBortleScaleIndex\0getBortleScaleIndex\0"
    "getLimitMagnitude\0setFlagStarMagnitudeLimit\0"
    "getFlagStarMagnitudeLimit\0"
    "setFlagNebulaMagnitudeLimit\0"
    "getFlagNebulaMagnitudeLimit\0"
    "setFlagPlanetMagnitudeLimit\0"
    "getFlagPlanetMagnitudeLimit\0"
    "getCustomStarMagnitudeLimit\0"
    "setCustomStarMagnitudeLimit\0"
    "getCustomNebulaMagnitudeLimit\0"
    "setCustomNebulaMagnitudeLimit\0"
    "getCustomPlanetMagnitudeLimit\0"
    "setCustomPlanetMagnitudeLimit\0"
    "getLimitLuminance\0setFlagLuminanceAdaptation\0"
    "getFlagLuminanceAdaptation\0"
    "setFlagHasAtmosphere\0getFlagHasAtmosphere\0"
    "setExtinctionCoefficient\0extCoeff\0"
    "getExtinctionCoefficient\0"
    "setAtmosphereTemperature\0"
    "getAtmosphereTemperature\0setAtmospherePressure\0"
    "getAtmospherePressure\0getExtinction\0"
    "getRefraction\0getBig3dModelHaloRadius\0"
    "setBig3dModelHaloRadius\0r\0relativeStarScale\0"
    "absoluteStarScale\0twinkleAmount\0"
    "flagTwinkle\0bortleScaleIndex\0"
    "flagStarMagnitudeLimit\0flagNebulaMagnitudeLimit\0"
    "flagPlanetMagnitudeLimit\0customStarMagLimit\0"
    "customNebulaMagLimit\0customPlanetMagLimit\0"
    "flagLuminanceAdaptation\0extinctionCoefficient\0"
    "atmosphereTemperature\0atmospherePressure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelSkyDrawer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
      15,  422, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  299,    2, 0x06 /* Public */,
       4,    1,  302,    2, 0x06 /* Public */,
       5,    1,  305,    2, 0x06 /* Public */,
       6,    1,  308,    2, 0x06 /* Public */,
       7,    1,  311,    2, 0x06 /* Public */,
       9,    1,  314,    2, 0x06 /* Public */,
      10,    1,  317,    2, 0x06 /* Public */,
      11,    1,  320,    2, 0x06 /* Public */,
      12,    1,  323,    2, 0x06 /* Public */,
      14,    1,  326,    2, 0x06 /* Public */,
      15,    1,  329,    2, 0x06 /* Public */,
      16,    1,  332,    2, 0x06 /* Public */,
      17,    1,  335,    2, 0x06 /* Public */,
      19,    1,  338,    2, 0x06 /* Public */,
      21,    1,  341,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      23,    1,  344,    2, 0x0a /* Public */,
      23,    0,  347,    2, 0x2a /* Public | MethodCloned */,
      24,    0,  348,    2, 0x0a /* Public */,
      25,    1,  349,    2, 0x0a /* Public */,
      25,    0,  352,    2, 0x2a /* Public | MethodCloned */,
      26,    0,  353,    2, 0x0a /* Public */,
      27,    1,  354,    2, 0x0a /* Public */,
      28,    0,  357,    2, 0x0a /* Public */,
      29,    1,  358,    2, 0x0a /* Public */,
      30,    0,  361,    2, 0x0a /* Public */,
      31,    1,  362,    2, 0x0a /* Public */,
      32,    0,  365,    2, 0x0a /* Public */,
      33,    1,  366,    2, 0x0a /* Public */,
      34,    0,  369,    2, 0x0a /* Public */,
      35,    0,  370,    2, 0x0a /* Public */,
      36,    1,  371,    2, 0x0a /* Public */,
      37,    0,  374,    2, 0x0a /* Public */,
      38,    1,  375,    2, 0x0a /* Public */,
      39,    0,  378,    2, 0x0a /* Public */,
      40,    1,  379,    2, 0x0a /* Public */,
      41,    0,  382,    2, 0x0a /* Public */,
      42,    0,  383,    2, 0x0a /* Public */,
      43,    1,  384,    2, 0x0a /* Public */,
      44,    0,  387,    2, 0x0a /* Public */,
      45,    1,  388,    2, 0x0a /* Public */,
      46,    0,  391,    2, 0x0a /* Public */,
      47,    1,  392,    2, 0x0a /* Public */,
      48,    0,  395,    2, 0x0a /* Public */,
      49,    1,  396,    2, 0x0a /* Public */,
      50,    0,  399,    2, 0x0a /* Public */,
      51,    1,  400,    2, 0x0a /* Public */,
      52,    0,  403,    2, 0x0a /* Public */,
      53,    1,  404,    2, 0x0a /* Public */,
      55,    0,  407,    2, 0x0a /* Public */,
      56,    1,  408,    2, 0x0a /* Public */,
      57,    0,  411,    2, 0x0a /* Public */,
      58,    1,  412,    2, 0x0a /* Public */,
      59,    0,  415,    2, 0x0a /* Public */,
      60,    0,  416,    2, 0x0a /* Public */,
      61,    0,  417,    2, 0x0a /* Public */,
      62,    0,  418,    2, 0x0a /* Public */,
      63,    1,  419,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, QMetaType::Double,   22,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Int,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Double,   54,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Double,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   64,

 // properties: name, type, flags
      65, QMetaType::Double, 0x00495103,
      66, QMetaType::Double, 0x00495103,
      67, QMetaType::Double, 0x00495103,
      68, QMetaType::Bool, 0x00495103,
      69, QMetaType::Int, 0x00495103,
      70, QMetaType::Bool, 0x00495103,
      71, QMetaType::Bool, 0x00495103,
      72, QMetaType::Bool, 0x00495103,
      73, QMetaType::Double, 0x00495003,
      74, QMetaType::Double, 0x00495003,
      75, QMetaType::Double, 0x00495003,
      76, QMetaType::Bool, 0x00495103,
      77, QMetaType::Double, 0x00495103,
      78, QMetaType::Double, 0x00495103,
      79, QMetaType::Double, 0x00495103,

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

       0        // eod
};

void StelSkyDrawer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelSkyDrawer *_t = static_cast<StelSkyDrawer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->relativeStarScaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->absoluteStarScaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->twinkleAmountChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->flagTwinkleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->bortleScaleIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->flagStarMagnitudeLimitChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->flagNebulaMagnitudeLimitChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->flagPlanetMagnitudeLimitChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->customStarMagLimitChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->customNebulaMagLimitChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->customPlanetMagLimitChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->flagLuminanceAdaptationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->extinctionCoefficientChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->atmosphereTemperatureChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->atmospherePressureChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->setRelativeStarScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->setRelativeStarScale(); break;
        case 17: { double _r = _t->getRelativeStarScale();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 18: _t->setAbsoluteStarScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->setAbsoluteStarScale(); break;
        case 20: { double _r = _t->getAbsoluteStarScale();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 21: _t->setTwinkleAmount((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: { double _r = _t->getTwinkleAmount();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 23: _t->setFlagTwinkle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: { bool _r = _t->getFlagTwinkle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: _t->setFlagForcedTwinkle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: { bool _r = _t->getFlagForcedTwinkle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->setBortleScaleIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: { int _r = _t->getBortleScaleIndex();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: { float _r = _t->getLimitMagnitude();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 30: _t->setFlagStarMagnitudeLimit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: { bool _r = _t->getFlagStarMagnitudeLimit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: _t->setFlagNebulaMagnitudeLimit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: { bool _r = _t->getFlagNebulaMagnitudeLimit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: _t->setFlagPlanetMagnitudeLimit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: { bool _r = _t->getFlagPlanetMagnitudeLimit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { double _r = _t->getCustomStarMagnitudeLimit();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 37: _t->setCustomStarMagnitudeLimit((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 38: { double _r = _t->getCustomNebulaMagnitudeLimit();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 39: _t->setCustomNebulaMagnitudeLimit((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 40: { double _r = _t->getCustomPlanetMagnitudeLimit();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 41: _t->setCustomPlanetMagnitudeLimit((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 42: { float _r = _t->getLimitLuminance();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 43: _t->setFlagLuminanceAdaptation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: { bool _r = _t->getFlagLuminanceAdaptation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: _t->setFlagHasAtmosphere((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: { bool _r = _t->getFlagHasAtmosphere();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: _t->setExtinctionCoefficient((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 48: { double _r = _t->getExtinctionCoefficient();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 49: _t->setAtmosphereTemperature((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 50: { double _r = _t->getAtmosphereTemperature();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 51: _t->setAtmospherePressure((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 52: { double _r = _t->getAtmospherePressure();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 53: _t->getExtinction(); break;
        case 54: _t->getRefraction(); break;
        case 55: { float _r = _t->getBig3dModelHaloRadius();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 56: _t->setBig3dModelHaloRadius((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StelSkyDrawer::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::relativeStarScaleChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::absoluteStarScaleChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::twinkleAmountChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::flagTwinkleChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::bortleScaleIndexChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::flagStarMagnitudeLimitChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::flagNebulaMagnitudeLimitChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::flagPlanetMagnitudeLimitChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::customStarMagLimitChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::customNebulaMagLimitChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::customPlanetMagLimitChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::flagLuminanceAdaptationChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::extinctionCoefficientChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::atmosphereTemperatureChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (StelSkyDrawer::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StelSkyDrawer::atmospherePressureChanged)) {
                *result = 14;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        StelSkyDrawer *_t = static_cast<StelSkyDrawer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getRelativeStarScale(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getAbsoluteStarScale(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getTwinkleAmount(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getFlagTwinkle(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getBortleScaleIndex(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getFlagStarMagnitudeLimit(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getFlagNebulaMagnitudeLimit(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getFlagPlanetMagnitudeLimit(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->getCustomStarMagnitudeLimit(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->getCustomNebulaMagnitudeLimit(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->getCustomPlanetMagnitudeLimit(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getFlagLuminanceAdaptation(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->getExtinctionCoefficient(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->getAtmosphereTemperature(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->getAtmospherePressure(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        StelSkyDrawer *_t = static_cast<StelSkyDrawer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRelativeStarScale(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setAbsoluteStarScale(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setTwinkleAmount(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setFlagTwinkle(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setBortleScaleIndex(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setFlagStarMagnitudeLimit(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setFlagNebulaMagnitudeLimit(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setFlagPlanetMagnitudeLimit(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setCustomStarMagnitudeLimit(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setCustomNebulaMagnitudeLimit(*reinterpret_cast< double*>(_v)); break;
        case 10: _t->setCustomPlanetMagnitudeLimit(*reinterpret_cast< double*>(_v)); break;
        case 11: _t->setFlagLuminanceAdaptation(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setExtinctionCoefficient(*reinterpret_cast< double*>(_v)); break;
        case 13: _t->setAtmosphereTemperature(*reinterpret_cast< double*>(_v)); break;
        case 14: _t->setAtmospherePressure(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject StelSkyDrawer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StelSkyDrawer.data,
      qt_meta_data_StelSkyDrawer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelSkyDrawer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelSkyDrawer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelSkyDrawer.stringdata0))
        return static_cast<void*>(const_cast< StelSkyDrawer*>(this));
    return QObject::qt_metacast(_clname);
}

int StelSkyDrawer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 57;
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
void StelSkyDrawer::relativeStarScaleChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StelSkyDrawer::absoluteStarScaleChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StelSkyDrawer::twinkleAmountChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StelSkyDrawer::flagTwinkleChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StelSkyDrawer::bortleScaleIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StelSkyDrawer::flagStarMagnitudeLimitChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StelSkyDrawer::flagNebulaMagnitudeLimitChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StelSkyDrawer::flagPlanetMagnitudeLimitChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void StelSkyDrawer::customStarMagLimitChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void StelSkyDrawer::customNebulaMagLimitChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void StelSkyDrawer::customPlanetMagLimitChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void StelSkyDrawer::flagLuminanceAdaptationChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void StelSkyDrawer::extinctionCoefficientChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void StelSkyDrawer::atmosphereTemperatureChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void StelSkyDrawer::atmospherePressureChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
