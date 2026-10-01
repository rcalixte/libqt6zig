#include <KArchive>
#include <KArchiveDirectory>
#include <KTar>
#include <QByteArray>
#include <QDateTime>
#include <QIODevice>
#include <QString>
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

libqt_string KTar_Tr(const char* sourceText) {
    auto _ret = KTar::tr(sourceText);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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
    if (vktar) {
        return vktar->doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method KTar::doWriteSymLink called without a directly constructed type");
}

bool KTar_DoWriteDir(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar) {
        return vktar->doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method KTar::doWriteDir called without a directly constructed type");
}

bool KTar_DoPrepareWriting(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar) {
        return vktar->doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    }
    qFatal("Error: Protected method KTar::doPrepareWriting called without a directly constructed type");
}

bool KTar_DoFinishWriting(KTar* self, long long size) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar) {
        return vktar->doFinishWriting(static_cast<qint64>(size));
    }
    qFatal("Error: Protected method KTar::doFinishWriting called without a directly constructed type");
}

bool KTar_OpenArchive(KTar* self, int mode) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar) {
        return vktar->openArchive(static_cast<QIODevice::OpenMode>(mode));
    }
    qFatal("Error: Protected method KTar::openArchive called without a directly constructed type");
}

bool KTar_CloseArchive(KTar* self) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar) {
        return vktar->closeArchive();
    }
    qFatal("Error: Protected method KTar::closeArchive called without a directly constructed type");
}

bool KTar_CreateDevice(KTar* self, int mode) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar) {
        return vktar->createDevice(static_cast<QIODevice::OpenMode>(mode));
    }
    qFatal("Error: Protected method KTar::createDevice called without a directly constructed type");
}

void KTar_VirtualHook(KTar* self, int id, void* data) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar) {
        vktar->virtual_hook(static_cast<int>(id), data);
    }
}

libqt_string KTar_Tr2(const char* sourceText, const char* disambiguation) {
    auto _ret = KTar::tr(sourceText, disambiguation);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTar_Tr3(const char* sourceText, const char* disambiguation, int n) {
    auto _ret = KTar::tr(sourceText, disambiguation, static_cast<int>(n));
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
bool KTar_SuperDoWriteSymLink(KTar* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        return vktar->KTar::doWriteSymLink(name_QString, target_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method KTar::doWriteSymLink called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTar_OnDoWriteSymLink(KTar* self, intptr_t slot) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self))
        vktar->ktar_dowritesymlink_callback = reinterpret_cast<VirtualKTar::KTar_DoWriteSymLink_Callback>(slot);
}

// Base class handler implementation
bool KTar_SuperDoWriteDir(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        return vktar->KTar::doWriteDir(name_QString, user_QString, group_QString, perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method KTar::doWriteDir called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTar_OnDoWriteDir(KTar* self, intptr_t slot) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self))
        vktar->ktar_dowritedir_callback = reinterpret_cast<VirtualKTar::KTar_DoWriteDir_Callback>(slot);
}

// Base class handler implementation
bool KTar_SuperDoPrepareWriting(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        return vktar->KTar::doPrepareWriting(name_QString, user_QString, group_QString, static_cast<qint64>(size), perm, *atime, *mtime, *ctime);
    } else
        qFatal("Error: Protected virtual method KTar::doPrepareWriting called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTar_OnDoPrepareWriting(KTar* self, intptr_t slot) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self))
        vktar->ktar_dopreparewriting_callback = reinterpret_cast<VirtualKTar::KTar_DoPrepareWriting_Callback>(slot);
}

// Base class handler implementation
bool KTar_SuperDoFinishWriting(KTar* self, long long size) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        return vktar->KTar::doFinishWriting(static_cast<qint64>(size));
    } else
        qFatal("Error: Protected virtual method KTar::doFinishWriting called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTar_OnDoFinishWriting(KTar* self, intptr_t slot) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self))
        vktar->ktar_dofinishwriting_callback = reinterpret_cast<VirtualKTar::KTar_DoFinishWriting_Callback>(slot);
}

// Base class handler implementation
bool KTar_SuperOpenArchive(KTar* self, int mode) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        return vktar->KTar::openArchive(static_cast<QIODevice::OpenMode>(mode));
    } else
        qFatal("Error: Protected virtual method KTar::openArchive called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTar_OnOpenArchive(KTar* self, intptr_t slot) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self))
        vktar->ktar_openarchive_callback = reinterpret_cast<VirtualKTar::KTar_OpenArchive_Callback>(slot);
}

// Base class handler implementation
bool KTar_SuperCloseArchive(KTar* self) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        return vktar->KTar::closeArchive();
    } else
        qFatal("Error: Protected virtual method KTar::closeArchive called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTar_OnCloseArchive(KTar* self, intptr_t slot) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self))
        vktar->ktar_closearchive_callback = reinterpret_cast<VirtualKTar::KTar_CloseArchive_Callback>(slot);
}

