#pragma once
#ifndef MULTIMEDIA_LIBQAUDIOBUFFEROUTPUT_HXX
#define MULTIMEDIA_LIBQAUDIOBUFFEROUTPUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioBufferOutput
class VirtualQAudioBufferOutput final : public QAudioBufferOutput {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAudioBufferOutput_MetaObject_Callback = QMetaObject* (*)(const QAudioBufferOutput*);
    using QAudioBufferOutput_Metacast_Callback = void* (*)(QAudioBufferOutput*, const char*);
    using QAudioBufferOutput_Metacall_Callback = int (*)(QAudioBufferOutput*, int, int, void**);
    using QAudioBufferOutput_Event_Callback = bool (*)(QAudioBufferOutput*, QEvent*);
    using QAudioBufferOutput_EventFilter_Callback = bool (*)(QAudioBufferOutput*, QObject*, QEvent*);
    using QAudioBufferOutput_TimerEvent_Callback = void (*)(QAudioBufferOutput*, QTimerEvent*);
    using QAudioBufferOutput_ChildEvent_Callback = void (*)(QAudioBufferOutput*, QChildEvent*);
    using QAudioBufferOutput_CustomEvent_Callback = void (*)(QAudioBufferOutput*, QEvent*);
    using QAudioBufferOutput_ConnectNotify_Callback = void (*)(QAudioBufferOutput*, QMetaMethod*);
    using QAudioBufferOutput_DisconnectNotify_Callback = void (*)(QAudioBufferOutput*, QMetaMethod*);
    using QAudioBufferOutput::isSignalConnected;
    using QAudioBufferOutput::receivers;
    using QAudioBufferOutput::sender;
    using QAudioBufferOutput::senderSignalIndex;

    // Instance callback storage
    QAudioBufferOutput_MetaObject_Callback qaudiobufferoutput_metaobject_callback = nullptr;
    QAudioBufferOutput_Metacast_Callback qaudiobufferoutput_metacast_callback = nullptr;
    QAudioBufferOutput_Metacall_Callback qaudiobufferoutput_metacall_callback = nullptr;
    QAudioBufferOutput_Event_Callback qaudiobufferoutput_event_callback = nullptr;
    QAudioBufferOutput_EventFilter_Callback qaudiobufferoutput_eventfilter_callback = nullptr;
    QAudioBufferOutput_TimerEvent_Callback qaudiobufferoutput_timerevent_callback = nullptr;
    QAudioBufferOutput_ChildEvent_Callback qaudiobufferoutput_childevent_callback = nullptr;
    QAudioBufferOutput_CustomEvent_Callback qaudiobufferoutput_customevent_callback = nullptr;
    QAudioBufferOutput_ConnectNotify_Callback qaudiobufferoutput_connectnotify_callback = nullptr;
    QAudioBufferOutput_DisconnectNotify_Callback qaudiobufferoutput_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAudioBufferOutput {
        using QAudioBufferOutput::childEvent;
        using QAudioBufferOutput::connectNotify;
        using QAudioBufferOutput::customEvent;
        using QAudioBufferOutput::disconnectNotify;
        using QAudioBufferOutput::timerEvent;
    };

    VirtualQAudioBufferOutput() : QAudioBufferOutput() {};
    VirtualQAudioBufferOutput(const QAudioFormat& format) : QAudioBufferOutput(format) {};
    VirtualQAudioBufferOutput(QObject* parent) : QAudioBufferOutput(parent) {};
    VirtualQAudioBufferOutput(const QAudioFormat& format, QObject* parent) : QAudioBufferOutput(format, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudiobufferoutput_metaobject_callback) {
            QMetaObject* callback_ret = qaudiobufferoutput_metaobject_callback(this);
            return callback_ret;
        }
        return QAudioBufferOutput::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudiobufferoutput_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qaudiobufferoutput_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioBufferOutput::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiobufferoutput_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qaudiobufferoutput_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioBufferOutput::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiobufferoutput_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qaudiobufferoutput_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioBufferOutput::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiobufferoutput_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qaudiobufferoutput_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioBufferOutput::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiobufferoutput_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qaudiobufferoutput_timerevent_callback(this, cbval1);
            return;
        }
        QAudioBufferOutput::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiobufferoutput_childevent_callback) {
            QChildEvent* cbval1 = event;
            qaudiobufferoutput_childevent_callback(this, cbval1);
            return;
        }
        QAudioBufferOutput::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiobufferoutput_customevent_callback) {
            QEvent* cbval1 = event;
            qaudiobufferoutput_customevent_callback(this, cbval1);
            return;
        }
        QAudioBufferOutput::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiobufferoutput_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiobufferoutput_connectnotify_callback(this, cbval1);
            return;
        }
        QAudioBufferOutput::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiobufferoutput_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiobufferoutput_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAudioBufferOutput::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAudioBufferOutput_SuperTimerEvent(QAudioBufferOutput* self, QTimerEvent* event);
    friend void QAudioBufferOutput_SuperChildEvent(QAudioBufferOutput* self, QChildEvent* event);
    friend void QAudioBufferOutput_SuperCustomEvent(QAudioBufferOutput* self, QEvent* event);
    friend void QAudioBufferOutput_SuperConnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal);
    friend void QAudioBufferOutput_SuperDisconnectNotify(QAudioBufferOutput* self, const QMetaMethod* signal);
};

#endif
