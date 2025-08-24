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
    using KConfig_HasGroupImpl_Callback = bool (*)(const KConfig*, libqt_string);
    using KConfig_GroupImpl_Callback = KConfigGroup* (*)(KConfig*, libqt_string);
    using KConfig_GroupImpl2_Callback = KConfigGroup* (*)(const KConfig*, libqt_string);
    using KConfig_DeleteGroupImpl_Callback = void (*)(KConfig*, libqt_string, int);
    using KConfig_IsGroupImmutableImpl_Callback = bool (*)(const KConfig*, libqt_string);
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

    ~VirtualKConfig() {
        kconfig_sync_callback = nullptr;
        kconfig_markasclean_callback = nullptr;
        kconfig_accessmode_callback = nullptr;
        kconfig_isimmutable_callback = nullptr;
        kconfig_grouplist_callback = nullptr;
        kconfig_hasgroupimpl_callback = nullptr;
        kconfig_groupimpl_callback = nullptr;
        kconfig_groupimpl2_callback = nullptr;
        kconfig_deletegroupimpl_callback = nullptr;
        kconfig_isgroupimmutableimpl_callback = nullptr;
        kconfig_virtualhook_callback = nullptr;
    }

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
        } else if (kconfig_sync_callback != nullptr) {
            bool callback_ret = kconfig_sync_callback();
            return callback_ret;
        } else {
            return KConfig::sync();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAsClean() override {
        if (kconfig_markasclean_isbase) {
            kconfig_markasclean_isbase = false;
            KConfig::markAsClean();
        } else if (kconfig_markasclean_callback != nullptr) {
            kconfig_markasclean_callback();
        } else {
            KConfig::markAsClean();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigBase::AccessMode accessMode() const override {
        if (kconfig_accessmode_isbase) {
            kconfig_accessmode_isbase = false;
            return KConfig::accessMode();
        } else if (kconfig_accessmode_callback != nullptr) {
            int callback_ret = kconfig_accessmode_callback();
            return static_cast<KConfigBase::AccessMode>(callback_ret);
        } else {
            return KConfig::accessMode();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isImmutable() const override {
        if (kconfig_isimmutable_isbase) {
            kconfig_isimmutable_isbase = false;
            return KConfig::isImmutable();
        } else if (kconfig_isimmutable_callback != nullptr) {
            bool callback_ret = kconfig_isimmutable_callback();
            return callback_ret;
        } else {
            return KConfig::isImmutable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> groupList() const override {
        if (kconfig_grouplist_isbase) {
            kconfig_grouplist_isbase = false;
            return KConfig::groupList();
        } else if (kconfig_grouplist_callback != nullptr) {
            const char** callback_ret = kconfig_grouplist_callback();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return KConfig::groupList();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasGroupImpl(const QString& groupName) const override {
        if (kconfig_hasgroupimpl_isbase) {
            kconfig_hasgroupimpl_isbase = false;
            return KConfig::hasGroupImpl(groupName);
        } else if (kconfig_hasgroupimpl_callback != nullptr) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            libqt_string groupName_str;
            groupName_str.len = groupName_b.length();
            groupName_str.data = static_cast<const char*>(malloc(groupName_str.len + 1));
            memcpy((void*)groupName_str.data, groupName_b.data(), groupName_str.len);
            ((char*)groupName_str.data)[groupName_str.len] = '\0';
            libqt_string cbval1 = groupName_str;

            bool callback_ret = kconfig_hasgroupimpl_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfig::hasGroupImpl(groupName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigGroup groupImpl(const QString& groupName) override {
        if (kconfig_groupimpl_isbase) {
            kconfig_groupimpl_isbase = false;
            return KConfig::groupImpl(groupName);
        } else if (kconfig_groupimpl_callback != nullptr) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            libqt_string groupName_str;
            groupName_str.len = groupName_b.length();
            groupName_str.data = static_cast<const char*>(malloc(groupName_str.len + 1));
            memcpy((void*)groupName_str.data, groupName_b.data(), groupName_str.len);
            ((char*)groupName_str.data)[groupName_str.len] = '\0';
            libqt_string cbval1 = groupName_str;

            KConfigGroup* callback_ret = kconfig_groupimpl_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KConfig::groupImpl(groupName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const KConfigGroup groupImpl(const QString& groupName) const override {
        if (kconfig_groupimpl2_isbase) {
            kconfig_groupimpl2_isbase = false;
            return KConfig::groupImpl(groupName);
        } else if (kconfig_groupimpl2_callback != nullptr) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            libqt_string groupName_str;
            groupName_str.len = groupName_b.length();
            groupName_str.data = static_cast<const char*>(malloc(groupName_str.len + 1));
            memcpy((void*)groupName_str.data, groupName_b.data(), groupName_str.len);
            ((char*)groupName_str.data)[groupName_str.len] = '\0';
            libqt_string cbval1 = groupName_str;

            KConfigGroup* callback_ret = kconfig_groupimpl2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KConfig::groupImpl(groupName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteGroupImpl(const QString& groupName, KConfigBase::WriteConfigFlags flags) override {
        if (kconfig_deletegroupimpl_isbase) {
            kconfig_deletegroupimpl_isbase = false;
            KConfig::deleteGroupImpl(groupName, flags);
        } else if (kconfig_deletegroupimpl_callback != nullptr) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            libqt_string groupName_str;
            groupName_str.len = groupName_b.length();
            groupName_str.data = static_cast<const char*>(malloc(groupName_str.len + 1));
            memcpy((void*)groupName_str.data, groupName_b.data(), groupName_str.len);
            ((char*)groupName_str.data)[groupName_str.len] = '\0';
            libqt_string cbval1 = groupName_str;
            int cbval2 = static_cast<int>(flags);

            kconfig_deletegroupimpl_callback(this, cbval1, cbval2);
        } else {
            KConfig::deleteGroupImpl(groupName, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isGroupImmutableImpl(const QString& groupName) const override {
        if (kconfig_isgroupimmutableimpl_isbase) {
            kconfig_isgroupimmutableimpl_isbase = false;
            return KConfig::isGroupImmutableImpl(groupName);
        } else if (kconfig_isgroupimmutableimpl_callback != nullptr) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            libqt_string groupName_str;
            groupName_str.len = groupName_b.length();
            groupName_str.data = static_cast<const char*>(malloc(groupName_str.len + 1));
            memcpy((void*)groupName_str.data, groupName_b.data(), groupName_str.len);
            ((char*)groupName_str.data)[groupName_str.len] = '\0';
            libqt_string cbval1 = groupName_str;

            bool callback_ret = kconfig_isgroupimmutableimpl_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfig::isGroupImmutableImpl(groupName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kconfig_virtualhook_isbase) {
            kconfig_virtualhook_isbase = false;
            KConfig::virtual_hook(id, data);
        } else if (kconfig_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kconfig_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KConfig::virtual_hook(id, data);
        }
    }

    // Friend functions
    friend bool KConfig_HasGroupImpl(const KConfig* self, const libqt_string groupName);
    friend bool KConfig_QBaseHasGroupImpl(const KConfig* self, const libqt_string groupName);
    friend KConfigGroup* KConfig_GroupImpl(KConfig* self, const libqt_string groupName);
    friend KConfigGroup* KConfig_QBaseGroupImpl(KConfig* self, const libqt_string groupName);
    friend KConfigGroup* KConfig_GroupImpl2(const KConfig* self, const libqt_string groupName);
    friend KConfigGroup* KConfig_QBaseGroupImpl2(const KConfig* self, const libqt_string groupName);
    friend void KConfig_DeleteGroupImpl(KConfig* self, const libqt_string groupName, int flags);
    friend void KConfig_QBaseDeleteGroupImpl(KConfig* self, const libqt_string groupName, int flags);
    friend bool KConfig_IsGroupImmutableImpl(const KConfig* self, const libqt_string groupName);
    friend bool KConfig_QBaseIsGroupImmutableImpl(const KConfig* self, const libqt_string groupName);
    friend void KConfig_VirtualHook(KConfig* self, int id, void* data);
    friend void KConfig_QBaseVirtualHook(KConfig* self, int id, void* data);
};

#endif
