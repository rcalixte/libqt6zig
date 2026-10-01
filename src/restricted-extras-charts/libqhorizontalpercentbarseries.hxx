#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQHORIZONTALPERCENTBARSERIES_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQHORIZONTALPERCENTBARSERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHorizontalPercentBarSeries
class VirtualQHorizontalPercentBarSeries final : public QHorizontalPercentBarSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHorizontalPercentBarSeries_MetaObject_Callback = QMetaObject* (*)(const QHorizontalPercentBarSeries*);
    using QHorizontalPercentBarSeries_Metacast_Callback = void* (*)(QHorizontalPercentBarSeries*, const char*);
    using QHorizontalPercentBarSeries_Metacall_Callback = int (*)(QHorizontalPercentBarSeries*, int, int, void**);
    using QHorizontalPercentBarSeries_Type_Callback = int (*)(const QHorizontalPercentBarSeries*);
    using QHorizontalPercentBarSeries_Event_Callback = bool (*)(QHorizontalPercentBarSeries*, QEvent*);
    using QHorizontalPercentBarSeries_EventFilter_Callback = bool (*)(QHorizontalPercentBarSeries*, QObject*, QEvent*);
    using QHorizontalPercentBarSeries_TimerEvent_Callback = void (*)(QHorizontalPercentBarSeries*, QTimerEvent*);
    using QHorizontalPercentBarSeries_ChildEvent_Callback = void (*)(QHorizontalPercentBarSeries*, QChildEvent*);
    using QHorizontalPercentBarSeries_CustomEvent_Callback = void (*)(QHorizontalPercentBarSeries*, QEvent*);
    using QHorizontalPercentBarSeries_ConnectNotify_Callback = void (*)(QHorizontalPercentBarSeries*, QMetaMethod*);
    using QHorizontalPercentBarSeries_DisconnectNotify_Callback = void (*)(QHorizontalPercentBarSeries*, QMetaMethod*);
    using QHorizontalPercentBarSeries::isSignalConnected;
    using QHorizontalPercentBarSeries::receivers;
    using QHorizontalPercentBarSeries::sender;
    using QHorizontalPercentBarSeries::senderSignalIndex;

    // Instance callback storage
    QHorizontalPercentBarSeries_MetaObject_Callback qhorizontalpercentbarseries_metaobject_callback = nullptr;
    QHorizontalPercentBarSeries_Metacast_Callback qhorizontalpercentbarseries_metacast_callback = nullptr;
    QHorizontalPercentBarSeries_Metacall_Callback qhorizontalpercentbarseries_metacall_callback = nullptr;
    QHorizontalPercentBarSeries_Type_Callback qhorizontalpercentbarseries_type_callback = nullptr;
    QHorizontalPercentBarSeries_Event_Callback qhorizontalpercentbarseries_event_callback = nullptr;
    QHorizontalPercentBarSeries_EventFilter_Callback qhorizontalpercentbarseries_eventfilter_callback = nullptr;
    QHorizontalPercentBarSeries_TimerEvent_Callback qhorizontalpercentbarseries_timerevent_callback = nullptr;
    QHorizontalPercentBarSeries_ChildEvent_Callback qhorizontalpercentbarseries_childevent_callback = nullptr;
    QHorizontalPercentBarSeries_CustomEvent_Callback qhorizontalpercentbarseries_customevent_callback = nullptr;
    QHorizontalPercentBarSeries_ConnectNotify_Callback qhorizontalpercentbarseries_connectnotify_callback = nullptr;
    QHorizontalPercentBarSeries_DisconnectNotify_Callback qhorizontalpercentbarseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QHorizontalPercentBarSeries {
        using QHorizontalPercentBarSeries::childEvent;
        using QHorizontalPercentBarSeries::connectNotify;
        using QHorizontalPercentBarSeries::customEvent;
        using QHorizontalPercentBarSeries::disconnectNotify;
        using QHorizontalPercentBarSeries::timerEvent;
    };

    VirtualQHorizontalPercentBarSeries() : QHorizontalPercentBarSeries() {};
    VirtualQHorizontalPercentBarSeries(QObject* parent) : QHorizontalPercentBarSeries(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qhorizontalpercentbarseries_metaobject_callback) {
            QMetaObject* callback_ret = qhorizontalpercentbarseries_metaobject_callback(this);
            return callback_ret;
        }
        return QHorizontalPercentBarSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qhorizontalpercentbarseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qhorizontalpercentbarseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QHorizontalPercentBarSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhorizontalpercentbarseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qhorizontalpercentbarseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QHorizontalPercentBarSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qhorizontalpercentbarseries_type_callback) {
            int callback_ret = qhorizontalpercentbarseries_type_callback(this);
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QHorizontalPercentBarSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhorizontalpercentbarseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qhorizontalpercentbarseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QHorizontalPercentBarSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhorizontalpercentbarseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qhorizontalpercentbarseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QHorizontalPercentBarSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhorizontalpercentbarseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qhorizontalpercentbarseries_timerevent_callback(this, cbval1);
            return;
        }
        QHorizontalPercentBarSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhorizontalpercentbarseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qhorizontalpercentbarseries_childevent_callback(this, cbval1);
            return;
        }
        QHorizontalPercentBarSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhorizontalpercentbarseries_customevent_callback) {
            QEvent* cbval1 = event;
            qhorizontalpercentbarseries_customevent_callback(this, cbval1);
            return;
        }
        QHorizontalPercentBarSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhorizontalpercentbarseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhorizontalpercentbarseries_connectnotify_callback(this, cbval1);
            return;
        }
        QHorizontalPercentBarSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhorizontalpercentbarseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qhorizontalpercentbarseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QHorizontalPercentBarSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QHorizontalPercentBarSeries_SuperTimerEvent(QHorizontalPercentBarSeries* self, QTimerEvent* event);
    friend void QHorizontalPercentBarSeries_SuperChildEvent(QHorizontalPercentBarSeries* self, QChildEvent* event);
    friend void QHorizontalPercentBarSeries_SuperCustomEvent(QHorizontalPercentBarSeries* self, QEvent* event);
    friend void QHorizontalPercentBarSeries_SuperConnectNotify(QHorizontalPercentBarSeries* self, const QMetaMethod* signal);
    friend void QHorizontalPercentBarSeries_SuperDisconnectNotify(QHorizontalPercentBarSeries* self, const QMetaMethod* signal);
};

#endif
