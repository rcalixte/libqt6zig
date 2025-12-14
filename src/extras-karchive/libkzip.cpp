#include <KArchive>
#include <KArchiveDirectory>
#include <KZip>
#include <QDateTime>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    if (vkzip && vkzip->isVirtualKZip) {
        return vkzip->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    return {};
}

bool KZip_DoPrepareWriting(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* creationTime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        return vkzip->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *creationTime);
    }
    return {};
}

bool KZip_DoFinishWriting(KZip* self, long long size) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        return vkzip->doFinishWriting(static_cast<qint64>(size));
    }
    return {};
}

bool KZip_DoWriteData(KZip* self, const char* data, long long size) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        return vkzip->doWriteData(data, static_cast<qint64>(size));
    }
    return {};
}

bool KZip_OpenArchive(KZip* self, int mode) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        return vkzip->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
    return {};
}

bool KZip_CloseArchive(KZip* self) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        return vkzip->closeArchive();
    }
    return {};
}

bool KZip_DoWriteDir(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        return vkzip->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    return {};
}

void KZip_VirtualHook(KZip* self, int id, void* data) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
bool KZip_QBaseDoWriteSymLink(KZip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_DoWriteSymLink_IsBase(true);
        return vkzip->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualKZip*)self)->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnDoWriteSymLink(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_DoWriteSymLink_Callback(reinterpret_cast<VirtualKZip::KZip_DoWriteSymLink_Callback>(slot));
    }
}

// Base class handler implementation
bool KZip_QBaseDoPrepareWriting(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* creationTime) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_DoPrepareWriting_IsBase(true);
        return vkzip->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *creationTime);
    } else {
        return ((VirtualKZip*)self)->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *creationTime);
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnDoPrepareWriting(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_DoPrepareWriting_Callback(reinterpret_cast<VirtualKZip::KZip_DoPrepareWriting_Callback>(slot));
    }
}

// Base class handler implementation
bool KZip_QBaseDoFinishWriting(KZip* self, long long size) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_DoFinishWriting_IsBase(true);
        return vkzip->doFinishWriting(static_cast<qint64>(size));
    } else {
        return ((VirtualKZip*)self)->doFinishWriting(static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnDoFinishWriting(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_DoFinishWriting_Callback(reinterpret_cast<VirtualKZip::KZip_DoFinishWriting_Callback>(slot));
    }
}

// Base class handler implementation
bool KZip_QBaseDoWriteData(KZip* self, const char* data, long long size) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_DoWriteData_IsBase(true);
        return vkzip->doWriteData(data, static_cast<qint64>(size));
    } else {
        return ((VirtualKZip*)self)->doWriteData(data, static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnDoWriteData(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_DoWriteData_Callback(reinterpret_cast<VirtualKZip::KZip_DoWriteData_Callback>(slot));
    }
}

// Base class handler implementation
bool KZip_QBaseOpenArchive(KZip* self, int mode) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_OpenArchive_IsBase(true);
        return vkzip->openArchive(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualKZip*)self)->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnOpenArchive(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_OpenArchive_Callback(reinterpret_cast<VirtualKZip::KZip_OpenArchive_Callback>(slot));
    }
}

// Base class handler implementation
bool KZip_QBaseCloseArchive(KZip* self) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_CloseArchive_IsBase(true);
        return vkzip->closeArchive();
    } else {
        return ((VirtualKZip*)self)->closeArchive();
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnCloseArchive(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_CloseArchive_Callback(reinterpret_cast<VirtualKZip::KZip_CloseArchive_Callback>(slot));
    }
}

// Base class handler implementation
bool KZip_QBaseDoWriteDir(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_DoWriteDir_IsBase(true);
        return vkzip->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualKZip*)self)->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnDoWriteDir(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_DoWriteDir_Callback(reinterpret_cast<VirtualKZip::KZip_DoWriteDir_Callback>(slot));
    }
}

// Base class handler implementation
void KZip_QBaseVirtualHook(KZip* self, int id, void* data) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_VirtualHook_IsBase(true);
        vkzip->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKZip*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnVirtualHook(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_VirtualHook_Callback(reinterpret_cast<VirtualKZip::KZip_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
bool KZip_Open(KZip* self, int mode) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        return vkzip->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return self->KZip::open(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Base class handler implementation
bool KZip_QBaseOpen(KZip* self, int mode) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_Open_IsBase(true);
        return vkzip->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return self->KZip::open(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnOpen(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_Open_Callback(reinterpret_cast<VirtualKZip::KZip_Open_Callback>(slot));
    }
}

// Derived class handler implementation
bool KZip_Close(KZip* self) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        return vkzip->close();
    } else {
        return self->KZip::close();
    }
}

// Base class handler implementation
bool KZip_QBaseClose(KZip* self) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_Close_IsBase(true);
        return vkzip->close();
    } else {
        return self->KZip::close();
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnClose(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_Close_Callback(reinterpret_cast<VirtualKZip::KZip_Close_Callback>(slot));
    }
}

