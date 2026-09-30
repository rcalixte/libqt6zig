#pragma once
#ifndef WEBENGINE_LIBQQUICKWEBENGINEPROFILE_HXX
#define WEBENGINE_LIBQQUICKWEBENGINEPROFILE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickWebEngineProfile so that we can call protected methods
class VirtualQQuickWebEngineProfile final : public QQuickWebEngineProfile {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickWebEngineProfile = true;

    // Virtual class public types (including callbacks)
    using QQuickWebEngineProfile_MetaObject_Callback = QMetaObject* (*)();
    using QQuickWebEngineProfile_Metacast_Callback = void* (*)(QQuickWebEngineProfile*, const char*);
    using QQuickWebEngineProfile_Metacall_Callback = int (*)(QQuickWebEngineProfile*, int, int, void**);
    using QQuickWebEngineProfile_Event_Callback = bool (*)(QQuickWebEngineProfile*, QEvent*);
    using QQuickWebEngineProfile_EventFilter_Callback = bool (*)(QQuickWebEngineProfile*, QObject*, QEvent*);
    using QQuickWebEngineProfile_TimerEvent_Callback = void (*)(QQuickWebEngineProfile*, QTimerEvent*);
    using QQuickWebEngineProfile_ChildEvent_Callback = void (*)(QQuickWebEngineProfile*, QChildEvent*);
    using QQuickWebEngineProfile_CustomEvent_Callback = void (*)(QQuickWebEngineProfile*, QEvent*);
    using QQuickWebEngineProfile_ConnectNotify_Callback = void (*)(QQuickWebEngineProfile*, QMetaMethod*);
    using QQuickWebEngineProfile_DisconnectNotify_Callback = void (*)(QQuickWebEngineProfile*, QMetaMethod*);
    using QQuickWebEngineProfile_Sender_Callback = QObject* (*)();
    using QQuickWebEngineProfile_SenderSignalIndex_Callback = int (*)();
    using QQuickWebEngineProfile_Receivers_Callback = int (*)(const QQuickWebEngineProfile*, const char*);
    using QQuickWebEngineProfile_IsSignalConnected_Callback = bool (*)(const QQuickWebEngineProfile*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQuickWebEngineProfile_MetaObject_Callback qquickwebengineprofile_metaobject_callback = nullptr;
    QQuickWebEngineProfile_Metacast_Callback qquickwebengineprofile_metacast_callback = nullptr;
    QQuickWebEngineProfile_Metacall_Callback qquickwebengineprofile_metacall_callback = nullptr;
    QQuickWebEngineProfile_Event_Callback qquickwebengineprofile_event_callback = nullptr;
    QQuickWebEngineProfile_EventFilter_Callback qquickwebengineprofile_eventfilter_callback = nullptr;
    QQuickWebEngineProfile_TimerEvent_Callback qquickwebengineprofile_timerevent_callback = nullptr;
    QQuickWebEngineProfile_ChildEvent_Callback qquickwebengineprofile_childevent_callback = nullptr;
    QQuickWebEngineProfile_CustomEvent_Callback qquickwebengineprofile_customevent_callback = nullptr;
    QQuickWebEngineProfile_ConnectNotify_Callback qquickwebengineprofile_connectnotify_callback = nullptr;
    QQuickWebEngineProfile_DisconnectNotify_Callback qquickwebengineprofile_disconnectnotify_callback = nullptr;
    QQuickWebEngineProfile_Sender_Callback qquickwebengineprofile_sender_callback = nullptr;
    QQuickWebEngineProfile_SenderSignalIndex_Callback qquickwebengineprofile_sendersignalindex_callback = nullptr;
    QQuickWebEngineProfile_Receivers_Callback qquickwebengineprofile_receivers_callback = nullptr;
    QQuickWebEngineProfile_IsSignalConnected_Callback qquickwebengineprofile_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquickwebengineprofile_metaobject_isbase = false;
    mutable bool qquickwebengineprofile_metacast_isbase = false;
    mutable bool qquickwebengineprofile_metacall_isbase = false;
    mutable bool qquickwebengineprofile_event_isbase = false;
    mutable bool qquickwebengineprofile_eventfilter_isbase = false;
    mutable bool qquickwebengineprofile_timerevent_isbase = false;
    mutable bool qquickwebengineprofile_childevent_isbase = false;
    mutable bool qquickwebengineprofile_customevent_isbase = false;
    mutable bool qquickwebengineprofile_connectnotify_isbase = false;
    mutable bool qquickwebengineprofile_disconnectnotify_isbase = false;
    mutable bool qquickwebengineprofile_sender_isbase = false;
    mutable bool qquickwebengineprofile_sendersignalindex_isbase = false;
    mutable bool qquickwebengineprofile_receivers_isbase = false;
    mutable bool qquickwebengineprofile_issignalconnected_isbase = false;

  public:
    VirtualQQuickWebEngineProfile() : QQuickWebEngineProfile() {};
    VirtualQQuickWebEngineProfile(QObject* parent) : QQuickWebEngineProfile(parent) {};

    // Callback setters
    inline void setQQuickWebEngineProfile_MetaObject_Callback(QQuickWebEngineProfile_MetaObject_Callback cb) { qquickwebengineprofile_metaobject_callback = cb; }
    inline void setQQuickWebEngineProfile_Metacast_Callback(QQuickWebEngineProfile_Metacast_Callback cb) { qquickwebengineprofile_metacast_callback = cb; }
    inline void setQQuickWebEngineProfile_Metacall_Callback(QQuickWebEngineProfile_Metacall_Callback cb) { qquickwebengineprofile_metacall_callback = cb; }
    inline void setQQuickWebEngineProfile_Event_Callback(QQuickWebEngineProfile_Event_Callback cb) { qquickwebengineprofile_event_callback = cb; }
    inline void setQQuickWebEngineProfile_EventFilter_Callback(QQuickWebEngineProfile_EventFilter_Callback cb) { qquickwebengineprofile_eventfilter_callback = cb; }
    inline void setQQuickWebEngineProfile_TimerEvent_Callback(QQuickWebEngineProfile_TimerEvent_Callback cb) { qquickwebengineprofile_timerevent_callback = cb; }
    inline void setQQuickWebEngineProfile_ChildEvent_Callback(QQuickWebEngineProfile_ChildEvent_Callback cb) { qquickwebengineprofile_childevent_callback = cb; }
    inline void setQQuickWebEngineProfile_CustomEvent_Callback(QQuickWebEngineProfile_CustomEvent_Callback cb) { qquickwebengineprofile_customevent_callback = cb; }
    inline void setQQuickWebEngineProfile_ConnectNotify_Callback(QQuickWebEngineProfile_ConnectNotify_Callback cb) { qquickwebengineprofile_connectnotify_callback = cb; }
    inline void setQQuickWebEngineProfile_DisconnectNotify_Callback(QQuickWebEngineProfile_DisconnectNotify_Callback cb) { qquickwebengineprofile_disconnectnotify_callback = cb; }
    inline void setQQuickWebEngineProfile_Sender_Callback(QQuickWebEngineProfile_Sender_Callback cb) { qquickwebengineprofile_sender_callback = cb; }
    inline void setQQuickWebEngineProfile_SenderSignalIndex_Callback(QQuickWebEngineProfile_SenderSignalIndex_Callback cb) { qquickwebengineprofile_sendersignalindex_callback = cb; }
    inline void setQQuickWebEngineProfile_Receivers_Callback(QQuickWebEngineProfile_Receivers_Callback cb) { qquickwebengineprofile_receivers_callback = cb; }
    inline void setQQuickWebEngineProfile_IsSignalConnected_Callback(QQuickWebEngineProfile_IsSignalConnected_Callback cb) { qquickwebengineprofile_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickWebEngineProfile_MetaObject_IsBase(bool value) const { qquickwebengineprofile_metaobject_isbase = value; }
    inline void setQQuickWebEngineProfile_Metacast_IsBase(bool value) const { qquickwebengineprofile_metacast_isbase = value; }
    inline void setQQuickWebEngineProfile_Metacall_IsBase(bool value) const { qquickwebengineprofile_metacall_isbase = value; }
    inline void setQQuickWebEngineProfile_Event_IsBase(bool value) const { qquickwebengineprofile_event_isbase = value; }
    inline void setQQuickWebEngineProfile_EventFilter_IsBase(bool value) const { qquickwebengineprofile_eventfilter_isbase = value; }
    inline void setQQuickWebEngineProfile_TimerEvent_IsBase(bool value) const { qquickwebengineprofile_timerevent_isbase = value; }
    inline void setQQuickWebEngineProfile_ChildEvent_IsBase(bool value) const { qquickwebengineprofile_childevent_isbase = value; }
    inline void setQQuickWebEngineProfile_CustomEvent_IsBase(bool value) const { qquickwebengineprofile_customevent_isbase = value; }
    inline void setQQuickWebEngineProfile_ConnectNotify_IsBase(bool value) const { qquickwebengineprofile_connectnotify_isbase = value; }
    inline void setQQuickWebEngineProfile_DisconnectNotify_IsBase(bool value) const { qquickwebengineprofile_disconnectnotify_isbase = value; }
    inline void setQQuickWebEngineProfile_Sender_IsBase(bool value) const { qquickwebengineprofile_sender_isbase = value; }
    inline void setQQuickWebEngineProfile_SenderSignalIndex_IsBase(bool value) const { qquickwebengineprofile_sendersignalindex_isbase = value; }
    inline void setQQuickWebEngineProfile_Receivers_IsBase(bool value) const { qquickwebengineprofile_receivers_isbase = value; }
    inline void setQQuickWebEngineProfile_IsSignalConnected_IsBase(bool value) const { qquickwebengineprofile_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickwebengineprofile_metaobject_isbase) {
            qquickwebengineprofile_metaobject_isbase = false;
            return QQuickWebEngineProfile::metaObject();
        }
        auto metaobject_cb = qquickwebengineprofile_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickWebEngineProfile::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickwebengineprofile_metacast_isbase) {
            qquickwebengineprofile_metacast_isbase = false;
            return QQuickWebEngineProfile::qt_metacast(param1);
        }
        auto metacast_cb = qquickwebengineprofile_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickWebEngineProfile::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickwebengineprofile_metacall_isbase) {
            qquickwebengineprofile_metacall_isbase = false;
            return QQuickWebEngineProfile::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquickwebengineprofile_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickWebEngineProfile::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquickwebengineprofile_event_isbase) {
            qquickwebengineprofile_event_isbase = false;
            return QQuickWebEngineProfile::event(event);
        }
        auto event_cb = qquickwebengineprofile_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickWebEngineProfile::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickwebengineprofile_eventfilter_isbase) {
            qquickwebengineprofile_eventfilter_isbase = false;
            return QQuickWebEngineProfile::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquickwebengineprofile_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickWebEngineProfile::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickwebengineprofile_timerevent_isbase) {
            qquickwebengineprofile_timerevent_isbase = false;
            QQuickWebEngineProfile::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquickwebengineprofile_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickWebEngineProfile::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickwebengineprofile_childevent_isbase) {
            qquickwebengineprofile_childevent_isbase = false;
            QQuickWebEngineProfile::childEvent(event);
            return;
        }
        auto childevent_cb = qquickwebengineprofile_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickWebEngineProfile::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickwebengineprofile_customevent_isbase) {
            qquickwebengineprofile_customevent_isbase = false;
            QQuickWebEngineProfile::customEvent(event);
            return;
        }
        auto customevent_cb = qquickwebengineprofile_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickWebEngineProfile::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickwebengineprofile_connectnotify_isbase) {
            qquickwebengineprofile_connectnotify_isbase = false;
            QQuickWebEngineProfile::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquickwebengineprofile_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickWebEngineProfile::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickwebengineprofile_disconnectnotify_isbase) {
            qquickwebengineprofile_disconnectnotify_isbase = false;
            QQuickWebEngineProfile::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquickwebengineprofile_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickWebEngineProfile::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquickwebengineprofile_sender_isbase) {
            qquickwebengineprofile_sender_isbase = false;
            return QQuickWebEngineProfile::sender();
        }
        auto sender_cb = qquickwebengineprofile_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickWebEngineProfile::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquickwebengineprofile_sendersignalindex_isbase) {
            qquickwebengineprofile_sendersignalindex_isbase = false;
            return QQuickWebEngineProfile::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquickwebengineprofile_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickWebEngineProfile::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquickwebengineprofile_receivers_isbase) {
            qquickwebengineprofile_receivers_isbase = false;
            return QQuickWebEngineProfile::receivers(signal);
        }
        auto receivers_cb = qquickwebengineprofile_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickWebEngineProfile::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquickwebengineprofile_issignalconnected_isbase) {
            qquickwebengineprofile_issignalconnected_isbase = false;
            return QQuickWebEngineProfile::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquickwebengineprofile_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickWebEngineProfile::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQuickWebEngineProfile_TimerEvent(QQuickWebEngineProfile* self, QTimerEvent* event);
    friend void QQuickWebEngineProfile_SuperTimerEvent(QQuickWebEngineProfile* self, QTimerEvent* event);
    friend void QQuickWebEngineProfile_ChildEvent(QQuickWebEngineProfile* self, QChildEvent* event);
    friend void QQuickWebEngineProfile_SuperChildEvent(QQuickWebEngineProfile* self, QChildEvent* event);
    friend void QQuickWebEngineProfile_CustomEvent(QQuickWebEngineProfile* self, QEvent* event);
    friend void QQuickWebEngineProfile_SuperCustomEvent(QQuickWebEngineProfile* self, QEvent* event);
    friend void QQuickWebEngineProfile_ConnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal);
    friend void QQuickWebEngineProfile_SuperConnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal);
    friend void QQuickWebEngineProfile_DisconnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal);
    friend void QQuickWebEngineProfile_SuperDisconnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal);
    friend QObject* QQuickWebEngineProfile_Sender(const QQuickWebEngineProfile* self);
    friend QObject* QQuickWebEngineProfile_SuperSender(const QQuickWebEngineProfile* self);
    friend int QQuickWebEngineProfile_SenderSignalIndex(const QQuickWebEngineProfile* self);
    friend int QQuickWebEngineProfile_SuperSenderSignalIndex(const QQuickWebEngineProfile* self);
    friend int QQuickWebEngineProfile_Receivers(const QQuickWebEngineProfile* self, const char* signal);
    friend int QQuickWebEngineProfile_SuperReceivers(const QQuickWebEngineProfile* self, const char* signal);
    friend bool QQuickWebEngineProfile_IsSignalConnected(const QQuickWebEngineProfile* self, const QMetaMethod* signal);
    friend bool QQuickWebEngineProfile_SuperIsSignalConnected(const QQuickWebEngineProfile* self, const QMetaMethod* signal);
};

#endif
