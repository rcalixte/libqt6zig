#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBVIRTUALKDESKTOPFILE_H
#define SRC_EXTRAS_KCONFIGC_LIBVIRTUALKDESKTOPFILE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDesktopFile so that we can call protected methods
class VirtualKDesktopFile final : public KDesktopFile {

  public:
    // Virtual class boolean flag
    bool isVirtualKDesktopFile = true;

    // Virtual class public types (including callbacks)
    using KDesktopFile_Sync_Callback = bool (*)();
    using KDesktopFile_MarkAsClean_Callback = void (*)();
    using KDesktopFile_AccessMode_Callback = int (*)();
    using KDesktopFile_IsImmutable_Callback = bool (*)();
    using KDesktopFile_GroupList_Callback = const char** (*)();
    using KDesktopFile_HasGroupImpl_Callback = bool (*)(const KDesktopFile*, const char*);
    using KDesktopFile_GroupImpl_Callback = KConfigGroup* (*)(KDesktopFile*, const char*);
    using KDesktopFile_DeleteGroupImpl_Callback = void (*)(KDesktopFile*, const char*, int);
    using KDesktopFile_IsGroupImmutableImpl_Callback = bool (*)(const KDesktopFile*, const char*);
    using KDesktopFile_VirtualHook_Callback = void (*)(KDesktopFile*, int, void*);

  protected:
    // Instance callback storage
    KDesktopFile_Sync_Callback kdesktopfile_sync_callback = nullptr;
    KDesktopFile_MarkAsClean_Callback kdesktopfile_markasclean_callback = nullptr;
    KDesktopFile_AccessMode_Callback kdesktopfile_accessmode_callback = nullptr;
    KDesktopFile_IsImmutable_Callback kdesktopfile_isimmutable_callback = nullptr;
    KDesktopFile_GroupList_Callback kdesktopfile_grouplist_callback = nullptr;
    KDesktopFile_HasGroupImpl_Callback kdesktopfile_hasgroupimpl_callback = nullptr;
    KDesktopFile_GroupImpl_Callback kdesktopfile_groupimpl_callback = nullptr;
    KDesktopFile_DeleteGroupImpl_Callback kdesktopfile_deletegroupimpl_callback = nullptr;
    KDesktopFile_IsGroupImmutableImpl_Callback kdesktopfile_isgroupimmutableimpl_callback = nullptr;
    KDesktopFile_VirtualHook_Callback kdesktopfile_virtualhook_callback = nullptr;

    // Instance base flags
    mutable bool kdesktopfile_sync_isbase = false;
    mutable bool kdesktopfile_markasclean_isbase = false;
    mutable bool kdesktopfile_accessmode_isbase = false;
    mutable bool kdesktopfile_isimmutable_isbase = false;
    mutable bool kdesktopfile_grouplist_isbase = false;
    mutable bool kdesktopfile_hasgroupimpl_isbase = false;
    mutable bool kdesktopfile_groupimpl_isbase = false;
    mutable bool kdesktopfile_deletegroupimpl_isbase = false;
    mutable bool kdesktopfile_isgroupimmutableimpl_isbase = false;
    mutable bool kdesktopfile_virtualhook_isbase = false;

  public:
    VirtualKDesktopFile(QStandardPaths::StandardLocation resourceType, const QString& fileName) : KDesktopFile(resourceType, fileName) {};
    VirtualKDesktopFile(const QString& fileName) : KDesktopFile(fileName) {};

