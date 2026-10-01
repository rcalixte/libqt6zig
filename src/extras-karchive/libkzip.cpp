#include <KArchive>
#include <KArchiveDirectory>
#include <KZip>
#include <QDateTime>
#include <QIODevice>
#include <QString>
#include <kzip.h>
#include "libkzip.h"
#include "libkzip.hxx"

KZip* KZip_new(const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return new VirtualKZip(filename_QString);
}

KZip* KZip_new2(QIODevice* dev) {
    return new VirtualKZip(dev);
}

KZip* KZip_new3(const KZip* param1) {
    return new VirtualKZip(*param1);
}

libqt_string KZip_Tr(const char* sourceText) {
    auto _ret = KZip::tr(sourceText);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KZip_SetExtraField(KZip* self, int ef) {
    self->setExtraField(static_cast<KZip::ExtraField>(ef));
}

int KZip_ExtraField(const KZip* self) {
    return static_cast<int>(self->extraField());
}

void KZip_SetCompression(KZip* self, int c) {
    self->setCompression(static_cast<KZip::Compression>(c));
}

int KZip_Compression(const KZip* self) {
    return static_cast<int>(self->compression());
}

bool KZip_DoWriteSymLink(KZip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip) {
        return vkzip->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method KZip::doWriteSymLink called without a directly constructed type");
}

bool KZip_DoPrepareWriting(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* creationTime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip) {
        return vkzip->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *creationTime);
    }
    qFatal("Error: Protected method KZip::doPrepareWriting called without a directly constructed type");
}

bool KZip_DoFinishWriting(KZip* self, long long size) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip) {
        return vkzip->doFinishWriting(static_cast<qint64>(size));
    }
    qFatal("Error: Protected method KZip::doFinishWriting called without a directly constructed type");
}

bool KZip_DoWriteData(KZip* self, const char* data, long long size) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip) {
        return vkzip->doWriteData(data, static_cast<qint64>(size));
    }
    qFatal("Error: Protected method KZip::doWriteData called without a directly constructed type");
}

bool KZip_OpenArchive(KZip* self, int mode) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip) {
        return vkzip->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
    qFatal("Error: Protected method KZip::openArchive called without a directly constructed type");
}

bool KZip_CloseArchive(KZip* self) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip) {
        return vkzip->closeArchive();
    }
    qFatal("Error: Protected method KZip::closeArchive called without a directly constructed type");
}

bool KZip_DoWriteDir(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip) {
        return vkzip->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method KZip::doWriteDir called without a directly constructed type");
}

void KZip_VirtualHook(KZip* self, int id, void* data) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip) {
        vkzip->virtual_hook(static_cast<int>(id), data);
    }
}

libqt_string KZip_Tr2(const char* sourceText, const char* disambiguation) {
    auto _ret = KZip::tr(sourceText, disambiguation);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KZip_Tr3(const char* sourceText, const char* disambiguation, int n) {
    auto _ret = KZip::tr(sourceText, disambiguation, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
bool KZip_SuperDoWriteSymLink(KZip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        return vkzip->KZip::doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method KZip::doWriteSymLink called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KZip_OnDoWriteSymLink(KZip* self, intptr_t slot) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self))
        vkzip->kzip_dowritesymlink_callback = reinterpret_cast<VirtualKZip::KZip_DoWriteSymLink_Callback>(slot);
}

// Base class handler implementation
bool KZip_SuperDoPrepareWriting(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* creationTime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        return vkzip->KZip::doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *creationTime);
    } else
        qFatal("Error: Protected virtual method KZip::doPrepareWriting called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KZip_OnDoPrepareWriting(KZip* self, intptr_t slot) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self))
        vkzip->kzip_dopreparewriting_callback = reinterpret_cast<VirtualKZip::KZip_DoPrepareWriting_Callback>(slot);
}

// Base class handler implementation
bool KZip_SuperDoFinishWriting(KZip* self, long long size) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        return vkzip->KZip::doFinishWriting(static_cast<qint64>(size));
    } else
        qFatal("Error: Protected virtual method KZip::doFinishWriting called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KZip_OnDoFinishWriting(KZip* self, intptr_t slot) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self))
        vkzip->kzip_dofinishwriting_callback = reinterpret_cast<VirtualKZip::KZip_DoFinishWriting_Callback>(slot);
}

// Base class handler implementation
bool KZip_SuperDoWriteData(KZip* self, const char* data, long long size) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        return vkzip->KZip::doWriteData(data, static_cast<qint64>(size));
    } else
        qFatal("Error: Protected virtual method KZip::doWriteData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KZip_OnDoWriteData(KZip* self, intptr_t slot) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self))
        vkzip->kzip_dowritedata_callback = reinterpret_cast<VirtualKZip::KZip_DoWriteData_Callback>(slot);
}

