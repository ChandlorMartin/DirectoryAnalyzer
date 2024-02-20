/****************************************************************************
** Meta object code from reading C++ file 'directory_model.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DocumentAnalyzerProject/directory_model.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'directory_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDirectoryModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDirectoryModelENDCLASS = QtMocHelpers::stringData(
    "DirectoryModel",
    "directoryNameChanged",
    "",
    "fileCountChanged",
    "sizeChanged",
    "subdirectoryCountChanged",
    "directoryName",
    "subDirectoryCount",
    "fileCount",
    "size"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDirectoryModelENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[15];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[12];
    char stringdata5[25];
    char stringdata6[14];
    char stringdata7[18];
    char stringdata8[10];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDirectoryModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDirectoryModelENDCLASS_t qt_meta_stringdata_CLASSDirectoryModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "DirectoryModel"
        QT_MOC_LITERAL(15, 20),  // "directoryNameChanged"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 16),  // "fileCountChanged"
        QT_MOC_LITERAL(54, 11),  // "sizeChanged"
        QT_MOC_LITERAL(66, 24),  // "subdirectoryCountChanged"
        QT_MOC_LITERAL(91, 13),  // "directoryName"
        QT_MOC_LITERAL(105, 17),  // "subDirectoryCount"
        QT_MOC_LITERAL(123, 9),  // "fileCount"
        QT_MOC_LITERAL(133, 4)   // "size"
    },
    "DirectoryModel",
    "directoryNameChanged",
    "",
    "fileCountChanged",
    "sizeChanged",
    "subdirectoryCountChanged",
    "directoryName",
    "subDirectoryCount",
    "fileCount",
    "size"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDirectoryModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    5 /* Public */,
       3,    0,   39,    2, 0x06,    6 /* Public */,
       4,    0,   40,    2, 0x06,    7 /* Public */,
       5,    0,   41,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00015103, uint(0), 0,
       7, QMetaType::Int, 0x00015003, uint(3), 0,
       8, QMetaType::Int, 0x00015103, uint(1), 0,
       9, QMetaType::Double, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject DirectoryModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSDirectoryModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDirectoryModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDirectoryModelENDCLASS_t,
        // property 'directoryName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'subDirectoryCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'fileCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'size'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DirectoryModel, std::true_type>,
        // method 'directoryNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'subdirectoryCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DirectoryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DirectoryModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->directoryNameChanged(); break;
        case 1: _t->fileCountChanged(); break;
        case 2: _t->sizeChanged(); break;
        case 3: _t->subdirectoryCountChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DirectoryModel::*)();
            if (_t _q_method = &DirectoryModel::directoryNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DirectoryModel::*)();
            if (_t _q_method = &DirectoryModel::fileCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DirectoryModel::*)();
            if (_t _q_method = &DirectoryModel::sizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DirectoryModel::*)();
            if (_t _q_method = &DirectoryModel::subdirectoryCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DirectoryModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->directoryName(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->subDirectoryCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->fileCount(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->size(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DirectoryModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDirectoryName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSubdirectoryCount(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setFileCount(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSize(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *DirectoryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DirectoryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDirectoryModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DirectoryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DirectoryModel::directoryNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DirectoryModel::fileCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DirectoryModel::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DirectoryModel::subdirectoryCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
