/****************************************************************************
** Meta object code from reading C++ file 'QCMake.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QCMake.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCMake.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCMake[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    8,    7,    7, 0x05,
      55,   51,    7,    7, 0x05,
      85,   81,    7,    7, 0x05,
     111,   81,    7,    7, 0x05,
     149,  137,    7,    7, 0x05,
     186,  180,    7,    7, 0x05,
     205,  180,    7,    7, 0x05,
     227,  223,    7,    7, 0x05,
     250,  223,    7,    7, 0x05,
     272,    7,    7,    7, 0x05,
     305,  297,    7,    7, 0x05,
     340,  329,    7,    7, 0x05,
     364,  355,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     383,   81,    7,    7, 0x0a,
     402,   81,    7,    7, 0x0a,
     430,   81,    7,    7, 0x0a,
     468,  458,    7,    7, 0x0a,
     490,  297,    7,    7, 0x0a,
     510,    7,    7,    7, 0x0a,
     522,    7,    7,    7, 0x0a,
     533,    7,    7,    7, 0x0a,
     540,    7,    7,    7, 0x0a,
     574,    7,    7,    7, 0x0a,
     586,    7,    7,    7, 0x0a,
     600,    7,    7,    7, 0x0a,
     614,    7,    7,    7, 0x0a,
     640,    7,  635,    7, 0x0a,
     671,  665,    7,    7, 0x0a,
     700,    7,  635,    7, 0x0a,
     732,  665,    7,    7, 0x0a,
     768,    7,  635,    7, 0x0a,
     793,  665,    7,    7, 0x0a,
     822,    7,  635,    7, 0x0a,
     854,  665,    7,    7, 0x0a,
     890,  665,    7,    7, 0x0a,
     921,  665,    7,    7, 0x0a,
     945,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QCMake[] = {
    "QCMake\0\0vars\0propertiesChanged(QCMakePropertyList)\0"
    "gen\0generatorChanged(QString)\0dir\0"
    "sourceDirChanged(QString)\0"
    "binaryDirChanged(QString)\0msg,percent\0"
    "progressChanged(QString,float)\0error\0"
    "configureDone(int)\0generateDone(int)\0"
    "msg\0outputMessage(QString)\0"
    "errorMessage(QString)\0debugOutputChanged(bool)\0"
    "toolset\0toolsetChanged(QString)\0"
    "successful\0openDone(bool)\0possible\0"
    "openPossible(bool)\0loadCache(QString)\0"
    "setSourceDirectory(QString)\0"
    "setBinaryDirectory(QString)\0generator\0"
    "setGenerator(QString)\0setToolset(QString)\0"
    "configure()\0generate()\0open()\0"
    "setProperties(QCMakePropertyList)\0"
    "interrupt()\0deleteCache()\0reloadCache()\0"
    "setDebugOutput(bool)\0bool\0"
    "getSuppressDevWarnings()\0value\0"
    "setSuppressDevWarnings(bool)\0"
    "getSuppressDeprecatedWarnings()\0"
    "setSuppressDeprecatedWarnings(bool)\0"
    "getDevWarningsAsErrors()\0"
    "setDevWarningsAsErrors(bool)\0"
    "getDeprecatedWarningsAsErrors()\0"
    "setDeprecatedWarningsAsErrors(bool)\0"
    "setWarnUninitializedMode(bool)\0"
    "setWarnUnusedMode(bool)\0checkOpenPossible()\0"
};

void QCMake::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCMake *_t = static_cast<QCMake *>(_o);
        switch (_id) {
        case 0: _t->propertiesChanged((*reinterpret_cast< const QCMakePropertyList(*)>(_a[1]))); break;
        case 1: _t->generatorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->sourceDirChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->binaryDirChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->progressChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 5: _t->configureDone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->generateDone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->outputMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->debugOutputChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->toolsetChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->openDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->openPossible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->loadCache((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->setSourceDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->setBinaryDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->setGenerator((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->setToolset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->configure(); break;
        case 19: _t->generate(); break;
        case 20: _t->open(); break;
        case 21: _t->setProperties((*reinterpret_cast< const QCMakePropertyList(*)>(_a[1]))); break;
        case 22: _t->interrupt(); break;
        case 23: _t->deleteCache(); break;
        case 24: _t->reloadCache(); break;
        case 25: _t->setDebugOutput((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: { bool _r = _t->getSuppressDevWarnings();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->setSuppressDevWarnings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: { bool _r = _t->getSuppressDeprecatedWarnings();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: _t->setSuppressDeprecatedWarnings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: { bool _r = _t->getDevWarningsAsErrors();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: _t->setDevWarningsAsErrors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: { bool _r = _t->getDeprecatedWarningsAsErrors();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: _t->setDeprecatedWarningsAsErrors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->setWarnUninitializedMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->setWarnUnusedMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->checkOpenPossible(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCMake::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCMake::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCMake,
      qt_meta_data_QCMake, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCMake::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCMake::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCMake::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCMake))
        return static_cast<void*>(const_cast< QCMake*>(this));
    return QObject::qt_metacast(_clname);
}

int QCMake::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void QCMake::propertiesChanged(const QCMakePropertyList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCMake::generatorChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCMake::sourceDirChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCMake::binaryDirChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCMake::progressChanged(const QString & _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QCMake::configureDone(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QCMake::generateDone(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QCMake::outputMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QCMake::errorMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QCMake::debugOutputChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QCMake::toolsetChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QCMake::openDone(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QCMake::openPossible(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
