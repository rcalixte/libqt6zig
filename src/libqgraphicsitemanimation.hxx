#pragma once
#ifndef LIBQGRAPHICSITEMANIMATION_HXX
#define LIBQGRAPHICSITEMANIMATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsItemAnimation
class VirtualQGraphicsItemAnimation final : public QGraphicsItemAnimation {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsItemAnimation_MetaObject_Callback = QMetaObject* (*)(const QGraphicsItemAnimation*);
    using QGraphicsItemAnimation_Metacast_Callback = void* (*)(QGraphicsItemAnimation*, const char*);
    using QGraphicsItemAnimation_Metacall_Callback = int (*)(QGraphicsItemAnimation*, int, int, void**);
    using QGraphicsItemAnimation_BeforeAnimationStep_Callback = void (*)(QGraphicsItemAnimation*, double);
    using QGraphicsItemAnimation_AfterAnimationStep_Callback = void (*)(QGraphicsItemAnimation*, double);
    using QGraphicsItemAnimation_Event_Callback = bool (*)(QGraphicsItemAnimation*, QEvent*);
    using QGraphicsItemAnimation_EventFilter_Callback = bool (*)(QGraphicsItemAnimation*, QObject*, QEvent*);
    using QGraphicsItemAnimation_TimerEvent_Callback = void (*)(QGraphicsItemAnimation*, QTimerEvent*);
    using QGraphicsItemAnimation_ChildEvent_Callback = void (*)(QGraphicsItemAnimation*, QChildEvent*);
    using QGraphicsItemAnimation_CustomEvent_Callback = void (*)(QGraphicsItemAnimation*, QEvent*);
    using QGraphicsItemAnimation_ConnectNotify_Callback = void (*)(QGraphicsItemAnimation*, QMetaMethod*);
    using QGraphicsItemAnimation_DisconnectNotify_Callback = void (*)(QGraphicsItemAnimation*, QMetaMethod*);
    using QGraphicsItemAnimation::isSignalConnected;
    using QGraphicsItemAnimation::receivers;
    using QGraphicsItemAnimation::sender;
    using QGraphicsItemAnimation::senderSignalIndex;

    // Instance callback storage
    QGraphicsItemAnimation_MetaObject_Callback qgraphicsitemanimation_metaobject_callback = nullptr;
    QGraphicsItemAnimation_Metacast_Callback qgraphicsitemanimation_metacast_callback = nullptr;
    QGraphicsItemAnimation_Metacall_Callback qgraphicsitemanimation_metacall_callback = nullptr;
    QGraphicsItemAnimation_BeforeAnimationStep_Callback qgraphicsitemanimation_beforeanimationstep_callback = nullptr;
    QGraphicsItemAnimation_AfterAnimationStep_Callback qgraphicsitemanimation_afteranimationstep_callback = nullptr;
    QGraphicsItemAnimation_Event_Callback qgraphicsitemanimation_event_callback = nullptr;
    QGraphicsItemAnimation_EventFilter_Callback qgraphicsitemanimation_eventfilter_callback = nullptr;
    QGraphicsItemAnimation_TimerEvent_Callback qgraphicsitemanimation_timerevent_callback = nullptr;
    QGraphicsItemAnimation_ChildEvent_Callback qgraphicsitemanimation_childevent_callback = nullptr;
    QGraphicsItemAnimation_CustomEvent_Callback qgraphicsitemanimation_customevent_callback = nullptr;
    QGraphicsItemAnimation_ConnectNotify_Callback qgraphicsitemanimation_connectnotify_callback = nullptr;
    QGraphicsItemAnimation_DisconnectNotify_Callback qgraphicsitemanimation_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGraphicsItemAnimation {
        using QGraphicsItemAnimation::afterAnimationStep;
        using QGraphicsItemAnimation::beforeAnimationStep;
        using QGraphicsItemAnimation::childEvent;
        using QGraphicsItemAnimation::connectNotify;
        using QGraphicsItemAnimation::customEvent;
        using QGraphicsItemAnimation::disconnectNotify;
        using QGraphicsItemAnimation::timerEvent;
    };

    VirtualQGraphicsItemAnimation() : QGraphicsItemAnimation() {};
    VirtualQGraphicsItemAnimation(QObject* parent) : QGraphicsItemAnimation(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicsitemanimation_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicsitemanimation_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsItemAnimation::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicsitemanimation_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicsitemanimation_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItemAnimation::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsitemanimation_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicsitemanimation_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsItemAnimation::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void beforeAnimationStep(qreal step) override {
        if (qgraphicsitemanimation_beforeanimationstep_callback) {
            double cbval1 = static_cast<double>(step);
            qgraphicsitemanimation_beforeanimationstep_callback(this, cbval1);
            return;
        }
        QGraphicsItemAnimation::beforeAnimationStep(step);
    }

    // Virtual method for C ABI access and custom callback
    virtual void afterAnimationStep(qreal step) override {
        if (qgraphicsitemanimation_afteranimationstep_callback) {
            double cbval1 = static_cast<double>(step);
            qgraphicsitemanimation_afteranimationstep_callback(this, cbval1);
            return;
        }
        QGraphicsItemAnimation::afterAnimationStep(step);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsitemanimation_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsitemanimation_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsItemAnimation::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsitemanimation_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsitemanimation_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsItemAnimation::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsitemanimation_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicsitemanimation_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemAnimation::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsitemanimation_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicsitemanimation_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemAnimation::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsitemanimation_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsitemanimation_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsItemAnimation::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsitemanimation_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsitemanimation_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsItemAnimation::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsitemanimation_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsitemanimation_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsItemAnimation::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGraphicsItemAnimation_SuperBeforeAnimationStep(QGraphicsItemAnimation* self, double step);
    friend void QGraphicsItemAnimation_SuperAfterAnimationStep(QGraphicsItemAnimation* self, double step);
    friend void QGraphicsItemAnimation_SuperTimerEvent(QGraphicsItemAnimation* self, QTimerEvent* event);
    friend void QGraphicsItemAnimation_SuperChildEvent(QGraphicsItemAnimation* self, QChildEvent* event);
    friend void QGraphicsItemAnimation_SuperCustomEvent(QGraphicsItemAnimation* self, QEvent* event);
    friend void QGraphicsItemAnimation_SuperConnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal);
    friend void QGraphicsItemAnimation_SuperDisconnectNotify(QGraphicsItemAnimation* self, const QMetaMethod* signal);
};

#endif
