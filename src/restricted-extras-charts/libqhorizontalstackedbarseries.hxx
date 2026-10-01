#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQHORIZONTALSTACKEDBARSERIES_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQHORIZONTALSTACKEDBARSERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHorizontalStackedBarSeries
class VirtualQHorizontalStackedBarSeries final : public QHorizontalStackedBarSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHorizontalStackedBarSeries_MetaObject_Callback = QMetaObject* (*)(const QHorizontalStackedBarSeries*);
    using QHorizontalStackedBarSeries_Metacast_Callback = void* (*)(QHorizontalStackedBarSeries*, const char*);
    using QHorizontalStackedBarSeries_Metacall_Callback = int (*)(QHorizontalStackedBarSeries*, int, int, void**);
    using QHorizontalStackedBarSeries_Type_Callback = int (*)(const QHorizontalStackedBarSeries*);
    using QHorizontalStackedBarSeries_Event_Callback = bool (*)(QHorizontalStackedBarSeries*, QEvent*);
    using QHorizontalStackedBarSeries_EventFilter_Callback = bool (*)(QHorizontalStackedBarSeries*, QObject*, QEvent*);
    using QHorizontalStackedBarSeries_TimerEvent_Callback = void (*)(QHorizontalStackedBarSeries*, QTimerEvent*);
    using QHorizontalStackedBarSeries_ChildEvent_Callback = void (*)(QHorizontalStackedBarSeries*, QChildEvent*);
    using QHorizontalStackedBarSeries_CustomEvent_Callback = void (*)(QHorizontalStackedBarSeries*, QEvent*);
    using QHorizontalStackedBarSeries_ConnectNotify_Callback = void (*)(QHorizontalStackedBarSeries*, QMetaMethod*);
    using QHorizontalStackedBarSeries_DisconnectNotify_Callback = void (*)(QHorizontalStackedBarSeries*, QMetaMethod*);
    using QHorizontalStackedBarSeries::isSignalConnected;
    using QHorizontalStackedBarSeries::receivers;
    using QHorizontalStackedBarSeries::sender;
    using QHorizontalStackedBarSeries::senderSignalIndex;

    // Instance callback storage
    QHorizontalStackedBarSeries_MetaObject_Callback qhorizontalstackedbarseries_metaobject_callback = nullptr;
    QHorizontalStackedBarSeries_Metacast_Callback qhorizontalstackedbarseries_metacast_callback = nullptr;
    QHorizontalStackedBarSeries_Metacall_Callback qhorizontalstackedbarseries_metacall_callback = nullptr;
    QHorizontalStackedBarSeries_Type_Callback qhorizontalstackedbarseries_type_callback = nullptr;
    QHorizontalStackedBarSeries_Event_Callback qhorizontalstackedbarseries_event_callback = nullptr;
    QHorizontalStackedBarSeries_EventFilter_Callback qhorizontalstackedbarseries_eventfilter_callback = nullptr;
    QHorizontalStackedBarSeries_TimerEvent_Callback qhorizontalstackedbarseries_timerevent_callback = nullptr;
    QHorizontalStackedBarSeries_ChildEvent_Callback qhorizontalstackedbarseries_childevent_callback = nullptr;
    QHorizontalStackedBarSeries_CustomEvent_Callback qhorizontalstackedbarseries_customevent_callback = nullptr;
    QHorizontalStackedBarSeries_ConnectNotify_Callback qhorizontalstackedbarseries_connectnotify_callback = nullptr;
    QHorizontalStackedBarSeries_DisconnectNotify_Callback qhorizontalstackedbarseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QHorizontalStackedBarSeries {
        using QHorizontalStackedBarSeries::childEvent;
        using QHorizontalStackedBarSeries::connectNotify;
        using QHorizontalStackedBarSeries::customEvent;
        using QHorizontalStackedBarSeries::disconnectNotify;
        using QHorizontalStackedBarSeries::timerEvent;
    };

    VirtualQHorizontalStackedBarSeries() : QHorizontalStackedBarSeries() {};
    VirtualQHorizontalStackedBarSeries(QObject* parent) : QHorizontalStackedBarSeries(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhorizontalstackedbarseries_metaobject_callback) {
            QMetaObject* callback_ret = qhorizontalstackedbarseries_metaobject_callback(this);
            return callback_ret;
        }
        return QHorizontalStackedBarSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhorizontalstackedbarseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qhorizontalstackedbarseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QHorizontalStackedBarSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhorizontalstackedbarseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qhorizontalstackedbarseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHorizontalStackedBarSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qhorizontalstackedbarseries_type_callback) {
            int callback_ret = qhorizontalstackedbarseries_type_callback(this);
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QHorizontalStackedBarSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhorizontalstackedbarseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qhorizontalstackedbarseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QHorizontalStackedBarSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhorizontalstackedbarseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qhorizontalstackedbarseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHorizontalStackedBarSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhorizontalstackedbarseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qhorizontalstackedbarseries_timerevent_callback(this, cbval1);
            return;
        }
        QHorizontalStackedBarSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhorizontalstackedbarseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qhorizontalstackedbarseries_childevent_callback(this, cbval1);
            return;
        }
        QHorizontalStackedBarSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhorizontalstackedbarseries_customevent_callback) {
            QEvent* cbval1 = event;
            qhorizontalstackedbarseries_customevent_callback(this, cbval1);
            return;
        }
        QHorizontalStackedBarSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhorizontalstackedbarseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhorizontalstackedbarseries_connectnotify_callback(this, cbval1);
            return;
        }
        QHorizontalStackedBarSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhorizontalstackedbarseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhorizontalstackedbarseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QHorizontalStackedBarSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QHorizontalStackedBarSeries_SuperTimerEvent(QHorizontalStackedBarSeries* self, QTimerEvent* event);
    friend void QHorizontalStackedBarSeries_SuperChildEvent(QHorizontalStackedBarSeries* self, QChildEvent* event);
    friend void QHorizontalStackedBarSeries_SuperCustomEvent(QHorizontalStackedBarSeries* self, QEvent* event);
    friend void QHorizontalStackedBarSeries_SuperConnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal);
    friend void QHorizontalStackedBarSeries_SuperDisconnectNotify(QHorizontalStackedBarSeries* self, const QMetaMethod* signal);
};

#endif
