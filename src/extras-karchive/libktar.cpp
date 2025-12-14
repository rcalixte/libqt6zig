#include <KArchive>
#include <KArchiveDirectory>
#include <KTar>
#include <QByteArray>
#include <QDateTime>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <ktar.h>
#include "libktar.h"
#include "libktar.hxx"

KTar* KTar_new(const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return new VirtualKTar(filename_QString);
}

KTar* KTar_new2(QIODevice* dev) {
    return new VirtualKTar(dev);
}

KTar* KTar_new3(const KTar* param1) {
    return new VirtualKTar(*param1);
}

KTar* KTar_new4(const libqt_string filename, const libqt_string mimetype) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    return new VirtualKTar(filename_QString, mimetype_QString);
}

void KTar_SetOrigFileName(KTar* self, const libqt_string fileName) {
    QByteArray fileName_QByteArray(fileName.data, fileName.len);
    self->setOrigFileName(fileName_QByteArray);
}

bool KTar_DoWriteSymLink(KTar* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        return vktar->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    return {};
}

bool KTar_DoWriteDir(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        return vktar->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    return {};
}

bool KTar_DoPrepareWriting(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        return vktar->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    }
    return {};
}

bool KTar_DoFinishWriting(KTar* self, long long size) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        return vktar->doFinishWriting(static_cast<qint64>(size));
    }
    return {};
}

bool KTar_OpenArchive(KTar* self, int mode) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        return vktar->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
    return {};
}

bool KTar_CloseArchive(KTar* self) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        return vktar->closeArchive();
    }
    return {};
}

bool KTar_CreateDevice(KTar* self, int mode) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        return vktar->createDevice(static_cast<QIODevice::OpenMode>(mode));
    }
    return {};
}

void KTar_VirtualHook(KTar* self, int id, void* data) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
bool KTar_QBaseDoWriteSymLink(KTar* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_DoWriteSymLink_IsBase(true);
        return vktar->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualKTar*)self)->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnDoWriteSymLink(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_DoWriteSymLink_Callback(reinterpret_cast<VirtualKTar::KTar_DoWriteSymLink_Callback>(slot));
    }
}

// Base class handler implementation
bool KTar_QBaseDoWriteDir(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_DoWriteDir_IsBase(true);
        return vktar->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualKTar*)self)->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnDoWriteDir(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_DoWriteDir_Callback(reinterpret_cast<VirtualKTar::KTar_DoWriteDir_Callback>(slot));
    }
}

// Base class handler implementation
bool KTar_QBaseDoPrepareWriting(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_DoPrepareWriting_IsBase(true);
        return vktar->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    } else {
        return ((VirtualKTar*)self)->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnDoPrepareWriting(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_DoPrepareWriting_Callback(reinterpret_cast<VirtualKTar::KTar_DoPrepareWriting_Callback>(slot));
    }
}

// Base class handler implementation
bool KTar_QBaseDoFinishWriting(KTar* self, long long size) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_DoFinishWriting_IsBase(true);
        return vktar->doFinishWriting(static_cast<qint64>(size));
    } else {
        return ((VirtualKTar*)self)->doFinishWriting(static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnDoFinishWriting(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_DoFinishWriting_Callback(reinterpret_cast<VirtualKTar::KTar_DoFinishWriting_Callback>(slot));
    }
}

// Base class handler implementation
bool KTar_QBaseOpenArchive(KTar* self, int mode) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_OpenArchive_IsBase(true);
        return vktar->openArchive(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualKTar*)self)->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnOpenArchive(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_OpenArchive_Callback(reinterpret_cast<VirtualKTar::KTar_OpenArchive_Callback>(slot));
    }
}

// Base class handler implementation
bool KTar_QBaseCloseArchive(KTar* self) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_CloseArchive_IsBase(true);
        return vktar->closeArchive();
    } else {
        return ((VirtualKTar*)self)->closeArchive();
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnCloseArchive(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_CloseArchive_Callback(reinterpret_cast<VirtualKTar::KTar_CloseArchive_Callback>(slot));
    }
}

// Base class handler implementation
bool KTar_QBaseCreateDevice(KTar* self, int mode) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_CreateDevice_IsBase(true);
        return vktar->createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return ((VirtualKTar*)self)->createDevice(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnCreateDevice(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_CreateDevice_Callback(reinterpret_cast<VirtualKTar::KTar_CreateDevice_Callback>(slot));
    }
}

