#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBVIRTUALKCONFIG_H
#define SRC_EXTRAS_KCONFIGC_LIBVIRTUALKCONFIG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfig so that we can call protected methods
class VirtualKConfig final : public KConfig {

  public:
    // Virtual class boolean flag
    bool isVirtualKConfig = true;

    // Virtual class public types (including callbacks)
    using KConfig_Sync_Callback = bool (*)();
    using KConfig_MarkAsClean_Callback = void (*)();
    using KConfig_AccessMode_Callback = int (*)();
    using KConfig_IsImmutable_Callback = bool (*)();
    using KConfig_GroupList_Callback = const char** (*)();
    using KConfig_HasGroupImpl_Callback = bool (*)(const KConfig*, const char*);
    using KConfig_GroupImpl_Callback = KConfigGroup* (*)(KConfig*, const char*);
    using KConfig_GroupImpl2_Callback = KConfigGroup* (*)(const KConfig*, const char*);
    using KConfig_DeleteGroupImpl_Callback = void (*)(KConfig*, const char*, int);
    using KConfig_IsGroupImmutableImpl_Callback = bool (*)(const KConfig*, const char*);
    using KConfig_VirtualHook_Callback = void (*)(KConfig*, int, void*);

  protected:
    // Instance callback storage
    KConfig_Sync_Callback kconfig_sync_callback = nullptr;
    KConfig_MarkAsClean_Callback kconfig_markasclean_callback = nullptr;
    KConfig_AccessMode_Callback kconfig_accessmode_callback = nullptr;
    KConfig_IsImmutable_Callback kconfig_isimmutable_callback = nullptr;
    KConfig_GroupList_Callback kconfig_grouplist_callback = nullptr;
    KConfig_HasGroupImpl_Callback kconfig_hasgroupimpl_callback = nullptr;
    KConfig_GroupImpl_Callback kconfig_groupimpl_callback = nullptr;
    KConfig_GroupImpl2_Callback kconfig_groupimpl2_callback = nullptr;
    KConfig_DeleteGroupImpl_Callback kconfig_deletegroupimpl_callback = nullptr;
    KConfig_IsGroupImmutableImpl_Callback kconfig_isgroupimmutableimpl_callback = nullptr;
    KConfig_VirtualHook_Callback kconfig_virtualhook_callback = nullptr;

    // Instance base flags
    mutable bool kconfig_sync_isbase = false;
    mutable bool kconfig_markasclean_isbase = false;
    mutable bool kconfig_accessmode_isbase = false;
    mutable bool kconfig_isimmutable_isbase = false;
    mutable bool kconfig_grouplist_isbase = false;
    mutable bool kconfig_hasgroupimpl_isbase = false;
    mutable bool kconfig_groupimpl_isbase = false;
    mutable bool kconfig_groupimpl2_isbase = false;
    mutable bool kconfig_deletegroupimpl_isbase = false;
    mutable bool kconfig_isgroupimmutableimpl_isbase = false;
    mutable bool kconfig_virtualhook_isbase = false;

  public:
    VirtualKConfig() : KConfig() {};
    VirtualKConfig(const QString& file, const QString& backend) : KConfig(file, backend) {};
    VirtualKConfig(const QString& file) : KConfig(file) {};
    VirtualKConfig(const QString& file, KConfig::OpenFlags mode) : KConfig(file, mode) {};
    VirtualKConfig(const QString& file, KConfig::OpenFlags mode, QStandardPaths::StandardLocation typeVal) : KConfig(file, mode, typeVal) {};
    VirtualKConfig(const QString& file, const QString& backend, QStandardPaths::StandardLocation typeVal) : KConfig(file, backend, typeVal) {};

