#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBVIRTUALK7ZIP_H
#define SRC_EXTRAS_KARCHIVEC_LIBVIRTUALK7ZIP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of K7Zip so that we can call protected methods
class VirtualK7Zip final : public K7Zip {

  public:
    // Virtual class boolean flag
    bool isVirtualK7Zip = true;

    // Virtual class public types (including callbacks)
    using K7Zip_DoWriteSymLink_Callback = bool (*)(K7Zip*, const char*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using K7Zip_DoWriteDir_Callback = bool (*)(K7Zip*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using K7Zip_DoPrepareWriting_Callback = bool (*)(K7Zip*, const char*, const char*, const char*, long long, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using K7Zip_DoFinishWriting_Callback = bool (*)(K7Zip*, long long);
    using K7Zip_DoWriteData_Callback = bool (*)(K7Zip*, const char*, long long);
    using K7Zip_OpenArchive_Callback = bool (*)(K7Zip*, int);
    using K7Zip_CloseArchive_Callback = bool (*)();
    using K7Zip_VirtualHook_Callback = void (*)(K7Zip*, int, void*);
    using K7Zip_Open_Callback = bool (*)(K7Zip*, int);
    using K7Zip_Close_Callback = bool (*)();
    using K7Zip_RootDir_Callback = KArchiveDirectory* (*)();
    using K7Zip_CreateDevice_Callback = bool (*)(K7Zip*, int);
    using K7Zip_SetErrorString_Callback = void (*)(K7Zip*, const char*);
    using K7Zip_FindOrCreate_Callback = KArchiveDirectory* (*)(K7Zip*, const char*);
    using K7Zip_SetDevice_Callback = void (*)(K7Zip*, QIODevice*);
    using K7Zip_SetRootDir_Callback = void (*)(K7Zip*, KArchiveDirectory*);

  protected:
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
    K7Zip_SetErrorString_Callback k7zip_seterrorstring_callback = nullptr;
    K7Zip_FindOrCreate_Callback k7zip_findorcreate_callback = nullptr;
    K7Zip_SetDevice_Callback k7zip_setdevice_callback = nullptr;
    K7Zip_SetRootDir_Callback k7zip_setrootdir_callback = nullptr;

    // Instance base flags
    mutable bool k7zip_dowritesymlink_isbase = false;
    mutable bool k7zip_dowritedir_isbase = false;
    mutable bool k7zip_dopreparewriting_isbase = false;
    mutable bool k7zip_dofinishwriting_isbase = false;
    mutable bool k7zip_dowritedata_isbase = false;
    mutable bool k7zip_openarchive_isbase = false;
    mutable bool k7zip_closearchive_isbase = false;
    mutable bool k7zip_virtualhook_isbase = false;
    mutable bool k7zip_open_isbase = false;
    mutable bool k7zip_close_isbase = false;
    mutable bool k7zip_rootdir_isbase = false;
    mutable bool k7zip_createdevice_isbase = false;
    mutable bool k7zip_seterrorstring_isbase = false;
    mutable bool k7zip_findorcreate_isbase = false;
    mutable bool k7zip_setdevice_isbase = false;
    mutable bool k7zip_setrootdir_isbase = false;

  public:
    VirtualK7Zip(const QString& filename) : K7Zip(filename) {};
    VirtualK7Zip(QIODevice* dev) : K7Zip(dev) {};
    VirtualK7Zip(const K7Zip& param1) : K7Zip(param1) {};

    ~VirtualK7Zip() {
        k7zip_dowritesymlink_callback = nullptr;
        k7zip_dowritedir_callback = nullptr;
        k7zip_dopreparewriting_callback = nullptr;
        k7zip_dofinishwriting_callback = nullptr;
        k7zip_dowritedata_callback = nullptr;
        k7zip_openarchive_callback = nullptr;
        k7zip_closearchive_callback = nullptr;
        k7zip_virtualhook_callback = nullptr;
        k7zip_open_callback = nullptr;
        k7zip_close_callback = nullptr;
        k7zip_rootdir_callback = nullptr;
        k7zip_createdevice_callback = nullptr;
        k7zip_seterrorstring_callback = nullptr;
        k7zip_findorcreate_callback = nullptr;
        k7zip_setdevice_callback = nullptr;
        k7zip_setrootdir_callback = nullptr;
    }

    // Callback setters
    inline void setK7Zip_DoWriteSymLink_Callback(K7Zip_DoWriteSymLink_Callback cb) { k7zip_dowritesymlink_callback = cb; }
    inline void setK7Zip_DoWriteDir_Callback(K7Zip_DoWriteDir_Callback cb) { k7zip_dowritedir_callback = cb; }
    inline void setK7Zip_DoPrepareWriting_Callback(K7Zip_DoPrepareWriting_Callback cb) { k7zip_dopreparewriting_callback = cb; }
    inline void setK7Zip_DoFinishWriting_Callback(K7Zip_DoFinishWriting_Callback cb) { k7zip_dofinishwriting_callback = cb; }
    inline void setK7Zip_DoWriteData_Callback(K7Zip_DoWriteData_Callback cb) { k7zip_dowritedata_callback = cb; }
    inline void setK7Zip_OpenArchive_Callback(K7Zip_OpenArchive_Callback cb) { k7zip_openarchive_callback = cb; }
    inline void setK7Zip_CloseArchive_Callback(K7Zip_CloseArchive_Callback cb) { k7zip_closearchive_callback = cb; }
    inline void setK7Zip_VirtualHook_Callback(K7Zip_VirtualHook_Callback cb) { k7zip_virtualhook_callback = cb; }
    inline void setK7Zip_Open_Callback(K7Zip_Open_Callback cb) { k7zip_open_callback = cb; }
    inline void setK7Zip_Close_Callback(K7Zip_Close_Callback cb) { k7zip_close_callback = cb; }
    inline void setK7Zip_RootDir_Callback(K7Zip_RootDir_Callback cb) { k7zip_rootdir_callback = cb; }
    inline void setK7Zip_CreateDevice_Callback(K7Zip_CreateDevice_Callback cb) { k7zip_createdevice_callback = cb; }
    inline void setK7Zip_SetErrorString_Callback(K7Zip_SetErrorString_Callback cb) { k7zip_seterrorstring_callback = cb; }
    inline void setK7Zip_FindOrCreate_Callback(K7Zip_FindOrCreate_Callback cb) { k7zip_findorcreate_callback = cb; }
    inline void setK7Zip_SetDevice_Callback(K7Zip_SetDevice_Callback cb) { k7zip_setdevice_callback = cb; }
    inline void setK7Zip_SetRootDir_Callback(K7Zip_SetRootDir_Callback cb) { k7zip_setrootdir_callback = cb; }

    // Base flag setters
    inline void setK7Zip_DoWriteSymLink_IsBase(bool value) const { k7zip_dowritesymlink_isbase = value; }
    inline void setK7Zip_DoWriteDir_IsBase(bool value) const { k7zip_dowritedir_isbase = value; }
    inline void setK7Zip_DoPrepareWriting_IsBase(bool value) const { k7zip_dopreparewriting_isbase = value; }
    inline void setK7Zip_DoFinishWriting_IsBase(bool value) const { k7zip_dofinishwriting_isbase = value; }
    inline void setK7Zip_DoWriteData_IsBase(bool value) const { k7zip_dowritedata_isbase = value; }
    inline void setK7Zip_OpenArchive_IsBase(bool value) const { k7zip_openarchive_isbase = value; }
    inline void setK7Zip_CloseArchive_IsBase(bool value) const { k7zip_closearchive_isbase = value; }
    inline void setK7Zip_VirtualHook_IsBase(bool value) const { k7zip_virtualhook_isbase = value; }
    inline void setK7Zip_Open_IsBase(bool value) const { k7zip_open_isbase = value; }
    inline void setK7Zip_Close_IsBase(bool value) const { k7zip_close_isbase = value; }
    inline void setK7Zip_RootDir_IsBase(bool value) const { k7zip_rootdir_isbase = value; }
    inline void setK7Zip_CreateDevice_IsBase(bool value) const { k7zip_createdevice_isbase = value; }
    inline void setK7Zip_SetErrorString_IsBase(bool value) const { k7zip_seterrorstring_isbase = value; }
    inline void setK7Zip_FindOrCreate_IsBase(bool value) const { k7zip_findorcreate_isbase = value; }
    inline void setK7Zip_SetDevice_IsBase(bool value) const { k7zip_setdevice_isbase = value; }
    inline void setK7Zip_SetRootDir_IsBase(bool value) const { k7zip_setrootdir_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteSymLink(const QString& name, const QString& target, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (k7zip_dowritesymlink_isbase) {
            k7zip_dowritesymlink_isbase = false;
            return K7Zip::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
        } else if (k7zip_dowritesymlink_callback != nullptr) {
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

            bool callback_ret = k7zip_dowritesymlink_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(target_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        } else {
            return K7Zip::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteDir(const QString& name, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (k7zip_dowritedir_isbase) {
            k7zip_dowritedir_isbase = false;
            return K7Zip::doWriteDir(name, user, group, perm, atime, mtime, ctime);
        } else if (k7zip_dowritedir_callback != nullptr) {
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

            bool callback_ret = k7zip_dowritedir_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        } else {
            return K7Zip::doWriteDir(name, user, group, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doPrepareWriting(const QString& name, const QString& user, const QString& group, qint64 size, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (k7zip_dopreparewriting_isbase) {
            k7zip_dopreparewriting_isbase = false;
            return K7Zip::doPrepareWriting(name, user, group, size, perm, atime, mtime, ctime);
        } else if (k7zip_dopreparewriting_callback != nullptr) {
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
            const QDateTime& ctime_ret = ctime;
            // Cast returned reference into pointer
            QDateTime* cbval8 = const_cast<QDateTime*>(&ctime_ret);

            bool callback_ret = k7zip_dopreparewriting_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        } else {
            return K7Zip::doPrepareWriting(name, user, group, size, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doFinishWriting(qint64 size) override {
        if (k7zip_dofinishwriting_isbase) {
            k7zip_dofinishwriting_isbase = false;
            return K7Zip::doFinishWriting(size);
        } else if (k7zip_dofinishwriting_callback != nullptr) {
            long long cbval1 = static_cast<long long>(size);

            bool callback_ret = k7zip_dofinishwriting_callback(this, cbval1);
            return callback_ret;
        } else {
            return K7Zip::doFinishWriting(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteData(const char* data, qint64 size) override {
        if (k7zip_dowritedata_isbase) {
            k7zip_dowritedata_isbase = false;
            return K7Zip::doWriteData(data, size);
        } else if (k7zip_dowritedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(size);

            bool callback_ret = k7zip_dowritedata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return K7Zip::doWriteData(data, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openArchive(QIODevice::OpenMode mode) override {
        if (k7zip_openarchive_isbase) {
            k7zip_openarchive_isbase = false;
            return K7Zip::openArchive(mode);
        } else if (k7zip_openarchive_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = k7zip_openarchive_callback(this, cbval1);
            return callback_ret;
        } else {
            return K7Zip::openArchive(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeArchive() override {
        if (k7zip_closearchive_isbase) {
            k7zip_closearchive_isbase = false;
            return K7Zip::closeArchive();
        } else if (k7zip_closearchive_callback != nullptr) {
            bool callback_ret = k7zip_closearchive_callback();
            return callback_ret;
        } else {
            return K7Zip::closeArchive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (k7zip_virtualhook_isbase) {
            k7zip_virtualhook_isbase = false;
            K7Zip::virtual_hook(id, data);
        } else if (k7zip_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            k7zip_virtualhook_callback(this, cbval1, cbval2);
        } else {
            K7Zip::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (k7zip_open_isbase) {
            k7zip_open_isbase = false;
            return K7Zip::open(mode);
        } else if (k7zip_open_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = k7zip_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return K7Zip::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool close() override {
        if (k7zip_close_isbase) {
            k7zip_close_isbase = false;
            return K7Zip::close();
        } else if (k7zip_close_callback != nullptr) {
            bool callback_ret = k7zip_close_callback();
            return callback_ret;
        } else {
            return K7Zip::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KArchiveDirectory* rootDir() override {
        if (k7zip_rootdir_isbase) {
            k7zip_rootdir_isbase = false;
            return K7Zip::rootDir();
        } else if (k7zip_rootdir_callback != nullptr) {
            KArchiveDirectory* callback_ret = k7zip_rootdir_callback();
            return callback_ret;
        } else {
            return K7Zip::rootDir();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool createDevice(QIODevice::OpenMode mode) override {
        if (k7zip_createdevice_isbase) {
            k7zip_createdevice_isbase = false;
            return K7Zip::createDevice(mode);
        } else if (k7zip_createdevice_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = k7zip_createdevice_callback(this, cbval1);
            return callback_ret;
        } else {
            return K7Zip::createDevice(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorStr) {
        if (k7zip_seterrorstring_isbase) {
            k7zip_seterrorstring_isbase = false;
            K7Zip::setErrorString(errorStr);
        } else if (k7zip_seterrorstring_callback != nullptr) {
            const QString errorStr_ret = errorStr;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray errorStr_b = errorStr_ret.toUtf8();
            auto errorStr_str_len = errorStr_b.length();
            const char* errorStr_str = static_cast<const char*>(malloc(errorStr_str_len + 1));
            memcpy((void*)errorStr_str, errorStr_b.data(), errorStr_str_len);
            ((char*)errorStr_str)[errorStr_str_len] = '\0';
            const char* cbval1 = errorStr_str;

            k7zip_seterrorstring_callback(this, cbval1);
            libqt_free(errorStr_str);
        } else {
            K7Zip::setErrorString(errorStr);
        }
    }

    // Virtual method for C ABI access and custom callback
    KArchiveDirectory* findOrCreate(const QString& path) {
        if (k7zip_findorcreate_isbase) {
            k7zip_findorcreate_isbase = false;
            return K7Zip::findOrCreate(path);
        } else if (k7zip_findorcreate_callback != nullptr) {
            const QString path_ret = path;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray path_b = path_ret.toUtf8();
            auto path_str_len = path_b.length();
            const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
            memcpy((void*)path_str, path_b.data(), path_str_len);
            ((char*)path_str)[path_str_len] = '\0';
            const char* cbval1 = path_str;

            KArchiveDirectory* callback_ret = k7zip_findorcreate_callback(this, cbval1);
            libqt_free(path_str);
            return callback_ret;
        } else {
            return K7Zip::findOrCreate(path);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDevice(QIODevice* dev) {
        if (k7zip_setdevice_isbase) {
            k7zip_setdevice_isbase = false;
            K7Zip::setDevice(dev);
        } else if (k7zip_setdevice_callback != nullptr) {
            QIODevice* cbval1 = dev;

            k7zip_setdevice_callback(this, cbval1);
        } else {
            K7Zip::setDevice(dev);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRootDir(KArchiveDirectory* rootDir) {
        if (k7zip_setrootdir_isbase) {
            k7zip_setrootdir_isbase = false;
            K7Zip::setRootDir(rootDir);
        } else if (k7zip_setrootdir_callback != nullptr) {
            KArchiveDirectory* cbval1 = rootDir;

            k7zip_setrootdir_callback(this, cbval1);
        } else {
            K7Zip::setRootDir(rootDir);
        }
    }

    // Friend functions
    friend bool K7Zip_DoWriteSymLink(K7Zip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool K7Zip_QBaseDoWriteSymLink(K7Zip* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool K7Zip_DoWriteDir(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool K7Zip_QBaseDoWriteDir(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool K7Zip_DoPrepareWriting(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool K7Zip_QBaseDoPrepareWriting(K7Zip* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool K7Zip_DoFinishWriting(K7Zip* self, long long size);
    friend bool K7Zip_QBaseDoFinishWriting(K7Zip* self, long long size);
    friend bool K7Zip_DoWriteData(K7Zip* self, const char* data, long long size);
    friend bool K7Zip_QBaseDoWriteData(K7Zip* self, const char* data, long long size);
    friend bool K7Zip_OpenArchive(K7Zip* self, int mode);
    friend bool K7Zip_QBaseOpenArchive(K7Zip* self, int mode);
    friend bool K7Zip_CloseArchive(K7Zip* self);
    friend bool K7Zip_QBaseCloseArchive(K7Zip* self);
    friend void K7Zip_VirtualHook(K7Zip* self, int id, void* data);
    friend void K7Zip_QBaseVirtualHook(K7Zip* self, int id, void* data);
    friend KArchiveDirectory* K7Zip_RootDir(K7Zip* self);
    friend KArchiveDirectory* K7Zip_QBaseRootDir(K7Zip* self);
    friend bool K7Zip_CreateDevice(K7Zip* self, int mode);
    friend bool K7Zip_QBaseCreateDevice(K7Zip* self, int mode);
    friend void K7Zip_SetErrorString(K7Zip* self, const libqt_string errorStr);
    friend void K7Zip_QBaseSetErrorString(K7Zip* self, const libqt_string errorStr);
    friend KArchiveDirectory* K7Zip_FindOrCreate(K7Zip* self, const libqt_string path);
    friend KArchiveDirectory* K7Zip_QBaseFindOrCreate(K7Zip* self, const libqt_string path);
    friend void K7Zip_SetDevice(K7Zip* self, QIODevice* dev);
    friend void K7Zip_QBaseSetDevice(K7Zip* self, QIODevice* dev);
    friend void K7Zip_SetRootDir(K7Zip* self, KArchiveDirectory* rootDir);
    friend void K7Zip_QBaseSetRootDir(K7Zip* self, KArchiveDirectory* rootDir);
};

#endif
