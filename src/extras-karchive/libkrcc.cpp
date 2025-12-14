#include <KArchive>
#include <KArchiveDirectory>
#include <KRcc>
#include <QDateTime>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <krcc.h>
#include "libkrcc.h"
#include "libkrcc.hxx"

KRcc* KRcc_new(const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return new VirtualKRcc(filename_QString);
}

KRcc* KRcc_new2(const KRcc* param1) {
    return new VirtualKRcc(*param1);
}

bool KRcc_DoPrepareWriting(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        return vkrcc->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    }
    return {};
}

bool KRcc_DoFinishWriting(KRcc* self, long long size) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        return vkrcc->doFinishWriting(static_cast<qint64>(size));
    }
    return {};
}

bool KRcc_DoWriteDir(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        return vkrcc->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    return {};
}

bool KRcc_DoWriteSymLink(KRcc* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        return vkrcc->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    return {};
}

bool KRcc_OpenArchive(KRcc* self, int mode) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        return vkrcc->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
    return {};
}

bool KRcc_CloseArchive(KRcc* self) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        return vkrcc->closeArchive();
    }
    return {};
}

void KRcc_VirtualHook(KRcc* self, int id, void* data) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
bool KRcc_QBaseDoPrepareWriting(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_DoPrepareWriting_IsBase(true);
        return vkrcc->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualKRcc*)self)->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnDoPrepareWriting(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_DoPrepareWriting_Callback(reinterpret_cast<VirtualKRcc::KRcc_DoPrepareWriting_Callback>(slot));
    }
}

// Base class handler implementation
bool KRcc_QBaseDoFinishWriting(KRcc* self, long long size) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_DoFinishWriting_IsBase(true);
        return vkrcc->doFinishWriting(static_cast<qint64>(size));
    } else {
        return ((VirtualKRcc*)self)->doFinishWriting(static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnDoFinishWriting(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_DoFinishWriting_Callback(reinterpret_cast<VirtualKRcc::KRcc_DoFinishWriting_Callback>(slot));
    }
}

// Base class handler implementation
bool KRcc_QBaseDoWriteDir(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_DoWriteDir_IsBase(true);
        return vkrcc->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualKRcc*)self)->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnDoWriteDir(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_DoWriteDir_Callback(reinterpret_cast<VirtualKRcc::KRcc_DoWriteDir_Callback>(slot));
    }
}

// Base class handler implementation
bool KRcc_QBaseDoWriteSymLink(KRcc* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_DoWriteSymLink_IsBase(true);
        return vkrcc->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualKRcc*)self)->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnDoWriteSymLink(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_DoWriteSymLink_Callback(reinterpret_cast<VirtualKRcc::KRcc_DoWriteSymLink_Callback>(slot));
    }
}

// Base class handler implementation
bool KRcc_QBaseOpenArchive(KRcc* self, int mode) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_OpenArchive_IsBase(true);
        return vkrcc->openArchive(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualKRcc*)self)->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnOpenArchive(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_OpenArchive_Callback(reinterpret_cast<VirtualKRcc::KRcc_OpenArchive_Callback>(slot));
    }
}

// Base class handler implementation
bool KRcc_QBaseCloseArchive(KRcc* self) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_CloseArchive_IsBase(true);
        return vkrcc->closeArchive();
    } else {
        return ((VirtualKRcc*)self)->closeArchive();
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnCloseArchive(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_CloseArchive_Callback(reinterpret_cast<VirtualKRcc::KRcc_CloseArchive_Callback>(slot));
    }
}

