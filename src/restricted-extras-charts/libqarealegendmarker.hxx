#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQAREALEGENDMARKER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQAREALEGENDMARKER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAreaLegendMarker
class VirtualQAreaLegendMarker final : public QAreaLegendMarker {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAreaLegendMarker_MetaObject_Callback = QMetaObject* (*)(const QAreaLegendMarker*);
    using QAreaLegendMarker_Metacast_Callback = void* (*)(QAreaLegendMarker*, const char*);
    using QAreaLegendMarker_Metacall_Callback = int (*)(QAreaLegendMarker*, int, int, void**);
    using QAreaLegendMarker_Type_Callback = int (*)(QAreaLegendMarker*);
    using QAreaLegendMarker_Series_Callback = QAreaSeries* (*)(QAreaLegendMarker*);
    using QAreaLegendMarker_Event_Callback = bool (*)(QAreaLegendMarker*, QEvent*);
    using QAreaLegendMarker_EventFilter_Callback = bool (*)(QAreaLegendMarker*, QObject*, QEvent*);
    using QAreaLegendMarker_TimerEvent_Callback = void (*)(QAreaLegendMarker*, QTimerEvent*);
    using QAreaLegendMarker_ChildEvent_Callback = void (*)(QAreaLegendMarker*, QChildEvent*);
    using QAreaLegendMarker_CustomEvent_Callback = void (*)(QAreaLegendMarker*, QEvent*);
    using QAreaLegendMarker_ConnectNotify_Callback = void (*)(QAreaLegendMarker*, QMetaMethod*);
    using QAreaLegendMarker_DisconnectNotify_Callback = void (*)(QAreaLegendMarker*, QMetaMethod*);
    using QAreaLegendMarker::isSignalConnected;
    using QAreaLegendMarker::receivers;
    using QAreaLegendMarker::sender;
    using QAreaLegendMarker::senderSignalIndex;

    // Instance callback storage
    QAreaLegendMarker_MetaObject_Callback qarealegendmarker_metaobject_callback = nullptr;
    QAreaLegendMarker_Metacast_Callback qarealegendmarker_metacast_callback = nullptr;
    QAreaLegendMarker_Metacall_Callback qarealegendmarker_metacall_callback = nullptr;
    QAreaLegendMarker_Type_Callback qarealegendmarker_type_callback = nullptr;
    QAreaLegendMarker_Series_Callback qarealegendmarker_series_callback = nullptr;
    QAreaLegendMarker_Event_Callback qarealegendmarker_event_callback = nullptr;
    QAreaLegendMarker_EventFilter_Callback qarealegendmarker_eventfilter_callback = nullptr;
    QAreaLegendMarker_TimerEvent_Callback qarealegendmarker_timerevent_callback = nullptr;
    QAreaLegendMarker_ChildEvent_Callback qarealegendmarker_childevent_callback = nullptr;
    QAreaLegendMarker_CustomEvent_Callback qarealegendmarker_customevent_callback = nullptr;
    QAreaLegendMarker_ConnectNotify_Callback qarealegendmarker_connectnotify_callback = nullptr;
    QAreaLegendMarker_DisconnectNotify_Callback qarealegendmarker_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAreaLegendMarker {
        using QAreaLegendMarker::childEvent;
        using QAreaLegendMarker::connectNotify;
        using QAreaLegendMarker::customEvent;
        using QAreaLegendMarker::disconnectNotify;
        using QAreaLegendMarker::timerEvent;
    };

    VirtualQAreaLegendMarker(QAreaSeries* series, QLegend* legend) : QAreaLegendMarker(series, legend) {};
    VirtualQAreaLegendMarker(QAreaSeries* series, QLegend* legend, QObject* parent) : QAreaLegendMarker(series, legend, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qarealegendmarker_metaobject_callback) {
            QMetaObject* callback_ret = qarealegendmarker_metaobject_callback(this);
            return callback_ret;
        }
        return QAreaLegendMarker::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qarealegendmarker_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qarealegendmarker_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAreaLegendMarker::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qarealegendmarker_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qarealegendmarker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAreaLegendMarker::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qarealegendmarker_type_callback) {
            int callback_ret = qarealegendmarker_type_callback(this);
            return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
        }
        return QAreaLegendMarker::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAreaSeries* series() override {
        if (qarealegendmarker_series_callback) {
            QAreaSeries* callback_ret = qarealegendmarker_series_callback(this);
            return callback_ret;
        }
        return QAreaLegendMarker::series();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qarealegendmarker_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qarealegendmarker_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAreaLegendMarker::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qarealegendmarker_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qarealegendmarker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAreaLegendMarker::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qarealegendmarker_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qarealegendmarker_timerevent_callback(this, cbval1);
            return;
        }
        QAreaLegendMarker::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qarealegendmarker_childevent_callback) {
            QChildEvent* cbval1 = event;
            qarealegendmarker_childevent_callback(this, cbval1);
            return;
        }
        QAreaLegendMarker::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qarealegendmarker_customevent_callback) {
            QEvent* cbval1 = event;
            qarealegendmarker_customevent_callback(this, cbval1);
            return;
        }
        QAreaLegendMarker::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qarealegendmarker_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qarealegendmarker_connectnotify_callback(this, cbval1);
            return;
        }
        QAreaLegendMarker::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qarealegendmarker_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qarealegendmarker_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAreaLegendMarker::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAreaLegendMarker_SuperTimerEvent(QAreaLegendMarker* self, QTimerEvent* event);
    friend void QAreaLegendMarker_SuperChildEvent(QAreaLegendMarker* self, QChildEvent* event);
    friend void QAreaLegendMarker_SuperCustomEvent(QAreaLegendMarker* self, QEvent* event);
    friend void QAreaLegendMarker_SuperConnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
    friend void QAreaLegendMarker_SuperDisconnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
};

#endif
