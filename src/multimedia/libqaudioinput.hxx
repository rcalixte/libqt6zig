#pragma once
#ifndef MULTIMEDIA_LIBQAUDIOINPUT_HXX
#define MULTIMEDIA_LIBQAUDIOINPUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioInput
class VirtualQAudioInput final : public QAudioInput {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAudioInput_MetaObject_Callback = QMetaObject* (*)(const QAudioInput*);
    using QAudioInput_Metacast_Callback = void* (*)(QAudioInput*, const char*);
    using QAudioInput_Metacall_Callback = int (*)(QAudioInput*, int, int, void**);
    using QAudioInput_Event_Callback = bool (*)(QAudioInput*, QEvent*);
    using QAudioInput_EventFilter_Callback = bool (*)(QAudioInput*, QObject*, QEvent*);
    using QAudioInput_TimerEvent_Callback = void (*)(QAudioInput*, QTimerEvent*);
    using QAudioInput_ChildEvent_Callback = void (*)(QAudioInput*, QChildEvent*);
    using QAudioInput_CustomEvent_Callback = void (*)(QAudioInput*, QEvent*);
    using QAudioInput_ConnectNotify_Callback = void (*)(QAudioInput*, QMetaMethod*);
    using QAudioInput_DisconnectNotify_Callback = void (*)(QAudioInput*, QMetaMethod*);
    using QAudioInput::isSignalConnected;
    using QAudioInput::receivers;
    using QAudioInput::sender;
    using QAudioInput::senderSignalIndex;

    // Instance callback storage
    QAudioInput_MetaObject_Callback qaudioinput_metaobject_callback = nullptr;
    QAudioInput_Metacast_Callback qaudioinput_metacast_callback = nullptr;
    QAudioInput_Metacall_Callback qaudioinput_metacall_callback = nullptr;
    QAudioInput_Event_Callback qaudioinput_event_callback = nullptr;
    QAudioInput_EventFilter_Callback qaudioinput_eventfilter_callback = nullptr;
    QAudioInput_TimerEvent_Callback qaudioinput_timerevent_callback = nullptr;
    QAudioInput_ChildEvent_Callback qaudioinput_childevent_callback = nullptr;
    QAudioInput_CustomEvent_Callback qaudioinput_customevent_callback = nullptr;
    QAudioInput_ConnectNotify_Callback qaudioinput_connectnotify_callback = nullptr;
    QAudioInput_DisconnectNotify_Callback qaudioinput_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAudioInput {
        using QAudioInput::childEvent;
        using QAudioInput::connectNotify;
        using QAudioInput::customEvent;
        using QAudioInput::disconnectNotify;
        using QAudioInput::timerEvent;
    };

    VirtualQAudioInput() : QAudioInput() {};
    VirtualQAudioInput(const QAudioDevice& deviceInfo) : QAudioInput(deviceInfo) {};
    VirtualQAudioInput(QObject* parent) : QAudioInput(parent) {};
    VirtualQAudioInput(const QAudioDevice& deviceInfo, QObject* parent) : QAudioInput(deviceInfo, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudioinput_metaobject_callback) {
            QMetaObject* callback_ret = qaudioinput_metaobject_callback(this);
            return callback_ret;
        }
        return QAudioInput::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudioinput_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qaudioinput_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioInput::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudioinput_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qaudioinput_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioInput::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudioinput_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qaudioinput_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioInput::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudioinput_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qaudioinput_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioInput::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudioinput_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qaudioinput_timerevent_callback(this, cbval1);
            return;
        }
        QAudioInput::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudioinput_childevent_callback) {
            QChildEvent* cbval1 = event;
            qaudioinput_childevent_callback(this, cbval1);
            return;
        }
        QAudioInput::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudioinput_customevent_callback) {
            QEvent* cbval1 = event;
            qaudioinput_customevent_callback(this, cbval1);
            return;
        }
        QAudioInput::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudioinput_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudioinput_connectnotify_callback(this, cbval1);
            return;
        }
        QAudioInput::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudioinput_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudioinput_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAudioInput::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAudioInput_SuperTimerEvent(QAudioInput* self, QTimerEvent* event);
    friend void QAudioInput_SuperChildEvent(QAudioInput* self, QChildEvent* event);
    friend void QAudioInput_SuperCustomEvent(QAudioInput* self, QEvent* event);
    friend void QAudioInput_SuperConnectNotify(QAudioInput* self, const QMetaMethod* signal);
    friend void QAudioInput_SuperDisconnectNotify(QAudioInput* self, const QMetaMethod* signal);
};

#endif
