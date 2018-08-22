/****************************************************************************
** Meta object code from reading C++ file 'qtobjectstream.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt/qtobjectstream.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtobjectstream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtObjectInputStream[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   21,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QtObjectInputStream[] = {
    "QtObjectInputStream\0\0,\0"
    "positionChanged(qint64,qint64)\0"
};

void QtObjectInputStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtObjectInputStream *_t = static_cast<QtObjectInputStream *>(_o);
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtObjectInputStream::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtObjectInputStream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtObjectInputStream,
      qt_meta_data_QtObjectInputStream, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtObjectInputStream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtObjectInputStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtObjectInputStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtObjectInputStream))
        return static_cast<void*>(const_cast< QtObjectInputStream*>(this));
    if (!strcmp(_clname, "mtp::IObjectInputStream"))
        return static_cast< mtp::IObjectInputStream*>(const_cast< QtObjectInputStream*>(this));
    if (!strcmp(_clname, "mtp::CancellableStream"))
        return static_cast< mtp::CancellableStream*>(const_cast< QtObjectInputStream*>(this));
    return QObject::qt_metacast(_clname);
}

int QtObjectInputStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QtObjectInputStream::positionChanged(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QtObjectOutputStream[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   22,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QtObjectOutputStream[] = {
    "QtObjectOutputStream\0\0,\0"
    "positionChanged(qint64,qint64)\0"
};

void QtObjectOutputStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtObjectOutputStream *_t = static_cast<QtObjectOutputStream *>(_o);
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtObjectOutputStream::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtObjectOutputStream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtObjectOutputStream,
      qt_meta_data_QtObjectOutputStream, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtObjectOutputStream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtObjectOutputStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtObjectOutputStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtObjectOutputStream))
        return static_cast<void*>(const_cast< QtObjectOutputStream*>(this));
    if (!strcmp(_clname, "mtp::IObjectOutputStream"))
        return static_cast< mtp::IObjectOutputStream*>(const_cast< QtObjectOutputStream*>(this));
    if (!strcmp(_clname, "mtp::CancellableStream"))
        return static_cast< mtp::CancellableStream*>(const_cast< QtObjectOutputStream*>(this));
    return QObject::qt_metacast(_clname);
}

int QtObjectOutputStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QtObjectOutputStream::positionChanged(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
