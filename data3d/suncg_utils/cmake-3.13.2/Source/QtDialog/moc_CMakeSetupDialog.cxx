/****************************************************************************
** Meta object code from reading C++ file 'CMakeSetupDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CMakeSetupDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CMakeSetupDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CMakeSetupDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   18,   17,   17, 0x0a,
      50,   18,   17,   17, 0x0a,
      78,   17,   17,   17, 0x09,
      91,   17,   17,   17, 0x09,
     105,   17,   17,   17, 0x09,
     118,   17,   17,   17, 0x09,
     134,   17,   17,   17, 0x09,
     160,   17,   17,   17, 0x09,
     169,   17,   17,   17, 0x09,
     179,   17,   17,   17, 0x09,
     201,  193,   17,   17, 0x09,
     216,  193,   17,   17, 0x09,
     233,   17,   17,   17, 0x09,
     250,   17,   17,   17, 0x09,
     267,   17,   17,   17, 0x09,
     283,   17,   17,   17, 0x09,
     299,   18,   17,   17, 0x09,
     330,   18,   17,   17, 0x09,
     373,  361,   17,   17, 0x09,
     401,   17,   17,   17, 0x09,
     428,   17,  423,   17, 0x09,
     454,  450,   17,   17, 0x09,
     484,   17,   17,   17, 0x09,
     511,   17,   17,   17, 0x09,
     546,   17,  534,   17, 0x09,
     563,   17,   17,   17, 0x09,
     591,   18,   17,   17, 0x09,
     625,   18,   17,   17, 0x09,
     659,   17,   17,   17, 0x09,
     678,   17,   17,   17, 0x09,
     707,   17,   17,   17, 0x09,
     726,   17,   17,   17, 0x09,
     742,   17,   17,   17, 0x09,
     756,   17,   17,   17, 0x09,
     777,   17,   17,   17, 0x09,
     799,   17,   17,   17, 0x09,
     820,   17,   17,   17, 0x09,
     842,  838,   17,   17, 0x09,
     867,   17,  423,   17, 0x09,
     886,   17,  423,   17, 0x09,
     908,   17,  423,   17, 0x09,
     929,   17,   17,   17, 0x09,
     946,  943,   17,   17, 0x09,
     974,   17,   17,   17, 0x09,
    1012,  995,   17,   17, 0x09,
    1035,   17,   17,   17, 0x29,
    1054,   17,   17,   17, 0x09,
    1073,   17,   17,   17, 0x09,
    1093,   17,   17,   17, 0x09,
    1117,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CMakeSetupDialog[] = {
    "CMakeSetupDialog\0\0dir\0setBinaryDirectory(QString)\0"
    "setSourceDirectory(QString)\0initialize()\0"
    "doConfigure()\0doGenerate()\0doOpenProject()\0"
    "doInstallForCommandLine()\0doHelp()\0"
    "doAbout()\0doInterrupt()\0message\0"
    "error(QString)\0message(QString)\0"
    "doSourceBrowse()\0doBinaryBrowse()\0"
    "doReloadCache()\0doDeleteCache()\0"
    "updateSourceDirectory(QString)\0"
    "updateBinaryDirectory(QString)\0"
    "msg,percent\0showProgress(QString,float)\0"
    "setEnabledState(bool)\0bool\0"
    "setupFirstConfigure()\0gen\0"
    "updateGeneratorLabel(QString)\0"
    "setExitAfterGenerate(bool)\0"
    "addBinaryPath(QString)\0QStringList\0"
    "loadBuildPaths()\0saveBuildPaths(QStringList)\0"
    "onBinaryDirectoryChanged(QString)\0"
    "onSourceDirectoryChanged(QString)\0"
    "setCacheModified()\0removeSelectedCacheEntries()\0"
    "selectionChanged()\0addCacheEntry()\0"
    "startSearch()\0setDebugOutput(bool)\0"
    "setAdvancedView(bool)\0setGroupedView(bool)\0"
    "showUserChanges()\0str\0setSearchFilter(QString)\0"
    "prepareConfigure()\0doConfigureInternal()\0"
    "doGenerateInternal()\0exitLoop(int)\0"
    "pt\0doOutputContextMenu(QPoint)\0"
    "doOutputFindDialog()\0directionForward\0"
    "doOutputFindNext(bool)\0doOutputFindNext()\0"
    "doOutputFindPrev()\0doOutputErrorNext()\0"
    "doRegexExplorerDialog()\0"
    "doWarningMessagesDialog()\0"
};

void CMakeSetupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CMakeSetupDialog *_t = static_cast<CMakeSetupDialog *>(_o);
        switch (_id) {
        case 0: _t->setBinaryDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setSourceDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->initialize(); break;
        case 3: _t->doConfigure(); break;
        case 4: _t->doGenerate(); break;
        case 5: _t->doOpenProject(); break;
        case 6: _t->doInstallForCommandLine(); break;
        case 7: _t->doHelp(); break;
        case 8: _t->doAbout(); break;
        case 9: _t->doInterrupt(); break;
        case 10: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->doSourceBrowse(); break;
        case 13: _t->doBinaryBrowse(); break;
        case 14: _t->doReloadCache(); break;
        case 15: _t->doDeleteCache(); break;
        case 16: _t->updateSourceDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->updateBinaryDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 19: _t->setEnabledState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: { bool _r = _t->setupFirstConfigure();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: _t->updateGeneratorLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->setExitAfterGenerate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->addBinaryPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: { QStringList _r = _t->loadBuildPaths();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 25: _t->saveBuildPaths((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 26: _t->onBinaryDirectoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->onSourceDirectoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->setCacheModified(); break;
        case 29: _t->removeSelectedCacheEntries(); break;
        case 30: _t->selectionChanged(); break;
        case 31: _t->addCacheEntry(); break;
        case 32: _t->startSearch(); break;
        case 33: _t->setDebugOutput((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->setAdvancedView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->setGroupedView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->showUserChanges(); break;
        case 37: _t->setSearchFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: { bool _r = _t->prepareConfigure();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->doConfigureInternal();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->doGenerateInternal();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: _t->exitLoop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->doOutputContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 43: _t->doOutputFindDialog(); break;
        case 44: _t->doOutputFindNext((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->doOutputFindNext(); break;
        case 46: _t->doOutputFindPrev(); break;
        case 47: _t->doOutputErrorNext(); break;
        case 48: _t->doRegexExplorerDialog(); break;
        case 49: _t->doWarningMessagesDialog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CMakeSetupDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CMakeSetupDialog::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CMakeSetupDialog,
      qt_meta_data_CMakeSetupDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CMakeSetupDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CMakeSetupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CMakeSetupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMakeSetupDialog))
        return static_cast<void*>(const_cast< CMakeSetupDialog*>(this));
    if (!strcmp(_clname, "Ui::CMakeSetupDialog"))
        return static_cast< Ui::CMakeSetupDialog*>(const_cast< CMakeSetupDialog*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CMakeSetupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    }
    return _id;
}
static const uint qt_meta_data_QCMakeThread[] = {

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
      14,   13,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QCMakeThread[] = {
    "QCMakeThread\0\0cmakeInitialized()\0"
};

void QCMakeThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCMakeThread *_t = static_cast<QCMakeThread *>(_o);
        switch (_id) {
        case 0: _t->cmakeInitialized(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCMakeThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCMakeThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QCMakeThread,
      qt_meta_data_QCMakeThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCMakeThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCMakeThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCMakeThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeThread))
        return static_cast<void*>(const_cast< QCMakeThread*>(this));
    return QThread::qt_metacast(_clname);
}

int QCMakeThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void QCMakeThread::cmakeInitialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
