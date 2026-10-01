#pragma once
#ifndef EXTRAS_KARCHIVE_LIBKTAR_HXX
#define EXTRAS_KARCHIVE_LIBKTAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTar
class VirtualKTar final : public KTar {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTar_DoWriteSymLink_Callback = bool (*)(KTar*, const char*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KTar_DoWriteDir_Callback = bool (*)(KTar*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KTar_DoPrepareWriting_Callback = bool (*)(KTar*, const char*, const char*, const char*, long long, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KTar_DoFinishWriting_Callback = bool (*)(KTar*, long long);
    using KTar_OpenArchive_Callback = bool (*)(KTar*, int);
    using KTar_CloseArchive_Callback = bool (*)(KTar*);
    using KTar_CreateDevice_Callback = bool (*)(KTar*, int);
    using KTar_VirtualHook_Callback = void (*)(KTar*, int, void*);
    using KTar_Open_Callback = bool (*)(KTar*, int);
    using KTar_Close_Callback = bool (*)(KTar*);
    using KTar_RootDir_Callback = KArchiveDirectory* (*)(KTar*);
    using KTar_DoWriteData_Callback = bool (*)(KTar*, const char*, long long);
    using KTar::findOrCreate;
    using KTar::setDevice;
    using KTar::setErrorString;
    using KTar::setRootDir;

    // Instance callback storage
    KTar_DoWriteSymLink_Callback ktar_dowritesymlink_callback = nullptr;
    KTar_DoWriteDir_Callback ktar_dowritedir_callback = nullptr;
    KTar_DoPrepareWriting_Callback ktar_dopreparewriting_callback = nullptr;
    KTar_DoFinishWriting_Callback ktar_dofinishwriting_callback = nullptr;
    KTar_OpenArchive_Callback ktar_openarchive_callback = nullptr;
    KTar_CloseArchive_Callback ktar_closearchive_callback = nullptr;
    KTar_CreateDevice_Callback ktar_createdevice_callback = nullptr;
    KTar_VirtualHook_Callback ktar_virtualhook_callback = nullptr;
    KTar_Open_Callback ktar_open_callback = nullptr;
    KTar_Close_Callback ktar_close_callback = nullptr;
    KTar_RootDir_Callback ktar_rootdir_callback = nullptr;
    KTar_DoWriteData_Callback ktar_dowritedata_callback = nullptr;

    // Access struct
    struct Base : KTar {
        using KTar::closeArchive;
        using KTar::createDevice;
        using KTar::doFinishWriting;
        using KTar::doPrepareWriting;
        using KTar::doWriteData;
        using KTar::doWriteDir;
        using KTar::doWriteSymLink;
        using KTar::openArchive;
        using KTar::rootDir;
        using KTar::virtual_hook;
    };

    VirtualKTar(const QString& filename) : KTar(filename) {};
    VirtualKTar(QIODevice* dev) : KTar(dev) {};
    VirtualKTar(const KTar& param1) : KTar(param1) {};
    VirtualKTar(const QString& filename, const QString& mimetype) : KTar(filename, mimetype) {};

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteSymLink(const QString& name, const QString& target, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (ktar_dowritesymlink_callback) {
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
            bool callback_ret = ktar_dowritesymlink_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(target_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        }
        return KTar::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteDir(const QString& name, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (ktar_dowritedir_callback) {
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
            bool callback_ret = ktar_dowritedir_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        }
        return KTar::doWriteDir(name, user, group, perm, atime, mtime, ctime);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doPrepareWriting(const QString& name, const QString& user, const QString& group, qint64 size, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (ktar_dopreparewriting_callback) {
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
            bool callback_ret = ktar_dopreparewriting_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        }
        return KTar::doPrepareWriting(name, user, group, size, perm, atime, mtime, ctime);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doFinishWriting(qint64 size) override {
        if (ktar_dofinishwriting_callback) {
            long long cbval1 = static_cast<long long>(size);
            bool callback_ret = ktar_dofinishwriting_callback(this, cbval1);
            return callback_ret;
        }
        return KTar::doFinishWriting(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openArchive(QIODevice::OpenMode mode) override {
        if (ktar_openarchive_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = ktar_openarchive_callback(this, cbval1);
            return callback_ret;
        }
        return KTar::openArchive(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeArchive() override {
        if (ktar_closearchive_callback) {
            bool callback_ret = ktar_closearchive_callback(this);
            return callback_ret;
        }
        return KTar::closeArchive();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool createDevice(QIODevice::OpenMode mode) override {
        if (ktar_createdevice_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = ktar_createdevice_callback(this, cbval1);
            return callback_ret;
        }
        return KTar::createDevice(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (ktar_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            ktar_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KTar::virtual_hook(id, data);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (ktar_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = ktar_open_callback(this, cbval1);
            return callback_ret;
        }
        return KTar::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool close() override {
        if (ktar_close_callback) {
            bool callback_ret = ktar_close_callback(this);
            return callback_ret;
        }
        return KTar::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual KArchiveDirectory* rootDir() override {
        if (ktar_rootdir_callback) {
            KArchiveDirectory* callback_ret = ktar_rootdir_callback(this);
            return callback_ret;
        }
        return KTar::rootDir();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteData(const char* data, qint64 size) override {
        if (ktar_dowritedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(size);
            bool callback_ret = ktar_dowritedata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTar::doWriteData(data, size);
    }

    // Friend functions
    friend bool KTar_SuperDoWriteSymLink(KTar* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KTar_SuperDoWriteDir(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KTar_SuperDoPrepareWriting(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KTar_SuperDoFinishWriting(KTar* self, long long size);
    friend bool KTar_SuperOpenArchive(KTar* self, int mode);
    friend bool KTar_SuperCloseArchive(KTar* self);
    friend bool KTar_SuperCreateDevice(KTar* self, int mode);
    friend void KTar_SuperVirtualHook(KTar* self, int id, void* data);
    friend KArchiveDirectory* KTar_SuperRootDir(KTar* self);
    friend bool KTar_SuperDoWriteData(KTar* self, const char* data, long long size);
};

#endif
