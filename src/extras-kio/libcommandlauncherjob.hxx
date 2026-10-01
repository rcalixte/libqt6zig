#pragma once
#ifndef EXTRAS_KIO_LIBCOMMANDLAUNCHERJOB_HXX
#define EXTRAS_KIO_LIBCOMMANDLAUNCHERJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::CommandLauncherJob
class VirtualKIOCommandLauncherJob final : public KIO::CommandLauncherJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__CommandLauncherJob_Start_Callback = void (*)(KIO__CommandLauncherJob*);
    using KIO__CommandLauncherJob_MetaObject_Callback = QMetaObject* (*)(const KIO__CommandLauncherJob*);
    using KIO__CommandLauncherJob_Metacast_Callback = void* (*)(KIO__CommandLauncherJob*, const char*);
    using KIO__CommandLauncherJob_Metacall_Callback = int (*)(KIO__CommandLauncherJob*, int, int, void**);
    using KIO__CommandLauncherJob_DoKill_Callback = bool (*)(KIO__CommandLauncherJob*);
    using KIO__CommandLauncherJob_DoSuspend_Callback = bool (*)(KIO__CommandLauncherJob*);
    using KIO__CommandLauncherJob_DoResume_Callback = bool (*)(KIO__CommandLauncherJob*);
    using KIO__CommandLauncherJob_ErrorString_Callback = const char* (*)(const KIO__CommandLauncherJob*);
    using KIO__CommandLauncherJob_Event_Callback = bool (*)(KIO__CommandLauncherJob*, QEvent*);
    using KIO__CommandLauncherJob_EventFilter_Callback = bool (*)(KIO__CommandLauncherJob*, QObject*, QEvent*);
    using KIO__CommandLauncherJob_TimerEvent_Callback = void (*)(KIO__CommandLauncherJob*, QTimerEvent*);
    using KIO__CommandLauncherJob_ChildEvent_Callback = void (*)(KIO__CommandLauncherJob*, QChildEvent*);
    using KIO__CommandLauncherJob_CustomEvent_Callback = void (*)(KIO__CommandLauncherJob*, QEvent*);
    using KIO__CommandLauncherJob_ConnectNotify_Callback = void (*)(KIO__CommandLauncherJob*, QMetaMethod*);
    using KIO__CommandLauncherJob_DisconnectNotify_Callback = void (*)(KIO__CommandLauncherJob*, QMetaMethod*);
    using KIO::CommandLauncherJob::emitPercent;
    using KIO::CommandLauncherJob::emitResult;
    using KIO::CommandLauncherJob::emitSpeed;
    using KIO::CommandLauncherJob::isFinished;
    using KIO::CommandLauncherJob::isSignalConnected;
    using KIO::CommandLauncherJob::receivers;
    using KIO::CommandLauncherJob::sender;
    using KIO::CommandLauncherJob::senderSignalIndex;
    using KIO::CommandLauncherJob::setCapabilities;
    using KIO::CommandLauncherJob::setError;
    using KIO::CommandLauncherJob::setErrorText;
    using KIO::CommandLauncherJob::setPercent;
    using KIO::CommandLauncherJob::setProcessedAmount;
    using KIO::CommandLauncherJob::setProgressUnit;
    using KIO::CommandLauncherJob::setTotalAmount;
    using KIO::CommandLauncherJob::startElapsedTimer;

    // Instance callback storage
    KIO__CommandLauncherJob_Start_Callback kio__commandlauncherjob_start_callback = nullptr;
    KIO__CommandLauncherJob_MetaObject_Callback kio__commandlauncherjob_metaobject_callback = nullptr;
    KIO__CommandLauncherJob_Metacast_Callback kio__commandlauncherjob_metacast_callback = nullptr;
    KIO__CommandLauncherJob_Metacall_Callback kio__commandlauncherjob_metacall_callback = nullptr;
    KIO__CommandLauncherJob_DoKill_Callback kio__commandlauncherjob_dokill_callback = nullptr;
    KIO__CommandLauncherJob_DoSuspend_Callback kio__commandlauncherjob_dosuspend_callback = nullptr;
    KIO__CommandLauncherJob_DoResume_Callback kio__commandlauncherjob_doresume_callback = nullptr;
    KIO__CommandLauncherJob_ErrorString_Callback kio__commandlauncherjob_errorstring_callback = nullptr;
    KIO__CommandLauncherJob_Event_Callback kio__commandlauncherjob_event_callback = nullptr;
    KIO__CommandLauncherJob_EventFilter_Callback kio__commandlauncherjob_eventfilter_callback = nullptr;
    KIO__CommandLauncherJob_TimerEvent_Callback kio__commandlauncherjob_timerevent_callback = nullptr;
    KIO__CommandLauncherJob_ChildEvent_Callback kio__commandlauncherjob_childevent_callback = nullptr;
    KIO__CommandLauncherJob_CustomEvent_Callback kio__commandlauncherjob_customevent_callback = nullptr;
    KIO__CommandLauncherJob_ConnectNotify_Callback kio__commandlauncherjob_connectnotify_callback = nullptr;
    KIO__CommandLauncherJob_DisconnectNotify_Callback kio__commandlauncherjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::CommandLauncherJob {
        using KIO::CommandLauncherJob::childEvent;
        using KIO::CommandLauncherJob::connectNotify;
        using KIO::CommandLauncherJob::customEvent;
        using KIO::CommandLauncherJob::disconnectNotify;
        using KIO::CommandLauncherJob::doKill;
        using KIO::CommandLauncherJob::doResume;
        using KIO::CommandLauncherJob::doSuspend;
        using KIO::CommandLauncherJob::timerEvent;
    };

    VirtualKIOCommandLauncherJob(const QString& command) : KIO::CommandLauncherJob(command) {};
    VirtualKIOCommandLauncherJob(const QString& executable, const QList<QString>& args) : KIO::CommandLauncherJob(executable, args) {};
    VirtualKIOCommandLauncherJob(const QString& command, QObject* parent) : KIO::CommandLauncherJob(command, parent) {};
    VirtualKIOCommandLauncherJob(const QString& executable, const QList<QString>& args, QObject* parent) : KIO::CommandLauncherJob(executable, args, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__commandlauncherjob_start_callback) {
            kio__commandlauncherjob_start_callback(this);
            return;
        }
        KIO__CommandLauncherJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__commandlauncherjob_metaobject_callback) {
            QMetaObject* callback_ret = kio__commandlauncherjob_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__CommandLauncherJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__commandlauncherjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__commandlauncherjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__CommandLauncherJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__commandlauncherjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__commandlauncherjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__CommandLauncherJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__commandlauncherjob_dokill_callback) {
            bool callback_ret = kio__commandlauncherjob_dokill_callback(this);
            return callback_ret;
        }
        return KIO__CommandLauncherJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__commandlauncherjob_dosuspend_callback) {
            bool callback_ret = kio__commandlauncherjob_dosuspend_callback(this);
            return callback_ret;
        }
        return KIO__CommandLauncherJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__commandlauncherjob_doresume_callback) {
            bool callback_ret = kio__commandlauncherjob_doresume_callback(this);
            return callback_ret;
        }
        return KIO__CommandLauncherJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__commandlauncherjob_errorstring_callback) {
            const char* callback_ret = kio__commandlauncherjob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIO__CommandLauncherJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__commandlauncherjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__commandlauncherjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__CommandLauncherJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__commandlauncherjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__commandlauncherjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__CommandLauncherJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__commandlauncherjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__commandlauncherjob_timerevent_callback(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__commandlauncherjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__commandlauncherjob_childevent_callback(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__commandlauncherjob_customevent_callback) {
            QEvent* cbval1 = event;
            kio__commandlauncherjob_customevent_callback(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__commandlauncherjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__commandlauncherjob_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__commandlauncherjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__commandlauncherjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KIO__CommandLauncherJob_SuperDoKill(KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_SuperDoSuspend(KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_SuperDoResume(KIO::CommandLauncherJob* self);
    friend void KIO__CommandLauncherJob_SuperTimerEvent(KIO::CommandLauncherJob* self, QTimerEvent* event);
    friend void KIO__CommandLauncherJob_SuperChildEvent(KIO::CommandLauncherJob* self, QChildEvent* event);
    friend void KIO__CommandLauncherJob_SuperCustomEvent(KIO::CommandLauncherJob* self, QEvent* event);
    friend void KIO__CommandLauncherJob_SuperConnectNotify(KIO::CommandLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__CommandLauncherJob_SuperDisconnectNotify(KIO::CommandLauncherJob* self, const QMetaMethod* signal);
};

#endif
