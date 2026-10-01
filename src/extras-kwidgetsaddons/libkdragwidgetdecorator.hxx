#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKDRAGWIDGETDECORATOR_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKDRAGWIDGETDECORATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDragWidgetDecoratorBase
class VirtualKDragWidgetDecoratorBase final : public KDragWidgetDecoratorBase {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDragWidgetDecoratorBase_MetaObject_Callback = QMetaObject* (*)(const KDragWidgetDecoratorBase*);
    using KDragWidgetDecoratorBase_Metacast_Callback = void* (*)(KDragWidgetDecoratorBase*, const char*);
    using KDragWidgetDecoratorBase_Metacall_Callback = int (*)(KDragWidgetDecoratorBase*, int, int, void**);
    using KDragWidgetDecoratorBase_DragObject_Callback = QDrag* (*)(KDragWidgetDecoratorBase*);
    using KDragWidgetDecoratorBase_EventFilter_Callback = bool (*)(KDragWidgetDecoratorBase*, QObject*, QEvent*);
    using KDragWidgetDecoratorBase_StartDrag_Callback = void (*)(KDragWidgetDecoratorBase*);
    using KDragWidgetDecoratorBase_Event_Callback = bool (*)(KDragWidgetDecoratorBase*, QEvent*);
    using KDragWidgetDecoratorBase_TimerEvent_Callback = void (*)(KDragWidgetDecoratorBase*, QTimerEvent*);
    using KDragWidgetDecoratorBase_ChildEvent_Callback = void (*)(KDragWidgetDecoratorBase*, QChildEvent*);
    using KDragWidgetDecoratorBase_CustomEvent_Callback = void (*)(KDragWidgetDecoratorBase*, QEvent*);
    using KDragWidgetDecoratorBase_ConnectNotify_Callback = void (*)(KDragWidgetDecoratorBase*, QMetaMethod*);
    using KDragWidgetDecoratorBase_DisconnectNotify_Callback = void (*)(KDragWidgetDecoratorBase*, QMetaMethod*);
    using KDragWidgetDecoratorBase::decoratedWidget;
    using KDragWidgetDecoratorBase::isSignalConnected;
    using KDragWidgetDecoratorBase::receivers;
    using KDragWidgetDecoratorBase::sender;
    using KDragWidgetDecoratorBase::senderSignalIndex;

    // Instance callback storage
    KDragWidgetDecoratorBase_MetaObject_Callback kdragwidgetdecoratorbase_metaobject_callback = nullptr;
    KDragWidgetDecoratorBase_Metacast_Callback kdragwidgetdecoratorbase_metacast_callback = nullptr;
    KDragWidgetDecoratorBase_Metacall_Callback kdragwidgetdecoratorbase_metacall_callback = nullptr;
    KDragWidgetDecoratorBase_DragObject_Callback kdragwidgetdecoratorbase_dragobject_callback = nullptr;
    KDragWidgetDecoratorBase_EventFilter_Callback kdragwidgetdecoratorbase_eventfilter_callback = nullptr;
    KDragWidgetDecoratorBase_StartDrag_Callback kdragwidgetdecoratorbase_startdrag_callback = nullptr;
    KDragWidgetDecoratorBase_Event_Callback kdragwidgetdecoratorbase_event_callback = nullptr;
    KDragWidgetDecoratorBase_TimerEvent_Callback kdragwidgetdecoratorbase_timerevent_callback = nullptr;
    KDragWidgetDecoratorBase_ChildEvent_Callback kdragwidgetdecoratorbase_childevent_callback = nullptr;
    KDragWidgetDecoratorBase_CustomEvent_Callback kdragwidgetdecoratorbase_customevent_callback = nullptr;
    KDragWidgetDecoratorBase_ConnectNotify_Callback kdragwidgetdecoratorbase_connectnotify_callback = nullptr;
    KDragWidgetDecoratorBase_DisconnectNotify_Callback kdragwidgetdecoratorbase_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KDragWidgetDecoratorBase {
        using KDragWidgetDecoratorBase::childEvent;
        using KDragWidgetDecoratorBase::connectNotify;
        using KDragWidgetDecoratorBase::customEvent;
        using KDragWidgetDecoratorBase::disconnectNotify;
        using KDragWidgetDecoratorBase::dragObject;
        using KDragWidgetDecoratorBase::eventFilter;
        using KDragWidgetDecoratorBase::startDrag;
        using KDragWidgetDecoratorBase::timerEvent;
    };

