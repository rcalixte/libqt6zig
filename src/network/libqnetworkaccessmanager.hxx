#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQNETWORKACCESSMANAGER_H
#define SRC_NETWORKC_LIBVIRTUALQNETWORKACCESSMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNetworkAccessManager so that we can call protected methods
class VirtualQNetworkAccessManager final : public QNetworkAccessManager {

  public:
    // Virtual class boolean flag
    bool isVirtualQNetworkAccessManager = true;

    // Virtual class public types (including callbacks)
    using QNetworkAccessManager_MetaObject_Callback = QMetaObject* (*)();
    using QNetworkAccessManager_Metacast_Callback = void* (*)(QNetworkAccessManager*, const char*);
    using QNetworkAccessManager_Metacall_Callback = int (*)(QNetworkAccessManager*, int, int, void**);
    using QNetworkAccessManager_SupportedSchemes_Callback = const char** (*)();
    using QNetworkAccessManager_CreateRequest_Callback = QNetworkReply* (*)(QNetworkAccessManager*, int, QNetworkRequest*, QIODevice*);
    using QNetworkAccessManager_Event_Callback = bool (*)(QNetworkAccessManager*, QEvent*);
    using QNetworkAccessManager_EventFilter_Callback = bool (*)(QNetworkAccessManager*, QObject*, QEvent*);
    using QNetworkAccessManager_TimerEvent_Callback = void (*)(QNetworkAccessManager*, QTimerEvent*);
    using QNetworkAccessManager_ChildEvent_Callback = void (*)(QNetworkAccessManager*, QChildEvent*);
    using QNetworkAccessManager_CustomEvent_Callback = void (*)(QNetworkAccessManager*, QEvent*);
    using QNetworkAccessManager_ConnectNotify_Callback = void (*)(QNetworkAccessManager*, QMetaMethod*);
    using QNetworkAccessManager_DisconnectNotify_Callback = void (*)(QNetworkAccessManager*, QMetaMethod*);
    using QNetworkAccessManager_SupportedSchemesImplementation_Callback = const char** (*)();
    using QNetworkAccessManager_Sender_Callback = QObject* (*)();
    using QNetworkAccessManager_SenderSignalIndex_Callback = int (*)();
    using QNetworkAccessManager_Receivers_Callback = int (*)(const QNetworkAccessManager*, const char*);
    using QNetworkAccessManager_IsSignalConnected_Callback = bool (*)(const QNetworkAccessManager*, QMetaMethod*);

  protected:
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
    QNetworkAccessManager_SupportedSchemesImplementation_Callback qnetworkaccessmanager_supportedschemesimplementation_callback = nullptr;
    QNetworkAccessManager_Sender_Callback qnetworkaccessmanager_sender_callback = nullptr;
    QNetworkAccessManager_SenderSignalIndex_Callback qnetworkaccessmanager_sendersignalindex_callback = nullptr;
    QNetworkAccessManager_Receivers_Callback qnetworkaccessmanager_receivers_callback = nullptr;
    QNetworkAccessManager_IsSignalConnected_Callback qnetworkaccessmanager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qnetworkaccessmanager_metaobject_isbase = false;
    mutable bool qnetworkaccessmanager_metacast_isbase = false;
    mutable bool qnetworkaccessmanager_metacall_isbase = false;
    mutable bool qnetworkaccessmanager_supportedschemes_isbase = false;
    mutable bool qnetworkaccessmanager_createrequest_isbase = false;
    mutable bool qnetworkaccessmanager_event_isbase = false;
    mutable bool qnetworkaccessmanager_eventfilter_isbase = false;
    mutable bool qnetworkaccessmanager_timerevent_isbase = false;
    mutable bool qnetworkaccessmanager_childevent_isbase = false;
    mutable bool qnetworkaccessmanager_customevent_isbase = false;
    mutable bool qnetworkaccessmanager_connectnotify_isbase = false;
    mutable bool qnetworkaccessmanager_disconnectnotify_isbase = false;
    mutable bool qnetworkaccessmanager_supportedschemesimplementation_isbase = false;
    mutable bool qnetworkaccessmanager_sender_isbase = false;
    mutable bool qnetworkaccessmanager_sendersignalindex_isbase = false;
    mutable bool qnetworkaccessmanager_receivers_isbase = false;
    mutable bool qnetworkaccessmanager_issignalconnected_isbase = false;

  public:
    VirtualQNetworkAccessManager() : QNetworkAccessManager() {};
    VirtualQNetworkAccessManager(QObject* parent) : QNetworkAccessManager(parent) {};

