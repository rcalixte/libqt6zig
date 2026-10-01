#pragma once
#ifndef EXTRAS_KARCHIVE_LIBKARCHIVEENTRY_HXX
#define EXTRAS_KARCHIVE_LIBKARCHIVEENTRY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KArchiveEntry
class VirtualKArchiveEntry final : public KArchiveEntry {
  public:
    // Virtual class public types (including callbacks and access types)
    using KArchiveEntry_IsFile_Callback = bool (*)(const KArchiveEntry*);
    using KArchiveEntry_IsDirectory_Callback = bool (*)(const KArchiveEntry*);
    using KArchiveEntry_VirtualHook_Callback = void (*)(KArchiveEntry*, int, void*);
    using KArchiveEntry::archive;

    // Instance callback storage
    KArchiveEntry_IsFile_Callback karchiveentry_isfile_callback = nullptr;
    KArchiveEntry_IsDirectory_Callback karchiveentry_isdirectory_callback = nullptr;
    KArchiveEntry_VirtualHook_Callback karchiveentry_virtualhook_callback = nullptr;

    // Access struct
    struct Base : KArchiveEntry {
        using KArchiveEntry::virtual_hook;
    };

    VirtualKArchiveEntry(KArchive* archive, const QString& name, int access, const QDateTime& date, const QString& user, const QString& group, const QString& symlink) : KArchiveEntry(archive, name, access, date, user, group, symlink) {};

    // Virtual method for C ABI access and custom callback
    virtual bool isFile() const override {
        if (karchiveentry_isfile_callback) {
            bool callback_ret = karchiveentry_isfile_callback(this);
            return callback_ret;
        }
        return KArchiveEntry::isFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isDirectory() const override {
        if (karchiveentry_isdirectory_callback) {
            bool callback_ret = karchiveentry_isdirectory_callback(this);
            return callback_ret;
        }
        return KArchiveEntry::isDirectory();
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (karchiveentry_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            karchiveentry_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KArchiveEntry::virtual_hook(id, data);
    }

    // Friend functions
    friend void KArchiveEntry_SuperVirtualHook(KArchiveEntry* self, int id, void* data);
};

#endif
