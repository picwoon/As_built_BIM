/****************************************************************************
** Meta object code from reading C++ file 'QCMakeCacheView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QCMakeCacheView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCMakeCacheView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCMakeCacheView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      39,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QCMakeCacheView[] = {
    "QCMakeCacheView\0\0setShowAdvanced(bool)\0"
    "setSearchFilter(QString)\0"
};

void QCMakeCacheView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCMakeCacheView *_t = static_cast<QCMakeCacheView *>(_o);
        switch (_id) {
        case 0: _t->setShowAdvanced((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setSearchFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCMakeCacheView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCMakeCacheView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QCMakeCacheView,
      qt_meta_data_QCMakeCacheView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCMakeCacheView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCMakeCacheView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCMakeCacheView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeCacheView))
        return static_cast<void*>(const_cast< QCMakeCacheView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int QCMakeCacheView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_QCMakeCacheModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x0a,
      58,   17,   17,   17, 0x0a,
      85,   17,   17,   17, 0x0a,
      93,   17,   17,   17, 0x0a,
     153,  119,  114,   17, 0x0a,
     230,  228,   17,   17, 0x0a,
     261,   17,  252,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QCMakeCacheModel[] = {
    "QCMakeCacheModel\0\0props\0"
    "setProperties(QCMakePropertyList)\0"
    "setShowNewProperties(bool)\0clear()\0"
    "setEditEnabled(bool)\0bool\0"
    "t,name,description,value,advanced\0"
    "insertProperty(QCMakeProperty::PropertyType,QString,QString,QVariant,b"
    "ool)\0"
    "t\0setViewType(ViewType)\0ViewType\0"
    "viewType()\0"
};

void QCMakeCacheModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCMakeCacheModel *_t = static_cast<QCMakeCacheModel *>(_o);
        switch (_id) {
        case 0: _t->setProperties((*reinterpret_cast< const QCMakePropertyList(*)>(_a[1]))); break;
        case 1: _t->setShowNewProperties((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->setEditEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { bool _r = _t->insertProperty((*reinterpret_cast< QCMakeProperty::PropertyType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setViewType((*reinterpret_cast< ViewType(*)>(_a[1]))); break;
        case 6: { ViewType _r = _t->viewType();
            if (_a[0]) *reinterpret_cast< ViewType*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCMakeCacheModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCMakeCacheModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_QCMakeCacheModel,
      qt_meta_data_QCMakeCacheModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCMakeCacheModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCMakeCacheModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCMakeCacheModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeCacheModel))
        return static_cast<void*>(const_cast< QCMakeCacheModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int QCMakeCacheModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_QCMakeCacheModelDelegate[] = {

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
      26,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QCMakeCacheModelDelegate[] = {
    "QCMakeCacheModelDelegate\0\0"
    "setFileDialogFlag(bool)\0"
};

void QCMakeCacheModelDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCMakeCacheModelDelegate *_t = static_cast<QCMakeCacheModelDelegate *>(_o);
        switch (_id) {
        case 0: _t->setFileDialogFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCMakeCacheModelDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCMakeCacheModelDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_QCMakeCacheModelDelegate,
      qt_meta_data_QCMakeCacheModelDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCMakeCacheModelDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCMakeCacheModelDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCMakeCacheModelDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeCacheModelDelegate))
        return static_cast<void*>(const_cast< QCMakeCacheModelDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int QCMakeCacheModelDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
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
