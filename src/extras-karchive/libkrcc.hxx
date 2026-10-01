#pragma once
#ifndef EXTRAS_KARCHIVE_LIBKRCC_HXX
#define EXTRAS_KARCHIVE_LIBKRCC_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRcc
class VirtualKRcc final : public KRcc {
  public:
    // Virtual class public types (including callbacks and access types)
    using KRcc_DoPrepareWriting_Callback = bool (*)(KRcc*, const char*, const char*, const char*, long long, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KRcc_DoFinishWriting_Callback = bool (*)(KRcc*, long long);
    using KRcc_DoWriteDir_Callback = bool (*)(KRcc*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KRcc_DoWriteSymLink_Callback = bool (*)(KRcc*, const char*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KRcc_OpenArchive_Callback = bool (*)(KRcc*, int);
    using KRcc_CloseArchive_Callback = bool (*)(KRcc*);
    using KRcc_VirtualHook_Callback = void (*)(KRcc*, int, void*);
    using KRcc_Open_Callback = bool (*)(KRcc*, int);
    using KRcc_Close_Callback = bool (*)(KRcc*);
    using KRcc_RootDir_Callback = KArchiveDirectory* (*)(KRcc*);
    using KRcc_DoWriteData_Callback = bool (*)(KRcc*, const char*, long long);
    using KRcc_CreateDevice_Callback = bool (*)(KRcc*, int);
    using KRcc::findOrCreate;
    using KRcc::setDevice;
    using KRcc::setErrorString;
    using KRcc::setRootDir;

    // Instance callback storage
    KRcc_DoPrepareWriting_Callback krcc_dopreparewriting_callback = nullptr;
    KRcc_DoFinishWriting_Callback krcc_dofinishwriting_callback = nullptr;
    KRcc_DoWriteDir_Callback krcc_dowritedir_callback = nullptr;
    KRcc_DoWriteSymLink_Callback krcc_dowritesymlink_callback = nullptr;
    KRcc_OpenArchive_Callback krcc_openarchive_callback = nullptr;
    KRcc_CloseArchive_Callback krcc_closearchive_callback = nullptr;
    KRcc_VirtualHook_Callback krcc_virtualhook_callback = nullptr;
    KRcc_Open_Callback krcc_open_callback = nullptr;
    KRcc_Close_Callback krcc_close_callback = nullptr;
    KRcc_RootDir_Callback krcc_rootdir_callback = nullptr;
    KRcc_DoWriteData_Callback krcc_dowritedata_callback = nullptr;
    KRcc_CreateDevice_Callback krcc_createdevice_callback = nullptr;

    // Access struct
    struct Base : KRcc {
        using KRcc::closeArchive;
        using KRcc::createDevice;
        using KRcc::doFinishWriting;
        using KRcc::doPrepareWriting;
        using KRcc::doWriteData;
        using KRcc::doWriteDir;
        using KRcc::doWriteSymLink;
        using KRcc::openArchive;
        using KRcc::rootDir;
        using KRcc::virtual_hook;
    };

    VirtualKRcc(const QString& filename) : KRcc(filename) {};
    VirtualKRcc(const KRcc& param1) : KRcc(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual bool doPrepareWriting(const QString& name, const QString& user, const QString& group, qint64 size, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (krcc_dopreparewriting_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const auto user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            auto user_str_len = user_b.length();
            const char* user_str = static_cast<const char*>(malloc(user_str_len + 1));
            memcpy((void*)user_str, user_b.data(), user_str_len);
            ((char*)user_str)[user_str_len] = '\0';
            const char* cbval2 = user_str;
            const auto group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            auto group_str_len = group_b.length();
            const char* group_str = static_cast<const char*>(malloc(group_str_len + 1));
            memcpy((void*)group_str, group_b.data(), group_str_len);
            ((char*)group_str)[group_str_len] = '\0';
            const char* cbval3 = group_str;
            long long cbval4 = static_cast<long long>(size);
            mode_t cbval5 = perm;
            const QDateTime& atime_ret = atime;
            // Cast returned reference into pointer
            QDateTime* cbval6 = const_cast<QDateTime*>(&atime_ret);
            const QDateTime& mtime_ret = mtime;
            // Cast returned reference into pointer
            QDateTime* cbval7 = const_cast<QDateTime*>(&mtime_ret);
            const QDateTime& ctime_ret = ctime;
            // Cast returned reference into pointer
            QDateTime* cbval8 = const_cast<QDateTime*>(&ctime_ret);
            bool callback_ret = krcc_dopreparewriting_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        }
        return KRcc::doPrepareWriting(name, user, group, size, perm, atime, mtime, ctime);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doFinishWriting(qint64 size) override {
        if (krcc_dofinishwriting_callback) {
            long long cbval1 = static_cast<long long>(size);
            bool callback_ret = krcc_dofinishwriting_callback(this, cbval1);
            return callback_ret;
        }
        return KRcc::doFinishWriting(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteDir(const QString& name, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (krcc_dowritedir_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const auto user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            auto user_str_len = user_b.length();
            const char* user_str = static_cast<const char*>(malloc(user_str_len + 1));
            memcpy((void*)user_str, user_b.data(), user_str_len);
            ((char*)user_str)[user_str_len] = '\0';
            const char* cbval2 = user_str;
            const auto group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            auto group_str_len = group_b.length();
            const char* group_str = static_cast<const char*>(malloc(group_str_len + 1));
            memcpy((void*)group_str, group_b.data(), group_str_len);
            ((char*)group_str)[group_str_len] = '\0';
            const char* cbval3 = group_str;
            mode_t cbval4 = perm;
            const QDateTime& atime_ret = atime;
            // Cast returned reference into pointer
            QDateTime* cbval5 = const_cast<QDateTime*>(&atime_ret);
            const QDateTime& mtime_ret = mtime;
            // Cast returned reference into pointer
            QDateTime* cbval6 = const_cast<QDateTime*>(&mtime_ret);
            const QDateTime& ctime_ret = ctime;
            // Cast returned reference into pointer
            QDateTime* cbval7 = const_cast<QDateTime*>(&ctime_ret);
            bool callback_ret = krcc_dowritedir_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        }
        return KRcc::doWriteDir(name, user, group, perm, atime, mtime, ctime);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteSymLink(const QString& name, const QString& target, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (krcc_dowritesymlink_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const auto target_ret = target;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray target_b = target_ret.toUtf8();
            auto target_str_len = target_b.length();
            const char* target_str = static_cast<const char*>(malloc(target_str_len + 1));
            memcpy((void*)target_str, target_b.data(), target_str_len);
            ((char*)target_str)[target_str_len] = '\0';
            const char* cbval2 = target_str;
            const auto user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            auto user_str_len = user_b.length();
            const char* user_str = static_cast<const char*>(malloc(user_str_len + 1));
            memcpy((void*)user_str, user_b.data(), user_str_len);
            ((char*)user_str)[user_str_len] = '\0';
            const char* cbval3 = user_str;
            const auto group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            auto group_str_len = group_b.length();
            const char* group_str = static_cast<const char*>(malloc(group_str_len + 1));
            memcpy((void*)group_str, group_b.data(), group_str_len);
            ((char*)group_str)[group_str_len] = '\0';
            const char* cbval4 = group_str;
            mode_t cbval5 = perm;
            const QDateTime& atime_ret = atime;
            // Cast returned reference into pointer
            QDateTime* cbval6 = const_cast<QDateTime*>(&atime_ret);
            const QDateTime& mtime_ret = mtime;
            // Cast returned reference into pointer
            QDateTime* cbval7 = const_cast<QDateTime*>(&mtime_ret);
            const QDateTime& ctime_ret = ctime;
            // Cast returned reference into pointer
            QDateTime* cbval8 = const_cast<QDateTime*>(&ctime_ret);
            bool callback_ret = krcc_dowritesymlink_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(target_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        }
        return KRcc::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openArchive(QIODevice::OpenMode mode) override {
        if (krcc_openarchive_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = krcc_openarchive_callback(this, cbval1);
            return callback_ret;
        }
        return KRcc::openArchive(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeArchive() override {
        if (krcc_closearchive_callback) {
            bool callback_ret = krcc_closearchive_callback(this);
            return callback_ret;
        }
        return KRcc::closeArchive();
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (krcc_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            krcc_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KRcc::virtual_hook(id, data);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (krcc_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = krcc_open_callback(this, cbval1);
            return callback_ret;
        }
        return KRcc::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool close() override {
        if (krcc_close_callback) {
            bool callback_ret = krcc_close_callback(this);
            return callback_ret;
        }
        return KRcc::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual KArchiveDirectory* rootDir() override {
        if (krcc_rootdir_callback) {
            KArchiveDirectory* callback_ret = krcc_rootdir_callback(this);
            return callback_ret;
        }
        return KRcc::rootDir();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteData(const char* data, qint64 size) override {
        if (krcc_dowritedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(size);
            bool callback_ret = krcc_dowritedata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KRcc::doWriteData(data, size);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool createDevice(QIODevice::OpenMode mode) override {
        if (krcc_createdevice_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = krcc_createdevice_callback(this, cbval1);
            return callback_ret;
        }
        return KRcc::createDevice(mode);
    }

    // Friend functions
    friend bool KRcc_SuperDoPrepareWriting(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KRcc_SuperDoFinishWriting(KRcc* self, long long size);
    friend bool KRcc_SuperDoWriteDir(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KRcc_SuperDoWriteSymLink(KRcc* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KRcc_SuperOpenArchive(KRcc* self, int mode);
    friend bool KRcc_SuperCloseArchive(KRcc* self);
    friend void KRcc_SuperVirtualHook(KRcc* self, int id, void* data);
    friend KArchiveDirectory* KRcc_SuperRootDir(KRcc* self);
    friend bool KRcc_SuperDoWriteData(KRcc* self, const char* data, long long size);
    friend bool KRcc_SuperCreateDevice(KRcc* self, int mode);
};

#endif
