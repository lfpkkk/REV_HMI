/****************************************************************************
** Meta object code from reading C++ file 'logger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/logger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Logger_t {
    QByteArrayData data[26];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Logger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Logger_t qt_meta_stringdata_Logger = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Logger"
QT_MOC_LITERAL(1, 7, 7), // "updated"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 8), // "TripData"
QT_MOC_LITERAL(4, 25, 8), // "debugMsg"
QT_MOC_LITERAL(5, 34, 9), // "QtMsgType"
QT_MOC_LITERAL(6, 44, 9), // "isLogging"
QT_MOC_LITERAL(7, 54, 8), // "isPaused"
QT_MOC_LITERAL(8, 63, 18), // "setDefaultSettings"
QT_MOC_LITERAL(9, 82, 12), // "startLogging"
QT_MOC_LITERAL(10, 95, 11), // "stopLogging"
QT_MOC_LITERAL(11, 107, 14), // "updatePosition"
QT_MOC_LITERAL(12, 122, 12), // "PositionData"
QT_MOC_LITERAL(13, 135, 12), // "positionData"
QT_MOC_LITERAL(14, 148, 13), // "updateBattery"
QT_MOC_LITERAL(15, 162, 11), // "BatteryData"
QT_MOC_LITERAL(16, 174, 11), // "batteryData"
QT_MOC_LITERAL(17, 186, 8), // "updateIO"
QT_MOC_LITERAL(18, 195, 6), // "IOData"
QT_MOC_LITERAL(19, 202, 6), // "ioData"
QT_MOC_LITERAL(20, 209, 7), // "logData"
QT_MOC_LITERAL(21, 217, 12), // "logData_Test"
QT_MOC_LITERAL(22, 230, 11), // "nameChanged"
QT_MOC_LITERAL(23, 242, 12), // "checkDirSize"
QT_MOC_LITERAL(24, 255, 5), // "char*"
QT_MOC_LITERAL(25, 261, 6) // "logDir"

    },
    "Logger\0updated\0\0TripData\0debugMsg\0"
    "QtMsgType\0isLogging\0isPaused\0"
    "setDefaultSettings\0startLogging\0"
    "stopLogging\0updatePosition\0PositionData\0"
    "positionData\0updateBattery\0BatteryData\0"
    "batteryData\0updateIO\0IOData\0ioData\0"
    "logData\0logData_Test\0nameChanged\0"
    "checkDirSize\0char*\0logDir"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Logger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    3,   87,    2, 0x06 /* Public */,
       6,    1,   94,    2, 0x06 /* Public */,
       7,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  100,    2, 0x0a /* Public */,
       9,    0,  101,    2, 0x0a /* Public */,
      10,    0,  102,    2, 0x0a /* Public */,
      11,    1,  103,    2, 0x0a /* Public */,
      14,    1,  106,    2, 0x0a /* Public */,
      17,    1,  109,    2, 0x0a /* Public */,
      20,    0,  112,    2, 0x0a /* Public */,
      21,    0,  113,    2, 0x0a /* Public */,
      22,    0,  114,    2, 0x0a /* Public */,
      23,    1,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 24,   25,

       0        // eod
};

void Logger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Logger *_t = static_cast<Logger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updated((*reinterpret_cast< TripData(*)>(_a[1]))); break;
        case 1: _t->debugMsg((*reinterpret_cast< QtMsgType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->isLogging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->isPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setDefaultSettings(); break;
        case 5: _t->startLogging(); break;
        case 6: _t->stopLogging(); break;
        case 7: _t->updatePosition((*reinterpret_cast< PositionData(*)>(_a[1]))); break;
        case 8: _t->updateBattery((*reinterpret_cast< BatteryData(*)>(_a[1]))); break;
        case 9: _t->updateIO((*reinterpret_cast< IOData(*)>(_a[1]))); break;
        case 10: _t->logData(); break;
        case 11: _t->logData_Test(); break;
        case 12: _t->nameChanged(); break;
        case 13: { bool _r = _t->checkDirSize((*reinterpret_cast< char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Logger::*_t)(TripData );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Logger::updated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Logger::*_t)(QtMsgType , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Logger::debugMsg)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Logger::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Logger::isLogging)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Logger::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Logger::isPaused)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Logger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Logger.data,
      qt_meta_data_Logger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Logger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Logger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Logger.stringdata0))
        return static_cast<void*>(const_cast< Logger*>(this));
    return QObject::qt_metacast(_clname);
}

int Logger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Logger::updated(TripData _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Logger::debugMsg(QtMsgType _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Logger::isLogging(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Logger::isPaused(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
