#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKCOMPOSITEJOB_HXX
#define EXTRAS_KCOREADDONS_LIBKCOMPOSITEJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCompositeJob
class VirtualKCompositeJob : public KCompositeJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCompositeJob_MetaObject_Callback = QMetaObject* (*)(const KCompositeJob*);
    using KCompositeJob_Metacast_Callback = void* (*)(KCompositeJob*, const char*);
    using KCompositeJob_Metacall_Callback = int (*)(KCompositeJob*, int, int, void**);
    using KCompositeJob_AddSubjob_Callback = bool (*)(KCompositeJob*, KJob*);
    using KCompositeJob_RemoveSubjob_Callback = bool (*)(KCompositeJob*, KJob*);
    using KCompositeJob_SlotResult_Callback = void (*)(KCompositeJob*, KJob*);
    using KCompositeJob_SlotInfoMessage_Callback = void (*)(KCompositeJob*, KJob*, const char*);
    using KCompositeJob_Start_Callback = void (*)(KCompositeJob*);
    using KCompositeJob_DoKill_Callback = bool (*)(KCompositeJob*);
    using KCompositeJob_DoSuspend_Callback = bool (*)(KCompositeJob*);
    using KCompositeJob_DoResume_Callback = bool (*)(KCompositeJob*);
    using KCompositeJob_ErrorString_Callback = const char* (*)(const KCompositeJob*);
    using KCompositeJob_Event_Callback = bool (*)(KCompositeJob*, QEvent*);
    using KCompositeJob_EventFilter_Callback = bool (*)(KCompositeJob*, QObject*, QEvent*);
    using KCompositeJob_TimerEvent_Callback = void (*)(KCompositeJob*, QTimerEvent*);
    using KCompositeJob_ChildEvent_Callback = void (*)(KCompositeJob*, QChildEvent*);
    using KCompositeJob_CustomEvent_Callback = void (*)(KCompositeJob*, QEvent*);
    using KCompositeJob_ConnectNotify_Callback = void (*)(KCompositeJob*, QMetaMethod*);
    using KCompositeJob_DisconnectNotify_Callback = void (*)(KCompositeJob*, QMetaMethod*);
    using KCompositeJob::clearSubjobs;
    using KCompositeJob::emitPercent;
    using KCompositeJob::emitResult;
    using KCompositeJob::emitSpeed;
    using KCompositeJob::hasSubjobs;
    using KCompositeJob::isFinished;
    using KCompositeJob::isSignalConnected;
    using KCompositeJob::receivers;
    using KCompositeJob::sender;
    using KCompositeJob::senderSignalIndex;
    using KCompositeJob::setCapabilities;
    using KCompositeJob::setError;
    using KCompositeJob::setErrorText;
    using KCompositeJob::setPercent;
    using KCompositeJob::setProcessedAmount;
    using KCompositeJob::setProgressUnit;
    using KCompositeJob::setTotalAmount;
    using KCompositeJob::startElapsedTimer;
    using KCompositeJob::subjobs;

    // Instance callback storage
    KCompositeJob_MetaObject_Callback kcompositejob_metaobject_callback = nullptr;
    KCompositeJob_Metacast_Callback kcompositejob_metacast_callback = nullptr;
    KCompositeJob_Metacall_Callback kcompositejob_metacall_callback = nullptr;
    KCompositeJob_AddSubjob_Callback kcompositejob_addsubjob_callback = nullptr;
    KCompositeJob_RemoveSubjob_Callback kcompositejob_removesubjob_callback = nullptr;
    KCompositeJob_SlotResult_Callback kcompositejob_slotresult_callback = nullptr;
    KCompositeJob_SlotInfoMessage_Callback kcompositejob_slotinfomessage_callback = nullptr;
    KCompositeJob_Start_Callback kcompositejob_start_callback = nullptr;
    KCompositeJob_DoKill_Callback kcompositejob_dokill_callback = nullptr;
    KCompositeJob_DoSuspend_Callback kcompositejob_dosuspend_callback = nullptr;
    KCompositeJob_DoResume_Callback kcompositejob_doresume_callback = nullptr;
    KCompositeJob_ErrorString_Callback kcompositejob_errorstring_callback = nullptr;
    KCompositeJob_Event_Callback kcompositejob_event_callback = nullptr;
    KCompositeJob_EventFilter_Callback kcompositejob_eventfilter_callback = nullptr;
    KCompositeJob_TimerEvent_Callback kcompositejob_timerevent_callback = nullptr;
    KCompositeJob_ChildEvent_Callback kcompositejob_childevent_callback = nullptr;
    KCompositeJob_CustomEvent_Callback kcompositejob_customevent_callback = nullptr;
    KCompositeJob_ConnectNotify_Callback kcompositejob_connectnotify_callback = nullptr;
    KCompositeJob_DisconnectNotify_Callback kcompositejob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KCompositeJob {
        using KCompositeJob::addSubjob;
        using KCompositeJob::childEvent;
        using KCompositeJob::connectNotify;
        using KCompositeJob::customEvent;
        using KCompositeJob::disconnectNotify;
        using KCompositeJob::doKill;
        using KCompositeJob::doResume;
        using KCompositeJob::doSuspend;
        using KCompositeJob::removeSubjob;
        using KCompositeJob::slotInfoMessage;
        using KCompositeJob::slotResult;
        using KCompositeJob::timerEvent;
    };

    VirtualKCompositeJob() : KCompositeJob() {};
    VirtualKCompositeJob(QObject* parent) : KCompositeJob(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcompositejob_metaobject_callback) {
            QMetaObject* callback_ret = kcompositejob_metaobject_callback(this);
            return callback_ret;
        }
        return KCompositeJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcompositejob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcompositejob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCompositeJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcompositejob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcompositejob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCompositeJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kcompositejob_addsubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kcompositejob_addsubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KCompositeJob::addSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kcompositejob_removesubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kcompositejob_removesubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KCompositeJob::removeSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResult(KJob* job) override {
        if (kcompositejob_slotresult_callback) {
            KJob* cbval1 = job;
            kcompositejob_slotresult_callback(this, cbval1);
            return;
        }
        KCompositeJob::slotResult(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kcompositejob_slotinfomessage_callback) {
            KJob* cbval1 = job;
            const auto message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            auto message_str_len = message_b.length();
            const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
            memcpy((void*)message_str, message_b.data(), message_str_len);
            ((char*)message_str)[message_str_len] = '\0';
            const char* cbval2 = message_str;
            kcompositejob_slotinfomessage_callback(this, cbval1, cbval2);
            libqt_free(message_str);
            return;
        }
        KCompositeJob::slotInfoMessage(job, message);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kcompositejob_start_callback) {
            kcompositejob_start_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KCompositeJob::start called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kcompositejob_dokill_callback) {
            bool callback_ret = kcompositejob_dokill_callback(this);
            return callback_ret;
        }
        return KCompositeJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kcompositejob_dosuspend_callback) {
            bool callback_ret = kcompositejob_dosuspend_callback(this);
            return callback_ret;
        }
        return KCompositeJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kcompositejob_doresume_callback) {
            bool callback_ret = kcompositejob_doresume_callback(this);
            return callback_ret;
        }
        return KCompositeJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kcompositejob_errorstring_callback) {
            const char* callback_ret = kcompositejob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KCompositeJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcompositejob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcompositejob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCompositeJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcompositejob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcompositejob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCompositeJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcompositejob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcompositejob_timerevent_callback(this, cbval1);
            return;
        }
        KCompositeJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcompositejob_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcompositejob_childevent_callback(this, cbval1);
            return;
        }
        KCompositeJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcompositejob_customevent_callback) {
            QEvent* cbval1 = event;
            kcompositejob_customevent_callback(this, cbval1);
            return;
        }
        KCompositeJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcompositejob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcompositejob_connectnotify_callback(this, cbval1);
            return;
        }
        KCompositeJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcompositejob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcompositejob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCompositeJob::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KCompositeJob_SuperAddSubjob(KCompositeJob* self, KJob* job);
    friend bool KCompositeJob_SuperRemoveSubjob(KCompositeJob* self, KJob* job);
    friend void KCompositeJob_SuperSlotResult(KCompositeJob* self, KJob* job);
    friend void KCompositeJob_SuperSlotInfoMessage(KCompositeJob* self, KJob* job, const libqt_string message);
    friend bool KCompositeJob_SuperDoKill(KCompositeJob* self);
    friend bool KCompositeJob_SuperDoSuspend(KCompositeJob* self);
    friend bool KCompositeJob_SuperDoResume(KCompositeJob* self);
    friend void KCompositeJob_SuperTimerEvent(KCompositeJob* self, QTimerEvent* event);
    friend void KCompositeJob_SuperChildEvent(KCompositeJob* self, QChildEvent* event);
    friend void KCompositeJob_SuperCustomEvent(KCompositeJob* self, QEvent* event);
    friend void KCompositeJob_SuperConnectNotify(KCompositeJob* self, const QMetaMethod* signal);
    friend void KCompositeJob_SuperDisconnectNotify(KCompositeJob* self, const QMetaMethod* signal);
};

#endif
