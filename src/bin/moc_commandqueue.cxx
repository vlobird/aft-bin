/****************************************************************************
** Meta object code from reading C++ file 'commandqueue.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt/commandqueue.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commandqueue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CommandQueue[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      37,   31,   13,   13, 0x05,
      54,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   65,   13,   13, 0x0a,
     101,   97,   13,   13, 0x0a,
     128,  119,   13,   13, 0x0a,
     155,  143,   13,   13, 0x0a,
     177,   13,   13,   13, 0x0a,
     197,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CommandQueue[] = {
    "CommandQueue\0\0started(QString)\0bytes\0"
    "progress(qint64)\0finished()\0,\0"
    "onFileProgress(qint64,qint64)\0cmd\0"
    "execute(Command*)\0filename\0start(QString)\0"
    "directoryId\0finish(mtp::ObjectId)\0"
    "addProgress(qint64)\0abort()\0"
};

void CommandQueue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CommandQueue *_t = static_cast<CommandQueue *>(_o);
        switch (_id) {
        case 0: _t->started((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->progress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->finished(); break;
        case 3: _t->onFileProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->execute((*reinterpret_cast< Command*(*)>(_a[1]))); break;
        case 5: _t->start((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->finish((*reinterpret_cast< mtp::ObjectId(*)>(_a[1]))); break;
        case 7: _t->addProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->abort(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CommandQueue::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CommandQueue::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CommandQueue,
      qt_meta_data_CommandQueue, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CommandQueue::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CommandQueue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CommandQueue::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CommandQueue))
        return static_cast<void*>(const_cast< CommandQueue*>(this));
    return QObject::qt_metacast(_clname);
}

int CommandQueue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CommandQueue::started(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommandQueue::progress(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CommandQueue::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
