#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBVIRTUALKCONFIGGROUP_H
#define SRC_EXTRAS_KCONFIGC_LIBVIRTUALKCONFIGGROUP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigGroup so that we can call protected methods
class VirtualKConfigGroup final : public KConfigGroup {

  public:
    // Virtual class boolean flag
    bool isVirtualKConfigGroup = true;

    // Virtual class public types (including callbacks)
    using KConfigGroup_Sync_Callback = bool (*)();
    using KConfigGroup_MarkAsClean_Callback = void (*)();
    using KConfigGroup_AccessMode_Callback = int (*)();
    using KConfigGroup_GroupList_Callback = const char** (*)();
    using KConfigGroup_IsImmutable_Callback = bool (*)();
    using KConfigGroup_HasGroupImpl_Callback = bool (*)(const KConfigGroup*, const char*);
    using KConfigGroup_GroupImpl_Callback = KConfigGroup* (*)(KConfigGroup*, const char*);
    using KConfigGroup_GroupImpl2_Callback = KConfigGroup* (*)(const KConfigGroup*, const char*);
    using KConfigGroup_DeleteGroupImpl_Callback = void (*)(KConfigGroup*, const char*, int);
    using KConfigGroup_IsGroupImmutableImpl_Callback = bool (*)(const KConfigGroup*, const char*);
    using KConfigGroup_VirtualHook_Callback = void (*)(KConfigGroup*, int, void*);

  protected:
    // Instance callback storage
    KConfigGroup_Sync_Callback kconfiggroup_sync_callback = nullptr;
    KConfigGroup_MarkAsClean_Callback kconfiggroup_markasclean_callback = nullptr;
    KConfigGroup_AccessMode_Callback kconfiggroup_accessmode_callback = nullptr;
    KConfigGroup_GroupList_Callback kconfiggroup_grouplist_callback = nullptr;
    KConfigGroup_IsImmutable_Callback kconfiggroup_isimmutable_callback = nullptr;
    KConfigGroup_HasGroupImpl_Callback kconfiggroup_hasgroupimpl_callback = nullptr;
    KConfigGroup_GroupImpl_Callback kconfiggroup_groupimpl_callback = nullptr;
    KConfigGroup_GroupImpl2_Callback kconfiggroup_groupimpl2_callback = nullptr;
    KConfigGroup_DeleteGroupImpl_Callback kconfiggroup_deletegroupimpl_callback = nullptr;
    KConfigGroup_IsGroupImmutableImpl_Callback kconfiggroup_isgroupimmutableimpl_callback = nullptr;
    KConfigGroup_VirtualHook_Callback kconfiggroup_virtualhook_callback = nullptr;

    // Instance base flags
    mutable bool kconfiggroup_sync_isbase = false;
    mutable bool kconfiggroup_markasclean_isbase = false;
    mutable bool kconfiggroup_accessmode_isbase = false;
    mutable bool kconfiggroup_grouplist_isbase = false;
    mutable bool kconfiggroup_isimmutable_isbase = false;
    mutable bool kconfiggroup_hasgroupimpl_isbase = false;
    mutable bool kconfiggroup_groupimpl_isbase = false;
    mutable bool kconfiggroup_groupimpl2_isbase = false;
    mutable bool kconfiggroup_deletegroupimpl_isbase = false;
    mutable bool kconfiggroup_isgroupimmutableimpl_isbase = false;
    mutable bool kconfiggroup_virtualhook_isbase = false;

  public:
    VirtualKConfigGroup() : KConfigGroup() {};
    VirtualKConfigGroup(KConfigBase* master, const QString& group) : KConfigGroup(master, group) {};
    VirtualKConfigGroup(const KConfigBase* master, const QString& group) : KConfigGroup(master, group) {};
    VirtualKConfigGroup(const KConfigGroup& param1) : KConfigGroup(param1) {};

