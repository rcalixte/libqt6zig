#pragma once
#ifndef EXTRAS_KARCHIVE_LIBKARCHIVEDIRECTORY_HXX
#define EXTRAS_KARCHIVE_LIBKARCHIVEDIRECTORY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KArchiveDirectory
class VirtualKArchiveDirectory final : public KArchiveDirectory {
  public:
    // Virtual class public types (including callbacks and access types)
    using KArchiveDirectory_IsDirectory_Callback = bool (*)(const KArchiveDirectory*);
    using KArchiveDirectory_VirtualHook_Callback = void (*)(KArchiveDirectory*, int, void*);
    using KArchiveDirectory_IsFile_Callback = bool (*)(const KArchiveDirectory*);
    using KArchiveDirectory::archive;

    // Instance callback storage
    KArchiveDirectory_IsDirectory_Callback karchivedirectory_isdirectory_callback = nullptr;
    KArchiveDirectory_VirtualHook_Callback karchivedirectory_virtualhook_callback = nullptr;
    KArchiveDirectory_IsFile_Callback karchivedirectory_isfile_callback = nullptr;

    // Access struct
    struct Base : KArchiveDirectory {
        using KArchiveDirectory::virtual_hook;
    };

    VirtualKArchiveDirectory(KArchive* archive, const QString& name, int access, const QDateTime& date, const QString& user, const QString& group, const QString& symlink) : KArchiveDirectory(archive, name, access, date, user, group, symlink) {};
    VirtualKArchiveDirectory(const KArchiveDirectory& param1) : KArchiveDirectory(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual bool isDirectory() const override {
        if (karchivedirectory_isdirectory_callback) {
            bool callback_ret = karchivedirectory_isdirectory_callback(this);
            return callback_ret;
        }
        return KArchiveDirectory::isDirectory();
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (karchivedirectory_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            karchivedirectory_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KArchiveDirectory::virtual_hook(id, data);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isFile() const override {
        if (karchivedirectory_isfile_callback) {
            bool callback_ret = karchivedirectory_isfile_callback(this);
            return callback_ret;
        }
        return KArchiveDirectory::isFile();
    }

    // Friend functions
    friend void KArchiveDirectory_SuperVirtualHook(KArchiveDirectory* self, int id, void* data);
};

#endif
