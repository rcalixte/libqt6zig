#pragma once
#ifndef MULTIMEDIA_LIBQAUDIOSOURCE_HXX
#define MULTIMEDIA_LIBQAUDIOSOURCE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioSource
class VirtualQAudioSource final : public QAudioSource {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAudioSource_MetaObject_Callback = QMetaObject* (*)(const QAudioSource*);
    using QAudioSource_Metacast_Callback = void* (*)(QAudioSource*, const char*);
    using QAudioSource_Metacall_Callback = int (*)(QAudioSource*, int, int, void**);
    using QAudioSource_Event_Callback = bool (*)(QAudioSource*, QEvent*);
    using QAudioSource_EventFilter_Callback = bool (*)(QAudioSource*, QObject*, QEvent*);
    using QAudioSource_TimerEvent_Callback = void (*)(QAudioSource*, QTimerEvent*);
    using QAudioSource_ChildEvent_Callback = void (*)(QAudioSource*, QChildEvent*);
    using QAudioSource_CustomEvent_Callback = void (*)(QAudioSource*, QEvent*);
    using QAudioSource_ConnectNotify_Callback = void (*)(QAudioSource*, QMetaMethod*);
    using QAudioSource_DisconnectNotify_Callback = void (*)(QAudioSource*, QMetaMethod*);
    using QAudioSource::isSignalConnected;
    using QAudioSource::receivers;
    using QAudioSource::sender;
    using QAudioSource::senderSignalIndex;

    // Instance callback storage
    QAudioSource_MetaObject_Callback qaudiosource_metaobject_callback = nullptr;
    QAudioSource_Metacast_Callback qaudiosource_metacast_callback = nullptr;
    QAudioSource_Metacall_Callback qaudiosource_metacall_callback = nullptr;
    QAudioSource_Event_Callback qaudiosource_event_callback = nullptr;
    QAudioSource_EventFilter_Callback qaudiosource_eventfilter_callback = nullptr;
    QAudioSource_TimerEvent_Callback qaudiosource_timerevent_callback = nullptr;
    QAudioSource_ChildEvent_Callback qaudiosource_childevent_callback = nullptr;
    QAudioSource_CustomEvent_Callback qaudiosource_customevent_callback = nullptr;
    QAudioSource_ConnectNotify_Callback qaudiosource_connectnotify_callback = nullptr;
    QAudioSource_DisconnectNotify_Callback qaudiosource_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAudioSource {
        using QAudioSource::childEvent;
        using QAudioSource::connectNotify;
        using QAudioSource::customEvent;
        using QAudioSource::disconnectNotify;
        using QAudioSource::timerEvent;
    };

    VirtualQAudioSource() : QAudioSource() {};
    VirtualQAudioSource(const QAudioDevice& audioDeviceInfo) : QAudioSource(audioDeviceInfo) {};
    VirtualQAudioSource(const QAudioFormat& format) : QAudioSource(format) {};
    VirtualQAudioSource(const QAudioFormat& format, QObject* parent) : QAudioSource(format, parent) {};
    VirtualQAudioSource(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format) : QAudioSource(audioDeviceInfo, format) {};
    VirtualQAudioSource(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format, QObject* parent) : QAudioSource(audioDeviceInfo, format, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudiosource_metaobject_callback) {
            QMetaObject* callback_ret = qaudiosource_metaobject_callback(this);
            return callback_ret;
        }
        return QAudioSource::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudiosource_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qaudiosource_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioSource::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiosource_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qaudiosource_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioSource::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiosource_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qaudiosource_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioSource::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiosource_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qaudiosource_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioSource::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiosource_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qaudiosource_timerevent_callback(this, cbval1);
            return;
        }
        QAudioSource::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiosource_childevent_callback) {
            QChildEvent* cbval1 = event;
            qaudiosource_childevent_callback(this, cbval1);
            return;
        }
        QAudioSource::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiosource_customevent_callback) {
            QEvent* cbval1 = event;
            qaudiosource_customevent_callback(this, cbval1);
            return;
        }
        QAudioSource::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiosource_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiosource_connectnotify_callback(this, cbval1);
            return;
        }
        QAudioSource::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiosource_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiosource_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAudioSource::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAudioSource_SuperTimerEvent(QAudioSource* self, QTimerEvent* event);
    friend void QAudioSource_SuperChildEvent(QAudioSource* self, QChildEvent* event);
    friend void QAudioSource_SuperCustomEvent(QAudioSource* self, QEvent* event);
    friend void QAudioSource_SuperConnectNotify(QAudioSource* self, const QMetaMethod* signal);
    friend void QAudioSource_SuperDisconnectNotify(QAudioSource* self, const QMetaMethod* signal);
};

#endif