    // Callback setters
    inline void setKConfigGroup_Sync_Callback(KConfigGroup_Sync_Callback cb) { kconfiggroup_sync_callback = cb; }
    inline void setKConfigGroup_MarkAsClean_Callback(KConfigGroup_MarkAsClean_Callback cb) { kconfiggroup_markasclean_callback = cb; }
    inline void setKConfigGroup_AccessMode_Callback(KConfigGroup_AccessMode_Callback cb) { kconfiggroup_accessmode_callback = cb; }
    inline void setKConfigGroup_GroupList_Callback(KConfigGroup_GroupList_Callback cb) { kconfiggroup_grouplist_callback = cb; }
    inline void setKConfigGroup_IsImmutable_Callback(KConfigGroup_IsImmutable_Callback cb) { kconfiggroup_isimmutable_callback = cb; }
    inline void setKConfigGroup_HasGroupImpl_Callback(KConfigGroup_HasGroupImpl_Callback cb) { kconfiggroup_hasgroupimpl_callback = cb; }
    inline void setKConfigGroup_GroupImpl_Callback(KConfigGroup_GroupImpl_Callback cb) { kconfiggroup_groupimpl_callback = cb; }
    inline void setKConfigGroup_GroupImpl2_Callback(KConfigGroup_GroupImpl2_Callback cb) { kconfiggroup_groupimpl2_callback = cb; }
    inline void setKConfigGroup_DeleteGroupImpl_Callback(KConfigGroup_DeleteGroupImpl_Callback cb) { kconfiggroup_deletegroupimpl_callback = cb; }
    inline void setKConfigGroup_IsGroupImmutableImpl_Callback(KConfigGroup_IsGroupImmutableImpl_Callback cb) { kconfiggroup_isgroupimmutableimpl_callback = cb; }
    inline void setKConfigGroup_VirtualHook_Callback(KConfigGroup_VirtualHook_Callback cb) { kconfiggroup_virtualhook_callback = cb; }

