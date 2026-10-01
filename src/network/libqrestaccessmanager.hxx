#pragma once
#ifndef NETWORK_LIBQRESTACCESSMANAGER_HXX
#define NETWORK_LIBQRESTACCESSMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QRestAccessManager
class VirtualQRestAccessManager final : public QRestAccessManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using QRestAccessManager_MetaObject_Callback = QMetaObject* (*)(const QRestAccessManager*);
    using QRestAccessManager_Metacast_Callback = void* (*)(QRestAccessManager*, const char*);
    using QRestAccessManager_Metacall_Callback = int (*)(QRestAccessManager*, int, int, void**);
    using QRestAccessManager_Event_Callback = bool (*)(QRestAccessManager*, QEvent*);
    using QRestAccessManager_EventFilter_Callback = bool (*)(QRestAccessManager*, QObject*, QEvent*);
    using QRestAccessManager_TimerEvent_Callback = void (*)(QRestAccessManager*, QTimerEvent*);
    using QRestAccessManager_ChildEvent_Callback = void (*)(QRestAccessManager*, QChildEvent*);
    using QRestAccessManager_CustomEvent_Callback = void (*)(QRestAccessManager*, QEvent*);
    using QRestAccessManager_ConnectNotify_Callback = void (*)(QRestAccessManager*, QMetaMethod*);
    using QRestAccessManager_DisconnectNotify_Callback = void (*)(QRestAccessManager*, QMetaMethod*);
    using QRestAccessManager::isSignalConnected;
    using QRestAccessManager::receivers;
    using QRestAccessManager::sender;
    using QRestAccessManager::senderSignalIndex;

    // Instance callback storage
    QRestAccessManager_MetaObject_Callback qrestaccessmanager_metaobject_callback = nullptr;
    QRestAccessManager_Metacast_Callback qrestaccessmanager_metacast_callback = nullptr;
    QRestAccessManager_Metacall_Callback qrestaccessmanager_metacall_callback = nullptr;
    QRestAccessManager_Event_Callback qrestaccessmanager_event_callback = nullptr;
    QRestAccessManager_EventFilter_Callback qrestaccessmanager_eventfilter_callback = nullptr;
    QRestAccessManager_TimerEvent_Callback qrestaccessmanager_timerevent_callback = nullptr;
    QRestAccessManager_ChildEvent_Callback qrestaccessmanager_childevent_callback = nullptr;
    QRestAccessManager_CustomEvent_Callback qrestaccessmanager_customevent_callback = nullptr;
    QRestAccessManager_ConnectNotify_Callback qrestaccessmanager_connectnotify_callback = nullptr;
    QRestAccessManager_DisconnectNotify_Callback qrestaccessmanager_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QRestAccessManager {
        using QRestAccessManager::childEvent;
        using QRestAccessManager::connectNotify;
        using QRestAccessManager::customEvent;
        using QRestAccessManager::disconnectNotify;
        using QRestAccessManager::timerEvent;
    };

    VirtualQRestAccessManager(QNetworkAccessManager* manager) : QRestAccessManager(manager) {};
    VirtualQRestAccessManager(QNetworkAccessManager* manager, QObject* parent) : QRestAccessManager(manager, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qrestaccessmanager_metaobject_callback) {
            QMetaObject* callback_ret = qrestaccessmanager_metaobject_callback(this);
            return callback_ret;
        }
        return QRestAccessManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qrestaccessmanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qrestaccessmanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QRestAccessManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qrestaccessmanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qrestaccessmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QRestAccessManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qrestaccessmanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qrestaccessmanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return QRestAccessManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qrestaccessmanager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qrestaccessmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QRestAccessManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qrestaccessmanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qrestaccessmanager_timerevent_callback(this, cbval1);
            return;
        }
        QRestAccessManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qrestaccessmanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            qrestaccessmanager_childevent_callback(this, cbval1);
            return;
        }
        QRestAccessManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qrestaccessmanager_customevent_callback) {
            QEvent* cbval1 = event;
            qrestaccessmanager_customevent_callback(this, cbval1);
            return;
        }
        QRestAccessManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qrestaccessmanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qrestaccessmanager_connectnotify_callback(this, cbval1);
            return;
        }
        QRestAccessManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qrestaccessmanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qrestaccessmanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        QRestAccessManager::disconnectNotify(signal);
    }

    // Friend functions
    friend void QRestAccessManager_SuperTimerEvent(QRestAccessManager* self, QTimerEvent* event);
    friend void QRestAccessManager_SuperChildEvent(QRestAccessManager* self, QChildEvent* event);
    friend void QRestAccessManager_SuperCustomEvent(QRestAccessManager* self, QEvent* event);
    friend void QRestAccessManager_SuperConnectNotify(QRestAccessManager* self, const QMetaMethod* signal);
    friend void QRestAccessManager_SuperDisconnectNotify(QRestAccessManager* self, const QMetaMethod* signal);
};

#endif
