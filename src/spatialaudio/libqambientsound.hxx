#pragma once
#ifndef SPATIALAUDIO_LIBQAMBIENTSOUND_HXX
#define SPATIALAUDIO_LIBQAMBIENTSOUND_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAmbientSound
class VirtualQAmbientSound final : public QAmbientSound {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAmbientSound_MetaObject_Callback = QMetaObject* (*)(const QAmbientSound*);
    using QAmbientSound_Metacast_Callback = void* (*)(QAmbientSound*, const char*);
    using QAmbientSound_Metacall_Callback = int (*)(QAmbientSound*, int, int, void**);
    using QAmbientSound_Event_Callback = bool (*)(QAmbientSound*, QEvent*);
    using QAmbientSound_EventFilter_Callback = bool (*)(QAmbientSound*, QObject*, QEvent*);
    using QAmbientSound_TimerEvent_Callback = void (*)(QAmbientSound*, QTimerEvent*);
    using QAmbientSound_ChildEvent_Callback = void (*)(QAmbientSound*, QChildEvent*);
    using QAmbientSound_CustomEvent_Callback = void (*)(QAmbientSound*, QEvent*);
    using QAmbientSound_ConnectNotify_Callback = void (*)(QAmbientSound*, QMetaMethod*);
    using QAmbientSound_DisconnectNotify_Callback = void (*)(QAmbientSound*, QMetaMethod*);
    using QAmbientSound::isSignalConnected;
    using QAmbientSound::receivers;
    using QAmbientSound::sender;
    using QAmbientSound::senderSignalIndex;

    // Instance callback storage
    QAmbientSound_MetaObject_Callback qambientsound_metaobject_callback = nullptr;
    QAmbientSound_Metacast_Callback qambientsound_metacast_callback = nullptr;
    QAmbientSound_Metacall_Callback qambientsound_metacall_callback = nullptr;
    QAmbientSound_Event_Callback qambientsound_event_callback = nullptr;
    QAmbientSound_EventFilter_Callback qambientsound_eventfilter_callback = nullptr;
    QAmbientSound_TimerEvent_Callback qambientsound_timerevent_callback = nullptr;
    QAmbientSound_ChildEvent_Callback qambientsound_childevent_callback = nullptr;
    QAmbientSound_CustomEvent_Callback qambientsound_customevent_callback = nullptr;
    QAmbientSound_ConnectNotify_Callback qambientsound_connectnotify_callback = nullptr;
    QAmbientSound_DisconnectNotify_Callback qambientsound_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAmbientSound {
        using QAmbientSound::childEvent;
        using QAmbientSound::connectNotify;
        using QAmbientSound::customEvent;
        using QAmbientSound::disconnectNotify;
        using QAmbientSound::timerEvent;
    };

    VirtualQAmbientSound(QAudioEngine* engine) : QAmbientSound(engine) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qambientsound_metaobject_callback) {
            QMetaObject* callback_ret = qambientsound_metaobject_callback(this);
            return callback_ret;
        }
        return QAmbientSound::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qambientsound_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qambientsound_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAmbientSound::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qambientsound_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qambientsound_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAmbientSound::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qambientsound_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qambientsound_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAmbientSound::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qambientsound_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qambientsound_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAmbientSound::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qambientsound_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qambientsound_timerevent_callback(this, cbval1);
            return;
        }
        QAmbientSound::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qambientsound_childevent_callback) {
            QChildEvent* cbval1 = event;
            qambientsound_childevent_callback(this, cbval1);
            return;
        }
        QAmbientSound::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qambientsound_customevent_callback) {
            QEvent* cbval1 = event;
            qambientsound_customevent_callback(this, cbval1);
            return;
        }
        QAmbientSound::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qambientsound_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qambientsound_connectnotify_callback(this, cbval1);
            return;
        }
        QAmbientSound::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qambientsound_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qambientsound_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAmbientSound::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAmbientSound_SuperTimerEvent(QAmbientSound* self, QTimerEvent* event);
    friend void QAmbientSound_SuperChildEvent(QAmbientSound* self, QChildEvent* event);
    friend void QAmbientSound_SuperCustomEvent(QAmbientSound* self, QEvent* event);
    friend void QAmbientSound_SuperConnectNotify(QAmbientSound* self, const QMetaMethod* signal);
    friend void QAmbientSound_SuperDisconnectNotify(QAmbientSound* self, const QMetaMethod* signal);
};

#endif
