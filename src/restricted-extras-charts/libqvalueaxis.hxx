#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQVALUEAXIS_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQVALUEAXIS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QValueAxis
class VirtualQValueAxis final : public QValueAxis {
  public:
    // Virtual class public types (including callbacks and access types)
    using QValueAxis_MetaObject_Callback = QMetaObject* (*)(const QValueAxis*);
    using QValueAxis_Metacast_Callback = void* (*)(QValueAxis*, const char*);
    using QValueAxis_Metacall_Callback = int (*)(QValueAxis*, int, int, void**);
    using QValueAxis_Type_Callback = int (*)(const QValueAxis*);
    using QValueAxis_Event_Callback = bool (*)(QValueAxis*, QEvent*);
    using QValueAxis_EventFilter_Callback = bool (*)(QValueAxis*, QObject*, QEvent*);
    using QValueAxis_TimerEvent_Callback = void (*)(QValueAxis*, QTimerEvent*);
    using QValueAxis_ChildEvent_Callback = void (*)(QValueAxis*, QChildEvent*);
    using QValueAxis_CustomEvent_Callback = void (*)(QValueAxis*, QEvent*);
    using QValueAxis_ConnectNotify_Callback = void (*)(QValueAxis*, QMetaMethod*);
    using QValueAxis_DisconnectNotify_Callback = void (*)(QValueAxis*, QMetaMethod*);
    using QValueAxis::isSignalConnected;
    using QValueAxis::receivers;
    using QValueAxis::sender;
    using QValueAxis::senderSignalIndex;

    // Instance callback storage
    QValueAxis_MetaObject_Callback qvalueaxis_metaobject_callback = nullptr;
    QValueAxis_Metacast_Callback qvalueaxis_metacast_callback = nullptr;
    QValueAxis_Metacall_Callback qvalueaxis_metacall_callback = nullptr;
    QValueAxis_Type_Callback qvalueaxis_type_callback = nullptr;
    QValueAxis_Event_Callback qvalueaxis_event_callback = nullptr;
    QValueAxis_EventFilter_Callback qvalueaxis_eventfilter_callback = nullptr;
    QValueAxis_TimerEvent_Callback qvalueaxis_timerevent_callback = nullptr;
    QValueAxis_ChildEvent_Callback qvalueaxis_childevent_callback = nullptr;
    QValueAxis_CustomEvent_Callback qvalueaxis_customevent_callback = nullptr;
    QValueAxis_ConnectNotify_Callback qvalueaxis_connectnotify_callback = nullptr;
    QValueAxis_DisconnectNotify_Callback qvalueaxis_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QValueAxis {
        using QValueAxis::childEvent;
        using QValueAxis::connectNotify;
        using QValueAxis::customEvent;
        using QValueAxis::disconnectNotify;
        using QValueAxis::timerEvent;
    };

    VirtualQValueAxis() : QValueAxis() {};
    VirtualQValueAxis(QObject* parent) : QValueAxis(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvalueaxis_metaobject_callback) {
            QMetaObject* callback_ret = qvalueaxis_metaobject_callback(this);
            return callback_ret;
        }
        return QValueAxis::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvalueaxis_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvalueaxis_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QValueAxis::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvalueaxis_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvalueaxis_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QValueAxis::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qvalueaxis_type_callback) {
            int callback_ret = qvalueaxis_type_callback(this);
            return static_cast<QAbstractAxis::AxisType>(callback_ret);
        }
        return QValueAxis::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvalueaxis_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvalueaxis_event_callback(this, cbval1);
            return callback_ret;
        }
        return QValueAxis::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvalueaxis_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvalueaxis_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QValueAxis::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvalueaxis_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvalueaxis_timerevent_callback(this, cbval1);
            return;
        }
        QValueAxis::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvalueaxis_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvalueaxis_childevent_callback(this, cbval1);
            return;
        }
        QValueAxis::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvalueaxis_customevent_callback) {
            QEvent* cbval1 = event;
            qvalueaxis_customevent_callback(this, cbval1);
            return;
        }
        QValueAxis::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvalueaxis_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvalueaxis_connectnotify_callback(this, cbval1);
            return;
        }
        QValueAxis::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvalueaxis_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvalueaxis_disconnectnotify_callback(this, cbval1);
            return;
        }
        QValueAxis::disconnectNotify(signal);
    }

    // Friend functions
    friend void QValueAxis_SuperTimerEvent(QValueAxis* self, QTimerEvent* event);
    friend void QValueAxis_SuperChildEvent(QValueAxis* self, QChildEvent* event);
    friend void QValueAxis_SuperCustomEvent(QValueAxis* self, QEvent* event);
    friend void QValueAxis_SuperConnectNotify(QValueAxis* self, const QMetaMethod* signal);
    friend void QValueAxis_SuperDisconnectNotify(QValueAxis* self, const QMetaMethod* signal);
};

#endif
