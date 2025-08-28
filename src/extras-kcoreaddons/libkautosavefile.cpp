#include <KAutoSaveFile>
#include <QChildEvent>
#include <QEvent>
#include <QFile>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <kautosavefile.h>
#include "libkautosavefile.h"
#include "libkautosavefile.hxx"

KAutoSaveFile* KAutoSaveFile_new(const QUrl* filename) {
    return new VirtualKAutoSaveFile(*filename);
}

KAutoSaveFile* KAutoSaveFile_new2() {
    return new VirtualKAutoSaveFile();
}

KAutoSaveFile* KAutoSaveFile_new3(const QUrl* filename, QObject* parent) {
    return new VirtualKAutoSaveFile(*filename, parent);
}

KAutoSaveFile* KAutoSaveFile_new4(QObject* parent) {
    return new VirtualKAutoSaveFile(parent);
}

QMetaObject* KAutoSaveFile_MetaObject(const KAutoSaveFile* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAutoSaveFile_Metacast(KAutoSaveFile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAutoSaveFile_Metacall(KAutoSaveFile* self, int param1, int param2, void** param3) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKAutoSaveFile*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KAutoSaveFile_OnMetacall(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Metacall_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KAutoSaveFile_QBaseMetacall(KAutoSaveFile* self, int param1, int param2, void** param3) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Metacall_IsBase(true);
        return vkautosavefile->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKAutoSaveFile*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KAutoSaveFile_Tr(const char* s) {
    QString _ret = KAutoSaveFile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KAutoSaveFile_ManagedFile(const KAutoSaveFile* self) {
    return new QUrl(self->managedFile());
}

void KAutoSaveFile_SetManagedFile(KAutoSaveFile* self, const QUrl* filename) {
    self->setManagedFile(*filename);
}

void KAutoSaveFile_ReleaseLock(KAutoSaveFile* self) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        self->releaseLock();
    } else {
        ((VirtualKAutoSaveFile*)self)->releaseLock();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KAutoSaveFile_OnReleaseLock(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_ReleaseLock_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_ReleaseLock_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KAutoSaveFile_QBaseReleaseLock(KAutoSaveFile* self) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_ReleaseLock_IsBase(true);
        vkautosavefile->releaseLock();
    } else {
        ((VirtualKAutoSaveFile*)self)->releaseLock();
    }
}

bool KAutoSaveFile_Open(KAutoSaveFile* self, int openmode) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openmode));
    } else {
        return ((VirtualKAutoSaveFile*)self)->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openmode));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KAutoSaveFile_OnOpen(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Open_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Open_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool KAutoSaveFile_QBaseOpen(KAutoSaveFile* self, int openmode) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Open_IsBase(true);
        return vkautosavefile->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openmode));
    } else {
        return ((VirtualKAutoSaveFile*)self)->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openmode));
    }
}

