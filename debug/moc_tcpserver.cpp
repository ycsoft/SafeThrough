/****************************************************************************
** Meta object code from reading C++ file 'tcpserver.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tcpserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TCPServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   11,   10,   10, 0x05,
      31,   11,   10,   10, 0x05,
      58,   10,   53,   10, 0x05,
      84,   10,   53,   10, 0x05,
     103,   10,   10,   10, 0x05,
     123,   10,   10,   10, 0x05,
     143,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     166,   11,   10,   10, 0x0a,
     187,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TCPServer[] = {
    "TCPServer\0\0str\0onInit(QString)\0"
    "onNewConnect(QString)\0bool\0"
    "onConfirm(QList<QString>)\0onConfirm(QString)\0"
    "onRecvData(QString)\0onSendData(QString)\0"
    "onSendRawData(QString)\0sendRawData(QString)\0"
    "flushMessages()\0"
};

void TCPServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TCPServer *_t = static_cast<TCPServer *>(_o);
        switch (_id) {
        case 0: _t->onInit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onNewConnect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: { bool _r = _t->onConfirm((*reinterpret_cast< QList<QString>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onConfirm((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->onRecvData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->onSendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onSendRawData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->sendRawData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->flushMessages(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TCPServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TCPServer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TCPServer,
      qt_meta_data_TCPServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TCPServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TCPServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TCPServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TCPServer))
        return static_cast<void*>(const_cast< TCPServer*>(this));
    return QWidget::qt_metacast(_clname);
}

int TCPServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void TCPServer::onInit(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TCPServer::onNewConnect(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
bool TCPServer::onConfirm(QList<QString> _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
bool TCPServer::onConfirm(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}

// SIGNAL 4
void TCPServer::onRecvData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TCPServer::onSendData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TCPServer::onSendRawData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
