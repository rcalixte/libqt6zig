#pragma once
#ifndef LIBQMOVIE_HXX
#define LIBQMOVIE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMovie
class VirtualQMovie final : public QMovie {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMovie_MetaObject_Callback = QMetaObject* (*)(const QMovie*);
    using QMovie_Metacast_Callback = void* (*)(QMovie*, const char*);
    using QMovie_Metacall_Callback = int (*)(QMovie*, int, int, void**);
    using QMovie_Event_Callback = bool (*)(QMovie*, QEvent*);
    using QMovie_EventFilter_Callback = bool (*)(QMovie*, QObject*, QEvent*);
    using QMovie_TimerEvent_Callback = void (*)(QMovie*, QTimerEvent*);
    using QMovie_ChildEvent_Callback = void (*)(QMovie*, QChildEvent*);
    using QMovie_CustomEvent_Callback = void (*)(QMovie*, QEvent*);
    using QMovie_ConnectNotify_Callback = void (*)(QMovie*, QMetaMethod*);
    using QMovie_DisconnectNotify_Callback = void (*)(QMovie*, QMetaMethod*);
    using QMovie::isSignalConnected;
    using QMovie::receivers;
    using QMovie::sender;
    using QMovie::senderSignalIndex;

    // Instance callback storage
    QMovie_MetaObject_Callback qmovie_metaobject_callback = nullptr;
    QMovie_Metacast_Callback qmovie_metacast_callback = nullptr;
    QMovie_Metacall_Callback qmovie_metacall_callback = nullptr;
    QMovie_Event_Callback qmovie_event_callback = nullptr;
    QMovie_EventFilter_Callback qmovie_eventfilter_callback = nullptr;
    QMovie_TimerEvent_Callback qmovie_timerevent_callback = nullptr;
    QMovie_ChildEvent_Callback qmovie_childevent_callback = nullptr;
    QMovie_CustomEvent_Callback qmovie_customevent_callback = nullptr;
    QMovie_ConnectNotify_Callback qmovie_connectnotify_callback = nullptr;
    QMovie_DisconnectNotify_Callback qmovie_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QMovie {
        using QMovie::childEvent;
        using QMovie::connectNotify;
        using QMovie::customEvent;
        using QMovie::disconnectNotify;
        using QMovie::timerEvent;
    };

    VirtualQMovie() : QMovie() {};
    VirtualQMovie(QIODevice* device) : QMovie(device) {};
    VirtualQMovie(const QString& fileName) : QMovie(fileName) {};
    VirtualQMovie(QObject* parent) : QMovie(parent) {};
    VirtualQMovie(QIODevice* device, const QByteArray& format) : QMovie(device, format) {};
    VirtualQMovie(QIODevice* device, const QByteArray& format, QObject* parent) : QMovie(device, format, parent) {};
    VirtualQMovie(const QString& fileName, const QByteArray& format) : QMovie(fileName, format) {};
    VirtualQMovie(const QString& fileName, const QByteArray& format, QObject* parent) : QMovie(fileName, format, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmovie_metaobject_callback) {
            QMetaObject* callback_ret = qmovie_metaobject_callback(this);
            return callback_ret;
        }
        return QMovie::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmovie_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmovie_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMovie::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmovie_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmovie_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMovie::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmovie_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qmovie_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMovie::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmovie_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qmovie_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMovie::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmovie_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qmovie_timerevent_callback(this, cbval1);
            return;
        }
        QMovie::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmovie_childevent_callback) {
            QChildEvent* cbval1 = event;
            qmovie_childevent_callback(this, cbval1);
            return;
        }
        QMovie::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmovie_customevent_callback) {
            QEvent* cbval1 = event;
            qmovie_customevent_callback(this, cbval1);
            return;
        }
        QMovie::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmovie_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmovie_connectnotify_callback(this, cbval1);
            return;
        }
        QMovie::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmovie_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmovie_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMovie::disconnectNotify(signal);
    }

    // Friend functions
    friend void QMovie_SuperTimerEvent(QMovie* self, QTimerEvent* event);
    friend void QMovie_SuperChildEvent(QMovie* self, QChildEvent* event);
    friend void QMovie_SuperCustomEvent(QMovie* self, QEvent* event);
    friend void QMovie_SuperConnectNotify(QMovie* self, const QMetaMethod* signal);
    friend void QMovie_SuperDisconnectNotify(QMovie* self, const QMetaMethod* signal);
};

#endif
