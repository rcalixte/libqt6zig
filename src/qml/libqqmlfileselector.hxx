#pragma once
#ifndef QML_LIBQQMLFILESELECTOR_HXX
#define QML_LIBQQMLFILESELECTOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlFileSelector so that we can call protected methods
class VirtualQQmlFileSelector final : public QQmlFileSelector {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlFileSelector = true;

    // Virtual class public types (including callbacks)
    using QQmlFileSelector_MetaObject_Callback = QMetaObject* (*)();
    using QQmlFileSelector_Metacast_Callback = void* (*)(QQmlFileSelector*, const char*);
    using QQmlFileSelector_Metacall_Callback = int (*)(QQmlFileSelector*, int, int, void**);
    using QQmlFileSelector_Event_Callback = bool (*)(QQmlFileSelector*, QEvent*);
    using QQmlFileSelector_EventFilter_Callback = bool (*)(QQmlFileSelector*, QObject*, QEvent*);
    using QQmlFileSelector_TimerEvent_Callback = void (*)(QQmlFileSelector*, QTimerEvent*);
    using QQmlFileSelector_ChildEvent_Callback = void (*)(QQmlFileSelector*, QChildEvent*);
    using QQmlFileSelector_CustomEvent_Callback = void (*)(QQmlFileSelector*, QEvent*);
    using QQmlFileSelector_ConnectNotify_Callback = void (*)(QQmlFileSelector*, QMetaMethod*);
    using QQmlFileSelector_DisconnectNotify_Callback = void (*)(QQmlFileSelector*, QMetaMethod*);
    using QQmlFileSelector_Sender_Callback = QObject* (*)();
    using QQmlFileSelector_SenderSignalIndex_Callback = int (*)();
    using QQmlFileSelector_Receivers_Callback = int (*)(const QQmlFileSelector*, const char*);
    using QQmlFileSelector_IsSignalConnected_Callback = bool (*)(const QQmlFileSelector*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQmlFileSelector_MetaObject_Callback qqmlfileselector_metaobject_callback = nullptr;
    QQmlFileSelector_Metacast_Callback qqmlfileselector_metacast_callback = nullptr;
    QQmlFileSelector_Metacall_Callback qqmlfileselector_metacall_callback = nullptr;
    QQmlFileSelector_Event_Callback qqmlfileselector_event_callback = nullptr;
    QQmlFileSelector_EventFilter_Callback qqmlfileselector_eventfilter_callback = nullptr;
    QQmlFileSelector_TimerEvent_Callback qqmlfileselector_timerevent_callback = nullptr;
    QQmlFileSelector_ChildEvent_Callback qqmlfileselector_childevent_callback = nullptr;
    QQmlFileSelector_CustomEvent_Callback qqmlfileselector_customevent_callback = nullptr;
    QQmlFileSelector_ConnectNotify_Callback qqmlfileselector_connectnotify_callback = nullptr;
    QQmlFileSelector_DisconnectNotify_Callback qqmlfileselector_disconnectnotify_callback = nullptr;
    QQmlFileSelector_Sender_Callback qqmlfileselector_sender_callback = nullptr;
    QQmlFileSelector_SenderSignalIndex_Callback qqmlfileselector_sendersignalindex_callback = nullptr;
    QQmlFileSelector_Receivers_Callback qqmlfileselector_receivers_callback = nullptr;
    QQmlFileSelector_IsSignalConnected_Callback qqmlfileselector_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qqmlfileselector_metaobject_isbase = false;
    mutable bool qqmlfileselector_metacast_isbase = false;
    mutable bool qqmlfileselector_metacall_isbase = false;
    mutable bool qqmlfileselector_event_isbase = false;
    mutable bool qqmlfileselector_eventfilter_isbase = false;
    mutable bool qqmlfileselector_timerevent_isbase = false;
    mutable bool qqmlfileselector_childevent_isbase = false;
    mutable bool qqmlfileselector_customevent_isbase = false;
    mutable bool qqmlfileselector_connectnotify_isbase = false;
    mutable bool qqmlfileselector_disconnectnotify_isbase = false;
    mutable bool qqmlfileselector_sender_isbase = false;
    mutable bool qqmlfileselector_sendersignalindex_isbase = false;
    mutable bool qqmlfileselector_receivers_isbase = false;
    mutable bool qqmlfileselector_issignalconnected_isbase = false;

  public:
    VirtualQQmlFileSelector(QQmlEngine* engine) : QQmlFileSelector(engine) {};
    VirtualQQmlFileSelector(QQmlEngine* engine, QObject* parent) : QQmlFileSelector(engine, parent) {};

    // Callback setters
    inline void setQQmlFileSelector_MetaObject_Callback(QQmlFileSelector_MetaObject_Callback cb) { qqmlfileselector_metaobject_callback = cb; }
    inline void setQQmlFileSelector_Metacast_Callback(QQmlFileSelector_Metacast_Callback cb) { qqmlfileselector_metacast_callback = cb; }
    inline void setQQmlFileSelector_Metacall_Callback(QQmlFileSelector_Metacall_Callback cb) { qqmlfileselector_metacall_callback = cb; }
    inline void setQQmlFileSelector_Event_Callback(QQmlFileSelector_Event_Callback cb) { qqmlfileselector_event_callback = cb; }
    inline void setQQmlFileSelector_EventFilter_Callback(QQmlFileSelector_EventFilter_Callback cb) { qqmlfileselector_eventfilter_callback = cb; }
    inline void setQQmlFileSelector_TimerEvent_Callback(QQmlFileSelector_TimerEvent_Callback cb) { qqmlfileselector_timerevent_callback = cb; }
    inline void setQQmlFileSelector_ChildEvent_Callback(QQmlFileSelector_ChildEvent_Callback cb) { qqmlfileselector_childevent_callback = cb; }
    inline void setQQmlFileSelector_CustomEvent_Callback(QQmlFileSelector_CustomEvent_Callback cb) { qqmlfileselector_customevent_callback = cb; }
    inline void setQQmlFileSelector_ConnectNotify_Callback(QQmlFileSelector_ConnectNotify_Callback cb) { qqmlfileselector_connectnotify_callback = cb; }
    inline void setQQmlFileSelector_DisconnectNotify_Callback(QQmlFileSelector_DisconnectNotify_Callback cb) { qqmlfileselector_disconnectnotify_callback = cb; }
    inline void setQQmlFileSelector_Sender_Callback(QQmlFileSelector_Sender_Callback cb) { qqmlfileselector_sender_callback = cb; }
    inline void setQQmlFileSelector_SenderSignalIndex_Callback(QQmlFileSelector_SenderSignalIndex_Callback cb) { qqmlfileselector_sendersignalindex_callback = cb; }
    inline void setQQmlFileSelector_Receivers_Callback(QQmlFileSelector_Receivers_Callback cb) { qqmlfileselector_receivers_callback = cb; }
    inline void setQQmlFileSelector_IsSignalConnected_Callback(QQmlFileSelector_IsSignalConnected_Callback cb) { qqmlfileselector_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQmlFileSelector_MetaObject_IsBase(bool value) const { qqmlfileselector_metaobject_isbase = value; }
    inline void setQQmlFileSelector_Metacast_IsBase(bool value) const { qqmlfileselector_metacast_isbase = value; }
    inline void setQQmlFileSelector_Metacall_IsBase(bool value) const { qqmlfileselector_metacall_isbase = value; }
    inline void setQQmlFileSelector_Event_IsBase(bool value) const { qqmlfileselector_event_isbase = value; }
    inline void setQQmlFileSelector_EventFilter_IsBase(bool value) const { qqmlfileselector_eventfilter_isbase = value; }
    inline void setQQmlFileSelector_TimerEvent_IsBase(bool value) const { qqmlfileselector_timerevent_isbase = value; }
    inline void setQQmlFileSelector_ChildEvent_IsBase(bool value) const { qqmlfileselector_childevent_isbase = value; }
    inline void setQQmlFileSelector_CustomEvent_IsBase(bool value) const { qqmlfileselector_customevent_isbase = value; }
    inline void setQQmlFileSelector_ConnectNotify_IsBase(bool value) const { qqmlfileselector_connectnotify_isbase = value; }
    inline void setQQmlFileSelector_DisconnectNotify_IsBase(bool value) const { qqmlfileselector_disconnectnotify_isbase = value; }
    inline void setQQmlFileSelector_Sender_IsBase(bool value) const { qqmlfileselector_sender_isbase = value; }
    inline void setQQmlFileSelector_SenderSignalIndex_IsBase(bool value) const { qqmlfileselector_sendersignalindex_isbase = value; }
    inline void setQQmlFileSelector_Receivers_IsBase(bool value) const { qqmlfileselector_receivers_isbase = value; }
    inline void setQQmlFileSelector_IsSignalConnected_IsBase(bool value) const { qqmlfileselector_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlfileselector_metaobject_isbase) {
            qqmlfileselector_metaobject_isbase = false;
            return QQmlFileSelector::metaObject();
        }
        auto metaobject_cb = qqmlfileselector_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQmlFileSelector::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlfileselector_metacast_isbase) {
            qqmlfileselector_metacast_isbase = false;
            return QQmlFileSelector::qt_metacast(param1);
        }
        auto metacast_cb = qqmlfileselector_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlFileSelector::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlfileselector_metacall_isbase) {
            qqmlfileselector_metacall_isbase = false;
            return QQmlFileSelector::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qqmlfileselector_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlFileSelector::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlfileselector_event_isbase) {
            qqmlfileselector_event_isbase = false;
            return QQmlFileSelector::event(event);
        }
        auto event_cb = qqmlfileselector_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlFileSelector::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlfileselector_eventfilter_isbase) {
            qqmlfileselector_eventfilter_isbase = false;
            return QQmlFileSelector::eventFilter(watched, event);
        }
        auto eventfilter_cb = qqmlfileselector_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlFileSelector::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlfileselector_timerevent_isbase) {
            qqmlfileselector_timerevent_isbase = false;
            QQmlFileSelector::timerEvent(event);
            return;
        }
        auto timerevent_cb = qqmlfileselector_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQmlFileSelector::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlfileselector_childevent_isbase) {
            qqmlfileselector_childevent_isbase = false;
            QQmlFileSelector::childEvent(event);
            return;
        }
        auto childevent_cb = qqmlfileselector_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQmlFileSelector::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlfileselector_customevent_isbase) {
            qqmlfileselector_customevent_isbase = false;
            QQmlFileSelector::customEvent(event);
            return;
        }
        auto customevent_cb = qqmlfileselector_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQmlFileSelector::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlfileselector_connectnotify_isbase) {
            qqmlfileselector_connectnotify_isbase = false;
            QQmlFileSelector::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qqmlfileselector_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQmlFileSelector::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlfileselector_disconnectnotify_isbase) {
            qqmlfileselector_disconnectnotify_isbase = false;
            QQmlFileSelector::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qqmlfileselector_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQmlFileSelector::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qqmlfileselector_sender_isbase) {
            qqmlfileselector_sender_isbase = false;
            return QQmlFileSelector::sender();
        }
        auto sender_cb = qqmlfileselector_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQmlFileSelector::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qqmlfileselector_sendersignalindex_isbase) {
            qqmlfileselector_sendersignalindex_isbase = false;
            return QQmlFileSelector::senderSignalIndex();
        }
        auto sendersignalindex_cb = qqmlfileselector_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQmlFileSelector::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qqmlfileselector_receivers_isbase) {
            qqmlfileselector_receivers_isbase = false;
            return QQmlFileSelector::receivers(signal);
        }
        auto receivers_cb = qqmlfileselector_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQmlFileSelector::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qqmlfileselector_issignalconnected_isbase) {
            qqmlfileselector_issignalconnected_isbase = false;
            return QQmlFileSelector::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qqmlfileselector_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlFileSelector::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQmlFileSelector_TimerEvent(QQmlFileSelector* self, QTimerEvent* event);
    friend void QQmlFileSelector_SuperTimerEvent(QQmlFileSelector* self, QTimerEvent* event);
    friend void QQmlFileSelector_ChildEvent(QQmlFileSelector* self, QChildEvent* event);
    friend void QQmlFileSelector_SuperChildEvent(QQmlFileSelector* self, QChildEvent* event);
    friend void QQmlFileSelector_CustomEvent(QQmlFileSelector* self, QEvent* event);
    friend void QQmlFileSelector_SuperCustomEvent(QQmlFileSelector* self, QEvent* event);
    friend void QQmlFileSelector_ConnectNotify(QQmlFileSelector* self, const QMetaMethod* signal);
    friend void QQmlFileSelector_SuperConnectNotify(QQmlFileSelector* self, const QMetaMethod* signal);
    friend void QQmlFileSelector_DisconnectNotify(QQmlFileSelector* self, const QMetaMethod* signal);
    friend void QQmlFileSelector_SuperDisconnectNotify(QQmlFileSelector* self, const QMetaMethod* signal);
    friend QObject* QQmlFileSelector_Sender(const QQmlFileSelector* self);
    friend QObject* QQmlFileSelector_SuperSender(const QQmlFileSelector* self);
    friend int QQmlFileSelector_SenderSignalIndex(const QQmlFileSelector* self);
    friend int QQmlFileSelector_SuperSenderSignalIndex(const QQmlFileSelector* self);
    friend int QQmlFileSelector_Receivers(const QQmlFileSelector* self, const char* signal);
    friend int QQmlFileSelector_SuperReceivers(const QQmlFileSelector* self, const char* signal);
    friend bool QQmlFileSelector_IsSignalConnected(const QQmlFileSelector* self, const QMetaMethod* signal);
    friend bool QQmlFileSelector_SuperIsSignalConnected(const QQmlFileSelector* self, const QMetaMethod* signal);
};

#endif
