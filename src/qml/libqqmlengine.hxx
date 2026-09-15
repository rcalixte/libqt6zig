#pragma once
#ifndef QML_LIBQQMLENGINE_HXX
#define QML_LIBQQMLENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlEngine so that we can call protected methods
class VirtualQQmlEngine final : public QQmlEngine {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlEngine = true;

    // Virtual class public types (including callbacks)
    using QQmlEngine_MetaObject_Callback = QMetaObject* (*)();
    using QQmlEngine_Metacast_Callback = void* (*)(QQmlEngine*, const char*);
    using QQmlEngine_Metacall_Callback = int (*)(QQmlEngine*, int, int, void**);
    using QQmlEngine_Event_Callback = bool (*)(QQmlEngine*, QEvent*);
    using QQmlEngine_EventFilter_Callback = bool (*)(QQmlEngine*, QObject*, QEvent*);
    using QQmlEngine_TimerEvent_Callback = void (*)(QQmlEngine*, QTimerEvent*);
    using QQmlEngine_ChildEvent_Callback = void (*)(QQmlEngine*, QChildEvent*);
    using QQmlEngine_CustomEvent_Callback = void (*)(QQmlEngine*, QEvent*);
    using QQmlEngine_ConnectNotify_Callback = void (*)(QQmlEngine*, QMetaMethod*);
    using QQmlEngine_DisconnectNotify_Callback = void (*)(QQmlEngine*, QMetaMethod*);
    using QQmlEngine_Sender_Callback = QObject* (*)();
    using QQmlEngine_SenderSignalIndex_Callback = int (*)();
    using QQmlEngine_Receivers_Callback = int (*)(const QQmlEngine*, const char*);
    using QQmlEngine_IsSignalConnected_Callback = bool (*)(const QQmlEngine*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQmlEngine_MetaObject_Callback qqmlengine_metaobject_callback = nullptr;
    QQmlEngine_Metacast_Callback qqmlengine_metacast_callback = nullptr;
    QQmlEngine_Metacall_Callback qqmlengine_metacall_callback = nullptr;
    QQmlEngine_Event_Callback qqmlengine_event_callback = nullptr;
    QQmlEngine_EventFilter_Callback qqmlengine_eventfilter_callback = nullptr;
    QQmlEngine_TimerEvent_Callback qqmlengine_timerevent_callback = nullptr;
    QQmlEngine_ChildEvent_Callback qqmlengine_childevent_callback = nullptr;
    QQmlEngine_CustomEvent_Callback qqmlengine_customevent_callback = nullptr;
    QQmlEngine_ConnectNotify_Callback qqmlengine_connectnotify_callback = nullptr;
    QQmlEngine_DisconnectNotify_Callback qqmlengine_disconnectnotify_callback = nullptr;
    QQmlEngine_Sender_Callback qqmlengine_sender_callback = nullptr;
    QQmlEngine_SenderSignalIndex_Callback qqmlengine_sendersignalindex_callback = nullptr;
    QQmlEngine_Receivers_Callback qqmlengine_receivers_callback = nullptr;
    QQmlEngine_IsSignalConnected_Callback qqmlengine_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qqmlengine_metaobject_isbase = false;
    mutable bool qqmlengine_metacast_isbase = false;
    mutable bool qqmlengine_metacall_isbase = false;
    mutable bool qqmlengine_event_isbase = false;
    mutable bool qqmlengine_eventfilter_isbase = false;
    mutable bool qqmlengine_timerevent_isbase = false;
    mutable bool qqmlengine_childevent_isbase = false;
    mutable bool qqmlengine_customevent_isbase = false;
    mutable bool qqmlengine_connectnotify_isbase = false;
    mutable bool qqmlengine_disconnectnotify_isbase = false;
    mutable bool qqmlengine_sender_isbase = false;
    mutable bool qqmlengine_sendersignalindex_isbase = false;
    mutable bool qqmlengine_receivers_isbase = false;
    mutable bool qqmlengine_issignalconnected_isbase = false;

  public:
    VirtualQQmlEngine() : QQmlEngine() {};
    VirtualQQmlEngine(QObject* p) : QQmlEngine(p) {};

    // Callback setters
    inline void setQQmlEngine_MetaObject_Callback(QQmlEngine_MetaObject_Callback cb) { qqmlengine_metaobject_callback = cb; }
    inline void setQQmlEngine_Metacast_Callback(QQmlEngine_Metacast_Callback cb) { qqmlengine_metacast_callback = cb; }
    inline void setQQmlEngine_Metacall_Callback(QQmlEngine_Metacall_Callback cb) { qqmlengine_metacall_callback = cb; }
    inline void setQQmlEngine_Event_Callback(QQmlEngine_Event_Callback cb) { qqmlengine_event_callback = cb; }
    inline void setQQmlEngine_EventFilter_Callback(QQmlEngine_EventFilter_Callback cb) { qqmlengine_eventfilter_callback = cb; }
    inline void setQQmlEngine_TimerEvent_Callback(QQmlEngine_TimerEvent_Callback cb) { qqmlengine_timerevent_callback = cb; }
    inline void setQQmlEngine_ChildEvent_Callback(QQmlEngine_ChildEvent_Callback cb) { qqmlengine_childevent_callback = cb; }
    inline void setQQmlEngine_CustomEvent_Callback(QQmlEngine_CustomEvent_Callback cb) { qqmlengine_customevent_callback = cb; }
    inline void setQQmlEngine_ConnectNotify_Callback(QQmlEngine_ConnectNotify_Callback cb) { qqmlengine_connectnotify_callback = cb; }
    inline void setQQmlEngine_DisconnectNotify_Callback(QQmlEngine_DisconnectNotify_Callback cb) { qqmlengine_disconnectnotify_callback = cb; }
    inline void setQQmlEngine_Sender_Callback(QQmlEngine_Sender_Callback cb) { qqmlengine_sender_callback = cb; }
    inline void setQQmlEngine_SenderSignalIndex_Callback(QQmlEngine_SenderSignalIndex_Callback cb) { qqmlengine_sendersignalindex_callback = cb; }
    inline void setQQmlEngine_Receivers_Callback(QQmlEngine_Receivers_Callback cb) { qqmlengine_receivers_callback = cb; }
    inline void setQQmlEngine_IsSignalConnected_Callback(QQmlEngine_IsSignalConnected_Callback cb) { qqmlengine_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQmlEngine_MetaObject_IsBase(bool value) const { qqmlengine_metaobject_isbase = value; }
    inline void setQQmlEngine_Metacast_IsBase(bool value) const { qqmlengine_metacast_isbase = value; }
    inline void setQQmlEngine_Metacall_IsBase(bool value) const { qqmlengine_metacall_isbase = value; }
    inline void setQQmlEngine_Event_IsBase(bool value) const { qqmlengine_event_isbase = value; }
    inline void setQQmlEngine_EventFilter_IsBase(bool value) const { qqmlengine_eventfilter_isbase = value; }
    inline void setQQmlEngine_TimerEvent_IsBase(bool value) const { qqmlengine_timerevent_isbase = value; }
    inline void setQQmlEngine_ChildEvent_IsBase(bool value) const { qqmlengine_childevent_isbase = value; }
    inline void setQQmlEngine_CustomEvent_IsBase(bool value) const { qqmlengine_customevent_isbase = value; }
    inline void setQQmlEngine_ConnectNotify_IsBase(bool value) const { qqmlengine_connectnotify_isbase = value; }
    inline void setQQmlEngine_DisconnectNotify_IsBase(bool value) const { qqmlengine_disconnectnotify_isbase = value; }
    inline void setQQmlEngine_Sender_IsBase(bool value) const { qqmlengine_sender_isbase = value; }
    inline void setQQmlEngine_SenderSignalIndex_IsBase(bool value) const { qqmlengine_sendersignalindex_isbase = value; }
    inline void setQQmlEngine_Receivers_IsBase(bool value) const { qqmlengine_receivers_isbase = value; }
    inline void setQQmlEngine_IsSignalConnected_IsBase(bool value) const { qqmlengine_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlengine_metaobject_isbase) {
            qqmlengine_metaobject_isbase = false;
            return QQmlEngine::metaObject();
        }
        auto metaobject_cb = qqmlengine_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQmlEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlengine_metacast_isbase) {
            qqmlengine_metacast_isbase = false;
            return QQmlEngine::qt_metacast(param1);
        }
        auto metacast_cb = qqmlengine_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlengine_metacall_isbase) {
            qqmlengine_metacall_isbase = false;
            return QQmlEngine::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qqmlengine_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qqmlengine_event_isbase) {
            qqmlengine_event_isbase = false;
            return QQmlEngine::event(param1);
        }
        auto event_cb = qqmlengine_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlEngine::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlengine_eventfilter_isbase) {
            qqmlengine_eventfilter_isbase = false;
            return QQmlEngine::eventFilter(watched, event);
        }
        auto eventfilter_cb = qqmlengine_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlengine_timerevent_isbase) {
            qqmlengine_timerevent_isbase = false;
            QQmlEngine::timerEvent(event);
            return;
        }
        auto timerevent_cb = qqmlengine_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQmlEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlengine_childevent_isbase) {
            qqmlengine_childevent_isbase = false;
            QQmlEngine::childEvent(event);
            return;
        }
        auto childevent_cb = qqmlengine_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQmlEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlengine_customevent_isbase) {
            qqmlengine_customevent_isbase = false;
            QQmlEngine::customEvent(event);
            return;
        }
        auto customevent_cb = qqmlengine_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQmlEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlengine_connectnotify_isbase) {
            qqmlengine_connectnotify_isbase = false;
            QQmlEngine::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qqmlengine_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQmlEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlengine_disconnectnotify_isbase) {
            qqmlengine_disconnectnotify_isbase = false;
            QQmlEngine::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qqmlengine_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQmlEngine::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qqmlengine_sender_isbase) {
            qqmlengine_sender_isbase = false;
            return QQmlEngine::sender();
        }
        auto sender_cb = qqmlengine_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQmlEngine::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qqmlengine_sendersignalindex_isbase) {
            qqmlengine_sendersignalindex_isbase = false;
            return QQmlEngine::senderSignalIndex();
        }
        auto sendersignalindex_cb = qqmlengine_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQmlEngine::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qqmlengine_receivers_isbase) {
            qqmlengine_receivers_isbase = false;
            return QQmlEngine::receivers(signal);
        }
        auto receivers_cb = qqmlengine_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQmlEngine::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qqmlengine_issignalconnected_isbase) {
            qqmlengine_issignalconnected_isbase = false;
            return QQmlEngine::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qqmlengine_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlEngine::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QQmlEngine_Event(QQmlEngine* self, QEvent* param1);
    friend bool QQmlEngine_SuperEvent(QQmlEngine* self, QEvent* param1);
    friend void QQmlEngine_TimerEvent(QQmlEngine* self, QTimerEvent* event);
    friend void QQmlEngine_SuperTimerEvent(QQmlEngine* self, QTimerEvent* event);
    friend void QQmlEngine_ChildEvent(QQmlEngine* self, QChildEvent* event);
    friend void QQmlEngine_SuperChildEvent(QQmlEngine* self, QChildEvent* event);
    friend void QQmlEngine_CustomEvent(QQmlEngine* self, QEvent* event);
    friend void QQmlEngine_SuperCustomEvent(QQmlEngine* self, QEvent* event);
    friend void QQmlEngine_ConnectNotify(QQmlEngine* self, const QMetaMethod* signal);
    friend void QQmlEngine_SuperConnectNotify(QQmlEngine* self, const QMetaMethod* signal);
    friend void QQmlEngine_DisconnectNotify(QQmlEngine* self, const QMetaMethod* signal);
    friend void QQmlEngine_SuperDisconnectNotify(QQmlEngine* self, const QMetaMethod* signal);
    friend QObject* QQmlEngine_Sender(const QQmlEngine* self);
    friend QObject* QQmlEngine_SuperSender(const QQmlEngine* self);
    friend int QQmlEngine_SenderSignalIndex(const QQmlEngine* self);
    friend int QQmlEngine_SuperSenderSignalIndex(const QQmlEngine* self);
    friend int QQmlEngine_Receivers(const QQmlEngine* self, const char* signal);
    friend int QQmlEngine_SuperReceivers(const QQmlEngine* self, const char* signal);
    friend bool QQmlEngine_IsSignalConnected(const QQmlEngine* self, const QMetaMethod* signal);
    friend bool QQmlEngine_SuperIsSignalConnected(const QQmlEngine* self, const QMetaMethod* signal);
};

#endif
