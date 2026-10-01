#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQAREASERIES_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQAREASERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAreaSeries
class VirtualQAreaSeries final : public QAreaSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAreaSeries_MetaObject_Callback = QMetaObject* (*)(const QAreaSeries*);
    using QAreaSeries_Metacast_Callback = void* (*)(QAreaSeries*, const char*);
    using QAreaSeries_Metacall_Callback = int (*)(QAreaSeries*, int, int, void**);
    using QAreaSeries_Type_Callback = int (*)(const QAreaSeries*);
    using QAreaSeries_Event_Callback = bool (*)(QAreaSeries*, QEvent*);
    using QAreaSeries_EventFilter_Callback = bool (*)(QAreaSeries*, QObject*, QEvent*);
    using QAreaSeries_TimerEvent_Callback = void (*)(QAreaSeries*, QTimerEvent*);
    using QAreaSeries_ChildEvent_Callback = void (*)(QAreaSeries*, QChildEvent*);
    using QAreaSeries_CustomEvent_Callback = void (*)(QAreaSeries*, QEvent*);
    using QAreaSeries_ConnectNotify_Callback = void (*)(QAreaSeries*, QMetaMethod*);
    using QAreaSeries_DisconnectNotify_Callback = void (*)(QAreaSeries*, QMetaMethod*);
    using QAreaSeries::isSignalConnected;
    using QAreaSeries::receivers;
    using QAreaSeries::sender;
    using QAreaSeries::senderSignalIndex;

    // Instance callback storage
    QAreaSeries_MetaObject_Callback qareaseries_metaobject_callback = nullptr;
    QAreaSeries_Metacast_Callback qareaseries_metacast_callback = nullptr;
    QAreaSeries_Metacall_Callback qareaseries_metacall_callback = nullptr;
    QAreaSeries_Type_Callback qareaseries_type_callback = nullptr;
    QAreaSeries_Event_Callback qareaseries_event_callback = nullptr;
    QAreaSeries_EventFilter_Callback qareaseries_eventfilter_callback = nullptr;
    QAreaSeries_TimerEvent_Callback qareaseries_timerevent_callback = nullptr;
    QAreaSeries_ChildEvent_Callback qareaseries_childevent_callback = nullptr;
    QAreaSeries_CustomEvent_Callback qareaseries_customevent_callback = nullptr;
    QAreaSeries_ConnectNotify_Callback qareaseries_connectnotify_callback = nullptr;
    QAreaSeries_DisconnectNotify_Callback qareaseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAreaSeries {
        using QAreaSeries::childEvent;
        using QAreaSeries::connectNotify;
        using QAreaSeries::customEvent;
        using QAreaSeries::disconnectNotify;
        using QAreaSeries::timerEvent;
    };

    VirtualQAreaSeries() : QAreaSeries() {};
    VirtualQAreaSeries(QLineSeries* upperSeries) : QAreaSeries(upperSeries) {};
    VirtualQAreaSeries(QObject* parent) : QAreaSeries(parent) {};
    VirtualQAreaSeries(QLineSeries* upperSeries, QLineSeries* lowerSeries) : QAreaSeries(upperSeries, lowerSeries) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qareaseries_metaobject_callback) {
            QMetaObject* callback_ret = qareaseries_metaobject_callback(this);
            return callback_ret;
        }
        return QAreaSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qareaseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qareaseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAreaSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qareaseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qareaseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAreaSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qareaseries_type_callback) {
            int callback_ret = qareaseries_type_callback(this);
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QAreaSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qareaseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qareaseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAreaSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qareaseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qareaseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAreaSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qareaseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qareaseries_timerevent_callback(this, cbval1);
            return;
        }
        QAreaSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qareaseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qareaseries_childevent_callback(this, cbval1);
            return;
        }
        QAreaSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qareaseries_customevent_callback) {
            QEvent* cbval1 = event;
            qareaseries_customevent_callback(this, cbval1);
            return;
        }
        QAreaSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qareaseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qareaseries_connectnotify_callback(this, cbval1);
            return;
        }
        QAreaSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qareaseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qareaseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAreaSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAreaSeries_SuperTimerEvent(QAreaSeries* self, QTimerEvent* event);
    friend void QAreaSeries_SuperChildEvent(QAreaSeries* self, QChildEvent* event);
    friend void QAreaSeries_SuperCustomEvent(QAreaSeries* self, QEvent* event);
    friend void QAreaSeries_SuperConnectNotify(QAreaSeries* self, const QMetaMethod* signal);
    friend void QAreaSeries_SuperDisconnectNotify(QAreaSeries* self, const QMetaMethod* signal);
};

#endif
