#pragma once
#ifndef EXTRAS_KIO_LIBMIMETYPEFINDERJOB_HXX
#define EXTRAS_KIO_LIBMIMETYPEFINDERJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::MimeTypeFinderJob
class VirtualKIOMimeTypeFinderJob final : public KIO::MimeTypeFinderJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__MimeTypeFinderJob_MetaObject_Callback = QMetaObject* (*)(const KIO__MimeTypeFinderJob*);
    using KIO__MimeTypeFinderJob_Metacast_Callback = void* (*)(KIO__MimeTypeFinderJob*, const char*);
    using KIO__MimeTypeFinderJob_Metacall_Callback = int (*)(KIO__MimeTypeFinderJob*, int, int, void**);
    using KIO__MimeTypeFinderJob_Start_Callback = void (*)(KIO__MimeTypeFinderJob*);
    using KIO__MimeTypeFinderJob_DoKill_Callback = bool (*)(KIO__MimeTypeFinderJob*);
    using KIO__MimeTypeFinderJob_SlotResult_Callback = void (*)(KIO__MimeTypeFinderJob*, KJob*);
    using KIO__MimeTypeFinderJob_AddSubjob_Callback = bool (*)(KIO__MimeTypeFinderJob*, KJob*);
    using KIO__MimeTypeFinderJob_RemoveSubjob_Callback = bool (*)(KIO__MimeTypeFinderJob*, KJob*);
    using KIO__MimeTypeFinderJob_SlotInfoMessage_Callback = void (*)(KIO__MimeTypeFinderJob*, KJob*, const char*);
    using KIO__MimeTypeFinderJob_DoSuspend_Callback = bool (*)(KIO__MimeTypeFinderJob*);
    using KIO__MimeTypeFinderJob_DoResume_Callback = bool (*)(KIO__MimeTypeFinderJob*);
    using KIO__MimeTypeFinderJob_ErrorString_Callback = const char* (*)(const KIO__MimeTypeFinderJob*);
    using KIO__MimeTypeFinderJob_Event_Callback = bool (*)(KIO__MimeTypeFinderJob*, QEvent*);
    using KIO__MimeTypeFinderJob_EventFilter_Callback = bool (*)(KIO__MimeTypeFinderJob*, QObject*, QEvent*);
    using KIO__MimeTypeFinderJob_TimerEvent_Callback = void (*)(KIO__MimeTypeFinderJob*, QTimerEvent*);
    using KIO__MimeTypeFinderJob_ChildEvent_Callback = void (*)(KIO__MimeTypeFinderJob*, QChildEvent*);
    using KIO__MimeTypeFinderJob_CustomEvent_Callback = void (*)(KIO__MimeTypeFinderJob*, QEvent*);
    using KIO__MimeTypeFinderJob_ConnectNotify_Callback = void (*)(KIO__MimeTypeFinderJob*, QMetaMethod*);
    using KIO__MimeTypeFinderJob_DisconnectNotify_Callback = void (*)(KIO__MimeTypeFinderJob*, QMetaMethod*);
    using KIO::MimeTypeFinderJob::clearSubjobs;
    using KIO::MimeTypeFinderJob::emitPercent;
    using KIO::MimeTypeFinderJob::emitResult;
    using KIO::MimeTypeFinderJob::emitSpeed;
    using KIO::MimeTypeFinderJob::hasSubjobs;
    using KIO::MimeTypeFinderJob::isFinished;
    using KIO::MimeTypeFinderJob::isSignalConnected;
    using KIO::MimeTypeFinderJob::receivers;
    using KIO::MimeTypeFinderJob::sender;
    using KIO::MimeTypeFinderJob::senderSignalIndex;
    using KIO::MimeTypeFinderJob::setCapabilities;
    using KIO::MimeTypeFinderJob::setError;
    using KIO::MimeTypeFinderJob::setErrorText;
    using KIO::MimeTypeFinderJob::setPercent;
    using KIO::MimeTypeFinderJob::setProcessedAmount;
    using KIO::MimeTypeFinderJob::setProgressUnit;
    using KIO::MimeTypeFinderJob::setTotalAmount;
    using KIO::MimeTypeFinderJob::startElapsedTimer;
    using KIO::MimeTypeFinderJob::subjobs;

    // Instance callback storage
    KIO__MimeTypeFinderJob_MetaObject_Callback kio__mimetypefinderjob_metaobject_callback = nullptr;
    KIO__MimeTypeFinderJob_Metacast_Callback kio__mimetypefinderjob_metacast_callback = nullptr;
    KIO__MimeTypeFinderJob_Metacall_Callback kio__mimetypefinderjob_metacall_callback = nullptr;
    KIO__MimeTypeFinderJob_Start_Callback kio__mimetypefinderjob_start_callback = nullptr;
    KIO__MimeTypeFinderJob_DoKill_Callback kio__mimetypefinderjob_dokill_callback = nullptr;
    KIO__MimeTypeFinderJob_SlotResult_Callback kio__mimetypefinderjob_slotresult_callback = nullptr;
    KIO__MimeTypeFinderJob_AddSubjob_Callback kio__mimetypefinderjob_addsubjob_callback = nullptr;
    KIO__MimeTypeFinderJob_RemoveSubjob_Callback kio__mimetypefinderjob_removesubjob_callback = nullptr;
    KIO__MimeTypeFinderJob_SlotInfoMessage_Callback kio__mimetypefinderjob_slotinfomessage_callback = nullptr;
    KIO__MimeTypeFinderJob_DoSuspend_Callback kio__mimetypefinderjob_dosuspend_callback = nullptr;
    KIO__MimeTypeFinderJob_DoResume_Callback kio__mimetypefinderjob_doresume_callback = nullptr;
    KIO__MimeTypeFinderJob_ErrorString_Callback kio__mimetypefinderjob_errorstring_callback = nullptr;
    KIO__MimeTypeFinderJob_Event_Callback kio__mimetypefinderjob_event_callback = nullptr;
    KIO__MimeTypeFinderJob_EventFilter_Callback kio__mimetypefinderjob_eventfilter_callback = nullptr;
    KIO__MimeTypeFinderJob_TimerEvent_Callback kio__mimetypefinderjob_timerevent_callback = nullptr;
    KIO__MimeTypeFinderJob_ChildEvent_Callback kio__mimetypefinderjob_childevent_callback = nullptr;
    KIO__MimeTypeFinderJob_CustomEvent_Callback kio__mimetypefinderjob_customevent_callback = nullptr;
    KIO__MimeTypeFinderJob_ConnectNotify_Callback kio__mimetypefinderjob_connectnotify_callback = nullptr;
    KIO__MimeTypeFinderJob_DisconnectNotify_Callback kio__mimetypefinderjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::MimeTypeFinderJob {
        using KIO::MimeTypeFinderJob::addSubjob;
        using KIO::MimeTypeFinderJob::childEvent;
        using KIO::MimeTypeFinderJob::connectNotify;
        using KIO::MimeTypeFinderJob::customEvent;
        using KIO::MimeTypeFinderJob::disconnectNotify;
        using KIO::MimeTypeFinderJob::doKill;
        using KIO::MimeTypeFinderJob::doResume;
        using KIO::MimeTypeFinderJob::doSuspend;
        using KIO::MimeTypeFinderJob::removeSubjob;
        using KIO::MimeTypeFinderJob::slotInfoMessage;
        using KIO::MimeTypeFinderJob::slotResult;
        using KIO::MimeTypeFinderJob::timerEvent;
    };

    VirtualKIOMimeTypeFinderJob(const QUrl& url) : KIO::MimeTypeFinderJob(url) {};
    VirtualKIOMimeTypeFinderJob(const QUrl& url, QObject* parent) : KIO::MimeTypeFinderJob(url, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__mimetypefinderjob_metaobject_callback) {
            QMetaObject* callback_ret = kio__mimetypefinderjob_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__MimeTypeFinderJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__mimetypefinderjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__mimetypefinderjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__MimeTypeFinderJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__mimetypefinderjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__mimetypefinderjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__MimeTypeFinderJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__mimetypefinderjob_start_callback) {
            kio__mimetypefinderjob_start_callback(this);
            return;
        }
        KIO__MimeTypeFinderJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__mimetypefinderjob_dokill_callback) {
            bool callback_ret = kio__mimetypefinderjob_dokill_callback(this);
            return callback_ret;
        }
        return KIO__MimeTypeFinderJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResult(KJob* job) override {
        if (kio__mimetypefinderjob_slotresult_callback) {
            KJob* cbval1 = job;
            kio__mimetypefinderjob_slotresult_callback(this, cbval1);
            return;
        }
        KIO__MimeTypeFinderJob::slotResult(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__mimetypefinderjob_addsubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__mimetypefinderjob_addsubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__MimeTypeFinderJob::addSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__mimetypefinderjob_removesubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__mimetypefinderjob_removesubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__MimeTypeFinderJob::removeSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__mimetypefinderjob_slotinfomessage_callback) {
            KJob* cbval1 = job;
            const auto message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            auto message_str_len = message_b.length();
            const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
            memcpy((void*)message_str, message_b.data(), message_str_len);
            ((char*)message_str)[message_str_len] = '\0';
            const char* cbval2 = message_str;
            kio__mimetypefinderjob_slotinfomessage_callback(this, cbval1, cbval2);
            libqt_free(message_str);
            return;
        }
        KIO__MimeTypeFinderJob::slotInfoMessage(job, message);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__mimetypefinderjob_dosuspend_callback) {
            bool callback_ret = kio__mimetypefinderjob_dosuspend_callback(this);
            return callback_ret;
        }
        return KIO__MimeTypeFinderJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__mimetypefinderjob_doresume_callback) {
            bool callback_ret = kio__mimetypefinderjob_doresume_callback(this);
            return callback_ret;
        }
        return KIO__MimeTypeFinderJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__mimetypefinderjob_errorstring_callback) {
            const char* callback_ret = kio__mimetypefinderjob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIO__MimeTypeFinderJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__mimetypefinderjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__mimetypefinderjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__MimeTypeFinderJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__mimetypefinderjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__mimetypefinderjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__MimeTypeFinderJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__mimetypefinderjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__mimetypefinderjob_timerevent_callback(this, cbval1);
            return;
        }
        KIO__MimeTypeFinderJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__mimetypefinderjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__mimetypefinderjob_childevent_callback(this, cbval1);
            return;
        }
        KIO__MimeTypeFinderJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__mimetypefinderjob_customevent_callback) {
            QEvent* cbval1 = event;
            kio__mimetypefinderjob_customevent_callback(this, cbval1);
            return;
        }
        KIO__MimeTypeFinderJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__mimetypefinderjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__mimetypefinderjob_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__MimeTypeFinderJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__mimetypefinderjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__mimetypefinderjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__MimeTypeFinderJob::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KIO__MimeTypeFinderJob_SuperDoKill(KIO::MimeTypeFinderJob* self);
    friend void KIO__MimeTypeFinderJob_SuperSlotResult(KIO::MimeTypeFinderJob* self, KJob* job);
    friend bool KIO__MimeTypeFinderJob_SuperAddSubjob(KIO::MimeTypeFinderJob* self, KJob* job);
    friend bool KIO__MimeTypeFinderJob_SuperRemoveSubjob(KIO::MimeTypeFinderJob* self, KJob* job);
    friend void KIO__MimeTypeFinderJob_SuperSlotInfoMessage(KIO::MimeTypeFinderJob* self, KJob* job, const libqt_string message);
    friend bool KIO__MimeTypeFinderJob_SuperDoSuspend(KIO::MimeTypeFinderJob* self);
    friend bool KIO__MimeTypeFinderJob_SuperDoResume(KIO::MimeTypeFinderJob* self);
    friend void KIO__MimeTypeFinderJob_SuperTimerEvent(KIO::MimeTypeFinderJob* self, QTimerEvent* event);
    friend void KIO__MimeTypeFinderJob_SuperChildEvent(KIO::MimeTypeFinderJob* self, QChildEvent* event);
    friend void KIO__MimeTypeFinderJob_SuperCustomEvent(KIO::MimeTypeFinderJob* self, QEvent* event);
    friend void KIO__MimeTypeFinderJob_SuperConnectNotify(KIO::MimeTypeFinderJob* self, const QMetaMethod* signal);
    friend void KIO__MimeTypeFinderJob_SuperDisconnectNotify(KIO::MimeTypeFinderJob* self, const QMetaMethod* signal);
};

#endif
