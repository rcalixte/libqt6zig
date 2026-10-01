#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQPIELEGENDMARKER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQPIELEGENDMARKER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPieLegendMarker
class VirtualQPieLegendMarker final : public QPieLegendMarker {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPieLegendMarker_MetaObject_Callback = QMetaObject* (*)(const QPieLegendMarker*);
    using QPieLegendMarker_Metacast_Callback = void* (*)(QPieLegendMarker*, const char*);
    using QPieLegendMarker_Metacall_Callback = int (*)(QPieLegendMarker*, int, int, void**);
    using QPieLegendMarker_Type_Callback = int (*)(QPieLegendMarker*);
    using QPieLegendMarker_Series_Callback = QPieSeries* (*)(QPieLegendMarker*);
    using QPieLegendMarker_Event_Callback = bool (*)(QPieLegendMarker*, QEvent*);
    using QPieLegendMarker_EventFilter_Callback = bool (*)(QPieLegendMarker*, QObject*, QEvent*);
    using QPieLegendMarker_TimerEvent_Callback = void (*)(QPieLegendMarker*, QTimerEvent*);
    using QPieLegendMarker_ChildEvent_Callback = void (*)(QPieLegendMarker*, QChildEvent*);
    using QPieLegendMarker_CustomEvent_Callback = void (*)(QPieLegendMarker*, QEvent*);
    using QPieLegendMarker_ConnectNotify_Callback = void (*)(QPieLegendMarker*, QMetaMethod*);
    using QPieLegendMarker_DisconnectNotify_Callback = void (*)(QPieLegendMarker*, QMetaMethod*);
    using QPieLegendMarker::isSignalConnected;
    using QPieLegendMarker::receivers;
    using QPieLegendMarker::sender;
    using QPieLegendMarker::senderSignalIndex;

    // Instance callback storage
    QPieLegendMarker_MetaObject_Callback qpielegendmarker_metaobject_callback = nullptr;
    QPieLegendMarker_Metacast_Callback qpielegendmarker_metacast_callback = nullptr;
    QPieLegendMarker_Metacall_Callback qpielegendmarker_metacall_callback = nullptr;
    QPieLegendMarker_Type_Callback qpielegendmarker_type_callback = nullptr;
    QPieLegendMarker_Series_Callback qpielegendmarker_series_callback = nullptr;
    QPieLegendMarker_Event_Callback qpielegendmarker_event_callback = nullptr;
    QPieLegendMarker_EventFilter_Callback qpielegendmarker_eventfilter_callback = nullptr;
    QPieLegendMarker_TimerEvent_Callback qpielegendmarker_timerevent_callback = nullptr;
    QPieLegendMarker_ChildEvent_Callback qpielegendmarker_childevent_callback = nullptr;
    QPieLegendMarker_CustomEvent_Callback qpielegendmarker_customevent_callback = nullptr;
    QPieLegendMarker_ConnectNotify_Callback qpielegendmarker_connectnotify_callback = nullptr;
    QPieLegendMarker_DisconnectNotify_Callback qpielegendmarker_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPieLegendMarker {
        using QPieLegendMarker::childEvent;
        using QPieLegendMarker::connectNotify;
        using QPieLegendMarker::customEvent;
        using QPieLegendMarker::disconnectNotify;
        using QPieLegendMarker::timerEvent;
    };

    VirtualQPieLegendMarker(QPieSeries* series, QPieSlice* slice, QLegend* legend) : QPieLegendMarker(series, slice, legend) {};
    VirtualQPieLegendMarker(QPieSeries* series, QPieSlice* slice, QLegend* legend, QObject* parent) : QPieLegendMarker(series, slice, legend, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpielegendmarker_metaobject_callback) {
            QMetaObject* callback_ret = qpielegendmarker_metaobject_callback(this);
            return callback_ret;
        }
        return QPieLegendMarker::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpielegendmarker_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpielegendmarker_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPieLegendMarker::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpielegendmarker_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpielegendmarker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPieLegendMarker::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qpielegendmarker_type_callback) {
            int callback_ret = qpielegendmarker_type_callback(this);
            return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
        }
        return QPieLegendMarker::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPieSeries* series() override {
        if (qpielegendmarker_series_callback) {
            QPieSeries* callback_ret = qpielegendmarker_series_callback(this);
            return callback_ret;
        }
        return QPieLegendMarker::series();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpielegendmarker_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpielegendmarker_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPieLegendMarker::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpielegendmarker_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpielegendmarker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPieLegendMarker::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpielegendmarker_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpielegendmarker_timerevent_callback(this, cbval1);
            return;
        }
        QPieLegendMarker::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpielegendmarker_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpielegendmarker_childevent_callback(this, cbval1);
            return;
        }
        QPieLegendMarker::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpielegendmarker_customevent_callback) {
            QEvent* cbval1 = event;
            qpielegendmarker_customevent_callback(this, cbval1);
            return;
        }
        QPieLegendMarker::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpielegendmarker_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpielegendmarker_connectnotify_callback(this, cbval1);
            return;
        }
        QPieLegendMarker::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpielegendmarker_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpielegendmarker_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPieLegendMarker::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPieLegendMarker_SuperTimerEvent(QPieLegendMarker* self, QTimerEvent* event);
    friend void QPieLegendMarker_SuperChildEvent(QPieLegendMarker* self, QChildEvent* event);
    friend void QPieLegendMarker_SuperCustomEvent(QPieLegendMarker* self, QEvent* event);
    friend void QPieLegendMarker_SuperConnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
    friend void QPieLegendMarker_SuperDisconnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
};

#endif
