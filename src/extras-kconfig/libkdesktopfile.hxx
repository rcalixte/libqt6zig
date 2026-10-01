#pragma once
#ifndef EXTRAS_KCONFIG_LIBKDESKTOPFILE_HXX
#define EXTRAS_KCONFIG_LIBKDESKTOPFILE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDesktopFile
class VirtualKDesktopFile final : public KDesktopFile {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDesktopFile_Sync_Callback = bool (*)(KDesktopFile*);
    using KDesktopFile_MarkAsClean_Callback = void (*)(KDesktopFile*);
    using KDesktopFile_AccessMode_Callback = int (*)(const KDesktopFile*);
    using KDesktopFile_IsImmutable_Callback = bool (*)(const KDesktopFile*);
    using KDesktopFile_GroupList_Callback = const char** (*)(const KDesktopFile*);
    using KDesktopFile_HasGroupImpl_Callback = bool (*)(const KDesktopFile*, const char*);
    using KDesktopFile_DeleteGroupImpl_Callback = void (*)(KDesktopFile*, const char*, int);
    using KDesktopFile_IsGroupImmutableImpl_Callback = bool (*)(const KDesktopFile*, const char*);
    using KDesktopFile_VirtualHook_Callback = void (*)(KDesktopFile*, int, void*);

    // Instance callback storage
    KDesktopFile_Sync_Callback kdesktopfile_sync_callback = nullptr;
    KDesktopFile_MarkAsClean_Callback kdesktopfile_markasclean_callback = nullptr;
    KDesktopFile_AccessMode_Callback kdesktopfile_accessmode_callback = nullptr;
    KDesktopFile_IsImmutable_Callback kdesktopfile_isimmutable_callback = nullptr;
    KDesktopFile_GroupList_Callback kdesktopfile_grouplist_callback = nullptr;
    KDesktopFile_HasGroupImpl_Callback kdesktopfile_hasgroupimpl_callback = nullptr;
    KDesktopFile_DeleteGroupImpl_Callback kdesktopfile_deletegroupimpl_callback = nullptr;
    KDesktopFile_IsGroupImmutableImpl_Callback kdesktopfile_isgroupimmutableimpl_callback = nullptr;
    KDesktopFile_VirtualHook_Callback kdesktopfile_virtualhook_callback = nullptr;

    // Access struct
    struct Base : KDesktopFile {
        using KDesktopFile::deleteGroupImpl;
        using KDesktopFile::hasGroupImpl;
        using KDesktopFile::isGroupImmutableImpl;
        using KDesktopFile::virtual_hook;
    };

    VirtualKDesktopFile(QStandardPaths::StandardLocation resourceType, const QString& fileName) : KDesktopFile(resourceType, fileName) {};
    VirtualKDesktopFile(const QString& fileName) : KDesktopFile(fileName) {};

    // Virtual method for C ABI access and custom callback
    virtual bool sync() override {
        if (kdesktopfile_sync_callback) {
            bool callback_ret = kdesktopfile_sync_callback(this);
            return callback_ret;
        }
        return KDesktopFile::sync();
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAsClean() override {
        if (kdesktopfile_markasclean_callback) {
            kdesktopfile_markasclean_callback(this);
            return;
        }
        KDesktopFile::markAsClean();
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigBase::AccessMode accessMode() const override {
        if (kdesktopfile_accessmode_callback) {
            int callback_ret = kdesktopfile_accessmode_callback(this);
            return static_cast<KConfigBase::AccessMode>(callback_ret);
        }
        return KDesktopFile::accessMode();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isImmutable() const override {
        if (kdesktopfile_isimmutable_callback) {
            bool callback_ret = kdesktopfile_isimmutable_callback(this);
            return callback_ret;
        }
        return KDesktopFile::isImmutable();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> groupList() const override {
        if (kdesktopfile_grouplist_callback) {
            const char** callback_ret = kdesktopfile_grouplist_callback(this);
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
        if (kdesktopfile_hasgroupimpl_callback) {
            const auto groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;
            bool callback_ret = kdesktopfile_hasgroupimpl_callback(this, cbval1);
            libqt_free(groupName_str);
            return callback_ret;
        }
        return KDesktopFile::hasGroupImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteGroupImpl(const QString& groupName, KConfigBase::WriteConfigFlags flags) override {
        if (kdesktopfile_deletegroupimpl_callback) {
            const auto groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;
            int cbval2 = static_cast<int>(flags);
            kdesktopfile_deletegroupimpl_callback(this, cbval1, cbval2);
            libqt_free(groupName_str);
            return;
        }
        KDesktopFile::deleteGroupImpl(groupName, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isGroupImmutableImpl(const QString& groupName) const override {
        if (kdesktopfile_isgroupimmutableimpl_callback) {
            const auto groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;
            bool callback_ret = kdesktopfile_isgroupimmutableimpl_callback(this, cbval1);
            libqt_free(groupName_str);
            return callback_ret;
        }
        return KDesktopFile::isGroupImmutableImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kdesktopfile_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kdesktopfile_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KDesktopFile::virtual_hook(id, data);
    }

    // Friend functions
    friend bool KDesktopFile_SuperHasGroupImpl(const KDesktopFile* self, const libqt_string groupName);
    friend void KDesktopFile_SuperDeleteGroupImpl(KDesktopFile* self, const libqt_string groupName, int flags);
    friend bool KDesktopFile_SuperIsGroupImmutableImpl(const KDesktopFile* self, const libqt_string groupName);
    friend void KDesktopFile_SuperVirtualHook(KDesktopFile* self, int id, void* data);
};

#endif