    // Callback setters
    inline void setKDesktopFile_Sync_Callback(KDesktopFile_Sync_Callback cb) { kdesktopfile_sync_callback = cb; }
    inline void setKDesktopFile_MarkAsClean_Callback(KDesktopFile_MarkAsClean_Callback cb) { kdesktopfile_markasclean_callback = cb; }
    inline void setKDesktopFile_AccessMode_Callback(KDesktopFile_AccessMode_Callback cb) { kdesktopfile_accessmode_callback = cb; }
    inline void setKDesktopFile_IsImmutable_Callback(KDesktopFile_IsImmutable_Callback cb) { kdesktopfile_isimmutable_callback = cb; }
    inline void setKDesktopFile_GroupList_Callback(KDesktopFile_GroupList_Callback cb) { kdesktopfile_grouplist_callback = cb; }
    inline void setKDesktopFile_HasGroupImpl_Callback(KDesktopFile_HasGroupImpl_Callback cb) { kdesktopfile_hasgroupimpl_callback = cb; }
    inline void setKDesktopFile_GroupImpl_Callback(KDesktopFile_GroupImpl_Callback cb) { kdesktopfile_groupimpl_callback = cb; }
    inline void setKDesktopFile_DeleteGroupImpl_Callback(KDesktopFile_DeleteGroupImpl_Callback cb) { kdesktopfile_deletegroupimpl_callback = cb; }
    inline void setKDesktopFile_IsGroupImmutableImpl_Callback(KDesktopFile_IsGroupImmutableImpl_Callback cb) { kdesktopfile_isgroupimmutableimpl_callback = cb; }
    inline void setKDesktopFile_VirtualHook_Callback(KDesktopFile_VirtualHook_Callback cb) { kdesktopfile_virtualhook_callback = cb; }

