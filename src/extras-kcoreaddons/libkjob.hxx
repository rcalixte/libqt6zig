#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKJOB_HXX
#define EXTRAS_KCOREADDONS_LIBKJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KJob
class VirtualKJob : public KJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KJob_MetaObject_Callback = QMetaObject* (*)(const KJob*);
    using KJob_Metacast_Callback = void* (*)(KJob*, const char*);
    using KJob_Metacall_Callback = int (*)(KJob*, int, int, void**);
    using KJob_Start_Callback = void (*)(KJob*);
    using KJob_DoKill_Callback = bool (*)(KJob*);
    using KJob_DoSuspend_Callback = bool (*)(KJob*);
    using KJob_DoResume_Callback = bool (*)(KJob*);
    using KJob_ErrorString_Callback = const char* (*)(const KJob*);
    using KJob_Event_Callback = bool (*)(KJob*, QEvent*);
    using KJob_EventFilter_Callback = bool (*)(KJob*, QObject*, QEvent*);
    using KJob_TimerEvent_Callback = void (*)(KJob*, QTimerEvent*);
    using KJob_ChildEvent_Callback = void (*)(KJob*, QChildEvent*);
    using KJob_CustomEvent_Callback = void (*)(KJob*, QEvent*);
    using KJob_ConnectNotify_Callback = void (*)(KJob*, QMetaMethod*);
    using KJob_DisconnectNotify_Callback = void (*)(KJob*, QMetaMethod*);
    using KJob::emitPercent;
    using KJob::emitResult;
    using KJob::emitSpeed;
    using KJob::isFinished;
    using KJob::isSignalConnected;
    using KJob::receivers;
    using KJob::sender;
    using KJob::senderSignalIndex;
    using KJob::setCapabilities;
    using KJob::setError;
    using KJob::setErrorText;
    using KJob::setPercent;
    using KJob::setProcessedAmount;
    using KJob::setProgressUnit;
    using KJob::setTotalAmount;
    using KJob::startElapsedTimer;

    // Instance callback storage
    KJob_MetaObject_Callback kjob_metaobject_callback = nullptr;
    KJob_Metacast_Callback kjob_metacast_callback = nullptr;
    KJob_Metacall_Callback kjob_metacall_callback = nullptr;
    KJob_Start_Callback kjob_start_callback = nullptr;
    KJob_DoKill_Callback kjob_dokill_callback = nullptr;
    KJob_DoSuspend_Callback kjob_dosuspend_callback = nullptr;
    KJob_DoResume_Callback kjob_doresume_callback = nullptr;
    KJob_ErrorString_Callback kjob_errorstring_callback = nullptr;
    KJob_Event_Callback kjob_event_callback = nullptr;
    KJob_EventFilter_Callback kjob_eventfilter_callback = nullptr;
    KJob_TimerEvent_Callback kjob_timerevent_callback = nullptr;
    KJob_ChildEvent_Callback kjob_childevent_callback = nullptr;
    KJob_CustomEvent_Callback kjob_customevent_callback = nullptr;
    KJob_ConnectNotify_Callback kjob_connectnotify_callback = nullptr;
    KJob_DisconnectNotify_Callback kjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KJob {
        using KJob::childEvent;
        using KJob::connectNotify;
        using KJob::customEvent;
        using KJob::disconnectNotify;
        using KJob::doKill;
        using KJob::doResume;
        using KJob::doSuspend;
        using KJob::timerEvent;
    };

    VirtualKJob() : KJob() {};
    VirtualKJob(QObject* parent) : KJob(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kjob_metaobject_callback) {
            QMetaObject* callback_ret = kjob_metaobject_callback(this);
            return callback_ret;
        }
        return KJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kjob_start_callback) {
            kjob_start_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KJob::start called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kjob_dokill_callback) {
            bool callback_ret = kjob_dokill_callback(this);
            return callback_ret;
        }
        return KJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kjob_dosuspend_callback) {
            bool callback_ret = kjob_dosuspend_callback(this);
            return callback_ret;
        }
        return KJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kjob_doresume_callback) {
            bool callback_ret = kjob_doresume_callback(this);
            return callback_ret;
        }
        return KJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kjob_errorstring_callback) {
            const char* callback_ret = kjob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kjob_timerevent_callback(this, cbval1);
            return;
        }
        KJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            kjob_childevent_callback(this, cbval1);
            return;
        }
        KJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kjob_customevent_callback) {
            QEvent* cbval1 = event;
            kjob_customevent_callback(this, cbval1);
            return;
        }
        KJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kjob_connectnotify_callback(this, cbval1);
            return;
        }
        KJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KJob::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KJob_SuperDoKill(KJob* self);
    friend bool KJob_SuperDoSuspend(KJob* self);
    friend bool KJob_SuperDoResume(KJob* self);
    friend void KJob_SuperTimerEvent(KJob* self, QTimerEvent* event);
    friend void KJob_SuperChildEvent(KJob* self, QChildEvent* event);
    friend void KJob_SuperCustomEvent(KJob* self, QEvent* event);
    friend void KJob_SuperConnectNotify(KJob* self, const QMetaMethod* signal);
    friend void KJob_SuperDisconnectNotify(KJob* self, const QMetaMethod* signal);
};

#endif
