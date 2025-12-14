#include <KArchive>
#include <KArchiveEntry>
#include <QDateTime>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <karchiveentry.h>
#include "libkarchiveentry.h"
#include "libkarchiveentry.hxx"

KArchiveEntry* KArchiveEntry_new(KArchive* archive, const libqt_string name, int access, const QDateTime* date, const libqt_string user, const libqt_string group, const libqt_string symlink) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    QString symlink_QString = QString::fromUtf8(symlink.data, symlink.len);
    return new VirtualKArchiveEntry(archive, name_QString, static_cast<int>(access), *date, user_QString, group_QString, symlink_QString);
}

QDateTime* KArchiveEntry_Date(const KArchiveEntry* self) {
    return new QDateTime(self->date());
}

libqt_string KArchiveEntry_Name(const KArchiveEntry* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

mode_t KArchiveEntry_Permissions(const KArchiveEntry* self) {
    return self->permissions();
}

libqt_string KArchiveEntry_User(const KArchiveEntry* self) {
    QString _ret = self->user();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KArchiveEntry_Group(const KArchiveEntry* self) {
    QString _ret = self->group();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KArchiveEntry_SymLinkTarget(const KArchiveEntry* self) {
    QString _ret = self->symLinkTarget();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KArchiveEntry_IsFile(const KArchiveEntry* self) {
    auto* vkarchiveentry = dynamic_cast<const VirtualKArchiveEntry*>(self);
    if (vkarchiveentry && vkarchiveentry->isVirtualKArchiveEntry) {
        return self->isFile();
    } else {
        return ((VirtualKArchiveEntry*)self)->isFile();
    }
}

bool KArchiveEntry_IsDirectory(const KArchiveEntry* self) {
    auto* vkarchiveentry = dynamic_cast<const VirtualKArchiveEntry*>(self);
    if (vkarchiveentry && vkarchiveentry->isVirtualKArchiveEntry) {
        return self->isDirectory();
    } else {
        return ((VirtualKArchiveEntry*)self)->isDirectory();
    }
}

void KArchiveEntry_VirtualHook(KArchiveEntry* self, int id, void* data) {
    auto* vkarchiveentry = dynamic_cast<VirtualKArchiveEntry*>(self);
    if (vkarchiveentry && vkarchiveentry->isVirtualKArchiveEntry) {
        vkarchiveentry->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
bool KArchiveEntry_QBaseIsFile(const KArchiveEntry* self) {
    auto* vkarchiveentry = const_cast<VirtualKArchiveEntry*>(dynamic_cast<const VirtualKArchiveEntry*>(self));
    if (vkarchiveentry && vkarchiveentry->isVirtualKArchiveEntry) {
        vkarchiveentry->setKArchiveEntry_IsFile_IsBase(true);
        return vkarchiveentry->isFile();
    } else {
        return self->KArchiveEntry::isFile();
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveEntry_OnIsFile(const KArchiveEntry* self, intptr_t slot) {
    auto* vkarchiveentry = const_cast<VirtualKArchiveEntry*>(dynamic_cast<const VirtualKArchiveEntry*>(self));
    if (vkarchiveentry && vkarchiveentry->isVirtualKArchiveEntry) {
        vkarchiveentry->setKArchiveEntry_IsFile_Callback(reinterpret_cast<VirtualKArchiveEntry::KArchiveEntry_IsFile_Callback>(slot));
    }
}

// Base class handler implementation
bool KArchiveEntry_QBaseIsDirectory(const KArchiveEntry* self) {
    auto* vkarchiveentry = const_cast<VirtualKArchiveEntry*>(dynamic_cast<const VirtualKArchiveEntry*>(self));
    if (vkarchiveentry && vkarchiveentry->isVirtualKArchiveEntry) {
        vkarchiveentry->setKArchiveEntry_IsDirectory_IsBase(true);
        return vkarchiveentry->isDirectory();
    } else {
        return self->KArchiveEntry::isDirectory();
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveEntry_OnIsDirectory(const KArchiveEntry* self, intptr_t slot) {
    auto* vkarchiveentry = const_cast<VirtualKArchiveEntry*>(dynamic_cast<const VirtualKArchiveEntry*>(self));
    if (vkarchiveentry && vkarchiveentry->isVirtualKArchiveEntry) {
        vkarchiveentry->setKArchiveEntry_IsDirectory_Callback(reinterpret_cast<VirtualKArchiveEntry::KArchiveEntry_IsDirectory_Callback>(slot));
    }
}

// Base class handler implementation
void KArchiveEntry_QBaseVirtualHook(KArchiveEntry* self, int id, void* data) {
    auto* vkarchiveentry = dynamic_cast<VirtualKArchiveEntry*>(self);
    if (vkarchiveentry && vkarchiveentry->isVirtualKArchiveEntry) {
        vkarchiveentry->setKArchiveEntry_VirtualHook_IsBase(true);
        vkarchiveentry->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKArchiveEntry*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveEntry_OnVirtualHook(KArchiveEntry* self, intptr_t slot) {
    auto* vkarchiveentry = dynamic_cast<VirtualKArchiveEntry*>(self);
    if (vkarchiveentry && vkarchiveentry->isVirtualKArchiveEntry) {
        vkarchiveentry->setKArchiveEntry_VirtualHook_Callback(reinterpret_cast<VirtualKArchiveEntry::KArchiveEntry_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
KArchive* KArchiveEntry_Archive(const KArchiveEntry* self) {
    auto* vkarchiveentry = const_cast<VirtualKArchiveEntry*>(dynamic_cast<const VirtualKArchiveEntry*>(self));
    if (vkarchiveentry && vkarchiveentry->isVirtualKArchiveEntry) {
        return vkarchiveentry->archive();
    } else {
        return ((VirtualKArchiveEntry*)self)->archive();
    }
}

// Base class handler implementation
KArchive* KArchiveEntry_QBaseArchive(const KArchiveEntry* self) {
    auto* vkarchiveentry = const_cast<VirtualKArchiveEntry*>(dynamic_cast<const VirtualKArchiveEntry*>(self));
    if (vkarchiveentry && vkarchiveentry->isVirtualKArchiveEntry) {
        vkarchiveentry->setKArchiveEntry_Archive_IsBase(true);
        return vkarchiveentry->archive();
    } else {
        return ((VirtualKArchiveEntry*)self)->archive();
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveEntry_OnArchive(const KArchiveEntry* self, intptr_t slot) {
    auto* vkarchiveentry = const_cast<VirtualKArchiveEntry*>(dynamic_cast<const VirtualKArchiveEntry*>(self));
    if (vkarchiveentry && vkarchiveentry->isVirtualKArchiveEntry) {
        vkarchiveentry->setKArchiveEntry_Archive_Callback(reinterpret_cast<VirtualKArchiveEntry::KArchiveEntry_Archive_Callback>(slot));
    }
}

void KArchiveEntry_Delete(KArchiveEntry* self) {
    delete self;
}
