/****************************************************************************
** Meta object code from reading C++ file 'AddCacheEntry.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AddCacheEntry.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddCacheEntry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddCacheEntry[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddCacheEntry[] = {
    "AddCacheEntry\0\0text\0onCompletionActivated(QString)\0"
};

void AddCacheEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddCacheEntry *_t = static_cast<AddCacheEntry *>(_o);
        switch (_id) {
        case 0: _t->onCompletionActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddCacheEntry::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddCacheEntry::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddCacheEntry,
      qt_meta_data_AddCacheEntry, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddCacheEntry::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddCacheEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddCacheEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddCacheEntry))
        return static_cast<void*>(const_cast< AddCacheEntry*>(this));
    if (!strcmp(_clname, "Ui::AddCacheEntry"))
        return static_cast< Ui::AddCacheEntry*>(const_cast< AddCacheEntry*>(this));
    return QWidget::qt_metacast(_clname);
}

int AddCacheEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
