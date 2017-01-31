/****************************************************************************
** Meta object code from reading C++ file 'SearchDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/SearchDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CompletionLabel_t {
    QByteArrayData data[5];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CompletionLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CompletionLabel_t qt_meta_stringdata_CompletionLabel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CompletionLabel"
QT_MOC_LITERAL(1, 16, 10), // "selectNext"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "selectPrevious"
QT_MOC_LITERAL(4, 43, 11) // "selectFirst"

    },
    "CompletionLabel\0selectNext\0\0selectPrevious\0"
    "selectFirst"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompletionLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CompletionLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CompletionLabel *_t = static_cast<CompletionLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectNext(); break;
        case 1: _t->selectPrevious(); break;
        case 2: _t->selectFirst(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CompletionLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_CompletionLabel.data,
      qt_meta_data_CompletionLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CompletionLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompletionLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CompletionLabel.stringdata0))
        return static_cast<void*>(const_cast< CompletionLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int CompletionLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_SearchDialog_t {
    QByteArrayData data[45];
    char stringdata0[674];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchDialog_t qt_meta_stringdata_SearchDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SearchDialog"
QT_MOC_LITERAL(1, 13, 11), // "retranslate"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "setSimpleStyle"
QT_MOC_LITERAL(4, 41, 26), // "setCurrentCoordinateSystem"
QT_MOC_LITERAL(5, 68, 16), // "CoordinateSystem"
QT_MOC_LITERAL(6, 85, 2), // "cs"
QT_MOC_LITERAL(7, 88, 26), // "getCurrentCoordinateSystem"
QT_MOC_LITERAL(8, 115, 29), // "getCurrentCoordinateSystemKey"
QT_MOC_LITERAL(9, 145, 29), // "setCurrentCoordinateSystemKey"
QT_MOC_LITERAL(10, 175, 3), // "key"
QT_MOC_LITERAL(11, 179, 19), // "setCoordinateSystem"
QT_MOC_LITERAL(12, 199, 4), // "csID"
QT_MOC_LITERAL(13, 204, 29), // "populateCoordinateSystemsList"
QT_MOC_LITERAL(14, 234, 22), // "populateCoordinateAxis"
QT_MOC_LITERAL(15, 257, 18), // "greekLetterClicked"
QT_MOC_LITERAL(16, 276, 21), // "onSimbadStatusChanged"
QT_MOC_LITERAL(17, 298, 19), // "onSearchTextChanged"
QT_MOC_LITERAL(18, 318, 4), // "text"
QT_MOC_LITERAL(19, 323, 10), // "gotoObject"
QT_MOC_LITERAL(20, 334, 8), // "nameI18n"
QT_MOC_LITERAL(21, 343, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(22, 360, 4), // "item"
QT_MOC_LITERAL(23, 365, 17), // "searchListChanged"
QT_MOC_LITERAL(24, 383, 7), // "newText"
QT_MOC_LITERAL(25, 391, 21), // "manualPositionChanged"
QT_MOC_LITERAL(26, 413, 18), // "enableSimbadSearch"
QT_MOC_LITERAL(27, 432, 6), // "enable"
QT_MOC_LITERAL(28, 439, 26), // "enableStartOfWordsAutofill"
QT_MOC_LITERAL(29, 466, 18), // "enableLockPosition"
QT_MOC_LITERAL(30, 485, 18), // "setHasSelectedFlag"
QT_MOC_LITERAL(31, 504, 18), // "selectSimbadServer"
QT_MOC_LITERAL(32, 523, 5), // "index"
QT_MOC_LITERAL(33, 529, 16), // "updateListWidget"
QT_MOC_LITERAL(34, 546, 13), // "updateListTab"
QT_MOC_LITERAL(35, 560, 15), // "showContextMenu"
QT_MOC_LITERAL(36, 576, 2), // "pt"
QT_MOC_LITERAL(37, 579, 10), // "pasteAndGo"
QT_MOC_LITERAL(38, 590, 15), // "equatorialJ2000"
QT_MOC_LITERAL(39, 606, 10), // "equatorial"
QT_MOC_LITERAL(40, 617, 10), // "horizontal"
QT_MOC_LITERAL(41, 628, 8), // "galactic"
QT_MOC_LITERAL(42, 637, 13), // "supergalactic"
QT_MOC_LITERAL(43, 651, 8), // "ecliptic"
QT_MOC_LITERAL(44, 660, 13) // "eclipticJ2000"

    },
    "SearchDialog\0retranslate\0\0setSimpleStyle\0"
    "setCurrentCoordinateSystem\0CoordinateSystem\0"
    "cs\0getCurrentCoordinateSystem\0"
    "getCurrentCoordinateSystemKey\0"
    "setCurrentCoordinateSystemKey\0key\0"
    "setCoordinateSystem\0csID\0"
    "populateCoordinateSystemsList\0"
    "populateCoordinateAxis\0greekLetterClicked\0"
    "onSimbadStatusChanged\0onSearchTextChanged\0"
    "text\0gotoObject\0nameI18n\0QListWidgetItem*\0"
    "item\0searchListChanged\0newText\0"
    "manualPositionChanged\0enableSimbadSearch\0"
    "enable\0enableStartOfWordsAutofill\0"
    "enableLockPosition\0setHasSelectedFlag\0"
    "selectSimbadServer\0index\0updateListWidget\0"
    "updateListTab\0showContextMenu\0pt\0"
    "pasteAndGo\0equatorialJ2000\0equatorial\0"
    "horizontal\0galactic\0supergalactic\0"
    "ecliptic\0eclipticJ2000"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       1,  196, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x0a /* Public */,
       3,    0,  145,    2, 0x0a /* Public */,
       4,    1,  146,    2, 0x0a /* Public */,
       7,    0,  149,    2, 0x0a /* Public */,
       8,    0,  150,    2, 0x0a /* Public */,
       9,    1,  151,    2, 0x0a /* Public */,
      11,    1,  154,    2, 0x0a /* Public */,
      13,    0,  157,    2, 0x0a /* Public */,
      14,    0,  158,    2, 0x0a /* Public */,
      15,    0,  159,    2, 0x08 /* Private */,
      16,    0,  160,    2, 0x08 /* Private */,
      17,    1,  161,    2, 0x08 /* Private */,
      19,    0,  164,    2, 0x08 /* Private */,
      19,    1,  165,    2, 0x08 /* Private */,
      19,    1,  168,    2, 0x08 /* Private */,
      23,    1,  171,    2, 0x08 /* Private */,
      25,    0,  174,    2, 0x08 /* Private */,
      26,    1,  175,    2, 0x08 /* Private */,
      28,    1,  178,    2, 0x08 /* Private */,
      29,    1,  181,    2, 0x08 /* Private */,
      30,    0,  184,    2, 0x08 /* Private */,
      31,    1,  185,    2, 0x08 /* Private */,
      33,    1,  188,    2, 0x08 /* Private */,
      34,    0,  191,    2, 0x08 /* Private */,
      35,    1,  192,    2, 0x08 /* Private */,
      37,    0,  195,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    0x80000000 | 5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   36,
    QMetaType::Void,

 // enums: name, flags, count, data
       5, 0x0,    7,  200,

 // enum data: key, value
      38, uint(SearchDialog::equatorialJ2000),
      39, uint(SearchDialog::equatorial),
      40, uint(SearchDialog::horizontal),
      41, uint(SearchDialog::galactic),
      42, uint(SearchDialog::supergalactic),
      43, uint(SearchDialog::ecliptic),
      44, uint(SearchDialog::eclipticJ2000),

       0        // eod
};

void SearchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchDialog *_t = static_cast<SearchDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->retranslate(); break;
        case 1: _t->setSimpleStyle(); break;
        case 2: _t->setCurrentCoordinateSystem((*reinterpret_cast< CoordinateSystem(*)>(_a[1]))); break;
        case 3: { CoordinateSystem _r = _t->getCurrentCoordinateSystem();
            if (_a[0]) *reinterpret_cast< CoordinateSystem*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->getCurrentCoordinateSystemKey();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->setCurrentCoordinateSystemKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setCoordinateSystem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->populateCoordinateSystemsList(); break;
        case 8: _t->populateCoordinateAxis(); break;
        case 9: _t->greekLetterClicked(); break;
        case 10: _t->onSimbadStatusChanged(); break;
        case 11: _t->onSearchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->gotoObject(); break;
        case 13: _t->gotoObject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->gotoObject((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 15: _t->searchListChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->manualPositionChanged(); break;
        case 17: _t->enableSimbadSearch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->enableStartOfWordsAutofill((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->enableLockPosition((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->setHasSelectedFlag(); break;
        case 21: _t->selectSimbadServer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->updateListWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->updateListTab(); break;
        case 24: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 25: _t->pasteAndGo(); break;
        default: ;
        }
    }
}

const QMetaObject SearchDialog::staticMetaObject = {
    { &StelDialog::staticMetaObject, qt_meta_stringdata_SearchDialog.data,
      qt_meta_data_SearchDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SearchDialog.stringdata0))
        return static_cast<void*>(const_cast< SearchDialog*>(this));
    return StelDialog::qt_metacast(_clname);
}

int SearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
