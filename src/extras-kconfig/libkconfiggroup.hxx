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
    using KConfigGroup_HasGroupImpl_Callback = bool (*)(const KConfigGroup*, libqt_string);
    using KConfigGroup_GroupImpl_Callback = KConfigGroup* (*)(KConfigGroup*, libqt_string);
    using KConfigGroup_GroupImpl2_Callback = KConfigGroup* (*)(const KConfigGroup*, libqt_string);
    using KConfigGroup_DeleteGroupImpl_Callback = void (*)(KConfigGroup*, libqt_string, int);
    using KConfigGroup_IsGroupImmutableImpl_Callback = bool (*)(const KConfigGroup*, libqt_string);
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

    ~VirtualKConfigGroup() {
        kconfiggroup_sync_callback = nullptr;
        kconfiggroup_markasclean_callback = nullptr;
        kconfiggroup_accessmode_callback = nullptr;
        kconfiggroup_grouplist_callback = nullptr;
        kconfiggroup_isimmutable_callback = nullptr;
        kconfiggroup_hasgroupimpl_callback = nullptr;
        kconfiggroup_groupimpl_callback = nullptr;
        kconfiggroup_groupimpl2_callback = nullptr;
        kconfiggroup_deletegroupimpl_callback = nullptr;
        kconfiggroup_isgroupimmutableimpl_callback = nullptr;
        kconfiggroup_virtualhook_callback = nullptr;
    }

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
        } else if (kconfiggroup_sync_callback != nullptr) {
            bool callback_ret = kconfiggroup_sync_callback();
            return callback_ret;
        } else {
            return KConfigGroup::sync();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAsClean() override {
        if (kconfiggroup_markasclean_isbase) {
            kconfiggroup_markasclean_isbase = false;
            KConfigGroup::markAsClean();
        } else if (kconfiggroup_markasclean_callback != nullptr) {
            kconfiggroup_markasclean_callback();
        } else {
            KConfigGroup::markAsClean();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigBase::AccessMode accessMode() const override {
        if (kconfiggroup_accessmode_isbase) {
            kconfiggroup_accessmode_isbase = false;
            return KConfigGroup::accessMode();
        } else if (kconfiggroup_accessmode_callback != nullptr) {
            int callback_ret = kconfiggroup_accessmode_callback();
            return static_cast<KConfigBase::AccessMode>(callback_ret);
        } else {
            return KConfigGroup::accessMode();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> groupList() const override {
        if (kconfiggroup_grouplist_isbase) {
            kconfiggroup_grouplist_isbase = false;
            return KConfigGroup::groupList();
        } else if (kconfiggroup_grouplist_callback != nullptr) {
            const char** callback_ret = kconfiggroup_grouplist_callback();
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
            return KConfigGroup::groupList();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isImmutable() const override {
        if (kconfiggroup_isimmutable_isbase) {
            kconfiggroup_isimmutable_isbase = false;
            return KConfigGroup::isImmutable();
        } else if (kconfiggroup_isimmutable_callback != nullptr) {
            bool callback_ret = kconfiggroup_isimmutable_callback();
            return callback_ret;
        } else {
            return KConfigGroup::isImmutable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasGroupImpl(const QString& groupName) const override {
        if (kconfiggroup_hasgroupimpl_isbase) {
            kconfiggroup_hasgroupimpl_isbase = false;
            return KConfigGroup::hasGroupImpl(groupName);
        } else if (kconfiggroup_hasgroupimpl_callback != nullptr) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            libqt_string groupName_str;
            groupName_str.len = groupName_b.length();
            groupName_str.data = static_cast<const char*>(malloc(groupName_str.len + 1));
            memcpy((void*)groupName_str.data, groupName_b.data(), groupName_str.len);
            ((char*)groupName_str.data)[groupName_str.len] = '\0';
            libqt_string cbval1 = groupName_str;

            bool callback_ret = kconfiggroup_hasgroupimpl_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigGroup::hasGroupImpl(groupName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigGroup groupImpl(const QString& groupName) override {
        if (kconfiggroup_groupimpl_isbase) {
            kconfiggroup_groupimpl_isbase = false;
            return KConfigGroup::groupImpl(groupName);
        } else if (kconfiggroup_groupimpl_callback != nullptr) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            libqt_string groupName_str;
            groupName_str.len = groupName_b.length();
            groupName_str.data = static_cast<const char*>(malloc(groupName_str.len + 1));
            memcpy((void*)groupName_str.data, groupName_b.data(), groupName_str.len);
            ((char*)groupName_str.data)[groupName_str.len] = '\0';
            libqt_string cbval1 = groupName_str;

            KConfigGroup* callback_ret = kconfiggroup_groupimpl_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KConfigGroup::groupImpl(groupName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const KConfigGroup groupImpl(const QString& groupName) const override {
        if (kconfiggroup_groupimpl2_isbase) {
            kconfiggroup_groupimpl2_isbase = false;
            return KConfigGroup::groupImpl(groupName);
        } else if (kconfiggroup_groupimpl2_callback != nullptr) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            libqt_string groupName_str;
            groupName_str.len = groupName_b.length();
            groupName_str.data = static_cast<const char*>(malloc(groupName_str.len + 1));
            memcpy((void*)groupName_str.data, groupName_b.data(), groupName_str.len);
            ((char*)groupName_str.data)[groupName_str.len] = '\0';
            libqt_string cbval1 = groupName_str;

            KConfigGroup* callback_ret = kconfiggroup_groupimpl2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KConfigGroup::groupImpl(groupName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteGroupImpl(const QString& groupName, KConfigBase::WriteConfigFlags flags) override {
        if (kconfiggroup_deletegroupimpl_isbase) {
            kconfiggroup_deletegroupimpl_isbase = false;
            KConfigGroup::deleteGroupImpl(groupName, flags);
        } else if (kconfiggroup_deletegroupimpl_callback != nullptr) {
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

            kconfiggroup_deletegroupimpl_callback(this, cbval1, cbval2);
        } else {
            KConfigGroup::deleteGroupImpl(groupName, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isGroupImmutableImpl(const QString& groupName) const override {
        if (kconfiggroup_isgroupimmutableimpl_isbase) {
            kconfiggroup_isgroupimmutableimpl_isbase = false;
            return KConfigGroup::isGroupImmutableImpl(groupName);
        } else if (kconfiggroup_isgroupimmutableimpl_callback != nullptr) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            libqt_string groupName_str;
            groupName_str.len = groupName_b.length();
            groupName_str.data = static_cast<const char*>(malloc(groupName_str.len + 1));
            memcpy((void*)groupName_str.data, groupName_b.data(), groupName_str.len);
            ((char*)groupName_str.data)[groupName_str.len] = '\0';
            libqt_string cbval1 = groupName_str;

            bool callback_ret = kconfiggroup_isgroupimmutableimpl_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigGroup::isGroupImmutableImpl(groupName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kconfiggroup_virtualhook_isbase) {
            kconfiggroup_virtualhook_isbase = false;
            KConfigGroup::virtual_hook(id, data);
        } else if (kconfiggroup_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kconfiggroup_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KConfigGroup::virtual_hook(id, data);
        }
    }

    // Friend functions
    friend bool KConfigGroup_HasGroupImpl(const KConfigGroup* self, const libqt_string groupName);
    friend bool KConfigGroup_QBaseHasGroupImpl(const KConfigGroup* self, const libqt_string groupName);
    friend KConfigGroup* KConfigGroup_GroupImpl(KConfigGroup* self, const libqt_string groupName);
    friend KConfigGroup* KConfigGroup_QBaseGroupImpl(KConfigGroup* self, const libqt_string groupName);
    friend KConfigGroup* KConfigGroup_GroupImpl2(const KConfigGroup* self, const libqt_string groupName);
    friend KConfigGroup* KConfigGroup_QBaseGroupImpl2(const KConfigGroup* self, const libqt_string groupName);
    friend void KConfigGroup_DeleteGroupImpl(KConfigGroup* self, const libqt_string groupName, int flags);
    friend void KConfigGroup_QBaseDeleteGroupImpl(KConfigGroup* self, const libqt_string groupName, int flags);
    friend bool KConfigGroup_IsGroupImmutableImpl(const KConfigGroup* self, const libqt_string groupName);
    friend bool KConfigGroup_QBaseIsGroupImmutableImpl(const KConfigGroup* self, const libqt_string groupName);
    friend void KConfigGroup_VirtualHook(KConfigGroup* self, int id, void* data);
    friend void KConfigGroup_QBaseVirtualHook(KConfigGroup* self, int id, void* data);
};

#endif
