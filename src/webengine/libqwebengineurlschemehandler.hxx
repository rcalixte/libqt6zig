#pragma once
#ifndef SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEURLSCHEMEHANDLER_H
#define SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEURLSCHEMEHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebEngineUrlSchemeHandler so that we can call protected methods
class VirtualQWebEngineUrlSchemeHandler : public QWebEngineUrlSchemeHandler {

  public:
    // Virtual class boolean flag
    bool isVirtualQWebEngineUrlSchemeHandler = true;

    // Virtual class public types (including callbacks)
    using QWebEngineUrlSchemeHandler_MetaObject_Callback = QMetaObject* (*)();
    using QWebEngineUrlSchemeHandler_Metacast_Callback = void* (*)(QWebEngineUrlSchemeHandler*, const char*);
    using QWebEngineUrlSchemeHandler_Metacall_Callback = int (*)(QWebEngineUrlSchemeHandler*, int, int, void**);
    using QWebEngineUrlSchemeHandler_RequestStarted_Callback = void (*)(QWebEngineUrlSchemeHandler*, QWebEngineUrlRequestJob*);
    using QWebEngineUrlSchemeHandler_Event_Callback = bool (*)(QWebEngineUrlSchemeHandler*, QEvent*);
    using QWebEngineUrlSchemeHandler_EventFilter_Callback = bool (*)(QWebEngineUrlSchemeHandler*, QObject*, QEvent*);
    using QWebEngineUrlSchemeHandler_TimerEvent_Callback = void (*)(QWebEngineUrlSchemeHandler*, QTimerEvent*);
    using QWebEngineUrlSchemeHandler_ChildEvent_Callback = void (*)(QWebEngineUrlSchemeHandler*, QChildEvent*);
    using QWebEngineUrlSchemeHandler_CustomEvent_Callback = void (*)(QWebEngineUrlSchemeHandler*, QEvent*);
    using QWebEngineUrlSchemeHandler_ConnectNotify_Callback = void (*)(QWebEngineUrlSchemeHandler*, QMetaMethod*);
    using QWebEngineUrlSchemeHandler_DisconnectNotify_Callback = void (*)(QWebEngineUrlSchemeHandler*, QMetaMethod*);
    using QWebEngineUrlSchemeHandler_Sender_Callback = QObject* (*)();
    using QWebEngineUrlSchemeHandler_SenderSignalIndex_Callback = int (*)();
    using QWebEngineUrlSchemeHandler_Receivers_Callback = int (*)(const QWebEngineUrlSchemeHandler*, const char*);
    using QWebEngineUrlSchemeHandler_IsSignalConnected_Callback = bool (*)(const QWebEngineUrlSchemeHandler*, QMetaMethod*);

