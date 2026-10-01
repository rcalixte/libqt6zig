#pragma once
#ifndef EXTRAS_KARCHIVE_LIBKAR_HXX
#define EXTRAS_KARCHIVE_LIBKAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAr
class VirtualKAr final : public KAr {
  public:
    // Virtual class public types (including callbacks and access types)
    using KAr_DoPrepareWriting_Callback = bool (*)(KAr*, const char*, const char*, const char*, long long, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KAr_DoFinishWriting_Callback = bool (*)(KAr*, long long);
    using KAr_DoWriteDir_Callback = bool (*)(KAr*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KAr_DoWriteSymLink_Callback = bool (*)(KAr*, const char*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KAr_OpenArchive_Callback = bool (*)(KAr*, int);
    using KAr_CloseArchive_Callback = bool (*)(KAr*);
    using KAr_VirtualHook_Callback = void (*)(KAr*, int, void*);
    using KAr_Open_Callback = bool (*)(KAr*, int);
    using KAr_Close_Callback = bool (*)(KAr*);
    using KAr_RootDir_Callback = KArchiveDirectory* (*)(KAr*);
    using KAr_DoWriteData_Callback = bool (*)(KAr*, const char*, long long);
    using KAr_CreateDevice_Callback = bool (*)(KAr*, int);
    using KAr::findOrCreate;
    using KAr::setDevice;
    using KAr::setErrorString;
    using KAr::setRootDir;

    // Instance callback storage
    KAr_DoPrepareWriting_Callback kar_dopreparewriting_callback = nullptr;
    KAr_DoFinishWriting_Callback kar_dofinishwriting_callback = nullptr;
    KAr_DoWriteDir_Callback kar_dowritedir_callback = nullptr;
    KAr_DoWriteSymLink_Callback kar_dowritesymlink_callback = nullptr;
    KAr_OpenArchive_Callback kar_openarchive_callback = nullptr;
    KAr_CloseArchive_Callback kar_closearchive_callback = nullptr;
    KAr_VirtualHook_Callback kar_virtualhook_callback = nullptr;
    KAr_Open_Callback kar_open_callback = nullptr;
    KAr_Close_Callback kar_close_callback = nullptr;
    KAr_RootDir_Callback kar_rootdir_callback = nullptr;
    KAr_DoWriteData_Callback kar_dowritedata_callback = nullptr;
    KAr_CreateDevice_Callback kar_createdevice_callback = nullptr;

    // Access struct
    struct Base : KAr {
        using KAr::closeArchive;
        using KAr::createDevice;
        using KAr::doFinishWriting;
        using KAr::doPrepareWriting;
        using KAr::doWriteData;
        using KAr::doWriteDir;
        using KAr::doWriteSymLink;
        using KAr::openArchive;
        using KAr::rootDir;
        using KAr::virtual_hook;
    };

    VirtualKAr(const QString& filename) : KAr(filename) {};
    VirtualKAr(QIODevice* dev) : KAr(dev) {};
    VirtualKAr(const KAr& param1) : KAr(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual bool doPrepareWriting(const QString& name, const QString& user, const QString& group, qint64 size, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (kar_dopreparewriting_callback) {
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
            bool callback_ret = kar_dopreparewriting_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        }
        return KAr::doPrepareWriting(name, user, group, size, perm, atime, mtime, ctime);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doFinishWriting(qint64 size) override {
        if (kar_dofinishwriting_callback) {
            long long cbval1 = static_cast<long long>(size);
            bool callback_ret = kar_dofinishwriting_callback(this, cbval1);
            return callback_ret;
        }
        return KAr::doFinishWriting(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteDir(const QString& name, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (kar_dowritedir_callback) {
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
            bool callback_ret = kar_dowritedir_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        }
        return KAr::doWriteDir(name, user, group, perm, atime, mtime, ctime);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteSymLink(const QString& name, const QString& target, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (kar_dowritesymlink_callback) {
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
            bool callback_ret = kar_dowritesymlink_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(target_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        }
        return KAr::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openArchive(QIODevice::OpenMode mode) override {
        if (kar_openarchive_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = kar_openarchive_callback(this, cbval1);
            return callback_ret;
        }
        return KAr::openArchive(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeArchive() override {
        if (kar_closearchive_callback) {
            bool callback_ret = kar_closearchive_callback(this);
            return callback_ret;
        }
        return KAr::closeArchive();
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kar_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kar_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KAr::virtual_hook(id, data);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (kar_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = kar_open_callback(this, cbval1);
            return callback_ret;
        }
        return KAr::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool close() override {
        if (kar_close_callback) {
            bool callback_ret = kar_close_callback(this);
            return callback_ret;
        }
        return KAr::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual KArchiveDirectory* rootDir() override {
        if (kar_rootdir_callback) {
            KArchiveDirectory* callback_ret = kar_rootdir_callback(this);
            return callback_ret;
        }
        return KAr::rootDir();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteData(const char* data, qint64 size) override {
        if (kar_dowritedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(size);
            bool callback_ret = kar_dowritedata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KAr::doWriteData(data, size);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool createDevice(QIODevice::OpenMode mode) override {
        if (kar_createdevice_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = kar_createdevice_callback(this, cbval1);
            return callback_ret;
        }
        return KAr::createDevice(mode);
    }

    // Friend functions
    friend bool KAr_SuperDoPrepareWriting(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KAr_SuperDoFinishWriting(KAr* self, long long size);
    friend bool KAr_SuperDoWriteDir(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KAr_SuperDoWriteSymLink(KAr* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KAr_SuperOpenArchive(KAr* self, int mode);
    friend bool KAr_SuperCloseArchive(KAr* self);
    friend void KAr_SuperVirtualHook(KAr* self, int id, void* data);
    friend KArchiveDirectory* KAr_SuperRootDir(KAr* self);
    friend bool KAr_SuperDoWriteData(KAr* self, const char* data, long long size);
    friend bool KAr_SuperCreateDevice(KAr* self, int mode);
};

#endif
