#pragma once
#ifndef EXTRAS_KARCHIVE_LIBK7ZIP_HXX
#define EXTRAS_KARCHIVE_LIBK7ZIP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of K7Zip
class VirtualK7Zip final : public K7Zip {
  public:
    // Virtual class public types (including callbacks and access types)
    using K7Zip_DoWriteSymLink_Callback = bool (*)(K7Zip*, const char*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using K7Zip_DoWriteDir_Callback = bool (*)(K7Zip*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using K7Zip_DoPrepareWriting_Callback = bool (*)(K7Zip*, const char*, const char*, const char*, long long, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using K7Zip_DoFinishWriting_Callback = bool (*)(K7Zip*, long long);
    using K7Zip_DoWriteData_Callback = bool (*)(K7Zip*, const char*, long long);
    using K7Zip_OpenArchive_Callback = bool (*)(K7Zip*, int);
    using K7Zip_CloseArchive_Callback = bool (*)(K7Zip*);
    using K7Zip_VirtualHook_Callback = void (*)(K7Zip*, int, void*);
    using K7Zip_Open_Callback = bool (*)(K7Zip*, int);
    using K7Zip_Close_Callback = bool (*)(K7Zip*);
    using K7Zip_RootDir_Callback = KArchiveDirectory* (*)(K7Zip*);
    using K7Zip_CreateDevice_Callback = bool (*)(K7Zip*, int);
    using K7Zip::findOrCreate;
    using K7Zip::setDevice;
    using K7Zip::setErrorString;
    using K7Zip::setRootDir;

    // Instance callback storage
    K7Zip_DoWriteSymLink_Callback k7zip_dowritesymlink_callback = nullptr;
    K7Zip_DoWriteDir_Callback k7zip_dowritedir_callback = nullptr;
    K7Zip_DoPrepareWriting_Callback k7zip_dopreparewriting_callback = nullptr;
    K7Zip_DoFinishWriting_Callback k7zip_dofinishwriting_callback = nullptr;
    K7Zip_DoWriteData_Callback k7zip_dowritedata_callback = nullptr;
    K7Zip_OpenArchive_Callback k7zip_openarchive_callback = nullptr;
    K7Zip_CloseArchive_Callback k7zip_closearchive_callback = nullptr;
    K7Zip_VirtualHook_Callback k7zip_virtualhook_callback = nullptr;
    K7Zip_Open_Callback k7zip_open_callback = nullptr;
    K7Zip_Close_Callback k7zip_close_callback = nullptr;
    K7Zip_RootDir_Callback k7zip_rootdir_callback = nullptr;
    K7Zip_CreateDevice_Callback k7zip_createdevice_callback = nullptr;

    // Access struct
    struct Base : K7Zip {
        using K7Zip::closeArchive;
        using K7Zip::createDevice;
        using K7Zip::doFinishWriting;
        using K7Zip::doPrepareWriting;
        using K7Zip::doWriteData;
        using K7Zip::doWriteDir;
        using K7Zip::doWriteSymLink;
        using K7Zip::openArchive;
        using K7Zip::rootDir;
        using K7Zip::virtual_hook;
    };

    VirtualK7Zip(const QString& filename) : K7Zip(filename) {};
    VirtualK7Zip(QIODevice* dev) : K7Zip(dev) {};
    VirtualK7Zip(const K7Zip& param1) : K7Zip(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteSymLink(const QString& name, const QString& target, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (k7zip_dowritesymlink_callback) {
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
            bool callback_ret = k7zip_dowritesymlink_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(target_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        }
        return K7Zip::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteDir(const QString& name, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (k7zip_dowritedir_callback) {
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
            bool callback_ret = k7zip_dowritedir_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        }
        return K7Zip::doWriteDir(name, user, group, perm, atime, mtime, ctime);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doPrepareWriting(const QString& name, const QString& user, const QString& group, qint64 size, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (k7zip_dopreparewriting_callback) {
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
            bool callback_ret = k7zip_dopreparewriting_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        }
        return K7Zip::doPrepareWriting(name, user, group, size, perm, atime, mtime, ctime);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doFinishWriting(qint64 size) override {
        if (k7zip_dofinishwriting_callback) {
            long long cbval1 = static_cast<long long>(size);
            bool callback_ret = k7zip_dofinishwriting_callback(this, cbval1);
            return callback_ret;
        }
        return K7Zip::doFinishWriting(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteData(const char* data, qint64 size) override {
        if (k7zip_dowritedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(size);
            bool callback_ret = k7zip_dowritedata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return K7Zip::doWriteData(data, size);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openArchive(QIODevice::OpenMode mode) override {
        if (k7zip_openarchive_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = k7zip_openarchive_callback(this, cbval1);
            return callback_ret;
        }
        return K7Zip::openArchive(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeArchive() override {
        if (k7zip_closearchive_callback) {
            bool callback_ret = k7zip_closearchive_callback(this);
            return callback_ret;
        }
        return K7Zip::closeArchive();
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (k7zip_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            k7zip_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        K7Zip::virtual_hook(id, data);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (k7zip_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = k7zip_open_callback(this, cbval1);
            return callback_ret;
        }
        return K7Zip::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool close() override {
        if (k7zip_close_callback) {
            bool callback_ret = k7zip_close_callback(this);
            return callback_ret;
        }
        return K7Zip::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual KArchiveDirectory* rootDir() override {
        if (k7zip_rootdir_callback) {
            KArchiveDirectory* callback_ret = k7zip_rootdir_callback(this);
            return callback_ret;
        }
        return K7Zip::rootDir();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool createDevice(QIODevice::OpenMode mode) override {
        if (k7zip_createdevice_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = k7zip_createdevice_callback(this, cbval1);
            return callback_ret;
        }
        return K7Zip::createDevice(mode);
    }

    // Friend functions
    friend bool K7Zip_SuperDoWriteSymLink(K7Zip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool K7Zip_SuperDoWriteDir(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool K7Zip_SuperDoPrepareWriting(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool K7Zip_SuperDoFinishWriting(K7Zip* self, long long size);
    friend bool K7Zip_SuperDoWriteData(K7Zip* self, const char* data, long long size);
    friend bool K7Zip_SuperOpenArchive(K7Zip* self, int mode);
    friend bool K7Zip_SuperCloseArchive(K7Zip* self);
    friend void K7Zip_SuperVirtualHook(K7Zip* self, int id, void* data);
    friend KArchiveDirectory* K7Zip_SuperRootDir(K7Zip* self);
    friend bool K7Zip_SuperCreateDevice(K7Zip* self, int mode);
};

#endif
