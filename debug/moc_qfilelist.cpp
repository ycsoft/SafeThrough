/****************************************************************************
** Meta object code from reading C++ file 'qfilelist.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qfilelist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfilelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFileList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   27,   10,   10, 0x0a,
      56,   10,   10,   10, 0x0a,
      82,   76,   10,   10, 0x0a,
     113,  111,   10,   10, 0x0a,
     137,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QFileList[] = {
    "QFileList\0\0flushFileList()\0fn\0"
    "addShareFile(const char*)\0slotFlushFileList()\0"
    "index\0listdoubleClick(QModelIndex)\0,\0"
    "slotprogress(uint,uint)\0btnClick()\0"
};

void QFileList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QFileList *_t = static_cast<QFileList *>(_o);
        switch (_id) {
        case 0: _t->flushFileList(); break;
        case 1: _t->addShareFile((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 2: _t->slotFlushFileList(); break;
        case 3: _t->listdoubleClick((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 4: _t->slotprogress((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 5: _t->btnClick(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QFileList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QFileList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QFileList,
      qt_meta_data_QFileList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFileList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFileList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFileList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFileList))
        return static_cast<void*>(const_cast< QFileList*>(this));
    return QWidget::qt_metacast(_clname);
}

int QFileList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QFileList::flushFileList()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
