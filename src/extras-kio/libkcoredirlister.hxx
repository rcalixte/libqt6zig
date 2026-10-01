#pragma once
#ifndef EXTRAS_KIO_LIBKCOREDIRLISTER_HXX
#define EXTRAS_KIO_LIBKCOREDIRLISTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCoreDirLister
class VirtualKCoreDirLister final : public KCoreDirLister {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCoreDirLister_MetaObject_Callback = QMetaObject* (*)(const KCoreDirLister*);
    using KCoreDirLister_Metacast_Callback = void* (*)(KCoreDirLister*, const char*);
    using KCoreDirLister_Metacall_Callback = int (*)(KCoreDirLister*, int, int, void**);
    using KCoreDirLister_JobStarted_Callback = void (*)(KCoreDirLister*, KIO__ListJob*);
    using KCoreDirLister_Event_Callback = bool (*)(KCoreDirLister*, QEvent*);
    using KCoreDirLister_EventFilter_Callback = bool (*)(KCoreDirLister*, QObject*, QEvent*);
    using KCoreDirLister_TimerEvent_Callback = void (*)(KCoreDirLister*, QTimerEvent*);
    using KCoreDirLister_ChildEvent_Callback = void (*)(KCoreDirLister*, QChildEvent*);
    using KCoreDirLister_CustomEvent_Callback = void (*)(KCoreDirLister*, QEvent*);
    using KCoreDirLister_ConnectNotify_Callback = void (*)(KCoreDirLister*, QMetaMethod*);
    using KCoreDirLister_DisconnectNotify_Callback = void (*)(KCoreDirLister*, QMetaMethod*);
    using KCoreDirLister::isSignalConnected;
    using KCoreDirLister::receivers;
    using KCoreDirLister::sender;
    using KCoreDirLister::senderSignalIndex;

    // Instance callback storage
    KCoreDirLister_MetaObject_Callback kcoredirlister_metaobject_callback = nullptr;
    KCoreDirLister_Metacast_Callback kcoredirlister_metacast_callback = nullptr;
    KCoreDirLister_Metacall_Callback kcoredirlister_metacall_callback = nullptr;
    KCoreDirLister_JobStarted_Callback kcoredirlister_jobstarted_callback = nullptr;
    KCoreDirLister_Event_Callback kcoredirlister_event_callback = nullptr;
    KCoreDirLister_EventFilter_Callback kcoredirlister_eventfilter_callback = nullptr;
    KCoreDirLister_TimerEvent_Callback kcoredirlister_timerevent_callback = nullptr;
    KCoreDirLister_ChildEvent_Callback kcoredirlister_childevent_callback = nullptr;
    KCoreDirLister_CustomEvent_Callback kcoredirlister_customevent_callback = nullptr;
    KCoreDirLister_ConnectNotify_Callback kcoredirlister_connectnotify_callback = nullptr;
    KCoreDirLister_DisconnectNotify_Callback kcoredirlister_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KCoreDirLister {
        using KCoreDirLister::childEvent;
        using KCoreDirLister::connectNotify;
        using KCoreDirLister::customEvent;
        using KCoreDirLister::disconnectNotify;
        using KCoreDirLister::jobStarted;
        using KCoreDirLister::timerEvent;
    };

    VirtualKCoreDirLister() : KCoreDirLister() {};
    VirtualKCoreDirLister(QObject* parent) : KCoreDirLister(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcoredirlister_metaobject_callback) {
            QMetaObject* callback_ret = kcoredirlister_metaobject_callback(this);
            return callback_ret;
        }
        return KCoreDirLister::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcoredirlister_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcoredirlister_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreDirLister::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcoredirlister_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcoredirlister_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCoreDirLister::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void jobStarted(KIO::ListJob* param1) override {
        if (kcoredirlister_jobstarted_callback) {
            KIO__ListJob* cbval1 = param1;
            kcoredirlister_jobstarted_callback(this, cbval1);
            return;
        }
        KCoreDirLister::jobStarted(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcoredirlister_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcoredirlister_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCoreDirLister::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcoredirlister_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcoredirlister_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCoreDirLister::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcoredirlister_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcoredirlister_timerevent_callback(this, cbval1);
            return;
        }
        KCoreDirLister::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcoredirlister_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcoredirlister_childevent_callback(this, cbval1);
            return;
        }
        KCoreDirLister::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcoredirlister_customevent_callback) {
            QEvent* cbval1 = event;
            kcoredirlister_customevent_callback(this, cbval1);
            return;
        }
        KCoreDirLister::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcoredirlister_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcoredirlister_connectnotify_callback(this, cbval1);
            return;
        }
        KCoreDirLister::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcoredirlister_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcoredirlister_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCoreDirLister::disconnectNotify(signal);
    }

    // Friend functions
    friend void KCoreDirLister_SuperJobStarted(KCoreDirLister* self, KIO__ListJob* param1);
    friend void KCoreDirLister_SuperTimerEvent(KCoreDirLister* self, QTimerEvent* event);
    friend void KCoreDirLister_SuperChildEvent(KCoreDirLister* self, QChildEvent* event);
    friend void KCoreDirLister_SuperCustomEvent(KCoreDirLister* self, QEvent* event);
    friend void KCoreDirLister_SuperConnectNotify(KCoreDirLister* self, const QMetaMethod* signal);
    friend void KCoreDirLister_SuperDisconnectNotify(KCoreDirLister* self, const QMetaMethod* signal);
};

#endif
