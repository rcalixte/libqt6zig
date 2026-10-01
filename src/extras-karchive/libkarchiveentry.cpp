#include <KArchive>
#include <KArchiveEntry>
#include <QDateTime>
#include <QString>
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
    auto _ret = self->name();
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
    auto _ret = self->user();
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
    auto _ret = self->group();
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
    auto _ret = self->symLinkTarget();
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
    return self->isFile();
}

bool KArchiveEntry_IsDirectory(const KArchiveEntry* self) {
    return self->isDirectory();
}

void KArchiveEntry_VirtualHook(KArchiveEntry* self, int id, void* data) {
    auto* vkarchiveentry = dynamic_cast<VirtualKArchiveEntry*>(self);
    if (vkarchiveentry) {
        vkarchiveentry->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
bool KArchiveEntry_SuperIsFile(const KArchiveEntry* self) {
    return self->KArchiveEntry::isFile();
}

// Auxiliary method to allow providing re-implementation
void KArchiveEntry_OnIsFile(KArchiveEntry* self, intptr_t slot) {
    if (auto* vkarchiveentry = const_cast<VirtualKArchiveEntry*>(dynamic_cast<const VirtualKArchiveEntry*>(self)))
        vkarchiveentry->karchiveentry_isfile_callback = reinterpret_cast<VirtualKArchiveEntry::KArchiveEntry_IsFile_Callback>(slot);
}

// Base class handler implementation
bool KArchiveEntry_SuperIsDirectory(const KArchiveEntry* self) {
    return self->KArchiveEntry::isDirectory();
}

// Auxiliary method to allow providing re-implementation
void KArchiveEntry_OnIsDirectory(KArchiveEntry* self, intptr_t slot) {
    if (auto* vkarchiveentry = const_cast<VirtualKArchiveEntry*>(dynamic_cast<const VirtualKArchiveEntry*>(self)))
        vkarchiveentry->karchiveentry_isdirectory_callback = reinterpret_cast<VirtualKArchiveEntry::KArchiveEntry_IsDirectory_Callback>(slot);
}

// Base class handler implementation
void KArchiveEntry_SuperVirtualHook(KArchiveEntry* self, int id, void* data) {
    if (auto* vkarchiveentry = dynamic_cast<VirtualKArchiveEntry*>(self)) {
        vkarchiveentry->KArchiveEntry::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KArchiveEntry::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KArchiveEntry_OnVirtualHook(KArchiveEntry* self, intptr_t slot) {
    if (auto* vkarchiveentry = dynamic_cast<VirtualKArchiveEntry*>(self))
        vkarchiveentry->karchiveentry_virtualhook_callback = reinterpret_cast<VirtualKArchiveEntry::KArchiveEntry_VirtualHook_Callback>(slot);
}

// Derived class protected handler implementation
KArchive* KArchiveEntry_Archive(const KArchiveEntry* self) {
    if (auto* vkarchiveentry = const_cast<VirtualKArchiveEntry*>(dynamic_cast<const VirtualKArchiveEntry*>(self))) {
        return vkarchiveentry->VirtualKArchiveEntry::archive();
    } else
        qFatal("Error: Protected method KArchiveEntry::archive called without a directly constructed type");
}

void KArchiveEntry_Delete(KArchiveEntry* self) {
    delete self;
}
