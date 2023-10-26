/****************************************************************************
** Meta object code from reading C++ file 'users.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../semesteroppgave_gui/users.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'users.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSusersENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSusersENDCLASS = QtMocHelpers::stringData(
    "users",
    "setUser",
    "",
    "newUser",
    "setPass",
    "newPass",
    "getUser",
    "getUserCode",
    "setCode",
    "code"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSusersENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[6];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[8];
    char stringdata5[8];
    char stringdata6[8];
    char stringdata7[12];
    char stringdata8[8];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSusersENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSusersENDCLASS_t qt_meta_stringdata_CLASSusersENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "users"
        QT_MOC_LITERAL(6, 7),  // "setUser"
        QT_MOC_LITERAL(14, 0),  // ""
        QT_MOC_LITERAL(15, 7),  // "newUser"
        QT_MOC_LITERAL(23, 7),  // "setPass"
        QT_MOC_LITERAL(31, 7),  // "newPass"
        QT_MOC_LITERAL(39, 7),  // "getUser"
        QT_MOC_LITERAL(47, 11),  // "getUserCode"
        QT_MOC_LITERAL(59, 7),  // "setCode"
        QT_MOC_LITERAL(67, 4)   // "code"
    },
    "users",
    "setUser",
    "",
    "newUser",
    "setPass",
    "newPass",
    "getUser",
    "getUserCode",
    "setCode",
    "code"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSusersENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x0a,    1 /* Public */,
       4,    1,   47,    2, 0x0a,    3 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   50,    2, 0x02,    5 /* Public */,
       7,    0,   51,    2, 0x02,    6 /* Public */,
       8,    1,   52,    2, 0x02,    7 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject users::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSusersENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSusersENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSusersENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<users, std::true_type>,
        // method 'setUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setPass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getUser'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getUserCode'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCode'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void users::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<users *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->setPass((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: { QString _r = _t->getUser();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->getUserCode();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->setCode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *users::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *users::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSusersENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int users::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
