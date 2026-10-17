#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQVALUE3DAXIS_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQVALUE3DAXIS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QValue3DAxis
class VirtualQValue3DAxis final : public QValue3DAxis {
  public:
    // Virtual class public types (including callbacks and access types)
    using QValue3DAxis_MetaObject_Callback = QMetaObject* (*)(const QValue3DAxis*);
    using QValue3DAxis_Metacast_Callback = void* (*)(QValue3DAxis*, const char*);
    using QValue3DAxis_Metacall_Callback = int (*)(QValue3DAxis*, int, int, void**);
    using QValue3DAxis_Event_Callback = bool (*)(QValue3DAxis*, QEvent*);
    using QValue3DAxis_EventFilter_Callback = bool (*)(QValue3DAxis*, QObject*, QEvent*);
    using QValue3DAxis_TimerEvent_Callback = void (*)(QValue3DAxis*, QTimerEvent*);
    using QValue3DAxis_ChildEvent_Callback = void (*)(QValue3DAxis*, QChildEvent*);
    using QValue3DAxis_CustomEvent_Callback = void (*)(QValue3DAxis*, QEvent*);
    using QValue3DAxis_ConnectNotify_Callback = void (*)(QValue3DAxis*, QMetaMethod*);
    using QValue3DAxis_DisconnectNotify_Callback = void (*)(QValue3DAxis*, QMetaMethod*);
    using QValue3DAxis::isSignalConnected;
    using QValue3DAxis::receivers;
    using QValue3DAxis::sender;
    using QValue3DAxis::senderSignalIndex;

    // Instance callback storage
    QValue3DAxis_MetaObject_Callback qvalue3daxis_metaobject_callback = nullptr;
    QValue3DAxis_Metacast_Callback qvalue3daxis_metacast_callback = nullptr;
    QValue3DAxis_Metacall_Callback qvalue3daxis_metacall_callback = nullptr;
    QValue3DAxis_Event_Callback qvalue3daxis_event_callback = nullptr;
    QValue3DAxis_EventFilter_Callback qvalue3daxis_eventfilter_callback = nullptr;
    QValue3DAxis_TimerEvent_Callback qvalue3daxis_timerevent_callback = nullptr;
    QValue3DAxis_ChildEvent_Callback qvalue3daxis_childevent_callback = nullptr;
    QValue3DAxis_CustomEvent_Callback qvalue3daxis_customevent_callback = nullptr;
    QValue3DAxis_ConnectNotify_Callback qvalue3daxis_connectnotify_callback = nullptr;
    QValue3DAxis_DisconnectNotify_Callback qvalue3daxis_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QValue3DAxis {
        using QValue3DAxis::childEvent;
        using QValue3DAxis::connectNotify;
        using QValue3DAxis::customEvent;
        using QValue3DAxis::disconnectNotify;
        using QValue3DAxis::timerEvent;
    };

    VirtualQValue3DAxis() : QValue3DAxis() {};
    VirtualQValue3DAxis(QObject* parent) : QValue3DAxis(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvalue3daxis_metaobject_callback) {
            QMetaObject* callback_ret = qvalue3daxis_metaobject_callback(this);
            return callback_ret;
        }
        return QValue3DAxis::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvalue3daxis_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvalue3daxis_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QValue3DAxis::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvalue3daxis_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvalue3daxis_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QValue3DAxis::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvalue3daxis_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvalue3daxis_event_callback(this, cbval1);
            return callback_ret;
        }
        return QValue3DAxis::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvalue3daxis_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvalue3daxis_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QValue3DAxis::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvalue3daxis_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvalue3daxis_timerevent_callback(this, cbval1);
            return;
        }
        QValue3DAxis::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvalue3daxis_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvalue3daxis_childevent_callback(this, cbval1);
            return;
        }
        QValue3DAxis::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvalue3daxis_customevent_callback) {
            QEvent* cbval1 = event;
            qvalue3daxis_customevent_callback(this, cbval1);
            return;
        }
        QValue3DAxis::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvalue3daxis_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvalue3daxis_connectnotify_callback(this, cbval1);
            return;
        }
        QValue3DAxis::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvalue3daxis_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvalue3daxis_disconnectnotify_callback(this, cbval1);
            return;
        }
        QValue3DAxis::disconnectNotify(signal);
    }

    // Friend functions
    friend void QValue3DAxis_SuperTimerEvent(QValue3DAxis* self, QTimerEvent* event);
    friend void QValue3DAxis_SuperChildEvent(QValue3DAxis* self, QChildEvent* event);
    friend void QValue3DAxis_SuperCustomEvent(QValue3DAxis* self, QEvent* event);
    friend void QValue3DAxis_SuperConnectNotify(QValue3DAxis* self, const QMetaMethod* signal);
    friend void QValue3DAxis_SuperDisconnectNotify(QValue3DAxis* self, const QMetaMethod* signal);
};

#endif
