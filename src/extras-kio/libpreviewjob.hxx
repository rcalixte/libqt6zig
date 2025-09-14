#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALPREVIEWJOB_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALPREVIEWJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::PreviewJob so that we can call protected methods
class VirtualKIOPreviewJob final : public KIO::PreviewJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOPreviewJob = true;

    // Virtual class public types (including callbacks)
    using KIO__PreviewJob_Metacall_Callback = int (*)(KIO__PreviewJob*, int, int, void**);
    using KIO__PreviewJob_SlotResult_Callback = void (*)(KIO__PreviewJob*, KJob*);
    using KIO__PreviewJob_Start_Callback = void (*)();
    using KIO__PreviewJob_DoKill_Callback = bool (*)();
    using KIO__PreviewJob_DoSuspend_Callback = bool (*)();
    using KIO__PreviewJob_DoResume_Callback = bool (*)();
    using KIO__PreviewJob_ErrorString_Callback = const char* (*)();
    using KIO__PreviewJob_AddSubjob_Callback = bool (*)(KIO__PreviewJob*, KJob*);
    using KIO__PreviewJob_RemoveSubjob_Callback = bool (*)(KIO__PreviewJob*, KJob*);
    using KIO__PreviewJob_SlotInfoMessage_Callback = void (*)(KIO__PreviewJob*, KJob*, libqt_string);
    using KIO__PreviewJob_Event_Callback = bool (*)(KIO__PreviewJob*, QEvent*);
    using KIO__PreviewJob_EventFilter_Callback = bool (*)(KIO__PreviewJob*, QObject*, QEvent*);
    using KIO__PreviewJob_TimerEvent_Callback = void (*)(KIO__PreviewJob*, QTimerEvent*);
    using KIO__PreviewJob_ChildEvent_Callback = void (*)(KIO__PreviewJob*, QChildEvent*);
    using KIO__PreviewJob_CustomEvent_Callback = void (*)(KIO__PreviewJob*, QEvent*);
    using KIO__PreviewJob_ConnectNotify_Callback = void (*)(KIO__PreviewJob*, QMetaMethod*);
    using KIO__PreviewJob_DisconnectNotify_Callback = void (*)(KIO__PreviewJob*, QMetaMethod*);
    using KIO__PreviewJob_HasSubjobs_Callback = bool (*)();
    using KIO__PreviewJob_Subjobs_Callback = KJob** (*)();
    using KIO__PreviewJob_ClearSubjobs_Callback = void (*)();
    using KIO__PreviewJob_SetCapabilities_Callback = void (*)(KIO__PreviewJob*, int);
    using KIO__PreviewJob_IsFinished_Callback = bool (*)();
    using KIO__PreviewJob_SetError_Callback = void (*)(KIO__PreviewJob*, int);
    using KIO__PreviewJob_SetErrorText_Callback = void (*)(KIO__PreviewJob*, libqt_string);
    using KIO__PreviewJob_SetProcessedAmount_Callback = void (*)(KIO__PreviewJob*, int, unsigned long long);
    using KIO__PreviewJob_SetTotalAmount_Callback = void (*)(KIO__PreviewJob*, int, unsigned long long);
    using KIO__PreviewJob_SetProgressUnit_Callback = void (*)(KIO__PreviewJob*, int);
    using KIO__PreviewJob_SetPercent_Callback = void (*)(KIO__PreviewJob*, unsigned long);
    using KIO__PreviewJob_EmitResult_Callback = void (*)();
    using KIO__PreviewJob_EmitPercent_Callback = void (*)(KIO__PreviewJob*, unsigned long long, unsigned long long);
    using KIO__PreviewJob_EmitSpeed_Callback = void (*)(KIO__PreviewJob*, unsigned long);
    using KIO__PreviewJob_StartElapsedTimer_Callback = void (*)();
    using KIO__PreviewJob_Sender_Callback = QObject* (*)();
    using KIO__PreviewJob_SenderSignalIndex_Callback = int (*)();
    using KIO__PreviewJob_Receivers_Callback = int (*)(const KIO__PreviewJob*, const char*);
    using KIO__PreviewJob_IsSignalConnected_Callback = bool (*)(const KIO__PreviewJob*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KIO__PreviewJob_HasSubjobs_Callback kio__previewjob_hassubjobs_callback = nullptr;
    KIO__PreviewJob_Subjobs_Callback kio__previewjob_subjobs_callback = nullptr;
    KIO__PreviewJob_ClearSubjobs_Callback kio__previewjob_clearsubjobs_callback = nullptr;
    KIO__PreviewJob_SetCapabilities_Callback kio__previewjob_setcapabilities_callback = nullptr;
    KIO__PreviewJob_IsFinished_Callback kio__previewjob_isfinished_callback = nullptr;
    KIO__PreviewJob_SetError_Callback kio__previewjob_seterror_callback = nullptr;
    KIO__PreviewJob_SetErrorText_Callback kio__previewjob_seterrortext_callback = nullptr;
    KIO__PreviewJob_SetProcessedAmount_Callback kio__previewjob_setprocessedamount_callback = nullptr;
    KIO__PreviewJob_SetTotalAmount_Callback kio__previewjob_settotalamount_callback = nullptr;
    KIO__PreviewJob_SetProgressUnit_Callback kio__previewjob_setprogressunit_callback = nullptr;
    KIO__PreviewJob_SetPercent_Callback kio__previewjob_setpercent_callback = nullptr;
    KIO__PreviewJob_EmitResult_Callback kio__previewjob_emitresult_callback = nullptr;
    KIO__PreviewJob_EmitPercent_Callback kio__previewjob_emitpercent_callback = nullptr;
    KIO__PreviewJob_EmitSpeed_Callback kio__previewjob_emitspeed_callback = nullptr;
    KIO__PreviewJob_StartElapsedTimer_Callback kio__previewjob_startelapsedtimer_callback = nullptr;
    KIO__PreviewJob_Sender_Callback kio__previewjob_sender_callback = nullptr;
    KIO__PreviewJob_SenderSignalIndex_Callback kio__previewjob_sendersignalindex_callback = nullptr;
    KIO__PreviewJob_Receivers_Callback kio__previewjob_receivers_callback = nullptr;
    KIO__PreviewJob_IsSignalConnected_Callback kio__previewjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__previewjob_metacall_isbase = false;
    mutable bool kio__previewjob_slotresult_isbase = false;
    mutable bool kio__previewjob_start_isbase = false;
    mutable bool kio__previewjob_dokill_isbase = false;
    mutable bool kio__previewjob_dosuspend_isbase = false;
    mutable bool kio__previewjob_doresume_isbase = false;
    mutable bool kio__previewjob_errorstring_isbase = false;
    mutable bool kio__previewjob_addsubjob_isbase = false;
    mutable bool kio__previewjob_removesubjob_isbase = false;
    mutable bool kio__previewjob_slotinfomessage_isbase = false;
    mutable bool kio__previewjob_event_isbase = false;
    mutable bool kio__previewjob_eventfilter_isbase = false;
    mutable bool kio__previewjob_timerevent_isbase = false;
    mutable bool kio__previewjob_childevent_isbase = false;
    mutable bool kio__previewjob_customevent_isbase = false;
    mutable bool kio__previewjob_connectnotify_isbase = false;
    mutable bool kio__previewjob_disconnectnotify_isbase = false;
    mutable bool kio__previewjob_hassubjobs_isbase = false;
    mutable bool kio__previewjob_subjobs_isbase = false;
    mutable bool kio__previewjob_clearsubjobs_isbase = false;
    mutable bool kio__previewjob_setcapabilities_isbase = false;
    mutable bool kio__previewjob_isfinished_isbase = false;
    mutable bool kio__previewjob_seterror_isbase = false;
    mutable bool kio__previewjob_seterrortext_isbase = false;
    mutable bool kio__previewjob_setprocessedamount_isbase = false;
    mutable bool kio__previewjob_settotalamount_isbase = false;
    mutable bool kio__previewjob_setprogressunit_isbase = false;
    mutable bool kio__previewjob_setpercent_isbase = false;
    mutable bool kio__previewjob_emitresult_isbase = false;
    mutable bool kio__previewjob_emitpercent_isbase = false;
    mutable bool kio__previewjob_emitspeed_isbase = false;
    mutable bool kio__previewjob_startelapsedtimer_isbase = false;
    mutable bool kio__previewjob_sender_isbase = false;
    mutable bool kio__previewjob_sendersignalindex_isbase = false;
    mutable bool kio__previewjob_receivers_isbase = false;
    mutable bool kio__previewjob_issignalconnected_isbase = false;

  public:
    VirtualKIOPreviewJob(const KFileItemList& items, const QSize& size) : KIO::PreviewJob(items, size) {};
    VirtualKIOPreviewJob(const KFileItemList& items, const QSize& size, const QList<QString>* enabledPlugins) : KIO::PreviewJob(items, size, enabledPlugins) {};

    ~VirtualKIOPreviewJob() {
        kio__previewjob_metacall_callback = nullptr;
        kio__previewjob_slotresult_callback = nullptr;
        kio__previewjob_start_callback = nullptr;
        kio__previewjob_dokill_callback = nullptr;
        kio__previewjob_dosuspend_callback = nullptr;
        kio__previewjob_doresume_callback = nullptr;
        kio__previewjob_errorstring_callback = nullptr;
        kio__previewjob_addsubjob_callback = nullptr;
        kio__previewjob_removesubjob_callback = nullptr;
        kio__previewjob_slotinfomessage_callback = nullptr;
        kio__previewjob_event_callback = nullptr;
        kio__previewjob_eventfilter_callback = nullptr;
        kio__previewjob_timerevent_callback = nullptr;
        kio__previewjob_childevent_callback = nullptr;
        kio__previewjob_customevent_callback = nullptr;
        kio__previewjob_connectnotify_callback = nullptr;
        kio__previewjob_disconnectnotify_callback = nullptr;
        kio__previewjob_hassubjobs_callback = nullptr;
        kio__previewjob_subjobs_callback = nullptr;
        kio__previewjob_clearsubjobs_callback = nullptr;
        kio__previewjob_setcapabilities_callback = nullptr;
        kio__previewjob_isfinished_callback = nullptr;
        kio__previewjob_seterror_callback = nullptr;
        kio__previewjob_seterrortext_callback = nullptr;
        kio__previewjob_setprocessedamount_callback = nullptr;
        kio__previewjob_settotalamount_callback = nullptr;
        kio__previewjob_setprogressunit_callback = nullptr;
        kio__previewjob_setpercent_callback = nullptr;
        kio__previewjob_emitresult_callback = nullptr;
        kio__previewjob_emitpercent_callback = nullptr;
        kio__previewjob_emitspeed_callback = nullptr;
        kio__previewjob_startelapsedtimer_callback = nullptr;
        kio__previewjob_sender_callback = nullptr;
        kio__previewjob_sendersignalindex_callback = nullptr;
        kio__previewjob_receivers_callback = nullptr;
        kio__previewjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__PreviewJob_Metacall_Callback(KIO__PreviewJob_Metacall_Callback cb) { kio__previewjob_metacall_callback = cb; }
    inline void setKIO__PreviewJob_SlotResult_Callback(KIO__PreviewJob_SlotResult_Callback cb) { kio__previewjob_slotresult_callback = cb; }
    inline void setKIO__PreviewJob_Start_Callback(KIO__PreviewJob_Start_Callback cb) { kio__previewjob_start_callback = cb; }
    inline void setKIO__PreviewJob_DoKill_Callback(KIO__PreviewJob_DoKill_Callback cb) { kio__previewjob_dokill_callback = cb; }
    inline void setKIO__PreviewJob_DoSuspend_Callback(KIO__PreviewJob_DoSuspend_Callback cb) { kio__previewjob_dosuspend_callback = cb; }
    inline void setKIO__PreviewJob_DoResume_Callback(KIO__PreviewJob_DoResume_Callback cb) { kio__previewjob_doresume_callback = cb; }
    inline void setKIO__PreviewJob_ErrorString_Callback(KIO__PreviewJob_ErrorString_Callback cb) { kio__previewjob_errorstring_callback = cb; }
    inline void setKIO__PreviewJob_AddSubjob_Callback(KIO__PreviewJob_AddSubjob_Callback cb) { kio__previewjob_addsubjob_callback = cb; }
    inline void setKIO__PreviewJob_RemoveSubjob_Callback(KIO__PreviewJob_RemoveSubjob_Callback cb) { kio__previewjob_removesubjob_callback = cb; }
    inline void setKIO__PreviewJob_SlotInfoMessage_Callback(KIO__PreviewJob_SlotInfoMessage_Callback cb) { kio__previewjob_slotinfomessage_callback = cb; }
    inline void setKIO__PreviewJob_Event_Callback(KIO__PreviewJob_Event_Callback cb) { kio__previewjob_event_callback = cb; }
    inline void setKIO__PreviewJob_EventFilter_Callback(KIO__PreviewJob_EventFilter_Callback cb) { kio__previewjob_eventfilter_callback = cb; }
    inline void setKIO__PreviewJob_TimerEvent_Callback(KIO__PreviewJob_TimerEvent_Callback cb) { kio__previewjob_timerevent_callback = cb; }
    inline void setKIO__PreviewJob_ChildEvent_Callback(KIO__PreviewJob_ChildEvent_Callback cb) { kio__previewjob_childevent_callback = cb; }
    inline void setKIO__PreviewJob_CustomEvent_Callback(KIO__PreviewJob_CustomEvent_Callback cb) { kio__previewjob_customevent_callback = cb; }
    inline void setKIO__PreviewJob_ConnectNotify_Callback(KIO__PreviewJob_ConnectNotify_Callback cb) { kio__previewjob_connectnotify_callback = cb; }
    inline void setKIO__PreviewJob_DisconnectNotify_Callback(KIO__PreviewJob_DisconnectNotify_Callback cb) { kio__previewjob_disconnectnotify_callback = cb; }
    inline void setKIO__PreviewJob_HasSubjobs_Callback(KIO__PreviewJob_HasSubjobs_Callback cb) { kio__previewjob_hassubjobs_callback = cb; }
    inline void setKIO__PreviewJob_Subjobs_Callback(KIO__PreviewJob_Subjobs_Callback cb) { kio__previewjob_subjobs_callback = cb; }
    inline void setKIO__PreviewJob_ClearSubjobs_Callback(KIO__PreviewJob_ClearSubjobs_Callback cb) { kio__previewjob_clearsubjobs_callback = cb; }
    inline void setKIO__PreviewJob_SetCapabilities_Callback(KIO__PreviewJob_SetCapabilities_Callback cb) { kio__previewjob_setcapabilities_callback = cb; }
    inline void setKIO__PreviewJob_IsFinished_Callback(KIO__PreviewJob_IsFinished_Callback cb) { kio__previewjob_isfinished_callback = cb; }
    inline void setKIO__PreviewJob_SetError_Callback(KIO__PreviewJob_SetError_Callback cb) { kio__previewjob_seterror_callback = cb; }
    inline void setKIO__PreviewJob_SetErrorText_Callback(KIO__PreviewJob_SetErrorText_Callback cb) { kio__previewjob_seterrortext_callback = cb; }
    inline void setKIO__PreviewJob_SetProcessedAmount_Callback(KIO__PreviewJob_SetProcessedAmount_Callback cb) { kio__previewjob_setprocessedamount_callback = cb; }
    inline void setKIO__PreviewJob_SetTotalAmount_Callback(KIO__PreviewJob_SetTotalAmount_Callback cb) { kio__previewjob_settotalamount_callback = cb; }
    inline void setKIO__PreviewJob_SetProgressUnit_Callback(KIO__PreviewJob_SetProgressUnit_Callback cb) { kio__previewjob_setprogressunit_callback = cb; }
    inline void setKIO__PreviewJob_SetPercent_Callback(KIO__PreviewJob_SetPercent_Callback cb) { kio__previewjob_setpercent_callback = cb; }
    inline void setKIO__PreviewJob_EmitResult_Callback(KIO__PreviewJob_EmitResult_Callback cb) { kio__previewjob_emitresult_callback = cb; }
    inline void setKIO__PreviewJob_EmitPercent_Callback(KIO__PreviewJob_EmitPercent_Callback cb) { kio__previewjob_emitpercent_callback = cb; }
    inline void setKIO__PreviewJob_EmitSpeed_Callback(KIO__PreviewJob_EmitSpeed_Callback cb) { kio__previewjob_emitspeed_callback = cb; }
    inline void setKIO__PreviewJob_StartElapsedTimer_Callback(KIO__PreviewJob_StartElapsedTimer_Callback cb) { kio__previewjob_startelapsedtimer_callback = cb; }
    inline void setKIO__PreviewJob_Sender_Callback(KIO__PreviewJob_Sender_Callback cb) { kio__previewjob_sender_callback = cb; }
    inline void setKIO__PreviewJob_SenderSignalIndex_Callback(KIO__PreviewJob_SenderSignalIndex_Callback cb) { kio__previewjob_sendersignalindex_callback = cb; }
    inline void setKIO__PreviewJob_Receivers_Callback(KIO__PreviewJob_Receivers_Callback cb) { kio__previewjob_receivers_callback = cb; }
    inline void setKIO__PreviewJob_IsSignalConnected_Callback(KIO__PreviewJob_IsSignalConnected_Callback cb) { kio__previewjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__PreviewJob_Metacall_IsBase(bool value) const { kio__previewjob_metacall_isbase = value; }
    inline void setKIO__PreviewJob_SlotResult_IsBase(bool value) const { kio__previewjob_slotresult_isbase = value; }
    inline void setKIO__PreviewJob_Start_IsBase(bool value) const { kio__previewjob_start_isbase = value; }
    inline void setKIO__PreviewJob_DoKill_IsBase(bool value) const { kio__previewjob_dokill_isbase = value; }
    inline void setKIO__PreviewJob_DoSuspend_IsBase(bool value) const { kio__previewjob_dosuspend_isbase = value; }
    inline void setKIO__PreviewJob_DoResume_IsBase(bool value) const { kio__previewjob_doresume_isbase = value; }
    inline void setKIO__PreviewJob_ErrorString_IsBase(bool value) const { kio__previewjob_errorstring_isbase = value; }
    inline void setKIO__PreviewJob_AddSubjob_IsBase(bool value) const { kio__previewjob_addsubjob_isbase = value; }
    inline void setKIO__PreviewJob_RemoveSubjob_IsBase(bool value) const { kio__previewjob_removesubjob_isbase = value; }
    inline void setKIO__PreviewJob_SlotInfoMessage_IsBase(bool value) const { kio__previewjob_slotinfomessage_isbase = value; }
    inline void setKIO__PreviewJob_Event_IsBase(bool value) const { kio__previewjob_event_isbase = value; }
    inline void setKIO__PreviewJob_EventFilter_IsBase(bool value) const { kio__previewjob_eventfilter_isbase = value; }
    inline void setKIO__PreviewJob_TimerEvent_IsBase(bool value) const { kio__previewjob_timerevent_isbase = value; }
    inline void setKIO__PreviewJob_ChildEvent_IsBase(bool value) const { kio__previewjob_childevent_isbase = value; }
    inline void setKIO__PreviewJob_CustomEvent_IsBase(bool value) const { kio__previewjob_customevent_isbase = value; }
    inline void setKIO__PreviewJob_ConnectNotify_IsBase(bool value) const { kio__previewjob_connectnotify_isbase = value; }
    inline void setKIO__PreviewJob_DisconnectNotify_IsBase(bool value) const { kio__previewjob_disconnectnotify_isbase = value; }
    inline void setKIO__PreviewJob_HasSubjobs_IsBase(bool value) const { kio__previewjob_hassubjobs_isbase = value; }
    inline void setKIO__PreviewJob_Subjobs_IsBase(bool value) const { kio__previewjob_subjobs_isbase = value; }
    inline void setKIO__PreviewJob_ClearSubjobs_IsBase(bool value) const { kio__previewjob_clearsubjobs_isbase = value; }
    inline void setKIO__PreviewJob_SetCapabilities_IsBase(bool value) const { kio__previewjob_setcapabilities_isbase = value; }
    inline void setKIO__PreviewJob_IsFinished_IsBase(bool value) const { kio__previewjob_isfinished_isbase = value; }
    inline void setKIO__PreviewJob_SetError_IsBase(bool value) const { kio__previewjob_seterror_isbase = value; }
    inline void setKIO__PreviewJob_SetErrorText_IsBase(bool value) const { kio__previewjob_seterrortext_isbase = value; }
    inline void setKIO__PreviewJob_SetProcessedAmount_IsBase(bool value) const { kio__previewjob_setprocessedamount_isbase = value; }
    inline void setKIO__PreviewJob_SetTotalAmount_IsBase(bool value) const { kio__previewjob_settotalamount_isbase = value; }
    inline void setKIO__PreviewJob_SetProgressUnit_IsBase(bool value) const { kio__previewjob_setprogressunit_isbase = value; }
    inline void setKIO__PreviewJob_SetPercent_IsBase(bool value) const { kio__previewjob_setpercent_isbase = value; }
    inline void setKIO__PreviewJob_EmitResult_IsBase(bool value) const { kio__previewjob_emitresult_isbase = value; }
    inline void setKIO__PreviewJob_EmitPercent_IsBase(bool value) const { kio__previewjob_emitpercent_isbase = value; }
    inline void setKIO__PreviewJob_EmitSpeed_IsBase(bool value) const { kio__previewjob_emitspeed_isbase = value; }
    inline void setKIO__PreviewJob_StartElapsedTimer_IsBase(bool value) const { kio__previewjob_startelapsedtimer_isbase = value; }
    inline void setKIO__PreviewJob_Sender_IsBase(bool value) const { kio__previewjob_sender_isbase = value; }
    inline void setKIO__PreviewJob_SenderSignalIndex_IsBase(bool value) const { kio__previewjob_sendersignalindex_isbase = value; }
    inline void setKIO__PreviewJob_Receivers_IsBase(bool value) const { kio__previewjob_receivers_isbase = value; }
    inline void setKIO__PreviewJob_IsSignalConnected_IsBase(bool value) const { kio__previewjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__previewjob_metacall_isbase) {
            kio__previewjob_metacall_isbase = false;
            return KIO__PreviewJob::qt_metacall(param1, param2, param3);
        } else if (kio__previewjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__previewjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__PreviewJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResult(KJob* job) override {
        if (kio__previewjob_slotresult_isbase) {
            kio__previewjob_slotresult_isbase = false;
            KIO__PreviewJob::slotResult(job);
        } else if (kio__previewjob_slotresult_callback != nullptr) {
            KJob* cbval1 = job;

            kio__previewjob_slotresult_callback(this, cbval1);
        } else {
            KIO__PreviewJob::slotResult(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__previewjob_start_isbase) {
            kio__previewjob_start_isbase = false;
            KIO__PreviewJob::start();
        } else if (kio__previewjob_start_callback != nullptr) {
            kio__previewjob_start_callback();
        } else {
            KIO__PreviewJob::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__previewjob_dokill_isbase) {
            kio__previewjob_dokill_isbase = false;
            return KIO__PreviewJob::doKill();
        } else if (kio__previewjob_dokill_callback != nullptr) {
            bool callback_ret = kio__previewjob_dokill_callback();
            return callback_ret;
        } else {
            return KIO__PreviewJob::doKill();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__previewjob_dosuspend_isbase) {
            kio__previewjob_dosuspend_isbase = false;
            return KIO__PreviewJob::doSuspend();
        } else if (kio__previewjob_dosuspend_callback != nullptr) {
            bool callback_ret = kio__previewjob_dosuspend_callback();
            return callback_ret;
        } else {
            return KIO__PreviewJob::doSuspend();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__previewjob_doresume_isbase) {
            kio__previewjob_doresume_isbase = false;
            return KIO__PreviewJob::doResume();
        } else if (kio__previewjob_doresume_callback != nullptr) {
            bool callback_ret = kio__previewjob_doresume_callback();
            return callback_ret;
        } else {
            return KIO__PreviewJob::doResume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__previewjob_errorstring_isbase) {
            kio__previewjob_errorstring_isbase = false;
            return KIO__PreviewJob::errorString();
        } else if (kio__previewjob_errorstring_callback != nullptr) {
            const char* callback_ret = kio__previewjob_errorstring_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KIO__PreviewJob::errorString();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__previewjob_addsubjob_isbase) {
            kio__previewjob_addsubjob_isbase = false;
            return KIO__PreviewJob::addSubjob(job);
        } else if (kio__previewjob_addsubjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kio__previewjob_addsubjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__PreviewJob::addSubjob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__previewjob_removesubjob_isbase) {
            kio__previewjob_removesubjob_isbase = false;
            return KIO__PreviewJob::removeSubjob(job);
        } else if (kio__previewjob_removesubjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kio__previewjob_removesubjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__PreviewJob::removeSubjob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__previewjob_slotinfomessage_isbase) {
            kio__previewjob_slotinfomessage_isbase = false;
            KIO__PreviewJob::slotInfoMessage(job, message);
        } else if (kio__previewjob_slotinfomessage_callback != nullptr) {
            KJob* cbval1 = job;
            const QString message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            libqt_string message_str;
            message_str.len = message_b.length();
            message_str.data = static_cast<const char*>(malloc(message_str.len + 1));
            memcpy((void*)message_str.data, message_b.data(), message_str.len);
            ((char*)message_str.data)[message_str.len] = '\0';
            libqt_string cbval2 = message_str;

            kio__previewjob_slotinfomessage_callback(this, cbval1, cbval2);
        } else {
            KIO__PreviewJob::slotInfoMessage(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__previewjob_event_isbase) {
            kio__previewjob_event_isbase = false;
            return KIO__PreviewJob::event(event);
        } else if (kio__previewjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__previewjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__PreviewJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__previewjob_eventfilter_isbase) {
            kio__previewjob_eventfilter_isbase = false;
            return KIO__PreviewJob::eventFilter(watched, event);
        } else if (kio__previewjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kio__previewjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__PreviewJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__previewjob_timerevent_isbase) {
            kio__previewjob_timerevent_isbase = false;
            KIO__PreviewJob::timerEvent(event);
        } else if (kio__previewjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__previewjob_timerevent_callback(this, cbval1);
        } else {
            KIO__PreviewJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__previewjob_childevent_isbase) {
            kio__previewjob_childevent_isbase = false;
            KIO__PreviewJob::childEvent(event);
        } else if (kio__previewjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__previewjob_childevent_callback(this, cbval1);
        } else {
            KIO__PreviewJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__previewjob_customevent_isbase) {
            kio__previewjob_customevent_isbase = false;
            KIO__PreviewJob::customEvent(event);
        } else if (kio__previewjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__previewjob_customevent_callback(this, cbval1);
        } else {
            KIO__PreviewJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__previewjob_connectnotify_isbase) {
            kio__previewjob_connectnotify_isbase = false;
            KIO__PreviewJob::connectNotify(signal);
        } else if (kio__previewjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__previewjob_connectnotify_callback(this, cbval1);
        } else {
            KIO__PreviewJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__previewjob_disconnectnotify_isbase) {
            kio__previewjob_disconnectnotify_isbase = false;
            KIO__PreviewJob::disconnectNotify(signal);
        } else if (kio__previewjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__previewjob_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__PreviewJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool hasSubjobs() const {
        if (kio__previewjob_hassubjobs_isbase) {
            kio__previewjob_hassubjobs_isbase = false;
            return KIO__PreviewJob::hasSubjobs();
        } else if (kio__previewjob_hassubjobs_callback != nullptr) {
            bool callback_ret = kio__previewjob_hassubjobs_callback();
            return callback_ret;
        } else {
            return KIO__PreviewJob::hasSubjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    const QList<KJob*>& subjobs() const {
        if (kio__previewjob_subjobs_isbase) {
            kio__previewjob_subjobs_isbase = false;
            return KIO__PreviewJob::subjobs();
        } else if (kio__previewjob_subjobs_callback != nullptr) {
            KJob** callback_ret = kio__previewjob_subjobs_callback();
            QList<KJob*>* callback_ret_QList;
            callback_ret_QList = new QList<KJob*>;
            // Iterate until null pointer sentinel
            for (KJob** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList->push_back(*ptridx);
            }
            free(callback_ret);
            return *callback_ret_QList;
        } else {
            return KIO__PreviewJob::subjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    void clearSubjobs() {
        if (kio__previewjob_clearsubjobs_isbase) {
            kio__previewjob_clearsubjobs_isbase = false;
            KIO__PreviewJob::clearSubjobs();
        } else if (kio__previewjob_clearsubjobs_callback != nullptr) {
            kio__previewjob_clearsubjobs_callback();
        } else {
            KIO__PreviewJob::clearSubjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kio__previewjob_setcapabilities_isbase) {
            kio__previewjob_setcapabilities_isbase = false;
            KIO__PreviewJob::setCapabilities(capabilities);
        } else if (kio__previewjob_setcapabilities_callback != nullptr) {
            int cbval1 = static_cast<int>(capabilities);

            kio__previewjob_setcapabilities_callback(this, cbval1);
        } else {
            KIO__PreviewJob::setCapabilities(capabilities);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kio__previewjob_isfinished_isbase) {
            kio__previewjob_isfinished_isbase = false;
            return KIO__PreviewJob::isFinished();
        } else if (kio__previewjob_isfinished_callback != nullptr) {
            bool callback_ret = kio__previewjob_isfinished_callback();
            return callback_ret;
        } else {
            return KIO__PreviewJob::isFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kio__previewjob_seterror_isbase) {
            kio__previewjob_seterror_isbase = false;
            KIO__PreviewJob::setError(errorCode);
        } else if (kio__previewjob_seterror_callback != nullptr) {
            int cbval1 = errorCode;

            kio__previewjob_seterror_callback(this, cbval1);
        } else {
            KIO__PreviewJob::setError(errorCode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kio__previewjob_seterrortext_isbase) {
            kio__previewjob_seterrortext_isbase = false;
            KIO__PreviewJob::setErrorText(errorText);
        } else if (kio__previewjob_seterrortext_callback != nullptr) {
            const QString errorText_ret = errorText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorText_b = errorText_ret.toUtf8();
            libqt_string errorText_str;
            errorText_str.len = errorText_b.length();
            errorText_str.data = static_cast<const char*>(malloc(errorText_str.len + 1));
            memcpy((void*)errorText_str.data, errorText_b.data(), errorText_str.len);
            ((char*)errorText_str.data)[errorText_str.len] = '\0';
            libqt_string cbval1 = errorText_str;

            kio__previewjob_seterrortext_callback(this, cbval1);
        } else {
            KIO__PreviewJob::setErrorText(errorText);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__previewjob_setprocessedamount_isbase) {
            kio__previewjob_setprocessedamount_isbase = false;
            KIO__PreviewJob::setProcessedAmount(unit, amount);
        } else if (kio__previewjob_setprocessedamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__previewjob_setprocessedamount_callback(this, cbval1, cbval2);
        } else {
            KIO__PreviewJob::setProcessedAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__previewjob_settotalamount_isbase) {
            kio__previewjob_settotalamount_isbase = false;
            KIO__PreviewJob::setTotalAmount(unit, amount);
        } else if (kio__previewjob_settotalamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__previewjob_settotalamount_callback(this, cbval1, cbval2);
        } else {
            KIO__PreviewJob::setTotalAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kio__previewjob_setprogressunit_isbase) {
            kio__previewjob_setprogressunit_isbase = false;
            KIO__PreviewJob::setProgressUnit(unit);
        } else if (kio__previewjob_setprogressunit_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);

            kio__previewjob_setprogressunit_callback(this, cbval1);
        } else {
            KIO__PreviewJob::setProgressUnit(unit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kio__previewjob_setpercent_isbase) {
            kio__previewjob_setpercent_isbase = false;
            KIO__PreviewJob::setPercent(percentage);
        } else if (kio__previewjob_setpercent_callback != nullptr) {
            unsigned long cbval1 = percentage;

            kio__previewjob_setpercent_callback(this, cbval1);
        } else {
            KIO__PreviewJob::setPercent(percentage);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kio__previewjob_emitresult_isbase) {
            kio__previewjob_emitresult_isbase = false;
            KIO__PreviewJob::emitResult();
        } else if (kio__previewjob_emitresult_callback != nullptr) {
            kio__previewjob_emitresult_callback();
        } else {
            KIO__PreviewJob::emitResult();
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kio__previewjob_emitpercent_isbase) {
            kio__previewjob_emitpercent_isbase = false;
            KIO__PreviewJob::emitPercent(processedAmount, totalAmount);
        } else if (kio__previewjob_emitpercent_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            kio__previewjob_emitpercent_callback(this, cbval1, cbval2);
        } else {
            KIO__PreviewJob::emitPercent(processedAmount, totalAmount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kio__previewjob_emitspeed_isbase) {
            kio__previewjob_emitspeed_isbase = false;
            KIO__PreviewJob::emitSpeed(speed);
        } else if (kio__previewjob_emitspeed_callback != nullptr) {
            unsigned long cbval1 = speed;

            kio__previewjob_emitspeed_callback(this, cbval1);
        } else {
            KIO__PreviewJob::emitSpeed(speed);
        }
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kio__previewjob_startelapsedtimer_isbase) {
            kio__previewjob_startelapsedtimer_isbase = false;
            KIO__PreviewJob::startElapsedTimer();
        } else if (kio__previewjob_startelapsedtimer_callback != nullptr) {
            kio__previewjob_startelapsedtimer_callback();
        } else {
            KIO__PreviewJob::startElapsedTimer();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__previewjob_sender_isbase) {
            kio__previewjob_sender_isbase = false;
            return KIO__PreviewJob::sender();
        } else if (kio__previewjob_sender_callback != nullptr) {
            QObject* callback_ret = kio__previewjob_sender_callback();
            return callback_ret;
        } else {
            return KIO__PreviewJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__previewjob_sendersignalindex_isbase) {
            kio__previewjob_sendersignalindex_isbase = false;
            return KIO__PreviewJob::senderSignalIndex();
        } else if (kio__previewjob_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__previewjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__PreviewJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__previewjob_receivers_isbase) {
            kio__previewjob_receivers_isbase = false;
            return KIO__PreviewJob::receivers(signal);
        } else if (kio__previewjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__previewjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__PreviewJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__previewjob_issignalconnected_isbase) {
            kio__previewjob_issignalconnected_isbase = false;
            return KIO__PreviewJob::isSignalConnected(signal);
        } else if (kio__previewjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__previewjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__PreviewJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KIO__PreviewJob_SlotResult(KIO::PreviewJob* self, KJob* job);
    friend void KIO__PreviewJob_QBaseSlotResult(KIO::PreviewJob* self, KJob* job);
    friend bool KIO__PreviewJob_DoKill(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_QBaseDoKill(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_DoSuspend(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_QBaseDoSuspend(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_DoResume(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_QBaseDoResume(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_AddSubjob(KIO::PreviewJob* self, KJob* job);
    friend bool KIO__PreviewJob_QBaseAddSubjob(KIO::PreviewJob* self, KJob* job);
    friend bool KIO__PreviewJob_RemoveSubjob(KIO::PreviewJob* self, KJob* job);
    friend bool KIO__PreviewJob_QBaseRemoveSubjob(KIO::PreviewJob* self, KJob* job);
    friend void KIO__PreviewJob_SlotInfoMessage(KIO::PreviewJob* self, KJob* job, const libqt_string message);
    friend void KIO__PreviewJob_QBaseSlotInfoMessage(KIO::PreviewJob* self, KJob* job, const libqt_string message);
    friend void KIO__PreviewJob_TimerEvent(KIO::PreviewJob* self, QTimerEvent* event);
    friend void KIO__PreviewJob_QBaseTimerEvent(KIO::PreviewJob* self, QTimerEvent* event);
    friend void KIO__PreviewJob_ChildEvent(KIO::PreviewJob* self, QChildEvent* event);
    friend void KIO__PreviewJob_QBaseChildEvent(KIO::PreviewJob* self, QChildEvent* event);
    friend void KIO__PreviewJob_CustomEvent(KIO::PreviewJob* self, QEvent* event);
    friend void KIO__PreviewJob_QBaseCustomEvent(KIO::PreviewJob* self, QEvent* event);
    friend void KIO__PreviewJob_ConnectNotify(KIO::PreviewJob* self, const QMetaMethod* signal);
    friend void KIO__PreviewJob_QBaseConnectNotify(KIO::PreviewJob* self, const QMetaMethod* signal);
    friend void KIO__PreviewJob_DisconnectNotify(KIO::PreviewJob* self, const QMetaMethod* signal);
    friend void KIO__PreviewJob_QBaseDisconnectNotify(KIO::PreviewJob* self, const QMetaMethod* signal);
    friend bool KIO__PreviewJob_HasSubjobs(const KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_QBaseHasSubjobs(const KIO::PreviewJob* self);
    friend libqt_list /* of KJob* */ KIO__PreviewJob_Subjobs(const KIO::PreviewJob* self);
    friend libqt_list /* of KJob* */ KIO__PreviewJob_QBaseSubjobs(const KIO::PreviewJob* self);
    friend void KIO__PreviewJob_ClearSubjobs(KIO::PreviewJob* self);
    friend void KIO__PreviewJob_QBaseClearSubjobs(KIO::PreviewJob* self);
    friend void KIO__PreviewJob_SetCapabilities(KIO::PreviewJob* self, int capabilities);
    friend void KIO__PreviewJob_QBaseSetCapabilities(KIO::PreviewJob* self, int capabilities);
    friend bool KIO__PreviewJob_IsFinished(const KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_QBaseIsFinished(const KIO::PreviewJob* self);
    friend void KIO__PreviewJob_SetError(KIO::PreviewJob* self, int errorCode);
    friend void KIO__PreviewJob_QBaseSetError(KIO::PreviewJob* self, int errorCode);
    friend void KIO__PreviewJob_SetErrorText(KIO::PreviewJob* self, const libqt_string errorText);
    friend void KIO__PreviewJob_QBaseSetErrorText(KIO::PreviewJob* self, const libqt_string errorText);
    friend void KIO__PreviewJob_SetProcessedAmount(KIO::PreviewJob* self, int unit, unsigned long long amount);
    friend void KIO__PreviewJob_QBaseSetProcessedAmount(KIO::PreviewJob* self, int unit, unsigned long long amount);
    friend void KIO__PreviewJob_SetTotalAmount(KIO::PreviewJob* self, int unit, unsigned long long amount);
    friend void KIO__PreviewJob_QBaseSetTotalAmount(KIO::PreviewJob* self, int unit, unsigned long long amount);
    friend void KIO__PreviewJob_SetProgressUnit(KIO::PreviewJob* self, int unit);
    friend void KIO__PreviewJob_QBaseSetProgressUnit(KIO::PreviewJob* self, int unit);
    friend void KIO__PreviewJob_SetPercent(KIO::PreviewJob* self, unsigned long percentage);
    friend void KIO__PreviewJob_QBaseSetPercent(KIO::PreviewJob* self, unsigned long percentage);
    friend void KIO__PreviewJob_EmitResult(KIO::PreviewJob* self);
    friend void KIO__PreviewJob_QBaseEmitResult(KIO::PreviewJob* self);
    friend void KIO__PreviewJob_EmitPercent(KIO::PreviewJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__PreviewJob_QBaseEmitPercent(KIO::PreviewJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__PreviewJob_EmitSpeed(KIO::PreviewJob* self, unsigned long speed);
    friend void KIO__PreviewJob_QBaseEmitSpeed(KIO::PreviewJob* self, unsigned long speed);
    friend void KIO__PreviewJob_StartElapsedTimer(KIO::PreviewJob* self);
    friend void KIO__PreviewJob_QBaseStartElapsedTimer(KIO::PreviewJob* self);
    friend QObject* KIO__PreviewJob_Sender(const KIO::PreviewJob* self);
    friend QObject* KIO__PreviewJob_QBaseSender(const KIO::PreviewJob* self);
    friend int KIO__PreviewJob_SenderSignalIndex(const KIO::PreviewJob* self);
    friend int KIO__PreviewJob_QBaseSenderSignalIndex(const KIO::PreviewJob* self);
    friend int KIO__PreviewJob_Receivers(const KIO::PreviewJob* self, const char* signal);
    friend int KIO__PreviewJob_QBaseReceivers(const KIO::PreviewJob* self, const char* signal);
    friend bool KIO__PreviewJob_IsSignalConnected(const KIO::PreviewJob* self, const QMetaMethod* signal);
    friend bool KIO__PreviewJob_QBaseIsSignalConnected(const KIO::PreviewJob* self, const QMetaMethod* signal);
};

#endif