// Base class handler implementation
bool KTar_SuperCreateDevice(KTar* self, int mode) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        return vktar->KTar::createDevice(static_cast<QIODevice::OpenMode>(mode));
    } else
        qFatal("Error: Protected virtual method KTar::createDevice called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTar_OnCreateDevice(KTar* self, intptr_t slot) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self))
        vktar->ktar_createdevice_callback = reinterpret_cast<VirtualKTar::KTar_CreateDevice_Callback>(slot);
}

// Base class handler implementation
void KTar_SuperVirtualHook(KTar* self, int id, void* data) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        vktar->KTar::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KTar::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTar_OnVirtualHook(KTar* self, intptr_t slot) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self))
        vktar->ktar_virtualhook_callback = reinterpret_cast<VirtualKTar::KTar_VirtualHook_Callback>(slot);
}

// Derived class handler implementation
bool KTar_Open(KTar* self, int mode) {
    return self->open(static_cast<QIODevice::OpenMode>(mode));
}

// Base class handler implementation
bool KTar_SuperOpen(KTar* self, int mode) {
    return self->KTar::open(static_cast<QIODevice::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KTar_OnOpen(KTar* self, intptr_t slot) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self))
        vktar->ktar_open_callback = reinterpret_cast<VirtualKTar::KTar_Open_Callback>(slot);
}

// Derived class handler implementation
bool KTar_Close(KTar* self) {
    return self->close();
}

// Base class handler implementation
bool KTar_SuperClose(KTar* self) {
    return self->KTar::close();
}

// Auxiliary method to allow providing re-implementation
void KTar_OnClose(KTar* self, intptr_t slot) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self))
        vktar->ktar_close_callback = reinterpret_cast<VirtualKTar::KTar_Close_Callback>(slot);
}

// Derived class handler implementation
KArchiveDirectory* KTar_RootDir(KTar* self) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar) {
        return vktar->rootDir();
    } else {
        qFatal("Error: Protected virtual method KTar::rootDir called without a directly constructed type");
    }
}

// Base class handler implementation
KArchiveDirectory* KTar_SuperRootDir(KTar* self) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        return vktar->KTar::rootDir();
    } else
        qFatal("Error: Protected virtual method KTar::rootDir called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTar_OnRootDir(KTar* self, intptr_t slot) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self))
        vktar->ktar_rootdir_callback = reinterpret_cast<VirtualKTar::KTar_RootDir_Callback>(slot);
}

// Derived class handler implementation
bool KTar_DoWriteData(KTar* self, const char* data, long long size) {
    auto* vktar = dynamic_cast<VirtualKTar*>(self);
    if (vktar) {
        return vktar->doWriteData(data, static_cast<qint64>(size));
    } else {
        qFatal("Error: Protected virtual method KTar::doWriteData called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTar_SuperDoWriteData(KTar* self, const char* data, long long size) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        return vktar->KTar::doWriteData(data, static_cast<qint64>(size));
    } else
        qFatal("Error: Protected virtual method KTar::doWriteData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTar_OnDoWriteData(KTar* self, intptr_t slot) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self))
        vktar->ktar_dowritedata_callback = reinterpret_cast<VirtualKTar::KTar_DoWriteData_Callback>(slot);
}

// Derived class protected handler implementation
void KTar_SetErrorString(KTar* self, const libqt_string errorStr) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        QString errorStr_QString = QString::fromUtf8(errorStr.data, errorStr.len);
        vktar->VirtualKTar::setErrorString(errorStr_QString);
    } else
        qFatal("Error: Protected method KTar::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
KArchiveDirectory* KTar_FindOrCreate(KTar* self, const libqt_string path) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        QString path_QString = QString::fromUtf8(path.data, path.len);
        return vktar->VirtualKTar::findOrCreate(path_QString);
    } else
        qFatal("Error: Protected method KTar::findOrCreate called without a directly constructed type");
}

// Derived class protected handler implementation
void KTar_SetDevice(KTar* self, QIODevice* dev) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        vktar->VirtualKTar::setDevice(dev);
    } else
        qFatal("Error: Protected method KTar::setDevice called without a directly constructed type");
}

// Derived class protected handler implementation
void KTar_SetRootDir(KTar* self, KArchiveDirectory* rootDir) {
    if (auto* vktar = dynamic_cast<VirtualKTar*>(self)) {
        vktar->VirtualKTar::setRootDir(rootDir);
    } else
        qFatal("Error: Protected method KTar::setRootDir called without a directly constructed type");
}

void KTar_Delete(KTar* self) {
    delete self;
}
