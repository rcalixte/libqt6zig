#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKAR_H
#define SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAr so that we can call protected methods
class VirtualKAr final : public KAr {

  public:
    // Virtual class boolean flag
    bool isVirtualKAr = true;

    // Virtual class public types (including callbacks)
    using KAr_DoPrepareWriting_Callback = bool (*)(KAr*, libqt_string, libqt_string, libqt_string, long long, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KAr_DoFinishWriting_Callback = bool (*)(KAr*, long long);
    using KAr_DoWriteDir_Callback = bool (*)(KAr*, libqt_string, libqt_string, libqt_string, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KAr_DoWriteSymLink_Callback = bool (*)(KAr*, libqt_string, libqt_string, libqt_string, libqt_string, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KAr_OpenArchive_Callback = bool (*)(KAr*, int);
    using KAr_CloseArchive_Callback = bool (*)();
    using KAr_VirtualHook_Callback = void (*)(KAr*, int, void*);
    using KAr_Open_Callback = bool (*)(KAr*, int);
    using KAr_Close_Callback = bool (*)();
    using KAr_RootDir_Callback = KArchiveDirectory* (*)();
    using KAr_DoWriteData_Callback = bool (*)(KAr*, const char*, long long);
    using KAr_CreateDevice_Callback = bool (*)(KAr*, int);
    using KAr_SetErrorString_Callback = void (*)(KAr*, libqt_string);
    using KAr_FindOrCreate_Callback = KArchiveDirectory* (*)(KAr*, libqt_string);
    using KAr_SetDevice_Callback = void (*)(KAr*, QIODevice*);
    using KAr_SetRootDir_Callback = void (*)(KAr*, KArchiveDirectory*);

  protected:
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
    KAr_SetErrorString_Callback kar_seterrorstring_callback = nullptr;
    KAr_FindOrCreate_Callback kar_findorcreate_callback = nullptr;
    KAr_SetDevice_Callback kar_setdevice_callback = nullptr;
    KAr_SetRootDir_Callback kar_setrootdir_callback = nullptr;

    // Instance base flags
    mutable bool kar_dopreparewriting_isbase = false;
    mutable bool kar_dofinishwriting_isbase = false;
    mutable bool kar_dowritedir_isbase = false;
    mutable bool kar_dowritesymlink_isbase = false;
    mutable bool kar_openarchive_isbase = false;
    mutable bool kar_closearchive_isbase = false;
    mutable bool kar_virtualhook_isbase = false;
    mutable bool kar_open_isbase = false;
    mutable bool kar_close_isbase = false;
    mutable bool kar_rootdir_isbase = false;
    mutable bool kar_dowritedata_isbase = false;
    mutable bool kar_createdevice_isbase = false;
    mutable bool kar_seterrorstring_isbase = false;
    mutable bool kar_findorcreate_isbase = false;
    mutable bool kar_setdevice_isbase = false;
    mutable bool kar_setrootdir_isbase = false;

  public:
    VirtualKAr(const QString& filename) : KAr(filename) {};
    VirtualKAr(QIODevice* dev) : KAr(dev) {};
    VirtualKAr(const KAr& param1) : KAr(param1) {};

    ~VirtualKAr() {
        kar_dopreparewriting_callback = nullptr;
        kar_dofinishwriting_callback = nullptr;
        kar_dowritedir_callback = nullptr;
        kar_dowritesymlink_callback = nullptr;
        kar_openarchive_callback = nullptr;
        kar_closearchive_callback = nullptr;
        kar_virtualhook_callback = nullptr;
        kar_open_callback = nullptr;
        kar_close_callback = nullptr;
        kar_rootdir_callback = nullptr;
        kar_dowritedata_callback = nullptr;
        kar_createdevice_callback = nullptr;
        kar_seterrorstring_callback = nullptr;
        kar_findorcreate_callback = nullptr;
        kar_setdevice_callback = nullptr;
        kar_setrootdir_callback = nullptr;
    }

    // Callback setters
    inline void setKAr_DoPrepareWriting_Callback(KAr_DoPrepareWriting_Callback cb) { kar_dopreparewriting_callback = cb; }
    inline void setKAr_DoFinishWriting_Callback(KAr_DoFinishWriting_Callback cb) { kar_dofinishwriting_callback = cb; }
    inline void setKAr_DoWriteDir_Callback(KAr_DoWriteDir_Callback cb) { kar_dowritedir_callback = cb; }
    inline void setKAr_DoWriteSymLink_Callback(KAr_DoWriteSymLink_Callback cb) { kar_dowritesymlink_callback = cb; }
    inline void setKAr_OpenArchive_Callback(KAr_OpenArchive_Callback cb) { kar_openarchive_callback = cb; }
    inline void setKAr_CloseArchive_Callback(KAr_CloseArchive_Callback cb) { kar_closearchive_callback = cb; }
    inline void setKAr_VirtualHook_Callback(KAr_VirtualHook_Callback cb) { kar_virtualhook_callback = cb; }
    inline void setKAr_Open_Callback(KAr_Open_Callback cb) { kar_open_callback = cb; }
    inline void setKAr_Close_Callback(KAr_Close_Callback cb) { kar_close_callback = cb; }
    inline void setKAr_RootDir_Callback(KAr_RootDir_Callback cb) { kar_rootdir_callback = cb; }
    inline void setKAr_DoWriteData_Callback(KAr_DoWriteData_Callback cb) { kar_dowritedata_callback = cb; }
    inline void setKAr_CreateDevice_Callback(KAr_CreateDevice_Callback cb) { kar_createdevice_callback = cb; }
    inline void setKAr_SetErrorString_Callback(KAr_SetErrorString_Callback cb) { kar_seterrorstring_callback = cb; }
    inline void setKAr_FindOrCreate_Callback(KAr_FindOrCreate_Callback cb) { kar_findorcreate_callback = cb; }
    inline void setKAr_SetDevice_Callback(KAr_SetDevice_Callback cb) { kar_setdevice_callback = cb; }
    inline void setKAr_SetRootDir_Callback(KAr_SetRootDir_Callback cb) { kar_setrootdir_callback = cb; }

    // Base flag setters
    inline void setKAr_DoPrepareWriting_IsBase(bool value) const { kar_dopreparewriting_isbase = value; }
    inline void setKAr_DoFinishWriting_IsBase(bool value) const { kar_dofinishwriting_isbase = value; }
    inline void setKAr_DoWriteDir_IsBase(bool value) const { kar_dowritedir_isbase = value; }
    inline void setKAr_DoWriteSymLink_IsBase(bool value) const { kar_dowritesymlink_isbase = value; }
    inline void setKAr_OpenArchive_IsBase(bool value) const { kar_openarchive_isbase = value; }
    inline void setKAr_CloseArchive_IsBase(bool value) const { kar_closearchive_isbase = value; }
    inline void setKAr_VirtualHook_IsBase(bool value) const { kar_virtualhook_isbase = value; }
    inline void setKAr_Open_IsBase(bool value) const { kar_open_isbase = value; }
    inline void setKAr_Close_IsBase(bool value) const { kar_close_isbase = value; }
    inline void setKAr_RootDir_IsBase(bool value) const { kar_rootdir_isbase = value; }
    inline void setKAr_DoWriteData_IsBase(bool value) const { kar_dowritedata_isbase = value; }
    inline void setKAr_CreateDevice_IsBase(bool value) const { kar_createdevice_isbase = value; }
    inline void setKAr_SetErrorString_IsBase(bool value) const { kar_seterrorstring_isbase = value; }
    inline void setKAr_FindOrCreate_IsBase(bool value) const { kar_findorcreate_isbase = value; }
    inline void setKAr_SetDevice_IsBase(bool value) const { kar_setdevice_isbase = value; }
    inline void setKAr_SetRootDir_IsBase(bool value) const { kar_setrootdir_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool doPrepareWriting(const QString& name, const QString& user, const QString& group, qint64 size, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (kar_dopreparewriting_isbase) {
            kar_dopreparewriting_isbase = false;
            return KAr::doPrepareWriting(name, user, group, size, perm, atime, mtime, ctime);
        } else if (kar_dopreparewriting_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;
            const QString user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            libqt_string user_str;
            user_str.len = user_b.length();
            user_str.data = static_cast<const char*>(malloc(user_str.len + 1));
            memcpy((void*)user_str.data, user_b.data(), user_str.len);
            ((char*)user_str.data)[user_str.len] = '\0';
            libqt_string cbval2 = user_str;
            const QString group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            libqt_string group_str;
            group_str.len = group_b.length();
            group_str.data = static_cast<const char*>(malloc(group_str.len + 1));
            memcpy((void*)group_str.data, group_b.data(), group_str.len);
            ((char*)group_str.data)[group_str.len] = '\0';
            libqt_string cbval3 = group_str;
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
            return callback_ret;
        } else {
            return KAr::doPrepareWriting(name, user, group, size, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doFinishWriting(qint64 size) override {
        if (kar_dofinishwriting_isbase) {
            kar_dofinishwriting_isbase = false;
            return KAr::doFinishWriting(size);
        } else if (kar_dofinishwriting_callback != nullptr) {
            long long cbval1 = static_cast<long long>(size);

            bool callback_ret = kar_dofinishwriting_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAr::doFinishWriting(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteDir(const QString& name, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (kar_dowritedir_isbase) {
            kar_dowritedir_isbase = false;
            return KAr::doWriteDir(name, user, group, perm, atime, mtime, ctime);
        } else if (kar_dowritedir_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;
            const QString user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            libqt_string user_str;
            user_str.len = user_b.length();
            user_str.data = static_cast<const char*>(malloc(user_str.len + 1));
            memcpy((void*)user_str.data, user_b.data(), user_str.len);
            ((char*)user_str.data)[user_str.len] = '\0';
            libqt_string cbval2 = user_str;
            const QString group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            libqt_string group_str;
            group_str.len = group_b.length();
            group_str.data = static_cast<const char*>(malloc(group_str.len + 1));
            memcpy((void*)group_str.data, group_b.data(), group_str.len);
            ((char*)group_str.data)[group_str.len] = '\0';
            libqt_string cbval3 = group_str;
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
            return callback_ret;
        } else {
            return KAr::doWriteDir(name, user, group, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteSymLink(const QString& name, const QString& target, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (kar_dowritesymlink_isbase) {
            kar_dowritesymlink_isbase = false;
            return KAr::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
        } else if (kar_dowritesymlink_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;
            const QString target_ret = target;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray target_b = target_ret.toUtf8();
            libqt_string target_str;
            target_str.len = target_b.length();
            target_str.data = static_cast<const char*>(malloc(target_str.len + 1));
            memcpy((void*)target_str.data, target_b.data(), target_str.len);
            ((char*)target_str.data)[target_str.len] = '\0';
            libqt_string cbval2 = target_str;
            const QString user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            libqt_string user_str;
            user_str.len = user_b.length();
            user_str.data = static_cast<const char*>(malloc(user_str.len + 1));
            memcpy((void*)user_str.data, user_b.data(), user_str.len);
            ((char*)user_str.data)[user_str.len] = '\0';
            libqt_string cbval3 = user_str;
            const QString group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            libqt_string group_str;
            group_str.len = group_b.length();
            group_str.data = static_cast<const char*>(malloc(group_str.len + 1));
            memcpy((void*)group_str.data, group_b.data(), group_str.len);
            ((char*)group_str.data)[group_str.len] = '\0';
            libqt_string cbval4 = group_str;
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
            return callback_ret;
        } else {
            return KAr::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openArchive(QIODevice::OpenMode mode) override {
        if (kar_openarchive_isbase) {
            kar_openarchive_isbase = false;
            return KAr::openArchive(mode);
        } else if (kar_openarchive_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = kar_openarchive_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAr::openArchive(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeArchive() override {
        if (kar_closearchive_isbase) {
            kar_closearchive_isbase = false;
            return KAr::closeArchive();
        } else if (kar_closearchive_callback != nullptr) {
            bool callback_ret = kar_closearchive_callback();
            return callback_ret;
        } else {
            return KAr::closeArchive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kar_virtualhook_isbase) {
            kar_virtualhook_isbase = false;
            KAr::virtual_hook(id, data);
        } else if (kar_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kar_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KAr::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (kar_open_isbase) {
            kar_open_isbase = false;
            return KAr::open(mode);
        } else if (kar_open_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = kar_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAr::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool close() override {
        if (kar_close_isbase) {
            kar_close_isbase = false;
            return KAr::close();
        } else if (kar_close_callback != nullptr) {
            bool callback_ret = kar_close_callback();
            return callback_ret;
        } else {
            return KAr::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KArchiveDirectory* rootDir() override {
        if (kar_rootdir_isbase) {
            kar_rootdir_isbase = false;
            return KAr::rootDir();
        } else if (kar_rootdir_callback != nullptr) {
            KArchiveDirectory* callback_ret = kar_rootdir_callback();
            return callback_ret;
        } else {
            return KAr::rootDir();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteData(const char* data, qint64 size) override {
        if (kar_dowritedata_isbase) {
            kar_dowritedata_isbase = false;
            return KAr::doWriteData(data, size);
        } else if (kar_dowritedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(size);

            bool callback_ret = kar_dowritedata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KAr::doWriteData(data, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool createDevice(QIODevice::OpenMode mode) override {
        if (kar_createdevice_isbase) {
            kar_createdevice_isbase = false;
            return KAr::createDevice(mode);
        } else if (kar_createdevice_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = kar_createdevice_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAr::createDevice(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorStr) {
        if (kar_seterrorstring_isbase) {
            kar_seterrorstring_isbase = false;
            KAr::setErrorString(errorStr);
        } else if (kar_seterrorstring_callback != nullptr) {
            const QString errorStr_ret = errorStr;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorStr_b = errorStr_ret.toUtf8();
            libqt_string errorStr_str;
            errorStr_str.len = errorStr_b.length();
            errorStr_str.data = static_cast<const char*>(malloc(errorStr_str.len + 1));
            memcpy((void*)errorStr_str.data, errorStr_b.data(), errorStr_str.len);
            ((char*)errorStr_str.data)[errorStr_str.len] = '\0';
            libqt_string cbval1 = errorStr_str;

            kar_seterrorstring_callback(this, cbval1);
        } else {
            KAr::setErrorString(errorStr);
        }
    }

    // Virtual method for C ABI access and custom callback
    KArchiveDirectory* findOrCreate(const QString& path) {
        if (kar_findorcreate_isbase) {
            kar_findorcreate_isbase = false;
            return KAr::findOrCreate(path);
        } else if (kar_findorcreate_callback != nullptr) {
            const QString path_ret = path;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray path_b = path_ret.toUtf8();
            libqt_string path_str;
            path_str.len = path_b.length();
            path_str.data = static_cast<const char*>(malloc(path_str.len + 1));
            memcpy((void*)path_str.data, path_b.data(), path_str.len);
            ((char*)path_str.data)[path_str.len] = '\0';
            libqt_string cbval1 = path_str;

            KArchiveDirectory* callback_ret = kar_findorcreate_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAr::findOrCreate(path);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDevice(QIODevice* dev) {
        if (kar_setdevice_isbase) {
            kar_setdevice_isbase = false;
            KAr::setDevice(dev);
        } else if (kar_setdevice_callback != nullptr) {
            QIODevice* cbval1 = dev;

            kar_setdevice_callback(this, cbval1);
        } else {
            KAr::setDevice(dev);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRootDir(KArchiveDirectory* rootDir) {
        if (kar_setrootdir_isbase) {
            kar_setrootdir_isbase = false;
            KAr::setRootDir(rootDir);
        } else if (kar_setrootdir_callback != nullptr) {
            KArchiveDirectory* cbval1 = rootDir;

            kar_setrootdir_callback(this, cbval1);
        } else {
            KAr::setRootDir(rootDir);
        }
    }

    // Friend functions
    friend bool KAr_DoPrepareWriting(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KAr_QBaseDoPrepareWriting(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KAr_DoFinishWriting(KAr* self, long long size);
    friend bool KAr_QBaseDoFinishWriting(KAr* self, long long size);
    friend bool KAr_DoWriteDir(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KAr_QBaseDoWriteDir(KAr* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KAr_DoWriteSymLink(KAr* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KAr_QBaseDoWriteSymLink(KAr* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KAr_OpenArchive(KAr* self, int mode);
    friend bool KAr_QBaseOpenArchive(KAr* self, int mode);
    friend bool KAr_CloseArchive(KAr* self);
    friend bool KAr_QBaseCloseArchive(KAr* self);
    friend void KAr_VirtualHook(KAr* self, int id, void* data);
    friend void KAr_QBaseVirtualHook(KAr* self, int id, void* data);
    friend KArchiveDirectory* KAr_RootDir(KAr* self);
    friend KArchiveDirectory* KAr_QBaseRootDir(KAr* self);
    friend bool KAr_DoWriteData(KAr* self, const char* data, long long size);
    friend bool KAr_QBaseDoWriteData(KAr* self, const char* data, long long size);
    friend bool KAr_CreateDevice(KAr* self, int mode);
    friend bool KAr_QBaseCreateDevice(KAr* self, int mode);
    friend void KAr_SetErrorString(KAr* self, const libqt_string errorStr);
    friend void KAr_QBaseSetErrorString(KAr* self, const libqt_string errorStr);
    friend KArchiveDirectory* KAr_FindOrCreate(KAr* self, const libqt_string path);
    friend KArchiveDirectory* KAr_QBaseFindOrCreate(KAr* self, const libqt_string path);
    friend void KAr_SetDevice(KAr* self, QIODevice* dev);
    friend void KAr_QBaseSetDevice(KAr* self, QIODevice* dev);
    friend void KAr_SetRootDir(KAr* self, KArchiveDirectory* rootDir);
    friend void KAr_QBaseSetRootDir(KAr* self, KArchiveDirectory* rootDir);
};

#endif
