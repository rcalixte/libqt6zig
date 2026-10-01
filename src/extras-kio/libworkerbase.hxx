#pragma once
#ifndef EXTRAS_KIO_LIBWORKERBASE_HXX
#define EXTRAS_KIO_LIBWORKERBASE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::WorkerBase
class VirtualKIOWorkerBase final : public KIO::WorkerBase {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__WorkerBase_AppConnectionMade_Callback = void (*)(KIO__WorkerBase*);
    using KIO__WorkerBase_SetHost_Callback = void (*)(KIO__WorkerBase*, const char*, uint16_t, const char*, const char*);
    using KIO__WorkerBase_OpenConnection_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*);
    using KIO__WorkerBase_CloseConnection_Callback = void (*)(KIO__WorkerBase*);
    using KIO__WorkerBase_Get_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*);
    using KIO__WorkerBase_Open_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, int);
    using KIO__WorkerBase_Read_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, unsigned long long);
    using KIO__WorkerBase_Write_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, libqt_string);
    using KIO__WorkerBase_Seek_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, unsigned long long);
    using KIO__WorkerBase_Truncate_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, unsigned long long);
    using KIO__WorkerBase_Close_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*);
    using KIO__WorkerBase_Put_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, int, int);
    using KIO__WorkerBase_Stat_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*);
    using KIO__WorkerBase_Mimetype_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*);
    using KIO__WorkerBase_ListDir_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*);
    using KIO__WorkerBase_Mkdir_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, int);
    using KIO__WorkerBase_Rename_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, QUrl*, int);
    using KIO__WorkerBase_Symlink_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, const char*, QUrl*, int);
    using KIO__WorkerBase_Chmod_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, int);
    using KIO__WorkerBase_Chown_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, const char*, const char*);
    using KIO__WorkerBase_SetModificationTime_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, QDateTime*);
    using KIO__WorkerBase_Copy_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, QUrl*, int, int);
    using KIO__WorkerBase_Del_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*, bool);
    using KIO__WorkerBase_Special_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, libqt_string);
    using KIO__WorkerBase_FileSystemFreeSpace_Callback = KIO__WorkerResult* (*)(KIO__WorkerBase*, QUrl*);
    using KIO__WorkerBase_WorkerStatus2_Callback = void (*)(KIO__WorkerBase*);
    using KIO__WorkerBase_ReparseConfiguration_Callback = void (*)(KIO__WorkerBase*);

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

    VirtualKIOWorkerBase(const QByteArray& protocol, const QByteArray& poolSocket, const QByteArray& appSocket) : KIO::WorkerBase(protocol, poolSocket, appSocket) {};

    // Virtual method for C ABI access and custom callback
    virtual void appConnectionMade() override {
        if (kio__workerbase_appconnectionmade_callback) {
            kio__workerbase_appconnectionmade_callback(this);
            return;
        }
        KIO__WorkerBase::appConnectionMade();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHost(const QString& host, quint16 port, const QString& user, const QString& pass) override {
        if (kio__workerbase_sethost_callback) {
            const auto host_ret = host;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray host_b = host_ret.toUtf8();
            auto host_str_len = host_b.length();
            const char* host_str = static_cast<const char*>(malloc(host_str_len + 1));
            memcpy((void*)host_str, host_b.data(), host_str_len);
            ((char*)host_str)[host_str_len] = '\0';
            const char* cbval1 = host_str;
            uint16_t cbval2 = static_cast<uint16_t>(port);
            const auto user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            auto user_str_len = user_b.length();
            const char* user_str = static_cast<const char*>(malloc(user_str_len + 1));
            memcpy((void*)user_str, user_b.data(), user_str_len);
            ((char*)user_str)[user_str_len] = '\0';
            const char* cbval3 = user_str;
            const auto pass_ret = pass;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray pass_b = pass_ret.toUtf8();
            auto pass_str_len = pass_b.length();
            const char* pass_str = static_cast<const char*>(malloc(pass_str_len + 1));
            memcpy((void*)pass_str, pass_b.data(), pass_str_len);
            ((char*)pass_str)[pass_str_len] = '\0';
            const char* cbval4 = pass_str;
            kio__workerbase_sethost_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(host_str);
            libqt_free(user_str);
            libqt_free(pass_str);
            return;
        }
        KIO__WorkerBase::setHost(host, port, user, pass);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult openConnection() override {
        if (kio__workerbase_openconnection_callback) {
            KIO__WorkerResult* callback_ret = kio__workerbase_openconnection_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::openConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeConnection() override {
        if (kio__workerbase_closeconnection_callback) {
            kio__workerbase_closeconnection_callback(this);
            return;
        }
        KIO__WorkerBase::closeConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult get(const QUrl& url) override {
        if (kio__workerbase_get_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            KIO__WorkerResult* callback_ret = kio__workerbase_get_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::get(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult open(const QUrl& url, QIODevice::OpenMode mode) override {
        if (kio__workerbase_open_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = static_cast<int>(mode);
            KIO__WorkerResult* callback_ret = kio__workerbase_open_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::open(url, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult read(KIO::filesize_t size) override {
        if (kio__workerbase_read_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(size);
            KIO__WorkerResult* callback_ret = kio__workerbase_read_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::read(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult write(const QByteArray& data) override {
        if (kio__workerbase_write_callback) {
            const QByteArray data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<char*>(malloc(data_str.len));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            libqt_string cbval1 = data_str;
            KIO__WorkerResult* callback_ret = kio__workerbase_write_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(data_str.data);
            return callback_ret_Value;
        }
        return KIO__WorkerBase::write(data);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult seek(KIO::filesize_t offset) override {
        if (kio__workerbase_seek_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(offset);
            KIO__WorkerResult* callback_ret = kio__workerbase_seek_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::seek(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult truncate(KIO::filesize_t size) override {
        if (kio__workerbase_truncate_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(size);
            KIO__WorkerResult* callback_ret = kio__workerbase_truncate_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::truncate(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult close() override {
        if (kio__workerbase_close_callback) {
            KIO__WorkerResult* callback_ret = kio__workerbase_close_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult put(const QUrl& url, int permissions, KIO::JobFlags flags) override {
        if (kio__workerbase_put_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;
            int cbval3 = static_cast<int>(flags);
            KIO__WorkerResult* callback_ret = kio__workerbase_put_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::put(url, permissions, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult stat(const QUrl& url) override {
        if (kio__workerbase_stat_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            KIO__WorkerResult* callback_ret = kio__workerbase_stat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::stat(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult mimetype(const QUrl& url) override {
        if (kio__workerbase_mimetype_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            KIO__WorkerResult* callback_ret = kio__workerbase_mimetype_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::mimetype(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult listDir(const QUrl& url) override {
        if (kio__workerbase_listdir_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            KIO__WorkerResult* callback_ret = kio__workerbase_listdir_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::listDir(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult mkdir(const QUrl& url, int permissions) override {
        if (kio__workerbase_mkdir_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;
            KIO__WorkerResult* callback_ret = kio__workerbase_mkdir_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::mkdir(url, permissions);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult rename(const QUrl& src, const QUrl& dest, KIO::JobFlags flags) override {
        if (kio__workerbase_rename_callback) {
            const QUrl& src_ret = src;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&src_ret);
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = static_cast<int>(flags);
            KIO__WorkerResult* callback_ret = kio__workerbase_rename_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::rename(src, dest, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult symlink(const QString& target, const QUrl& dest, KIO::JobFlags flags) override {
        if (kio__workerbase_symlink_callback) {
            const auto target_ret = target;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray target_b = target_ret.toUtf8();
            auto target_str_len = target_b.length();
            const char* target_str = static_cast<const char*>(malloc(target_str_len + 1));
            memcpy((void*)target_str, target_b.data(), target_str_len);
            ((char*)target_str)[target_str_len] = '\0';
            const char* cbval1 = target_str;
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = static_cast<int>(flags);
            KIO__WorkerResult* callback_ret = kio__workerbase_symlink_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(target_str);
            return callback_ret_Value;
        }
        return KIO__WorkerBase::symlink(target, dest, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult chmod(const QUrl& url, int permissions) override {
        if (kio__workerbase_chmod_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;
            KIO__WorkerResult* callback_ret = kio__workerbase_chmod_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::chmod(url, permissions);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult chown(const QUrl& url, const QString& owner, const QString& group) override {
        if (kio__workerbase_chown_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            const auto owner_ret = owner;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray owner_b = owner_ret.toUtf8();
            auto owner_str_len = owner_b.length();
            const char* owner_str = static_cast<const char*>(malloc(owner_str_len + 1));
            memcpy((void*)owner_str, owner_b.data(), owner_str_len);
            ((char*)owner_str)[owner_str_len] = '\0';
            const char* cbval2 = owner_str;
            const auto group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            auto group_str_len = group_b.length();
            const char* group_str = static_cast<const char*>(malloc(group_str_len + 1));
            memcpy((void*)group_str, group_b.data(), group_str_len);
            ((char*)group_str)[group_str_len] = '\0';
            const char* cbval3 = group_str;
            KIO__WorkerResult* callback_ret = kio__workerbase_chown_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(owner_str);
            libqt_free(group_str);
            return callback_ret_Value;
        }
        return KIO__WorkerBase::chown(url, owner, group);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult setModificationTime(const QUrl& url, const QDateTime& mtime) override {
        if (kio__workerbase_setmodificationtime_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            const QDateTime& mtime_ret = mtime;
            // Cast returned reference into pointer
            QDateTime* cbval2 = const_cast<QDateTime*>(&mtime_ret);
            KIO__WorkerResult* callback_ret = kio__workerbase_setmodificationtime_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::setModificationTime(url, mtime);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult copy(const QUrl& src, const QUrl& dest, int permissions, KIO::JobFlags flags) override {
        if (kio__workerbase_copy_callback) {
            const QUrl& src_ret = src;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&src_ret);
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = permissions;
            int cbval4 = static_cast<int>(flags);
            KIO__WorkerResult* callback_ret = kio__workerbase_copy_callback(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::copy(src, dest, permissions, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult del(const QUrl& url, bool isfile) override {
        if (kio__workerbase_del_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            bool cbval2 = isfile;
            KIO__WorkerResult* callback_ret = kio__workerbase_del_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::del(url, isfile);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult special(const QByteArray& data) override {
        if (kio__workerbase_special_callback) {
            const QByteArray data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<char*>(malloc(data_str.len));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            libqt_string cbval1 = data_str;
            KIO__WorkerResult* callback_ret = kio__workerbase_special_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(data_str.data);
            return callback_ret_Value;
        }
        return KIO__WorkerBase::special(data);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult fileSystemFreeSpace(const QUrl& url) override {
        if (kio__workerbase_filesystemfreespace_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            KIO__WorkerResult* callback_ret = kio__workerbase_filesystemfreespace_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__WorkerBase::fileSystemFreeSpace(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual void worker_status() override {
        if (kio__workerbase_workerstatus2_callback) {
            kio__workerbase_workerstatus2_callback(this);
            return;
        }
        KIO__WorkerBase::worker_status();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reparseConfiguration() override {
        if (kio__workerbase_reparseconfiguration_callback) {
            kio__workerbase_reparseconfiguration_callback(this);
            return;
        }
        KIO__WorkerBase::reparseConfiguration();
    }
};

#endif
