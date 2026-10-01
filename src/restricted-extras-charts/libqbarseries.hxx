#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQBARSERIES_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQBARSERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBarSeries
class VirtualQBarSeries final : public QBarSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBarSeries_MetaObject_Callback = QMetaObject* (*)(const QBarSeries*);
    using QBarSeries_Metacast_Callback = void* (*)(QBarSeries*, const char*);
    using QBarSeries_Metacall_Callback = int (*)(QBarSeries*, int, int, void**);
    using QBarSeries_Type_Callback = int (*)(const QBarSeries*);
    using QBarSeries_Event_Callback = bool (*)(QBarSeries*, QEvent*);
    using QBarSeries_EventFilter_Callback = bool (*)(QBarSeries*, QObject*, QEvent*);
    using QBarSeries_TimerEvent_Callback = void (*)(QBarSeries*, QTimerEvent*);
    using QBarSeries_ChildEvent_Callback = void (*)(QBarSeries*, QChildEvent*);
    using QBarSeries_CustomEvent_Callback = void (*)(QBarSeries*, QEvent*);
    using QBarSeries_ConnectNotify_Callback = void (*)(QBarSeries*, QMetaMethod*);
    using QBarSeries_DisconnectNotify_Callback = void (*)(QBarSeries*, QMetaMethod*);
    using QBarSeries::isSignalConnected;
    using QBarSeries::receivers;
    using QBarSeries::sender;
    using QBarSeries::senderSignalIndex;

    // Instance callback storage
    QBarSeries_MetaObject_Callback qbarseries_metaobject_callback = nullptr;
    QBarSeries_Metacast_Callback qbarseries_metacast_callback = nullptr;
    QBarSeries_Metacall_Callback qbarseries_metacall_callback = nullptr;
    QBarSeries_Type_Callback qbarseries_type_callback = nullptr;
    QBarSeries_Event_Callback qbarseries_event_callback = nullptr;
    QBarSeries_EventFilter_Callback qbarseries_eventfilter_callback = nullptr;
    QBarSeries_TimerEvent_Callback qbarseries_timerevent_callback = nullptr;
    QBarSeries_ChildEvent_Callback qbarseries_childevent_callback = nullptr;
    QBarSeries_CustomEvent_Callback qbarseries_customevent_callback = nullptr;
    QBarSeries_ConnectNotify_Callback qbarseries_connectnotify_callback = nullptr;
    QBarSeries_DisconnectNotify_Callback qbarseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QBarSeries {
        using QBarSeries::childEvent;
        using QBarSeries::connectNotify;
        using QBarSeries::customEvent;
        using QBarSeries::disconnectNotify;
        using QBarSeries::timerEvent;
    };

    VirtualQBarSeries() : QBarSeries() {};
    VirtualQBarSeries(QObject* parent) : QBarSeries(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbarseries_metaobject_callback) {
            QMetaObject* callback_ret = qbarseries_metaobject_callback(this);
            return callback_ret;
        }
        return QBarSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbarseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qbarseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBarSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbarseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qbarseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBarSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qbarseries_type_callback) {
            int callback_ret = qbarseries_type_callback(this);
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QBarSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbarseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qbarseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBarSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbarseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qbarseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBarSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbarseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qbarseries_timerevent_callback(this, cbval1);
            return;
        }
        QBarSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbarseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qbarseries_childevent_callback(this, cbval1);
            return;
        }
        QBarSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbarseries_customevent_callback) {
            QEvent* cbval1 = event;
            qbarseries_customevent_callback(this, cbval1);
            return;
        }
        QBarSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbarseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbarseries_connectnotify_callback(this, cbval1);
            return;
        }
        QBarSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbarseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbarseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBarSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QBarSeries_SuperTimerEvent(QBarSeries* self, QTimerEvent* event);
    friend void QBarSeries_SuperChildEvent(QBarSeries* self, QChildEvent* event);
    friend void QBarSeries_SuperCustomEvent(QBarSeries* self, QEvent* event);
    friend void QBarSeries_SuperConnectNotify(QBarSeries* self, const QMetaMethod* signal);
    friend void QBarSeries_SuperDisconnectNotify(QBarSeries* self, const QMetaMethod* signal);
};

#endif
