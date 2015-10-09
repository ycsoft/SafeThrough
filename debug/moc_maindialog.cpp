/****************************************************************************
** Meta object code from reading C++ file 'maindialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maindialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      22,   11,   11,   11, 0x0a,
      35,   11,   11,   11, 0x0a,
      57,   52,   47,   11, 0x0a,
      76,   11,   11,   11, 0x0a,
      88,   11,   11,   11, 0x0a,
     103,   11,   11,   11, 0x0a,
     129,   11,   11,   11, 0x0a,
     150,  148,   11,   11, 0x0a,
     203,  195,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainDialog[] = {
    "MainDialog\0\0caLogin()\0loginClick()\0"
    "exitClick()\0bool\0info\0onConfirm(QString)\0"
    "onConnect()\0onDisconnect()\0"
    "error(QXmppClient::Error)\0onAdvantageClick()\0"
    ",\0onSvrDownloadFinish(const char*,const char*)\0"
    "message\0messageReceived(QXmppMessage)\0"
};

void MainDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainDialog *_t = static_cast<MainDialog *>(_o);
        switch (_id) {
        case 0: _t->caLogin(); break;
        case 1: _t->loginClick(); break;
        case 2: _t->exitClick(); break;
        case 3: { bool _r = _t->onConfirm((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->onConnect(); break;
        case 5: _t->onDisconnect(); break;
        case 6: _t->error((*reinterpret_cast< QXmppClient::Error(*)>(_a[1]))); break;
        case 7: _t->onAdvantageClick(); break;
        case 8: _t->onSvrDownloadFinish((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 9: _t->messageReceived((*reinterpret_cast< const QXmppMessage(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainDialog::staticMetaObject = {
    { &FramelessWin::staticMetaObject, qt_meta_stringdata_MainDialog,
      qt_meta_data_MainDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainDialog))
        return static_cast<void*>(const_cast< MainDialog*>(this));
    return FramelessWin::qt_metacast(_clname);
}

int MainDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FramelessWin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
