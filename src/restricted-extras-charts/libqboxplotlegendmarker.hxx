#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQBOXPLOTLEGENDMARKER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQBOXPLOTLEGENDMARKER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBoxPlotLegendMarker
class VirtualQBoxPlotLegendMarker final : public QBoxPlotLegendMarker {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBoxPlotLegendMarker_MetaObject_Callback = QMetaObject* (*)(const QBoxPlotLegendMarker*);
    using QBoxPlotLegendMarker_Metacast_Callback = void* (*)(QBoxPlotLegendMarker*, const char*);
    using QBoxPlotLegendMarker_Metacall_Callback = int (*)(QBoxPlotLegendMarker*, int, int, void**);
    using QBoxPlotLegendMarker_Type_Callback = int (*)(QBoxPlotLegendMarker*);
    using QBoxPlotLegendMarker_Series_Callback = QBoxPlotSeries* (*)(QBoxPlotLegendMarker*);
    using QBoxPlotLegendMarker_Event_Callback = bool (*)(QBoxPlotLegendMarker*, QEvent*);
    using QBoxPlotLegendMarker_EventFilter_Callback = bool (*)(QBoxPlotLegendMarker*, QObject*, QEvent*);
    using QBoxPlotLegendMarker_TimerEvent_Callback = void (*)(QBoxPlotLegendMarker*, QTimerEvent*);
    using QBoxPlotLegendMarker_ChildEvent_Callback = void (*)(QBoxPlotLegendMarker*, QChildEvent*);
    using QBoxPlotLegendMarker_CustomEvent_Callback = void (*)(QBoxPlotLegendMarker*, QEvent*);
    using QBoxPlotLegendMarker_ConnectNotify_Callback = void (*)(QBoxPlotLegendMarker*, QMetaMethod*);
    using QBoxPlotLegendMarker_DisconnectNotify_Callback = void (*)(QBoxPlotLegendMarker*, QMetaMethod*);
    using QBoxPlotLegendMarker::isSignalConnected;
    using QBoxPlotLegendMarker::receivers;
    using QBoxPlotLegendMarker::sender;
    using QBoxPlotLegendMarker::senderSignalIndex;

    // Instance callback storage
    QBoxPlotLegendMarker_MetaObject_Callback qboxplotlegendmarker_metaobject_callback = nullptr;
    QBoxPlotLegendMarker_Metacast_Callback qboxplotlegendmarker_metacast_callback = nullptr;
    QBoxPlotLegendMarker_Metacall_Callback qboxplotlegendmarker_metacall_callback = nullptr;
    QBoxPlotLegendMarker_Type_Callback qboxplotlegendmarker_type_callback = nullptr;
    QBoxPlotLegendMarker_Series_Callback qboxplotlegendmarker_series_callback = nullptr;
    QBoxPlotLegendMarker_Event_Callback qboxplotlegendmarker_event_callback = nullptr;
    QBoxPlotLegendMarker_EventFilter_Callback qboxplotlegendmarker_eventfilter_callback = nullptr;
    QBoxPlotLegendMarker_TimerEvent_Callback qboxplotlegendmarker_timerevent_callback = nullptr;
    QBoxPlotLegendMarker_ChildEvent_Callback qboxplotlegendmarker_childevent_callback = nullptr;
    QBoxPlotLegendMarker_CustomEvent_Callback qboxplotlegendmarker_customevent_callback = nullptr;
    QBoxPlotLegendMarker_ConnectNotify_Callback qboxplotlegendmarker_connectnotify_callback = nullptr;
    QBoxPlotLegendMarker_DisconnectNotify_Callback qboxplotlegendmarker_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QBoxPlotLegendMarker {
        using QBoxPlotLegendMarker::childEvent;
        using QBoxPlotLegendMarker::connectNotify;
        using QBoxPlotLegendMarker::customEvent;
        using QBoxPlotLegendMarker::disconnectNotify;
        using QBoxPlotLegendMarker::timerEvent;
    };

    VirtualQBoxPlotLegendMarker(QBoxPlotSeries* series, QLegend* legend) : QBoxPlotLegendMarker(series, legend) {};
    VirtualQBoxPlotLegendMarker(QBoxPlotSeries* series, QLegend* legend, QObject* parent) : QBoxPlotLegendMarker(series, legend, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qboxplotlegendmarker_metaobject_callback) {
            QMetaObject* callback_ret = qboxplotlegendmarker_metaobject_callback(this);
            return callback_ret;
        }
        return QBoxPlotLegendMarker::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qboxplotlegendmarker_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qboxplotlegendmarker_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBoxPlotLegendMarker::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qboxplotlegendmarker_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qboxplotlegendmarker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBoxPlotLegendMarker::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qboxplotlegendmarker_type_callback) {
            int callback_ret = qboxplotlegendmarker_type_callback(this);
            return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
        }
        return QBoxPlotLegendMarker::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QBoxPlotSeries* series() override {
        if (qboxplotlegendmarker_series_callback) {
            QBoxPlotSeries* callback_ret = qboxplotlegendmarker_series_callback(this);
            return callback_ret;
        }
        return QBoxPlotLegendMarker::series();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qboxplotlegendmarker_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qboxplotlegendmarker_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBoxPlotLegendMarker::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qboxplotlegendmarker_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qboxplotlegendmarker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBoxPlotLegendMarker::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qboxplotlegendmarker_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qboxplotlegendmarker_timerevent_callback(this, cbval1);
            return;
        }
        QBoxPlotLegendMarker::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qboxplotlegendmarker_childevent_callback) {
            QChildEvent* cbval1 = event;
            qboxplotlegendmarker_childevent_callback(this, cbval1);
            return;
        }
        QBoxPlotLegendMarker::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qboxplotlegendmarker_customevent_callback) {
            QEvent* cbval1 = event;
            qboxplotlegendmarker_customevent_callback(this, cbval1);
            return;
        }
        QBoxPlotLegendMarker::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qboxplotlegendmarker_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qboxplotlegendmarker_connectnotify_callback(this, cbval1);
            return;
        }
        QBoxPlotLegendMarker::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qboxplotlegendmarker_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qboxplotlegendmarker_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBoxPlotLegendMarker::disconnectNotify(signal);
    }

    // Friend functions
    friend void QBoxPlotLegendMarker_SuperTimerEvent(QBoxPlotLegendMarker* self, QTimerEvent* event);
    friend void QBoxPlotLegendMarker_SuperChildEvent(QBoxPlotLegendMarker* self, QChildEvent* event);
    friend void QBoxPlotLegendMarker_SuperCustomEvent(QBoxPlotLegendMarker* self, QEvent* event);
    friend void QBoxPlotLegendMarker_SuperConnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal);
    friend void QBoxPlotLegendMarker_SuperDisconnectNotify(QBoxPlotLegendMarker* self, const QMetaMethod* signal);
};

#endif
