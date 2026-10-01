#pragma once
#ifndef SPATIALAUDIO_LIBQSPATIALSOUND_HXX
#define SPATIALAUDIO_LIBQSPATIALSOUND_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSpatialSound
class VirtualQSpatialSound final : public QSpatialSound {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSpatialSound_MetaObject_Callback = QMetaObject* (*)(const QSpatialSound*);
    using QSpatialSound_Metacast_Callback = void* (*)(QSpatialSound*, const char*);
    using QSpatialSound_Metacall_Callback = int (*)(QSpatialSound*, int, int, void**);
    using QSpatialSound_Event_Callback = bool (*)(QSpatialSound*, QEvent*);
    using QSpatialSound_EventFilter_Callback = bool (*)(QSpatialSound*, QObject*, QEvent*);
    using QSpatialSound_TimerEvent_Callback = void (*)(QSpatialSound*, QTimerEvent*);
    using QSpatialSound_ChildEvent_Callback = void (*)(QSpatialSound*, QChildEvent*);
    using QSpatialSound_CustomEvent_Callback = void (*)(QSpatialSound*, QEvent*);
    using QSpatialSound_ConnectNotify_Callback = void (*)(QSpatialSound*, QMetaMethod*);
    using QSpatialSound_DisconnectNotify_Callback = void (*)(QSpatialSound*, QMetaMethod*);
    using QSpatialSound::isSignalConnected;
    using QSpatialSound::receivers;
    using QSpatialSound::sender;
    using QSpatialSound::senderSignalIndex;

    // Instance callback storage
    QSpatialSound_MetaObject_Callback qspatialsound_metaobject_callback = nullptr;
    QSpatialSound_Metacast_Callback qspatialsound_metacast_callback = nullptr;
    QSpatialSound_Metacall_Callback qspatialsound_metacall_callback = nullptr;
    QSpatialSound_Event_Callback qspatialsound_event_callback = nullptr;
    QSpatialSound_EventFilter_Callback qspatialsound_eventfilter_callback = nullptr;
    QSpatialSound_TimerEvent_Callback qspatialsound_timerevent_callback = nullptr;
    QSpatialSound_ChildEvent_Callback qspatialsound_childevent_callback = nullptr;
    QSpatialSound_CustomEvent_Callback qspatialsound_customevent_callback = nullptr;
    QSpatialSound_ConnectNotify_Callback qspatialsound_connectnotify_callback = nullptr;
    QSpatialSound_DisconnectNotify_Callback qspatialsound_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSpatialSound {
        using QSpatialSound::childEvent;
        using QSpatialSound::connectNotify;
        using QSpatialSound::customEvent;
        using QSpatialSound::disconnectNotify;
        using QSpatialSound::timerEvent;
    };

    VirtualQSpatialSound(QAudioEngine* engine) : QSpatialSound(engine) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qspatialsound_metaobject_callback) {
            QMetaObject* callback_ret = qspatialsound_metaobject_callback(this);
            return callback_ret;
        }
        return QSpatialSound::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qspatialsound_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qspatialsound_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSpatialSound::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qspatialsound_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qspatialsound_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSpatialSound::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qspatialsound_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qspatialsound_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSpatialSound::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qspatialsound_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qspatialsound_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSpatialSound::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qspatialsound_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qspatialsound_timerevent_callback(this, cbval1);
            return;
        }
        QSpatialSound::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qspatialsound_childevent_callback) {
            QChildEvent* cbval1 = event;
            qspatialsound_childevent_callback(this, cbval1);
            return;
        }
        QSpatialSound::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qspatialsound_customevent_callback) {
            QEvent* cbval1 = event;
            qspatialsound_customevent_callback(this, cbval1);
            return;
        }
        QSpatialSound::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qspatialsound_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qspatialsound_connectnotify_callback(this, cbval1);
            return;
        }
        QSpatialSound::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qspatialsound_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qspatialsound_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSpatialSound::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSpatialSound_SuperTimerEvent(QSpatialSound* self, QTimerEvent* event);
    friend void QSpatialSound_SuperChildEvent(QSpatialSound* self, QChildEvent* event);
    friend void QSpatialSound_SuperCustomEvent(QSpatialSound* self, QEvent* event);
    friend void QSpatialSound_SuperConnectNotify(QSpatialSound* self, const QMetaMethod* signal);
    friend void QSpatialSound_SuperDisconnectNotify(QSpatialSound* self, const QMetaMethod* signal);
};

#endif