// Base class handler implementation
void KTar_QBaseVirtualHook(KTar* self, int id, void* data) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_VirtualHook_IsBase(true);
        vktar->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKTar*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnVirtualHook(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_VirtualHook_Callback(reinterpret_cast<VirtualKTar::KTar_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTar_Open(KTar* self, int mode) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        return vktar->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return self->KTar::open(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Base class handler implementation
bool KTar_QBaseOpen(KTar* self, int mode) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_Open_IsBase(true);
        return vktar->open(static_cast<QIODevice::OpenMode>(mode));
    } else {
        return self->KTar::open(static_cast<QIODevice::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnOpen(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_Open_Callback(reinterpret_cast<VirtualKTar::KTar_Open_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTar_Close(KTar* self) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        return vktar->close();
    } else {
        return self->KTar::close();
    }
}

// Base class handler implementation
bool KTar_QBaseClose(KTar* self) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_Close_IsBase(true);
        return vktar->close();
    } else {
        return self->KTar::close();
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnClose(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_Close_Callback(reinterpret_cast<VirtualKTar::KTar_Close_Callback>(slot));
    }
}

// Derived class handler implementation
KArchiveDirectory* KTar_RootDir(KTar* self) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        return vktar->rootDir();
    } else {
        return ((VirtualKTar*)self)->rootDir();
    }
}

// Base class handler implementation
KArchiveDirectory* KTar_QBaseRootDir(KTar* self) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_RootDir_IsBase(true);
        return vktar->rootDir();
    } else {
        return ((VirtualKTar*)self)->rootDir();
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnRootDir(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_RootDir_Callback(reinterpret_cast<VirtualKTar::KTar_RootDir_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTar_DoWriteData(KTar* self, const char* data, long long size) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        return vktar->doWriteData(data, static_cast<qint64>(size));
    } else {
        return ((VirtualKTar*)self)->doWriteData(data, static_cast<qint64>(size));
    }
}

// Base class handler implementation
bool KTar_QBaseDoWriteData(KTar* self, const char* data, long long size) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_DoWriteData_IsBase(true);
        return vktar->doWriteData(data, static_cast<qint64>(size));
    } else {
        return ((VirtualKTar*)self)->doWriteData(data, static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnDoWriteData(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_DoWriteData_Callback(reinterpret_cast<VirtualKTar::KTar_DoWriteData_Callback>(slot));
    }
}

// Derived class handler implementation
void KTar_SetErrorString(KTar* self, const libqt_string errorStr) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setErrorString(errorStr_QString);
    } else {
        ((VirtualKTar*)self)->setErrorString(errorStr_QString);
    }
}

// Base class handler implementation
void KTar_QBaseSetErrorString(KTar* self, const libqt_string errorStr) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_SetErrorString_IsBase(true);
        vktar->setErrorString(errorStr_QString);
    } else {
        ((VirtualKTar*)self)->setErrorString(errorStr_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnSetErrorString(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_SetErrorString_Callback(reinterpret_cast<VirtualKTar::KTar_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
KArchiveDirectory* KTar_FindOrCreate(KTar* self, const libqt_string path) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (vktar && vktar->isVirtualKTar) {
        return vktar->findOrCreate(path_QString);
    } else {
        return ((VirtualKTar*)self)->findOrCreate(path_QString);
    }
}

// Base class handler implementation
KArchiveDirectory* KTar_QBaseFindOrCreate(KTar* self, const libqt_string path) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_FindOrCreate_IsBase(true);
        return vktar->findOrCreate(path_QString);
    } else {
        return ((VirtualKTar*)self)->findOrCreate(path_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnFindOrCreate(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_FindOrCreate_Callback(reinterpret_cast<VirtualKTar::KTar_FindOrCreate_Callback>(slot));
    }
}

// Derived class handler implementation
void KTar_SetDevice(KTar* self, QIODevice* dev) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setDevice(dev);
    } else {
        ((VirtualKTar*)self)->setDevice(dev);
    }
}

// Base class handler implementation
void KTar_QBaseSetDevice(KTar* self, QIODevice* dev) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_SetDevice_IsBase(true);
        vktar->setDevice(dev);
    } else {
        ((VirtualKTar*)self)->setDevice(dev);
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnSetDevice(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_SetDevice_Callback(reinterpret_cast<VirtualKTar::KTar_SetDevice_Callback>(slot));
    }
}

// Derived class handler implementation
void KTar_SetRootDir(KTar* self, KArchiveDirectory* rootDir) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setRootDir(rootDir);
    } else {
        ((VirtualKTar*)self)->setRootDir(rootDir);
    }
}

// Base class handler implementation
void KTar_QBaseSetRootDir(KTar* self, KArchiveDirectory* rootDir) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_SetRootDir_IsBase(true);
        vktar->setRootDir(rootDir);
    } else {
        ((VirtualKTar*)self)->setRootDir(rootDir);
    }
}

// Auxiliary method to allow providing re-implementation
void KTar_OnSetRootDir(KTar* self, intptr_t slot) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar && vktar->isVirtualKTar) {
        vktar->setKTar_SetRootDir_Callback(reinterpret_cast<VirtualKTar::KTar_SetRootDir_Callback>(slot));
    }
}

void KTar_Delete(KTar* self) {
    delete self;
}
