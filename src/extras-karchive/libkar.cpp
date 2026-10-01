#include <KAr>
#include <KArchive>
#include <KArchiveDirectory>
#include <QDateTime>
#include <QIODevice>
#include <QString>
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

libqt_string KAr_Tr(const char* sourceText) {
    auto _ret = KAr::tr(sourceText);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KAr_DoPrepareWriting(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar) {
        return vkar->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method KAr::doPrepareWriting called without a directly constructed type");
}

bool KAr_DoFinishWriting(KAr* self, long long size) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar) {
        return vkar->doFinishWriting(static_cast<qint64>(size));
    }
    qFatal("Error: Protected method KAr::doFinishWriting called without a directly constructed type");
}

bool KAr_DoWriteDir(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar) {
        return vkar->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method KAr::doWriteDir called without a directly constructed type");
}

bool KAr_DoWriteSymLink(KAr* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar) {
        return vkar->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method KAr::doWriteSymLink called without a directly constructed type");
}

bool KAr_OpenArchive(KAr* self, int mode) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar) {
        return vkar->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
    qFatal("Error: Protected method KAr::openArchive called without a directly constructed type");
}

bool KAr_CloseArchive(KAr* self) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar) {
        return vkar->closeArchive();
    }
    qFatal("Error: Protected method KAr::closeArchive called without a directly constructed type");
}

void KAr_VirtualHook(KAr* self, int id, void* data) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar) {
        vkar->virtual_hook(static_cast<int>(id), data);
    }
}

libqt_string KAr_Tr2(const char* sourceText, const char* disambiguation) {
    auto _ret = KAr::tr(sourceText, disambiguation);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAr_Tr3(const char* sourceText, const char* disambiguation, int n) {
    auto _ret = KAr::tr(sourceText, disambiguation, static_cast<int>(n));
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
bool KAr_SuperDoPrepareWriting(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        return vkar->KAr::doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method KAr::doPrepareWriting called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAr_OnDoPrepareWriting(KAr* self, intptr_t slot) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self))
        vkar->kar_dopreparewriting_callback = reinterpret_cast<VirtualKAr::KAr_DoPrepareWriting_Callback>(slot);
}

// Base class handler implementation
bool KAr_SuperDoFinishWriting(KAr* self, long long size) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        return vkar->KAr::doFinishWriting(static_cast<qint64>(size));
    } else
        qFatal("Error: Protected virtual method KAr::doFinishWriting called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAr_OnDoFinishWriting(KAr* self, intptr_t slot) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self))
        vkar->kar_dofinishwriting_callback = reinterpret_cast<VirtualKAr::KAr_DoFinishWriting_Callback>(slot);
}

// Base class handler implementation
bool KAr_SuperDoWriteDir(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        return vkar->KAr::doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method KAr::doWriteDir called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAr_OnDoWriteDir(KAr* self, intptr_t slot) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self))
        vkar->kar_dowritedir_callback = reinterpret_cast<VirtualKAr::KAr_DoWriteDir_Callback>(slot);
}

// Base class handler implementation
bool KAr_SuperDoWriteSymLink(KAr* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        return vkar->KAr::doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method KAr::doWriteSymLink called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAr_OnDoWriteSymLink(KAr* self, intptr_t slot) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self))
        vkar->kar_dowritesymlink_callback = reinterpret_cast<VirtualKAr::KAr_DoWriteSymLink_Callback>(slot);
}

// Base class handler implementation
bool KAr_SuperOpenArchive(KAr* self, int mode) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        return vkar->KAr::openArchive(static_cast<QIODevice::OpenMode>(mode));
    } else
        qFatal("Error: Protected virtual method KAr::openArchive called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAr_OnOpenArchive(KAr* self, intptr_t slot) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self))
        vkar->kar_openarchive_callback = reinterpret_cast<VirtualKAr::KAr_OpenArchive_Callback>(slot);
}

// Base class handler implementation
bool KAr_SuperCloseArchive(KAr* self) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        return vkar->KAr::closeArchive();
    } else
        qFatal("Error: Protected virtual method KAr::closeArchive called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAr_OnCloseArchive(KAr* self, intptr_t slot) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self))
        vkar->kar_closearchive_callback = reinterpret_cast<VirtualKAr::KAr_CloseArchive_Callback>(slot);
}

