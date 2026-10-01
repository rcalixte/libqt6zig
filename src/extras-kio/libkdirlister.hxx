#pragma once
#ifndef EXTRAS_KIO_LIBKDIRLISTER_HXX
#define EXTRAS_KIO_LIBKDIRLISTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDirLister
class VirtualKDirLister final : public KDirLister {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDirLister_MetaObject_Callback = QMetaObject* (*)(const KDirLister*);
    using KDirLister_Metacast_Callback = void* (*)(KDirLister*, const char*);
    using KDirLister_Metacall_Callback = int (*)(KDirLister*, int, int, void**);
    using KDirLister_JobStarted_Callback = void (*)(KDirLister*, KIO__ListJob*);
    using KDirLister_Event_Callback = bool (*)(KDirLister*, QEvent*);
    using KDirLister_EventFilter_Callback = bool (*)(KDirLister*, QObject*, QEvent*);
    using KDirLister_TimerEvent_Callback = void (*)(KDirLister*, QTimerEvent*);
    using KDirLister_ChildEvent_Callback = void (*)(KDirLister*, QChildEvent*);
    using KDirLister_CustomEvent_Callback = void (*)(KDirLister*, QEvent*);
    using KDirLister_ConnectNotify_Callback = void (*)(KDirLister*, QMetaMethod*);
    using KDirLister_DisconnectNotify_Callback = void (*)(KDirLister*, QMetaMethod*);
    using KDirLister::isSignalConnected;
    using KDirLister::receivers;
    using KDirLister::sender;
    using KDirLister::senderSignalIndex;

    // Instance callback storage
    KDirLister_MetaObject_Callback kdirlister_metaobject_callback = nullptr;
    KDirLister_Metacast_Callback kdirlister_metacast_callback = nullptr;
    KDirLister_Metacall_Callback kdirlister_metacall_callback = nullptr;
    KDirLister_JobStarted_Callback kdirlister_jobstarted_callback = nullptr;
    KDirLister_Event_Callback kdirlister_event_callback = nullptr;
    KDirLister_EventFilter_Callback kdirlister_eventfilter_callback = nullptr;
    KDirLister_TimerEvent_Callback kdirlister_timerevent_callback = nullptr;
    KDirLister_ChildEvent_Callback kdirlister_childevent_callback = nullptr;
    KDirLister_CustomEvent_Callback kdirlister_customevent_callback = nullptr;
    KDirLister_ConnectNotify_Callback kdirlister_connectnotify_callback = nullptr;
    KDirLister_DisconnectNotify_Callback kdirlister_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KDirLister {
        using KDirLister::childEvent;
        using KDirLister::connectNotify;
        using KDirLister::customEvent;
        using KDirLister::disconnectNotify;
        using KDirLister::jobStarted;
        using KDirLister::timerEvent;
    };

    VirtualKDirLister() : KDirLister() {};
    VirtualKDirLister(QObject* parent) : KDirLister(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdirlister_metaobject_callback) {
            QMetaObject* callback_ret = kdirlister_metaobject_callback(this);
            return callback_ret;
        }
        return KDirLister::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdirlister_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kdirlister_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KDirLister::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdirlister_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kdirlister_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDirLister::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void jobStarted(KIO::ListJob* param1) override {
        if (kdirlister_jobstarted_callback) {
            KIO__ListJob* cbval1 = param1;
            kdirlister_jobstarted_callback(this, cbval1);
            return;
        }
        KDirLister::jobStarted(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdirlister_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kdirlister_event_callback(this, cbval1);
            return callback_ret;
        }
        return KDirLister::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdirlister_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kdirlister_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirLister::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdirlister_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kdirlister_timerevent_callback(this, cbval1);
            return;
        }
        KDirLister::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdirlister_childevent_callback) {
            QChildEvent* cbval1 = event;
            kdirlister_childevent_callback(this, cbval1);
            return;
        }
        KDirLister::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdirlister_customevent_callback) {
            QEvent* cbval1 = event;
            kdirlister_customevent_callback(this, cbval1);
            return;
        }
        KDirLister::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdirlister_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdirlister_connectnotify_callback(this, cbval1);
            return;
        }
        KDirLister::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdirlister_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdirlister_disconnectnotify_callback(this, cbval1);
            return;
        }
        KDirLister::disconnectNotify(signal);
    }

    // Friend functions
    friend void KDirLister_SuperJobStarted(KDirLister* self, KIO__ListJob* param1);
    friend void KDirLister_SuperTimerEvent(KDirLister* self, QTimerEvent* event);
    friend void KDirLister_SuperChildEvent(KDirLister* self, QChildEvent* event);
    friend void KDirLister_SuperCustomEvent(KDirLister* self, QEvent* event);
    friend void KDirLister_SuperConnectNotify(KDirLister* self, const QMetaMethod* signal);
    friend void KDirLister_SuperDisconnectNotify(KDirLister* self, const QMetaMethod* signal);
};

#endif
