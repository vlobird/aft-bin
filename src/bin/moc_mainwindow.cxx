/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   11,   12,   11, 0x08,
      37,   11,   11,   11, 0x08,
      44,   11,   11,   11, 0x08,
      57,   51,   11,   11, 0x08,
      82,   11,   11,   11, 0x08,
     107,  103,   11,   11, 0x08,
     131,   11,   11,   11, 0x08,
     149,   11,   11,   11, 0x08,
     159,   11,   11,   11, 0x08,
     173,   11,   11,   11, 0x08,
     193,   11,   11,   11, 0x08,
     212,  207,   11,   11, 0x08,
     233,   11,   11,   11, 0x08,
     249,   11,   11,   11, 0x08,
     262,   11,   11,   11, 0x08,
     284,  276,   11,   11, 0x08,
     328,  322,   11,   11, 0x08,
     357,  353,   11,   11, 0x08,
     379,   11,   11,   11, 0x08,
     399,   11,   11,   11, 0x08,
     425,  420,   12,   11, 0x08,
     464,  451,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0bool\0reconnectToDevice()\0"
    "back()\0down()\0index\0onActivated(QModelIndex)\0"
    "updateActionsState()\0pos\0"
    "showContextMenu(QPoint)\0createDirectory()\0"
    "refresh()\0uploadFiles()\0uploadDirectories()\0"
    "uploadAlbum()\0path\0uploadAlbum(QString)\0"
    "downloadFiles()\0renameFile()\0deleteFiles()\0"
    "objects\0downloadFiles(QVector<mtp::ObjectId>)\0"
    "files\0uploadFiles(QStringList)\0idx\0"
    "onStorageChanged(int)\0validateClipboard()\0"
    "pasteFromClipboard()\0file\0"
    "confirmOverwrite(QString)\0path,objects\0"
    "downloadFiles(QString,QVector<mtp::ObjectId>)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->reconnectToDevice();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->back(); break;
        case 2: _t->down(); break;
        case 3: _t->onActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->updateActionsState(); break;
        case 5: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->createDirectory(); break;
        case 7: _t->refresh(); break;
        case 8: _t->uploadFiles(); break;
        case 9: _t->uploadDirectories(); break;
        case 10: _t->uploadAlbum(); break;
        case 11: _t->uploadAlbum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->downloadFiles(); break;
        case 13: _t->renameFile(); break;
        case 14: _t->deleteFiles(); break;
        case 15: _t->downloadFiles((*reinterpret_cast< const QVector<mtp::ObjectId>(*)>(_a[1]))); break;
        case 16: _t->uploadFiles((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 17: _t->onStorageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->validateClipboard(); break;
        case 19: _t->pasteFromClipboard(); break;
        case 20: { bool _r = _t->confirmOverwrite((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: _t->downloadFiles((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVector<mtp::ObjectId>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
