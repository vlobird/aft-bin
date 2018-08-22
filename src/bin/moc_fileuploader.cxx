/****************************************************************************
** Meta object code from reading C++ file 'fileuploader.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt/fileuploader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileuploader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileUploader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   14,   13,   13, 0x05,
      48,   43,   13,   13, 0x05,
      71,   13,   13,   13, 0x05,
      93,   13,   13,   13, 0x05,
     113,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     132,  124,   13,   13, 0x08,
     151,   43,   13,   13, 0x08,
     170,   13,   13,   13, 0x08,
     183,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FileUploader[] = {
    "FileUploader\0\0cmd\0executeCommand(Command*)\0"
    "file\0uploadStarted(QString)\0"
    "uploadProgress(float)\0uploadSpeed(qint64)\0"
    "finished()\0current\0onProgress(qint64)\0"
    "onStarted(QString)\0onFinished()\0abort()\0"
};

void FileUploader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileUploader *_t = static_cast<FileUploader *>(_o);
        switch (_id) {
        case 0: _t->executeCommand((*reinterpret_cast< Command*(*)>(_a[1]))); break;
        case 1: _t->uploadStarted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->uploadProgress((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->uploadSpeed((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->finished(); break;
        case 5: _t->onProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->onStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onFinished(); break;
        case 8: _t->abort(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileUploader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileUploader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileUploader,
      qt_meta_data_FileUploader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileUploader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileUploader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileUploader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileUploader))
        return static_cast<void*>(const_cast< FileUploader*>(this));
    return QObject::qt_metacast(_clname);
}

int FileUploader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FileUploader::executeCommand(Command * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileUploader::uploadStarted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileUploader::uploadProgress(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileUploader::uploadSpeed(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileUploader::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
