#pragma once
#ifndef NETWORK_LIBQNETWORKDISKCACHE_HXX
#define NETWORK_LIBQNETWORKDISKCACHE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNetworkDiskCache
class VirtualQNetworkDiskCache final : public QNetworkDiskCache {
  public:
    // Virtual class public types (including callbacks and access types)
    using QNetworkDiskCache_MetaObject_Callback = QMetaObject* (*)(const QNetworkDiskCache*);
    using QNetworkDiskCache_Metacast_Callback = void* (*)(QNetworkDiskCache*, const char*);
    using QNetworkDiskCache_Metacall_Callback = int (*)(QNetworkDiskCache*, int, int, void**);
    using QNetworkDiskCache_CacheSize_Callback = long long (*)(const QNetworkDiskCache*);
    using QNetworkDiskCache_MetaData_Callback = QNetworkCacheMetaData* (*)(QNetworkDiskCache*, QUrl*);
    using QNetworkDiskCache_UpdateMetaData_Callback = void (*)(QNetworkDiskCache*, QNetworkCacheMetaData*);
    using QNetworkDiskCache_Data_Callback = QIODevice* (*)(QNetworkDiskCache*, QUrl*);
    using QNetworkDiskCache_Remove_Callback = bool (*)(QNetworkDiskCache*, QUrl*);
    using QNetworkDiskCache_Prepare_Callback = QIODevice* (*)(QNetworkDiskCache*, QNetworkCacheMetaData*);
    using QNetworkDiskCache_Insert_Callback = void (*)(QNetworkDiskCache*, QIODevice*);
    using QNetworkDiskCache_Clear_Callback = void (*)(QNetworkDiskCache*);
    using QNetworkDiskCache_Expire_Callback = long long (*)(QNetworkDiskCache*);
    using QNetworkDiskCache_Event_Callback = bool (*)(QNetworkDiskCache*, QEvent*);
    using QNetworkDiskCache_EventFilter_Callback = bool (*)(QNetworkDiskCache*, QObject*, QEvent*);
    using QNetworkDiskCache_TimerEvent_Callback = void (*)(QNetworkDiskCache*, QTimerEvent*);
    using QNetworkDiskCache_ChildEvent_Callback = void (*)(QNetworkDiskCache*, QChildEvent*);
    using QNetworkDiskCache_CustomEvent_Callback = void (*)(QNetworkDiskCache*, QEvent*);
    using QNetworkDiskCache_ConnectNotify_Callback = void (*)(QNetworkDiskCache*, QMetaMethod*);
    using QNetworkDiskCache_DisconnectNotify_Callback = void (*)(QNetworkDiskCache*, QMetaMethod*);
    using QNetworkDiskCache::isSignalConnected;
    using QNetworkDiskCache::receivers;
    using QNetworkDiskCache::sender;
    using QNetworkDiskCache::senderSignalIndex;

    // Instance callback storage
    QNetworkDiskCache_MetaObject_Callback qnetworkdiskcache_metaobject_callback = nullptr;
    QNetworkDiskCache_Metacast_Callback qnetworkdiskcache_metacast_callback = nullptr;
    QNetworkDiskCache_Metacall_Callback qnetworkdiskcache_metacall_callback = nullptr;
    QNetworkDiskCache_CacheSize_Callback qnetworkdiskcache_cachesize_callback = nullptr;
    QNetworkDiskCache_MetaData_Callback qnetworkdiskcache_metadata_callback = nullptr;
    QNetworkDiskCache_UpdateMetaData_Callback qnetworkdiskcache_updatemetadata_callback = nullptr;
    QNetworkDiskCache_Data_Callback qnetworkdiskcache_data_callback = nullptr;
    QNetworkDiskCache_Remove_Callback qnetworkdiskcache_remove_callback = nullptr;
    QNetworkDiskCache_Prepare_Callback qnetworkdiskcache_prepare_callback = nullptr;
    QNetworkDiskCache_Insert_Callback qnetworkdiskcache_insert_callback = nullptr;
    QNetworkDiskCache_Clear_Callback qnetworkdiskcache_clear_callback = nullptr;
    QNetworkDiskCache_Expire_Callback qnetworkdiskcache_expire_callback = nullptr;
    QNetworkDiskCache_Event_Callback qnetworkdiskcache_event_callback = nullptr;
    QNetworkDiskCache_EventFilter_Callback qnetworkdiskcache_eventfilter_callback = nullptr;
    QNetworkDiskCache_TimerEvent_Callback qnetworkdiskcache_timerevent_callback = nullptr;
    QNetworkDiskCache_ChildEvent_Callback qnetworkdiskcache_childevent_callback = nullptr;
    QNetworkDiskCache_CustomEvent_Callback qnetworkdiskcache_customevent_callback = nullptr;
    QNetworkDiskCache_ConnectNotify_Callback qnetworkdiskcache_connectnotify_callback = nullptr;
    QNetworkDiskCache_DisconnectNotify_Callback qnetworkdiskcache_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QNetworkDiskCache {
        using QNetworkDiskCache::childEvent;
        using QNetworkDiskCache::connectNotify;
        using QNetworkDiskCache::customEvent;
        using QNetworkDiskCache::disconnectNotify;
        using QNetworkDiskCache::expire;
        using QNetworkDiskCache::timerEvent;
    };