// Base class handler implementation
bool KZip_SuperOpenArchive(KZip* self, int mode) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        return vkzip->KZip::openArchive(static_cast<QIODevice::OpenMode>(mode));
    } else
        qFatal("Error: Protected virtual method KZip::openArchive called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KZip_OnOpenArchive(KZip* self, intptr_t slot) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self))
        vkzip->kzip_openarchive_callback = reinterpret_cast<VirtualKZip::KZip_OpenArchive_Callback>(slot);
}

// Base class handler implementation
bool KZip_SuperCloseArchive(KZip* self) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        return vkzip->KZip::closeArchive();
    } else
        qFatal("Error: Protected virtual method KZip::closeArchive called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KZip_OnCloseArchive(KZip* self, intptr_t slot) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self))
        vkzip->kzip_closearchive_callback = reinterpret_cast<VirtualKZip::KZip_CloseArchive_Callback>(slot);
}

// Base class handler implementation
bool KZip_SuperDoWriteDir(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        return vkzip->KZip::doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method KZip::doWriteDir called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KZip_OnDoWriteDir(KZip* self, intptr_t slot) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self))
        vkzip->kzip_dowritedir_callback = reinterpret_cast<VirtualKZip::KZip_DoWriteDir_Callback>(slot);
}

// Base class handler implementation
void KZip_SuperVirtualHook(KZip* self, int id, void* data) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        vkzip->KZip::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KZip::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KZip_OnVirtualHook(KZip* self, intptr_t slot) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self))
        vkzip->kzip_virtualhook_callback = reinterpret_cast<VirtualKZip::KZip_VirtualHook_Callback>(slot);
}

// Derived class handler implementation
bool KZip_Open(KZip* self, int mode) {
    return self->open(static_cast<QIODevice::OpenMode>(mode));
}

// Base class handler implementation
bool KZip_SuperOpen(KZip* self, int mode) {
    return self->KZip::open(static_cast<QIODevice::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KZip_OnOpen(KZip* self, intptr_t slot) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self))
        vkzip->kzip_open_callback = reinterpret_cast<VirtualKZip::KZip_Open_Callback>(slot);
}

// Derived class handler implementation
bool KZip_Close(KZip* self) {
    return self->close();
}

// Base class handler implementation
bool KZip_SuperClose(KZip* self) {
    return self->KZip::close();
}

// Auxiliary method to allow providing re-implementation
void KZip_OnClose(KZip* self, intptr_t slot) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self))
        vkzip->kzip_close_callback = reinterpret_cast<VirtualKZip::KZip_Close_Callback>(slot);
}

// Derived class handler implementation
KArchiveDirectory* KZip_RootDir(KZip* self) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip) {
        return vkzip->rootDir();
    } else {
        qFatal("Error: Protected virtual method KZip::rootDir called without a directly constructed type");
    }
}

// Base class handler implementation
KArchiveDirectory* KZip_SuperRootDir(KZip* self) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        return vkzip->KZip::rootDir();
    } else
        qFatal("Error: Protected virtual method KZip::rootDir called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KZip_OnRootDir(KZip* self, intptr_t slot) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self))
        vkzip->kzip_rootdir_callback = reinterpret_cast<VirtualKZip::KZip_RootDir_Callback>(slot);
}

// Derived class handler implementation
bool KZip_CreateDevice(KZip* self, int mode) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip) {
        return vkzip->createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else {
        qFatal("Error: Protected virtual method KZip::createDevice called without a directly constructed type");
    }
}

// Base class handler implementation
bool KZip_SuperCreateDevice(KZip* self, int mode) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        return vkzip->KZip::createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else
        qFatal("Error: Protected virtual method KZip::createDevice called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KZip_OnCreateDevice(KZip* self, intptr_t slot) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self))
        vkzip->kzip_createdevice_callback = reinterpret_cast<VirtualKZip::KZip_CreateDevice_Callback>(slot);
}

// Derived class protected handler implementation
void KZip_SetErrorString(KZip* self, const libqt_string errorStr) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
        vkzip->VirtualKZip::setErrorString(errorStr_QString);
    } else
        qFatal("Error: Protected method KZip::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
KArchiveDirectory* KZip_FindOrCreate(KZip* self, const libqt_string path) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        QString path_QString = QString::fromUtf8(path.data, path.len);
        return vkzip->VirtualKZip::findOrCreate(path_QString);
    } else
        qFatal("Error: Protected method KZip::findOrCreate called without a directly constructed type");
}

// Derived class protected handler implementation
void KZip_SetDevice(KZip* self, QIODevice* dev) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        vkzip->VirtualKZip::setDevice(dev);
    } else
        qFatal("Error: Protected method KZip::setDevice called without a directly constructed type");
}

// Derived class protected handler implementation
void KZip_SetRootDir(KZip* self, KArchiveDirectory* rootDir) {
    if (auto* vkzip = dynamic_cast<VirtualKZip*>(self)) {
        vkzip->VirtualKZip::setRootDir(rootDir);
    } else
        qFatal("Error: Protected method KZip::setRootDir called without a directly constructed type");
}

void KZip_Delete(KZip* self) {
    delete self;
}
