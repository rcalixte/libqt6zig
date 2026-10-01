#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKLEGENDMARKER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKLEGENDMARKER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCandlestickLegendMarker
class VirtualQCandlestickLegendMarker final : public QCandlestickLegendMarker {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCandlestickLegendMarker_MetaObject_Callback = QMetaObject* (*)(const QCandlestickLegendMarker*);
    using QCandlestickLegendMarker_Metacast_Callback = void* (*)(QCandlestickLegendMarker*, const char*);
    using QCandlestickLegendMarker_Metacall_Callback = int (*)(QCandlestickLegendMarker*, int, int, void**);
    using QCandlestickLegendMarker_Type_Callback = int (*)(QCandlestickLegendMarker*);
    using QCandlestickLegendMarker_Series_Callback = QCandlestickSeries* (*)(QCandlestickLegendMarker*);
    using QCandlestickLegendMarker_Event_Callback = bool (*)(QCandlestickLegendMarker*, QEvent*);
    using QCandlestickLegendMarker_EventFilter_Callback = bool (*)(QCandlestickLegendMarker*, QObject*, QEvent*);
    using QCandlestickLegendMarker_TimerEvent_Callback = void (*)(QCandlestickLegendMarker*, QTimerEvent*);
    using QCandlestickLegendMarker_ChildEvent_Callback = void (*)(QCandlestickLegendMarker*, QChildEvent*);
    using QCandlestickLegendMarker_CustomEvent_Callback = void (*)(QCandlestickLegendMarker*, QEvent*);
    using QCandlestickLegendMarker_ConnectNotify_Callback = void (*)(QCandlestickLegendMarker*, QMetaMethod*);
    using QCandlestickLegendMarker_DisconnectNotify_Callback = void (*)(QCandlestickLegendMarker*, QMetaMethod*);
    using QCandlestickLegendMarker::isSignalConnected;
    using QCandlestickLegendMarker::receivers;
    using QCandlestickLegendMarker::sender;
    using QCandlestickLegendMarker::senderSignalIndex;

    // Instance callback storage
    QCandlestickLegendMarker_MetaObject_Callback qcandlesticklegendmarker_metaobject_callback = nullptr;
    QCandlestickLegendMarker_Metacast_Callback qcandlesticklegendmarker_metacast_callback = nullptr;
    QCandlestickLegendMarker_Metacall_Callback qcandlesticklegendmarker_metacall_callback = nullptr;
    QCandlestickLegendMarker_Type_Callback qcandlesticklegendmarker_type_callback = nullptr;
    QCandlestickLegendMarker_Series_Callback qcandlesticklegendmarker_series_callback = nullptr;
    QCandlestickLegendMarker_Event_Callback qcandlesticklegendmarker_event_callback = nullptr;
    QCandlestickLegendMarker_EventFilter_Callback qcandlesticklegendmarker_eventfilter_callback = nullptr;
    QCandlestickLegendMarker_TimerEvent_Callback qcandlesticklegendmarker_timerevent_callback = nullptr;
    QCandlestickLegendMarker_ChildEvent_Callback qcandlesticklegendmarker_childevent_callback = nullptr;
    QCandlestickLegendMarker_CustomEvent_Callback qcandlesticklegendmarker_customevent_callback = nullptr;
    QCandlestickLegendMarker_ConnectNotify_Callback qcandlesticklegendmarker_connectnotify_callback = nullptr;
    QCandlestickLegendMarker_DisconnectNotify_Callback qcandlesticklegendmarker_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCandlestickLegendMarker {
        using QCandlestickLegendMarker::childEvent;
        using QCandlestickLegendMarker::connectNotify;
        using QCandlestickLegendMarker::customEvent;
        using QCandlestickLegendMarker::disconnectNotify;
        using QCandlestickLegendMarker::timerEvent;
    };

    VirtualQCandlestickLegendMarker(QCandlestickSeries* series, QLegend* legend) : QCandlestickLegendMarker(series, legend) {};
    VirtualQCandlestickLegendMarker(QCandlestickSeries* series, QLegend* legend, QObject* parent) : QCandlestickLegendMarker(series, legend, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcandlesticklegendmarker_metaobject_callback) {
            QMetaObject* callback_ret = qcandlesticklegendmarker_metaobject_callback(this);
            return callback_ret;
        }
        return QCandlestickLegendMarker::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcandlesticklegendmarker_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcandlesticklegendmarker_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCandlestickLegendMarker::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcandlesticklegendmarker_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcandlesticklegendmarker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCandlestickLegendMarker::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qcandlesticklegendmarker_type_callback) {
            int callback_ret = qcandlesticklegendmarker_type_callback(this);
            return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
        }
        return QCandlestickLegendMarker::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QCandlestickSeries* series() override {
        if (qcandlesticklegendmarker_series_callback) {
            QCandlestickSeries* callback_ret = qcandlesticklegendmarker_series_callback(this);
            return callback_ret;
        }
        return QCandlestickLegendMarker::series();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcandlesticklegendmarker_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcandlesticklegendmarker_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCandlestickLegendMarker::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcandlesticklegendmarker_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcandlesticklegendmarker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCandlestickLegendMarker::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcandlesticklegendmarker_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcandlesticklegendmarker_timerevent_callback(this, cbval1);
            return;
        }
        QCandlestickLegendMarker::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcandlesticklegendmarker_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcandlesticklegendmarker_childevent_callback(this, cbval1);
            return;
        }
        QCandlestickLegendMarker::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcandlesticklegendmarker_customevent_callback) {
            QEvent* cbval1 = event;
            qcandlesticklegendmarker_customevent_callback(this, cbval1);
            return;
        }
        QCandlestickLegendMarker::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcandlesticklegendmarker_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcandlesticklegendmarker_connectnotify_callback(this, cbval1);
            return;
        }
        QCandlestickLegendMarker::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcandlesticklegendmarker_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcandlesticklegendmarker_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCandlestickLegendMarker::disconnectNotify(signal);
    }

    // Friend functions
    friend void QCandlestickLegendMarker_SuperTimerEvent(QCandlestickLegendMarker* self, QTimerEvent* event);
    friend void QCandlestickLegendMarker_SuperChildEvent(QCandlestickLegendMarker* self, QChildEvent* event);
    friend void QCandlestickLegendMarker_SuperCustomEvent(QCandlestickLegendMarker* self, QEvent* event);
    friend void QCandlestickLegendMarker_SuperConnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
    friend void QCandlestickLegendMarker_SuperDisconnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
};

#endif
