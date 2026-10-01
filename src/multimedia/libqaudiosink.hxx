#pragma once
#ifndef MULTIMEDIA_LIBQAUDIOSINK_HXX
#define MULTIMEDIA_LIBQAUDIOSINK_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioSink
class VirtualQAudioSink final : public QAudioSink {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAudioSink_MetaObject_Callback = QMetaObject* (*)(const QAudioSink*);
    using QAudioSink_Metacast_Callback = void* (*)(QAudioSink*, const char*);
    using QAudioSink_Metacall_Callback = int (*)(QAudioSink*, int, int, void**);
    using QAudioSink_Event_Callback = bool (*)(QAudioSink*, QEvent*);
    using QAudioSink_EventFilter_Callback = bool (*)(QAudioSink*, QObject*, QEvent*);
    using QAudioSink_TimerEvent_Callback = void (*)(QAudioSink*, QTimerEvent*);
    using QAudioSink_ChildEvent_Callback = void (*)(QAudioSink*, QChildEvent*);
    using QAudioSink_CustomEvent_Callback = void (*)(QAudioSink*, QEvent*);
    using QAudioSink_ConnectNotify_Callback = void (*)(QAudioSink*, QMetaMethod*);
    using QAudioSink_DisconnectNotify_Callback = void (*)(QAudioSink*, QMetaMethod*);
    using QAudioSink::isSignalConnected;
    using QAudioSink::receivers;
    using QAudioSink::sender;
    using QAudioSink::senderSignalIndex;

    // Instance callback storage
    QAudioSink_MetaObject_Callback qaudiosink_metaobject_callback = nullptr;
    QAudioSink_Metacast_Callback qaudiosink_metacast_callback = nullptr;
    QAudioSink_Metacall_Callback qaudiosink_metacall_callback = nullptr;
    QAudioSink_Event_Callback qaudiosink_event_callback = nullptr;
    QAudioSink_EventFilter_Callback qaudiosink_eventfilter_callback = nullptr;
    QAudioSink_TimerEvent_Callback qaudiosink_timerevent_callback = nullptr;
    QAudioSink_ChildEvent_Callback qaudiosink_childevent_callback = nullptr;
    QAudioSink_CustomEvent_Callback qaudiosink_customevent_callback = nullptr;
    QAudioSink_ConnectNotify_Callback qaudiosink_connectnotify_callback = nullptr;
    QAudioSink_DisconnectNotify_Callback qaudiosink_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAudioSink {
        using QAudioSink::childEvent;
        using QAudioSink::connectNotify;
        using QAudioSink::customEvent;
        using QAudioSink::disconnectNotify;
        using QAudioSink::timerEvent;
    };

    VirtualQAudioSink() : QAudioSink() {};
    VirtualQAudioSink(const QAudioDevice& audioDeviceInfo) : QAudioSink(audioDeviceInfo) {};
    VirtualQAudioSink(const QAudioFormat& format) : QAudioSink(format) {};
    VirtualQAudioSink(const QAudioFormat& format, QObject* parent) : QAudioSink(format, parent) {};
    VirtualQAudioSink(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format) : QAudioSink(audioDeviceInfo, format) {};
    VirtualQAudioSink(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format, QObject* parent) : QAudioSink(audioDeviceInfo, format, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudiosink_metaobject_callback) {
            QMetaObject* callback_ret = qaudiosink_metaobject_callback(this);
            return callback_ret;
        }
        return QAudioSink::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudiosink_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qaudiosink_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioSink::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiosink_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qaudiosink_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioSink::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiosink_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qaudiosink_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioSink::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiosink_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qaudiosink_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioSink::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiosink_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qaudiosink_timerevent_callback(this, cbval1);
            return;
        }
        QAudioSink::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiosink_childevent_callback) {
            QChildEvent* cbval1 = event;
            qaudiosink_childevent_callback(this, cbval1);
            return;
        }
        QAudioSink::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiosink_customevent_callback) {
            QEvent* cbval1 = event;
            qaudiosink_customevent_callback(this, cbval1);
            return;
        }
        QAudioSink::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiosink_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiosink_connectnotify_callback(this, cbval1);
            return;
        }
        QAudioSink::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiosink_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiosink_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAudioSink::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAudioSink_SuperTimerEvent(QAudioSink* self, QTimerEvent* event);
    friend void QAudioSink_SuperChildEvent(QAudioSink* self, QChildEvent* event);
    friend void QAudioSink_SuperCustomEvent(QAudioSink* self, QEvent* event);
    friend void QAudioSink_SuperConnectNotify(QAudioSink* self, const QMetaMethod* signal);
    friend void QAudioSink_SuperDisconnectNotify(QAudioSink* self, const QMetaMethod* signal);
};

#endif
