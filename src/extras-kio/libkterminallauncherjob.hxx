#pragma once
#ifndef EXTRAS_KIO_LIBKTERMINALLAUNCHERJOB_HXX
#define EXTRAS_KIO_LIBKTERMINALLAUNCHERJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTerminalLauncherJob
class VirtualKTerminalLauncherJob final : public KTerminalLauncherJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTerminalLauncherJob_MetaObject_Callback = QMetaObject* (*)(const KTerminalLauncherJob*);
    using KTerminalLauncherJob_Metacast_Callback = void* (*)(KTerminalLauncherJob*, const char*);
    using KTerminalLauncherJob_Metacall_Callback = int (*)(KTerminalLauncherJob*, int, int, void**);
    using KTerminalLauncherJob_Start_Callback = void (*)(KTerminalLauncherJob*);
    using KTerminalLauncherJob_DoKill_Callback = bool (*)(KTerminalLauncherJob*);
    using KTerminalLauncherJob_DoSuspend_Callback = bool (*)(KTerminalLauncherJob*);
    using KTerminalLauncherJob_DoResume_Callback = bool (*)(KTerminalLauncherJob*);
    using KTerminalLauncherJob_ErrorString_Callback = const char* (*)(const KTerminalLauncherJob*);
    using KTerminalLauncherJob_Event_Callback = bool (*)(KTerminalLauncherJob*, QEvent*);
    using KTerminalLauncherJob_EventFilter_Callback = bool (*)(KTerminalLauncherJob*, QObject*, QEvent*);
    using KTerminalLauncherJob_TimerEvent_Callback = void (*)(KTerminalLauncherJob*, QTimerEvent*);
    using KTerminalLauncherJob_ChildEvent_Callback = void (*)(KTerminalLauncherJob*, QChildEvent*);
    using KTerminalLauncherJob_CustomEvent_Callback = void (*)(KTerminalLauncherJob*, QEvent*);
    using KTerminalLauncherJob_ConnectNotify_Callback = void (*)(KTerminalLauncherJob*, QMetaMethod*);
    using KTerminalLauncherJob_DisconnectNotify_Callback = void (*)(KTerminalLauncherJob*, QMetaMethod*);
    using KTerminalLauncherJob::emitPercent;
    using KTerminalLauncherJob::emitResult;
    using KTerminalLauncherJob::emitSpeed;
    using KTerminalLauncherJob::isFinished;
    using KTerminalLauncherJob::isSignalConnected;
    using KTerminalLauncherJob::receivers;
    using KTerminalLauncherJob::sender;
    using KTerminalLauncherJob::senderSignalIndex;
    using KTerminalLauncherJob::setCapabilities;
    using KTerminalLauncherJob::setError;
    using KTerminalLauncherJob::setErrorText;
    using KTerminalLauncherJob::setPercent;
    using KTerminalLauncherJob::setProcessedAmount;
    using KTerminalLauncherJob::setProgressUnit;
    using KTerminalLauncherJob::setTotalAmount;
    using KTerminalLauncherJob::startElapsedTimer;

    // Instance callback storage
    KTerminalLauncherJob_MetaObject_Callback kterminallauncherjob_metaobject_callback = nullptr;
    KTerminalLauncherJob_Metacast_Callback kterminallauncherjob_metacast_callback = nullptr;
    KTerminalLauncherJob_Metacall_Callback kterminallauncherjob_metacall_callback = nullptr;
    KTerminalLauncherJob_Start_Callback kterminallauncherjob_start_callback = nullptr;
    KTerminalLauncherJob_DoKill_Callback kterminallauncherjob_dokill_callback = nullptr;
    KTerminalLauncherJob_DoSuspend_Callback kterminallauncherjob_dosuspend_callback = nullptr;
    KTerminalLauncherJob_DoResume_Callback kterminallauncherjob_doresume_callback = nullptr;
    KTerminalLauncherJob_ErrorString_Callback kterminallauncherjob_errorstring_callback = nullptr;
    KTerminalLauncherJob_Event_Callback kterminallauncherjob_event_callback = nullptr;
    KTerminalLauncherJob_EventFilter_Callback kterminallauncherjob_eventfilter_callback = nullptr;
    KTerminalLauncherJob_TimerEvent_Callback kterminallauncherjob_timerevent_callback = nullptr;
    KTerminalLauncherJob_ChildEvent_Callback kterminallauncherjob_childevent_callback = nullptr;
    KTerminalLauncherJob_CustomEvent_Callback kterminallauncherjob_customevent_callback = nullptr;
    KTerminalLauncherJob_ConnectNotify_Callback kterminallauncherjob_connectnotify_callback = nullptr;
    KTerminalLauncherJob_DisconnectNotify_Callback kterminallauncherjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KTerminalLauncherJob {
        using KTerminalLauncherJob::childEvent;
        using KTerminalLauncherJob::connectNotify;
        using KTerminalLauncherJob::customEvent;
        using KTerminalLauncherJob::disconnectNotify;
        using KTerminalLauncherJob::doKill;
        using KTerminalLauncherJob::doResume;
        using KTerminalLauncherJob::doSuspend;
        using KTerminalLauncherJob::timerEvent;
    };

    VirtualKTerminalLauncherJob(const QString& command) : KTerminalLauncherJob(command) {};
    VirtualKTerminalLauncherJob(const QString& command, QObject* parent) : KTerminalLauncherJob(command, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kterminallauncherjob_metaobject_callback) {
            QMetaObject* callback_ret = kterminallauncherjob_metaobject_callback(this);
            return callback_ret;
        }
        return KTerminalLauncherJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kterminallauncherjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kterminallauncherjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTerminalLauncherJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kterminallauncherjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kterminallauncherjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTerminalLauncherJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kterminallauncherjob_start_callback) {
            kterminallauncherjob_start_callback(this);
            return;
        }
        KTerminalLauncherJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kterminallauncherjob_dokill_callback) {
            bool callback_ret = kterminallauncherjob_dokill_callback(this);
            return callback_ret;
        }
        return KTerminalLauncherJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kterminallauncherjob_dosuspend_callback) {
            bool callback_ret = kterminallauncherjob_dosuspend_callback(this);
            return callback_ret;
        }
        return KTerminalLauncherJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kterminallauncherjob_doresume_callback) {
            bool callback_ret = kterminallauncherjob_doresume_callback(this);
            return callback_ret;
        }
        return KTerminalLauncherJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kterminallauncherjob_errorstring_callback) {
            const char* callback_ret = kterminallauncherjob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KTerminalLauncherJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kterminallauncherjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kterminallauncherjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTerminalLauncherJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kterminallauncherjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kterminallauncherjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTerminalLauncherJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kterminallauncherjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kterminallauncherjob_timerevent_callback(this, cbval1);
            return;
        }
        KTerminalLauncherJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kterminallauncherjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            kterminallauncherjob_childevent_callback(this, cbval1);
            return;
        }
        KTerminalLauncherJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kterminallauncherjob_customevent_callback) {
            QEvent* cbval1 = event;
            kterminallauncherjob_customevent_callback(this, cbval1);
            return;
        }
        KTerminalLauncherJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kterminallauncherjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kterminallauncherjob_connectnotify_callback(this, cbval1);
            return;
        }
        KTerminalLauncherJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kterminallauncherjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kterminallauncherjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTerminalLauncherJob::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KTerminalLauncherJob_SuperDoKill(KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_SuperDoSuspend(KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_SuperDoResume(KTerminalLauncherJob* self);
    friend void KTerminalLauncherJob_SuperTimerEvent(KTerminalLauncherJob* self, QTimerEvent* event);
    friend void KTerminalLauncherJob_SuperChildEvent(KTerminalLauncherJob* self, QChildEvent* event);
    friend void KTerminalLauncherJob_SuperCustomEvent(KTerminalLauncherJob* self, QEvent* event);
    friend void KTerminalLauncherJob_SuperConnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
    friend void KTerminalLauncherJob_SuperDisconnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
};

#endif
