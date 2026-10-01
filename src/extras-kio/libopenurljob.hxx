#pragma once
#ifndef EXTRAS_KIO_LIBOPENURLJOB_HXX
#define EXTRAS_KIO_LIBOPENURLJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::OpenUrlJob
class VirtualKIOOpenUrlJob final : public KIO::OpenUrlJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__OpenUrlJob_MetaObject_Callback = QMetaObject* (*)(const KIO__OpenUrlJob*);
    using KIO__OpenUrlJob_Metacast_Callback = void* (*)(KIO__OpenUrlJob*, const char*);
    using KIO__OpenUrlJob_Metacall_Callback = int (*)(KIO__OpenUrlJob*, int, int, void**);
    using KIO__OpenUrlJob_Start_Callback = void (*)(KIO__OpenUrlJob*);
    using KIO__OpenUrlJob_DoKill_Callback = bool (*)(KIO__OpenUrlJob*);
    using KIO__OpenUrlJob_AddSubjob_Callback = bool (*)(KIO__OpenUrlJob*, KJob*);
    using KIO__OpenUrlJob_RemoveSubjob_Callback = bool (*)(KIO__OpenUrlJob*, KJob*);
    using KIO__OpenUrlJob_SlotInfoMessage_Callback = void (*)(KIO__OpenUrlJob*, KJob*, const char*);
    using KIO__OpenUrlJob_DoSuspend_Callback = bool (*)(KIO__OpenUrlJob*);
    using KIO__OpenUrlJob_DoResume_Callback = bool (*)(KIO__OpenUrlJob*);
    using KIO__OpenUrlJob_ErrorString_Callback = const char* (*)(const KIO__OpenUrlJob*);
    using KIO__OpenUrlJob_Event_Callback = bool (*)(KIO__OpenUrlJob*, QEvent*);
    using KIO__OpenUrlJob_EventFilter_Callback = bool (*)(KIO__OpenUrlJob*, QObject*, QEvent*);
    using KIO__OpenUrlJob_TimerEvent_Callback = void (*)(KIO__OpenUrlJob*, QTimerEvent*);
    using KIO__OpenUrlJob_ChildEvent_Callback = void (*)(KIO__OpenUrlJob*, QChildEvent*);
    using KIO__OpenUrlJob_CustomEvent_Callback = void (*)(KIO__OpenUrlJob*, QEvent*);
    using KIO__OpenUrlJob_ConnectNotify_Callback = void (*)(KIO__OpenUrlJob*, QMetaMethod*);
    using KIO__OpenUrlJob_DisconnectNotify_Callback = void (*)(KIO__OpenUrlJob*, QMetaMethod*);
    using KIO::OpenUrlJob::clearSubjobs;
    using KIO::OpenUrlJob::emitPercent;
    using KIO::OpenUrlJob::emitResult;
    using KIO::OpenUrlJob::emitSpeed;
    using KIO::OpenUrlJob::hasSubjobs;
    using KIO::OpenUrlJob::isFinished;
    using KIO::OpenUrlJob::isSignalConnected;
    using KIO::OpenUrlJob::receivers;
    using KIO::OpenUrlJob::sender;
    using KIO::OpenUrlJob::senderSignalIndex;
    using KIO::OpenUrlJob::setCapabilities;
    using KIO::OpenUrlJob::setError;
    using KIO::OpenUrlJob::setErrorText;
    using KIO::OpenUrlJob::setPercent;
    using KIO::OpenUrlJob::setProcessedAmount;
    using KIO::OpenUrlJob::setProgressUnit;
    using KIO::OpenUrlJob::setTotalAmount;
    using KIO::OpenUrlJob::startElapsedTimer;
    using KIO::OpenUrlJob::subjobs;

    // Instance callback storage
    KIO__OpenUrlJob_MetaObject_Callback kio__openurljob_metaobject_callback = nullptr;
    KIO__OpenUrlJob_Metacast_Callback kio__openurljob_metacast_callback = nullptr;
    KIO__OpenUrlJob_Metacall_Callback kio__openurljob_metacall_callback = nullptr;
    KIO__OpenUrlJob_Start_Callback kio__openurljob_start_callback = nullptr;
    KIO__OpenUrlJob_DoKill_Callback kio__openurljob_dokill_callback = nullptr;
    KIO__OpenUrlJob_AddSubjob_Callback kio__openurljob_addsubjob_callback = nullptr;
    KIO__OpenUrlJob_RemoveSubjob_Callback kio__openurljob_removesubjob_callback = nullptr;
    KIO__OpenUrlJob_SlotInfoMessage_Callback kio__openurljob_slotinfomessage_callback = nullptr;
    KIO__OpenUrlJob_DoSuspend_Callback kio__openurljob_dosuspend_callback = nullptr;
    KIO__OpenUrlJob_DoResume_Callback kio__openurljob_doresume_callback = nullptr;
    KIO__OpenUrlJob_ErrorString_Callback kio__openurljob_errorstring_callback = nullptr;
    KIO__OpenUrlJob_Event_Callback kio__openurljob_event_callback = nullptr;
    KIO__OpenUrlJob_EventFilter_Callback kio__openurljob_eventfilter_callback = nullptr;
    KIO__OpenUrlJob_TimerEvent_Callback kio__openurljob_timerevent_callback = nullptr;
    KIO__OpenUrlJob_ChildEvent_Callback kio__openurljob_childevent_callback = nullptr;
    KIO__OpenUrlJob_CustomEvent_Callback kio__openurljob_customevent_callback = nullptr;
    KIO__OpenUrlJob_ConnectNotify_Callback kio__openurljob_connectnotify_callback = nullptr;
    KIO__OpenUrlJob_DisconnectNotify_Callback kio__openurljob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::OpenUrlJob {
        using KIO::OpenUrlJob::addSubjob;
        using KIO::OpenUrlJob::childEvent;
        using KIO::OpenUrlJob::connectNotify;
        using KIO::OpenUrlJob::customEvent;
        using KIO::OpenUrlJob::disconnectNotify;
        using KIO::OpenUrlJob::doKill;
        using KIO::OpenUrlJob::doResume;
        using KIO::OpenUrlJob::doSuspend;
        using KIO::OpenUrlJob::removeSubjob;
        using KIO::OpenUrlJob::slotInfoMessage;
        using KIO::OpenUrlJob::timerEvent;
    };

    VirtualKIOOpenUrlJob(const QUrl& url) : KIO::OpenUrlJob(url) {};
    VirtualKIOOpenUrlJob(const QUrl& url, const QString& mimeType) : KIO::OpenUrlJob(url, mimeType) {};
    VirtualKIOOpenUrlJob(const QUrl& url, QObject* parent) : KIO::OpenUrlJob(url, parent) {};
    VirtualKIOOpenUrlJob(const QUrl& url, const QString& mimeType, QObject* parent) : KIO::OpenUrlJob(url, mimeType, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__openurljob_metaobject_callback) {
            QMetaObject* callback_ret = kio__openurljob_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__OpenUrlJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__openurljob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__openurljob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__OpenUrlJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__openurljob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__openurljob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__OpenUrlJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__openurljob_start_callback) {
            kio__openurljob_start_callback(this);
            return;
        }
        KIO__OpenUrlJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__openurljob_dokill_callback) {
            bool callback_ret = kio__openurljob_dokill_callback(this);
            return callback_ret;
        }
        return KIO__OpenUrlJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__openurljob_addsubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__openurljob_addsubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__OpenUrlJob::addSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__openurljob_removesubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__openurljob_removesubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__OpenUrlJob::removeSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__openurljob_slotinfomessage_callback) {
            KJob* cbval1 = job;
            const auto message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            auto message_str_len = message_b.length();
            const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
            memcpy((void*)message_str, message_b.data(), message_str_len);
            ((char*)message_str)[message_str_len] = '\0';
            const char* cbval2 = message_str;
            kio__openurljob_slotinfomessage_callback(this, cbval1, cbval2);
            libqt_free(message_str);
            return;
        }
        KIO__OpenUrlJob::slotInfoMessage(job, message);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__openurljob_dosuspend_callback) {
            bool callback_ret = kio__openurljob_dosuspend_callback(this);
            return callback_ret;
        }
        return KIO__OpenUrlJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__openurljob_doresume_callback) {
            bool callback_ret = kio__openurljob_doresume_callback(this);
            return callback_ret;
        }
        return KIO__OpenUrlJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__openurljob_errorstring_callback) {
            const char* callback_ret = kio__openurljob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIO__OpenUrlJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__openurljob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__openurljob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__OpenUrlJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__openurljob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__openurljob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__OpenUrlJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__openurljob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__openurljob_timerevent_callback(this, cbval1);
            return;
        }
        KIO__OpenUrlJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__openurljob_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__openurljob_childevent_callback(this, cbval1);
            return;
        }
        KIO__OpenUrlJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__openurljob_customevent_callback) {
            QEvent* cbval1 = event;
            kio__openurljob_customevent_callback(this, cbval1);
            return;
        }
        KIO__OpenUrlJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__openurljob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__openurljob_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__OpenUrlJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__openurljob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__openurljob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__OpenUrlJob::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KIO__OpenUrlJob_SuperDoKill(KIO::OpenUrlJob* self);
    friend bool KIO__OpenUrlJob_SuperAddSubjob(KIO::OpenUrlJob* self, KJob* job);
    friend bool KIO__OpenUrlJob_SuperRemoveSubjob(KIO::OpenUrlJob* self, KJob* job);
    friend void KIO__OpenUrlJob_SuperSlotInfoMessage(KIO::OpenUrlJob* self, KJob* job, const libqt_string message);
    friend bool KIO__OpenUrlJob_SuperDoSuspend(KIO::OpenUrlJob* self);
    friend bool KIO__OpenUrlJob_SuperDoResume(KIO::OpenUrlJob* self);
    friend void KIO__OpenUrlJob_SuperTimerEvent(KIO::OpenUrlJob* self, QTimerEvent* event);
    friend void KIO__OpenUrlJob_SuperChildEvent(KIO::OpenUrlJob* self, QChildEvent* event);
    friend void KIO__OpenUrlJob_SuperCustomEvent(KIO::OpenUrlJob* self, QEvent* event);
    friend void KIO__OpenUrlJob_SuperConnectNotify(KIO::OpenUrlJob* self, const QMetaMethod* signal);
    friend void KIO__OpenUrlJob_SuperDisconnectNotify(KIO::OpenUrlJob* self, const QMetaMethod* signal);
};

#endif
