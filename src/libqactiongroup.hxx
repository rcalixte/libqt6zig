#pragma once
#ifndef LIBQACTIONGROUP_HXX
#define LIBQACTIONGROUP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QActionGroup
class VirtualQActionGroup final : public QActionGroup {
  public:
    // Virtual class public types (including callbacks and access types)
    using QActionGroup_MetaObject_Callback = QMetaObject* (*)(const QActionGroup*);
    using QActionGroup_Metacast_Callback = void* (*)(QActionGroup*, const char*);
    using QActionGroup_Metacall_Callback = int (*)(QActionGroup*, int, int, void**);
    using QActionGroup_Event_Callback = bool (*)(QActionGroup*, QEvent*);
    using QActionGroup_EventFilter_Callback = bool (*)(QActionGroup*, QObject*, QEvent*);
    using QActionGroup_TimerEvent_Callback = void (*)(QActionGroup*, QTimerEvent*);
    using QActionGroup_ChildEvent_Callback = void (*)(QActionGroup*, QChildEvent*);
    using QActionGroup_CustomEvent_Callback = void (*)(QActionGroup*, QEvent*);
    using QActionGroup_ConnectNotify_Callback = void (*)(QActionGroup*, QMetaMethod*);
    using QActionGroup_DisconnectNotify_Callback = void (*)(QActionGroup*, QMetaMethod*);
    using QActionGroup::isSignalConnected;
    using QActionGroup::receivers;
    using QActionGroup::sender;
    using QActionGroup::senderSignalIndex;

    // Instance callback storage
    QActionGroup_MetaObject_Callback qactiongroup_metaobject_callback = nullptr;
    QActionGroup_Metacast_Callback qactiongroup_metacast_callback = nullptr;
    QActionGroup_Metacall_Callback qactiongroup_metacall_callback = nullptr;
    QActionGroup_Event_Callback qactiongroup_event_callback = nullptr;
    QActionGroup_EventFilter_Callback qactiongroup_eventfilter_callback = nullptr;
    QActionGroup_TimerEvent_Callback qactiongroup_timerevent_callback = nullptr;
    QActionGroup_ChildEvent_Callback qactiongroup_childevent_callback = nullptr;
    QActionGroup_CustomEvent_Callback qactiongroup_customevent_callback = nullptr;
    QActionGroup_ConnectNotify_Callback qactiongroup_connectnotify_callback = nullptr;
    QActionGroup_DisconnectNotify_Callback qactiongroup_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QActionGroup {
        using QActionGroup::childEvent;
        using QActionGroup::connectNotify;
        using QActionGroup::customEvent;
        using QActionGroup::disconnectNotify;
        using QActionGroup::timerEvent;
    };

    VirtualQActionGroup(QObject* parent) : QActionGroup(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qactiongroup_metaobject_callback) {
            QMetaObject* callback_ret = qactiongroup_metaobject_callback(this);
            return callback_ret;
        }
        return QActionGroup::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qactiongroup_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qactiongroup_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QActionGroup::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qactiongroup_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qactiongroup_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QActionGroup::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qactiongroup_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qactiongroup_event_callback(this, cbval1);
            return callback_ret;
        }
        return QActionGroup::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qactiongroup_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qactiongroup_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QActionGroup::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qactiongroup_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qactiongroup_timerevent_callback(this, cbval1);
            return;
        }
        QActionGroup::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qactiongroup_childevent_callback) {
            QChildEvent* cbval1 = event;
            qactiongroup_childevent_callback(this, cbval1);
            return;
        }
        QActionGroup::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qactiongroup_customevent_callback) {
            QEvent* cbval1 = event;
            qactiongroup_customevent_callback(this, cbval1);
            return;
        }
        QActionGroup::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qactiongroup_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qactiongroup_connectnotify_callback(this, cbval1);
            return;
        }
        QActionGroup::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qactiongroup_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qactiongroup_disconnectnotify_callback(this, cbval1);
            return;
        }
        QActionGroup::disconnectNotify(signal);
    }

    // Friend functions
    friend void QActionGroup_SuperTimerEvent(QActionGroup* self, QTimerEvent* event);
    friend void QActionGroup_SuperChildEvent(QActionGroup* self, QChildEvent* event);
    friend void QActionGroup_SuperCustomEvent(QActionGroup* self, QEvent* event);
    friend void QActionGroup_SuperConnectNotify(QActionGroup* self, const QMetaMethod* signal);
    friend void QActionGroup_SuperDisconnectNotify(QActionGroup* self, const QMetaMethod* signal);
};

#endif
