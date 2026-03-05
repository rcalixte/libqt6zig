#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKCOMPOSITEJOB_H
#define SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKCOMPOSITEJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCompositeJob so that we can call protected methods
class VirtualKCompositeJob : public KCompositeJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKCompositeJob = true;

    // Virtual class public types (including callbacks)
    using KCompositeJob_MetaObject_Callback = QMetaObject* (*)();
    using KCompositeJob_Metacast_Callback = void* (*)(KCompositeJob*, const char*);
    using KCompositeJob_Metacall_Callback = int (*)(KCompositeJob*, int, int, void**);
    using KCompositeJob_AddSubjob_Callback = bool (*)(KCompositeJob*, KJob*);
    using KCompositeJob_RemoveSubjob_Callback = bool (*)(KCompositeJob*, KJob*);
    using KCompositeJob_SlotResult_Callback = void (*)(KCompositeJob*, KJob*);
    using KCompositeJob_SlotInfoMessage_Callback = void (*)(KCompositeJob*, KJob*, const char*);
    using KCompositeJob_Start_Callback = void (*)();
    using KCompositeJob_DoKill_Callback = bool (*)();
    using KCompositeJob_DoSuspend_Callback = bool (*)();
    using KCompositeJob_DoResume_Callback = bool (*)();
    using KCompositeJob_ErrorString_Callback = const char* (*)();
    using KCompositeJob_Event_Callback = bool (*)(KCompositeJob*, QEvent*);
    using KCompositeJob_EventFilter_Callback = bool (*)(KCompositeJob*, QObject*, QEvent*);
    using KCompositeJob_TimerEvent_Callback = void (*)(KCompositeJob*, QTimerEvent*);
    using KCompositeJob_ChildEvent_Callback = void (*)(KCompositeJob*, QChildEvent*);
    using KCompositeJob_CustomEvent_Callback = void (*)(KCompositeJob*, QEvent*);
    using KCompositeJob_ConnectNotify_Callback = void (*)(KCompositeJob*, QMetaMethod*);
    using KCompositeJob_DisconnectNotify_Callback = void (*)(KCompositeJob*, QMetaMethod*);
    using KCompositeJob_HasSubjobs_Callback = bool (*)();
    using KCompositeJob_Subjobs_Callback = libqt_list /* of KJob* */ (*)();
    using KCompositeJob_ClearSubjobs_Callback = void (*)();
    using KCompositeJob_SetCapabilities_Callback = void (*)(KCompositeJob*, int);
    using KCompositeJob_IsFinished_Callback = bool (*)();
    using KCompositeJob_SetError_Callback = void (*)(KCompositeJob*, int);
    using KCompositeJob_SetErrorText_Callback = void (*)(KCompositeJob*, const char*);
    using KCompositeJob_SetProcessedAmount_Callback = void (*)(KCompositeJob*, int, unsigned long long);
    using KCompositeJob_SetTotalAmount_Callback = void (*)(KCompositeJob*, int, unsigned long long);
    using KCompositeJob_SetProgressUnit_Callback = void (*)(KCompositeJob*, int);
    using KCompositeJob_SetPercent_Callback = void (*)(KCompositeJob*, unsigned long);
    using KCompositeJob_EmitResult_Callback = void (*)();
    using KCompositeJob_EmitPercent_Callback = void (*)(KCompositeJob*, unsigned long long, unsigned long long);
    using KCompositeJob_EmitSpeed_Callback = void (*)(KCompositeJob*, unsigned long);
    using KCompositeJob_StartElapsedTimer_Callback = void (*)();
    using KCompositeJob_Sender_Callback = QObject* (*)();
    using KCompositeJob_SenderSignalIndex_Callback = int (*)();
    using KCompositeJob_Receivers_Callback = int (*)(const KCompositeJob*, const char*);
    using KCompositeJob_IsSignalConnected_Callback = bool (*)(const KCompositeJob*, QMetaMethod*);

  protected:
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
    KCompositeJob_HasSubjobs_Callback kcompositejob_hassubjobs_callback = nullptr;
    KCompositeJob_Subjobs_Callback kcompositejob_subjobs_callback = nullptr;
    KCompositeJob_ClearSubjobs_Callback kcompositejob_clearsubjobs_callback = nullptr;
    KCompositeJob_SetCapabilities_Callback kcompositejob_setcapabilities_callback = nullptr;
    KCompositeJob_IsFinished_Callback kcompositejob_isfinished_callback = nullptr;
    KCompositeJob_SetError_Callback kcompositejob_seterror_callback = nullptr;
    KCompositeJob_SetErrorText_Callback kcompositejob_seterrortext_callback = nullptr;
    KCompositeJob_SetProcessedAmount_Callback kcompositejob_setprocessedamount_callback = nullptr;
    KCompositeJob_SetTotalAmount_Callback kcompositejob_settotalamount_callback = nullptr;
    KCompositeJob_SetProgressUnit_Callback kcompositejob_setprogressunit_callback = nullptr;
    KCompositeJob_SetPercent_Callback kcompositejob_setpercent_callback = nullptr;
    KCompositeJob_EmitResult_Callback kcompositejob_emitresult_callback = nullptr;
    KCompositeJob_EmitPercent_Callback kcompositejob_emitpercent_callback = nullptr;
    KCompositeJob_EmitSpeed_Callback kcompositejob_emitspeed_callback = nullptr;
    KCompositeJob_StartElapsedTimer_Callback kcompositejob_startelapsedtimer_callback = nullptr;
    KCompositeJob_Sender_Callback kcompositejob_sender_callback = nullptr;
    KCompositeJob_SenderSignalIndex_Callback kcompositejob_sendersignalindex_callback = nullptr;
    KCompositeJob_Receivers_Callback kcompositejob_receivers_callback = nullptr;
    KCompositeJob_IsSignalConnected_Callback kcompositejob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcompositejob_metaobject_isbase = false;
    mutable bool kcompositejob_metacast_isbase = false;
    mutable bool kcompositejob_metacall_isbase = false;
    mutable bool kcompositejob_addsubjob_isbase = false;
    mutable bool kcompositejob_removesubjob_isbase = false;
    mutable bool kcompositejob_slotresult_isbase = false;
    mutable bool kcompositejob_slotinfomessage_isbase = false;
    mutable bool kcompositejob_start_isbase = false;
    mutable bool kcompositejob_dokill_isbase = false;
    mutable bool kcompositejob_dosuspend_isbase = false;
    mutable bool kcompositejob_doresume_isbase = false;
    mutable bool kcompositejob_errorstring_isbase = false;
    mutable bool kcompositejob_event_isbase = false;
    mutable bool kcompositejob_eventfilter_isbase = false;
    mutable bool kcompositejob_timerevent_isbase = false;
    mutable bool kcompositejob_childevent_isbase = false;
    mutable bool kcompositejob_customevent_isbase = false;
    mutable bool kcompositejob_connectnotify_isbase = false;
    mutable bool kcompositejob_disconnectnotify_isbase = false;
    mutable bool kcompositejob_hassubjobs_isbase = false;
    mutable bool kcompositejob_subjobs_isbase = false;
    mutable bool kcompositejob_clearsubjobs_isbase = false;
    mutable bool kcompositejob_setcapabilities_isbase = false;
    mutable bool kcompositejob_isfinished_isbase = false;
    mutable bool kcompositejob_seterror_isbase = false;
    mutable bool kcompositejob_seterrortext_isbase = false;
    mutable bool kcompositejob_setprocessedamount_isbase = false;
    mutable bool kcompositejob_settotalamount_isbase = false;
    mutable bool kcompositejob_setprogressunit_isbase = false;
    mutable bool kcompositejob_setpercent_isbase = false;
    mutable bool kcompositejob_emitresult_isbase = false;
    mutable bool kcompositejob_emitpercent_isbase = false;
    mutable bool kcompositejob_emitspeed_isbase = false;
    mutable bool kcompositejob_startelapsedtimer_isbase = false;
    mutable bool kcompositejob_sender_isbase = false;
    mutable bool kcompositejob_sendersignalindex_isbase = false;
    mutable bool kcompositejob_receivers_isbase = false;
    mutable bool kcompositejob_issignalconnected_isbase = false;

  public:
    VirtualKCompositeJob() : KCompositeJob() {};
    VirtualKCompositeJob(QObject* parent) : KCompositeJob(parent) {};

    // Callback setters
    inline void setKCompositeJob_MetaObject_Callback(KCompositeJob_MetaObject_Callback cb) { kcompositejob_metaobject_callback = cb; }
    inline void setKCompositeJob_Metacast_Callback(KCompositeJob_Metacast_Callback cb) { kcompositejob_metacast_callback = cb; }
    inline void setKCompositeJob_Metacall_Callback(KCompositeJob_Metacall_Callback cb) { kcompositejob_metacall_callback = cb; }
    inline void setKCompositeJob_AddSubjob_Callback(KCompositeJob_AddSubjob_Callback cb) { kcompositejob_addsubjob_callback = cb; }
    inline void setKCompositeJob_RemoveSubjob_Callback(KCompositeJob_RemoveSubjob_Callback cb) { kcompositejob_removesubjob_callback = cb; }
    inline void setKCompositeJob_SlotResult_Callback(KCompositeJob_SlotResult_Callback cb) { kcompositejob_slotresult_callback = cb; }
    inline void setKCompositeJob_SlotInfoMessage_Callback(KCompositeJob_SlotInfoMessage_Callback cb) { kcompositejob_slotinfomessage_callback = cb; }
    inline void setKCompositeJob_Start_Callback(KCompositeJob_Start_Callback cb) { kcompositejob_start_callback = cb; }
    inline void setKCompositeJob_DoKill_Callback(KCompositeJob_DoKill_Callback cb) { kcompositejob_dokill_callback = cb; }
    inline void setKCompositeJob_DoSuspend_Callback(KCompositeJob_DoSuspend_Callback cb) { kcompositejob_dosuspend_callback = cb; }
    inline void setKCompositeJob_DoResume_Callback(KCompositeJob_DoResume_Callback cb) { kcompositejob_doresume_callback = cb; }
    inline void setKCompositeJob_ErrorString_Callback(KCompositeJob_ErrorString_Callback cb) { kcompositejob_errorstring_callback = cb; }
    inline void setKCompositeJob_Event_Callback(KCompositeJob_Event_Callback cb) { kcompositejob_event_callback = cb; }
    inline void setKCompositeJob_EventFilter_Callback(KCompositeJob_EventFilter_Callback cb) { kcompositejob_eventfilter_callback = cb; }
    inline void setKCompositeJob_TimerEvent_Callback(KCompositeJob_TimerEvent_Callback cb) { kcompositejob_timerevent_callback = cb; }
    inline void setKCompositeJob_ChildEvent_Callback(KCompositeJob_ChildEvent_Callback cb) { kcompositejob_childevent_callback = cb; }
    inline void setKCompositeJob_CustomEvent_Callback(KCompositeJob_CustomEvent_Callback cb) { kcompositejob_customevent_callback = cb; }
    inline void setKCompositeJob_ConnectNotify_Callback(KCompositeJob_ConnectNotify_Callback cb) { kcompositejob_connectnotify_callback = cb; }
    inline void setKCompositeJob_DisconnectNotify_Callback(KCompositeJob_DisconnectNotify_Callback cb) { kcompositejob_disconnectnotify_callback = cb; }
    inline void setKCompositeJob_HasSubjobs_Callback(KCompositeJob_HasSubjobs_Callback cb) { kcompositejob_hassubjobs_callback = cb; }
    inline void setKCompositeJob_Subjobs_Callback(KCompositeJob_Subjobs_Callback cb) { kcompositejob_subjobs_callback = cb; }
    inline void setKCompositeJob_ClearSubjobs_Callback(KCompositeJob_ClearSubjobs_Callback cb) { kcompositejob_clearsubjobs_callback = cb; }
    inline void setKCompositeJob_SetCapabilities_Callback(KCompositeJob_SetCapabilities_Callback cb) { kcompositejob_setcapabilities_callback = cb; }
    inline void setKCompositeJob_IsFinished_Callback(KCompositeJob_IsFinished_Callback cb) { kcompositejob_isfinished_callback = cb; }
    inline void setKCompositeJob_SetError_Callback(KCompositeJob_SetError_Callback cb) { kcompositejob_seterror_callback = cb; }
    inline void setKCompositeJob_SetErrorText_Callback(KCompositeJob_SetErrorText_Callback cb) { kcompositejob_seterrortext_callback = cb; }
    inline void setKCompositeJob_SetProcessedAmount_Callback(KCompositeJob_SetProcessedAmount_Callback cb) { kcompositejob_setprocessedamount_callback = cb; }
    inline void setKCompositeJob_SetTotalAmount_Callback(KCompositeJob_SetTotalAmount_Callback cb) { kcompositejob_settotalamount_callback = cb; }
    inline void setKCompositeJob_SetProgressUnit_Callback(KCompositeJob_SetProgressUnit_Callback cb) { kcompositejob_setprogressunit_callback = cb; }
    inline void setKCompositeJob_SetPercent_Callback(KCompositeJob_SetPercent_Callback cb) { kcompositejob_setpercent_callback = cb; }
    inline void setKCompositeJob_EmitResult_Callback(KCompositeJob_EmitResult_Callback cb) { kcompositejob_emitresult_callback = cb; }
    inline void setKCompositeJob_EmitPercent_Callback(KCompositeJob_EmitPercent_Callback cb) { kcompositejob_emitpercent_callback = cb; }
    inline void setKCompositeJob_EmitSpeed_Callback(KCompositeJob_EmitSpeed_Callback cb) { kcompositejob_emitspeed_callback = cb; }
    inline void setKCompositeJob_StartElapsedTimer_Callback(KCompositeJob_StartElapsedTimer_Callback cb) { kcompositejob_startelapsedtimer_callback = cb; }
    inline void setKCompositeJob_Sender_Callback(KCompositeJob_Sender_Callback cb) { kcompositejob_sender_callback = cb; }
    inline void setKCompositeJob_SenderSignalIndex_Callback(KCompositeJob_SenderSignalIndex_Callback cb) { kcompositejob_sendersignalindex_callback = cb; }
    inline void setKCompositeJob_Receivers_Callback(KCompositeJob_Receivers_Callback cb) { kcompositejob_receivers_callback = cb; }
    inline void setKCompositeJob_IsSignalConnected_Callback(KCompositeJob_IsSignalConnected_Callback cb) { kcompositejob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKCompositeJob_MetaObject_IsBase(bool value) const { kcompositejob_metaobject_isbase = value; }
    inline void setKCompositeJob_Metacast_IsBase(bool value) const { kcompositejob_metacast_isbase = value; }
    inline void setKCompositeJob_Metacall_IsBase(bool value) const { kcompositejob_metacall_isbase = value; }
    inline void setKCompositeJob_AddSubjob_IsBase(bool value) const { kcompositejob_addsubjob_isbase = value; }
    inline void setKCompositeJob_RemoveSubjob_IsBase(bool value) const { kcompositejob_removesubjob_isbase = value; }
    inline void setKCompositeJob_SlotResult_IsBase(bool value) const { kcompositejob_slotresult_isbase = value; }
    inline void setKCompositeJob_SlotInfoMessage_IsBase(bool value) const { kcompositejob_slotinfomessage_isbase = value; }
    inline void setKCompositeJob_Start_IsBase(bool value) const { kcompositejob_start_isbase = value; }
    inline void setKCompositeJob_DoKill_IsBase(bool value) const { kcompositejob_dokill_isbase = value; }
    inline void setKCompositeJob_DoSuspend_IsBase(bool value) const { kcompositejob_dosuspend_isbase = value; }
    inline void setKCompositeJob_DoResume_IsBase(bool value) const { kcompositejob_doresume_isbase = value; }
    inline void setKCompositeJob_ErrorString_IsBase(bool value) const { kcompositejob_errorstring_isbase = value; }
    inline void setKCompositeJob_Event_IsBase(bool value) const { kcompositejob_event_isbase = value; }
    inline void setKCompositeJob_EventFilter_IsBase(bool value) const { kcompositejob_eventfilter_isbase = value; }
    inline void setKCompositeJob_TimerEvent_IsBase(bool value) const { kcompositejob_timerevent_isbase = value; }
    inline void setKCompositeJob_ChildEvent_IsBase(bool value) const { kcompositejob_childevent_isbase = value; }
    inline void setKCompositeJob_CustomEvent_IsBase(bool value) const { kcompositejob_customevent_isbase = value; }
    inline void setKCompositeJob_ConnectNotify_IsBase(bool value) const { kcompositejob_connectnotify_isbase = value; }
    inline void setKCompositeJob_DisconnectNotify_IsBase(bool value) const { kcompositejob_disconnectnotify_isbase = value; }
    inline void setKCompositeJob_HasSubjobs_IsBase(bool value) const { kcompositejob_hassubjobs_isbase = value; }
    inline void setKCompositeJob_Subjobs_IsBase(bool value) const { kcompositejob_subjobs_isbase = value; }
    inline void setKCompositeJob_ClearSubjobs_IsBase(bool value) const { kcompositejob_clearsubjobs_isbase = value; }
    inline void setKCompositeJob_SetCapabilities_IsBase(bool value) const { kcompositejob_setcapabilities_isbase = value; }
    inline void setKCompositeJob_IsFinished_IsBase(bool value) const { kcompositejob_isfinished_isbase = value; }
    inline void setKCompositeJob_SetError_IsBase(bool value) const { kcompositejob_seterror_isbase = value; }
    inline void setKCompositeJob_SetErrorText_IsBase(bool value) const { kcompositejob_seterrortext_isbase = value; }
    inline void setKCompositeJob_SetProcessedAmount_IsBase(bool value) const { kcompositejob_setprocessedamount_isbase = value; }
    inline void setKCompositeJob_SetTotalAmount_IsBase(bool value) const { kcompositejob_settotalamount_isbase = value; }
    inline void setKCompositeJob_SetProgressUnit_IsBase(bool value) const { kcompositejob_setprogressunit_isbase = value; }
    inline void setKCompositeJob_SetPercent_IsBase(bool value) const { kcompositejob_setpercent_isbase = value; }
    inline void setKCompositeJob_EmitResult_IsBase(bool value) const { kcompositejob_emitresult_isbase = value; }
    inline void setKCompositeJob_EmitPercent_IsBase(bool value) const { kcompositejob_emitpercent_isbase = value; }
    inline void setKCompositeJob_EmitSpeed_IsBase(bool value) const { kcompositejob_emitspeed_isbase = value; }
    inline void setKCompositeJob_StartElapsedTimer_IsBase(bool value) const { kcompositejob_startelapsedtimer_isbase = value; }
    inline void setKCompositeJob_Sender_IsBase(bool value) const { kcompositejob_sender_isbase = value; }
    inline void setKCompositeJob_SenderSignalIndex_IsBase(bool value) const { kcompositejob_sendersignalindex_isbase = value; }
    inline void setKCompositeJob_Receivers_IsBase(bool value) const { kcompositejob_receivers_isbase = value; }
    inline void setKCompositeJob_IsSignalConnected_IsBase(bool value) const { kcompositejob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcompositejob_metaobject_isbase) {
            kcompositejob_metaobject_isbase = false;
            return KCompositeJob::metaObject();
        }
        auto metaobject_cb = kcompositejob_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KCompositeJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcompositejob_metacast_isbase) {
            kcompositejob_metacast_isbase = false;
            return KCompositeJob::qt_metacast(param1);
        }
        auto metacast_cb = kcompositejob_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KCompositeJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcompositejob_metacall_isbase) {
            kcompositejob_metacall_isbase = false;
            return KCompositeJob::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kcompositejob_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCompositeJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kcompositejob_addsubjob_isbase) {
            kcompositejob_addsubjob_isbase = false;
            return KCompositeJob::addSubjob(job);
        }
        auto addsubjob_cb = kcompositejob_addsubjob_callback;
        if (addsubjob_cb) {
            KJob* cbval1 = job;

            bool callback_ret = addsubjob_cb(this, cbval1);
            return callback_ret;
        }
        return KCompositeJob::addSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kcompositejob_removesubjob_isbase) {
            kcompositejob_removesubjob_isbase = false;
            return KCompositeJob::removeSubjob(job);
        }
        auto removesubjob_cb = kcompositejob_removesubjob_callback;
        if (removesubjob_cb) {
            KJob* cbval1 = job;

            bool callback_ret = removesubjob_cb(this, cbval1);
            return callback_ret;
        }
        return KCompositeJob::removeSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResult(KJob* job) override {
        if (kcompositejob_slotresult_isbase) {
            kcompositejob_slotresult_isbase = false;
            KCompositeJob::slotResult(job);
            return;
        }
        auto slotresult_cb = kcompositejob_slotresult_callback;
        if (slotresult_cb) {
            KJob* cbval1 = job;

            slotresult_cb(this, cbval1);
            return;
        }
        KCompositeJob::slotResult(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kcompositejob_slotinfomessage_isbase) {
            kcompositejob_slotinfomessage_isbase = false;
            KCompositeJob::slotInfoMessage(job, message);
            return;
        }
        auto slotinfomessage_cb = kcompositejob_slotinfomessage_callback;
        if (slotinfomessage_cb) {
            KJob* cbval1 = job;
            const QString message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            auto message_str_len = message_b.length();
            const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
            memcpy((void*)message_str, message_b.data(), message_str_len);
            ((char*)message_str)[message_str_len] = '\0';
            const char* cbval2 = message_str;

            slotinfomessage_cb(this, cbval1, cbval2);
            libqt_free(message_str);
            return;
        }
        KCompositeJob::slotInfoMessage(job, message);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        auto start_cb = kcompositejob_start_callback;
        if (start_cb) {
            start_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kcompositejob_dokill_isbase) {
            kcompositejob_dokill_isbase = false;
            return KCompositeJob::doKill();
        }
        auto dokill_cb = kcompositejob_dokill_callback;
        if (dokill_cb) {
            bool callback_ret = dokill_cb();
            return callback_ret;
        }
        return KCompositeJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kcompositejob_dosuspend_isbase) {
            kcompositejob_dosuspend_isbase = false;
            return KCompositeJob::doSuspend();
        }
        auto dosuspend_cb = kcompositejob_dosuspend_callback;
        if (dosuspend_cb) {
            bool callback_ret = dosuspend_cb();
            return callback_ret;
        }
        return KCompositeJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kcompositejob_doresume_isbase) {
            kcompositejob_doresume_isbase = false;
            return KCompositeJob::doResume();
        }
        auto doresume_cb = kcompositejob_doresume_callback;
        if (doresume_cb) {
            bool callback_ret = doresume_cb();
            return callback_ret;
        }
        return KCompositeJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kcompositejob_errorstring_isbase) {
            kcompositejob_errorstring_isbase = false;
            return KCompositeJob::errorString();
        }
        auto errorstring_cb = kcompositejob_errorstring_callback;
        if (errorstring_cb) {
            const char* callback_ret = errorstring_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KCompositeJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcompositejob_event_isbase) {
            kcompositejob_event_isbase = false;
            return KCompositeJob::event(event);
        }
        auto event_cb = kcompositejob_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KCompositeJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcompositejob_eventfilter_isbase) {
            kcompositejob_eventfilter_isbase = false;
            return KCompositeJob::eventFilter(watched, event);
        }
        auto eventfilter_cb = kcompositejob_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCompositeJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcompositejob_timerevent_isbase) {
            kcompositejob_timerevent_isbase = false;
            KCompositeJob::timerEvent(event);
            return;
        }
        auto timerevent_cb = kcompositejob_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KCompositeJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcompositejob_childevent_isbase) {
            kcompositejob_childevent_isbase = false;
            KCompositeJob::childEvent(event);
            return;
        }
        auto childevent_cb = kcompositejob_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KCompositeJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcompositejob_customevent_isbase) {
            kcompositejob_customevent_isbase = false;
            KCompositeJob::customEvent(event);
            return;
        }
        auto customevent_cb = kcompositejob_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KCompositeJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcompositejob_connectnotify_isbase) {
            kcompositejob_connectnotify_isbase = false;
            KCompositeJob::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kcompositejob_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KCompositeJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcompositejob_disconnectnotify_isbase) {
            kcompositejob_disconnectnotify_isbase = false;
            KCompositeJob::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kcompositejob_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KCompositeJob::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool hasSubjobs() const {
        if (kcompositejob_hassubjobs_isbase) {
            kcompositejob_hassubjobs_isbase = false;
            return KCompositeJob::hasSubjobs();
        }
        auto hassubjobs_cb = kcompositejob_hassubjobs_callback;
        if (hassubjobs_cb) {
            bool callback_ret = hassubjobs_cb();
            return callback_ret;
        }
        return KCompositeJob::hasSubjobs();
    }

    // Virtual method for C ABI access and custom callback
    const QList<KJob*>& subjobs() const {
        if (kcompositejob_subjobs_isbase) {
            kcompositejob_subjobs_isbase = false;
            return KCompositeJob::subjobs();
        }
        auto subjobs_cb = kcompositejob_subjobs_callback;
        if (subjobs_cb) {
            libqt_list /* of KJob* */ callback_ret = subjobs_cb();
            QList<KJob*>* callback_ret_QList;
            callback_ret_QList->reserve(callback_ret.len);
            KJob** callback_ret_arr = static_cast<KJob**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList->push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return *callback_ret_QList;
        }
        return KCompositeJob::subjobs();
    }

    // Virtual method for C ABI access and custom callback
    void clearSubjobs() {
        if (kcompositejob_clearsubjobs_isbase) {
            kcompositejob_clearsubjobs_isbase = false;
            KCompositeJob::clearSubjobs();
            return;
        }
        auto clearsubjobs_cb = kcompositejob_clearsubjobs_callback;
        if (clearsubjobs_cb) {
            clearsubjobs_cb();
            return;
        }
        KCompositeJob::clearSubjobs();
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kcompositejob_setcapabilities_isbase) {
            kcompositejob_setcapabilities_isbase = false;
            KCompositeJob::setCapabilities(capabilities);
            return;
        }
        auto setcapabilities_cb = kcompositejob_setcapabilities_callback;
        if (setcapabilities_cb) {
            int cbval1 = static_cast<int>(capabilities);

            setcapabilities_cb(this, cbval1);
            return;
        }
        KCompositeJob::setCapabilities(capabilities);
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kcompositejob_isfinished_isbase) {
            kcompositejob_isfinished_isbase = false;
            return KCompositeJob::isFinished();
        }
        auto isfinished_cb = kcompositejob_isfinished_callback;
        if (isfinished_cb) {
            bool callback_ret = isfinished_cb();
            return callback_ret;
        }
        return KCompositeJob::isFinished();
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kcompositejob_seterror_isbase) {
            kcompositejob_seterror_isbase = false;
            KCompositeJob::setError(errorCode);
            return;
        }
        auto seterror_cb = kcompositejob_seterror_callback;
        if (seterror_cb) {
            int cbval1 = errorCode;

            seterror_cb(this, cbval1);
            return;
        }
        KCompositeJob::setError(errorCode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kcompositejob_seterrortext_isbase) {
            kcompositejob_seterrortext_isbase = false;
            KCompositeJob::setErrorText(errorText);
            return;
        }
        auto seterrortext_cb = kcompositejob_seterrortext_callback;
        if (seterrortext_cb) {
            const QString errorText_ret = errorText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray errorText_b = errorText_ret.toUtf8();
            auto errorText_str_len = errorText_b.length();
            const char* errorText_str = static_cast<const char*>(malloc(errorText_str_len + 1));
            memcpy((void*)errorText_str, errorText_b.data(), errorText_str_len);
            ((char*)errorText_str)[errorText_str_len] = '\0';
            const char* cbval1 = errorText_str;

            seterrortext_cb(this, cbval1);
            libqt_free(errorText_str);
            return;
        }
        KCompositeJob::setErrorText(errorText);
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kcompositejob_setprocessedamount_isbase) {
            kcompositejob_setprocessedamount_isbase = false;
            KCompositeJob::setProcessedAmount(unit, amount);
            return;
        }
        auto setprocessedamount_cb = kcompositejob_setprocessedamount_callback;
        if (setprocessedamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            setprocessedamount_cb(this, cbval1, cbval2);
            return;
        }
        KCompositeJob::setProcessedAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kcompositejob_settotalamount_isbase) {
            kcompositejob_settotalamount_isbase = false;
            KCompositeJob::setTotalAmount(unit, amount);
            return;
        }
        auto settotalamount_cb = kcompositejob_settotalamount_callback;
        if (settotalamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            settotalamount_cb(this, cbval1, cbval2);
            return;
        }
        KCompositeJob::setTotalAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kcompositejob_setprogressunit_isbase) {
            kcompositejob_setprogressunit_isbase = false;
            KCompositeJob::setProgressUnit(unit);
            return;
        }
        auto setprogressunit_cb = kcompositejob_setprogressunit_callback;
        if (setprogressunit_cb) {
            int cbval1 = static_cast<int>(unit);

            setprogressunit_cb(this, cbval1);
            return;
        }
        KCompositeJob::setProgressUnit(unit);
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kcompositejob_setpercent_isbase) {
            kcompositejob_setpercent_isbase = false;
            KCompositeJob::setPercent(percentage);
            return;
        }
        auto setpercent_cb = kcompositejob_setpercent_callback;
        if (setpercent_cb) {
            unsigned long cbval1 = percentage;

            setpercent_cb(this, cbval1);
            return;
        }
        KCompositeJob::setPercent(percentage);
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kcompositejob_emitresult_isbase) {
            kcompositejob_emitresult_isbase = false;
            KCompositeJob::emitResult();
            return;
        }
        auto emitresult_cb = kcompositejob_emitresult_callback;
        if (emitresult_cb) {
            emitresult_cb();
            return;
        }
        KCompositeJob::emitResult();
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kcompositejob_emitpercent_isbase) {
            kcompositejob_emitpercent_isbase = false;
            KCompositeJob::emitPercent(processedAmount, totalAmount);
            return;
        }
        auto emitpercent_cb = kcompositejob_emitpercent_callback;
        if (emitpercent_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            emitpercent_cb(this, cbval1, cbval2);
            return;
        }
        KCompositeJob::emitPercent(processedAmount, totalAmount);
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kcompositejob_emitspeed_isbase) {
            kcompositejob_emitspeed_isbase = false;
            KCompositeJob::emitSpeed(speed);
            return;
        }
        auto emitspeed_cb = kcompositejob_emitspeed_callback;
        if (emitspeed_cb) {
            unsigned long cbval1 = speed;

            emitspeed_cb(this, cbval1);
            return;
        }
        KCompositeJob::emitSpeed(speed);
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kcompositejob_startelapsedtimer_isbase) {
            kcompositejob_startelapsedtimer_isbase = false;
            KCompositeJob::startElapsedTimer();
            return;
        }
        auto startelapsedtimer_cb = kcompositejob_startelapsedtimer_callback;
        if (startelapsedtimer_cb) {
            startelapsedtimer_cb();
            return;
        }
        KCompositeJob::startElapsedTimer();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcompositejob_sender_isbase) {
            kcompositejob_sender_isbase = false;
            return KCompositeJob::sender();
        }
        auto sender_cb = kcompositejob_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KCompositeJob::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcompositejob_sendersignalindex_isbase) {
            kcompositejob_sendersignalindex_isbase = false;
            return KCompositeJob::senderSignalIndex();
        }
        auto sendersignalindex_cb = kcompositejob_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KCompositeJob::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcompositejob_receivers_isbase) {
            kcompositejob_receivers_isbase = false;
            return KCompositeJob::receivers(signal);
        }
        auto receivers_cb = kcompositejob_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCompositeJob::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcompositejob_issignalconnected_isbase) {
            kcompositejob_issignalconnected_isbase = false;
            return KCompositeJob::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kcompositejob_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KCompositeJob::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KCompositeJob_AddSubjob(KCompositeJob* self, KJob* job);
    friend bool KCompositeJob_SuperAddSubjob(KCompositeJob* self, KJob* job);
    friend bool KCompositeJob_RemoveSubjob(KCompositeJob* self, KJob* job);
    friend bool KCompositeJob_SuperRemoveSubjob(KCompositeJob* self, KJob* job);
    friend void KCompositeJob_SlotResult(KCompositeJob* self, KJob* job);
    friend void KCompositeJob_SuperSlotResult(KCompositeJob* self, KJob* job);
    friend void KCompositeJob_SlotInfoMessage(KCompositeJob* self, KJob* job, const libqt_string message);
    friend void KCompositeJob_SuperSlotInfoMessage(KCompositeJob* self, KJob* job, const libqt_string message);
    friend bool KCompositeJob_DoKill(KCompositeJob* self);
    friend bool KCompositeJob_SuperDoKill(KCompositeJob* self);
    friend bool KCompositeJob_DoSuspend(KCompositeJob* self);
    friend bool KCompositeJob_SuperDoSuspend(KCompositeJob* self);
    friend bool KCompositeJob_DoResume(KCompositeJob* self);
    friend bool KCompositeJob_SuperDoResume(KCompositeJob* self);
    friend void KCompositeJob_TimerEvent(KCompositeJob* self, QTimerEvent* event);
    friend void KCompositeJob_SuperTimerEvent(KCompositeJob* self, QTimerEvent* event);
    friend void KCompositeJob_ChildEvent(KCompositeJob* self, QChildEvent* event);
    friend void KCompositeJob_SuperChildEvent(KCompositeJob* self, QChildEvent* event);
    friend void KCompositeJob_CustomEvent(KCompositeJob* self, QEvent* event);
    friend void KCompositeJob_SuperCustomEvent(KCompositeJob* self, QEvent* event);
    friend void KCompositeJob_ConnectNotify(KCompositeJob* self, const QMetaMethod* signal);
    friend void KCompositeJob_SuperConnectNotify(KCompositeJob* self, const QMetaMethod* signal);
    friend void KCompositeJob_DisconnectNotify(KCompositeJob* self, const QMetaMethod* signal);
    friend void KCompositeJob_SuperDisconnectNotify(KCompositeJob* self, const QMetaMethod* signal);
    friend bool KCompositeJob_HasSubjobs(const KCompositeJob* self);
    friend bool KCompositeJob_SuperHasSubjobs(const KCompositeJob* self);
    friend libqt_list /* of KJob* */ KCompositeJob_Subjobs(const KCompositeJob* self);
    friend libqt_list /* of KJob* */ KCompositeJob_SuperSubjobs(const KCompositeJob* self);
    friend void KCompositeJob_ClearSubjobs(KCompositeJob* self);
    friend void KCompositeJob_SuperClearSubjobs(KCompositeJob* self);
    friend void KCompositeJob_SetCapabilities(KCompositeJob* self, int capabilities);
    friend void KCompositeJob_SuperSetCapabilities(KCompositeJob* self, int capabilities);
    friend bool KCompositeJob_IsFinished(const KCompositeJob* self);
    friend bool KCompositeJob_SuperIsFinished(const KCompositeJob* self);
    friend void KCompositeJob_SetError(KCompositeJob* self, int errorCode);
    friend void KCompositeJob_SuperSetError(KCompositeJob* self, int errorCode);
    friend void KCompositeJob_SetErrorText(KCompositeJob* self, const libqt_string errorText);
    friend void KCompositeJob_SuperSetErrorText(KCompositeJob* self, const libqt_string errorText);
    friend void KCompositeJob_SetProcessedAmount(KCompositeJob* self, int unit, unsigned long long amount);
    friend void KCompositeJob_SuperSetProcessedAmount(KCompositeJob* self, int unit, unsigned long long amount);
    friend void KCompositeJob_SetTotalAmount(KCompositeJob* self, int unit, unsigned long long amount);
    friend void KCompositeJob_SuperSetTotalAmount(KCompositeJob* self, int unit, unsigned long long amount);
    friend void KCompositeJob_SetProgressUnit(KCompositeJob* self, int unit);
    friend void KCompositeJob_SuperSetProgressUnit(KCompositeJob* self, int unit);
    friend void KCompositeJob_SetPercent(KCompositeJob* self, unsigned long percentage);
    friend void KCompositeJob_SuperSetPercent(KCompositeJob* self, unsigned long percentage);
    friend void KCompositeJob_EmitResult(KCompositeJob* self);
    friend void KCompositeJob_SuperEmitResult(KCompositeJob* self);
    friend void KCompositeJob_EmitPercent(KCompositeJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KCompositeJob_SuperEmitPercent(KCompositeJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KCompositeJob_EmitSpeed(KCompositeJob* self, unsigned long speed);
    friend void KCompositeJob_SuperEmitSpeed(KCompositeJob* self, unsigned long speed);
    friend void KCompositeJob_StartElapsedTimer(KCompositeJob* self);
    friend void KCompositeJob_SuperStartElapsedTimer(KCompositeJob* self);
    friend QObject* KCompositeJob_Sender(const KCompositeJob* self);
    friend QObject* KCompositeJob_SuperSender(const KCompositeJob* self);
    friend int KCompositeJob_SenderSignalIndex(const KCompositeJob* self);
    friend int KCompositeJob_SuperSenderSignalIndex(const KCompositeJob* self);
    friend int KCompositeJob_Receivers(const KCompositeJob* self, const char* signal);
    friend int KCompositeJob_SuperReceivers(const KCompositeJob* self, const char* signal);
    friend bool KCompositeJob_IsSignalConnected(const KCompositeJob* self, const QMetaMethod* signal);
    friend bool KCompositeJob_SuperIsSignalConnected(const KCompositeJob* self, const QMetaMethod* signal);
};

#endif
