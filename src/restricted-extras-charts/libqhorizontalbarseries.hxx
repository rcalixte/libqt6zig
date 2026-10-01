#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQHORIZONTALBARSERIES_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQHORIZONTALBARSERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHorizontalBarSeries
class VirtualQHorizontalBarSeries final : public QHorizontalBarSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHorizontalBarSeries_MetaObject_Callback = QMetaObject* (*)(const QHorizontalBarSeries*);
    using QHorizontalBarSeries_Metacast_Callback = void* (*)(QHorizontalBarSeries*, const char*);
    using QHorizontalBarSeries_Metacall_Callback = int (*)(QHorizontalBarSeries*, int, int, void**);
    using QHorizontalBarSeries_Type_Callback = int (*)(const QHorizontalBarSeries*);
    using QHorizontalBarSeries_Event_Callback = bool (*)(QHorizontalBarSeries*, QEvent*);
    using QHorizontalBarSeries_EventFilter_Callback = bool (*)(QHorizontalBarSeries*, QObject*, QEvent*);
    using QHorizontalBarSeries_TimerEvent_Callback = void (*)(QHorizontalBarSeries*, QTimerEvent*);
    using QHorizontalBarSeries_ChildEvent_Callback = void (*)(QHorizontalBarSeries*, QChildEvent*);
    using QHorizontalBarSeries_CustomEvent_Callback = void (*)(QHorizontalBarSeries*, QEvent*);
    using QHorizontalBarSeries_ConnectNotify_Callback = void (*)(QHorizontalBarSeries*, QMetaMethod*);
    using QHorizontalBarSeries_DisconnectNotify_Callback = void (*)(QHorizontalBarSeries*, QMetaMethod*);
    using QHorizontalBarSeries::isSignalConnected;
    using QHorizontalBarSeries::receivers;
    using QHorizontalBarSeries::sender;
    using QHorizontalBarSeries::senderSignalIndex;

    // Instance callback storage
    QHorizontalBarSeries_MetaObject_Callback qhorizontalbarseries_metaobject_callback = nullptr;
    QHorizontalBarSeries_Metacast_Callback qhorizontalbarseries_metacast_callback = nullptr;
    QHorizontalBarSeries_Metacall_Callback qhorizontalbarseries_metacall_callback = nullptr;
    QHorizontalBarSeries_Type_Callback qhorizontalbarseries_type_callback = nullptr;
    QHorizontalBarSeries_Event_Callback qhorizontalbarseries_event_callback = nullptr;
    QHorizontalBarSeries_EventFilter_Callback qhorizontalbarseries_eventfilter_callback = nullptr;
    QHorizontalBarSeries_TimerEvent_Callback qhorizontalbarseries_timerevent_callback = nullptr;
    QHorizontalBarSeries_ChildEvent_Callback qhorizontalbarseries_childevent_callback = nullptr;
    QHorizontalBarSeries_CustomEvent_Callback qhorizontalbarseries_customevent_callback = nullptr;
    QHorizontalBarSeries_ConnectNotify_Callback qhorizontalbarseries_connectnotify_callback = nullptr;
    QHorizontalBarSeries_DisconnectNotify_Callback qhorizontalbarseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QHorizontalBarSeries {
        using QHorizontalBarSeries::childEvent;
        using QHorizontalBarSeries::connectNotify;
        using QHorizontalBarSeries::customEvent;
        using QHorizontalBarSeries::disconnectNotify;
        using QHorizontalBarSeries::timerEvent;
    };

    VirtualQHorizontalBarSeries() : QHorizontalBarSeries() {};
    VirtualQHorizontalBarSeries(QObject* parent) : QHorizontalBarSeries(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhorizontalbarseries_metaobject_callback) {
            QMetaObject* callback_ret = qhorizontalbarseries_metaobject_callback(this);
            return callback_ret;
        }
        return QHorizontalBarSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhorizontalbarseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qhorizontalbarseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QHorizontalBarSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhorizontalbarseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qhorizontalbarseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHorizontalBarSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qhorizontalbarseries_type_callback) {
            int callback_ret = qhorizontalbarseries_type_callback(this);
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QHorizontalBarSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhorizontalbarseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qhorizontalbarseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QHorizontalBarSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhorizontalbarseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qhorizontalbarseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHorizontalBarSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhorizontalbarseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qhorizontalbarseries_timerevent_callback(this, cbval1);
            return;
        }
        QHorizontalBarSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhorizontalbarseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qhorizontalbarseries_childevent_callback(this, cbval1);
            return;
        }
        QHorizontalBarSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhorizontalbarseries_customevent_callback) {
            QEvent* cbval1 = event;
            qhorizontalbarseries_customevent_callback(this, cbval1);
            return;
        }
        QHorizontalBarSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhorizontalbarseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhorizontalbarseries_connectnotify_callback(this, cbval1);
            return;
        }
        QHorizontalBarSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhorizontalbarseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhorizontalbarseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QHorizontalBarSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QHorizontalBarSeries_SuperTimerEvent(QHorizontalBarSeries* self, QTimerEvent* event);
    friend void QHorizontalBarSeries_SuperChildEvent(QHorizontalBarSeries* self, QChildEvent* event);
    friend void QHorizontalBarSeries_SuperCustomEvent(QHorizontalBarSeries* self, QEvent* event);
    friend void QHorizontalBarSeries_SuperConnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
    friend void QHorizontalBarSeries_SuperDisconnectNotify(QHorizontalBarSeries* self, const QMetaMethod* signal);
};

#endif
