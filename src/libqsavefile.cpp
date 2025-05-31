#include <QChildEvent>
#include <QEvent>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSaveFile>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsavefile.h>
#include "libqsavefile.h"
#include "libqsavefile.hxx"

QSaveFile* QSaveFile_new(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQSaveFile(name_QString);
}

QSaveFile* QSaveFile_new2() {
    return new VirtualQSaveFile();
}

QSaveFile* QSaveFile_new3(const libqt_string name, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQSaveFile(name_QString, parent);
}

QSaveFile* QSaveFile_new4(QObject* parent) {
    return new VirtualQSaveFile(parent);
}

QMetaObject* QSaveFile_MetaObject(const QSaveFile* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSaveFile_Metacast(QSaveFile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSaveFile_Metacall(QSaveFile* self, int param1, int param2, void** param3) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSaveFile*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSaveFile_OnMetacall(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Metacall_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSaveFile_QBaseMetacall(QSaveFile* self, int param1, int param2, void** param3) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Metacall_IsBase(true);
        return vqsavefile->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSaveFile*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSaveFile_Tr(const char* s) {
    QString _ret = QSaveFile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSaveFile_SetFileName(QSaveFile* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setFileName(name_QString);
}

bool QSaveFile_Commit(QSaveFile* self) {
    return self->commit();
}

void QSaveFile_CancelWriting(QSaveFile* self) {
    self->cancelWriting();
}

void QSaveFile_SetDirectWriteFallback(QSaveFile* self, bool enabled) {
    self->setDirectWriteFallback(enabled);
}

bool QSaveFile_DirectWriteFallback(const QSaveFile* self) {
    return self->directWriteFallback();
}

libqt_string QSaveFile_Tr2(const char* s, const char* c) {
    QString _ret = QSaveFile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSaveFile_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSaveFile::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
libqt_string QSaveFile_FileName(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        QString _ret = vqsavefile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QSaveFile::fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QSaveFile_QBaseFileName(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_FileName_IsBase(true);
        QString _ret = vqsavefile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QSaveFile::fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnFileName(const QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_FileName_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_FileName_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSaveFile_Open(QSaveFile* self, int flags) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->open(static_cast<QIODeviceBase::OpenMode>(flags));
    } else {
        return self->QSaveFile::open(static_cast<QIODeviceBase::OpenMode>(flags));
    }
}

// Base class handler implementation
bool QSaveFile_QBaseOpen(QSaveFile* self, int flags) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Open_IsBase(true);
        return vqsavefile->open(static_cast<QIODeviceBase::OpenMode>(flags));
    } else {
        return self->QSaveFile::open(static_cast<QIODeviceBase::OpenMode>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnOpen(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Open_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_Open_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSaveFile_WriteData(QSaveFile* self, const char* data, long long lenVal) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return static_cast<long long>(vqsavefile->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualQSaveFile*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long QSaveFile_QBaseWriteData(QSaveFile* self, const char* data, long long lenVal) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_WriteData_IsBase(true);
        return static_cast<long long>(vqsavefile->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualQSaveFile*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnWriteData(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_WriteData_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSaveFile_IsSequential(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->isSequential();
    } else {
        return self->QSaveFile::isSequential();
    }
}

// Base class handler implementation
bool QSaveFile_QBaseIsSequential(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_IsSequential_IsBase(true);
        return vqsavefile->isSequential();
    } else {
        return self->QSaveFile::isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnIsSequential(const QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_IsSequential_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSaveFile_Pos(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return static_cast<long long>(vqsavefile->pos());
    } else {
        return static_cast<long long>(self->QSaveFile::pos());
    }
}

// Base class handler implementation
long long QSaveFile_QBasePos(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Pos_IsBase(true);
        return static_cast<long long>(vqsavefile->pos());
    } else {
        return static_cast<long long>(self->QSaveFile::pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnPos(const QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Pos_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSaveFile_Seek(QSaveFile* self, long long offset) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->seek(static_cast<qint64>(offset));
    } else {
        return self->QSaveFile::seek(static_cast<qint64>(offset));
    }
}

// Base class handler implementation
bool QSaveFile_QBaseSeek(QSaveFile* self, long long offset) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Seek_IsBase(true);
        return vqsavefile->seek(static_cast<qint64>(offset));
    } else {
        return self->QSaveFile::seek(static_cast<qint64>(offset));
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnSeek(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Seek_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSaveFile_AtEnd(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->atEnd();
    } else {
        return self->QSaveFile::atEnd();
    }
}

// Base class handler implementation
bool QSaveFile_QBaseAtEnd(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_AtEnd_IsBase(true);
        return vqsavefile->atEnd();
    } else {
        return self->QSaveFile::atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnAtEnd(const QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_AtEnd_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSaveFile_Size(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return static_cast<long long>(vqsavefile->size());
    } else {
        return static_cast<long long>(self->QSaveFile::size());
    }
}

// Base class handler implementation
long long QSaveFile_QBaseSize(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Size_IsBase(true);
        return static_cast<long long>(vqsavefile->size());
    } else {
        return static_cast<long long>(self->QSaveFile::size());
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnSize(const QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Size_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSaveFile_Resize(QSaveFile* self, long long sz) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->resize(static_cast<qint64>(sz));
    } else {
        return self->QSaveFile::resize(static_cast<qint64>(sz));
    }
}

// Base class handler implementation
bool QSaveFile_QBaseResize(QSaveFile* self, long long sz) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Resize_IsBase(true);
        return vqsavefile->resize(static_cast<qint64>(sz));
    } else {
        return self->QSaveFile::resize(static_cast<qint64>(sz));
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnResize(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Resize_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_Resize_Callback>(slot));
    }
}

// Derived class handler implementation
int QSaveFile_Permissions(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return static_cast<int>(vqsavefile->permissions());
    } else {
        return static_cast<int>(self->QSaveFile::permissions());
    }
}

// Base class handler implementation
int QSaveFile_QBasePermissions(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Permissions_IsBase(true);
        return static_cast<int>(vqsavefile->permissions());
    } else {
        return static_cast<int>(self->QSaveFile::permissions());
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnPermissions(const QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Permissions_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_Permissions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSaveFile_SetPermissions(QSaveFile* self, int permissionSpec) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    } else {
        return self->QSaveFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    }
}

// Base class handler implementation
bool QSaveFile_QBaseSetPermissions(QSaveFile* self, int permissionSpec) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_SetPermissions_IsBase(true);
        return vqsavefile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    } else {
        return self->QSaveFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnSetPermissions(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_SetPermissions_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_SetPermissions_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSaveFile_ReadData(QSaveFile* self, char* data, long long maxlen) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return static_cast<long long>(vqsavefile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQSaveFile*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QSaveFile_QBaseReadData(QSaveFile* self, char* data, long long maxlen) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_ReadData_IsBase(true);
        return static_cast<long long>(vqsavefile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQSaveFile*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnReadData(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_ReadData_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSaveFile_ReadLineData(QSaveFile* self, char* data, long long maxlen) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return static_cast<long long>(vqsavefile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQSaveFile*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QSaveFile_QBaseReadLineData(QSaveFile* self, char* data, long long maxlen) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_ReadLineData_IsBase(true);
        return static_cast<long long>(vqsavefile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQSaveFile*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnReadLineData(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_ReadLineData_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSaveFile_Reset(QSaveFile* self) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->reset();
    } else {
        return self->QSaveFile::reset();
    }
}

// Base class handler implementation
bool QSaveFile_QBaseReset(QSaveFile* self) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Reset_IsBase(true);
        return vqsavefile->reset();
    } else {
        return self->QSaveFile::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnReset(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Reset_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSaveFile_BytesAvailable(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return static_cast<long long>(vqsavefile->bytesAvailable());
    } else {
        return static_cast<long long>(self->QSaveFile::bytesAvailable());
    }
}

// Base class handler implementation
long long QSaveFile_QBaseBytesAvailable(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqsavefile->bytesAvailable());
    } else {
        return static_cast<long long>(self->QSaveFile::bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnBytesAvailable(const QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_BytesAvailable_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSaveFile_BytesToWrite(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return static_cast<long long>(vqsavefile->bytesToWrite());
    } else {
        return static_cast<long long>(self->QSaveFile::bytesToWrite());
    }
}

// Base class handler implementation
long long QSaveFile_QBaseBytesToWrite(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqsavefile->bytesToWrite());
    } else {
        return static_cast<long long>(self->QSaveFile::bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnBytesToWrite(const QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_BytesToWrite_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSaveFile_CanReadLine(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->canReadLine();
    } else {
        return self->QSaveFile::canReadLine();
    }
}

// Base class handler implementation
bool QSaveFile_QBaseCanReadLine(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_CanReadLine_IsBase(true);
        return vqsavefile->canReadLine();
    } else {
        return self->QSaveFile::canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnCanReadLine(const QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_CanReadLine_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSaveFile_WaitForReadyRead(QSaveFile* self, int msecs) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QSaveFile::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QSaveFile_QBaseWaitForReadyRead(QSaveFile* self, int msecs) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_WaitForReadyRead_IsBase(true);
        return vqsavefile->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QSaveFile::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnWaitForReadyRead(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_WaitForReadyRead_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSaveFile_WaitForBytesWritten(QSaveFile* self, int msecs) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QSaveFile::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QSaveFile_QBaseWaitForBytesWritten(QSaveFile* self, int msecs) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_WaitForBytesWritten_IsBase(true);
        return vqsavefile->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QSaveFile::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnWaitForBytesWritten(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSaveFile_SkipData(QSaveFile* self, long long maxSize) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return static_cast<long long>(vqsavefile->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQSaveFile*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QSaveFile_QBaseSkipData(QSaveFile* self, long long maxSize) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_SkipData_IsBase(true);
        return static_cast<long long>(vqsavefile->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQSaveFile*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnSkipData(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_SkipData_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSaveFile_Event(QSaveFile* self, QEvent* event) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->event(event);
    } else {
        return self->QSaveFile::event(event);
    }
}

// Base class handler implementation
bool QSaveFile_QBaseEvent(QSaveFile* self, QEvent* event) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Event_IsBase(true);
        return vqsavefile->event(event);
    } else {
        return self->QSaveFile::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnEvent(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Event_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSaveFile_EventFilter(QSaveFile* self, QObject* watched, QEvent* event) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->eventFilter(watched, event);
    } else {
        return self->QSaveFile::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSaveFile_QBaseEventFilter(QSaveFile* self, QObject* watched, QEvent* event) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_EventFilter_IsBase(true);
        return vqsavefile->eventFilter(watched, event);
    } else {
        return self->QSaveFile::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnEventFilter(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_EventFilter_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSaveFile_TimerEvent(QSaveFile* self, QTimerEvent* event) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->timerEvent(event);
    } else {
        ((VirtualQSaveFile*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSaveFile_QBaseTimerEvent(QSaveFile* self, QTimerEvent* event) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_TimerEvent_IsBase(true);
        vqsavefile->timerEvent(event);
    } else {
        ((VirtualQSaveFile*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnTimerEvent(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_TimerEvent_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSaveFile_ChildEvent(QSaveFile* self, QChildEvent* event) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->childEvent(event);
    } else {
        ((VirtualQSaveFile*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSaveFile_QBaseChildEvent(QSaveFile* self, QChildEvent* event) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_ChildEvent_IsBase(true);
        vqsavefile->childEvent(event);
    } else {
        ((VirtualQSaveFile*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnChildEvent(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_ChildEvent_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSaveFile_CustomEvent(QSaveFile* self, QEvent* event) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->customEvent(event);
    } else {
        ((VirtualQSaveFile*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSaveFile_QBaseCustomEvent(QSaveFile* self, QEvent* event) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_CustomEvent_IsBase(true);
        vqsavefile->customEvent(event);
    } else {
        ((VirtualQSaveFile*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnCustomEvent(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_CustomEvent_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSaveFile_ConnectNotify(QSaveFile* self, const QMetaMethod* signal) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->connectNotify(*signal);
    } else {
        ((VirtualQSaveFile*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSaveFile_QBaseConnectNotify(QSaveFile* self, const QMetaMethod* signal) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_ConnectNotify_IsBase(true);
        vqsavefile->connectNotify(*signal);
    } else {
        ((VirtualQSaveFile*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnConnectNotify(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_ConnectNotify_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSaveFile_DisconnectNotify(QSaveFile* self, const QMetaMethod* signal) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->disconnectNotify(*signal);
    } else {
        ((VirtualQSaveFile*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSaveFile_QBaseDisconnectNotify(QSaveFile* self, const QMetaMethod* signal) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_DisconnectNotify_IsBase(true);
        vqsavefile->disconnectNotify(*signal);
    } else {
        ((VirtualQSaveFile*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnDisconnectNotify(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_DisconnectNotify_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSaveFile_SetOpenMode(QSaveFile* self, int openMode) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQSaveFile*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QSaveFile_QBaseSetOpenMode(QSaveFile* self, int openMode) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_SetOpenMode_IsBase(true);
        vqsavefile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQSaveFile*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnSetOpenMode(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_SetOpenMode_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QSaveFile_SetErrorString(QSaveFile* self, const libqt_string errorString) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setErrorString(errorString_QString);
    } else {
        ((VirtualQSaveFile*)self)->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QSaveFile_QBaseSetErrorString(QSaveFile* self, const libqt_string errorString) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_SetErrorString_IsBase(true);
        vqsavefile->setErrorString(errorString_QString);
    } else {
        ((VirtualQSaveFile*)self)->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnSetErrorString(QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_SetErrorString_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSaveFile_Sender(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->sender();
    } else {
        return ((VirtualQSaveFile*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSaveFile_QBaseSender(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Sender_IsBase(true);
        return vqsavefile->sender();
    } else {
        return ((VirtualQSaveFile*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnSender(const QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Sender_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSaveFile_SenderSignalIndex(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->senderSignalIndex();
    } else {
        return ((VirtualQSaveFile*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSaveFile_QBaseSenderSignalIndex(const QSaveFile* self) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_SenderSignalIndex_IsBase(true);
        return vqsavefile->senderSignalIndex();
    } else {
        return ((VirtualQSaveFile*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnSenderSignalIndex(const QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSaveFile_Receivers(const QSaveFile* self, const char* signal) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->receivers(signal);
    } else {
        return ((VirtualQSaveFile*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSaveFile_QBaseReceivers(const QSaveFile* self, const char* signal) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Receivers_IsBase(true);
        return vqsavefile->receivers(signal);
    } else {
        return ((VirtualQSaveFile*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnReceivers(const QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_Receivers_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSaveFile_IsSignalConnected(const QSaveFile* self, const QMetaMethod* signal) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        return vqsavefile->isSignalConnected(*signal);
    } else {
        return ((VirtualQSaveFile*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSaveFile_QBaseIsSignalConnected(const QSaveFile* self, const QMetaMethod* signal) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_IsSignalConnected_IsBase(true);
        return vqsavefile->isSignalConnected(*signal);
    } else {
        return ((VirtualQSaveFile*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnIsSignalConnected(const QSaveFile* self, intptr_t slot) {
    auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self));
    if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
        vqsavefile->setQSaveFile_IsSignalConnected_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_IsSignalConnected_Callback>(slot));
    }
}

void QSaveFile_Delete(QSaveFile* self) {
    delete self;
}
