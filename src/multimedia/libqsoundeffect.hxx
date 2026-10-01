#pragma once
#ifndef MULTIMEDIA_LIBQSOUNDEFFECT_HXX
#define MULTIMEDIA_LIBQSOUNDEFFECT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSoundEffect
class VirtualQSoundEffect final : public QSoundEffect {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSoundEffect_MetaObject_Callback = QMetaObject* (*)(const QSoundEffect*);
    using QSoundEffect_Metacast_Callback = void* (*)(QSoundEffect*, const char*);
    using QSoundEffect_Metacall_Callback = int (*)(QSoundEffect*, int, int, void**);
    using QSoundEffect_Event_Callback = bool (*)(QSoundEffect*, QEvent*);
    using QSoundEffect_EventFilter_Callback = bool (*)(QSoundEffect*, QObject*, QEvent*);
    using QSoundEffect_TimerEvent_Callback = void (*)(QSoundEffect*, QTimerEvent*);
    using QSoundEffect_ChildEvent_Callback = void (*)(QSoundEffect*, QChildEvent*);
    using QSoundEffect_CustomEvent_Callback = void (*)(QSoundEffect*, QEvent*);
    using QSoundEffect_ConnectNotify_Callback = void (*)(QSoundEffect*, QMetaMethod*);
    using QSoundEffect_DisconnectNotify_Callback = void (*)(QSoundEffect*, QMetaMethod*);
    using QSoundEffect::isSignalConnected;
    using QSoundEffect::receivers;
    using QSoundEffect::sender;
    using QSoundEffect::senderSignalIndex;

    // Instance callback storage
    QSoundEffect_MetaObject_Callback qsoundeffect_metaobject_callback = nullptr;
    QSoundEffect_Metacast_Callback qsoundeffect_metacast_callback = nullptr;
    QSoundEffect_Metacall_Callback qsoundeffect_metacall_callback = nullptr;
    QSoundEffect_Event_Callback qsoundeffect_event_callback = nullptr;
    QSoundEffect_EventFilter_Callback qsoundeffect_eventfilter_callback = nullptr;
    QSoundEffect_TimerEvent_Callback qsoundeffect_timerevent_callback = nullptr;
    QSoundEffect_ChildEvent_Callback qsoundeffect_childevent_callback = nullptr;
    QSoundEffect_CustomEvent_Callback qsoundeffect_customevent_callback = nullptr;
    QSoundEffect_ConnectNotify_Callback qsoundeffect_connectnotify_callback = nullptr;
    QSoundEffect_DisconnectNotify_Callback qsoundeffect_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSoundEffect {
        using QSoundEffect::childEvent;
        using QSoundEffect::connectNotify;
        using QSoundEffect::customEvent;
        using QSoundEffect::disconnectNotify;
        using QSoundEffect::timerEvent;
    };

    VirtualQSoundEffect() : QSoundEffect() {};
    VirtualQSoundEffect(const QAudioDevice& audioDevice) : QSoundEffect(audioDevice) {};
    VirtualQSoundEffect(QObject* parent) : QSoundEffect(parent) {};
    VirtualQSoundEffect(const QAudioDevice& audioDevice, QObject* parent) : QSoundEffect(audioDevice, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsoundeffect_metaobject_callback) {
            QMetaObject* callback_ret = qsoundeffect_metaobject_callback(this);
            return callback_ret;
        }
        return QSoundEffect::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsoundeffect_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsoundeffect_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSoundEffect::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsoundeffect_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsoundeffect_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSoundEffect::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsoundeffect_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsoundeffect_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSoundEffect::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsoundeffect_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsoundeffect_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSoundEffect::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsoundeffect_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsoundeffect_timerevent_callback(this, cbval1);
            return;
        }
        QSoundEffect::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsoundeffect_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsoundeffect_childevent_callback(this, cbval1);
            return;
        }
        QSoundEffect::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsoundeffect_customevent_callback) {
            QEvent* cbval1 = event;
            qsoundeffect_customevent_callback(this, cbval1);
            return;
        }
        QSoundEffect::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsoundeffect_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsoundeffect_connectnotify_callback(this, cbval1);
            return;
        }
        QSoundEffect::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsoundeffect_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsoundeffect_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSoundEffect::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSoundEffect_SuperTimerEvent(QSoundEffect* self, QTimerEvent* event);
    friend void QSoundEffect_SuperChildEvent(QSoundEffect* self, QChildEvent* event);
    friend void QSoundEffect_SuperCustomEvent(QSoundEffect* self, QEvent* event);
    friend void QSoundEffect_SuperConnectNotify(QSoundEffect* self, const QMetaMethod* signal);
    friend void QSoundEffect_SuperDisconnectNotify(QSoundEffect* self, const QMetaMethod* signal);
};

#endif
