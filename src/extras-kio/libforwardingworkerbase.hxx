#pragma once
#ifndef EXTRAS_KIO_LIBFORWARDINGWORKERBASE_HXX
#define EXTRAS_KIO_LIBFORWARDINGWORKERBASE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::ForwardingWorkerBase
class VirtualKIOForwardingWorkerBase : public KIO::ForwardingWorkerBase {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO::ForwardingWorkerBase::UDSEntryCreationMode;
    using KIO__ForwardingWorkerBase_MetaObject_Callback = QMetaObject* (*)(const KIO__ForwardingWorkerBase*);
    using KIO__ForwardingWorkerBase_Metacast_Callback = void* (*)(KIO__ForwardingWorkerBase*, const char*);
    using KIO__ForwardingWorkerBase_Metacall_Callback = int (*)(KIO__ForwardingWorkerBase*, int, int, void**);
    using KIO__ForwardingWorkerBase_Get_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_Put_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, int, int);
    using KIO__ForwardingWorkerBase_Stat_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_Mimetype_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_ListDir_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_Mkdir_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, int);
    using KIO__ForwardingWorkerBase_Rename_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, QUrl*, int);
    using KIO__ForwardingWorkerBase_Symlink_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, const char*, QUrl*, int);
    using KIO__ForwardingWorkerBase_Chmod_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, int);
    using KIO__ForwardingWorkerBase_SetModificationTime_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, QDateTime*);
    using KIO__ForwardingWorkerBase_Copy_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, QUrl*, int, int);
    using KIO__ForwardingWorkerBase_Del_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, bool);
    using KIO__ForwardingWorkerBase_RewriteUrl_Callback = bool (*)(KIO__ForwardingWorkerBase*, QUrl*, QUrl*);
    using KIO__ForwardingWorkerBase_AdjustUDSEntry_Callback = void (*)(const KIO__ForwardingWorkerBase*, KIO__UDSEntry*, int);
    using KIO__ForwardingWorkerBase_Event_Callback = bool (*)(KIO__ForwardingWorkerBase*, QEvent*);
    using KIO__ForwardingWorkerBase_EventFilter_Callback = bool (*)(KIO__ForwardingWorkerBase*, QObject*, QEvent*);
    using KIO__ForwardingWorkerBase_TimerEvent_Callback = void (*)(KIO__ForwardingWorkerBase*, QTimerEvent*);
    using KIO__ForwardingWorkerBase_ChildEvent_Callback = void (*)(KIO__ForwardingWorkerBase*, QChildEvent*);
    using KIO__ForwardingWorkerBase_CustomEvent_Callback = void (*)(KIO__ForwardingWorkerBase*, QEvent*);
    using KIO__ForwardingWorkerBase_ConnectNotify_Callback = void (*)(KIO__ForwardingWorkerBase*, QMetaMethod*);
    using KIO__ForwardingWorkerBase_DisconnectNotify_Callback = void (*)(KIO__ForwardingWorkerBase*, QMetaMethod*);
    using KIO__ForwardingWorkerBase_AppConnectionMade_Callback = void (*)(KIO__ForwardingWorkerBase*);
    using KIO__ForwardingWorkerBase_SetHost_Callback = void (*)(KIO__ForwardingWorkerBase*, const char*, uint16_t, const char*, const char*);
    using KIO__ForwardingWorkerBase_OpenConnection_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*);
    using KIO__ForwardingWorkerBase_CloseConnection_Callback = void (*)(KIO__ForwardingWorkerBase*);
    using KIO__ForwardingWorkerBase_Open_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, int);
    using KIO__ForwardingWorkerBase_Read_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, unsigned long long);
    using KIO__ForwardingWorkerBase_Write_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, libqt_string);
    using KIO__ForwardingWorkerBase_Seek_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, unsigned long long);
    using KIO__ForwardingWorkerBase_Truncate_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, unsigned long long);
    using KIO__ForwardingWorkerBase_Close_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*);
    using KIO__ForwardingWorkerBase_Chown_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, const char*, const char*);
    using KIO__ForwardingWorkerBase_Special_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, libqt_string);
    using KIO__ForwardingWorkerBase_FileSystemFreeSpace_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_WorkerStatus2_Callback = void (*)(KIO__ForwardingWorkerBase*);
    using KIO__ForwardingWorkerBase_ReparseConfiguration_Callback = void (*)(KIO__ForwardingWorkerBase*);
    using KIO::ForwardingWorkerBase::isSignalConnected;
    using KIO::ForwardingWorkerBase::processedUrl;
    using KIO::ForwardingWorkerBase::receivers;
    using KIO::ForwardingWorkerBase::requestedUrl;
    using KIO::ForwardingWorkerBase::sender;
    using KIO::ForwardingWorkerBase::senderSignalIndex;

    // Instance callback storage
    KIO__ForwardingWorkerBase_MetaObject_Callback kio__forwardingworkerbase_metaobject_callback = nullptr;
    KIO__ForwardingWorkerBase_Metacast_Callback kio__forwardingworkerbase_metacast_callback = nullptr;
    KIO__ForwardingWorkerBase_Metacall_Callback kio__forwardingworkerbase_metacall_callback = nullptr;
    KIO__ForwardingWorkerBase_Get_Callback kio__forwardingworkerbase_get_callback = nullptr;
    KIO__ForwardingWorkerBase_Put_Callback kio__forwardingworkerbase_put_callback = nullptr;
    KIO__ForwardingWorkerBase_Stat_Callback kio__forwardingworkerbase_stat_callback = nullptr;
    KIO__ForwardingWorkerBase_Mimetype_Callback kio__forwardingworkerbase_mimetype_callback = nullptr;
    KIO__ForwardingWorkerBase_ListDir_Callback kio__forwardingworkerbase_listdir_callback = nullptr;
    KIO__ForwardingWorkerBase_Mkdir_Callback kio__forwardingworkerbase_mkdir_callback = nullptr;
    KIO__ForwardingWorkerBase_Rename_Callback kio__forwardingworkerbase_rename_callback = nullptr;
    KIO__ForwardingWorkerBase_Symlink_Callback kio__forwardingworkerbase_symlink_callback = nullptr;
    KIO__ForwardingWorkerBase_Chmod_Callback kio__forwardingworkerbase_chmod_callback = nullptr;
    KIO__ForwardingWorkerBase_SetModificationTime_Callback kio__forwardingworkerbase_setmodificationtime_callback = nullptr;
    KIO__ForwardingWorkerBase_Copy_Callback kio__forwardingworkerbase_copy_callback = nullptr;
    KIO__ForwardingWorkerBase_Del_Callback kio__forwardingworkerbase_del_callback = nullptr;
    KIO__ForwardingWorkerBase_RewriteUrl_Callback kio__forwardingworkerbase_rewriteurl_callback = nullptr;
    KIO__ForwardingWorkerBase_AdjustUDSEntry_Callback kio__forwardingworkerbase_adjustudsentry_callback = nullptr;
    KIO__ForwardingWorkerBase_Event_Callback kio__forwardingworkerbase_event_callback = nullptr;
    KIO__ForwardingWorkerBase_EventFilter_Callback kio__forwardingworkerbase_eventfilter_callback = nullptr;
    KIO__ForwardingWorkerBase_TimerEvent_Callback kio__forwardingworkerbase_timerevent_callback = nullptr;
    KIO__ForwardingWorkerBase_ChildEvent_Callback kio__forwardingworkerbase_childevent_callback = nullptr;
    KIO__ForwardingWorkerBase_CustomEvent_Callback kio__forwardingworkerbase_customevent_callback = nullptr;
    KIO__ForwardingWorkerBase_ConnectNotify_Callback kio__forwardingworkerbase_connectnotify_callback = nullptr;
    KIO__ForwardingWorkerBase_DisconnectNotify_Callback kio__forwardingworkerbase_disconnectnotify_callback = nullptr;
    KIO__ForwardingWorkerBase_AppConnectionMade_Callback kio__forwardingworkerbase_appconnectionmade_callback = nullptr;
    KIO__ForwardingWorkerBase_SetHost_Callback kio__forwardingworkerbase_sethost_callback = nullptr;
    KIO__ForwardingWorkerBase_OpenConnection_Callback kio__forwardingworkerbase_openconnection_callback = nullptr;
    KIO__ForwardingWorkerBase_CloseConnection_Callback kio__forwardingworkerbase_closeconnection_callback = nullptr;
    KIO__ForwardingWorkerBase_Open_Callback kio__forwardingworkerbase_open_callback = nullptr;
    KIO__ForwardingWorkerBase_Read_Callback kio__forwardingworkerbase_read_callback = nullptr;
    KIO__ForwardingWorkerBase_Write_Callback kio__forwardingworkerbase_write_callback = nullptr;
    KIO__ForwardingWorkerBase_Seek_Callback kio__forwardingworkerbase_seek_callback = nullptr;
    KIO__ForwardingWorkerBase_Truncate_Callback kio__forwardingworkerbase_truncate_callback = nullptr;
    KIO__ForwardingWorkerBase_Close_Callback kio__forwardingworkerbase_close_callback = nullptr;
    KIO__ForwardingWorkerBase_Chown_Callback kio__forwardingworkerbase_chown_callback = nullptr;
    KIO__ForwardingWorkerBase_Special_Callback kio__forwardingworkerbase_special_callback = nullptr;
    KIO__ForwardingWorkerBase_FileSystemFreeSpace_Callback kio__forwardingworkerbase_filesystemfreespace_callback = nullptr;
    KIO__ForwardingWorkerBase_WorkerStatus2_Callback kio__forwardingworkerbase_workerstatus2_callback = nullptr;
    KIO__ForwardingWorkerBase_ReparseConfiguration_Callback kio__forwardingworkerbase_reparseconfiguration_callback = nullptr;

    // Access struct
    struct Base : KIO::ForwardingWorkerBase {
        using KIO::ForwardingWorkerBase::adjustUDSEntry;
        using KIO::ForwardingWorkerBase::childEvent;
        using KIO::ForwardingWorkerBase::connectNotify;
        using KIO::ForwardingWorkerBase::customEvent;
        using KIO::ForwardingWorkerBase::disconnectNotify;
        using KIO::ForwardingWorkerBase::rewriteUrl;
        using KIO::ForwardingWorkerBase::timerEvent;
    };

    VirtualKIOForwardingWorkerBase(const QByteArray& protocol, const QByteArray& poolSocket, const QByteArray& appSocket) : KIO::ForwardingWorkerBase(protocol, poolSocket, appSocket) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__forwardingworkerbase_metaobject_callback) {
            QMetaObject* callback_ret = kio__forwardingworkerbase_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__ForwardingWorkerBase::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__forwardingworkerbase_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__forwardingworkerbase_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__ForwardingWorkerBase::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__forwardingworkerbase_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__forwardingworkerbase_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__ForwardingWorkerBase::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult get(const QUrl& url) override {
        if (kio__forwardingworkerbase_get_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_get_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::get(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult put(const QUrl& url, int permissions, KIO::JobFlags flags) override {
        if (kio__forwardingworkerbase_put_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;
            int cbval3 = static_cast<int>(flags);
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_put_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::put(url, permissions, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult stat(const QUrl& url) override {
        if (kio__forwardingworkerbase_stat_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_stat_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::stat(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult mimetype(const QUrl& url) override {
        if (kio__forwardingworkerbase_mimetype_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_mimetype_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::mimetype(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult listDir(const QUrl& url) override {
        if (kio__forwardingworkerbase_listdir_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_listdir_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::listDir(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult mkdir(const QUrl& url, int permissions) override {
        if (kio__forwardingworkerbase_mkdir_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_mkdir_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::mkdir(url, permissions);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult rename(const QUrl& src, const QUrl& dest, KIO::JobFlags flags) override {
        if (kio__forwardingworkerbase_rename_callback) {
            const QUrl& src_ret = src;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&src_ret);
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = static_cast<int>(flags);
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_rename_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::rename(src, dest, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult symlink(const QString& target, const QUrl& dest, KIO::JobFlags flags) override {
        if (kio__forwardingworkerbase_symlink_callback) {
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
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_symlink_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(target_str);
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::symlink(target, dest, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult chmod(const QUrl& url, int permissions) override {
        if (kio__forwardingworkerbase_chmod_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_chmod_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::chmod(url, permissions);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult setModificationTime(const QUrl& url, const QDateTime& mtime) override {
        if (kio__forwardingworkerbase_setmodificationtime_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            const QDateTime& mtime_ret = mtime;
            // Cast returned reference into pointer
            QDateTime* cbval2 = const_cast<QDateTime*>(&mtime_ret);
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_setmodificationtime_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::setModificationTime(url, mtime);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult copy(const QUrl& src, const QUrl& dest, int permissions, KIO::JobFlags flags) override {
        if (kio__forwardingworkerbase_copy_callback) {
            const QUrl& src_ret = src;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&src_ret);
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = permissions;
            int cbval4 = static_cast<int>(flags);
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_copy_callback(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::copy(src, dest, permissions, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult del(const QUrl& url, bool isfile) override {
        if (kio__forwardingworkerbase_del_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            bool cbval2 = isfile;
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_del_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::del(url, isfile);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool rewriteUrl(const QUrl& url, QUrl& newURL) override {
        if (kio__forwardingworkerbase_rewriteurl_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            QUrl& newURL_ret = newURL;
            // Cast returned reference into pointer
            QUrl* cbval2 = &newURL_ret;
            bool callback_ret = kio__forwardingworkerbase_rewriteurl_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KIO::ForwardingWorkerBase::rewriteUrl called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void adjustUDSEntry(KIO::UDSEntry& entry, KIO::ForwardingWorkerBase::UDSEntryCreationMode creationMode) const override {
        if (kio__forwardingworkerbase_adjustudsentry_callback) {
            KIO::UDSEntry& entry_ret = entry;
            // Cast returned reference into pointer
            KIO__UDSEntry* cbval1 = &entry_ret;
            int cbval2 = static_cast<int>(creationMode);
            kio__forwardingworkerbase_adjustudsentry_callback(this, cbval1, cbval2);
            return;
        }
        KIO__ForwardingWorkerBase::adjustUDSEntry(entry, creationMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__forwardingworkerbase_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__forwardingworkerbase_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__ForwardingWorkerBase::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__forwardingworkerbase_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__forwardingworkerbase_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__ForwardingWorkerBase::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__forwardingworkerbase_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__forwardingworkerbase_timerevent_callback(this, cbval1);
            return;
        }
        KIO__ForwardingWorkerBase::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__forwardingworkerbase_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__forwardingworkerbase_childevent_callback(this, cbval1);
            return;
        }
        KIO__ForwardingWorkerBase::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__forwardingworkerbase_customevent_callback) {
            QEvent* cbval1 = event;
            kio__forwardingworkerbase_customevent_callback(this, cbval1);
            return;
        }
        KIO__ForwardingWorkerBase::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__forwardingworkerbase_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__forwardingworkerbase_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__ForwardingWorkerBase::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__forwardingworkerbase_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__forwardingworkerbase_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__ForwardingWorkerBase::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void appConnectionMade() override {
        if (kio__forwardingworkerbase_appconnectionmade_callback) {
            kio__forwardingworkerbase_appconnectionmade_callback(this);
            return;
        }
        KIO__ForwardingWorkerBase::appConnectionMade();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHost(const QString& host, quint16 port, const QString& user, const QString& pass) override {
        if (kio__forwardingworkerbase_sethost_callback) {
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
            kio__forwardingworkerbase_sethost_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(host_str);
            libqt_free(user_str);
            libqt_free(pass_str);
            return;
        }
        KIO__ForwardingWorkerBase::setHost(host, port, user, pass);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult openConnection() override {
        if (kio__forwardingworkerbase_openconnection_callback) {
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_openconnection_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::openConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeConnection() override {
        if (kio__forwardingworkerbase_closeconnection_callback) {
            kio__forwardingworkerbase_closeconnection_callback(this);
            return;
        }
        KIO__ForwardingWorkerBase::closeConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult open(const QUrl& url, QIODevice::OpenMode mode) override {
        if (kio__forwardingworkerbase_open_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = static_cast<int>(mode);
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_open_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::open(url, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult read(KIO::filesize_t size) override {
        if (kio__forwardingworkerbase_read_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(size);
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_read_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::read(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult write(const QByteArray& data) override {
        if (kio__forwardingworkerbase_write_callback) {
            const QByteArray data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<char*>(malloc(data_str.len));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            libqt_string cbval1 = data_str;
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_write_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(data_str.data);
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::write(data);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult seek(KIO::filesize_t offset) override {
        if (kio__forwardingworkerbase_seek_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(offset);
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_seek_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::seek(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult truncate(KIO::filesize_t size) override {
        if (kio__forwardingworkerbase_truncate_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(size);
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_truncate_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::truncate(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult close() override {
        if (kio__forwardingworkerbase_close_callback) {
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_close_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult chown(const QUrl& url, const QString& owner, const QString& group) override {
        if (kio__forwardingworkerbase_chown_callback) {
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
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_chown_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(owner_str);
            libqt_free(group_str);
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::chown(url, owner, group);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult special(const QByteArray& data) override {
        if (kio__forwardingworkerbase_special_callback) {
            const QByteArray data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<char*>(malloc(data_str.len));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            libqt_string cbval1 = data_str;
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_special_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(data_str.data);
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::special(data);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult fileSystemFreeSpace(const QUrl& url) override {
        if (kio__forwardingworkerbase_filesystemfreespace_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_filesystemfreespace_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIO__ForwardingWorkerBase::fileSystemFreeSpace(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual void worker_status() override {
        if (kio__forwardingworkerbase_workerstatus2_callback) {
            kio__forwardingworkerbase_workerstatus2_callback(this);
            return;
        }
        KIO__ForwardingWorkerBase::worker_status();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reparseConfiguration() override {
        if (kio__forwardingworkerbase_reparseconfiguration_callback) {
            kio__forwardingworkerbase_reparseconfiguration_callback(this);
            return;
        }
        KIO__ForwardingWorkerBase::reparseConfiguration();
    }

    // Friend functions
    friend void KIO__ForwardingWorkerBase_SuperAdjustUDSEntry(const KIO::ForwardingWorkerBase* self, KIO__UDSEntry* entry, int creationMode);
    friend void KIO__ForwardingWorkerBase_SuperTimerEvent(KIO::ForwardingWorkerBase* self, QTimerEvent* event);
    friend void KIO__ForwardingWorkerBase_SuperChildEvent(KIO::ForwardingWorkerBase* self, QChildEvent* event);
    friend void KIO__ForwardingWorkerBase_SuperCustomEvent(KIO::ForwardingWorkerBase* self, QEvent* event);
    friend void KIO__ForwardingWorkerBase_SuperConnectNotify(KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
    friend void KIO__ForwardingWorkerBase_SuperDisconnectNotify(KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
};

#endif