// Base class handler implementation
void KRcc_QBaseVirtualHook(KRcc* self, int id, void* data) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_VirtualHook_IsBase(true);
        vkrcc->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKRcc*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnVirtualHook(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_VirtualHook_Callback(reinterpret_cast<VirtualKRcc::KRcc_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRcc_Open(KRcc* self, int mode) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        return vkrcc->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return self->KRcc::open(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Base class handler implementation
bool KRcc_QBaseOpen(KRcc* self, int mode) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_Open_IsBase(true);
        return vkrcc->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return self->KRcc::open(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnOpen(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_Open_Callback(reinterpret_cast<VirtualKRcc::KRcc_Open_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRcc_Close(KRcc* self) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        return vkrcc->close();
    } else {
        return self->KRcc::close();
    }
}

// Base class handler implementation
bool KRcc_QBaseClose(KRcc* self) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_Close_IsBase(true);
        return vkrcc->close();
    } else {
        return self->KRcc::close();
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnClose(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_Close_Callback(reinterpret_cast<VirtualKRcc::KRcc_Close_Callback>(slot));
    }
}

// Derived class handler implementation
KArchiveDirectory* KRcc_RootDir(KRcc* self) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        return vkrcc->rootDir();
    } else {
        return ((VirtualKRcc*)self)->rootDir();
    }
}

// Base class handler implementation
KArchiveDirectory* KRcc_QBaseRootDir(KRcc* self) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_RootDir_IsBase(true);
        return vkrcc->rootDir();
    } else {
        return ((VirtualKRcc*)self)->rootDir();
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnRootDir(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_RootDir_Callback(reinterpret_cast<VirtualKRcc::KRcc_RootDir_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRcc_DoWriteData(KRcc* self, const char* data, long long size) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        return vkrcc->doWriteData(data, static_cast<qint64>(size));
    } else {
        return ((VirtualKRcc*)self)->doWriteData(data, static_cast<qint64>(size));
    }
}

// Base class handler implementation
bool KRcc_QBaseDoWriteData(KRcc* self, const char* data, long long size) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_DoWriteData_IsBase(true);
        return vkrcc->doWriteData(data, static_cast<qint64>(size));
    } else {
        return ((VirtualKRcc*)self)->doWriteData(data, static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnDoWriteData(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_DoWriteData_Callback(reinterpret_cast<VirtualKRcc::KRcc_DoWriteData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRcc_CreateDevice(KRcc* self, int mode) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        return vkrcc->createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualKRcc*)self)->createDevice(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Base class handler implementation
bool KRcc_QBaseCreateDevice(KRcc* self, int mode) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_CreateDevice_IsBase(true);
        return vkrcc->createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualKRcc*)self)->createDevice(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnCreateDevice(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_CreateDevice_Callback(reinterpret_cast<VirtualKRcc::KRcc_CreateDevice_Callback>(slot));
    }
}

// Derived class handler implementation
void KRcc_SetErrorString(KRcc* self, const libqt_string errorStr) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setErrorString(errorStr_QString);
    } else {
        ((VirtualKRcc*)self)->setErrorString(errorStr_QString);
    }
}

// Base class handler implementation
void KRcc_QBaseSetErrorString(KRcc* self, const libqt_string errorStr) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_SetErrorString_IsBase(true);
        vkrcc->setErrorString(errorStr_QString);
    } else {
        ((VirtualKRcc*)self)->setErrorString(errorStr_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnSetErrorString(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_SetErrorString_Callback(reinterpret_cast<VirtualKRcc::KRcc_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
KArchiveDirectory* KRcc_FindOrCreate(KRcc* self, const libqt_string path) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        return vkrcc->findOrCreate(path_QString);
    } else {
        return ((VirtualKRcc*)self)->findOrCreate(path_QString);
    }
}

// Base class handler implementation
KArchiveDirectory* KRcc_QBaseFindOrCreate(KRcc* self, const libqt_string path) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_FindOrCreate_IsBase(true);
        return vkrcc->findOrCreate(path_QString);
    } else {
        return ((VirtualKRcc*)self)->findOrCreate(path_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnFindOrCreate(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_FindOrCreate_Callback(reinterpret_cast<VirtualKRcc::KRcc_FindOrCreate_Callback>(slot));
    }
}

// Derived class handler implementation
void KRcc_SetDevice(KRcc* self, QIODevice* dev) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setDevice(dev);
    } else {
        ((VirtualKRcc*)self)->setDevice(dev);
    }
}

// Base class handler implementation
void KRcc_QBaseSetDevice(KRcc* self, QIODevice* dev) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_SetDevice_IsBase(true);
        vkrcc->setDevice(dev);
    } else {
        ((VirtualKRcc*)self)->setDevice(dev);
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnSetDevice(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_SetDevice_Callback(reinterpret_cast<VirtualKRcc::KRcc_SetDevice_Callback>(slot));
    }
}

// Derived class handler implementation
void KRcc_SetRootDir(KRcc* self, KArchiveDirectory* rootDir) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setRootDir(rootDir);
    } else {
        ((VirtualKRcc*)self)->setRootDir(rootDir);
    }
}

// Base class handler implementation
void KRcc_QBaseSetRootDir(KRcc* self, KArchiveDirectory* rootDir) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_SetRootDir_IsBase(true);
        vkrcc->setRootDir(rootDir);
    } else {
        ((VirtualKRcc*)self)->setRootDir(rootDir);
    }
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnSetRootDir(KRcc* self, intptr_t slot) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc && vkrcc->isVirtualKRcc) {
        vkrcc->setKRcc_SetRootDir_Callback(reinterpret_cast<VirtualKRcc::KRcc_SetRootDir_Callback>(slot));
    }
}

void KRcc_Delete(KRcc* self) {
    delete self;
}
