#pragma once
#ifndef EXTRAS_KIO_LIBPREVIEWJOB_HXX
#define EXTRAS_KIO_LIBPREVIEWJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::PreviewJob
class VirtualKIOPreviewJob final : public KIO::PreviewJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__PreviewJob_MetaObject_Callback = QMetaObject* (*)(const KIO__PreviewJob*);
    using KIO__PreviewJob_Metacast_Callback = void* (*)(KIO__PreviewJob*, const char*);
    using KIO__PreviewJob_Metacall_Callback = int (*)(KIO__PreviewJob*, int, int, void**);
    using KIO__PreviewJob_SlotResult_Callback = void (*)(KIO__PreviewJob*, KJob*);
    using KIO__PreviewJob_Start_Callback = void (*)(KIO__PreviewJob*);
    using KIO__PreviewJob_DoKill_Callback = bool (*)(KIO__PreviewJob*);
    using KIO__PreviewJob_DoSuspend_Callback = bool (*)(KIO__PreviewJob*);
    using KIO__PreviewJob_DoResume_Callback = bool (*)(KIO__PreviewJob*);
    using KIO__PreviewJob_ErrorString_Callback = const char* (*)(const KIO__PreviewJob*);
    using KIO__PreviewJob_AddSubjob_Callback = bool (*)(KIO__PreviewJob*, KJob*);
    using KIO__PreviewJob_RemoveSubjob_Callback = bool (*)(KIO__PreviewJob*, KJob*);
    using KIO__PreviewJob_SlotInfoMessage_Callback = void (*)(KIO__PreviewJob*, KJob*, const char*);
    using KIO__PreviewJob_Event_Callback = bool (*)(KIO__PreviewJob*, QEvent*);
    using KIO__PreviewJob_EventFilter_Callback = bool (*)(KIO__PreviewJob*, QObject*, QEvent*);
    using KIO__PreviewJob_TimerEvent_Callback = void (*)(KIO__PreviewJob*, QTimerEvent*);
    using KIO__PreviewJob_ChildEvent_Callback = void (*)(KIO__PreviewJob*, QChildEvent*);
    using KIO__PreviewJob_CustomEvent_Callback = void (*)(KIO__PreviewJob*, QEvent*);
    using KIO__PreviewJob_ConnectNotify_Callback = void (*)(KIO__PreviewJob*, QMetaMethod*);
    using KIO__PreviewJob_DisconnectNotify_Callback = void (*)(KIO__PreviewJob*, QMetaMethod*);
    using KIO::PreviewJob::clearSubjobs;
    using KIO::PreviewJob::emitPercent;
    using KIO::PreviewJob::emitResult;
    using KIO::PreviewJob::emitSpeed;
    using KIO::PreviewJob::hasSubjobs;
    using KIO::PreviewJob::isFinished;
    using KIO::PreviewJob::isSignalConnected;
    using KIO::PreviewJob::receivers;
    using KIO::PreviewJob::sender;
    using KIO::PreviewJob::senderSignalIndex;
    using KIO::PreviewJob::setCapabilities;
    using KIO::PreviewJob::setError;
    using KIO::PreviewJob::setErrorText;
    using KIO::PreviewJob::setPercent;
    using KIO::PreviewJob::setProcessedAmount;
    using KIO::PreviewJob::setProgressUnit;
    using KIO::PreviewJob::setTotalAmount;
    using KIO::PreviewJob::startElapsedTimer;
    using KIO::PreviewJob::subjobs;

    // Instance callback storage
    KIO__PreviewJob_MetaObject_Callback kio__previewjob_metaobject_callback = nullptr;
    KIO__PreviewJob_Metacast_Callback kio__previewjob_metacast_callback = nullptr;
    KIO__PreviewJob_Metacall_Callback kio__previewjob_metacall_callback = nullptr;
    KIO__PreviewJob_SlotResult_Callback kio__previewjob_slotresult_callback = nullptr;
    KIO__PreviewJob_Start_Callback kio__previewjob_start_callback = nullptr;
    KIO__PreviewJob_DoKill_Callback kio__previewjob_dokill_callback = nullptr;
    KIO__PreviewJob_DoSuspend_Callback kio__previewjob_dosuspend_callback = nullptr;
    KIO__PreviewJob_DoResume_Callback kio__previewjob_doresume_callback = nullptr;
    KIO__PreviewJob_ErrorString_Callback kio__previewjob_errorstring_callback = nullptr;
    KIO__PreviewJob_AddSubjob_Callback kio__previewjob_addsubjob_callback = nullptr;
    KIO__PreviewJob_RemoveSubjob_Callback kio__previewjob_removesubjob_callback = nullptr;
    KIO__PreviewJob_SlotInfoMessage_Callback kio__previewjob_slotinfomessage_callback = nullptr;
    KIO__PreviewJob_Event_Callback kio__previewjob_event_callback = nullptr;
    KIO__PreviewJob_EventFilter_Callback kio__previewjob_eventfilter_callback = nullptr;
    KIO__PreviewJob_TimerEvent_Callback kio__previewjob_timerevent_callback = nullptr;
    KIO__PreviewJob_ChildEvent_Callback kio__previewjob_childevent_callback = nullptr;
    KIO__PreviewJob_CustomEvent_Callback kio__previewjob_customevent_callback = nullptr;
    KIO__PreviewJob_ConnectNotify_Callback kio__previewjob_connectnotify_callback = nullptr;
    KIO__PreviewJob_DisconnectNotify_Callback kio__previewjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::PreviewJob {
        using KIO::PreviewJob::addSubjob;
        using KIO::PreviewJob::childEvent;
        using KIO::PreviewJob::connectNotify;
        using KIO::PreviewJob::customEvent;
        using KIO::PreviewJob::disconnectNotify;
        using KIO::PreviewJob::doKill;
        using KIO::PreviewJob::doResume;
        using KIO::PreviewJob::doSuspend;
        using KIO::PreviewJob::removeSubjob;
        using KIO::PreviewJob::slotInfoMessage;
        using KIO::PreviewJob::slotResult;
        using KIO::PreviewJob::timerEvent;
    };

    VirtualKIOPreviewJob(const KFileItemList& items, const QSize& size) : KIO::PreviewJob(items, size) {};
    VirtualKIOPreviewJob(const KFileItemList& items, const QSize& size, const QList<QString>* enabledPlugins) : KIO::PreviewJob(items, size, enabledPlugins) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__previewjob_metaobject_callback) {
            QMetaObject* callback_ret = kio__previewjob_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__PreviewJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__previewjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__previewjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__PreviewJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__previewjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__previewjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__PreviewJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResult(KJob* job) override {
        if (kio__previewjob_slotresult_callback) {
            KJob* cbval1 = job;
            kio__previewjob_slotresult_callback(this, cbval1);
            return;
        }
        KIO__PreviewJob::slotResult(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__previewjob_start_callback) {
            kio__previewjob_start_callback(this);
            return;
        }
        KIO__PreviewJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__previewjob_dokill_callback) {
            bool callback_ret = kio__previewjob_dokill_callback(this);
            return callback_ret;
        }
        return KIO__PreviewJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__previewjob_dosuspend_callback) {
            bool callback_ret = kio__previewjob_dosuspend_callback(this);
            return callback_ret;
        }
        return KIO__PreviewJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__previewjob_doresume_callback) {
            bool callback_ret = kio__previewjob_doresume_callback(this);
            return callback_ret;
        }
        return KIO__PreviewJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__previewjob_errorstring_callback) {
            const char* callback_ret = kio__previewjob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIO__PreviewJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__previewjob_addsubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__previewjob_addsubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__PreviewJob::addSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__previewjob_removesubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__previewjob_removesubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__PreviewJob::removeSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__previewjob_slotinfomessage_callback) {
            KJob* cbval1 = job;
            const auto message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            auto message_str_len = message_b.length();
            const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
            memcpy((void*)message_str, message_b.data(), message_str_len);
            ((char*)message_str)[message_str_len] = '\0';
            const char* cbval2 = message_str;
            kio__previewjob_slotinfomessage_callback(this, cbval1, cbval2);
            libqt_free(message_str);
            return;
        }
        KIO__PreviewJob::slotInfoMessage(job, message);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__previewjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__previewjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__PreviewJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__previewjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__previewjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__PreviewJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__previewjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__previewjob_timerevent_callback(this, cbval1);
            return;
        }
        KIO__PreviewJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__previewjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__previewjob_childevent_callback(this, cbval1);
            return;
        }
        KIO__PreviewJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__previewjob_customevent_callback) {
            QEvent* cbval1 = event;
            kio__previewjob_customevent_callback(this, cbval1);
            return;
        }
        KIO__PreviewJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__previewjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__previewjob_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__PreviewJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__previewjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__previewjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__PreviewJob::disconnectNotify(signal);
    }

    // Friend functions
    friend void KIO__PreviewJob_SuperSlotResult(KIO::PreviewJob* self, KJob* job);
    friend bool KIO__PreviewJob_SuperDoKill(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_SuperDoSuspend(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_SuperDoResume(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_SuperAddSubjob(KIO::PreviewJob* self, KJob* job);
    friend bool KIO__PreviewJob_SuperRemoveSubjob(KIO::PreviewJob* self, KJob* job);
    friend void KIO__PreviewJob_SuperSlotInfoMessage(KIO::PreviewJob* self, KJob* job, const libqt_string message);
    friend void KIO__PreviewJob_SuperTimerEvent(KIO::PreviewJob* self, QTimerEvent* event);
    friend void KIO__PreviewJob_SuperChildEvent(KIO::PreviewJob* self, QChildEvent* event);
    friend void KIO__PreviewJob_SuperCustomEvent(KIO::PreviewJob* self, QEvent* event);
    friend void KIO__PreviewJob_SuperConnectNotify(KIO::PreviewJob* self, const QMetaMethod* signal);
    friend void KIO__PreviewJob_SuperDisconnectNotify(KIO::PreviewJob* self, const QMetaMethod* signal);
};

#endif
