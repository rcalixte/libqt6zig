#pragma once
#ifndef MULTIMEDIA_LIBQAUDIODECODER_HXX
#define MULTIMEDIA_LIBQAUDIODECODER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioDecoder
class VirtualQAudioDecoder final : public QAudioDecoder {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAudioDecoder_MetaObject_Callback = QMetaObject* (*)(const QAudioDecoder*);
    using QAudioDecoder_Metacast_Callback = void* (*)(QAudioDecoder*, const char*);
    using QAudioDecoder_Metacall_Callback = int (*)(QAudioDecoder*, int, int, void**);
    using QAudioDecoder_Event_Callback = bool (*)(QAudioDecoder*, QEvent*);
    using QAudioDecoder_EventFilter_Callback = bool (*)(QAudioDecoder*, QObject*, QEvent*);
    using QAudioDecoder_TimerEvent_Callback = void (*)(QAudioDecoder*, QTimerEvent*);
    using QAudioDecoder_ChildEvent_Callback = void (*)(QAudioDecoder*, QChildEvent*);
    using QAudioDecoder_CustomEvent_Callback = void (*)(QAudioDecoder*, QEvent*);
    using QAudioDecoder_ConnectNotify_Callback = void (*)(QAudioDecoder*, QMetaMethod*);
    using QAudioDecoder_DisconnectNotify_Callback = void (*)(QAudioDecoder*, QMetaMethod*);
    using QAudioDecoder::isSignalConnected;
    using QAudioDecoder::receivers;
    using QAudioDecoder::sender;
    using QAudioDecoder::senderSignalIndex;

    // Instance callback storage
    QAudioDecoder_MetaObject_Callback qaudiodecoder_metaobject_callback = nullptr;
    QAudioDecoder_Metacast_Callback qaudiodecoder_metacast_callback = nullptr;
    QAudioDecoder_Metacall_Callback qaudiodecoder_metacall_callback = nullptr;
    QAudioDecoder_Event_Callback qaudiodecoder_event_callback = nullptr;
    QAudioDecoder_EventFilter_Callback qaudiodecoder_eventfilter_callback = nullptr;
    QAudioDecoder_TimerEvent_Callback qaudiodecoder_timerevent_callback = nullptr;
    QAudioDecoder_ChildEvent_Callback qaudiodecoder_childevent_callback = nullptr;
    QAudioDecoder_CustomEvent_Callback qaudiodecoder_customevent_callback = nullptr;
    QAudioDecoder_ConnectNotify_Callback qaudiodecoder_connectnotify_callback = nullptr;
    QAudioDecoder_DisconnectNotify_Callback qaudiodecoder_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAudioDecoder {
        using QAudioDecoder::childEvent;
        using QAudioDecoder::connectNotify;
        using QAudioDecoder::customEvent;
        using QAudioDecoder::disconnectNotify;
        using QAudioDecoder::timerEvent;
    };

    VirtualQAudioDecoder() : QAudioDecoder() {};
    VirtualQAudioDecoder(QObject* parent) : QAudioDecoder(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudiodecoder_metaobject_callback) {
            QMetaObject* callback_ret = qaudiodecoder_metaobject_callback(this);
            return callback_ret;
        }
        return QAudioDecoder::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudiodecoder_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qaudiodecoder_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioDecoder::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiodecoder_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qaudiodecoder_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioDecoder::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiodecoder_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qaudiodecoder_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioDecoder::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiodecoder_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qaudiodecoder_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioDecoder::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiodecoder_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qaudiodecoder_timerevent_callback(this, cbval1);
            return;
        }
        QAudioDecoder::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiodecoder_childevent_callback) {
            QChildEvent* cbval1 = event;
            qaudiodecoder_childevent_callback(this, cbval1);
            return;
        }
        QAudioDecoder::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiodecoder_customevent_callback) {
            QEvent* cbval1 = event;
            qaudiodecoder_customevent_callback(this, cbval1);
            return;
        }
        QAudioDecoder::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiodecoder_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiodecoder_connectnotify_callback(this, cbval1);
            return;
        }
        QAudioDecoder::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiodecoder_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudiodecoder_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAudioDecoder::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAudioDecoder_SuperTimerEvent(QAudioDecoder* self, QTimerEvent* event);
    friend void QAudioDecoder_SuperChildEvent(QAudioDecoder* self, QChildEvent* event);
    friend void QAudioDecoder_SuperCustomEvent(QAudioDecoder* self, QEvent* event);
    friend void QAudioDecoder_SuperConnectNotify(QAudioDecoder* self, const QMetaMethod* signal);
    friend void QAudioDecoder_SuperDisconnectNotify(QAudioDecoder* self, const QMetaMethod* signal);
};

#endif
