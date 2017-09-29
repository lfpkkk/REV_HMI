/****************************************************************************
** Meta object code from reading C++ file 'rev_hmi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/rev_hmi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rev_hmi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_REV_HMI_t {
    QByteArrayData data[74];
    char stringdata0[1120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_REV_HMI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_REV_HMI_t qt_meta_stringdata_REV_HMI = {
    {
QT_MOC_LITERAL(0, 0, 7), // "REV_HMI"
QT_MOC_LITERAL(1, 8, 8), // "debugMsg"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 9), // "QtMsgType"
QT_MOC_LITERAL(4, 28, 10), // "runEngSimu"
QT_MOC_LITERAL(5, 39, 11), // "stopEngSimu"
QT_MOC_LITERAL(6, 51, 11), // "nameChanged"
QT_MOC_LITERAL(7, 63, 5), // "click"
QT_MOC_LITERAL(8, 69, 6), // "setVol"
QT_MOC_LITERAL(9, 76, 10), // "volChanged"
QT_MOC_LITERAL(10, 87, 7), // "lowBatt"
QT_MOC_LITERAL(11, 95, 29), // "on_pushButton_NNreset_clicked"
QT_MOC_LITERAL(12, 125, 25), // "horizontalSlider_released"
QT_MOC_LITERAL(13, 151, 18), // "on_homeBut_clicked"
QT_MOC_LITERAL(14, 170, 17), // "on_mapBut_clicked"
QT_MOC_LITERAL(15, 188, 19), // "on_musicBut_clicked"
QT_MOC_LITERAL(16, 208, 18), // "on_battBut_clicked"
QT_MOC_LITERAL(17, 227, 18), // "on_tripBut_clicked"
QT_MOC_LITERAL(18, 246, 17), // "on_logBut_clicked"
QT_MOC_LITERAL(19, 264, 15), // "init_ui_battery"
QT_MOC_LITERAL(20, 280, 9), // "cellCount"
QT_MOC_LITERAL(21, 290, 7), // "v2Color"
QT_MOC_LITERAL(22, 298, 7), // "voltage"
QT_MOC_LITERAL(23, 306, 11), // "BatteryType"
QT_MOC_LITERAL(24, 318, 14), // "update_ui_test"
QT_MOC_LITERAL(25, 333, 9), // "InputData"
QT_MOC_LITERAL(26, 343, 9), // "inputData"
QT_MOC_LITERAL(27, 353, 28), // "on_pushButton_export_clicked"
QT_MOC_LITERAL(28, 382, 30), // "on_pushButton_location_clicked"
QT_MOC_LITERAL(29, 413, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(30, 446, 6), // "incVol"
QT_MOC_LITERAL(31, 453, 6), // "decVol"
QT_MOC_LITERAL(32, 460, 37), // "on_pushButton_defaultSettings..."
QT_MOC_LITERAL(33, 498, 26), // "on_pushButton_exit_clicked"
QT_MOC_LITERAL(34, 525, 30), // "on_pushButton_Runsound_clicked"
QT_MOC_LITERAL(35, 556, 33), // "on_pushButton_changeRange_cli..."
QT_MOC_LITERAL(36, 590, 31), // "on_pushButton_loadTrack_clicked"
QT_MOC_LITERAL(37, 622, 33), // "on_pushButton_deleteTrack_cli..."
QT_MOC_LITERAL(38, 656, 31), // "on_pushButton_tripReset_clicked"
QT_MOC_LITERAL(39, 688, 7), // "init_ui"
QT_MOC_LITERAL(40, 696, 7), // "init_io"
QT_MOC_LITERAL(41, 704, 10), // "init_sound"
QT_MOC_LITERAL(42, 715, 11), // "init_ui_map"
QT_MOC_LITERAL(43, 727, 22), // "on_mapContHide_clicked"
QT_MOC_LITERAL(44, 750, 14), // "init_ui_logger"
QT_MOC_LITERAL(45, 765, 20), // "init_ui_debugLogging"
QT_MOC_LITERAL(46, 786, 13), // "driverChanged"
QT_MOC_LITERAL(47, 800, 13), // "update_ui_gps"
QT_MOC_LITERAL(48, 814, 12), // "PositionData"
QT_MOC_LITERAL(49, 827, 12), // "positionData"
QT_MOC_LITERAL(50, 840, 17), // "update_ui_battery"
QT_MOC_LITERAL(51, 858, 11), // "BatteryData"
QT_MOC_LITERAL(52, 870, 11), // "batteryData"
QT_MOC_LITERAL(53, 882, 14), // "update_ui_trip"
QT_MOC_LITERAL(54, 897, 8), // "TripData"
QT_MOC_LITERAL(55, 906, 8), // "tripData"
QT_MOC_LITERAL(56, 915, 12), // "update_ui_io"
QT_MOC_LITERAL(57, 928, 6), // "IOData"
QT_MOC_LITERAL(58, 935, 6), // "ioData"
QT_MOC_LITERAL(59, 942, 20), // "changeLogButtonStart"
QT_MOC_LITERAL(60, 963, 9), // "isLogging"
QT_MOC_LITERAL(61, 973, 20), // "changeLogButtonPause"
QT_MOC_LITERAL(62, 994, 8), // "isPaused"
QT_MOC_LITERAL(63, 1003, 7), // "setInfo"
QT_MOC_LITERAL(64, 1011, 9), // "enterPage"
QT_MOC_LITERAL(65, 1021, 9), // "leavePage"
QT_MOC_LITERAL(66, 1031, 8), // "checkRun"
QT_MOC_LITERAL(67, 1040, 8), // "checkRPM"
QT_MOC_LITERAL(68, 1049, 7), // "graphIV"
QT_MOC_LITERAL(69, 1057, 12), // "QCustomPlot*"
QT_MOC_LITERAL(70, 1070, 6), // "IVPlot"
QT_MOC_LITERAL(71, 1077, 11), // "graphIVSlot"
QT_MOC_LITERAL(72, 1089, 15), // "graphEfficiency"
QT_MOC_LITERAL(73, 1105, 14) // "efficiencyPlot"

    },
    "REV_HMI\0debugMsg\0\0QtMsgType\0runEngSimu\0"
    "stopEngSimu\0nameChanged\0click\0setVol\0"
    "volChanged\0lowBatt\0on_pushButton_NNreset_clicked\0"
    "horizontalSlider_released\0on_homeBut_clicked\0"
    "on_mapBut_clicked\0on_musicBut_clicked\0"
    "on_battBut_clicked\0on_tripBut_clicked\0"
    "on_logBut_clicked\0init_ui_battery\0"
    "cellCount\0v2Color\0voltage\0BatteryType\0"
    "update_ui_test\0InputData\0inputData\0"
    "on_pushButton_export_clicked\0"
    "on_pushButton_location_clicked\0"
    "on_horizontalSlider_valueChanged\0"
    "incVol\0decVol\0on_pushButton_defaultSettings_clicked\0"
    "on_pushButton_exit_clicked\0"
    "on_pushButton_Runsound_clicked\0"
    "on_pushButton_changeRange_clicked\0"
    "on_pushButton_loadTrack_clicked\0"
    "on_pushButton_deleteTrack_clicked\0"
    "on_pushButton_tripReset_clicked\0init_ui\0"
    "init_io\0init_sound\0init_ui_map\0"
    "on_mapContHide_clicked\0init_ui_logger\0"
    "init_ui_debugLogging\0driverChanged\0"
    "update_ui_gps\0PositionData\0positionData\0"
    "update_ui_battery\0BatteryData\0batteryData\0"
    "update_ui_trip\0TripData\0tripData\0"
    "update_ui_io\0IOData\0ioData\0"
    "changeLogButtonStart\0isLogging\0"
    "changeLogButtonPause\0isPaused\0setInfo\0"
    "enterPage\0leavePage\0checkRun\0checkRPM\0"
    "graphIV\0QCustomPlot*\0IVPlot\0graphIVSlot\0"
    "graphEfficiency\0efficiencyPlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_REV_HMI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  284,    2, 0x06 /* Public */,
       4,    0,  291,    2, 0x06 /* Public */,
       5,    0,  292,    2, 0x06 /* Public */,
       6,    0,  293,    2, 0x06 /* Public */,
       7,    0,  294,    2, 0x06 /* Public */,
       8,    1,  295,    2, 0x06 /* Public */,
       9,    0,  298,    2, 0x06 /* Public */,
      10,    0,  299,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  300,    2, 0x08 /* Private */,
      12,    0,  301,    2, 0x08 /* Private */,
      13,    0,  302,    2, 0x08 /* Private */,
      14,    0,  303,    2, 0x08 /* Private */,
      15,    0,  304,    2, 0x08 /* Private */,
      16,    0,  305,    2, 0x08 /* Private */,
      17,    0,  306,    2, 0x08 /* Private */,
      18,    0,  307,    2, 0x08 /* Private */,
      19,    1,  308,    2, 0x08 /* Private */,
      19,    0,  311,    2, 0x28 /* Private | MethodCloned */,
      21,    2,  312,    2, 0x08 /* Private */,
      24,    1,  317,    2, 0x08 /* Private */,
      27,    0,  320,    2, 0x08 /* Private */,
      28,    0,  321,    2, 0x08 /* Private */,
      29,    1,  322,    2, 0x08 /* Private */,
      30,    0,  325,    2, 0x08 /* Private */,
      31,    0,  326,    2, 0x08 /* Private */,
      32,    0,  327,    2, 0x08 /* Private */,
      33,    0,  328,    2, 0x08 /* Private */,
      34,    0,  329,    2, 0x08 /* Private */,
      35,    0,  330,    2, 0x08 /* Private */,
      36,    0,  331,    2, 0x08 /* Private */,
      37,    0,  332,    2, 0x08 /* Private */,
      38,    0,  333,    2, 0x08 /* Private */,
      39,    0,  334,    2, 0x08 /* Private */,
      40,    0,  335,    2, 0x08 /* Private */,
      41,    0,  336,    2, 0x08 /* Private */,
      42,    0,  337,    2, 0x08 /* Private */,
      43,    0,  338,    2, 0x08 /* Private */,
      44,    0,  339,    2, 0x08 /* Private */,
      45,    0,  340,    2, 0x08 /* Private */,
      46,    0,  341,    2, 0x08 /* Private */,
      47,    1,  342,    2, 0x08 /* Private */,
      50,    1,  345,    2, 0x08 /* Private */,
      53,    1,  348,    2, 0x08 /* Private */,
      56,    1,  351,    2, 0x08 /* Private */,
      59,    1,  354,    2, 0x08 /* Private */,
      61,    1,  357,    2, 0x08 /* Private */,
      63,    0,  360,    2, 0x08 /* Private */,
      64,    0,  361,    2, 0x08 /* Private */,
      65,    0,  362,    2, 0x08 /* Private */,
      66,    0,  363,    2, 0x08 /* Private */,
      67,    0,  364,    2, 0x08 /* Private */,
      68,    1,  365,    2, 0x08 /* Private */,
      71,    0,  368,    2, 0x08 /* Private */,
      72,    1,  369,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::QColor, QMetaType::Double, 0x80000000 | 23,   22,    2,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, 0x80000000 | 51,   52,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 69,   73,

       0        // eod
};

