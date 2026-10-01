#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKSERIES_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKSERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCandlestickSeries
class VirtualQCandlestickSeries final : public QCandlestickSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCandlestickSeries_MetaObject_Callback = QMetaObject* (*)(const QCandlestickSeries*);
    using QCandlestickSeries_Metacast_Callback = void* (*)(QCandlestickSeries*, const char*);
    using QCandlestickSeries_Metacall_Callback = int (*)(QCandlestickSeries*, int, int, void**);
    using QCandlestickSeries_Type_Callback = int (*)(const QCandlestickSeries*);
    using QCandlestickSeries_Event_Callback = bool (*)(QCandlestickSeries*, QEvent*);
    using QCandlestickSeries_EventFilter_Callback = bool (*)(QCandlestickSeries*, QObject*, QEvent*);
    using QCandlestickSeries_TimerEvent_Callback = void (*)(QCandlestickSeries*, QTimerEvent*);
    using QCandlestickSeries_ChildEvent_Callback = void (*)(QCandlestickSeries*, QChildEvent*);
    using QCandlestickSeries_CustomEvent_Callback = void (*)(QCandlestickSeries*, QEvent*);
    using QCandlestickSeries_ConnectNotify_Callback = void (*)(QCandlestickSeries*, QMetaMethod*);
    using QCandlestickSeries_DisconnectNotify_Callback = void (*)(QCandlestickSeries*, QMetaMethod*);
    using QCandlestickSeries::isSignalConnected;
    using QCandlestickSeries::receivers;
    using QCandlestickSeries::sender;
    using QCandlestickSeries::senderSignalIndex;

    // Instance callback storage
    QCandlestickSeries_MetaObject_Callback qcandlestickseries_metaobject_callback = nullptr;
    QCandlestickSeries_Metacast_Callback qcandlestickseries_metacast_callback = nullptr;
    QCandlestickSeries_Metacall_Callback qcandlestickseries_metacall_callback = nullptr;
    QCandlestickSeries_Type_Callback qcandlestickseries_type_callback = nullptr;
    QCandlestickSeries_Event_Callback qcandlestickseries_event_callback = nullptr;
    QCandlestickSeries_EventFilter_Callback qcandlestickseries_eventfilter_callback = nullptr;
    QCandlestickSeries_TimerEvent_Callback qcandlestickseries_timerevent_callback = nullptr;
    QCandlestickSeries_ChildEvent_Callback qcandlestickseries_childevent_callback = nullptr;
    QCandlestickSeries_CustomEvent_Callback qcandlestickseries_customevent_callback = nullptr;
    QCandlestickSeries_ConnectNotify_Callback qcandlestickseries_connectnotify_callback = nullptr;
    QCandlestickSeries_DisconnectNotify_Callback qcandlestickseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCandlestickSeries {
        using QCandlestickSeries::childEvent;
        using QCandlestickSeries::connectNotify;
        using QCandlestickSeries::customEvent;
        using QCandlestickSeries::disconnectNotify;
        using QCandlestickSeries::timerEvent;
    };

    VirtualQCandlestickSeries() : QCandlestickSeries() {};
    VirtualQCandlestickSeries(QObject* parent) : QCandlestickSeries(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcandlestickseries_metaobject_callback) {
            QMetaObject* callback_ret = qcandlestickseries_metaobject_callback(this);
            return callback_ret;
        }
        return QCandlestickSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcandlestickseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcandlestickseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCandlestickSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcandlestickseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcandlestickseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCandlestickSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qcandlestickseries_type_callback) {
            int callback_ret = qcandlestickseries_type_callback(this);
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QCandlestickSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcandlestickseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcandlestickseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCandlestickSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcandlestickseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcandlestickseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCandlestickSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcandlestickseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcandlestickseries_timerevent_callback(this, cbval1);
            return;
        }
        QCandlestickSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcandlestickseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcandlestickseries_childevent_callback(this, cbval1);
            return;
        }
        QCandlestickSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcandlestickseries_customevent_callback) {
            QEvent* cbval1 = event;
            qcandlestickseries_customevent_callback(this, cbval1);
            return;
        }
        QCandlestickSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcandlestickseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcandlestickseries_connectnotify_callback(this, cbval1);
            return;
        }
        QCandlestickSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcandlestickseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcandlestickseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCandlestickSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QCandlestickSeries_SuperTimerEvent(QCandlestickSeries* self, QTimerEvent* event);
    friend void QCandlestickSeries_SuperChildEvent(QCandlestickSeries* self, QChildEvent* event);
    friend void QCandlestickSeries_SuperCustomEvent(QCandlestickSeries* self, QEvent* event);
    friend void QCandlestickSeries_SuperConnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
    friend void QCandlestickSeries_SuperDisconnectNotify(QCandlestickSeries* self, const QMetaMethod* signal);
};

#endif
