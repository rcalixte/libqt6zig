#pragma once
#ifndef EXTRAS_KIO_LIBSPECIALJOB_HXX
#define EXTRAS_KIO_LIBSPECIALJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::SpecialJob
class VirtualKIOSpecialJob final : public KIO::SpecialJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__SpecialJob_MetaObject_Callback = QMetaObject* (*)(const KIO__SpecialJob*);
    using KIO__SpecialJob_Metacast_Callback = void* (*)(KIO__SpecialJob*, const char*);
    using KIO__SpecialJob_Metacall_Callback = int (*)(KIO__SpecialJob*, int, int, void**);
    using KIO__SpecialJob_DoResume_Callback = bool (*)(KIO__SpecialJob*);
    using KIO__SpecialJob_SlotRedirection_Callback = void (*)(KIO__SpecialJob*, QUrl*);
    using KIO__SpecialJob_SlotFinished_Callback = void (*)(KIO__SpecialJob*);
    using KIO__SpecialJob_SlotData_Callback = void (*)(KIO__SpecialJob*, libqt_string);
    using KIO__SpecialJob_SlotDataReq_Callback = void (*)(KIO__SpecialJob*);
    using KIO__SpecialJob_SlotMimetype_Callback = void (*)(KIO__SpecialJob*, const char*);
    using KIO__SpecialJob_DoSuspend_Callback = bool (*)(KIO__SpecialJob*);
    using KIO__SpecialJob_DoKill_Callback = bool (*)(KIO__SpecialJob*);
    using KIO__SpecialJob_PutOnHold_Callback = void (*)(KIO__SpecialJob*);
    using KIO__SpecialJob_SlotWarning_Callback = void (*)(KIO__SpecialJob*, const char*);
    using KIO__SpecialJob_SlotMetaData_Callback = void (*)(KIO__SpecialJob*, KIO__MetaData*);
    using KIO__SpecialJob_Start_Callback = void (*)(KIO__SpecialJob*);
    using KIO__SpecialJob_ErrorString_Callback = const char* (*)(const KIO__SpecialJob*);
    using KIO__SpecialJob_AddSubjob_Callback = bool (*)(KIO__SpecialJob*, KJob*);
    using KIO__SpecialJob_RemoveSubjob_Callback = bool (*)(KIO__SpecialJob*, KJob*);
    using KIO__SpecialJob_SlotResult_Callback = void (*)(KIO__SpecialJob*, KJob*);
    using KIO__SpecialJob_SlotInfoMessage_Callback = void (*)(KIO__SpecialJob*, KJob*, const char*);
    using KIO__SpecialJob_Event_Callback = bool (*)(KIO__SpecialJob*, QEvent*);
    using KIO__SpecialJob_EventFilter_Callback = bool (*)(KIO__SpecialJob*, QObject*, QEvent*);
    using KIO__SpecialJob_TimerEvent_Callback = void (*)(KIO__SpecialJob*, QTimerEvent*);
    using KIO__SpecialJob_ChildEvent_Callback = void (*)(KIO__SpecialJob*, QChildEvent*);
    using KIO__SpecialJob_CustomEvent_Callback = void (*)(KIO__SpecialJob*, QEvent*);
    using KIO__SpecialJob_ConnectNotify_Callback = void (*)(KIO__SpecialJob*, QMetaMethod*);
    using KIO__SpecialJob_DisconnectNotify_Callback = void (*)(KIO__SpecialJob*, QMetaMethod*);
    using KIO::SpecialJob::clearSubjobs;
    using KIO::SpecialJob::emitPercent;
    using KIO::SpecialJob::emitResult;
    using KIO::SpecialJob::emitSpeed;
    using KIO::SpecialJob::hasSubjobs;
    using KIO::SpecialJob::isFinished;
    using KIO::SpecialJob::isSignalConnected;
    using KIO::SpecialJob::receivers;
    using KIO::SpecialJob::sender;
    using KIO::SpecialJob::senderSignalIndex;
    using KIO::SpecialJob::setCapabilities;
    using KIO::SpecialJob::setError;
    using KIO::SpecialJob::setErrorText;
    using KIO::SpecialJob::setPercent;
    using KIO::SpecialJob::setProcessedAmount;
    using KIO::SpecialJob::setProgressUnit;
    using KIO::SpecialJob::setTotalAmount;
    using KIO::SpecialJob::startElapsedTimer;
    using KIO::SpecialJob::subjobs;

    // Instance callback storage
    KIO__SpecialJob_MetaObject_Callback kio__specialjob_metaobject_callback = nullptr;
    KIO__SpecialJob_Metacast_Callback kio__specialjob_metacast_callback = nullptr;
    KIO__SpecialJob_Metacall_Callback kio__specialjob_metacall_callback = nullptr;
    KIO__SpecialJob_DoResume_Callback kio__specialjob_doresume_callback = nullptr;
    KIO__SpecialJob_SlotRedirection_Callback kio__specialjob_slotredirection_callback = nullptr;
    KIO__SpecialJob_SlotFinished_Callback kio__specialjob_slotfinished_callback = nullptr;
    KIO__SpecialJob_SlotData_Callback kio__specialjob_slotdata_callback = nullptr;
    KIO__SpecialJob_SlotDataReq_Callback kio__specialjob_slotdatareq_callback = nullptr;
    KIO__SpecialJob_SlotMimetype_Callback kio__specialjob_slotmimetype_callback = nullptr;
    KIO__SpecialJob_DoSuspend_Callback kio__specialjob_dosuspend_callback = nullptr;
    KIO__SpecialJob_DoKill_Callback kio__specialjob_dokill_callback = nullptr;
    KIO__SpecialJob_PutOnHold_Callback kio__specialjob_putonhold_callback = nullptr;
    KIO__SpecialJob_SlotWarning_Callback kio__specialjob_slotwarning_callback = nullptr;
    KIO__SpecialJob_SlotMetaData_Callback kio__specialjob_slotmetadata_callback = nullptr;
    KIO__SpecialJob_Start_Callback kio__specialjob_start_callback = nullptr;
    KIO__SpecialJob_ErrorString_Callback kio__specialjob_errorstring_callback = nullptr;
    KIO__SpecialJob_AddSubjob_Callback kio__specialjob_addsubjob_callback = nullptr;
    KIO__SpecialJob_RemoveSubjob_Callback kio__specialjob_removesubjob_callback = nullptr;
    KIO__SpecialJob_SlotResult_Callback kio__specialjob_slotresult_callback = nullptr;
    KIO__SpecialJob_SlotInfoMessage_Callback kio__specialjob_slotinfomessage_callback = nullptr;
    KIO__SpecialJob_Event_Callback kio__specialjob_event_callback = nullptr;
    KIO__SpecialJob_EventFilter_Callback kio__specialjob_eventfilter_callback = nullptr;
    KIO__SpecialJob_TimerEvent_Callback kio__specialjob_timerevent_callback = nullptr;
    KIO__SpecialJob_ChildEvent_Callback kio__specialjob_childevent_callback = nullptr;
    KIO__SpecialJob_CustomEvent_Callback kio__specialjob_customevent_callback = nullptr;
    KIO__SpecialJob_ConnectNotify_Callback kio__specialjob_connectnotify_callback = nullptr;
    KIO__SpecialJob_DisconnectNotify_Callback kio__specialjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::SpecialJob {
        using KIO::SpecialJob::addSubjob;
        using KIO::SpecialJob::childEvent;
        using KIO::SpecialJob::connectNotify;
        using KIO::SpecialJob::customEvent;
        using KIO::SpecialJob::disconnectNotify;
        using KIO::SpecialJob::doKill;
        using KIO::SpecialJob::doResume;
        using KIO::SpecialJob::doSuspend;
        using KIO::SpecialJob::removeSubjob;
        using KIO::SpecialJob::slotData;
        using KIO::SpecialJob::slotDataReq;
        using KIO::SpecialJob::slotFinished;
        using KIO::SpecialJob::slotInfoMessage;
        using KIO::SpecialJob::slotMetaData;
        using KIO::SpecialJob::slotMimetype;
        using KIO::SpecialJob::slotRedirection;
        using KIO::SpecialJob::slotResult;
        using KIO::SpecialJob::slotWarning;
        using KIO::SpecialJob::timerEvent;
    };

    VirtualKIOSpecialJob(const QUrl& url) : KIO::SpecialJob(url) {};
    VirtualKIOSpecialJob(const QUrl& url, const QByteArray& data) : KIO::SpecialJob(url, data) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__specialjob_metaobject_callback) {
            QMetaObject* callback_ret = kio__specialjob_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__SpecialJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__specialjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__specialjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__SpecialJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__specialjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__specialjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__SpecialJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__specialjob_doresume_callback) {
            bool callback_ret = kio__specialjob_doresume_callback(this);
            return callback_ret;
        }
        return KIO__SpecialJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotRedirection(const QUrl& url) override {
        if (kio__specialjob_slotredirection_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            kio__specialjob_slotredirection_callback(this, cbval1);
            return;
        }
        KIO__SpecialJob::slotRedirection(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotFinished() override {
        if (kio__specialjob_slotfinished_callback) {
            kio__specialjob_slotfinished_callback(this);
            return;
        }
        KIO__SpecialJob::slotFinished();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotData(const QByteArray& data) override {
        if (kio__specialjob_slotdata_callback) {
            const QByteArray data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<char*>(malloc(data_str.len));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            libqt_string cbval1 = data_str;
            kio__specialjob_slotdata_callback(this, cbval1);
            libqt_free(data_str.data);
            return;
        }
        KIO__SpecialJob::slotData(data);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotDataReq() override {
        if (kio__specialjob_slotdatareq_callback) {
            kio__specialjob_slotdatareq_callback(this);
            return;
        }
        KIO__SpecialJob::slotDataReq();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotMimetype(const QString& mimetype) override {
        if (kio__specialjob_slotmimetype_callback) {
            const auto mimetype_ret = mimetype;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray mimetype_b = mimetype_ret.toUtf8();
            auto mimetype_str_len = mimetype_b.length();
            const char* mimetype_str = static_cast<const char*>(malloc(mimetype_str_len + 1));
            memcpy((void*)mimetype_str, mimetype_b.data(), mimetype_str_len);
            ((char*)mimetype_str)[mimetype_str_len] = '\0';
            const char* cbval1 = mimetype_str;
            kio__specialjob_slotmimetype_callback(this, cbval1);
            libqt_free(mimetype_str);
            return;
        }
        KIO__SpecialJob::slotMimetype(mimetype);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__specialjob_dosuspend_callback) {
            bool callback_ret = kio__specialjob_dosuspend_callback(this);
            return callback_ret;
        }
        return KIO__SpecialJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__specialjob_dokill_callback) {
            bool callback_ret = kio__specialjob_dokill_callback(this);
            return callback_ret;
        }
        return KIO__SpecialJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual void putOnHold() override {
        if (kio__specialjob_putonhold_callback) {
            kio__specialjob_putonhold_callback(this);
            return;
        }
        KIO__SpecialJob::putOnHold();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotWarning(const QString& param1) override {
        if (kio__specialjob_slotwarning_callback) {
            const auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            kio__specialjob_slotwarning_callback(this, cbval1);
            libqt_free(param1_str);
            return;
        }
        KIO__SpecialJob::slotWarning(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotMetaData(const KIO::MetaData& _metaData) override {
        if (kio__specialjob_slotmetadata_callback) {
            const KIO::MetaData& _metaData_ret = _metaData;
            // Cast returned reference into pointer
            KIO__MetaData* cbval1 = const_cast<KIO::MetaData*>(&_metaData_ret);
            kio__specialjob_slotmetadata_callback(this, cbval1);
            return;
        }
        KIO__SpecialJob::slotMetaData(_metaData);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__specialjob_start_callback) {
            kio__specialjob_start_callback(this);
            return;
        }
        KIO__SpecialJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__specialjob_errorstring_callback) {
            const char* callback_ret = kio__specialjob_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIO__SpecialJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__specialjob_addsubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__specialjob_addsubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__SpecialJob::addSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__specialjob_removesubjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kio__specialjob_removesubjob_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__SpecialJob::removeSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResult(KJob* job) override {
        if (kio__specialjob_slotresult_callback) {
            KJob* cbval1 = job;
            kio__specialjob_slotresult_callback(this, cbval1);
            return;
        }
        KIO__SpecialJob::slotResult(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__specialjob_slotinfomessage_callback) {
            KJob* cbval1 = job;
            const auto message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            auto message_str_len = message_b.length();
            const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
            memcpy((void*)message_str, message_b.data(), message_str_len);
            ((char*)message_str)[message_str_len] = '\0';
            const char* cbval2 = message_str;
            kio__specialjob_slotinfomessage_callback(this, cbval1, cbval2);
            libqt_free(message_str);
            return;
        }
        KIO__SpecialJob::slotInfoMessage(job, message);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__specialjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__specialjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__SpecialJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__specialjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__specialjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__SpecialJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__specialjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__specialjob_timerevent_callback(this, cbval1);
            return;
        }
        KIO__SpecialJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__specialjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__specialjob_childevent_callback(this, cbval1);
            return;
        }
        KIO__SpecialJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__specialjob_customevent_callback) {
            QEvent* cbval1 = event;
            kio__specialjob_customevent_callback(this, cbval1);
            return;
        }
        KIO__SpecialJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__specialjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__specialjob_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__SpecialJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__specialjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__specialjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__SpecialJob::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KIO__SpecialJob_SuperDoResume(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_SuperSlotRedirection(KIO::SpecialJob* self, const QUrl* url);
    friend void KIO__SpecialJob_SuperSlotFinished(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_SuperSlotData(KIO::SpecialJob* self, const libqt_string data);
    friend void KIO__SpecialJob_SuperSlotDataReq(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_SuperSlotMimetype(KIO::SpecialJob* self, const libqt_string mimetype);
    friend bool KIO__SpecialJob_SuperDoSuspend(KIO::SpecialJob* self);
    friend bool KIO__SpecialJob_SuperDoKill(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_SuperSlotWarning(KIO::SpecialJob* self, const libqt_string param1);
    friend void KIO__SpecialJob_SuperSlotMetaData(KIO::SpecialJob* self, const KIO__MetaData* _metaData);
    friend bool KIO__SpecialJob_SuperAddSubjob(KIO::SpecialJob* self, KJob* job);
    friend bool KIO__SpecialJob_SuperRemoveSubjob(KIO::SpecialJob* self, KJob* job);
    friend void KIO__SpecialJob_SuperSlotResult(KIO::SpecialJob* self, KJob* job);
    friend void KIO__SpecialJob_SuperSlotInfoMessage(KIO::SpecialJob* self, KJob* job, const libqt_string message);
    friend void KIO__SpecialJob_SuperTimerEvent(KIO::SpecialJob* self, QTimerEvent* event);
    friend void KIO__SpecialJob_SuperChildEvent(KIO::SpecialJob* self, QChildEvent* event);
    friend void KIO__SpecialJob_SuperCustomEvent(KIO::SpecialJob* self, QEvent* event);
    friend void KIO__SpecialJob_SuperConnectNotify(KIO::SpecialJob* self, const QMetaMethod* signal);
    friend void KIO__SpecialJob_SuperDisconnectNotify(KIO::SpecialJob* self, const QMetaMethod* signal);
};

#endif
