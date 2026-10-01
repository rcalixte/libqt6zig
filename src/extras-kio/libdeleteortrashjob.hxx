#pragma once
#ifndef EXTRAS_KIO_LIBDELETEORTRASHJOB_HXX
#define EXTRAS_KIO_LIBDELETEORTRASHJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::DeleteOrTrashJob
class VirtualKIODeleteOrTrashJob final : public KIO::DeleteOrTrashJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__DeleteOrTrashJob_MetaObject_Callback = QMetaObject* (*)(const KIO__DeleteOrTrashJob*);
    using KIO__DeleteOrTrashJob_Metacast_Callback = void* (*)(KIO__DeleteOrTrashJob*, const char*);
    using KIO__DeleteOrTrashJob_Metacall_Callback = int (*)(KIO__DeleteOrTrashJob*, int, int, void**);
    using KIO__DeleteOrTrashJob_Start_Callback = void (*)(KIO__DeleteOrTrashJob*);
    using KIO__DeleteOrTrashJob_AddSubjob_Callback = bool (*)(KIO__DeleteOrTrashJob*, KJob*);
    using KIO__DeleteOrTrashJob_RemoveSubjob_Callback = bool (*)(KIO__DeleteOrTrashJob*, KJob*);
    using KIO__DeleteOrTrashJob_SlotInfoMessage_Callback = void (*)(KIO__DeleteOrTrashJob*, KJob*, const char*);
    using KIO__DeleteOrTrashJob_DoKill_Callback = bool (*)(KIO__DeleteOrTrashJob*);
    using KIO__DeleteOrTrashJob_DoSuspend_Callback = bool (*)(KIO__DeleteOrTrashJob*);
    using KIO__DeleteOrTrashJob_DoResume_Callback = bool (*)(KIO__DeleteOrTrashJob*);
    using KIO__DeleteOrTrashJob_ErrorString_Callback = const char* (*)(const KIO__DeleteOrTrashJob*);
    using KIO__DeleteOrTrashJob_Event_Callback = bool (*)(KIO__DeleteOrTrashJob*, QEvent*);
    using KIO__DeleteOrTrashJob_EventFilter_Callback = bool (*)(KIO__DeleteOrTrashJob*, QObject*, QEvent*);
    using KIO__DeleteOrTrashJob_TimerEvent_Callback = void (*)(KIO__DeleteOrTrashJob*, QTimerEvent*);
    using KIO__DeleteOrTrashJob_ChildEvent_Callback = void (*)(KIO__DeleteOrTrashJob*, QChildEvent*);
    using KIO__DeleteOrTrashJob_CustomEvent_Callback = void (*)(KIO__DeleteOrTrashJob*, QEvent*);
    using KIO__DeleteOrTrashJob_ConnectNotify_Callback = void (*)(KIO__DeleteOrTrashJob*, QMetaMethod*);
    using KIO__DeleteOrTrashJob_DisconnectNotify_Callback = void (*)(KIO__DeleteOrTrashJob*, QMetaMethod*);
    using KIO::DeleteOrTrashJob::clearSubjobs;
    using KIO::DeleteOrTrashJob::emitPercent;
    using KIO::DeleteOrTrashJob::emitResult;
    using KIO::DeleteOrTrashJob::emitSpeed;
    using KIO::DeleteOrTrashJob::hasSubjobs;
    using KIO::DeleteOrTrashJob::isFinished;
    using KIO::DeleteOrTrashJob::isSignalConnected;
    using KIO::DeleteOrTrashJob::receivers;
    using KIO::DeleteOrTrashJob::sender;
    using KIO::DeleteOrTrashJob::senderSignalIndex;
    using KIO::DeleteOrTrashJob::setCapabilities;
    using KIO::DeleteOrTrashJob::setError;
    using KIO::DeleteOrTrashJob::setErrorText;
    using KIO::DeleteOrTrashJob::setPercent;
    using KIO::DeleteOrTrashJob::setProcessedAmount;
    using KIO::DeleteOrTrashJob::setProgressUnit;
    using KIO::DeleteOrTrashJob::setTotalAmount;
    using KIO::DeleteOrTrashJob::startElapsedTimer;
    using KIO::DeleteOrTrashJob::subjobs;

    // Instance callback storage
    KIO__DeleteOrTrashJob_MetaObject_Callback kio__deleteortrashjob_metaobject_callback = nullptr;
    KIO__DeleteOrTrashJob_Metacast_Callback kio__deleteortrashjob_metacast_callback = nullptr;
    KIO__DeleteOrTrashJob_Metacall_Callback kio__deleteortrashjob_metacall_callback = nullptr;
    KIO__DeleteOrTrashJob_Start_Callback kio__deleteortrashjob_start_callback = nullptr;
    KIO__DeleteOrTrashJob_AddSubjob_Callback kio__deleteortrashjob_addsubjob_callback = nullptr;
    KIO__DeleteOrTrashJob_RemoveSubjob_Callback kio__deleteortrashjob_removesubjob_callback = nullptr;
    KIO__DeleteOrTrashJob_SlotInfoMessage_Callback kio__deleteortrashjob_slotinfomessage_callback = nullptr;
    KIO__DeleteOrTrashJob_DoKill_Callback kio__deleteortrashjob_dokill_callback = nullptr;
    KIO__DeleteOrTrashJob_DoSuspend_Callback kio__deleteortrashjob_dosuspend_callback = nullptr;
    KIO__DeleteOrTrashJob_DoResume_Callback kio__deleteortrashjob_doresume_callback = nullptr;
    KIO__DeleteOrTrashJob_ErrorString_Callback kio__deleteortrashjob_errorstring_callback = nullptr;
    KIO__DeleteOrTrashJob_Event_Callback kio__deleteortrashjob_event_callback = nullptr;
    KIO__DeleteOrTrashJob_EventFilter_Callback kio__deleteortrashjob_eventfilter_callback = nullptr;
    KIO__DeleteOrTrashJob_TimerEvent_Callback kio__deleteortrashjob_timerevent_callback = nullptr;
    KIO__DeleteOrTrashJob_ChildEvent_Callback kio__deleteortrashjob_childevent_callback = nullptr;
    KIO__DeleteOrTrashJob_CustomEvent_Callback kio__deleteortrashjob_customevent_callback = nullptr;
    KIO__DeleteOrTrashJob_ConnectNotify_Callback kio__deleteortrashjob_connectnotify_callback = nullptr;
    KIO__DeleteOrTrashJob_DisconnectNotify_Callback kio__deleteortrashjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::DeleteOrTrashJob {
        using KIO::DeleteOrTrashJob::addSubjob;
        using KIO::DeleteOrTrashJob::childEvent;
        using KIO::DeleteOrTrashJob::connectNotify;
        using KIO::DeleteOrTrashJob::customEvent;
        using KIO::DeleteOrTrashJob::disconnectNotify;
        using KIO::DeleteOrTrashJob::doKill;
        using KIO::DeleteOrTrashJob::doResume;
        using KIO::DeleteOrTrashJob::doSuspend;
        using KIO::DeleteOrTrashJob::removeSubjob;
        using KIO::DeleteOrTrashJob::slotInfoMessage;
        using KIO::DeleteOrTrashJob::timerEvent;
    };

    VirtualKIODeleteOrTrashJob(const QList<QUrl>& urls, KIO::AskUserActionInterface::DeletionType deletionType, KIO::AskUserActionInterface::ConfirmationType confirm, QObject* parent) : KIO::DeleteOrTrashJob(urls, deletionType, confirm, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__deleteortrashjob_metaobject_callback) {
            QMetaObject* callback_ret = kio__deleteortrashjob_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__deleteortrashjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__deleteortrashjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__deleteortrashjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__deleteortrashjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__DeleteOrTrashJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__deleteortrashjob_start_callback) {
            kio__deleteortrashjob_start_callback(this);
            return;
        }
        KIO__DeleteOrTrashJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__deleteortrashjob_addsubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__deleteortrashjob_addsubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::addSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__deleteortrashjob_removesubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__deleteortrashjob_removesubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::removeSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__deleteortrashjob_slotinfomessage_callback) {
            KJob* cbval1 = job;
            const auto message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            auto message_str_len = message_b.length();
            const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
            memcpy((void*)message_str, message_b.data(), message_str_len);
            ((char*)message_str)[message_str_len] = '\0';
            const char* cbval2 = message_str;
            kio__deleteortrashjob_slotinfomessage_callback(this, cbval1, cbval2);
            libqt_free(message_str);
            return;
        }
        KIO__DeleteOrTrashJob::slotInfoMessage(job, message);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__deleteortrashjob_dokill_callback) {
            bool callback_ret = kio__deleteortrashjob_dokill_callback(this);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__deleteortrashjob_dosuspend_callback) {
            bool callback_ret = kio__deleteortrashjob_dosuspend_callback(this);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__deleteortrashjob_doresume_callback) {
            bool callback_ret = kio__deleteortrashjob_doresume_callback(this);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__deleteortrashjob_errorstring_callback) {
            const char* callback_ret = kio__deleteortrashjob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIO__DeleteOrTrashJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__deleteortrashjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__deleteortrashjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__deleteortrashjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__deleteortrashjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__deleteortrashjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__deleteortrashjob_timerevent_callback(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__deleteortrashjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__deleteortrashjob_childevent_callback(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__deleteortrashjob_customevent_callback) {
            QEvent* cbval1 = event;
            kio__deleteortrashjob_customevent_callback(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__deleteortrashjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__deleteortrashjob_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__deleteortrashjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__deleteortrashjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KIO__DeleteOrTrashJob_SuperAddSubjob(KIO::DeleteOrTrashJob* self, KJob* job);
    friend bool KIO__DeleteOrTrashJob_SuperRemoveSubjob(KIO::DeleteOrTrashJob* self, KJob* job);
    friend void KIO__DeleteOrTrashJob_SuperSlotInfoMessage(KIO::DeleteOrTrashJob* self, KJob* job, const libqt_string message);
    friend bool KIO__DeleteOrTrashJob_SuperDoKill(KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_SuperDoSuspend(KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_SuperDoResume(KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_SuperTimerEvent(KIO::DeleteOrTrashJob* self, QTimerEvent* event);
    friend void KIO__DeleteOrTrashJob_SuperChildEvent(KIO::DeleteOrTrashJob* self, QChildEvent* event);
    friend void KIO__DeleteOrTrashJob_SuperCustomEvent(KIO::DeleteOrTrashJob* self, QEvent* event);
    friend void KIO__DeleteOrTrashJob_SuperConnectNotify(KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
    friend void KIO__DeleteOrTrashJob_SuperDisconnectNotify(KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
};

#endif