libqt_list /* of KAutoSaveFile* */ KAutoSaveFile_StaleFiles(const QUrl* url) {
    QList<KAutoSaveFile*> _ret = KAutoSaveFile::staleFiles(*url);
    // Convert QList<> from C++ memory to manually-managed C memory
    KAutoSaveFile** _arr = static_cast<KAutoSaveFile**>(malloc(sizeof(KAutoSaveFile*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KAutoSaveFile* */ KAutoSaveFile_AllStaleFiles() {
    QList<KAutoSaveFile*> _ret = KAutoSaveFile::allStaleFiles();
    // Convert QList<> from C++ memory to manually-managed C memory
    KAutoSaveFile** _arr = static_cast<KAutoSaveFile**>(malloc(sizeof(KAutoSaveFile*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KAutoSaveFile_Tr2(const char* s, const char* c) {
    QString _ret = KAutoSaveFile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAutoSaveFile_Tr3(const char* s, const char* c, int n) {
    QString _ret = KAutoSaveFile::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KAutoSaveFile* */ KAutoSaveFile_StaleFiles2(const QUrl* url, const libqt_string applicationName) {
    QString applicationName_QString = QString::fromUtf8(applicationName.data, applicationName.len);
    QList<KAutoSaveFile*> _ret = KAutoSaveFile::staleFiles(*url, applicationName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    KAutoSaveFile** _arr = static_cast<KAutoSaveFile**>(malloc(sizeof(KAutoSaveFile*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KAutoSaveFile* */ KAutoSaveFile_AllStaleFiles1(const libqt_string applicationName) {
    QString applicationName_QString = QString::fromUtf8(applicationName.data, applicationName.len);
    QList<KAutoSaveFile*> _ret = KAutoSaveFile::allStaleFiles(applicationName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    KAutoSaveFile** _arr = static_cast<KAutoSaveFile**>(malloc(sizeof(KAutoSaveFile*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Derived class handler implementation
libqt_string KAutoSaveFile_FileName(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        QString _ret = vkautosavefile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KAutoSaveFile::fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KAutoSaveFile_QBaseFileName(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_FileName_IsBase(true);
        QString _ret = vkautosavefile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KAutoSaveFile::fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnFileName(const KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_FileName_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_FileName_Callback>(slot));
    }
}

// Derived class handler implementation
long long KAutoSaveFile_Size(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return static_cast<long long>(vkautosavefile->size());
    } else {
        return static_cast<long long>(self->KAutoSaveFile::size());
    }
}

// Base class handler implementation
long long KAutoSaveFile_QBaseSize(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Size_IsBase(true);
        return static_cast<long long>(vkautosavefile->size());
    } else {
        return static_cast<long long>(self->KAutoSaveFile::size());
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnSize(const KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Size_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAutoSaveFile_Resize(KAutoSaveFile* self, long long sz) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->resize(static_cast<qint64>(sz));
    } else {
        return self->KAutoSaveFile::resize(static_cast<qint64>(sz));
    }
}

// Base class handler implementation
bool KAutoSaveFile_QBaseResize(KAutoSaveFile* self, long long sz) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Resize_IsBase(true);
        return vkautosavefile->resize(static_cast<qint64>(sz));
    } else {
        return self->KAutoSaveFile::resize(static_cast<qint64>(sz));
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnResize(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Resize_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Resize_Callback>(slot));
    }
}

// Derived class handler implementation
int KAutoSaveFile_Permissions(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return static_cast<int>(vkautosavefile->permissions());
    } else {
        return static_cast<int>(self->KAutoSaveFile::permissions());
    }
}

// Base class handler implementation
int KAutoSaveFile_QBasePermissions(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Permissions_IsBase(true);
        return static_cast<int>(vkautosavefile->permissions());
    } else {
        return static_cast<int>(self->KAutoSaveFile::permissions());
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnPermissions(const KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Permissions_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Permissions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAutoSaveFile_SetPermissions(KAutoSaveFile* self, int permissionSpec) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    } else {
        return self->KAutoSaveFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    }
}

// Base class handler implementation
bool KAutoSaveFile_QBaseSetPermissions(KAutoSaveFile* self, int permissionSpec) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_SetPermissions_IsBase(true);
        return vkautosavefile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    } else {
        return self->KAutoSaveFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnSetPermissions(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_SetPermissions_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_SetPermissions_Callback>(slot));
    }
}

// Derived class handler implementation
void KAutoSaveFile_Close(KAutoSaveFile* self) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->close();
    } else {
        self->KAutoSaveFile::close();
    }
}

// Base class handler implementation
void KAutoSaveFile_QBaseClose(KAutoSaveFile* self) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Close_IsBase(true);
        vkautosavefile->close();
    } else {
        self->KAutoSaveFile::close();
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnClose(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Close_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Close_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAutoSaveFile_IsSequential(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->isSequential();
    } else {
        return self->KAutoSaveFile::isSequential();
    }
}

// Base class handler implementation
bool KAutoSaveFile_QBaseIsSequential(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_IsSequential_IsBase(true);
        return vkautosavefile->isSequential();
    } else {
        return self->KAutoSaveFile::isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnIsSequential(const KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_IsSequential_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
long long KAutoSaveFile_Pos(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return static_cast<long long>(vkautosavefile->pos());
    } else {
        return static_cast<long long>(self->KAutoSaveFile::pos());
    }
}

// Base class handler implementation
long long KAutoSaveFile_QBasePos(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Pos_IsBase(true);
        return static_cast<long long>(vkautosavefile->pos());
    } else {
        return static_cast<long long>(self->KAutoSaveFile::pos());
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnPos(const KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Pos_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAutoSaveFile_Seek(KAutoSaveFile* self, long long offset) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->seek(static_cast<qint64>(offset));
    } else {
        return self->KAutoSaveFile::seek(static_cast<qint64>(offset));
    }
}

// Base class handler implementation
bool KAutoSaveFile_QBaseSeek(KAutoSaveFile* self, long long offset) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Seek_IsBase(true);
        return vkautosavefile->seek(static_cast<qint64>(offset));
    } else {
        return self->KAutoSaveFile::seek(static_cast<qint64>(offset));
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnSeek(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Seek_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAutoSaveFile_AtEnd(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->atEnd();
    } else {
        return self->KAutoSaveFile::atEnd();
    }
}

// Base class handler implementation
bool KAutoSaveFile_QBaseAtEnd(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_AtEnd_IsBase(true);
        return vkautosavefile->atEnd();
    } else {
        return self->KAutoSaveFile::atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnAtEnd(const KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_AtEnd_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
long long KAutoSaveFile_ReadData(KAutoSaveFile* self, char* data, long long maxlen) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return static_cast<long long>(vkautosavefile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualKAutoSaveFile*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long KAutoSaveFile_QBaseReadData(KAutoSaveFile* self, char* data, long long maxlen) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_ReadData_IsBase(true);
        return static_cast<long long>(vkautosavefile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualKAutoSaveFile*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnReadData(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_ReadData_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long KAutoSaveFile_WriteData(KAutoSaveFile* self, const char* data, long long lenVal) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return static_cast<long long>(vkautosavefile->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualKAutoSaveFile*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long KAutoSaveFile_QBaseWriteData(KAutoSaveFile* self, const char* data, long long lenVal) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_WriteData_IsBase(true);
        return static_cast<long long>(vkautosavefile->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualKAutoSaveFile*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnWriteData(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_WriteData_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
long long KAutoSaveFile_ReadLineData(KAutoSaveFile* self, char* data, long long maxlen) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return static_cast<long long>(vkautosavefile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualKAutoSaveFile*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long KAutoSaveFile_QBaseReadLineData(KAutoSaveFile* self, char* data, long long maxlen) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_ReadLineData_IsBase(true);
        return static_cast<long long>(vkautosavefile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualKAutoSaveFile*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnReadLineData(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_ReadLineData_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAutoSaveFile_Reset(KAutoSaveFile* self) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->reset();
    } else {
        return self->KAutoSaveFile::reset();
    }
}

// Base class handler implementation
bool KAutoSaveFile_QBaseReset(KAutoSaveFile* self) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Reset_IsBase(true);
        return vkautosavefile->reset();
    } else {
        return self->KAutoSaveFile::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnReset(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Reset_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
long long KAutoSaveFile_BytesAvailable(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return static_cast<long long>(vkautosavefile->bytesAvailable());
    } else {
        return static_cast<long long>(self->KAutoSaveFile::bytesAvailable());
    }
}

// Base class handler implementation
long long KAutoSaveFile_QBaseBytesAvailable(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_BytesAvailable_IsBase(true);
        return static_cast<long long>(vkautosavefile->bytesAvailable());
    } else {
        return static_cast<long long>(self->KAutoSaveFile::bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnBytesAvailable(const KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_BytesAvailable_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long KAutoSaveFile_BytesToWrite(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return static_cast<long long>(vkautosavefile->bytesToWrite());
    } else {
        return static_cast<long long>(self->KAutoSaveFile::bytesToWrite());
    }
}

// Base class handler implementation
long long KAutoSaveFile_QBaseBytesToWrite(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_BytesToWrite_IsBase(true);
        return static_cast<long long>(vkautosavefile->bytesToWrite());
    } else {
        return static_cast<long long>(self->KAutoSaveFile::bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnBytesToWrite(const KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_BytesToWrite_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAutoSaveFile_CanReadLine(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->canReadLine();
    } else {
        return self->KAutoSaveFile::canReadLine();
    }
}

// Base class handler implementation
bool KAutoSaveFile_QBaseCanReadLine(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_CanReadLine_IsBase(true);
        return vkautosavefile->canReadLine();
    } else {
        return self->KAutoSaveFile::canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnCanReadLine(const KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_CanReadLine_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAutoSaveFile_WaitForReadyRead(KAutoSaveFile* self, int msecs) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->KAutoSaveFile::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool KAutoSaveFile_QBaseWaitForReadyRead(KAutoSaveFile* self, int msecs) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_WaitForReadyRead_IsBase(true);
        return vkautosavefile->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->KAutoSaveFile::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnWaitForReadyRead(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_WaitForReadyRead_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAutoSaveFile_WaitForBytesWritten(KAutoSaveFile* self, int msecs) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->KAutoSaveFile::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool KAutoSaveFile_QBaseWaitForBytesWritten(KAutoSaveFile* self, int msecs) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_WaitForBytesWritten_IsBase(true);
        return vkautosavefile->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->KAutoSaveFile::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnWaitForBytesWritten(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_WaitForBytesWritten_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
long long KAutoSaveFile_SkipData(KAutoSaveFile* self, long long maxSize) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return static_cast<long long>(vkautosavefile->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualKAutoSaveFile*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long KAutoSaveFile_QBaseSkipData(KAutoSaveFile* self, long long maxSize) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_SkipData_IsBase(true);
        return static_cast<long long>(vkautosavefile->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualKAutoSaveFile*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnSkipData(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_SkipData_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAutoSaveFile_Event(KAutoSaveFile* self, QEvent* event) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->event(event);
    } else {
        return self->KAutoSaveFile::event(event);
    }
}

// Base class handler implementation
bool KAutoSaveFile_QBaseEvent(KAutoSaveFile* self, QEvent* event) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Event_IsBase(true);
        return vkautosavefile->event(event);
    } else {
        return self->KAutoSaveFile::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnEvent(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Event_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAutoSaveFile_EventFilter(KAutoSaveFile* self, QObject* watched, QEvent* event) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->eventFilter(watched, event);
    } else {
        return self->KAutoSaveFile::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KAutoSaveFile_QBaseEventFilter(KAutoSaveFile* self, QObject* watched, QEvent* event) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_EventFilter_IsBase(true);
        return vkautosavefile->eventFilter(watched, event);
    } else {
        return self->KAutoSaveFile::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnEventFilter(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_EventFilter_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KAutoSaveFile_TimerEvent(KAutoSaveFile* self, QTimerEvent* event) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->timerEvent(event);
    } else {
        ((VirtualKAutoSaveFile*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KAutoSaveFile_QBaseTimerEvent(KAutoSaveFile* self, QTimerEvent* event) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_TimerEvent_IsBase(true);
        vkautosavefile->timerEvent(event);
    } else {
        ((VirtualKAutoSaveFile*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnTimerEvent(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_TimerEvent_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAutoSaveFile_ChildEvent(KAutoSaveFile* self, QChildEvent* event) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->childEvent(event);
    } else {
        ((VirtualKAutoSaveFile*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KAutoSaveFile_QBaseChildEvent(KAutoSaveFile* self, QChildEvent* event) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_ChildEvent_IsBase(true);
        vkautosavefile->childEvent(event);
    } else {
        ((VirtualKAutoSaveFile*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnChildEvent(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_ChildEvent_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAutoSaveFile_CustomEvent(KAutoSaveFile* self, QEvent* event) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->customEvent(event);
    } else {
        ((VirtualKAutoSaveFile*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KAutoSaveFile_QBaseCustomEvent(KAutoSaveFile* self, QEvent* event) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_CustomEvent_IsBase(true);
        vkautosavefile->customEvent(event);
    } else {
        ((VirtualKAutoSaveFile*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnCustomEvent(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_CustomEvent_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAutoSaveFile_ConnectNotify(KAutoSaveFile* self, const QMetaMethod* signal) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->connectNotify(*signal);
    } else {
        ((VirtualKAutoSaveFile*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KAutoSaveFile_QBaseConnectNotify(KAutoSaveFile* self, const QMetaMethod* signal) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_ConnectNotify_IsBase(true);
        vkautosavefile->connectNotify(*signal);
    } else {
        ((VirtualKAutoSaveFile*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnConnectNotify(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_ConnectNotify_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAutoSaveFile_DisconnectNotify(KAutoSaveFile* self, const QMetaMethod* signal) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->disconnectNotify(*signal);
    } else {
        ((VirtualKAutoSaveFile*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KAutoSaveFile_QBaseDisconnectNotify(KAutoSaveFile* self, const QMetaMethod* signal) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_DisconnectNotify_IsBase(true);
        vkautosavefile->disconnectNotify(*signal);
    } else {
        ((VirtualKAutoSaveFile*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnDisconnectNotify(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_DisconnectNotify_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAutoSaveFile_SetOpenMode(KAutoSaveFile* self, int openMode) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualKAutoSaveFile*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void KAutoSaveFile_QBaseSetOpenMode(KAutoSaveFile* self, int openMode) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_SetOpenMode_IsBase(true);
        vkautosavefile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualKAutoSaveFile*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnSetOpenMode(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_SetOpenMode_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void KAutoSaveFile_SetErrorString(KAutoSaveFile* self, const libqt_string errorString) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setErrorString(errorString_QString);
    } else {
        ((VirtualKAutoSaveFile*)self)->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void KAutoSaveFile_QBaseSetErrorString(KAutoSaveFile* self, const libqt_string errorString) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_SetErrorString_IsBase(true);
        vkautosavefile->setErrorString(errorString_QString);
    } else {
        ((VirtualKAutoSaveFile*)self)->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnSetErrorString(KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_SetErrorString_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KAutoSaveFile_Sender(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->sender();
    } else {
        return ((VirtualKAutoSaveFile*)self)->sender();
    }
}

// Base class handler implementation
QObject* KAutoSaveFile_QBaseSender(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Sender_IsBase(true);
        return vkautosavefile->sender();
    } else {
        return ((VirtualKAutoSaveFile*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnSender(const KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Sender_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KAutoSaveFile_SenderSignalIndex(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->senderSignalIndex();
    } else {
        return ((VirtualKAutoSaveFile*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KAutoSaveFile_QBaseSenderSignalIndex(const KAutoSaveFile* self) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_SenderSignalIndex_IsBase(true);
        return vkautosavefile->senderSignalIndex();
    } else {
        return ((VirtualKAutoSaveFile*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnSenderSignalIndex(const KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_SenderSignalIndex_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KAutoSaveFile_Receivers(const KAutoSaveFile* self, const char* signal) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->receivers(signal);
    } else {
        return ((VirtualKAutoSaveFile*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KAutoSaveFile_QBaseReceivers(const KAutoSaveFile* self, const char* signal) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Receivers_IsBase(true);
        return vkautosavefile->receivers(signal);
    } else {
        return ((VirtualKAutoSaveFile*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnReceivers(const KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_Receivers_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAutoSaveFile_IsSignalConnected(const KAutoSaveFile* self, const QMetaMethod* signal) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        return vkautosavefile->isSignalConnected(*signal);
    } else {
        return ((VirtualKAutoSaveFile*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KAutoSaveFile_QBaseIsSignalConnected(const KAutoSaveFile* self, const QMetaMethod* signal) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_IsSignalConnected_IsBase(true);
        return vkautosavefile->isSignalConnected(*signal);
    } else {
        return ((VirtualKAutoSaveFile*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnIsSignalConnected(const KAutoSaveFile* self, intptr_t slot) {
    auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self));
    if (vkautosavefile && vkautosavefile->isVirtualKAutoSaveFile) {
        vkautosavefile->setKAutoSaveFile_IsSignalConnected_Callback(reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_IsSignalConnected_Callback>(slot));
    }
}

void KAutoSaveFile_Delete(KAutoSaveFile* self) {
    delete self;
}
