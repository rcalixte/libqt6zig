#pragma once
#ifndef QML_LIBQQML_HXX
#define QML_LIBQQML_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlTypeNotAvailable so that we can call protected methods
class VirtualQQmlTypeNotAvailable final : public QQmlTypeNotAvailable {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlTypeNotAvailable = true;

    // Virtual class public types (including callbacks)
    using QQmlTypeNotAvailable_MetaObject_Callback = QMetaObject* (*)();
    using QQmlTypeNotAvailable_Metacast_Callback = void* (*)(QQmlTypeNotAvailable*, const char*);
    using QQmlTypeNotAvailable_Metacall_Callback = int (*)(QQmlTypeNotAvailable*, int, int, void**);
    using QQmlTypeNotAvailable_Event_Callback = bool (*)(QQmlTypeNotAvailable*, QEvent*);
    using QQmlTypeNotAvailable_EventFilter_Callback = bool (*)(QQmlTypeNotAvailable*, QObject*, QEvent*);
    using QQmlTypeNotAvailable_TimerEvent_Callback = void (*)(QQmlTypeNotAvailable*, QTimerEvent*);
    using QQmlTypeNotAvailable_ChildEvent_Callback = void (*)(QQmlTypeNotAvailable*, QChildEvent*);
    using QQmlTypeNotAvailable_CustomEvent_Callback = void (*)(QQmlTypeNotAvailable*, QEvent*);
    using QQmlTypeNotAvailable_ConnectNotify_Callback = void (*)(QQmlTypeNotAvailable*, QMetaMethod*);
    using QQmlTypeNotAvailable_DisconnectNotify_Callback = void (*)(QQmlTypeNotAvailable*, QMetaMethod*);
    using QQmlTypeNotAvailable_Sender_Callback = QObject* (*)();
    using QQmlTypeNotAvailable_SenderSignalIndex_Callback = int (*)();
    using QQmlTypeNotAvailable_Receivers_Callback = int (*)(const QQmlTypeNotAvailable*, const char*);
    using QQmlTypeNotAvailable_IsSignalConnected_Callback = bool (*)(const QQmlTypeNotAvailable*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQmlTypeNotAvailable_MetaObject_Callback qqmltypenotavailable_metaobject_callback = nullptr;
    QQmlTypeNotAvailable_Metacast_Callback qqmltypenotavailable_metacast_callback = nullptr;
    QQmlTypeNotAvailable_Metacall_Callback qqmltypenotavailable_metacall_callback = nullptr;
    QQmlTypeNotAvailable_Event_Callback qqmltypenotavailable_event_callback = nullptr;
    QQmlTypeNotAvailable_EventFilter_Callback qqmltypenotavailable_eventfilter_callback = nullptr;
    QQmlTypeNotAvailable_TimerEvent_Callback qqmltypenotavailable_timerevent_callback = nullptr;
    QQmlTypeNotAvailable_ChildEvent_Callback qqmltypenotavailable_childevent_callback = nullptr;
    QQmlTypeNotAvailable_CustomEvent_Callback qqmltypenotavailable_customevent_callback = nullptr;
    QQmlTypeNotAvailable_ConnectNotify_Callback qqmltypenotavailable_connectnotify_callback = nullptr;
    QQmlTypeNotAvailable_DisconnectNotify_Callback qqmltypenotavailable_disconnectnotify_callback = nullptr;
    QQmlTypeNotAvailable_Sender_Callback qqmltypenotavailable_sender_callback = nullptr;
    QQmlTypeNotAvailable_SenderSignalIndex_Callback qqmltypenotavailable_sendersignalindex_callback = nullptr;
    QQmlTypeNotAvailable_Receivers_Callback qqmltypenotavailable_receivers_callback = nullptr;
    QQmlTypeNotAvailable_IsSignalConnected_Callback qqmltypenotavailable_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qqmltypenotavailable_metaobject_isbase = false;
    mutable bool qqmltypenotavailable_metacast_isbase = false;
    mutable bool qqmltypenotavailable_metacall_isbase = false;
    mutable bool qqmltypenotavailable_event_isbase = false;
    mutable bool qqmltypenotavailable_eventfilter_isbase = false;
    mutable bool qqmltypenotavailable_timerevent_isbase = false;
    mutable bool qqmltypenotavailable_childevent_isbase = false;
    mutable bool qqmltypenotavailable_customevent_isbase = false;
    mutable bool qqmltypenotavailable_connectnotify_isbase = false;
    mutable bool qqmltypenotavailable_disconnectnotify_isbase = false;
    mutable bool qqmltypenotavailable_sender_isbase = false;
    mutable bool qqmltypenotavailable_sendersignalindex_isbase = false;
    mutable bool qqmltypenotavailable_receivers_isbase = false;
    mutable bool qqmltypenotavailable_issignalconnected_isbase = false;

  public:
    VirtualQQmlTypeNotAvailable() : QQmlTypeNotAvailable() {};

    // Callback setters
    inline void setQQmlTypeNotAvailable_MetaObject_Callback(QQmlTypeNotAvailable_MetaObject_Callback cb) { qqmltypenotavailable_metaobject_callback = cb; }
    inline void setQQmlTypeNotAvailable_Metacast_Callback(QQmlTypeNotAvailable_Metacast_Callback cb) { qqmltypenotavailable_metacast_callback = cb; }
    inline void setQQmlTypeNotAvailable_Metacall_Callback(QQmlTypeNotAvailable_Metacall_Callback cb) { qqmltypenotavailable_metacall_callback = cb; }
    inline void setQQmlTypeNotAvailable_Event_Callback(QQmlTypeNotAvailable_Event_Callback cb) { qqmltypenotavailable_event_callback = cb; }
    inline void setQQmlTypeNotAvailable_EventFilter_Callback(QQmlTypeNotAvailable_EventFilter_Callback cb) { qqmltypenotavailable_eventfilter_callback = cb; }
    inline void setQQmlTypeNotAvailable_TimerEvent_Callback(QQmlTypeNotAvailable_TimerEvent_Callback cb) { qqmltypenotavailable_timerevent_callback = cb; }
    inline void setQQmlTypeNotAvailable_ChildEvent_Callback(QQmlTypeNotAvailable_ChildEvent_Callback cb) { qqmltypenotavailable_childevent_callback = cb; }
    inline void setQQmlTypeNotAvailable_CustomEvent_Callback(QQmlTypeNotAvailable_CustomEvent_Callback cb) { qqmltypenotavailable_customevent_callback = cb; }
    inline void setQQmlTypeNotAvailable_ConnectNotify_Callback(QQmlTypeNotAvailable_ConnectNotify_Callback cb) { qqmltypenotavailable_connectnotify_callback = cb; }
    inline void setQQmlTypeNotAvailable_DisconnectNotify_Callback(QQmlTypeNotAvailable_DisconnectNotify_Callback cb) { qqmltypenotavailable_disconnectnotify_callback = cb; }
    inline void setQQmlTypeNotAvailable_Sender_Callback(QQmlTypeNotAvailable_Sender_Callback cb) { qqmltypenotavailable_sender_callback = cb; }
    inline void setQQmlTypeNotAvailable_SenderSignalIndex_Callback(QQmlTypeNotAvailable_SenderSignalIndex_Callback cb) { qqmltypenotavailable_sendersignalindex_callback = cb; }
    inline void setQQmlTypeNotAvailable_Receivers_Callback(QQmlTypeNotAvailable_Receivers_Callback cb) { qqmltypenotavailable_receivers_callback = cb; }
    inline void setQQmlTypeNotAvailable_IsSignalConnected_Callback(QQmlTypeNotAvailable_IsSignalConnected_Callback cb) { qqmltypenotavailable_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQmlTypeNotAvailable_MetaObject_IsBase(bool value) const { qqmltypenotavailable_metaobject_isbase = value; }
    inline void setQQmlTypeNotAvailable_Metacast_IsBase(bool value) const { qqmltypenotavailable_metacast_isbase = value; }
    inline void setQQmlTypeNotAvailable_Metacall_IsBase(bool value) const { qqmltypenotavailable_metacall_isbase = value; }
    inline void setQQmlTypeNotAvailable_Event_IsBase(bool value) const { qqmltypenotavailable_event_isbase = value; }
    inline void setQQmlTypeNotAvailable_EventFilter_IsBase(bool value) const { qqmltypenotavailable_eventfilter_isbase = value; }
    inline void setQQmlTypeNotAvailable_TimerEvent_IsBase(bool value) const { qqmltypenotavailable_timerevent_isbase = value; }
    inline void setQQmlTypeNotAvailable_ChildEvent_IsBase(bool value) const { qqmltypenotavailable_childevent_isbase = value; }
    inline void setQQmlTypeNotAvailable_CustomEvent_IsBase(bool value) const { qqmltypenotavailable_customevent_isbase = value; }
    inline void setQQmlTypeNotAvailable_ConnectNotify_IsBase(bool value) const { qqmltypenotavailable_connectnotify_isbase = value; }
    inline void setQQmlTypeNotAvailable_DisconnectNotify_IsBase(bool value) const { qqmltypenotavailable_disconnectnotify_isbase = value; }
    inline void setQQmlTypeNotAvailable_Sender_IsBase(bool value) const { qqmltypenotavailable_sender_isbase = value; }
    inline void setQQmlTypeNotAvailable_SenderSignalIndex_IsBase(bool value) const { qqmltypenotavailable_sendersignalindex_isbase = value; }
    inline void setQQmlTypeNotAvailable_Receivers_IsBase(bool value) const { qqmltypenotavailable_receivers_isbase = value; }
    inline void setQQmlTypeNotAvailable_IsSignalConnected_IsBase(bool value) const { qqmltypenotavailable_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmltypenotavailable_metaobject_isbase) {
            qqmltypenotavailable_metaobject_isbase = false;
            return QQmlTypeNotAvailable::metaObject();
        }
        auto metaobject_cb = qqmltypenotavailable_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQmlTypeNotAvailable::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmltypenotavailable_metacast_isbase) {
            qqmltypenotavailable_metacast_isbase = false;
            return QQmlTypeNotAvailable::qt_metacast(param1);
        }
        auto metacast_cb = qqmltypenotavailable_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlTypeNotAvailable::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmltypenotavailable_metacall_isbase) {
            qqmltypenotavailable_metacall_isbase = false;
            return QQmlTypeNotAvailable::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qqmltypenotavailable_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlTypeNotAvailable::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmltypenotavailable_event_isbase) {
            qqmltypenotavailable_event_isbase = false;
            return QQmlTypeNotAvailable::event(event);
        }
        auto event_cb = qqmltypenotavailable_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlTypeNotAvailable::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmltypenotavailable_eventfilter_isbase) {
            qqmltypenotavailable_eventfilter_isbase = false;
            return QQmlTypeNotAvailable::eventFilter(watched, event);
        }
        auto eventfilter_cb = qqmltypenotavailable_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlTypeNotAvailable::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmltypenotavailable_timerevent_isbase) {
            qqmltypenotavailable_timerevent_isbase = false;
            QQmlTypeNotAvailable::timerEvent(event);
            return;
        }
        auto timerevent_cb = qqmltypenotavailable_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQmlTypeNotAvailable::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmltypenotavailable_childevent_isbase) {
            qqmltypenotavailable_childevent_isbase = false;
            QQmlTypeNotAvailable::childEvent(event);
            return;
        }
        auto childevent_cb = qqmltypenotavailable_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQmlTypeNotAvailable::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmltypenotavailable_customevent_isbase) {
            qqmltypenotavailable_customevent_isbase = false;
            QQmlTypeNotAvailable::customEvent(event);
            return;
        }
        auto customevent_cb = qqmltypenotavailable_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQmlTypeNotAvailable::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmltypenotavailable_connectnotify_isbase) {
            qqmltypenotavailable_connectnotify_isbase = false;
            QQmlTypeNotAvailable::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qqmltypenotavailable_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQmlTypeNotAvailable::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmltypenotavailable_disconnectnotify_isbase) {
            qqmltypenotavailable_disconnectnotify_isbase = false;
            QQmlTypeNotAvailable::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qqmltypenotavailable_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQmlTypeNotAvailable::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qqmltypenotavailable_sender_isbase) {
            qqmltypenotavailable_sender_isbase = false;
            return QQmlTypeNotAvailable::sender();
        }
        auto sender_cb = qqmltypenotavailable_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQmlTypeNotAvailable::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qqmltypenotavailable_sendersignalindex_isbase) {
            qqmltypenotavailable_sendersignalindex_isbase = false;
            return QQmlTypeNotAvailable::senderSignalIndex();
        }
        auto sendersignalindex_cb = qqmltypenotavailable_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQmlTypeNotAvailable::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qqmltypenotavailable_receivers_isbase) {
            qqmltypenotavailable_receivers_isbase = false;
            return QQmlTypeNotAvailable::receivers(signal);
        }
        auto receivers_cb = qqmltypenotavailable_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQmlTypeNotAvailable::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qqmltypenotavailable_issignalconnected_isbase) {
            qqmltypenotavailable_issignalconnected_isbase = false;
            return QQmlTypeNotAvailable::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qqmltypenotavailable_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlTypeNotAvailable::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQmlTypeNotAvailable_TimerEvent(QQmlTypeNotAvailable* self, QTimerEvent* event);
    friend void QQmlTypeNotAvailable_SuperTimerEvent(QQmlTypeNotAvailable* self, QTimerEvent* event);
    friend void QQmlTypeNotAvailable_ChildEvent(QQmlTypeNotAvailable* self, QChildEvent* event);
    friend void QQmlTypeNotAvailable_SuperChildEvent(QQmlTypeNotAvailable* self, QChildEvent* event);
    friend void QQmlTypeNotAvailable_CustomEvent(QQmlTypeNotAvailable* self, QEvent* event);
    friend void QQmlTypeNotAvailable_SuperCustomEvent(QQmlTypeNotAvailable* self, QEvent* event);
    friend void QQmlTypeNotAvailable_ConnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal);
    friend void QQmlTypeNotAvailable_SuperConnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal);
    friend void QQmlTypeNotAvailable_DisconnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal);
    friend void QQmlTypeNotAvailable_SuperDisconnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal);
    friend QObject* QQmlTypeNotAvailable_Sender(const QQmlTypeNotAvailable* self);
    friend QObject* QQmlTypeNotAvailable_SuperSender(const QQmlTypeNotAvailable* self);
    friend int QQmlTypeNotAvailable_SenderSignalIndex(const QQmlTypeNotAvailable* self);
    friend int QQmlTypeNotAvailable_SuperSenderSignalIndex(const QQmlTypeNotAvailable* self);
    friend int QQmlTypeNotAvailable_Receivers(const QQmlTypeNotAvailable* self, const char* signal);
    friend int QQmlTypeNotAvailable_SuperReceivers(const QQmlTypeNotAvailable* self, const char* signal);
    friend bool QQmlTypeNotAvailable_IsSignalConnected(const QQmlTypeNotAvailable* self, const QMetaMethod* signal);
    friend bool QQmlTypeNotAvailable_SuperIsSignalConnected(const QQmlTypeNotAvailable* self, const QMetaMethod* signal);
};

#endif
