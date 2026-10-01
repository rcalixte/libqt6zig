#pragma once
#ifndef EXTRAS_KIO_LIBNAMEFINDERJOB_HXX
#define EXTRAS_KIO_LIBNAMEFINDERJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::NameFinderJob
class VirtualKIONameFinderJob final : public KIO::NameFinderJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__NameFinderJob_MetaObject_Callback = QMetaObject* (*)(const KIO__NameFinderJob*);
    using KIO__NameFinderJob_Metacast_Callback = void* (*)(KIO__NameFinderJob*, const char*);
    using KIO__NameFinderJob_Metacall_Callback = int (*)(KIO__NameFinderJob*, int, int, void**);
    using KIO__NameFinderJob_Start_Callback = void (*)(KIO__NameFinderJob*);
    using KIO__NameFinderJob_AddSubjob_Callback = bool (*)(KIO__NameFinderJob*, KJob*);
    using KIO__NameFinderJob_RemoveSubjob_Callback = bool (*)(KIO__NameFinderJob*, KJob*);
    using KIO__NameFinderJob_SlotResult_Callback = void (*)(KIO__NameFinderJob*, KJob*);
    using KIO__NameFinderJob_SlotInfoMessage_Callback = void (*)(KIO__NameFinderJob*, KJob*, const char*);
    using KIO__NameFinderJob_DoKill_Callback = bool (*)(KIO__NameFinderJob*);
    using KIO__NameFinderJob_DoSuspend_Callback = bool (*)(KIO__NameFinderJob*);
    using KIO__NameFinderJob_DoResume_Callback = bool (*)(KIO__NameFinderJob*);
    using KIO__NameFinderJob_ErrorString_Callback = const char* (*)(const KIO__NameFinderJob*);
    using KIO__NameFinderJob_Event_Callback = bool (*)(KIO__NameFinderJob*, QEvent*);
    using KIO__NameFinderJob_EventFilter_Callback = bool (*)(KIO__NameFinderJob*, QObject*, QEvent*);
    using KIO__NameFinderJob_TimerEvent_Callback = void (*)(KIO__NameFinderJob*, QTimerEvent*);
    using KIO__NameFinderJob_ChildEvent_Callback = void (*)(KIO__NameFinderJob*, QChildEvent*);
    using KIO__NameFinderJob_CustomEvent_Callback = void (*)(KIO__NameFinderJob*, QEvent*);
    using KIO__NameFinderJob_ConnectNotify_Callback = void (*)(KIO__NameFinderJob*, QMetaMethod*);
    using KIO__NameFinderJob_DisconnectNotify_Callback = void (*)(KIO__NameFinderJob*, QMetaMethod*);
    using KIO::NameFinderJob::clearSubjobs;
    using KIO::NameFinderJob::emitPercent;
    using KIO::NameFinderJob::emitResult;
    using KIO::NameFinderJob::emitSpeed;
    using KIO::NameFinderJob::hasSubjobs;
    using KIO::NameFinderJob::isFinished;
    using KIO::NameFinderJob::isSignalConnected;
    using KIO::NameFinderJob::receivers;
    using KIO::NameFinderJob::sender;
    using KIO::NameFinderJob::senderSignalIndex;
    using KIO::NameFinderJob::setCapabilities;
    using KIO::NameFinderJob::setError;
    using KIO::NameFinderJob::setErrorText;
    using KIO::NameFinderJob::setPercent;
    using KIO::NameFinderJob::setProcessedAmount;
    using KIO::NameFinderJob::setProgressUnit;
    using KIO::NameFinderJob::setTotalAmount;
    using KIO::NameFinderJob::startElapsedTimer;
    using KIO::NameFinderJob::subjobs;

    // Instance callback storage
    KIO__NameFinderJob_MetaObject_Callback kio__namefinderjob_metaobject_callback = nullptr;
    KIO__NameFinderJob_Metacast_Callback kio__namefinderjob_metacast_callback = nullptr;
    KIO__NameFinderJob_Metacall_Callback kio__namefinderjob_metacall_callback = nullptr;
    KIO__NameFinderJob_Start_Callback kio__namefinderjob_start_callback = nullptr;
    KIO__NameFinderJob_AddSubjob_Callback kio__namefinderjob_addsubjob_callback = nullptr;
    KIO__NameFinderJob_RemoveSubjob_Callback kio__namefinderjob_removesubjob_callback = nullptr;
    KIO__NameFinderJob_SlotResult_Callback kio__namefinderjob_slotresult_callback = nullptr;
    KIO__NameFinderJob_SlotInfoMessage_Callback kio__namefinderjob_slotinfomessage_callback = nullptr;
    KIO__NameFinderJob_DoKill_Callback kio__namefinderjob_dokill_callback = nullptr;
    KIO__NameFinderJob_DoSuspend_Callback kio__namefinderjob_dosuspend_callback = nullptr;
    KIO__NameFinderJob_DoResume_Callback kio__namefinderjob_doresume_callback = nullptr;
    KIO__NameFinderJob_ErrorString_Callback kio__namefinderjob_errorstring_callback = nullptr;
    KIO__NameFinderJob_Event_Callback kio__namefinderjob_event_callback = nullptr;
    KIO__NameFinderJob_EventFilter_Callback kio__namefinderjob_eventfilter_callback = nullptr;
    KIO__NameFinderJob_TimerEvent_Callback kio__namefinderjob_timerevent_callback = nullptr;
    KIO__NameFinderJob_ChildEvent_Callback kio__namefinderjob_childevent_callback = nullptr;
    KIO__NameFinderJob_CustomEvent_Callback kio__namefinderjob_customevent_callback = nullptr;
    KIO__NameFinderJob_ConnectNotify_Callback kio__namefinderjob_connectnotify_callback = nullptr;
    KIO__NameFinderJob_DisconnectNotify_Callback kio__namefinderjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::NameFinderJob {
        using KIO::NameFinderJob::addSubjob;
        using KIO::NameFinderJob::childEvent;
        using KIO::NameFinderJob::connectNotify;
        using KIO::NameFinderJob::customEvent;
        using KIO::NameFinderJob::disconnectNotify;
        using KIO::NameFinderJob::doKill;
        using KIO::NameFinderJob::doResume;
        using KIO::NameFinderJob::doSuspend;
        using KIO::NameFinderJob::removeSubjob;
        using KIO::NameFinderJob::slotInfoMessage;
        using KIO::NameFinderJob::slotResult;
        using KIO::NameFinderJob::timerEvent;
    };

    VirtualKIONameFinderJob(const QUrl& baseUrl, const QString& name, QObject* parent) : KIO::NameFinderJob(baseUrl, name, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__namefinderjob_metaobject_callback) {
            QMetaObject* callback_ret = kio__namefinderjob_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__NameFinderJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__namefinderjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__namefinderjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__NameFinderJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__namefinderjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__namefinderjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__NameFinderJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__namefinderjob_start_callback) {
            kio__namefinderjob_start_callback(this);
            return;
        }
        KIO__NameFinderJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__namefinderjob_addsubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__namefinderjob_addsubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__NameFinderJob::addSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__namefinderjob_removesubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__namefinderjob_removesubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__NameFinderJob::removeSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResult(KJob* job) override {
        if (kio__namefinderjob_slotresult_callback) {
            KJob* cbval1 = job;
            kio__namefinderjob_slotresult_callback(this, cbval1);
            return;
        }
        KIO__NameFinderJob::slotResult(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__namefinderjob_slotinfomessage_callback) {
            KJob* cbval1 = job;
            const auto message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            auto message_str_len = message_b.length();
            const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
            memcpy((void*)message_str, message_b.data(), message_str_len);
            ((char*)message_str)[message_str_len] = '\0';
            const char* cbval2 = message_str;
            kio__namefinderjob_slotinfomessage_callback(this, cbval1, cbval2);
            libqt_free(message_str);
            return;
        }
        KIO__NameFinderJob::slotInfoMessage(job, message);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__namefinderjob_dokill_callback) {
            bool callback_ret = kio__namefinderjob_dokill_callback(this);
            return callback_ret;
        }
        return KIO__NameFinderJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__namefinderjob_dosuspend_callback) {
            bool callback_ret = kio__namefinderjob_dosuspend_callback(this);
            return callback_ret;
        }
        return KIO__NameFinderJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__namefinderjob_doresume_callback) {
            bool callback_ret = kio__namefinderjob_doresume_callback(this);
            return callback_ret;
        }
        return KIO__NameFinderJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__namefinderjob_errorstring_callback) {
            const char* callback_ret = kio__namefinderjob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIO__NameFinderJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__namefinderjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__namefinderjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__NameFinderJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__namefinderjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__namefinderjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__NameFinderJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__namefinderjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__namefinderjob_timerevent_callback(this, cbval1);
            return;
        }
        KIO__NameFinderJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__namefinderjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__namefinderjob_childevent_callback(this, cbval1);
            return;
        }
        KIO__NameFinderJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__namefinderjob_customevent_callback) {
            QEvent* cbval1 = event;
            kio__namefinderjob_customevent_callback(this, cbval1);
            return;
        }
        KIO__NameFinderJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__namefinderjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__namefinderjob_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__NameFinderJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__namefinderjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__namefinderjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__NameFinderJob::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KIO__NameFinderJob_SuperAddSubjob(KIO::NameFinderJob* self, KJob* job);
    friend bool KIO__NameFinderJob_SuperRemoveSubjob(KIO::NameFinderJob* self, KJob* job);
    friend void KIO__NameFinderJob_SuperSlotResult(KIO::NameFinderJob* self, KJob* job);
    friend void KIO__NameFinderJob_SuperSlotInfoMessage(KIO::NameFinderJob* self, KJob* job, const libqt_string message);
    friend bool KIO__NameFinderJob_SuperDoKill(KIO::NameFinderJob* self);
    friend bool KIO__NameFinderJob_SuperDoSuspend(KIO::NameFinderJob* self);
    friend bool KIO__NameFinderJob_SuperDoResume(KIO::NameFinderJob* self);
    friend void KIO__NameFinderJob_SuperTimerEvent(KIO::NameFinderJob* self, QTimerEvent* event);
    friend void KIO__NameFinderJob_SuperChildEvent(KIO::NameFinderJob* self, QChildEvent* event);
    friend void KIO__NameFinderJob_SuperCustomEvent(KIO::NameFinderJob* self, QEvent* event);
    friend void KIO__NameFinderJob_SuperConnectNotify(KIO::NameFinderJob* self, const QMetaMethod* signal);
    friend void KIO__NameFinderJob_SuperDisconnectNotify(KIO::NameFinderJob* self, const QMetaMethod* signal);
};

#endif
