#pragma once
#ifndef NETWORK_LIBQNETWORKACCESSMANAGER_HXX
#define NETWORK_LIBQNETWORKACCESSMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNetworkAccessManager
class VirtualQNetworkAccessManager final : public QNetworkAccessManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using QNetworkAccessManager_MetaObject_Callback = QMetaObject* (*)(const QNetworkAccessManager*);
    using QNetworkAccessManager_Metacast_Callback = void* (*)(QNetworkAccessManager*, const char*);
    using QNetworkAccessManager_Metacall_Callback = int (*)(QNetworkAccessManager*, int, int, void**);
    using QNetworkAccessManager_SupportedSchemes_Callback = const char** (*)(const QNetworkAccessManager*);
    using QNetworkAccessManager_CreateRequest_Callback = QNetworkReply* (*)(QNetworkAccessManager*, int, QNetworkRequest*, QIODevice*);
    using QNetworkAccessManager_Event_Callback = bool (*)(QNetworkAccessManager*, QEvent*);
    using QNetworkAccessManager_EventFilter_Callback = bool (*)(QNetworkAccessManager*, QObject*, QEvent*);
    using QNetworkAccessManager_TimerEvent_Callback = void (*)(QNetworkAccessManager*, QTimerEvent*);
    using QNetworkAccessManager_ChildEvent_Callback = void (*)(QNetworkAccessManager*, QChildEvent*);
    using QNetworkAccessManager_CustomEvent_Callback = void (*)(QNetworkAccessManager*, QEvent*);
    using QNetworkAccessManager_ConnectNotify_Callback = void (*)(QNetworkAccessManager*, QMetaMethod*);
    using QNetworkAccessManager_DisconnectNotify_Callback = void (*)(QNetworkAccessManager*, QMetaMethod*);
    using QNetworkAccessManager::isSignalConnected;
    using QNetworkAccessManager::receivers;
    using QNetworkAccessManager::sender;
    using QNetworkAccessManager::senderSignalIndex;
    using QNetworkAccessManager::supportedSchemesImplementation;

    // Instance callback storage
    QNetworkAccessManager_MetaObject_Callback qnetworkaccessmanager_metaobject_callback = nullptr;
    QNetworkAccessManager_Metacast_Callback qnetworkaccessmanager_metacast_callback = nullptr;
    QNetworkAccessManager_Metacall_Callback qnetworkaccessmanager_metacall_callback = nullptr;
    QNetworkAccessManager_SupportedSchemes_Callback qnetworkaccessmanager_supportedschemes_callback = nullptr;
    QNetworkAccessManager_CreateRequest_Callback qnetworkaccessmanager_createrequest_callback = nullptr;
    QNetworkAccessManager_Event_Callback qnetworkaccessmanager_event_callback = nullptr;
    QNetworkAccessManager_EventFilter_Callback qnetworkaccessmanager_eventfilter_callback = nullptr;
    QNetworkAccessManager_TimerEvent_Callback qnetworkaccessmanager_timerevent_callback = nullptr;
    QNetworkAccessManager_ChildEvent_Callback qnetworkaccessmanager_childevent_callback = nullptr;
    QNetworkAccessManager_CustomEvent_Callback qnetworkaccessmanager_customevent_callback = nullptr;
    QNetworkAccessManager_ConnectNotify_Callback qnetworkaccessmanager_connectnotify_callback = nullptr;
    QNetworkAccessManager_DisconnectNotify_Callback qnetworkaccessmanager_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QNetworkAccessManager {
        using QNetworkAccessManager::childEvent;
        using QNetworkAccessManager::connectNotify;
        using QNetworkAccessManager::createRequest;
        using QNetworkAccessManager::customEvent;
        using QNetworkAccessManager::disconnectNotify;
        using QNetworkAccessManager::timerEvent;
    };

    VirtualQNetworkAccessManager() : QNetworkAccessManager() {};
    VirtualQNetworkAccessManager(QObject* parent) : QNetworkAccessManager(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qnetworkaccessmanager_metaobject_callback) {
            QMetaObject* callback_ret = qnetworkaccessmanager_metaobject_callback(this);
            return callback_ret;
        }
        return QNetworkAccessManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qnetworkaccessmanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qnetworkaccessmanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QNetworkAccessManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qnetworkaccessmanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qnetworkaccessmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QNetworkAccessManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> supportedSchemes() const override {
        if (qnetworkaccessmanager_supportedschemes_callback) {
            const char** callback_ret = qnetworkaccessmanager_supportedschemes_callback(this);
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
        return QNetworkAccessManager::supportedSchemes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QNetworkReply* createRequest(QNetworkAccessManager::Operation op, const QNetworkRequest& request, QIODevice* outgoingData) override {
        if (qnetworkaccessmanager_createrequest_callback) {
            int cbval1 = static_cast<int>(op);
            const QNetworkRequest& request_ret = request;
            // Cast returned reference into pointer
            QNetworkRequest* cbval2 = const_cast<QNetworkRequest*>(&request_ret);
            QIODevice* cbval3 = outgoingData;
            QNetworkReply* callback_ret = qnetworkaccessmanager_createrequest_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QNetworkAccessManager::createRequest(op, request, outgoingData);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qnetworkaccessmanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qnetworkaccessmanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return QNetworkAccessManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qnetworkaccessmanager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qnetworkaccessmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QNetworkAccessManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qnetworkaccessmanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qnetworkaccessmanager_timerevent_callback(this, cbval1);
            return;
        }
        QNetworkAccessManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qnetworkaccessmanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            qnetworkaccessmanager_childevent_callback(this, cbval1);
            return;
        }
        QNetworkAccessManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qnetworkaccessmanager_customevent_callback) {
            QEvent* cbval1 = event;
            qnetworkaccessmanager_customevent_callback(this, cbval1);
            return;
        }
        QNetworkAccessManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qnetworkaccessmanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qnetworkaccessmanager_connectnotify_callback(this, cbval1);
            return;
        }
        QNetworkAccessManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qnetworkaccessmanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qnetworkaccessmanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        QNetworkAccessManager::disconnectNotify(signal);
    }

    // Friend functions
    friend QNetworkReply* QNetworkAccessManager_SuperCreateRequest(QNetworkAccessManager* self, int op, const QNetworkRequest* request, QIODevice* outgoingData);
    friend void QNetworkAccessManager_SuperTimerEvent(QNetworkAccessManager* self, QTimerEvent* event);
    friend void QNetworkAccessManager_SuperChildEvent(QNetworkAccessManager* self, QChildEvent* event);
    friend void QNetworkAccessManager_SuperCustomEvent(QNetworkAccessManager* self, QEvent* event);
    friend void QNetworkAccessManager_SuperConnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
    friend void QNetworkAccessManager_SuperDisconnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
};

#endif
