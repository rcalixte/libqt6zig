#pragma once
#ifndef TEXTTOSPEECH_LIBQTEXTTOSPEECH_HXX
#define TEXTTOSPEECH_LIBQTEXTTOSPEECH_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QTextToSpeech
class VirtualQTextToSpeech final : public QTextToSpeech {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTextToSpeech_MetaObject_Callback = QMetaObject* (*)(const QTextToSpeech*);
    using QTextToSpeech_Metacast_Callback = void* (*)(QTextToSpeech*, const char*);
    using QTextToSpeech_Metacall_Callback = int (*)(QTextToSpeech*, int, int, void**);
    using QTextToSpeech_Event_Callback = bool (*)(QTextToSpeech*, QEvent*);
    using QTextToSpeech_EventFilter_Callback = bool (*)(QTextToSpeech*, QObject*, QEvent*);
    using QTextToSpeech_TimerEvent_Callback = void (*)(QTextToSpeech*, QTimerEvent*);
    using QTextToSpeech_ChildEvent_Callback = void (*)(QTextToSpeech*, QChildEvent*);
    using QTextToSpeech_CustomEvent_Callback = void (*)(QTextToSpeech*, QEvent*);
    using QTextToSpeech_ConnectNotify_Callback = void (*)(QTextToSpeech*, QMetaMethod*);
    using QTextToSpeech_DisconnectNotify_Callback = void (*)(QTextToSpeech*, QMetaMethod*);
    using QTextToSpeech::allVoices;
    using QTextToSpeech::isSignalConnected;
    using QTextToSpeech::receivers;
    using QTextToSpeech::sender;
    using QTextToSpeech::senderSignalIndex;

    // Instance callback storage
    QTextToSpeech_MetaObject_Callback qtexttospeech_metaobject_callback = nullptr;
    QTextToSpeech_Metacast_Callback qtexttospeech_metacast_callback = nullptr;
    QTextToSpeech_Metacall_Callback qtexttospeech_metacall_callback = nullptr;
    QTextToSpeech_Event_Callback qtexttospeech_event_callback = nullptr;
    QTextToSpeech_EventFilter_Callback qtexttospeech_eventfilter_callback = nullptr;
    QTextToSpeech_TimerEvent_Callback qtexttospeech_timerevent_callback = nullptr;
    QTextToSpeech_ChildEvent_Callback qtexttospeech_childevent_callback = nullptr;
    QTextToSpeech_CustomEvent_Callback qtexttospeech_customevent_callback = nullptr;
    QTextToSpeech_ConnectNotify_Callback qtexttospeech_connectnotify_callback = nullptr;
    QTextToSpeech_DisconnectNotify_Callback qtexttospeech_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTextToSpeech {
        using QTextToSpeech::childEvent;
        using QTextToSpeech::connectNotify;
        using QTextToSpeech::customEvent;
        using QTextToSpeech::disconnectNotify;
        using QTextToSpeech::timerEvent;
    };

    VirtualQTextToSpeech() : QTextToSpeech() {};
    VirtualQTextToSpeech(const QString& engine) : QTextToSpeech(engine) {};
    VirtualQTextToSpeech(const QString& engine, const QMap<QString, QVariant>& params) : QTextToSpeech(engine, params) {};
    VirtualQTextToSpeech(QObject* parent) : QTextToSpeech(parent) {};
    VirtualQTextToSpeech(const QString& engine, QObject* parent) : QTextToSpeech(engine, parent) {};
    VirtualQTextToSpeech(const QString& engine, const QMap<QString, QVariant>& params, QObject* parent) : QTextToSpeech(engine, params, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtexttospeech_metaobject_callback) {
            QMetaObject* callback_ret = qtexttospeech_metaobject_callback(this);
            return callback_ret;
        }
        return QTextToSpeech::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtexttospeech_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtexttospeech_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTextToSpeech::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtexttospeech_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtexttospeech_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTextToSpeech::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtexttospeech_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtexttospeech_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTextToSpeech::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtexttospeech_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtexttospeech_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTextToSpeech::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtexttospeech_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtexttospeech_timerevent_callback(this, cbval1);
            return;
        }
        QTextToSpeech::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtexttospeech_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtexttospeech_childevent_callback(this, cbval1);
            return;
        }
        QTextToSpeech::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtexttospeech_customevent_callback) {
            QEvent* cbval1 = event;
            qtexttospeech_customevent_callback(this, cbval1);
            return;
        }
        QTextToSpeech::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtexttospeech_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtexttospeech_connectnotify_callback(this, cbval1);
            return;
        }
        QTextToSpeech::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtexttospeech_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtexttospeech_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTextToSpeech::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTextToSpeech_SuperTimerEvent(QTextToSpeech* self, QTimerEvent* event);
    friend void QTextToSpeech_SuperChildEvent(QTextToSpeech* self, QChildEvent* event);
    friend void QTextToSpeech_SuperCustomEvent(QTextToSpeech* self, QEvent* event);
    friend void QTextToSpeech_SuperConnectNotify(QTextToSpeech* self, const QMetaMethod* signal);
    friend void QTextToSpeech_SuperDisconnectNotify(QTextToSpeech* self, const QMetaMethod* signal);
};

#endif
