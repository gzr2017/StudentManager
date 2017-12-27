/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../StudentManager/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[433];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 29), // "start_calculate_average_score"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 1), // "I"
QT_MOC_LITERAL(4, 44, 28), // "start_calculate_passing_rate"
QT_MOC_LITERAL(5, 73, 24), // "start_standard_deviation"
QT_MOC_LITERAL(6, 98, 34), // "start_calculate_standard_devi..."
QT_MOC_LITERAL(7, 133, 30), // "on_actionReadStudent_triggered"
QT_MOC_LITERAL(8, 164, 29), // "on_actionReadCourse_triggered"
QT_MOC_LITERAL(9, 194, 28), // "on_actionReadTeach_triggered"
QT_MOC_LITERAL(10, 223, 30), // "on_actionReadTeacher_triggered"
QT_MOC_LITERAL(11, 254, 28), // "on_actionReadStudy_triggered"
QT_MOC_LITERAL(12, 283, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(13, 307, 25), // "on_actionLogout_triggered"
QT_MOC_LITERAL(14, 333, 31), // "on_actionAverageScore_triggered"
QT_MOC_LITERAL(15, 365, 30), // "on_actionPassingRate_triggered"
QT_MOC_LITERAL(16, 396, 36) // "on_actionStandardDeviation_tr..."

    },
    "MainWindow\0start_calculate_average_score\0"
    "\0I\0start_calculate_passing_rate\0"
    "start_standard_deviation\0"
    "start_calculate_standard_deviation\0"
    "on_actionReadStudent_triggered\0"
    "on_actionReadCourse_triggered\0"
    "on_actionReadTeach_triggered\0"
    "on_actionReadTeacher_triggered\0"
    "on_actionReadStudy_triggered\0"
    "on_actionExit_triggered\0"
    "on_actionLogout_triggered\0"
    "on_actionAverageScore_triggered\0"
    "on_actionPassingRate_triggered\0"
    "on_actionStandardDeviation_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,
       6,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   96,    2, 0x08 /* Private */,
       8,    0,   97,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    0,   99,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
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

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start_calculate_average_score((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->start_calculate_passing_rate((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->start_standard_deviation((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->start_calculate_standard_deviation((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->on_actionReadStudent_triggered(); break;
        case 5: _t->on_actionReadCourse_triggered(); break;
        case 6: _t->on_actionReadTeach_triggered(); break;
        case 7: _t->on_actionReadTeacher_triggered(); break;
        case 8: _t->on_actionReadStudy_triggered(); break;
        case 9: _t->on_actionExit_triggered(); break;
        case 10: _t->on_actionLogout_triggered(); break;
        case 11: _t->on_actionAverageScore_triggered(); break;
        case 12: _t->on_actionPassingRate_triggered(); break;
        case 13: _t->on_actionStandardDeviation_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::start_calculate_average_score)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::start_calculate_passing_rate)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::start_standard_deviation)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::start_calculate_standard_deviation)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void MainWindow::start_calculate_average_score(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::start_calculate_passing_rate(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::start_standard_deviation(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::start_calculate_standard_deviation(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
