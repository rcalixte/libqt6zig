#include <K7Zip>
#include <KArchive>
#include <KArchiveDirectory>
#include <QDateTime>
#include <QIODevice>
#include <QString>
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

libqt_string K7Zip_Tr(const char* sourceText) {
    auto _ret = K7Zip::tr(sourceText);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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
    if (vk7zip) {
        return vk7zip->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method K7Zip::doWriteSymLink called without a directly constructed type");
}

bool K7Zip_DoWriteDir(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip) {
        return vk7zip->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method K7Zip::doWriteDir called without a directly constructed type");
}

bool K7Zip_DoPrepareWriting(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip) {
        return vk7zip->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method K7Zip::doPrepareWriting called without a directly constructed type");
}

bool K7Zip_DoFinishWriting(K7Zip* self, long long size) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip) {
        return vk7zip->doFinishWriting(static_cast<qint64>(size));
    }
    qFatal("Error: Protected method K7Zip::doFinishWriting called without a directly constructed type");
}

bool K7Zip_DoWriteData(K7Zip* self, const char* data, long long size) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip) {
        return vk7zip->doWriteData(data, static_cast<qint64>(size));
    }
    qFatal("Error: Protected method K7Zip::doWriteData called without a directly constructed type");
}

bool K7Zip_OpenArchive(K7Zip* self, int mode) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip) {
        return vk7zip->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
    qFatal("Error: Protected method K7Zip::openArchive called without a directly constructed type");
}

bool K7Zip_CloseArchive(K7Zip* self) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip) {
        return vk7zip->closeArchive();
    }
    qFatal("Error: Protected method K7Zip::closeArchive called without a directly constructed type");
}

void K7Zip_VirtualHook(K7Zip* self, int id, void* data) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip) {
        vk7zip->virtual_hook(static_cast<int>(id), data);
    }
}

libqt_string K7Zip_Tr2(const char* sourceText, const char* disambiguation) {
    auto _ret = K7Zip::tr(sourceText, disambiguation);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string K7Zip_Tr3(const char* sourceText, const char* disambiguation, int n) {
    auto _ret = K7Zip::tr(sourceText, disambiguation, static_cast<int>(n));
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
bool K7Zip_SuperDoWriteSymLink(K7Zip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        return vk7zip->K7Zip::doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method K7Zip::doWriteSymLink called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnDoWriteSymLink(K7Zip* self, intptr_t slot) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self))
        vk7zip->k7zip_dowritesymlink_callback = reinterpret_cast<VirtualK7Zip::K7Zip_DoWriteSymLink_Callback>(slot);
}

// Base class handler implementation
bool K7Zip_SuperDoWriteDir(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        return vk7zip->K7Zip::doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method K7Zip::doWriteDir called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnDoWriteDir(K7Zip* self, intptr_t slot) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self))
        vk7zip->k7zip_dowritedir_callback = reinterpret_cast<VirtualK7Zip::K7Zip_DoWriteDir_Callback>(slot);
}

// Base class handler implementation
bool K7Zip_SuperDoPrepareWriting(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        return vk7zip->K7Zip::doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method K7Zip::doPrepareWriting called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnDoPrepareWriting(K7Zip* self, intptr_t slot) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self))
        vk7zip->k7zip_dopreparewriting_callback = reinterpret_cast<VirtualK7Zip::K7Zip_DoPrepareWriting_Callback>(slot);
}

// Base class handler implementation
bool K7Zip_SuperDoFinishWriting(K7Zip* self, long long size) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        return vk7zip->K7Zip::doFinishWriting(static_cast<qint64>(size));
    } else
        qFatal("Error: Protected virtual method K7Zip::doFinishWriting called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnDoFinishWriting(K7Zip* self, intptr_t slot) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self))
        vk7zip->k7zip_dofinishwriting_callback = reinterpret_cast<VirtualK7Zip::K7Zip_DoFinishWriting_Callback>(slot);
}

// Base class handler implementation
bool K7Zip_SuperDoWriteData(K7Zip* self, const char* data, long long size) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        return vk7zip->K7Zip::doWriteData(data, static_cast<qint64>(size));
    } else
        qFatal("Error: Protected virtual method K7Zip::doWriteData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnDoWriteData(K7Zip* self, intptr_t slot) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self))
        vk7zip->k7zip_dowritedata_callback = reinterpret_cast<VirtualK7Zip::K7Zip_DoWriteData_Callback>(slot);
}

// Base class handler implementation
bool K7Zip_SuperOpenArchive(K7Zip* self, int mode) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        return vk7zip->K7Zip::openArchive(static_cast<QIODevice::OpenMode>(mode));
    } else
        qFatal("Error: Protected virtual method K7Zip::openArchive called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnOpenArchive(K7Zip* self, intptr_t slot) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self))
        vk7zip->k7zip_openarchive_callback = reinterpret_cast<VirtualK7Zip::K7Zip_OpenArchive_Callback>(slot);
}

