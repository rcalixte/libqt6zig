#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQPIESLICE_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQPIESLICE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPieSlice
class VirtualQPieSlice final : public QPieSlice {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPieSlice_MetaObject_Callback = QMetaObject* (*)(const QPieSlice*);
    using QPieSlice_Metacast_Callback = void* (*)(QPieSlice*, const char*);
    using QPieSlice_Metacall_Callback = int (*)(QPieSlice*, int, int, void**);
    using QPieSlice_Event_Callback = bool (*)(QPieSlice*, QEvent*);
    using QPieSlice_EventFilter_Callback = bool (*)(QPieSlice*, QObject*, QEvent*);
    using QPieSlice_TimerEvent_Callback = void (*)(QPieSlice*, QTimerEvent*);
    using QPieSlice_ChildEvent_Callback = void (*)(QPieSlice*, QChildEvent*);
    using QPieSlice_CustomEvent_Callback = void (*)(QPieSlice*, QEvent*);
    using QPieSlice_ConnectNotify_Callback = void (*)(QPieSlice*, QMetaMethod*);
    using QPieSlice_DisconnectNotify_Callback = void (*)(QPieSlice*, QMetaMethod*);
    using QPieSlice::isSignalConnected;
    using QPieSlice::receivers;
    using QPieSlice::sender;
    using QPieSlice::senderSignalIndex;

    // Instance callback storage
    QPieSlice_MetaObject_Callback qpieslice_metaobject_callback = nullptr;
    QPieSlice_Metacast_Callback qpieslice_metacast_callback = nullptr;
    QPieSlice_Metacall_Callback qpieslice_metacall_callback = nullptr;
    QPieSlice_Event_Callback qpieslice_event_callback = nullptr;
    QPieSlice_EventFilter_Callback qpieslice_eventfilter_callback = nullptr;
    QPieSlice_TimerEvent_Callback qpieslice_timerevent_callback = nullptr;
    QPieSlice_ChildEvent_Callback qpieslice_childevent_callback = nullptr;
    QPieSlice_CustomEvent_Callback qpieslice_customevent_callback = nullptr;
    QPieSlice_ConnectNotify_Callback qpieslice_connectnotify_callback = nullptr;
    QPieSlice_DisconnectNotify_Callback qpieslice_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPieSlice {
        using QPieSlice::childEvent;
        using QPieSlice::connectNotify;
        using QPieSlice::customEvent;
        using QPieSlice::disconnectNotify;
        using QPieSlice::timerEvent;
    };

    VirtualQPieSlice() : QPieSlice() {};
    VirtualQPieSlice(QString label, qreal value) : QPieSlice(label, value) {};
    VirtualQPieSlice(QObject* parent) : QPieSlice(parent) {};
    VirtualQPieSlice(QString label, qreal value, QObject* parent) : QPieSlice(label, value, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpieslice_metaobject_callback) {
            QMetaObject* callback_ret = qpieslice_metaobject_callback(this);
            return callback_ret;
        }
        return QPieSlice::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpieslice_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpieslice_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPieSlice::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpieslice_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpieslice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPieSlice::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpieslice_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpieslice_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPieSlice::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpieslice_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpieslice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPieSlice::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpieslice_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpieslice_timerevent_callback(this, cbval1);
            return;
        }
        QPieSlice::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpieslice_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpieslice_childevent_callback(this, cbval1);
            return;
        }
        QPieSlice::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpieslice_customevent_callback) {
            QEvent* cbval1 = event;
            qpieslice_customevent_callback(this, cbval1);
            return;
        }
        QPieSlice::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpieslice_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpieslice_connectnotify_callback(this, cbval1);
            return;
        }
        QPieSlice::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpieslice_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpieslice_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPieSlice::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPieSlice_SuperTimerEvent(QPieSlice* self, QTimerEvent* event);
    friend void QPieSlice_SuperChildEvent(QPieSlice* self, QChildEvent* event);
    friend void QPieSlice_SuperCustomEvent(QPieSlice* self, QEvent* event);
    friend void QPieSlice_SuperConnectNotify(QPieSlice* self, const QMetaMethod* signal);
    friend void QPieSlice_SuperDisconnectNotify(QPieSlice* self, const QMetaMethod* signal);
};

#endif