    // Base flag setters
    inline void setKConfigGroup_Sync_IsBase(bool value) const { kconfiggroup_sync_isbase = value; }
    inline void setKConfigGroup_MarkAsClean_IsBase(bool value) const { kconfiggroup_markasclean_isbase = value; }
    inline void setKConfigGroup_AccessMode_IsBase(bool value) const { kconfiggroup_accessmode_isbase = value; }
    inline void setKConfigGroup_GroupList_IsBase(bool value) const { kconfiggroup_grouplist_isbase = value; }
    inline void setKConfigGroup_IsImmutable_IsBase(bool value) const { kconfiggroup_isimmutable_isbase = value; }
    inline void setKConfigGroup_HasGroupImpl_IsBase(bool value) const { kconfiggroup_hasgroupimpl_isbase = value; }
    inline void setKConfigGroup_GroupImpl_IsBase(bool value) const { kconfiggroup_groupimpl_isbase = value; }
    inline void setKConfigGroup_GroupImpl2_IsBase(bool value) const { kconfiggroup_groupimpl2_isbase = value; }
    inline void setKConfigGroup_DeleteGroupImpl_IsBase(bool value) const { kconfiggroup_deletegroupimpl_isbase = value; }
    inline void setKConfigGroup_IsGroupImmutableImpl_IsBase(bool value) const { kconfiggroup_isgroupimmutableimpl_isbase = value; }
    inline void setKConfigGroup_VirtualHook_IsBase(bool value) const { kconfiggroup_virtualhook_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool sync() override {
        if (kconfiggroup_sync_isbase) {
            kconfiggroup_sync_isbase = false;
            return KConfigGroup::sync();
        }
        auto sync_cb = kconfiggroup_sync_callback;
        if (sync_cb) {
            bool callback_ret = sync_cb();
            return callback_ret;
        }
        return KConfigGroup::sync();
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAsClean() override {
        if (kconfiggroup_markasclean_isbase) {
            kconfiggroup_markasclean_isbase = false;
            KConfigGroup::markAsClean();
            return;
        }
        auto markasclean_cb = kconfiggroup_markasclean_callback;
        if (markasclean_cb) {
            markasclean_cb();
            return;
        }
        KConfigGroup::markAsClean();
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigBase::AccessMode accessMode() const override {
        if (kconfiggroup_accessmode_isbase) {
            kconfiggroup_accessmode_isbase = false;
            return KConfigGroup::accessMode();
        }
        auto accessmode_cb = kconfiggroup_accessmode_callback;
        if (accessmode_cb) {
            int callback_ret = accessmode_cb();
            return static_cast<KConfigBase::AccessMode>(callback_ret);
        }
        return KConfigGroup::accessMode();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> groupList() const override {
        if (kconfiggroup_grouplist_isbase) {
            kconfiggroup_grouplist_isbase = false;
            return KConfigGroup::groupList();
        }
        auto grouplist_cb = kconfiggroup_grouplist_callback;
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
        return KConfigGroup::groupList();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isImmutable() const override {
        if (kconfiggroup_isimmutable_isbase) {
            kconfiggroup_isimmutable_isbase = false;
            return KConfigGroup::isImmutable();
        }
        auto isimmutable_cb = kconfiggroup_isimmutable_callback;
        if (isimmutable_cb) {
            bool callback_ret = isimmutable_cb();
            return callback_ret;
        }
        return KConfigGroup::isImmutable();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasGroupImpl(const QString& groupName) const override {
        if (kconfiggroup_hasgroupimpl_isbase) {
            kconfiggroup_hasgroupimpl_isbase = false;
            return KConfigGroup::hasGroupImpl(groupName);
        }
        auto hasgroupimpl_cb = kconfiggroup_hasgroupimpl_callback;
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
        return KConfigGroup::hasGroupImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigGroup groupImpl(const QString& groupName) override {
        if (kconfiggroup_groupimpl_isbase) {
            kconfiggroup_groupimpl_isbase = false;
            return KConfigGroup::groupImpl(groupName);
        }
        auto groupimpl_cb = kconfiggroup_groupimpl_callback;
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
        return KConfigGroup::groupImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual const KConfigGroup groupImpl(const QString& groupName) const override {
        if (kconfiggroup_groupimpl2_isbase) {
            kconfiggroup_groupimpl2_isbase = false;
            return KConfigGroup::groupImpl(groupName);
        }
        auto groupimpl2_cb = kconfiggroup_groupimpl2_callback;
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
        return KConfigGroup::groupImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteGroupImpl(const QString& groupName, KConfigBase::WriteConfigFlags flags) override {
        if (kconfiggroup_deletegroupimpl_isbase) {
            kconfiggroup_deletegroupimpl_isbase = false;
            KConfigGroup::deleteGroupImpl(groupName, flags);
            return;
        }
        auto deletegroupimpl_cb = kconfiggroup_deletegroupimpl_callback;
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
        KConfigGroup::deleteGroupImpl(groupName, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isGroupImmutableImpl(const QString& groupName) const override {
        if (kconfiggroup_isgroupimmutableimpl_isbase) {
            kconfiggroup_isgroupimmutableimpl_isbase = false;
            return KConfigGroup::isGroupImmutableImpl(groupName);
        }
        auto isgroupimmutableimpl_cb = kconfiggroup_isgroupimmutableimpl_callback;
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
        return KConfigGroup::isGroupImmutableImpl(groupName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kconfiggroup_virtualhook_isbase) {
            kconfiggroup_virtualhook_isbase = false;
            KConfigGroup::virtual_hook(id, data);
            return;
        }
        auto virtualhook_cb = kconfiggroup_virtualhook_callback;
        if (virtualhook_cb) {
            int cbval1 = id;
            void* cbval2 = data;

            virtualhook_cb(this, cbval1, cbval2);
            return;
        }
        KConfigGroup::virtual_hook(id, data);
    }

    // Friend functions
    friend bool KConfigGroup_HasGroupImpl(const KConfigGroup* self, const libqt_string groupName);
    friend bool KConfigGroup_SuperHasGroupImpl(const KConfigGroup* self, const libqt_string groupName);
    friend KConfigGroup* KConfigGroup_GroupImpl(KConfigGroup* self, const libqt_string groupName);
    friend KConfigGroup* KConfigGroup_SuperGroupImpl(KConfigGroup* self, const libqt_string groupName);
    friend KConfigGroup* KConfigGroup_GroupImpl2(const KConfigGroup* self, const libqt_string groupName);
    friend KConfigGroup* KConfigGroup_SuperGroupImpl2(const KConfigGroup* self, const libqt_string groupName);
    friend void KConfigGroup_DeleteGroupImpl(KConfigGroup* self, const libqt_string groupName, int flags);
    friend void KConfigGroup_SuperDeleteGroupImpl(KConfigGroup* self, const libqt_string groupName, int flags);
    friend bool KConfigGroup_IsGroupImmutableImpl(const KConfigGroup* self, const libqt_string groupName);
    friend bool KConfigGroup_SuperIsGroupImmutableImpl(const KConfigGroup* self, const libqt_string groupName);
    friend void KConfigGroup_VirtualHook(KConfigGroup* self, int id, void* data);
    friend void KConfigGroup_SuperVirtualHook(KConfigGroup* self, int id, void* data);
};

#endif
