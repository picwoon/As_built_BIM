/****************************************************************************
** Meta object code from reading C++ file 'RegexExplorer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "RegexExplorer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RegexExplorer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RegexExplorer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x08,
      62,   14,   14,   14, 0x08,
      95,   89,   14,   14, 0x08,
     143,  135,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RegexExplorer[] = {
    "RegexExplorer\0\0text\0"
    "on_regularExpression_textChanged(QString)\0"
    "on_inputText_textChanged()\0index\0"
    "on_matchNumber_currentIndexChanged(int)\0"
    "checked\0on_matchAll_toggled(bool)\0"
};

void RegexExplorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RegexExplorer *_t = static_cast<RegexExplorer *>(_o);
        switch (_id) {
        case 0: _t->on_regularExpression_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_inputText_textChanged(); break;
        case 2: _t->on_matchNumber_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_matchAll_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RegexExplorer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RegexExplorer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RegexExplorer,
      qt_meta_data_RegexExplorer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RegexExplorer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RegexExplorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RegexExplorer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RegexExplorer))
        return static_cast<void*>(const_cast< RegexExplorer*>(this));
    if (!strcmp(_clname, "Ui::RegexExplorer"))
        return static_cast< Ui::RegexExplorer*>(const_cast< RegexExplorer*>(this));
    return QDialog::qt_metacast(_clname);
}

int RegexExplorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
