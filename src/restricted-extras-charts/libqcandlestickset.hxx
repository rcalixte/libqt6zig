#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKSET_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKSET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCandlestickSet
class VirtualQCandlestickSet final : public QCandlestickSet {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCandlestickSet_MetaObject_Callback = QMetaObject* (*)(const QCandlestickSet*);
    using QCandlestickSet_Metacast_Callback = void* (*)(QCandlestickSet*, const char*);
    using QCandlestickSet_Metacall_Callback = int (*)(QCandlestickSet*, int, int, void**);
    using QCandlestickSet_Event_Callback = bool (*)(QCandlestickSet*, QEvent*);
    using QCandlestickSet_EventFilter_Callback = bool (*)(QCandlestickSet*, QObject*, QEvent*);
    using QCandlestickSet_TimerEvent_Callback = void (*)(QCandlestickSet*, QTimerEvent*);
    using QCandlestickSet_ChildEvent_Callback = void (*)(QCandlestickSet*, QChildEvent*);
    using QCandlestickSet_CustomEvent_Callback = void (*)(QCandlestickSet*, QEvent*);
    using QCandlestickSet_ConnectNotify_Callback = void (*)(QCandlestickSet*, QMetaMethod*);
    using QCandlestickSet_DisconnectNotify_Callback = void (*)(QCandlestickSet*, QMetaMethod*);
    using QCandlestickSet::isSignalConnected;
    using QCandlestickSet::receivers;
    using QCandlestickSet::sender;
    using QCandlestickSet::senderSignalIndex;

    // Instance callback storage
    QCandlestickSet_MetaObject_Callback qcandlestickset_metaobject_callback = nullptr;
    QCandlestickSet_Metacast_Callback qcandlestickset_metacast_callback = nullptr;
    QCandlestickSet_Metacall_Callback qcandlestickset_metacall_callback = nullptr;
    QCandlestickSet_Event_Callback qcandlestickset_event_callback = nullptr;
    QCandlestickSet_EventFilter_Callback qcandlestickset_eventfilter_callback = nullptr;
    QCandlestickSet_TimerEvent_Callback qcandlestickset_timerevent_callback = nullptr;
    QCandlestickSet_ChildEvent_Callback qcandlestickset_childevent_callback = nullptr;
    QCandlestickSet_CustomEvent_Callback qcandlestickset_customevent_callback = nullptr;
    QCandlestickSet_ConnectNotify_Callback qcandlestickset_connectnotify_callback = nullptr;
    QCandlestickSet_DisconnectNotify_Callback qcandlestickset_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCandlestickSet {
        using QCandlestickSet::childEvent;
        using QCandlestickSet::connectNotify;
        using QCandlestickSet::customEvent;
        using QCandlestickSet::disconnectNotify;
        using QCandlestickSet::timerEvent;
    };

    VirtualQCandlestickSet() : QCandlestickSet() {};
    VirtualQCandlestickSet(qreal open, qreal high, qreal low, qreal close) : QCandlestickSet(open, high, low, close) {};
    VirtualQCandlestickSet(qreal timestamp) : QCandlestickSet(timestamp) {};
    VirtualQCandlestickSet(qreal timestamp, QObject* parent) : QCandlestickSet(timestamp, parent) {};
    VirtualQCandlestickSet(qreal open, qreal high, qreal low, qreal close, qreal timestamp) : QCandlestickSet(open, high, low, close, timestamp) {};
    VirtualQCandlestickSet(qreal open, qreal high, qreal low, qreal close, qreal timestamp, QObject* parent) : QCandlestickSet(open, high, low, close, timestamp, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcandlestickset_metaobject_callback) {
            QMetaObject* callback_ret = qcandlestickset_metaobject_callback(this);
            return callback_ret;
        }
        return QCandlestickSet::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcandlestickset_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcandlestickset_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCandlestickSet::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcandlestickset_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcandlestickset_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCandlestickSet::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcandlestickset_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcandlestickset_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCandlestickSet::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcandlestickset_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcandlestickset_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCandlestickSet::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcandlestickset_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcandlestickset_timerevent_callback(this, cbval1);
            return;
        }
        QCandlestickSet::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcandlestickset_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcandlestickset_childevent_callback(this, cbval1);
            return;
        }
        QCandlestickSet::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcandlestickset_customevent_callback) {
            QEvent* cbval1 = event;
            qcandlestickset_customevent_callback(this, cbval1);
            return;
        }
        QCandlestickSet::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcandlestickset_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcandlestickset_connectnotify_callback(this, cbval1);
            return;
        }
        QCandlestickSet::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcandlestickset_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcandlestickset_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCandlestickSet::disconnectNotify(signal);
    }

    // Friend functions
    friend void QCandlestickSet_SuperTimerEvent(QCandlestickSet* self, QTimerEvent* event);
    friend void QCandlestickSet_SuperChildEvent(QCandlestickSet* self, QChildEvent* event);
    friend void QCandlestickSet_SuperCustomEvent(QCandlestickSet* self, QEvent* event);
    friend void QCandlestickSet_SuperConnectNotify(QCandlestickSet* self, const QMetaMethod* signal);
    friend void QCandlestickSet_SuperDisconnectNotify(QCandlestickSet* self, const QMetaMethod* signal);
};

#endif
