#pragma once
#ifndef QML_LIBQQMLAPPLICATIONENGINE_HXX
#define QML_LIBQQMLAPPLICATIONENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlApplicationEngine so that we can call protected methods
class VirtualQQmlApplicationEngine final : public QQmlApplicationEngine {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlApplicationEngine = true;

    // Virtual class public types (including callbacks)
    using QQmlApplicationEngine_MetaObject_Callback = QMetaObject* (*)();
    using QQmlApplicationEngine_Metacast_Callback = void* (*)(QQmlApplicationEngine*, const char*);
    using QQmlApplicationEngine_Metacall_Callback = int (*)(QQmlApplicationEngine*, int, int, void**);
    using QQmlApplicationEngine_Event_Callback = bool (*)(QQmlApplicationEngine*, QEvent*);
    using QQmlApplicationEngine_EventFilter_Callback = bool (*)(QQmlApplicationEngine*, QObject*, QEvent*);
    using QQmlApplicationEngine_TimerEvent_Callback = void (*)(QQmlApplicationEngine*, QTimerEvent*);
    using QQmlApplicationEngine_ChildEvent_Callback = void (*)(QQmlApplicationEngine*, QChildEvent*);
    using QQmlApplicationEngine_CustomEvent_Callback = void (*)(QQmlApplicationEngine*, QEvent*);
    using QQmlApplicationEngine_ConnectNotify_Callback = void (*)(QQmlApplicationEngine*, QMetaMethod*);
    using QQmlApplicationEngine_DisconnectNotify_Callback = void (*)(QQmlApplicationEngine*, QMetaMethod*);
    using QQmlApplicationEngine_Sender_Callback = QObject* (*)();
    using QQmlApplicationEngine_SenderSignalIndex_Callback = int (*)();
    using QQmlApplicationEngine_Receivers_Callback = int (*)(const QQmlApplicationEngine*, const char*);
    using QQmlApplicationEngine_IsSignalConnected_Callback = bool (*)(const QQmlApplicationEngine*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQmlApplicationEngine_MetaObject_Callback qqmlapplicationengine_metaobject_callback = nullptr;
    QQmlApplicationEngine_Metacast_Callback qqmlapplicationengine_metacast_callback = nullptr;
    QQmlApplicationEngine_Metacall_Callback qqmlapplicationengine_metacall_callback = nullptr;
    QQmlApplicationEngine_Event_Callback qqmlapplicationengine_event_callback = nullptr;
    QQmlApplicationEngine_EventFilter_Callback qqmlapplicationengine_eventfilter_callback = nullptr;
    QQmlApplicationEngine_TimerEvent_Callback qqmlapplicationengine_timerevent_callback = nullptr;
    QQmlApplicationEngine_ChildEvent_Callback qqmlapplicationengine_childevent_callback = nullptr;
    QQmlApplicationEngine_CustomEvent_Callback qqmlapplicationengine_customevent_callback = nullptr;
    QQmlApplicationEngine_ConnectNotify_Callback qqmlapplicationengine_connectnotify_callback = nullptr;
    QQmlApplicationEngine_DisconnectNotify_Callback qqmlapplicationengine_disconnectnotify_callback = nullptr;
    QQmlApplicationEngine_Sender_Callback qqmlapplicationengine_sender_callback = nullptr;
    QQmlApplicationEngine_SenderSignalIndex_Callback qqmlapplicationengine_sendersignalindex_callback = nullptr;
    QQmlApplicationEngine_Receivers_Callback qqmlapplicationengine_receivers_callback = nullptr;
    QQmlApplicationEngine_IsSignalConnected_Callback qqmlapplicationengine_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qqmlapplicationengine_metaobject_isbase = false;
    mutable bool qqmlapplicationengine_metacast_isbase = false;
    mutable bool qqmlapplicationengine_metacall_isbase = false;
    mutable bool qqmlapplicationengine_event_isbase = false;
    mutable bool qqmlapplicationengine_eventfilter_isbase = false;
    mutable bool qqmlapplicationengine_timerevent_isbase = false;
    mutable bool qqmlapplicationengine_childevent_isbase = false;
    mutable bool qqmlapplicationengine_customevent_isbase = false;
    mutable bool qqmlapplicationengine_connectnotify_isbase = false;
    mutable bool qqmlapplicationengine_disconnectnotify_isbase = false;
    mutable bool qqmlapplicationengine_sender_isbase = false;
    mutable bool qqmlapplicationengine_sendersignalindex_isbase = false;
    mutable bool qqmlapplicationengine_receivers_isbase = false;
    mutable bool qqmlapplicationengine_issignalconnected_isbase = false;

  public:
    VirtualQQmlApplicationEngine() : QQmlApplicationEngine() {};
    VirtualQQmlApplicationEngine(const QUrl& url) : QQmlApplicationEngine(url) {};
    VirtualQQmlApplicationEngine(QAnyStringView uri, QAnyStringView typeName) : QQmlApplicationEngine(uri, typeName) {};
    VirtualQQmlApplicationEngine(const QString& filePath) : QQmlApplicationEngine(filePath) {};
    VirtualQQmlApplicationEngine(QObject* parent) : QQmlApplicationEngine(parent) {};
    VirtualQQmlApplicationEngine(const QUrl& url, QObject* parent) : QQmlApplicationEngine(url, parent) {};
    VirtualQQmlApplicationEngine(QAnyStringView uri, QAnyStringView typeName, QObject* parent) : QQmlApplicationEngine(uri, typeName, parent) {};
    VirtualQQmlApplicationEngine(const QString& filePath, QObject* parent) : QQmlApplicationEngine(filePath, parent) {};

    // Callback setters
    inline void setQQmlApplicationEngine_MetaObject_Callback(QQmlApplicationEngine_MetaObject_Callback cb) { qqmlapplicationengine_metaobject_callback = cb; }
    inline void setQQmlApplicationEngine_Metacast_Callback(QQmlApplicationEngine_Metacast_Callback cb) { qqmlapplicationengine_metacast_callback = cb; }
    inline void setQQmlApplicationEngine_Metacall_Callback(QQmlApplicationEngine_Metacall_Callback cb) { qqmlapplicationengine_metacall_callback = cb; }
    inline void setQQmlApplicationEngine_Event_Callback(QQmlApplicationEngine_Event_Callback cb) { qqmlapplicationengine_event_callback = cb; }
    inline void setQQmlApplicationEngine_EventFilter_Callback(QQmlApplicationEngine_EventFilter_Callback cb) { qqmlapplicationengine_eventfilter_callback = cb; }
    inline void setQQmlApplicationEngine_TimerEvent_Callback(QQmlApplicationEngine_TimerEvent_Callback cb) { qqmlapplicationengine_timerevent_callback = cb; }
    inline void setQQmlApplicationEngine_ChildEvent_Callback(QQmlApplicationEngine_ChildEvent_Callback cb) { qqmlapplicationengine_childevent_callback = cb; }
    inline void setQQmlApplicationEngine_CustomEvent_Callback(QQmlApplicationEngine_CustomEvent_Callback cb) { qqmlapplicationengine_customevent_callback = cb; }
    inline void setQQmlApplicationEngine_ConnectNotify_Callback(QQmlApplicationEngine_ConnectNotify_Callback cb) { qqmlapplicationengine_connectnotify_callback = cb; }
    inline void setQQmlApplicationEngine_DisconnectNotify_Callback(QQmlApplicationEngine_DisconnectNotify_Callback cb) { qqmlapplicationengine_disconnectnotify_callback = cb; }
    inline void setQQmlApplicationEngine_Sender_Callback(QQmlApplicationEngine_Sender_Callback cb) { qqmlapplicationengine_sender_callback = cb; }
    inline void setQQmlApplicationEngine_SenderSignalIndex_Callback(QQmlApplicationEngine_SenderSignalIndex_Callback cb) { qqmlapplicationengine_sendersignalindex_callback = cb; }
    inline void setQQmlApplicationEngine_Receivers_Callback(QQmlApplicationEngine_Receivers_Callback cb) { qqmlapplicationengine_receivers_callback = cb; }
    inline void setQQmlApplicationEngine_IsSignalConnected_Callback(QQmlApplicationEngine_IsSignalConnected_Callback cb) { qqmlapplicationengine_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQmlApplicationEngine_MetaObject_IsBase(bool value) const { qqmlapplicationengine_metaobject_isbase = value; }
    inline void setQQmlApplicationEngine_Metacast_IsBase(bool value) const { qqmlapplicationengine_metacast_isbase = value; }
    inline void setQQmlApplicationEngine_Metacall_IsBase(bool value) const { qqmlapplicationengine_metacall_isbase = value; }
    inline void setQQmlApplicationEngine_Event_IsBase(bool value) const { qqmlapplicationengine_event_isbase = value; }
    inline void setQQmlApplicationEngine_EventFilter_IsBase(bool value) const { qqmlapplicationengine_eventfilter_isbase = value; }
    inline void setQQmlApplicationEngine_TimerEvent_IsBase(bool value) const { qqmlapplicationengine_timerevent_isbase = value; }
    inline void setQQmlApplicationEngine_ChildEvent_IsBase(bool value) const { qqmlapplicationengine_childevent_isbase = value; }
    inline void setQQmlApplicationEngine_CustomEvent_IsBase(bool value) const { qqmlapplicationengine_customevent_isbase = value; }
    inline void setQQmlApplicationEngine_ConnectNotify_IsBase(bool value) const { qqmlapplicationengine_connectnotify_isbase = value; }
    inline void setQQmlApplicationEngine_DisconnectNotify_IsBase(bool value) const { qqmlapplicationengine_disconnectnotify_isbase = value; }
    inline void setQQmlApplicationEngine_Sender_IsBase(bool value) const { qqmlapplicationengine_sender_isbase = value; }
    inline void setQQmlApplicationEngine_SenderSignalIndex_IsBase(bool value) const { qqmlapplicationengine_sendersignalindex_isbase = value; }
    inline void setQQmlApplicationEngine_Receivers_IsBase(bool value) const { qqmlapplicationengine_receivers_isbase = value; }
    inline void setQQmlApplicationEngine_IsSignalConnected_IsBase(bool value) const { qqmlapplicationengine_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlapplicationengine_metaobject_isbase) {
            qqmlapplicationengine_metaobject_isbase = false;
            return QQmlApplicationEngine::metaObject();
        }
        auto metaobject_cb = qqmlapplicationengine_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQmlApplicationEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlapplicationengine_metacast_isbase) {
            qqmlapplicationengine_metacast_isbase = false;
            return QQmlApplicationEngine::qt_metacast(param1);
        }
        auto metacast_cb = qqmlapplicationengine_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlApplicationEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlapplicationengine_metacall_isbase) {
            qqmlapplicationengine_metacall_isbase = false;
            return QQmlApplicationEngine::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qqmlapplicationengine_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlApplicationEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qqmlapplicationengine_event_isbase) {
            qqmlapplicationengine_event_isbase = false;
            return QQmlApplicationEngine::event(param1);
        }
        auto event_cb = qqmlapplicationengine_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlApplicationEngine::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlapplicationengine_eventfilter_isbase) {
            qqmlapplicationengine_eventfilter_isbase = false;
            return QQmlApplicationEngine::eventFilter(watched, event);
        }
        auto eventfilter_cb = qqmlapplicationengine_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlApplicationEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlapplicationengine_timerevent_isbase) {
            qqmlapplicationengine_timerevent_isbase = false;
            QQmlApplicationEngine::timerEvent(event);
            return;
        }
        auto timerevent_cb = qqmlapplicationengine_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQmlApplicationEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlapplicationengine_childevent_isbase) {
            qqmlapplicationengine_childevent_isbase = false;
            QQmlApplicationEngine::childEvent(event);
            return;
        }
        auto childevent_cb = qqmlapplicationengine_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQmlApplicationEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlapplicationengine_customevent_isbase) {
            qqmlapplicationengine_customevent_isbase = false;
            QQmlApplicationEngine::customEvent(event);
            return;
        }
        auto customevent_cb = qqmlapplicationengine_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQmlApplicationEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlapplicationengine_connectnotify_isbase) {
            qqmlapplicationengine_connectnotify_isbase = false;
            QQmlApplicationEngine::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qqmlapplicationengine_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQmlApplicationEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlapplicationengine_disconnectnotify_isbase) {
            qqmlapplicationengine_disconnectnotify_isbase = false;
            QQmlApplicationEngine::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qqmlapplicationengine_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQmlApplicationEngine::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qqmlapplicationengine_sender_isbase) {
            qqmlapplicationengine_sender_isbase = false;
            return QQmlApplicationEngine::sender();
        }
        auto sender_cb = qqmlapplicationengine_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQmlApplicationEngine::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qqmlapplicationengine_sendersignalindex_isbase) {
            qqmlapplicationengine_sendersignalindex_isbase = false;
            return QQmlApplicationEngine::senderSignalIndex();
        }
        auto sendersignalindex_cb = qqmlapplicationengine_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQmlApplicationEngine::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qqmlapplicationengine_receivers_isbase) {
            qqmlapplicationengine_receivers_isbase = false;
            return QQmlApplicationEngine::receivers(signal);
        }
        auto receivers_cb = qqmlapplicationengine_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQmlApplicationEngine::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qqmlapplicationengine_issignalconnected_isbase) {
            qqmlapplicationengine_issignalconnected_isbase = false;
            return QQmlApplicationEngine::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qqmlapplicationengine_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlApplicationEngine::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QQmlApplicationEngine_Event(QQmlApplicationEngine* self, QEvent* param1);
    friend bool QQmlApplicationEngine_SuperEvent(QQmlApplicationEngine* self, QEvent* param1);
    friend void QQmlApplicationEngine_TimerEvent(QQmlApplicationEngine* self, QTimerEvent* event);
    friend void QQmlApplicationEngine_SuperTimerEvent(QQmlApplicationEngine* self, QTimerEvent* event);
    friend void QQmlApplicationEngine_ChildEvent(QQmlApplicationEngine* self, QChildEvent* event);
    friend void QQmlApplicationEngine_SuperChildEvent(QQmlApplicationEngine* self, QChildEvent* event);
    friend void QQmlApplicationEngine_CustomEvent(QQmlApplicationEngine* self, QEvent* event);
    friend void QQmlApplicationEngine_SuperCustomEvent(QQmlApplicationEngine* self, QEvent* event);
    friend void QQmlApplicationEngine_ConnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal);
    friend void QQmlApplicationEngine_SuperConnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal);
    friend void QQmlApplicationEngine_DisconnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal);
    friend void QQmlApplicationEngine_SuperDisconnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal);
    friend QObject* QQmlApplicationEngine_Sender(const QQmlApplicationEngine* self);
    friend QObject* QQmlApplicationEngine_SuperSender(const QQmlApplicationEngine* self);
    friend int QQmlApplicationEngine_SenderSignalIndex(const QQmlApplicationEngine* self);
    friend int QQmlApplicationEngine_SuperSenderSignalIndex(const QQmlApplicationEngine* self);
    friend int QQmlApplicationEngine_Receivers(const QQmlApplicationEngine* self, const char* signal);
    friend int QQmlApplicationEngine_SuperReceivers(const QQmlApplicationEngine* self, const char* signal);
    friend bool QQmlApplicationEngine_IsSignalConnected(const QQmlApplicationEngine* self, const QMetaMethod* signal);
    friend bool QQmlApplicationEngine_SuperIsSignalConnected(const QQmlApplicationEngine* self, const QMetaMethod* signal);
};

#endif
