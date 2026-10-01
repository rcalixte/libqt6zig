#pragma once
#ifndef EXTRAS_KARCHIVE_LIBKZIPFILEENTRY_HXX
#define EXTRAS_KARCHIVE_LIBKZIPFILEENTRY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KZipFileEntry
class VirtualKZipFileEntry final : public KZipFileEntry {
  public:
    // Virtual class public types (including callbacks and access types)
    using KZipFileEntry_Data_Callback = libqt_string (*)(const KZipFileEntry*);
    using KZipFileEntry_CreateDevice_Callback = QIODevice* (*)(const KZipFileEntry*);
    using KZipFileEntry_IsFile_Callback = bool (*)(const KZipFileEntry*);
    using KZipFileEntry_VirtualHook_Callback = void (*)(KZipFileEntry*, int, void*);
    using KZipFileEntry_IsDirectory_Callback = bool (*)(const KZipFileEntry*);
    using KZipFileEntry::archive;

    // Instance callback storage
    KZipFileEntry_Data_Callback kzipfileentry_data_callback = nullptr;
    KZipFileEntry_CreateDevice_Callback kzipfileentry_createdevice_callback = nullptr;
    KZipFileEntry_IsFile_Callback kzipfileentry_isfile_callback = nullptr;
    KZipFileEntry_VirtualHook_Callback kzipfileentry_virtualhook_callback = nullptr;
    KZipFileEntry_IsDirectory_Callback kzipfileentry_isdirectory_callback = nullptr;

    // Access struct
    struct Base : KZipFileEntry {
        using KZipFileEntry::virtual_hook;
    };

    VirtualKZipFileEntry(KZip* zip, const QString& name, int access, const QDateTime& date, const QString& user, const QString& group, const QString& symlink, const QString& path, qint64 start, qint64 uncompressedSize, int encoding, qint64 compressedSize) : KZipFileEntry(zip, name, access, date, user, group, symlink, path, start, uncompressedSize, encoding, compressedSize) {};
    VirtualKZipFileEntry(const KZipFileEntry& param1) : KZipFileEntry(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual QByteArray data() const override {
        if (kzipfileentry_data_callback) {
            libqt_string callback_ret = kzipfileentry_data_callback(this);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        }
        return KZipFileEntry::data();
    }

    // Virtual method for C ABI access and custom callback
    virtual QIODevice* createDevice() const override {
        if (kzipfileentry_createdevice_callback) {
            QIODevice* callback_ret = kzipfileentry_createdevice_callback(this);
            return callback_ret;
        }
        return KZipFileEntry::createDevice();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isFile() const override {
        if (kzipfileentry_isfile_callback) {
            bool callback_ret = kzipfileentry_isfile_callback(this);
            return callback_ret;
        }
        return KZipFileEntry::isFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kzipfileentry_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kzipfileentry_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KZipFileEntry::virtual_hook(id, data);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isDirectory() const override {
        if (kzipfileentry_isdirectory_callback) {
            bool callback_ret = kzipfileentry_isdirectory_callback(this);
            return callback_ret;
        }
        return KZipFileEntry::isDirectory();
    }

    // Friend functions
    friend void KZipFileEntry_SuperVirtualHook(KZipFileEntry* self, int id, void* data);
};

#endif
