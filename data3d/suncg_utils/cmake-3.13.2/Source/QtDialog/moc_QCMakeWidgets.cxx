/****************************************************************************
** Meta object code from reading C++ file 'QCMakeWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QCMakeWidgets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCMakeWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCMakeFileEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QCMakeFileEditor[] = {
    "QCMakeFileEditor\0\0fileDialogExists(bool)\0"
    "chooseFile()\0"
};

void QCMakeFileEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCMakeFileEditor *_t = static_cast<QCMakeFileEditor *>(_o);
        switch (_id) {
        case 0: _t->fileDialogExists((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->chooseFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCMakeFileEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCMakeFileEditor::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_QCMakeFileEditor,
      qt_meta_data_QCMakeFileEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCMakeFileEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCMakeFileEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCMakeFileEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeFileEditor))
        return static_cast<void*>(const_cast< QCMakeFileEditor*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int QCMakeFileEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QCMakeFileEditor::fileDialogExists(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QCMakePathEditor[] = {

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

static const char qt_meta_stringdata_QCMakePathEditor[] = {
    "QCMakePathEditor\0"
};

void QCMakePathEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCMakePathEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCMakePathEditor::staticMetaObject = {
    { &QCMakeFileEditor::staticMetaObject, qt_meta_stringdata_QCMakePathEditor,
      qt_meta_data_QCMakePathEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCMakePathEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCMakePathEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCMakePathEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakePathEditor))
        return static_cast<void*>(const_cast< QCMakePathEditor*>(this));
    return QCMakeFileEditor::qt_metacast(_clname);
}

int QCMakePathEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCMakeFileEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QCMakeFilePathEditor[] = {

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

static const char qt_meta_stringdata_QCMakeFilePathEditor[] = {
    "QCMakeFilePathEditor\0"
};

void QCMakeFilePathEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCMakeFilePathEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCMakeFilePathEditor::staticMetaObject = {
    { &QCMakeFileEditor::staticMetaObject, qt_meta_stringdata_QCMakeFilePathEditor,
      qt_meta_data_QCMakeFilePathEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCMakeFilePathEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCMakeFilePathEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCMakeFilePathEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeFilePathEditor))
        return static_cast<void*>(const_cast< QCMakeFilePathEditor*>(this));
    return QCMakeFileEditor::qt_metacast(_clname);
}

int QCMakeFilePathEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCMakeFileEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QCMakeFileCompleter[] = {

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

static const char qt_meta_stringdata_QCMakeFileCompleter[] = {
    "QCMakeFileCompleter\0"
};

void QCMakeFileCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCMakeFileCompleter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCMakeFileCompleter::staticMetaObject = {
    { &QCompleter::staticMetaObject, qt_meta_stringdata_QCMakeFileCompleter,
      qt_meta_data_QCMakeFileCompleter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCMakeFileCompleter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCMakeFileCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCMakeFileCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeFileCompleter))
        return static_cast<void*>(const_cast< QCMakeFileCompleter*>(this));
    return QCompleter::qt_metacast(_clname);
}

int QCMakeFileCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCompleter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QCMakeComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      23,   15, 0x0a195103,

       0        // eod
};

static const char qt_meta_stringdata_QCMakeComboBox[] = {
    "QCMakeComboBox\0QString\0value\0"
};

void QCMakeComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCMakeComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCMakeComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_QCMakeComboBox,
      qt_meta_data_QCMakeComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCMakeComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCMakeComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCMakeComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeComboBox))
        return static_cast<void*>(const_cast< QCMakeComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int QCMakeComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = currentText(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValue(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
