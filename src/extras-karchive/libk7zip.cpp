#include <K7Zip>
#include <KArchive>
#include <KArchiveDirectory>
#include <QDateTime>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <k7zip.h>
#include "libk7zip.h"
#include "libk7zip.hxx"

K7Zip* K7Zip_new(const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return new VirtualK7Zip(filename_QString);
}

K7Zip* K7Zip_new2(QIODevice* dev) {
    return new VirtualK7Zip(dev);
}

K7Zip* K7Zip_new3(const K7Zip* param1) {
    return new VirtualK7Zip(*param1);
}

void K7Zip_SetPassword(K7Zip* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->setPassword(password_QString);
}

bool K7Zip_PasswordNeeded(const K7Zip* self) {
    return self->passwordNeeded();
}

bool K7Zip_DoWriteSymLink(K7Zip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        return vk7zip->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    return {};
}

bool K7Zip_DoWriteDir(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        return vk7zip->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    return {};
}

bool K7Zip_DoPrepareWriting(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        return vk7zip->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    }
    return {};
}

bool K7Zip_DoFinishWriting(K7Zip* self, long long size) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        return vk7zip->doFinishWriting(static_cast<qint64>(size));
    }
    return {};
}

bool K7Zip_DoWriteData(K7Zip* self, const char* data, long long size) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        return vk7zip->doWriteData(data, static_cast<qint64>(size));
    }
    return {};
}

bool K7Zip_OpenArchive(K7Zip* self, int mode) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        return vk7zip->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
    return {};
}

bool K7Zip_CloseArchive(K7Zip* self) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        return vk7zip->closeArchive();
    }
    return {};
}

void K7Zip_VirtualHook(K7Zip* self, int id, void* data) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
bool K7Zip_SuperDoWriteSymLink(K7Zip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_DoWriteSymLink_IsBase(true);
        return vk7zip->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualK7Zip*)self)->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnDoWriteSymLink(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_DoWriteSymLink_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_DoWriteSymLink_Callback>(slot));
    }
}

// Base class handler implementation
bool K7Zip_SuperDoWriteDir(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_DoWriteDir_IsBase(true);
        return vk7zip->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualK7Zip*)self)->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnDoWriteDir(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_DoWriteDir_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_DoWriteDir_Callback>(slot));
    }
}

// Base class handler implementation
bool K7Zip_SuperDoPrepareWriting(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_DoPrepareWriting_IsBase(true);
        return vk7zip->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualK7Zip*)self)->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnDoPrepareWriting(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_DoPrepareWriting_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_DoPrepareWriting_Callback>(slot));
    }
}

// Base class handler implementation
bool K7Zip_SuperDoFinishWriting(K7Zip* self, long long size) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_DoFinishWriting_IsBase(true);
        return vk7zip->doFinishWriting(static_cast<qint64>(size));
    } else {
        return ((VirtualK7Zip*)self)->doFinishWriting(static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnDoFinishWriting(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_DoFinishWriting_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_DoFinishWriting_Callback>(slot));
    }
}

// Base class handler implementation
bool K7Zip_SuperDoWriteData(K7Zip* self, const char* data, long long size) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_DoWriteData_IsBase(true);
        return vk7zip->doWriteData(data, static_cast<qint64>(size));
    } else {
        return ((VirtualK7Zip*)self)->doWriteData(data, static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnDoWriteData(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_DoWriteData_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_DoWriteData_Callback>(slot));
    }
}

// Base class handler implementation
bool K7Zip_SuperOpenArchive(K7Zip* self, int mode) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_OpenArchive_IsBase(true);
        return vk7zip->openArchive(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualK7Zip*)self)->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnOpenArchive(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_OpenArchive_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_OpenArchive_Callback>(slot));
    }
}

// Base class handler implementation
bool K7Zip_SuperCloseArchive(K7Zip* self) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_CloseArchive_IsBase(true);
        return vk7zip->closeArchive();
    } else {
        return ((VirtualK7Zip*)self)->closeArchive();
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnCloseArchive(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_CloseArchive_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_CloseArchive_Callback>(slot));
    }
}

// Base class handler implementation
void K7Zip_SuperVirtualHook(K7Zip* self, int id, void* data) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_VirtualHook_IsBase(true);
        vk7zip->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualK7Zip*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnVirtualHook(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_VirtualHook_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
bool K7Zip_Open(K7Zip* self, int mode) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        return vk7zip->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return self->K7Zip::open(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Base class handler implementation
bool K7Zip_SuperOpen(K7Zip* self, int mode) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_Open_IsBase(true);
        return vk7zip->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return self->K7Zip::open(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnOpen(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_Open_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_Open_Callback>(slot));
    }
}

// Derived class handler implementation
bool K7Zip_Close(K7Zip* self) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        return vk7zip->close();
    } else {
        return self->K7Zip::close();
    }
}

