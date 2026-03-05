#pragma once
#ifndef SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEURLREQUESTINTERCEPTOR_H
#define SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEURLREQUESTINTERCEPTOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebEngineUrlRequestInterceptor so that we can call protected methods
class VirtualQWebEngineUrlRequestInterceptor : public QWebEngineUrlRequestInterceptor {

  public:
    // Virtual class boolean flag
    bool isVirtualQWebEngineUrlRequestInterceptor = true;

    // Virtual class public types (including callbacks)
    using QWebEngineUrlRequestInterceptor_MetaObject_Callback = QMetaObject* (*)();
    using QWebEngineUrlRequestInterceptor_Metacast_Callback = void* (*)(QWebEngineUrlRequestInterceptor*, const char*);
    using QWebEngineUrlRequestInterceptor_Metacall_Callback = int (*)(QWebEngineUrlRequestInterceptor*, int, int, void**);
    using QWebEngineUrlRequestInterceptor_InterceptRequest_Callback = void (*)(QWebEngineUrlRequestInterceptor*, QWebEngineUrlRequestInfo*);
    using QWebEngineUrlRequestInterceptor_Event_Callback = bool (*)(QWebEngineUrlRequestInterceptor*, QEvent*);
    using QWebEngineUrlRequestInterceptor_EventFilter_Callback = bool (*)(QWebEngineUrlRequestInterceptor*, QObject*, QEvent*);
    using QWebEngineUrlRequestInterceptor_TimerEvent_Callback = void (*)(QWebEngineUrlRequestInterceptor*, QTimerEvent*);
    using QWebEngineUrlRequestInterceptor_ChildEvent_Callback = void (*)(QWebEngineUrlRequestInterceptor*, QChildEvent*);
    using QWebEngineUrlRequestInterceptor_CustomEvent_Callback = void (*)(QWebEngineUrlRequestInterceptor*, QEvent*);
    using QWebEngineUrlRequestInterceptor_ConnectNotify_Callback = void (*)(QWebEngineUrlRequestInterceptor*, QMetaMethod*);
    using QWebEngineUrlRequestInterceptor_DisconnectNotify_Callback = void (*)(QWebEngineUrlRequestInterceptor*, QMetaMethod*);
    using QWebEngineUrlRequestInterceptor_Sender_Callback = QObject* (*)();
    using QWebEngineUrlRequestInterceptor_SenderSignalIndex_Callback = int (*)();
    using QWebEngineUrlRequestInterceptor_Receivers_Callback = int (*)(const QWebEngineUrlRequestInterceptor*, const char*);
    using QWebEngineUrlRequestInterceptor_IsSignalConnected_Callback = bool (*)(const QWebEngineUrlRequestInterceptor*, QMetaMethod*);

  protected:
    // Instance callback storage
    QWebEngineUrlRequestInterceptor_MetaObject_Callback qwebengineurlrequestinterceptor_metaobject_callback = nullptr;
    QWebEngineUrlRequestInterceptor_Metacast_Callback qwebengineurlrequestinterceptor_metacast_callback = nullptr;
    QWebEngineUrlRequestInterceptor_Metacall_Callback qwebengineurlrequestinterceptor_metacall_callback = nullptr;
    QWebEngineUrlRequestInterceptor_InterceptRequest_Callback qwebengineurlrequestinterceptor_interceptrequest_callback = nullptr;
    QWebEngineUrlRequestInterceptor_Event_Callback qwebengineurlrequestinterceptor_event_callback = nullptr;
    QWebEngineUrlRequestInterceptor_EventFilter_Callback qwebengineurlrequestinterceptor_eventfilter_callback = nullptr;
    QWebEngineUrlRequestInterceptor_TimerEvent_Callback qwebengineurlrequestinterceptor_timerevent_callback = nullptr;
    QWebEngineUrlRequestInterceptor_ChildEvent_Callback qwebengineurlrequestinterceptor_childevent_callback = nullptr;
    QWebEngineUrlRequestInterceptor_CustomEvent_Callback qwebengineurlrequestinterceptor_customevent_callback = nullptr;
    QWebEngineUrlRequestInterceptor_ConnectNotify_Callback qwebengineurlrequestinterceptor_connectnotify_callback = nullptr;
    QWebEngineUrlRequestInterceptor_DisconnectNotify_Callback qwebengineurlrequestinterceptor_disconnectnotify_callback = nullptr;
    QWebEngineUrlRequestInterceptor_Sender_Callback qwebengineurlrequestinterceptor_sender_callback = nullptr;
    QWebEngineUrlRequestInterceptor_SenderSignalIndex_Callback qwebengineurlrequestinterceptor_sendersignalindex_callback = nullptr;
    QWebEngineUrlRequestInterceptor_Receivers_Callback qwebengineurlrequestinterceptor_receivers_callback = nullptr;
    QWebEngineUrlRequestInterceptor_IsSignalConnected_Callback qwebengineurlrequestinterceptor_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwebengineurlrequestinterceptor_metaobject_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_metacast_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_metacall_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_interceptrequest_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_event_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_eventfilter_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_timerevent_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_childevent_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_customevent_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_connectnotify_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_disconnectnotify_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_sender_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_sendersignalindex_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_receivers_isbase = false;
    mutable bool qwebengineurlrequestinterceptor_issignalconnected_isbase = false;

