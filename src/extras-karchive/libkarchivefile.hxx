#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKARCHIVEFILE_H
#define SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKARCHIVEFILE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KArchiveFile so that we can call protected methods
class VirtualKArchiveFile final : public KArchiveFile {

  public:
    // Virtual class boolean flag
    bool isVirtualKArchiveFile = true;

    // Virtual class public types (including callbacks)
    using KArchiveFile_Data_Callback = libqt_string (*)();
    using KArchiveFile_CreateDevice_Callback = QIODevice* (*)();
    using KArchiveFile_IsFile_Callback = bool (*)();
    using KArchiveFile_VirtualHook_Callback = void (*)(KArchiveFile*, int, void*);
    using KArchiveFile_IsDirectory_Callback = bool (*)();
    using KArchiveFile_Archive_Callback = KArchive* (*)();

  protected:
    // Instance callback storage
    KArchiveFile_Data_Callback karchivefile_data_callback = nullptr;
    KArchiveFile_CreateDevice_Callback karchivefile_createdevice_callback = nullptr;
    KArchiveFile_IsFile_Callback karchivefile_isfile_callback = nullptr;
    KArchiveFile_VirtualHook_Callback karchivefile_virtualhook_callback = nullptr;
    KArchiveFile_IsDirectory_Callback karchivefile_isdirectory_callback = nullptr;
    KArchiveFile_Archive_Callback karchivefile_archive_callback = nullptr;

    // Instance base flags
    mutable bool karchivefile_data_isbase = false;
    mutable bool karchivefile_createdevice_isbase = false;
    mutable bool karchivefile_isfile_isbase = false;
    mutable bool karchivefile_virtualhook_isbase = false;
    mutable bool karchivefile_isdirectory_isbase = false;
    mutable bool karchivefile_archive_isbase = false;

  public:
    VirtualKArchiveFile(KArchive* archive, const QString& name, int access, const QDateTime& date, const QString& user, const QString& group, const QString& symlink, qint64 pos, qint64 size) : KArchiveFile(archive, name, access, date, user, group, symlink, pos, size) {};
    VirtualKArchiveFile(const KArchiveFile& param1) : KArchiveFile(param1) {};

    ~VirtualKArchiveFile() {
        karchivefile_data_callback = nullptr;
        karchivefile_createdevice_callback = nullptr;
        karchivefile_isfile_callback = nullptr;
        karchivefile_virtualhook_callback = nullptr;
        karchivefile_isdirectory_callback = nullptr;
        karchivefile_archive_callback = nullptr;
    }

    // Callback setters
    inline void setKArchiveFile_Data_Callback(KArchiveFile_Data_Callback cb) { karchivefile_data_callback = cb; }
    inline void setKArchiveFile_CreateDevice_Callback(KArchiveFile_CreateDevice_Callback cb) { karchivefile_createdevice_callback = cb; }
    inline void setKArchiveFile_IsFile_Callback(KArchiveFile_IsFile_Callback cb) { karchivefile_isfile_callback = cb; }
    inline void setKArchiveFile_VirtualHook_Callback(KArchiveFile_VirtualHook_Callback cb) { karchivefile_virtualhook_callback = cb; }
    inline void setKArchiveFile_IsDirectory_Callback(KArchiveFile_IsDirectory_Callback cb) { karchivefile_isdirectory_callback = cb; }
    inline void setKArchiveFile_Archive_Callback(KArchiveFile_Archive_Callback cb) { karchivefile_archive_callback = cb; }

    // Base flag setters
    inline void setKArchiveFile_Data_IsBase(bool value) const { karchivefile_data_isbase = value; }
    inline void setKArchiveFile_CreateDevice_IsBase(bool value) const { karchivefile_createdevice_isbase = value; }
    inline void setKArchiveFile_IsFile_IsBase(bool value) const { karchivefile_isfile_isbase = value; }
    inline void setKArchiveFile_VirtualHook_IsBase(bool value) const { karchivefile_virtualhook_isbase = value; }
    inline void setKArchiveFile_IsDirectory_IsBase(bool value) const { karchivefile_isdirectory_isbase = value; }
    inline void setKArchiveFile_Archive_IsBase(bool value) const { karchivefile_archive_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QByteArray data() const override {
        if (karchivefile_data_isbase) {
            karchivefile_data_isbase = false;
            return KArchiveFile::data();
        } else if (karchivefile_data_callback != nullptr) {
            libqt_string callback_ret = karchivefile_data_callback();
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return KArchiveFile::data();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIODevice* createDevice() const override {
        if (karchivefile_createdevice_isbase) {
            karchivefile_createdevice_isbase = false;
            return KArchiveFile::createDevice();
        } else if (karchivefile_createdevice_callback != nullptr) {
            QIODevice* callback_ret = karchivefile_createdevice_callback();
            return callback_ret;
        } else {
            return KArchiveFile::createDevice();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isFile() const override {
        if (karchivefile_isfile_isbase) {
            karchivefile_isfile_isbase = false;
            return KArchiveFile::isFile();
        } else if (karchivefile_isfile_callback != nullptr) {
            bool callback_ret = karchivefile_isfile_callback();
            return callback_ret;
        } else {
            return KArchiveFile::isFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (karchivefile_virtualhook_isbase) {
            karchivefile_virtualhook_isbase = false;
            KArchiveFile::virtual_hook(id, data);
        } else if (karchivefile_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            karchivefile_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KArchiveFile::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isDirectory() const override {
        if (karchivefile_isdirectory_isbase) {
            karchivefile_isdirectory_isbase = false;
            return KArchiveFile::isDirectory();
        } else if (karchivefile_isdirectory_callback != nullptr) {
            bool callback_ret = karchivefile_isdirectory_callback();
            return callback_ret;
        } else {
            return KArchiveFile::isDirectory();
        }
    }

    // Virtual method for C ABI access and custom callback
    KArchive* archive() const {
        if (karchivefile_archive_isbase) {
            karchivefile_archive_isbase = false;
            return KArchiveFile::archive();
        } else if (karchivefile_archive_callback != nullptr) {
            KArchive* callback_ret = karchivefile_archive_callback();
            return callback_ret;
        } else {
            return KArchiveFile::archive();
        }
    }

    // Friend functions
    friend void KArchiveFile_VirtualHook(KArchiveFile* self, int id, void* data);
    friend void KArchiveFile_QBaseVirtualHook(KArchiveFile* self, int id, void* data);
    friend KArchive* KArchiveFile_Archive(const KArchiveFile* self);
    friend KArchive* KArchiveFile_QBaseArchive(const KArchiveFile* self);
};

#endif
