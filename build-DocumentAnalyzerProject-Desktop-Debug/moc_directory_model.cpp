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
    "totalBytesChanged",
    "totalKilobytesChanged",
    "totalMegabytesChanged",
    "totalGigabytesChanged",
    "totalTerabytesChanged",
    "subdirectoryCountChanged",
    "directoryName",
    "subDirectoryCount",
    "fileCount",
    "totalBytes",
    "totalKilobytes",
    "totalMegabytes",
    "totalGigabytes",
    "totalTerabytes"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDirectoryModelENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[15];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[18];
    char stringdata5[22];
    char stringdata6[22];
    char stringdata7[22];
    char stringdata8[22];
    char stringdata9[25];
    char stringdata10[14];
    char stringdata11[18];
    char stringdata12[10];
    char stringdata13[11];
    char stringdata14[15];
    char stringdata15[15];
    char stringdata16[15];
    char stringdata17[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDirectoryModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDirectoryModelENDCLASS_t qt_meta_stringdata_CLASSDirectoryModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "DirectoryModel"
        QT_MOC_LITERAL(15, 20),  // "directoryNameChanged"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 16),  // "fileCountChanged"
        QT_MOC_LITERAL(54, 17),  // "totalBytesChanged"
        QT_MOC_LITERAL(72, 21),  // "totalKilobytesChanged"
        QT_MOC_LITERAL(94, 21),  // "totalMegabytesChanged"
        QT_MOC_LITERAL(116, 21),  // "totalGigabytesChanged"
        QT_MOC_LITERAL(138, 21),  // "totalTerabytesChanged"
        QT_MOC_LITERAL(160, 24),  // "subdirectoryCountChanged"
        QT_MOC_LITERAL(185, 13),  // "directoryName"
        QT_MOC_LITERAL(199, 17),  // "subDirectoryCount"
        QT_MOC_LITERAL(217, 9),  // "fileCount"
        QT_MOC_LITERAL(227, 10),  // "totalBytes"
        QT_MOC_LITERAL(238, 14),  // "totalKilobytes"
        QT_MOC_LITERAL(253, 14),  // "totalMegabytes"
        QT_MOC_LITERAL(268, 14),  // "totalGigabytes"
        QT_MOC_LITERAL(283, 14)   // "totalTerabytes"
    },
    "DirectoryModel",
    "directoryNameChanged",
    "",
    "fileCountChanged",
    "totalBytesChanged",
    "totalKilobytesChanged",
    "totalMegabytesChanged",
    "totalGigabytesChanged",
    "totalTerabytesChanged",
    "subdirectoryCountChanged",
    "directoryName",
    "subDirectoryCount",
    "fileCount",
    "totalBytes",
    "totalKilobytes",
    "totalMegabytes",
    "totalGigabytes",
    "totalTerabytes"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDirectoryModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    9 /* Public */,
       3,    0,   63,    2, 0x06,   10 /* Public */,
       4,    0,   64,    2, 0x06,   11 /* Public */,
       5,    0,   65,    2, 0x06,   12 /* Public */,
       6,    0,   66,    2, 0x06,   13 /* Public */,
       7,    0,   67,    2, 0x06,   14 /* Public */,
       8,    0,   68,    2, 0x06,   15 /* Public */,
       9,    0,   69,    2, 0x06,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00015103, uint(0), 0,
      11, QMetaType::Double, 0x00015003, uint(7), 0,
      12, QMetaType::Double, 0x00015103, uint(1), 0,
      13, QMetaType::LongLong, 0x00015103, uint(2), 0,
      14, QMetaType::Double, 0x00015103, uint(3), 0,
      15, QMetaType::Double, 0x00015103, uint(4), 0,
      16, QMetaType::Double, 0x00015103, uint(5), 0,
      17, QMetaType::Double, 0x00015103, uint(6), 0,

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
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'fileCount'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'totalBytes'
        QtPrivate::TypeAndForceComplete<qint64, std::true_type>,
        // property 'totalKilobytes'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'totalMegabytes'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'totalGigabytes'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'totalTerabytes'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DirectoryModel, std::true_type>,
        // method 'directoryNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'totalBytesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'totalKilobytesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'totalMegabytesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'totalGigabytesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'totalTerabytesChanged'
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
        case 2: _t->totalBytesChanged(); break;
        case 3: _t->totalKilobytesChanged(); break;
        case 4: _t->totalMegabytesChanged(); break;
        case 5: _t->totalGigabytesChanged(); break;
        case 6: _t->totalTerabytesChanged(); break;
        case 7: _t->subdirectoryCountChanged(); break;
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
            if (_t _q_method = &DirectoryModel::totalBytesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DirectoryModel::*)();
            if (_t _q_method = &DirectoryModel::totalKilobytesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DirectoryModel::*)();
            if (_t _q_method = &DirectoryModel::totalMegabytesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DirectoryModel::*)();
            if (_t _q_method = &DirectoryModel::totalGigabytesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DirectoryModel::*)();
            if (_t _q_method = &DirectoryModel::totalTerabytesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DirectoryModel::*)();
            if (_t _q_method = &DirectoryModel::subdirectoryCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DirectoryModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->directoryName(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->subDirectoryCount(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->fileCount(); break;
        case 3: *reinterpret_cast< qint64*>(_v) = _t->totalBytes(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->totalKilobytes(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->totalMegabytes(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->totalGigabytes(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->totalTerabytes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DirectoryModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDirectoryName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSubdirectoryCount(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setFileCount(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setTotalBytes(*reinterpret_cast< qint64*>(_v)); break;
        case 4: _t->setTotalKilobytes(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setTotalMegabytes(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setTotalGigabytes(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setTotalTerabytes(*reinterpret_cast< double*>(_v)); break;
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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
void DirectoryModel::totalBytesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DirectoryModel::totalKilobytesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DirectoryModel::totalMegabytesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DirectoryModel::totalGigabytesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DirectoryModel::totalTerabytesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void DirectoryModel::subdirectoryCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
