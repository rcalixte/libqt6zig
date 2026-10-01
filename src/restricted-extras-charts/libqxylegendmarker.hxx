#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQXYLEGENDMARKER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQXYLEGENDMARKER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QXYLegendMarker
class VirtualQXYLegendMarker final : public QXYLegendMarker {
  public:
    // Virtual class public types (including callbacks and access types)
    using QXYLegendMarker_MetaObject_Callback = QMetaObject* (*)(const QXYLegendMarker*);
    using QXYLegendMarker_Metacast_Callback = void* (*)(QXYLegendMarker*, const char*);
    using QXYLegendMarker_Metacall_Callback = int (*)(QXYLegendMarker*, int, int, void**);
    using QXYLegendMarker_Type_Callback = int (*)(QXYLegendMarker*);
    using QXYLegendMarker_Series_Callback = QXYSeries* (*)(QXYLegendMarker*);
    using QXYLegendMarker_Event_Callback = bool (*)(QXYLegendMarker*, QEvent*);
    using QXYLegendMarker_EventFilter_Callback = bool (*)(QXYLegendMarker*, QObject*, QEvent*);
    using QXYLegendMarker_TimerEvent_Callback = void (*)(QXYLegendMarker*, QTimerEvent*);
    using QXYLegendMarker_ChildEvent_Callback = void (*)(QXYLegendMarker*, QChildEvent*);
    using QXYLegendMarker_CustomEvent_Callback = void (*)(QXYLegendMarker*, QEvent*);
    using QXYLegendMarker_ConnectNotify_Callback = void (*)(QXYLegendMarker*, QMetaMethod*);
    using QXYLegendMarker_DisconnectNotify_Callback = void (*)(QXYLegendMarker*, QMetaMethod*);
    using QXYLegendMarker::isSignalConnected;
    using QXYLegendMarker::receivers;
    using QXYLegendMarker::sender;
    using QXYLegendMarker::senderSignalIndex;

    // Instance callback storage
    QXYLegendMarker_MetaObject_Callback qxylegendmarker_metaobject_callback = nullptr;
    QXYLegendMarker_Metacast_Callback qxylegendmarker_metacast_callback = nullptr;
    QXYLegendMarker_Metacall_Callback qxylegendmarker_metacall_callback = nullptr;
    QXYLegendMarker_Type_Callback qxylegendmarker_type_callback = nullptr;
    QXYLegendMarker_Series_Callback qxylegendmarker_series_callback = nullptr;
    QXYLegendMarker_Event_Callback qxylegendmarker_event_callback = nullptr;
    QXYLegendMarker_EventFilter_Callback qxylegendmarker_eventfilter_callback = nullptr;
    QXYLegendMarker_TimerEvent_Callback qxylegendmarker_timerevent_callback = nullptr;
    QXYLegendMarker_ChildEvent_Callback qxylegendmarker_childevent_callback = nullptr;
    QXYLegendMarker_CustomEvent_Callback qxylegendmarker_customevent_callback = nullptr;
    QXYLegendMarker_ConnectNotify_Callback qxylegendmarker_connectnotify_callback = nullptr;
    QXYLegendMarker_DisconnectNotify_Callback qxylegendmarker_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QXYLegendMarker {
        using QXYLegendMarker::childEvent;
        using QXYLegendMarker::connectNotify;
        using QXYLegendMarker::customEvent;
        using QXYLegendMarker::disconnectNotify;
        using QXYLegendMarker::timerEvent;
    };

    VirtualQXYLegendMarker(QXYSeries* series, QLegend* legend) : QXYLegendMarker(series, legend) {};
    VirtualQXYLegendMarker(QXYSeries* series, QLegend* legend, QObject* parent) : QXYLegendMarker(series, legend, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qxylegendmarker_metaobject_callback) {
            QMetaObject* callback_ret = qxylegendmarker_metaobject_callback(this);
            return callback_ret;
        }
        return QXYLegendMarker::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qxylegendmarker_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qxylegendmarker_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QXYLegendMarker::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qxylegendmarker_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qxylegendmarker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QXYLegendMarker::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qxylegendmarker_type_callback) {
            int callback_ret = qxylegendmarker_type_callback(this);
            return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
        }
        return QXYLegendMarker::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QXYSeries* series() override {
        if (qxylegendmarker_series_callback) {
            QXYSeries* callback_ret = qxylegendmarker_series_callback(this);
            return callback_ret;
        }
        return QXYLegendMarker::series();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qxylegendmarker_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qxylegendmarker_event_callback(this, cbval1);
            return callback_ret;
        }
        return QXYLegendMarker::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qxylegendmarker_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qxylegendmarker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QXYLegendMarker::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qxylegendmarker_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qxylegendmarker_timerevent_callback(this, cbval1);
            return;
        }
        QXYLegendMarker::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qxylegendmarker_childevent_callback) {
            QChildEvent* cbval1 = event;
            qxylegendmarker_childevent_callback(this, cbval1);
            return;
        }
        QXYLegendMarker::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qxylegendmarker_customevent_callback) {
            QEvent* cbval1 = event;
            qxylegendmarker_customevent_callback(this, cbval1);
            return;
        }
        QXYLegendMarker::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qxylegendmarker_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qxylegendmarker_connectnotify_callback(this, cbval1);
            return;
        }
        QXYLegendMarker::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qxylegendmarker_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qxylegendmarker_disconnectnotify_callback(this, cbval1);
            return;
        }
        QXYLegendMarker::disconnectNotify(signal);
    }

    // Friend functions
    friend void QXYLegendMarker_SuperTimerEvent(QXYLegendMarker* self, QTimerEvent* event);
    friend void QXYLegendMarker_SuperChildEvent(QXYLegendMarker* self, QChildEvent* event);
    friend void QXYLegendMarker_SuperCustomEvent(QXYLegendMarker* self, QEvent* event);
    friend void QXYLegendMarker_SuperConnectNotify(QXYLegendMarker* self, const QMetaMethod* signal);
    friend void QXYLegendMarker_SuperDisconnectNotify(QXYLegendMarker* self, const QMetaMethod* signal);
};

#endif
