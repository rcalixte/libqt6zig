#pragma once
#ifndef QML_LIBQJSENGINE_HXX
#define QML_LIBQJSENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QJSEngine so that we can call protected methods
class VirtualQJSEngine final : public QJSEngine {

  public:
    // Virtual class boolean flag
    bool isVirtualQJSEngine = true;

    // Virtual class public types (including callbacks)
    using QJSEngine_MetaObject_Callback = QMetaObject* (*)();
    using QJSEngine_Metacast_Callback = void* (*)(QJSEngine*, const char*);
    using QJSEngine_Metacall_Callback = int (*)(QJSEngine*, int, int, void**);
    using QJSEngine_Event_Callback = bool (*)(QJSEngine*, QEvent*);
    using QJSEngine_EventFilter_Callback = bool (*)(QJSEngine*, QObject*, QEvent*);
    using QJSEngine_TimerEvent_Callback = void (*)(QJSEngine*, QTimerEvent*);
    using QJSEngine_ChildEvent_Callback = void (*)(QJSEngine*, QChildEvent*);
    using QJSEngine_CustomEvent_Callback = void (*)(QJSEngine*, QEvent*);
    using QJSEngine_ConnectNotify_Callback = void (*)(QJSEngine*, QMetaMethod*);
    using QJSEngine_DisconnectNotify_Callback = void (*)(QJSEngine*, QMetaMethod*);
    using QJSEngine_Sender_Callback = QObject* (*)();
    using QJSEngine_SenderSignalIndex_Callback = int (*)();
    using QJSEngine_Receivers_Callback = int (*)(const QJSEngine*, const char*);
    using QJSEngine_IsSignalConnected_Callback = bool (*)(const QJSEngine*, QMetaMethod*);

  protected:
    // Instance callback storage
    QJSEngine_MetaObject_Callback qjsengine_metaobject_callback = nullptr;
    QJSEngine_Metacast_Callback qjsengine_metacast_callback = nullptr;
    QJSEngine_Metacall_Callback qjsengine_metacall_callback = nullptr;
    QJSEngine_Event_Callback qjsengine_event_callback = nullptr;
    QJSEngine_EventFilter_Callback qjsengine_eventfilter_callback = nullptr;
    QJSEngine_TimerEvent_Callback qjsengine_timerevent_callback = nullptr;
    QJSEngine_ChildEvent_Callback qjsengine_childevent_callback = nullptr;
    QJSEngine_CustomEvent_Callback qjsengine_customevent_callback = nullptr;
    QJSEngine_ConnectNotify_Callback qjsengine_connectnotify_callback = nullptr;
    QJSEngine_DisconnectNotify_Callback qjsengine_disconnectnotify_callback = nullptr;
    QJSEngine_Sender_Callback qjsengine_sender_callback = nullptr;
    QJSEngine_SenderSignalIndex_Callback qjsengine_sendersignalindex_callback = nullptr;
    QJSEngine_Receivers_Callback qjsengine_receivers_callback = nullptr;
    QJSEngine_IsSignalConnected_Callback qjsengine_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qjsengine_metaobject_isbase = false;
    mutable bool qjsengine_metacast_isbase = false;
    mutable bool qjsengine_metacall_isbase = false;
    mutable bool qjsengine_event_isbase = false;
    mutable bool qjsengine_eventfilter_isbase = false;
    mutable bool qjsengine_timerevent_isbase = false;
    mutable bool qjsengine_childevent_isbase = false;
    mutable bool qjsengine_customevent_isbase = false;
    mutable bool qjsengine_connectnotify_isbase = false;
    mutable bool qjsengine_disconnectnotify_isbase = false;
    mutable bool qjsengine_sender_isbase = false;
    mutable bool qjsengine_sendersignalindex_isbase = false;
    mutable bool qjsengine_receivers_isbase = false;
    mutable bool qjsengine_issignalconnected_isbase = false;

  public:
    VirtualQJSEngine() : QJSEngine() {};
    VirtualQJSEngine(QObject* parent) : QJSEngine(parent) {};

