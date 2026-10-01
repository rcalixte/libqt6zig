#pragma once
#ifndef EXTRAS_KIO_LIBFAVICONREQUESTJOB_HXX
#define EXTRAS_KIO_LIBFAVICONREQUESTJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::FavIconRequestJob
class VirtualKIOFavIconRequestJob final : public KIO::FavIconRequestJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__FavIconRequestJob_MetaObject_Callback = QMetaObject* (*)(const KIO__FavIconRequestJob*);
    using KIO__FavIconRequestJob_Metacast_Callback = void* (*)(KIO__FavIconRequestJob*, const char*);
    using KIO__FavIconRequestJob_Metacall_Callback = int (*)(KIO__FavIconRequestJob*, int, int, void**);
    using KIO__FavIconRequestJob_Start_Callback = void (*)(KIO__FavIconRequestJob*);
    using KIO__FavIconRequestJob_AddSubjob_Callback = bool (*)(KIO__FavIconRequestJob*, KJob*);
    using KIO__FavIconRequestJob_RemoveSubjob_Callback = bool (*)(KIO__FavIconRequestJob*, KJob*);
    using KIO__FavIconRequestJob_SlotInfoMessage_Callback = void (*)(KIO__FavIconRequestJob*, KJob*, const char*);
    using KIO__FavIconRequestJob_DoKill_Callback = bool (*)(KIO__FavIconRequestJob*);
    using KIO__FavIconRequestJob_DoSuspend_Callback = bool (*)(KIO__FavIconRequestJob*);
    using KIO__FavIconRequestJob_DoResume_Callback = bool (*)(KIO__FavIconRequestJob*);
    using KIO__FavIconRequestJob_ErrorString_Callback = const char* (*)(const KIO__FavIconRequestJob*);
    using KIO__FavIconRequestJob_Event_Callback = bool (*)(KIO__FavIconRequestJob*, QEvent*);
    using KIO__FavIconRequestJob_EventFilter_Callback = bool (*)(KIO__FavIconRequestJob*, QObject*, QEvent*);
    using KIO__FavIconRequestJob_TimerEvent_Callback = void (*)(KIO__FavIconRequestJob*, QTimerEvent*);
    using KIO__FavIconRequestJob_ChildEvent_Callback = void (*)(KIO__FavIconRequestJob*, QChildEvent*);
    using KIO__FavIconRequestJob_CustomEvent_Callback = void (*)(KIO__FavIconRequestJob*, QEvent*);
    using KIO__FavIconRequestJob_ConnectNotify_Callback = void (*)(KIO__FavIconRequestJob*, QMetaMethod*);
    using KIO__FavIconRequestJob_DisconnectNotify_Callback = void (*)(KIO__FavIconRequestJob*, QMetaMethod*);
    using KIO::FavIconRequestJob::clearSubjobs;
    using KIO::FavIconRequestJob::emitPercent;
    using KIO::FavIconRequestJob::emitResult;
    using KIO::FavIconRequestJob::emitSpeed;
    using KIO::FavIconRequestJob::hasSubjobs;
    using KIO::FavIconRequestJob::isFinished;
    using KIO::FavIconRequestJob::isSignalConnected;
    using KIO::FavIconRequestJob::receivers;
    using KIO::FavIconRequestJob::sender;
    using KIO::FavIconRequestJob::senderSignalIndex;
    using KIO::FavIconRequestJob::setCapabilities;
    using KIO::FavIconRequestJob::setError;
    using KIO::FavIconRequestJob::setErrorText;
    using KIO::FavIconRequestJob::setPercent;
    using KIO::FavIconRequestJob::setProcessedAmount;
    using KIO::FavIconRequestJob::setProgressUnit;
    using KIO::FavIconRequestJob::setTotalAmount;
    using KIO::FavIconRequestJob::startElapsedTimer;
    using KIO::FavIconRequestJob::subjobs;

    // Instance callback storage
    KIO__FavIconRequestJob_MetaObject_Callback kio__faviconrequestjob_metaobject_callback = nullptr;
    KIO__FavIconRequestJob_Metacast_Callback kio__faviconrequestjob_metacast_callback = nullptr;
    KIO__FavIconRequestJob_Metacall_Callback kio__faviconrequestjob_metacall_callback = nullptr;
    KIO__FavIconRequestJob_Start_Callback kio__faviconrequestjob_start_callback = nullptr;
    KIO__FavIconRequestJob_AddSubjob_Callback kio__faviconrequestjob_addsubjob_callback = nullptr;
    KIO__FavIconRequestJob_RemoveSubjob_Callback kio__faviconrequestjob_removesubjob_callback = nullptr;
    KIO__FavIconRequestJob_SlotInfoMessage_Callback kio__faviconrequestjob_slotinfomessage_callback = nullptr;
    KIO__FavIconRequestJob_DoKill_Callback kio__faviconrequestjob_dokill_callback = nullptr;
    KIO__FavIconRequestJob_DoSuspend_Callback kio__faviconrequestjob_dosuspend_callback = nullptr;
    KIO__FavIconRequestJob_DoResume_Callback kio__faviconrequestjob_doresume_callback = nullptr;
    KIO__FavIconRequestJob_ErrorString_Callback kio__faviconrequestjob_errorstring_callback = nullptr;
    KIO__FavIconRequestJob_Event_Callback kio__faviconrequestjob_event_callback = nullptr;
    KIO__FavIconRequestJob_EventFilter_Callback kio__faviconrequestjob_eventfilter_callback = nullptr;
    KIO__FavIconRequestJob_TimerEvent_Callback kio__faviconrequestjob_timerevent_callback = nullptr;
    KIO__FavIconRequestJob_ChildEvent_Callback kio__faviconrequestjob_childevent_callback = nullptr;
    KIO__FavIconRequestJob_CustomEvent_Callback kio__faviconrequestjob_customevent_callback = nullptr;
    KIO__FavIconRequestJob_ConnectNotify_Callback kio__faviconrequestjob_connectnotify_callback = nullptr;
    KIO__FavIconRequestJob_DisconnectNotify_Callback kio__faviconrequestjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::FavIconRequestJob {
        using KIO::FavIconRequestJob::addSubjob;
        using KIO::FavIconRequestJob::childEvent;
        using KIO::FavIconRequestJob::connectNotify;
        using KIO::FavIconRequestJob::customEvent;
        using KIO::FavIconRequestJob::disconnectNotify;
        using KIO::FavIconRequestJob::doKill;
        using KIO::FavIconRequestJob::doResume;
        using KIO::FavIconRequestJob::doSuspend;
        using KIO::FavIconRequestJob::removeSubjob;
        using KIO::FavIconRequestJob::slotInfoMessage;
        using KIO::FavIconRequestJob::timerEvent;
    };

    VirtualKIOFavIconRequestJob(const QUrl& hostUrl) : KIO::FavIconRequestJob(hostUrl) {};
    VirtualKIOFavIconRequestJob(const QUrl& hostUrl, KIO::LoadType reload) : KIO::FavIconRequestJob(hostUrl, reload) {};
    VirtualKIOFavIconRequestJob(const QUrl& hostUrl, KIO::LoadType reload, QObject* parent) : KIO::FavIconRequestJob(hostUrl, reload, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__faviconrequestjob_metaobject_callback) {
            QMetaObject* callback_ret = kio__faviconrequestjob_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__FavIconRequestJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__faviconrequestjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__faviconrequestjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__FavIconRequestJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__faviconrequestjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__faviconrequestjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__FavIconRequestJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__faviconrequestjob_start_callback) {
            kio__faviconrequestjob_start_callback(this);
            return;
        }
        KIO__FavIconRequestJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__faviconrequestjob_addsubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__faviconrequestjob_addsubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__FavIconRequestJob::addSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__faviconrequestjob_removesubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__faviconrequestjob_removesubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__FavIconRequestJob::removeSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__faviconrequestjob_slotinfomessage_callback) {
            KJob* cbval1 = job;
            const auto message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            auto message_str_len = message_b.length();
            const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
            memcpy((void*)message_str, message_b.data(), message_str_len);
            ((char*)message_str)[message_str_len] = '\0';
            const char* cbval2 = message_str;
            kio__faviconrequestjob_slotinfomessage_callback(this, cbval1, cbval2);
            libqt_free(message_str);
            return;
        }
        KIO__FavIconRequestJob::slotInfoMessage(job, message);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__faviconrequestjob_dokill_callback) {
            bool callback_ret = kio__faviconrequestjob_dokill_callback(this);
            return callback_ret;
        }
        return KIO__FavIconRequestJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__faviconrequestjob_dosuspend_callback) {
            bool callback_ret = kio__faviconrequestjob_dosuspend_callback(this);
            return callback_ret;
        }
        return KIO__FavIconRequestJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__faviconrequestjob_doresume_callback) {
            bool callback_ret = kio__faviconrequestjob_doresume_callback(this);
            return callback_ret;
        }
        return KIO__FavIconRequestJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__faviconrequestjob_errorstring_callback) {
            const char* callback_ret = kio__faviconrequestjob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIO__FavIconRequestJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__faviconrequestjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__faviconrequestjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__FavIconRequestJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__faviconrequestjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__faviconrequestjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__FavIconRequestJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__faviconrequestjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__faviconrequestjob_timerevent_callback(this, cbval1);
            return;
        }
        KIO__FavIconRequestJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__faviconrequestjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__faviconrequestjob_childevent_callback(this, cbval1);
            return;
        }
        KIO__FavIconRequestJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__faviconrequestjob_customevent_callback) {
            QEvent* cbval1 = event;
            kio__faviconrequestjob_customevent_callback(this, cbval1);
            return;
        }
        KIO__FavIconRequestJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__faviconrequestjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__faviconrequestjob_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__FavIconRequestJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__faviconrequestjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__faviconrequestjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__FavIconRequestJob::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KIO__FavIconRequestJob_SuperAddSubjob(KIO::FavIconRequestJob* self, KJob* job);
    friend bool KIO__FavIconRequestJob_SuperRemoveSubjob(KIO::FavIconRequestJob* self, KJob* job);
    friend void KIO__FavIconRequestJob_SuperSlotInfoMessage(KIO::FavIconRequestJob* self, KJob* job, const libqt_string message);
    friend bool KIO__FavIconRequestJob_SuperDoKill(KIO::FavIconRequestJob* self);
    friend bool KIO__FavIconRequestJob_SuperDoSuspend(KIO::FavIconRequestJob* self);
    friend bool KIO__FavIconRequestJob_SuperDoResume(KIO::FavIconRequestJob* self);
    friend void KIO__FavIconRequestJob_SuperTimerEvent(KIO::FavIconRequestJob* self, QTimerEvent* event);
    friend void KIO__FavIconRequestJob_SuperChildEvent(KIO::FavIconRequestJob* self, QChildEvent* event);
    friend void KIO__FavIconRequestJob_SuperCustomEvent(KIO::FavIconRequestJob* self, QEvent* event);
    friend void KIO__FavIconRequestJob_SuperConnectNotify(KIO::FavIconRequestJob* self, const QMetaMethod* signal);
    friend void KIO__FavIconRequestJob_SuperDisconnectNotify(KIO::FavIconRequestJob* self, const QMetaMethod* signal);
};

#endif
