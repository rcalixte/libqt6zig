#include <KArchive>
#include <KArchiveDirectory>
#include <KArchiveEntry>
#include <KArchiveFile>
#include <QDateTime>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
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
        QString _lv_ret = _ret[i];
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
    auto* vkarchivedirectory = dynamic_cast<const VirtualKArchiveDirectory*>(self);
    if (vkarchivedirectory && vkarchivedirectory->isVirtualKArchiveDirectory) {
        return self->isDirectory();
    } else {
        return ((VirtualKArchiveDirectory*)self)->isDirectory();
    }
}

bool KArchiveDirectory_CopyTo(const KArchiveDirectory* self, const libqt_string dest) {
    QString dest_QString = QString::fromUtf8(dest.data, dest.len);
    return self->copyTo(dest_QString);
}

void KArchiveDirectory_VirtualHook(KArchiveDirectory* self, int id, void* data) {
    auto* vkarchivedirectory = dynamic_cast<VirtualKArchiveDirectory*>(self);
    if (vkarchivedirectory && vkarchivedirectory->isVirtualKArchiveDirectory) {
        vkarchivedirectory->virtual_hook(static_cast<int>(id), data);
    }
}

bool KArchiveDirectory_CopyTo2(const KArchiveDirectory* self, const libqt_string dest, bool recursive) {
    QString dest_QString = QString::fromUtf8(dest.data, dest.len);
    return self->copyTo(dest_QString, recursive);
}

// Base class handler implementation
bool KArchiveDirectory_SuperIsDirectory(const KArchiveDirectory* self) {
    auto* vkarchivedirectory = const_cast<VirtualKArchiveDirectory*>(dynamic_cast<const VirtualKArchiveDirectory*>(self));
    if (vkarchivedirectory && vkarchivedirectory->isVirtualKArchiveDirectory) {
        vkarchivedirectory->setKArchiveDirectory_IsDirectory_IsBase(true);
        return vkarchivedirectory->isDirectory();
    } else {
        return self->KArchiveDirectory::isDirectory();
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveDirectory_OnIsDirectory(const KArchiveDirectory* self, intptr_t slot) {
    auto* vkarchivedirectory = const_cast<VirtualKArchiveDirectory*>(dynamic_cast<const VirtualKArchiveDirectory*>(self));
    if (vkarchivedirectory && vkarchivedirectory->isVirtualKArchiveDirectory) {
        vkarchivedirectory->setKArchiveDirectory_IsDirectory_Callback(reinterpret_cast<VirtualKArchiveDirectory::KArchiveDirectory_IsDirectory_Callback>(slot));
    }
}

// Base class handler implementation
void KArchiveDirectory_SuperVirtualHook(KArchiveDirectory* self, int id, void* data) {
    auto* vkarchivedirectory = dynamic_cast<VirtualKArchiveDirectory*>(self);
    if (vkarchivedirectory && vkarchivedirectory->isVirtualKArchiveDirectory) {
        vkarchivedirectory->setKArchiveDirectory_VirtualHook_IsBase(true);
        vkarchivedirectory->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKArchiveDirectory*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveDirectory_OnVirtualHook(KArchiveDirectory* self, intptr_t slot) {
    auto* vkarchivedirectory = dynamic_cast<VirtualKArchiveDirectory*>(self);
    if (vkarchivedirectory && vkarchivedirectory->isVirtualKArchiveDirectory) {
        vkarchivedirectory->setKArchiveDirectory_VirtualHook_Callback(reinterpret_cast<VirtualKArchiveDirectory::KArchiveDirectory_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
bool KArchiveDirectory_IsFile(const KArchiveDirectory* self) {
    auto* vkarchivedirectory = const_cast<VirtualKArchiveDirectory*>(dynamic_cast<const VirtualKArchiveDirectory*>(self));
    if (vkarchivedirectory && vkarchivedirectory->isVirtualKArchiveDirectory) {
        return vkarchivedirectory->isFile();
    } else {
        return self->KArchiveDirectory::isFile();
    }
}

// Base class handler implementation
bool KArchiveDirectory_SuperIsFile(const KArchiveDirectory* self) {
    auto* vkarchivedirectory = const_cast<VirtualKArchiveDirectory*>(dynamic_cast<const VirtualKArchiveDirectory*>(self));
    if (vkarchivedirectory && vkarchivedirectory->isVirtualKArchiveDirectory) {
        vkarchivedirectory->setKArchiveDirectory_IsFile_IsBase(true);
        return vkarchivedirectory->isFile();
    } else {
        return self->KArchiveDirectory::isFile();
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveDirectory_OnIsFile(const KArchiveDirectory* self, intptr_t slot) {
    auto* vkarchivedirectory = const_cast<VirtualKArchiveDirectory*>(dynamic_cast<const VirtualKArchiveDirectory*>(self));
    if (vkarchivedirectory && vkarchivedirectory->isVirtualKArchiveDirectory) {
        vkarchivedirectory->setKArchiveDirectory_IsFile_Callback(reinterpret_cast<VirtualKArchiveDirectory::KArchiveDirectory_IsFile_Callback>(slot));
    }
}

// Derived class handler implementation
KArchive* KArchiveDirectory_Archive(const KArchiveDirectory* self) {
    auto* vkarchivedirectory = const_cast<VirtualKArchiveDirectory*>(dynamic_cast<const VirtualKArchiveDirectory*>(self));
    if (vkarchivedirectory && vkarchivedirectory->isVirtualKArchiveDirectory) {
        return vkarchivedirectory->archive();
    } else {
        return ((VirtualKArchiveDirectory*)self)->archive();
    }
}

// Base class handler implementation
KArchive* KArchiveDirectory_SuperArchive(const KArchiveDirectory* self) {
    auto* vkarchivedirectory = const_cast<VirtualKArchiveDirectory*>(dynamic_cast<const VirtualKArchiveDirectory*>(self));
    if (vkarchivedirectory && vkarchivedirectory->isVirtualKArchiveDirectory) {
        vkarchivedirectory->setKArchiveDirectory_Archive_IsBase(true);
        return vkarchivedirectory->archive();
    } else {
        return ((VirtualKArchiveDirectory*)self)->archive();
    }
}

// Auxiliary method to allow providing re-implementation
void KArchiveDirectory_OnArchive(const KArchiveDirectory* self, intptr_t slot) {
    auto* vkarchivedirectory = const_cast<VirtualKArchiveDirectory*>(dynamic_cast<const VirtualKArchiveDirectory*>(self));
    if (vkarchivedirectory && vkarchivedirectory->isVirtualKArchiveDirectory) {
        vkarchivedirectory->setKArchiveDirectory_Archive_Callback(reinterpret_cast<VirtualKArchiveDirectory::KArchiveDirectory_Archive_Callback>(slot));
    }
}

void KArchiveDirectory_Delete(KArchiveDirectory* self) {
    delete self;
}