    // Callback setters
    inline void setQJSEngine_MetaObject_Callback(QJSEngine_MetaObject_Callback cb) { qjsengine_metaobject_callback = cb; }
    inline void setQJSEngine_Metacast_Callback(QJSEngine_Metacast_Callback cb) { qjsengine_metacast_callback = cb; }
    inline void setQJSEngine_Metacall_Callback(QJSEngine_Metacall_Callback cb) { qjsengine_metacall_callback = cb; }
    inline void setQJSEngine_Event_Callback(QJSEngine_Event_Callback cb) { qjsengine_event_callback = cb; }
    inline void setQJSEngine_EventFilter_Callback(QJSEngine_EventFilter_Callback cb) { qjsengine_eventfilter_callback = cb; }
    inline void setQJSEngine_TimerEvent_Callback(QJSEngine_TimerEvent_Callback cb) { qjsengine_timerevent_callback = cb; }
    inline void setQJSEngine_ChildEvent_Callback(QJSEngine_ChildEvent_Callback cb) { qjsengine_childevent_callback = cb; }
    inline void setQJSEngine_CustomEvent_Callback(QJSEngine_CustomEvent_Callback cb) { qjsengine_customevent_callback = cb; }
    inline void setQJSEngine_ConnectNotify_Callback(QJSEngine_ConnectNotify_Callback cb) { qjsengine_connectnotify_callback = cb; }
    inline void setQJSEngine_DisconnectNotify_Callback(QJSEngine_DisconnectNotify_Callback cb) { qjsengine_disconnectnotify_callback = cb; }
    inline void setQJSEngine_Sender_Callback(QJSEngine_Sender_Callback cb) { qjsengine_sender_callback = cb; }
    inline void setQJSEngine_SenderSignalIndex_Callback(QJSEngine_SenderSignalIndex_Callback cb) { qjsengine_sendersignalindex_callback = cb; }
    inline void setQJSEngine_Receivers_Callback(QJSEngine_Receivers_Callback cb) { qjsengine_receivers_callback = cb; }
    inline void setQJSEngine_IsSignalConnected_Callback(QJSEngine_IsSignalConnected_Callback cb) { qjsengine_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQJSEngine_MetaObject_IsBase(bool value) const { qjsengine_metaobject_isbase = value; }
    inline void setQJSEngine_Metacast_IsBase(bool value) const { qjsengine_metacast_isbase = value; }
    inline void setQJSEngine_Metacall_IsBase(bool value) const { qjsengine_metacall_isbase = value; }
    inline void setQJSEngine_Event_IsBase(bool value) const { qjsengine_event_isbase = value; }
    inline void setQJSEngine_EventFilter_IsBase(bool value) const { qjsengine_eventfilter_isbase = value; }
    inline void setQJSEngine_TimerEvent_IsBase(bool value) const { qjsengine_timerevent_isbase = value; }
    inline void setQJSEngine_ChildEvent_IsBase(bool value) const { qjsengine_childevent_isbase = value; }
    inline void setQJSEngine_CustomEvent_IsBase(bool value) const { qjsengine_customevent_isbase = value; }
    inline void setQJSEngine_ConnectNotify_IsBase(bool value) const { qjsengine_connectnotify_isbase = value; }
    inline void setQJSEngine_DisconnectNotify_IsBase(bool value) const { qjsengine_disconnectnotify_isbase = value; }
    inline void setQJSEngine_Sender_IsBase(bool value) const { qjsengine_sender_isbase = value; }
    inline void setQJSEngine_SenderSignalIndex_IsBase(bool value) const { qjsengine_sendersignalindex_isbase = value; }
    inline void setQJSEngine_Receivers_IsBase(bool value) const { qjsengine_receivers_isbase = value; }
    inline void setQJSEngine_IsSignalConnected_IsBase(bool value) const { qjsengine_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qjsengine_metaobject_isbase) {
            qjsengine_metaobject_isbase = false;
            return QJSEngine::metaObject();
        }
        auto metaobject_cb = qjsengine_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QJSEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qjsengine_metacast_isbase) {
            qjsengine_metacast_isbase = false;
            return QJSEngine::qt_metacast(param1);
        }
        auto metacast_cb = qjsengine_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QJSEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qjsengine_metacall_isbase) {
            qjsengine_metacall_isbase = false;
            return QJSEngine::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qjsengine_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QJSEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qjsengine_event_isbase) {
            qjsengine_event_isbase = false;
            return QJSEngine::event(event);
        }
        auto event_cb = qjsengine_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QJSEngine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qjsengine_eventfilter_isbase) {
            qjsengine_eventfilter_isbase = false;
            return QJSEngine::eventFilter(watched, event);
        }
        auto eventfilter_cb = qjsengine_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QJSEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qjsengine_timerevent_isbase) {
            qjsengine_timerevent_isbase = false;
            QJSEngine::timerEvent(event);
            return;
        }
        auto timerevent_cb = qjsengine_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QJSEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qjsengine_childevent_isbase) {
            qjsengine_childevent_isbase = false;
            QJSEngine::childEvent(event);
            return;
        }
        auto childevent_cb = qjsengine_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QJSEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qjsengine_customevent_isbase) {
            qjsengine_customevent_isbase = false;
            QJSEngine::customEvent(event);
            return;
        }
        auto customevent_cb = qjsengine_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QJSEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qjsengine_connectnotify_isbase) {
            qjsengine_connectnotify_isbase = false;
            QJSEngine::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qjsengine_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QJSEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qjsengine_disconnectnotify_isbase) {
            qjsengine_disconnectnotify_isbase = false;
            QJSEngine::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qjsengine_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QJSEngine::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qjsengine_sender_isbase) {
            qjsengine_sender_isbase = false;
            return QJSEngine::sender();
        }
        auto sender_cb = qjsengine_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QJSEngine::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qjsengine_sendersignalindex_isbase) {
            qjsengine_sendersignalindex_isbase = false;
            return QJSEngine::senderSignalIndex();
        }
        auto sendersignalindex_cb = qjsengine_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QJSEngine::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qjsengine_receivers_isbase) {
            qjsengine_receivers_isbase = false;
            return QJSEngine::receivers(signal);
        }
        auto receivers_cb = qjsengine_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QJSEngine::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qjsengine_issignalconnected_isbase) {
            qjsengine_issignalconnected_isbase = false;
            return QJSEngine::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qjsengine_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QJSEngine::isSignalConnected(signal);
    }

    // Friend functions
    friend void QJSEngine_TimerEvent(QJSEngine* self, QTimerEvent* event);
    friend void QJSEngine_SuperTimerEvent(QJSEngine* self, QTimerEvent* event);
    friend void QJSEngine_ChildEvent(QJSEngine* self, QChildEvent* event);
    friend void QJSEngine_SuperChildEvent(QJSEngine* self, QChildEvent* event);
    friend void QJSEngine_CustomEvent(QJSEngine* self, QEvent* event);
    friend void QJSEngine_SuperCustomEvent(QJSEngine* self, QEvent* event);
    friend void QJSEngine_ConnectNotify(QJSEngine* self, const QMetaMethod* signal);
    friend void QJSEngine_SuperConnectNotify(QJSEngine* self, const QMetaMethod* signal);
    friend void QJSEngine_DisconnectNotify(QJSEngine* self, const QMetaMethod* signal);
    friend void QJSEngine_SuperDisconnectNotify(QJSEngine* self, const QMetaMethod* signal);
    friend QObject* QJSEngine_Sender(const QJSEngine* self);
    friend QObject* QJSEngine_SuperSender(const QJSEngine* self);
    friend int QJSEngine_SenderSignalIndex(const QJSEngine* self);
    friend int QJSEngine_SuperSenderSignalIndex(const QJSEngine* self);
    friend int QJSEngine_Receivers(const QJSEngine* self, const char* signal);
    friend int QJSEngine_SuperReceivers(const QJSEngine* self, const char* signal);
    friend bool QJSEngine_IsSignalConnected(const QJSEngine* self, const QMetaMethod* signal);
    friend bool QJSEngine_SuperIsSignalConnected(const QJSEngine* self, const QMetaMethod* signal);
};

#endif