    // Callback setters
    inline void setKConfig_Sync_Callback(KConfig_Sync_Callback cb) { kconfig_sync_callback = cb; }
    inline void setKConfig_MarkAsClean_Callback(KConfig_MarkAsClean_Callback cb) { kconfig_markasclean_callback = cb; }
    inline void setKConfig_AccessMode_Callback(KConfig_AccessMode_Callback cb) { kconfig_accessmode_callback = cb; }
    inline void setKConfig_IsImmutable_Callback(KConfig_IsImmutable_Callback cb) { kconfig_isimmutable_callback = cb; }
    inline void setKConfig_GroupList_Callback(KConfig_GroupList_Callback cb) { kconfig_grouplist_callback = cb; }
    inline void setKConfig_HasGroupImpl_Callback(KConfig_HasGroupImpl_Callback cb) { kconfig_hasgroupimpl_callback = cb; }
    inline void setKConfig_GroupImpl_Callback(KConfig_GroupImpl_Callback cb) { kconfig_groupimpl_callback = cb; }
    inline void setKConfig_GroupImpl2_Callback(KConfig_GroupImpl2_Callback cb) { kconfig_groupimpl2_callback = cb; }
    inline void setKConfig_DeleteGroupImpl_Callback(KConfig_DeleteGroupImpl_Callback cb) { kconfig_deletegroupimpl_callback = cb; }
    inline void setKConfig_IsGroupImmutableImpl_Callback(KConfig_IsGroupImmutableImpl_Callback cb) { kconfig_isgroupimmutableimpl_callback = cb; }
    inline void setKConfig_VirtualHook_Callback(KConfig_VirtualHook_Callback cb) { kconfig_virtualhook_callback = cb; }

