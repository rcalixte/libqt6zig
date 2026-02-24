#include <KArchive>
#include <KArchiveEntry>
#include <KArchiveFile>
#include <QByteArray>
#include <QDateTime>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <karchivefile.h>
#include "libkarchivefile.h"
#include "libkarchivefile.hxx"

KArchiveFile* KArchiveFile_new(KArchive* archive, const libqt_string name, int access, const QDateTime* date, const libqt_string user, const libqt_string group, const libqt_string symlink, long long pos, long long size) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    QString symlink_QString = QString::fromUtf8(symlink.data, symlink.len);
    return new VirtualKArchiveFile(archive, name_QString, static_cast<int>(access), *date, user_QString, group_QString, symlink_QString, static_cast<qint64>(pos), static_cast<qint64>(size));
}

KArchiveFile* KArchiveFile_new2(const KArchiveFile* param1) {
    return new VirtualKArchiveFile(*param1);
}

long long KArchiveFile_Position(const KArchiveFile* self) {
    return static_cast<long long>(self->position());
}

long long KArchiveFile_Size(const KArchiveFile* self) {
    return static_cast<long long>(self->size());
}

void KArchiveFile_SetSize(KArchiveFile* self, long long s) {
    self->setSize(static_cast<qint64>(s));
}

libqt_string KArchiveFile_Data(const KArchiveFile* self) {
    auto* vkarchivefile = dynamic_cast<const VirtualKArchiveFile*>(self);
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        QByteArray _qb = self->data();
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else {
        QByteArray _qb = ((VirtualKArchiveFile*)self)->data();
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    }
}

QIODevice* KArchiveFile_CreateDevice(const KArchiveFile* self) {
    auto* vkarchivefile = dynamic_cast<const VirtualKArchiveFile*>(self);
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        return self->createDevice();
    } else {
        return ((VirtualKArchiveFile*)self)->createDevice();
    }
}

bool KArchiveFile_IsFile(const KArchiveFile* self) {
    auto* vkarchivefile = dynamic_cast<const VirtualKArchiveFile*>(self);
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        return self->isFile();
    } else {
        return ((VirtualKArchiveFile*)self)->isFile();
    }
}

bool KArchiveFile_CopyTo(const KArchiveFile* self, const libqt_string dest) {
    QString dest_QString = QString::fromUtf8(dest.data, dest.len);
    return self->copyTo(dest_QString);
}

