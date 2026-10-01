#pragma once
#ifndef MULTIMEDIA_LIBQVIDEOFRAMEINPUT_HXX
#define MULTIMEDIA_LIBQVIDEOFRAMEINPUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVideoFrameInput
class VirtualQVideoFrameInput final : public QVideoFrameInput {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVideoFrameInput_MetaObject_Callback = QMetaObject* (*)(const QVideoFrameInput*);
    using QVideoFrameInput_Metacast_Callback = void* (*)(QVideoFrameInput*, const char*);
    using QVideoFrameInput_Metacall_Callback = int (*)(QVideoFrameInput*, int, int, void**);
    using QVideoFrameInput_Event_Callback = bool (*)(QVideoFrameInput*, QEvent*);
    using QVideoFrameInput_EventFilter_Callback = bool (*)(QVideoFrameInput*, QObject*, QEvent*);
    using QVideoFrameInput_TimerEvent_Callback = void (*)(QVideoFrameInput*, QTimerEvent*);
    using QVideoFrameInput_ChildEvent_Callback = void (*)(QVideoFrameInput*, QChildEvent*);
    using QVideoFrameInput_CustomEvent_Callback = void (*)(QVideoFrameInput*, QEvent*);
    using QVideoFrameInput_ConnectNotify_Callback = void (*)(QVideoFrameInput*, QMetaMethod*);
    using QVideoFrameInput_DisconnectNotify_Callback = void (*)(QVideoFrameInput*, QMetaMethod*);
    using QVideoFrameInput::isSignalConnected;
    using QVideoFrameInput::receivers;
    using QVideoFrameInput::sender;
    using QVideoFrameInput::senderSignalIndex;

    // Instance callback storage
    QVideoFrameInput_MetaObject_Callback qvideoframeinput_metaobject_callback = nullptr;
    QVideoFrameInput_Metacast_Callback qvideoframeinput_metacast_callback = nullptr;
    QVideoFrameInput_Metacall_Callback qvideoframeinput_metacall_callback = nullptr;
    QVideoFrameInput_Event_Callback qvideoframeinput_event_callback = nullptr;
    QVideoFrameInput_EventFilter_Callback qvideoframeinput_eventfilter_callback = nullptr;
    QVideoFrameInput_TimerEvent_Callback qvideoframeinput_timerevent_callback = nullptr;
    QVideoFrameInput_ChildEvent_Callback qvideoframeinput_childevent_callback = nullptr;
    QVideoFrameInput_CustomEvent_Callback qvideoframeinput_customevent_callback = nullptr;
    QVideoFrameInput_ConnectNotify_Callback qvideoframeinput_connectnotify_callback = nullptr;
    QVideoFrameInput_DisconnectNotify_Callback qvideoframeinput_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QVideoFrameInput {
        using QVideoFrameInput::childEvent;
        using QVideoFrameInput::connectNotify;
        using QVideoFrameInput::customEvent;
        using QVideoFrameInput::disconnectNotify;
        using QVideoFrameInput::timerEvent;
    };

    VirtualQVideoFrameInput() : QVideoFrameInput() {};
    VirtualQVideoFrameInput(const QVideoFrameFormat& format) : QVideoFrameInput(format) {};
    VirtualQVideoFrameInput(QObject* parent) : QVideoFrameInput(parent) {};
    VirtualQVideoFrameInput(const QVideoFrameFormat& format, QObject* parent) : QVideoFrameInput(format, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvideoframeinput_metaobject_callback) {
            QMetaObject* callback_ret = qvideoframeinput_metaobject_callback(this);
            return callback_ret;
        }
        return QVideoFrameInput::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvideoframeinput_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvideoframeinput_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVideoFrameInput::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvideoframeinput_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvideoframeinput_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVideoFrameInput::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvideoframeinput_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvideoframeinput_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVideoFrameInput::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvideoframeinput_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvideoframeinput_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVideoFrameInput::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvideoframeinput_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvideoframeinput_timerevent_callback(this, cbval1);
            return;
        }
        QVideoFrameInput::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvideoframeinput_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvideoframeinput_childevent_callback(this, cbval1);
            return;
        }
        QVideoFrameInput::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvideoframeinput_customevent_callback) {
            QEvent* cbval1 = event;
            qvideoframeinput_customevent_callback(this, cbval1);
            return;
        }
        QVideoFrameInput::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvideoframeinput_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvideoframeinput_connectnotify_callback(this, cbval1);
            return;
        }
        QVideoFrameInput::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvideoframeinput_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvideoframeinput_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVideoFrameInput::disconnectNotify(signal);
    }

    // Friend functions
    friend void QVideoFrameInput_SuperTimerEvent(QVideoFrameInput* self, QTimerEvent* event);
    friend void QVideoFrameInput_SuperChildEvent(QVideoFrameInput* self, QChildEvent* event);
    friend void QVideoFrameInput_SuperCustomEvent(QVideoFrameInput* self, QEvent* event);
    friend void QVideoFrameInput_SuperConnectNotify(QVideoFrameInput* self, const QMetaMethod* signal);
    friend void QVideoFrameInput_SuperDisconnectNotify(QVideoFrameInput* self, const QMetaMethod* signal);
};

#endif