    VirtualKDragWidgetDecoratorBase(QWidget* parent) : KDragWidgetDecoratorBase(parent) {};
    VirtualKDragWidgetDecoratorBase() : KDragWidgetDecoratorBase() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdragwidgetdecoratorbase_metaobject_callback) {
            QMetaObject* callback_ret = kdragwidgetdecoratorbase_metaobject_callback(this);
            return callback_ret;
        }
        return KDragWidgetDecoratorBase::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdragwidgetdecoratorbase_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kdragwidgetdecoratorbase_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KDragWidgetDecoratorBase::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdragwidgetdecoratorbase_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kdragwidgetdecoratorbase_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDragWidgetDecoratorBase::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDrag* dragObject() override {
        if (kdragwidgetdecoratorbase_dragobject_callback) {
            QDrag* callback_ret = kdragwidgetdecoratorbase_dragobject_callback(this);
            return callback_ret;
        }
        return KDragWidgetDecoratorBase::dragObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdragwidgetdecoratorbase_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kdragwidgetdecoratorbase_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDragWidgetDecoratorBase::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag() override {
        if (kdragwidgetdecoratorbase_startdrag_callback) {
            kdragwidgetdecoratorbase_startdrag_callback(this);
            return;
        }
        KDragWidgetDecoratorBase::startDrag();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdragwidgetdecoratorbase_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kdragwidgetdecoratorbase_event_callback(this, cbval1);
            return callback_ret;
        }
        return KDragWidgetDecoratorBase::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdragwidgetdecoratorbase_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kdragwidgetdecoratorbase_timerevent_callback(this, cbval1);
            return;
        }
        KDragWidgetDecoratorBase::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdragwidgetdecoratorbase_childevent_callback) {
            QChildEvent* cbval1 = event;
            kdragwidgetdecoratorbase_childevent_callback(this, cbval1);
            return;
        }
        KDragWidgetDecoratorBase::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdragwidgetdecoratorbase_customevent_callback) {
            QEvent* cbval1 = event;
            kdragwidgetdecoratorbase_customevent_callback(this, cbval1);
            return;
        }
        KDragWidgetDecoratorBase::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdragwidgetdecoratorbase_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdragwidgetdecoratorbase_connectnotify_callback(this, cbval1);
            return;
        }
        KDragWidgetDecoratorBase::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdragwidgetdecoratorbase_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdragwidgetdecoratorbase_disconnectnotify_callback(this, cbval1);
            return;
        }
        KDragWidgetDecoratorBase::disconnectNotify(signal);
    }

    // Friend functions
    friend QDrag* KDragWidgetDecoratorBase_SuperDragObject(KDragWidgetDecoratorBase* self);
    friend bool KDragWidgetDecoratorBase_SuperEventFilter(KDragWidgetDecoratorBase* self, QObject* watched, QEvent* event);
    friend void KDragWidgetDecoratorBase_SuperStartDrag(KDragWidgetDecoratorBase* self);
    friend void KDragWidgetDecoratorBase_SuperTimerEvent(KDragWidgetDecoratorBase* self, QTimerEvent* event);
    friend void KDragWidgetDecoratorBase_SuperChildEvent(KDragWidgetDecoratorBase* self, QChildEvent* event);
    friend void KDragWidgetDecoratorBase_SuperCustomEvent(KDragWidgetDecoratorBase* self, QEvent* event);
    friend void KDragWidgetDecoratorBase_SuperConnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
    friend void KDragWidgetDecoratorBase_SuperDisconnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
};

#endif
