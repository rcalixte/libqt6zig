#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQBARCATEGORYAXIS_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQBARCATEGORYAXIS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBarCategoryAxis
class VirtualQBarCategoryAxis final : public QBarCategoryAxis {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBarCategoryAxis_MetaObject_Callback = QMetaObject* (*)(const QBarCategoryAxis*);
    using QBarCategoryAxis_Metacast_Callback = void* (*)(QBarCategoryAxis*, const char*);
    using QBarCategoryAxis_Metacall_Callback = int (*)(QBarCategoryAxis*, int, int, void**);
    using QBarCategoryAxis_Type_Callback = int (*)(const QBarCategoryAxis*);
    using QBarCategoryAxis_Event_Callback = bool (*)(QBarCategoryAxis*, QEvent*);
    using QBarCategoryAxis_EventFilter_Callback = bool (*)(QBarCategoryAxis*, QObject*, QEvent*);
    using QBarCategoryAxis_TimerEvent_Callback = void (*)(QBarCategoryAxis*, QTimerEvent*);
    using QBarCategoryAxis_ChildEvent_Callback = void (*)(QBarCategoryAxis*, QChildEvent*);
    using QBarCategoryAxis_CustomEvent_Callback = void (*)(QBarCategoryAxis*, QEvent*);
    using QBarCategoryAxis_ConnectNotify_Callback = void (*)(QBarCategoryAxis*, QMetaMethod*);
    using QBarCategoryAxis_DisconnectNotify_Callback = void (*)(QBarCategoryAxis*, QMetaMethod*);
    using QBarCategoryAxis::isSignalConnected;
    using QBarCategoryAxis::receivers;
    using QBarCategoryAxis::sender;
    using QBarCategoryAxis::senderSignalIndex;

    // Instance callback storage
    QBarCategoryAxis_MetaObject_Callback qbarcategoryaxis_metaobject_callback = nullptr;
    QBarCategoryAxis_Metacast_Callback qbarcategoryaxis_metacast_callback = nullptr;
    QBarCategoryAxis_Metacall_Callback qbarcategoryaxis_metacall_callback = nullptr;
    QBarCategoryAxis_Type_Callback qbarcategoryaxis_type_callback = nullptr;
    QBarCategoryAxis_Event_Callback qbarcategoryaxis_event_callback = nullptr;
    QBarCategoryAxis_EventFilter_Callback qbarcategoryaxis_eventfilter_callback = nullptr;
    QBarCategoryAxis_TimerEvent_Callback qbarcategoryaxis_timerevent_callback = nullptr;
    QBarCategoryAxis_ChildEvent_Callback qbarcategoryaxis_childevent_callback = nullptr;
    QBarCategoryAxis_CustomEvent_Callback qbarcategoryaxis_customevent_callback = nullptr;
    QBarCategoryAxis_ConnectNotify_Callback qbarcategoryaxis_connectnotify_callback = nullptr;
    QBarCategoryAxis_DisconnectNotify_Callback qbarcategoryaxis_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QBarCategoryAxis {
        using QBarCategoryAxis::childEvent;
        using QBarCategoryAxis::connectNotify;
        using QBarCategoryAxis::customEvent;
        using QBarCategoryAxis::disconnectNotify;
        using QBarCategoryAxis::timerEvent;
    };

    VirtualQBarCategoryAxis() : QBarCategoryAxis() {};
    VirtualQBarCategoryAxis(QObject* parent) : QBarCategoryAxis(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbarcategoryaxis_metaobject_callback) {
            QMetaObject* callback_ret = qbarcategoryaxis_metaobject_callback(this);
            return callback_ret;
        }
        return QBarCategoryAxis::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbarcategoryaxis_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qbarcategoryaxis_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBarCategoryAxis::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbarcategoryaxis_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qbarcategoryaxis_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBarCategoryAxis::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qbarcategoryaxis_type_callback) {
            int callback_ret = qbarcategoryaxis_type_callback(this);
            return static_cast<QAbstractAxis::AxisType>(callback_ret);
        }
        return QBarCategoryAxis::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbarcategoryaxis_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qbarcategoryaxis_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBarCategoryAxis::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbarcategoryaxis_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qbarcategoryaxis_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBarCategoryAxis::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbarcategoryaxis_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qbarcategoryaxis_timerevent_callback(this, cbval1);
            return;
        }
        QBarCategoryAxis::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbarcategoryaxis_childevent_callback) {
            QChildEvent* cbval1 = event;
            qbarcategoryaxis_childevent_callback(this, cbval1);
            return;
        }
        QBarCategoryAxis::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbarcategoryaxis_customevent_callback) {
            QEvent* cbval1 = event;
            qbarcategoryaxis_customevent_callback(this, cbval1);
            return;
        }
        QBarCategoryAxis::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbarcategoryaxis_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbarcategoryaxis_connectnotify_callback(this, cbval1);
            return;
        }
        QBarCategoryAxis::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbarcategoryaxis_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbarcategoryaxis_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBarCategoryAxis::disconnectNotify(signal);
    }

    // Friend functions
    friend void QBarCategoryAxis_SuperTimerEvent(QBarCategoryAxis* self, QTimerEvent* event);
    friend void QBarCategoryAxis_SuperChildEvent(QBarCategoryAxis* self, QChildEvent* event);
    friend void QBarCategoryAxis_SuperCustomEvent(QBarCategoryAxis* self, QEvent* event);
    friend void QBarCategoryAxis_SuperConnectNotify(QBarCategoryAxis* self, const QMetaMethod* signal);
    friend void QBarCategoryAxis_SuperDisconnectNotify(QBarCategoryAxis* self, const QMetaMethod* signal);
};

#endif