void REV_HMI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        REV_HMI *_t = static_cast<REV_HMI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->debugMsg((*reinterpret_cast< QtMsgType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->runEngSimu(); break;
        case 2: _t->stopEngSimu(); break;
        case 3: _t->nameChanged(); break;
        case 4: _t->click(); break;
        case 5: _t->setVol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->volChanged(); break;
        case 7: _t->lowBatt(); break;
        case 8: _t->on_pushButton_NNreset_clicked(); break;
        case 9: _t->horizontalSlider_released(); break;
        case 10: _t->on_homeBut_clicked(); break;
        case 11: _t->on_mapBut_clicked(); break;
        case 12: _t->on_musicBut_clicked(); break;
        case 13: _t->on_battBut_clicked(); break;
        case 14: _t->on_tripBut_clicked(); break;
        case 15: _t->on_logBut_clicked(); break;
        case 16: _t->init_ui_battery((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->init_ui_battery(); break;
        case 18: { QColor _r = _t->v2Color((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< BatteryType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 19: _t->update_ui_test((*reinterpret_cast< InputData(*)>(_a[1]))); break;
        case 20: _t->on_pushButton_export_clicked(); break;
        case 21: _t->on_pushButton_location_clicked(); break;
        case 22: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->incVol(); break;
        case 24: _t->decVol(); break;
        case 25: _t->on_pushButton_defaultSettings_clicked(); break;
        case 26: _t->on_pushButton_exit_clicked(); break;
        case 27: _t->on_pushButton_Runsound_clicked(); break;
        case 28: _t->on_pushButton_changeRange_clicked(); break;
        case 29: _t->on_pushButton_loadTrack_clicked(); break;
        case 30: _t->on_pushButton_deleteTrack_clicked(); break;
        case 31: _t->on_pushButton_tripReset_clicked(); break;
        case 32: _t->init_ui(); break;
        case 33: _t->init_io(); break;
        case 34: _t->init_sound(); break;
        case 35: _t->init_ui_map(); break;
        case 36: _t->on_mapContHide_clicked(); break;
        case 37: _t->init_ui_logger(); break;
        case 38: _t->init_ui_debugLogging(); break;
        case 39: _t->driverChanged(); break;
        case 40: _t->update_ui_gps((*reinterpret_cast< PositionData(*)>(_a[1]))); break;
        case 41: _t->update_ui_battery((*reinterpret_cast< BatteryData(*)>(_a[1]))); break;
        case 42: _t->update_ui_trip((*reinterpret_cast< TripData(*)>(_a[1]))); break;
        case 43: _t->update_ui_io((*reinterpret_cast< IOData(*)>(_a[1]))); break;
        case 44: _t->changeLogButtonStart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->changeLogButtonPause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->setInfo(); break;
        case 47: _t->enterPage(); break;
        case 48: _t->leavePage(); break;
        case 49: _t->checkRun(); break;
        case 50: _t->checkRPM(); break;
        case 51: _t->graphIV((*reinterpret_cast< QCustomPlot*(*)>(_a[1]))); break;
        case 52: _t->graphIVSlot(); break;
        case 53: _t->graphEfficiency((*reinterpret_cast< QCustomPlot*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtMsgType >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCustomPlot* >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCustomPlot* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (REV_HMI::*_t)(QtMsgType , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&REV_HMI::debugMsg)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (REV_HMI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&REV_HMI::runEngSimu)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (REV_HMI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&REV_HMI::stopEngSimu)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (REV_HMI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&REV_HMI::nameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (REV_HMI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&REV_HMI::click)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (REV_HMI::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&REV_HMI::setVol)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (REV_HMI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&REV_HMI::volChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (REV_HMI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&REV_HMI::lowBatt)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject REV_HMI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_REV_HMI.data,
      qt_meta_data_REV_HMI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *REV_HMI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *REV_HMI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_REV_HMI.stringdata0))
        return static_cast<void*>(const_cast< REV_HMI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int REV_HMI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void REV_HMI::debugMsg(QtMsgType _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void REV_HMI::runEngSimu()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void REV_HMI::stopEngSimu()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void REV_HMI::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void REV_HMI::click()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void REV_HMI::setVol(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void REV_HMI::volChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void REV_HMI::lowBatt()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
