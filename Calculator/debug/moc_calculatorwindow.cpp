/****************************************************************************
** Meta object code from reading C++ file 'calculatorwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../calculatorwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculatorwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CalculatorWindow_t {
    QByteArrayData data[15];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalculatorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalculatorWindow_t qt_meta_stringdata_CalculatorWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CalculatorWindow"
QT_MOC_LITERAL(1, 17, 20), // "on_oneButton_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 20), // "on_twoButton_clicked"
QT_MOC_LITERAL(4, 60, 22), // "on_threeButton_clicked"
QT_MOC_LITERAL(5, 83, 21), // "on_zeroButton_clicked"
QT_MOC_LITERAL(6, 105, 21), // "on_fourButton_clicked"
QT_MOC_LITERAL(7, 127, 21), // "on_fiveButton_clicked"
QT_MOC_LITERAL(8, 149, 20), // "on_sixButton_clicked"
QT_MOC_LITERAL(9, 170, 22), // "on_sevenButton_clicked"
QT_MOC_LITERAL(10, 193, 22), // "on_eightButton_clicked"
QT_MOC_LITERAL(11, 216, 21), // "on_nineButton_clicked"
QT_MOC_LITERAL(12, 238, 21), // "on_plusButton_clicked"
QT_MOC_LITERAL(13, 260, 22), // "on_minusButton_clicked"
QT_MOC_LITERAL(14, 283, 22) // "on_equalButton_clicked"

    },
    "CalculatorWindow\0on_oneButton_clicked\0"
    "\0on_twoButton_clicked\0on_threeButton_clicked\0"
    "on_zeroButton_clicked\0on_fourButton_clicked\0"
    "on_fiveButton_clicked\0on_sixButton_clicked\0"
    "on_sevenButton_clicked\0on_eightButton_clicked\0"
    "on_nineButton_clicked\0on_plusButton_clicked\0"
    "on_minusButton_clicked\0on_equalButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalculatorWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CalculatorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CalculatorWindow *_t = static_cast<CalculatorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_oneButton_clicked(); break;
        case 1: _t->on_twoButton_clicked(); break;
        case 2: _t->on_threeButton_clicked(); break;
        case 3: _t->on_zeroButton_clicked(); break;
        case 4: _t->on_fourButton_clicked(); break;
        case 5: _t->on_fiveButton_clicked(); break;
        case 6: _t->on_sixButton_clicked(); break;
        case 7: _t->on_sevenButton_clicked(); break;
        case 8: _t->on_eightButton_clicked(); break;
        case 9: _t->on_nineButton_clicked(); break;
        case 10: _t->on_plusButton_clicked(); break;
        case 11: _t->on_minusButton_clicked(); break;
        case 12: _t->on_equalButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CalculatorWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CalculatorWindow.data,
      qt_meta_data_CalculatorWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CalculatorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalculatorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CalculatorWindow.stringdata0))
        return static_cast<void*>(const_cast< CalculatorWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CalculatorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