// Base class handler implementation
bool K7Zip_SuperClose(K7Zip* self) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_Close_IsBase(true);
        return vk7zip->close();
    } else {
        return self->K7Zip::close();
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnClose(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_Close_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_Close_Callback>(slot));
    }
}

// Derived class handler implementation
KArchiveDirectory* K7Zip_RootDir(K7Zip* self) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        return vk7zip->rootDir();
    } else {
        return ((VirtualK7Zip*)self)->rootDir();
    }
}

// Base class handler implementation
KArchiveDirectory* K7Zip_SuperRootDir(K7Zip* self) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_RootDir_IsBase(true);
        return vk7zip->rootDir();
    } else {
        return ((VirtualK7Zip*)self)->rootDir();
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnRootDir(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_RootDir_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_RootDir_Callback>(slot));
    }
}

// Derived class handler implementation
bool K7Zip_CreateDevice(K7Zip* self, int mode) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        return vk7zip->createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualK7Zip*)self)->createDevice(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Base class handler implementation
bool K7Zip_SuperCreateDevice(K7Zip* self, int mode) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_CreateDevice_IsBase(true);
        return vk7zip->createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualK7Zip*)self)->createDevice(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnCreateDevice(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_CreateDevice_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_CreateDevice_Callback>(slot));
    }
}

// Derived class handler implementation
void K7Zip_SetErrorString(K7Zip* self, const libqt_string errorStr) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setErrorString(errorStr_QString);
    } else {
        ((VirtualK7Zip*)self)->setErrorString(errorStr_QString);
    }
}

// Base class handler implementation
void K7Zip_SuperSetErrorString(K7Zip* self, const libqt_string errorStr) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_SetErrorString_IsBase(true);
        vk7zip->setErrorString(errorStr_QString);
    } else {
        ((VirtualK7Zip*)self)->setErrorString(errorStr_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnSetErrorString(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_SetErrorString_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
KArchiveDirectory* K7Zip_FindOrCreate(K7Zip* self, const libqt_string path) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        return vk7zip->findOrCreate(path_QString);
    } else {
        return ((VirtualK7Zip*)self)->findOrCreate(path_QString);
    }
}

// Base class handler implementation
KArchiveDirectory* K7Zip_SuperFindOrCreate(K7Zip* self, const libqt_string path) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_FindOrCreate_IsBase(true);
        return vk7zip->findOrCreate(path_QString);
    } else {
        return ((VirtualK7Zip*)self)->findOrCreate(path_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnFindOrCreate(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_FindOrCreate_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_FindOrCreate_Callback>(slot));
    }
}

// Derived class handler implementation
void K7Zip_SetDevice(K7Zip* self, QIODevice* dev) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setDevice(dev);
    } else {
        ((VirtualK7Zip*)self)->setDevice(dev);
    }
}

// Base class handler implementation
void K7Zip_SuperSetDevice(K7Zip* self, QIODevice* dev) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_SetDevice_IsBase(true);
        vk7zip->setDevice(dev);
    } else {
        ((VirtualK7Zip*)self)->setDevice(dev);
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnSetDevice(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_SetDevice_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_SetDevice_Callback>(slot));
    }
}

// Derived class handler implementation
void K7Zip_SetRootDir(K7Zip* self, KArchiveDirectory* rootDir) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setRootDir(rootDir);
    } else {
        ((VirtualK7Zip*)self)->setRootDir(rootDir);
    }
}

// Base class handler implementation
void K7Zip_SuperSetRootDir(K7Zip* self, KArchiveDirectory* rootDir) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_SetRootDir_IsBase(true);
        vk7zip->setRootDir(rootDir);
    } else {
        ((VirtualK7Zip*)self)->setRootDir(rootDir);
    }
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnSetRootDir(K7Zip* self, intptr_t slot) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip && vk7zip->isVirtualK7Zip) {
        vk7zip->setK7Zip_SetRootDir_Callback(reinterpret_cast<VirtualK7Zip::K7Zip_SetRootDir_Callback>(slot));
    }
}

void K7Zip_Delete(K7Zip* self) {
    delete self;
}
