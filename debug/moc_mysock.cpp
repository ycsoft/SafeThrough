/****************************************************************************
** Meta object code from reading C++ file 'mysock.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mysock.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mysock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MySock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      36,   34,    7,    7, 0x05,
      77,   63,    7,    7, 0x05,
     120,  103,    7,    7, 0x05,
     170,    7,    7,    7, 0x05,
     205,  191,    7,    7, 0x05,
     244,  103,  239,    7, 0x05,
     293,  103,    7,    7, 0x05,
     381,  345,    7,    7, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_MySock[] = {
    "MySock\0\0addShareFile(const char*)\0f\0"
    "signalSendContinue(QFile*)\0transed,total\0"
    "signalprogress(uint,uint)\0from,to,filename\0"
    "sendcomplete(const char*,const char*,const char*)\0"
    "offline(const char*)\0from,filename\0"
    "finished(const char*,const char*)\0"
    "bool\0fileRequest(const char*,const char*,const char*)\0"
    "acceptfileSend(const char*,const char*,const char*)\0"
    "from,to,filename,transed,total,data\0"
    "receiveFileData(const char*,const char*,const char*,uint,uint,uchar*)\0"
};

void MySock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MySock *_t = static_cast<MySock *>(_o);
        switch (_id) {
        case 0: _t->addShareFile((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 1: _t->signalSendContinue((*reinterpret_cast< QFile*(*)>(_a[1]))); break;
        case 2: _t->signalprogress((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: _t->sendcomplete((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 4: _t->offline((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 5: _t->finished((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 6: { bool _r = _t->fileRequest((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->acceptfileSend((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 8: _t->receiveFileData((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< uchar*(*)>(_a[6]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MySock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MySock::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MySock,
      qt_meta_data_MySock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MySock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MySock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MySock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MySock))
        return static_cast<void*>(const_cast< MySock*>(this));
    return QObject::qt_metacast(_clname);
}

int MySock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void MySock::addShareFile(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MySock::signalSendContinue(QFile * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MySock::signalprogress(uint _t1, uint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MySock::sendcomplete(const char * _t1, const char * _t2, const char * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MySock::offline(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MySock::finished(const char * _t1, const char * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
bool MySock::fileRequest(const char * _t1, const char * _t2, const char * _t3)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
    return _t0;
}

// SIGNAL 7
void MySock::acceptfileSend(const char * _t1, const char * _t2, const char * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MySock::receiveFileData(const char * _t1, const char * _t2, const char * _t3, uint _t4, uint _t5, uchar * _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
