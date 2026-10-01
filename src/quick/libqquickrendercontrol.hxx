#pragma once
#ifndef QUICK_LIBQQUICKRENDERCONTROL_HXX
#define QUICK_LIBQQUICKRENDERCONTROL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickRenderControl
class VirtualQQuickRenderControl final : public QQuickRenderControl {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickRenderControl_MetaObject_Callback = QMetaObject* (*)(const QQuickRenderControl*);
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
    using QQuickRenderControl::isSignalConnected;
    using QQuickRenderControl::receivers;
    using QQuickRenderControl::sender;
    using QQuickRenderControl::senderSignalIndex;

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

    // Access struct
    struct Base : QQuickRenderControl {
        using QQuickRenderControl::childEvent;
        using QQuickRenderControl::connectNotify;
        using QQuickRenderControl::customEvent;
        using QQuickRenderControl::disconnectNotify;
        using QQuickRenderControl::timerEvent;
    };

    VirtualQQuickRenderControl() : QQuickRenderControl() {};
    VirtualQQuickRenderControl(QObject* parent) : QQuickRenderControl(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickrendercontrol_metaobject_callback) {
            QMetaObject* callback_ret = qquickrendercontrol_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickRenderControl::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickrendercontrol_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquickrendercontrol_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickRenderControl::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickrendercontrol_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquickrendercontrol_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickRenderControl::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWindow* renderWindow(QPoint* offset) override {
        if (qquickrendercontrol_renderwindow_callback) {
            QPoint* cbval1 = offset;
            QWindow* callback_ret = qquickrendercontrol_renderwindow_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickRenderControl::renderWindow(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquickrendercontrol_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquickrendercontrol_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickRenderControl::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickrendercontrol_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquickrendercontrol_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickRenderControl::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickrendercontrol_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquickrendercontrol_timerevent_callback(this, cbval1);
            return;
        }
        QQuickRenderControl::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickrendercontrol_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquickrendercontrol_childevent_callback(this, cbval1);
            return;
        }
        QQuickRenderControl::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickrendercontrol_customevent_callback) {
            QEvent* cbval1 = event;
            qquickrendercontrol_customevent_callback(this, cbval1);
            return;
        }
        QQuickRenderControl::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickrendercontrol_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickrendercontrol_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickRenderControl::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickrendercontrol_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickrendercontrol_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickRenderControl::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuickRenderControl_SuperTimerEvent(QQuickRenderControl* self, QTimerEvent* event);
    friend void QQuickRenderControl_SuperChildEvent(QQuickRenderControl* self, QChildEvent* event);
    friend void QQuickRenderControl_SuperCustomEvent(QQuickRenderControl* self, QEvent* event);
    friend void QQuickRenderControl_SuperConnectNotify(QQuickRenderControl* self, const QMetaMethod* signal);
    friend void QQuickRenderControl_SuperDisconnectNotify(QQuickRenderControl* self, const QMetaMethod* signal);
};

#endif
