#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKARCHIVEENTRY_H
#define SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKARCHIVEENTRY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KArchiveEntry so that we can call protected methods
class VirtualKArchiveEntry final : public KArchiveEntry {

  public:
    // Virtual class boolean flag
    bool isVirtualKArchiveEntry = true;

    // Virtual class public types (including callbacks)
    using KArchiveEntry_IsFile_Callback = bool (*)();
    using KArchiveEntry_IsDirectory_Callback = bool (*)();
    using KArchiveEntry_VirtualHook_Callback = void (*)(KArchiveEntry*, int, void*);
    using KArchiveEntry_Archive_Callback = KArchive* (*)();

  protected:
    // Instance callback storage
    KArchiveEntry_IsFile_Callback karchiveentry_isfile_callback = nullptr;
    KArchiveEntry_IsDirectory_Callback karchiveentry_isdirectory_callback = nullptr;
    KArchiveEntry_VirtualHook_Callback karchiveentry_virtualhook_callback = nullptr;
    KArchiveEntry_Archive_Callback karchiveentry_archive_callback = nullptr;

    // Instance base flags
    mutable bool karchiveentry_isfile_isbase = false;
    mutable bool karchiveentry_isdirectory_isbase = false;
    mutable bool karchiveentry_virtualhook_isbase = false;
    mutable bool karchiveentry_archive_isbase = false;

  public:
    VirtualKArchiveEntry(KArchive* archive, const QString& name, int access, const QDateTime& date, const QString& user, const QString& group, const QString& symlink) : KArchiveEntry(archive, name, access, date, user, group, symlink) {};

    ~VirtualKArchiveEntry() {
        karchiveentry_isfile_callback = nullptr;
        karchiveentry_isdirectory_callback = nullptr;
        karchiveentry_virtualhook_callback = nullptr;
        karchiveentry_archive_callback = nullptr;
    }

    // Callback setters
    inline void setKArchiveEntry_IsFile_Callback(KArchiveEntry_IsFile_Callback cb) { karchiveentry_isfile_callback = cb; }
    inline void setKArchiveEntry_IsDirectory_Callback(KArchiveEntry_IsDirectory_Callback cb) { karchiveentry_isdirectory_callback = cb; }
    inline void setKArchiveEntry_VirtualHook_Callback(KArchiveEntry_VirtualHook_Callback cb) { karchiveentry_virtualhook_callback = cb; }
    inline void setKArchiveEntry_Archive_Callback(KArchiveEntry_Archive_Callback cb) { karchiveentry_archive_callback = cb; }

    // Base flag setters
    inline void setKArchiveEntry_IsFile_IsBase(bool value) const { karchiveentry_isfile_isbase = value; }
    inline void setKArchiveEntry_IsDirectory_IsBase(bool value) const { karchiveentry_isdirectory_isbase = value; }
    inline void setKArchiveEntry_VirtualHook_IsBase(bool value) const { karchiveentry_virtualhook_isbase = value; }
    inline void setKArchiveEntry_Archive_IsBase(bool value) const { karchiveentry_archive_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isFile() const override {
        if (karchiveentry_isfile_isbase) {
            karchiveentry_isfile_isbase = false;
            return KArchiveEntry::isFile();
        } else if (karchiveentry_isfile_callback != nullptr) {
            bool callback_ret = karchiveentry_isfile_callback();
            return callback_ret;
        } else {
            return KArchiveEntry::isFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isDirectory() const override {
        if (karchiveentry_isdirectory_isbase) {
            karchiveentry_isdirectory_isbase = false;
            return KArchiveEntry::isDirectory();
        } else if (karchiveentry_isdirectory_callback != nullptr) {
            bool callback_ret = karchiveentry_isdirectory_callback();
            return callback_ret;
        } else {
            return KArchiveEntry::isDirectory();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (karchiveentry_virtualhook_isbase) {
            karchiveentry_virtualhook_isbase = false;
            KArchiveEntry::virtual_hook(id, data);
        } else if (karchiveentry_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            karchiveentry_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KArchiveEntry::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    KArchive* archive() const {
        if (karchiveentry_archive_isbase) {
            karchiveentry_archive_isbase = false;
            return KArchiveEntry::archive();
        } else if (karchiveentry_archive_callback != nullptr) {
            KArchive* callback_ret = karchiveentry_archive_callback();
            return callback_ret;
        } else {
            return KArchiveEntry::archive();
        }
    }

    // Friend functions
    friend void KArchiveEntry_VirtualHook(KArchiveEntry* self, int id, void* data);
    friend void KArchiveEntry_SuperVirtualHook(KArchiveEntry* self, int id, void* data);
    friend KArchive* KArchiveEntry_Archive(const KArchiveEntry* self);
    friend KArchive* KArchiveEntry_SuperArchive(const KArchiveEntry* self);
};

#endif
