#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQSPLINESERIES_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQSPLINESERIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSplineSeries
class VirtualQSplineSeries final : public QSplineSeries {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSplineSeries_MetaObject_Callback = QMetaObject* (*)(const QSplineSeries*);
    using QSplineSeries_Metacast_Callback = void* (*)(QSplineSeries*, const char*);
    using QSplineSeries_Metacall_Callback = int (*)(QSplineSeries*, int, int, void**);
    using QSplineSeries_Type_Callback = int (*)(const QSplineSeries*);
    using QSplineSeries_SetPen_Callback = void (*)(QSplineSeries*, QPen*);
    using QSplineSeries_SetBrush_Callback = void (*)(QSplineSeries*, QBrush*);
    using QSplineSeries_SetColor_Callback = void (*)(QSplineSeries*, QColor*);
    using QSplineSeries_Color_Callback = QColor* (*)(const QSplineSeries*);
    using QSplineSeries_Event_Callback = bool (*)(QSplineSeries*, QEvent*);
    using QSplineSeries_EventFilter_Callback = bool (*)(QSplineSeries*, QObject*, QEvent*);
    using QSplineSeries_TimerEvent_Callback = void (*)(QSplineSeries*, QTimerEvent*);
    using QSplineSeries_ChildEvent_Callback = void (*)(QSplineSeries*, QChildEvent*);
    using QSplineSeries_CustomEvent_Callback = void (*)(QSplineSeries*, QEvent*);
    using QSplineSeries_ConnectNotify_Callback = void (*)(QSplineSeries*, QMetaMethod*);
    using QSplineSeries_DisconnectNotify_Callback = void (*)(QSplineSeries*, QMetaMethod*);
    using QSplineSeries::isSignalConnected;
    using QSplineSeries::receivers;
    using QSplineSeries::sender;
    using QSplineSeries::senderSignalIndex;

    // Instance callback storage
    QSplineSeries_MetaObject_Callback qsplineseries_metaobject_callback = nullptr;
    QSplineSeries_Metacast_Callback qsplineseries_metacast_callback = nullptr;
    QSplineSeries_Metacall_Callback qsplineseries_metacall_callback = nullptr;
    QSplineSeries_Type_Callback qsplineseries_type_callback = nullptr;
    QSplineSeries_SetPen_Callback qsplineseries_setpen_callback = nullptr;
    QSplineSeries_SetBrush_Callback qsplineseries_setbrush_callback = nullptr;
    QSplineSeries_SetColor_Callback qsplineseries_setcolor_callback = nullptr;
    QSplineSeries_Color_Callback qsplineseries_color_callback = nullptr;
    QSplineSeries_Event_Callback qsplineseries_event_callback = nullptr;
    QSplineSeries_EventFilter_Callback qsplineseries_eventfilter_callback = nullptr;
    QSplineSeries_TimerEvent_Callback qsplineseries_timerevent_callback = nullptr;
    QSplineSeries_ChildEvent_Callback qsplineseries_childevent_callback = nullptr;
    QSplineSeries_CustomEvent_Callback qsplineseries_customevent_callback = nullptr;
    QSplineSeries_ConnectNotify_Callback qsplineseries_connectnotify_callback = nullptr;
    QSplineSeries_DisconnectNotify_Callback qsplineseries_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSplineSeries {
        using QSplineSeries::childEvent;
        using QSplineSeries::connectNotify;
        using QSplineSeries::customEvent;
        using QSplineSeries::disconnectNotify;
        using QSplineSeries::timerEvent;
    };

    VirtualQSplineSeries() : QSplineSeries() {};
    VirtualQSplineSeries(QObject* parent) : QSplineSeries(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsplineseries_metaobject_callback) {
            QMetaObject* callback_ret = qsplineseries_metaobject_callback(this);
            return callback_ret;
        }
        return QSplineSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsplineseries_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsplineseries_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSplineSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsplineseries_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsplineseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSplineSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qsplineseries_type_callback) {
            int callback_ret = qsplineseries_type_callback(this);
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QSplineSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPen(const QPen& pen) override {
        if (qsplineseries_setpen_callback) {
            const QPen& pen_ret = pen;
            // Cast returned reference into pointer
            QPen* cbval1 = const_cast<QPen*>(&pen_ret);
            qsplineseries_setpen_callback(this, cbval1);
            return;
        }
        QSplineSeries::setPen(pen);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBrush(const QBrush& brush) override {
        if (qsplineseries_setbrush_callback) {
            const QBrush& brush_ret = brush;
            // Cast returned reference into pointer
            QBrush* cbval1 = const_cast<QBrush*>(&brush_ret);
            qsplineseries_setbrush_callback(this, cbval1);
            return;
        }
        QSplineSeries::setBrush(brush);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& color) override {
        if (qsplineseries_setcolor_callback) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);
            qsplineseries_setcolor_callback(this, cbval1);
            return;
        }
        QSplineSeries::setColor(color);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color() const override {
        if (qsplineseries_color_callback) {
            QColor* callback_ret = qsplineseries_color_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSplineSeries::color();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsplineseries_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsplineseries_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSplineSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsplineseries_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsplineseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSplineSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsplineseries_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsplineseries_timerevent_callback(this, cbval1);
            return;
        }
        QSplineSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsplineseries_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsplineseries_childevent_callback(this, cbval1);
            return;
        }
        QSplineSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsplineseries_customevent_callback) {
            QEvent* cbval1 = event;
            qsplineseries_customevent_callback(this, cbval1);
            return;
        }
        QSplineSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsplineseries_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsplineseries_connectnotify_callback(this, cbval1);
            return;
        }
        QSplineSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsplineseries_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsplineseries_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSplineSeries::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSplineSeries_SuperTimerEvent(QSplineSeries* self, QTimerEvent* event);
    friend void QSplineSeries_SuperChildEvent(QSplineSeries* self, QChildEvent* event);
    friend void QSplineSeries_SuperCustomEvent(QSplineSeries* self, QEvent* event);
    friend void QSplineSeries_SuperConnectNotify(QSplineSeries* self, const QMetaMethod* signal);
    friend void QSplineSeries_SuperDisconnectNotify(QSplineSeries* self, const QMetaMethod* signal);
};

#endif
