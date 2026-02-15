#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKZIPFILEENTRY_H
#define SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKZIPFILEENTRY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KZipFileEntry so that we can call protected methods
class VirtualKZipFileEntry final : public KZipFileEntry {

  public:
    // Virtual class boolean flag
    bool isVirtualKZipFileEntry = true;

    // Virtual class public types (including callbacks)
    using KZipFileEntry_Data_Callback = libqt_string (*)();
    using KZipFileEntry_CreateDevice_Callback = QIODevice* (*)();
    using KZipFileEntry_IsFile_Callback = bool (*)();
    using KZipFileEntry_VirtualHook_Callback = void (*)(KZipFileEntry*, int, void*);
    using KZipFileEntry_IsDirectory_Callback = bool (*)();
    using KZipFileEntry_Archive_Callback = KArchive* (*)();

  protected:
    // Instance callback storage
    KZipFileEntry_Data_Callback kzipfileentry_data_callback = nullptr;
    KZipFileEntry_CreateDevice_Callback kzipfileentry_createdevice_callback = nullptr;
    KZipFileEntry_IsFile_Callback kzipfileentry_isfile_callback = nullptr;
    KZipFileEntry_VirtualHook_Callback kzipfileentry_virtualhook_callback = nullptr;
    KZipFileEntry_IsDirectory_Callback kzipfileentry_isdirectory_callback = nullptr;
    KZipFileEntry_Archive_Callback kzipfileentry_archive_callback = nullptr;

    // Instance base flags
    mutable bool kzipfileentry_data_isbase = false;
    mutable bool kzipfileentry_createdevice_isbase = false;
    mutable bool kzipfileentry_isfile_isbase = false;
    mutable bool kzipfileentry_virtualhook_isbase = false;
    mutable bool kzipfileentry_isdirectory_isbase = false;
    mutable bool kzipfileentry_archive_isbase = false;

  public:
    VirtualKZipFileEntry(KZip* zip, const QString& name, int access, const QDateTime& date, const QString& user, const QString& group, const QString& symlink, const QString& path, qint64 start, qint64 uncompressedSize, int encoding, qint64 compressedSize) : KZipFileEntry(zip, name, access, date, user, group, symlink, path, start, uncompressedSize, encoding, compressedSize) {};
    VirtualKZipFileEntry(const KZipFileEntry& param1) : KZipFileEntry(param1) {};

    ~VirtualKZipFileEntry() {
        kzipfileentry_data_callback = nullptr;
        kzipfileentry_createdevice_callback = nullptr;
        kzipfileentry_isfile_callback = nullptr;
        kzipfileentry_virtualhook_callback = nullptr;
        kzipfileentry_isdirectory_callback = nullptr;
        kzipfileentry_archive_callback = nullptr;
    }

    // Callback setters
    inline void setKZipFileEntry_Data_Callback(KZipFileEntry_Data_Callback cb) { kzipfileentry_data_callback = cb; }
    inline void setKZipFileEntry_CreateDevice_Callback(KZipFileEntry_CreateDevice_Callback cb) { kzipfileentry_createdevice_callback = cb; }
    inline void setKZipFileEntry_IsFile_Callback(KZipFileEntry_IsFile_Callback cb) { kzipfileentry_isfile_callback = cb; }
    inline void setKZipFileEntry_VirtualHook_Callback(KZipFileEntry_VirtualHook_Callback cb) { kzipfileentry_virtualhook_callback = cb; }
    inline void setKZipFileEntry_IsDirectory_Callback(KZipFileEntry_IsDirectory_Callback cb) { kzipfileentry_isdirectory_callback = cb; }
    inline void setKZipFileEntry_Archive_Callback(KZipFileEntry_Archive_Callback cb) { kzipfileentry_archive_callback = cb; }

    // Base flag setters
    inline void setKZipFileEntry_Data_IsBase(bool value) const { kzipfileentry_data_isbase = value; }
    inline void setKZipFileEntry_CreateDevice_IsBase(bool value) const { kzipfileentry_createdevice_isbase = value; }
    inline void setKZipFileEntry_IsFile_IsBase(bool value) const { kzipfileentry_isfile_isbase = value; }
    inline void setKZipFileEntry_VirtualHook_IsBase(bool value) const { kzipfileentry_virtualhook_isbase = value; }
    inline void setKZipFileEntry_IsDirectory_IsBase(bool value) const { kzipfileentry_isdirectory_isbase = value; }
    inline void setKZipFileEntry_Archive_IsBase(bool value) const { kzipfileentry_archive_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QByteArray data() const override {
        if (kzipfileentry_data_isbase) {
            kzipfileentry_data_isbase = false;
            return KZipFileEntry::data();
        } else if (kzipfileentry_data_callback != nullptr) {
            libqt_string callback_ret = kzipfileentry_data_callback();
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return KZipFileEntry::data();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIODevice* createDevice() const override {
        if (kzipfileentry_createdevice_isbase) {
            kzipfileentry_createdevice_isbase = false;
            return KZipFileEntry::createDevice();
        } else if (kzipfileentry_createdevice_callback != nullptr) {
            QIODevice* callback_ret = kzipfileentry_createdevice_callback();
            return callback_ret;
        } else {
            return KZipFileEntry::createDevice();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isFile() const override {
        if (kzipfileentry_isfile_isbase) {
            kzipfileentry_isfile_isbase = false;
            return KZipFileEntry::isFile();
        } else if (kzipfileentry_isfile_callback != nullptr) {
            bool callback_ret = kzipfileentry_isfile_callback();
            return callback_ret;
        } else {
            return KZipFileEntry::isFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kzipfileentry_virtualhook_isbase) {
            kzipfileentry_virtualhook_isbase = false;
            KZipFileEntry::virtual_hook(id, data);
        } else if (kzipfileentry_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kzipfileentry_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KZipFileEntry::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isDirectory() const override {
        if (kzipfileentry_isdirectory_isbase) {
            kzipfileentry_isdirectory_isbase = false;
            return KZipFileEntry::isDirectory();
        } else if (kzipfileentry_isdirectory_callback != nullptr) {
            bool callback_ret = kzipfileentry_isdirectory_callback();
            return callback_ret;
        } else {
            return KZipFileEntry::isDirectory();
        }
    }

    // Virtual method for C ABI access and custom callback
    KArchive* archive() const {
        if (kzipfileentry_archive_isbase) {
            kzipfileentry_archive_isbase = false;
            return KZipFileEntry::archive();
        } else if (kzipfileentry_archive_callback != nullptr) {
            KArchive* callback_ret = kzipfileentry_archive_callback();
            return callback_ret;
        } else {
            return KZipFileEntry::archive();
        }
    }

    // Friend functions
    friend void KZipFileEntry_VirtualHook(KZipFileEntry* self, int id, void* data);
    friend void KZipFileEntry_QBaseVirtualHook(KZipFileEntry* self, int id, void* data);
    friend KArchive* KZipFileEntry_Archive(const KZipFileEntry* self);
    friend KArchive* KZipFileEntry_QBaseArchive(const KZipFileEntry* self);
};

#endif
