/****************************************************************************
** Meta object code from reading C++ file 'auth.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../semesteroppgave_gui/auth.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auth.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSauthENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSauthENDCLASS = QtMocHelpers::stringData(
    "auth",
    "legitUser",
    "",
    "authorize",
    "users*",
    "userObj",
    "getAllUsers"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSauthENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[5];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[7];
    char stringdata5[8];
    char stringdata6[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSauthENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSauthENDCLASS_t qt_meta_stringdata_CLASSauthENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "auth"
        QT_MOC_LITERAL(5, 9),  // "legitUser"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 9),  // "authorize"
        QT_MOC_LITERAL(26, 6),  // "users*"
        QT_MOC_LITERAL(33, 7),  // "userObj"
        QT_MOC_LITERAL(41, 11)   // "getAllUsers"
    },
    "auth",
    "legitUser",
    "",
    "authorize",
    "users*",
    "userObj",
    "getAllUsers"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSauthENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    1 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   33,    2, 0x02,    2 /* Public */,
       6,    0,   36,    2, 0x02,    4 /* Public */,

 // slots: parameters
    QMetaType::Bool,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4,    5,
    QMetaType::QStringList,

       0        // eod
};

Q_CONSTINIT const QMetaObject auth::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSauthENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSauthENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSauthENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<auth, std::true_type>,
        // method 'legitUser'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'authorize'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<users *, std::false_type>,
        // method 'getAllUsers'
        QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>
    >,
    nullptr
} };

void auth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<auth *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->legitUser();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->authorize((*reinterpret_cast< std::add_pointer_t<users*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { QList<QString> _r = _t->getAllUsers();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< users* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *auth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *auth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSauthENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int auth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
