#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQCATEGORYAXIS_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQCATEGORYAXIS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCategoryAxis
class VirtualQCategoryAxis final : public QCategoryAxis {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCategoryAxis_MetaObject_Callback = QMetaObject* (*)(const QCategoryAxis*);
    using QCategoryAxis_Metacast_Callback = void* (*)(QCategoryAxis*, const char*);
    using QCategoryAxis_Metacall_Callback = int (*)(QCategoryAxis*, int, int, void**);
    using QCategoryAxis_Type_Callback = int (*)(const QCategoryAxis*);
    using QCategoryAxis_Event_Callback = bool (*)(QCategoryAxis*, QEvent*);
    using QCategoryAxis_EventFilter_Callback = bool (*)(QCategoryAxis*, QObject*, QEvent*);
    using QCategoryAxis_TimerEvent_Callback = void (*)(QCategoryAxis*, QTimerEvent*);
    using QCategoryAxis_ChildEvent_Callback = void (*)(QCategoryAxis*, QChildEvent*);
    using QCategoryAxis_CustomEvent_Callback = void (*)(QCategoryAxis*, QEvent*);
    using QCategoryAxis_ConnectNotify_Callback = void (*)(QCategoryAxis*, QMetaMethod*);
    using QCategoryAxis_DisconnectNotify_Callback = void (*)(QCategoryAxis*, QMetaMethod*);
    using QCategoryAxis::isSignalConnected;
    using QCategoryAxis::receivers;
    using QCategoryAxis::sender;
    using QCategoryAxis::senderSignalIndex;

    // Instance callback storage
    QCategoryAxis_MetaObject_Callback qcategoryaxis_metaobject_callback = nullptr;
    QCategoryAxis_Metacast_Callback qcategoryaxis_metacast_callback = nullptr;
    QCategoryAxis_Metacall_Callback qcategoryaxis_metacall_callback = nullptr;
    QCategoryAxis_Type_Callback qcategoryaxis_type_callback = nullptr;
    QCategoryAxis_Event_Callback qcategoryaxis_event_callback = nullptr;
    QCategoryAxis_EventFilter_Callback qcategoryaxis_eventfilter_callback = nullptr;
    QCategoryAxis_TimerEvent_Callback qcategoryaxis_timerevent_callback = nullptr;
    QCategoryAxis_ChildEvent_Callback qcategoryaxis_childevent_callback = nullptr;
    QCategoryAxis_CustomEvent_Callback qcategoryaxis_customevent_callback = nullptr;
    QCategoryAxis_ConnectNotify_Callback qcategoryaxis_connectnotify_callback = nullptr;
    QCategoryAxis_DisconnectNotify_Callback qcategoryaxis_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCategoryAxis {
        using QCategoryAxis::childEvent;
        using QCategoryAxis::connectNotify;
        using QCategoryAxis::customEvent;
        using QCategoryAxis::disconnectNotify;
        using QCategoryAxis::timerEvent;
    };

    VirtualQCategoryAxis() : QCategoryAxis() {};
    VirtualQCategoryAxis(QObject* parent) : QCategoryAxis(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcategoryaxis_metaobject_callback) {
            QMetaObject* callback_ret = qcategoryaxis_metaobject_callback(this);
            return callback_ret;
        }
        return QCategoryAxis::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcategoryaxis_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcategoryaxis_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCategoryAxis::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcategoryaxis_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcategoryaxis_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCategoryAxis::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractAxis::AxisType type() const override {
        if (qcategoryaxis_type_callback) {
            int callback_ret = qcategoryaxis_type_callback(this);
            return static_cast<QAbstractAxis::AxisType>(callback_ret);
        }
        return QCategoryAxis::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcategoryaxis_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcategoryaxis_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCategoryAxis::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcategoryaxis_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcategoryaxis_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCategoryAxis::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcategoryaxis_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcategoryaxis_timerevent_callback(this, cbval1);
            return;
        }
        QCategoryAxis::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcategoryaxis_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcategoryaxis_childevent_callback(this, cbval1);
            return;
        }
        QCategoryAxis::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcategoryaxis_customevent_callback) {
            QEvent* cbval1 = event;
            qcategoryaxis_customevent_callback(this, cbval1);
            return;
        }
        QCategoryAxis::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcategoryaxis_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcategoryaxis_connectnotify_callback(this, cbval1);
            return;
        }
        QCategoryAxis::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcategoryaxis_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcategoryaxis_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCategoryAxis::disconnectNotify(signal);
    }

    // Friend functions
    friend void QCategoryAxis_SuperTimerEvent(QCategoryAxis* self, QTimerEvent* event);
    friend void QCategoryAxis_SuperChildEvent(QCategoryAxis* self, QChildEvent* event);
    friend void QCategoryAxis_SuperCustomEvent(QCategoryAxis* self, QEvent* event);
    friend void QCategoryAxis_SuperConnectNotify(QCategoryAxis* self, const QMetaMethod* signal);
    friend void QCategoryAxis_SuperDisconnectNotify(QCategoryAxis* self, const QMetaMethod* signal);
};

#endif
