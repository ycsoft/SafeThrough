/****************************************************************************
** Meta object code from reading C++ file 'qsetdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qsetdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsetdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSetDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      24,    8,    8,    8, 0x0a,
      40,    8,    8,    8, 0x0a,
      61,   56,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QSetDlg[] = {
    "QSetDlg\0\0onApplyClick()\0onCancelClick()\0"
    "onUpdateClick()\0text\0textEdited(QString)\0"
};

void QSetDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSetDlg *_t = static_cast<QSetDlg *>(_o);
        switch (_id) {
        case 0: _t->onApplyClick(); break;
        case 1: _t->onCancelClick(); break;
        case 2: _t->onUpdateClick(); break;
        case 3: _t->textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSetDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSetDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QSetDlg,
      qt_meta_data_QSetDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSetDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSetDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSetDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSetDlg))
        return static_cast<void*>(const_cast< QSetDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int QSetDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
