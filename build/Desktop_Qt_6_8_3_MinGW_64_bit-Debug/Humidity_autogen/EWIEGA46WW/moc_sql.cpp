/****************************************************************************
** Meta object code from reading C++ file 'sql.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../sql.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sql.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3SqlE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN3SqlE = QtMocHelpers::stringData(
    "Sql",
    "requestInsert",
    "",
    "Stemp",
    "Shumi",
    "Slight",
    "Ssoil",
    "Smq2",
    "Srain",
    "clearData",
    "on_exit_bt_clicked",
    "onClearFinished",
    "success",
    "on_select_data_bt_clicked",
    "on_displayAll_bt_clicked",
    "on_now_bt_2_clicked",
    "on_currDay_bt_clicked",
    "on_currThDay_bt_clicked",
    "on_currWeek_bt_clicked",
    "on_select_val_bt_clicked",
    "on_clear_bt_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN3SqlE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    6,   86,    2, 0x06,    1 /* Public */,
       9,    0,   99,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  100,    2, 0x0a,    9 /* Public */,
      11,    1,  101,    2, 0x0a,   10 /* Public */,
      13,    0,  104,    2, 0x0a,   12 /* Public */,
      14,    0,  105,    2, 0x0a,   13 /* Public */,
      15,    0,  106,    2, 0x0a,   14 /* Public */,
      16,    0,  107,    2, 0x0a,   15 /* Public */,
      17,    0,  108,    2, 0x0a,   16 /* Public */,
      18,    0,  109,    2, 0x0a,   17 /* Public */,
      19,    0,  110,    2, 0x0a,   18 /* Public */,
      20,    0,  111,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    4,    5,    6,    7,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Sql::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN3SqlE.offsetsAndSizes,
    qt_meta_data_ZN3SqlE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN3SqlE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Sql, std::true_type>,
        // method 'requestInsert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'clearData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit_bt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClearFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_select_data_bt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_displayAll_bt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_now_bt_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_currDay_bt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_currThDay_bt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_currWeek_bt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_select_val_bt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clear_bt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Sql::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Sql *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestInsert((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[6]))); break;
        case 1: _t->clearData(); break;
        case 2: _t->on_exit_bt_clicked(); break;
        case 3: _t->onClearFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_select_data_bt_clicked(); break;
        case 5: _t->on_displayAll_bt_clicked(); break;
        case 6: _t->on_now_bt_2_clicked(); break;
        case 7: _t->on_currDay_bt_clicked(); break;
        case 8: _t->on_currThDay_bt_clicked(); break;
        case 9: _t->on_currWeek_bt_clicked(); break;
        case 10: _t->on_select_val_bt_clicked(); break;
        case 11: _t->on_clear_bt_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Sql::*)(float , float , float , float , float , float );
            if (_q_method_type _q_method = &Sql::requestInsert; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Sql::*)();
            if (_q_method_type _q_method = &Sql::clearData; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Sql::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sql::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN3SqlE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Sql::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Sql::requestInsert(float _t1, float _t2, float _t3, float _t4, float _t5, float _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Sql::clearData()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
