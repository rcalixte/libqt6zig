#include <KArchive>
#include <KArchiveDirectory>
#include <KRcc>
#include <QDateTime>
#include <QIODevice>
#include <QString>
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

libqt_string KRcc_Tr(const char* sourceText) {
    auto _ret = KRcc::tr(sourceText);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KRcc_DoPrepareWriting(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc) {
        return vkrcc->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method KRcc::doPrepareWriting called without a directly constructed type");
}

bool KRcc_DoFinishWriting(KRcc* self, long long size) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc) {
        return vkrcc->doFinishWriting(static_cast<qint64>(size));
    }
    qFatal("Error: Protected method KRcc::doFinishWriting called without a directly constructed type");
}

bool KRcc_DoWriteDir(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc) {
        return vkrcc->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method KRcc::doWriteDir called without a directly constructed type");
}

bool KRcc_DoWriteSymLink(KRcc* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc) {
        return vkrcc->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method KRcc::doWriteSymLink called without a directly constructed type");
}

bool KRcc_OpenArchive(KRcc* self, int mode) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc) {
        return vkrcc->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
    qFatal("Error: Protected method KRcc::openArchive called without a directly constructed type");
}

bool KRcc_CloseArchive(KRcc* self) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc) {
        return vkrcc->closeArchive();
    }
    qFatal("Error: Protected method KRcc::closeArchive called without a directly constructed type");
}

void KRcc_VirtualHook(KRcc* self, int id, void* data) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc) {
        vkrcc->virtual_hook(static_cast<int>(id), data);
    }
}

libqt_string KRcc_Tr2(const char* sourceText, const char* disambiguation) {
    auto _ret = KRcc::tr(sourceText, disambiguation);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRcc_Tr3(const char* sourceText, const char* disambiguation, int n) {
    auto _ret = KRcc::tr(sourceText, disambiguation, static_cast<int>(n));
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
bool KRcc_SuperDoPrepareWriting(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        return vkrcc->KRcc::doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method KRcc::doPrepareWriting called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnDoPrepareWriting(KRcc* self, intptr_t slot) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self))
        vkrcc->krcc_dopreparewriting_callback = reinterpret_cast<VirtualKRcc::KRcc_DoPrepareWriting_Callback>(slot);
}

// Base class handler implementation
bool KRcc_SuperDoFinishWriting(KRcc* self, long long size) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        return vkrcc->KRcc::doFinishWriting(static_cast<qint64>(size));
    } else
        qFatal("Error: Protected virtual method KRcc::doFinishWriting called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnDoFinishWriting(KRcc* self, intptr_t slot) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self))
        vkrcc->krcc_dofinishwriting_callback = reinterpret_cast<VirtualKRcc::KRcc_DoFinishWriting_Callback>(slot);
}

// Base class handler implementation
bool KRcc_SuperDoWriteDir(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        return vkrcc->KRcc::doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method KRcc::doWriteDir called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnDoWriteDir(KRcc* self, intptr_t slot) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self))
        vkrcc->krcc_dowritedir_callback = reinterpret_cast<VirtualKRcc::KRcc_DoWriteDir_Callback>(slot);
}

// Base class handler implementation
bool KRcc_SuperDoWriteSymLink(KRcc* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        return vkrcc->KRcc::doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method KRcc::doWriteSymLink called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnDoWriteSymLink(KRcc* self, intptr_t slot) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self))
        vkrcc->krcc_dowritesymlink_callback = reinterpret_cast<VirtualKRcc::KRcc_DoWriteSymLink_Callback>(slot);
}

// Base class handler implementation
bool KRcc_SuperOpenArchive(KRcc* self, int mode) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        return vkrcc->KRcc::openArchive(static_cast<QIODevice::OpenMode>(mode));
    } else
        qFatal("Error: Protected virtual method KRcc::openArchive called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnOpenArchive(KRcc* self, intptr_t slot) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self))
        vkrcc->krcc_openarchive_callback = reinterpret_cast<VirtualKRcc::KRcc_OpenArchive_Callback>(slot);
}

// Base class handler implementation
bool KRcc_SuperCloseArchive(KRcc* self) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        return vkrcc->KRcc::closeArchive();
    } else
        qFatal("Error: Protected virtual method KRcc::closeArchive called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnCloseArchive(KRcc* self, intptr_t slot) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self))
        vkrcc->krcc_closearchive_callback = reinterpret_cast<VirtualKRcc::KRcc_CloseArchive_Callback>(slot);
}

