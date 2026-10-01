#pragma once
#ifndef MULTIMEDIA_LIBQAUDIOBUFFERINPUT_HXX
#define MULTIMEDIA_LIBQAUDIOBUFFERINPUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioBufferInput
class VirtualQAudioBufferInput final : public QAudioBufferInput {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAudioBufferInput_MetaObject_Callback = QMetaObject* (*)(const QAudioBufferInput*);
    using QAudioBufferInput_Metacast_Callback = void* (*)(QAudioBufferInput*, const char*);
    using QAudioBufferInput_Metacall_Callback = int (*)(QAudioBufferInput*, int, int, void**);
    using QAudioBufferInput_Event_Callback = bool (*)(QAudioBufferInput*, QEvent*);
    using QAudioBufferInput_EventFilter_Callback = bool (*)(QAudioBufferInput*, QObject*, QEvent*);
    using QAudioBufferInput_TimerEvent_Callback = void (*)(QAudioBufferInput*, QTimerEvent*);
    using QAudioBufferInput_ChildEvent_Callback = void (*)(QAudioBufferInput*, QChildEvent*);
    using QAudioBufferInput_CustomEvent_Callback = void (*)(QAudioBufferInput*, QEvent*);
    using QAudioBufferInput_ConnectNotify_Callback = void (*)(QAudioBufferInput*, QMetaMethod*);
    using QAudioBufferInput_DisconnectNotify_Callback = void (*)(QAudioBufferInput*, QMetaMethod*);
    using QAudioBufferInput::isSignalConnected;
    using QAudioBufferInput::receivers;
    using QAudioBufferInput::sender;
    using QAudioBufferInput::senderSignalIndex;

    // Instance callback storage
    QAudioBufferInput_MetaObject_Callback qaudiobufferinput_metaobject_callback = nullptr;
    QAudioBufferInput_Metacast_Callback qaudiobufferinput_metacast_callback = nullptr;
    QAudioBufferInput_Metacall_Callback qaudiobufferinput_metacall_callback = nullptr;
    QAudioBufferInput_Event_Callback qaudiobufferinput_event_callback = nullptr;
    QAudioBufferInput_EventFilter_Callback qaudiobufferinput_eventfilter_callback = nullptr;
    QAudioBufferInput_TimerEvent_Callback qaudiobufferinput_timerevent_callback = nullptr;
    QAudioBufferInput_ChildEvent_Callback qaudiobufferinput_childevent_callback = nullptr;
    QAudioBufferInput_CustomEvent_Callback qaudiobufferinput_customevent_callback = nullptr;
    QAudioBufferInput_ConnectNotify_Callback qaudiobufferinput_connectnotify_callback = nullptr;
    QAudioBufferInput_DisconnectNotify_Callback qaudiobufferinput_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAudioBufferInput {
        using QAudioBufferInput::childEvent;
        using QAudioBufferInput::connectNotify;
        using QAudioBufferInput::customEvent;
        using QAudioBufferInput::disconnectNotify;
        using QAudioBufferInput::timerEvent;
    };

    VirtualQAudioBufferInput() : QAudioBufferInput() {};
    VirtualQAudioBufferInput(const QAudioFormat& format) : QAudioBufferInput(format) {};
    VirtualQAudioBufferInput(QObject* parent) : QAudioBufferInput(parent) {};
    VirtualQAudioBufferInput(const QAudioFormat& format, QObject* parent) : QAudioBufferInput(format, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudiobufferinput_metaobject_callback) {
            QMetaObject* callback_ret = qaudiobufferinput_metaobject_callback(this);
            return callback_ret;
        }
        return QAudioBufferInput::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudiobufferinput_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qaudiobufferinput_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioBufferInput::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiobufferinput_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qaudiobufferinput_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioBufferInput::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiobufferinput_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qaudiobufferinput_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioBufferInput::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiobufferinput_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qaudiobufferinput_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioBufferInput::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiobufferinput_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qaudiobufferinput_timerevent_callback(this, cbval1);
            return;
        }
        QAudioBufferInput::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiobufferinput_childevent_callback) {
            QChildEvent* cbval1 = event;
            qaudiobufferinput_childevent_callback(this, cbval1);
            return;
        }
        QAudioBufferInput::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiobufferinput_customevent_callback) {
            QEvent* cbval1 = event;
            qaudiobufferinput_customevent_callback(this, cbval1);
            return;
        }
        QAudioBufferInput::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiobufferinput_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiobufferinput_connectnotify_callback(this, cbval1);
            return;
        }
        QAudioBufferInput::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiobufferinput_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiobufferinput_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAudioBufferInput::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAudioBufferInput_SuperTimerEvent(QAudioBufferInput* self, QTimerEvent* event);
    friend void QAudioBufferInput_SuperChildEvent(QAudioBufferInput* self, QChildEvent* event);
    friend void QAudioBufferInput_SuperCustomEvent(QAudioBufferInput* self, QEvent* event);
    friend void QAudioBufferInput_SuperConnectNotify(QAudioBufferInput* self, const QMetaMethod* signal);
    friend void QAudioBufferInput_SuperDisconnectNotify(QAudioBufferInput* self, const QMetaMethod* signal);
};

#endif
