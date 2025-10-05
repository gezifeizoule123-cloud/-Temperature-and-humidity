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
    "on_pushButtoSerial_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  254,    2, 0x06,    1 /* Public */,
       4,    0,  257,    2, 0x06,    3 /* Public */,
       5,    0,  258,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  259,    2, 0x08,    5 /* Private */,
       7,    0,  260,    2, 0x08,    6 /* Private */,
       8,    0,  261,    2, 0x08,    7 /* Private */,
       9,    0,  262,    2, 0x08,    8 /* Private */,
      10,    1,  263,    2, 0x08,    9 /* Private */,
      12,    0,  266,    2, 0x08,   11 /* Private */,
      13,    2,  267,    2, 0x08,   12 /* Private */,
      18,    0,  272,    2, 0x08,   15 /* Private */,
      19,    0,  273,    2, 0x08,   16 /* Private */,
      20,    0,  274,    2, 0x08,   17 /* Private */,
      21,    1,  275,    2, 0x08,   18 /* Private */,
      23,    1,  278,    2, 0x08,   20 /* Private */,
      25,    0,  281,    2, 0x08,   22 /* Private */,
      26,    0,  282,    2, 0x08,   23 /* Private */,
      27,    0,  283,    2, 0x08,   24 /* Private */,
      28,    0,  284,    2, 0x08,   25 /* Private */,
      29,    0,  285,    2, 0x08,   26 /* Private */,
      30,    0,  286,    2, 0x08,   27 /* Private */,
      31,    0,  287,    2, 0x08,   28 /* Private */,
      32,    0,  288,    2, 0x08,   29 /* Private */,
      33,    0,  289,    2, 0x08,   30 /* Private */,
      34,    0,  290,    2, 0x08,   31 /* Private */,
      35,    0,  291,    2, 0x08,   32 /* Private */,
      36,    0,  292,    2, 0x08,   33 /* Private */,
      37,    0,  293,    2, 0x08,   34 /* Private */,
      38,    0,  294,    2, 0x08,   35 /* Private */,
      39,    1,  295,    2, 0x08,   36 /* Private */,
      40,    1,  298,    2, 0x08,   38 /* Private */,
      41,    1,  301,    2, 0x08,   40 /* Private */,
      42,    1,  304,    2, 0x08,   42 /* Private */,
      43,    0,  307,    2, 0x08,   44 /* Private */,
      44,    0,  308,    2, 0x08,   45 /* Private */,
      45,    1,  309,    2, 0x08,   46 /* Private */,
      47,    0,  312,    2, 0x08,   48 /* Private */,
      48,    1,  313,    2, 0x08,   49 /* Private */,
      49,    1,  316,    2, 0x08,   51 /* Private */,
      50,    0,  319,    2, 0x08,   53 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   24,
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
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

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
        QtPrivate::TypeAndForceComplete<void, std::false_type>
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
        case 3: _t->on_debug_triggered(); break;
        case 4: _t->on_data_triggered(); break;
        case 5: _t->on_exit_triggered(); break;
        case 6: _t->on_pushButtonModBus_clicked(); break;
        case 7: _t->on_ModbusCheck_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->newConnection_Slot(); break;
        case 9: _t->BackDataParsing((*reinterpret_cast< std::add_pointer_t<QMap<QString,float>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>>>(_a[2]))); break;
        case 10: _t->timerReceiveData(); break;
        case 11: _t->readyRead_Slot(); break;
        case 12: _t->disconnected_Slot(); break;
        case 13: _t->onNetworkDataReceive((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->onErrorNetwork((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->on_pushButtonZhuji_clicked(); break;
        case 16: _t->on_openwif_triggered(); break;
        case 17: _t->connected_Slot(); break;
        case 18: _t->on_led_triggered(); break;
        case 19: _t->on_water_triggered(); break;
        case 20: _t->on_auto_2_triggered(); break;
        case 21: _t->on_pushButtonD1_clicked(); break;
        case 22: _t->on_pushButton_6X2_clicked(); break;
        case 23: _t->on_pushButtonShua1_clicked(); break;
        case 24: _t->on_pushButtonD2_clicked(); break;
        case 25: _t->on_pushButton_3Shua2_clicked(); break;
        case 26: _t->on_pushButtonX1_clicked(); break;
        case 27: _t->on_pushButton_5Clear1_clicked(); break;
        case 28: _t->on_pushButton_9Clear2_clicked(); break;
        case 29: _t->on_checkBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->on_checkBox_2_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 31: _t->on_checkBox_3_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 32: _t->on_checkBox_4_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->on_set_yu_bt_clicked(); break;
        case 34: _t->on_clear_yu_bt_clicked(); break;
        case 35: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->on_set_light_bt_clicked(); break;
        case 37: _t->onDebSendData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 38: _t->on_ChecSerial_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 39: _t->on_pushButtoSerial_clicked(); break;
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
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 40;
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
QT_WARNING_POP
