#pragma once
#ifndef QML_LIBQQMLEXPRESSION_HXX
#define QML_LIBQQMLEXPRESSION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlExpression so that we can call protected methods
class VirtualQQmlExpression final : public QQmlExpression {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlExpression = true;

    // Virtual class public types (including callbacks)
    using QQmlExpression_MetaObject_Callback = QMetaObject* (*)();
    using QQmlExpression_Metacast_Callback = void* (*)(QQmlExpression*, const char*);
    using QQmlExpression_Metacall_Callback = int (*)(QQmlExpression*, int, int, void**);
    using QQmlExpression_Event_Callback = bool (*)(QQmlExpression*, QEvent*);
    using QQmlExpression_EventFilter_Callback = bool (*)(QQmlExpression*, QObject*, QEvent*);
    using QQmlExpression_TimerEvent_Callback = void (*)(QQmlExpression*, QTimerEvent*);
    using QQmlExpression_ChildEvent_Callback = void (*)(QQmlExpression*, QChildEvent*);
    using QQmlExpression_CustomEvent_Callback = void (*)(QQmlExpression*, QEvent*);
    using QQmlExpression_ConnectNotify_Callback = void (*)(QQmlExpression*, QMetaMethod*);
    using QQmlExpression_DisconnectNotify_Callback = void (*)(QQmlExpression*, QMetaMethod*);
    using QQmlExpression_Sender_Callback = QObject* (*)();
    using QQmlExpression_SenderSignalIndex_Callback = int (*)();
    using QQmlExpression_Receivers_Callback = int (*)(const QQmlExpression*, const char*);
    using QQmlExpression_IsSignalConnected_Callback = bool (*)(const QQmlExpression*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQmlExpression_MetaObject_Callback qqmlexpression_metaobject_callback = nullptr;
    QQmlExpression_Metacast_Callback qqmlexpression_metacast_callback = nullptr;
    QQmlExpression_Metacall_Callback qqmlexpression_metacall_callback = nullptr;
    QQmlExpression_Event_Callback qqmlexpression_event_callback = nullptr;
    QQmlExpression_EventFilter_Callback qqmlexpression_eventfilter_callback = nullptr;
    QQmlExpression_TimerEvent_Callback qqmlexpression_timerevent_callback = nullptr;
    QQmlExpression_ChildEvent_Callback qqmlexpression_childevent_callback = nullptr;
    QQmlExpression_CustomEvent_Callback qqmlexpression_customevent_callback = nullptr;
    QQmlExpression_ConnectNotify_Callback qqmlexpression_connectnotify_callback = nullptr;
    QQmlExpression_DisconnectNotify_Callback qqmlexpression_disconnectnotify_callback = nullptr;
    QQmlExpression_Sender_Callback qqmlexpression_sender_callback = nullptr;
    QQmlExpression_SenderSignalIndex_Callback qqmlexpression_sendersignalindex_callback = nullptr;
    QQmlExpression_Receivers_Callback qqmlexpression_receivers_callback = nullptr;
    QQmlExpression_IsSignalConnected_Callback qqmlexpression_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qqmlexpression_metaobject_isbase = false;
    mutable bool qqmlexpression_metacast_isbase = false;
    mutable bool qqmlexpression_metacall_isbase = false;
    mutable bool qqmlexpression_event_isbase = false;
    mutable bool qqmlexpression_eventfilter_isbase = false;
    mutable bool qqmlexpression_timerevent_isbase = false;
    mutable bool qqmlexpression_childevent_isbase = false;
    mutable bool qqmlexpression_customevent_isbase = false;
    mutable bool qqmlexpression_connectnotify_isbase = false;
    mutable bool qqmlexpression_disconnectnotify_isbase = false;
    mutable bool qqmlexpression_sender_isbase = false;
    mutable bool qqmlexpression_sendersignalindex_isbase = false;
    mutable bool qqmlexpression_receivers_isbase = false;
    mutable bool qqmlexpression_issignalconnected_isbase = false;

  public:
    VirtualQQmlExpression() : QQmlExpression() {};
    VirtualQQmlExpression(QQmlContext* param1, QObject* param2, const QString& param3) : QQmlExpression(param1, param2, param3) {};
    VirtualQQmlExpression(const QQmlScriptString& param1) : QQmlExpression(param1) {};
    VirtualQQmlExpression(QQmlContext* param1, QObject* param2, const QString& param3, QObject* param4) : QQmlExpression(param1, param2, param3, param4) {};
    VirtualQQmlExpression(const QQmlScriptString& param1, QQmlContext* param2) : QQmlExpression(param1, param2) {};
    VirtualQQmlExpression(const QQmlScriptString& param1, QQmlContext* param2, QObject* param3) : QQmlExpression(param1, param2, param3) {};
    VirtualQQmlExpression(const QQmlScriptString& param1, QQmlContext* param2, QObject* param3, QObject* param4) : QQmlExpression(param1, param2, param3, param4) {};

    // Callback setters
    inline void setQQmlExpression_MetaObject_Callback(QQmlExpression_MetaObject_Callback cb) { qqmlexpression_metaobject_callback = cb; }
    inline void setQQmlExpression_Metacast_Callback(QQmlExpression_Metacast_Callback cb) { qqmlexpression_metacast_callback = cb; }
    inline void setQQmlExpression_Metacall_Callback(QQmlExpression_Metacall_Callback cb) { qqmlexpression_metacall_callback = cb; }
    inline void setQQmlExpression_Event_Callback(QQmlExpression_Event_Callback cb) { qqmlexpression_event_callback = cb; }
    inline void setQQmlExpression_EventFilter_Callback(QQmlExpression_EventFilter_Callback cb) { qqmlexpression_eventfilter_callback = cb; }
    inline void setQQmlExpression_TimerEvent_Callback(QQmlExpression_TimerEvent_Callback cb) { qqmlexpression_timerevent_callback = cb; }
    inline void setQQmlExpression_ChildEvent_Callback(QQmlExpression_ChildEvent_Callback cb) { qqmlexpression_childevent_callback = cb; }
    inline void setQQmlExpression_CustomEvent_Callback(QQmlExpression_CustomEvent_Callback cb) { qqmlexpression_customevent_callback = cb; }
    inline void setQQmlExpression_ConnectNotify_Callback(QQmlExpression_ConnectNotify_Callback cb) { qqmlexpression_connectnotify_callback = cb; }
    inline void setQQmlExpression_DisconnectNotify_Callback(QQmlExpression_DisconnectNotify_Callback cb) { qqmlexpression_disconnectnotify_callback = cb; }
    inline void setQQmlExpression_Sender_Callback(QQmlExpression_Sender_Callback cb) { qqmlexpression_sender_callback = cb; }
    inline void setQQmlExpression_SenderSignalIndex_Callback(QQmlExpression_SenderSignalIndex_Callback cb) { qqmlexpression_sendersignalindex_callback = cb; }
    inline void setQQmlExpression_Receivers_Callback(QQmlExpression_Receivers_Callback cb) { qqmlexpression_receivers_callback = cb; }
    inline void setQQmlExpression_IsSignalConnected_Callback(QQmlExpression_IsSignalConnected_Callback cb) { qqmlexpression_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQmlExpression_MetaObject_IsBase(bool value) const { qqmlexpression_metaobject_isbase = value; }
    inline void setQQmlExpression_Metacast_IsBase(bool value) const { qqmlexpression_metacast_isbase = value; }
    inline void setQQmlExpression_Metacall_IsBase(bool value) const { qqmlexpression_metacall_isbase = value; }
    inline void setQQmlExpression_Event_IsBase(bool value) const { qqmlexpression_event_isbase = value; }
    inline void setQQmlExpression_EventFilter_IsBase(bool value) const { qqmlexpression_eventfilter_isbase = value; }
    inline void setQQmlExpression_TimerEvent_IsBase(bool value) const { qqmlexpression_timerevent_isbase = value; }
    inline void setQQmlExpression_ChildEvent_IsBase(bool value) const { qqmlexpression_childevent_isbase = value; }
    inline void setQQmlExpression_CustomEvent_IsBase(bool value) const { qqmlexpression_customevent_isbase = value; }
    inline void setQQmlExpression_ConnectNotify_IsBase(bool value) const { qqmlexpression_connectnotify_isbase = value; }
    inline void setQQmlExpression_DisconnectNotify_IsBase(bool value) const { qqmlexpression_disconnectnotify_isbase = value; }
    inline void setQQmlExpression_Sender_IsBase(bool value) const { qqmlexpression_sender_isbase = value; }
    inline void setQQmlExpression_SenderSignalIndex_IsBase(bool value) const { qqmlexpression_sendersignalindex_isbase = value; }
    inline void setQQmlExpression_Receivers_IsBase(bool value) const { qqmlexpression_receivers_isbase = value; }
    inline void setQQmlExpression_IsSignalConnected_IsBase(bool value) const { qqmlexpression_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlexpression_metaobject_isbase) {
            qqmlexpression_metaobject_isbase = false;
            return QQmlExpression::metaObject();
        }
        auto metaobject_cb = qqmlexpression_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQmlExpression::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlexpression_metacast_isbase) {
            qqmlexpression_metacast_isbase = false;
            return QQmlExpression::qt_metacast(param1);
        }
        auto metacast_cb = qqmlexpression_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlExpression::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlexpression_metacall_isbase) {
            qqmlexpression_metacall_isbase = false;
            return QQmlExpression::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qqmlexpression_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlExpression::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlexpression_event_isbase) {
            qqmlexpression_event_isbase = false;
            return QQmlExpression::event(event);
        }
        auto event_cb = qqmlexpression_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlExpression::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlexpression_eventfilter_isbase) {
            qqmlexpression_eventfilter_isbase = false;
            return QQmlExpression::eventFilter(watched, event);
        }
        auto eventfilter_cb = qqmlexpression_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlExpression::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlexpression_timerevent_isbase) {
            qqmlexpression_timerevent_isbase = false;
            QQmlExpression::timerEvent(event);
            return;
        }
        auto timerevent_cb = qqmlexpression_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQmlExpression::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlexpression_childevent_isbase) {
            qqmlexpression_childevent_isbase = false;
            QQmlExpression::childEvent(event);
            return;
        }
        auto childevent_cb = qqmlexpression_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQmlExpression::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlexpression_customevent_isbase) {
            qqmlexpression_customevent_isbase = false;
            QQmlExpression::customEvent(event);
            return;
        }
        auto customevent_cb = qqmlexpression_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQmlExpression::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlexpression_connectnotify_isbase) {
            qqmlexpression_connectnotify_isbase = false;
            QQmlExpression::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qqmlexpression_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQmlExpression::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlexpression_disconnectnotify_isbase) {
            qqmlexpression_disconnectnotify_isbase = false;
            QQmlExpression::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qqmlexpression_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQmlExpression::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qqmlexpression_sender_isbase) {
            qqmlexpression_sender_isbase = false;
            return QQmlExpression::sender();
        }
        auto sender_cb = qqmlexpression_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQmlExpression::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qqmlexpression_sendersignalindex_isbase) {
            qqmlexpression_sendersignalindex_isbase = false;
            return QQmlExpression::senderSignalIndex();
        }
        auto sendersignalindex_cb = qqmlexpression_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQmlExpression::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qqmlexpression_receivers_isbase) {
            qqmlexpression_receivers_isbase = false;
            return QQmlExpression::receivers(signal);
        }
        auto receivers_cb = qqmlexpression_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQmlExpression::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qqmlexpression_issignalconnected_isbase) {
            qqmlexpression_issignalconnected_isbase = false;
            return QQmlExpression::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qqmlexpression_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlExpression::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQmlExpression_TimerEvent(QQmlExpression* self, QTimerEvent* event);
    friend void QQmlExpression_SuperTimerEvent(QQmlExpression* self, QTimerEvent* event);
    friend void QQmlExpression_ChildEvent(QQmlExpression* self, QChildEvent* event);
    friend void QQmlExpression_SuperChildEvent(QQmlExpression* self, QChildEvent* event);
    friend void QQmlExpression_CustomEvent(QQmlExpression* self, QEvent* event);
    friend void QQmlExpression_SuperCustomEvent(QQmlExpression* self, QEvent* event);
    friend void QQmlExpression_ConnectNotify(QQmlExpression* self, const QMetaMethod* signal);
    friend void QQmlExpression_SuperConnectNotify(QQmlExpression* self, const QMetaMethod* signal);
    friend void QQmlExpression_DisconnectNotify(QQmlExpression* self, const QMetaMethod* signal);
    friend void QQmlExpression_SuperDisconnectNotify(QQmlExpression* self, const QMetaMethod* signal);
    friend QObject* QQmlExpression_Sender(const QQmlExpression* self);
    friend QObject* QQmlExpression_SuperSender(const QQmlExpression* self);
    friend int QQmlExpression_SenderSignalIndex(const QQmlExpression* self);
    friend int QQmlExpression_SuperSenderSignalIndex(const QQmlExpression* self);
    friend int QQmlExpression_Receivers(const QQmlExpression* self, const char* signal);
    friend int QQmlExpression_SuperReceivers(const QQmlExpression* self, const char* signal);
    friend bool QQmlExpression_IsSignalConnected(const QQmlExpression* self, const QMetaMethod* signal);
    friend bool QQmlExpression_SuperIsSignalConnected(const QQmlExpression* self, const QMetaMethod* signal);
};

#endif
