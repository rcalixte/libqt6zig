#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKTAR_H
#define SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKTAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTar so that we can call protected methods
class VirtualKTar final : public KTar {

  public:
    // Virtual class boolean flag
    bool isVirtualKTar = true;

    // Virtual class public types (including callbacks)
    using KTar_DoWriteSymLink_Callback = bool (*)(KTar*, libqt_string, libqt_string, libqt_string, libqt_string, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KTar_DoWriteDir_Callback = bool (*)(KTar*, libqt_string, libqt_string, libqt_string, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KTar_DoPrepareWriting_Callback = bool (*)(KTar*, libqt_string, libqt_string, libqt_string, long long, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KTar_DoFinishWriting_Callback = bool (*)(KTar*, long long);
    using KTar_OpenArchive_Callback = bool (*)(KTar*, int);
    using KTar_CloseArchive_Callback = bool (*)();
    using KTar_CreateDevice_Callback = bool (*)(KTar*, int);
    using KTar_VirtualHook_Callback = void (*)(KTar*, int, void*);
    using KTar_Open_Callback = bool (*)(KTar*, int);
    using KTar_Close_Callback = bool (*)();
    using KTar_RootDir_Callback = KArchiveDirectory* (*)();
    using KTar_DoWriteData_Callback = bool (*)(KTar*, const char*, long long);
    using KTar_SetErrorString_Callback = void (*)(KTar*, libqt_string);
    using KTar_FindOrCreate_Callback = KArchiveDirectory* (*)(KTar*, libqt_string);
    using KTar_SetDevice_Callback = void (*)(KTar*, QIODevice*);
    using KTar_SetRootDir_Callback = void (*)(KTar*, KArchiveDirectory*);

  protected:
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
    KTar_SetErrorString_Callback ktar_seterrorstring_callback = nullptr;
    KTar_FindOrCreate_Callback ktar_findorcreate_callback = nullptr;
    KTar_SetDevice_Callback ktar_setdevice_callback = nullptr;
    KTar_SetRootDir_Callback ktar_setrootdir_callback = nullptr;

    // Instance base flags
    mutable bool ktar_dowritesymlink_isbase = false;
    mutable bool ktar_dowritedir_isbase = false;
    mutable bool ktar_dopreparewriting_isbase = false;
    mutable bool ktar_dofinishwriting_isbase = false;
    mutable bool ktar_openarchive_isbase = false;
    mutable bool ktar_closearchive_isbase = false;
    mutable bool ktar_createdevice_isbase = false;
    mutable bool ktar_virtualhook_isbase = false;
    mutable bool ktar_open_isbase = false;
    mutable bool ktar_close_isbase = false;
    mutable bool ktar_rootdir_isbase = false;
    mutable bool ktar_dowritedata_isbase = false;
    mutable bool ktar_seterrorstring_isbase = false;
    mutable bool ktar_findorcreate_isbase = false;
    mutable bool ktar_setdevice_isbase = false;
    mutable bool ktar_setrootdir_isbase = false;

  public:
    VirtualKTar(const QString& filename) : KTar(filename) {};
    VirtualKTar(QIODevice* dev) : KTar(dev) {};
    VirtualKTar(const KTar& param1) : KTar(param1) {};
    VirtualKTar(const QString& filename, const QString& mimetype) : KTar(filename, mimetype) {};

    ~VirtualKTar() {
        ktar_dowritesymlink_callback = nullptr;
        ktar_dowritedir_callback = nullptr;
        ktar_dopreparewriting_callback = nullptr;
        ktar_dofinishwriting_callback = nullptr;
        ktar_openarchive_callback = nullptr;
        ktar_closearchive_callback = nullptr;
        ktar_createdevice_callback = nullptr;
        ktar_virtualhook_callback = nullptr;
        ktar_open_callback = nullptr;
        ktar_close_callback = nullptr;
        ktar_rootdir_callback = nullptr;
        ktar_dowritedata_callback = nullptr;
        ktar_seterrorstring_callback = nullptr;
        ktar_findorcreate_callback = nullptr;
        ktar_setdevice_callback = nullptr;
        ktar_setrootdir_callback = nullptr;
    }

    // Callback setters
    inline void setKTar_DoWriteSymLink_Callback(KTar_DoWriteSymLink_Callback cb) { ktar_dowritesymlink_callback = cb; }
    inline void setKTar_DoWriteDir_Callback(KTar_DoWriteDir_Callback cb) { ktar_dowritedir_callback = cb; }
    inline void setKTar_DoPrepareWriting_Callback(KTar_DoPrepareWriting_Callback cb) { ktar_dopreparewriting_callback = cb; }
    inline void setKTar_DoFinishWriting_Callback(KTar_DoFinishWriting_Callback cb) { ktar_dofinishwriting_callback = cb; }
    inline void setKTar_OpenArchive_Callback(KTar_OpenArchive_Callback cb) { ktar_openarchive_callback = cb; }
    inline void setKTar_CloseArchive_Callback(KTar_CloseArchive_Callback cb) { ktar_closearchive_callback = cb; }
    inline void setKTar_CreateDevice_Callback(KTar_CreateDevice_Callback cb) { ktar_createdevice_callback = cb; }
    inline void setKTar_VirtualHook_Callback(KTar_VirtualHook_Callback cb) { ktar_virtualhook_callback = cb; }
    inline void setKTar_Open_Callback(KTar_Open_Callback cb) { ktar_open_callback = cb; }
    inline void setKTar_Close_Callback(KTar_Close_Callback cb) { ktar_close_callback = cb; }
    inline void setKTar_RootDir_Callback(KTar_RootDir_Callback cb) { ktar_rootdir_callback = cb; }
    inline void setKTar_DoWriteData_Callback(KTar_DoWriteData_Callback cb) { ktar_dowritedata_callback = cb; }
    inline void setKTar_SetErrorString_Callback(KTar_SetErrorString_Callback cb) { ktar_seterrorstring_callback = cb; }
    inline void setKTar_FindOrCreate_Callback(KTar_FindOrCreate_Callback cb) { ktar_findorcreate_callback = cb; }
    inline void setKTar_SetDevice_Callback(KTar_SetDevice_Callback cb) { ktar_setdevice_callback = cb; }
    inline void setKTar_SetRootDir_Callback(KTar_SetRootDir_Callback cb) { ktar_setrootdir_callback = cb; }

    // Base flag setters
    inline void setKTar_DoWriteSymLink_IsBase(bool value) const { ktar_dowritesymlink_isbase = value; }
    inline void setKTar_DoWriteDir_IsBase(bool value) const { ktar_dowritedir_isbase = value; }
    inline void setKTar_DoPrepareWriting_IsBase(bool value) const { ktar_dopreparewriting_isbase = value; }
    inline void setKTar_DoFinishWriting_IsBase(bool value) const { ktar_dofinishwriting_isbase = value; }
    inline void setKTar_OpenArchive_IsBase(bool value) const { ktar_openarchive_isbase = value; }
    inline void setKTar_CloseArchive_IsBase(bool value) const { ktar_closearchive_isbase = value; }
    inline void setKTar_CreateDevice_IsBase(bool value) const { ktar_createdevice_isbase = value; }
    inline void setKTar_VirtualHook_IsBase(bool value) const { ktar_virtualhook_isbase = value; }
    inline void setKTar_Open_IsBase(bool value) const { ktar_open_isbase = value; }
    inline void setKTar_Close_IsBase(bool value) const { ktar_close_isbase = value; }
    inline void setKTar_RootDir_IsBase(bool value) const { ktar_rootdir_isbase = value; }
    inline void setKTar_DoWriteData_IsBase(bool value) const { ktar_dowritedata_isbase = value; }
    inline void setKTar_SetErrorString_IsBase(bool value) const { ktar_seterrorstring_isbase = value; }
    inline void setKTar_FindOrCreate_IsBase(bool value) const { ktar_findorcreate_isbase = value; }
    inline void setKTar_SetDevice_IsBase(bool value) const { ktar_setdevice_isbase = value; }
    inline void setKTar_SetRootDir_IsBase(bool value) const { ktar_setrootdir_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteSymLink(const QString& name, const QString& target, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (ktar_dowritesymlink_isbase) {
            ktar_dowritesymlink_isbase = false;
            return KTar::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
        } else if (ktar_dowritesymlink_callback != nullptr) {
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

            bool callback_ret = ktar_dowritesymlink_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            return callback_ret;
        } else {
            return KTar::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteDir(const QString& name, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (ktar_dowritedir_isbase) {
            ktar_dowritedir_isbase = false;
            return KTar::doWriteDir(name, user, group, perm, atime, mtime, ctime);
        } else if (ktar_dowritedir_callback != nullptr) {
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

            bool callback_ret = ktar_dowritedir_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
            return callback_ret;
        } else {
            return KTar::doWriteDir(name, user, group, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doPrepareWriting(const QString& name, const QString& user, const QString& group, qint64 size, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (ktar_dopreparewriting_isbase) {
            ktar_dopreparewriting_isbase = false;
            return KTar::doPrepareWriting(name, user, group, size, perm, atime, mtime, ctime);
        } else if (ktar_dopreparewriting_callback != nullptr) {
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

            bool callback_ret = ktar_dopreparewriting_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            return callback_ret;
        } else {
            return KTar::doPrepareWriting(name, user, group, size, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doFinishWriting(qint64 size) override {
        if (ktar_dofinishwriting_isbase) {
            ktar_dofinishwriting_isbase = false;
            return KTar::doFinishWriting(size);
        } else if (ktar_dofinishwriting_callback != nullptr) {
            long long cbval1 = static_cast<long long>(size);

            bool callback_ret = ktar_dofinishwriting_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTar::doFinishWriting(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openArchive(QIODevice::OpenMode mode) override {
        if (ktar_openarchive_isbase) {
            ktar_openarchive_isbase = false;
            return KTar::openArchive(mode);
        } else if (ktar_openarchive_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = ktar_openarchive_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTar::openArchive(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeArchive() override {
        if (ktar_closearchive_isbase) {
            ktar_closearchive_isbase = false;
            return KTar::closeArchive();
        } else if (ktar_closearchive_callback != nullptr) {
            bool callback_ret = ktar_closearchive_callback();
            return callback_ret;
        } else {
            return KTar::closeArchive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool createDevice(QIODevice::OpenMode mode) override {
        if (ktar_createdevice_isbase) {
            ktar_createdevice_isbase = false;
            return KTar::createDevice(mode);
        } else if (ktar_createdevice_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = ktar_createdevice_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTar::createDevice(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (ktar_virtualhook_isbase) {
            ktar_virtualhook_isbase = false;
            KTar::virtual_hook(id, data);
        } else if (ktar_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            ktar_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KTar::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (ktar_open_isbase) {
            ktar_open_isbase = false;
            return KTar::open(mode);
        } else if (ktar_open_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = ktar_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTar::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool close() override {
        if (ktar_close_isbase) {
            ktar_close_isbase = false;
            return KTar::close();
        } else if (ktar_close_callback != nullptr) {
            bool callback_ret = ktar_close_callback();
            return callback_ret;
        } else {
            return KTar::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KArchiveDirectory* rootDir() override {
        if (ktar_rootdir_isbase) {
            ktar_rootdir_isbase = false;
            return KTar::rootDir();
        } else if (ktar_rootdir_callback != nullptr) {
            KArchiveDirectory* callback_ret = ktar_rootdir_callback();
            return callback_ret;
        } else {
            return KTar::rootDir();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteData(const char* data, qint64 size) override {
        if (ktar_dowritedata_isbase) {
            ktar_dowritedata_isbase = false;
            return KTar::doWriteData(data, size);
        } else if (ktar_dowritedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(size);

            bool callback_ret = ktar_dowritedata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTar::doWriteData(data, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorStr) {
        if (ktar_seterrorstring_isbase) {
            ktar_seterrorstring_isbase = false;
            KTar::setErrorString(errorStr);
        } else if (ktar_seterrorstring_callback != nullptr) {
            const QString errorStr_ret = errorStr;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorStr_b = errorStr_ret.toUtf8();
            libqt_string errorStr_str;
            errorStr_str.len = errorStr_b.length();
            errorStr_str.data = static_cast<const char*>(malloc(errorStr_str.len + 1));
            memcpy((void*)errorStr_str.data, errorStr_b.data(), errorStr_str.len);
            ((char*)errorStr_str.data)[errorStr_str.len] = '\0';
            libqt_string cbval1 = errorStr_str;

            ktar_seterrorstring_callback(this, cbval1);
        } else {
            KTar::setErrorString(errorStr);
        }
    }

    // Virtual method for C ABI access and custom callback
    KArchiveDirectory* findOrCreate(const QString& path) {
        if (ktar_findorcreate_isbase) {
            ktar_findorcreate_isbase = false;
            return KTar::findOrCreate(path);
        } else if (ktar_findorcreate_callback != nullptr) {
            const QString path_ret = path;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray path_b = path_ret.toUtf8();
            libqt_string path_str;
            path_str.len = path_b.length();
            path_str.data = static_cast<const char*>(malloc(path_str.len + 1));
            memcpy((void*)path_str.data, path_b.data(), path_str.len);
            ((char*)path_str.data)[path_str.len] = '\0';
            libqt_string cbval1 = path_str;

            KArchiveDirectory* callback_ret = ktar_findorcreate_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTar::findOrCreate(path);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDevice(QIODevice* dev) {
        if (ktar_setdevice_isbase) {
            ktar_setdevice_isbase = false;
            KTar::setDevice(dev);
        } else if (ktar_setdevice_callback != nullptr) {
            QIODevice* cbval1 = dev;

            ktar_setdevice_callback(this, cbval1);
        } else {
            KTar::setDevice(dev);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRootDir(KArchiveDirectory* rootDir) {
        if (ktar_setrootdir_isbase) {
            ktar_setrootdir_isbase = false;
            KTar::setRootDir(rootDir);
        } else if (ktar_setrootdir_callback != nullptr) {
            KArchiveDirectory* cbval1 = rootDir;

            ktar_setrootdir_callback(this, cbval1);
        } else {
            KTar::setRootDir(rootDir);
        }
    }

    // Friend functions
    friend bool KTar_DoWriteSymLink(KTar* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KTar_QBaseDoWriteSymLink(KTar* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KTar_DoWriteDir(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KTar_QBaseDoWriteDir(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KTar_DoPrepareWriting(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KTar_QBaseDoPrepareWriting(KTar* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KTar_DoFinishWriting(KTar* self, long long size);
    friend bool KTar_QBaseDoFinishWriting(KTar* self, long long size);
    friend bool KTar_OpenArchive(KTar* self, int mode);
    friend bool KTar_QBaseOpenArchive(KTar* self, int mode);
    friend bool KTar_CloseArchive(KTar* self);
    friend bool KTar_QBaseCloseArchive(KTar* self);
    friend bool KTar_CreateDevice(KTar* self, int mode);
    friend bool KTar_QBaseCreateDevice(KTar* self, int mode);
    friend void KTar_VirtualHook(KTar* self, int id, void* data);
    friend void KTar_QBaseVirtualHook(KTar* self, int id, void* data);
    friend KArchiveDirectory* KTar_RootDir(KTar* self);
    friend KArchiveDirectory* KTar_QBaseRootDir(KTar* self);
    friend bool KTar_DoWriteData(KTar* self, const char* data, long long size);
    friend bool KTar_QBaseDoWriteData(KTar* self, const char* data, long long size);
    friend void KTar_SetErrorString(KTar* self, const libqt_string errorStr);
    friend void KTar_QBaseSetErrorString(KTar* self, const libqt_string errorStr);
    friend KArchiveDirectory* KTar_FindOrCreate(KTar* self, const libqt_string path);
    friend KArchiveDirectory* KTar_QBaseFindOrCreate(KTar* self, const libqt_string path);
    friend void KTar_SetDevice(KTar* self, QIODevice* dev);
    friend void KTar_QBaseSetDevice(KTar* self, QIODevice* dev);
    friend void KTar_SetRootDir(KTar* self, KArchiveDirectory* rootDir);
    friend void KTar_QBaseSetRootDir(KTar* self, KArchiveDirectory* rootDir);
};

#endif
