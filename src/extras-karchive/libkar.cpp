#include <KAr>
#include <KArchive>
#include <KArchiveDirectory>
#include <QDateTime>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kar.h>
#include "libkar.h"
#include "libkar.hxx"

KAr* KAr_new(const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return new VirtualKAr(filename_QString);
}

KAr* KAr_new2(QIODevice* dev) {
    return new VirtualKAr(dev);
}

KAr* KAr_new3(const KAr* param1) {
    return new VirtualKAr(*param1);
}

bool KAr_DoPrepareWriting(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        return vkar->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    }
    return {};
}

bool KAr_DoFinishWriting(KAr* self, long long size) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        return vkar->doFinishWriting(static_cast<qint64>(size));
    }
    return {};
}

bool KAr_DoWriteDir(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        return vkar->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    return {};
}

bool KAr_DoWriteSymLink(KAr* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        return vkar->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    return {};
}

bool KAr_OpenArchive(KAr* self, int mode) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        return vkar->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
    return {};
}

bool KAr_CloseArchive(KAr* self) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        return vkar->closeArchive();
    }
    return {};
}

void KAr_VirtualHook(KAr* self, int id, void* data) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
bool KAr_SuperDoPrepareWriting(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_DoPrepareWriting_IsBase(true);
        return vkar->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualKAr*)self)->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnDoPrepareWriting(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_DoPrepareWriting_Callback(reinterpret_cast<VirtualKAr::KAr_DoPrepareWriting_Callback>(slot));
    }
}

// Base class handler implementation
bool KAr_SuperDoFinishWriting(KAr* self, long long size) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_DoFinishWriting_IsBase(true);
        return vkar->doFinishWriting(static_cast<qint64>(size));
    } else {
        return ((VirtualKAr*)self)->doFinishWriting(static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnDoFinishWriting(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_DoFinishWriting_Callback(reinterpret_cast<VirtualKAr::KAr_DoFinishWriting_Callback>(slot));
    }
}

// Base class handler implementation
bool KAr_SuperDoWriteDir(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_DoWriteDir_IsBase(true);
        return vkar->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualKAr*)self)->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnDoWriteDir(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_DoWriteDir_Callback(reinterpret_cast<VirtualKAr::KAr_DoWriteDir_Callback>(slot));
    }
}

// Base class handler implementation
bool KAr_SuperDoWriteSymLink(KAr* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_DoWriteSymLink_IsBase(true);
        return vkar->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualKAr*)self)->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnDoWriteSymLink(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_DoWriteSymLink_Callback(reinterpret_cast<VirtualKAr::KAr_DoWriteSymLink_Callback>(slot));
    }
}

// Base class handler implementation
bool KAr_SuperOpenArchive(KAr* self, int mode) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_OpenArchive_IsBase(true);
        return vkar->openArchive(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualKAr*)self)->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnOpenArchive(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_OpenArchive_Callback(reinterpret_cast<VirtualKAr::KAr_OpenArchive_Callback>(slot));
    }
}

// Base class handler implementation
bool KAr_SuperCloseArchive(KAr* self) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_CloseArchive_IsBase(true);
        return vkar->closeArchive();
    } else {
        return ((VirtualKAr*)self)->closeArchive();
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnCloseArchive(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_CloseArchive_Callback(reinterpret_cast<VirtualKAr::KAr_CloseArchive_Callback>(slot));
    }
}

