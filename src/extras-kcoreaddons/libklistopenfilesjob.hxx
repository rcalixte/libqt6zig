#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKLISTOPENFILESJOB_HXX
#define EXTRAS_KCOREADDONS_LIBKLISTOPENFILESJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KListOpenFilesJob
class VirtualKListOpenFilesJob final : public KListOpenFilesJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KListOpenFilesJob_MetaObject_Callback = QMetaObject* (*)(const KListOpenFilesJob*);
    using KListOpenFilesJob_Metacast_Callback = void* (*)(KListOpenFilesJob*, const char*);
    using KListOpenFilesJob_Metacall_Callback = int (*)(KListOpenFilesJob*, int, int, void**);
    using KListOpenFilesJob_Start_Callback = void (*)(KListOpenFilesJob*);
    using KListOpenFilesJob_DoKill_Callback = bool (*)(KListOpenFilesJob*);
    using KListOpenFilesJob_DoSuspend_Callback = bool (*)(KListOpenFilesJob*);
    using KListOpenFilesJob_DoResume_Callback = bool (*)(KListOpenFilesJob*);
    using KListOpenFilesJob_ErrorString_Callback = const char* (*)(const KListOpenFilesJob*);
    using KListOpenFilesJob_Event_Callback = bool (*)(KListOpenFilesJob*, QEvent*);
    using KListOpenFilesJob_EventFilter_Callback = bool (*)(KListOpenFilesJob*, QObject*, QEvent*);
    using KListOpenFilesJob_TimerEvent_Callback = void (*)(KListOpenFilesJob*, QTimerEvent*);
    using KListOpenFilesJob_ChildEvent_Callback = void (*)(KListOpenFilesJob*, QChildEvent*);
    using KListOpenFilesJob_CustomEvent_Callback = void (*)(KListOpenFilesJob*, QEvent*);
    using KListOpenFilesJob_ConnectNotify_Callback = void (*)(KListOpenFilesJob*, QMetaMethod*);
    using KListOpenFilesJob_DisconnectNotify_Callback = void (*)(KListOpenFilesJob*, QMetaMethod*);
    using KListOpenFilesJob::emitPercent;
    using KListOpenFilesJob::emitResult;
    using KListOpenFilesJob::emitSpeed;
    using KListOpenFilesJob::isFinished;
    using KListOpenFilesJob::isSignalConnected;
    using KListOpenFilesJob::receivers;
    using KListOpenFilesJob::sender;
    using KListOpenFilesJob::senderSignalIndex;
    using KListOpenFilesJob::setCapabilities;
    using KListOpenFilesJob::setError;
    using KListOpenFilesJob::setErrorText;
    using KListOpenFilesJob::setPercent;
    using KListOpenFilesJob::setProcessedAmount;
    using KListOpenFilesJob::setProgressUnit;
    using KListOpenFilesJob::setTotalAmount;
    using KListOpenFilesJob::startElapsedTimer;

    // Instance callback storage
    KListOpenFilesJob_MetaObject_Callback klistopenfilesjob_metaobject_callback = nullptr;
    KListOpenFilesJob_Metacast_Callback klistopenfilesjob_metacast_callback = nullptr;
    KListOpenFilesJob_Metacall_Callback klistopenfilesjob_metacall_callback = nullptr;
    KListOpenFilesJob_Start_Callback klistopenfilesjob_start_callback = nullptr;
    KListOpenFilesJob_DoKill_Callback klistopenfilesjob_dokill_callback = nullptr;
    KListOpenFilesJob_DoSuspend_Callback klistopenfilesjob_dosuspend_callback = nullptr;
    KListOpenFilesJob_DoResume_Callback klistopenfilesjob_doresume_callback = nullptr;
    KListOpenFilesJob_ErrorString_Callback klistopenfilesjob_errorstring_callback = nullptr;
    KListOpenFilesJob_Event_Callback klistopenfilesjob_event_callback = nullptr;
    KListOpenFilesJob_EventFilter_Callback klistopenfilesjob_eventfilter_callback = nullptr;
    KListOpenFilesJob_TimerEvent_Callback klistopenfilesjob_timerevent_callback = nullptr;
    KListOpenFilesJob_ChildEvent_Callback klistopenfilesjob_childevent_callback = nullptr;
    KListOpenFilesJob_CustomEvent_Callback klistopenfilesjob_customevent_callback = nullptr;
    KListOpenFilesJob_ConnectNotify_Callback klistopenfilesjob_connectnotify_callback = nullptr;
    KListOpenFilesJob_DisconnectNotify_Callback klistopenfilesjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KListOpenFilesJob {
        using KListOpenFilesJob::childEvent;
        using KListOpenFilesJob::connectNotify;
        using KListOpenFilesJob::customEvent;
        using KListOpenFilesJob::disconnectNotify;
        using KListOpenFilesJob::doKill;
        using KListOpenFilesJob::doResume;
        using KListOpenFilesJob::doSuspend;
        using KListOpenFilesJob::timerEvent;
    };

    VirtualKListOpenFilesJob(const QString& path) : KListOpenFilesJob(path) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (klistopenfilesjob_metaobject_callback) {
            QMetaObject* callback_ret = klistopenfilesjob_metaobject_callback(this);
            return callback_ret;
        }
        return KListOpenFilesJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (klistopenfilesjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = klistopenfilesjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KListOpenFilesJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klistopenfilesjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = klistopenfilesjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KListOpenFilesJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (klistopenfilesjob_start_callback) {
            klistopenfilesjob_start_callback(this);
            return;
        }
        KListOpenFilesJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (klistopenfilesjob_dokill_callback) {
            bool callback_ret = klistopenfilesjob_dokill_callback(this);
            return callback_ret;
        }
        return KListOpenFilesJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (klistopenfilesjob_dosuspend_callback) {
            bool callback_ret = klistopenfilesjob_dosuspend_callback(this);
            return callback_ret;
        }
        return KListOpenFilesJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (klistopenfilesjob_doresume_callback) {
            bool callback_ret = klistopenfilesjob_doresume_callback(this);
            return callback_ret;
        }
        return KListOpenFilesJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (klistopenfilesjob_errorstring_callback) {
            const char* callback_ret = klistopenfilesjob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KListOpenFilesJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klistopenfilesjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = klistopenfilesjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KListOpenFilesJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klistopenfilesjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = klistopenfilesjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KListOpenFilesJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klistopenfilesjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            klistopenfilesjob_timerevent_callback(this, cbval1);
            return;
        }
        KListOpenFilesJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klistopenfilesjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            klistopenfilesjob_childevent_callback(this, cbval1);
            return;
        }
        KListOpenFilesJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klistopenfilesjob_customevent_callback) {
            QEvent* cbval1 = event;
            klistopenfilesjob_customevent_callback(this, cbval1);
            return;
        }
        KListOpenFilesJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klistopenfilesjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klistopenfilesjob_connectnotify_callback(this, cbval1);
            return;
        }
        KListOpenFilesJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klistopenfilesjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klistopenfilesjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KListOpenFilesJob::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KListOpenFilesJob_SuperDoKill(KListOpenFilesJob* self);
    friend bool KListOpenFilesJob_SuperDoSuspend(KListOpenFilesJob* self);
    friend bool KListOpenFilesJob_SuperDoResume(KListOpenFilesJob* self);
    friend void KListOpenFilesJob_SuperTimerEvent(KListOpenFilesJob* self, QTimerEvent* event);
    friend void KListOpenFilesJob_SuperChildEvent(KListOpenFilesJob* self, QChildEvent* event);
    friend void KListOpenFilesJob_SuperCustomEvent(KListOpenFilesJob* self, QEvent* event);
    friend void KListOpenFilesJob_SuperConnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
    friend void KListOpenFilesJob_SuperDisconnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
};

#endif
