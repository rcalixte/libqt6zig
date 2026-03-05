#pragma once
#ifndef SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEPROFILE_H
#define SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEPROFILE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebEngineProfile so that we can call protected methods
class VirtualQWebEngineProfile final : public QWebEngineProfile {

  public:
    // Virtual class boolean flag
    bool isVirtualQWebEngineProfile = true;

    // Virtual class public types (including callbacks)
    using QWebEngineProfile_MetaObject_Callback = QMetaObject* (*)();
    using QWebEngineProfile_Metacast_Callback = void* (*)(QWebEngineProfile*, const char*);
    using QWebEngineProfile_Metacall_Callback = int (*)(QWebEngineProfile*, int, int, void**);
    using QWebEngineProfile_Event_Callback = bool (*)(QWebEngineProfile*, QEvent*);
    using QWebEngineProfile_EventFilter_Callback = bool (*)(QWebEngineProfile*, QObject*, QEvent*);
    using QWebEngineProfile_TimerEvent_Callback = void (*)(QWebEngineProfile*, QTimerEvent*);
    using QWebEngineProfile_ChildEvent_Callback = void (*)(QWebEngineProfile*, QChildEvent*);
    using QWebEngineProfile_CustomEvent_Callback = void (*)(QWebEngineProfile*, QEvent*);
    using QWebEngineProfile_ConnectNotify_Callback = void (*)(QWebEngineProfile*, QMetaMethod*);
    using QWebEngineProfile_DisconnectNotify_Callback = void (*)(QWebEngineProfile*, QMetaMethod*);
    using QWebEngineProfile_Sender_Callback = QObject* (*)();
    using QWebEngineProfile_SenderSignalIndex_Callback = int (*)();
    using QWebEngineProfile_Receivers_Callback = int (*)(const QWebEngineProfile*, const char*);
    using QWebEngineProfile_IsSignalConnected_Callback = bool (*)(const QWebEngineProfile*, QMetaMethod*);

  protected:
    // Instance callback storage
    QWebEngineProfile_MetaObject_Callback qwebengineprofile_metaobject_callback = nullptr;
    QWebEngineProfile_Metacast_Callback qwebengineprofile_metacast_callback = nullptr;
    QWebEngineProfile_Metacall_Callback qwebengineprofile_metacall_callback = nullptr;
    QWebEngineProfile_Event_Callback qwebengineprofile_event_callback = nullptr;
    QWebEngineProfile_EventFilter_Callback qwebengineprofile_eventfilter_callback = nullptr;
    QWebEngineProfile_TimerEvent_Callback qwebengineprofile_timerevent_callback = nullptr;
    QWebEngineProfile_ChildEvent_Callback qwebengineprofile_childevent_callback = nullptr;
    QWebEngineProfile_CustomEvent_Callback qwebengineprofile_customevent_callback = nullptr;
    QWebEngineProfile_ConnectNotify_Callback qwebengineprofile_connectnotify_callback = nullptr;
    QWebEngineProfile_DisconnectNotify_Callback qwebengineprofile_disconnectnotify_callback = nullptr;
    QWebEngineProfile_Sender_Callback qwebengineprofile_sender_callback = nullptr;
    QWebEngineProfile_SenderSignalIndex_Callback qwebengineprofile_sendersignalindex_callback = nullptr;
    QWebEngineProfile_Receivers_Callback qwebengineprofile_receivers_callback = nullptr;
    QWebEngineProfile_IsSignalConnected_Callback qwebengineprofile_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwebengineprofile_metaobject_isbase = false;
    mutable bool qwebengineprofile_metacast_isbase = false;
    mutable bool qwebengineprofile_metacall_isbase = false;
    mutable bool qwebengineprofile_event_isbase = false;
    mutable bool qwebengineprofile_eventfilter_isbase = false;
    mutable bool qwebengineprofile_timerevent_isbase = false;
    mutable bool qwebengineprofile_childevent_isbase = false;
    mutable bool qwebengineprofile_customevent_isbase = false;
    mutable bool qwebengineprofile_connectnotify_isbase = false;
    mutable bool qwebengineprofile_disconnectnotify_isbase = false;
    mutable bool qwebengineprofile_sender_isbase = false;
    mutable bool qwebengineprofile_sendersignalindex_isbase = false;
    mutable bool qwebengineprofile_receivers_isbase = false;
    mutable bool qwebengineprofile_issignalconnected_isbase = false;

  public:
    VirtualQWebEngineProfile() : QWebEngineProfile() {};
    VirtualQWebEngineProfile(const QString& name) : QWebEngineProfile(name) {};
    VirtualQWebEngineProfile(QObject* parent) : QWebEngineProfile(parent) {};
    VirtualQWebEngineProfile(const QString& name, QObject* parent) : QWebEngineProfile(name, parent) {};

