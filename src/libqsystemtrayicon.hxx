#pragma once
#ifndef LIBQSYSTEMTRAYICON_HXX
#define LIBQSYSTEMTRAYICON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSystemTrayIcon
class VirtualQSystemTrayIcon final : public QSystemTrayIcon {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSystemTrayIcon_MetaObject_Callback = QMetaObject* (*)(const QSystemTrayIcon*);
    using QSystemTrayIcon_Metacast_Callback = void* (*)(QSystemTrayIcon*, const char*);
    using QSystemTrayIcon_Metacall_Callback = int (*)(QSystemTrayIcon*, int, int, void**);
    using QSystemTrayIcon_Event_Callback = bool (*)(QSystemTrayIcon*, QEvent*);
    using QSystemTrayIcon_EventFilter_Callback = bool (*)(QSystemTrayIcon*, QObject*, QEvent*);
    using QSystemTrayIcon_TimerEvent_Callback = void (*)(QSystemTrayIcon*, QTimerEvent*);
    using QSystemTrayIcon_ChildEvent_Callback = void (*)(QSystemTrayIcon*, QChildEvent*);
    using QSystemTrayIcon_CustomEvent_Callback = void (*)(QSystemTrayIcon*, QEvent*);
    using QSystemTrayIcon_ConnectNotify_Callback = void (*)(QSystemTrayIcon*, QMetaMethod*);
    using QSystemTrayIcon_DisconnectNotify_Callback = void (*)(QSystemTrayIcon*, QMetaMethod*);
    using QSystemTrayIcon::isSignalConnected;
    using QSystemTrayIcon::receivers;
    using QSystemTrayIcon::sender;
    using QSystemTrayIcon::senderSignalIndex;

    // Instance callback storage
    QSystemTrayIcon_MetaObject_Callback qsystemtrayicon_metaobject_callback = nullptr;
    QSystemTrayIcon_Metacast_Callback qsystemtrayicon_metacast_callback = nullptr;
    QSystemTrayIcon_Metacall_Callback qsystemtrayicon_metacall_callback = nullptr;
    QSystemTrayIcon_Event_Callback qsystemtrayicon_event_callback = nullptr;
    QSystemTrayIcon_EventFilter_Callback qsystemtrayicon_eventfilter_callback = nullptr;
    QSystemTrayIcon_TimerEvent_Callback qsystemtrayicon_timerevent_callback = nullptr;
    QSystemTrayIcon_ChildEvent_Callback qsystemtrayicon_childevent_callback = nullptr;
    QSystemTrayIcon_CustomEvent_Callback qsystemtrayicon_customevent_callback = nullptr;
    QSystemTrayIcon_ConnectNotify_Callback qsystemtrayicon_connectnotify_callback = nullptr;
    QSystemTrayIcon_DisconnectNotify_Callback qsystemtrayicon_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSystemTrayIcon {
        using QSystemTrayIcon::childEvent;
        using QSystemTrayIcon::connectNotify;
        using QSystemTrayIcon::customEvent;
        using QSystemTrayIcon::disconnectNotify;
        using QSystemTrayIcon::event;
        using QSystemTrayIcon::timerEvent;
    };

    VirtualQSystemTrayIcon() : QSystemTrayIcon() {};
    VirtualQSystemTrayIcon(const QIcon& icon) : QSystemTrayIcon(icon) {};
    VirtualQSystemTrayIcon(QObject* parent) : QSystemTrayIcon(parent) {};
    VirtualQSystemTrayIcon(const QIcon& icon, QObject* parent) : QSystemTrayIcon(icon, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsystemtrayicon_metaobject_callback) {
            QMetaObject* callback_ret = qsystemtrayicon_metaobject_callback(this);
            return callback_ret;
        }
        return QSystemTrayIcon::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsystemtrayicon_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsystemtrayicon_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSystemTrayIcon::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsystemtrayicon_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsystemtrayicon_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSystemTrayIcon::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsystemtrayicon_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsystemtrayicon_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSystemTrayIcon::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsystemtrayicon_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsystemtrayicon_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSystemTrayIcon::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsystemtrayicon_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsystemtrayicon_timerevent_callback(this, cbval1);
            return;
        }
        QSystemTrayIcon::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsystemtrayicon_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsystemtrayicon_childevent_callback(this, cbval1);
            return;
        }
        QSystemTrayIcon::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsystemtrayicon_customevent_callback) {
            QEvent* cbval1 = event;
            qsystemtrayicon_customevent_callback(this, cbval1);
            return;
        }
        QSystemTrayIcon::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsystemtrayicon_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsystemtrayicon_connectnotify_callback(this, cbval1);
            return;
        }
        QSystemTrayIcon::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsystemtrayicon_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsystemtrayicon_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSystemTrayIcon::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QSystemTrayIcon_SuperEvent(QSystemTrayIcon* self, QEvent* event);
    friend void QSystemTrayIcon_SuperTimerEvent(QSystemTrayIcon* self, QTimerEvent* event);
    friend void QSystemTrayIcon_SuperChildEvent(QSystemTrayIcon* self, QChildEvent* event);
    friend void QSystemTrayIcon_SuperCustomEvent(QSystemTrayIcon* self, QEvent* event);
    friend void QSystemTrayIcon_SuperConnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal);
    friend void QSystemTrayIcon_SuperDisconnectNotify(QSystemTrayIcon* self, const QMetaMethod* signal);
};

#endif
