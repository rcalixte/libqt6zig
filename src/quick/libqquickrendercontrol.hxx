#pragma once
#ifndef QUICK_LIBQQUICKRENDERCONTROL_HXX
#define QUICK_LIBQQUICKRENDERCONTROL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickRenderControl so that we can call protected methods
class VirtualQQuickRenderControl final : public QQuickRenderControl {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickRenderControl = true;

    // Virtual class public types (including callbacks)
    using QQuickRenderControl_MetaObject_Callback = QMetaObject* (*)();
    using QQuickRenderControl_Metacast_Callback = void* (*)(QQuickRenderControl*, const char*);
    using QQuickRenderControl_Metacall_Callback = int (*)(QQuickRenderControl*, int, int, void**);
    using QQuickRenderControl_RenderWindow_Callback = QWindow* (*)(QQuickRenderControl*, QPoint*);
    using QQuickRenderControl_Event_Callback = bool (*)(QQuickRenderControl*, QEvent*);
    using QQuickRenderControl_EventFilter_Callback = bool (*)(QQuickRenderControl*, QObject*, QEvent*);
    using QQuickRenderControl_TimerEvent_Callback = void (*)(QQuickRenderControl*, QTimerEvent*);
    using QQuickRenderControl_ChildEvent_Callback = void (*)(QQuickRenderControl*, QChildEvent*);
    using QQuickRenderControl_CustomEvent_Callback = void (*)(QQuickRenderControl*, QEvent*);
    using QQuickRenderControl_ConnectNotify_Callback = void (*)(QQuickRenderControl*, QMetaMethod*);
    using QQuickRenderControl_DisconnectNotify_Callback = void (*)(QQuickRenderControl*, QMetaMethod*);
    using QQuickRenderControl_Sender_Callback = QObject* (*)();
    using QQuickRenderControl_SenderSignalIndex_Callback = int (*)();
    using QQuickRenderControl_Receivers_Callback = int (*)(const QQuickRenderControl*, const char*);
    using QQuickRenderControl_IsSignalConnected_Callback = bool (*)(const QQuickRenderControl*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQuickRenderControl_MetaObject_Callback qquickrendercontrol_metaobject_callback = nullptr;
    QQuickRenderControl_Metacast_Callback qquickrendercontrol_metacast_callback = nullptr;
    QQuickRenderControl_Metacall_Callback qquickrendercontrol_metacall_callback = nullptr;
    QQuickRenderControl_RenderWindow_Callback qquickrendercontrol_renderwindow_callback = nullptr;
    QQuickRenderControl_Event_Callback qquickrendercontrol_event_callback = nullptr;
    QQuickRenderControl_EventFilter_Callback qquickrendercontrol_eventfilter_callback = nullptr;
    QQuickRenderControl_TimerEvent_Callback qquickrendercontrol_timerevent_callback = nullptr;
    QQuickRenderControl_ChildEvent_Callback qquickrendercontrol_childevent_callback = nullptr;
    QQuickRenderControl_CustomEvent_Callback qquickrendercontrol_customevent_callback = nullptr;
    QQuickRenderControl_ConnectNotify_Callback qquickrendercontrol_connectnotify_callback = nullptr;
    QQuickRenderControl_DisconnectNotify_Callback qquickrendercontrol_disconnectnotify_callback = nullptr;
    QQuickRenderControl_Sender_Callback qquickrendercontrol_sender_callback = nullptr;
    QQuickRenderControl_SenderSignalIndex_Callback qquickrendercontrol_sendersignalindex_callback = nullptr;
    QQuickRenderControl_Receivers_Callback qquickrendercontrol_receivers_callback = nullptr;
    QQuickRenderControl_IsSignalConnected_Callback qquickrendercontrol_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquickrendercontrol_metaobject_isbase = false;
    mutable bool qquickrendercontrol_metacast_isbase = false;
    mutable bool qquickrendercontrol_metacall_isbase = false;
    mutable bool qquickrendercontrol_renderwindow_isbase = false;
    mutable bool qquickrendercontrol_event_isbase = false;
    mutable bool qquickrendercontrol_eventfilter_isbase = false;
    mutable bool qquickrendercontrol_timerevent_isbase = false;
    mutable bool qquickrendercontrol_childevent_isbase = false;
    mutable bool qquickrendercontrol_customevent_isbase = false;
    mutable bool qquickrendercontrol_connectnotify_isbase = false;
    mutable bool qquickrendercontrol_disconnectnotify_isbase = false;
    mutable bool qquickrendercontrol_sender_isbase = false;
    mutable bool qquickrendercontrol_sendersignalindex_isbase = false;
    mutable bool qquickrendercontrol_receivers_isbase = false;
    mutable bool qquickrendercontrol_issignalconnected_isbase = false;

  public:
    VirtualQQuickRenderControl() : QQuickRenderControl() {};
    VirtualQQuickRenderControl(QObject* parent) : QQuickRenderControl(parent) {};

    // Callback setters
    inline void setQQuickRenderControl_MetaObject_Callback(QQuickRenderControl_MetaObject_Callback cb) { qquickrendercontrol_metaobject_callback = cb; }
    inline void setQQuickRenderControl_Metacast_Callback(QQuickRenderControl_Metacast_Callback cb) { qquickrendercontrol_metacast_callback = cb; }
    inline void setQQuickRenderControl_Metacall_Callback(QQuickRenderControl_Metacall_Callback cb) { qquickrendercontrol_metacall_callback = cb; }
    inline void setQQuickRenderControl_RenderWindow_Callback(QQuickRenderControl_RenderWindow_Callback cb) { qquickrendercontrol_renderwindow_callback = cb; }
    inline void setQQuickRenderControl_Event_Callback(QQuickRenderControl_Event_Callback cb) { qquickrendercontrol_event_callback = cb; }
    inline void setQQuickRenderControl_EventFilter_Callback(QQuickRenderControl_EventFilter_Callback cb) { qquickrendercontrol_eventfilter_callback = cb; }
    inline void setQQuickRenderControl_TimerEvent_Callback(QQuickRenderControl_TimerEvent_Callback cb) { qquickrendercontrol_timerevent_callback = cb; }
    inline void setQQuickRenderControl_ChildEvent_Callback(QQuickRenderControl_ChildEvent_Callback cb) { qquickrendercontrol_childevent_callback = cb; }
    inline void setQQuickRenderControl_CustomEvent_Callback(QQuickRenderControl_CustomEvent_Callback cb) { qquickrendercontrol_customevent_callback = cb; }
    inline void setQQuickRenderControl_ConnectNotify_Callback(QQuickRenderControl_ConnectNotify_Callback cb) { qquickrendercontrol_connectnotify_callback = cb; }
    inline void setQQuickRenderControl_DisconnectNotify_Callback(QQuickRenderControl_DisconnectNotify_Callback cb) { qquickrendercontrol_disconnectnotify_callback = cb; }
    inline void setQQuickRenderControl_Sender_Callback(QQuickRenderControl_Sender_Callback cb) { qquickrendercontrol_sender_callback = cb; }
    inline void setQQuickRenderControl_SenderSignalIndex_Callback(QQuickRenderControl_SenderSignalIndex_Callback cb) { qquickrendercontrol_sendersignalindex_callback = cb; }
    inline void setQQuickRenderControl_Receivers_Callback(QQuickRenderControl_Receivers_Callback cb) { qquickrendercontrol_receivers_callback = cb; }
    inline void setQQuickRenderControl_IsSignalConnected_Callback(QQuickRenderControl_IsSignalConnected_Callback cb) { qquickrendercontrol_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickRenderControl_MetaObject_IsBase(bool value) const { qquickrendercontrol_metaobject_isbase = value; }
    inline void setQQuickRenderControl_Metacast_IsBase(bool value) const { qquickrendercontrol_metacast_isbase = value; }
    inline void setQQuickRenderControl_Metacall_IsBase(bool value) const { qquickrendercontrol_metacall_isbase = value; }
    inline void setQQuickRenderControl_RenderWindow_IsBase(bool value) const { qquickrendercontrol_renderwindow_isbase = value; }
    inline void setQQuickRenderControl_Event_IsBase(bool value) const { qquickrendercontrol_event_isbase = value; }
    inline void setQQuickRenderControl_EventFilter_IsBase(bool value) const { qquickrendercontrol_eventfilter_isbase = value; }
    inline void setQQuickRenderControl_TimerEvent_IsBase(bool value) const { qquickrendercontrol_timerevent_isbase = value; }
    inline void setQQuickRenderControl_ChildEvent_IsBase(bool value) const { qquickrendercontrol_childevent_isbase = value; }
    inline void setQQuickRenderControl_CustomEvent_IsBase(bool value) const { qquickrendercontrol_customevent_isbase = value; }
    inline void setQQuickRenderControl_ConnectNotify_IsBase(bool value) const { qquickrendercontrol_connectnotify_isbase = value; }
    inline void setQQuickRenderControl_DisconnectNotify_IsBase(bool value) const { qquickrendercontrol_disconnectnotify_isbase = value; }
    inline void setQQuickRenderControl_Sender_IsBase(bool value) const { qquickrendercontrol_sender_isbase = value; }
    inline void setQQuickRenderControl_SenderSignalIndex_IsBase(bool value) const { qquickrendercontrol_sendersignalindex_isbase = value; }
    inline void setQQuickRenderControl_Receivers_IsBase(bool value) const { qquickrendercontrol_receivers_isbase = value; }
    inline void setQQuickRenderControl_IsSignalConnected_IsBase(bool value) const { qquickrendercontrol_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickrendercontrol_metaobject_isbase) {
            qquickrendercontrol_metaobject_isbase = false;
            return QQuickRenderControl::metaObject();
        }
        auto metaobject_cb = qquickrendercontrol_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickRenderControl::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickrendercontrol_metacast_isbase) {
            qquickrendercontrol_metacast_isbase = false;
            return QQuickRenderControl::qt_metacast(param1);
        }
        auto metacast_cb = qquickrendercontrol_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickRenderControl::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickrendercontrol_metacall_isbase) {
            qquickrendercontrol_metacall_isbase = false;
            return QQuickRenderControl::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquickrendercontrol_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickRenderControl::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWindow* renderWindow(QPoint* offset) override {
        if (qquickrendercontrol_renderwindow_isbase) {
            qquickrendercontrol_renderwindow_isbase = false;
            return QQuickRenderControl::renderWindow(offset);
        }
        auto renderwindow_cb = qquickrendercontrol_renderwindow_callback;
        if (renderwindow_cb) {
            QPoint* cbval1 = offset;
            QWindow* callback_ret = renderwindow_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickRenderControl::renderWindow(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquickrendercontrol_event_isbase) {
            qquickrendercontrol_event_isbase = false;
            return QQuickRenderControl::event(event);
        }
        auto event_cb = qquickrendercontrol_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickRenderControl::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickrendercontrol_eventfilter_isbase) {
            qquickrendercontrol_eventfilter_isbase = false;
            return QQuickRenderControl::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquickrendercontrol_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickRenderControl::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickrendercontrol_timerevent_isbase) {
            qquickrendercontrol_timerevent_isbase = false;
            QQuickRenderControl::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquickrendercontrol_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickRenderControl::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickrendercontrol_childevent_isbase) {
            qquickrendercontrol_childevent_isbase = false;
            QQuickRenderControl::childEvent(event);
            return;
        }
        auto childevent_cb = qquickrendercontrol_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickRenderControl::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickrendercontrol_customevent_isbase) {
            qquickrendercontrol_customevent_isbase = false;
            QQuickRenderControl::customEvent(event);
            return;
        }
        auto customevent_cb = qquickrendercontrol_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickRenderControl::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickrendercontrol_connectnotify_isbase) {
            qquickrendercontrol_connectnotify_isbase = false;
            QQuickRenderControl::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquickrendercontrol_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickRenderControl::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickrendercontrol_disconnectnotify_isbase) {
            qquickrendercontrol_disconnectnotify_isbase = false;
            QQuickRenderControl::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquickrendercontrol_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickRenderControl::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquickrendercontrol_sender_isbase) {
            qquickrendercontrol_sender_isbase = false;
            return QQuickRenderControl::sender();
        }
        auto sender_cb = qquickrendercontrol_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickRenderControl::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquickrendercontrol_sendersignalindex_isbase) {
            qquickrendercontrol_sendersignalindex_isbase = false;
            return QQuickRenderControl::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquickrendercontrol_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickRenderControl::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquickrendercontrol_receivers_isbase) {
            qquickrendercontrol_receivers_isbase = false;
            return QQuickRenderControl::receivers(signal);
        }
        auto receivers_cb = qquickrendercontrol_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickRenderControl::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquickrendercontrol_issignalconnected_isbase) {
            qquickrendercontrol_issignalconnected_isbase = false;
            return QQuickRenderControl::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquickrendercontrol_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickRenderControl::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQuickRenderControl_TimerEvent(QQuickRenderControl* self, QTimerEvent* event);
    friend void QQuickRenderControl_SuperTimerEvent(QQuickRenderControl* self, QTimerEvent* event);
    friend void QQuickRenderControl_ChildEvent(QQuickRenderControl* self, QChildEvent* event);
    friend void QQuickRenderControl_SuperChildEvent(QQuickRenderControl* self, QChildEvent* event);
    friend void QQuickRenderControl_CustomEvent(QQuickRenderControl* self, QEvent* event);
    friend void QQuickRenderControl_SuperCustomEvent(QQuickRenderControl* self, QEvent* event);
    friend void QQuickRenderControl_ConnectNotify(QQuickRenderControl* self, const QMetaMethod* signal);
    friend void QQuickRenderControl_SuperConnectNotify(QQuickRenderControl* self, const QMetaMethod* signal);
    friend void QQuickRenderControl_DisconnectNotify(QQuickRenderControl* self, const QMetaMethod* signal);
    friend void QQuickRenderControl_SuperDisconnectNotify(QQuickRenderControl* self, const QMetaMethod* signal);
    friend QObject* QQuickRenderControl_Sender(const QQuickRenderControl* self);
    friend QObject* QQuickRenderControl_SuperSender(const QQuickRenderControl* self);
    friend int QQuickRenderControl_SenderSignalIndex(const QQuickRenderControl* self);
    friend int QQuickRenderControl_SuperSenderSignalIndex(const QQuickRenderControl* self);
    friend int QQuickRenderControl_Receivers(const QQuickRenderControl* self, const char* signal);
    friend int QQuickRenderControl_SuperReceivers(const QQuickRenderControl* self, const char* signal);
    friend bool QQuickRenderControl_IsSignalConnected(const QQuickRenderControl* self, const QMetaMethod* signal);
    friend bool QQuickRenderControl_SuperIsSignalConnected(const QQuickRenderControl* self, const QMetaMethod* signal);
};

#endif
