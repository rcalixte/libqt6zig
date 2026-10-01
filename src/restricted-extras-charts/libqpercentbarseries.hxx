#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQPERCENTBARSERIES_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQPERCENTBARSERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPercentBarSeries
class VirtualQPercentBarSeries final : public QPercentBarSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPercentBarSeries_MetaObject_Callback = QMetaObject* (*)(const QPercentBarSeries*);
    using QPercentBarSeries_Metacast_Callback = void* (*)(QPercentBarSeries*, const char*);
    using QPercentBarSeries_Metacall_Callback = int (*)(QPercentBarSeries*, int, int, void**);
    using QPercentBarSeries_Type_Callback = int (*)(const QPercentBarSeries*);
    using QPercentBarSeries_Event_Callback = bool (*)(QPercentBarSeries*, QEvent*);
    using QPercentBarSeries_EventFilter_Callback = bool (*)(QPercentBarSeries*, QObject*, QEvent*);
    using QPercentBarSeries_TimerEvent_Callback = void (*)(QPercentBarSeries*, QTimerEvent*);
    using QPercentBarSeries_ChildEvent_Callback = void (*)(QPercentBarSeries*, QChildEvent*);
    using QPercentBarSeries_CustomEvent_Callback = void (*)(QPercentBarSeries*, QEvent*);
    using QPercentBarSeries_ConnectNotify_Callback = void (*)(QPercentBarSeries*, QMetaMethod*);
    using QPercentBarSeries_DisconnectNotify_Callback = void (*)(QPercentBarSeries*, QMetaMethod*);
    using QPercentBarSeries::isSignalConnected;
    using QPercentBarSeries::receivers;
    using QPercentBarSeries::sender;
    using QPercentBarSeries::senderSignalIndex;

    // Instance callback storage
    QPercentBarSeries_MetaObject_Callback qpercentbarseries_metaobject_callback = nullptr;
    QPercentBarSeries_Metacast_Callback qpercentbarseries_metacast_callback = nullptr;
    QPercentBarSeries_Metacall_Callback qpercentbarseries_metacall_callback = nullptr;
    QPercentBarSeries_Type_Callback qpercentbarseries_type_callback = nullptr;
    QPercentBarSeries_Event_Callback qpercentbarseries_event_callback = nullptr;
    QPercentBarSeries_EventFilter_Callback qpercentbarseries_eventfilter_callback = nullptr;
    QPercentBarSeries_TimerEvent_Callback qpercentbarseries_timerevent_callback = nullptr;
    QPercentBarSeries_ChildEvent_Callback qpercentbarseries_childevent_callback = nullptr;
    QPercentBarSeries_CustomEvent_Callback qpercentbarseries_customevent_callback = nullptr;
    QPercentBarSeries_ConnectNotify_Callback qpercentbarseries_connectnotify_callback = nullptr;
    QPercentBarSeries_DisconnectNotify_Callback qpercentbarseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPercentBarSeries {
        using QPercentBarSeries::childEvent;
        using QPercentBarSeries::connectNotify;
        using QPercentBarSeries::customEvent;
        using QPercentBarSeries::disconnectNotify;
        using QPercentBarSeries::timerEvent;
    };

    VirtualQPercentBarSeries() : QPercentBarSeries() {};
    VirtualQPercentBarSeries(QObject* parent) : QPercentBarSeries(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpercentbarseries_metaobject_callback) {
            QMetaObject* callback_ret = qpercentbarseries_metaobject_callback(this);
            return callback_ret;
        }
        return QPercentBarSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpercentbarseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpercentbarseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPercentBarSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpercentbarseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpercentbarseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPercentBarSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qpercentbarseries_type_callback) {
            int callback_ret = qpercentbarseries_type_callback(this);
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QPercentBarSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpercentbarseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpercentbarseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPercentBarSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpercentbarseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpercentbarseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPercentBarSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpercentbarseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpercentbarseries_timerevent_callback(this, cbval1);
            return;
        }
        QPercentBarSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpercentbarseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpercentbarseries_childevent_callback(this, cbval1);
            return;
        }
        QPercentBarSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpercentbarseries_customevent_callback) {
            QEvent* cbval1 = event;
            qpercentbarseries_customevent_callback(this, cbval1);
            return;
        }
        QPercentBarSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpercentbarseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpercentbarseries_connectnotify_callback(this, cbval1);
            return;
        }
        QPercentBarSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpercentbarseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpercentbarseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPercentBarSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPercentBarSeries_SuperTimerEvent(QPercentBarSeries* self, QTimerEvent* event);
    friend void QPercentBarSeries_SuperChildEvent(QPercentBarSeries* self, QChildEvent* event);
    friend void QPercentBarSeries_SuperCustomEvent(QPercentBarSeries* self, QEvent* event);
    friend void QPercentBarSeries_SuperConnectNotify(QPercentBarSeries* self, const QMetaMethod* signal);
    friend void QPercentBarSeries_SuperDisconnectNotify(QPercentBarSeries* self, const QMetaMethod* signal);
};

#endif
