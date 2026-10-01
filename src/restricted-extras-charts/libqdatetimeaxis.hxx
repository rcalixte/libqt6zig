#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQDATETIMEAXIS_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQDATETIMEAXIS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDateTimeAxis
class VirtualQDateTimeAxis final : public QDateTimeAxis {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDateTimeAxis_MetaObject_Callback = QMetaObject* (*)(const QDateTimeAxis*);
    using QDateTimeAxis_Metacast_Callback = void* (*)(QDateTimeAxis*, const char*);
    using QDateTimeAxis_Metacall_Callback = int (*)(QDateTimeAxis*, int, int, void**);
    using QDateTimeAxis_Type_Callback = int (*)(const QDateTimeAxis*);
    using QDateTimeAxis_Event_Callback = bool (*)(QDateTimeAxis*, QEvent*);
    using QDateTimeAxis_EventFilter_Callback = bool (*)(QDateTimeAxis*, QObject*, QEvent*);
    using QDateTimeAxis_TimerEvent_Callback = void (*)(QDateTimeAxis*, QTimerEvent*);
    using QDateTimeAxis_ChildEvent_Callback = void (*)(QDateTimeAxis*, QChildEvent*);
    using QDateTimeAxis_CustomEvent_Callback = void (*)(QDateTimeAxis*, QEvent*);
    using QDateTimeAxis_ConnectNotify_Callback = void (*)(QDateTimeAxis*, QMetaMethod*);
    using QDateTimeAxis_DisconnectNotify_Callback = void (*)(QDateTimeAxis*, QMetaMethod*);
    using QDateTimeAxis::isSignalConnected;
    using QDateTimeAxis::receivers;
    using QDateTimeAxis::sender;
    using QDateTimeAxis::senderSignalIndex;

    // Instance callback storage
    QDateTimeAxis_MetaObject_Callback qdatetimeaxis_metaobject_callback = nullptr;
    QDateTimeAxis_Metacast_Callback qdatetimeaxis_metacast_callback = nullptr;
    QDateTimeAxis_Metacall_Callback qdatetimeaxis_metacall_callback = nullptr;
    QDateTimeAxis_Type_Callback qdatetimeaxis_type_callback = nullptr;
    QDateTimeAxis_Event_Callback qdatetimeaxis_event_callback = nullptr;
    QDateTimeAxis_EventFilter_Callback qdatetimeaxis_eventfilter_callback = nullptr;
    QDateTimeAxis_TimerEvent_Callback qdatetimeaxis_timerevent_callback = nullptr;
    QDateTimeAxis_ChildEvent_Callback qdatetimeaxis_childevent_callback = nullptr;
    QDateTimeAxis_CustomEvent_Callback qdatetimeaxis_customevent_callback = nullptr;
    QDateTimeAxis_ConnectNotify_Callback qdatetimeaxis_connectnotify_callback = nullptr;
    QDateTimeAxis_DisconnectNotify_Callback qdatetimeaxis_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDateTimeAxis {
        using QDateTimeAxis::childEvent;
        using QDateTimeAxis::connectNotify;
        using QDateTimeAxis::customEvent;
        using QDateTimeAxis::disconnectNotify;
        using QDateTimeAxis::timerEvent;
    };

    VirtualQDateTimeAxis() : QDateTimeAxis() {};
    VirtualQDateTimeAxis(QObject* parent) : QDateTimeAxis(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdatetimeaxis_metaobject_callback) {
            QMetaObject* callback_ret = qdatetimeaxis_metaobject_callback(this);
            return callback_ret;
        }
        return QDateTimeAxis::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdatetimeaxis_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdatetimeaxis_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDateTimeAxis::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdatetimeaxis_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdatetimeaxis_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDateTimeAxis::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qdatetimeaxis_type_callback) {
            int callback_ret = qdatetimeaxis_type_callback(this);
            return static_cast<QAbstractAxis::AxisType>(callback_ret);
        }
        return QDateTimeAxis::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdatetimeaxis_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdatetimeaxis_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDateTimeAxis::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdatetimeaxis_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdatetimeaxis_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDateTimeAxis::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdatetimeaxis_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdatetimeaxis_timerevent_callback(this, cbval1);
            return;
        }
        QDateTimeAxis::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdatetimeaxis_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdatetimeaxis_childevent_callback(this, cbval1);
            return;
        }
        QDateTimeAxis::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdatetimeaxis_customevent_callback) {
            QEvent* cbval1 = event;
            qdatetimeaxis_customevent_callback(this, cbval1);
            return;
        }
        QDateTimeAxis::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdatetimeaxis_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdatetimeaxis_connectnotify_callback(this, cbval1);
            return;
        }
        QDateTimeAxis::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdatetimeaxis_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdatetimeaxis_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDateTimeAxis::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDateTimeAxis_SuperTimerEvent(QDateTimeAxis* self, QTimerEvent* event);
    friend void QDateTimeAxis_SuperChildEvent(QDateTimeAxis* self, QChildEvent* event);
    friend void QDateTimeAxis_SuperCustomEvent(QDateTimeAxis* self, QEvent* event);
    friend void QDateTimeAxis_SuperConnectNotify(QDateTimeAxis* self, const QMetaMethod* signal);
    friend void QDateTimeAxis_SuperDisconnectNotify(QDateTimeAxis* self, const QMetaMethod* signal);
};

#endif
