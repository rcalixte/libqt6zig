#pragma once
#ifndef SPATIALAUDIO_LIBQAUDIOLISTENER_HXX
#define SPATIALAUDIO_LIBQAUDIOLISTENER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioListener
class VirtualQAudioListener final : public QAudioListener {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAudioListener_MetaObject_Callback = QMetaObject* (*)(const QAudioListener*);
    using QAudioListener_Metacast_Callback = void* (*)(QAudioListener*, const char*);
    using QAudioListener_Metacall_Callback = int (*)(QAudioListener*, int, int, void**);
    using QAudioListener_Event_Callback = bool (*)(QAudioListener*, QEvent*);
    using QAudioListener_EventFilter_Callback = bool (*)(QAudioListener*, QObject*, QEvent*);
    using QAudioListener_TimerEvent_Callback = void (*)(QAudioListener*, QTimerEvent*);
    using QAudioListener_ChildEvent_Callback = void (*)(QAudioListener*, QChildEvent*);
    using QAudioListener_CustomEvent_Callback = void (*)(QAudioListener*, QEvent*);
    using QAudioListener_ConnectNotify_Callback = void (*)(QAudioListener*, QMetaMethod*);
    using QAudioListener_DisconnectNotify_Callback = void (*)(QAudioListener*, QMetaMethod*);
    using QAudioListener::isSignalConnected;
    using QAudioListener::receivers;
    using QAudioListener::sender;
    using QAudioListener::senderSignalIndex;

    // Instance callback storage
    QAudioListener_MetaObject_Callback qaudiolistener_metaobject_callback = nullptr;
    QAudioListener_Metacast_Callback qaudiolistener_metacast_callback = nullptr;
    QAudioListener_Metacall_Callback qaudiolistener_metacall_callback = nullptr;
    QAudioListener_Event_Callback qaudiolistener_event_callback = nullptr;
    QAudioListener_EventFilter_Callback qaudiolistener_eventfilter_callback = nullptr;
    QAudioListener_TimerEvent_Callback qaudiolistener_timerevent_callback = nullptr;
    QAudioListener_ChildEvent_Callback qaudiolistener_childevent_callback = nullptr;
    QAudioListener_CustomEvent_Callback qaudiolistener_customevent_callback = nullptr;
    QAudioListener_ConnectNotify_Callback qaudiolistener_connectnotify_callback = nullptr;
    QAudioListener_DisconnectNotify_Callback qaudiolistener_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAudioListener {
        using QAudioListener::childEvent;
        using QAudioListener::connectNotify;
        using QAudioListener::customEvent;
        using QAudioListener::disconnectNotify;
        using QAudioListener::timerEvent;
    };

    VirtualQAudioListener(QAudioEngine* engine) : QAudioListener(engine) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudiolistener_metaobject_callback) {
            QMetaObject* callback_ret = qaudiolistener_metaobject_callback(this);
            return callback_ret;
        }
        return QAudioListener::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudiolistener_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qaudiolistener_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioListener::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiolistener_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qaudiolistener_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioListener::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiolistener_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qaudiolistener_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioListener::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiolistener_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qaudiolistener_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioListener::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiolistener_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qaudiolistener_timerevent_callback(this, cbval1);
            return;
        }
        QAudioListener::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiolistener_childevent_callback) {
            QChildEvent* cbval1 = event;
            qaudiolistener_childevent_callback(this, cbval1);
            return;
        }
        QAudioListener::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiolistener_customevent_callback) {
            QEvent* cbval1 = event;
            qaudiolistener_customevent_callback(this, cbval1);
            return;
        }
        QAudioListener::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiolistener_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiolistener_connectnotify_callback(this, cbval1);
            return;
        }
        QAudioListener::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiolistener_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiolistener_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAudioListener::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAudioListener_SuperTimerEvent(QAudioListener* self, QTimerEvent* event);
    friend void QAudioListener_SuperChildEvent(QAudioListener* self, QChildEvent* event);
    friend void QAudioListener_SuperCustomEvent(QAudioListener* self, QEvent* event);
    friend void QAudioListener_SuperConnectNotify(QAudioListener* self, const QMetaMethod* signal);
    friend void QAudioListener_SuperDisconnectNotify(QAudioListener* self, const QMetaMethod* signal);
};

#endif