// Base class handler implementation
bool K7Zip_SuperCloseArchive(K7Zip* self) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        return vk7zip->K7Zip::closeArchive();
    } else
        qFatal("Error: Protected virtual method K7Zip::closeArchive called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnCloseArchive(K7Zip* self, intptr_t slot) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self))
        vk7zip->k7zip_closearchive_callback = reinterpret_cast<VirtualK7Zip::K7Zip_CloseArchive_Callback>(slot);
}

// Base class handler implementation
void K7Zip_SuperVirtualHook(K7Zip* self, int id, void* data) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        vk7zip->K7Zip::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method K7Zip::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnVirtualHook(K7Zip* self, intptr_t slot) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self))
        vk7zip->k7zip_virtualhook_callback = reinterpret_cast<VirtualK7Zip::K7Zip_VirtualHook_Callback>(slot);
}

// Derived class handler implementation
bool K7Zip_Open(K7Zip* self, int mode) {
    return self->open(static_cast<QIODevice::OpenMode>(mode));
}

// Base class handler implementation
bool K7Zip_SuperOpen(K7Zip* self, int mode) {
    return self->K7Zip::open(static_cast<QIODevice::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnOpen(K7Zip* self, intptr_t slot) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self))
        vk7zip->k7zip_open_callback = reinterpret_cast<VirtualK7Zip::K7Zip_Open_Callback>(slot);
}

// Derived class handler implementation
bool K7Zip_Close(K7Zip* self) {
    return self->close();
}

// Base class handler implementation
bool K7Zip_SuperClose(K7Zip* self) {
    return self->K7Zip::close();
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnClose(K7Zip* self, intptr_t slot) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self))
        vk7zip->k7zip_close_callback = reinterpret_cast<VirtualK7Zip::K7Zip_Close_Callback>(slot);
}

// Derived class handler implementation
KArchiveDirectory* K7Zip_RootDir(K7Zip* self) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip) {
        return vk7zip->rootDir();
    } else {
        qFatal("Error: Protected virtual method K7Zip::rootDir called without a directly constructed type");
    }
}

// Base class handler implementation
KArchiveDirectory* K7Zip_SuperRootDir(K7Zip* self) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        return vk7zip->K7Zip::rootDir();
    } else
        qFatal("Error: Protected virtual method K7Zip::rootDir called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnRootDir(K7Zip* self, intptr_t slot) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self))
        vk7zip->k7zip_rootdir_callback = reinterpret_cast<VirtualK7Zip::K7Zip_RootDir_Callback>(slot);
}

// Derived class handler implementation
bool K7Zip_CreateDevice(K7Zip* self, int mode) {
    auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self);
    if (vk7zip) {
        return vk7zip->createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else {
        qFatal("Error: Protected virtual method K7Zip::createDevice called without a directly constructed type");
    }
}

// Base class handler implementation
bool K7Zip_SuperCreateDevice(K7Zip* self, int mode) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        return vk7zip->K7Zip::createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else
        qFatal("Error: Protected virtual method K7Zip::createDevice called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void K7Zip_OnCreateDevice(K7Zip* self, intptr_t slot) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self))
        vk7zip->k7zip_createdevice_callback = reinterpret_cast<VirtualK7Zip::K7Zip_CreateDevice_Callback>(slot);
}

// Derived class protected handler implementation
void K7Zip_SetErrorString(K7Zip* self, const libqt_string errorStr) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
        vk7zip->VirtualK7Zip::setErrorString(errorStr_QString);
    } else
        qFatal("Error: Protected method K7Zip::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
KArchiveDirectory* K7Zip_FindOrCreate(K7Zip* self, const libqt_string path) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        QString path_QString = QString::fromUtf8(path.data, path.len);
        return vk7zip->VirtualK7Zip::findOrCreate(path_QString);
    } else
        qFatal("Error: Protected method K7Zip::findOrCreate called without a directly constructed type");
}

// Derived class protected handler implementation
void K7Zip_SetDevice(K7Zip* self, QIODevice* dev) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        vk7zip->VirtualK7Zip::setDevice(dev);
    } else
        qFatal("Error: Protected method K7Zip::setDevice called without a directly constructed type");
}

// Derived class protected handler implementation
void K7Zip_SetRootDir(K7Zip* self, KArchiveDirectory* rootDir) {
    if (auto* vk7zip = dynamic_cast<VirtualK7Zip*>(self)) {
        vk7zip->VirtualK7Zip::setRootDir(rootDir);
    } else
        qFatal("Error: Protected method K7Zip::setRootDir called without a directly constructed type");
}

void K7Zip_Delete(K7Zip* self) {
    delete self;
}
