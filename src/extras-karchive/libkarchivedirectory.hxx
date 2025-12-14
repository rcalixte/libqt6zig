#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKARCHIVEDIRECTORY_H
#define SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKARCHIVEDIRECTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KArchiveDirectory so that we can call protected methods
class VirtualKArchiveDirectory final : public KArchiveDirectory {

  public:
    // Virtual class boolean flag
    bool isVirtualKArchiveDirectory = true;

    // Virtual class public types (including callbacks)
    using KArchiveDirectory_IsDirectory_Callback = bool (*)();
    using KArchiveDirectory_VirtualHook_Callback = void (*)(KArchiveDirectory*, int, void*);
    using KArchiveDirectory_IsFile_Callback = bool (*)();
    using KArchiveDirectory_Archive_Callback = KArchive* (*)();

  protected:
    // Instance callback storage
    KArchiveDirectory_IsDirectory_Callback karchivedirectory_isdirectory_callback = nullptr;
    KArchiveDirectory_VirtualHook_Callback karchivedirectory_virtualhook_callback = nullptr;
    KArchiveDirectory_IsFile_Callback karchivedirectory_isfile_callback = nullptr;
    KArchiveDirectory_Archive_Callback karchivedirectory_archive_callback = nullptr;

    // Instance base flags
    mutable bool karchivedirectory_isdirectory_isbase = false;
    mutable bool karchivedirectory_virtualhook_isbase = false;
    mutable bool karchivedirectory_isfile_isbase = false;
    mutable bool karchivedirectory_archive_isbase = false;

  public:
    VirtualKArchiveDirectory(KArchive* archive, const QString& name, int access, const QDateTime& date, const QString& user, const QString& group, const QString& symlink) : KArchiveDirectory(archive, name, access, date, user, group, symlink) {};
    VirtualKArchiveDirectory(const KArchiveDirectory& param1) : KArchiveDirectory(param1) {};

    ~VirtualKArchiveDirectory() {
        karchivedirectory_isdirectory_callback = nullptr;
        karchivedirectory_virtualhook_callback = nullptr;
        karchivedirectory_isfile_callback = nullptr;
        karchivedirectory_archive_callback = nullptr;
    }

    // Callback setters
    inline void setKArchiveDirectory_IsDirectory_Callback(KArchiveDirectory_IsDirectory_Callback cb) { karchivedirectory_isdirectory_callback = cb; }
    inline void setKArchiveDirectory_VirtualHook_Callback(KArchiveDirectory_VirtualHook_Callback cb) { karchivedirectory_virtualhook_callback = cb; }
    inline void setKArchiveDirectory_IsFile_Callback(KArchiveDirectory_IsFile_Callback cb) { karchivedirectory_isfile_callback = cb; }
    inline void setKArchiveDirectory_Archive_Callback(KArchiveDirectory_Archive_Callback cb) { karchivedirectory_archive_callback = cb; }

    // Base flag setters
    inline void setKArchiveDirectory_IsDirectory_IsBase(bool value) const { karchivedirectory_isdirectory_isbase = value; }
    inline void setKArchiveDirectory_VirtualHook_IsBase(bool value) const { karchivedirectory_virtualhook_isbase = value; }
    inline void setKArchiveDirectory_IsFile_IsBase(bool value) const { karchivedirectory_isfile_isbase = value; }
    inline void setKArchiveDirectory_Archive_IsBase(bool value) const { karchivedirectory_archive_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isDirectory() const override {
        if (karchivedirectory_isdirectory_isbase) {
            karchivedirectory_isdirectory_isbase = false;
            return KArchiveDirectory::isDirectory();
        } else if (karchivedirectory_isdirectory_callback != nullptr) {
            bool callback_ret = karchivedirectory_isdirectory_callback();
            return callback_ret;
        } else {
            return KArchiveDirectory::isDirectory();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (karchivedirectory_virtualhook_isbase) {
            karchivedirectory_virtualhook_isbase = false;
            KArchiveDirectory::virtual_hook(id, data);
        } else if (karchivedirectory_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            karchivedirectory_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KArchiveDirectory::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isFile() const override {
        if (karchivedirectory_isfile_isbase) {
            karchivedirectory_isfile_isbase = false;
            return KArchiveDirectory::isFile();
        } else if (karchivedirectory_isfile_callback != nullptr) {
            bool callback_ret = karchivedirectory_isfile_callback();
            return callback_ret;
        } else {
            return KArchiveDirectory::isFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    KArchive* archive() const {
        if (karchivedirectory_archive_isbase) {
            karchivedirectory_archive_isbase = false;
            return KArchiveDirectory::archive();
        } else if (karchivedirectory_archive_callback != nullptr) {
            KArchive* callback_ret = karchivedirectory_archive_callback();
            return callback_ret;
        } else {
            return KArchiveDirectory::archive();
        }
    }

    // Friend functions
    friend void KArchiveDirectory_VirtualHook(KArchiveDirectory* self, int id, void* data);
    friend void KArchiveDirectory_QBaseVirtualHook(KArchiveDirectory* self, int id, void* data);
    friend KArchive* KArchiveDirectory_Archive(const KArchiveDirectory* self);
    friend KArchive* KArchiveDirectory_QBaseArchive(const KArchiveDirectory* self);
};

#endif