  protected:
    // Instance callback storage
    QWebEngineUrlSchemeHandler_MetaObject_Callback qwebengineurlschemehandler_metaobject_callback = nullptr;
    QWebEngineUrlSchemeHandler_Metacast_Callback qwebengineurlschemehandler_metacast_callback = nullptr;
    QWebEngineUrlSchemeHandler_Metacall_Callback qwebengineurlschemehandler_metacall_callback = nullptr;
    QWebEngineUrlSchemeHandler_RequestStarted_Callback qwebengineurlschemehandler_requeststarted_callback = nullptr;
    QWebEngineUrlSchemeHandler_Event_Callback qwebengineurlschemehandler_event_callback = nullptr;
    QWebEngineUrlSchemeHandler_EventFilter_Callback qwebengineurlschemehandler_eventfilter_callback = nullptr;
    QWebEngineUrlSchemeHandler_TimerEvent_Callback qwebengineurlschemehandler_timerevent_callback = nullptr;
    QWebEngineUrlSchemeHandler_ChildEvent_Callback qwebengineurlschemehandler_childevent_callback = nullptr;
    QWebEngineUrlSchemeHandler_CustomEvent_Callback qwebengineurlschemehandler_customevent_callback = nullptr;
    QWebEngineUrlSchemeHandler_ConnectNotify_Callback qwebengineurlschemehandler_connectnotify_callback = nullptr;
    QWebEngineUrlSchemeHandler_DisconnectNotify_Callback qwebengineurlschemehandler_disconnectnotify_callback = nullptr;
    QWebEngineUrlSchemeHandler_Sender_Callback qwebengineurlschemehandler_sender_callback = nullptr;
    QWebEngineUrlSchemeHandler_SenderSignalIndex_Callback qwebengineurlschemehandler_sendersignalindex_callback = nullptr;
    QWebEngineUrlSchemeHandler_Receivers_Callback qwebengineurlschemehandler_receivers_callback = nullptr;
    QWebEngineUrlSchemeHandler_IsSignalConnected_Callback qwebengineurlschemehandler_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwebengineurlschemehandler_metaobject_isbase = false;
    mutable bool qwebengineurlschemehandler_metacast_isbase = false;
    mutable bool qwebengineurlschemehandler_metacall_isbase = false;
    mutable bool qwebengineurlschemehandler_requeststarted_isbase = false;
    mutable bool qwebengineurlschemehandler_event_isbase = false;
    mutable bool qwebengineurlschemehandler_eventfilter_isbase = false;
    mutable bool qwebengineurlschemehandler_timerevent_isbase = false;
    mutable bool qwebengineurlschemehandler_childevent_isbase = false;
    mutable bool qwebengineurlschemehandler_customevent_isbase = false;
    mutable bool qwebengineurlschemehandler_connectnotify_isbase = false;
    mutable bool qwebengineurlschemehandler_disconnectnotify_isbase = false;
    mutable bool qwebengineurlschemehandler_sender_isbase = false;
    mutable bool qwebengineurlschemehandler_sendersignalindex_isbase = false;
    mutable bool qwebengineurlschemehandler_receivers_isbase = false;
    mutable bool qwebengineurlschemehandler_issignalconnected_isbase = false;

  public:
    VirtualQWebEngineUrlSchemeHandler() : QWebEngineUrlSchemeHandler() {};
    VirtualQWebEngineUrlSchemeHandler(QObject* parent) : QWebEngineUrlSchemeHandler(parent) {};

