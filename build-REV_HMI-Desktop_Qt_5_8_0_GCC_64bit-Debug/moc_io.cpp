/****************************************************************************
** Meta object code from reading C++ file 'io.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/io.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'io.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IOMODULE_t {
    QByteArrayData data[10];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IOMODULE_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IOMODULE_t qt_meta_stringdata_IOMODULE = {
    {
QT_MOC_LITERAL(0, 0, 8), // "IOMODULE"
QT_MOC_LITERAL(1, 9, 7), // "updated"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 6), // "IOData"
QT_MOC_LITERAL(4, 25, 4), // "init"
QT_MOC_LITERAL(5, 30, 3), // "end"
QT_MOC_LITERAL(6, 34, 6), // "update"
QT_MOC_LITERAL(7, 41, 4), // "text"
QT_MOC_LITERAL(8, 46, 11), // "onReadyRead"
QT_MOC_LITERAL(9, 58, 6) // "getRPM"

    },
    "IOMODULE\0updated\0\0IOData\0init\0end\0"
    "update\0text\0onReadyRead\0getRPM"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IOMODULE[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    1,   49,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Int,

       0        // eod
};

void IOMODULE::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IOMODULE *_t = static_cast<IOMODULE *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updated((*reinterpret_cast< IOData(*)>(_a[1]))); break;
        case 1: { bool _r = _t->init();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->end(); break;
        case 3: _t->update((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->onReadyRead(); break;
        case 5: { int _r = _t->getRPM();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IOMODULE::*_t)(IOData );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IOMODULE::updated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject IOMODULE::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IOMODULE.data,
      qt_meta_data_IOMODULE,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IOMODULE::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IOMODULE::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IOMODULE.stringdata0))
        return static_cast<void*>(const_cast< IOMODULE*>(this));
    return QObject::qt_metacast(_clname);
}

int IOMODULE::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void IOMODULE::updated(IOData _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
