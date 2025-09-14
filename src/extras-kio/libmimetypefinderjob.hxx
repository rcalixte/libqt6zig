#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALMIMETYPEFINDERJOB_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALMIMETYPEFINDERJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::MimeTypeFinderJob so that we can call protected methods
class VirtualKIOMimeTypeFinderJob final : public KIO::MimeTypeFinderJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOMimeTypeFinderJob = true;

    // Virtual class public types (including callbacks)
    using KIO__MimeTypeFinderJob_Metacall_Callback = int (*)(KIO__MimeTypeFinderJob*, int, int, void**);
    using KIO__MimeTypeFinderJob_Start_Callback = void (*)();
    using KIO__MimeTypeFinderJob_DoKill_Callback = bool (*)();
    using KIO__MimeTypeFinderJob_SlotResult_Callback = void (*)(KIO__MimeTypeFinderJob*, KJob*);
    using KIO__MimeTypeFinderJob_AddSubjob_Callback = bool (*)(KIO__MimeTypeFinderJob*, KJob*);
    using KIO__MimeTypeFinderJob_RemoveSubjob_Callback = bool (*)(KIO__MimeTypeFinderJob*, KJob*);
    using KIO__MimeTypeFinderJob_SlotInfoMessage_Callback = void (*)(KIO__MimeTypeFinderJob*, KJob*, libqt_string);
    using KIO__MimeTypeFinderJob_DoSuspend_Callback = bool (*)();
    using KIO__MimeTypeFinderJob_DoResume_Callback = bool (*)();
    using KIO__MimeTypeFinderJob_ErrorString_Callback = const char* (*)();
    using KIO__MimeTypeFinderJob_Event_Callback = bool (*)(KIO__MimeTypeFinderJob*, QEvent*);
    using KIO__MimeTypeFinderJob_EventFilter_Callback = bool (*)(KIO__MimeTypeFinderJob*, QObject*, QEvent*);
    using KIO__MimeTypeFinderJob_TimerEvent_Callback = void (*)(KIO__MimeTypeFinderJob*, QTimerEvent*);
    using KIO__MimeTypeFinderJob_ChildEvent_Callback = void (*)(KIO__MimeTypeFinderJob*, QChildEvent*);
    using KIO__MimeTypeFinderJob_CustomEvent_Callback = void (*)(KIO__MimeTypeFinderJob*, QEvent*);
    using KIO__MimeTypeFinderJob_ConnectNotify_Callback = void (*)(KIO__MimeTypeFinderJob*, QMetaMethod*);
    using KIO__MimeTypeFinderJob_DisconnectNotify_Callback = void (*)(KIO__MimeTypeFinderJob*, QMetaMethod*);
    using KIO__MimeTypeFinderJob_HasSubjobs_Callback = bool (*)();
    using KIO__MimeTypeFinderJob_Subjobs_Callback = KJob** (*)();
    using KIO__MimeTypeFinderJob_ClearSubjobs_Callback = void (*)();
    using KIO__MimeTypeFinderJob_SetCapabilities_Callback = void (*)(KIO__MimeTypeFinderJob*, int);
    using KIO__MimeTypeFinderJob_IsFinished_Callback = bool (*)();
    using KIO__MimeTypeFinderJob_SetError_Callback = void (*)(KIO__MimeTypeFinderJob*, int);
    using KIO__MimeTypeFinderJob_SetErrorText_Callback = void (*)(KIO__MimeTypeFinderJob*, libqt_string);
    using KIO__MimeTypeFinderJob_SetProcessedAmount_Callback = void (*)(KIO__MimeTypeFinderJob*, int, unsigned long long);
    using KIO__MimeTypeFinderJob_SetTotalAmount_Callback = void (*)(KIO__MimeTypeFinderJob*, int, unsigned long long);
    using KIO__MimeTypeFinderJob_SetProgressUnit_Callback = void (*)(KIO__MimeTypeFinderJob*, int);
    using KIO__MimeTypeFinderJob_SetPercent_Callback = void (*)(KIO__MimeTypeFinderJob*, unsigned long);
    using KIO__MimeTypeFinderJob_EmitResult_Callback = void (*)();
    using KIO__MimeTypeFinderJob_EmitPercent_Callback = void (*)(KIO__MimeTypeFinderJob*, unsigned long long, unsigned long long);
    using KIO__MimeTypeFinderJob_EmitSpeed_Callback = void (*)(KIO__MimeTypeFinderJob*, unsigned long);
    using KIO__MimeTypeFinderJob_StartElapsedTimer_Callback = void (*)();
    using KIO__MimeTypeFinderJob_Sender_Callback = QObject* (*)();
    using KIO__MimeTypeFinderJob_SenderSignalIndex_Callback = int (*)();
    using KIO__MimeTypeFinderJob_Receivers_Callback = int (*)(const KIO__MimeTypeFinderJob*, const char*);
    using KIO__MimeTypeFinderJob_IsSignalConnected_Callback = bool (*)(const KIO__MimeTypeFinderJob*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KIO__MimeTypeFinderJob_HasSubjobs_Callback kio__mimetypefinderjob_hassubjobs_callback = nullptr;
    KIO__MimeTypeFinderJob_Subjobs_Callback kio__mimetypefinderjob_subjobs_callback = nullptr;
    KIO__MimeTypeFinderJob_ClearSubjobs_Callback kio__mimetypefinderjob_clearsubjobs_callback = nullptr;
    KIO__MimeTypeFinderJob_SetCapabilities_Callback kio__mimetypefinderjob_setcapabilities_callback = nullptr;
    KIO__MimeTypeFinderJob_IsFinished_Callback kio__mimetypefinderjob_isfinished_callback = nullptr;
    KIO__MimeTypeFinderJob_SetError_Callback kio__mimetypefinderjob_seterror_callback = nullptr;
    KIO__MimeTypeFinderJob_SetErrorText_Callback kio__mimetypefinderjob_seterrortext_callback = nullptr;
    KIO__MimeTypeFinderJob_SetProcessedAmount_Callback kio__mimetypefinderjob_setprocessedamount_callback = nullptr;
    KIO__MimeTypeFinderJob_SetTotalAmount_Callback kio__mimetypefinderjob_settotalamount_callback = nullptr;
    KIO__MimeTypeFinderJob_SetProgressUnit_Callback kio__mimetypefinderjob_setprogressunit_callback = nullptr;
    KIO__MimeTypeFinderJob_SetPercent_Callback kio__mimetypefinderjob_setpercent_callback = nullptr;
    KIO__MimeTypeFinderJob_EmitResult_Callback kio__mimetypefinderjob_emitresult_callback = nullptr;
    KIO__MimeTypeFinderJob_EmitPercent_Callback kio__mimetypefinderjob_emitpercent_callback = nullptr;
    KIO__MimeTypeFinderJob_EmitSpeed_Callback kio__mimetypefinderjob_emitspeed_callback = nullptr;
    KIO__MimeTypeFinderJob_StartElapsedTimer_Callback kio__mimetypefinderjob_startelapsedtimer_callback = nullptr;
    KIO__MimeTypeFinderJob_Sender_Callback kio__mimetypefinderjob_sender_callback = nullptr;
    KIO__MimeTypeFinderJob_SenderSignalIndex_Callback kio__mimetypefinderjob_sendersignalindex_callback = nullptr;
    KIO__MimeTypeFinderJob_Receivers_Callback kio__mimetypefinderjob_receivers_callback = nullptr;
    KIO__MimeTypeFinderJob_IsSignalConnected_Callback kio__mimetypefinderjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__mimetypefinderjob_metacall_isbase = false;
    mutable bool kio__mimetypefinderjob_start_isbase = false;
    mutable bool kio__mimetypefinderjob_dokill_isbase = false;
    mutable bool kio__mimetypefinderjob_slotresult_isbase = false;
    mutable bool kio__mimetypefinderjob_addsubjob_isbase = false;
    mutable bool kio__mimetypefinderjob_removesubjob_isbase = false;
    mutable bool kio__mimetypefinderjob_slotinfomessage_isbase = false;
    mutable bool kio__mimetypefinderjob_dosuspend_isbase = false;
    mutable bool kio__mimetypefinderjob_doresume_isbase = false;
    mutable bool kio__mimetypefinderjob_errorstring_isbase = false;
    mutable bool kio__mimetypefinderjob_event_isbase = false;
    mutable bool kio__mimetypefinderjob_eventfilter_isbase = false;
    mutable bool kio__mimetypefinderjob_timerevent_isbase = false;
    mutable bool kio__mimetypefinderjob_childevent_isbase = false;
    mutable bool kio__mimetypefinderjob_customevent_isbase = false;
    mutable bool kio__mimetypefinderjob_connectnotify_isbase = false;
    mutable bool kio__mimetypefinderjob_disconnectnotify_isbase = false;
    mutable bool kio__mimetypefinderjob_hassubjobs_isbase = false;
    mutable bool kio__mimetypefinderjob_subjobs_isbase = false;
    mutable bool kio__mimetypefinderjob_clearsubjobs_isbase = false;
    mutable bool kio__mimetypefinderjob_setcapabilities_isbase = false;
    mutable bool kio__mimetypefinderjob_isfinished_isbase = false;
    mutable bool kio__mimetypefinderjob_seterror_isbase = false;
    mutable bool kio__mimetypefinderjob_seterrortext_isbase = false;
    mutable bool kio__mimetypefinderjob_setprocessedamount_isbase = false;
    mutable bool kio__mimetypefinderjob_settotalamount_isbase = false;
    mutable bool kio__mimetypefinderjob_setprogressunit_isbase = false;
    mutable bool kio__mimetypefinderjob_setpercent_isbase = false;
    mutable bool kio__mimetypefinderjob_emitresult_isbase = false;
    mutable bool kio__mimetypefinderjob_emitpercent_isbase = false;
    mutable bool kio__mimetypefinderjob_emitspeed_isbase = false;
    mutable bool kio__mimetypefinderjob_startelapsedtimer_isbase = false;
    mutable bool kio__mimetypefinderjob_sender_isbase = false;
    mutable bool kio__mimetypefinderjob_sendersignalindex_isbase = false;
    mutable bool kio__mimetypefinderjob_receivers_isbase = false;
    mutable bool kio__mimetypefinderjob_issignalconnected_isbase = false;

  public:
    VirtualKIOMimeTypeFinderJob(const QUrl& url) : KIO::MimeTypeFinderJob(url) {};
    VirtualKIOMimeTypeFinderJob(const QUrl& url, QObject* parent) : KIO::MimeTypeFinderJob(url, parent) {};

    ~VirtualKIOMimeTypeFinderJob() {
        kio__mimetypefinderjob_metacall_callback = nullptr;
        kio__mimetypefinderjob_start_callback = nullptr;
        kio__mimetypefinderjob_dokill_callback = nullptr;
        kio__mimetypefinderjob_slotresult_callback = nullptr;
        kio__mimetypefinderjob_addsubjob_callback = nullptr;
        kio__mimetypefinderjob_removesubjob_callback = nullptr;
        kio__mimetypefinderjob_slotinfomessage_callback = nullptr;
        kio__mimetypefinderjob_dosuspend_callback = nullptr;
        kio__mimetypefinderjob_doresume_callback = nullptr;
        kio__mimetypefinderjob_errorstring_callback = nullptr;
        kio__mimetypefinderjob_event_callback = nullptr;
        kio__mimetypefinderjob_eventfilter_callback = nullptr;
        kio__mimetypefinderjob_timerevent_callback = nullptr;
        kio__mimetypefinderjob_childevent_callback = nullptr;
        kio__mimetypefinderjob_customevent_callback = nullptr;
        kio__mimetypefinderjob_connectnotify_callback = nullptr;
        kio__mimetypefinderjob_disconnectnotify_callback = nullptr;
        kio__mimetypefinderjob_hassubjobs_callback = nullptr;
        kio__mimetypefinderjob_subjobs_callback = nullptr;
        kio__mimetypefinderjob_clearsubjobs_callback = nullptr;
        kio__mimetypefinderjob_setcapabilities_callback = nullptr;
        kio__mimetypefinderjob_isfinished_callback = nullptr;
        kio__mimetypefinderjob_seterror_callback = nullptr;
        kio__mimetypefinderjob_seterrortext_callback = nullptr;
        kio__mimetypefinderjob_setprocessedamount_callback = nullptr;
        kio__mimetypefinderjob_settotalamount_callback = nullptr;
        kio__mimetypefinderjob_setprogressunit_callback = nullptr;
        kio__mimetypefinderjob_setpercent_callback = nullptr;
        kio__mimetypefinderjob_emitresult_callback = nullptr;
        kio__mimetypefinderjob_emitpercent_callback = nullptr;
        kio__mimetypefinderjob_emitspeed_callback = nullptr;
        kio__mimetypefinderjob_startelapsedtimer_callback = nullptr;
        kio__mimetypefinderjob_sender_callback = nullptr;
        kio__mimetypefinderjob_sendersignalindex_callback = nullptr;
        kio__mimetypefinderjob_receivers_callback = nullptr;
        kio__mimetypefinderjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__MimeTypeFinderJob_Metacall_Callback(KIO__MimeTypeFinderJob_Metacall_Callback cb) { kio__mimetypefinderjob_metacall_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_Start_Callback(KIO__MimeTypeFinderJob_Start_Callback cb) { kio__mimetypefinderjob_start_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_DoKill_Callback(KIO__MimeTypeFinderJob_DoKill_Callback cb) { kio__mimetypefinderjob_dokill_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_SlotResult_Callback(KIO__MimeTypeFinderJob_SlotResult_Callback cb) { kio__mimetypefinderjob_slotresult_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_AddSubjob_Callback(KIO__MimeTypeFinderJob_AddSubjob_Callback cb) { kio__mimetypefinderjob_addsubjob_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_RemoveSubjob_Callback(KIO__MimeTypeFinderJob_RemoveSubjob_Callback cb) { kio__mimetypefinderjob_removesubjob_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_SlotInfoMessage_Callback(KIO__MimeTypeFinderJob_SlotInfoMessage_Callback cb) { kio__mimetypefinderjob_slotinfomessage_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_DoSuspend_Callback(KIO__MimeTypeFinderJob_DoSuspend_Callback cb) { kio__mimetypefinderjob_dosuspend_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_DoResume_Callback(KIO__MimeTypeFinderJob_DoResume_Callback cb) { kio__mimetypefinderjob_doresume_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_ErrorString_Callback(KIO__MimeTypeFinderJob_ErrorString_Callback cb) { kio__mimetypefinderjob_errorstring_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_Event_Callback(KIO__MimeTypeFinderJob_Event_Callback cb) { kio__mimetypefinderjob_event_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_EventFilter_Callback(KIO__MimeTypeFinderJob_EventFilter_Callback cb) { kio__mimetypefinderjob_eventfilter_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_TimerEvent_Callback(KIO__MimeTypeFinderJob_TimerEvent_Callback cb) { kio__mimetypefinderjob_timerevent_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_ChildEvent_Callback(KIO__MimeTypeFinderJob_ChildEvent_Callback cb) { kio__mimetypefinderjob_childevent_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_CustomEvent_Callback(KIO__MimeTypeFinderJob_CustomEvent_Callback cb) { kio__mimetypefinderjob_customevent_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_ConnectNotify_Callback(KIO__MimeTypeFinderJob_ConnectNotify_Callback cb) { kio__mimetypefinderjob_connectnotify_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_DisconnectNotify_Callback(KIO__MimeTypeFinderJob_DisconnectNotify_Callback cb) { kio__mimetypefinderjob_disconnectnotify_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_HasSubjobs_Callback(KIO__MimeTypeFinderJob_HasSubjobs_Callback cb) { kio__mimetypefinderjob_hassubjobs_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_Subjobs_Callback(KIO__MimeTypeFinderJob_Subjobs_Callback cb) { kio__mimetypefinderjob_subjobs_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_ClearSubjobs_Callback(KIO__MimeTypeFinderJob_ClearSubjobs_Callback cb) { kio__mimetypefinderjob_clearsubjobs_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_SetCapabilities_Callback(KIO__MimeTypeFinderJob_SetCapabilities_Callback cb) { kio__mimetypefinderjob_setcapabilities_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_IsFinished_Callback(KIO__MimeTypeFinderJob_IsFinished_Callback cb) { kio__mimetypefinderjob_isfinished_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_SetError_Callback(KIO__MimeTypeFinderJob_SetError_Callback cb) { kio__mimetypefinderjob_seterror_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_SetErrorText_Callback(KIO__MimeTypeFinderJob_SetErrorText_Callback cb) { kio__mimetypefinderjob_seterrortext_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_SetProcessedAmount_Callback(KIO__MimeTypeFinderJob_SetProcessedAmount_Callback cb) { kio__mimetypefinderjob_setprocessedamount_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_SetTotalAmount_Callback(KIO__MimeTypeFinderJob_SetTotalAmount_Callback cb) { kio__mimetypefinderjob_settotalamount_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_SetProgressUnit_Callback(KIO__MimeTypeFinderJob_SetProgressUnit_Callback cb) { kio__mimetypefinderjob_setprogressunit_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_SetPercent_Callback(KIO__MimeTypeFinderJob_SetPercent_Callback cb) { kio__mimetypefinderjob_setpercent_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_EmitResult_Callback(KIO__MimeTypeFinderJob_EmitResult_Callback cb) { kio__mimetypefinderjob_emitresult_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_EmitPercent_Callback(KIO__MimeTypeFinderJob_EmitPercent_Callback cb) { kio__mimetypefinderjob_emitpercent_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_EmitSpeed_Callback(KIO__MimeTypeFinderJob_EmitSpeed_Callback cb) { kio__mimetypefinderjob_emitspeed_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_StartElapsedTimer_Callback(KIO__MimeTypeFinderJob_StartElapsedTimer_Callback cb) { kio__mimetypefinderjob_startelapsedtimer_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_Sender_Callback(KIO__MimeTypeFinderJob_Sender_Callback cb) { kio__mimetypefinderjob_sender_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_SenderSignalIndex_Callback(KIO__MimeTypeFinderJob_SenderSignalIndex_Callback cb) { kio__mimetypefinderjob_sendersignalindex_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_Receivers_Callback(KIO__MimeTypeFinderJob_Receivers_Callback cb) { kio__mimetypefinderjob_receivers_callback = cb; }
    inline void setKIO__MimeTypeFinderJob_IsSignalConnected_Callback(KIO__MimeTypeFinderJob_IsSignalConnected_Callback cb) { kio__mimetypefinderjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__MimeTypeFinderJob_Metacall_IsBase(bool value) const { kio__mimetypefinderjob_metacall_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_Start_IsBase(bool value) const { kio__mimetypefinderjob_start_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_DoKill_IsBase(bool value) const { kio__mimetypefinderjob_dokill_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_SlotResult_IsBase(bool value) const { kio__mimetypefinderjob_slotresult_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_AddSubjob_IsBase(bool value) const { kio__mimetypefinderjob_addsubjob_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_RemoveSubjob_IsBase(bool value) const { kio__mimetypefinderjob_removesubjob_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_SlotInfoMessage_IsBase(bool value) const { kio__mimetypefinderjob_slotinfomessage_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_DoSuspend_IsBase(bool value) const { kio__mimetypefinderjob_dosuspend_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_DoResume_IsBase(bool value) const { kio__mimetypefinderjob_doresume_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_ErrorString_IsBase(bool value) const { kio__mimetypefinderjob_errorstring_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_Event_IsBase(bool value) const { kio__mimetypefinderjob_event_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_EventFilter_IsBase(bool value) const { kio__mimetypefinderjob_eventfilter_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_TimerEvent_IsBase(bool value) const { kio__mimetypefinderjob_timerevent_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_ChildEvent_IsBase(bool value) const { kio__mimetypefinderjob_childevent_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_CustomEvent_IsBase(bool value) const { kio__mimetypefinderjob_customevent_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_ConnectNotify_IsBase(bool value) const { kio__mimetypefinderjob_connectnotify_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_DisconnectNotify_IsBase(bool value) const { kio__mimetypefinderjob_disconnectnotify_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_HasSubjobs_IsBase(bool value) const { kio__mimetypefinderjob_hassubjobs_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_Subjobs_IsBase(bool value) const { kio__mimetypefinderjob_subjobs_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_ClearSubjobs_IsBase(bool value) const { kio__mimetypefinderjob_clearsubjobs_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_SetCapabilities_IsBase(bool value) const { kio__mimetypefinderjob_setcapabilities_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_IsFinished_IsBase(bool value) const { kio__mimetypefinderjob_isfinished_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_SetError_IsBase(bool value) const { kio__mimetypefinderjob_seterror_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_SetErrorText_IsBase(bool value) const { kio__mimetypefinderjob_seterrortext_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_SetProcessedAmount_IsBase(bool value) const { kio__mimetypefinderjob_setprocessedamount_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_SetTotalAmount_IsBase(bool value) const { kio__mimetypefinderjob_settotalamount_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_SetProgressUnit_IsBase(bool value) const { kio__mimetypefinderjob_setprogressunit_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_SetPercent_IsBase(bool value) const { kio__mimetypefinderjob_setpercent_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_EmitResult_IsBase(bool value) const { kio__mimetypefinderjob_emitresult_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_EmitPercent_IsBase(bool value) const { kio__mimetypefinderjob_emitpercent_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_EmitSpeed_IsBase(bool value) const { kio__mimetypefinderjob_emitspeed_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_StartElapsedTimer_IsBase(bool value) const { kio__mimetypefinderjob_startelapsedtimer_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_Sender_IsBase(bool value) const { kio__mimetypefinderjob_sender_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_SenderSignalIndex_IsBase(bool value) const { kio__mimetypefinderjob_sendersignalindex_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_Receivers_IsBase(bool value) const { kio__mimetypefinderjob_receivers_isbase = value; }
    inline void setKIO__MimeTypeFinderJob_IsSignalConnected_IsBase(bool value) const { kio__mimetypefinderjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__mimetypefinderjob_metacall_isbase) {
            kio__mimetypefinderjob_metacall_isbase = false;
            return KIO__MimeTypeFinderJob::qt_metacall(param1, param2, param3);
        } else if (kio__mimetypefinderjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__mimetypefinderjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__MimeTypeFinderJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__mimetypefinderjob_start_isbase) {
            kio__mimetypefinderjob_start_isbase = false;
            KIO__MimeTypeFinderJob::start();
        } else if (kio__mimetypefinderjob_start_callback != nullptr) {
            kio__mimetypefinderjob_start_callback();
        } else {
            KIO__MimeTypeFinderJob::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__mimetypefinderjob_dokill_isbase) {
            kio__mimetypefinderjob_dokill_isbase = false;
            return KIO__MimeTypeFinderJob::doKill();
        } else if (kio__mimetypefinderjob_dokill_callback != nullptr) {
            bool callback_ret = kio__mimetypefinderjob_dokill_callback();
            return callback_ret;
        } else {
            return KIO__MimeTypeFinderJob::doKill();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResult(KJob* job) override {
        if (kio__mimetypefinderjob_slotresult_isbase) {
            kio__mimetypefinderjob_slotresult_isbase = false;
            KIO__MimeTypeFinderJob::slotResult(job);
        } else if (kio__mimetypefinderjob_slotresult_callback != nullptr) {
            KJob* cbval1 = job;

            kio__mimetypefinderjob_slotresult_callback(this, cbval1);
        } else {
            KIO__MimeTypeFinderJob::slotResult(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__mimetypefinderjob_addsubjob_isbase) {
            kio__mimetypefinderjob_addsubjob_isbase = false;
            return KIO__MimeTypeFinderJob::addSubjob(job);
        } else if (kio__mimetypefinderjob_addsubjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kio__mimetypefinderjob_addsubjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__MimeTypeFinderJob::addSubjob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__mimetypefinderjob_removesubjob_isbase) {
            kio__mimetypefinderjob_removesubjob_isbase = false;
            return KIO__MimeTypeFinderJob::removeSubjob(job);
        } else if (kio__mimetypefinderjob_removesubjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kio__mimetypefinderjob_removesubjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__MimeTypeFinderJob::removeSubjob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__mimetypefinderjob_slotinfomessage_isbase) {
            kio__mimetypefinderjob_slotinfomessage_isbase = false;
            KIO__MimeTypeFinderJob::slotInfoMessage(job, message);
        } else if (kio__mimetypefinderjob_slotinfomessage_callback != nullptr) {
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

            kio__mimetypefinderjob_slotinfomessage_callback(this, cbval1, cbval2);
        } else {
            KIO__MimeTypeFinderJob::slotInfoMessage(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__mimetypefinderjob_dosuspend_isbase) {
            kio__mimetypefinderjob_dosuspend_isbase = false;
            return KIO__MimeTypeFinderJob::doSuspend();
        } else if (kio__mimetypefinderjob_dosuspend_callback != nullptr) {
            bool callback_ret = kio__mimetypefinderjob_dosuspend_callback();
            return callback_ret;
        } else {
            return KIO__MimeTypeFinderJob::doSuspend();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__mimetypefinderjob_doresume_isbase) {
            kio__mimetypefinderjob_doresume_isbase = false;
            return KIO__MimeTypeFinderJob::doResume();
        } else if (kio__mimetypefinderjob_doresume_callback != nullptr) {
            bool callback_ret = kio__mimetypefinderjob_doresume_callback();
            return callback_ret;
        } else {
            return KIO__MimeTypeFinderJob::doResume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__mimetypefinderjob_errorstring_isbase) {
            kio__mimetypefinderjob_errorstring_isbase = false;
            return KIO__MimeTypeFinderJob::errorString();
        } else if (kio__mimetypefinderjob_errorstring_callback != nullptr) {
            const char* callback_ret = kio__mimetypefinderjob_errorstring_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KIO__MimeTypeFinderJob::errorString();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__mimetypefinderjob_event_isbase) {
            kio__mimetypefinderjob_event_isbase = false;
            return KIO__MimeTypeFinderJob::event(event);
        } else if (kio__mimetypefinderjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__mimetypefinderjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__MimeTypeFinderJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__mimetypefinderjob_eventfilter_isbase) {
            kio__mimetypefinderjob_eventfilter_isbase = false;
            return KIO__MimeTypeFinderJob::eventFilter(watched, event);
        } else if (kio__mimetypefinderjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kio__mimetypefinderjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__MimeTypeFinderJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__mimetypefinderjob_timerevent_isbase) {
            kio__mimetypefinderjob_timerevent_isbase = false;
            KIO__MimeTypeFinderJob::timerEvent(event);
        } else if (kio__mimetypefinderjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__mimetypefinderjob_timerevent_callback(this, cbval1);
        } else {
            KIO__MimeTypeFinderJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__mimetypefinderjob_childevent_isbase) {
            kio__mimetypefinderjob_childevent_isbase = false;
            KIO__MimeTypeFinderJob::childEvent(event);
        } else if (kio__mimetypefinderjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__mimetypefinderjob_childevent_callback(this, cbval1);
        } else {
            KIO__MimeTypeFinderJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__mimetypefinderjob_customevent_isbase) {
            kio__mimetypefinderjob_customevent_isbase = false;
            KIO__MimeTypeFinderJob::customEvent(event);
        } else if (kio__mimetypefinderjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__mimetypefinderjob_customevent_callback(this, cbval1);
        } else {
            KIO__MimeTypeFinderJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__mimetypefinderjob_connectnotify_isbase) {
            kio__mimetypefinderjob_connectnotify_isbase = false;
            KIO__MimeTypeFinderJob::connectNotify(signal);
        } else if (kio__mimetypefinderjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__mimetypefinderjob_connectnotify_callback(this, cbval1);
        } else {
            KIO__MimeTypeFinderJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__mimetypefinderjob_disconnectnotify_isbase) {
            kio__mimetypefinderjob_disconnectnotify_isbase = false;
            KIO__MimeTypeFinderJob::disconnectNotify(signal);
        } else if (kio__mimetypefinderjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__mimetypefinderjob_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__MimeTypeFinderJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool hasSubjobs() const {
        if (kio__mimetypefinderjob_hassubjobs_isbase) {
            kio__mimetypefinderjob_hassubjobs_isbase = false;
            return KIO__MimeTypeFinderJob::hasSubjobs();
        } else if (kio__mimetypefinderjob_hassubjobs_callback != nullptr) {
            bool callback_ret = kio__mimetypefinderjob_hassubjobs_callback();
            return callback_ret;
        } else {
            return KIO__MimeTypeFinderJob::hasSubjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    const QList<KJob*>& subjobs() const {
        if (kio__mimetypefinderjob_subjobs_isbase) {
            kio__mimetypefinderjob_subjobs_isbase = false;
            return KIO__MimeTypeFinderJob::subjobs();
        } else if (kio__mimetypefinderjob_subjobs_callback != nullptr) {
            KJob** callback_ret = kio__mimetypefinderjob_subjobs_callback();
            QList<KJob*>* callback_ret_QList;
            callback_ret_QList = new QList<KJob*>;
            // Iterate until null pointer sentinel
            for (KJob** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList->push_back(*ptridx);
            }
            free(callback_ret);
            return *callback_ret_QList;
        } else {
            return KIO__MimeTypeFinderJob::subjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    void clearSubjobs() {
        if (kio__mimetypefinderjob_clearsubjobs_isbase) {
            kio__mimetypefinderjob_clearsubjobs_isbase = false;
            KIO__MimeTypeFinderJob::clearSubjobs();
        } else if (kio__mimetypefinderjob_clearsubjobs_callback != nullptr) {
            kio__mimetypefinderjob_clearsubjobs_callback();
        } else {
            KIO__MimeTypeFinderJob::clearSubjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kio__mimetypefinderjob_setcapabilities_isbase) {
            kio__mimetypefinderjob_setcapabilities_isbase = false;
            KIO__MimeTypeFinderJob::setCapabilities(capabilities);
        } else if (kio__mimetypefinderjob_setcapabilities_callback != nullptr) {
            int cbval1 = static_cast<int>(capabilities);

            kio__mimetypefinderjob_setcapabilities_callback(this, cbval1);
        } else {
            KIO__MimeTypeFinderJob::setCapabilities(capabilities);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kio__mimetypefinderjob_isfinished_isbase) {
            kio__mimetypefinderjob_isfinished_isbase = false;
            return KIO__MimeTypeFinderJob::isFinished();
        } else if (kio__mimetypefinderjob_isfinished_callback != nullptr) {
            bool callback_ret = kio__mimetypefinderjob_isfinished_callback();
            return callback_ret;
        } else {
            return KIO__MimeTypeFinderJob::isFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kio__mimetypefinderjob_seterror_isbase) {
            kio__mimetypefinderjob_seterror_isbase = false;
            KIO__MimeTypeFinderJob::setError(errorCode);
        } else if (kio__mimetypefinderjob_seterror_callback != nullptr) {
            int cbval1 = errorCode;

            kio__mimetypefinderjob_seterror_callback(this, cbval1);
        } else {
            KIO__MimeTypeFinderJob::setError(errorCode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kio__mimetypefinderjob_seterrortext_isbase) {
            kio__mimetypefinderjob_seterrortext_isbase = false;
            KIO__MimeTypeFinderJob::setErrorText(errorText);
        } else if (kio__mimetypefinderjob_seterrortext_callback != nullptr) {
            const QString errorText_ret = errorText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorText_b = errorText_ret.toUtf8();
            libqt_string errorText_str;
            errorText_str.len = errorText_b.length();
            errorText_str.data = static_cast<const char*>(malloc(errorText_str.len + 1));
            memcpy((void*)errorText_str.data, errorText_b.data(), errorText_str.len);
            ((char*)errorText_str.data)[errorText_str.len] = '\0';
            libqt_string cbval1 = errorText_str;

            kio__mimetypefinderjob_seterrortext_callback(this, cbval1);
        } else {
            KIO__MimeTypeFinderJob::setErrorText(errorText);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__mimetypefinderjob_setprocessedamount_isbase) {
            kio__mimetypefinderjob_setprocessedamount_isbase = false;
            KIO__MimeTypeFinderJob::setProcessedAmount(unit, amount);
        } else if (kio__mimetypefinderjob_setprocessedamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__mimetypefinderjob_setprocessedamount_callback(this, cbval1, cbval2);
        } else {
            KIO__MimeTypeFinderJob::setProcessedAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__mimetypefinderjob_settotalamount_isbase) {
            kio__mimetypefinderjob_settotalamount_isbase = false;
            KIO__MimeTypeFinderJob::setTotalAmount(unit, amount);
        } else if (kio__mimetypefinderjob_settotalamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__mimetypefinderjob_settotalamount_callback(this, cbval1, cbval2);
        } else {
            KIO__MimeTypeFinderJob::setTotalAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kio__mimetypefinderjob_setprogressunit_isbase) {
            kio__mimetypefinderjob_setprogressunit_isbase = false;
            KIO__MimeTypeFinderJob::setProgressUnit(unit);
        } else if (kio__mimetypefinderjob_setprogressunit_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);

            kio__mimetypefinderjob_setprogressunit_callback(this, cbval1);
        } else {
            KIO__MimeTypeFinderJob::setProgressUnit(unit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kio__mimetypefinderjob_setpercent_isbase) {
            kio__mimetypefinderjob_setpercent_isbase = false;
            KIO__MimeTypeFinderJob::setPercent(percentage);
        } else if (kio__mimetypefinderjob_setpercent_callback != nullptr) {
            unsigned long cbval1 = percentage;

            kio__mimetypefinderjob_setpercent_callback(this, cbval1);
        } else {
            KIO__MimeTypeFinderJob::setPercent(percentage);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kio__mimetypefinderjob_emitresult_isbase) {
            kio__mimetypefinderjob_emitresult_isbase = false;
            KIO__MimeTypeFinderJob::emitResult();
        } else if (kio__mimetypefinderjob_emitresult_callback != nullptr) {
            kio__mimetypefinderjob_emitresult_callback();
        } else {
            KIO__MimeTypeFinderJob::emitResult();
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kio__mimetypefinderjob_emitpercent_isbase) {
            kio__mimetypefinderjob_emitpercent_isbase = false;
            KIO__MimeTypeFinderJob::emitPercent(processedAmount, totalAmount);
        } else if (kio__mimetypefinderjob_emitpercent_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            kio__mimetypefinderjob_emitpercent_callback(this, cbval1, cbval2);
        } else {
            KIO__MimeTypeFinderJob::emitPercent(processedAmount, totalAmount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kio__mimetypefinderjob_emitspeed_isbase) {
            kio__mimetypefinderjob_emitspeed_isbase = false;
            KIO__MimeTypeFinderJob::emitSpeed(speed);
        } else if (kio__mimetypefinderjob_emitspeed_callback != nullptr) {
            unsigned long cbval1 = speed;

            kio__mimetypefinderjob_emitspeed_callback(this, cbval1);
        } else {
            KIO__MimeTypeFinderJob::emitSpeed(speed);
        }
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kio__mimetypefinderjob_startelapsedtimer_isbase) {
            kio__mimetypefinderjob_startelapsedtimer_isbase = false;
            KIO__MimeTypeFinderJob::startElapsedTimer();
        } else if (kio__mimetypefinderjob_startelapsedtimer_callback != nullptr) {
            kio__mimetypefinderjob_startelapsedtimer_callback();
        } else {
            KIO__MimeTypeFinderJob::startElapsedTimer();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__mimetypefinderjob_sender_isbase) {
            kio__mimetypefinderjob_sender_isbase = false;
            return KIO__MimeTypeFinderJob::sender();
        } else if (kio__mimetypefinderjob_sender_callback != nullptr) {
            QObject* callback_ret = kio__mimetypefinderjob_sender_callback();
            return callback_ret;
        } else {
            return KIO__MimeTypeFinderJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__mimetypefinderjob_sendersignalindex_isbase) {
            kio__mimetypefinderjob_sendersignalindex_isbase = false;
            return KIO__MimeTypeFinderJob::senderSignalIndex();
        } else if (kio__mimetypefinderjob_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__mimetypefinderjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__MimeTypeFinderJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__mimetypefinderjob_receivers_isbase) {
            kio__mimetypefinderjob_receivers_isbase = false;
            return KIO__MimeTypeFinderJob::receivers(signal);
        } else if (kio__mimetypefinderjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__mimetypefinderjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__MimeTypeFinderJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__mimetypefinderjob_issignalconnected_isbase) {
            kio__mimetypefinderjob_issignalconnected_isbase = false;
            return KIO__MimeTypeFinderJob::isSignalConnected(signal);
        } else if (kio__mimetypefinderjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__mimetypefinderjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__MimeTypeFinderJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KIO__MimeTypeFinderJob_DoKill(KIO::MimeTypeFinderJob* self);
    friend bool KIO__MimeTypeFinderJob_QBaseDoKill(KIO::MimeTypeFinderJob* self);
    friend void KIO__MimeTypeFinderJob_SlotResult(KIO::MimeTypeFinderJob* self, KJob* job);
    friend void KIO__MimeTypeFinderJob_QBaseSlotResult(KIO::MimeTypeFinderJob* self, KJob* job);
    friend bool KIO__MimeTypeFinderJob_AddSubjob(KIO::MimeTypeFinderJob* self, KJob* job);
    friend bool KIO__MimeTypeFinderJob_QBaseAddSubjob(KIO::MimeTypeFinderJob* self, KJob* job);
    friend bool KIO__MimeTypeFinderJob_RemoveSubjob(KIO::MimeTypeFinderJob* self, KJob* job);
    friend bool KIO__MimeTypeFinderJob_QBaseRemoveSubjob(KIO::MimeTypeFinderJob* self, KJob* job);
    friend void KIO__MimeTypeFinderJob_SlotInfoMessage(KIO::MimeTypeFinderJob* self, KJob* job, const libqt_string message);
    friend void KIO__MimeTypeFinderJob_QBaseSlotInfoMessage(KIO::MimeTypeFinderJob* self, KJob* job, const libqt_string message);
    friend bool KIO__MimeTypeFinderJob_DoSuspend(KIO::MimeTypeFinderJob* self);
    friend bool KIO__MimeTypeFinderJob_QBaseDoSuspend(KIO::MimeTypeFinderJob* self);
    friend bool KIO__MimeTypeFinderJob_DoResume(KIO::MimeTypeFinderJob* self);
    friend bool KIO__MimeTypeFinderJob_QBaseDoResume(KIO::MimeTypeFinderJob* self);
    friend void KIO__MimeTypeFinderJob_TimerEvent(KIO::MimeTypeFinderJob* self, QTimerEvent* event);
    friend void KIO__MimeTypeFinderJob_QBaseTimerEvent(KIO::MimeTypeFinderJob* self, QTimerEvent* event);
    friend void KIO__MimeTypeFinderJob_ChildEvent(KIO::MimeTypeFinderJob* self, QChildEvent* event);
    friend void KIO__MimeTypeFinderJob_QBaseChildEvent(KIO::MimeTypeFinderJob* self, QChildEvent* event);
    friend void KIO__MimeTypeFinderJob_CustomEvent(KIO::MimeTypeFinderJob* self, QEvent* event);
    friend void KIO__MimeTypeFinderJob_QBaseCustomEvent(KIO::MimeTypeFinderJob* self, QEvent* event);
    friend void KIO__MimeTypeFinderJob_ConnectNotify(KIO::MimeTypeFinderJob* self, const QMetaMethod* signal);
    friend void KIO__MimeTypeFinderJob_QBaseConnectNotify(KIO::MimeTypeFinderJob* self, const QMetaMethod* signal);
    friend void KIO__MimeTypeFinderJob_DisconnectNotify(KIO::MimeTypeFinderJob* self, const QMetaMethod* signal);
    friend void KIO__MimeTypeFinderJob_QBaseDisconnectNotify(KIO::MimeTypeFinderJob* self, const QMetaMethod* signal);
    friend bool KIO__MimeTypeFinderJob_HasSubjobs(const KIO::MimeTypeFinderJob* self);
    friend bool KIO__MimeTypeFinderJob_QBaseHasSubjobs(const KIO::MimeTypeFinderJob* self);
    friend libqt_list /* of KJob* */ KIO__MimeTypeFinderJob_Subjobs(const KIO::MimeTypeFinderJob* self);
    friend libqt_list /* of KJob* */ KIO__MimeTypeFinderJob_QBaseSubjobs(const KIO::MimeTypeFinderJob* self);
    friend void KIO__MimeTypeFinderJob_ClearSubjobs(KIO::MimeTypeFinderJob* self);
    friend void KIO__MimeTypeFinderJob_QBaseClearSubjobs(KIO::MimeTypeFinderJob* self);
    friend void KIO__MimeTypeFinderJob_SetCapabilities(KIO::MimeTypeFinderJob* self, int capabilities);
    friend void KIO__MimeTypeFinderJob_QBaseSetCapabilities(KIO::MimeTypeFinderJob* self, int capabilities);
    friend bool KIO__MimeTypeFinderJob_IsFinished(const KIO::MimeTypeFinderJob* self);
    friend bool KIO__MimeTypeFinderJob_QBaseIsFinished(const KIO::MimeTypeFinderJob* self);
    friend void KIO__MimeTypeFinderJob_SetError(KIO::MimeTypeFinderJob* self, int errorCode);
    friend void KIO__MimeTypeFinderJob_QBaseSetError(KIO::MimeTypeFinderJob* self, int errorCode);
    friend void KIO__MimeTypeFinderJob_SetErrorText(KIO::MimeTypeFinderJob* self, const libqt_string errorText);
    friend void KIO__MimeTypeFinderJob_QBaseSetErrorText(KIO::MimeTypeFinderJob* self, const libqt_string errorText);
    friend void KIO__MimeTypeFinderJob_SetProcessedAmount(KIO::MimeTypeFinderJob* self, int unit, unsigned long long amount);
    friend void KIO__MimeTypeFinderJob_QBaseSetProcessedAmount(KIO::MimeTypeFinderJob* self, int unit, unsigned long long amount);
    friend void KIO__MimeTypeFinderJob_SetTotalAmount(KIO::MimeTypeFinderJob* self, int unit, unsigned long long amount);
    friend void KIO__MimeTypeFinderJob_QBaseSetTotalAmount(KIO::MimeTypeFinderJob* self, int unit, unsigned long long amount);
    friend void KIO__MimeTypeFinderJob_SetProgressUnit(KIO::MimeTypeFinderJob* self, int unit);
    friend void KIO__MimeTypeFinderJob_QBaseSetProgressUnit(KIO::MimeTypeFinderJob* self, int unit);
    friend void KIO__MimeTypeFinderJob_SetPercent(KIO::MimeTypeFinderJob* self, unsigned long percentage);
    friend void KIO__MimeTypeFinderJob_QBaseSetPercent(KIO::MimeTypeFinderJob* self, unsigned long percentage);
    friend void KIO__MimeTypeFinderJob_EmitResult(KIO::MimeTypeFinderJob* self);
    friend void KIO__MimeTypeFinderJob_QBaseEmitResult(KIO::MimeTypeFinderJob* self);
    friend void KIO__MimeTypeFinderJob_EmitPercent(KIO::MimeTypeFinderJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__MimeTypeFinderJob_QBaseEmitPercent(KIO::MimeTypeFinderJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__MimeTypeFinderJob_EmitSpeed(KIO::MimeTypeFinderJob* self, unsigned long speed);
    friend void KIO__MimeTypeFinderJob_QBaseEmitSpeed(KIO::MimeTypeFinderJob* self, unsigned long speed);
    friend void KIO__MimeTypeFinderJob_StartElapsedTimer(KIO::MimeTypeFinderJob* self);
    friend void KIO__MimeTypeFinderJob_QBaseStartElapsedTimer(KIO::MimeTypeFinderJob* self);
    friend QObject* KIO__MimeTypeFinderJob_Sender(const KIO::MimeTypeFinderJob* self);
    friend QObject* KIO__MimeTypeFinderJob_QBaseSender(const KIO::MimeTypeFinderJob* self);
    friend int KIO__MimeTypeFinderJob_SenderSignalIndex(const KIO::MimeTypeFinderJob* self);
    friend int KIO__MimeTypeFinderJob_QBaseSenderSignalIndex(const KIO::MimeTypeFinderJob* self);
    friend int KIO__MimeTypeFinderJob_Receivers(const KIO::MimeTypeFinderJob* self, const char* signal);
    friend int KIO__MimeTypeFinderJob_QBaseReceivers(const KIO::MimeTypeFinderJob* self, const char* signal);
    friend bool KIO__MimeTypeFinderJob_IsSignalConnected(const KIO::MimeTypeFinderJob* self, const QMetaMethod* signal);
    friend bool KIO__MimeTypeFinderJob_QBaseIsSignalConnected(const KIO::MimeTypeFinderJob* self, const QMetaMethod* signal);
};

#endif