    // Callback setters
    inline void setQWebEngineUrlSchemeHandler_MetaObject_Callback(QWebEngineUrlSchemeHandler_MetaObject_Callback cb) { qwebengineurlschemehandler_metaobject_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_Metacast_Callback(QWebEngineUrlSchemeHandler_Metacast_Callback cb) { qwebengineurlschemehandler_metacast_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_Metacall_Callback(QWebEngineUrlSchemeHandler_Metacall_Callback cb) { qwebengineurlschemehandler_metacall_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_RequestStarted_Callback(QWebEngineUrlSchemeHandler_RequestStarted_Callback cb) { qwebengineurlschemehandler_requeststarted_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_Event_Callback(QWebEngineUrlSchemeHandler_Event_Callback cb) { qwebengineurlschemehandler_event_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_EventFilter_Callback(QWebEngineUrlSchemeHandler_EventFilter_Callback cb) { qwebengineurlschemehandler_eventfilter_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_TimerEvent_Callback(QWebEngineUrlSchemeHandler_TimerEvent_Callback cb) { qwebengineurlschemehandler_timerevent_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_ChildEvent_Callback(QWebEngineUrlSchemeHandler_ChildEvent_Callback cb) { qwebengineurlschemehandler_childevent_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_CustomEvent_Callback(QWebEngineUrlSchemeHandler_CustomEvent_Callback cb) { qwebengineurlschemehandler_customevent_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_ConnectNotify_Callback(QWebEngineUrlSchemeHandler_ConnectNotify_Callback cb) { qwebengineurlschemehandler_connectnotify_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_DisconnectNotify_Callback(QWebEngineUrlSchemeHandler_DisconnectNotify_Callback cb) { qwebengineurlschemehandler_disconnectnotify_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_Sender_Callback(QWebEngineUrlSchemeHandler_Sender_Callback cb) { qwebengineurlschemehandler_sender_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_SenderSignalIndex_Callback(QWebEngineUrlSchemeHandler_SenderSignalIndex_Callback cb) { qwebengineurlschemehandler_sendersignalindex_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_Receivers_Callback(QWebEngineUrlSchemeHandler_Receivers_Callback cb) { qwebengineurlschemehandler_receivers_callback = cb; }
    inline void setQWebEngineUrlSchemeHandler_IsSignalConnected_Callback(QWebEngineUrlSchemeHandler_IsSignalConnected_Callback cb) { qwebengineurlschemehandler_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQWebEngineUrlSchemeHandler_MetaObject_IsBase(bool value) const { qwebengineurlschemehandler_metaobject_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_Metacast_IsBase(bool value) const { qwebengineurlschemehandler_metacast_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_Metacall_IsBase(bool value) const { qwebengineurlschemehandler_metacall_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_RequestStarted_IsBase(bool value) const { qwebengineurlschemehandler_requeststarted_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_Event_IsBase(bool value) const { qwebengineurlschemehandler_event_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_EventFilter_IsBase(bool value) const { qwebengineurlschemehandler_eventfilter_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_TimerEvent_IsBase(bool value) const { qwebengineurlschemehandler_timerevent_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_ChildEvent_IsBase(bool value) const { qwebengineurlschemehandler_childevent_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_CustomEvent_IsBase(bool value) const { qwebengineurlschemehandler_customevent_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_ConnectNotify_IsBase(bool value) const { qwebengineurlschemehandler_connectnotify_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_DisconnectNotify_IsBase(bool value) const { qwebengineurlschemehandler_disconnectnotify_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_Sender_IsBase(bool value) const { qwebengineurlschemehandler_sender_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_SenderSignalIndex_IsBase(bool value) const { qwebengineurlschemehandler_sendersignalindex_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_Receivers_IsBase(bool value) const { qwebengineurlschemehandler_receivers_isbase = value; }
    inline void setQWebEngineUrlSchemeHandler_IsSignalConnected_IsBase(bool value) const { qwebengineurlschemehandler_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebengineurlschemehandler_metaobject_isbase) {
            qwebengineurlschemehandler_metaobject_isbase = false;
            return QWebEngineUrlSchemeHandler::metaObject();
        }
        auto metaobject_cb = qwebengineurlschemehandler_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QWebEngineUrlSchemeHandler::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebengineurlschemehandler_metacast_isbase) {
            qwebengineurlschemehandler_metacast_isbase = false;
            return QWebEngineUrlSchemeHandler::qt_metacast(param1);
        }
        auto metacast_cb = qwebengineurlschemehandler_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QWebEngineUrlSchemeHandler::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebengineurlschemehandler_metacall_isbase) {
            qwebengineurlschemehandler_metacall_isbase = false;
            return QWebEngineUrlSchemeHandler::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qwebengineurlschemehandler_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebEngineUrlSchemeHandler::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestStarted(QWebEngineUrlRequestJob* param1) override {
        auto requeststarted_cb = qwebengineurlschemehandler_requeststarted_callback;
        if (requeststarted_cb) {
            QWebEngineUrlRequestJob* cbval1 = param1;

            requeststarted_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebengineurlschemehandler_event_isbase) {
            qwebengineurlschemehandler_event_isbase = false;
            return QWebEngineUrlSchemeHandler::event(event);
        }
        auto event_cb = qwebengineurlschemehandler_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QWebEngineUrlSchemeHandler::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebengineurlschemehandler_eventfilter_isbase) {
            qwebengineurlschemehandler_eventfilter_isbase = false;
            return QWebEngineUrlSchemeHandler::eventFilter(watched, event);
        }
        auto eventfilter_cb = qwebengineurlschemehandler_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebEngineUrlSchemeHandler::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebengineurlschemehandler_timerevent_isbase) {
            qwebengineurlschemehandler_timerevent_isbase = false;
            QWebEngineUrlSchemeHandler::timerEvent(event);
            return;
        }
        auto timerevent_cb = qwebengineurlschemehandler_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QWebEngineUrlSchemeHandler::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebengineurlschemehandler_childevent_isbase) {
            qwebengineurlschemehandler_childevent_isbase = false;
            QWebEngineUrlSchemeHandler::childEvent(event);
            return;
        }
        auto childevent_cb = qwebengineurlschemehandler_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QWebEngineUrlSchemeHandler::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebengineurlschemehandler_customevent_isbase) {
            qwebengineurlschemehandler_customevent_isbase = false;
            QWebEngineUrlSchemeHandler::customEvent(event);
            return;
        }
        auto customevent_cb = qwebengineurlschemehandler_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QWebEngineUrlSchemeHandler::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebengineurlschemehandler_connectnotify_isbase) {
            qwebengineurlschemehandler_connectnotify_isbase = false;
            QWebEngineUrlSchemeHandler::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qwebengineurlschemehandler_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QWebEngineUrlSchemeHandler::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebengineurlschemehandler_disconnectnotify_isbase) {
            qwebengineurlschemehandler_disconnectnotify_isbase = false;
            QWebEngineUrlSchemeHandler::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qwebengineurlschemehandler_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QWebEngineUrlSchemeHandler::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwebengineurlschemehandler_sender_isbase) {
            qwebengineurlschemehandler_sender_isbase = false;
            return QWebEngineUrlSchemeHandler::sender();
        }
        auto sender_cb = qwebengineurlschemehandler_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QWebEngineUrlSchemeHandler::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwebengineurlschemehandler_sendersignalindex_isbase) {
            qwebengineurlschemehandler_sendersignalindex_isbase = false;
            return QWebEngineUrlSchemeHandler::senderSignalIndex();
        }
        auto sendersignalindex_cb = qwebengineurlschemehandler_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QWebEngineUrlSchemeHandler::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwebengineurlschemehandler_receivers_isbase) {
            qwebengineurlschemehandler_receivers_isbase = false;
            return QWebEngineUrlSchemeHandler::receivers(signal);
        }
        auto receivers_cb = qwebengineurlschemehandler_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWebEngineUrlSchemeHandler::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwebengineurlschemehandler_issignalconnected_isbase) {
            qwebengineurlschemehandler_issignalconnected_isbase = false;
            return QWebEngineUrlSchemeHandler::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qwebengineurlschemehandler_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QWebEngineUrlSchemeHandler::isSignalConnected(signal);
    }

    // Friend functions
    friend void QWebEngineUrlSchemeHandler_TimerEvent(QWebEngineUrlSchemeHandler* self, QTimerEvent* event);
    friend void QWebEngineUrlSchemeHandler_SuperTimerEvent(QWebEngineUrlSchemeHandler* self, QTimerEvent* event);
    friend void QWebEngineUrlSchemeHandler_ChildEvent(QWebEngineUrlSchemeHandler* self, QChildEvent* event);
    friend void QWebEngineUrlSchemeHandler_SuperChildEvent(QWebEngineUrlSchemeHandler* self, QChildEvent* event);
    friend void QWebEngineUrlSchemeHandler_CustomEvent(QWebEngineUrlSchemeHandler* self, QEvent* event);
    friend void QWebEngineUrlSchemeHandler_SuperCustomEvent(QWebEngineUrlSchemeHandler* self, QEvent* event);
    friend void QWebEngineUrlSchemeHandler_ConnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
    friend void QWebEngineUrlSchemeHandler_SuperConnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
    friend void QWebEngineUrlSchemeHandler_DisconnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
    friend void QWebEngineUrlSchemeHandler_SuperDisconnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
    friend QObject* QWebEngineUrlSchemeHandler_Sender(const QWebEngineUrlSchemeHandler* self);
    friend QObject* QWebEngineUrlSchemeHandler_SuperSender(const QWebEngineUrlSchemeHandler* self);
    friend int QWebEngineUrlSchemeHandler_SenderSignalIndex(const QWebEngineUrlSchemeHandler* self);
    friend int QWebEngineUrlSchemeHandler_SuperSenderSignalIndex(const QWebEngineUrlSchemeHandler* self);
    friend int QWebEngineUrlSchemeHandler_Receivers(const QWebEngineUrlSchemeHandler* self, const char* signal);
    friend int QWebEngineUrlSchemeHandler_SuperReceivers(const QWebEngineUrlSchemeHandler* self, const char* signal);
    friend bool QWebEngineUrlSchemeHandler_IsSignalConnected(const QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
    friend bool QWebEngineUrlSchemeHandler_SuperIsSignalConnected(const QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
};

#endif