    // Base flag setters
    inline void setKConfig_Sync_IsBase(bool value) const { kconfig_sync_isbase = value; }
    inline void setKConfig_MarkAsClean_IsBase(bool value) const { kconfig_markasclean_isbase = value; }
    inline void setKConfig_AccessMode_IsBase(bool value) const { kconfig_accessmode_isbase = value; }
    inline void setKConfig_IsImmutable_IsBase(bool value) const { kconfig_isimmutable_isbase = value; }
    inline void setKConfig_GroupList_IsBase(bool value) const { kconfig_grouplist_isbase = value; }
    inline void setKConfig_HasGroupImpl_IsBase(bool value) const { kconfig_hasgroupimpl_isbase = value; }
    inline void setKConfig_GroupImpl_IsBase(bool value) const { kconfig_groupimpl_isbase = value; }
    inline void setKConfig_GroupImpl2_IsBase(bool value) const { kconfig_groupimpl2_isbase = value; }
    inline void setKConfig_DeleteGroupImpl_IsBase(bool value) const { kconfig_deletegroupimpl_isbase = value; }
    inline void setKConfig_IsGroupImmutableImpl_IsBase(bool value) const { kconfig_isgroupimmutableimpl_isbase = value; }
    inline void setKConfig_VirtualHook_IsBase(bool value) const { kconfig_virtualhook_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool sync() override {
        if (kconfig_sync_isbase) {
            kconfig_sync_isbase = false;
            return KConfig::sync();
        }
        auto sync_cb = kconfig_sync_callback;
        if (sync_cb) {
            bool callback_ret = sync_cb();
            return callback_ret;
        }
        return KConfig::sync();
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAsClean() override {
        if (kconfig_markasclean_isbase) {
            kconfig_markasclean_isbase = false;
            KConfig::markAsClean();
            return;
        }
        auto markasclean_cb = kconfig_markasclean_callback;
        if (markasclean_cb) {
            markasclean_cb();
            return;
        }
        KConfig::markAsClean();
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigBase::AccessMode accessMode() const override {
        if (kconfig_accessmode_isbase) {
            kconfig_accessmode_isbase = false;
            return KConfig::accessMode();
        }
        auto accessmode_cb = kconfig_accessmode_callback;
        if (accessmode_cb) {
            int callback_ret = accessmode_cb();
            return static_cast<KConfigBase::AccessMode>(callback_ret);
        }
        return KConfig::accessMode();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isImmutable() const override {
        if (kconfig_isimmutable_isbase) {
            kconfig_isimmutable_isbase = false;
            return KConfig::isImmutable();
        }
        auto isimmutable_cb = kconfig_isimmutable_callback;
        if (isimmutable_cb) {
            bool callback_ret = isimmutable_cb();
            return callback_ret;
        }
        return KConfig::isImmutable();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> groupList() const override {
        if (kconfig_grouplist_isbase) {
            kconfig_grouplist_isbase = false;
            return KConfig::groupList();
        }
        auto grouplist_cb = kconfig_grouplist_callback;
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
        return KConfig::groupList();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasGroupImpl(const QString& groupName) const override {
        if (kconfig_hasgroupimpl_isbase) {
            kconfig_hasgroupimpl_isbase = false;
            return KConfig::hasGroupImpl(groupName);
        }
        auto hasgroupimpl_cb = kconfig_hasgroupimpl_callback;
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
        return KConfig::hasGroupImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigGroup groupImpl(const QString& groupName) override {
        if (kconfig_groupimpl_isbase) {
            kconfig_groupimpl_isbase = false;
            return KConfig::groupImpl(groupName);
        }
        auto groupimpl_cb = kconfig_groupimpl_callback;
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
        return KConfig::groupImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual const KConfigGroup groupImpl(const QString& groupName) const override {
        if (kconfig_groupimpl2_isbase) {
            kconfig_groupimpl2_isbase = false;
            return KConfig::groupImpl(groupName);
        }
        auto groupimpl2_cb = kconfig_groupimpl2_callback;
        if (groupimpl2_cb) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            auto groupName_str_len = groupName_b.length();
            const char* groupName_str = static_cast<const char*>(malloc(groupName_str_len + 1));
            memcpy((void*)groupName_str, groupName_b.data(), groupName_str_len);
            ((char*)groupName_str)[groupName_str_len] = '\0';
            const char* cbval1 = groupName_str;

            KConfigGroup* callback_ret = groupimpl2_cb(this, cbval1);
            libqt_free(groupName_str);
            return *callback_ret;
        }
        return KConfig::groupImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteGroupImpl(const QString& groupName, KConfigBase::WriteConfigFlags flags) override {
        if (kconfig_deletegroupimpl_isbase) {
            kconfig_deletegroupimpl_isbase = false;
            KConfig::deleteGroupImpl(groupName, flags);
            return;
        }
        auto deletegroupimpl_cb = kconfig_deletegroupimpl_callback;
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
        KConfig::deleteGroupImpl(groupName, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isGroupImmutableImpl(const QString& groupName) const override {
        if (kconfig_isgroupimmutableimpl_isbase) {
            kconfig_isgroupimmutableimpl_isbase = false;
            return KConfig::isGroupImmutableImpl(groupName);
        }
        auto isgroupimmutableimpl_cb = kconfig_isgroupimmutableimpl_callback;
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
        return KConfig::isGroupImmutableImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kconfig_virtualhook_isbase) {
            kconfig_virtualhook_isbase = false;
            KConfig::virtual_hook(id, data);
            return;
        }
        auto virtualhook_cb = kconfig_virtualhook_callback;
        if (virtualhook_cb) {
            int cbval1 = id;
            void* cbval2 = data;

            virtualhook_cb(this, cbval1, cbval2);
            return;
        }
        KConfig::virtual_hook(id, data);
    }

    // Friend functions
    friend bool KConfig_HasGroupImpl(const KConfig* self, const libqt_string groupName);
    friend bool KConfig_SuperHasGroupImpl(const KConfig* self, const libqt_string groupName);
    friend KConfigGroup* KConfig_GroupImpl(KConfig* self, const libqt_string groupName);
    friend KConfigGroup* KConfig_SuperGroupImpl(KConfig* self, const libqt_string groupName);
    friend KConfigGroup* KConfig_GroupImpl2(const KConfig* self, const libqt_string groupName);
    friend KConfigGroup* KConfig_SuperGroupImpl2(const KConfig* self, const libqt_string groupName);
    friend void KConfig_DeleteGroupImpl(KConfig* self, const libqt_string groupName, int flags);
    friend void KConfig_SuperDeleteGroupImpl(KConfig* self, const libqt_string groupName, int flags);
    friend bool KConfig_IsGroupImmutableImpl(const KConfig* self, const libqt_string groupName);
    friend bool KConfig_SuperIsGroupImmutableImpl(const KConfig* self, const libqt_string groupName);
    friend void KConfig_VirtualHook(KConfig* self, int id, void* data);
    friend void KConfig_SuperVirtualHook(KConfig* self, int id, void* data);
};

#endif
