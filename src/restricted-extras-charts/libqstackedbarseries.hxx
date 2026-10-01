#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQSTACKEDBARSERIES_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQSTACKEDBARSERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QStackedBarSeries
class VirtualQStackedBarSeries final : public QStackedBarSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStackedBarSeries_MetaObject_Callback = QMetaObject* (*)(const QStackedBarSeries*);
    using QStackedBarSeries_Metacast_Callback = void* (*)(QStackedBarSeries*, const char*);
    using QStackedBarSeries_Metacall_Callback = int (*)(QStackedBarSeries*, int, int, void**);
    using QStackedBarSeries_Type_Callback = int (*)(const QStackedBarSeries*);
    using QStackedBarSeries_Event_Callback = bool (*)(QStackedBarSeries*, QEvent*);
    using QStackedBarSeries_EventFilter_Callback = bool (*)(QStackedBarSeries*, QObject*, QEvent*);
    using QStackedBarSeries_TimerEvent_Callback = void (*)(QStackedBarSeries*, QTimerEvent*);
    using QStackedBarSeries_ChildEvent_Callback = void (*)(QStackedBarSeries*, QChildEvent*);
    using QStackedBarSeries_CustomEvent_Callback = void (*)(QStackedBarSeries*, QEvent*);
    using QStackedBarSeries_ConnectNotify_Callback = void (*)(QStackedBarSeries*, QMetaMethod*);
    using QStackedBarSeries_DisconnectNotify_Callback = void (*)(QStackedBarSeries*, QMetaMethod*);
    using QStackedBarSeries::isSignalConnected;
    using QStackedBarSeries::receivers;
    using QStackedBarSeries::sender;
    using QStackedBarSeries::senderSignalIndex;

    // Instance callback storage
    QStackedBarSeries_MetaObject_Callback qstackedbarseries_metaobject_callback = nullptr;
    QStackedBarSeries_Metacast_Callback qstackedbarseries_metacast_callback = nullptr;
    QStackedBarSeries_Metacall_Callback qstackedbarseries_metacall_callback = nullptr;
    QStackedBarSeries_Type_Callback qstackedbarseries_type_callback = nullptr;
    QStackedBarSeries_Event_Callback qstackedbarseries_event_callback = nullptr;
    QStackedBarSeries_EventFilter_Callback qstackedbarseries_eventfilter_callback = nullptr;
    QStackedBarSeries_TimerEvent_Callback qstackedbarseries_timerevent_callback = nullptr;
    QStackedBarSeries_ChildEvent_Callback qstackedbarseries_childevent_callback = nullptr;
    QStackedBarSeries_CustomEvent_Callback qstackedbarseries_customevent_callback = nullptr;
    QStackedBarSeries_ConnectNotify_Callback qstackedbarseries_connectnotify_callback = nullptr;
    QStackedBarSeries_DisconnectNotify_Callback qstackedbarseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QStackedBarSeries {
        using QStackedBarSeries::childEvent;
        using QStackedBarSeries::connectNotify;
        using QStackedBarSeries::customEvent;
        using QStackedBarSeries::disconnectNotify;
        using QStackedBarSeries::timerEvent;
    };

    VirtualQStackedBarSeries() : QStackedBarSeries() {};
    VirtualQStackedBarSeries(QObject* parent) : QStackedBarSeries(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstackedbarseries_metaobject_callback) {
            QMetaObject* callback_ret = qstackedbarseries_metaobject_callback(this);
            return callback_ret;
        }
        return QStackedBarSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstackedbarseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qstackedbarseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QStackedBarSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstackedbarseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qstackedbarseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStackedBarSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qstackedbarseries_type_callback) {
            int callback_ret = qstackedbarseries_type_callback(this);
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QStackedBarSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstackedbarseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qstackedbarseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QStackedBarSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstackedbarseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qstackedbarseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStackedBarSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstackedbarseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qstackedbarseries_timerevent_callback(this, cbval1);
            return;
        }
        QStackedBarSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstackedbarseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qstackedbarseries_childevent_callback(this, cbval1);
            return;
        }
        QStackedBarSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstackedbarseries_customevent_callback) {
            QEvent* cbval1 = event;
            qstackedbarseries_customevent_callback(this, cbval1);
            return;
        }
        QStackedBarSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstackedbarseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstackedbarseries_connectnotify_callback(this, cbval1);
            return;
        }
        QStackedBarSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstackedbarseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstackedbarseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QStackedBarSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QStackedBarSeries_SuperTimerEvent(QStackedBarSeries* self, QTimerEvent* event);
    friend void QStackedBarSeries_SuperChildEvent(QStackedBarSeries* self, QChildEvent* event);
    friend void QStackedBarSeries_SuperCustomEvent(QStackedBarSeries* self, QEvent* event);
    friend void QStackedBarSeries_SuperConnectNotify(QStackedBarSeries* self, const QMetaMethod* signal);
    friend void QStackedBarSeries_SuperDisconnectNotify(QStackedBarSeries* self, const QMetaMethod* signal);
};

#endif
