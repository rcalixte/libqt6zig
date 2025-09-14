#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALSPECIALJOB_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALSPECIALJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::SpecialJob so that we can call protected methods
class VirtualKIOSpecialJob final : public KIO::SpecialJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOSpecialJob = true;

    // Virtual class public types (including callbacks)
    using KIO__SpecialJob_Metacall_Callback = int (*)(KIO__SpecialJob*, int, int, void**);
    using KIO__SpecialJob_DoResume_Callback = bool (*)();
    using KIO__SpecialJob_SlotRedirection_Callback = void (*)(KIO__SpecialJob*, QUrl*);
    using KIO__SpecialJob_SlotFinished_Callback = void (*)();
    using KIO__SpecialJob_SlotData_Callback = void (*)(KIO__SpecialJob*, libqt_string);
    using KIO__SpecialJob_SlotDataReq_Callback = void (*)();
    using KIO__SpecialJob_SlotMimetype_Callback = void (*)(KIO__SpecialJob*, libqt_string);
    using KIO__SpecialJob_DoSuspend_Callback = bool (*)();
    using KIO__SpecialJob_DoKill_Callback = bool (*)();
    using KIO__SpecialJob_PutOnHold_Callback = void (*)();
    using KIO__SpecialJob_SlotWarning_Callback = void (*)(KIO__SpecialJob*, libqt_string);
    using KIO__SpecialJob_SlotMetaData_Callback = void (*)(KIO__SpecialJob*, KIO__MetaData*);
    using KIO__SpecialJob_Start_Callback = void (*)();
    using KIO__SpecialJob_ErrorString_Callback = const char* (*)();
    using KIO__SpecialJob_AddSubjob_Callback = bool (*)(KIO__SpecialJob*, KJob*);
    using KIO__SpecialJob_RemoveSubjob_Callback = bool (*)(KIO__SpecialJob*, KJob*);
    using KIO__SpecialJob_SlotResult_Callback = void (*)(KIO__SpecialJob*, KJob*);
    using KIO__SpecialJob_SlotInfoMessage_Callback = void (*)(KIO__SpecialJob*, KJob*, libqt_string);
    using KIO__SpecialJob_Event_Callback = bool (*)(KIO__SpecialJob*, QEvent*);
    using KIO__SpecialJob_EventFilter_Callback = bool (*)(KIO__SpecialJob*, QObject*, QEvent*);
    using KIO__SpecialJob_TimerEvent_Callback = void (*)(KIO__SpecialJob*, QTimerEvent*);
    using KIO__SpecialJob_ChildEvent_Callback = void (*)(KIO__SpecialJob*, QChildEvent*);
    using KIO__SpecialJob_CustomEvent_Callback = void (*)(KIO__SpecialJob*, QEvent*);
    using KIO__SpecialJob_ConnectNotify_Callback = void (*)(KIO__SpecialJob*, QMetaMethod*);
    using KIO__SpecialJob_DisconnectNotify_Callback = void (*)(KIO__SpecialJob*, QMetaMethod*);
    using KIO__SpecialJob_HasSubjobs_Callback = bool (*)();
    using KIO__SpecialJob_Subjobs_Callback = KJob** (*)();
    using KIO__SpecialJob_ClearSubjobs_Callback = void (*)();
    using KIO__SpecialJob_SetCapabilities_Callback = void (*)(KIO__SpecialJob*, int);
    using KIO__SpecialJob_IsFinished_Callback = bool (*)();
    using KIO__SpecialJob_SetError_Callback = void (*)(KIO__SpecialJob*, int);
    using KIO__SpecialJob_SetErrorText_Callback = void (*)(KIO__SpecialJob*, libqt_string);
    using KIO__SpecialJob_SetProcessedAmount_Callback = void (*)(KIO__SpecialJob*, int, unsigned long long);
    using KIO__SpecialJob_SetTotalAmount_Callback = void (*)(KIO__SpecialJob*, int, unsigned long long);
    using KIO__SpecialJob_SetProgressUnit_Callback = void (*)(KIO__SpecialJob*, int);
    using KIO__SpecialJob_SetPercent_Callback = void (*)(KIO__SpecialJob*, unsigned long);
    using KIO__SpecialJob_EmitResult_Callback = void (*)();
    using KIO__SpecialJob_EmitPercent_Callback = void (*)(KIO__SpecialJob*, unsigned long long, unsigned long long);
    using KIO__SpecialJob_EmitSpeed_Callback = void (*)(KIO__SpecialJob*, unsigned long);
    using KIO__SpecialJob_StartElapsedTimer_Callback = void (*)();
    using KIO__SpecialJob_Sender_Callback = QObject* (*)();
    using KIO__SpecialJob_SenderSignalIndex_Callback = int (*)();
    using KIO__SpecialJob_Receivers_Callback = int (*)(const KIO__SpecialJob*, const char*);
    using KIO__SpecialJob_IsSignalConnected_Callback = bool (*)(const KIO__SpecialJob*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KIO__SpecialJob_HasSubjobs_Callback kio__specialjob_hassubjobs_callback = nullptr;
    KIO__SpecialJob_Subjobs_Callback kio__specialjob_subjobs_callback = nullptr;
    KIO__SpecialJob_ClearSubjobs_Callback kio__specialjob_clearsubjobs_callback = nullptr;
    KIO__SpecialJob_SetCapabilities_Callback kio__specialjob_setcapabilities_callback = nullptr;
    KIO__SpecialJob_IsFinished_Callback kio__specialjob_isfinished_callback = nullptr;
    KIO__SpecialJob_SetError_Callback kio__specialjob_seterror_callback = nullptr;
    KIO__SpecialJob_SetErrorText_Callback kio__specialjob_seterrortext_callback = nullptr;
    KIO__SpecialJob_SetProcessedAmount_Callback kio__specialjob_setprocessedamount_callback = nullptr;
    KIO__SpecialJob_SetTotalAmount_Callback kio__specialjob_settotalamount_callback = nullptr;
    KIO__SpecialJob_SetProgressUnit_Callback kio__specialjob_setprogressunit_callback = nullptr;
    KIO__SpecialJob_SetPercent_Callback kio__specialjob_setpercent_callback = nullptr;
    KIO__SpecialJob_EmitResult_Callback kio__specialjob_emitresult_callback = nullptr;
    KIO__SpecialJob_EmitPercent_Callback kio__specialjob_emitpercent_callback = nullptr;
    KIO__SpecialJob_EmitSpeed_Callback kio__specialjob_emitspeed_callback = nullptr;
    KIO__SpecialJob_StartElapsedTimer_Callback kio__specialjob_startelapsedtimer_callback = nullptr;
    KIO__SpecialJob_Sender_Callback kio__specialjob_sender_callback = nullptr;
    KIO__SpecialJob_SenderSignalIndex_Callback kio__specialjob_sendersignalindex_callback = nullptr;
    KIO__SpecialJob_Receivers_Callback kio__specialjob_receivers_callback = nullptr;
    KIO__SpecialJob_IsSignalConnected_Callback kio__specialjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__specialjob_metacall_isbase = false;
    mutable bool kio__specialjob_doresume_isbase = false;
    mutable bool kio__specialjob_slotredirection_isbase = false;
    mutable bool kio__specialjob_slotfinished_isbase = false;
    mutable bool kio__specialjob_slotdata_isbase = false;
    mutable bool kio__specialjob_slotdatareq_isbase = false;
    mutable bool kio__specialjob_slotmimetype_isbase = false;
    mutable bool kio__specialjob_dosuspend_isbase = false;
    mutable bool kio__specialjob_dokill_isbase = false;
    mutable bool kio__specialjob_putonhold_isbase = false;
    mutable bool kio__specialjob_slotwarning_isbase = false;
    mutable bool kio__specialjob_slotmetadata_isbase = false;
    mutable bool kio__specialjob_start_isbase = false;
    mutable bool kio__specialjob_errorstring_isbase = false;
    mutable bool kio__specialjob_addsubjob_isbase = false;
    mutable bool kio__specialjob_removesubjob_isbase = false;
    mutable bool kio__specialjob_slotresult_isbase = false;
    mutable bool kio__specialjob_slotinfomessage_isbase = false;
    mutable bool kio__specialjob_event_isbase = false;
    mutable bool kio__specialjob_eventfilter_isbase = false;
    mutable bool kio__specialjob_timerevent_isbase = false;
    mutable bool kio__specialjob_childevent_isbase = false;
    mutable bool kio__specialjob_customevent_isbase = false;
    mutable bool kio__specialjob_connectnotify_isbase = false;
    mutable bool kio__specialjob_disconnectnotify_isbase = false;
    mutable bool kio__specialjob_hassubjobs_isbase = false;
    mutable bool kio__specialjob_subjobs_isbase = false;
    mutable bool kio__specialjob_clearsubjobs_isbase = false;
    mutable bool kio__specialjob_setcapabilities_isbase = false;
    mutable bool kio__specialjob_isfinished_isbase = false;
    mutable bool kio__specialjob_seterror_isbase = false;
    mutable bool kio__specialjob_seterrortext_isbase = false;
    mutable bool kio__specialjob_setprocessedamount_isbase = false;
    mutable bool kio__specialjob_settotalamount_isbase = false;
    mutable bool kio__specialjob_setprogressunit_isbase = false;
    mutable bool kio__specialjob_setpercent_isbase = false;
    mutable bool kio__specialjob_emitresult_isbase = false;
    mutable bool kio__specialjob_emitpercent_isbase = false;
    mutable bool kio__specialjob_emitspeed_isbase = false;
    mutable bool kio__specialjob_startelapsedtimer_isbase = false;
    mutable bool kio__specialjob_sender_isbase = false;
    mutable bool kio__specialjob_sendersignalindex_isbase = false;
    mutable bool kio__specialjob_receivers_isbase = false;
    mutable bool kio__specialjob_issignalconnected_isbase = false;

  public:
    VirtualKIOSpecialJob(const QUrl& url) : KIO::SpecialJob(url) {};
    VirtualKIOSpecialJob(const QUrl& url, const QByteArray& data) : KIO::SpecialJob(url, data) {};

    ~VirtualKIOSpecialJob() {
        kio__specialjob_metacall_callback = nullptr;
        kio__specialjob_doresume_callback = nullptr;
        kio__specialjob_slotredirection_callback = nullptr;
        kio__specialjob_slotfinished_callback = nullptr;
        kio__specialjob_slotdata_callback = nullptr;
        kio__specialjob_slotdatareq_callback = nullptr;
        kio__specialjob_slotmimetype_callback = nullptr;
        kio__specialjob_dosuspend_callback = nullptr;
        kio__specialjob_dokill_callback = nullptr;
        kio__specialjob_putonhold_callback = nullptr;
        kio__specialjob_slotwarning_callback = nullptr;
        kio__specialjob_slotmetadata_callback = nullptr;
        kio__specialjob_start_callback = nullptr;
        kio__specialjob_errorstring_callback = nullptr;
        kio__specialjob_addsubjob_callback = nullptr;
        kio__specialjob_removesubjob_callback = nullptr;
        kio__specialjob_slotresult_callback = nullptr;
        kio__specialjob_slotinfomessage_callback = nullptr;
        kio__specialjob_event_callback = nullptr;
        kio__specialjob_eventfilter_callback = nullptr;
        kio__specialjob_timerevent_callback = nullptr;
        kio__specialjob_childevent_callback = nullptr;
        kio__specialjob_customevent_callback = nullptr;
        kio__specialjob_connectnotify_callback = nullptr;
        kio__specialjob_disconnectnotify_callback = nullptr;
        kio__specialjob_hassubjobs_callback = nullptr;
        kio__specialjob_subjobs_callback = nullptr;
        kio__specialjob_clearsubjobs_callback = nullptr;
        kio__specialjob_setcapabilities_callback = nullptr;
        kio__specialjob_isfinished_callback = nullptr;
        kio__specialjob_seterror_callback = nullptr;
        kio__specialjob_seterrortext_callback = nullptr;
        kio__specialjob_setprocessedamount_callback = nullptr;
        kio__specialjob_settotalamount_callback = nullptr;
        kio__specialjob_setprogressunit_callback = nullptr;
        kio__specialjob_setpercent_callback = nullptr;
        kio__specialjob_emitresult_callback = nullptr;
        kio__specialjob_emitpercent_callback = nullptr;
        kio__specialjob_emitspeed_callback = nullptr;
        kio__specialjob_startelapsedtimer_callback = nullptr;
        kio__specialjob_sender_callback = nullptr;
        kio__specialjob_sendersignalindex_callback = nullptr;
        kio__specialjob_receivers_callback = nullptr;
        kio__specialjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__SpecialJob_Metacall_Callback(KIO__SpecialJob_Metacall_Callback cb) { kio__specialjob_metacall_callback = cb; }
    inline void setKIO__SpecialJob_DoResume_Callback(KIO__SpecialJob_DoResume_Callback cb) { kio__specialjob_doresume_callback = cb; }
    inline void setKIO__SpecialJob_SlotRedirection_Callback(KIO__SpecialJob_SlotRedirection_Callback cb) { kio__specialjob_slotredirection_callback = cb; }
    inline void setKIO__SpecialJob_SlotFinished_Callback(KIO__SpecialJob_SlotFinished_Callback cb) { kio__specialjob_slotfinished_callback = cb; }
    inline void setKIO__SpecialJob_SlotData_Callback(KIO__SpecialJob_SlotData_Callback cb) { kio__specialjob_slotdata_callback = cb; }
    inline void setKIO__SpecialJob_SlotDataReq_Callback(KIO__SpecialJob_SlotDataReq_Callback cb) { kio__specialjob_slotdatareq_callback = cb; }
    inline void setKIO__SpecialJob_SlotMimetype_Callback(KIO__SpecialJob_SlotMimetype_Callback cb) { kio__specialjob_slotmimetype_callback = cb; }
    inline void setKIO__SpecialJob_DoSuspend_Callback(KIO__SpecialJob_DoSuspend_Callback cb) { kio__specialjob_dosuspend_callback = cb; }
    inline void setKIO__SpecialJob_DoKill_Callback(KIO__SpecialJob_DoKill_Callback cb) { kio__specialjob_dokill_callback = cb; }
    inline void setKIO__SpecialJob_PutOnHold_Callback(KIO__SpecialJob_PutOnHold_Callback cb) { kio__specialjob_putonhold_callback = cb; }
    inline void setKIO__SpecialJob_SlotWarning_Callback(KIO__SpecialJob_SlotWarning_Callback cb) { kio__specialjob_slotwarning_callback = cb; }
    inline void setKIO__SpecialJob_SlotMetaData_Callback(KIO__SpecialJob_SlotMetaData_Callback cb) { kio__specialjob_slotmetadata_callback = cb; }
    inline void setKIO__SpecialJob_Start_Callback(KIO__SpecialJob_Start_Callback cb) { kio__specialjob_start_callback = cb; }
    inline void setKIO__SpecialJob_ErrorString_Callback(KIO__SpecialJob_ErrorString_Callback cb) { kio__specialjob_errorstring_callback = cb; }
    inline void setKIO__SpecialJob_AddSubjob_Callback(KIO__SpecialJob_AddSubjob_Callback cb) { kio__specialjob_addsubjob_callback = cb; }
    inline void setKIO__SpecialJob_RemoveSubjob_Callback(KIO__SpecialJob_RemoveSubjob_Callback cb) { kio__specialjob_removesubjob_callback = cb; }
    inline void setKIO__SpecialJob_SlotResult_Callback(KIO__SpecialJob_SlotResult_Callback cb) { kio__specialjob_slotresult_callback = cb; }
    inline void setKIO__SpecialJob_SlotInfoMessage_Callback(KIO__SpecialJob_SlotInfoMessage_Callback cb) { kio__specialjob_slotinfomessage_callback = cb; }
    inline void setKIO__SpecialJob_Event_Callback(KIO__SpecialJob_Event_Callback cb) { kio__specialjob_event_callback = cb; }
    inline void setKIO__SpecialJob_EventFilter_Callback(KIO__SpecialJob_EventFilter_Callback cb) { kio__specialjob_eventfilter_callback = cb; }
    inline void setKIO__SpecialJob_TimerEvent_Callback(KIO__SpecialJob_TimerEvent_Callback cb) { kio__specialjob_timerevent_callback = cb; }
    inline void setKIO__SpecialJob_ChildEvent_Callback(KIO__SpecialJob_ChildEvent_Callback cb) { kio__specialjob_childevent_callback = cb; }
    inline void setKIO__SpecialJob_CustomEvent_Callback(KIO__SpecialJob_CustomEvent_Callback cb) { kio__specialjob_customevent_callback = cb; }
    inline void setKIO__SpecialJob_ConnectNotify_Callback(KIO__SpecialJob_ConnectNotify_Callback cb) { kio__specialjob_connectnotify_callback = cb; }
    inline void setKIO__SpecialJob_DisconnectNotify_Callback(KIO__SpecialJob_DisconnectNotify_Callback cb) { kio__specialjob_disconnectnotify_callback = cb; }
    inline void setKIO__SpecialJob_HasSubjobs_Callback(KIO__SpecialJob_HasSubjobs_Callback cb) { kio__specialjob_hassubjobs_callback = cb; }
    inline void setKIO__SpecialJob_Subjobs_Callback(KIO__SpecialJob_Subjobs_Callback cb) { kio__specialjob_subjobs_callback = cb; }
    inline void setKIO__SpecialJob_ClearSubjobs_Callback(KIO__SpecialJob_ClearSubjobs_Callback cb) { kio__specialjob_clearsubjobs_callback = cb; }
    inline void setKIO__SpecialJob_SetCapabilities_Callback(KIO__SpecialJob_SetCapabilities_Callback cb) { kio__specialjob_setcapabilities_callback = cb; }
    inline void setKIO__SpecialJob_IsFinished_Callback(KIO__SpecialJob_IsFinished_Callback cb) { kio__specialjob_isfinished_callback = cb; }
    inline void setKIO__SpecialJob_SetError_Callback(KIO__SpecialJob_SetError_Callback cb) { kio__specialjob_seterror_callback = cb; }
    inline void setKIO__SpecialJob_SetErrorText_Callback(KIO__SpecialJob_SetErrorText_Callback cb) { kio__specialjob_seterrortext_callback = cb; }
    inline void setKIO__SpecialJob_SetProcessedAmount_Callback(KIO__SpecialJob_SetProcessedAmount_Callback cb) { kio__specialjob_setprocessedamount_callback = cb; }
    inline void setKIO__SpecialJob_SetTotalAmount_Callback(KIO__SpecialJob_SetTotalAmount_Callback cb) { kio__specialjob_settotalamount_callback = cb; }
    inline void setKIO__SpecialJob_SetProgressUnit_Callback(KIO__SpecialJob_SetProgressUnit_Callback cb) { kio__specialjob_setprogressunit_callback = cb; }
    inline void setKIO__SpecialJob_SetPercent_Callback(KIO__SpecialJob_SetPercent_Callback cb) { kio__specialjob_setpercent_callback = cb; }
    inline void setKIO__SpecialJob_EmitResult_Callback(KIO__SpecialJob_EmitResult_Callback cb) { kio__specialjob_emitresult_callback = cb; }
    inline void setKIO__SpecialJob_EmitPercent_Callback(KIO__SpecialJob_EmitPercent_Callback cb) { kio__specialjob_emitpercent_callback = cb; }
    inline void setKIO__SpecialJob_EmitSpeed_Callback(KIO__SpecialJob_EmitSpeed_Callback cb) { kio__specialjob_emitspeed_callback = cb; }
    inline void setKIO__SpecialJob_StartElapsedTimer_Callback(KIO__SpecialJob_StartElapsedTimer_Callback cb) { kio__specialjob_startelapsedtimer_callback = cb; }
    inline void setKIO__SpecialJob_Sender_Callback(KIO__SpecialJob_Sender_Callback cb) { kio__specialjob_sender_callback = cb; }
    inline void setKIO__SpecialJob_SenderSignalIndex_Callback(KIO__SpecialJob_SenderSignalIndex_Callback cb) { kio__specialjob_sendersignalindex_callback = cb; }
    inline void setKIO__SpecialJob_Receivers_Callback(KIO__SpecialJob_Receivers_Callback cb) { kio__specialjob_receivers_callback = cb; }
    inline void setKIO__SpecialJob_IsSignalConnected_Callback(KIO__SpecialJob_IsSignalConnected_Callback cb) { kio__specialjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__SpecialJob_Metacall_IsBase(bool value) const { kio__specialjob_metacall_isbase = value; }
    inline void setKIO__SpecialJob_DoResume_IsBase(bool value) const { kio__specialjob_doresume_isbase = value; }
    inline void setKIO__SpecialJob_SlotRedirection_IsBase(bool value) const { kio__specialjob_slotredirection_isbase = value; }
    inline void setKIO__SpecialJob_SlotFinished_IsBase(bool value) const { kio__specialjob_slotfinished_isbase = value; }
    inline void setKIO__SpecialJob_SlotData_IsBase(bool value) const { kio__specialjob_slotdata_isbase = value; }
    inline void setKIO__SpecialJob_SlotDataReq_IsBase(bool value) const { kio__specialjob_slotdatareq_isbase = value; }
    inline void setKIO__SpecialJob_SlotMimetype_IsBase(bool value) const { kio__specialjob_slotmimetype_isbase = value; }
    inline void setKIO__SpecialJob_DoSuspend_IsBase(bool value) const { kio__specialjob_dosuspend_isbase = value; }
    inline void setKIO__SpecialJob_DoKill_IsBase(bool value) const { kio__specialjob_dokill_isbase = value; }
    inline void setKIO__SpecialJob_PutOnHold_IsBase(bool value) const { kio__specialjob_putonhold_isbase = value; }
    inline void setKIO__SpecialJob_SlotWarning_IsBase(bool value) const { kio__specialjob_slotwarning_isbase = value; }
    inline void setKIO__SpecialJob_SlotMetaData_IsBase(bool value) const { kio__specialjob_slotmetadata_isbase = value; }
    inline void setKIO__SpecialJob_Start_IsBase(bool value) const { kio__specialjob_start_isbase = value; }
    inline void setKIO__SpecialJob_ErrorString_IsBase(bool value) const { kio__specialjob_errorstring_isbase = value; }
    inline void setKIO__SpecialJob_AddSubjob_IsBase(bool value) const { kio__specialjob_addsubjob_isbase = value; }
    inline void setKIO__SpecialJob_RemoveSubjob_IsBase(bool value) const { kio__specialjob_removesubjob_isbase = value; }
    inline void setKIO__SpecialJob_SlotResult_IsBase(bool value) const { kio__specialjob_slotresult_isbase = value; }
    inline void setKIO__SpecialJob_SlotInfoMessage_IsBase(bool value) const { kio__specialjob_slotinfomessage_isbase = value; }
    inline void setKIO__SpecialJob_Event_IsBase(bool value) const { kio__specialjob_event_isbase = value; }
    inline void setKIO__SpecialJob_EventFilter_IsBase(bool value) const { kio__specialjob_eventfilter_isbase = value; }
    inline void setKIO__SpecialJob_TimerEvent_IsBase(bool value) const { kio__specialjob_timerevent_isbase = value; }
    inline void setKIO__SpecialJob_ChildEvent_IsBase(bool value) const { kio__specialjob_childevent_isbase = value; }
    inline void setKIO__SpecialJob_CustomEvent_IsBase(bool value) const { kio__specialjob_customevent_isbase = value; }
    inline void setKIO__SpecialJob_ConnectNotify_IsBase(bool value) const { kio__specialjob_connectnotify_isbase = value; }
    inline void setKIO__SpecialJob_DisconnectNotify_IsBase(bool value) const { kio__specialjob_disconnectnotify_isbase = value; }
    inline void setKIO__SpecialJob_HasSubjobs_IsBase(bool value) const { kio__specialjob_hassubjobs_isbase = value; }
    inline void setKIO__SpecialJob_Subjobs_IsBase(bool value) const { kio__specialjob_subjobs_isbase = value; }
    inline void setKIO__SpecialJob_ClearSubjobs_IsBase(bool value) const { kio__specialjob_clearsubjobs_isbase = value; }
    inline void setKIO__SpecialJob_SetCapabilities_IsBase(bool value) const { kio__specialjob_setcapabilities_isbase = value; }
    inline void setKIO__SpecialJob_IsFinished_IsBase(bool value) const { kio__specialjob_isfinished_isbase = value; }
    inline void setKIO__SpecialJob_SetError_IsBase(bool value) const { kio__specialjob_seterror_isbase = value; }
    inline void setKIO__SpecialJob_SetErrorText_IsBase(bool value) const { kio__specialjob_seterrortext_isbase = value; }
    inline void setKIO__SpecialJob_SetProcessedAmount_IsBase(bool value) const { kio__specialjob_setprocessedamount_isbase = value; }
    inline void setKIO__SpecialJob_SetTotalAmount_IsBase(bool value) const { kio__specialjob_settotalamount_isbase = value; }
    inline void setKIO__SpecialJob_SetProgressUnit_IsBase(bool value) const { kio__specialjob_setprogressunit_isbase = value; }
    inline void setKIO__SpecialJob_SetPercent_IsBase(bool value) const { kio__specialjob_setpercent_isbase = value; }
    inline void setKIO__SpecialJob_EmitResult_IsBase(bool value) const { kio__specialjob_emitresult_isbase = value; }
    inline void setKIO__SpecialJob_EmitPercent_IsBase(bool value) const { kio__specialjob_emitpercent_isbase = value; }
    inline void setKIO__SpecialJob_EmitSpeed_IsBase(bool value) const { kio__specialjob_emitspeed_isbase = value; }
    inline void setKIO__SpecialJob_StartElapsedTimer_IsBase(bool value) const { kio__specialjob_startelapsedtimer_isbase = value; }
    inline void setKIO__SpecialJob_Sender_IsBase(bool value) const { kio__specialjob_sender_isbase = value; }
    inline void setKIO__SpecialJob_SenderSignalIndex_IsBase(bool value) const { kio__specialjob_sendersignalindex_isbase = value; }
    inline void setKIO__SpecialJob_Receivers_IsBase(bool value) const { kio__specialjob_receivers_isbase = value; }
    inline void setKIO__SpecialJob_IsSignalConnected_IsBase(bool value) const { kio__specialjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__specialjob_metacall_isbase) {
            kio__specialjob_metacall_isbase = false;
            return KIO__SpecialJob::qt_metacall(param1, param2, param3);
        } else if (kio__specialjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__specialjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__SpecialJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__specialjob_doresume_isbase) {
            kio__specialjob_doresume_isbase = false;
            return KIO__SpecialJob::doResume();
        } else if (kio__specialjob_doresume_callback != nullptr) {
            bool callback_ret = kio__specialjob_doresume_callback();
            return callback_ret;
        } else {
            return KIO__SpecialJob::doResume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotRedirection(const QUrl& url) override {
        if (kio__specialjob_slotredirection_isbase) {
            kio__specialjob_slotredirection_isbase = false;
            KIO__SpecialJob::slotRedirection(url);
        } else if (kio__specialjob_slotredirection_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            kio__specialjob_slotredirection_callback(this, cbval1);
        } else {
            KIO__SpecialJob::slotRedirection(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotFinished() override {
        if (kio__specialjob_slotfinished_isbase) {
            kio__specialjob_slotfinished_isbase = false;
            KIO__SpecialJob::slotFinished();
        } else if (kio__specialjob_slotfinished_callback != nullptr) {
            kio__specialjob_slotfinished_callback();
        } else {
            KIO__SpecialJob::slotFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotData(const QByteArray& data) override {
        if (kio__specialjob_slotdata_isbase) {
            kio__specialjob_slotdata_isbase = false;
            KIO__SpecialJob::slotData(data);
        } else if (kio__specialjob_slotdata_callback != nullptr) {
            const QByteArray data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<const char*>(malloc(data_str.len + 1));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            ((char*)data_str.data)[data_str.len] = '\0';
            libqt_string cbval1 = data_str;

            kio__specialjob_slotdata_callback(this, cbval1);
        } else {
            KIO__SpecialJob::slotData(data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotDataReq() override {
        if (kio__specialjob_slotdatareq_isbase) {
            kio__specialjob_slotdatareq_isbase = false;
            KIO__SpecialJob::slotDataReq();
        } else if (kio__specialjob_slotdatareq_callback != nullptr) {
            kio__specialjob_slotdatareq_callback();
        } else {
            KIO__SpecialJob::slotDataReq();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotMimetype(const QString& mimetype) override {
        if (kio__specialjob_slotmimetype_isbase) {
            kio__specialjob_slotmimetype_isbase = false;
            KIO__SpecialJob::slotMimetype(mimetype);
        } else if (kio__specialjob_slotmimetype_callback != nullptr) {
            const QString mimetype_ret = mimetype;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray mimetype_b = mimetype_ret.toUtf8();
            libqt_string mimetype_str;
            mimetype_str.len = mimetype_b.length();
            mimetype_str.data = static_cast<const char*>(malloc(mimetype_str.len + 1));
            memcpy((void*)mimetype_str.data, mimetype_b.data(), mimetype_str.len);
            ((char*)mimetype_str.data)[mimetype_str.len] = '\0';
            libqt_string cbval1 = mimetype_str;

            kio__specialjob_slotmimetype_callback(this, cbval1);
        } else {
            KIO__SpecialJob::slotMimetype(mimetype);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__specialjob_dosuspend_isbase) {
            kio__specialjob_dosuspend_isbase = false;
            return KIO__SpecialJob::doSuspend();
        } else if (kio__specialjob_dosuspend_callback != nullptr) {
            bool callback_ret = kio__specialjob_dosuspend_callback();
            return callback_ret;
        } else {
            return KIO__SpecialJob::doSuspend();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__specialjob_dokill_isbase) {
            kio__specialjob_dokill_isbase = false;
            return KIO__SpecialJob::doKill();
        } else if (kio__specialjob_dokill_callback != nullptr) {
            bool callback_ret = kio__specialjob_dokill_callback();
            return callback_ret;
        } else {
            return KIO__SpecialJob::doKill();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void putOnHold() override {
        if (kio__specialjob_putonhold_isbase) {
            kio__specialjob_putonhold_isbase = false;
            KIO__SpecialJob::putOnHold();
        } else if (kio__specialjob_putonhold_callback != nullptr) {
            kio__specialjob_putonhold_callback();
        } else {
            KIO__SpecialJob::putOnHold();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotWarning(const QString& param1) override {
        if (kio__specialjob_slotwarning_isbase) {
            kio__specialjob_slotwarning_isbase = false;
            KIO__SpecialJob::slotWarning(param1);
        } else if (kio__specialjob_slotwarning_callback != nullptr) {
            const QString param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            libqt_string param1_str;
            param1_str.len = param1_b.length();
            param1_str.data = static_cast<const char*>(malloc(param1_str.len + 1));
            memcpy((void*)param1_str.data, param1_b.data(), param1_str.len);
            ((char*)param1_str.data)[param1_str.len] = '\0';
            libqt_string cbval1 = param1_str;

            kio__specialjob_slotwarning_callback(this, cbval1);
        } else {
            KIO__SpecialJob::slotWarning(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotMetaData(const KIO::MetaData& _metaData) override {
        if (kio__specialjob_slotmetadata_isbase) {
            kio__specialjob_slotmetadata_isbase = false;
            KIO__SpecialJob::slotMetaData(_metaData);
        } else if (kio__specialjob_slotmetadata_callback != nullptr) {
            const KIO::MetaData& _metaData_ret = _metaData;
            // Cast returned reference into pointer
            KIO__MetaData* cbval1 = const_cast<KIO::MetaData*>(&_metaData_ret);

            kio__specialjob_slotmetadata_callback(this, cbval1);
        } else {
            KIO__SpecialJob::slotMetaData(_metaData);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__specialjob_start_isbase) {
            kio__specialjob_start_isbase = false;
            KIO__SpecialJob::start();
        } else if (kio__specialjob_start_callback != nullptr) {
            kio__specialjob_start_callback();
        } else {
            KIO__SpecialJob::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__specialjob_errorstring_isbase) {
            kio__specialjob_errorstring_isbase = false;
            return KIO__SpecialJob::errorString();
        } else if (kio__specialjob_errorstring_callback != nullptr) {
            const char* callback_ret = kio__specialjob_errorstring_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KIO__SpecialJob::errorString();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__specialjob_addsubjob_isbase) {
            kio__specialjob_addsubjob_isbase = false;
            return KIO__SpecialJob::addSubjob(job);
        } else if (kio__specialjob_addsubjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kio__specialjob_addsubjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__SpecialJob::addSubjob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__specialjob_removesubjob_isbase) {
            kio__specialjob_removesubjob_isbase = false;
            return KIO__SpecialJob::removeSubjob(job);
        } else if (kio__specialjob_removesubjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kio__specialjob_removesubjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__SpecialJob::removeSubjob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResult(KJob* job) override {
        if (kio__specialjob_slotresult_isbase) {
            kio__specialjob_slotresult_isbase = false;
            KIO__SpecialJob::slotResult(job);
        } else if (kio__specialjob_slotresult_callback != nullptr) {
            KJob* cbval1 = job;

            kio__specialjob_slotresult_callback(this, cbval1);
        } else {
            KIO__SpecialJob::slotResult(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__specialjob_slotinfomessage_isbase) {
            kio__specialjob_slotinfomessage_isbase = false;
            KIO__SpecialJob::slotInfoMessage(job, message);
        } else if (kio__specialjob_slotinfomessage_callback != nullptr) {
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

            kio__specialjob_slotinfomessage_callback(this, cbval1, cbval2);
        } else {
            KIO__SpecialJob::slotInfoMessage(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__specialjob_event_isbase) {
            kio__specialjob_event_isbase = false;
            return KIO__SpecialJob::event(event);
        } else if (kio__specialjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__specialjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__SpecialJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__specialjob_eventfilter_isbase) {
            kio__specialjob_eventfilter_isbase = false;
            return KIO__SpecialJob::eventFilter(watched, event);
        } else if (kio__specialjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kio__specialjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__SpecialJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__specialjob_timerevent_isbase) {
            kio__specialjob_timerevent_isbase = false;
            KIO__SpecialJob::timerEvent(event);
        } else if (kio__specialjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__specialjob_timerevent_callback(this, cbval1);
        } else {
            KIO__SpecialJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__specialjob_childevent_isbase) {
            kio__specialjob_childevent_isbase = false;
            KIO__SpecialJob::childEvent(event);
        } else if (kio__specialjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__specialjob_childevent_callback(this, cbval1);
        } else {
            KIO__SpecialJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__specialjob_customevent_isbase) {
            kio__specialjob_customevent_isbase = false;
            KIO__SpecialJob::customEvent(event);
        } else if (kio__specialjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__specialjob_customevent_callback(this, cbval1);
        } else {
            KIO__SpecialJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__specialjob_connectnotify_isbase) {
            kio__specialjob_connectnotify_isbase = false;
            KIO__SpecialJob::connectNotify(signal);
        } else if (kio__specialjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__specialjob_connectnotify_callback(this, cbval1);
        } else {
            KIO__SpecialJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__specialjob_disconnectnotify_isbase) {
            kio__specialjob_disconnectnotify_isbase = false;
            KIO__SpecialJob::disconnectNotify(signal);
        } else if (kio__specialjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__specialjob_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__SpecialJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool hasSubjobs() const {
        if (kio__specialjob_hassubjobs_isbase) {
            kio__specialjob_hassubjobs_isbase = false;
            return KIO__SpecialJob::hasSubjobs();
        } else if (kio__specialjob_hassubjobs_callback != nullptr) {
            bool callback_ret = kio__specialjob_hassubjobs_callback();
            return callback_ret;
        } else {
            return KIO__SpecialJob::hasSubjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    const QList<KJob*>& subjobs() const {
        if (kio__specialjob_subjobs_isbase) {
            kio__specialjob_subjobs_isbase = false;
            return KIO__SpecialJob::subjobs();
        } else if (kio__specialjob_subjobs_callback != nullptr) {
            KJob** callback_ret = kio__specialjob_subjobs_callback();
            QList<KJob*>* callback_ret_QList;
            callback_ret_QList = new QList<KJob*>;
            // Iterate until null pointer sentinel
            for (KJob** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList->push_back(*ptridx);
            }
            free(callback_ret);
            return *callback_ret_QList;
        } else {
            return KIO__SpecialJob::subjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    void clearSubjobs() {
        if (kio__specialjob_clearsubjobs_isbase) {
            kio__specialjob_clearsubjobs_isbase = false;
            KIO__SpecialJob::clearSubjobs();
        } else if (kio__specialjob_clearsubjobs_callback != nullptr) {
            kio__specialjob_clearsubjobs_callback();
        } else {
            KIO__SpecialJob::clearSubjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kio__specialjob_setcapabilities_isbase) {
            kio__specialjob_setcapabilities_isbase = false;
            KIO__SpecialJob::setCapabilities(capabilities);
        } else if (kio__specialjob_setcapabilities_callback != nullptr) {
            int cbval1 = static_cast<int>(capabilities);

            kio__specialjob_setcapabilities_callback(this, cbval1);
        } else {
            KIO__SpecialJob::setCapabilities(capabilities);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kio__specialjob_isfinished_isbase) {
            kio__specialjob_isfinished_isbase = false;
            return KIO__SpecialJob::isFinished();
        } else if (kio__specialjob_isfinished_callback != nullptr) {
            bool callback_ret = kio__specialjob_isfinished_callback();
            return callback_ret;
        } else {
            return KIO__SpecialJob::isFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kio__specialjob_seterror_isbase) {
            kio__specialjob_seterror_isbase = false;
            KIO__SpecialJob::setError(errorCode);
        } else if (kio__specialjob_seterror_callback != nullptr) {
            int cbval1 = errorCode;

            kio__specialjob_seterror_callback(this, cbval1);
        } else {
            KIO__SpecialJob::setError(errorCode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kio__specialjob_seterrortext_isbase) {
            kio__specialjob_seterrortext_isbase = false;
            KIO__SpecialJob::setErrorText(errorText);
        } else if (kio__specialjob_seterrortext_callback != nullptr) {
            const QString errorText_ret = errorText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorText_b = errorText_ret.toUtf8();
            libqt_string errorText_str;
            errorText_str.len = errorText_b.length();
            errorText_str.data = static_cast<const char*>(malloc(errorText_str.len + 1));
            memcpy((void*)errorText_str.data, errorText_b.data(), errorText_str.len);
            ((char*)errorText_str.data)[errorText_str.len] = '\0';
            libqt_string cbval1 = errorText_str;

            kio__specialjob_seterrortext_callback(this, cbval1);
        } else {
            KIO__SpecialJob::setErrorText(errorText);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__specialjob_setprocessedamount_isbase) {
            kio__specialjob_setprocessedamount_isbase = false;
            KIO__SpecialJob::setProcessedAmount(unit, amount);
        } else if (kio__specialjob_setprocessedamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__specialjob_setprocessedamount_callback(this, cbval1, cbval2);
        } else {
            KIO__SpecialJob::setProcessedAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__specialjob_settotalamount_isbase) {
            kio__specialjob_settotalamount_isbase = false;
            KIO__SpecialJob::setTotalAmount(unit, amount);
        } else if (kio__specialjob_settotalamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__specialjob_settotalamount_callback(this, cbval1, cbval2);
        } else {
            KIO__SpecialJob::setTotalAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kio__specialjob_setprogressunit_isbase) {
            kio__specialjob_setprogressunit_isbase = false;
            KIO__SpecialJob::setProgressUnit(unit);
        } else if (kio__specialjob_setprogressunit_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);

            kio__specialjob_setprogressunit_callback(this, cbval1);
        } else {
            KIO__SpecialJob::setProgressUnit(unit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kio__specialjob_setpercent_isbase) {
            kio__specialjob_setpercent_isbase = false;
            KIO__SpecialJob::setPercent(percentage);
        } else if (kio__specialjob_setpercent_callback != nullptr) {
            unsigned long cbval1 = percentage;

            kio__specialjob_setpercent_callback(this, cbval1);
        } else {
            KIO__SpecialJob::setPercent(percentage);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kio__specialjob_emitresult_isbase) {
            kio__specialjob_emitresult_isbase = false;
            KIO__SpecialJob::emitResult();
        } else if (kio__specialjob_emitresult_callback != nullptr) {
            kio__specialjob_emitresult_callback();
        } else {
            KIO__SpecialJob::emitResult();
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kio__specialjob_emitpercent_isbase) {
            kio__specialjob_emitpercent_isbase = false;
            KIO__SpecialJob::emitPercent(processedAmount, totalAmount);
        } else if (kio__specialjob_emitpercent_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            kio__specialjob_emitpercent_callback(this, cbval1, cbval2);
        } else {
            KIO__SpecialJob::emitPercent(processedAmount, totalAmount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kio__specialjob_emitspeed_isbase) {
            kio__specialjob_emitspeed_isbase = false;
            KIO__SpecialJob::emitSpeed(speed);
        } else if (kio__specialjob_emitspeed_callback != nullptr) {
            unsigned long cbval1 = speed;

            kio__specialjob_emitspeed_callback(this, cbval1);
        } else {
            KIO__SpecialJob::emitSpeed(speed);
        }
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kio__specialjob_startelapsedtimer_isbase) {
            kio__specialjob_startelapsedtimer_isbase = false;
            KIO__SpecialJob::startElapsedTimer();
        } else if (kio__specialjob_startelapsedtimer_callback != nullptr) {
            kio__specialjob_startelapsedtimer_callback();
        } else {
            KIO__SpecialJob::startElapsedTimer();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__specialjob_sender_isbase) {
            kio__specialjob_sender_isbase = false;
            return KIO__SpecialJob::sender();
        } else if (kio__specialjob_sender_callback != nullptr) {
            QObject* callback_ret = kio__specialjob_sender_callback();
            return callback_ret;
        } else {
            return KIO__SpecialJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__specialjob_sendersignalindex_isbase) {
            kio__specialjob_sendersignalindex_isbase = false;
            return KIO__SpecialJob::senderSignalIndex();
        } else if (kio__specialjob_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__specialjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__SpecialJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__specialjob_receivers_isbase) {
            kio__specialjob_receivers_isbase = false;
            return KIO__SpecialJob::receivers(signal);
        } else if (kio__specialjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__specialjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__SpecialJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__specialjob_issignalconnected_isbase) {
            kio__specialjob_issignalconnected_isbase = false;
            return KIO__SpecialJob::isSignalConnected(signal);
        } else if (kio__specialjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__specialjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__SpecialJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KIO__SpecialJob_DoResume(KIO::SpecialJob* self);
    friend bool KIO__SpecialJob_QBaseDoResume(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_SlotRedirection(KIO::SpecialJob* self, const QUrl* url);
    friend void KIO__SpecialJob_QBaseSlotRedirection(KIO::SpecialJob* self, const QUrl* url);
    friend void KIO__SpecialJob_SlotFinished(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_QBaseSlotFinished(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_SlotData(KIO::SpecialJob* self, const libqt_string data);
    friend void KIO__SpecialJob_QBaseSlotData(KIO::SpecialJob* self, const libqt_string data);
    friend void KIO__SpecialJob_SlotDataReq(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_QBaseSlotDataReq(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_SlotMimetype(KIO::SpecialJob* self, const libqt_string mimetype);
    friend void KIO__SpecialJob_QBaseSlotMimetype(KIO::SpecialJob* self, const libqt_string mimetype);
    friend bool KIO__SpecialJob_DoSuspend(KIO::SpecialJob* self);
    friend bool KIO__SpecialJob_QBaseDoSuspend(KIO::SpecialJob* self);
    friend bool KIO__SpecialJob_DoKill(KIO::SpecialJob* self);
    friend bool KIO__SpecialJob_QBaseDoKill(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_SlotWarning(KIO::SpecialJob* self, const libqt_string param1);
    friend void KIO__SpecialJob_QBaseSlotWarning(KIO::SpecialJob* self, const libqt_string param1);
    friend void KIO__SpecialJob_SlotMetaData(KIO::SpecialJob* self, const KIO__MetaData* _metaData);
    friend void KIO__SpecialJob_QBaseSlotMetaData(KIO::SpecialJob* self, const KIO__MetaData* _metaData);
    friend bool KIO__SpecialJob_AddSubjob(KIO::SpecialJob* self, KJob* job);
    friend bool KIO__SpecialJob_QBaseAddSubjob(KIO::SpecialJob* self, KJob* job);
    friend bool KIO__SpecialJob_RemoveSubjob(KIO::SpecialJob* self, KJob* job);
    friend bool KIO__SpecialJob_QBaseRemoveSubjob(KIO::SpecialJob* self, KJob* job);
    friend void KIO__SpecialJob_SlotResult(KIO::SpecialJob* self, KJob* job);
    friend void KIO__SpecialJob_QBaseSlotResult(KIO::SpecialJob* self, KJob* job);
    friend void KIO__SpecialJob_SlotInfoMessage(KIO::SpecialJob* self, KJob* job, const libqt_string message);
    friend void KIO__SpecialJob_QBaseSlotInfoMessage(KIO::SpecialJob* self, KJob* job, const libqt_string message);
    friend void KIO__SpecialJob_TimerEvent(KIO::SpecialJob* self, QTimerEvent* event);
    friend void KIO__SpecialJob_QBaseTimerEvent(KIO::SpecialJob* self, QTimerEvent* event);
    friend void KIO__SpecialJob_ChildEvent(KIO::SpecialJob* self, QChildEvent* event);
    friend void KIO__SpecialJob_QBaseChildEvent(KIO::SpecialJob* self, QChildEvent* event);
    friend void KIO__SpecialJob_CustomEvent(KIO::SpecialJob* self, QEvent* event);
    friend void KIO__SpecialJob_QBaseCustomEvent(KIO::SpecialJob* self, QEvent* event);
    friend void KIO__SpecialJob_ConnectNotify(KIO::SpecialJob* self, const QMetaMethod* signal);
    friend void KIO__SpecialJob_QBaseConnectNotify(KIO::SpecialJob* self, const QMetaMethod* signal);
    friend void KIO__SpecialJob_DisconnectNotify(KIO::SpecialJob* self, const QMetaMethod* signal);
    friend void KIO__SpecialJob_QBaseDisconnectNotify(KIO::SpecialJob* self, const QMetaMethod* signal);
    friend bool KIO__SpecialJob_HasSubjobs(const KIO::SpecialJob* self);
    friend bool KIO__SpecialJob_QBaseHasSubjobs(const KIO::SpecialJob* self);
    friend libqt_list /* of KJob* */ KIO__SpecialJob_Subjobs(const KIO::SpecialJob* self);
    friend libqt_list /* of KJob* */ KIO__SpecialJob_QBaseSubjobs(const KIO::SpecialJob* self);
    friend void KIO__SpecialJob_ClearSubjobs(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_QBaseClearSubjobs(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_SetCapabilities(KIO::SpecialJob* self, int capabilities);
    friend void KIO__SpecialJob_QBaseSetCapabilities(KIO::SpecialJob* self, int capabilities);
    friend bool KIO__SpecialJob_IsFinished(const KIO::SpecialJob* self);
    friend bool KIO__SpecialJob_QBaseIsFinished(const KIO::SpecialJob* self);
    friend void KIO__SpecialJob_SetError(KIO::SpecialJob* self, int errorCode);
    friend void KIO__SpecialJob_QBaseSetError(KIO::SpecialJob* self, int errorCode);
    friend void KIO__SpecialJob_SetErrorText(KIO::SpecialJob* self, const libqt_string errorText);
    friend void KIO__SpecialJob_QBaseSetErrorText(KIO::SpecialJob* self, const libqt_string errorText);
    friend void KIO__SpecialJob_SetProcessedAmount(KIO::SpecialJob* self, int unit, unsigned long long amount);
    friend void KIO__SpecialJob_QBaseSetProcessedAmount(KIO::SpecialJob* self, int unit, unsigned long long amount);
    friend void KIO__SpecialJob_SetTotalAmount(KIO::SpecialJob* self, int unit, unsigned long long amount);
    friend void KIO__SpecialJob_QBaseSetTotalAmount(KIO::SpecialJob* self, int unit, unsigned long long amount);
    friend void KIO__SpecialJob_SetProgressUnit(KIO::SpecialJob* self, int unit);
    friend void KIO__SpecialJob_QBaseSetProgressUnit(KIO::SpecialJob* self, int unit);
    friend void KIO__SpecialJob_SetPercent(KIO::SpecialJob* self, unsigned long percentage);
    friend void KIO__SpecialJob_QBaseSetPercent(KIO::SpecialJob* self, unsigned long percentage);
    friend void KIO__SpecialJob_EmitResult(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_QBaseEmitResult(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_EmitPercent(KIO::SpecialJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__SpecialJob_QBaseEmitPercent(KIO::SpecialJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__SpecialJob_EmitSpeed(KIO::SpecialJob* self, unsigned long speed);
    friend void KIO__SpecialJob_QBaseEmitSpeed(KIO::SpecialJob* self, unsigned long speed);
    friend void KIO__SpecialJob_StartElapsedTimer(KIO::SpecialJob* self);
    friend void KIO__SpecialJob_QBaseStartElapsedTimer(KIO::SpecialJob* self);
    friend QObject* KIO__SpecialJob_Sender(const KIO::SpecialJob* self);
    friend QObject* KIO__SpecialJob_QBaseSender(const KIO::SpecialJob* self);
    friend int KIO__SpecialJob_SenderSignalIndex(const KIO::SpecialJob* self);
    friend int KIO__SpecialJob_QBaseSenderSignalIndex(const KIO::SpecialJob* self);
    friend int KIO__SpecialJob_Receivers(const KIO::SpecialJob* self, const char* signal);
    friend int KIO__SpecialJob_QBaseReceivers(const KIO::SpecialJob* self, const char* signal);
    friend bool KIO__SpecialJob_IsSignalConnected(const KIO::SpecialJob* self, const QMetaMethod* signal);
    friend bool KIO__SpecialJob_QBaseIsSignalConnected(const KIO::SpecialJob* self, const QMetaMethod* signal);
};

#endif
