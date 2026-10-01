#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKMODELINDEXPROXYMAPPER_HXX
#define EXTRAS_KITEMMODELS_LIBKMODELINDEXPROXYMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KModelIndexProxyMapper
class VirtualKModelIndexProxyMapper final : public KModelIndexProxyMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using KModelIndexProxyMapper_MetaObject_Callback = QMetaObject* (*)(const KModelIndexProxyMapper*);
    using KModelIndexProxyMapper_Metacast_Callback = void* (*)(KModelIndexProxyMapper*, const char*);
    using KModelIndexProxyMapper_Metacall_Callback = int (*)(KModelIndexProxyMapper*, int, int, void**);
    using KModelIndexProxyMapper_Event_Callback = bool (*)(KModelIndexProxyMapper*, QEvent*);
    using KModelIndexProxyMapper_EventFilter_Callback = bool (*)(KModelIndexProxyMapper*, QObject*, QEvent*);
    using KModelIndexProxyMapper_TimerEvent_Callback = void (*)(KModelIndexProxyMapper*, QTimerEvent*);
    using KModelIndexProxyMapper_ChildEvent_Callback = void (*)(KModelIndexProxyMapper*, QChildEvent*);
    using KModelIndexProxyMapper_CustomEvent_Callback = void (*)(KModelIndexProxyMapper*, QEvent*);
    using KModelIndexProxyMapper_ConnectNotify_Callback = void (*)(KModelIndexProxyMapper*, QMetaMethod*);
    using KModelIndexProxyMapper_DisconnectNotify_Callback = void (*)(KModelIndexProxyMapper*, QMetaMethod*);
    using KModelIndexProxyMapper::isSignalConnected;
    using KModelIndexProxyMapper::receivers;
    using KModelIndexProxyMapper::sender;
    using KModelIndexProxyMapper::senderSignalIndex;

    // Instance callback storage
    KModelIndexProxyMapper_MetaObject_Callback kmodelindexproxymapper_metaobject_callback = nullptr;
    KModelIndexProxyMapper_Metacast_Callback kmodelindexproxymapper_metacast_callback = nullptr;
    KModelIndexProxyMapper_Metacall_Callback kmodelindexproxymapper_metacall_callback = nullptr;
    KModelIndexProxyMapper_Event_Callback kmodelindexproxymapper_event_callback = nullptr;
    KModelIndexProxyMapper_EventFilter_Callback kmodelindexproxymapper_eventfilter_callback = nullptr;
    KModelIndexProxyMapper_TimerEvent_Callback kmodelindexproxymapper_timerevent_callback = nullptr;
    KModelIndexProxyMapper_ChildEvent_Callback kmodelindexproxymapper_childevent_callback = nullptr;
    KModelIndexProxyMapper_CustomEvent_Callback kmodelindexproxymapper_customevent_callback = nullptr;
    KModelIndexProxyMapper_ConnectNotify_Callback kmodelindexproxymapper_connectnotify_callback = nullptr;
    KModelIndexProxyMapper_DisconnectNotify_Callback kmodelindexproxymapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KModelIndexProxyMapper {
        using KModelIndexProxyMapper::childEvent;
        using KModelIndexProxyMapper::connectNotify;
        using KModelIndexProxyMapper::customEvent;
        using KModelIndexProxyMapper::disconnectNotify;
        using KModelIndexProxyMapper::timerEvent;
    };

    VirtualKModelIndexProxyMapper(const QAbstractItemModel* leftModel, const QAbstractItemModel* rightModel) : KModelIndexProxyMapper(leftModel, rightModel) {};
    VirtualKModelIndexProxyMapper(const QAbstractItemModel* leftModel, const QAbstractItemModel* rightModel, QObject* parent) : KModelIndexProxyMapper(leftModel, rightModel, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kmodelindexproxymapper_metaobject_callback) {
            QMetaObject* callback_ret = kmodelindexproxymapper_metaobject_callback(this);
            return callback_ret;
        }
        return KModelIndexProxyMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kmodelindexproxymapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kmodelindexproxymapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KModelIndexProxyMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmodelindexproxymapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kmodelindexproxymapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KModelIndexProxyMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmodelindexproxymapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kmodelindexproxymapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return KModelIndexProxyMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmodelindexproxymapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kmodelindexproxymapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KModelIndexProxyMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmodelindexproxymapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kmodelindexproxymapper_timerevent_callback(this, cbval1);
            return;
        }
        KModelIndexProxyMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmodelindexproxymapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            kmodelindexproxymapper_childevent_callback(this, cbval1);
            return;
        }
        KModelIndexProxyMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmodelindexproxymapper_customevent_callback) {
            QEvent* cbval1 = event;
            kmodelindexproxymapper_customevent_callback(this, cbval1);
            return;
        }
        KModelIndexProxyMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmodelindexproxymapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmodelindexproxymapper_connectnotify_callback(this, cbval1);
            return;
        }
        KModelIndexProxyMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmodelindexproxymapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmodelindexproxymapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        KModelIndexProxyMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void KModelIndexProxyMapper_SuperTimerEvent(KModelIndexProxyMapper* self, QTimerEvent* event);
    friend void KModelIndexProxyMapper_SuperChildEvent(KModelIndexProxyMapper* self, QChildEvent* event);
    friend void KModelIndexProxyMapper_SuperCustomEvent(KModelIndexProxyMapper* self, QEvent* event);
    friend void KModelIndexProxyMapper_SuperConnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
    friend void KModelIndexProxyMapper_SuperDisconnectNotify(KModelIndexProxyMapper* self, const QMetaMethod* signal);
};

#endif
