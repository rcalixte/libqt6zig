#pragma once
#ifndef QUICK_LIBQQUICKATTACHEDPROPERTYPROPAGATOR_HXX
#define QUICK_LIBQQUICKATTACHEDPROPERTYPROPAGATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickAttachedPropertyPropagator
class VirtualQQuickAttachedPropertyPropagator final : public QQuickAttachedPropertyPropagator {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickAttachedPropertyPropagator_MetaObject_Callback = QMetaObject* (*)(const QQuickAttachedPropertyPropagator*);
    using QQuickAttachedPropertyPropagator_Metacast_Callback = void* (*)(QQuickAttachedPropertyPropagator*, const char*);
    using QQuickAttachedPropertyPropagator_Metacall_Callback = int (*)(QQuickAttachedPropertyPropagator*, int, int, void**);
    using QQuickAttachedPropertyPropagator_AttachedParentChange_Callback = void (*)(QQuickAttachedPropertyPropagator*, QQuickAttachedPropertyPropagator*, QQuickAttachedPropertyPropagator*);
    using QQuickAttachedPropertyPropagator_Event_Callback = bool (*)(QQuickAttachedPropertyPropagator*, QEvent*);
    using QQuickAttachedPropertyPropagator_EventFilter_Callback = bool (*)(QQuickAttachedPropertyPropagator*, QObject*, QEvent*);
    using QQuickAttachedPropertyPropagator_TimerEvent_Callback = void (*)(QQuickAttachedPropertyPropagator*, QTimerEvent*);
    using QQuickAttachedPropertyPropagator_ChildEvent_Callback = void (*)(QQuickAttachedPropertyPropagator*, QChildEvent*);
    using QQuickAttachedPropertyPropagator_CustomEvent_Callback = void (*)(QQuickAttachedPropertyPropagator*, QEvent*);
    using QQuickAttachedPropertyPropagator_ConnectNotify_Callback = void (*)(QQuickAttachedPropertyPropagator*, QMetaMethod*);
    using QQuickAttachedPropertyPropagator_DisconnectNotify_Callback = void (*)(QQuickAttachedPropertyPropagator*, QMetaMethod*);
    using QQuickAttachedPropertyPropagator::initialize;
    using QQuickAttachedPropertyPropagator::isSignalConnected;
    using QQuickAttachedPropertyPropagator::receivers;
    using QQuickAttachedPropertyPropagator::sender;
    using QQuickAttachedPropertyPropagator::senderSignalIndex;

    // Instance callback storage
    QQuickAttachedPropertyPropagator_MetaObject_Callback qquickattachedpropertypropagator_metaobject_callback = nullptr;
    QQuickAttachedPropertyPropagator_Metacast_Callback qquickattachedpropertypropagator_metacast_callback = nullptr;
    QQuickAttachedPropertyPropagator_Metacall_Callback qquickattachedpropertypropagator_metacall_callback = nullptr;
    QQuickAttachedPropertyPropagator_AttachedParentChange_Callback qquickattachedpropertypropagator_attachedparentchange_callback = nullptr;
    QQuickAttachedPropertyPropagator_Event_Callback qquickattachedpropertypropagator_event_callback = nullptr;
    QQuickAttachedPropertyPropagator_EventFilter_Callback qquickattachedpropertypropagator_eventfilter_callback = nullptr;
    QQuickAttachedPropertyPropagator_TimerEvent_Callback qquickattachedpropertypropagator_timerevent_callback = nullptr;
    QQuickAttachedPropertyPropagator_ChildEvent_Callback qquickattachedpropertypropagator_childevent_callback = nullptr;
    QQuickAttachedPropertyPropagator_CustomEvent_Callback qquickattachedpropertypropagator_customevent_callback = nullptr;
    QQuickAttachedPropertyPropagator_ConnectNotify_Callback qquickattachedpropertypropagator_connectnotify_callback = nullptr;
    QQuickAttachedPropertyPropagator_DisconnectNotify_Callback qquickattachedpropertypropagator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickAttachedPropertyPropagator {
        using QQuickAttachedPropertyPropagator::attachedParentChange;
        using QQuickAttachedPropertyPropagator::childEvent;
        using QQuickAttachedPropertyPropagator::connectNotify;
        using QQuickAttachedPropertyPropagator::customEvent;
        using QQuickAttachedPropertyPropagator::disconnectNotify;
        using QQuickAttachedPropertyPropagator::timerEvent;
    };

    VirtualQQuickAttachedPropertyPropagator() : QQuickAttachedPropertyPropagator() {};
    VirtualQQuickAttachedPropertyPropagator(QObject* parent) : QQuickAttachedPropertyPropagator(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickattachedpropertypropagator_metaobject_callback) {
            QMetaObject* callback_ret = qquickattachedpropertypropagator_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickAttachedPropertyPropagator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickattachedpropertypropagator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquickattachedpropertypropagator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickAttachedPropertyPropagator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickattachedpropertypropagator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquickattachedpropertypropagator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickAttachedPropertyPropagator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void attachedParentChange(QQuickAttachedPropertyPropagator* newParent, QQuickAttachedPropertyPropagator* oldParent) override {
        if (qquickattachedpropertypropagator_attachedparentchange_callback) {
            QQuickAttachedPropertyPropagator* cbval1 = newParent;
            QQuickAttachedPropertyPropagator* cbval2 = oldParent;
            qquickattachedpropertypropagator_attachedparentchange_callback(this, cbval1, cbval2);
            return;
        }
        QQuickAttachedPropertyPropagator::attachedParentChange(newParent, oldParent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquickattachedpropertypropagator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquickattachedpropertypropagator_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickAttachedPropertyPropagator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickattachedpropertypropagator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquickattachedpropertypropagator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickAttachedPropertyPropagator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickattachedpropertypropagator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquickattachedpropertypropagator_timerevent_callback(this, cbval1);
            return;
        }
        QQuickAttachedPropertyPropagator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickattachedpropertypropagator_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquickattachedpropertypropagator_childevent_callback(this, cbval1);
            return;
        }
        QQuickAttachedPropertyPropagator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickattachedpropertypropagator_customevent_callback) {
            QEvent* cbval1 = event;
            qquickattachedpropertypropagator_customevent_callback(this, cbval1);
            return;
        }
        QQuickAttachedPropertyPropagator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickattachedpropertypropagator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickattachedpropertypropagator_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickAttachedPropertyPropagator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickattachedpropertypropagator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickattachedpropertypropagator_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickAttachedPropertyPropagator::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuickAttachedPropertyPropagator_SuperAttachedParentChange(QQuickAttachedPropertyPropagator* self, QQuickAttachedPropertyPropagator* newParent, QQuickAttachedPropertyPropagator* oldParent);
    friend void QQuickAttachedPropertyPropagator_SuperTimerEvent(QQuickAttachedPropertyPropagator* self, QTimerEvent* event);
    friend void QQuickAttachedPropertyPropagator_SuperChildEvent(QQuickAttachedPropertyPropagator* self, QChildEvent* event);
    friend void QQuickAttachedPropertyPropagator_SuperCustomEvent(QQuickAttachedPropertyPropagator* self, QEvent* event);
    friend void QQuickAttachedPropertyPropagator_SuperConnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
    friend void QQuickAttachedPropertyPropagator_SuperDisconnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
};

#endif
