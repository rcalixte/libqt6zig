#include <KArchive>
#include <KArchiveDirectory>
#include <KArchiveEntry>
#include <KArchiveFile>
#include <QDateTime>
#include <QList>
#include <QString>
#include <karchivedirectory.h>
#include "libkarchivedirectory.h"
#include "libkarchivedirectory.hxx"

KArchiveDirectory* KArchiveDirectory_new(KArchive* archive, const libqt_string name, int access, const QDateTime* date, const libqt_string user, const libqt_string group, const libqt_string symlink) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    QString symlink_QString = QString::fromUtf8(symlink.data, symlink.len);
    return new VirtualKArchiveDirectory(archive, name_QString, static_cast<int>(access), *date, user_QString, group_QString, symlink_QString);
}

KArchiveDirectory* KArchiveDirectory_new2(const KArchiveDirectory* param1) {
    return new VirtualKArchiveDirectory(*param1);
}

libqt_list /* of libqt_string */ KArchiveDirectory_Entries(const KArchiveDirectory* self) {
    QList<QString> _ret = self->entries();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KArchiveEntry* KArchiveDirectory_Entry(const KArchiveDirectory* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return (KArchiveEntry*)self->entry(name_QString);
}

KArchiveFile* KArchiveDirectory_File(const KArchiveDirectory* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return (KArchiveFile*)self->file(name_QString);
}

void KArchiveDirectory_AddEntry(KArchiveDirectory* self, KArchiveEntry* param1) {
    self->addEntry(param1);
}

bool KArchiveDirectory_AddEntryV2(KArchiveDirectory* self, KArchiveEntry* param1) {
    return self->addEntryV2(param1);
}

void KArchiveDirectory_RemoveEntry(KArchiveDirectory* self, KArchiveEntry* param1) {
    self->removeEntry(param1);
}

bool KArchiveDirectory_RemoveEntryV2(KArchiveDirectory* self, KArchiveEntry* param1) {
    return self->removeEntryV2(param1);
}

bool KArchiveDirectory_IsDirectory(const KArchiveDirectory* self) {
    return self->isDirectory();
}

bool KArchiveDirectory_CopyTo(const KArchiveDirectory* self, const libqt_string dest) {
    QString dest_QString = QString::fromUtf8(dest.data, dest.len);
    return self->copyTo(dest_QString);
}

void KArchiveDirectory_VirtualHook(KArchiveDirectory* self, int id, void* data) {
    auto* vkarchivedirectory = dynamic_cast<VirtualKArchiveDirectory*>(self);
    if (vkarchivedirectory) {
        vkarchivedirectory->virtual_hook(static_cast<int>(id), data);
    }
}

bool KArchiveDirectory_CopyTo2(const KArchiveDirectory* self, const libqt_string dest, bool recursive) {
    QString dest_QString = QString::fromUtf8(dest.data, dest.len);
    return self->copyTo(dest_QString, recursive);
}

// Base class handler implementation
bool KArchiveDirectory_SuperIsDirectory(const KArchiveDirectory* self) {
    return self->KArchiveDirectory::isDirectory();
}

// Auxiliary method to allow providing re-implementation
void KArchiveDirectory_OnIsDirectory(KArchiveDirectory* self, intptr_t slot) {
    if (auto* vkarchivedirectory = const_cast<VirtualKArchiveDirectory*>(dynamic_cast<const VirtualKArchiveDirectory*>(self)))
        vkarchivedirectory->karchivedirectory_isdirectory_callback = reinterpret_cast<VirtualKArchiveDirectory::KArchiveDirectory_IsDirectory_Callback>(slot);
}

// Base class handler implementation
void KArchiveDirectory_SuperVirtualHook(KArchiveDirectory* self, int id, void* data) {
    if (auto* vkarchivedirectory = dynamic_cast<VirtualKArchiveDirectory*>(self)) {
        vkarchivedirectory->KArchiveDirectory::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KArchiveDirectory::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KArchiveDirectory_OnVirtualHook(KArchiveDirectory* self, intptr_t slot) {
    if (auto* vkarchivedirectory = dynamic_cast<VirtualKArchiveDirectory*>(self))
        vkarchivedirectory->karchivedirectory_virtualhook_callback = reinterpret_cast<VirtualKArchiveDirectory::KArchiveDirectory_VirtualHook_Callback>(slot);
}

// Derived class handler implementation
bool KArchiveDirectory_IsFile(const KArchiveDirectory* self) {
    return self->isFile();
}

// Base class handler implementation
bool KArchiveDirectory_SuperIsFile(const KArchiveDirectory* self) {
    return self->KArchiveDirectory::isFile();
}

// Auxiliary method to allow providing re-implementation
void KArchiveDirectory_OnIsFile(KArchiveDirectory* self, intptr_t slot) {
    if (auto* vkarchivedirectory = const_cast<VirtualKArchiveDirectory*>(dynamic_cast<const VirtualKArchiveDirectory*>(self)))
        vkarchivedirectory->karchivedirectory_isfile_callback = reinterpret_cast<VirtualKArchiveDirectory::KArchiveDirectory_IsFile_Callback>(slot);
}

// Derived class protected handler implementation
KArchive* KArchiveDirectory_Archive(const KArchiveDirectory* self) {
    if (auto* vkarchivedirectory = const_cast<VirtualKArchiveDirectory*>(dynamic_cast<const VirtualKArchiveDirectory*>(self))) {
        return vkarchivedirectory->VirtualKArchiveDirectory::archive();
    } else
        qFatal("Error: Protected method KArchiveDirectory::archive called without a directly constructed type");
}

void KArchiveDirectory_Delete(KArchiveDirectory* self) {
    delete self;
}
