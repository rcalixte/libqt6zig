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
    using QNetworkAccessManager_Metacall_Callback = int (*)(QNetworkAccessManager*, int, int, void**);
    using QNetworkAccessManager_SupportedSchemes_Callback = libqt_list /* of libqt_string */ (*)();
    using QNetworkAccessManager_CreateRequest_Callback = QNetworkReply* (*)(QNetworkAccessManager*, int, QNetworkRequest*, QIODevice*);
    using QNetworkAccessManager_Event_Callback = bool (*)(QNetworkAccessManager*, QEvent*);
    using QNetworkAccessManager_EventFilter_Callback = bool (*)(QNetworkAccessManager*, QObject*, QEvent*);
    using QNetworkAccessManager_TimerEvent_Callback = void (*)(QNetworkAccessManager*, QTimerEvent*);
    using QNetworkAccessManager_ChildEvent_Callback = void (*)(QNetworkAccessManager*, QChildEvent*);
    using QNetworkAccessManager_CustomEvent_Callback = void (*)(QNetworkAccessManager*, QEvent*);
    using QNetworkAccessManager_ConnectNotify_Callback = void (*)(QNetworkAccessManager*, QMetaMethod*);
    using QNetworkAccessManager_DisconnectNotify_Callback = void (*)(QNetworkAccessManager*, QMetaMethod*);
    using QNetworkAccessManager_SupportedSchemesImplementation_Callback = libqt_list /* of libqt_string */ (*)();
    using QNetworkAccessManager_Sender_Callback = QObject* (*)();
    using QNetworkAccessManager_SenderSignalIndex_Callback = int (*)();
    using QNetworkAccessManager_Receivers_Callback = int (*)(const QNetworkAccessManager*, const char*);
    using QNetworkAccessManager_IsSignalConnected_Callback = bool (*)(const QNetworkAccessManager*, QMetaMethod*);

  protected:
    // Instance callback storage
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

    ~VirtualQNetworkAccessManager() {
        qnetworkaccessmanager_metacall_callback = nullptr;
        qnetworkaccessmanager_supportedschemes_callback = nullptr;
        qnetworkaccessmanager_createrequest_callback = nullptr;
        qnetworkaccessmanager_event_callback = nullptr;
        qnetworkaccessmanager_eventfilter_callback = nullptr;
        qnetworkaccessmanager_timerevent_callback = nullptr;
        qnetworkaccessmanager_childevent_callback = nullptr;
        qnetworkaccessmanager_customevent_callback = nullptr;
        qnetworkaccessmanager_connectnotify_callback = nullptr;
        qnetworkaccessmanager_disconnectnotify_callback = nullptr;
        qnetworkaccessmanager_supportedschemesimplementation_callback = nullptr;
        qnetworkaccessmanager_sender_callback = nullptr;
        qnetworkaccessmanager_sendersignalindex_callback = nullptr;
        qnetworkaccessmanager_receivers_callback = nullptr;
        qnetworkaccessmanager_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qnetworkaccessmanager_metacall_isbase) {
            qnetworkaccessmanager_metacall_isbase = false;
            return QNetworkAccessManager::qt_metacall(param1, param2, param3);
        } else if (qnetworkaccessmanager_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qnetworkaccessmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QNetworkAccessManager::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> supportedSchemes() const override {
        if (qnetworkaccessmanager_supportedschemes_isbase) {
            qnetworkaccessmanager_supportedschemes_isbase = false;
            return QNetworkAccessManager::supportedSchemes();
        } else if (qnetworkaccessmanager_supportedschemes_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qnetworkaccessmanager_supportedschemes_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QNetworkAccessManager::supportedSchemes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QNetworkReply* createRequest(QNetworkAccessManager::Operation op, const QNetworkRequest& request, QIODevice* outgoingData) override {
        if (qnetworkaccessmanager_createrequest_isbase) {
            qnetworkaccessmanager_createrequest_isbase = false;
            return QNetworkAccessManager::createRequest(op, request, outgoingData);
        } else if (qnetworkaccessmanager_createrequest_callback != nullptr) {
            int cbval1 = static_cast<int>(op);
            const QNetworkRequest& request_ret = request;
            // Cast returned reference into pointer
            QNetworkRequest* cbval2 = const_cast<QNetworkRequest*>(&request_ret);
            QIODevice* cbval3 = outgoingData;

            QNetworkReply* callback_ret = qnetworkaccessmanager_createrequest_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QNetworkAccessManager::createRequest(op, request, outgoingData);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qnetworkaccessmanager_event_isbase) {
            qnetworkaccessmanager_event_isbase = false;
            return QNetworkAccessManager::event(event);
        } else if (qnetworkaccessmanager_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qnetworkaccessmanager_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QNetworkAccessManager::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qnetworkaccessmanager_eventfilter_isbase) {
            qnetworkaccessmanager_eventfilter_isbase = false;
            return QNetworkAccessManager::eventFilter(watched, event);
        } else if (qnetworkaccessmanager_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qnetworkaccessmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QNetworkAccessManager::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qnetworkaccessmanager_timerevent_isbase) {
            qnetworkaccessmanager_timerevent_isbase = false;
            QNetworkAccessManager::timerEvent(event);
        } else if (qnetworkaccessmanager_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qnetworkaccessmanager_timerevent_callback(this, cbval1);
        } else {
            QNetworkAccessManager::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qnetworkaccessmanager_childevent_isbase) {
            qnetworkaccessmanager_childevent_isbase = false;
            QNetworkAccessManager::childEvent(event);
        } else if (qnetworkaccessmanager_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qnetworkaccessmanager_childevent_callback(this, cbval1);
        } else {
            QNetworkAccessManager::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qnetworkaccessmanager_customevent_isbase) {
            qnetworkaccessmanager_customevent_isbase = false;
            QNetworkAccessManager::customEvent(event);
        } else if (qnetworkaccessmanager_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qnetworkaccessmanager_customevent_callback(this, cbval1);
        } else {
            QNetworkAccessManager::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qnetworkaccessmanager_connectnotify_isbase) {
            qnetworkaccessmanager_connectnotify_isbase = false;
            QNetworkAccessManager::connectNotify(signal);
        } else if (qnetworkaccessmanager_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qnetworkaccessmanager_connectnotify_callback(this, cbval1);
        } else {
            QNetworkAccessManager::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qnetworkaccessmanager_disconnectnotify_isbase) {
            qnetworkaccessmanager_disconnectnotify_isbase = false;
            QNetworkAccessManager::disconnectNotify(signal);
        } else if (qnetworkaccessmanager_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qnetworkaccessmanager_disconnectnotify_callback(this, cbval1);
        } else {
            QNetworkAccessManager::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QString> supportedSchemesImplementation() const {
        if (qnetworkaccessmanager_supportedschemesimplementation_isbase) {
            qnetworkaccessmanager_supportedschemesimplementation_isbase = false;
            return QNetworkAccessManager::supportedSchemesImplementation();
        } else if (qnetworkaccessmanager_supportedschemesimplementation_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qnetworkaccessmanager_supportedschemesimplementation_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QNetworkAccessManager::supportedSchemesImplementation();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qnetworkaccessmanager_sender_isbase) {
            qnetworkaccessmanager_sender_isbase = false;
            return QNetworkAccessManager::sender();
        } else if (qnetworkaccessmanager_sender_callback != nullptr) {
            QObject* callback_ret = qnetworkaccessmanager_sender_callback();
            return callback_ret;
        } else {
            return QNetworkAccessManager::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qnetworkaccessmanager_sendersignalindex_isbase) {
            qnetworkaccessmanager_sendersignalindex_isbase = false;
            return QNetworkAccessManager::senderSignalIndex();
        } else if (qnetworkaccessmanager_sendersignalindex_callback != nullptr) {
            int callback_ret = qnetworkaccessmanager_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QNetworkAccessManager::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qnetworkaccessmanager_receivers_isbase) {
            qnetworkaccessmanager_receivers_isbase = false;
            return QNetworkAccessManager::receivers(signal);
        } else if (qnetworkaccessmanager_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qnetworkaccessmanager_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QNetworkAccessManager::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qnetworkaccessmanager_issignalconnected_isbase) {
            qnetworkaccessmanager_issignalconnected_isbase = false;
            return QNetworkAccessManager::isSignalConnected(signal);
        } else if (qnetworkaccessmanager_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qnetworkaccessmanager_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QNetworkAccessManager::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend QNetworkReply* QNetworkAccessManager_CreateRequest(QNetworkAccessManager* self, int op, const QNetworkRequest* request, QIODevice* outgoingData);
    friend QNetworkReply* QNetworkAccessManager_QBaseCreateRequest(QNetworkAccessManager* self, int op, const QNetworkRequest* request, QIODevice* outgoingData);
    friend void QNetworkAccessManager_TimerEvent(QNetworkAccessManager* self, QTimerEvent* event);
    friend void QNetworkAccessManager_QBaseTimerEvent(QNetworkAccessManager* self, QTimerEvent* event);
    friend void QNetworkAccessManager_ChildEvent(QNetworkAccessManager* self, QChildEvent* event);
    friend void QNetworkAccessManager_QBaseChildEvent(QNetworkAccessManager* self, QChildEvent* event);
    friend void QNetworkAccessManager_CustomEvent(QNetworkAccessManager* self, QEvent* event);
    friend void QNetworkAccessManager_QBaseCustomEvent(QNetworkAccessManager* self, QEvent* event);
    friend void QNetworkAccessManager_ConnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
    friend void QNetworkAccessManager_QBaseConnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
    friend void QNetworkAccessManager_DisconnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
    friend void QNetworkAccessManager_QBaseDisconnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
    friend libqt_list /* of libqt_string */ QNetworkAccessManager_SupportedSchemesImplementation(const QNetworkAccessManager* self);
    friend libqt_list /* of libqt_string */ QNetworkAccessManager_QBaseSupportedSchemesImplementation(const QNetworkAccessManager* self);
    friend QObject* QNetworkAccessManager_Sender(const QNetworkAccessManager* self);
    friend QObject* QNetworkAccessManager_QBaseSender(const QNetworkAccessManager* self);
    friend int QNetworkAccessManager_SenderSignalIndex(const QNetworkAccessManager* self);
    friend int QNetworkAccessManager_QBaseSenderSignalIndex(const QNetworkAccessManager* self);
    friend int QNetworkAccessManager_Receivers(const QNetworkAccessManager* self, const char* signal);
    friend int QNetworkAccessManager_QBaseReceivers(const QNetworkAccessManager* self, const char* signal);
    friend bool QNetworkAccessManager_IsSignalConnected(const QNetworkAccessManager* self, const QMetaMethod* signal);
    friend bool QNetworkAccessManager_QBaseIsSignalConnected(const QNetworkAccessManager* self, const QMetaMethod* signal);
};

#endif
