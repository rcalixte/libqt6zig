#pragma once
#ifndef LIBQUNDOGROUP_HXX
#define LIBQUNDOGROUP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QUndoGroup
class VirtualQUndoGroup final : public QUndoGroup {
  public:
    // Virtual class public types (including callbacks and access types)
    using QUndoGroup_MetaObject_Callback = QMetaObject* (*)(const QUndoGroup*);
    using QUndoGroup_Metacast_Callback = void* (*)(QUndoGroup*, const char*);
    using QUndoGroup_Metacall_Callback = int (*)(QUndoGroup*, int, int, void**);
    using QUndoGroup_Event_Callback = bool (*)(QUndoGroup*, QEvent*);
    using QUndoGroup_EventFilter_Callback = bool (*)(QUndoGroup*, QObject*, QEvent*);
    using QUndoGroup_TimerEvent_Callback = void (*)(QUndoGroup*, QTimerEvent*);
    using QUndoGroup_ChildEvent_Callback = void (*)(QUndoGroup*, QChildEvent*);
    using QUndoGroup_CustomEvent_Callback = void (*)(QUndoGroup*, QEvent*);
    using QUndoGroup_ConnectNotify_Callback = void (*)(QUndoGroup*, QMetaMethod*);
    using QUndoGroup_DisconnectNotify_Callback = void (*)(QUndoGroup*, QMetaMethod*);
    using QUndoGroup::isSignalConnected;
    using QUndoGroup::receivers;
    using QUndoGroup::sender;
    using QUndoGroup::senderSignalIndex;

    // Instance callback storage
    QUndoGroup_MetaObject_Callback qundogroup_metaobject_callback = nullptr;
    QUndoGroup_Metacast_Callback qundogroup_metacast_callback = nullptr;
    QUndoGroup_Metacall_Callback qundogroup_metacall_callback = nullptr;
    QUndoGroup_Event_Callback qundogroup_event_callback = nullptr;
    QUndoGroup_EventFilter_Callback qundogroup_eventfilter_callback = nullptr;
    QUndoGroup_TimerEvent_Callback qundogroup_timerevent_callback = nullptr;
    QUndoGroup_ChildEvent_Callback qundogroup_childevent_callback = nullptr;
    QUndoGroup_CustomEvent_Callback qundogroup_customevent_callback = nullptr;
    QUndoGroup_ConnectNotify_Callback qundogroup_connectnotify_callback = nullptr;
    QUndoGroup_DisconnectNotify_Callback qundogroup_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QUndoGroup {
        using QUndoGroup::childEvent;
        using QUndoGroup::connectNotify;
        using QUndoGroup::customEvent;
        using QUndoGroup::disconnectNotify;
        using QUndoGroup::timerEvent;
    };

    VirtualQUndoGroup() : QUndoGroup() {};
    VirtualQUndoGroup(QObject* parent) : QUndoGroup(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qundogroup_metaobject_callback) {
            QMetaObject* callback_ret = qundogroup_metaobject_callback(this);
            return callback_ret;
        }
        return QUndoGroup::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qundogroup_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qundogroup_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QUndoGroup::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qundogroup_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qundogroup_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QUndoGroup::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qundogroup_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qundogroup_event_callback(this, cbval1);
            return callback_ret;
        }
        return QUndoGroup::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qundogroup_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qundogroup_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QUndoGroup::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qundogroup_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qundogroup_timerevent_callback(this, cbval1);
            return;
        }
        QUndoGroup::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qundogroup_childevent_callback) {
            QChildEvent* cbval1 = event;
            qundogroup_childevent_callback(this, cbval1);
            return;
        }
        QUndoGroup::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qundogroup_customevent_callback) {
            QEvent* cbval1 = event;
            qundogroup_customevent_callback(this, cbval1);
            return;
        }
        QUndoGroup::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qundogroup_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qundogroup_connectnotify_callback(this, cbval1);
            return;
        }
        QUndoGroup::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qundogroup_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qundogroup_disconnectnotify_callback(this, cbval1);
            return;
        }
        QUndoGroup::disconnectNotify(signal);
    }

    // Friend functions
    friend void QUndoGroup_SuperTimerEvent(QUndoGroup* self, QTimerEvent* event);
    friend void QUndoGroup_SuperChildEvent(QUndoGroup* self, QChildEvent* event);
    friend void QUndoGroup_SuperCustomEvent(QUndoGroup* self, QEvent* event);
    friend void QUndoGroup_SuperConnectNotify(QUndoGroup* self, const QMetaMethod* signal);
    friend void QUndoGroup_SuperDisconnectNotify(QUndoGroup* self, const QMetaMethod* signal);
};

#endif
