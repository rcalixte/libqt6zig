#pragma once
#ifndef LIBQSHORTCUT_HXX
#define LIBQSHORTCUT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QShortcut
class VirtualQShortcut final : public QShortcut {
  public:
    // Virtual class public types (including callbacks and access types)
    using QShortcut_MetaObject_Callback = QMetaObject* (*)(const QShortcut*);
    using QShortcut_Metacast_Callback = void* (*)(QShortcut*, const char*);
    using QShortcut_Metacall_Callback = int (*)(QShortcut*, int, int, void**);
    using QShortcut_Event_Callback = bool (*)(QShortcut*, QEvent*);
    using QShortcut_EventFilter_Callback = bool (*)(QShortcut*, QObject*, QEvent*);
    using QShortcut_TimerEvent_Callback = void (*)(QShortcut*, QTimerEvent*);
    using QShortcut_ChildEvent_Callback = void (*)(QShortcut*, QChildEvent*);
    using QShortcut_CustomEvent_Callback = void (*)(QShortcut*, QEvent*);
    using QShortcut_ConnectNotify_Callback = void (*)(QShortcut*, QMetaMethod*);
    using QShortcut_DisconnectNotify_Callback = void (*)(QShortcut*, QMetaMethod*);
    using QShortcut::isSignalConnected;
    using QShortcut::receivers;
    using QShortcut::sender;
    using QShortcut::senderSignalIndex;

    // Instance callback storage
    QShortcut_MetaObject_Callback qshortcut_metaobject_callback = nullptr;
    QShortcut_Metacast_Callback qshortcut_metacast_callback = nullptr;
    QShortcut_Metacall_Callback qshortcut_metacall_callback = nullptr;
    QShortcut_Event_Callback qshortcut_event_callback = nullptr;
    QShortcut_EventFilter_Callback qshortcut_eventfilter_callback = nullptr;
    QShortcut_TimerEvent_Callback qshortcut_timerevent_callback = nullptr;
    QShortcut_ChildEvent_Callback qshortcut_childevent_callback = nullptr;
    QShortcut_CustomEvent_Callback qshortcut_customevent_callback = nullptr;
    QShortcut_ConnectNotify_Callback qshortcut_connectnotify_callback = nullptr;
    QShortcut_DisconnectNotify_Callback qshortcut_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QShortcut {
        using QShortcut::childEvent;
        using QShortcut::connectNotify;
        using QShortcut::customEvent;
        using QShortcut::disconnectNotify;
        using QShortcut::event;
        using QShortcut::timerEvent;
    };

    VirtualQShortcut(QObject* parent) : QShortcut(parent) {};
    VirtualQShortcut(const QKeySequence& key, QObject* parent) : QShortcut(key, parent) {};
    VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent) : QShortcut(key, parent) {};
    VirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member) : QShortcut(key, parent, member) {};
    VirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member, const char* ambiguousMember) : QShortcut(key, parent, member, ambiguousMember) {};
    VirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext context) : QShortcut(key, parent, member, ambiguousMember, context) {};
    VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member) : QShortcut(key, parent, member) {};
    VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member, const char* ambiguousMember) : QShortcut(key, parent, member, ambiguousMember) {};
    VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext context) : QShortcut(key, parent, member, ambiguousMember, context) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qshortcut_metaobject_callback) {
            QMetaObject* callback_ret = qshortcut_metaobject_callback(this);
            return callback_ret;
        }
        return QShortcut::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qshortcut_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qshortcut_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QShortcut::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qshortcut_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qshortcut_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QShortcut::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qshortcut_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qshortcut_event_callback(this, cbval1);
            return callback_ret;
        }
        return QShortcut::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qshortcut_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qshortcut_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QShortcut::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qshortcut_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qshortcut_timerevent_callback(this, cbval1);
            return;
        }
        QShortcut::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qshortcut_childevent_callback) {
            QChildEvent* cbval1 = event;
            qshortcut_childevent_callback(this, cbval1);
            return;
        }
        QShortcut::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qshortcut_customevent_callback) {
            QEvent* cbval1 = event;
            qshortcut_customevent_callback(this, cbval1);
            return;
        }
        QShortcut::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qshortcut_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qshortcut_connectnotify_callback(this, cbval1);
            return;
        }
        QShortcut::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qshortcut_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qshortcut_disconnectnotify_callback(this, cbval1);
            return;
        }
        QShortcut::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QShortcut_SuperEvent(QShortcut* self, QEvent* e);
    friend void QShortcut_SuperTimerEvent(QShortcut* self, QTimerEvent* event);
    friend void QShortcut_SuperChildEvent(QShortcut* self, QChildEvent* event);
    friend void QShortcut_SuperCustomEvent(QShortcut* self, QEvent* event);
    friend void QShortcut_SuperConnectNotify(QShortcut* self, const QMetaMethod* signal);
    friend void QShortcut_SuperDisconnectNotify(QShortcut* self, const QMetaMethod* signal);
};

#endif