// Base class handler implementation
void KAr_SuperVirtualHook(KAr* self, int id, void* data) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_VirtualHook_IsBase(true);
        vkar->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKAr*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnVirtualHook(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_VirtualHook_Callback(reinterpret_cast<VirtualKAr::KAr_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAr_Open(KAr* self, int mode) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        return vkar->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return self->KAr::open(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Base class handler implementation
bool KAr_SuperOpen(KAr* self, int mode) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_Open_IsBase(true);
        return vkar->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return self->KAr::open(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnOpen(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_Open_Callback(reinterpret_cast<VirtualKAr::KAr_Open_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAr_Close(KAr* self) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        return vkar->close();
    } else {
        return self->KAr::close();
    }
}

// Base class handler implementation
bool KAr_SuperClose(KAr* self) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_Close_IsBase(true);
        return vkar->close();
    } else {
        return self->KAr::close();
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnClose(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_Close_Callback(reinterpret_cast<VirtualKAr::KAr_Close_Callback>(slot));
    }
}

// Derived class handler implementation
KArchiveDirectory* KAr_RootDir(KAr* self) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        return vkar->rootDir();
    } else {
        return ((VirtualKAr*)self)->rootDir();
    }
}

// Base class handler implementation
KArchiveDirectory* KAr_SuperRootDir(KAr* self) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_RootDir_IsBase(true);
        return vkar->rootDir();
    } else {
        return ((VirtualKAr*)self)->rootDir();
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnRootDir(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_RootDir_Callback(reinterpret_cast<VirtualKAr::KAr_RootDir_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAr_DoWriteData(KAr* self, const char* data, long long size) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        return vkar->doWriteData(data, static_cast<qint64>(size));
    } else {
        return ((VirtualKAr*)self)->doWriteData(data, static_cast<qint64>(size));
    }
}

// Base class handler implementation
bool KAr_SuperDoWriteData(KAr* self, const char* data, long long size) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_DoWriteData_IsBase(true);
        return vkar->doWriteData(data, static_cast<qint64>(size));
    } else {
        return ((VirtualKAr*)self)->doWriteData(data, static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnDoWriteData(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_DoWriteData_Callback(reinterpret_cast<VirtualKAr::KAr_DoWriteData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAr_CreateDevice(KAr* self, int mode) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        return vkar->createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualKAr*)self)->createDevice(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Base class handler implementation
bool KAr_SuperCreateDevice(KAr* self, int mode) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_CreateDevice_IsBase(true);
        return vkar->createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualKAr*)self)->createDevice(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnCreateDevice(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_CreateDevice_Callback(reinterpret_cast<VirtualKAr::KAr_CreateDevice_Callback>(slot));
    }
}

// Derived class handler implementation
void KAr_SetErrorString(KAr* self, const libqt_string errorStr) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setErrorString(errorStr_QString);
    } else {
        ((VirtualKAr*)self)->setErrorString(errorStr_QString);
    }
}

// Base class handler implementation
void KAr_SuperSetErrorString(KAr* self, const libqt_string errorStr) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_SetErrorString_IsBase(true);
        vkar->setErrorString(errorStr_QString);
    } else {
        ((VirtualKAr*)self)->setErrorString(errorStr_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnSetErrorString(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_SetErrorString_Callback(reinterpret_cast<VirtualKAr::KAr_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
KArchiveDirectory* KAr_FindOrCreate(KAr* self, const libqt_string path) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (vkar && vkar->isVirtualKAr) {
        return vkar->findOrCreate(path_QString);
    } else {
        return ((VirtualKAr*)self)->findOrCreate(path_QString);
    }
}

// Base class handler implementation
KArchiveDirectory* KAr_SuperFindOrCreate(KAr* self, const libqt_string path) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_FindOrCreate_IsBase(true);
        return vkar->findOrCreate(path_QString);
    } else {
        return ((VirtualKAr*)self)->findOrCreate(path_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnFindOrCreate(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_FindOrCreate_Callback(reinterpret_cast<VirtualKAr::KAr_FindOrCreate_Callback>(slot));
    }
}

// Derived class handler implementation
void KAr_SetDevice(KAr* self, QIODevice* dev) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setDevice(dev);
    } else {
        ((VirtualKAr*)self)->setDevice(dev);
    }
}

// Base class handler implementation
void KAr_SuperSetDevice(KAr* self, QIODevice* dev) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_SetDevice_IsBase(true);
        vkar->setDevice(dev);
    } else {
        ((VirtualKAr*)self)->setDevice(dev);
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnSetDevice(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_SetDevice_Callback(reinterpret_cast<VirtualKAr::KAr_SetDevice_Callback>(slot));
    }
}

// Derived class handler implementation
void KAr_SetRootDir(KAr* self, KArchiveDirectory* rootDir) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setRootDir(rootDir);
    } else {
        ((VirtualKAr*)self)->setRootDir(rootDir);
    }
}

// Base class handler implementation
void KAr_SuperSetRootDir(KAr* self, KArchiveDirectory* rootDir) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_SetRootDir_IsBase(true);
        vkar->setRootDir(rootDir);
    } else {
        ((VirtualKAr*)self)->setRootDir(rootDir);
    }
}

// Auxiliary method to allow providing re-implementation
void KAr_OnSetRootDir(KAr* self, intptr_t slot) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar && vkar->isVirtualKAr) {
        vkar->setKAr_SetRootDir_Callback(reinterpret_cast<VirtualKAr::KAr_SetRootDir_Callback>(slot));
    }
}

void KAr_Delete(KAr* self) {
    delete self;
}
