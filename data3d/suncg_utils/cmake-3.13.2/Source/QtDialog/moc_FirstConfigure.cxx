/****************************************************************************
** Meta object code from reading C++ file 'FirstConfigure.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FirstConfigure.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FirstConfigure.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StartCompilerSetup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   19,   19,   19, 0x09,
      69,   64,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_StartCompilerSetup[] = {
    "StartCompilerSetup\0\0selectionChanged()\0"
    "onSelectionChanged(bool)\0name\0"
    "onGeneratorChanged(QString)\0"
};

void StartCompilerSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StartCompilerSetup *_t = static_cast<StartCompilerSetup *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->onSelectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onGeneratorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StartCompilerSetup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StartCompilerSetup::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_StartCompilerSetup,
      qt_meta_data_StartCompilerSetup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StartCompilerSetup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StartCompilerSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StartCompilerSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StartCompilerSetup))
        return static_cast<void*>(const_cast< StartCompilerSetup*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int StartCompilerSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void StartCompilerSetup::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_NativeCompilerSetup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_NativeCompilerSetup[] = {
    "NativeCompilerSetup\0"
};

void NativeCompilerSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData NativeCompilerSetup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NativeCompilerSetup::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_NativeCompilerSetup,
      qt_meta_data_NativeCompilerSetup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NativeCompilerSetup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NativeCompilerSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NativeCompilerSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NativeCompilerSetup))
        return static_cast<void*>(const_cast< NativeCompilerSetup*>(this));
    if (!strcmp(_clname, "Ui::Compilers"))
        return static_cast< Ui::Compilers*>(const_cast< NativeCompilerSetup*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int NativeCompilerSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CrossCompilerSetup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CrossCompilerSetup[] = {
    "CrossCompilerSetup\0"
};

void CrossCompilerSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CrossCompilerSetup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CrossCompilerSetup::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_CrossCompilerSetup,
      qt_meta_data_CrossCompilerSetup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CrossCompilerSetup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CrossCompilerSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CrossCompilerSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CrossCompilerSetup))
        return static_cast<void*>(const_cast< CrossCompilerSetup*>(this));
    if (!strcmp(_clname, "Ui::CrossCompiler"))
        return static_cast< Ui::CrossCompiler*>(const_cast< CrossCompilerSetup*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int CrossCompilerSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ToolchainCompilerSetup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ToolchainCompilerSetup[] = {
    "ToolchainCompilerSetup\0"
};

void ToolchainCompilerSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ToolchainCompilerSetup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToolchainCompilerSetup::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_ToolchainCompilerSetup,
      qt_meta_data_ToolchainCompilerSetup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToolchainCompilerSetup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToolchainCompilerSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToolchainCompilerSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToolchainCompilerSetup))
        return static_cast<void*>(const_cast< ToolchainCompilerSetup*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int ToolchainCompilerSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_FirstConfigure[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_FirstConfigure[] = {
    "FirstConfigure\0"
};

void FirstConfigure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FirstConfigure::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FirstConfigure::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_FirstConfigure,
      qt_meta_data_FirstConfigure, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FirstConfigure::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FirstConfigure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FirstConfigure::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FirstConfigure))
        return static_cast<void*>(const_cast< FirstConfigure*>(this));
    return QWizard::qt_metacast(_clname);
}

int FirstConfigure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
