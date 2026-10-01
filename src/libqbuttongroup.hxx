#pragma once
#ifndef LIBQBUTTONGROUP_HXX
#define LIBQBUTTONGROUP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QButtonGroup
class VirtualQButtonGroup final : public QButtonGroup {
  public:
    // Virtual class public types (including callbacks and access types)
    using QButtonGroup_MetaObject_Callback = QMetaObject* (*)(const QButtonGroup*);
    using QButtonGroup_Metacast_Callback = void* (*)(QButtonGroup*, const char*);
    using QButtonGroup_Metacall_Callback = int (*)(QButtonGroup*, int, int, void**);
    using QButtonGroup_Event_Callback = bool (*)(QButtonGroup*, QEvent*);
    using QButtonGroup_EventFilter_Callback = bool (*)(QButtonGroup*, QObject*, QEvent*);
    using QButtonGroup_TimerEvent_Callback = void (*)(QButtonGroup*, QTimerEvent*);
    using QButtonGroup_ChildEvent_Callback = void (*)(QButtonGroup*, QChildEvent*);
    using QButtonGroup_CustomEvent_Callback = void (*)(QButtonGroup*, QEvent*);
    using QButtonGroup_ConnectNotify_Callback = void (*)(QButtonGroup*, QMetaMethod*);
    using QButtonGroup_DisconnectNotify_Callback = void (*)(QButtonGroup*, QMetaMethod*);
    using QButtonGroup::isSignalConnected;
    using QButtonGroup::receivers;
    using QButtonGroup::sender;
    using QButtonGroup::senderSignalIndex;

    // Instance callback storage
    QButtonGroup_MetaObject_Callback qbuttongroup_metaobject_callback = nullptr;
    QButtonGroup_Metacast_Callback qbuttongroup_metacast_callback = nullptr;
    QButtonGroup_Metacall_Callback qbuttongroup_metacall_callback = nullptr;
    QButtonGroup_Event_Callback qbuttongroup_event_callback = nullptr;
    QButtonGroup_EventFilter_Callback qbuttongroup_eventfilter_callback = nullptr;
    QButtonGroup_TimerEvent_Callback qbuttongroup_timerevent_callback = nullptr;
    QButtonGroup_ChildEvent_Callback qbuttongroup_childevent_callback = nullptr;
    QButtonGroup_CustomEvent_Callback qbuttongroup_customevent_callback = nullptr;
    QButtonGroup_ConnectNotify_Callback qbuttongroup_connectnotify_callback = nullptr;
    QButtonGroup_DisconnectNotify_Callback qbuttongroup_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QButtonGroup {
        using QButtonGroup::childEvent;
        using QButtonGroup::connectNotify;
        using QButtonGroup::customEvent;
        using QButtonGroup::disconnectNotify;
        using QButtonGroup::timerEvent;
    };

    VirtualQButtonGroup() : QButtonGroup() {};
    VirtualQButtonGroup(QObject* parent) : QButtonGroup(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbuttongroup_metaobject_callback) {
            QMetaObject* callback_ret = qbuttongroup_metaobject_callback(this);
            return callback_ret;
        }
        return QButtonGroup::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbuttongroup_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qbuttongroup_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QButtonGroup::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbuttongroup_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qbuttongroup_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QButtonGroup::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbuttongroup_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qbuttongroup_event_callback(this, cbval1);
            return callback_ret;
        }
        return QButtonGroup::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbuttongroup_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qbuttongroup_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QButtonGroup::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbuttongroup_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qbuttongroup_timerevent_callback(this, cbval1);
            return;
        }
        QButtonGroup::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbuttongroup_childevent_callback) {
            QChildEvent* cbval1 = event;
            qbuttongroup_childevent_callback(this, cbval1);
            return;
        }
        QButtonGroup::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbuttongroup_customevent_callback) {
            QEvent* cbval1 = event;
            qbuttongroup_customevent_callback(this, cbval1);
            return;
        }
        QButtonGroup::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbuttongroup_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbuttongroup_connectnotify_callback(this, cbval1);
            return;
        }
        QButtonGroup::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbuttongroup_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbuttongroup_disconnectnotify_callback(this, cbval1);
            return;
        }
        QButtonGroup::disconnectNotify(signal);
    }

    // Friend functions
    friend void QButtonGroup_SuperTimerEvent(QButtonGroup* self, QTimerEvent* event);
    friend void QButtonGroup_SuperChildEvent(QButtonGroup* self, QChildEvent* event);
    friend void QButtonGroup_SuperCustomEvent(QButtonGroup* self, QEvent* event);
    friend void QButtonGroup_SuperConnectNotify(QButtonGroup* self, const QMetaMethod* signal);
    friend void QButtonGroup_SuperDisconnectNotify(QButtonGroup* self, const QMetaMethod* signal);
};

#endif
