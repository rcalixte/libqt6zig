#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQCOLORAXIS_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQCOLORAXIS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QColorAxis
class VirtualQColorAxis final : public QColorAxis {
  public:
    // Virtual class public types (including callbacks and access types)
    using QColorAxis_MetaObject_Callback = QMetaObject* (*)(const QColorAxis*);
    using QColorAxis_Metacast_Callback = void* (*)(QColorAxis*, const char*);
    using QColorAxis_Metacall_Callback = int (*)(QColorAxis*, int, int, void**);
    using QColorAxis_Type_Callback = int (*)(const QColorAxis*);
    using QColorAxis_Event_Callback = bool (*)(QColorAxis*, QEvent*);
    using QColorAxis_EventFilter_Callback = bool (*)(QColorAxis*, QObject*, QEvent*);
    using QColorAxis_TimerEvent_Callback = void (*)(QColorAxis*, QTimerEvent*);
    using QColorAxis_ChildEvent_Callback = void (*)(QColorAxis*, QChildEvent*);
    using QColorAxis_CustomEvent_Callback = void (*)(QColorAxis*, QEvent*);
    using QColorAxis_ConnectNotify_Callback = void (*)(QColorAxis*, QMetaMethod*);
    using QColorAxis_DisconnectNotify_Callback = void (*)(QColorAxis*, QMetaMethod*);
    using QColorAxis::isSignalConnected;
    using QColorAxis::receivers;
    using QColorAxis::sender;
    using QColorAxis::senderSignalIndex;

    // Instance callback storage
    QColorAxis_MetaObject_Callback qcoloraxis_metaobject_callback = nullptr;
    QColorAxis_Metacast_Callback qcoloraxis_metacast_callback = nullptr;
    QColorAxis_Metacall_Callback qcoloraxis_metacall_callback = nullptr;
    QColorAxis_Type_Callback qcoloraxis_type_callback = nullptr;
    QColorAxis_Event_Callback qcoloraxis_event_callback = nullptr;
    QColorAxis_EventFilter_Callback qcoloraxis_eventfilter_callback = nullptr;
    QColorAxis_TimerEvent_Callback qcoloraxis_timerevent_callback = nullptr;
    QColorAxis_ChildEvent_Callback qcoloraxis_childevent_callback = nullptr;
    QColorAxis_CustomEvent_Callback qcoloraxis_customevent_callback = nullptr;
    QColorAxis_ConnectNotify_Callback qcoloraxis_connectnotify_callback = nullptr;
    QColorAxis_DisconnectNotify_Callback qcoloraxis_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QColorAxis {
        using QColorAxis::childEvent;
        using QColorAxis::connectNotify;
        using QColorAxis::customEvent;
        using QColorAxis::disconnectNotify;
        using QColorAxis::timerEvent;
    };

    VirtualQColorAxis() : QColorAxis() {};
    VirtualQColorAxis(QObject* parent) : QColorAxis(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcoloraxis_metaobject_callback) {
            QMetaObject* callback_ret = qcoloraxis_metaobject_callback(this);
            return callback_ret;
        }
        return QColorAxis::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcoloraxis_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcoloraxis_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QColorAxis::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcoloraxis_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcoloraxis_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QColorAxis::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qcoloraxis_type_callback) {
            int callback_ret = qcoloraxis_type_callback(this);
            return static_cast<QAbstractAxis::AxisType>(callback_ret);
        }
        return QColorAxis::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcoloraxis_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcoloraxis_event_callback(this, cbval1);
            return callback_ret;
        }
        return QColorAxis::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcoloraxis_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcoloraxis_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QColorAxis::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcoloraxis_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcoloraxis_timerevent_callback(this, cbval1);
            return;
        }
        QColorAxis::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcoloraxis_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcoloraxis_childevent_callback(this, cbval1);
            return;
        }
        QColorAxis::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcoloraxis_customevent_callback) {
            QEvent* cbval1 = event;
            qcoloraxis_customevent_callback(this, cbval1);
            return;
        }
        QColorAxis::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcoloraxis_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcoloraxis_connectnotify_callback(this, cbval1);
            return;
        }
        QColorAxis::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcoloraxis_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcoloraxis_disconnectnotify_callback(this, cbval1);
            return;
        }
        QColorAxis::disconnectNotify(signal);
    }

    // Friend functions
    friend void QColorAxis_SuperTimerEvent(QColorAxis* self, QTimerEvent* event);
    friend void QColorAxis_SuperChildEvent(QColorAxis* self, QChildEvent* event);
    friend void QColorAxis_SuperCustomEvent(QColorAxis* self, QEvent* event);
    friend void QColorAxis_SuperConnectNotify(QColorAxis* self, const QMetaMethod* signal);
    friend void QColorAxis_SuperDisconnectNotify(QColorAxis* self, const QMetaMethod* signal);
};

#endif
