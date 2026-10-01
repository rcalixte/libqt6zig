#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQPIESERIES_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQPIESERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPieSeries
class VirtualQPieSeries final : public QPieSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPieSeries_MetaObject_Callback = QMetaObject* (*)(const QPieSeries*);
    using QPieSeries_Metacast_Callback = void* (*)(QPieSeries*, const char*);
    using QPieSeries_Metacall_Callback = int (*)(QPieSeries*, int, int, void**);
    using QPieSeries_Type_Callback = int (*)(const QPieSeries*);
    using QPieSeries_Event_Callback = bool (*)(QPieSeries*, QEvent*);
    using QPieSeries_EventFilter_Callback = bool (*)(QPieSeries*, QObject*, QEvent*);
    using QPieSeries_TimerEvent_Callback = void (*)(QPieSeries*, QTimerEvent*);
    using QPieSeries_ChildEvent_Callback = void (*)(QPieSeries*, QChildEvent*);
    using QPieSeries_CustomEvent_Callback = void (*)(QPieSeries*, QEvent*);
    using QPieSeries_ConnectNotify_Callback = void (*)(QPieSeries*, QMetaMethod*);
    using QPieSeries_DisconnectNotify_Callback = void (*)(QPieSeries*, QMetaMethod*);
    using QPieSeries::isSignalConnected;
    using QPieSeries::receivers;
    using QPieSeries::sender;
    using QPieSeries::senderSignalIndex;

    // Instance callback storage
    QPieSeries_MetaObject_Callback qpieseries_metaobject_callback = nullptr;
    QPieSeries_Metacast_Callback qpieseries_metacast_callback = nullptr;
    QPieSeries_Metacall_Callback qpieseries_metacall_callback = nullptr;
    QPieSeries_Type_Callback qpieseries_type_callback = nullptr;
    QPieSeries_Event_Callback qpieseries_event_callback = nullptr;
    QPieSeries_EventFilter_Callback qpieseries_eventfilter_callback = nullptr;
    QPieSeries_TimerEvent_Callback qpieseries_timerevent_callback = nullptr;
    QPieSeries_ChildEvent_Callback qpieseries_childevent_callback = nullptr;
    QPieSeries_CustomEvent_Callback qpieseries_customevent_callback = nullptr;
    QPieSeries_ConnectNotify_Callback qpieseries_connectnotify_callback = nullptr;
    QPieSeries_DisconnectNotify_Callback qpieseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPieSeries {
        using QPieSeries::childEvent;
        using QPieSeries::connectNotify;
        using QPieSeries::customEvent;
        using QPieSeries::disconnectNotify;
        using QPieSeries::timerEvent;
    };

    VirtualQPieSeries() : QPieSeries() {};
    VirtualQPieSeries(QObject* parent) : QPieSeries(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpieseries_metaobject_callback) {
            QMetaObject* callback_ret = qpieseries_metaobject_callback(this);
            return callback_ret;
        }
        return QPieSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpieseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpieseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPieSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpieseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpieseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPieSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qpieseries_type_callback) {
            int callback_ret = qpieseries_type_callback(this);
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QPieSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpieseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpieseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPieSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpieseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpieseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPieSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpieseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpieseries_timerevent_callback(this, cbval1);
            return;
        }
        QPieSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpieseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpieseries_childevent_callback(this, cbval1);
            return;
        }
        QPieSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpieseries_customevent_callback) {
            QEvent* cbval1 = event;
            qpieseries_customevent_callback(this, cbval1);
            return;
        }
        QPieSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpieseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpieseries_connectnotify_callback(this, cbval1);
            return;
        }
        QPieSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpieseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpieseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPieSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPieSeries_SuperTimerEvent(QPieSeries* self, QTimerEvent* event);
    friend void QPieSeries_SuperChildEvent(QPieSeries* self, QChildEvent* event);
    friend void QPieSeries_SuperCustomEvent(QPieSeries* self, QEvent* event);
    friend void QPieSeries_SuperConnectNotify(QPieSeries* self, const QMetaMethod* signal);
    friend void QPieSeries_SuperDisconnectNotify(QPieSeries* self, const QMetaMethod* signal);
};

#endif
