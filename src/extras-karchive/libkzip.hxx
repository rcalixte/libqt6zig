#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKZIP_H
#define SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKZIP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KZip so that we can call protected methods
class VirtualKZip final : public KZip {

  public:
    // Virtual class boolean flag
    bool isVirtualKZip = true;

    // Virtual class public types (including callbacks)
    using KZip_DoWriteSymLink_Callback = bool (*)(KZip*, const char*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KZip_DoPrepareWriting_Callback = bool (*)(KZip*, const char*, const char*, const char*, long long, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KZip_DoFinishWriting_Callback = bool (*)(KZip*, long long);
    using KZip_DoWriteData_Callback = bool (*)(KZip*, const char*, long long);
    using KZip_OpenArchive_Callback = bool (*)(KZip*, int);
    using KZip_CloseArchive_Callback = bool (*)();
    using KZip_DoWriteDir_Callback = bool (*)(KZip*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KZip_VirtualHook_Callback = void (*)(KZip*, int, void*);
    using KZip_Open_Callback = bool (*)(KZip*, int);
    using KZip_Close_Callback = bool (*)();
    using KZip_RootDir_Callback = KArchiveDirectory* (*)();
    using KZip_CreateDevice_Callback = bool (*)(KZip*, int);
    using KZip_SetErrorString_Callback = void (*)(KZip*, const char*);
    using KZip_FindOrCreate_Callback = KArchiveDirectory* (*)(KZip*, const char*);
    using KZip_SetDevice_Callback = void (*)(KZip*, QIODevice*);
    using KZip_SetRootDir_Callback = void (*)(KZip*, KArchiveDirectory*);

  protected:
    // Instance callback storage
    KZip_DoWriteSymLink_Callback kzip_dowritesymlink_callback = nullptr;
    KZip_DoPrepareWriting_Callback kzip_dopreparewriting_callback = nullptr;
    KZip_DoFinishWriting_Callback kzip_dofinishwriting_callback = nullptr;
    KZip_DoWriteData_Callback kzip_dowritedata_callback = nullptr;
    KZip_OpenArchive_Callback kzip_openarchive_callback = nullptr;
    KZip_CloseArchive_Callback kzip_closearchive_callback = nullptr;
    KZip_DoWriteDir_Callback kzip_dowritedir_callback = nullptr;
    KZip_VirtualHook_Callback kzip_virtualhook_callback = nullptr;
    KZip_Open_Callback kzip_open_callback = nullptr;
    KZip_Close_Callback kzip_close_callback = nullptr;
    KZip_RootDir_Callback kzip_rootdir_callback = nullptr;
    KZip_CreateDevice_Callback kzip_createdevice_callback = nullptr;
    KZip_SetErrorString_Callback kzip_seterrorstring_callback = nullptr;
    KZip_FindOrCreate_Callback kzip_findorcreate_callback = nullptr;
    KZip_SetDevice_Callback kzip_setdevice_callback = nullptr;
    KZip_SetRootDir_Callback kzip_setrootdir_callback = nullptr;

    // Instance base flags
    mutable bool kzip_dowritesymlink_isbase = false;
    mutable bool kzip_dopreparewriting_isbase = false;
    mutable bool kzip_dofinishwriting_isbase = false;
    mutable bool kzip_dowritedata_isbase = false;
    mutable bool kzip_openarchive_isbase = false;
    mutable bool kzip_closearchive_isbase = false;
    mutable bool kzip_dowritedir_isbase = false;
    mutable bool kzip_virtualhook_isbase = false;
    mutable bool kzip_open_isbase = false;
    mutable bool kzip_close_isbase = false;
    mutable bool kzip_rootdir_isbase = false;
    mutable bool kzip_createdevice_isbase = false;
    mutable bool kzip_seterrorstring_isbase = false;
    mutable bool kzip_findorcreate_isbase = false;
    mutable bool kzip_setdevice_isbase = false;
    mutable bool kzip_setrootdir_isbase = false;

  public:
    VirtualKZip(const QString& filename) : KZip(filename) {};
    VirtualKZip(QIODevice* dev) : KZip(dev) {};
    VirtualKZip(const KZip& param1) : KZip(param1) {};

    ~VirtualKZip() {
        kzip_dowritesymlink_callback = nullptr;
        kzip_dopreparewriting_callback = nullptr;
        kzip_dofinishwriting_callback = nullptr;
        kzip_dowritedata_callback = nullptr;
        kzip_openarchive_callback = nullptr;
        kzip_closearchive_callback = nullptr;
        kzip_dowritedir_callback = nullptr;
        kzip_virtualhook_callback = nullptr;
        kzip_open_callback = nullptr;
        kzip_close_callback = nullptr;
        kzip_rootdir_callback = nullptr;
        kzip_createdevice_callback = nullptr;
        kzip_seterrorstring_callback = nullptr;
        kzip_findorcreate_callback = nullptr;
        kzip_setdevice_callback = nullptr;
        kzip_setrootdir_callback = nullptr;
    }

    // Callback setters
    inline void setKZip_DoWriteSymLink_Callback(KZip_DoWriteSymLink_Callback cb) { kzip_dowritesymlink_callback = cb; }
    inline void setKZip_DoPrepareWriting_Callback(KZip_DoPrepareWriting_Callback cb) { kzip_dopreparewriting_callback = cb; }
    inline void setKZip_DoFinishWriting_Callback(KZip_DoFinishWriting_Callback cb) { kzip_dofinishwriting_callback = cb; }
    inline void setKZip_DoWriteData_Callback(KZip_DoWriteData_Callback cb) { kzip_dowritedata_callback = cb; }
    inline void setKZip_OpenArchive_Callback(KZip_OpenArchive_Callback cb) { kzip_openarchive_callback = cb; }
    inline void setKZip_CloseArchive_Callback(KZip_CloseArchive_Callback cb) { kzip_closearchive_callback = cb; }
    inline void setKZip_DoWriteDir_Callback(KZip_DoWriteDir_Callback cb) { kzip_dowritedir_callback = cb; }
    inline void setKZip_VirtualHook_Callback(KZip_VirtualHook_Callback cb) { kzip_virtualhook_callback = cb; }
    inline void setKZip_Open_Callback(KZip_Open_Callback cb) { kzip_open_callback = cb; }
    inline void setKZip_Close_Callback(KZip_Close_Callback cb) { kzip_close_callback = cb; }
    inline void setKZip_RootDir_Callback(KZip_RootDir_Callback cb) { kzip_rootdir_callback = cb; }
    inline void setKZip_CreateDevice_Callback(KZip_CreateDevice_Callback cb) { kzip_createdevice_callback = cb; }
    inline void setKZip_SetErrorString_Callback(KZip_SetErrorString_Callback cb) { kzip_seterrorstring_callback = cb; }
    inline void setKZip_FindOrCreate_Callback(KZip_FindOrCreate_Callback cb) { kzip_findorcreate_callback = cb; }
    inline void setKZip_SetDevice_Callback(KZip_SetDevice_Callback cb) { kzip_setdevice_callback = cb; }
    inline void setKZip_SetRootDir_Callback(KZip_SetRootDir_Callback cb) { kzip_setrootdir_callback = cb; }

    // Base flag setters
    inline void setKZip_DoWriteSymLink_IsBase(bool value) const { kzip_dowritesymlink_isbase = value; }
    inline void setKZip_DoPrepareWriting_IsBase(bool value) const { kzip_dopreparewriting_isbase = value; }
    inline void setKZip_DoFinishWriting_IsBase(bool value) const { kzip_dofinishwriting_isbase = value; }
    inline void setKZip_DoWriteData_IsBase(bool value) const { kzip_dowritedata_isbase = value; }
    inline void setKZip_OpenArchive_IsBase(bool value) const { kzip_openarchive_isbase = value; }
    inline void setKZip_CloseArchive_IsBase(bool value) const { kzip_closearchive_isbase = value; }
    inline void setKZip_DoWriteDir_IsBase(bool value) const { kzip_dowritedir_isbase = value; }
    inline void setKZip_VirtualHook_IsBase(bool value) const { kzip_virtualhook_isbase = value; }
    inline void setKZip_Open_IsBase(bool value) const { kzip_open_isbase = value; }
    inline void setKZip_Close_IsBase(bool value) const { kzip_close_isbase = value; }
    inline void setKZip_RootDir_IsBase(bool value) const { kzip_rootdir_isbase = value; }
    inline void setKZip_CreateDevice_IsBase(bool value) const { kzip_createdevice_isbase = value; }
    inline void setKZip_SetErrorString_IsBase(bool value) const { kzip_seterrorstring_isbase = value; }
    inline void setKZip_FindOrCreate_IsBase(bool value) const { kzip_findorcreate_isbase = value; }
    inline void setKZip_SetDevice_IsBase(bool value) const { kzip_setdevice_isbase = value; }
    inline void setKZip_SetRootDir_IsBase(bool value) const { kzip_setrootdir_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteSymLink(const QString& name, const QString& target, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (kzip_dowritesymlink_isbase) {
            kzip_dowritesymlink_isbase = false;
            return KZip::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
        } else if (kzip_dowritesymlink_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QString target_ret = target;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray target_b = target_ret.toUtf8();
            auto target_str_len = target_b.length();
            const char* target_str = static_cast<const char*>(malloc(target_str_len + 1));
            memcpy((void*)target_str, target_b.data(), target_str_len);
            ((char*)target_str)[target_str_len] = '\0';
            const char* cbval2 = target_str;
            const QString user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            auto user_str_len = user_b.length();
            const char* user_str = static_cast<const char*>(malloc(user_str_len + 1));
            memcpy((void*)user_str, user_b.data(), user_str_len);
            ((char*)user_str)[user_str_len] = '\0';
            const char* cbval3 = user_str;
            const QString group_ret = group;
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

            bool callback_ret = kzip_dowritesymlink_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(target_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        } else {
            return KZip::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doPrepareWriting(const QString& name, const QString& user, const QString& group, qint64 size, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& creationTime) override {
        if (kzip_dopreparewriting_isbase) {
            kzip_dopreparewriting_isbase = false;
            return KZip::doPrepareWriting(name, user, group, size, perm, atime, mtime, creationTime);
        } else if (kzip_dopreparewriting_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QString user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            auto user_str_len = user_b.length();
            const char* user_str = static_cast<const char*>(malloc(user_str_len + 1));
            memcpy((void*)user_str, user_b.data(), user_str_len);
            ((char*)user_str)[user_str_len] = '\0';
            const char* cbval2 = user_str;
            const QString group_ret = group;
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
            const QDateTime& creationTime_ret = creationTime;
            // Cast returned reference into pointer
            QDateTime* cbval8 = const_cast<QDateTime*>(&creationTime_ret);

            bool callback_ret = kzip_dopreparewriting_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        } else {
            return KZip::doPrepareWriting(name, user, group, size, perm, atime, mtime, creationTime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doFinishWriting(qint64 size) override {
        if (kzip_dofinishwriting_isbase) {
            kzip_dofinishwriting_isbase = false;
            return KZip::doFinishWriting(size);
        } else if (kzip_dofinishwriting_callback != nullptr) {
            long long cbval1 = static_cast<long long>(size);

            bool callback_ret = kzip_dofinishwriting_callback(this, cbval1);
            return callback_ret;
        } else {
            return KZip::doFinishWriting(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteData(const char* data, qint64 size) override {
        if (kzip_dowritedata_isbase) {
            kzip_dowritedata_isbase = false;
            return KZip::doWriteData(data, size);
        } else if (kzip_dowritedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(size);

            bool callback_ret = kzip_dowritedata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KZip::doWriteData(data, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openArchive(QIODevice::OpenMode mode) override {
        if (kzip_openarchive_isbase) {
            kzip_openarchive_isbase = false;
            return KZip::openArchive(mode);
        } else if (kzip_openarchive_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = kzip_openarchive_callback(this, cbval1);
            return callback_ret;
        } else {
            return KZip::openArchive(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeArchive() override {
        if (kzip_closearchive_isbase) {
            kzip_closearchive_isbase = false;
            return KZip::closeArchive();
        } else if (kzip_closearchive_callback != nullptr) {
            bool callback_ret = kzip_closearchive_callback();
            return callback_ret;
        } else {
            return KZip::closeArchive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteDir(const QString& name, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (kzip_dowritedir_isbase) {
            kzip_dowritedir_isbase = false;
            return KZip::doWriteDir(name, user, group, perm, atime, mtime, ctime);
        } else if (kzip_dowritedir_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QString user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            auto user_str_len = user_b.length();
            const char* user_str = static_cast<const char*>(malloc(user_str_len + 1));
            memcpy((void*)user_str, user_b.data(), user_str_len);
            ((char*)user_str)[user_str_len] = '\0';
            const char* cbval2 = user_str;
            const QString group_ret = group;
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

            bool callback_ret = kzip_dowritedir_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        } else {
            return KZip::doWriteDir(name, user, group, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kzip_virtualhook_isbase) {
            kzip_virtualhook_isbase = false;
            KZip::virtual_hook(id, data);
        } else if (kzip_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kzip_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KZip::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (kzip_open_isbase) {
            kzip_open_isbase = false;
            return KZip::open(mode);
        } else if (kzip_open_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = kzip_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return KZip::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool close() override {
        if (kzip_close_isbase) {
            kzip_close_isbase = false;
            return KZip::close();
        } else if (kzip_close_callback != nullptr) {
            bool callback_ret = kzip_close_callback();
            return callback_ret;
        } else {
            return KZip::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KArchiveDirectory* rootDir() override {
        if (kzip_rootdir_isbase) {
            kzip_rootdir_isbase = false;
            return KZip::rootDir();
        } else if (kzip_rootdir_callback != nullptr) {
            KArchiveDirectory* callback_ret = kzip_rootdir_callback();
            return callback_ret;
        } else {
            return KZip::rootDir();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool createDevice(QIODevice::OpenMode mode) override {
        if (kzip_createdevice_isbase) {
            kzip_createdevice_isbase = false;
            return KZip::createDevice(mode);
        } else if (kzip_createdevice_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = kzip_createdevice_callback(this, cbval1);
            return callback_ret;
        } else {
            return KZip::createDevice(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorStr) {
        if (kzip_seterrorstring_isbase) {
            kzip_seterrorstring_isbase = false;
            KZip::setErrorString(errorStr);
        } else if (kzip_seterrorstring_callback != nullptr) {
            const QString errorStr_ret = errorStr;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray errorStr_b = errorStr_ret.toUtf8();
            auto errorStr_str_len = errorStr_b.length();
            const char* errorStr_str = static_cast<const char*>(malloc(errorStr_str_len + 1));
            memcpy((void*)errorStr_str, errorStr_b.data(), errorStr_str_len);
            ((char*)errorStr_str)[errorStr_str_len] = '\0';
            const char* cbval1 = errorStr_str;

            kzip_seterrorstring_callback(this, cbval1);
            libqt_free(errorStr_str);
        } else {
            KZip::setErrorString(errorStr);
        }
    }

    // Virtual method for C ABI access and custom callback
    KArchiveDirectory* findOrCreate(const QString& path) {
        if (kzip_findorcreate_isbase) {
            kzip_findorcreate_isbase = false;
            return KZip::findOrCreate(path);
        } else if (kzip_findorcreate_callback != nullptr) {
            const QString path_ret = path;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray path_b = path_ret.toUtf8();
            auto path_str_len = path_b.length();
            const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
            memcpy((void*)path_str, path_b.data(), path_str_len);
            ((char*)path_str)[path_str_len] = '\0';
            const char* cbval1 = path_str;

            KArchiveDirectory* callback_ret = kzip_findorcreate_callback(this, cbval1);
            libqt_free(path_str);
            return callback_ret;
        } else {
            return KZip::findOrCreate(path);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDevice(QIODevice* dev) {
        if (kzip_setdevice_isbase) {
            kzip_setdevice_isbase = false;
            KZip::setDevice(dev);
        } else if (kzip_setdevice_callback != nullptr) {
            QIODevice* cbval1 = dev;

            kzip_setdevice_callback(this, cbval1);
        } else {
            KZip::setDevice(dev);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRootDir(KArchiveDirectory* rootDir) {
        if (kzip_setrootdir_isbase) {
            kzip_setrootdir_isbase = false;
            KZip::setRootDir(rootDir);
        } else if (kzip_setrootdir_callback != nullptr) {
            KArchiveDirectory* cbval1 = rootDir;

            kzip_setrootdir_callback(this, cbval1);
        } else {
            KZip::setRootDir(rootDir);
        }
    }

    // Friend functions
    friend bool KZip_DoWriteSymLink(KZip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KZip_QBaseDoWriteSymLink(KZip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KZip_DoPrepareWriting(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* creationTime);
    friend bool KZip_QBaseDoPrepareWriting(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* creationTime);
    friend bool KZip_DoFinishWriting(KZip* self, long long size);
    friend bool KZip_QBaseDoFinishWriting(KZip* self, long long size);
    friend bool KZip_DoWriteData(KZip* self, const char* data, long long size);
    friend bool KZip_QBaseDoWriteData(KZip* self, const char* data, long long size);
    friend bool KZip_OpenArchive(KZip* self, int mode);
    friend bool KZip_QBaseOpenArchive(KZip* self, int mode);
    friend bool KZip_CloseArchive(KZip* self);
    friend bool KZip_QBaseCloseArchive(KZip* self);
    friend bool KZip_DoWriteDir(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KZip_QBaseDoWriteDir(KZip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend void KZip_VirtualHook(KZip* self, int id, void* data);
    friend void KZip_QBaseVirtualHook(KZip* self, int id, void* data);
    friend KArchiveDirectory* KZip_RootDir(KZip* self);
    friend KArchiveDirectory* KZip_QBaseRootDir(KZip* self);
    friend bool KZip_CreateDevice(KZip* self, int mode);
    friend bool KZip_QBaseCreateDevice(KZip* self, int mode);
    friend void KZip_SetErrorString(KZip* self, const libqt_string errorStr);
    friend void KZip_QBaseSetErrorString(KZip* self, const libqt_string errorStr);
    friend KArchiveDirectory* KZip_FindOrCreate(KZip* self, const libqt_string path);
    friend KArchiveDirectory* KZip_QBaseFindOrCreate(KZip* self, const libqt_string path);
    friend void KZip_SetDevice(KZip* self, QIODevice* dev);
    friend void KZip_QBaseSetDevice(KZip* self, QIODevice* dev);
    friend void KZip_SetRootDir(KZip* self, KArchiveDirectory* rootDir);
    friend void KZip_QBaseSetRootDir(KZip* self, KArchiveDirectory* rootDir);
};

#endif