// Derived class handler implementation
KArchiveDirectory* KZip_RootDir(KZip* self) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        return vkzip->rootDir();
    } else {
        return ((VirtualKZip*)self)->rootDir();
    }
}

// Base class handler implementation
KArchiveDirectory* KZip_QBaseRootDir(KZip* self) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_RootDir_IsBase(true);
        return vkzip->rootDir();
    } else {
        return ((VirtualKZip*)self)->rootDir();
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnRootDir(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_RootDir_Callback(reinterpret_cast<VirtualKZip::KZip_RootDir_Callback>(slot));
    }
}

// Derived class handler implementation
bool KZip_CreateDevice(KZip* self, int mode) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        return vkzip->createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualKZip*)self)->createDevice(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Base class handler implementation
bool KZip_QBaseCreateDevice(KZip* self, int mode) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_CreateDevice_IsBase(true);
        return vkzip->createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualKZip*)self)->createDevice(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnCreateDevice(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_CreateDevice_Callback(reinterpret_cast<VirtualKZip::KZip_CreateDevice_Callback>(slot));
    }
}

// Derived class handler implementation
void KZip_SetErrorString(KZip* self, const libqt_string errorStr) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setErrorString(errorStr_QString);
    } else {
        ((VirtualKZip*)self)->setErrorString(errorStr_QString);
    }
}

// Base class handler implementation
void KZip_QBaseSetErrorString(KZip* self, const libqt_string errorStr) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_SetErrorString_IsBase(true);
        vkzip->setErrorString(errorStr_QString);
    } else {
        ((VirtualKZip*)self)->setErrorString(errorStr_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnSetErrorString(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_SetErrorString_Callback(reinterpret_cast<VirtualKZip::KZip_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
KArchiveDirectory* KZip_FindOrCreate(KZip* self, const libqt_string path) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (vkzip && vkzip->isVirtualKZip) {
        return vkzip->findOrCreate(path_QString);
    } else {
        return ((VirtualKZip*)self)->findOrCreate(path_QString);
    }
}

// Base class handler implementation
KArchiveDirectory* KZip_QBaseFindOrCreate(KZip* self, const libqt_string path) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_FindOrCreate_IsBase(true);
        return vkzip->findOrCreate(path_QString);
    } else {
        return ((VirtualKZip*)self)->findOrCreate(path_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnFindOrCreate(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_FindOrCreate_Callback(reinterpret_cast<VirtualKZip::KZip_FindOrCreate_Callback>(slot));
    }
}

// Derived class handler implementation
void KZip_SetDevice(KZip* self, QIODevice* dev) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setDevice(dev);
    } else {
        ((VirtualKZip*)self)->setDevice(dev);
    }
}

// Base class handler implementation
void KZip_QBaseSetDevice(KZip* self, QIODevice* dev) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_SetDevice_IsBase(true);
        vkzip->setDevice(dev);
    } else {
        ((VirtualKZip*)self)->setDevice(dev);
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnSetDevice(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_SetDevice_Callback(reinterpret_cast<VirtualKZip::KZip_SetDevice_Callback>(slot));
    }
}

// Derived class handler implementation
void KZip_SetRootDir(KZip* self, KArchiveDirectory* rootDir) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setRootDir(rootDir);
    } else {
        ((VirtualKZip*)self)->setRootDir(rootDir);
    }
}

// Base class handler implementation
void KZip_QBaseSetRootDir(KZip* self, KArchiveDirectory* rootDir) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_SetRootDir_IsBase(true);
        vkzip->setRootDir(rootDir);
    } else {
        ((VirtualKZip*)self)->setRootDir(rootDir);
    }
}

// Auxiliary method to allow providing re-implementation
void KZip_OnSetRootDir(KZip* self, intptr_t slot) {
    auto* vkzip = dynamic_cast<VirtualKZip*>(self);
    if (vkzip && vkzip->isVirtualKZip) {
        vkzip->setKZip_SetRootDir_Callback(reinterpret_cast<VirtualKZip::KZip_SetRootDir_Callback>(slot));
    }
}

void KZip_Delete(KZip* self) {
    delete self;
}
