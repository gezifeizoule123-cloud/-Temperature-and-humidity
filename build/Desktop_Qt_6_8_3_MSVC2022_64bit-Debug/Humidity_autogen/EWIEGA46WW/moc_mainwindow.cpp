/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../mainwindow.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10MainWindowE = QtMocHelpers::stringData(
    "MainWindow",
    "sendThrsholdData",
    "",
    "s",
    "checkModbus",
    "closeModBus",
    "closeLogin",
    "signalisLogin",
    "islogin",
    "on_debug_triggered",
    "on_data_triggered",
    "on_exit_triggered",
    "on_pushButtonModBus_clicked",
    "on_ModbusCheck_stateChanged",
    "arg1",
    "newConnection_Slot",
    "BackDataParsing",
    "QMap<QString,float>",
    "numberData",
    "QMap<QString,QString>",
    "strnumber",
    "timerReceiveData",
    "readyRead_Slot",
    "disconnected_Slot",
    "onNetworkDataReceive",
    "data",
    "onErrorNetwork",
    "error",
    "on_pushButtonZhuji_clicked",
    "on_openwif_triggered",
    "connected_Slot",
    "on_led_triggered",
    "on_water_triggered",
    "on_auto_2_triggered",
    "on_pushButtonD1_clicked",
    "on_pushButton_6X2_clicked",
    "on_pushButtonShua1_clicked",
    "on_pushButtonD2_clicked",
    "on_pushButton_3Shua2_clicked",
    "on_pushButtonX1_clicked",
    "on_pushButton_5Clear1_clicked",
    "on_pushButton_9Clear2_clicked",
    "on_checkBox_stateChanged",
    "on_checkBox_2_stateChanged",
    "on_checkBox_3_stateChanged",
    "on_checkBox_4_stateChanged",
    "on_set_yu_bt_clicked",
    "on_clear_yu_bt_clicked",
    "on_horizontalSlider_valueChanged",
    "value",
    "on_set_light_bt_clicked",
    "onDebSendData",
    "on_ChecSerial_stateChanged",
    "on_pushButtoSerial_clicked",
    "RootSet",
    "isroot",
    "receiveLogin"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  278,    2, 0x06,    1 /* Public */,
       4,    0,  281,    2, 0x06,    3 /* Public */,
       5,    0,  282,    2, 0x06,    4 /* Public */,
       6,    0,  283,    2, 0x06,    5 /* Public */,
       7,    1,  284,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,  287,    2, 0x0a,    8 /* Public */,
      10,    0,  288,    2, 0x0a,    9 /* Public */,
      11,    0,  289,    2, 0x0a,   10 /* Public */,
      12,    0,  290,    2, 0x0a,   11 /* Public */,
      13,    1,  291,    2, 0x0a,   12 /* Public */,
      15,    0,  294,    2, 0x0a,   14 /* Public */,
      16,    2,  295,    2, 0x0a,   15 /* Public */,
      21,    0,  300,    2, 0x0a,   18 /* Public */,
      22,    0,  301,    2, 0x0a,   19 /* Public */,
      23,    0,  302,    2, 0x0a,   20 /* Public */,
      24,    1,  303,    2, 0x0a,   21 /* Public */,
      26,    1,  306,    2, 0x0a,   23 /* Public */,
      28,    0,  309,    2, 0x0a,   25 /* Public */,
      29,    0,  310,    2, 0x0a,   26 /* Public */,
      30,    0,  311,    2, 0x0a,   27 /* Public */,
      31,    0,  312,    2, 0x0a,   28 /* Public */,
      32,    0,  313,    2, 0x0a,   29 /* Public */,
      33,    0,  314,    2, 0x0a,   30 /* Public */,
      34,    0,  315,    2, 0x0a,   31 /* Public */,
      35,    0,  316,    2, 0x0a,   32 /* Public */,
      36,    0,  317,    2, 0x0a,   33 /* Public */,
      37,    0,  318,    2, 0x0a,   34 /* Public */,
      38,    0,  319,    2, 0x0a,   35 /* Public */,
      39,    0,  320,    2, 0x0a,   36 /* Public */,
      40,    0,  321,    2, 0x0a,   37 /* Public */,
      41,    0,  322,    2, 0x0a,   38 /* Public */,
      42,    1,  323,    2, 0x0a,   39 /* Public */,
      43,    1,  326,    2, 0x0a,   41 /* Public */,
      44,    1,  329,    2, 0x0a,   43 /* Public */,
      45,    1,  332,    2, 0x0a,   45 /* Public */,
      46,    0,  335,    2, 0x0a,   47 /* Public */,
      47,    0,  336,    2, 0x0a,   48 /* Public */,
      48,    1,  337,    2, 0x0a,   49 /* Public */,
      50,    0,  340,    2, 0x0a,   51 /* Public */,
      51,    1,  341,    2, 0x0a,   52 /* Public */,
      52,    1,  344,    2, 0x0a,   54 /* Public */,
      53,    0,  347,    2, 0x0a,   56 /* Public */,
      54,    1,  348,    2, 0x0a,   57 /* Public */,
      56,    1,  351,    2, 0x0a,   59 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19,   18,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString,   27,
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
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, 0x80000000 | 8,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10MainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10MainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10MainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'sendThrsholdData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'checkModbus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeModBus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeLogin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalisLogin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const islogin &, std::false_type>,
        // method 'on_debug_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_data_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonModBus_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ModbusCheck_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'newConnection_Slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'BackDataParsing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,float>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,QString>, std::false_type>,
        // method 'timerReceiveData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readyRead_Slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnected_Slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNetworkDataReceive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onErrorNetwork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_pushButtonZhuji_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_openwif_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connected_Slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_led_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_water_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_auto_2_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonD1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_6X2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonShua1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonD2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_3Shua2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonX1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_5Clear1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_9Clear2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_checkBox_2_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_checkBox_3_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_checkBox_4_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_set_yu_bt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clear_yu_bt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_horizontalSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_set_light_bt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDebSendData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_ChecSerial_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButtoSerial_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RootSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'receiveLogin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const islogin &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sendThrsholdData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->checkModbus(); break;
        case 2: _t->closeModBus(); break;
        case 3: _t->closeLogin(); break;
        case 4: _t->signalisLogin((*reinterpret_cast< std::add_pointer_t<islogin>>(_a[1]))); break;
        case 5: _t->on_debug_triggered(); break;
        case 6: _t->on_data_triggered(); break;
        case 7: _t->on_exit_triggered(); break;
        case 8: _t->on_pushButtonModBus_clicked(); break;
        case 9: _t->on_ModbusCheck_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->newConnection_Slot(); break;
        case 11: _t->BackDataParsing((*reinterpret_cast< std::add_pointer_t<QMap<QString,float>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>>>(_a[2]))); break;
        case 12: _t->timerReceiveData(); break;
        case 13: _t->readyRead_Slot(); break;
        case 14: _t->disconnected_Slot(); break;
        case 15: _t->onNetworkDataReceive((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->onErrorNetwork((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->on_pushButtonZhuji_clicked(); break;
        case 18: _t->on_openwif_triggered(); break;
        case 19: _t->connected_Slot(); break;
        case 20: _t->on_led_triggered(); break;
        case 21: _t->on_water_triggered(); break;
        case 22: _t->on_auto_2_triggered(); break;
        case 23: _t->on_pushButtonD1_clicked(); break;
        case 24: _t->on_pushButton_6X2_clicked(); break;
        case 25: _t->on_pushButtonShua1_clicked(); break;
        case 26: _t->on_pushButtonD2_clicked(); break;
        case 27: _t->on_pushButton_3Shua2_clicked(); break;
        case 28: _t->on_pushButtonX1_clicked(); break;
        case 29: _t->on_pushButton_5Clear1_clicked(); break;
        case 30: _t->on_pushButton_9Clear2_clicked(); break;
        case 31: _t->on_checkBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 32: _t->on_checkBox_2_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->on_checkBox_3_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 34: _t->on_checkBox_4_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->on_set_yu_bt_clicked(); break;
        case 36: _t->on_clear_yu_bt_clicked(); break;
        case 37: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 38: _t->on_set_light_bt_clicked(); break;
        case 39: _t->onDebSendData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 40: _t->on_ChecSerial_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 41: _t->on_pushButtoSerial_clicked(); break;
        case 42: _t->RootSet((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 43: _t->receiveLogin((*reinterpret_cast< std::add_pointer_t<islogin>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (MainWindow::*)(QString );
            if (_q_method_type _q_method = &MainWindow::sendThrsholdData; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)();
            if (_q_method_type _q_method = &MainWindow::checkModbus; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)();
            if (_q_method_type _q_method = &MainWindow::closeModBus; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)();
            if (_q_method_type _q_method = &MainWindow::closeLogin; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (MainWindow::*)(const islogin & );
            if (_q_method_type _q_method = &MainWindow::signalisLogin; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10MainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendThrsholdData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::checkModbus()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::closeModBus()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::closeLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::signalisLogin(const islogin & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