    // Callback setters
    inline void setQWebEngineProfile_MetaObject_Callback(QWebEngineProfile_MetaObject_Callback cb) { qwebengineprofile_metaobject_callback = cb; }
    inline void setQWebEngineProfile_Metacast_Callback(QWebEngineProfile_Metacast_Callback cb) { qwebengineprofile_metacast_callback = cb; }
    inline void setQWebEngineProfile_Metacall_Callback(QWebEngineProfile_Metacall_Callback cb) { qwebengineprofile_metacall_callback = cb; }
    inline void setQWebEngineProfile_Event_Callback(QWebEngineProfile_Event_Callback cb) { qwebengineprofile_event_callback = cb; }
    inline void setQWebEngineProfile_EventFilter_Callback(QWebEngineProfile_EventFilter_Callback cb) { qwebengineprofile_eventfilter_callback = cb; }
    inline void setQWebEngineProfile_TimerEvent_Callback(QWebEngineProfile_TimerEvent_Callback cb) { qwebengineprofile_timerevent_callback = cb; }
    inline void setQWebEngineProfile_ChildEvent_Callback(QWebEngineProfile_ChildEvent_Callback cb) { qwebengineprofile_childevent_callback = cb; }
    inline void setQWebEngineProfile_CustomEvent_Callback(QWebEngineProfile_CustomEvent_Callback cb) { qwebengineprofile_customevent_callback = cb; }
    inline void setQWebEngineProfile_ConnectNotify_Callback(QWebEngineProfile_ConnectNotify_Callback cb) { qwebengineprofile_connectnotify_callback = cb; }
    inline void setQWebEngineProfile_DisconnectNotify_Callback(QWebEngineProfile_DisconnectNotify_Callback cb) { qwebengineprofile_disconnectnotify_callback = cb; }
    inline void setQWebEngineProfile_Sender_Callback(QWebEngineProfile_Sender_Callback cb) { qwebengineprofile_sender_callback = cb; }
    inline void setQWebEngineProfile_SenderSignalIndex_Callback(QWebEngineProfile_SenderSignalIndex_Callback cb) { qwebengineprofile_sendersignalindex_callback = cb; }
    inline void setQWebEngineProfile_Receivers_Callback(QWebEngineProfile_Receivers_Callback cb) { qwebengineprofile_receivers_callback = cb; }
    inline void setQWebEngineProfile_IsSignalConnected_Callback(QWebEngineProfile_IsSignalConnected_Callback cb) { qwebengineprofile_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQWebEngineProfile_MetaObject_IsBase(bool value) const { qwebengineprofile_metaobject_isbase = value; }
    inline void setQWebEngineProfile_Metacast_IsBase(bool value) const { qwebengineprofile_metacast_isbase = value; }
    inline void setQWebEngineProfile_Metacall_IsBase(bool value) const { qwebengineprofile_metacall_isbase = value; }
    inline void setQWebEngineProfile_Event_IsBase(bool value) const { qwebengineprofile_event_isbase = value; }
    inline void setQWebEngineProfile_EventFilter_IsBase(bool value) const { qwebengineprofile_eventfilter_isbase = value; }
    inline void setQWebEngineProfile_TimerEvent_IsBase(bool value) const { qwebengineprofile_timerevent_isbase = value; }
    inline void setQWebEngineProfile_ChildEvent_IsBase(bool value) const { qwebengineprofile_childevent_isbase = value; }
    inline void setQWebEngineProfile_CustomEvent_IsBase(bool value) const { qwebengineprofile_customevent_isbase = value; }
    inline void setQWebEngineProfile_ConnectNotify_IsBase(bool value) const { qwebengineprofile_connectnotify_isbase = value; }
    inline void setQWebEngineProfile_DisconnectNotify_IsBase(bool value) const { qwebengineprofile_disconnectnotify_isbase = value; }
    inline void setQWebEngineProfile_Sender_IsBase(bool value) const { qwebengineprofile_sender_isbase = value; }
    inline void setQWebEngineProfile_SenderSignalIndex_IsBase(bool value) const { qwebengineprofile_sendersignalindex_isbase = value; }
    inline void setQWebEngineProfile_Receivers_IsBase(bool value) const { qwebengineprofile_receivers_isbase = value; }
    inline void setQWebEngineProfile_IsSignalConnected_IsBase(bool value) const { qwebengineprofile_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebengineprofile_metaobject_isbase) {
            qwebengineprofile_metaobject_isbase = false;
            return QWebEngineProfile::metaObject();
        }
        auto metaobject_cb = qwebengineprofile_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QWebEngineProfile::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebengineprofile_metacast_isbase) {
            qwebengineprofile_metacast_isbase = false;
            return QWebEngineProfile::qt_metacast(param1);
        }
        auto metacast_cb = qwebengineprofile_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QWebEngineProfile::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebengineprofile_metacall_isbase) {
            qwebengineprofile_metacall_isbase = false;
            return QWebEngineProfile::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qwebengineprofile_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebEngineProfile::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebengineprofile_event_isbase) {
            qwebengineprofile_event_isbase = false;
            return QWebEngineProfile::event(event);
        }
        auto event_cb = qwebengineprofile_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QWebEngineProfile::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebengineprofile_eventfilter_isbase) {
            qwebengineprofile_eventfilter_isbase = false;
            return QWebEngineProfile::eventFilter(watched, event);
        }
        auto eventfilter_cb = qwebengineprofile_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebEngineProfile::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebengineprofile_timerevent_isbase) {
            qwebengineprofile_timerevent_isbase = false;
            QWebEngineProfile::timerEvent(event);
            return;
        }
        auto timerevent_cb = qwebengineprofile_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QWebEngineProfile::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebengineprofile_childevent_isbase) {
            qwebengineprofile_childevent_isbase = false;
            QWebEngineProfile::childEvent(event);
            return;
        }
        auto childevent_cb = qwebengineprofile_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QWebEngineProfile::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebengineprofile_customevent_isbase) {
            qwebengineprofile_customevent_isbase = false;
            QWebEngineProfile::customEvent(event);
            return;
        }
        auto customevent_cb = qwebengineprofile_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QWebEngineProfile::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebengineprofile_connectnotify_isbase) {
            qwebengineprofile_connectnotify_isbase = false;
            QWebEngineProfile::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qwebengineprofile_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QWebEngineProfile::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebengineprofile_disconnectnotify_isbase) {
            qwebengineprofile_disconnectnotify_isbase = false;
            QWebEngineProfile::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qwebengineprofile_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QWebEngineProfile::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwebengineprofile_sender_isbase) {
            qwebengineprofile_sender_isbase = false;
            return QWebEngineProfile::sender();
        }
        auto sender_cb = qwebengineprofile_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QWebEngineProfile::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwebengineprofile_sendersignalindex_isbase) {
            qwebengineprofile_sendersignalindex_isbase = false;
            return QWebEngineProfile::senderSignalIndex();
        }
        auto sendersignalindex_cb = qwebengineprofile_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QWebEngineProfile::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwebengineprofile_receivers_isbase) {
            qwebengineprofile_receivers_isbase = false;
            return QWebEngineProfile::receivers(signal);
        }
        auto receivers_cb = qwebengineprofile_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWebEngineProfile::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwebengineprofile_issignalconnected_isbase) {
            qwebengineprofile_issignalconnected_isbase = false;
            return QWebEngineProfile::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qwebengineprofile_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QWebEngineProfile::isSignalConnected(signal);
    }

    // Friend functions
    friend void QWebEngineProfile_TimerEvent(QWebEngineProfile* self, QTimerEvent* event);
    friend void QWebEngineProfile_SuperTimerEvent(QWebEngineProfile* self, QTimerEvent* event);
    friend void QWebEngineProfile_ChildEvent(QWebEngineProfile* self, QChildEvent* event);
    friend void QWebEngineProfile_SuperChildEvent(QWebEngineProfile* self, QChildEvent* event);
    friend void QWebEngineProfile_CustomEvent(QWebEngineProfile* self, QEvent* event);
    friend void QWebEngineProfile_SuperCustomEvent(QWebEngineProfile* self, QEvent* event);
    friend void QWebEngineProfile_ConnectNotify(QWebEngineProfile* self, const QMetaMethod* signal);
    friend void QWebEngineProfile_SuperConnectNotify(QWebEngineProfile* self, const QMetaMethod* signal);
    friend void QWebEngineProfile_DisconnectNotify(QWebEngineProfile* self, const QMetaMethod* signal);
    friend void QWebEngineProfile_SuperDisconnectNotify(QWebEngineProfile* self, const QMetaMethod* signal);
    friend QObject* QWebEngineProfile_Sender(const QWebEngineProfile* self);
    friend QObject* QWebEngineProfile_SuperSender(const QWebEngineProfile* self);
    friend int QWebEngineProfile_SenderSignalIndex(const QWebEngineProfile* self);
    friend int QWebEngineProfile_SuperSenderSignalIndex(const QWebEngineProfile* self);
    friend int QWebEngineProfile_Receivers(const QWebEngineProfile* self, const char* signal);
    friend int QWebEngineProfile_SuperReceivers(const QWebEngineProfile* self, const char* signal);
    friend bool QWebEngineProfile_IsSignalConnected(const QWebEngineProfile* self, const QMetaMethod* signal);
    friend bool QWebEngineProfile_SuperIsSignalConnected(const QWebEngineProfile* self, const QMetaMethod* signal);
};

#endif
