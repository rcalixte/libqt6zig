#pragma once
#ifndef EXTRAS_KIO_LIBKEMAILCLIENTLAUNCHERJOB_HXX
#define EXTRAS_KIO_LIBKEMAILCLIENTLAUNCHERJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KEMailClientLauncherJob
class VirtualKEMailClientLauncherJob final : public KEMailClientLauncherJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KEMailClientLauncherJob_MetaObject_Callback = QMetaObject* (*)(const KEMailClientLauncherJob*);
    using KEMailClientLauncherJob_Metacast_Callback = void* (*)(KEMailClientLauncherJob*, const char*);
    using KEMailClientLauncherJob_Metacall_Callback = int (*)(KEMailClientLauncherJob*, int, int, void**);
    using KEMailClientLauncherJob_Start_Callback = void (*)(KEMailClientLauncherJob*);
    using KEMailClientLauncherJob_DoKill_Callback = bool (*)(KEMailClientLauncherJob*);
    using KEMailClientLauncherJob_DoSuspend_Callback = bool (*)(KEMailClientLauncherJob*);
    using KEMailClientLauncherJob_DoResume_Callback = bool (*)(KEMailClientLauncherJob*);
    using KEMailClientLauncherJob_ErrorString_Callback = const char* (*)(const KEMailClientLauncherJob*);
    using KEMailClientLauncherJob_Event_Callback = bool (*)(KEMailClientLauncherJob*, QEvent*);
    using KEMailClientLauncherJob_EventFilter_Callback = bool (*)(KEMailClientLauncherJob*, QObject*, QEvent*);
    using KEMailClientLauncherJob_TimerEvent_Callback = void (*)(KEMailClientLauncherJob*, QTimerEvent*);
    using KEMailClientLauncherJob_ChildEvent_Callback = void (*)(KEMailClientLauncherJob*, QChildEvent*);
    using KEMailClientLauncherJob_CustomEvent_Callback = void (*)(KEMailClientLauncherJob*, QEvent*);
    using KEMailClientLauncherJob_ConnectNotify_Callback = void (*)(KEMailClientLauncherJob*, QMetaMethod*);
    using KEMailClientLauncherJob_DisconnectNotify_Callback = void (*)(KEMailClientLauncherJob*, QMetaMethod*);
    using KEMailClientLauncherJob::emitPercent;
    using KEMailClientLauncherJob::emitResult;
    using KEMailClientLauncherJob::emitSpeed;
    using KEMailClientLauncherJob::isFinished;
    using KEMailClientLauncherJob::isSignalConnected;
    using KEMailClientLauncherJob::receivers;
    using KEMailClientLauncherJob::sender;
    using KEMailClientLauncherJob::senderSignalIndex;
    using KEMailClientLauncherJob::setCapabilities;
    using KEMailClientLauncherJob::setError;
    using KEMailClientLauncherJob::setErrorText;
    using KEMailClientLauncherJob::setPercent;
    using KEMailClientLauncherJob::setProcessedAmount;
    using KEMailClientLauncherJob::setProgressUnit;
    using KEMailClientLauncherJob::setTotalAmount;
    using KEMailClientLauncherJob::startElapsedTimer;

    // Instance callback storage
    KEMailClientLauncherJob_MetaObject_Callback kemailclientlauncherjob_metaobject_callback = nullptr;
    KEMailClientLauncherJob_Metacast_Callback kemailclientlauncherjob_metacast_callback = nullptr;
    KEMailClientLauncherJob_Metacall_Callback kemailclientlauncherjob_metacall_callback = nullptr;
    KEMailClientLauncherJob_Start_Callback kemailclientlauncherjob_start_callback = nullptr;
    KEMailClientLauncherJob_DoKill_Callback kemailclientlauncherjob_dokill_callback = nullptr;
    KEMailClientLauncherJob_DoSuspend_Callback kemailclientlauncherjob_dosuspend_callback = nullptr;
    KEMailClientLauncherJob_DoResume_Callback kemailclientlauncherjob_doresume_callback = nullptr;
    KEMailClientLauncherJob_ErrorString_Callback kemailclientlauncherjob_errorstring_callback = nullptr;
    KEMailClientLauncherJob_Event_Callback kemailclientlauncherjob_event_callback = nullptr;
    KEMailClientLauncherJob_EventFilter_Callback kemailclientlauncherjob_eventfilter_callback = nullptr;
    KEMailClientLauncherJob_TimerEvent_Callback kemailclientlauncherjob_timerevent_callback = nullptr;
    KEMailClientLauncherJob_ChildEvent_Callback kemailclientlauncherjob_childevent_callback = nullptr;
    KEMailClientLauncherJob_CustomEvent_Callback kemailclientlauncherjob_customevent_callback = nullptr;
    KEMailClientLauncherJob_ConnectNotify_Callback kemailclientlauncherjob_connectnotify_callback = nullptr;
    KEMailClientLauncherJob_DisconnectNotify_Callback kemailclientlauncherjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KEMailClientLauncherJob {
        using KEMailClientLauncherJob::childEvent;
        using KEMailClientLauncherJob::connectNotify;
        using KEMailClientLauncherJob::customEvent;
        using KEMailClientLauncherJob::disconnectNotify;
        using KEMailClientLauncherJob::doKill;
        using KEMailClientLauncherJob::doResume;
        using KEMailClientLauncherJob::doSuspend;
        using KEMailClientLauncherJob::timerEvent;
    };

    VirtualKEMailClientLauncherJob() : KEMailClientLauncherJob() {};
    VirtualKEMailClientLauncherJob(QObject* parent) : KEMailClientLauncherJob(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kemailclientlauncherjob_metaobject_callback) {
            QMetaObject* callback_ret = kemailclientlauncherjob_metaobject_callback(this);
            return callback_ret;
        }
        return KEMailClientLauncherJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kemailclientlauncherjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kemailclientlauncherjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KEMailClientLauncherJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kemailclientlauncherjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kemailclientlauncherjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KEMailClientLauncherJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kemailclientlauncherjob_start_callback) {
            kemailclientlauncherjob_start_callback(this);
            return;
        }
        KEMailClientLauncherJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kemailclientlauncherjob_dokill_callback) {
            bool callback_ret = kemailclientlauncherjob_dokill_callback(this);
            return callback_ret;
        }
        return KEMailClientLauncherJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kemailclientlauncherjob_dosuspend_callback) {
            bool callback_ret = kemailclientlauncherjob_dosuspend_callback(this);
            return callback_ret;
        }
        return KEMailClientLauncherJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kemailclientlauncherjob_doresume_callback) {
            bool callback_ret = kemailclientlauncherjob_doresume_callback(this);
            return callback_ret;
        }
        return KEMailClientLauncherJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kemailclientlauncherjob_errorstring_callback) {
            const char* callback_ret = kemailclientlauncherjob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KEMailClientLauncherJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kemailclientlauncherjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kemailclientlauncherjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KEMailClientLauncherJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kemailclientlauncherjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kemailclientlauncherjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KEMailClientLauncherJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kemailclientlauncherjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kemailclientlauncherjob_timerevent_callback(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kemailclientlauncherjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            kemailclientlauncherjob_childevent_callback(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kemailclientlauncherjob_customevent_callback) {
            QEvent* cbval1 = event;
            kemailclientlauncherjob_customevent_callback(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kemailclientlauncherjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kemailclientlauncherjob_connectnotify_callback(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kemailclientlauncherjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kemailclientlauncherjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KEMailClientLauncherJob_SuperDoKill(KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_SuperDoSuspend(KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_SuperDoResume(KEMailClientLauncherJob* self);
    friend void KEMailClientLauncherJob_SuperTimerEvent(KEMailClientLauncherJob* self, QTimerEvent* event);
    friend void KEMailClientLauncherJob_SuperChildEvent(KEMailClientLauncherJob* self, QChildEvent* event);
    friend void KEMailClientLauncherJob_SuperCustomEvent(KEMailClientLauncherJob* self, QEvent* event);
    friend void KEMailClientLauncherJob_SuperConnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
    friend void KEMailClientLauncherJob_SuperDisconnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
};

#endif
