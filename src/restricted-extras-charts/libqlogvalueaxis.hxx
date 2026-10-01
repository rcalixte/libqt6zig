#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQLOGVALUEAXIS_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQLOGVALUEAXIS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QLogValueAxis
class VirtualQLogValueAxis final : public QLogValueAxis {
  public:
    // Virtual class public types (including callbacks and access types)
    using QLogValueAxis_MetaObject_Callback = QMetaObject* (*)(const QLogValueAxis*);
    using QLogValueAxis_Metacast_Callback = void* (*)(QLogValueAxis*, const char*);
    using QLogValueAxis_Metacall_Callback = int (*)(QLogValueAxis*, int, int, void**);
    using QLogValueAxis_Type_Callback = int (*)(const QLogValueAxis*);
    using QLogValueAxis_Event_Callback = bool (*)(QLogValueAxis*, QEvent*);
    using QLogValueAxis_EventFilter_Callback = bool (*)(QLogValueAxis*, QObject*, QEvent*);
    using QLogValueAxis_TimerEvent_Callback = void (*)(QLogValueAxis*, QTimerEvent*);
    using QLogValueAxis_ChildEvent_Callback = void (*)(QLogValueAxis*, QChildEvent*);
    using QLogValueAxis_CustomEvent_Callback = void (*)(QLogValueAxis*, QEvent*);
    using QLogValueAxis_ConnectNotify_Callback = void (*)(QLogValueAxis*, QMetaMethod*);
    using QLogValueAxis_DisconnectNotify_Callback = void (*)(QLogValueAxis*, QMetaMethod*);
    using QLogValueAxis::isSignalConnected;
    using QLogValueAxis::receivers;
    using QLogValueAxis::sender;
    using QLogValueAxis::senderSignalIndex;

    // Instance callback storage
    QLogValueAxis_MetaObject_Callback qlogvalueaxis_metaobject_callback = nullptr;
    QLogValueAxis_Metacast_Callback qlogvalueaxis_metacast_callback = nullptr;
    QLogValueAxis_Metacall_Callback qlogvalueaxis_metacall_callback = nullptr;
    QLogValueAxis_Type_Callback qlogvalueaxis_type_callback = nullptr;
    QLogValueAxis_Event_Callback qlogvalueaxis_event_callback = nullptr;
    QLogValueAxis_EventFilter_Callback qlogvalueaxis_eventfilter_callback = nullptr;
    QLogValueAxis_TimerEvent_Callback qlogvalueaxis_timerevent_callback = nullptr;
    QLogValueAxis_ChildEvent_Callback qlogvalueaxis_childevent_callback = nullptr;
    QLogValueAxis_CustomEvent_Callback qlogvalueaxis_customevent_callback = nullptr;
    QLogValueAxis_ConnectNotify_Callback qlogvalueaxis_connectnotify_callback = nullptr;
    QLogValueAxis_DisconnectNotify_Callback qlogvalueaxis_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QLogValueAxis {
        using QLogValueAxis::childEvent;
        using QLogValueAxis::connectNotify;
        using QLogValueAxis::customEvent;
        using QLogValueAxis::disconnectNotify;
        using QLogValueAxis::timerEvent;
    };

    VirtualQLogValueAxis() : QLogValueAxis() {};
    VirtualQLogValueAxis(QObject* parent) : QLogValueAxis(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlogvalueaxis_metaobject_callback) {
            QMetaObject* callback_ret = qlogvalueaxis_metaobject_callback(this);
            return callback_ret;
        }
        return QLogValueAxis::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlogvalueaxis_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qlogvalueaxis_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QLogValueAxis::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlogvalueaxis_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qlogvalueaxis_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLogValueAxis::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qlogvalueaxis_type_callback) {
            int callback_ret = qlogvalueaxis_type_callback(this);
            return static_cast<QAbstractAxis::AxisType>(callback_ret);
        }
        return QLogValueAxis::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlogvalueaxis_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qlogvalueaxis_event_callback(this, cbval1);
            return callback_ret;
        }
        return QLogValueAxis::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlogvalueaxis_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qlogvalueaxis_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLogValueAxis::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlogvalueaxis_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qlogvalueaxis_timerevent_callback(this, cbval1);
            return;
        }
        QLogValueAxis::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlogvalueaxis_childevent_callback) {
            QChildEvent* cbval1 = event;
            qlogvalueaxis_childevent_callback(this, cbval1);
            return;
        }
        QLogValueAxis::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlogvalueaxis_customevent_callback) {
            QEvent* cbval1 = event;
            qlogvalueaxis_customevent_callback(this, cbval1);
            return;
        }
        QLogValueAxis::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlogvalueaxis_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlogvalueaxis_connectnotify_callback(this, cbval1);
            return;
        }
        QLogValueAxis::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlogvalueaxis_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlogvalueaxis_disconnectnotify_callback(this, cbval1);
            return;
        }
        QLogValueAxis::disconnectNotify(signal);
    }

    // Friend functions
    friend void QLogValueAxis_SuperTimerEvent(QLogValueAxis* self, QTimerEvent* event);
    friend void QLogValueAxis_SuperChildEvent(QLogValueAxis* self, QChildEvent* event);
    friend void QLogValueAxis_SuperCustomEvent(QLogValueAxis* self, QEvent* event);
    friend void QLogValueAxis_SuperConnectNotify(QLogValueAxis* self, const QMetaMethod* signal);
    friend void QLogValueAxis_SuperDisconnectNotify(QLogValueAxis* self, const QMetaMethod* signal);
};

#endif
