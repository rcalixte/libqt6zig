#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQSCATTERSERIES_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQSCATTERSERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QScatterSeries
class VirtualQScatterSeries final : public QScatterSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QScatterSeries_MetaObject_Callback = QMetaObject* (*)(const QScatterSeries*);
    using QScatterSeries_Metacast_Callback = void* (*)(QScatterSeries*, const char*);
    using QScatterSeries_Metacall_Callback = int (*)(QScatterSeries*, int, int, void**);
    using QScatterSeries_Type_Callback = int (*)(const QScatterSeries*);
    using QScatterSeries_SetPen_Callback = void (*)(QScatterSeries*, QPen*);
    using QScatterSeries_SetBrush_Callback = void (*)(QScatterSeries*, QBrush*);
    using QScatterSeries_SetColor_Callback = void (*)(QScatterSeries*, QColor*);
    using QScatterSeries_Color_Callback = QColor* (*)(const QScatterSeries*);
    using QScatterSeries_Event_Callback = bool (*)(QScatterSeries*, QEvent*);
    using QScatterSeries_EventFilter_Callback = bool (*)(QScatterSeries*, QObject*, QEvent*);
    using QScatterSeries_TimerEvent_Callback = void (*)(QScatterSeries*, QTimerEvent*);
    using QScatterSeries_ChildEvent_Callback = void (*)(QScatterSeries*, QChildEvent*);
    using QScatterSeries_CustomEvent_Callback = void (*)(QScatterSeries*, QEvent*);
    using QScatterSeries_ConnectNotify_Callback = void (*)(QScatterSeries*, QMetaMethod*);
    using QScatterSeries_DisconnectNotify_Callback = void (*)(QScatterSeries*, QMetaMethod*);
    using QScatterSeries::isSignalConnected;
    using QScatterSeries::receivers;
    using QScatterSeries::sender;
    using QScatterSeries::senderSignalIndex;

    // Instance callback storage
    QScatterSeries_MetaObject_Callback qscatterseries_metaobject_callback = nullptr;
    QScatterSeries_Metacast_Callback qscatterseries_metacast_callback = nullptr;
    QScatterSeries_Metacall_Callback qscatterseries_metacall_callback = nullptr;
    QScatterSeries_Type_Callback qscatterseries_type_callback = nullptr;
    QScatterSeries_SetPen_Callback qscatterseries_setpen_callback = nullptr;
    QScatterSeries_SetBrush_Callback qscatterseries_setbrush_callback = nullptr;
    QScatterSeries_SetColor_Callback qscatterseries_setcolor_callback = nullptr;
    QScatterSeries_Color_Callback qscatterseries_color_callback = nullptr;
    QScatterSeries_Event_Callback qscatterseries_event_callback = nullptr;
    QScatterSeries_EventFilter_Callback qscatterseries_eventfilter_callback = nullptr;
    QScatterSeries_TimerEvent_Callback qscatterseries_timerevent_callback = nullptr;
    QScatterSeries_ChildEvent_Callback qscatterseries_childevent_callback = nullptr;
    QScatterSeries_CustomEvent_Callback qscatterseries_customevent_callback = nullptr;
    QScatterSeries_ConnectNotify_Callback qscatterseries_connectnotify_callback = nullptr;
    QScatterSeries_DisconnectNotify_Callback qscatterseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QScatterSeries {
        using QScatterSeries::childEvent;
        using QScatterSeries::connectNotify;
        using QScatterSeries::customEvent;
        using QScatterSeries::disconnectNotify;
        using QScatterSeries::timerEvent;
    };

    VirtualQScatterSeries() : QScatterSeries() {};
    VirtualQScatterSeries(QObject* parent) : QScatterSeries(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscatterseries_metaobject_callback) {
            QMetaObject* callback_ret = qscatterseries_metaobject_callback(this);
            return callback_ret;
        }
        return QScatterSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscatterseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscatterseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QScatterSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscatterseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscatterseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QScatterSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qscatterseries_type_callback) {
            int callback_ret = qscatterseries_type_callback(this);
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QScatterSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPen(const QPen& pen) override {
        if (qscatterseries_setpen_callback) {
            const QPen& pen_ret = pen;
            // Cast returned reference into pointer
            QPen* cbval1 = const_cast<QPen*>(&pen_ret);
            qscatterseries_setpen_callback(this, cbval1);
            return;
        }
        QScatterSeries::setPen(pen);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBrush(const QBrush& brush) override {
        if (qscatterseries_setbrush_callback) {
            const QBrush& brush_ret = brush;
            // Cast returned reference into pointer
            QBrush* cbval1 = const_cast<QBrush*>(&brush_ret);
            qscatterseries_setbrush_callback(this, cbval1);
            return;
        }
        QScatterSeries::setBrush(brush);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& color) override {
        if (qscatterseries_setcolor_callback) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            qscatterseries_setcolor_callback(this, cbval1);
            return;
        }
        QScatterSeries::setColor(color);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color() const override {
        if (qscatterseries_color_callback) {
            QColor* callback_ret = qscatterseries_color_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QScatterSeries::color();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscatterseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscatterseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QScatterSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscatterseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscatterseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QScatterSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscatterseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscatterseries_timerevent_callback(this, cbval1);
            return;
        }
        QScatterSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscatterseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscatterseries_childevent_callback(this, cbval1);
            return;
        }
        QScatterSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscatterseries_customevent_callback) {
            QEvent* cbval1 = event;
            qscatterseries_customevent_callback(this, cbval1);
            return;
        }
        QScatterSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscatterseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscatterseries_connectnotify_callback(this, cbval1);
            return;
        }
        QScatterSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscatterseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscatterseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QScatterSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QScatterSeries_SuperTimerEvent(QScatterSeries* self, QTimerEvent* event);
    friend void QScatterSeries_SuperChildEvent(QScatterSeries* self, QChildEvent* event);
    friend void QScatterSeries_SuperCustomEvent(QScatterSeries* self, QEvent* event);
    friend void QScatterSeries_SuperConnectNotify(QScatterSeries* self, const QMetaMethod* signal);
    friend void QScatterSeries_SuperDisconnectNotify(QScatterSeries* self, const QMetaMethod* signal);
};

#endif
