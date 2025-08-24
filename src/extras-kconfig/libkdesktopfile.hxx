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
    using KDesktopFile_HasGroupImpl_Callback = bool (*)(const KDesktopFile*, libqt_string);
    using KDesktopFile_GroupImpl_Callback = KConfigGroup* (*)(KDesktopFile*, libqt_string);
    using KDesktopFile_DeleteGroupImpl_Callback = void (*)(KDesktopFile*, libqt_string, int);
    using KDesktopFile_IsGroupImmutableImpl_Callback = bool (*)(const KDesktopFile*, libqt_string);
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

    ~VirtualKDesktopFile() {
        kdesktopfile_sync_callback = nullptr;
        kdesktopfile_markasclean_callback = nullptr;
        kdesktopfile_accessmode_callback = nullptr;
        kdesktopfile_isimmutable_callback = nullptr;
        kdesktopfile_grouplist_callback = nullptr;
        kdesktopfile_hasgroupimpl_callback = nullptr;
        kdesktopfile_groupimpl_callback = nullptr;
        kdesktopfile_deletegroupimpl_callback = nullptr;
        kdesktopfile_isgroupimmutableimpl_callback = nullptr;
        kdesktopfile_virtualhook_callback = nullptr;
    }

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
        } else if (kdesktopfile_sync_callback != nullptr) {
            bool callback_ret = kdesktopfile_sync_callback();
            return callback_ret;
        } else {
            return KDesktopFile::sync();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAsClean() override {
        if (kdesktopfile_markasclean_isbase) {
            kdesktopfile_markasclean_isbase = false;
            KDesktopFile::markAsClean();
        } else if (kdesktopfile_markasclean_callback != nullptr) {
            kdesktopfile_markasclean_callback();
        } else {
            KDesktopFile::markAsClean();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigBase::AccessMode accessMode() const override {
        if (kdesktopfile_accessmode_isbase) {
            kdesktopfile_accessmode_isbase = false;
            return KDesktopFile::accessMode();
        } else if (kdesktopfile_accessmode_callback != nullptr) {
            int callback_ret = kdesktopfile_accessmode_callback();
            return static_cast<KConfigBase::AccessMode>(callback_ret);
        } else {
            return KDesktopFile::accessMode();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isImmutable() const override {
        if (kdesktopfile_isimmutable_isbase) {
            kdesktopfile_isimmutable_isbase = false;
            return KDesktopFile::isImmutable();
        } else if (kdesktopfile_isimmutable_callback != nullptr) {
            bool callback_ret = kdesktopfile_isimmutable_callback();
            return callback_ret;
        } else {
            return KDesktopFile::isImmutable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> groupList() const override {
        if (kdesktopfile_grouplist_isbase) {
            kdesktopfile_grouplist_isbase = false;
            return KDesktopFile::groupList();
        } else if (kdesktopfile_grouplist_callback != nullptr) {
            const char** callback_ret = kdesktopfile_grouplist_callback();
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
            return KDesktopFile::groupList();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasGroupImpl(const QString& groupName) const override {
        if (kdesktopfile_hasgroupimpl_isbase) {
            kdesktopfile_hasgroupimpl_isbase = false;
            return KDesktopFile::hasGroupImpl(groupName);
        } else if (kdesktopfile_hasgroupimpl_callback != nullptr) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            libqt_string groupName_str;
            groupName_str.len = groupName_b.length();
            groupName_str.data = static_cast<const char*>(malloc(groupName_str.len + 1));
            memcpy((void*)groupName_str.data, groupName_b.data(), groupName_str.len);
            ((char*)groupName_str.data)[groupName_str.len] = '\0';
            libqt_string cbval1 = groupName_str;

            bool callback_ret = kdesktopfile_hasgroupimpl_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDesktopFile::hasGroupImpl(groupName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KConfigGroup groupImpl(const QString& groupName) override {
        if (kdesktopfile_groupimpl_isbase) {
            kdesktopfile_groupimpl_isbase = false;
            return KDesktopFile::groupImpl(groupName);
        } else if (kdesktopfile_groupimpl_callback != nullptr) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            libqt_string groupName_str;
            groupName_str.len = groupName_b.length();
            groupName_str.data = static_cast<const char*>(malloc(groupName_str.len + 1));
            memcpy((void*)groupName_str.data, groupName_b.data(), groupName_str.len);
            ((char*)groupName_str.data)[groupName_str.len] = '\0';
            libqt_string cbval1 = groupName_str;

            KConfigGroup* callback_ret = kdesktopfile_groupimpl_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDesktopFile::groupImpl(groupName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteGroupImpl(const QString& groupName, KConfigBase::WriteConfigFlags flags) override {
        if (kdesktopfile_deletegroupimpl_isbase) {
            kdesktopfile_deletegroupimpl_isbase = false;
            KDesktopFile::deleteGroupImpl(groupName, flags);
        } else if (kdesktopfile_deletegroupimpl_callback != nullptr) {
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

            kdesktopfile_deletegroupimpl_callback(this, cbval1, cbval2);
        } else {
            KDesktopFile::deleteGroupImpl(groupName, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isGroupImmutableImpl(const QString& groupName) const override {
        if (kdesktopfile_isgroupimmutableimpl_isbase) {
            kdesktopfile_isgroupimmutableimpl_isbase = false;
            return KDesktopFile::isGroupImmutableImpl(groupName);
        } else if (kdesktopfile_isgroupimmutableimpl_callback != nullptr) {
            const QString groupName_ret = groupName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray groupName_b = groupName_ret.toUtf8();
            libqt_string groupName_str;
            groupName_str.len = groupName_b.length();
            groupName_str.data = static_cast<const char*>(malloc(groupName_str.len + 1));
            memcpy((void*)groupName_str.data, groupName_b.data(), groupName_str.len);
            ((char*)groupName_str.data)[groupName_str.len] = '\0';
            libqt_string cbval1 = groupName_str;

            bool callback_ret = kdesktopfile_isgroupimmutableimpl_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDesktopFile::isGroupImmutableImpl(groupName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kdesktopfile_virtualhook_isbase) {
            kdesktopfile_virtualhook_isbase = false;
            KDesktopFile::virtual_hook(id, data);
        } else if (kdesktopfile_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kdesktopfile_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KDesktopFile::virtual_hook(id, data);
        }
    }

    // Friend functions
    friend bool KDesktopFile_HasGroupImpl(const KDesktopFile* self, const libqt_string groupName);
    friend bool KDesktopFile_QBaseHasGroupImpl(const KDesktopFile* self, const libqt_string groupName);
    friend KConfigGroup* KDesktopFile_GroupImpl(KDesktopFile* self, const libqt_string groupName);
    friend KConfigGroup* KDesktopFile_QBaseGroupImpl(KDesktopFile* self, const libqt_string groupName);
    friend void KDesktopFile_DeleteGroupImpl(KDesktopFile* self, const libqt_string groupName, int flags);
    friend void KDesktopFile_QBaseDeleteGroupImpl(KDesktopFile* self, const libqt_string groupName, int flags);
    friend bool KDesktopFile_IsGroupImmutableImpl(const KDesktopFile* self, const libqt_string groupName);
    friend bool KDesktopFile_QBaseIsGroupImmutableImpl(const KDesktopFile* self, const libqt_string groupName);
    friend void KDesktopFile_VirtualHook(KDesktopFile* self, int id, void* data);
    friend void KDesktopFile_QBaseVirtualHook(KDesktopFile* self, int id, void* data);
};

#endif
