#pragma once
#ifndef MULTIMEDIA_LIBQAUDIOOUTPUT_HXX
#define MULTIMEDIA_LIBQAUDIOOUTPUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioOutput
class VirtualQAudioOutput final : public QAudioOutput {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAudioOutput_MetaObject_Callback = QMetaObject* (*)(const QAudioOutput*);
    using QAudioOutput_Metacast_Callback = void* (*)(QAudioOutput*, const char*);
    using QAudioOutput_Metacall_Callback = int (*)(QAudioOutput*, int, int, void**);
    using QAudioOutput_Event_Callback = bool (*)(QAudioOutput*, QEvent*);
    using QAudioOutput_EventFilter_Callback = bool (*)(QAudioOutput*, QObject*, QEvent*);
    using QAudioOutput_TimerEvent_Callback = void (*)(QAudioOutput*, QTimerEvent*);
    using QAudioOutput_ChildEvent_Callback = void (*)(QAudioOutput*, QChildEvent*);
    using QAudioOutput_CustomEvent_Callback = void (*)(QAudioOutput*, QEvent*);
    using QAudioOutput_ConnectNotify_Callback = void (*)(QAudioOutput*, QMetaMethod*);
    using QAudioOutput_DisconnectNotify_Callback = void (*)(QAudioOutput*, QMetaMethod*);
    using QAudioOutput::isSignalConnected;
    using QAudioOutput::receivers;
    using QAudioOutput::sender;
    using QAudioOutput::senderSignalIndex;

    // Instance callback storage
    QAudioOutput_MetaObject_Callback qaudiooutput_metaobject_callback = nullptr;
    QAudioOutput_Metacast_Callback qaudiooutput_metacast_callback = nullptr;
    QAudioOutput_Metacall_Callback qaudiooutput_metacall_callback = nullptr;
    QAudioOutput_Event_Callback qaudiooutput_event_callback = nullptr;
    QAudioOutput_EventFilter_Callback qaudiooutput_eventfilter_callback = nullptr;
    QAudioOutput_TimerEvent_Callback qaudiooutput_timerevent_callback = nullptr;
    QAudioOutput_ChildEvent_Callback qaudiooutput_childevent_callback = nullptr;
    QAudioOutput_CustomEvent_Callback qaudiooutput_customevent_callback = nullptr;
    QAudioOutput_ConnectNotify_Callback qaudiooutput_connectnotify_callback = nullptr;
    QAudioOutput_DisconnectNotify_Callback qaudiooutput_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAudioOutput {
        using QAudioOutput::childEvent;
        using QAudioOutput::connectNotify;
        using QAudioOutput::customEvent;
        using QAudioOutput::disconnectNotify;
        using QAudioOutput::timerEvent;
    };

    VirtualQAudioOutput() : QAudioOutput() {};
    VirtualQAudioOutput(const QAudioDevice& device) : QAudioOutput(device) {};
    VirtualQAudioOutput(QObject* parent) : QAudioOutput(parent) {};
    VirtualQAudioOutput(const QAudioDevice& device, QObject* parent) : QAudioOutput(device, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudiooutput_metaobject_callback) {
            QMetaObject* callback_ret = qaudiooutput_metaobject_callback(this);
            return callback_ret;
        }
        return QAudioOutput::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudiooutput_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qaudiooutput_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioOutput::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiooutput_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qaudiooutput_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioOutput::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiooutput_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qaudiooutput_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioOutput::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiooutput_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qaudiooutput_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioOutput::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiooutput_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qaudiooutput_timerevent_callback(this, cbval1);
            return;
        }
        QAudioOutput::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiooutput_childevent_callback) {
            QChildEvent* cbval1 = event;
            qaudiooutput_childevent_callback(this, cbval1);
            return;
        }
        QAudioOutput::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiooutput_customevent_callback) {
            QEvent* cbval1 = event;
            qaudiooutput_customevent_callback(this, cbval1);
            return;
        }
        QAudioOutput::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiooutput_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiooutput_connectnotify_callback(this, cbval1);
            return;
        }
        QAudioOutput::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiooutput_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiooutput_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAudioOutput::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAudioOutput_SuperTimerEvent(QAudioOutput* self, QTimerEvent* event);
    friend void QAudioOutput_SuperChildEvent(QAudioOutput* self, QChildEvent* event);
    friend void QAudioOutput_SuperCustomEvent(QAudioOutput* self, QEvent* event);
    friend void QAudioOutput_SuperConnectNotify(QAudioOutput* self, const QMetaMethod* signal);
    friend void QAudioOutput_SuperDisconnectNotify(QAudioOutput* self, const QMetaMethod* signal);
};

#endif
