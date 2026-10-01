#pragma once
#ifndef EXTRAS_KCONFIG_LIBKCONFIGGROUP_HXX
#define EXTRAS_KCONFIG_LIBKCONFIGGROUP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigGroup
class VirtualKConfigGroup final : public KConfigGroup {
  public:
    // Virtual class public types (including callbacks and access types)
    using KConfigGroup_Sync_Callback = bool (*)(KConfigGroup*);
    using KConfigGroup_MarkAsClean_Callback = void (*)(KConfigGroup*);
    using KConfigGroup_AccessMode_Callback = int (*)(const KConfigGroup*);
    using KConfigGroup_GroupList_Callback = const char** (*)(const KConfigGroup*);
    using KConfigGroup_IsImmutable_Callback = bool (*)(const KConfigGroup*);
    using KConfigGroup_HasGroupImpl_Callback = bool (*)(const KConfigGroup*, const char*);
    using KConfigGroup_DeleteGroupImpl_Callback = void (*)(KConfigGroup*, const char*, int);
    using KConfigGroup_IsGroupImmutableImpl_Callback = bool (*)(const KConfigGroup*, const char*);
    using KConfigGroup_VirtualHook_Callback = void (*)(KConfigGroup*, int, void*);

    // Instance callback storage
    KConfigGroup_Sync_Callback kconfiggroup_sync_callback = nullptr;
    KConfigGroup_MarkAsClean_Callback kconfiggroup_markasclean_callback = nullptr;
    KConfigGroup_AccessMode_Callback kconfiggroup_accessmode_callback = nullptr;
    KConfigGroup_GroupList_Callback kconfiggroup_grouplist_callback = nullptr;
    KConfigGroup_IsImmutable_Callback kconfiggroup_isimmutable_callback = nullptr;
    KConfigGroup_HasGroupImpl_Callback kconfiggroup_hasgroupimpl_callback = nullptr;
    KConfigGroup_DeleteGroupImpl_Callback kconfiggroup_deletegroupimpl_callback = nullptr;
    KConfigGroup_IsGroupImmutableImpl_Callback kconfiggroup_isgroupimmutableimpl_callback = nullptr;
    KConfigGroup_VirtualHook_Callback kconfiggroup_virtualhook_callback = nullptr;

    // Access struct
    struct Base : KConfigGroup {
        using KConfigGroup::deleteGroupImpl;
        using KConfigGroup::hasGroupImpl;
        using KConfigGroup::isGroupImmutableImpl;
        using KConfigGroup::virtual_hook;
    };

    VirtualKConfigGroup() : KConfigGroup() {};
    VirtualKConfigGroup(KConfigBase* master, const QString& group) : KConfigGroup(master, group) {};
    VirtualKConfigGroup(const KConfigBase* master, const QString& group) : KConfigGroup(master, group) {};
    VirtualKConfigGroup(const KConfigGroup& param1) : KConfigGroup(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual bool sync() override {
        if (kconfiggroup_sync_callback) {
            bool callback_ret = kconfiggroup_sync_callback(this);
            return callback_ret;
        }
        return KConfigGroup::sync();
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAsClean() override {
        if (kconfiggroup_markasclean_callback) {
            kconfiggroup_markasclean_callback(this);
            return;
        }
        KConfigGroup::markAsClean();
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigBase::AccessMode accessMode() const override {
        if (kconfiggroup_accessmode_callback) {
            int callback_ret = kconfiggroup_accessmode_callback(this);
            return static_cast<KConfigBase::AccessMode>(callback_ret);
        }
        return KConfigGroup::accessMode();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> groupList() const override {
        if (kconfiggroup_grouplist_callback) {
            const char** callback_ret = kconfiggroup_grouplist_callback(this);
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
        return KConfigGroup::groupList();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isImmutable() const override {
        if (kconfiggroup_isimmutable_callback) {
            bool callback_ret = kconfiggroup_isimmutable_callback(this);
            return callback_ret;
        }
        return KConfigGroup::isImmutable();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasGroupImpl(const QString& groupName) const override {
        if (kconfiggroup_hasgroupimpl_callback) {
            const auto groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;
            bool callback_ret = kconfiggroup_hasgroupimpl_callback(this, cbval1);
            libqt_free(groupName_str);
            return callback_ret;
        }
        return KConfigGroup::hasGroupImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteGroupImpl(const QString& groupName, KConfigBase::WriteConfigFlags flags) override {
        if (kconfiggroup_deletegroupimpl_callback) {
            const auto groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;
            int cbval2 = static_cast<int>(flags);
            kconfiggroup_deletegroupimpl_callback(this, cbval1, cbval2);
            libqt_free(groupName_str);
            return;
        }
        KConfigGroup::deleteGroupImpl(groupName, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isGroupImmutableImpl(const QString& groupName) const override {
        if (kconfiggroup_isgroupimmutableimpl_callback) {
            const auto groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;
            bool callback_ret = kconfiggroup_isgroupimmutableimpl_callback(this, cbval1);
            libqt_free(groupName_str);
            return callback_ret;
        }
        return KConfigGroup::isGroupImmutableImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kconfiggroup_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kconfiggroup_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KConfigGroup::virtual_hook(id, data);
    }

    // Friend functions
    friend bool KConfigGroup_SuperHasGroupImpl(const KConfigGroup* self, const libqt_string groupName);
    friend void KConfigGroup_SuperDeleteGroupImpl(KConfigGroup* self, const libqt_string groupName, int flags);
    friend bool KConfigGroup_SuperIsGroupImmutableImpl(const KConfigGroup* self, const libqt_string groupName);
    friend void KConfigGroup_SuperVirtualHook(KConfigGroup* self, int id, void* data);
};

#endif