  public:
    VirtualQWebEngineUrlRequestInterceptor() : QWebEngineUrlRequestInterceptor() {};
    VirtualQWebEngineUrlRequestInterceptor(QObject* p) : QWebEngineUrlRequestInterceptor(p) {};

    // Callback setters
    inline void setQWebEngineUrlRequestInterceptor_MetaObject_Callback(QWebEngineUrlRequestInterceptor_MetaObject_Callback cb) { qwebengineurlrequestinterceptor_metaobject_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_Metacast_Callback(QWebEngineUrlRequestInterceptor_Metacast_Callback cb) { qwebengineurlrequestinterceptor_metacast_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_Metacall_Callback(QWebEngineUrlRequestInterceptor_Metacall_Callback cb) { qwebengineurlrequestinterceptor_metacall_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_InterceptRequest_Callback(QWebEngineUrlRequestInterceptor_InterceptRequest_Callback cb) { qwebengineurlrequestinterceptor_interceptrequest_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_Event_Callback(QWebEngineUrlRequestInterceptor_Event_Callback cb) { qwebengineurlrequestinterceptor_event_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_EventFilter_Callback(QWebEngineUrlRequestInterceptor_EventFilter_Callback cb) { qwebengineurlrequestinterceptor_eventfilter_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_TimerEvent_Callback(QWebEngineUrlRequestInterceptor_TimerEvent_Callback cb) { qwebengineurlrequestinterceptor_timerevent_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_ChildEvent_Callback(QWebEngineUrlRequestInterceptor_ChildEvent_Callback cb) { qwebengineurlrequestinterceptor_childevent_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_CustomEvent_Callback(QWebEngineUrlRequestInterceptor_CustomEvent_Callback cb) { qwebengineurlrequestinterceptor_customevent_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_ConnectNotify_Callback(QWebEngineUrlRequestInterceptor_ConnectNotify_Callback cb) { qwebengineurlrequestinterceptor_connectnotify_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_DisconnectNotify_Callback(QWebEngineUrlRequestInterceptor_DisconnectNotify_Callback cb) { qwebengineurlrequestinterceptor_disconnectnotify_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_Sender_Callback(QWebEngineUrlRequestInterceptor_Sender_Callback cb) { qwebengineurlrequestinterceptor_sender_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_SenderSignalIndex_Callback(QWebEngineUrlRequestInterceptor_SenderSignalIndex_Callback cb) { qwebengineurlrequestinterceptor_sendersignalindex_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_Receivers_Callback(QWebEngineUrlRequestInterceptor_Receivers_Callback cb) { qwebengineurlrequestinterceptor_receivers_callback = cb; }
    inline void setQWebEngineUrlRequestInterceptor_IsSignalConnected_Callback(QWebEngineUrlRequestInterceptor_IsSignalConnected_Callback cb) { qwebengineurlrequestinterceptor_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQWebEngineUrlRequestInterceptor_MetaObject_IsBase(bool value) const { qwebengineurlrequestinterceptor_metaobject_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_Metacast_IsBase(bool value) const { qwebengineurlrequestinterceptor_metacast_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_Metacall_IsBase(bool value) const { qwebengineurlrequestinterceptor_metacall_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_InterceptRequest_IsBase(bool value) const { qwebengineurlrequestinterceptor_interceptrequest_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_Event_IsBase(bool value) const { qwebengineurlrequestinterceptor_event_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_EventFilter_IsBase(bool value) const { qwebengineurlrequestinterceptor_eventfilter_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_TimerEvent_IsBase(bool value) const { qwebengineurlrequestinterceptor_timerevent_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_ChildEvent_IsBase(bool value) const { qwebengineurlrequestinterceptor_childevent_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_CustomEvent_IsBase(bool value) const { qwebengineurlrequestinterceptor_customevent_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_ConnectNotify_IsBase(bool value) const { qwebengineurlrequestinterceptor_connectnotify_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_DisconnectNotify_IsBase(bool value) const { qwebengineurlrequestinterceptor_disconnectnotify_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_Sender_IsBase(bool value) const { qwebengineurlrequestinterceptor_sender_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_SenderSignalIndex_IsBase(bool value) const { qwebengineurlrequestinterceptor_sendersignalindex_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_Receivers_IsBase(bool value) const { qwebengineurlrequestinterceptor_receivers_isbase = value; }
    inline void setQWebEngineUrlRequestInterceptor_IsSignalConnected_IsBase(bool value) const { qwebengineurlrequestinterceptor_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebengineurlrequestinterceptor_metaobject_isbase) {
            qwebengineurlrequestinterceptor_metaobject_isbase = false;
            return QWebEngineUrlRequestInterceptor::metaObject();
        }
        auto metaobject_cb = qwebengineurlrequestinterceptor_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QWebEngineUrlRequestInterceptor::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebengineurlrequestinterceptor_metacast_isbase) {
            qwebengineurlrequestinterceptor_metacast_isbase = false;
            return QWebEngineUrlRequestInterceptor::qt_metacast(param1);
        }
        auto metacast_cb = qwebengineurlrequestinterceptor_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QWebEngineUrlRequestInterceptor::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebengineurlrequestinterceptor_metacall_isbase) {
            qwebengineurlrequestinterceptor_metacall_isbase = false;
            return QWebEngineUrlRequestInterceptor::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qwebengineurlrequestinterceptor_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebEngineUrlRequestInterceptor::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void interceptRequest(QWebEngineUrlRequestInfo& info) override {
        auto interceptrequest_cb = qwebengineurlrequestinterceptor_interceptrequest_callback;
        if (interceptrequest_cb) {
            QWebEngineUrlRequestInfo& info_ret = info;
            // Cast returned reference into pointer
            QWebEngineUrlRequestInfo* cbval1 = &info_ret;

            interceptrequest_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebengineurlrequestinterceptor_event_isbase) {
            qwebengineurlrequestinterceptor_event_isbase = false;
            return QWebEngineUrlRequestInterceptor::event(event);
        }
        auto event_cb = qwebengineurlrequestinterceptor_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QWebEngineUrlRequestInterceptor::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebengineurlrequestinterceptor_eventfilter_isbase) {
            qwebengineurlrequestinterceptor_eventfilter_isbase = false;
            return QWebEngineUrlRequestInterceptor::eventFilter(watched, event);
        }
        auto eventfilter_cb = qwebengineurlrequestinterceptor_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebEngineUrlRequestInterceptor::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebengineurlrequestinterceptor_timerevent_isbase) {
            qwebengineurlrequestinterceptor_timerevent_isbase = false;
            QWebEngineUrlRequestInterceptor::timerEvent(event);
            return;
        }
        auto timerevent_cb = qwebengineurlrequestinterceptor_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QWebEngineUrlRequestInterceptor::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebengineurlrequestinterceptor_childevent_isbase) {
            qwebengineurlrequestinterceptor_childevent_isbase = false;
            QWebEngineUrlRequestInterceptor::childEvent(event);
            return;
        }
        auto childevent_cb = qwebengineurlrequestinterceptor_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QWebEngineUrlRequestInterceptor::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebengineurlrequestinterceptor_customevent_isbase) {
            qwebengineurlrequestinterceptor_customevent_isbase = false;
            QWebEngineUrlRequestInterceptor::customEvent(event);
            return;
        }
        auto customevent_cb = qwebengineurlrequestinterceptor_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QWebEngineUrlRequestInterceptor::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebengineurlrequestinterceptor_connectnotify_isbase) {
            qwebengineurlrequestinterceptor_connectnotify_isbase = false;
            QWebEngineUrlRequestInterceptor::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qwebengineurlrequestinterceptor_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QWebEngineUrlRequestInterceptor::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebengineurlrequestinterceptor_disconnectnotify_isbase) {
            qwebengineurlrequestinterceptor_disconnectnotify_isbase = false;
            QWebEngineUrlRequestInterceptor::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qwebengineurlrequestinterceptor_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QWebEngineUrlRequestInterceptor::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwebengineurlrequestinterceptor_sender_isbase) {
            qwebengineurlrequestinterceptor_sender_isbase = false;
            return QWebEngineUrlRequestInterceptor::sender();
        }
        auto sender_cb = qwebengineurlrequestinterceptor_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QWebEngineUrlRequestInterceptor::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwebengineurlrequestinterceptor_sendersignalindex_isbase) {
            qwebengineurlrequestinterceptor_sendersignalindex_isbase = false;
            return QWebEngineUrlRequestInterceptor::senderSignalIndex();
        }
        auto sendersignalindex_cb = qwebengineurlrequestinterceptor_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QWebEngineUrlRequestInterceptor::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwebengineurlrequestinterceptor_receivers_isbase) {
            qwebengineurlrequestinterceptor_receivers_isbase = false;
            return QWebEngineUrlRequestInterceptor::receivers(signal);
        }
        auto receivers_cb = qwebengineurlrequestinterceptor_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWebEngineUrlRequestInterceptor::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwebengineurlrequestinterceptor_issignalconnected_isbase) {
            qwebengineurlrequestinterceptor_issignalconnected_isbase = false;
            return QWebEngineUrlRequestInterceptor::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qwebengineurlrequestinterceptor_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QWebEngineUrlRequestInterceptor::isSignalConnected(signal);
    }

    // Friend functions
    friend void QWebEngineUrlRequestInterceptor_TimerEvent(QWebEngineUrlRequestInterceptor* self, QTimerEvent* event);
    friend void QWebEngineUrlRequestInterceptor_SuperTimerEvent(QWebEngineUrlRequestInterceptor* self, QTimerEvent* event);
    friend void QWebEngineUrlRequestInterceptor_ChildEvent(QWebEngineUrlRequestInterceptor* self, QChildEvent* event);
    friend void QWebEngineUrlRequestInterceptor_SuperChildEvent(QWebEngineUrlRequestInterceptor* self, QChildEvent* event);
    friend void QWebEngineUrlRequestInterceptor_CustomEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event);
    friend void QWebEngineUrlRequestInterceptor_SuperCustomEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event);
    friend void QWebEngineUrlRequestInterceptor_ConnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
    friend void QWebEngineUrlRequestInterceptor_SuperConnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
    friend void QWebEngineUrlRequestInterceptor_DisconnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
    friend void QWebEngineUrlRequestInterceptor_SuperDisconnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
    friend QObject* QWebEngineUrlRequestInterceptor_Sender(const QWebEngineUrlRequestInterceptor* self);
    friend QObject* QWebEngineUrlRequestInterceptor_SuperSender(const QWebEngineUrlRequestInterceptor* self);
    friend int QWebEngineUrlRequestInterceptor_SenderSignalIndex(const QWebEngineUrlRequestInterceptor* self);
    friend int QWebEngineUrlRequestInterceptor_SuperSenderSignalIndex(const QWebEngineUrlRequestInterceptor* self);
    friend int QWebEngineUrlRequestInterceptor_Receivers(const QWebEngineUrlRequestInterceptor* self, const char* signal);
    friend int QWebEngineUrlRequestInterceptor_SuperReceivers(const QWebEngineUrlRequestInterceptor* self, const char* signal);
    friend bool QWebEngineUrlRequestInterceptor_IsSignalConnected(const QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
    friend bool QWebEngineUrlRequestInterceptor_SuperIsSignalConnected(const QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
};

#endif
