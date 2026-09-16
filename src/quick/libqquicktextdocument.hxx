#pragma once
#ifndef QUICK_LIBQQUICKTEXTDOCUMENT_HXX
#define QUICK_LIBQQUICKTEXTDOCUMENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickTextDocument so that we can call protected methods
class VirtualQQuickTextDocument final : public QQuickTextDocument {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickTextDocument = true;

    // Virtual class public types (including callbacks)
    using QQuickTextDocument_MetaObject_Callback = QMetaObject* (*)();
    using QQuickTextDocument_Metacast_Callback = void* (*)(QQuickTextDocument*, const char*);
    using QQuickTextDocument_Metacall_Callback = int (*)(QQuickTextDocument*, int, int, void**);
    using QQuickTextDocument_Event_Callback = bool (*)(QQuickTextDocument*, QEvent*);
    using QQuickTextDocument_EventFilter_Callback = bool (*)(QQuickTextDocument*, QObject*, QEvent*);
    using QQuickTextDocument_TimerEvent_Callback = void (*)(QQuickTextDocument*, QTimerEvent*);
    using QQuickTextDocument_ChildEvent_Callback = void (*)(QQuickTextDocument*, QChildEvent*);
    using QQuickTextDocument_CustomEvent_Callback = void (*)(QQuickTextDocument*, QEvent*);
    using QQuickTextDocument_ConnectNotify_Callback = void (*)(QQuickTextDocument*, QMetaMethod*);
    using QQuickTextDocument_DisconnectNotify_Callback = void (*)(QQuickTextDocument*, QMetaMethod*);
    using QQuickTextDocument_Sender_Callback = QObject* (*)();
    using QQuickTextDocument_SenderSignalIndex_Callback = int (*)();
    using QQuickTextDocument_Receivers_Callback = int (*)(const QQuickTextDocument*, const char*);
    using QQuickTextDocument_IsSignalConnected_Callback = bool (*)(const QQuickTextDocument*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQuickTextDocument_MetaObject_Callback qquicktextdocument_metaobject_callback = nullptr;
    QQuickTextDocument_Metacast_Callback qquicktextdocument_metacast_callback = nullptr;
    QQuickTextDocument_Metacall_Callback qquicktextdocument_metacall_callback = nullptr;
    QQuickTextDocument_Event_Callback qquicktextdocument_event_callback = nullptr;
    QQuickTextDocument_EventFilter_Callback qquicktextdocument_eventfilter_callback = nullptr;
    QQuickTextDocument_TimerEvent_Callback qquicktextdocument_timerevent_callback = nullptr;
    QQuickTextDocument_ChildEvent_Callback qquicktextdocument_childevent_callback = nullptr;
    QQuickTextDocument_CustomEvent_Callback qquicktextdocument_customevent_callback = nullptr;
    QQuickTextDocument_ConnectNotify_Callback qquicktextdocument_connectnotify_callback = nullptr;
    QQuickTextDocument_DisconnectNotify_Callback qquicktextdocument_disconnectnotify_callback = nullptr;
    QQuickTextDocument_Sender_Callback qquicktextdocument_sender_callback = nullptr;
    QQuickTextDocument_SenderSignalIndex_Callback qquicktextdocument_sendersignalindex_callback = nullptr;
    QQuickTextDocument_Receivers_Callback qquicktextdocument_receivers_callback = nullptr;
    QQuickTextDocument_IsSignalConnected_Callback qquicktextdocument_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquicktextdocument_metaobject_isbase = false;
    mutable bool qquicktextdocument_metacast_isbase = false;
    mutable bool qquicktextdocument_metacall_isbase = false;
    mutable bool qquicktextdocument_event_isbase = false;
    mutable bool qquicktextdocument_eventfilter_isbase = false;
    mutable bool qquicktextdocument_timerevent_isbase = false;
    mutable bool qquicktextdocument_childevent_isbase = false;
    mutable bool qquicktextdocument_customevent_isbase = false;
    mutable bool qquicktextdocument_connectnotify_isbase = false;
    mutable bool qquicktextdocument_disconnectnotify_isbase = false;
    mutable bool qquicktextdocument_sender_isbase = false;
    mutable bool qquicktextdocument_sendersignalindex_isbase = false;
    mutable bool qquicktextdocument_receivers_isbase = false;
    mutable bool qquicktextdocument_issignalconnected_isbase = false;

  public:
    VirtualQQuickTextDocument(QQuickItem* parent) : QQuickTextDocument(parent) {};

    // Callback setters
    inline void setQQuickTextDocument_MetaObject_Callback(QQuickTextDocument_MetaObject_Callback cb) { qquicktextdocument_metaobject_callback = cb; }
    inline void setQQuickTextDocument_Metacast_Callback(QQuickTextDocument_Metacast_Callback cb) { qquicktextdocument_metacast_callback = cb; }
    inline void setQQuickTextDocument_Metacall_Callback(QQuickTextDocument_Metacall_Callback cb) { qquicktextdocument_metacall_callback = cb; }
    inline void setQQuickTextDocument_Event_Callback(QQuickTextDocument_Event_Callback cb) { qquicktextdocument_event_callback = cb; }
    inline void setQQuickTextDocument_EventFilter_Callback(QQuickTextDocument_EventFilter_Callback cb) { qquicktextdocument_eventfilter_callback = cb; }
    inline void setQQuickTextDocument_TimerEvent_Callback(QQuickTextDocument_TimerEvent_Callback cb) { qquicktextdocument_timerevent_callback = cb; }
    inline void setQQuickTextDocument_ChildEvent_Callback(QQuickTextDocument_ChildEvent_Callback cb) { qquicktextdocument_childevent_callback = cb; }
    inline void setQQuickTextDocument_CustomEvent_Callback(QQuickTextDocument_CustomEvent_Callback cb) { qquicktextdocument_customevent_callback = cb; }
    inline void setQQuickTextDocument_ConnectNotify_Callback(QQuickTextDocument_ConnectNotify_Callback cb) { qquicktextdocument_connectnotify_callback = cb; }
    inline void setQQuickTextDocument_DisconnectNotify_Callback(QQuickTextDocument_DisconnectNotify_Callback cb) { qquicktextdocument_disconnectnotify_callback = cb; }
    inline void setQQuickTextDocument_Sender_Callback(QQuickTextDocument_Sender_Callback cb) { qquicktextdocument_sender_callback = cb; }
    inline void setQQuickTextDocument_SenderSignalIndex_Callback(QQuickTextDocument_SenderSignalIndex_Callback cb) { qquicktextdocument_sendersignalindex_callback = cb; }
    inline void setQQuickTextDocument_Receivers_Callback(QQuickTextDocument_Receivers_Callback cb) { qquicktextdocument_receivers_callback = cb; }
    inline void setQQuickTextDocument_IsSignalConnected_Callback(QQuickTextDocument_IsSignalConnected_Callback cb) { qquicktextdocument_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickTextDocument_MetaObject_IsBase(bool value) const { qquicktextdocument_metaobject_isbase = value; }
    inline void setQQuickTextDocument_Metacast_IsBase(bool value) const { qquicktextdocument_metacast_isbase = value; }
    inline void setQQuickTextDocument_Metacall_IsBase(bool value) const { qquicktextdocument_metacall_isbase = value; }
    inline void setQQuickTextDocument_Event_IsBase(bool value) const { qquicktextdocument_event_isbase = value; }
    inline void setQQuickTextDocument_EventFilter_IsBase(bool value) const { qquicktextdocument_eventfilter_isbase = value; }
    inline void setQQuickTextDocument_TimerEvent_IsBase(bool value) const { qquicktextdocument_timerevent_isbase = value; }
    inline void setQQuickTextDocument_ChildEvent_IsBase(bool value) const { qquicktextdocument_childevent_isbase = value; }
    inline void setQQuickTextDocument_CustomEvent_IsBase(bool value) const { qquicktextdocument_customevent_isbase = value; }
    inline void setQQuickTextDocument_ConnectNotify_IsBase(bool value) const { qquicktextdocument_connectnotify_isbase = value; }
    inline void setQQuickTextDocument_DisconnectNotify_IsBase(bool value) const { qquicktextdocument_disconnectnotify_isbase = value; }
    inline void setQQuickTextDocument_Sender_IsBase(bool value) const { qquicktextdocument_sender_isbase = value; }
    inline void setQQuickTextDocument_SenderSignalIndex_IsBase(bool value) const { qquicktextdocument_sendersignalindex_isbase = value; }
    inline void setQQuickTextDocument_Receivers_IsBase(bool value) const { qquicktextdocument_receivers_isbase = value; }
    inline void setQQuickTextDocument_IsSignalConnected_IsBase(bool value) const { qquicktextdocument_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquicktextdocument_metaobject_isbase) {
            qquicktextdocument_metaobject_isbase = false;
            return QQuickTextDocument::metaObject();
        }
        auto metaobject_cb = qquicktextdocument_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickTextDocument::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquicktextdocument_metacast_isbase) {
            qquicktextdocument_metacast_isbase = false;
            return QQuickTextDocument::qt_metacast(param1);
        }
        auto metacast_cb = qquicktextdocument_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickTextDocument::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquicktextdocument_metacall_isbase) {
            qquicktextdocument_metacall_isbase = false;
            return QQuickTextDocument::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquicktextdocument_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickTextDocument::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquicktextdocument_event_isbase) {
            qquicktextdocument_event_isbase = false;
            return QQuickTextDocument::event(event);
        }
        auto event_cb = qquicktextdocument_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickTextDocument::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquicktextdocument_eventfilter_isbase) {
            qquicktextdocument_eventfilter_isbase = false;
            return QQuickTextDocument::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquicktextdocument_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickTextDocument::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquicktextdocument_timerevent_isbase) {
            qquicktextdocument_timerevent_isbase = false;
            QQuickTextDocument::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquicktextdocument_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickTextDocument::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquicktextdocument_childevent_isbase) {
            qquicktextdocument_childevent_isbase = false;
            QQuickTextDocument::childEvent(event);
            return;
        }
        auto childevent_cb = qquicktextdocument_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickTextDocument::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquicktextdocument_customevent_isbase) {
            qquicktextdocument_customevent_isbase = false;
            QQuickTextDocument::customEvent(event);
            return;
        }
        auto customevent_cb = qquicktextdocument_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickTextDocument::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquicktextdocument_connectnotify_isbase) {
            qquicktextdocument_connectnotify_isbase = false;
            QQuickTextDocument::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquicktextdocument_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickTextDocument::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquicktextdocument_disconnectnotify_isbase) {
            qquicktextdocument_disconnectnotify_isbase = false;
            QQuickTextDocument::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquicktextdocument_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickTextDocument::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquicktextdocument_sender_isbase) {
            qquicktextdocument_sender_isbase = false;
            return QQuickTextDocument::sender();
        }
        auto sender_cb = qquicktextdocument_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickTextDocument::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquicktextdocument_sendersignalindex_isbase) {
            qquicktextdocument_sendersignalindex_isbase = false;
            return QQuickTextDocument::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquicktextdocument_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickTextDocument::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquicktextdocument_receivers_isbase) {
            qquicktextdocument_receivers_isbase = false;
            return QQuickTextDocument::receivers(signal);
        }
        auto receivers_cb = qquicktextdocument_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickTextDocument::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquicktextdocument_issignalconnected_isbase) {
            qquicktextdocument_issignalconnected_isbase = false;
            return QQuickTextDocument::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquicktextdocument_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickTextDocument::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQuickTextDocument_TimerEvent(QQuickTextDocument* self, QTimerEvent* event);
    friend void QQuickTextDocument_SuperTimerEvent(QQuickTextDocument* self, QTimerEvent* event);
    friend void QQuickTextDocument_ChildEvent(QQuickTextDocument* self, QChildEvent* event);
    friend void QQuickTextDocument_SuperChildEvent(QQuickTextDocument* self, QChildEvent* event);
    friend void QQuickTextDocument_CustomEvent(QQuickTextDocument* self, QEvent* event);
    friend void QQuickTextDocument_SuperCustomEvent(QQuickTextDocument* self, QEvent* event);
    friend void QQuickTextDocument_ConnectNotify(QQuickTextDocument* self, const QMetaMethod* signal);
    friend void QQuickTextDocument_SuperConnectNotify(QQuickTextDocument* self, const QMetaMethod* signal);
    friend void QQuickTextDocument_DisconnectNotify(QQuickTextDocument* self, const QMetaMethod* signal);
    friend void QQuickTextDocument_SuperDisconnectNotify(QQuickTextDocument* self, const QMetaMethod* signal);
    friend QObject* QQuickTextDocument_Sender(const QQuickTextDocument* self);
    friend QObject* QQuickTextDocument_SuperSender(const QQuickTextDocument* self);
    friend int QQuickTextDocument_SenderSignalIndex(const QQuickTextDocument* self);
    friend int QQuickTextDocument_SuperSenderSignalIndex(const QQuickTextDocument* self);
    friend int QQuickTextDocument_Receivers(const QQuickTextDocument* self, const char* signal);
    friend int QQuickTextDocument_SuperReceivers(const QQuickTextDocument* self, const char* signal);
    friend bool QQuickTextDocument_IsSignalConnected(const QQuickTextDocument* self, const QMetaMethod* signal);
    friend bool QQuickTextDocument_SuperIsSignalConnected(const QQuickTextDocument* self, const QMetaMethod* signal);
};

#endif