// Base class handler implementation
void KAr_SuperVirtualHook(KAr* self, int id, void* data) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        vkar->KAr::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KAr::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAr_OnVirtualHook(KAr* self, intptr_t slot) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self))
        vkar->kar_virtualhook_callback = reinterpret_cast<VirtualKAr::KAr_VirtualHook_Callback>(slot);
}

// Derived class handler implementation
bool KAr_Open(KAr* self, int mode) {
    return self->open(static_cast<QIODevice::OpenMode>(mode));
}

// Base class handler implementation
bool KAr_SuperOpen(KAr* self, int mode) {
    return self->KAr::open(static_cast<QIODevice::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KAr_OnOpen(KAr* self, intptr_t slot) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self))
        vkar->kar_open_callback = reinterpret_cast<VirtualKAr::KAr_Open_Callback>(slot);
}

// Derived class handler implementation
bool KAr_Close(KAr* self) {
    return self->close();
}

// Base class handler implementation
bool KAr_SuperClose(KAr* self) {
    return self->KAr::close();
}

// Auxiliary method to allow providing re-implementation
void KAr_OnClose(KAr* self, intptr_t slot) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self))
        vkar->kar_close_callback = reinterpret_cast<VirtualKAr::KAr_Close_Callback>(slot);
}

// Derived class handler implementation
KArchiveDirectory* KAr_RootDir(KAr* self) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar) {
        return vkar->rootDir();
    } else {
        qFatal("Error: Protected virtual method KAr::rootDir called without a directly constructed type");
    }
}

// Base class handler implementation
KArchiveDirectory* KAr_SuperRootDir(KAr* self) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        return vkar->KAr::rootDir();
    } else
        qFatal("Error: Protected virtual method KAr::rootDir called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAr_OnRootDir(KAr* self, intptr_t slot) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self))
        vkar->kar_rootdir_callback = reinterpret_cast<VirtualKAr::KAr_RootDir_Callback>(slot);
}

// Derived class handler implementation
bool KAr_DoWriteData(KAr* self, const char* data, long long size) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar) {
        return vkar->doWriteData(data, static_cast<qint64>(size));
    } else {
        qFatal("Error: Protected virtual method KAr::doWriteData called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAr_SuperDoWriteData(KAr* self, const char* data, long long size) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        return vkar->KAr::doWriteData(data, static_cast<qint64>(size));
    } else
        qFatal("Error: Protected virtual method KAr::doWriteData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAr_OnDoWriteData(KAr* self, intptr_t slot) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self))
        vkar->kar_dowritedata_callback = reinterpret_cast<VirtualKAr::KAr_DoWriteData_Callback>(slot);
}

// Derived class handler implementation
bool KAr_CreateDevice(KAr* self, int mode) {
    auto* vkar = dynamic_cast<VirtualKAr*>(self);
    if (vkar) {
        return vkar->createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else {
        qFatal("Error: Protected virtual method KAr::createDevice called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAr_SuperCreateDevice(KAr* self, int mode) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        return vkar->KAr::createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else
        qFatal("Error: Protected virtual method KAr::createDevice called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAr_OnCreateDevice(KAr* self, intptr_t slot) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self))
        vkar->kar_createdevice_callback = reinterpret_cast<VirtualKAr::KAr_CreateDevice_Callback>(slot);
}

// Derived class protected handler implementation
void KAr_SetErrorString(KAr* self, const libqt_string errorStr) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
        vkar->VirtualKAr::setErrorString(errorStr_QString);
    } else
        qFatal("Error: Protected method KAr::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
KArchiveDirectory* KAr_FindOrCreate(KAr* self, const libqt_string path) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        QString path_QString = QString::fromUtf8(path.data, path.len);
        return vkar->VirtualKAr::findOrCreate(path_QString);
    } else
        qFatal("Error: Protected method KAr::findOrCreate called without a directly constructed type");
}

// Derived class protected handler implementation
void KAr_SetDevice(KAr* self, QIODevice* dev) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        vkar->VirtualKAr::setDevice(dev);
    } else
        qFatal("Error: Protected method KAr::setDevice called without a directly constructed type");
}

// Derived class protected handler implementation
void KAr_SetRootDir(KAr* self, KArchiveDirectory* rootDir) {
    if (auto* vkar = dynamic_cast<VirtualKAr*>(self)) {
        vkar->VirtualKAr::setRootDir(rootDir);
    } else
        qFatal("Error: Protected method KAr::setRootDir called without a directly constructed type");
}

void KAr_Delete(KAr* self) {
    delete self;
}
