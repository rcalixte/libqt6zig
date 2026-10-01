#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQBARSET_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQBARSET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBarSet
class VirtualQBarSet final : public QBarSet {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBarSet_MetaObject_Callback = QMetaObject* (*)(const QBarSet*);
    using QBarSet_Metacast_Callback = void* (*)(QBarSet*, const char*);
    using QBarSet_Metacall_Callback = int (*)(QBarSet*, int, int, void**);
    using QBarSet_Event_Callback = bool (*)(QBarSet*, QEvent*);
    using QBarSet_EventFilter_Callback = bool (*)(QBarSet*, QObject*, QEvent*);
    using QBarSet_TimerEvent_Callback = void (*)(QBarSet*, QTimerEvent*);
    using QBarSet_ChildEvent_Callback = void (*)(QBarSet*, QChildEvent*);
    using QBarSet_CustomEvent_Callback = void (*)(QBarSet*, QEvent*);
    using QBarSet_ConnectNotify_Callback = void (*)(QBarSet*, QMetaMethod*);
    using QBarSet_DisconnectNotify_Callback = void (*)(QBarSet*, QMetaMethod*);
    using QBarSet::isSignalConnected;
    using QBarSet::receivers;
    using QBarSet::sender;
    using QBarSet::senderSignalIndex;

    // Instance callback storage
    QBarSet_MetaObject_Callback qbarset_metaobject_callback = nullptr;
    QBarSet_Metacast_Callback qbarset_metacast_callback = nullptr;
    QBarSet_Metacall_Callback qbarset_metacall_callback = nullptr;
    QBarSet_Event_Callback qbarset_event_callback = nullptr;
    QBarSet_EventFilter_Callback qbarset_eventfilter_callback = nullptr;
    QBarSet_TimerEvent_Callback qbarset_timerevent_callback = nullptr;
    QBarSet_ChildEvent_Callback qbarset_childevent_callback = nullptr;
    QBarSet_CustomEvent_Callback qbarset_customevent_callback = nullptr;
    QBarSet_ConnectNotify_Callback qbarset_connectnotify_callback = nullptr;
    QBarSet_DisconnectNotify_Callback qbarset_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QBarSet {
        using QBarSet::childEvent;
        using QBarSet::connectNotify;
        using QBarSet::customEvent;
        using QBarSet::disconnectNotify;
        using QBarSet::timerEvent;
    };

    VirtualQBarSet(const QString label) : QBarSet(label) {};
    VirtualQBarSet(const QString label, QObject* parent) : QBarSet(label, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbarset_metaobject_callback) {
            QMetaObject* callback_ret = qbarset_metaobject_callback(this);
            return callback_ret;
        }
        return QBarSet::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbarset_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qbarset_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBarSet::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbarset_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qbarset_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBarSet::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbarset_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qbarset_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBarSet::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbarset_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qbarset_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBarSet::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbarset_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qbarset_timerevent_callback(this, cbval1);
            return;
        }
        QBarSet::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbarset_childevent_callback) {
            QChildEvent* cbval1 = event;
            qbarset_childevent_callback(this, cbval1);
            return;
        }
        QBarSet::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbarset_customevent_callback) {
            QEvent* cbval1 = event;
            qbarset_customevent_callback(this, cbval1);
            return;
        }
        QBarSet::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbarset_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbarset_connectnotify_callback(this, cbval1);
            return;
        }
        QBarSet::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbarset_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbarset_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBarSet::disconnectNotify(signal);
    }

    // Friend functions
    friend void QBarSet_SuperTimerEvent(QBarSet* self, QTimerEvent* event);
    friend void QBarSet_SuperChildEvent(QBarSet* self, QChildEvent* event);
    friend void QBarSet_SuperCustomEvent(QBarSet* self, QEvent* event);
    friend void QBarSet_SuperConnectNotify(QBarSet* self, const QMetaMethod* signal);
    friend void QBarSet_SuperDisconnectNotify(QBarSet* self, const QMetaMethod* signal);
};

#endif
