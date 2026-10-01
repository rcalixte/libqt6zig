#pragma once
#ifndef LIBQTIMELINE_HXX
#define LIBQTIMELINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTimeLine
class VirtualQTimeLine final : public QTimeLine {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTimeLine_MetaObject_Callback = QMetaObject* (*)(const QTimeLine*);
    using QTimeLine_Metacast_Callback = void* (*)(QTimeLine*, const char*);
    using QTimeLine_Metacall_Callback = int (*)(QTimeLine*, int, int, void**);
    using QTimeLine_ValueForTime_Callback = double (*)(const QTimeLine*, int);
    using QTimeLine_TimerEvent_Callback = void (*)(QTimeLine*, QTimerEvent*);
    using QTimeLine_Event_Callback = bool (*)(QTimeLine*, QEvent*);
    using QTimeLine_EventFilter_Callback = bool (*)(QTimeLine*, QObject*, QEvent*);
    using QTimeLine_ChildEvent_Callback = void (*)(QTimeLine*, QChildEvent*);
    using QTimeLine_CustomEvent_Callback = void (*)(QTimeLine*, QEvent*);
    using QTimeLine_ConnectNotify_Callback = void (*)(QTimeLine*, QMetaMethod*);
    using QTimeLine_DisconnectNotify_Callback = void (*)(QTimeLine*, QMetaMethod*);
    using QTimeLine::isSignalConnected;
    using QTimeLine::receivers;
    using QTimeLine::sender;
    using QTimeLine::senderSignalIndex;

    // Instance callback storage
    QTimeLine_MetaObject_Callback qtimeline_metaobject_callback = nullptr;
    QTimeLine_Metacast_Callback qtimeline_metacast_callback = nullptr;
    QTimeLine_Metacall_Callback qtimeline_metacall_callback = nullptr;
    QTimeLine_ValueForTime_Callback qtimeline_valuefortime_callback = nullptr;
    QTimeLine_TimerEvent_Callback qtimeline_timerevent_callback = nullptr;
    QTimeLine_Event_Callback qtimeline_event_callback = nullptr;
    QTimeLine_EventFilter_Callback qtimeline_eventfilter_callback = nullptr;
    QTimeLine_ChildEvent_Callback qtimeline_childevent_callback = nullptr;
    QTimeLine_CustomEvent_Callback qtimeline_customevent_callback = nullptr;
    QTimeLine_ConnectNotify_Callback qtimeline_connectnotify_callback = nullptr;
    QTimeLine_DisconnectNotify_Callback qtimeline_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTimeLine {
        using QTimeLine::childEvent;
        using QTimeLine::connectNotify;
        using QTimeLine::customEvent;
        using QTimeLine::disconnectNotify;
        using QTimeLine::timerEvent;
    };

    VirtualQTimeLine() : QTimeLine() {};
    VirtualQTimeLine(int duration) : QTimeLine(duration) {};
    VirtualQTimeLine(int duration, QObject* parent) : QTimeLine(duration, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtimeline_metaobject_callback) {
            QMetaObject* callback_ret = qtimeline_metaobject_callback(this);
            return callback_ret;
        }
        return QTimeLine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtimeline_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtimeline_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTimeLine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtimeline_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtimeline_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTimeLine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual qreal valueForTime(int msec) const override {
        if (qtimeline_valuefortime_callback) {
            int cbval1 = msec;
            double callback_ret = qtimeline_valuefortime_callback(this, cbval1);
            return static_cast<qreal>(callback_ret);
        }
        return QTimeLine::valueForTime(msec);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtimeline_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtimeline_timerevent_callback(this, cbval1);
            return;
        }
        QTimeLine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtimeline_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtimeline_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTimeLine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtimeline_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtimeline_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTimeLine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtimeline_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtimeline_childevent_callback(this, cbval1);
            return;
        }
        QTimeLine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtimeline_customevent_callback) {
            QEvent* cbval1 = event;
            qtimeline_customevent_callback(this, cbval1);
            return;
        }
        QTimeLine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtimeline_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtimeline_connectnotify_callback(this, cbval1);
            return;
        }
        QTimeLine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtimeline_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtimeline_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTimeLine::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTimeLine_SuperTimerEvent(QTimeLine* self, QTimerEvent* event);
    friend void QTimeLine_SuperChildEvent(QTimeLine* self, QChildEvent* event);
    friend void QTimeLine_SuperCustomEvent(QTimeLine* self, QEvent* event);
    friend void QTimeLine_SuperConnectNotify(QTimeLine* self, const QMetaMethod* signal);
    friend void QTimeLine_SuperDisconnectNotify(QTimeLine* self, const QMetaMethod* signal);
};

#endif
