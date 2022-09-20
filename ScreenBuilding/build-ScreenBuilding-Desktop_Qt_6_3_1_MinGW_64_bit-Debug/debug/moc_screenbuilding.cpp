/****************************************************************************
** Meta object code from reading C++ file 'screenbuilding.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ScreenBuilding/screenbuilding.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenbuilding.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScreenBuilding_t {
    const uint offsetsAndSize[48];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ScreenBuilding_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ScreenBuilding_t qt_meta_stringdata_ScreenBuilding = {
    {
QT_MOC_LITERAL(0, 14), // "ScreenBuilding"
QT_MOC_LITERAL(15, 12), // "loginSuccess"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 9), // "loginFail"
QT_MOC_LITERAL(39, 13), // "statusChanged"
QT_MOC_LITERAL(53, 15), // "fullnameChanged"
QT_MOC_LITERAL(69, 11), // "rankChanged"
QT_MOC_LITERAL(81, 13), // "domainChanged"
QT_MOC_LITERAL(95, 10), // "ageChanged"
QT_MOC_LITERAL(106, 13), // "genderChanged"
QT_MOC_LITERAL(120, 16), // "allocatedChanged"
QT_MOC_LITERAL(137, 11), // "getTodoItem"
QT_MOC_LITERAL(149, 8), // "fullname"
QT_MOC_LITERAL(158, 4), // "rank"
QT_MOC_LITERAL(163, 6), // "domain"
QT_MOC_LITERAL(170, 3), // "age"
QT_MOC_LITERAL(174, 6), // "gender"
QT_MOC_LITERAL(181, 9), // "allocated"
QT_MOC_LITERAL(191, 6), // "parent"
QT_MOC_LITERAL(198, 5), // "login"
QT_MOC_LITERAL(204, 8), // "userName"
QT_MOC_LITERAL(213, 8), // "QString&"
QT_MOC_LITERAL(222, 8), // "password"
QT_MOC_LITERAL(231, 6) // "status"

    },
    "ScreenBuilding\0loginSuccess\0\0loginFail\0"
    "statusChanged\0fullnameChanged\0rankChanged\0"
    "domainChanged\0ageChanged\0genderChanged\0"
    "allocatedChanged\0getTodoItem\0fullname\0"
    "rank\0domain\0age\0gender\0allocated\0"
    "parent\0login\0userName\0QString&\0password\0"
    "status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenBuilding[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       7,  128, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    8 /* Public */,
       3,    0,   87,    2, 0x06,    9 /* Public */,
       4,    0,   88,    2, 0x06,   10 /* Public */,
       5,    0,   89,    2, 0x06,   11 /* Public */,
       6,    0,   90,    2, 0x06,   12 /* Public */,
       7,    0,   91,    2, 0x06,   13 /* Public */,
       8,    0,   92,    2, 0x06,   14 /* Public */,
       9,    0,   93,    2, 0x06,   15 /* Public */,
      10,    0,   94,    2, 0x06,   16 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      11,    7,   95,    2, 0x02,   17 /* Public */,
      11,    6,  110,    2, 0x22,   25 /* Public | MethodCloned */,
      19,    2,  123,    2, 0x01,   32 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QObjectStar,   12,   13,   14,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   12,   13,   14,   15,   16,   17,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 21,   20,   22,

 // properties: name, type, flags
      23, QMetaType::QString, 0x00015103, uint(2), 0,
      12, QMetaType::QString, 0x00015003, uint(3), 0,
      13, QMetaType::QString, 0x00015003, uint(4), 0,
      14, QMetaType::QString, 0x00015003, uint(5), 0,
      15, QMetaType::QString, 0x00015103, uint(6), 0,
      16, QMetaType::QString, 0x00015003, uint(7), 0,
      17, QMetaType::QString, 0x00015003, uint(8), 0,

       0        // eod
};

void ScreenBuilding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScreenBuilding *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loginSuccess(); break;
        case 1: _t->loginFail(); break;
        case 2: _t->statusChanged(); break;
        case 3: _t->fullnameChanged(); break;
        case 4: _t->rankChanged(); break;
        case 5: _t->domainChanged(); break;
        case 6: _t->ageChanged(); break;
        case 7: _t->genderChanged(); break;
        case 8: _t->allocatedChanged(); break;
        case 9: _t->getTodoItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[7]))); break;
        case 10: _t->getTodoItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6]))); break;
        case 11: _t->login((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScreenBuilding::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenBuilding::loginSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScreenBuilding::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenBuilding::loginFail)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScreenBuilding::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenBuilding::statusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScreenBuilding::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenBuilding::fullnameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ScreenBuilding::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenBuilding::rankChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ScreenBuilding::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenBuilding::domainChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ScreenBuilding::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenBuilding::ageChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ScreenBuilding::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenBuilding::genderChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ScreenBuilding::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenBuilding::allocatedChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ScreenBuilding *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->fullname(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->rank(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->domain(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->age(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->gender(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->allocated(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ScreenBuilding *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStatus(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setfullname(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setrank(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setdomain(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setAge(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setgender(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setallocated(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ScreenBuilding::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_ScreenBuilding.offsetsAndSize,
    qt_meta_data_ScreenBuilding,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ScreenBuilding_t
, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<ScreenBuilding, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString const &, std::false_type>, QtPrivate::TypeAndForceComplete<QString &, std::false_type>

>,
    nullptr
} };


const QMetaObject *ScreenBuilding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenBuilding::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenBuilding.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ScreenBuilding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ScreenBuilding::loginSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ScreenBuilding::loginFail()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ScreenBuilding::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ScreenBuilding::fullnameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ScreenBuilding::rankChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ScreenBuilding::domainChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ScreenBuilding::ageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ScreenBuilding::genderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ScreenBuilding::allocatedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
