#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQLINESERIES_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQLINESERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QLineSeries
class VirtualQLineSeries final : public QLineSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QLineSeries_MetaObject_Callback = QMetaObject* (*)(const QLineSeries*);
    using QLineSeries_Metacast_Callback = void* (*)(QLineSeries*, const char*);
    using QLineSeries_Metacall_Callback = int (*)(QLineSeries*, int, int, void**);
    using QLineSeries_Type_Callback = int (*)(const QLineSeries*);
    using QLineSeries_SetPen_Callback = void (*)(QLineSeries*, QPen*);
    using QLineSeries_SetBrush_Callback = void (*)(QLineSeries*, QBrush*);
    using QLineSeries_SetColor_Callback = void (*)(QLineSeries*, QColor*);
    using QLineSeries_Color_Callback = QColor* (*)(const QLineSeries*);
    using QLineSeries_Event_Callback = bool (*)(QLineSeries*, QEvent*);
    using QLineSeries_EventFilter_Callback = bool (*)(QLineSeries*, QObject*, QEvent*);
    using QLineSeries_TimerEvent_Callback = void (*)(QLineSeries*, QTimerEvent*);
    using QLineSeries_ChildEvent_Callback = void (*)(QLineSeries*, QChildEvent*);
    using QLineSeries_CustomEvent_Callback = void (*)(QLineSeries*, QEvent*);
    using QLineSeries_ConnectNotify_Callback = void (*)(QLineSeries*, QMetaMethod*);
    using QLineSeries_DisconnectNotify_Callback = void (*)(QLineSeries*, QMetaMethod*);
    using QLineSeries::isSignalConnected;
    using QLineSeries::receivers;
    using QLineSeries::sender;
    using QLineSeries::senderSignalIndex;

    // Instance callback storage
    QLineSeries_MetaObject_Callback qlineseries_metaobject_callback = nullptr;
    QLineSeries_Metacast_Callback qlineseries_metacast_callback = nullptr;
    QLineSeries_Metacall_Callback qlineseries_metacall_callback = nullptr;
    QLineSeries_Type_Callback qlineseries_type_callback = nullptr;
    QLineSeries_SetPen_Callback qlineseries_setpen_callback = nullptr;
    QLineSeries_SetBrush_Callback qlineseries_setbrush_callback = nullptr;
    QLineSeries_SetColor_Callback qlineseries_setcolor_callback = nullptr;
    QLineSeries_Color_Callback qlineseries_color_callback = nullptr;
    QLineSeries_Event_Callback qlineseries_event_callback = nullptr;
    QLineSeries_EventFilter_Callback qlineseries_eventfilter_callback = nullptr;
    QLineSeries_TimerEvent_Callback qlineseries_timerevent_callback = nullptr;
    QLineSeries_ChildEvent_Callback qlineseries_childevent_callback = nullptr;
    QLineSeries_CustomEvent_Callback qlineseries_customevent_callback = nullptr;
    QLineSeries_ConnectNotify_Callback qlineseries_connectnotify_callback = nullptr;
    QLineSeries_DisconnectNotify_Callback qlineseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QLineSeries {
        using QLineSeries::childEvent;
        using QLineSeries::connectNotify;
        using QLineSeries::customEvent;
        using QLineSeries::disconnectNotify;
        using QLineSeries::timerEvent;
    };

    VirtualQLineSeries() : QLineSeries() {};
    VirtualQLineSeries(QObject* parent) : QLineSeries(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlineseries_metaobject_callback) {
            QMetaObject* callback_ret = qlineseries_metaobject_callback(this);
            return callback_ret;
        }
        return QLineSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlineseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qlineseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QLineSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlineseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qlineseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLineSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qlineseries_type_callback) {
            int callback_ret = qlineseries_type_callback(this);
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QLineSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPen(const QPen& pen) override {
        if (qlineseries_setpen_callback) {
            const QPen& pen_ret = pen;
            // Cast returned reference into pointer
            QPen* cbval1 = const_cast<QPen*>(&pen_ret);
            qlineseries_setpen_callback(this, cbval1);
            return;
        }
        QLineSeries::setPen(pen);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBrush(const QBrush& brush) override {
        if (qlineseries_setbrush_callback) {
            const QBrush& brush_ret = brush;
            // Cast returned reference into pointer
            QBrush* cbval1 = const_cast<QBrush*>(&brush_ret);
            qlineseries_setbrush_callback(this, cbval1);
            return;
        }
        QLineSeries::setBrush(brush);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& color) override {
        if (qlineseries_setcolor_callback) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            qlineseries_setcolor_callback(this, cbval1);
            return;
        }
        QLineSeries::setColor(color);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color() const override {
        if (qlineseries_color_callback) {
            QColor* callback_ret = qlineseries_color_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QLineSeries::color();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlineseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qlineseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QLineSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlineseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qlineseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLineSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlineseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qlineseries_timerevent_callback(this, cbval1);
            return;
        }
        QLineSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlineseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qlineseries_childevent_callback(this, cbval1);
            return;
        }
        QLineSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlineseries_customevent_callback) {
            QEvent* cbval1 = event;
            qlineseries_customevent_callback(this, cbval1);
            return;
        }
        QLineSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlineseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlineseries_connectnotify_callback(this, cbval1);
            return;
        }
        QLineSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlineseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlineseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QLineSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QLineSeries_SuperTimerEvent(QLineSeries* self, QTimerEvent* event);
    friend void QLineSeries_SuperChildEvent(QLineSeries* self, QChildEvent* event);
    friend void QLineSeries_SuperCustomEvent(QLineSeries* self, QEvent* event);
    friend void QLineSeries_SuperConnectNotify(QLineSeries* self, const QMetaMethod* signal);
    friend void QLineSeries_SuperDisconnectNotify(QLineSeries* self, const QMetaMethod* signal);
};

#endif
