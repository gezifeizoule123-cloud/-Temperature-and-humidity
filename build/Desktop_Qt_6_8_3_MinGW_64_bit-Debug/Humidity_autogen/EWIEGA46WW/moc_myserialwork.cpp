/****************************************************************************
** Meta object code from reading C++ file 'myserialwork.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../myserialwork.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myserialwork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN12MySerialWorkE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN12MySerialWorkE = QtMocHelpers::stringData(
    "MySerialWork",
    "signalStart",
    "",
    "signalStop",
    "isclose",
    "DataHandleOk",
    "s",
    "sendMainDisplay",
    "QMap<QString,float>",
    "numberData",
    "QMap<QString,QString>",
    "strnumber",
    "startThread",
    "Settings",
    "stopThread",
    "SendWrite",
    "data",
    "readData"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN12MySerialWorkE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    1,   63,    2, 0x06,    2 /* Public */,
       5,    1,   66,    2, 0x06,    4 /* Public */,
       7,    2,   69,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   74,    2, 0x0a,    9 /* Public */,
      14,    0,   77,    2, 0x0a,   11 /* Public */,
      15,    1,   78,    2, 0x0a,   12 /* Public */,
      17,    0,   81,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   16,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MySerialWork::staticMetaObject = { {
    QMetaObject::SuperData::link<QSerialPort::staticMetaObject>(),
    qt_meta_stringdata_ZN12MySerialWorkE.offsetsAndSizes,
    qt_meta_data_ZN12MySerialWorkE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN12MySerialWorkE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MySerialWork, std::true_type>,
        // method 'signalStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'DataHandleOk'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sendMainDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,float>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,QString>, std::false_type>,
        // method 'startThread'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Settings, std::false_type>,
        // method 'stopThread'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SendWrite'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'readData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MySerialWork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MySerialWork *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->signalStart(); break;
        case 1: _t->signalStop((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->DataHandleOk((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->sendMainDisplay((*reinterpret_cast< std::add_pointer_t<QMap<QString,float>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>>>(_a[2]))); break;
        case 4: _t->startThread((*reinterpret_cast< std::add_pointer_t<Settings>>(_a[1]))); break;
        case 5: _t->stopThread(); break;
        case 6: _t->SendWrite((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 7: _t->readData(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (MySerialWork::*)();
            if (_q_method_type _q_method = &MySerialWork::signalStart; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (MySerialWork::*)(int );
            if (_q_method_type _q_method = &MySerialWork::signalStop; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (MySerialWork::*)(QString );
            if (_q_method_type _q_method = &MySerialWork::DataHandleOk; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (MySerialWork::*)(QMap<QString,float> , QMap<QString,QString> );
            if (_q_method_type _q_method = &MySerialWork::sendMainDisplay; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *MySerialWork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MySerialWork::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN12MySerialWorkE.stringdata0))
        return static_cast<void*>(this);
    return QSerialPort::qt_metacast(_clname);
}

int MySerialWork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSerialPort::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MySerialWork::signalStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MySerialWork::signalStop(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MySerialWork::DataHandleOk(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MySerialWork::sendMainDisplay(QMap<QString,float> _t1, QMap<QString,QString> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
