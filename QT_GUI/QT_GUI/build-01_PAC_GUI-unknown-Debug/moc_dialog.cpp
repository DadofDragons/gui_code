/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../01_PAC_GUI/dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      22,    7,    7,    7, 0x0a,
      37,    7,    7,    7, 0x0a,
      53,    7,    7,    7, 0x0a,
      68,    7,    7,    7, 0x0a,
      82,    7,    7,    7, 0x0a,
      93,    7,    7,    7, 0x0a,
     104,    7,    7,    7, 0x0a,
     121,    7,    7,    7, 0x0a,
     138,    7,    7,    7, 0x0a,
     155,    7,    7,    7, 0x0a,
     172,    7,    7,    7, 0x0a,
     186,    7,    7,    7, 0x0a,
     218,    7,    7,    7, 0x0a,
     233,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0creatSubDlg()\0connectState()\0"
    "clearLight(int)\0startMytimer()\0"
    "stopMytimer()\0calCurve()\0initWave()\0"
    "showgraph1(bool)\0showgraph2(bool)\0"
    "showgraph3(bool)\0showgraph4(bool)\0"
    "clearGraphs()\0slot_mouseRelease(QMouseEvent*)\0"
    "openHyThread()\0closeHyThread()\0"
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog *_t = static_cast<Dialog *>(_o);
        switch (_id) {
        case 0: _t->creatSubDlg(); break;
        case 1: _t->connectState(); break;
        case 2: _t->clearLight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->startMytimer(); break;
        case 4: _t->stopMytimer(); break;
        case 5: _t->calCurve(); break;
        case 6: _t->initWave(); break;
        case 7: _t->showgraph1((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showgraph2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->showgraph3((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->showgraph4((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->clearGraphs(); break;
        case 12: _t->slot_mouseRelease((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 13: _t->openHyThread(); break;
        case 14: _t->closeHyThread(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