    VirtualQNetworkDiskCache() : QNetworkDiskCache() {};
    VirtualQNetworkDiskCache(QObject* parent) : QNetworkDiskCache(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qnetworkdiskcache_metaobject_callback) {
            QMetaObject* callback_ret = qnetworkdiskcache_metaobject_callback(this);
            return callback_ret;
        }
        return QNetworkDiskCache::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qnetworkdiskcache_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qnetworkdiskcache_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QNetworkDiskCache::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qnetworkdiskcache_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qnetworkdiskcache_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QNetworkDiskCache::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 cacheSize() const override {
        if (qnetworkdiskcache_cachesize_callback) {
            long long callback_ret = qnetworkdiskcache_cachesize_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QNetworkDiskCache::cacheSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QNetworkCacheMetaData metaData(const QUrl& url) override {
        if (qnetworkdiskcache_metadata_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            QNetworkCacheMetaData* callback_ret = qnetworkdiskcache_metadata_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QNetworkDiskCache::metaData(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateMetaData(const QNetworkCacheMetaData& metaData) override {
        if (qnetworkdiskcache_updatemetadata_callback) {
            const QNetworkCacheMetaData& metaData_ret = metaData;
            // Cast returned reference into pointer
            QNetworkCacheMetaData* cbval1 = const_cast<QNetworkCacheMetaData*>(&metaData_ret);
            qnetworkdiskcache_updatemetadata_callback(this, cbval1);
            return;
        }
        QNetworkDiskCache::updateMetaData(metaData);
    }

    // Virtual method for C ABI access and custom callback
    virtual QIODevice* data(const QUrl& url) override {
        if (qnetworkdiskcache_data_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            QIODevice* callback_ret = qnetworkdiskcache_data_callback(this, cbval1);
            return callback_ret;
        }
        return QNetworkDiskCache::data(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool remove(const QUrl& url) override {
        if (qnetworkdiskcache_remove_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            bool callback_ret = qnetworkdiskcache_remove_callback(this, cbval1);
            return callback_ret;
        }
        return QNetworkDiskCache::remove(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual QIODevice* prepare(const QNetworkCacheMetaData& metaData) override {
        if (qnetworkdiskcache_prepare_callback) {
            const QNetworkCacheMetaData& metaData_ret = metaData;
            // Cast returned reference into pointer
            QNetworkCacheMetaData* cbval1 = const_cast<QNetworkCacheMetaData*>(&metaData_ret);
            QIODevice* callback_ret = qnetworkdiskcache_prepare_callback(this, cbval1);
            return callback_ret;
        }
        return QNetworkDiskCache::prepare(metaData);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insert(QIODevice* device) override {
        if (qnetworkdiskcache_insert_callback) {
            QIODevice* cbval1 = device;
            qnetworkdiskcache_insert_callback(this, cbval1);
            return;
        }
        QNetworkDiskCache::insert(device);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qnetworkdiskcache_clear_callback) {
            qnetworkdiskcache_clear_callback(this);
            return;
        }
        QNetworkDiskCache::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 expire() override {
        if (qnetworkdiskcache_expire_callback) {
            long long callback_ret = qnetworkdiskcache_expire_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QNetworkDiskCache::expire();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qnetworkdiskcache_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qnetworkdiskcache_event_callback(this, cbval1);
            return callback_ret;
        }
        return QNetworkDiskCache::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qnetworkdiskcache_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qnetworkdiskcache_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QNetworkDiskCache::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qnetworkdiskcache_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qnetworkdiskcache_timerevent_callback(this, cbval1);
            return;
        }
        QNetworkDiskCache::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qnetworkdiskcache_childevent_callback) {
            QChildEvent* cbval1 = event;
            qnetworkdiskcache_childevent_callback(this, cbval1);
            return;
        }
        QNetworkDiskCache::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qnetworkdiskcache_customevent_callback) {
            QEvent* cbval1 = event;
            qnetworkdiskcache_customevent_callback(this, cbval1);
            return;
        }
        QNetworkDiskCache::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qnetworkdiskcache_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qnetworkdiskcache_connectnotify_callback(this, cbval1);
            return;
        }
        QNetworkDiskCache::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qnetworkdiskcache_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qnetworkdiskcache_disconnectnotify_callback(this, cbval1);
            return;
        }
        QNetworkDiskCache::disconnectNotify(signal);
    }

    // Friend functions
    friend long long QNetworkDiskCache_SuperExpire(QNetworkDiskCache* self);
    friend void QNetworkDiskCache_SuperTimerEvent(QNetworkDiskCache* self, QTimerEvent* event);
    friend void QNetworkDiskCache_SuperChildEvent(QNetworkDiskCache* self, QChildEvent* event);
    friend void QNetworkDiskCache_SuperCustomEvent(QNetworkDiskCache* self, QEvent* event);
    friend void QNetworkDiskCache_SuperConnectNotify(QNetworkDiskCache* self, const QMetaMethod* signal);
    friend void QNetworkDiskCache_SuperDisconnectNotify(QNetworkDiskCache* self, const QMetaMethod* signal);
};

#endif
