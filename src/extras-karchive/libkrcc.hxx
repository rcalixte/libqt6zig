#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKRCC_H
#define SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKRCC_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRcc so that we can call protected methods
class VirtualKRcc final : public KRcc {

  public:
    // Virtual class boolean flag
    bool isVirtualKRcc = true;

    // Virtual class public types (including callbacks)
    using KRcc_DoPrepareWriting_Callback = bool (*)(KRcc*, const char*, const char*, const char*, long long, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KRcc_DoFinishWriting_Callback = bool (*)(KRcc*, long long);
    using KRcc_DoWriteDir_Callback = bool (*)(KRcc*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KRcc_DoWriteSymLink_Callback = bool (*)(KRcc*, const char*, const char*, const char*, const char*, mode_t, QDateTime*, QDateTime*, QDateTime*);
    using KRcc_OpenArchive_Callback = bool (*)(KRcc*, int);
    using KRcc_CloseArchive_Callback = bool (*)();
    using KRcc_VirtualHook_Callback = void (*)(KRcc*, int, void*);
    using KRcc_Open_Callback = bool (*)(KRcc*, int);
    using KRcc_Close_Callback = bool (*)();
    using KRcc_RootDir_Callback = KArchiveDirectory* (*)();
    using KRcc_DoWriteData_Callback = bool (*)(KRcc*, const char*, long long);
    using KRcc_CreateDevice_Callback = bool (*)(KRcc*, int);
    using KRcc_SetErrorString_Callback = void (*)(KRcc*, const char*);
    using KRcc_FindOrCreate_Callback = KArchiveDirectory* (*)(KRcc*, const char*);
    using KRcc_SetDevice_Callback = void (*)(KRcc*, QIODevice*);
    using KRcc_SetRootDir_Callback = void (*)(KRcc*, KArchiveDirectory*);

  protected:
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
    KRcc_SetErrorString_Callback krcc_seterrorstring_callback = nullptr;
    KRcc_FindOrCreate_Callback krcc_findorcreate_callback = nullptr;
    KRcc_SetDevice_Callback krcc_setdevice_callback = nullptr;
    KRcc_SetRootDir_Callback krcc_setrootdir_callback = nullptr;

    // Instance base flags
    mutable bool krcc_dopreparewriting_isbase = false;
    mutable bool krcc_dofinishwriting_isbase = false;
    mutable bool krcc_dowritedir_isbase = false;
    mutable bool krcc_dowritesymlink_isbase = false;
    mutable bool krcc_openarchive_isbase = false;
    mutable bool krcc_closearchive_isbase = false;
    mutable bool krcc_virtualhook_isbase = false;
    mutable bool krcc_open_isbase = false;
    mutable bool krcc_close_isbase = false;
    mutable bool krcc_rootdir_isbase = false;
    mutable bool krcc_dowritedata_isbase = false;
    mutable bool krcc_createdevice_isbase = false;
    mutable bool krcc_seterrorstring_isbase = false;
    mutable bool krcc_findorcreate_isbase = false;
    mutable bool krcc_setdevice_isbase = false;
    mutable bool krcc_setrootdir_isbase = false;

  public:
    VirtualKRcc(const QString& filename) : KRcc(filename) {};
    VirtualKRcc(const KRcc& param1) : KRcc(param1) {};

    ~VirtualKRcc() {
        krcc_dopreparewriting_callback = nullptr;
        krcc_dofinishwriting_callback = nullptr;
        krcc_dowritedir_callback = nullptr;
        krcc_dowritesymlink_callback = nullptr;
        krcc_openarchive_callback = nullptr;
        krcc_closearchive_callback = nullptr;
        krcc_virtualhook_callback = nullptr;
        krcc_open_callback = nullptr;
        krcc_close_callback = nullptr;
        krcc_rootdir_callback = nullptr;
        krcc_dowritedata_callback = nullptr;
        krcc_createdevice_callback = nullptr;
        krcc_seterrorstring_callback = nullptr;
        krcc_findorcreate_callback = nullptr;
        krcc_setdevice_callback = nullptr;
        krcc_setrootdir_callback = nullptr;
    }

    // Callback setters
    inline void setKRcc_DoPrepareWriting_Callback(KRcc_DoPrepareWriting_Callback cb) { krcc_dopreparewriting_callback = cb; }
    inline void setKRcc_DoFinishWriting_Callback(KRcc_DoFinishWriting_Callback cb) { krcc_dofinishwriting_callback = cb; }
    inline void setKRcc_DoWriteDir_Callback(KRcc_DoWriteDir_Callback cb) { krcc_dowritedir_callback = cb; }
    inline void setKRcc_DoWriteSymLink_Callback(KRcc_DoWriteSymLink_Callback cb) { krcc_dowritesymlink_callback = cb; }
    inline void setKRcc_OpenArchive_Callback(KRcc_OpenArchive_Callback cb) { krcc_openarchive_callback = cb; }
    inline void setKRcc_CloseArchive_Callback(KRcc_CloseArchive_Callback cb) { krcc_closearchive_callback = cb; }
    inline void setKRcc_VirtualHook_Callback(KRcc_VirtualHook_Callback cb) { krcc_virtualhook_callback = cb; }
    inline void setKRcc_Open_Callback(KRcc_Open_Callback cb) { krcc_open_callback = cb; }
    inline void setKRcc_Close_Callback(KRcc_Close_Callback cb) { krcc_close_callback = cb; }
    inline void setKRcc_RootDir_Callback(KRcc_RootDir_Callback cb) { krcc_rootdir_callback = cb; }
    inline void setKRcc_DoWriteData_Callback(KRcc_DoWriteData_Callback cb) { krcc_dowritedata_callback = cb; }
    inline void setKRcc_CreateDevice_Callback(KRcc_CreateDevice_Callback cb) { krcc_createdevice_callback = cb; }
    inline void setKRcc_SetErrorString_Callback(KRcc_SetErrorString_Callback cb) { krcc_seterrorstring_callback = cb; }
    inline void setKRcc_FindOrCreate_Callback(KRcc_FindOrCreate_Callback cb) { krcc_findorcreate_callback = cb; }
    inline void setKRcc_SetDevice_Callback(KRcc_SetDevice_Callback cb) { krcc_setdevice_callback = cb; }
    inline void setKRcc_SetRootDir_Callback(KRcc_SetRootDir_Callback cb) { krcc_setrootdir_callback = cb; }

    // Base flag setters
    inline void setKRcc_DoPrepareWriting_IsBase(bool value) const { krcc_dopreparewriting_isbase = value; }
    inline void setKRcc_DoFinishWriting_IsBase(bool value) const { krcc_dofinishwriting_isbase = value; }
    inline void setKRcc_DoWriteDir_IsBase(bool value) const { krcc_dowritedir_isbase = value; }
    inline void setKRcc_DoWriteSymLink_IsBase(bool value) const { krcc_dowritesymlink_isbase = value; }
    inline void setKRcc_OpenArchive_IsBase(bool value) const { krcc_openarchive_isbase = value; }
    inline void setKRcc_CloseArchive_IsBase(bool value) const { krcc_closearchive_isbase = value; }
    inline void setKRcc_VirtualHook_IsBase(bool value) const { krcc_virtualhook_isbase = value; }
    inline void setKRcc_Open_IsBase(bool value) const { krcc_open_isbase = value; }
    inline void setKRcc_Close_IsBase(bool value) const { krcc_close_isbase = value; }
    inline void setKRcc_RootDir_IsBase(bool value) const { krcc_rootdir_isbase = value; }
    inline void setKRcc_DoWriteData_IsBase(bool value) const { krcc_dowritedata_isbase = value; }
    inline void setKRcc_CreateDevice_IsBase(bool value) const { krcc_createdevice_isbase = value; }
    inline void setKRcc_SetErrorString_IsBase(bool value) const { krcc_seterrorstring_isbase = value; }
    inline void setKRcc_FindOrCreate_IsBase(bool value) const { krcc_findorcreate_isbase = value; }
    inline void setKRcc_SetDevice_IsBase(bool value) const { krcc_setdevice_isbase = value; }
    inline void setKRcc_SetRootDir_IsBase(bool value) const { krcc_setrootdir_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool doPrepareWriting(const QString& name, const QString& user, const QString& group, qint64 size, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (krcc_dopreparewriting_isbase) {
            krcc_dopreparewriting_isbase = false;
            return KRcc::doPrepareWriting(name, user, group, size, perm, atime, mtime, ctime);
        } else if (krcc_dopreparewriting_callback != nullptr) {
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

            bool callback_ret = krcc_dopreparewriting_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        } else {
            return KRcc::doPrepareWriting(name, user, group, size, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doFinishWriting(qint64 size) override {
        if (krcc_dofinishwriting_isbase) {
            krcc_dofinishwriting_isbase = false;
            return KRcc::doFinishWriting(size);
        } else if (krcc_dofinishwriting_callback != nullptr) {
            long long cbval1 = static_cast<long long>(size);

            bool callback_ret = krcc_dofinishwriting_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRcc::doFinishWriting(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteDir(const QString& name, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (krcc_dowritedir_isbase) {
            krcc_dowritedir_isbase = false;
            return KRcc::doWriteDir(name, user, group, perm, atime, mtime, ctime);
        } else if (krcc_dowritedir_callback != nullptr) {
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

            bool callback_ret = krcc_dowritedir_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
            libqt_free(name_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        } else {
            return KRcc::doWriteDir(name, user, group, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteSymLink(const QString& name, const QString& target, const QString& user, const QString& group, mode_t perm, const QDateTime& atime, const QDateTime& mtime, const QDateTime& ctime) override {
        if (krcc_dowritesymlink_isbase) {
            krcc_dowritesymlink_isbase = false;
            return KRcc::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
        } else if (krcc_dowritesymlink_callback != nullptr) {
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

            bool callback_ret = krcc_dowritesymlink_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(name_str);
            libqt_free(target_str);
            libqt_free(user_str);
            libqt_free(group_str);
            return callback_ret;
        } else {
            return KRcc::doWriteSymLink(name, target, user, group, perm, atime, mtime, ctime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openArchive(QIODevice::OpenMode mode) override {
        if (krcc_openarchive_isbase) {
            krcc_openarchive_isbase = false;
            return KRcc::openArchive(mode);
        } else if (krcc_openarchive_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = krcc_openarchive_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRcc::openArchive(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeArchive() override {
        if (krcc_closearchive_isbase) {
            krcc_closearchive_isbase = false;
            return KRcc::closeArchive();
        } else if (krcc_closearchive_callback != nullptr) {
            bool callback_ret = krcc_closearchive_callback();
            return callback_ret;
        } else {
            return KRcc::closeArchive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (krcc_virtualhook_isbase) {
            krcc_virtualhook_isbase = false;
            KRcc::virtual_hook(id, data);
        } else if (krcc_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            krcc_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KRcc::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (krcc_open_isbase) {
            krcc_open_isbase = false;
            return KRcc::open(mode);
        } else if (krcc_open_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = krcc_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRcc::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool close() override {
        if (krcc_close_isbase) {
            krcc_close_isbase = false;
            return KRcc::close();
        } else if (krcc_close_callback != nullptr) {
            bool callback_ret = krcc_close_callback();
            return callback_ret;
        } else {
            return KRcc::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KArchiveDirectory* rootDir() override {
        if (krcc_rootdir_isbase) {
            krcc_rootdir_isbase = false;
            return KRcc::rootDir();
        } else if (krcc_rootdir_callback != nullptr) {
            KArchiveDirectory* callback_ret = krcc_rootdir_callback();
            return callback_ret;
        } else {
            return KRcc::rootDir();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doWriteData(const char* data, qint64 size) override {
        if (krcc_dowritedata_isbase) {
            krcc_dowritedata_isbase = false;
            return KRcc::doWriteData(data, size);
        } else if (krcc_dowritedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(size);

            bool callback_ret = krcc_dowritedata_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KRcc::doWriteData(data, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool createDevice(QIODevice::OpenMode mode) override {
        if (krcc_createdevice_isbase) {
            krcc_createdevice_isbase = false;
            return KRcc::createDevice(mode);
        } else if (krcc_createdevice_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = krcc_createdevice_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRcc::createDevice(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorStr) {
        if (krcc_seterrorstring_isbase) {
            krcc_seterrorstring_isbase = false;
            KRcc::setErrorString(errorStr);
        } else if (krcc_seterrorstring_callback != nullptr) {
            const QString errorStr_ret = errorStr;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray errorStr_b = errorStr_ret.toUtf8();
            auto errorStr_str_len = errorStr_b.length();
            const char* errorStr_str = static_cast<const char*>(malloc(errorStr_str_len + 1));
            memcpy((void*)errorStr_str, errorStr_b.data(), errorStr_str_len);
            ((char*)errorStr_str)[errorStr_str_len] = '\0';
            const char* cbval1 = errorStr_str;

            krcc_seterrorstring_callback(this, cbval1);
            libqt_free(errorStr_str);
        } else {
            KRcc::setErrorString(errorStr);
        }
    }

    // Virtual method for C ABI access and custom callback
    KArchiveDirectory* findOrCreate(const QString& path) {
        if (krcc_findorcreate_isbase) {
            krcc_findorcreate_isbase = false;
            return KRcc::findOrCreate(path);
        } else if (krcc_findorcreate_callback != nullptr) {
            const QString path_ret = path;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray path_b = path_ret.toUtf8();
            auto path_str_len = path_b.length();
            const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
            memcpy((void*)path_str, path_b.data(), path_str_len);
            ((char*)path_str)[path_str_len] = '\0';
            const char* cbval1 = path_str;

            KArchiveDirectory* callback_ret = krcc_findorcreate_callback(this, cbval1);
            libqt_free(path_str);
            return callback_ret;
        } else {
            return KRcc::findOrCreate(path);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDevice(QIODevice* dev) {
        if (krcc_setdevice_isbase) {
            krcc_setdevice_isbase = false;
            KRcc::setDevice(dev);
        } else if (krcc_setdevice_callback != nullptr) {
            QIODevice* cbval1 = dev;

            krcc_setdevice_callback(this, cbval1);
        } else {
            KRcc::setDevice(dev);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRootDir(KArchiveDirectory* rootDir) {
        if (krcc_setrootdir_isbase) {
            krcc_setrootdir_isbase = false;
            KRcc::setRootDir(rootDir);
        } else if (krcc_setrootdir_callback != nullptr) {
            KArchiveDirectory* cbval1 = rootDir;

            krcc_setrootdir_callback(this, cbval1);
        } else {
            KRcc::setRootDir(rootDir);
        }
    }

    // Friend functions
    friend bool KRcc_DoPrepareWriting(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KRcc_SuperDoPrepareWriting(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, long long size, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KRcc_DoFinishWriting(KRcc* self, long long size);
    friend bool KRcc_SuperDoFinishWriting(KRcc* self, long long size);
    friend bool KRcc_DoWriteDir(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KRcc_SuperDoWriteDir(KRcc* self, const libqt_string name, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KRcc_DoWriteSymLink(KRcc* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KRcc_SuperDoWriteSymLink(KRcc* self, const libqt_string name, const libqt_string target, const libqt_string user, const libqt_string group, mode_t perm, const QDateTime* atime, const QDateTime* mtime, const QDateTime* ctime);
    friend bool KRcc_OpenArchive(KRcc* self, int mode);
    friend bool KRcc_SuperOpenArchive(KRcc* self, int mode);
    friend bool KRcc_CloseArchive(KRcc* self);
    friend bool KRcc_SuperCloseArchive(KRcc* self);
    friend void KRcc_VirtualHook(KRcc* self, int id, void* data);
    friend void KRcc_SuperVirtualHook(KRcc* self, int id, void* data);
    friend KArchiveDirectory* KRcc_RootDir(KRcc* self);
    friend KArchiveDirectory* KRcc_SuperRootDir(KRcc* self);
    friend bool KRcc_DoWriteData(KRcc* self, const char* data, long long size);
    friend bool KRcc_SuperDoWriteData(KRcc* self, const char* data, long long size);
    friend bool KRcc_CreateDevice(KRcc* self, int mode);
    friend bool KRcc_SuperCreateDevice(KRcc* self, int mode);
    friend void KRcc_SetErrorString(KRcc* self, const libqt_string errorStr);
    friend void KRcc_SuperSetErrorString(KRcc* self, const libqt_string errorStr);
    friend KArchiveDirectory* KRcc_FindOrCreate(KRcc* self, const libqt_string path);
    friend KArchiveDirectory* KRcc_SuperFindOrCreate(KRcc* self, const libqt_string path);
    friend void KRcc_SetDevice(KRcc* self, QIODevice* dev);
    friend void KRcc_SuperSetDevice(KRcc* self, QIODevice* dev);
    friend void KRcc_SetRootDir(KRcc* self, KArchiveDirectory* rootDir);
    friend void KRcc_SuperSetRootDir(KRcc* self, KArchiveDirectory* rootDir);
};

#endif