// Base class handler implementation
void KRcc_SuperVirtualHook(KRcc* self, int id, void* data) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        vkrcc->KRcc::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KRcc::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnVirtualHook(KRcc* self, intptr_t slot) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self))
        vkrcc->krcc_virtualhook_callback = reinterpret_cast<VirtualKRcc::KRcc_VirtualHook_Callback>(slot);
}

// Derived class handler implementation
bool KRcc_Open(KRcc* self, int mode) {
    return self->open(static_cast<QIODevice::OpenMode>(mode));
}

// Base class handler implementation
bool KRcc_SuperOpen(KRcc* self, int mode) {
    return self->KRcc::open(static_cast<QIODevice::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnOpen(KRcc* self, intptr_t slot) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self))
        vkrcc->krcc_open_callback = reinterpret_cast<VirtualKRcc::KRcc_Open_Callback>(slot);
}

// Derived class handler implementation
bool KRcc_Close(KRcc* self) {
    return self->close();
}

// Base class handler implementation
bool KRcc_SuperClose(KRcc* self) {
    return self->KRcc::close();
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnClose(KRcc* self, intptr_t slot) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self))
        vkrcc->krcc_close_callback = reinterpret_cast<VirtualKRcc::KRcc_Close_Callback>(slot);
}

// Derived class handler implementation
KArchiveDirectory* KRcc_RootDir(KRcc* self) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc) {
        return vkrcc->rootDir();
    } else {
        qFatal("Error: Protected virtual method KRcc::rootDir called without a directly constructed type");
    }
}

// Base class handler implementation
KArchiveDirectory* KRcc_SuperRootDir(KRcc* self) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        return vkrcc->KRcc::rootDir();
    } else
        qFatal("Error: Protected virtual method KRcc::rootDir called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnRootDir(KRcc* self, intptr_t slot) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self))
        vkrcc->krcc_rootdir_callback = reinterpret_cast<VirtualKRcc::KRcc_RootDir_Callback>(slot);
}

// Derived class handler implementation
bool KRcc_DoWriteData(KRcc* self, const char* data, long long size) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc) {
        return vkrcc->doWriteData(data, static_cast<qint64>(size));
    } else {
        qFatal("Error: Protected virtual method KRcc::doWriteData called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRcc_SuperDoWriteData(KRcc* self, const char* data, long long size) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        return vkrcc->KRcc::doWriteData(data, static_cast<qint64>(size));
    } else
        qFatal("Error: Protected virtual method KRcc::doWriteData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnDoWriteData(KRcc* self, intptr_t slot) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self))
        vkrcc->krcc_dowritedata_callback = reinterpret_cast<VirtualKRcc::KRcc_DoWriteData_Callback>(slot);
}

// Derived class handler implementation
bool KRcc_CreateDevice(KRcc* self, int mode) {
    auto* vkrcc = dynamic_cast<VirtualKRcc*>(self);
    if (vkrcc) {
        return vkrcc->createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else {
        qFatal("Error: Protected virtual method KRcc::createDevice called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRcc_SuperCreateDevice(KRcc* self, int mode) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        return vkrcc->KRcc::createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else
        qFatal("Error: Protected virtual method KRcc::createDevice called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRcc_OnCreateDevice(KRcc* self, intptr_t slot) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self))
        vkrcc->krcc_createdevice_callback = reinterpret_cast<VirtualKRcc::KRcc_CreateDevice_Callback>(slot);
}

// Derived class protected handler implementation
void KRcc_SetErrorString(KRcc* self, const libqt_string errorStr) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
        vkrcc->VirtualKRcc::setErrorString(errorStr_QString);
    } else
        qFatal("Error: Protected method KRcc::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
KArchiveDirectory* KRcc_FindOrCreate(KRcc* self, const libqt_string path) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        QString path_QString = QString::fromUtf8(path.data, path.len);
        return vkrcc->VirtualKRcc::findOrCreate(path_QString);
    } else
        qFatal("Error: Protected method KRcc::findOrCreate called without a directly constructed type");
}

// Derived class protected handler implementation
void KRcc_SetDevice(KRcc* self, QIODevice* dev) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        vkrcc->VirtualKRcc::setDevice(dev);
    } else
        qFatal("Error: Protected method KRcc::setDevice called without a directly constructed type");
}

// Derived class protected handler implementation
void KRcc_SetRootDir(KRcc* self, KArchiveDirectory* rootDir) {
    if (auto* vkrcc = dynamic_cast<VirtualKRcc*>(self)) {
        vkrcc->VirtualKRcc::setRootDir(rootDir);
    } else
        qFatal("Error: Protected method KRcc::setRootDir called without a directly constructed type");
}

void KRcc_Delete(KRcc* self) {
    delete self;
}
