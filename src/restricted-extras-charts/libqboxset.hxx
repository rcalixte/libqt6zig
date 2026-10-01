#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQBOXSET_HXX
#define RESTRICTED_EXTRAS_CHARTS_LIBQBOXSET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBoxSet
class VirtualQBoxSet final : public QBoxSet {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBoxSet_MetaObject_Callback = QMetaObject* (*)(const QBoxSet*);
    using QBoxSet_Metacast_Callback = void* (*)(QBoxSet*, const char*);
    using QBoxSet_Metacall_Callback = int (*)(QBoxSet*, int, int, void**);
    using QBoxSet_Event_Callback = bool (*)(QBoxSet*, QEvent*);
    using QBoxSet_EventFilter_Callback = bool (*)(QBoxSet*, QObject*, QEvent*);
    using QBoxSet_TimerEvent_Callback = void (*)(QBoxSet*, QTimerEvent*);
    using QBoxSet_ChildEvent_Callback = void (*)(QBoxSet*, QChildEvent*);
    using QBoxSet_CustomEvent_Callback = void (*)(QBoxSet*, QEvent*);
    using QBoxSet_ConnectNotify_Callback = void (*)(QBoxSet*, QMetaMethod*);
    using QBoxSet_DisconnectNotify_Callback = void (*)(QBoxSet*, QMetaMethod*);
    using QBoxSet::isSignalConnected;
    using QBoxSet::receivers;
    using QBoxSet::sender;
    using QBoxSet::senderSignalIndex;

    // Instance callback storage
    QBoxSet_MetaObject_Callback qboxset_metaobject_callback = nullptr;
    QBoxSet_Metacast_Callback qboxset_metacast_callback = nullptr;
    QBoxSet_Metacall_Callback qboxset_metacall_callback = nullptr;
    QBoxSet_Event_Callback qboxset_event_callback = nullptr;
    QBoxSet_EventFilter_Callback qboxset_eventfilter_callback = nullptr;
    QBoxSet_TimerEvent_Callback qboxset_timerevent_callback = nullptr;
    QBoxSet_ChildEvent_Callback qboxset_childevent_callback = nullptr;
    QBoxSet_CustomEvent_Callback qboxset_customevent_callback = nullptr;
    QBoxSet_ConnectNotify_Callback qboxset_connectnotify_callback = nullptr;
    QBoxSet_DisconnectNotify_Callback qboxset_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QBoxSet {
        using QBoxSet::childEvent;
        using QBoxSet::connectNotify;
        using QBoxSet::customEvent;
        using QBoxSet::disconnectNotify;
        using QBoxSet::timerEvent;
    };

    VirtualQBoxSet() : QBoxSet() {};
    VirtualQBoxSet(const qreal le, const qreal lq, const qreal m, const qreal uq, const qreal ue) : QBoxSet(le, lq, m, uq, ue) {};
    VirtualQBoxSet(const QString label) : QBoxSet(label) {};
    VirtualQBoxSet(const QString label, QObject* parent) : QBoxSet(label, parent) {};
    VirtualQBoxSet(const qreal le, const qreal lq, const qreal m, const qreal uq, const qreal ue, const QString label) : QBoxSet(le, lq, m, uq, ue, label) {};
    VirtualQBoxSet(const qreal le, const qreal lq, const qreal m, const qreal uq, const qreal ue, const QString label, QObject* parent) : QBoxSet(le, lq, m, uq, ue, label, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qboxset_metaobject_callback) {
            QMetaObject* callback_ret = qboxset_metaobject_callback(this);
            return callback_ret;
        }
        return QBoxSet::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qboxset_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qboxset_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBoxSet::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qboxset_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qboxset_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBoxSet::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qboxset_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qboxset_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBoxSet::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qboxset_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qboxset_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBoxSet::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qboxset_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qboxset_timerevent_callback(this, cbval1);
            return;
        }
        QBoxSet::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qboxset_childevent_callback) {
            QChildEvent* cbval1 = event;
            qboxset_childevent_callback(this, cbval1);
            return;
        }
        QBoxSet::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qboxset_customevent_callback) {
            QEvent* cbval1 = event;
            qboxset_customevent_callback(this, cbval1);
            return;
        }
        QBoxSet::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qboxset_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qboxset_connectnotify_callback(this, cbval1);
            return;
        }
        QBoxSet::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qboxset_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qboxset_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBoxSet::disconnectNotify(signal);
    }

    // Friend functions
    friend void QBoxSet_SuperTimerEvent(QBoxSet* self, QTimerEvent* event);
    friend void QBoxSet_SuperChildEvent(QBoxSet* self, QChildEvent* event);
    friend void QBoxSet_SuperCustomEvent(QBoxSet* self, QEvent* event);
    friend void QBoxSet_SuperConnectNotify(QBoxSet* self, const QMetaMethod* signal);
    friend void QBoxSet_SuperDisconnectNotify(QBoxSet* self, const QMetaMethod* signal);
};

#endif
