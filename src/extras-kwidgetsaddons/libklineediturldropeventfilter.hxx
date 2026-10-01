#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKLINEEDITURLDROPEVENTFILTER_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKLINEEDITURLDROPEVENTFILTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLineEditUrlDropEventFilter
class VirtualKLineEditUrlDropEventFilter final : public KLineEditUrlDropEventFilter {
  public:
    // Virtual class public types (including callbacks and access types)
    using KLineEditUrlDropEventFilter_MetaObject_Callback = QMetaObject* (*)(const KLineEditUrlDropEventFilter*);
    using KLineEditUrlDropEventFilter_Metacast_Callback = void* (*)(KLineEditUrlDropEventFilter*, const char*);
    using KLineEditUrlDropEventFilter_Metacall_Callback = int (*)(KLineEditUrlDropEventFilter*, int, int, void**);
    using KLineEditUrlDropEventFilter_EventFilter_Callback = bool (*)(KLineEditUrlDropEventFilter*, QObject*, QEvent*);
    using KLineEditUrlDropEventFilter_Event_Callback = bool (*)(KLineEditUrlDropEventFilter*, QEvent*);
    using KLineEditUrlDropEventFilter_TimerEvent_Callback = void (*)(KLineEditUrlDropEventFilter*, QTimerEvent*);
    using KLineEditUrlDropEventFilter_ChildEvent_Callback = void (*)(KLineEditUrlDropEventFilter*, QChildEvent*);
    using KLineEditUrlDropEventFilter_CustomEvent_Callback = void (*)(KLineEditUrlDropEventFilter*, QEvent*);
    using KLineEditUrlDropEventFilter_ConnectNotify_Callback = void (*)(KLineEditUrlDropEventFilter*, QMetaMethod*);
    using KLineEditUrlDropEventFilter_DisconnectNotify_Callback = void (*)(KLineEditUrlDropEventFilter*, QMetaMethod*);
    using KLineEditUrlDropEventFilter::isSignalConnected;
    using KLineEditUrlDropEventFilter::receivers;
    using KLineEditUrlDropEventFilter::sender;
    using KLineEditUrlDropEventFilter::senderSignalIndex;

    // Instance callback storage
    KLineEditUrlDropEventFilter_MetaObject_Callback klineediturldropeventfilter_metaobject_callback = nullptr;
    KLineEditUrlDropEventFilter_Metacast_Callback klineediturldropeventfilter_metacast_callback = nullptr;
    KLineEditUrlDropEventFilter_Metacall_Callback klineediturldropeventfilter_metacall_callback = nullptr;
    KLineEditUrlDropEventFilter_EventFilter_Callback klineediturldropeventfilter_eventfilter_callback = nullptr;
    KLineEditUrlDropEventFilter_Event_Callback klineediturldropeventfilter_event_callback = nullptr;
    KLineEditUrlDropEventFilter_TimerEvent_Callback klineediturldropeventfilter_timerevent_callback = nullptr;
    KLineEditUrlDropEventFilter_ChildEvent_Callback klineediturldropeventfilter_childevent_callback = nullptr;
    KLineEditUrlDropEventFilter_CustomEvent_Callback klineediturldropeventfilter_customevent_callback = nullptr;
    KLineEditUrlDropEventFilter_ConnectNotify_Callback klineediturldropeventfilter_connectnotify_callback = nullptr;
    KLineEditUrlDropEventFilter_DisconnectNotify_Callback klineediturldropeventfilter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KLineEditUrlDropEventFilter {
        using KLineEditUrlDropEventFilter::childEvent;
        using KLineEditUrlDropEventFilter::connectNotify;
        using KLineEditUrlDropEventFilter::customEvent;
        using KLineEditUrlDropEventFilter::disconnectNotify;
        using KLineEditUrlDropEventFilter::eventFilter;
        using KLineEditUrlDropEventFilter::timerEvent;
    };

    VirtualKLineEditUrlDropEventFilter() : KLineEditUrlDropEventFilter() {};
    VirtualKLineEditUrlDropEventFilter(QObject* parent) : KLineEditUrlDropEventFilter(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (klineediturldropeventfilter_metaobject_callback) {
            QMetaObject* callback_ret = klineediturldropeventfilter_metaobject_callback(this);
            return callback_ret;
        }
        return KLineEditUrlDropEventFilter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (klineediturldropeventfilter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = klineediturldropeventfilter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KLineEditUrlDropEventFilter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klineediturldropeventfilter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = klineediturldropeventfilter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KLineEditUrlDropEventFilter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (klineediturldropeventfilter_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = klineediturldropeventfilter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KLineEditUrlDropEventFilter::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klineediturldropeventfilter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = klineediturldropeventfilter_event_callback(this, cbval1);
            return callback_ret;
        }
        return KLineEditUrlDropEventFilter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klineediturldropeventfilter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            klineediturldropeventfilter_timerevent_callback(this, cbval1);
            return;
        }
        KLineEditUrlDropEventFilter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klineediturldropeventfilter_childevent_callback) {
            QChildEvent* cbval1 = event;
            klineediturldropeventfilter_childevent_callback(this, cbval1);
            return;
        }
        KLineEditUrlDropEventFilter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klineediturldropeventfilter_customevent_callback) {
            QEvent* cbval1 = event;
            klineediturldropeventfilter_customevent_callback(this, cbval1);
            return;
        }
        KLineEditUrlDropEventFilter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klineediturldropeventfilter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klineediturldropeventfilter_connectnotify_callback(this, cbval1);
            return;
        }
        KLineEditUrlDropEventFilter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klineediturldropeventfilter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klineediturldropeventfilter_disconnectnotify_callback(this, cbval1);
            return;
        }
        KLineEditUrlDropEventFilter::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KLineEditUrlDropEventFilter_SuperEventFilter(KLineEditUrlDropEventFilter* self, QObject* object, QEvent* event);
    friend void KLineEditUrlDropEventFilter_SuperTimerEvent(KLineEditUrlDropEventFilter* self, QTimerEvent* event);
    friend void KLineEditUrlDropEventFilter_SuperChildEvent(KLineEditUrlDropEventFilter* self, QChildEvent* event);
    friend void KLineEditUrlDropEventFilter_SuperCustomEvent(KLineEditUrlDropEventFilter* self, QEvent* event);
    friend void KLineEditUrlDropEventFilter_SuperConnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
    friend void KLineEditUrlDropEventFilter_SuperDisconnectNotify(KLineEditUrlDropEventFilter* self, const QMetaMethod* signal);
};

#endif
