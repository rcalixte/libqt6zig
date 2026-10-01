#pragma once
#ifndef MULTIMEDIA_LIBQMEDIAPLAYER_HXX
#define MULTIMEDIA_LIBQMEDIAPLAYER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMediaPlayer
class VirtualQMediaPlayer final : public QMediaPlayer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMediaPlayer_MetaObject_Callback = QMetaObject* (*)(const QMediaPlayer*);
    using QMediaPlayer_Metacast_Callback = void* (*)(QMediaPlayer*, const char*);
    using QMediaPlayer_Metacall_Callback = int (*)(QMediaPlayer*, int, int, void**);
    using QMediaPlayer_Event_Callback = bool (*)(QMediaPlayer*, QEvent*);
    using QMediaPlayer_EventFilter_Callback = bool (*)(QMediaPlayer*, QObject*, QEvent*);
    using QMediaPlayer_TimerEvent_Callback = void (*)(QMediaPlayer*, QTimerEvent*);
    using QMediaPlayer_ChildEvent_Callback = void (*)(QMediaPlayer*, QChildEvent*);
    using QMediaPlayer_CustomEvent_Callback = void (*)(QMediaPlayer*, QEvent*);
    using QMediaPlayer_ConnectNotify_Callback = void (*)(QMediaPlayer*, QMetaMethod*);
    using QMediaPlayer_DisconnectNotify_Callback = void (*)(QMediaPlayer*, QMetaMethod*);
    using QMediaPlayer::isSignalConnected;
    using QMediaPlayer::receivers;
    using QMediaPlayer::sender;
    using QMediaPlayer::senderSignalIndex;

    // Instance callback storage
    QMediaPlayer_MetaObject_Callback qmediaplayer_metaobject_callback = nullptr;
    QMediaPlayer_Metacast_Callback qmediaplayer_metacast_callback = nullptr;
    QMediaPlayer_Metacall_Callback qmediaplayer_metacall_callback = nullptr;
    QMediaPlayer_Event_Callback qmediaplayer_event_callback = nullptr;
    QMediaPlayer_EventFilter_Callback qmediaplayer_eventfilter_callback = nullptr;
    QMediaPlayer_TimerEvent_Callback qmediaplayer_timerevent_callback = nullptr;
    QMediaPlayer_ChildEvent_Callback qmediaplayer_childevent_callback = nullptr;
    QMediaPlayer_CustomEvent_Callback qmediaplayer_customevent_callback = nullptr;
    QMediaPlayer_ConnectNotify_Callback qmediaplayer_connectnotify_callback = nullptr;
    QMediaPlayer_DisconnectNotify_Callback qmediaplayer_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QMediaPlayer {
        using QMediaPlayer::childEvent;
        using QMediaPlayer::connectNotify;
        using QMediaPlayer::customEvent;
        using QMediaPlayer::disconnectNotify;
        using QMediaPlayer::timerEvent;
    };

    VirtualQMediaPlayer() : QMediaPlayer() {};
    VirtualQMediaPlayer(QObject* parent) : QMediaPlayer(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmediaplayer_metaobject_callback) {
            QMetaObject* callback_ret = qmediaplayer_metaobject_callback(this);
            return callback_ret;
        }
        return QMediaPlayer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmediaplayer_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmediaplayer_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMediaPlayer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmediaplayer_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmediaplayer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMediaPlayer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmediaplayer_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qmediaplayer_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMediaPlayer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmediaplayer_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qmediaplayer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMediaPlayer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmediaplayer_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qmediaplayer_timerevent_callback(this, cbval1);
            return;
        }
        QMediaPlayer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmediaplayer_childevent_callback) {
            QChildEvent* cbval1 = event;
            qmediaplayer_childevent_callback(this, cbval1);
            return;
        }
        QMediaPlayer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmediaplayer_customevent_callback) {
            QEvent* cbval1 = event;
            qmediaplayer_customevent_callback(this, cbval1);
            return;
        }
        QMediaPlayer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmediaplayer_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmediaplayer_connectnotify_callback(this, cbval1);
            return;
        }
        QMediaPlayer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmediaplayer_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmediaplayer_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMediaPlayer::disconnectNotify(signal);
    }

    // Friend functions
    friend void QMediaPlayer_SuperTimerEvent(QMediaPlayer* self, QTimerEvent* event);
    friend void QMediaPlayer_SuperChildEvent(QMediaPlayer* self, QChildEvent* event);
    friend void QMediaPlayer_SuperCustomEvent(QMediaPlayer* self, QEvent* event);
    friend void QMediaPlayer_SuperConnectNotify(QMediaPlayer* self, const QMetaMethod* signal);
    friend void QMediaPlayer_SuperDisconnectNotify(QMediaPlayer* self, const QMetaMethod* signal);
};

#endif
