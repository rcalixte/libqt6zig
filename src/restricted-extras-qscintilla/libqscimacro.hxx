#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCIMACRO_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCIMACRO_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciMacro
class VirtualQsciMacro final : public QsciMacro {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciMacro_MetaObject_Callback = QMetaObject* (*)(const QsciMacro*);
    using QsciMacro_Metacast_Callback = void* (*)(QsciMacro*, const char*);
    using QsciMacro_Metacall_Callback = int (*)(QsciMacro*, int, int, void**);
    using QsciMacro_Play_Callback = void (*)(QsciMacro*);
    using QsciMacro_StartRecording_Callback = void (*)(QsciMacro*);
    using QsciMacro_EndRecording_Callback = void (*)(QsciMacro*);
    using QsciMacro_Event_Callback = bool (*)(QsciMacro*, QEvent*);
    using QsciMacro_EventFilter_Callback = bool (*)(QsciMacro*, QObject*, QEvent*);
    using QsciMacro_TimerEvent_Callback = void (*)(QsciMacro*, QTimerEvent*);
    using QsciMacro_ChildEvent_Callback = void (*)(QsciMacro*, QChildEvent*);
    using QsciMacro_CustomEvent_Callback = void (*)(QsciMacro*, QEvent*);
    using QsciMacro_ConnectNotify_Callback = void (*)(QsciMacro*, QMetaMethod*);
    using QsciMacro_DisconnectNotify_Callback = void (*)(QsciMacro*, QMetaMethod*);
    using QsciMacro::isSignalConnected;
    using QsciMacro::receivers;
    using QsciMacro::sender;
    using QsciMacro::senderSignalIndex;

    // Instance callback storage
    QsciMacro_MetaObject_Callback qscimacro_metaobject_callback = nullptr;
    QsciMacro_Metacast_Callback qscimacro_metacast_callback = nullptr;
    QsciMacro_Metacall_Callback qscimacro_metacall_callback = nullptr;
    QsciMacro_Play_Callback qscimacro_play_callback = nullptr;
    QsciMacro_StartRecording_Callback qscimacro_startrecording_callback = nullptr;
    QsciMacro_EndRecording_Callback qscimacro_endrecording_callback = nullptr;
    QsciMacro_Event_Callback qscimacro_event_callback = nullptr;
    QsciMacro_EventFilter_Callback qscimacro_eventfilter_callback = nullptr;
    QsciMacro_TimerEvent_Callback qscimacro_timerevent_callback = nullptr;
    QsciMacro_ChildEvent_Callback qscimacro_childevent_callback = nullptr;
    QsciMacro_CustomEvent_Callback qscimacro_customevent_callback = nullptr;
    QsciMacro_ConnectNotify_Callback qscimacro_connectnotify_callback = nullptr;
    QsciMacro_DisconnectNotify_Callback qscimacro_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciMacro {
        using QsciMacro::childEvent;
        using QsciMacro::connectNotify;
        using QsciMacro::customEvent;
        using QsciMacro::disconnectNotify;
        using QsciMacro::timerEvent;
    };

    VirtualQsciMacro(QsciScintilla* parent) : QsciMacro(parent) {};
    VirtualQsciMacro(const QString& asc, QsciScintilla* parent) : QsciMacro(asc, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscimacro_metaobject_callback) {
            QMetaObject* callback_ret = qscimacro_metaobject_callback(this);
            return callback_ret;
        }
        return QsciMacro::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscimacro_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscimacro_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciMacro::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscimacro_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscimacro_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciMacro::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void play() override {
        if (qscimacro_play_callback) {
            qscimacro_play_callback(this);
            return;
        }
        QsciMacro::play();
    }

    // Virtual method for C ABI access and custom callback
    virtual void startRecording() override {
        if (qscimacro_startrecording_callback) {
            qscimacro_startrecording_callback(this);
            return;
        }
        QsciMacro::startRecording();
    }

    // Virtual method for C ABI access and custom callback
    virtual void endRecording() override {
        if (qscimacro_endrecording_callback) {
            qscimacro_endrecording_callback(this);
            return;
        }
        QsciMacro::endRecording();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscimacro_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscimacro_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciMacro::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscimacro_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscimacro_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciMacro::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscimacro_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscimacro_timerevent_callback(this, cbval1);
            return;
        }
        QsciMacro::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscimacro_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscimacro_childevent_callback(this, cbval1);
            return;
        }
        QsciMacro::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscimacro_customevent_callback) {
            QEvent* cbval1 = event;
            qscimacro_customevent_callback(this, cbval1);
            return;
        }
        QsciMacro::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscimacro_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscimacro_connectnotify_callback(this, cbval1);
            return;
        }
        QsciMacro::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscimacro_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscimacro_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciMacro::disconnectNotify(signal);
    }

    // Friend functions
    friend void QsciMacro_SuperTimerEvent(QsciMacro* self, QTimerEvent* event);
    friend void QsciMacro_SuperChildEvent(QsciMacro* self, QChildEvent* event);
    friend void QsciMacro_SuperCustomEvent(QsciMacro* self, QEvent* event);
    friend void QsciMacro_SuperConnectNotify(QsciMacro* self, const QMetaMethod* signal);
    friend void QsciMacro_SuperDisconnectNotify(QsciMacro* self, const QMetaMethod* signal);
};

#endif