    // Base flag setters
    inline void setKDesktopFile_Sync_IsBase(bool value) const { kdesktopfile_sync_isbase = value; }
    inline void setKDesktopFile_MarkAsClean_IsBase(bool value) const { kdesktopfile_markasclean_isbase = value; }
    inline void setKDesktopFile_AccessMode_IsBase(bool value) const { kdesktopfile_accessmode_isbase = value; }
    inline void setKDesktopFile_IsImmutable_IsBase(bool value) const { kdesktopfile_isimmutable_isbase = value; }
    inline void setKDesktopFile_GroupList_IsBase(bool value) const { kdesktopfile_grouplist_isbase = value; }
    inline void setKDesktopFile_HasGroupImpl_IsBase(bool value) const { kdesktopfile_hasgroupimpl_isbase = value; }
    inline void setKDesktopFile_GroupImpl_IsBase(bool value) const { kdesktopfile_groupimpl_isbase = value; }
    inline void setKDesktopFile_DeleteGroupImpl_IsBase(bool value) const { kdesktopfile_deletegroupimpl_isbase = value; }
    inline void setKDesktopFile_IsGroupImmutableImpl_IsBase(bool value) const { kdesktopfile_isgroupimmutableimpl_isbase = value; }
    inline void setKDesktopFile_VirtualHook_IsBase(bool value) const { kdesktopfile_virtualhook_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool sync() override {
        if (kdesktopfile_sync_isbase) {
            kdesktopfile_sync_isbase = false;
            return KDesktopFile::sync();
        }
        auto sync_cb = kdesktopfile_sync_callback;
        if (sync_cb) {
            bool callback_ret = sync_cb();
            return callback_ret;
        }
        return KDesktopFile::sync();
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAsClean() override {
        if (kdesktopfile_markasclean_isbase) {
            kdesktopfile_markasclean_isbase = false;
            KDesktopFile::markAsClean();
            return;
        }
        auto markasclean_cb = kdesktopfile_markasclean_callback;
        if (markasclean_cb) {
            markasclean_cb();
            return;
        }
        KDesktopFile::markAsClean();
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigBase::AccessMode accessMode() const override {
        if (kdesktopfile_accessmode_isbase) {
            kdesktopfile_accessmode_isbase = false;
            return KDesktopFile::accessMode();
        }
        auto accessmode_cb = kdesktopfile_accessmode_callback;
        if (accessmode_cb) {
            int callback_ret = accessmode_cb();
            return static_cast<KConfigBase::AccessMode>(callback_ret);
        }
        return KDesktopFile::accessMode();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isImmutable() const override {
        if (kdesktopfile_isimmutable_isbase) {
            kdesktopfile_isimmutable_isbase = false;
            return KDesktopFile::isImmutable();
        }
        auto isimmutable_cb = kdesktopfile_isimmutable_callback;
        if (isimmutable_cb) {
            bool callback_ret = isimmutable_cb();
            return callback_ret;
        }
        return KDesktopFile::isImmutable();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> groupList() const override {
        if (kdesktopfile_grouplist_isbase) {
            kdesktopfile_grouplist_isbase = false;
            return KDesktopFile::groupList();
        }
        auto grouplist_cb = kdesktopfile_grouplist_callback;
        if (grouplist_cb) {
            const char** callback_ret = grouplist_cb();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return KDesktopFile::groupList();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasGroupImpl(const QString& groupName) const override {
        if (kdesktopfile_hasgroupimpl_isbase) {
            kdesktopfile_hasgroupimpl_isbase = false;
            return KDesktopFile::hasGroupImpl(groupName);
        }
        auto hasgroupimpl_cb = kdesktopfile_hasgroupimpl_callback;
        if (hasgroupimpl_cb) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;

            bool callback_ret = hasgroupimpl_cb(this, cbval1);
            libqt_free(groupName_str);
            return callback_ret;
        }
        return KDesktopFile::hasGroupImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigGroup groupImpl(const QString& groupName) override {
        if (kdesktopfile_groupimpl_isbase) {
            kdesktopfile_groupimpl_isbase = false;
            return KDesktopFile::groupImpl(groupName);
        }
        auto groupimpl_cb = kdesktopfile_groupimpl_callback;
        if (groupimpl_cb) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;

            KConfigGroup* callback_ret = groupimpl_cb(this, cbval1);
            libqt_free(groupName_str);
            return *callback_ret;
        }
        return KDesktopFile::groupImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteGroupImpl(const QString& groupName, KConfigBase::WriteConfigFlags flags) override {
        if (kdesktopfile_deletegroupimpl_isbase) {
            kdesktopfile_deletegroupimpl_isbase = false;
            KDesktopFile::deleteGroupImpl(groupName, flags);
            return;
        }
        auto deletegroupimpl_cb = kdesktopfile_deletegroupimpl_callback;
        if (deletegroupimpl_cb) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;
            int cbval2 = static_cast<int>(flags);

            deletegroupimpl_cb(this, cbval1, cbval2);
            libqt_free(groupName_str);
            return;
        }
        KDesktopFile::deleteGroupImpl(groupName, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isGroupImmutableImpl(const QString& groupName) const override {
        if (kdesktopfile_isgroupimmutableimpl_isbase) {
            kdesktopfile_isgroupimmutableimpl_isbase = false;
            return KDesktopFile::isGroupImmutableImpl(groupName);
        }
        auto isgroupimmutableimpl_cb = kdesktopfile_isgroupimmutableimpl_callback;
        if (isgroupimmutableimpl_cb) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;

            bool callback_ret = isgroupimmutableimpl_cb(this, cbval1);
            libqt_free(groupName_str);
            return callback_ret;
        }
        return KDesktopFile::isGroupImmutableImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kdesktopfile_virtualhook_isbase) {
            kdesktopfile_virtualhook_isbase = false;
            KDesktopFile::virtual_hook(id, data);
            return;
        }
        auto virtualhook_cb = kdesktopfile_virtualhook_callback;
        if (virtualhook_cb) {
            int cbval1 = id;
            void* cbval2 = data;

            virtualhook_cb(this, cbval1, cbval2);
            return;
        }
        KDesktopFile::virtual_hook(id, data);
    }

    // Friend functions
    friend bool KDesktopFile_HasGroupImpl(const KDesktopFile* self, const libqt_string groupName);
    friend bool KDesktopFile_SuperHasGroupImpl(const KDesktopFile* self, const libqt_string groupName);
    friend KConfigGroup* KDesktopFile_GroupImpl(KDesktopFile* self, const libqt_string groupName);
    friend KConfigGroup* KDesktopFile_SuperGroupImpl(KDesktopFile* self, const libqt_string groupName);
    friend void KDesktopFile_DeleteGroupImpl(KDesktopFile* self, const libqt_string groupName, int flags);
    friend void KDesktopFile_SuperDeleteGroupImpl(KDesktopFile* self, const libqt_string groupName, int flags);
    friend bool KDesktopFile_IsGroupImmutableImpl(const KDesktopFile* self, const libqt_string groupName);
    friend bool KDesktopFile_SuperIsGroupImmutableImpl(const KDesktopFile* self, const libqt_string groupName);
    friend void KDesktopFile_VirtualHook(KDesktopFile* self, int id, void* data);
    friend void KDesktopFile_SuperVirtualHook(KDesktopFile* self, int id, void* data);
};

#endif
