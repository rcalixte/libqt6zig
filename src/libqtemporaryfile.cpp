#include <QChildEvent>
#include <QEvent>
#include <QFile>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTemporaryFile>
#include <QTimerEvent>
#include <qtemporaryfile.h>
#include "libqtemporaryfile.h"
#include "libqtemporaryfile.hxx"

QTemporaryFile* QTemporaryFile_new() {
    return new VirtualQTemporaryFile();
}

QTemporaryFile* QTemporaryFile_new2(const libqt_string templateName) {
    QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
    return new VirtualQTemporaryFile(templateName_QString);
}

QTemporaryFile* QTemporaryFile_new3(QObject* parent) {
    return new VirtualQTemporaryFile(parent);
}

QTemporaryFile* QTemporaryFile_new4(const libqt_string templateName, QObject* parent) {
    QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
    return new VirtualQTemporaryFile(templateName_QString, parent);
}

QMetaObject* QTemporaryFile_MetaObject(const QTemporaryFile* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTemporaryFile_Metacast(QTemporaryFile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTemporaryFile_Metacall(QTemporaryFile* self, int param1, int param2, void** param3) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTemporaryFile*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTemporaryFile_OnMetacall(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Metacall_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTemporaryFile_QBaseMetacall(QTemporaryFile* self, int param1, int param2, void** param3) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Metacall_IsBase(true);
        return vqtemporaryfile->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTemporaryFile*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTemporaryFile_Tr(const char* s) {
    QString _ret = QTemporaryFile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTemporaryFile_AutoRemove(const QTemporaryFile* self) {
    return self->autoRemove();
}

void QTemporaryFile_SetAutoRemove(QTemporaryFile* self, bool b) {
    self->setAutoRemove(b);
}

bool QTemporaryFile_Open(QTemporaryFile* self) {
    return self->open();
}

libqt_string QTemporaryFile_FileTemplate(const QTemporaryFile* self) {
    QString _ret = self->fileTemplate();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTemporaryFile_SetFileTemplate(QTemporaryFile* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setFileTemplate(name_QString);
}

bool QTemporaryFile_Rename(QTemporaryFile* self, const libqt_string newName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return self->rename(newName_QString);
}

QTemporaryFile* QTemporaryFile_CreateNativeFile(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QTemporaryFile::createNativeFile(fileName_QString);
}

QTemporaryFile* QTemporaryFile_CreateNativeFileWithFile(QFile* file) {
    return QTemporaryFile::createNativeFile(*file);
}

libqt_string QTemporaryFile_Tr2(const char* s, const char* c) {
    QString _ret = QTemporaryFile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTemporaryFile_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTemporaryFile::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
libqt_string QTemporaryFile_FileName(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        QString _ret = vqtemporaryfile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTemporaryFile::fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QTemporaryFile_QBaseFileName(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_FileName_IsBase(true);
        QString _ret = vqtemporaryfile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTemporaryFile::fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnFileName(const QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_FileName_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_FileName_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_OpenWithFlags(QTemporaryFile* self, int flags) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->open(static_cast<QIODeviceBase::OpenMode>(flags));
    } else {
        return ((VirtualQTemporaryFile*)self)->open(static_cast<QIODeviceBase::OpenMode>(flags));
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseOpenWithFlags(QTemporaryFile* self, int flags) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_OpenWithFlags_IsBase(true);
        return vqtemporaryfile->open(static_cast<QIODeviceBase::OpenMode>(flags));
    } else {
        return ((VirtualQTemporaryFile*)self)->open(static_cast<QIODeviceBase::OpenMode>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnOpenWithFlags(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_OpenWithFlags_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_OpenWithFlags_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_Size(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return static_cast<long long>(vqtemporaryfile->size());
    } else {
        return static_cast<long long>(self->QTemporaryFile::size());
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseSize(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Size_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->size());
    } else {
        return static_cast<long long>(self->QTemporaryFile::size());
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSize(const QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Size_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_Resize(QTemporaryFile* self, long long sz) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->resize(static_cast<qint64>(sz));
    } else {
        return self->QTemporaryFile::resize(static_cast<qint64>(sz));
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseResize(QTemporaryFile* self, long long sz) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Resize_IsBase(true);
        return vqtemporaryfile->resize(static_cast<qint64>(sz));
    } else {
        return self->QTemporaryFile::resize(static_cast<qint64>(sz));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnResize(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Resize_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Resize_Callback>(slot));
    }
}

// Derived class handler implementation
int QTemporaryFile_Permissions(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return static_cast<int>(vqtemporaryfile->permissions());
    } else {
        return static_cast<int>(self->QTemporaryFile::permissions());
    }
}

// Base class handler implementation
int QTemporaryFile_QBasePermissions(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Permissions_IsBase(true);
        return static_cast<int>(vqtemporaryfile->permissions());
    } else {
        return static_cast<int>(self->QTemporaryFile::permissions());
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnPermissions(const QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Permissions_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Permissions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_SetPermissions(QTemporaryFile* self, int permissionSpec) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    } else {
        return self->QTemporaryFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseSetPermissions(QTemporaryFile* self, int permissionSpec) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_SetPermissions_IsBase(true);
        return vqtemporaryfile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    } else {
        return self->QTemporaryFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSetPermissions(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_SetPermissions_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_SetPermissions_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_Close(QTemporaryFile* self) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->close();
    } else {
        self->QTemporaryFile::close();
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseClose(QTemporaryFile* self) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Close_IsBase(true);
        vqtemporaryfile->close();
    } else {
        self->QTemporaryFile::close();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnClose(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Close_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Close_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_IsSequential(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->isSequential();
    } else {
        return self->QTemporaryFile::isSequential();
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseIsSequential(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_IsSequential_IsBase(true);
        return vqtemporaryfile->isSequential();
    } else {
        return self->QTemporaryFile::isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnIsSequential(const QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_IsSequential_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_Pos(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return static_cast<long long>(vqtemporaryfile->pos());
    } else {
        return static_cast<long long>(self->QTemporaryFile::pos());
    }
}

// Base class handler implementation
long long QTemporaryFile_QBasePos(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Pos_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->pos());
    } else {
        return static_cast<long long>(self->QTemporaryFile::pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnPos(const QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Pos_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_Seek(QTemporaryFile* self, long long offset) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->seek(static_cast<qint64>(offset));
    } else {
        return self->QTemporaryFile::seek(static_cast<qint64>(offset));
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseSeek(QTemporaryFile* self, long long offset) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Seek_IsBase(true);
        return vqtemporaryfile->seek(static_cast<qint64>(offset));
    } else {
        return self->QTemporaryFile::seek(static_cast<qint64>(offset));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSeek(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Seek_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_AtEnd(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->atEnd();
    } else {
        return self->QTemporaryFile::atEnd();
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseAtEnd(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_AtEnd_IsBase(true);
        return vqtemporaryfile->atEnd();
    } else {
        return self->QTemporaryFile::atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnAtEnd(const QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_AtEnd_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_ReadData(QTemporaryFile* self, char* data, long long maxlen) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return static_cast<long long>(vqtemporaryfile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQTemporaryFile*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseReadData(QTemporaryFile* self, char* data, long long maxlen) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_ReadData_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQTemporaryFile*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnReadData(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_ReadData_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_WriteData(QTemporaryFile* self, const char* data, long long lenVal) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return static_cast<long long>(vqtemporaryfile->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualQTemporaryFile*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseWriteData(QTemporaryFile* self, const char* data, long long lenVal) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_WriteData_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualQTemporaryFile*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnWriteData(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_WriteData_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_ReadLineData(QTemporaryFile* self, char* data, long long maxlen) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return static_cast<long long>(vqtemporaryfile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQTemporaryFile*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseReadLineData(QTemporaryFile* self, char* data, long long maxlen) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_ReadLineData_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQTemporaryFile*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnReadLineData(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_ReadLineData_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_Reset(QTemporaryFile* self) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->reset();
    } else {
        return self->QTemporaryFile::reset();
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseReset(QTemporaryFile* self) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Reset_IsBase(true);
        return vqtemporaryfile->reset();
    } else {
        return self->QTemporaryFile::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnReset(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Reset_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_BytesAvailable(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return static_cast<long long>(vqtemporaryfile->bytesAvailable());
    } else {
        return static_cast<long long>(self->QTemporaryFile::bytesAvailable());
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseBytesAvailable(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->bytesAvailable());
    } else {
        return static_cast<long long>(self->QTemporaryFile::bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnBytesAvailable(const QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_BytesAvailable_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_BytesToWrite(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return static_cast<long long>(vqtemporaryfile->bytesToWrite());
    } else {
        return static_cast<long long>(self->QTemporaryFile::bytesToWrite());
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseBytesToWrite(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->bytesToWrite());
    } else {
        return static_cast<long long>(self->QTemporaryFile::bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnBytesToWrite(const QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_BytesToWrite_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_CanReadLine(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->canReadLine();
    } else {
        return self->QTemporaryFile::canReadLine();
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseCanReadLine(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_CanReadLine_IsBase(true);
        return vqtemporaryfile->canReadLine();
    } else {
        return self->QTemporaryFile::canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnCanReadLine(const QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_CanReadLine_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_WaitForReadyRead(QTemporaryFile* self, int msecs) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QTemporaryFile::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseWaitForReadyRead(QTemporaryFile* self, int msecs) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_WaitForReadyRead_IsBase(true);
        return vqtemporaryfile->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QTemporaryFile::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnWaitForReadyRead(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_WaitForReadyRead_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_WaitForBytesWritten(QTemporaryFile* self, int msecs) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QTemporaryFile::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseWaitForBytesWritten(QTemporaryFile* self, int msecs) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_WaitForBytesWritten_IsBase(true);
        return vqtemporaryfile->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QTemporaryFile::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnWaitForBytesWritten(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_SkipData(QTemporaryFile* self, long long maxSize) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return static_cast<long long>(vqtemporaryfile->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQTemporaryFile*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseSkipData(QTemporaryFile* self, long long maxSize) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_SkipData_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQTemporaryFile*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSkipData(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_SkipData_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_Event(QTemporaryFile* self, QEvent* event) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->event(event);
    } else {
        return self->QTemporaryFile::event(event);
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseEvent(QTemporaryFile* self, QEvent* event) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Event_IsBase(true);
        return vqtemporaryfile->event(event);
    } else {
        return self->QTemporaryFile::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnEvent(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Event_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_EventFilter(QTemporaryFile* self, QObject* watched, QEvent* event) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->eventFilter(watched, event);
    } else {
        return self->QTemporaryFile::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseEventFilter(QTemporaryFile* self, QObject* watched, QEvent* event) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_EventFilter_IsBase(true);
        return vqtemporaryfile->eventFilter(watched, event);
    } else {
        return self->QTemporaryFile::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnEventFilter(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_EventFilter_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_TimerEvent(QTemporaryFile* self, QTimerEvent* event) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->timerEvent(event);
    } else {
        ((VirtualQTemporaryFile*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseTimerEvent(QTemporaryFile* self, QTimerEvent* event) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_TimerEvent_IsBase(true);
        vqtemporaryfile->timerEvent(event);
    } else {
        ((VirtualQTemporaryFile*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnTimerEvent(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_TimerEvent_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_ChildEvent(QTemporaryFile* self, QChildEvent* event) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->childEvent(event);
    } else {
        ((VirtualQTemporaryFile*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseChildEvent(QTemporaryFile* self, QChildEvent* event) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_ChildEvent_IsBase(true);
        vqtemporaryfile->childEvent(event);
    } else {
        ((VirtualQTemporaryFile*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnChildEvent(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_ChildEvent_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_CustomEvent(QTemporaryFile* self, QEvent* event) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->customEvent(event);
    } else {
        ((VirtualQTemporaryFile*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseCustomEvent(QTemporaryFile* self, QEvent* event) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_CustomEvent_IsBase(true);
        vqtemporaryfile->customEvent(event);
    } else {
        ((VirtualQTemporaryFile*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnCustomEvent(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_CustomEvent_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_ConnectNotify(QTemporaryFile* self, const QMetaMethod* signal) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->connectNotify(*signal);
    } else {
        ((VirtualQTemporaryFile*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseConnectNotify(QTemporaryFile* self, const QMetaMethod* signal) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_ConnectNotify_IsBase(true);
        vqtemporaryfile->connectNotify(*signal);
    } else {
        ((VirtualQTemporaryFile*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnConnectNotify(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_ConnectNotify_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_DisconnectNotify(QTemporaryFile* self, const QMetaMethod* signal) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->disconnectNotify(*signal);
    } else {
        ((VirtualQTemporaryFile*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseDisconnectNotify(QTemporaryFile* self, const QMetaMethod* signal) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_DisconnectNotify_IsBase(true);
        vqtemporaryfile->disconnectNotify(*signal);
    } else {
        ((VirtualQTemporaryFile*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnDisconnectNotify(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_DisconnectNotify_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_SetOpenMode(QTemporaryFile* self, int openMode) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQTemporaryFile*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseSetOpenMode(QTemporaryFile* self, int openMode) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_SetOpenMode_IsBase(true);
        vqtemporaryfile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQTemporaryFile*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSetOpenMode(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_SetOpenMode_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_SetErrorString(QTemporaryFile* self, const libqt_string errorString) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setErrorString(errorString_QString);
    } else {
        ((VirtualQTemporaryFile*)self)->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseSetErrorString(QTemporaryFile* self, const libqt_string errorString) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_SetErrorString_IsBase(true);
        vqtemporaryfile->setErrorString(errorString_QString);
    } else {
        ((VirtualQTemporaryFile*)self)->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSetErrorString(QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_SetErrorString_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTemporaryFile_Sender(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->sender();
    } else {
        return ((VirtualQTemporaryFile*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTemporaryFile_QBaseSender(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Sender_IsBase(true);
        return vqtemporaryfile->sender();
    } else {
        return ((VirtualQTemporaryFile*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSender(const QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Sender_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTemporaryFile_SenderSignalIndex(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->senderSignalIndex();
    } else {
        return ((VirtualQTemporaryFile*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTemporaryFile_QBaseSenderSignalIndex(const QTemporaryFile* self) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_SenderSignalIndex_IsBase(true);
        return vqtemporaryfile->senderSignalIndex();
    } else {
        return ((VirtualQTemporaryFile*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSenderSignalIndex(const QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTemporaryFile_Receivers(const QTemporaryFile* self, const char* signal) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->receivers(signal);
    } else {
        return ((VirtualQTemporaryFile*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTemporaryFile_QBaseReceivers(const QTemporaryFile* self, const char* signal) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Receivers_IsBase(true);
        return vqtemporaryfile->receivers(signal);
    } else {
        return ((VirtualQTemporaryFile*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnReceivers(const QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_Receivers_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_IsSignalConnected(const QTemporaryFile* self, const QMetaMethod* signal) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        return vqtemporaryfile->isSignalConnected(*signal);
    } else {
        return ((VirtualQTemporaryFile*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseIsSignalConnected(const QTemporaryFile* self, const QMetaMethod* signal) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_IsSignalConnected_IsBase(true);
        return vqtemporaryfile->isSignalConnected(*signal);
    } else {
        return ((VirtualQTemporaryFile*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnIsSignalConnected(const QTemporaryFile* self, intptr_t slot) {
    auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self));
    if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
        vqtemporaryfile->setQTemporaryFile_IsSignalConnected_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_IsSignalConnected_Callback>(slot));
    }
}

void QTemporaryFile_Delete(QTemporaryFile* self) {
    delete self;
}