void KArchiveFile_VirtualHook(KArchiveFile* self, int id, void* data) {
    auto* vkarchivefile = dynamic_cast<VirtualKArchiveFile*>(self);
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        vkarchivefile->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
libqt_string KArchiveFile_SuperData(const KArchiveFile* self) {
    auto* vkarchivefile = const_cast<VirtualKArchiveFile*>(dynamic_cast<const VirtualKArchiveFile*>(self));
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        vkarchivefile->setKArchiveFile_Data_IsBase(true);
        QByteArray _qb = vkarchivefile->data();
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else {
        QByteArray _qb = self->KArchiveFile::data();
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveFile_OnData(const KArchiveFile* self, intptr_t slot) {
    auto* vkarchivefile = const_cast<VirtualKArchiveFile*>(dynamic_cast<const VirtualKArchiveFile*>(self));
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        vkarchivefile->setKArchiveFile_Data_Callback(reinterpret_cast<VirtualKArchiveFile::KArchiveFile_Data_Callback>(slot));
    }
}

// Base class handler implementation
QIODevice* KArchiveFile_SuperCreateDevice(const KArchiveFile* self) {
    auto* vkarchivefile = const_cast<VirtualKArchiveFile*>(dynamic_cast<const VirtualKArchiveFile*>(self));
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        vkarchivefile->setKArchiveFile_CreateDevice_IsBase(true);
        return vkarchivefile->createDevice();
    } else {
        return self->KArchiveFile::createDevice();
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveFile_OnCreateDevice(const KArchiveFile* self, intptr_t slot) {
    auto* vkarchivefile = const_cast<VirtualKArchiveFile*>(dynamic_cast<const VirtualKArchiveFile*>(self));
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        vkarchivefile->setKArchiveFile_CreateDevice_Callback(reinterpret_cast<VirtualKArchiveFile::KArchiveFile_CreateDevice_Callback>(slot));
    }
}

// Base class handler implementation
bool KArchiveFile_SuperIsFile(const KArchiveFile* self) {
    auto* vkarchivefile = const_cast<VirtualKArchiveFile*>(dynamic_cast<const VirtualKArchiveFile*>(self));
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        vkarchivefile->setKArchiveFile_IsFile_IsBase(true);
        return vkarchivefile->isFile();
    } else {
        return self->KArchiveFile::isFile();
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveFile_OnIsFile(const KArchiveFile* self, intptr_t slot) {
    auto* vkarchivefile = const_cast<VirtualKArchiveFile*>(dynamic_cast<const VirtualKArchiveFile*>(self));
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        vkarchivefile->setKArchiveFile_IsFile_Callback(reinterpret_cast<VirtualKArchiveFile::KArchiveFile_IsFile_Callback>(slot));
    }
}

// Base class handler implementation
void KArchiveFile_SuperVirtualHook(KArchiveFile* self, int id, void* data) {
    auto* vkarchivefile = dynamic_cast<VirtualKArchiveFile*>(self);
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        vkarchivefile->setKArchiveFile_VirtualHook_IsBase(true);
        vkarchivefile->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKArchiveFile*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveFile_OnVirtualHook(KArchiveFile* self, intptr_t slot) {
    auto* vkarchivefile = dynamic_cast<VirtualKArchiveFile*>(self);
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        vkarchivefile->setKArchiveFile_VirtualHook_Callback(reinterpret_cast<VirtualKArchiveFile::KArchiveFile_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
bool KArchiveFile_IsDirectory(const KArchiveFile* self) {
    auto* vkarchivefile = const_cast<VirtualKArchiveFile*>(dynamic_cast<const VirtualKArchiveFile*>(self));
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        return vkarchivefile->isDirectory();
    } else {
        return self->KArchiveFile::isDirectory();
    }
}

// Base class handler implementation
bool KArchiveFile_SuperIsDirectory(const KArchiveFile* self) {
    auto* vkarchivefile = const_cast<VirtualKArchiveFile*>(dynamic_cast<const VirtualKArchiveFile*>(self));
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        vkarchivefile->setKArchiveFile_IsDirectory_IsBase(true);
        return vkarchivefile->isDirectory();
    } else {
        return self->KArchiveFile::isDirectory();
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveFile_OnIsDirectory(const KArchiveFile* self, intptr_t slot) {
    auto* vkarchivefile = const_cast<VirtualKArchiveFile*>(dynamic_cast<const VirtualKArchiveFile*>(self));
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        vkarchivefile->setKArchiveFile_IsDirectory_Callback(reinterpret_cast<VirtualKArchiveFile::KArchiveFile_IsDirectory_Callback>(slot));
    }
}

// Derived class handler implementation
KArchive* KArchiveFile_Archive(const KArchiveFile* self) {
    auto* vkarchivefile = const_cast<VirtualKArchiveFile*>(dynamic_cast<const VirtualKArchiveFile*>(self));
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        return vkarchivefile->archive();
    } else {
        return ((VirtualKArchiveFile*)self)->archive();
    }
}

// Base class handler implementation
KArchive* KArchiveFile_SuperArchive(const KArchiveFile* self) {
    auto* vkarchivefile = const_cast<VirtualKArchiveFile*>(dynamic_cast<const VirtualKArchiveFile*>(self));
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        vkarchivefile->setKArchiveFile_Archive_IsBase(true);
        return vkarchivefile->archive();
    } else {
        return ((VirtualKArchiveFile*)self)->archive();
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveFile_OnArchive(const KArchiveFile* self, intptr_t slot) {
    auto* vkarchivefile = const_cast<VirtualKArchiveFile*>(dynamic_cast<const VirtualKArchiveFile*>(self));
    if (vkarchivefile && vkarchivefile->isVirtualKArchiveFile) {
        vkarchivefile->setKArchiveFile_Archive_Callback(reinterpret_cast<VirtualKArchiveFile::KArchiveFile_Archive_Callback>(slot));
    }
}

void KArchiveFile_Delete(KArchiveFile* self) {
    delete self;
}
