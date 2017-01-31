/****************************************************************************
** Meta object code from reading C++ file 'StelVideoMgr.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/StelVideoMgr.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StelVideoMgr.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StelVideoMgr_t {
    QByteArrayData data[73];
    char stringdata0[929];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StelVideoMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StelVideoMgr_t qt_meta_stringdata_StelVideoMgr = {
    {
QT_MOC_LITERAL(0, 0, 12), // "StelVideoMgr"
QT_MOC_LITERAL(1, 13, 4), // "init"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "update"
QT_MOC_LITERAL(4, 26, 9), // "deltaTime"
QT_MOC_LITERAL(5, 36, 9), // "loadVideo"
QT_MOC_LITERAL(6, 46, 8), // "filename"
QT_MOC_LITERAL(7, 55, 2), // "id"
QT_MOC_LITERAL(8, 58, 1), // "x"
QT_MOC_LITERAL(9, 60, 1), // "y"
QT_MOC_LITERAL(10, 62, 4), // "show"
QT_MOC_LITERAL(11, 67, 5), // "alpha"
QT_MOC_LITERAL(12, 73, 9), // "playVideo"
QT_MOC_LITERAL(13, 83, 16), // "keepVisibleAtEnd"
QT_MOC_LITERAL(14, 100, 15), // "playVideoPopout"
QT_MOC_LITERAL(15, 116, 5), // "fromX"
QT_MOC_LITERAL(16, 122, 5), // "fromY"
QT_MOC_LITERAL(17, 128, 9), // "atCenterX"
QT_MOC_LITERAL(18, 138, 9), // "atCenterY"
QT_MOC_LITERAL(19, 148, 10), // "finalSizeX"
QT_MOC_LITERAL(20, 159, 10), // "finalSizeY"
QT_MOC_LITERAL(21, 170, 13), // "popupDuration"
QT_MOC_LITERAL(22, 184, 18), // "frozenInTransition"
QT_MOC_LITERAL(23, 203, 10), // "pauseVideo"
QT_MOC_LITERAL(24, 214, 9), // "stopVideo"
QT_MOC_LITERAL(25, 224, 9), // "dropVideo"
QT_MOC_LITERAL(26, 234, 9), // "seekVideo"
QT_MOC_LITERAL(27, 244, 2), // "ms"
QT_MOC_LITERAL(28, 247, 5), // "pause"
QT_MOC_LITERAL(29, 253, 10), // "setVideoXY"
QT_MOC_LITERAL(30, 264, 8), // "relative"
QT_MOC_LITERAL(31, 273, 13), // "setVideoAlpha"
QT_MOC_LITERAL(32, 287, 11), // "resizeVideo"
QT_MOC_LITERAL(33, 299, 1), // "w"
QT_MOC_LITERAL(34, 301, 1), // "h"
QT_MOC_LITERAL(35, 303, 9), // "showVideo"
QT_MOC_LITERAL(36, 313, 16), // "getVideoDuration"
QT_MOC_LITERAL(37, 330, 16), // "getVideoPosition"
QT_MOC_LITERAL(38, 347, 18), // "getVideoResolution"
QT_MOC_LITERAL(39, 366, 13), // "getVideoWidth"
QT_MOC_LITERAL(40, 380, 14), // "getVideoHeight"
QT_MOC_LITERAL(41, 395, 9), // "muteVideo"
QT_MOC_LITERAL(42, 405, 14), // "setVideoVolume"
QT_MOC_LITERAL(43, 420, 9), // "newVolume"
QT_MOC_LITERAL(44, 430, 14), // "getVideoVolume"
QT_MOC_LITERAL(45, 445, 14), // "isVideoPlaying"
QT_MOC_LITERAL(46, 460, 27), // "handleAudioAvailableChanged"
QT_MOC_LITERAL(47, 488, 9), // "available"
QT_MOC_LITERAL(48, 498, 25), // "handleBufferStatusChanged"
QT_MOC_LITERAL(49, 524, 13), // "percentFilled"
QT_MOC_LITERAL(50, 538, 21), // "handleDurationChanged"
QT_MOC_LITERAL(51, 560, 8), // "duration"
QT_MOC_LITERAL(52, 569, 11), // "handleError"
QT_MOC_LITERAL(53, 581, 19), // "QMediaPlayer::Error"
QT_MOC_LITERAL(54, 601, 5), // "error"
QT_MOC_LITERAL(55, 607, 24), // "handleMediaStatusChanged"
QT_MOC_LITERAL(56, 632, 25), // "QMediaPlayer::MediaStatus"
QT_MOC_LITERAL(57, 658, 6), // "status"
QT_MOC_LITERAL(58, 665, 18), // "handleMutedChanged"
QT_MOC_LITERAL(59, 684, 5), // "muted"
QT_MOC_LITERAL(60, 690, 21), // "handleSeekableChanged"
QT_MOC_LITERAL(61, 712, 8), // "seekable"
QT_MOC_LITERAL(62, 721, 18), // "handleStateChanged"
QT_MOC_LITERAL(63, 740, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(64, 760, 5), // "state"
QT_MOC_LITERAL(65, 766, 27), // "handleVideoAvailableChanged"
QT_MOC_LITERAL(66, 794, 14), // "videoAvailable"
QT_MOC_LITERAL(67, 809, 19), // "handleVolumeChanged"
QT_MOC_LITERAL(68, 829, 6), // "volume"
QT_MOC_LITERAL(69, 836, 25), // "handleAvailabilityChanged"
QT_MOC_LITERAL(70, 862, 31), // "QMultimedia::AvailabilityStatus"
QT_MOC_LITERAL(71, 894, 12), // "availability"
QT_MOC_LITERAL(72, 907, 21) // "handleMetaDataChanged"

    },
    "StelVideoMgr\0init\0\0update\0deltaTime\0"
    "loadVideo\0filename\0id\0x\0y\0show\0alpha\0"
    "playVideo\0keepVisibleAtEnd\0playVideoPopout\0"
    "fromX\0fromY\0atCenterX\0atCenterY\0"
    "finalSizeX\0finalSizeY\0popupDuration\0"
    "frozenInTransition\0pauseVideo\0stopVideo\0"
    "dropVideo\0seekVideo\0ms\0pause\0setVideoXY\0"
    "relative\0setVideoAlpha\0resizeVideo\0w\0"
    "h\0showVideo\0getVideoDuration\0"
    "getVideoPosition\0getVideoResolution\0"
    "getVideoWidth\0getVideoHeight\0muteVideo\0"
    "setVideoVolume\0newVolume\0getVideoVolume\0"
    "isVideoPlaying\0handleAudioAvailableChanged\0"
    "available\0handleBufferStatusChanged\0"
    "percentFilled\0handleDurationChanged\0"
    "duration\0handleError\0QMediaPlayer::Error\0"
    "error\0handleMediaStatusChanged\0"
    "QMediaPlayer::MediaStatus\0status\0"
    "handleMutedChanged\0muted\0handleSeekableChanged\0"
    "seekable\0handleStateChanged\0"
    "QMediaPlayer::State\0state\0"
    "handleVideoAvailableChanged\0videoAvailable\0"
    "handleVolumeChanged\0volume\0"
    "handleAvailabilityChanged\0"
    "QMultimedia::AvailabilityStatus\0"
    "availability\0handleMetaDataChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StelVideoMgr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x0a /* Public */,
       3,    1,  220,    2, 0x0a /* Public */,
       5,    6,  223,    2, 0x0a /* Public */,
      12,    2,  236,    2, 0x0a /* Public */,
      12,    1,  241,    2, 0x2a /* Public | MethodCloned */,
      14,    9,  244,    2, 0x0a /* Public */,
      23,    1,  263,    2, 0x0a /* Public */,
      24,    1,  266,    2, 0x0a /* Public */,
      25,    1,  269,    2, 0x0a /* Public */,
      26,    3,  272,    2, 0x0a /* Public */,
      26,    2,  279,    2, 0x2a /* Public | MethodCloned */,
      29,    4,  284,    2, 0x0a /* Public */,
      29,    3,  293,    2, 0x2a /* Public | MethodCloned */,
      31,    2,  300,    2, 0x0a /* Public */,
      32,    3,  305,    2, 0x0a /* Public */,
      32,    2,  312,    2, 0x2a /* Public | MethodCloned */,
      32,    1,  317,    2, 0x2a /* Public | MethodCloned */,
      35,    2,  320,    2, 0x0a /* Public */,
      36,    1,  325,    2, 0x0a /* Public */,
      37,    1,  328,    2, 0x0a /* Public */,
      38,    1,  331,    2, 0x0a /* Public */,
      39,    1,  334,    2, 0x0a /* Public */,
      40,    1,  337,    2, 0x0a /* Public */,
      41,    2,  340,    2, 0x0a /* Public */,
      41,    1,  345,    2, 0x2a /* Public | MethodCloned */,
      42,    2,  348,    2, 0x0a /* Public */,
      44,    1,  353,    2, 0x0a /* Public */,
      45,    1,  356,    2, 0x0a /* Public */,
      46,    1,  359,    2, 0x08 /* Private */,
      48,    1,  362,    2, 0x08 /* Private */,
      50,    1,  365,    2, 0x08 /* Private */,
      52,    1,  368,    2, 0x08 /* Private */,
      55,    1,  371,    2, 0x08 /* Private */,
      58,    1,  374,    2, 0x08 /* Private */,
      60,    1,  377,    2, 0x08 /* Private */,
      62,    1,  380,    2, 0x08 /* Private */,
      65,    1,  383,    2, 0x08 /* Private */,
      67,    1,  386,    2, 0x08 /* Private */,
      69,    1,  389,    2, 0x08 /* Private */,
      69,    1,  392,    2, 0x08 /* Private */,
      72,    0,  395,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Float,    6,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    7,   13,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    7,   15,   16,   17,   18,   19,   20,   21,   22,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, QMetaType::Bool,    7,   27,   28,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,    7,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    7,    8,    9,   30,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,    7,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,    7,   33,   34,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,    7,   33,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    7,   10,
    QMetaType::LongLong, QMetaType::QString,    7,
    QMetaType::LongLong, QMetaType::QString,    7,
    QMetaType::QSize, QMetaType::QString,    7,
    QMetaType::Int, QMetaType::QString,    7,
    QMetaType::Int, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    7,   41,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    7,   43,
    QMetaType::Int, QMetaType::QString,    7,
    QMetaType::Bool, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::LongLong,   51,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 56,   57,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, 0x80000000 | 63,   64,
    QMetaType::Void, QMetaType::Bool,   66,
    QMetaType::Void, QMetaType::Int,   68,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, 0x80000000 | 70,   71,
    QMetaType::Void,

       0        // eod
};

void StelVideoMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StelVideoMgr *_t = static_cast<StelVideoMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->update((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->loadVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3])),(*reinterpret_cast< const float(*)>(_a[4])),(*reinterpret_cast< const bool(*)>(_a[5])),(*reinterpret_cast< const float(*)>(_a[6]))); break;
        case 3: _t->playVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 4: _t->playVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->playVideoPopout((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 6: _t->pauseVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->stopVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->dropVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->seekVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const qint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 10: _t->seekVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const qint64(*)>(_a[2]))); break;
        case 11: _t->setVideoXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3])),(*reinterpret_cast< const bool(*)>(_a[4]))); break;
        case 12: _t->setVideoXY((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3]))); break;
        case 13: _t->setVideoAlpha((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 14: _t->resizeVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 15: _t->resizeVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 16: _t->resizeVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->showVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 18: { qint64 _r = _t->getVideoDuration((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 19: { qint64 _r = _t->getVideoPosition((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 20: { QSize _r = _t->getVideoResolution((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->getVideoWidth((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->getVideoHeight((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: _t->muteVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 24: _t->muteVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->setVideoVolume((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: { int _r = _t->getVideoVolume((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->isVideoPlaying((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: _t->handleAudioAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->handleBufferStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->handleDurationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 31: _t->handleError((*reinterpret_cast< QMediaPlayer::Error(*)>(_a[1]))); break;
        case 32: _t->handleMediaStatusChanged((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 33: _t->handleMutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->handleSeekableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->handleStateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 36: _t->handleVideoAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->handleVolumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->handleAvailabilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->handleAvailabilityChanged((*reinterpret_cast< QMultimedia::AvailabilityStatus(*)>(_a[1]))); break;
        case 40: _t->handleMetaDataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::Error >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMultimedia::AvailabilityStatus >(); break;
            }
            break;
        }
    }
}

const QMetaObject StelVideoMgr::staticMetaObject = {
    { &StelModule::staticMetaObject, qt_meta_stringdata_StelVideoMgr.data,
      qt_meta_data_StelVideoMgr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StelVideoMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StelVideoMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StelVideoMgr.stringdata0))
        return static_cast<void*>(const_cast< StelVideoMgr*>(this));
    return StelModule::qt_metacast(_clname);
}

int StelVideoMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
