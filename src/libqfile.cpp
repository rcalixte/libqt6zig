#include <QByteArray>
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
#include <QTimerEvent>
#include <qfile.h>
#include "libqfile.h"
#include "libqfile.hxx"

QFile* QFile_new() {
    return new VirtualQFile();
}

QFile* QFile_new2(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQFile(name_QString);
}

QFile* QFile_new3(QObject* parent) {
    return new VirtualQFile(parent);
}

QFile* QFile_new4(const libqt_string name, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQFile(name_QString, parent);
}

QMetaObject* QFile_MetaObject(const QFile* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFile_Metacast(QFile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFile_Metacall(QFile* self, int param1, int param2, void** param3) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFile*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFile_OnMetacall(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Metacall_Callback(reinterpret_cast<VirtualQFile::QFile_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFile_QBaseMetacall(QFile* self, int param1, int param2, void** param3) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Metacall_IsBase(true);
        return vqfile->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFile*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QFile_Tr(const char* s) {
    QString _ret = QFile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFile_SetFileName(QFile* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setFileName(name_QString);
}

libqt_string QFile_EncodeName(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray _qb = QFile::encodeName(fileName_QString);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFile_DecodeName(const libqt_string localFileName) {
    QByteArray localFileName_QByteArray(localFileName.data, localFileName.len);
    QString _ret = QFile::decodeName(localFileName_QByteArray);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFile_DecodeNameWithLocalFileName(const char* localFileName) {
    QString _ret = QFile::decodeName(localFileName);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QFile_Exists(const QFile* self) {
    return self->exists();
}

bool QFile_ExistsWithFileName(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QFile::exists(fileName_QString);
}

libqt_string QFile_SymLinkTarget(const QFile* self) {
    QString _ret = self->symLinkTarget();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFile_SymLinkTargetWithFileName(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString _ret = QFile::symLinkTarget(fileName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QFile_Remove(QFile* self) {
    return self->remove();
}

bool QFile_RemoveWithFileName(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QFile::remove(fileName_QString);
}

bool QFile_MoveToTrash(QFile* self) {
    return self->moveToTrash();
}

bool QFile_MoveToTrashWithFileName(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QFile::moveToTrash(fileName_QString);
}

bool QFile_Rename(QFile* self, const libqt_string newName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return self->rename(newName_QString);
}

bool QFile_Rename2(const libqt_string oldName, const libqt_string newName) {
    QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return QFile::rename(oldName_QString, newName_QString);
}

bool QFile_Link(QFile* self, const libqt_string newName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return self->link(newName_QString);
}

bool QFile_Link2(const libqt_string fileName, const libqt_string newName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return QFile::link(fileName_QString, newName_QString);
}

bool QFile_Copy(QFile* self, const libqt_string newName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return self->copy(newName_QString);
}

bool QFile_Copy2(const libqt_string fileName, const libqt_string newName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return QFile::copy(fileName_QString, newName_QString);
}

bool QFile_Open2(QFile* self, int flags, int permissions) {
    return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags), static_cast<QFileDevice::Permissions>(permissions));
}

bool QFile_Open4(QFile* self, int fd, int ioFlags) {
    return self->open(static_cast<int>(fd), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(ioFlags));
}

bool QFile_Resize2(const libqt_string filename, long long sz) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return QFile::resize(filename_QString, static_cast<qint64>(sz));
}

int QFile_PermissionsWithFilename(const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return static_cast<int>(QFile::permissions(filename_QString));
}

bool QFile_SetPermissions2(const libqt_string filename, int permissionSpec) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return QFile::setPermissions(filename_QString, static_cast<QFileDevice::Permissions>(permissionSpec));
}

libqt_string QFile_Tr2(const char* s, const char* c) {
    QString _ret = QFile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFile_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFile::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QFile_Open33(QFile* self, int fd, int ioFlags, int handleFlags) {
    return self->open(static_cast<int>(fd), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(ioFlags), static_cast<QFileDevice::FileHandleFlags>(handleFlags));
}

// Derived class handler implementation
libqt_string QFile_FileName(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        QString _ret = vqfile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QFile::fileName();
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
libqt_string QFile_QBaseFileName(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_FileName_IsBase(true);
        QString _ret = vqfile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QFile::fileName();
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
void QFile_OnFileName(const QFile* self, intptr_t slot) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_FileName_Callback(reinterpret_cast<VirtualQFile::QFile_FileName_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_Open(QFile* self, int flags) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
    } else {
        return self->QFile::open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
    }
}

// Base class handler implementation
bool QFile_QBaseOpen(QFile* self, int flags) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Open_IsBase(true);
        return vqfile->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
    } else {
        return self->QFile::open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnOpen(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Open_Callback(reinterpret_cast<VirtualQFile::QFile_Open_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_Size(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        return static_cast<long long>(vqfile->size());
    } else {
        return static_cast<long long>(self->QFile::size());
    }
}

// Base class handler implementation
long long QFile_QBaseSize(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Size_IsBase(true);
        return static_cast<long long>(vqfile->size());
    } else {
        return static_cast<long long>(self->QFile::size());
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSize(const QFile* self, intptr_t slot) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Size_Callback(reinterpret_cast<VirtualQFile::QFile_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_Resize(QFile* self, long long sz) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->resize(static_cast<qint64>(sz));
    } else {
        return self->QFile::resize(static_cast<qint64>(sz));
    }
}

// Base class handler implementation
bool QFile_QBaseResize(QFile* self, long long sz) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Resize_IsBase(true);
        return vqfile->resize(static_cast<qint64>(sz));
    } else {
        return self->QFile::resize(static_cast<qint64>(sz));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnResize(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Resize_Callback(reinterpret_cast<VirtualQFile::QFile_Resize_Callback>(slot));
    }
}

// Derived class handler implementation
int QFile_Permissions(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        return static_cast<int>(vqfile->permissions());
    } else {
        return static_cast<int>(self->QFile::permissions());
    }
}

// Base class handler implementation
int QFile_QBasePermissions(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Permissions_IsBase(true);
        return static_cast<int>(vqfile->permissions());
    } else {
        return static_cast<int>(self->QFile::permissions());
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnPermissions(const QFile* self, intptr_t slot) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Permissions_Callback(reinterpret_cast<VirtualQFile::QFile_Permissions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_SetPermissions(QFile* self, int permissionSpec) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    } else {
        return self->QFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    }
}

// Base class handler implementation
bool QFile_QBaseSetPermissions(QFile* self, int permissionSpec) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_SetPermissions_IsBase(true);
        return vqfile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    } else {
        return self->QFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSetPermissions(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_SetPermissions_Callback(reinterpret_cast<VirtualQFile::QFile_SetPermissions_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_Close(QFile* self) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->close();
    } else {
        self->QFile::close();
    }
}

// Base class handler implementation
void QFile_QBaseClose(QFile* self) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Close_IsBase(true);
        vqfile->close();
    } else {
        self->QFile::close();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnClose(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Close_Callback(reinterpret_cast<VirtualQFile::QFile_Close_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_IsSequential(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->isSequential();
    } else {
        return self->QFile::isSequential();
    }
}

// Base class handler implementation
bool QFile_QBaseIsSequential(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_IsSequential_IsBase(true);
        return vqfile->isSequential();
    } else {
        return self->QFile::isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnIsSequential(const QFile* self, intptr_t slot) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_IsSequential_Callback(reinterpret_cast<VirtualQFile::QFile_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_Pos(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        return static_cast<long long>(vqfile->pos());
    } else {
        return static_cast<long long>(self->QFile::pos());
    }
}

// Base class handler implementation
long long QFile_QBasePos(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Pos_IsBase(true);
        return static_cast<long long>(vqfile->pos());
    } else {
        return static_cast<long long>(self->QFile::pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnPos(const QFile* self, intptr_t slot) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Pos_Callback(reinterpret_cast<VirtualQFile::QFile_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_Seek(QFile* self, long long offset) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->seek(static_cast<qint64>(offset));
    } else {
        return self->QFile::seek(static_cast<qint64>(offset));
    }
}

// Base class handler implementation
bool QFile_QBaseSeek(QFile* self, long long offset) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Seek_IsBase(true);
        return vqfile->seek(static_cast<qint64>(offset));
    } else {
        return self->QFile::seek(static_cast<qint64>(offset));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSeek(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Seek_Callback(reinterpret_cast<VirtualQFile::QFile_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_AtEnd(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->atEnd();
    } else {
        return self->QFile::atEnd();
    }
}

// Base class handler implementation
bool QFile_QBaseAtEnd(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_AtEnd_IsBase(true);
        return vqfile->atEnd();
    } else {
        return self->QFile::atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnAtEnd(const QFile* self, intptr_t slot) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_AtEnd_Callback(reinterpret_cast<VirtualQFile::QFile_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_ReadData(QFile* self, char* data, long long maxlen) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return static_cast<long long>(vqfile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQFile*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QFile_QBaseReadData(QFile* self, char* data, long long maxlen) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_ReadData_IsBase(true);
        return static_cast<long long>(vqfile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQFile*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnReadData(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_ReadData_Callback(reinterpret_cast<VirtualQFile::QFile_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_WriteData(QFile* self, const char* data, long long lenVal) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return static_cast<long long>(vqfile->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualQFile*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long QFile_QBaseWriteData(QFile* self, const char* data, long long lenVal) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_WriteData_IsBase(true);
        return static_cast<long long>(vqfile->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualQFile*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnWriteData(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_WriteData_Callback(reinterpret_cast<VirtualQFile::QFile_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_ReadLineData(QFile* self, char* data, long long maxlen) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return static_cast<long long>(vqfile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQFile*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QFile_QBaseReadLineData(QFile* self, char* data, long long maxlen) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_ReadLineData_IsBase(true);
        return static_cast<long long>(vqfile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQFile*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnReadLineData(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_ReadLineData_Callback(reinterpret_cast<VirtualQFile::QFile_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_Reset(QFile* self) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->reset();
    } else {
        return self->QFile::reset();
    }
}

// Base class handler implementation
bool QFile_QBaseReset(QFile* self) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Reset_IsBase(true);
        return vqfile->reset();
    } else {
        return self->QFile::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnReset(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Reset_Callback(reinterpret_cast<VirtualQFile::QFile_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_BytesAvailable(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        return static_cast<long long>(vqfile->bytesAvailable());
    } else {
        return static_cast<long long>(self->QFile::bytesAvailable());
    }
}

// Base class handler implementation
long long QFile_QBaseBytesAvailable(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqfile->bytesAvailable());
    } else {
        return static_cast<long long>(self->QFile::bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnBytesAvailable(const QFile* self, intptr_t slot) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_BytesAvailable_Callback(reinterpret_cast<VirtualQFile::QFile_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_BytesToWrite(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        return static_cast<long long>(vqfile->bytesToWrite());
    } else {
        return static_cast<long long>(self->QFile::bytesToWrite());
    }
}

// Base class handler implementation
long long QFile_QBaseBytesToWrite(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqfile->bytesToWrite());
    } else {
        return static_cast<long long>(self->QFile::bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnBytesToWrite(const QFile* self, intptr_t slot) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_BytesToWrite_Callback(reinterpret_cast<VirtualQFile::QFile_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_CanReadLine(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->canReadLine();
    } else {
        return self->QFile::canReadLine();
    }
}

// Base class handler implementation
bool QFile_QBaseCanReadLine(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_CanReadLine_IsBase(true);
        return vqfile->canReadLine();
    } else {
        return self->QFile::canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnCanReadLine(const QFile* self, intptr_t slot) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_CanReadLine_Callback(reinterpret_cast<VirtualQFile::QFile_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_WaitForReadyRead(QFile* self, int msecs) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QFile::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QFile_QBaseWaitForReadyRead(QFile* self, int msecs) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_WaitForReadyRead_IsBase(true);
        return vqfile->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QFile::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnWaitForReadyRead(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_WaitForReadyRead_Callback(reinterpret_cast<VirtualQFile::QFile_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_WaitForBytesWritten(QFile* self, int msecs) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QFile::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QFile_QBaseWaitForBytesWritten(QFile* self, int msecs) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_WaitForBytesWritten_IsBase(true);
        return vqfile->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QFile::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnWaitForBytesWritten(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQFile::QFile_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_SkipData(QFile* self, long long maxSize) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return static_cast<long long>(vqfile->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQFile*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QFile_QBaseSkipData(QFile* self, long long maxSize) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_SkipData_IsBase(true);
        return static_cast<long long>(vqfile->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQFile*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSkipData(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_SkipData_Callback(reinterpret_cast<VirtualQFile::QFile_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_Event(QFile* self, QEvent* event) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->event(event);
    } else {
        return self->QFile::event(event);
    }
}

// Base class handler implementation
bool QFile_QBaseEvent(QFile* self, QEvent* event) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Event_IsBase(true);
        return vqfile->event(event);
    } else {
        return self->QFile::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnEvent(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Event_Callback(reinterpret_cast<VirtualQFile::QFile_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_EventFilter(QFile* self, QObject* watched, QEvent* event) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->eventFilter(watched, event);
    } else {
        return self->QFile::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QFile_QBaseEventFilter(QFile* self, QObject* watched, QEvent* event) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_EventFilter_IsBase(true);
        return vqfile->eventFilter(watched, event);
    } else {
        return self->QFile::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnEventFilter(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_EventFilter_Callback(reinterpret_cast<VirtualQFile::QFile_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_TimerEvent(QFile* self, QTimerEvent* event) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->timerEvent(event);
    } else {
        ((VirtualQFile*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QFile_QBaseTimerEvent(QFile* self, QTimerEvent* event) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_TimerEvent_IsBase(true);
        vqfile->timerEvent(event);
    } else {
        ((VirtualQFile*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnTimerEvent(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_TimerEvent_Callback(reinterpret_cast<VirtualQFile::QFile_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_ChildEvent(QFile* self, QChildEvent* event) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->childEvent(event);
    } else {
        ((VirtualQFile*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QFile_QBaseChildEvent(QFile* self, QChildEvent* event) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_ChildEvent_IsBase(true);
        vqfile->childEvent(event);
    } else {
        ((VirtualQFile*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnChildEvent(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_ChildEvent_Callback(reinterpret_cast<VirtualQFile::QFile_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_CustomEvent(QFile* self, QEvent* event) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->customEvent(event);
    } else {
        ((VirtualQFile*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QFile_QBaseCustomEvent(QFile* self, QEvent* event) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_CustomEvent_IsBase(true);
        vqfile->customEvent(event);
    } else {
        ((VirtualQFile*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnCustomEvent(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_CustomEvent_Callback(reinterpret_cast<VirtualQFile::QFile_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_ConnectNotify(QFile* self, const QMetaMethod* signal) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->connectNotify(*signal);
    } else {
        ((VirtualQFile*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFile_QBaseConnectNotify(QFile* self, const QMetaMethod* signal) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_ConnectNotify_IsBase(true);
        vqfile->connectNotify(*signal);
    } else {
        ((VirtualQFile*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnConnectNotify(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_ConnectNotify_Callback(reinterpret_cast<VirtualQFile::QFile_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_DisconnectNotify(QFile* self, const QMetaMethod* signal) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->disconnectNotify(*signal);
    } else {
        ((VirtualQFile*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFile_QBaseDisconnectNotify(QFile* self, const QMetaMethod* signal) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_DisconnectNotify_IsBase(true);
        vqfile->disconnectNotify(*signal);
    } else {
        ((VirtualQFile*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnDisconnectNotify(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_DisconnectNotify_Callback(reinterpret_cast<VirtualQFile::QFile_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_SetOpenMode(QFile* self, int openMode) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQFile*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QFile_QBaseSetOpenMode(QFile* self, int openMode) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_SetOpenMode_IsBase(true);
        vqfile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQFile*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSetOpenMode(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_SetOpenMode_Callback(reinterpret_cast<VirtualQFile::QFile_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_SetErrorString(QFile* self, const libqt_string errorString) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setErrorString(errorString_QString);
    } else {
        ((VirtualQFile*)self)->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QFile_QBaseSetErrorString(QFile* self, const libqt_string errorString) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_SetErrorString_IsBase(true);
        vqfile->setErrorString(errorString_QString);
    } else {
        ((VirtualQFile*)self)->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSetErrorString(QFile* self, intptr_t slot) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_SetErrorString_Callback(reinterpret_cast<VirtualQFile::QFile_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFile_Sender(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->sender();
    } else {
        return ((VirtualQFile*)self)->sender();
    }
}

// Base class handler implementation
QObject* QFile_QBaseSender(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Sender_IsBase(true);
        return vqfile->sender();
    } else {
        return ((VirtualQFile*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSender(const QFile* self, intptr_t slot) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Sender_Callback(reinterpret_cast<VirtualQFile::QFile_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFile_SenderSignalIndex(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->senderSignalIndex();
    } else {
        return ((VirtualQFile*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QFile_QBaseSenderSignalIndex(const QFile* self) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_SenderSignalIndex_IsBase(true);
        return vqfile->senderSignalIndex();
    } else {
        return ((VirtualQFile*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSenderSignalIndex(const QFile* self, intptr_t slot) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFile::QFile_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFile_Receivers(const QFile* self, const char* signal) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->receivers(signal);
    } else {
        return ((VirtualQFile*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QFile_QBaseReceivers(const QFile* self, const char* signal) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Receivers_IsBase(true);
        return vqfile->receivers(signal);
    } else {
        return ((VirtualQFile*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnReceivers(const QFile* self, intptr_t slot) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_Receivers_Callback(reinterpret_cast<VirtualQFile::QFile_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_IsSignalConnected(const QFile* self, const QMetaMethod* signal) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        return vqfile->isSignalConnected(*signal);
    } else {
        return ((VirtualQFile*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFile_QBaseIsSignalConnected(const QFile* self, const QMetaMethod* signal) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_IsSignalConnected_IsBase(true);
        return vqfile->isSignalConnected(*signal);
    } else {
        return ((VirtualQFile*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnIsSignalConnected(const QFile* self, intptr_t slot) {
    auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self));
    if (vqfile && vqfile->isVirtualQFile) {
        vqfile->setQFile_IsSignalConnected_Callback(reinterpret_cast<VirtualQFile::QFile_IsSignalConnected_Callback>(slot));
    }
}

void QFile_Delete(QFile* self) {
    delete self;
}
