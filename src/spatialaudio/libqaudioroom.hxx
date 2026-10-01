#pragma once
#ifndef SPATIALAUDIO_LIBQAUDIOROOM_HXX
#define SPATIALAUDIO_LIBQAUDIOROOM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioRoom
class VirtualQAudioRoom final : public QAudioRoom {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAudioRoom_MetaObject_Callback = QMetaObject* (*)(const QAudioRoom*);
    using QAudioRoom_Metacast_Callback = void* (*)(QAudioRoom*, const char*);
    using QAudioRoom_Metacall_Callback = int (*)(QAudioRoom*, int, int, void**);
    using QAudioRoom_Event_Callback = bool (*)(QAudioRoom*, QEvent*);
    using QAudioRoom_EventFilter_Callback = bool (*)(QAudioRoom*, QObject*, QEvent*);
    using QAudioRoom_TimerEvent_Callback = void (*)(QAudioRoom*, QTimerEvent*);
    using QAudioRoom_ChildEvent_Callback = void (*)(QAudioRoom*, QChildEvent*);
    using QAudioRoom_CustomEvent_Callback = void (*)(QAudioRoom*, QEvent*);
    using QAudioRoom_ConnectNotify_Callback = void (*)(QAudioRoom*, QMetaMethod*);
    using QAudioRoom_DisconnectNotify_Callback = void (*)(QAudioRoom*, QMetaMethod*);
    using QAudioRoom::isSignalConnected;
    using QAudioRoom::receivers;
    using QAudioRoom::sender;
    using QAudioRoom::senderSignalIndex;

    // Instance callback storage
    QAudioRoom_MetaObject_Callback qaudioroom_metaobject_callback = nullptr;
    QAudioRoom_Metacast_Callback qaudioroom_metacast_callback = nullptr;
    QAudioRoom_Metacall_Callback qaudioroom_metacall_callback = nullptr;
    QAudioRoom_Event_Callback qaudioroom_event_callback = nullptr;
    QAudioRoom_EventFilter_Callback qaudioroom_eventfilter_callback = nullptr;
    QAudioRoom_TimerEvent_Callback qaudioroom_timerevent_callback = nullptr;
    QAudioRoom_ChildEvent_Callback qaudioroom_childevent_callback = nullptr;
    QAudioRoom_CustomEvent_Callback qaudioroom_customevent_callback = nullptr;
    QAudioRoom_ConnectNotify_Callback qaudioroom_connectnotify_callback = nullptr;
    QAudioRoom_DisconnectNotify_Callback qaudioroom_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAudioRoom {
        using QAudioRoom::childEvent;
        using QAudioRoom::connectNotify;
        using QAudioRoom::customEvent;
        using QAudioRoom::disconnectNotify;
        using QAudioRoom::timerEvent;
    };

    VirtualQAudioRoom(QAudioEngine* engine) : QAudioRoom(engine) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaudioroom_metaobject_callback) {
            QMetaObject* callback_ret = qaudioroom_metaobject_callback(this);
            return callback_ret;
        }
        return QAudioRoom::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaudioroom_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qaudioroom_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioRoom::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudioroom_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qaudioroom_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAudioRoom::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudioroom_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qaudioroom_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAudioRoom::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudioroom_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qaudioroom_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAudioRoom::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudioroom_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qaudioroom_timerevent_callback(this, cbval1);
            return;
        }
        QAudioRoom::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudioroom_childevent_callback) {
            QChildEvent* cbval1 = event;
            qaudioroom_childevent_callback(this, cbval1);
            return;
        }
        QAudioRoom::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudioroom_customevent_callback) {
            QEvent* cbval1 = event;
            qaudioroom_customevent_callback(this, cbval1);
            return;
        }
        QAudioRoom::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudioroom_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudioroom_connectnotify_callback(this, cbval1);
            return;
        }
        QAudioRoom::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudioroom_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaudioroom_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAudioRoom::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAudioRoom_SuperTimerEvent(QAudioRoom* self, QTimerEvent* event);
    friend void QAudioRoom_SuperChildEvent(QAudioRoom* self, QChildEvent* event);
    friend void QAudioRoom_SuperCustomEvent(QAudioRoom* self, QEvent* event);
    friend void QAudioRoom_SuperConnectNotify(QAudioRoom* self, const QMetaMethod* signal);
    friend void QAudioRoom_SuperDisconnectNotify(QAudioRoom* self, const QMetaMethod* signal);
};

#endif
