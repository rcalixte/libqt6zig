#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQBOXPLOTSERIES_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQBOXPLOTSERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBoxPlotSeries
class VirtualQBoxPlotSeries final : public QBoxPlotSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBoxPlotSeries_MetaObject_Callback = QMetaObject* (*)(const QBoxPlotSeries*);
    using QBoxPlotSeries_Metacast_Callback = void* (*)(QBoxPlotSeries*, const char*);
    using QBoxPlotSeries_Metacall_Callback = int (*)(QBoxPlotSeries*, int, int, void**);
    using QBoxPlotSeries_Type_Callback = int (*)(const QBoxPlotSeries*);
    using QBoxPlotSeries_Event_Callback = bool (*)(QBoxPlotSeries*, QEvent*);
    using QBoxPlotSeries_EventFilter_Callback = bool (*)(QBoxPlotSeries*, QObject*, QEvent*);
    using QBoxPlotSeries_TimerEvent_Callback = void (*)(QBoxPlotSeries*, QTimerEvent*);
    using QBoxPlotSeries_ChildEvent_Callback = void (*)(QBoxPlotSeries*, QChildEvent*);
    using QBoxPlotSeries_CustomEvent_Callback = void (*)(QBoxPlotSeries*, QEvent*);
    using QBoxPlotSeries_ConnectNotify_Callback = void (*)(QBoxPlotSeries*, QMetaMethod*);
    using QBoxPlotSeries_DisconnectNotify_Callback = void (*)(QBoxPlotSeries*, QMetaMethod*);
    using QBoxPlotSeries::isSignalConnected;
    using QBoxPlotSeries::receivers;
    using QBoxPlotSeries::sender;
    using QBoxPlotSeries::senderSignalIndex;

    // Instance callback storage
    QBoxPlotSeries_MetaObject_Callback qboxplotseries_metaobject_callback = nullptr;
    QBoxPlotSeries_Metacast_Callback qboxplotseries_metacast_callback = nullptr;
    QBoxPlotSeries_Metacall_Callback qboxplotseries_metacall_callback = nullptr;
    QBoxPlotSeries_Type_Callback qboxplotseries_type_callback = nullptr;
    QBoxPlotSeries_Event_Callback qboxplotseries_event_callback = nullptr;
    QBoxPlotSeries_EventFilter_Callback qboxplotseries_eventfilter_callback = nullptr;
    QBoxPlotSeries_TimerEvent_Callback qboxplotseries_timerevent_callback = nullptr;
    QBoxPlotSeries_ChildEvent_Callback qboxplotseries_childevent_callback = nullptr;
    QBoxPlotSeries_CustomEvent_Callback qboxplotseries_customevent_callback = nullptr;
    QBoxPlotSeries_ConnectNotify_Callback qboxplotseries_connectnotify_callback = nullptr;
    QBoxPlotSeries_DisconnectNotify_Callback qboxplotseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QBoxPlotSeries {
        using QBoxPlotSeries::childEvent;
        using QBoxPlotSeries::connectNotify;
        using QBoxPlotSeries::customEvent;
        using QBoxPlotSeries::disconnectNotify;
        using QBoxPlotSeries::timerEvent;
    };

    VirtualQBoxPlotSeries() : QBoxPlotSeries() {};
    VirtualQBoxPlotSeries(QObject* parent) : QBoxPlotSeries(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qboxplotseries_metaobject_callback) {
            QMetaObject* callback_ret = qboxplotseries_metaobject_callback(this);
            return callback_ret;
        }
        return QBoxPlotSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qboxplotseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qboxplotseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBoxPlotSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qboxplotseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qboxplotseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBoxPlotSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qboxplotseries_type_callback) {
            int callback_ret = qboxplotseries_type_callback(this);
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QBoxPlotSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qboxplotseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qboxplotseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBoxPlotSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qboxplotseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qboxplotseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBoxPlotSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qboxplotseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qboxplotseries_timerevent_callback(this, cbval1);
            return;
        }
        QBoxPlotSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qboxplotseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qboxplotseries_childevent_callback(this, cbval1);
            return;
        }
        QBoxPlotSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qboxplotseries_customevent_callback) {
            QEvent* cbval1 = event;
            qboxplotseries_customevent_callback(this, cbval1);
            return;
        }
        QBoxPlotSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qboxplotseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qboxplotseries_connectnotify_callback(this, cbval1);
            return;
        }
        QBoxPlotSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qboxplotseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qboxplotseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBoxPlotSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QBoxPlotSeries_SuperTimerEvent(QBoxPlotSeries* self, QTimerEvent* event);
    friend void QBoxPlotSeries_SuperChildEvent(QBoxPlotSeries* self, QChildEvent* event);
    friend void QBoxPlotSeries_SuperCustomEvent(QBoxPlotSeries* self, QEvent* event);
    friend void QBoxPlotSeries_SuperConnectNotify(QBoxPlotSeries* self, const QMetaMethod* signal);
    friend void QBoxPlotSeries_SuperDisconnectNotify(QBoxPlotSeries* self, const QMetaMethod* signal);
};

#endif
