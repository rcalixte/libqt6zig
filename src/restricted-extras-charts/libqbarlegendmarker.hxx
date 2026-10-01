#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQBARLEGENDMARKER_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQBARLEGENDMARKER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBarLegendMarker
class VirtualQBarLegendMarker final : public QBarLegendMarker {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBarLegendMarker_MetaObject_Callback = QMetaObject* (*)(const QBarLegendMarker*);
    using QBarLegendMarker_Metacast_Callback = void* (*)(QBarLegendMarker*, const char*);
    using QBarLegendMarker_Metacall_Callback = int (*)(QBarLegendMarker*, int, int, void**);
    using QBarLegendMarker_Type_Callback = int (*)(QBarLegendMarker*);
    using QBarLegendMarker_Series_Callback = QAbstractBarSeries* (*)(QBarLegendMarker*);
    using QBarLegendMarker_Event_Callback = bool (*)(QBarLegendMarker*, QEvent*);
    using QBarLegendMarker_EventFilter_Callback = bool (*)(QBarLegendMarker*, QObject*, QEvent*);
    using QBarLegendMarker_TimerEvent_Callback = void (*)(QBarLegendMarker*, QTimerEvent*);
    using QBarLegendMarker_ChildEvent_Callback = void (*)(QBarLegendMarker*, QChildEvent*);
    using QBarLegendMarker_CustomEvent_Callback = void (*)(QBarLegendMarker*, QEvent*);
    using QBarLegendMarker_ConnectNotify_Callback = void (*)(QBarLegendMarker*, QMetaMethod*);
    using QBarLegendMarker_DisconnectNotify_Callback = void (*)(QBarLegendMarker*, QMetaMethod*);
    using QBarLegendMarker::isSignalConnected;
    using QBarLegendMarker::receivers;
    using QBarLegendMarker::sender;
    using QBarLegendMarker::senderSignalIndex;

    // Instance callback storage
    QBarLegendMarker_MetaObject_Callback qbarlegendmarker_metaobject_callback = nullptr;
    QBarLegendMarker_Metacast_Callback qbarlegendmarker_metacast_callback = nullptr;
    QBarLegendMarker_Metacall_Callback qbarlegendmarker_metacall_callback = nullptr;
    QBarLegendMarker_Type_Callback qbarlegendmarker_type_callback = nullptr;
    QBarLegendMarker_Series_Callback qbarlegendmarker_series_callback = nullptr;
    QBarLegendMarker_Event_Callback qbarlegendmarker_event_callback = nullptr;
    QBarLegendMarker_EventFilter_Callback qbarlegendmarker_eventfilter_callback = nullptr;
    QBarLegendMarker_TimerEvent_Callback qbarlegendmarker_timerevent_callback = nullptr;
    QBarLegendMarker_ChildEvent_Callback qbarlegendmarker_childevent_callback = nullptr;
    QBarLegendMarker_CustomEvent_Callback qbarlegendmarker_customevent_callback = nullptr;
    QBarLegendMarker_ConnectNotify_Callback qbarlegendmarker_connectnotify_callback = nullptr;
    QBarLegendMarker_DisconnectNotify_Callback qbarlegendmarker_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QBarLegendMarker {
        using QBarLegendMarker::childEvent;
        using QBarLegendMarker::connectNotify;
        using QBarLegendMarker::customEvent;
        using QBarLegendMarker::disconnectNotify;
        using QBarLegendMarker::timerEvent;
    };

    VirtualQBarLegendMarker(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend) : QBarLegendMarker(series, barset, legend) {};
    VirtualQBarLegendMarker(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend, QObject* parent) : QBarLegendMarker(series, barset, legend, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbarlegendmarker_metaobject_callback) {
            QMetaObject* callback_ret = qbarlegendmarker_metaobject_callback(this);
            return callback_ret;
        }
        return QBarLegendMarker::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbarlegendmarker_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qbarlegendmarker_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBarLegendMarker::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbarlegendmarker_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qbarlegendmarker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBarLegendMarker::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qbarlegendmarker_type_callback) {
            int callback_ret = qbarlegendmarker_type_callback(this);
            return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
        }
        return QBarLegendMarker::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractBarSeries* series() override {
        if (qbarlegendmarker_series_callback) {
            QAbstractBarSeries* callback_ret = qbarlegendmarker_series_callback(this);
            return callback_ret;
        }
        return QBarLegendMarker::series();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbarlegendmarker_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qbarlegendmarker_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBarLegendMarker::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbarlegendmarker_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qbarlegendmarker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBarLegendMarker::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbarlegendmarker_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qbarlegendmarker_timerevent_callback(this, cbval1);
            return;
        }
        QBarLegendMarker::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbarlegendmarker_childevent_callback) {
            QChildEvent* cbval1 = event;
            qbarlegendmarker_childevent_callback(this, cbval1);
            return;
        }
        QBarLegendMarker::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbarlegendmarker_customevent_callback) {
            QEvent* cbval1 = event;
            qbarlegendmarker_customevent_callback(this, cbval1);
            return;
        }
        QBarLegendMarker::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbarlegendmarker_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbarlegendmarker_connectnotify_callback(this, cbval1);
            return;
        }
        QBarLegendMarker::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbarlegendmarker_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbarlegendmarker_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBarLegendMarker::disconnectNotify(signal);
    }

    // Friend functions
    friend void QBarLegendMarker_SuperTimerEvent(QBarLegendMarker* self, QTimerEvent* event);
    friend void QBarLegendMarker_SuperChildEvent(QBarLegendMarker* self, QChildEvent* event);
    friend void QBarLegendMarker_SuperCustomEvent(QBarLegendMarker* self, QEvent* event);
    friend void QBarLegendMarker_SuperConnectNotify(QBarLegendMarker* self, const QMetaMethod* signal);
    friend void QBarLegendMarker_SuperDisconnectNotify(QBarLegendMarker* self, const QMetaMethod* signal);
};

#endif
