#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALWORKERBASE_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALWORKERBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::WorkerBase so that we can call protected methods
class VirtualKIOWorkerBase final : public KIO::WorkerBase {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOWorkerBase = true;

    // Virtual class public types (including callbacks)
    using KIO__WorkerBase_AppConnectionMade_Callback = void (*)();
    using KIO__WorkerBase_SetHost_Callback = void (*)(KIO__WorkerBase*, libqt_string, uint16_t, libqt_string, libqt_string);
    using KIO__WorkerBase_OpenConnection_Callback = KIO__WorkerResult* (*)();
    using KIO__WorkerBase_CloseConnection_Callback = void (*)();
    using KIO__WorkerBase_Get_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*);
    using KIO__WorkerBase_Open_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, int);
    using KIO__WorkerBase_Read_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, unsigned long long);
    using KIO__WorkerBase_Write_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, libqt_string);
    using KIO__WorkerBase_Seek_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, unsigned long long);
    using KIO__WorkerBase_Truncate_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, unsigned long long);
    using KIO__WorkerBase_Close_Callback = KIO__WorkerResult* (*)();
    using KIO__WorkerBase_Put_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, int, int);
    using KIO__WorkerBase_Stat_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*);
    using KIO__WorkerBase_Mimetype_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*);
    using KIO__WorkerBase_ListDir_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*);
    using KIO__WorkerBase_Mkdir_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, int);
    using KIO__WorkerBase_Rename_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, QUrl*, int);
    using KIO__WorkerBase_Symlink_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, libqt_string, QUrl*, int);
    using KIO__WorkerBase_Chmod_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, int);
    using KIO__WorkerBase_Chown_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, libqt_string, libqt_string);
    using KIO__WorkerBase_SetModificationTime_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, QDateTime*);
    using KIO__WorkerBase_Copy_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, QUrl*, int, int);
    using KIO__WorkerBase_Del_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, bool);
    using KIO__WorkerBase_Special_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, libqt_string);
    using KIO__WorkerBase_FileSystemFreeSpace_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*);
    using KIO__WorkerBase_WorkerStatus2_Callback = void (*)();
    using KIO__WorkerBase_ReparseConfiguration_Callback = void (*)();

  protected:
    // Instance callback storage
    KIO__WorkerBase_AppConnectionMade_Callback kio__workerbase_appconnectionmade_callback = nullptr;
    KIO__WorkerBase_SetHost_Callback kio__workerbase_sethost_callback = nullptr;
    KIO__WorkerBase_OpenConnection_Callback kio__workerbase_openconnection_callback = nullptr;
    KIO__WorkerBase_CloseConnection_Callback kio__workerbase_closeconnection_callback = nullptr;
    KIO__WorkerBase_Get_Callback kio__workerbase_get_callback = nullptr;
    KIO__WorkerBase_Open_Callback kio__workerbase_open_callback = nullptr;
    KIO__WorkerBase_Read_Callback kio__workerbase_read_callback = nullptr;
    KIO__WorkerBase_Write_Callback kio__workerbase_write_callback = nullptr;
    KIO__WorkerBase_Seek_Callback kio__workerbase_seek_callback = nullptr;
    KIO__WorkerBase_Truncate_Callback kio__workerbase_truncate_callback = nullptr;
    KIO__WorkerBase_Close_Callback kio__workerbase_close_callback = nullptr;
    KIO__WorkerBase_Put_Callback kio__workerbase_put_callback = nullptr;
    KIO__WorkerBase_Stat_Callback kio__workerbase_stat_callback = nullptr;
    KIO__WorkerBase_Mimetype_Callback kio__workerbase_mimetype_callback = nullptr;
    KIO__WorkerBase_ListDir_Callback kio__workerbase_listdir_callback = nullptr;
    KIO__WorkerBase_Mkdir_Callback kio__workerbase_mkdir_callback = nullptr;
    KIO__WorkerBase_Rename_Callback kio__workerbase_rename_callback = nullptr;
    KIO__WorkerBase_Symlink_Callback kio__workerbase_symlink_callback = nullptr;
    KIO__WorkerBase_Chmod_Callback kio__workerbase_chmod_callback = nullptr;
    KIO__WorkerBase_Chown_Callback kio__workerbase_chown_callback = nullptr;
    KIO__WorkerBase_SetModificationTime_Callback kio__workerbase_setmodificationtime_callback = nullptr;
    KIO__WorkerBase_Copy_Callback kio__workerbase_copy_callback = nullptr;
    KIO__WorkerBase_Del_Callback kio__workerbase_del_callback = nullptr;
    KIO__WorkerBase_Special_Callback kio__workerbase_special_callback = nullptr;
    KIO__WorkerBase_FileSystemFreeSpace_Callback kio__workerbase_filesystemfreespace_callback = nullptr;
    KIO__WorkerBase_WorkerStatus2_Callback kio__workerbase_workerstatus2_callback = nullptr;
    KIO__WorkerBase_ReparseConfiguration_Callback kio__workerbase_reparseconfiguration_callback = nullptr;

    // Instance base flags
    mutable bool kio__workerbase_appconnectionmade_isbase = false;
    mutable bool kio__workerbase_sethost_isbase = false;
    mutable bool kio__workerbase_openconnection_isbase = false;
    mutable bool kio__workerbase_closeconnection_isbase = false;
    mutable bool kio__workerbase_get_isbase = false;
    mutable bool kio__workerbase_open_isbase = false;
    mutable bool kio__workerbase_read_isbase = false;
    mutable bool kio__workerbase_write_isbase = false;
    mutable bool kio__workerbase_seek_isbase = false;
    mutable bool kio__workerbase_truncate_isbase = false;
    mutable bool kio__workerbase_close_isbase = false;
    mutable bool kio__workerbase_put_isbase = false;
    mutable bool kio__workerbase_stat_isbase = false;
    mutable bool kio__workerbase_mimetype_isbase = false;
    mutable bool kio__workerbase_listdir_isbase = false;
    mutable bool kio__workerbase_mkdir_isbase = false;
    mutable bool kio__workerbase_rename_isbase = false;
    mutable bool kio__workerbase_symlink_isbase = false;
    mutable bool kio__workerbase_chmod_isbase = false;
    mutable bool kio__workerbase_chown_isbase = false;
    mutable bool kio__workerbase_setmodificationtime_isbase = false;
    mutable bool kio__workerbase_copy_isbase = false;
    mutable bool kio__workerbase_del_isbase = false;
    mutable bool kio__workerbase_special_isbase = false;
    mutable bool kio__workerbase_filesystemfreespace_isbase = false;
    mutable bool kio__workerbase_workerstatus2_isbase = false;
    mutable bool kio__workerbase_reparseconfiguration_isbase = false;

  public:
    VirtualKIOWorkerBase(const QByteArray& protocol, const QByteArray& poolSocket, const QByteArray& appSocket) : KIO::WorkerBase(protocol, poolSocket, appSocket) {};

    ~VirtualKIOWorkerBase() {
        kio__workerbase_appconnectionmade_callback = nullptr;
        kio__workerbase_sethost_callback = nullptr;
        kio__workerbase_openconnection_callback = nullptr;
        kio__workerbase_closeconnection_callback = nullptr;
        kio__workerbase_get_callback = nullptr;
        kio__workerbase_open_callback = nullptr;
        kio__workerbase_read_callback = nullptr;
        kio__workerbase_write_callback = nullptr;
        kio__workerbase_seek_callback = nullptr;
        kio__workerbase_truncate_callback = nullptr;
        kio__workerbase_close_callback = nullptr;
        kio__workerbase_put_callback = nullptr;
        kio__workerbase_stat_callback = nullptr;
        kio__workerbase_mimetype_callback = nullptr;
        kio__workerbase_listdir_callback = nullptr;
        kio__workerbase_mkdir_callback = nullptr;
        kio__workerbase_rename_callback = nullptr;
        kio__workerbase_symlink_callback = nullptr;
        kio__workerbase_chmod_callback = nullptr;
        kio__workerbase_chown_callback = nullptr;
        kio__workerbase_setmodificationtime_callback = nullptr;
        kio__workerbase_copy_callback = nullptr;
        kio__workerbase_del_callback = nullptr;
        kio__workerbase_special_callback = nullptr;
        kio__workerbase_filesystemfreespace_callback = nullptr;
        kio__workerbase_workerstatus2_callback = nullptr;
        kio__workerbase_reparseconfiguration_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__WorkerBase_AppConnectionMade_Callback(KIO__WorkerBase_AppConnectionMade_Callback cb) { kio__workerbase_appconnectionmade_callback = cb; }
    inline void setKIO__WorkerBase_SetHost_Callback(KIO__WorkerBase_SetHost_Callback cb) { kio__workerbase_sethost_callback = cb; }
    inline void setKIO__WorkerBase_OpenConnection_Callback(KIO__WorkerBase_OpenConnection_Callback cb) { kio__workerbase_openconnection_callback = cb; }
    inline void setKIO__WorkerBase_CloseConnection_Callback(KIO__WorkerBase_CloseConnection_Callback cb) { kio__workerbase_closeconnection_callback = cb; }
    inline void setKIO__WorkerBase_Get_Callback(KIO__WorkerBase_Get_Callback cb) { kio__workerbase_get_callback = cb; }
    inline void setKIO__WorkerBase_Open_Callback(KIO__WorkerBase_Open_Callback cb) { kio__workerbase_open_callback = cb; }
    inline void setKIO__WorkerBase_Read_Callback(KIO__WorkerBase_Read_Callback cb) { kio__workerbase_read_callback = cb; }
    inline void setKIO__WorkerBase_Write_Callback(KIO__WorkerBase_Write_Callback cb) { kio__workerbase_write_callback = cb; }
    inline void setKIO__WorkerBase_Seek_Callback(KIO__WorkerBase_Seek_Callback cb) { kio__workerbase_seek_callback = cb; }
    inline void setKIO__WorkerBase_Truncate_Callback(KIO__WorkerBase_Truncate_Callback cb) { kio__workerbase_truncate_callback = cb; }
    inline void setKIO__WorkerBase_Close_Callback(KIO__WorkerBase_Close_Callback cb) { kio__workerbase_close_callback = cb; }
    inline void setKIO__WorkerBase_Put_Callback(KIO__WorkerBase_Put_Callback cb) { kio__workerbase_put_callback = cb; }
    inline void setKIO__WorkerBase_Stat_Callback(KIO__WorkerBase_Stat_Callback cb) { kio__workerbase_stat_callback = cb; }
    inline void setKIO__WorkerBase_Mimetype_Callback(KIO__WorkerBase_Mimetype_Callback cb) { kio__workerbase_mimetype_callback = cb; }
    inline void setKIO__WorkerBase_ListDir_Callback(KIO__WorkerBase_ListDir_Callback cb) { kio__workerbase_listdir_callback = cb; }
    inline void setKIO__WorkerBase_Mkdir_Callback(KIO__WorkerBase_Mkdir_Callback cb) { kio__workerbase_mkdir_callback = cb; }
    inline void setKIO__WorkerBase_Rename_Callback(KIO__WorkerBase_Rename_Callback cb) { kio__workerbase_rename_callback = cb; }
    inline void setKIO__WorkerBase_Symlink_Callback(KIO__WorkerBase_Symlink_Callback cb) { kio__workerbase_symlink_callback = cb; }
    inline void setKIO__WorkerBase_Chmod_Callback(KIO__WorkerBase_Chmod_Callback cb) { kio__workerbase_chmod_callback = cb; }
    inline void setKIO__WorkerBase_Chown_Callback(KIO__WorkerBase_Chown_Callback cb) { kio__workerbase_chown_callback = cb; }
    inline void setKIO__WorkerBase_SetModificationTime_Callback(KIO__WorkerBase_SetModificationTime_Callback cb) { kio__workerbase_setmodificationtime_callback = cb; }
    inline void setKIO__WorkerBase_Copy_Callback(KIO__WorkerBase_Copy_Callback cb) { kio__workerbase_copy_callback = cb; }
    inline void setKIO__WorkerBase_Del_Callback(KIO__WorkerBase_Del_Callback cb) { kio__workerbase_del_callback = cb; }
    inline void setKIO__WorkerBase_Special_Callback(KIO__WorkerBase_Special_Callback cb) { kio__workerbase_special_callback = cb; }
    inline void setKIO__WorkerBase_FileSystemFreeSpace_Callback(KIO__WorkerBase_FileSystemFreeSpace_Callback cb) { kio__workerbase_filesystemfreespace_callback = cb; }
    inline void setKIO__WorkerBase_WorkerStatus2_Callback(KIO__WorkerBase_WorkerStatus2_Callback cb) { kio__workerbase_workerstatus2_callback = cb; }
    inline void setKIO__WorkerBase_ReparseConfiguration_Callback(KIO__WorkerBase_ReparseConfiguration_Callback cb) { kio__workerbase_reparseconfiguration_callback = cb; }

    // Base flag setters
    inline void setKIO__WorkerBase_AppConnectionMade_IsBase(bool value) const { kio__workerbase_appconnectionmade_isbase = value; }
    inline void setKIO__WorkerBase_SetHost_IsBase(bool value) const { kio__workerbase_sethost_isbase = value; }
    inline void setKIO__WorkerBase_OpenConnection_IsBase(bool value) const { kio__workerbase_openconnection_isbase = value; }
    inline void setKIO__WorkerBase_CloseConnection_IsBase(bool value) const { kio__workerbase_closeconnection_isbase = value; }
    inline void setKIO__WorkerBase_Get_IsBase(bool value) const { kio__workerbase_get_isbase = value; }
    inline void setKIO__WorkerBase_Open_IsBase(bool value) const { kio__workerbase_open_isbase = value; }
    inline void setKIO__WorkerBase_Read_IsBase(bool value) const { kio__workerbase_read_isbase = value; }
    inline void setKIO__WorkerBase_Write_IsBase(bool value) const { kio__workerbase_write_isbase = value; }
    inline void setKIO__WorkerBase_Seek_IsBase(bool value) const { kio__workerbase_seek_isbase = value; }
    inline void setKIO__WorkerBase_Truncate_IsBase(bool value) const { kio__workerbase_truncate_isbase = value; }
    inline void setKIO__WorkerBase_Close_IsBase(bool value) const { kio__workerbase_close_isbase = value; }
    inline void setKIO__WorkerBase_Put_IsBase(bool value) const { kio__workerbase_put_isbase = value; }
    inline void setKIO__WorkerBase_Stat_IsBase(bool value) const { kio__workerbase_stat_isbase = value; }
    inline void setKIO__WorkerBase_Mimetype_IsBase(bool value) const { kio__workerbase_mimetype_isbase = value; }
    inline void setKIO__WorkerBase_ListDir_IsBase(bool value) const { kio__workerbase_listdir_isbase = value; }
    inline void setKIO__WorkerBase_Mkdir_IsBase(bool value) const { kio__workerbase_mkdir_isbase = value; }
    inline void setKIO__WorkerBase_Rename_IsBase(bool value) const { kio__workerbase_rename_isbase = value; }
    inline void setKIO__WorkerBase_Symlink_IsBase(bool value) const { kio__workerbase_symlink_isbase = value; }
    inline void setKIO__WorkerBase_Chmod_IsBase(bool value) const { kio__workerbase_chmod_isbase = value; }
    inline void setKIO__WorkerBase_Chown_IsBase(bool value) const { kio__workerbase_chown_isbase = value; }
    inline void setKIO__WorkerBase_SetModificationTime_IsBase(bool value) const { kio__workerbase_setmodificationtime_isbase = value; }
    inline void setKIO__WorkerBase_Copy_IsBase(bool value) const { kio__workerbase_copy_isbase = value; }
    inline void setKIO__WorkerBase_Del_IsBase(bool value) const { kio__workerbase_del_isbase = value; }
    inline void setKIO__WorkerBase_Special_IsBase(bool value) const { kio__workerbase_special_isbase = value; }
    inline void setKIO__WorkerBase_FileSystemFreeSpace_IsBase(bool value) const { kio__workerbase_filesystemfreespace_isbase = value; }
    inline void setKIO__WorkerBase_WorkerStatus2_IsBase(bool value) const { kio__workerbase_workerstatus2_isbase = value; }
    inline void setKIO__WorkerBase_ReparseConfiguration_IsBase(bool value) const { kio__workerbase_reparseconfiguration_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void appConnectionMade() override {
        if (kio__workerbase_appconnectionmade_isbase) {
            kio__workerbase_appconnectionmade_isbase = false;
            KIO__WorkerBase::appConnectionMade();
        } else if (kio__workerbase_appconnectionmade_callback != nullptr) {
            kio__workerbase_appconnectionmade_callback();
        } else {
            KIO__WorkerBase::appConnectionMade();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHost(const QString& host, quint16 port, const QString& user, const QString& pass) override {
        if (kio__workerbase_sethost_isbase) {
            kio__workerbase_sethost_isbase = false;
            KIO__WorkerBase::setHost(host, port, user, pass);
        } else if (kio__workerbase_sethost_callback != nullptr) {
            const QString host_ret = host;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray host_b = host_ret.toUtf8();
            libqt_string host_str;
            host_str.len = host_b.length();
            host_str.data = static_cast<const char*>(malloc(host_str.len + 1));
            memcpy((void*)host_str.data, host_b.data(), host_str.len);
            ((char*)host_str.data)[host_str.len] = '\0';
            libqt_string cbval1 = host_str;
            uint16_t cbval2 = static_cast<uint16_t>(port);
            const QString user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            libqt_string user_str;
            user_str.len = user_b.length();
            user_str.data = static_cast<const char*>(malloc(user_str.len + 1));
            memcpy((void*)user_str.data, user_b.data(), user_str.len);
            ((char*)user_str.data)[user_str.len] = '\0';
            libqt_string cbval3 = user_str;
            const QString pass_ret = pass;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray pass_b = pass_ret.toUtf8();
            libqt_string pass_str;
            pass_str.len = pass_b.length();
            pass_str.data = static_cast<const char*>(malloc(pass_str.len + 1));
            memcpy((void*)pass_str.data, pass_b.data(), pass_str.len);
            ((char*)pass_str.data)[pass_str.len] = '\0';
            libqt_string cbval4 = pass_str;

            kio__workerbase_sethost_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KIO__WorkerBase::setHost(host, port, user, pass);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult openConnection() override {
        if (kio__workerbase_openconnection_isbase) {
            kio__workerbase_openconnection_isbase = false;
            return KIO__WorkerBase::openConnection();
        } else if (kio__workerbase_openconnection_callback != nullptr) {
            KIO__WorkerResult* callback_ret = kio__workerbase_openconnection_callback();
            return *callback_ret;
        } else {
            return KIO__WorkerBase::openConnection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeConnection() override {
        if (kio__workerbase_closeconnection_isbase) {
            kio__workerbase_closeconnection_isbase = false;
            KIO__WorkerBase::closeConnection();
        } else if (kio__workerbase_closeconnection_callback != nullptr) {
            kio__workerbase_closeconnection_callback();
        } else {
            KIO__WorkerBase::closeConnection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult get(const QUrl& url) override {
        if (kio__workerbase_get_isbase) {
            kio__workerbase_get_isbase = false;
            return KIO__WorkerBase::get(url);
        } else if (kio__workerbase_get_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = kio__workerbase_get_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::get(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult open(const QUrl& url, QIODevice::OpenMode mode) override {
        if (kio__workerbase_open_isbase) {
            kio__workerbase_open_isbase = false;
            return KIO__WorkerBase::open(url, mode);
        } else if (kio__workerbase_open_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = static_cast<int>(mode);

            KIO__WorkerResult* callback_ret = kio__workerbase_open_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::open(url, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult read(KIO::filesize_t size) override {
        if (kio__workerbase_read_isbase) {
            kio__workerbase_read_isbase = false;
            return KIO__WorkerBase::read(size);
        } else if (kio__workerbase_read_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(size);

            KIO__WorkerResult* callback_ret = kio__workerbase_read_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::read(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult write(const QByteArray& data) override {
        if (kio__workerbase_write_isbase) {
            kio__workerbase_write_isbase = false;
            return KIO__WorkerBase::write(data);
        } else if (kio__workerbase_write_callback != nullptr) {
            const QByteArray data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<const char*>(malloc(data_str.len + 1));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            ((char*)data_str.data)[data_str.len] = '\0';
            libqt_string cbval1 = data_str;

            KIO__WorkerResult* callback_ret = kio__workerbase_write_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::write(data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult seek(KIO::filesize_t offset) override {
        if (kio__workerbase_seek_isbase) {
            kio__workerbase_seek_isbase = false;
            return KIO__WorkerBase::seek(offset);
        } else if (kio__workerbase_seek_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(offset);

            KIO__WorkerResult* callback_ret = kio__workerbase_seek_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::seek(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult truncate(KIO::filesize_t size) override {
        if (kio__workerbase_truncate_isbase) {
            kio__workerbase_truncate_isbase = false;
            return KIO__WorkerBase::truncate(size);
        } else if (kio__workerbase_truncate_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(size);

            KIO__WorkerResult* callback_ret = kio__workerbase_truncate_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::truncate(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult close() override {
        if (kio__workerbase_close_isbase) {
            kio__workerbase_close_isbase = false;
            return KIO__WorkerBase::close();
        } else if (kio__workerbase_close_callback != nullptr) {
            KIO__WorkerResult* callback_ret = kio__workerbase_close_callback();
            return *callback_ret;
        } else {
            return KIO__WorkerBase::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult put(const QUrl& url, int permissions, KIO::JobFlags flags) override {
        if (kio__workerbase_put_isbase) {
            kio__workerbase_put_isbase = false;
            return KIO__WorkerBase::put(url, permissions, flags);
        } else if (kio__workerbase_put_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;
            int cbval3 = static_cast<int>(flags);

            KIO__WorkerResult* callback_ret = kio__workerbase_put_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::put(url, permissions, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult stat(const QUrl& url) override {
        if (kio__workerbase_stat_isbase) {
            kio__workerbase_stat_isbase = false;
            return KIO__WorkerBase::stat(url);
        } else if (kio__workerbase_stat_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = kio__workerbase_stat_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::stat(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult mimetype(const QUrl& url) override {
        if (kio__workerbase_mimetype_isbase) {
            kio__workerbase_mimetype_isbase = false;
            return KIO__WorkerBase::mimetype(url);
        } else if (kio__workerbase_mimetype_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = kio__workerbase_mimetype_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::mimetype(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult listDir(const QUrl& url) override {
        if (kio__workerbase_listdir_isbase) {
            kio__workerbase_listdir_isbase = false;
            return KIO__WorkerBase::listDir(url);
        } else if (kio__workerbase_listdir_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = kio__workerbase_listdir_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::listDir(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult mkdir(const QUrl& url, int permissions) override {
        if (kio__workerbase_mkdir_isbase) {
            kio__workerbase_mkdir_isbase = false;
            return KIO__WorkerBase::mkdir(url, permissions);
        } else if (kio__workerbase_mkdir_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;

            KIO__WorkerResult* callback_ret = kio__workerbase_mkdir_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::mkdir(url, permissions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult rename(const QUrl& src, const QUrl& dest, KIO::JobFlags flags) override {
        if (kio__workerbase_rename_isbase) {
            kio__workerbase_rename_isbase = false;
            return KIO__WorkerBase::rename(src, dest, flags);
        } else if (kio__workerbase_rename_callback != nullptr) {
            const QUrl& src_ret = src;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&src_ret);
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = static_cast<int>(flags);

            KIO__WorkerResult* callback_ret = kio__workerbase_rename_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::rename(src, dest, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult symlink(const QString& target, const QUrl& dest, KIO::JobFlags flags) override {
        if (kio__workerbase_symlink_isbase) {
            kio__workerbase_symlink_isbase = false;
            return KIO__WorkerBase::symlink(target, dest, flags);
        } else if (kio__workerbase_symlink_callback != nullptr) {
            const QString target_ret = target;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray target_b = target_ret.toUtf8();
            libqt_string target_str;
            target_str.len = target_b.length();
            target_str.data = static_cast<const char*>(malloc(target_str.len + 1));
            memcpy((void*)target_str.data, target_b.data(), target_str.len);
            ((char*)target_str.data)[target_str.len] = '\0';
            libqt_string cbval1 = target_str;
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = static_cast<int>(flags);

            KIO__WorkerResult* callback_ret = kio__workerbase_symlink_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::symlink(target, dest, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult chmod(const QUrl& url, int permissions) override {
        if (kio__workerbase_chmod_isbase) {
            kio__workerbase_chmod_isbase = false;
            return KIO__WorkerBase::chmod(url, permissions);
        } else if (kio__workerbase_chmod_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;

            KIO__WorkerResult* callback_ret = kio__workerbase_chmod_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::chmod(url, permissions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult chown(const QUrl& url, const QString& owner, const QString& group) override {
        if (kio__workerbase_chown_isbase) {
            kio__workerbase_chown_isbase = false;
            return KIO__WorkerBase::chown(url, owner, group);
        } else if (kio__workerbase_chown_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            const QString owner_ret = owner;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray owner_b = owner_ret.toUtf8();
            libqt_string owner_str;
            owner_str.len = owner_b.length();
            owner_str.data = static_cast<const char*>(malloc(owner_str.len + 1));
            memcpy((void*)owner_str.data, owner_b.data(), owner_str.len);
            ((char*)owner_str.data)[owner_str.len] = '\0';
            libqt_string cbval2 = owner_str;
            const QString group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            libqt_string group_str;
            group_str.len = group_b.length();
            group_str.data = static_cast<const char*>(malloc(group_str.len + 1));
            memcpy((void*)group_str.data, group_b.data(), group_str.len);
            ((char*)group_str.data)[group_str.len] = '\0';
            libqt_string cbval3 = group_str;

            KIO__WorkerResult* callback_ret = kio__workerbase_chown_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::chown(url, owner, group);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult setModificationTime(const QUrl& url, const QDateTime& mtime) override {
        if (kio__workerbase_setmodificationtime_isbase) {
            kio__workerbase_setmodificationtime_isbase = false;
            return KIO__WorkerBase::setModificationTime(url, mtime);
        } else if (kio__workerbase_setmodificationtime_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            const QDateTime& mtime_ret = mtime;
            // Cast returned reference into pointer
            QDateTime* cbval2 = const_cast<QDateTime*>(&mtime_ret);

            KIO__WorkerResult* callback_ret = kio__workerbase_setmodificationtime_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::setModificationTime(url, mtime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult copy(const QUrl& src, const QUrl& dest, int permissions, KIO::JobFlags flags) override {
        if (kio__workerbase_copy_isbase) {
            kio__workerbase_copy_isbase = false;
            return KIO__WorkerBase::copy(src, dest, permissions, flags);
        } else if (kio__workerbase_copy_callback != nullptr) {
            const QUrl& src_ret = src;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&src_ret);
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = permissions;
            int cbval4 = static_cast<int>(flags);

            KIO__WorkerResult* callback_ret = kio__workerbase_copy_callback(this, cbval1, cbval2, cbval3, cbval4);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::copy(src, dest, permissions, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult del(const QUrl& url, bool isfile) override {
        if (kio__workerbase_del_isbase) {
            kio__workerbase_del_isbase = false;
            return KIO__WorkerBase::del(url, isfile);
        } else if (kio__workerbase_del_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            bool cbval2 = isfile;

            KIO__WorkerResult* callback_ret = kio__workerbase_del_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::del(url, isfile);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult special(const QByteArray& data) override {
        if (kio__workerbase_special_isbase) {
            kio__workerbase_special_isbase = false;
            return KIO__WorkerBase::special(data);
        } else if (kio__workerbase_special_callback != nullptr) {
            const QByteArray data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<const char*>(malloc(data_str.len + 1));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            ((char*)data_str.data)[data_str.len] = '\0';
            libqt_string cbval1 = data_str;

            KIO__WorkerResult* callback_ret = kio__workerbase_special_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::special(data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult fileSystemFreeSpace(const QUrl& url) override {
        if (kio__workerbase_filesystemfreespace_isbase) {
            kio__workerbase_filesystemfreespace_isbase = false;
            return KIO__WorkerBase::fileSystemFreeSpace(url);
        } else if (kio__workerbase_filesystemfreespace_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = kio__workerbase_filesystemfreespace_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__WorkerBase::fileSystemFreeSpace(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void worker_status() override {
        if (kio__workerbase_workerstatus2_isbase) {
            kio__workerbase_workerstatus2_isbase = false;
            KIO__WorkerBase::worker_status();
        } else if (kio__workerbase_workerstatus2_callback != nullptr) {
            kio__workerbase_workerstatus2_callback();
        } else {
            KIO__WorkerBase::worker_status();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reparseConfiguration() override {
        if (kio__workerbase_reparseconfiguration_isbase) {
            kio__workerbase_reparseconfiguration_isbase = false;
            KIO__WorkerBase::reparseConfiguration();
        } else if (kio__workerbase_reparseconfiguration_callback != nullptr) {
            kio__workerbase_reparseconfiguration_callback();
        } else {
            KIO__WorkerBase::reparseConfiguration();
        }
    }
};

#endif
