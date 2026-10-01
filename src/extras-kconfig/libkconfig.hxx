#pragma once
#ifndef EXTRAS_KCONFIG_LIBKCONFIG_HXX
#define EXTRAS_KCONFIG_LIBKCONFIG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfig
class VirtualKConfig final : public KConfig {
  public:
    // Virtual class public types (including callbacks and access types)
    using KConfig_Sync_Callback = bool (*)(KConfig*);
    using KConfig_MarkAsClean_Callback = void (*)(KConfig*);
    using KConfig_AccessMode_Callback = int (*)(const KConfig*);
    using KConfig_IsImmutable_Callback = bool (*)(const KConfig*);
    using KConfig_GroupList_Callback = const char** (*)(const KConfig*);
    using KConfig_HasGroupImpl_Callback = bool (*)(const KConfig*, const char*);
    using KConfig_DeleteGroupImpl_Callback = void (*)(KConfig*, const char*, int);
    using KConfig_IsGroupImmutableImpl_Callback = bool (*)(const KConfig*, const char*);
    using KConfig_VirtualHook_Callback = void (*)(KConfig*, int, void*);

    // Instance callback storage
    KConfig_Sync_Callback kconfig_sync_callback = nullptr;
    KConfig_MarkAsClean_Callback kconfig_markasclean_callback = nullptr;
    KConfig_AccessMode_Callback kconfig_accessmode_callback = nullptr;
    KConfig_IsImmutable_Callback kconfig_isimmutable_callback = nullptr;
    KConfig_GroupList_Callback kconfig_grouplist_callback = nullptr;
    KConfig_HasGroupImpl_Callback kconfig_hasgroupimpl_callback = nullptr;
    KConfig_DeleteGroupImpl_Callback kconfig_deletegroupimpl_callback = nullptr;
    KConfig_IsGroupImmutableImpl_Callback kconfig_isgroupimmutableimpl_callback = nullptr;
    KConfig_VirtualHook_Callback kconfig_virtualhook_callback = nullptr;

    // Access struct
    struct Base : KConfig {
        using KConfig::deleteGroupImpl;
        using KConfig::hasGroupImpl;
        using KConfig::isGroupImmutableImpl;
        using KConfig::virtual_hook;
    };

    VirtualKConfig() : KConfig() {};
    VirtualKConfig(const QString& file, const QString& backend) : KConfig(file, backend) {};
    VirtualKConfig(const QString& file) : KConfig(file) {};
    VirtualKConfig(const QString& file, KConfig::OpenFlags mode) : KConfig(file, mode) {};
    VirtualKConfig(const QString& file, KConfig::OpenFlags mode, QStandardPaths::StandardLocation typeVal) : KConfig(file, mode, typeVal) {};
    VirtualKConfig(const QString& file, const QString& backend, QStandardPaths::StandardLocation typeVal) : KConfig(file, backend, typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual bool sync() override {
        if (kconfig_sync_callback) {
            bool callback_ret = kconfig_sync_callback(this);
            return callback_ret;
        }
        return KConfig::sync();
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAsClean() override {
        if (kconfig_markasclean_callback) {
            kconfig_markasclean_callback(this);
            return;
        }
        KConfig::markAsClean();
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigBase::AccessMode accessMode() const override {
        if (kconfig_accessmode_callback) {
            int callback_ret = kconfig_accessmode_callback(this);
            return static_cast<KConfigBase::AccessMode>(callback_ret);
        }
        return KConfig::accessMode();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isImmutable() const override {
        if (kconfig_isimmutable_callback) {
            bool callback_ret = kconfig_isimmutable_callback(this);
            return callback_ret;
        }
        return KConfig::isImmutable();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> groupList() const override {
        if (kconfig_grouplist_callback) {
            const char** callback_ret = kconfig_grouplist_callback(this);
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
        return KConfig::groupList();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasGroupImpl(const QString& groupName) const override {
        if (kconfig_hasgroupimpl_callback) {
            const auto groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;
            bool callback_ret = kconfig_hasgroupimpl_callback(this, cbval1);
            libqt_free(groupName_str);
            return callback_ret;
        }
        return KConfig::hasGroupImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteGroupImpl(const QString& groupName, KConfigBase::WriteConfigFlags flags) override {
        if (kconfig_deletegroupimpl_callback) {
            const auto groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;
            int cbval2 = static_cast<int>(flags);
            kconfig_deletegroupimpl_callback(this, cbval1, cbval2);
            libqt_free(groupName_str);
            return;
        }
        KConfig::deleteGroupImpl(groupName, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isGroupImmutableImpl(const QString& groupName) const override {
        if (kconfig_isgroupimmutableimpl_callback) {
            const auto groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;
            bool callback_ret = kconfig_isgroupimmutableimpl_callback(this, cbval1);
            libqt_free(groupName_str);
            return callback_ret;
        }
        return KConfig::isGroupImmutableImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kconfig_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kconfig_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KConfig::virtual_hook(id, data);
    }

    // Friend functions
    friend bool KConfig_SuperHasGroupImpl(const KConfig* self, const libqt_string groupName);
    friend void KConfig_SuperDeleteGroupImpl(KConfig* self, const libqt_string groupName, int flags);
    friend bool KConfig_SuperIsGroupImmutableImpl(const KConfig* self, const libqt_string groupName);
    friend void KConfig_SuperVirtualHook(KConfig* self, int id, void* data);
};

#endif
