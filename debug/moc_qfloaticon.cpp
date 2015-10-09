/****************************************************************************
** Meta object code from reading C++ file 'qfloaticon.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qfloaticon.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfloaticon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFloatIcon[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   11,   11,   11, 0x0a,
      51,   11,   11,   11, 0x0a,
      67,   11,   11,   11, 0x0a,
      78,   11,   11,   11, 0x0a,
     107,   93,   11,   11, 0x0a,
     141,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QFloatIcon[] = {
    "QFloatIcon\0\0DoubleClickSignal()\0"
    "onGetDynamicCode()\0onViewSysNote()\0"
    "onUpdate()\0onSoftUpdate()\0from,filename\0"
    "finished(const char*,const char*)\0"
    "onExit()\0"
};

void QFloatIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QFloatIcon *_t = static_cast<QFloatIcon *>(_o);
        switch (_id) {
        case 0: _t->DoubleClickSignal(); break;
        case 1: _t->onGetDynamicCode(); break;
        case 2: _t->onViewSysNote(); break;
        case 3: _t->onUpdate(); break;
        case 4: _t->onSoftUpdate(); break;
        case 5: _t->finished((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 6: _t->onExit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QFloatIcon::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QFloatIcon::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QFloatIcon,
      qt_meta_data_QFloatIcon, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFloatIcon::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFloatIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFloatIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFloatIcon))
        return static_cast<void*>(const_cast< QFloatIcon*>(this));
    return QWidget::qt_metacast(_clname);
}

int QFloatIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QFloatIcon::DoubleClickSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
