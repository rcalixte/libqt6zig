#pragma once
#ifndef LIBQFILESELECTOR_HXX
#define LIBQFILESELECTOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileSelector
class VirtualQFileSelector final : public QFileSelector {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFileSelector_MetaObject_Callback = QMetaObject* (*)(const QFileSelector*);
    using QFileSelector_Metacast_Callback = void* (*)(QFileSelector*, const char*);
    using QFileSelector_Metacall_Callback = int (*)(QFileSelector*, int, int, void**);
    using QFileSelector_Event_Callback = bool (*)(QFileSelector*, QEvent*);
    using QFileSelector_EventFilter_Callback = bool (*)(QFileSelector*, QObject*, QEvent*);
    using QFileSelector_TimerEvent_Callback = void (*)(QFileSelector*, QTimerEvent*);
    using QFileSelector_ChildEvent_Callback = void (*)(QFileSelector*, QChildEvent*);
    using QFileSelector_CustomEvent_Callback = void (*)(QFileSelector*, QEvent*);
    using QFileSelector_ConnectNotify_Callback = void (*)(QFileSelector*, QMetaMethod*);
    using QFileSelector_DisconnectNotify_Callback = void (*)(QFileSelector*, QMetaMethod*);
    using QFileSelector::isSignalConnected;
    using QFileSelector::receivers;
    using QFileSelector::sender;
    using QFileSelector::senderSignalIndex;

    // Instance callback storage
    QFileSelector_MetaObject_Callback qfileselector_metaobject_callback = nullptr;
    QFileSelector_Metacast_Callback qfileselector_metacast_callback = nullptr;
    QFileSelector_Metacall_Callback qfileselector_metacall_callback = nullptr;
    QFileSelector_Event_Callback qfileselector_event_callback = nullptr;
    QFileSelector_EventFilter_Callback qfileselector_eventfilter_callback = nullptr;
    QFileSelector_TimerEvent_Callback qfileselector_timerevent_callback = nullptr;
    QFileSelector_ChildEvent_Callback qfileselector_childevent_callback = nullptr;
    QFileSelector_CustomEvent_Callback qfileselector_customevent_callback = nullptr;
    QFileSelector_ConnectNotify_Callback qfileselector_connectnotify_callback = nullptr;
    QFileSelector_DisconnectNotify_Callback qfileselector_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QFileSelector {
        using QFileSelector::childEvent;
        using QFileSelector::connectNotify;
        using QFileSelector::customEvent;
        using QFileSelector::disconnectNotify;
        using QFileSelector::timerEvent;
    };

    VirtualQFileSelector() : QFileSelector() {};
    VirtualQFileSelector(QObject* parent) : QFileSelector(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qfileselector_metaobject_callback) {
            QMetaObject* callback_ret = qfileselector_metaobject_callback(this);
            return callback_ret;
        }
        return QFileSelector::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfileselector_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qfileselector_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QFileSelector::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfileselector_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qfileselector_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFileSelector::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfileselector_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qfileselector_event_callback(this, cbval1);
            return callback_ret;
        }
        return QFileSelector::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfileselector_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qfileselector_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFileSelector::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfileselector_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qfileselector_timerevent_callback(this, cbval1);
            return;
        }
        QFileSelector::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfileselector_childevent_callback) {
            QChildEvent* cbval1 = event;
            qfileselector_childevent_callback(this, cbval1);
            return;
        }
        QFileSelector::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfileselector_customevent_callback) {
            QEvent* cbval1 = event;
            qfileselector_customevent_callback(this, cbval1);
            return;
        }
        QFileSelector::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfileselector_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfileselector_connectnotify_callback(this, cbval1);
            return;
        }
        QFileSelector::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfileselector_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfileselector_disconnectnotify_callback(this, cbval1);
            return;
        }
        QFileSelector::disconnectNotify(signal);
    }

    // Friend functions
    friend void QFileSelector_SuperTimerEvent(QFileSelector* self, QTimerEvent* event);
    friend void QFileSelector_SuperChildEvent(QFileSelector* self, QChildEvent* event);
    friend void QFileSelector_SuperCustomEvent(QFileSelector* self, QEvent* event);
    friend void QFileSelector_SuperConnectNotify(QFileSelector* self, const QMetaMethod* signal);
    friend void QFileSelector_SuperDisconnectNotify(QFileSelector* self, const QMetaMethod* signal);
};

#endif
