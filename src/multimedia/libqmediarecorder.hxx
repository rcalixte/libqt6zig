#pragma once
#ifndef MULTIMEDIA_LIBQMEDIARECORDER_HXX
#define MULTIMEDIA_LIBQMEDIARECORDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMediaRecorder
class VirtualQMediaRecorder final : public QMediaRecorder {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMediaRecorder_MetaObject_Callback = QMetaObject* (*)(const QMediaRecorder*);
    using QMediaRecorder_Metacast_Callback = void* (*)(QMediaRecorder*, const char*);
    using QMediaRecorder_Metacall_Callback = int (*)(QMediaRecorder*, int, int, void**);
    using QMediaRecorder_Event_Callback = bool (*)(QMediaRecorder*, QEvent*);
    using QMediaRecorder_EventFilter_Callback = bool (*)(QMediaRecorder*, QObject*, QEvent*);
    using QMediaRecorder_TimerEvent_Callback = void (*)(QMediaRecorder*, QTimerEvent*);
    using QMediaRecorder_ChildEvent_Callback = void (*)(QMediaRecorder*, QChildEvent*);
    using QMediaRecorder_CustomEvent_Callback = void (*)(QMediaRecorder*, QEvent*);
    using QMediaRecorder_ConnectNotify_Callback = void (*)(QMediaRecorder*, QMetaMethod*);
    using QMediaRecorder_DisconnectNotify_Callback = void (*)(QMediaRecorder*, QMetaMethod*);
    using QMediaRecorder::isSignalConnected;
    using QMediaRecorder::receivers;
    using QMediaRecorder::sender;
    using QMediaRecorder::senderSignalIndex;

    // Instance callback storage
    QMediaRecorder_MetaObject_Callback qmediarecorder_metaobject_callback = nullptr;
    QMediaRecorder_Metacast_Callback qmediarecorder_metacast_callback = nullptr;
    QMediaRecorder_Metacall_Callback qmediarecorder_metacall_callback = nullptr;
    QMediaRecorder_Event_Callback qmediarecorder_event_callback = nullptr;
    QMediaRecorder_EventFilter_Callback qmediarecorder_eventfilter_callback = nullptr;
    QMediaRecorder_TimerEvent_Callback qmediarecorder_timerevent_callback = nullptr;
    QMediaRecorder_ChildEvent_Callback qmediarecorder_childevent_callback = nullptr;
    QMediaRecorder_CustomEvent_Callback qmediarecorder_customevent_callback = nullptr;
    QMediaRecorder_ConnectNotify_Callback qmediarecorder_connectnotify_callback = nullptr;
    QMediaRecorder_DisconnectNotify_Callback qmediarecorder_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QMediaRecorder {
        using QMediaRecorder::childEvent;
        using QMediaRecorder::connectNotify;
        using QMediaRecorder::customEvent;
        using QMediaRecorder::disconnectNotify;
        using QMediaRecorder::timerEvent;
    };

    VirtualQMediaRecorder() : QMediaRecorder() {};
    VirtualQMediaRecorder(QObject* parent) : QMediaRecorder(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmediarecorder_metaobject_callback) {
            QMetaObject* callback_ret = qmediarecorder_metaobject_callback(this);
            return callback_ret;
        }
        return QMediaRecorder::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmediarecorder_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmediarecorder_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMediaRecorder::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmediarecorder_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmediarecorder_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMediaRecorder::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmediarecorder_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qmediarecorder_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMediaRecorder::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmediarecorder_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qmediarecorder_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMediaRecorder::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmediarecorder_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qmediarecorder_timerevent_callback(this, cbval1);
            return;
        }
        QMediaRecorder::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmediarecorder_childevent_callback) {
            QChildEvent* cbval1 = event;
            qmediarecorder_childevent_callback(this, cbval1);
            return;
        }
        QMediaRecorder::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmediarecorder_customevent_callback) {
            QEvent* cbval1 = event;
            qmediarecorder_customevent_callback(this, cbval1);
            return;
        }
        QMediaRecorder::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmediarecorder_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmediarecorder_connectnotify_callback(this, cbval1);
            return;
        }
        QMediaRecorder::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmediarecorder_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmediarecorder_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMediaRecorder::disconnectNotify(signal);
    }

    // Friend functions
    friend void QMediaRecorder_SuperTimerEvent(QMediaRecorder* self, QTimerEvent* event);
    friend void QMediaRecorder_SuperChildEvent(QMediaRecorder* self, QChildEvent* event);
    friend void QMediaRecorder_SuperCustomEvent(QMediaRecorder* self, QEvent* event);
    friend void QMediaRecorder_SuperConnectNotify(QMediaRecorder* self, const QMetaMethod* signal);
    friend void QMediaRecorder_SuperDisconnectNotify(QMediaRecorder* self, const QMetaMethod* signal);
};

#endif
