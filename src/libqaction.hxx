#pragma once
#ifndef LIBQACTION_HXX
#define LIBQACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAction
class VirtualQAction final : public QAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAction_MetaObject_Callback = QMetaObject* (*)(const QAction*);
    using QAction_Metacast_Callback = void* (*)(QAction*, const char*);
    using QAction_Metacall_Callback = int (*)(QAction*, int, int, void**);
    using QAction_Event_Callback = bool (*)(QAction*, QEvent*);
    using QAction_EventFilter_Callback = bool (*)(QAction*, QObject*, QEvent*);
    using QAction_TimerEvent_Callback = void (*)(QAction*, QTimerEvent*);
    using QAction_ChildEvent_Callback = void (*)(QAction*, QChildEvent*);
    using QAction_CustomEvent_Callback = void (*)(QAction*, QEvent*);
    using QAction_ConnectNotify_Callback = void (*)(QAction*, QMetaMethod*);
    using QAction_DisconnectNotify_Callback = void (*)(QAction*, QMetaMethod*);
    using QAction::isSignalConnected;
    using QAction::receivers;
    using QAction::sender;
    using QAction::senderSignalIndex;

    // Instance callback storage
    QAction_MetaObject_Callback qaction_metaobject_callback = nullptr;
    QAction_Metacast_Callback qaction_metacast_callback = nullptr;
    QAction_Metacall_Callback qaction_metacall_callback = nullptr;
    QAction_Event_Callback qaction_event_callback = nullptr;
    QAction_EventFilter_Callback qaction_eventfilter_callback = nullptr;
    QAction_TimerEvent_Callback qaction_timerevent_callback = nullptr;
    QAction_ChildEvent_Callback qaction_childevent_callback = nullptr;
    QAction_CustomEvent_Callback qaction_customevent_callback = nullptr;
    QAction_ConnectNotify_Callback qaction_connectnotify_callback = nullptr;
    QAction_DisconnectNotify_Callback qaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAction {
        using QAction::childEvent;
        using QAction::connectNotify;
        using QAction::customEvent;
        using QAction::disconnectNotify;
        using QAction::event;
        using QAction::timerEvent;
    };

    VirtualQAction() : QAction() {};
    VirtualQAction(const QString& text) : QAction(text) {};
    VirtualQAction(const QIcon& icon, const QString& text) : QAction(icon, text) {};
    VirtualQAction(QObject* parent) : QAction(parent) {};
    VirtualQAction(const QString& text, QObject* parent) : QAction(text, parent) {};
    VirtualQAction(const QIcon& icon, const QString& text, QObject* parent) : QAction(icon, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qaction_metaobject_callback) {
            QMetaObject* callback_ret = qaction_metaobject_callback(this);
            return callback_ret;
        }
        return QAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qaction_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qaction_timerevent_callback(this, cbval1);
            return;
        }
        QAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            qaction_childevent_callback(this, cbval1);
            return;
        }
        QAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaction_customevent_callback) {
            QEvent* cbval1 = event;
            qaction_customevent_callback(this, cbval1);
            return;
        }
        QAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaction_connectnotify_callback(this, cbval1);
            return;
        }
        QAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAction::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QAction_SuperEvent(QAction* self, QEvent* param1);
    friend void QAction_SuperTimerEvent(QAction* self, QTimerEvent* event);
    friend void QAction_SuperChildEvent(QAction* self, QChildEvent* event);
    friend void QAction_SuperCustomEvent(QAction* self, QEvent* event);
    friend void QAction_SuperConnectNotify(QAction* self, const QMetaMethod* signal);
    friend void QAction_SuperDisconnectNotify(QAction* self, const QMetaMethod* signal);
};

#endif