    // Callback setters
    inline void setQNetworkAccessManager_MetaObject_Callback(QNetworkAccessManager_MetaObject_Callback cb) { qnetworkaccessmanager_metaobject_callback = cb; }
    inline void setQNetworkAccessManager_Metacast_Callback(QNetworkAccessManager_Metacast_Callback cb) { qnetworkaccessmanager_metacast_callback = cb; }
    inline void setQNetworkAccessManager_Metacall_Callback(QNetworkAccessManager_Metacall_Callback cb) { qnetworkaccessmanager_metacall_callback = cb; }
    inline void setQNetworkAccessManager_SupportedSchemes_Callback(QNetworkAccessManager_SupportedSchemes_Callback cb) { qnetworkaccessmanager_supportedschemes_callback = cb; }
    inline void setQNetworkAccessManager_CreateRequest_Callback(QNetworkAccessManager_CreateRequest_Callback cb) { qnetworkaccessmanager_createrequest_callback = cb; }
    inline void setQNetworkAccessManager_Event_Callback(QNetworkAccessManager_Event_Callback cb) { qnetworkaccessmanager_event_callback = cb; }
    inline void setQNetworkAccessManager_EventFilter_Callback(QNetworkAccessManager_EventFilter_Callback cb) { qnetworkaccessmanager_eventfilter_callback = cb; }
    inline void setQNetworkAccessManager_TimerEvent_Callback(QNetworkAccessManager_TimerEvent_Callback cb) { qnetworkaccessmanager_timerevent_callback = cb; }
    inline void setQNetworkAccessManager_ChildEvent_Callback(QNetworkAccessManager_ChildEvent_Callback cb) { qnetworkaccessmanager_childevent_callback = cb; }
    inline void setQNetworkAccessManager_CustomEvent_Callback(QNetworkAccessManager_CustomEvent_Callback cb) { qnetworkaccessmanager_customevent_callback = cb; }
    inline void setQNetworkAccessManager_ConnectNotify_Callback(QNetworkAccessManager_ConnectNotify_Callback cb) { qnetworkaccessmanager_connectnotify_callback = cb; }
    inline void setQNetworkAccessManager_DisconnectNotify_Callback(QNetworkAccessManager_DisconnectNotify_Callback cb) { qnetworkaccessmanager_disconnectnotify_callback = cb; }
    inline void setQNetworkAccessManager_SupportedSchemesImplementation_Callback(QNetworkAccessManager_SupportedSchemesImplementation_Callback cb) { qnetworkaccessmanager_supportedschemesimplementation_callback = cb; }
    inline void setQNetworkAccessManager_Sender_Callback(QNetworkAccessManager_Sender_Callback cb) { qnetworkaccessmanager_sender_callback = cb; }
    inline void setQNetworkAccessManager_SenderSignalIndex_Callback(QNetworkAccessManager_SenderSignalIndex_Callback cb) { qnetworkaccessmanager_sendersignalindex_callback = cb; }
    inline void setQNetworkAccessManager_Receivers_Callback(QNetworkAccessManager_Receivers_Callback cb) { qnetworkaccessmanager_receivers_callback = cb; }
    inline void setQNetworkAccessManager_IsSignalConnected_Callback(QNetworkAccessManager_IsSignalConnected_Callback cb) { qnetworkaccessmanager_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQNetworkAccessManager_MetaObject_IsBase(bool value) const { qnetworkaccessmanager_metaobject_isbase = value; }
    inline void setQNetworkAccessManager_Metacast_IsBase(bool value) const { qnetworkaccessmanager_metacast_isbase = value; }
    inline void setQNetworkAccessManager_Metacall_IsBase(bool value) const { qnetworkaccessmanager_metacall_isbase = value; }
    inline void setQNetworkAccessManager_SupportedSchemes_IsBase(bool value) const { qnetworkaccessmanager_supportedschemes_isbase = value; }
    inline void setQNetworkAccessManager_CreateRequest_IsBase(bool value) const { qnetworkaccessmanager_createrequest_isbase = value; }
    inline void setQNetworkAccessManager_Event_IsBase(bool value) const { qnetworkaccessmanager_event_isbase = value; }
    inline void setQNetworkAccessManager_EventFilter_IsBase(bool value) const { qnetworkaccessmanager_eventfilter_isbase = value; }
    inline void setQNetworkAccessManager_TimerEvent_IsBase(bool value) const { qnetworkaccessmanager_timerevent_isbase = value; }
    inline void setQNetworkAccessManager_ChildEvent_IsBase(bool value) const { qnetworkaccessmanager_childevent_isbase = value; }
    inline void setQNetworkAccessManager_CustomEvent_IsBase(bool value) const { qnetworkaccessmanager_customevent_isbase = value; }
    inline void setQNetworkAccessManager_ConnectNotify_IsBase(bool value) const { qnetworkaccessmanager_connectnotify_isbase = value; }
    inline void setQNetworkAccessManager_DisconnectNotify_IsBase(bool value) const { qnetworkaccessmanager_disconnectnotify_isbase = value; }
    inline void setQNetworkAccessManager_SupportedSchemesImplementation_IsBase(bool value) const { qnetworkaccessmanager_supportedschemesimplementation_isbase = value; }
    inline void setQNetworkAccessManager_Sender_IsBase(bool value) const { qnetworkaccessmanager_sender_isbase = value; }
    inline void setQNetworkAccessManager_SenderSignalIndex_IsBase(bool value) const { qnetworkaccessmanager_sendersignalindex_isbase = value; }
    inline void setQNetworkAccessManager_Receivers_IsBase(bool value) const { qnetworkaccessmanager_receivers_isbase = value; }
    inline void setQNetworkAccessManager_IsSignalConnected_IsBase(bool value) const { qnetworkaccessmanager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qnetworkaccessmanager_metaobject_isbase) {
            qnetworkaccessmanager_metaobject_isbase = false;
            return QNetworkAccessManager::metaObject();
        }
        auto metaobject_cb = qnetworkaccessmanager_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QNetworkAccessManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qnetworkaccessmanager_metacast_isbase) {
            qnetworkaccessmanager_metacast_isbase = false;
            return QNetworkAccessManager::qt_metacast(param1);
        }
        auto metacast_cb = qnetworkaccessmanager_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QNetworkAccessManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qnetworkaccessmanager_metacall_isbase) {
            qnetworkaccessmanager_metacall_isbase = false;
            return QNetworkAccessManager::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qnetworkaccessmanager_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QNetworkAccessManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> supportedSchemes() const override {
        if (qnetworkaccessmanager_supportedschemes_isbase) {
            qnetworkaccessmanager_supportedschemes_isbase = false;
            return QNetworkAccessManager::supportedSchemes();
        }
        auto supportedschemes_cb = qnetworkaccessmanager_supportedschemes_callback;
        if (supportedschemes_cb) {
            const char** callback_ret = supportedschemes_cb();
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
        if (qnetworkaccessmanager_createrequest_isbase) {
            qnetworkaccessmanager_createrequest_isbase = false;
            return QNetworkAccessManager::createRequest(op, request, outgoingData);
        }
        auto createrequest_cb = qnetworkaccessmanager_createrequest_callback;
        if (createrequest_cb) {
            int cbval1 = static_cast<int>(op);
            const QNetworkRequest& request_ret = request;
            // Cast returned reference into pointer
            QNetworkRequest* cbval2 = const_cast<QNetworkRequest*>(&request_ret);
            QIODevice* cbval3 = outgoingData;

            QNetworkReply* callback_ret = createrequest_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QNetworkAccessManager::createRequest(op, request, outgoingData);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qnetworkaccessmanager_event_isbase) {
            qnetworkaccessmanager_event_isbase = false;
            return QNetworkAccessManager::event(event);
        }
        auto event_cb = qnetworkaccessmanager_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QNetworkAccessManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qnetworkaccessmanager_eventfilter_isbase) {
            qnetworkaccessmanager_eventfilter_isbase = false;
            return QNetworkAccessManager::eventFilter(watched, event);
        }
        auto eventfilter_cb = qnetworkaccessmanager_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QNetworkAccessManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qnetworkaccessmanager_timerevent_isbase) {
            qnetworkaccessmanager_timerevent_isbase = false;
            QNetworkAccessManager::timerEvent(event);
            return;
        }
        auto timerevent_cb = qnetworkaccessmanager_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QNetworkAccessManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qnetworkaccessmanager_childevent_isbase) {
            qnetworkaccessmanager_childevent_isbase = false;
            QNetworkAccessManager::childEvent(event);
            return;
        }
        auto childevent_cb = qnetworkaccessmanager_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QNetworkAccessManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qnetworkaccessmanager_customevent_isbase) {
            qnetworkaccessmanager_customevent_isbase = false;
            QNetworkAccessManager::customEvent(event);
            return;
        }
        auto customevent_cb = qnetworkaccessmanager_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QNetworkAccessManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qnetworkaccessmanager_connectnotify_isbase) {
            qnetworkaccessmanager_connectnotify_isbase = false;
            QNetworkAccessManager::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qnetworkaccessmanager_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QNetworkAccessManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qnetworkaccessmanager_disconnectnotify_isbase) {
            qnetworkaccessmanager_disconnectnotify_isbase = false;
            QNetworkAccessManager::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qnetworkaccessmanager_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QNetworkAccessManager::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QList<QString> supportedSchemesImplementation() const {
        if (qnetworkaccessmanager_supportedschemesimplementation_isbase) {
            qnetworkaccessmanager_supportedschemesimplementation_isbase = false;
            return QNetworkAccessManager::supportedSchemesImplementation();
        }
        auto supportedschemesimplementation_cb = qnetworkaccessmanager_supportedschemesimplementation_callback;
        if (supportedschemesimplementation_cb) {
            const char** callback_ret = supportedschemesimplementation_cb();
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
        return QNetworkAccessManager::supportedSchemesImplementation();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qnetworkaccessmanager_sender_isbase) {
            qnetworkaccessmanager_sender_isbase = false;
            return QNetworkAccessManager::sender();
        }
        auto sender_cb = qnetworkaccessmanager_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QNetworkAccessManager::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qnetworkaccessmanager_sendersignalindex_isbase) {
            qnetworkaccessmanager_sendersignalindex_isbase = false;
            return QNetworkAccessManager::senderSignalIndex();
        }
        auto sendersignalindex_cb = qnetworkaccessmanager_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QNetworkAccessManager::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qnetworkaccessmanager_receivers_isbase) {
            qnetworkaccessmanager_receivers_isbase = false;
            return QNetworkAccessManager::receivers(signal);
        }
        auto receivers_cb = qnetworkaccessmanager_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QNetworkAccessManager::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qnetworkaccessmanager_issignalconnected_isbase) {
            qnetworkaccessmanager_issignalconnected_isbase = false;
            return QNetworkAccessManager::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qnetworkaccessmanager_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QNetworkAccessManager::isSignalConnected(signal);
    }

    // Friend functions
    friend QNetworkReply* QNetworkAccessManager_CreateRequest(QNetworkAccessManager* self, int op, const QNetworkRequest* request, QIODevice* outgoingData);
    friend QNetworkReply* QNetworkAccessManager_SuperCreateRequest(QNetworkAccessManager* self, int op, const QNetworkRequest* request, QIODevice* outgoingData);
    friend void QNetworkAccessManager_TimerEvent(QNetworkAccessManager* self, QTimerEvent* event);
    friend void QNetworkAccessManager_SuperTimerEvent(QNetworkAccessManager* self, QTimerEvent* event);
    friend void QNetworkAccessManager_ChildEvent(QNetworkAccessManager* self, QChildEvent* event);
    friend void QNetworkAccessManager_SuperChildEvent(QNetworkAccessManager* self, QChildEvent* event);
    friend void QNetworkAccessManager_CustomEvent(QNetworkAccessManager* self, QEvent* event);
    friend void QNetworkAccessManager_SuperCustomEvent(QNetworkAccessManager* self, QEvent* event);
    friend void QNetworkAccessManager_ConnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
    friend void QNetworkAccessManager_SuperConnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
    friend void QNetworkAccessManager_DisconnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
    friend void QNetworkAccessManager_SuperDisconnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
    friend libqt_list /* of libqt_string */ QNetworkAccessManager_SupportedSchemesImplementation(const QNetworkAccessManager* self);
    friend libqt_list /* of libqt_string */ QNetworkAccessManager_SuperSupportedSchemesImplementation(const QNetworkAccessManager* self);
    friend QObject* QNetworkAccessManager_Sender(const QNetworkAccessManager* self);
    friend QObject* QNetworkAccessManager_SuperSender(const QNetworkAccessManager* self);
    friend int QNetworkAccessManager_SenderSignalIndex(const QNetworkAccessManager* self);
    friend int QNetworkAccessManager_SuperSenderSignalIndex(const QNetworkAccessManager* self);
    friend int QNetworkAccessManager_Receivers(const QNetworkAccessManager* self, const char* signal);
    friend int QNetworkAccessManager_SuperReceivers(const QNetworkAccessManager* self, const char* signal);
    friend bool QNetworkAccessManager_IsSignalConnected(const QNetworkAccessManager* self, const QMetaMethod* signal);
    friend bool QNetworkAccessManager_SuperIsSignalConnected(const QNetworkAccessManager* self, const QMetaMethod* signal);
};

#endif
