#pragma once
#ifndef SPATIALAUDIO_LIBQAUDIOENGINE_HXX
#define SPATIALAUDIO_LIBQAUDIOENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioEngine
class VirtualQAudioEngine final : public QAudioEngine {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAudioEngine_MetaObject_Callback = QMetaObject* (*)(const QAudioEngine*);
    using QAudioEngine_Metacast_Callback = void* (*)(QAudioEngine*, const char*);
    using QAudioEngine_Metacall_Callback = int (*)(QAudioEngine*, int, int, void**);
    using QAudioEngine_Event_Callback = bool (*)(QAudioEngine*, QEvent*);
    using QAudioEngine_EventFilter_Callback = bool (*)(QAudioEngine*, QObject*, QEvent*);
    using QAudioEngine_TimerEvent_Callback = void (*)(QAudioEngine*, QTimerEvent*);
    using QAudioEngine_ChildEvent_Callback = void (*)(QAudioEngine*, QChildEvent*);
    using QAudioEngine_CustomEvent_Callback = void (*)(QAudioEngine*, QEvent*);
    using QAudioEngine_ConnectNotify_Callback = void (*)(QAudioEngine*, QMetaMethod*);
    using QAudioEngine_DisconnectNotify_Callback = void (*)(QAudioEngine*, QMetaMethod*);
    using QAudioEngine::isSignalConnected;
    using QAudioEngine::receivers;
    using QAudioEngine::sender;
    using QAudioEngine::senderSignalIndex;

    // Instance callback storage
    QAudioEngine_MetaObject_Callback qaudioengine_metaobject_callback = nullptr;
    QAudioEngine_Metacast_Callback qaudioengine_metacast_callback = nullptr;
    QAudioEngine_Metacall_Callback qaudioengine_metacall_callback = nullptr;
    QAudioEngine_Event_Callback qaudioengine_event_callback = nullptr;
    QAudioEngine_EventFilter_Callback qaudioengine_eventfilter_callback = nullptr;
    QAudioEngine_TimerEvent_Callback qaudioengine_timerevent_callback = nullptr;
    QAudioEngine_ChildEvent_Callback qaudioengine_childevent_callback = nullptr;
    QAudioEngine_CustomEvent_Callback qaudioengine_customevent_callback = nullptr;
    QAudioEngine_ConnectNotify_Callback qaudioengine_connectnotify_callback = nullptr;
    QAudioEngine_DisconnectNotify_Callback qaudioengine_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAudioEngine {
        using QAudioEngine::childEvent;
        using QAudioEngine::connectNotify;
        using QAudioEngine::customEvent;
        using QAudioEngine::disconnectNotify;
        using QAudioEngine::timerEvent;
    };

    VirtualQAudioEngine() : QAudioEngine() {};
    VirtualQAudioEngine(QObject* parent) : QAudioEngine(parent) {};
    VirtualQAudioEngine(int sampleRate) : QAudioEngine(sampleRate) {};
    VirtualQAudioEngine(int sampleRate, QObject* parent) : QAudioEngine(sampleRate, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudioengine_metaobject_callback) {
            QMetaObject* callback_ret = qaudioengine_metaobject_callback(this);
            return callback_ret;
        }
        return QAudioEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudioengine_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qaudioengine_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudioengine_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qaudioengine_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudioengine_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qaudioengine_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioEngine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudioengine_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qaudioengine_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudioengine_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qaudioengine_timerevent_callback(this, cbval1);
            return;
        }
        QAudioEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudioengine_childevent_callback) {
            QChildEvent* cbval1 = event;
            qaudioengine_childevent_callback(this, cbval1);
            return;
        }
        QAudioEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudioengine_customevent_callback) {
            QEvent* cbval1 = event;
            qaudioengine_customevent_callback(this, cbval1);
            return;
        }
        QAudioEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudioengine_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudioengine_connectnotify_callback(this, cbval1);
            return;
        }
        QAudioEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudioengine_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudioengine_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAudioEngine::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAudioEngine_SuperTimerEvent(QAudioEngine* self, QTimerEvent* event);
    friend void QAudioEngine_SuperChildEvent(QAudioEngine* self, QChildEvent* event);
    friend void QAudioEngine_SuperCustomEvent(QAudioEngine* self, QEvent* event);
    friend void QAudioEngine_SuperConnectNotify(QAudioEngine* self, const QMetaMethod* signal);
    friend void QAudioEngine_SuperDisconnectNotify(QAudioEngine* self, const QMetaMethod* signal);
};

#endif
