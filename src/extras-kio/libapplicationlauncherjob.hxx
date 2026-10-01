#pragma once
#ifndef EXTRAS_KIO_LIBAPPLICATIONLAUNCHERJOB_HXX
#define EXTRAS_KIO_LIBAPPLICATIONLAUNCHERJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::ApplicationLauncherJob
class VirtualKIOApplicationLauncherJob final : public KIO::ApplicationLauncherJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__ApplicationLauncherJob_Start_Callback = void (*)(KIO__ApplicationLauncherJob*);
    using KIO__ApplicationLauncherJob_MetaObject_Callback = QMetaObject* (*)(const KIO__ApplicationLauncherJob*);
    using KIO__ApplicationLauncherJob_Metacast_Callback = void* (*)(KIO__ApplicationLauncherJob*, const char*);
    using KIO__ApplicationLauncherJob_Metacall_Callback = int (*)(KIO__ApplicationLauncherJob*, int, int, void**);
    using KIO__ApplicationLauncherJob_DoKill_Callback = bool (*)(KIO__ApplicationLauncherJob*);
    using KIO__ApplicationLauncherJob_DoSuspend_Callback = bool (*)(KIO__ApplicationLauncherJob*);
    using KIO__ApplicationLauncherJob_DoResume_Callback = bool (*)(KIO__ApplicationLauncherJob*);
    using KIO__ApplicationLauncherJob_ErrorString_Callback = const char* (*)(const KIO__ApplicationLauncherJob*);
    using KIO__ApplicationLauncherJob_Event_Callback = bool (*)(KIO__ApplicationLauncherJob*, QEvent*);
    using KIO__ApplicationLauncherJob_EventFilter_Callback = bool (*)(KIO__ApplicationLauncherJob*, QObject*, QEvent*);
    using KIO__ApplicationLauncherJob_TimerEvent_Callback = void (*)(KIO__ApplicationLauncherJob*, QTimerEvent*);
    using KIO__ApplicationLauncherJob_ChildEvent_Callback = void (*)(KIO__ApplicationLauncherJob*, QChildEvent*);
    using KIO__ApplicationLauncherJob_CustomEvent_Callback = void (*)(KIO__ApplicationLauncherJob*, QEvent*);
    using KIO__ApplicationLauncherJob_ConnectNotify_Callback = void (*)(KIO__ApplicationLauncherJob*, QMetaMethod*);
    using KIO__ApplicationLauncherJob_DisconnectNotify_Callback = void (*)(KIO__ApplicationLauncherJob*, QMetaMethod*);
    using KIO::ApplicationLauncherJob::emitPercent;
    using KIO::ApplicationLauncherJob::emitResult;
    using KIO::ApplicationLauncherJob::emitSpeed;
    using KIO::ApplicationLauncherJob::isFinished;
    using KIO::ApplicationLauncherJob::isSignalConnected;
    using KIO::ApplicationLauncherJob::receivers;
    using KIO::ApplicationLauncherJob::sender;
    using KIO::ApplicationLauncherJob::senderSignalIndex;
    using KIO::ApplicationLauncherJob::setCapabilities;
    using KIO::ApplicationLauncherJob::setError;
    using KIO::ApplicationLauncherJob::setErrorText;
    using KIO::ApplicationLauncherJob::setPercent;
    using KIO::ApplicationLauncherJob::setProcessedAmount;
    using KIO::ApplicationLauncherJob::setProgressUnit;
    using KIO::ApplicationLauncherJob::setTotalAmount;
    using KIO::ApplicationLauncherJob::startElapsedTimer;

    // Instance callback storage
    KIO__ApplicationLauncherJob_Start_Callback kio__applicationlauncherjob_start_callback = nullptr;
    KIO__ApplicationLauncherJob_MetaObject_Callback kio__applicationlauncherjob_metaobject_callback = nullptr;
    KIO__ApplicationLauncherJob_Metacast_Callback kio__applicationlauncherjob_metacast_callback = nullptr;
    KIO__ApplicationLauncherJob_Metacall_Callback kio__applicationlauncherjob_metacall_callback = nullptr;
    KIO__ApplicationLauncherJob_DoKill_Callback kio__applicationlauncherjob_dokill_callback = nullptr;
    KIO__ApplicationLauncherJob_DoSuspend_Callback kio__applicationlauncherjob_dosuspend_callback = nullptr;
    KIO__ApplicationLauncherJob_DoResume_Callback kio__applicationlauncherjob_doresume_callback = nullptr;
    KIO__ApplicationLauncherJob_ErrorString_Callback kio__applicationlauncherjob_errorstring_callback = nullptr;
    KIO__ApplicationLauncherJob_Event_Callback kio__applicationlauncherjob_event_callback = nullptr;
    KIO__ApplicationLauncherJob_EventFilter_Callback kio__applicationlauncherjob_eventfilter_callback = nullptr;
    KIO__ApplicationLauncherJob_TimerEvent_Callback kio__applicationlauncherjob_timerevent_callback = nullptr;
    KIO__ApplicationLauncherJob_ChildEvent_Callback kio__applicationlauncherjob_childevent_callback = nullptr;
    KIO__ApplicationLauncherJob_CustomEvent_Callback kio__applicationlauncherjob_customevent_callback = nullptr;
    KIO__ApplicationLauncherJob_ConnectNotify_Callback kio__applicationlauncherjob_connectnotify_callback = nullptr;
    KIO__ApplicationLauncherJob_DisconnectNotify_Callback kio__applicationlauncherjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::ApplicationLauncherJob {
        using KIO::ApplicationLauncherJob::childEvent;
        using KIO::ApplicationLauncherJob::connectNotify;
        using KIO::ApplicationLauncherJob::customEvent;
        using KIO::ApplicationLauncherJob::disconnectNotify;
        using KIO::ApplicationLauncherJob::doKill;
        using KIO::ApplicationLauncherJob::doResume;
        using KIO::ApplicationLauncherJob::doSuspend;
        using KIO::ApplicationLauncherJob::timerEvent;
    };

    VirtualKIOApplicationLauncherJob(const KServiceAction& serviceAction) : KIO::ApplicationLauncherJob(serviceAction) {};
    VirtualKIOApplicationLauncherJob(const KDesktopFileAction& desktopFileAction) : KIO::ApplicationLauncherJob(desktopFileAction) {};
    VirtualKIOApplicationLauncherJob() : KIO::ApplicationLauncherJob() {};
    VirtualKIOApplicationLauncherJob(const KServiceAction& serviceAction, QObject* parent) : KIO::ApplicationLauncherJob(serviceAction, parent) {};
    VirtualKIOApplicationLauncherJob(const KDesktopFileAction& desktopFileAction, QObject* parent) : KIO::ApplicationLauncherJob(desktopFileAction, parent) {};
    VirtualKIOApplicationLauncherJob(QObject* parent) : KIO::ApplicationLauncherJob(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__applicationlauncherjob_start_callback) {
            kio__applicationlauncherjob_start_callback(this);
            return;
        }
        KIO__ApplicationLauncherJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__applicationlauncherjob_metaobject_callback) {
            QMetaObject* callback_ret = kio__applicationlauncherjob_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__ApplicationLauncherJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__applicationlauncherjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__applicationlauncherjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__ApplicationLauncherJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__applicationlauncherjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__applicationlauncherjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__ApplicationLauncherJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__applicationlauncherjob_dokill_callback) {
            bool callback_ret = kio__applicationlauncherjob_dokill_callback(this);
            return callback_ret;
        }
        return KIO__ApplicationLauncherJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__applicationlauncherjob_dosuspend_callback) {
            bool callback_ret = kio__applicationlauncherjob_dosuspend_callback(this);
            return callback_ret;
        }
        return KIO__ApplicationLauncherJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__applicationlauncherjob_doresume_callback) {
            bool callback_ret = kio__applicationlauncherjob_doresume_callback(this);
            return callback_ret;
        }
        return KIO__ApplicationLauncherJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__applicationlauncherjob_errorstring_callback) {
            const char* callback_ret = kio__applicationlauncherjob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIO__ApplicationLauncherJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__applicationlauncherjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__applicationlauncherjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__ApplicationLauncherJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__applicationlauncherjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__applicationlauncherjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__ApplicationLauncherJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__applicationlauncherjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__applicationlauncherjob_timerevent_callback(this, cbval1);
            return;
        }
        KIO__ApplicationLauncherJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__applicationlauncherjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__applicationlauncherjob_childevent_callback(this, cbval1);
            return;
        }
        KIO__ApplicationLauncherJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__applicationlauncherjob_customevent_callback) {
            QEvent* cbval1 = event;
            kio__applicationlauncherjob_customevent_callback(this, cbval1);
            return;
        }
        KIO__ApplicationLauncherJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__applicationlauncherjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__applicationlauncherjob_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__ApplicationLauncherJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__applicationlauncherjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__applicationlauncherjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__ApplicationLauncherJob::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KIO__ApplicationLauncherJob_SuperDoKill(KIO::ApplicationLauncherJob* self);
    friend bool KIO__ApplicationLauncherJob_SuperDoSuspend(KIO::ApplicationLauncherJob* self);
    friend bool KIO__ApplicationLauncherJob_SuperDoResume(KIO::ApplicationLauncherJob* self);
    friend void KIO__ApplicationLauncherJob_SuperTimerEvent(KIO::ApplicationLauncherJob* self, QTimerEvent* event);
    friend void KIO__ApplicationLauncherJob_SuperChildEvent(KIO::ApplicationLauncherJob* self, QChildEvent* event);
    friend void KIO__ApplicationLauncherJob_SuperCustomEvent(KIO::ApplicationLauncherJob* self, QEvent* event);
    friend void KIO__ApplicationLauncherJob_SuperConnectNotify(KIO::ApplicationLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__ApplicationLauncherJob_SuperDisconnectNotify(KIO::ApplicationLauncherJob* self, const QMetaMethod* signal);
};

#endif
