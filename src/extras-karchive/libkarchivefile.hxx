#pragma once
#ifndef EXTRAS_KARCHIVE_LIBKARCHIVEFILE_HXX
#define EXTRAS_KARCHIVE_LIBKARCHIVEFILE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KArchiveFile
class VirtualKArchiveFile final : public KArchiveFile {
  public:
    // Virtual class public types (including callbacks and access types)
    using KArchiveFile_Data_Callback = libqt_string (*)(const KArchiveFile*);
    using KArchiveFile_CreateDevice_Callback = QIODevice* (*)(const KArchiveFile*);
    using KArchiveFile_IsFile_Callback = bool (*)(const KArchiveFile*);
    using KArchiveFile_VirtualHook_Callback = void (*)(KArchiveFile*, int, void*);
    using KArchiveFile_IsDirectory_Callback = bool (*)(const KArchiveFile*);
    using KArchiveFile::archive;

    // Instance callback storage
    KArchiveFile_Data_Callback karchivefile_data_callback = nullptr;
    KArchiveFile_CreateDevice_Callback karchivefile_createdevice_callback = nullptr;
    KArchiveFile_IsFile_Callback karchivefile_isfile_callback = nullptr;
    KArchiveFile_VirtualHook_Callback karchivefile_virtualhook_callback = nullptr;
    KArchiveFile_IsDirectory_Callback karchivefile_isdirectory_callback = nullptr;

    // Access struct
    struct Base : KArchiveFile {
        using KArchiveFile::virtual_hook;
    };

    VirtualKArchiveFile(KArchive* archive, const QString& name, int access, const QDateTime& date, const QString& user, const QString& group, const QString& symlink, qint64 pos, qint64 size) : KArchiveFile(archive, name, access, date, user, group, symlink, pos, size) {};
    VirtualKArchiveFile(const KArchiveFile& param1) : KArchiveFile(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual QByteArray data() const override {
        if (karchivefile_data_callback) {
            libqt_string callback_ret = karchivefile_data_callback(this);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        }
        return KArchiveFile::data();
    }

    // Virtual method for C ABI access and custom callback
    virtual QIODevice* createDevice() const override {
        if (karchivefile_createdevice_callback) {
            QIODevice* callback_ret = karchivefile_createdevice_callback(this);
            return callback_ret;
        }
        return KArchiveFile::createDevice();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isFile() const override {
        if (karchivefile_isfile_callback) {
            bool callback_ret = karchivefile_isfile_callback(this);
            return callback_ret;
        }
        return KArchiveFile::isFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (karchivefile_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            karchivefile_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KArchiveFile::virtual_hook(id, data);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isDirectory() const override {
        if (karchivefile_isdirectory_callback) {
            bool callback_ret = karchivefile_isdirectory_callback(this);
            return callback_ret;
        }
        return KArchiveFile::isDirectory();
    }

    // Friend functions
    friend void KArchiveFile_SuperVirtualHook(KArchiveFile* self, int id, void* data);
};

#endif
