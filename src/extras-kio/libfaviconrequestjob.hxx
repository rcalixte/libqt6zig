#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALFAVICONREQUESTJOB_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALFAVICONREQUESTJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::FavIconRequestJob so that we can call protected methods
class VirtualKIOFavIconRequestJob final : public KIO::FavIconRequestJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOFavIconRequestJob = true;

    // Virtual class public types (including callbacks)
    using KIO__FavIconRequestJob_Metacall_Callback = int (*)(KIO__FavIconRequestJob*, int, int, void**);
    using KIO__FavIconRequestJob_Start_Callback = void (*)();
    using KIO__FavIconRequestJob_AddSubjob_Callback = bool (*)(KIO__FavIconRequestJob*, KJob*);
    using KIO__FavIconRequestJob_RemoveSubjob_Callback = bool (*)(KIO__FavIconRequestJob*, KJob*);
    using KIO__FavIconRequestJob_SlotInfoMessage_Callback = void (*)(KIO__FavIconRequestJob*, KJob*, libqt_string);
    using KIO__FavIconRequestJob_DoKill_Callback = bool (*)();
    using KIO__FavIconRequestJob_DoSuspend_Callback = bool (*)();
    using KIO__FavIconRequestJob_DoResume_Callback = bool (*)();
    using KIO__FavIconRequestJob_ErrorString_Callback = const char* (*)();
    using KIO__FavIconRequestJob_Event_Callback = bool (*)(KIO__FavIconRequestJob*, QEvent*);
    using KIO__FavIconRequestJob_EventFilter_Callback = bool (*)(KIO__FavIconRequestJob*, QObject*, QEvent*);
    using KIO__FavIconRequestJob_TimerEvent_Callback = void (*)(KIO__FavIconRequestJob*, QTimerEvent*);
    using KIO__FavIconRequestJob_ChildEvent_Callback = void (*)(KIO__FavIconRequestJob*, QChildEvent*);
    using KIO__FavIconRequestJob_CustomEvent_Callback = void (*)(KIO__FavIconRequestJob*, QEvent*);
    using KIO__FavIconRequestJob_ConnectNotify_Callback = void (*)(KIO__FavIconRequestJob*, QMetaMethod*);
    using KIO__FavIconRequestJob_DisconnectNotify_Callback = void (*)(KIO__FavIconRequestJob*, QMetaMethod*);
    using KIO__FavIconRequestJob_HasSubjobs_Callback = bool (*)();
    using KIO__FavIconRequestJob_Subjobs_Callback = KJob** (*)();
    using KIO__FavIconRequestJob_ClearSubjobs_Callback = void (*)();
    using KIO__FavIconRequestJob_SetCapabilities_Callback = void (*)(KIO__FavIconRequestJob*, int);
    using KIO__FavIconRequestJob_IsFinished_Callback = bool (*)();
    using KIO__FavIconRequestJob_SetError_Callback = void (*)(KIO__FavIconRequestJob*, int);
    using KIO__FavIconRequestJob_SetErrorText_Callback = void (*)(KIO__FavIconRequestJob*, libqt_string);
    using KIO__FavIconRequestJob_SetProcessedAmount_Callback = void (*)(KIO__FavIconRequestJob*, int, unsigned long long);
    using KIO__FavIconRequestJob_SetTotalAmount_Callback = void (*)(KIO__FavIconRequestJob*, int, unsigned long long);
    using KIO__FavIconRequestJob_SetProgressUnit_Callback = void (*)(KIO__FavIconRequestJob*, int);
    using KIO__FavIconRequestJob_SetPercent_Callback = void (*)(KIO__FavIconRequestJob*, unsigned long);
    using KIO__FavIconRequestJob_EmitResult_Callback = void (*)();
    using KIO__FavIconRequestJob_EmitPercent_Callback = void (*)(KIO__FavIconRequestJob*, unsigned long long, unsigned long long);
    using KIO__FavIconRequestJob_EmitSpeed_Callback = void (*)(KIO__FavIconRequestJob*, unsigned long);
    using KIO__FavIconRequestJob_StartElapsedTimer_Callback = void (*)();
    using KIO__FavIconRequestJob_Sender_Callback = QObject* (*)();
    using KIO__FavIconRequestJob_SenderSignalIndex_Callback = int (*)();
    using KIO__FavIconRequestJob_Receivers_Callback = int (*)(const KIO__FavIconRequestJob*, const char*);
    using KIO__FavIconRequestJob_IsSignalConnected_Callback = bool (*)(const KIO__FavIconRequestJob*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KIO__FavIconRequestJob_HasSubjobs_Callback kio__faviconrequestjob_hassubjobs_callback = nullptr;
    KIO__FavIconRequestJob_Subjobs_Callback kio__faviconrequestjob_subjobs_callback = nullptr;
    KIO__FavIconRequestJob_ClearSubjobs_Callback kio__faviconrequestjob_clearsubjobs_callback = nullptr;
    KIO__FavIconRequestJob_SetCapabilities_Callback kio__faviconrequestjob_setcapabilities_callback = nullptr;
    KIO__FavIconRequestJob_IsFinished_Callback kio__faviconrequestjob_isfinished_callback = nullptr;
    KIO__FavIconRequestJob_SetError_Callback kio__faviconrequestjob_seterror_callback = nullptr;
    KIO__FavIconRequestJob_SetErrorText_Callback kio__faviconrequestjob_seterrortext_callback = nullptr;
    KIO__FavIconRequestJob_SetProcessedAmount_Callback kio__faviconrequestjob_setprocessedamount_callback = nullptr;
    KIO__FavIconRequestJob_SetTotalAmount_Callback kio__faviconrequestjob_settotalamount_callback = nullptr;
    KIO__FavIconRequestJob_SetProgressUnit_Callback kio__faviconrequestjob_setprogressunit_callback = nullptr;
    KIO__FavIconRequestJob_SetPercent_Callback kio__faviconrequestjob_setpercent_callback = nullptr;
    KIO__FavIconRequestJob_EmitResult_Callback kio__faviconrequestjob_emitresult_callback = nullptr;
    KIO__FavIconRequestJob_EmitPercent_Callback kio__faviconrequestjob_emitpercent_callback = nullptr;
    KIO__FavIconRequestJob_EmitSpeed_Callback kio__faviconrequestjob_emitspeed_callback = nullptr;
    KIO__FavIconRequestJob_StartElapsedTimer_Callback kio__faviconrequestjob_startelapsedtimer_callback = nullptr;
    KIO__FavIconRequestJob_Sender_Callback kio__faviconrequestjob_sender_callback = nullptr;
    KIO__FavIconRequestJob_SenderSignalIndex_Callback kio__faviconrequestjob_sendersignalindex_callback = nullptr;
    KIO__FavIconRequestJob_Receivers_Callback kio__faviconrequestjob_receivers_callback = nullptr;
    KIO__FavIconRequestJob_IsSignalConnected_Callback kio__faviconrequestjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__faviconrequestjob_metacall_isbase = false;
    mutable bool kio__faviconrequestjob_start_isbase = false;
    mutable bool kio__faviconrequestjob_addsubjob_isbase = false;
    mutable bool kio__faviconrequestjob_removesubjob_isbase = false;
    mutable bool kio__faviconrequestjob_slotinfomessage_isbase = false;
    mutable bool kio__faviconrequestjob_dokill_isbase = false;
    mutable bool kio__faviconrequestjob_dosuspend_isbase = false;
    mutable bool kio__faviconrequestjob_doresume_isbase = false;
    mutable bool kio__faviconrequestjob_errorstring_isbase = false;
    mutable bool kio__faviconrequestjob_event_isbase = false;
    mutable bool kio__faviconrequestjob_eventfilter_isbase = false;
    mutable bool kio__faviconrequestjob_timerevent_isbase = false;
    mutable bool kio__faviconrequestjob_childevent_isbase = false;
    mutable bool kio__faviconrequestjob_customevent_isbase = false;
    mutable bool kio__faviconrequestjob_connectnotify_isbase = false;
    mutable bool kio__faviconrequestjob_disconnectnotify_isbase = false;
    mutable bool kio__faviconrequestjob_hassubjobs_isbase = false;
    mutable bool kio__faviconrequestjob_subjobs_isbase = false;
    mutable bool kio__faviconrequestjob_clearsubjobs_isbase = false;
    mutable bool kio__faviconrequestjob_setcapabilities_isbase = false;
    mutable bool kio__faviconrequestjob_isfinished_isbase = false;
    mutable bool kio__faviconrequestjob_seterror_isbase = false;
    mutable bool kio__faviconrequestjob_seterrortext_isbase = false;
    mutable bool kio__faviconrequestjob_setprocessedamount_isbase = false;
    mutable bool kio__faviconrequestjob_settotalamount_isbase = false;
    mutable bool kio__faviconrequestjob_setprogressunit_isbase = false;
    mutable bool kio__faviconrequestjob_setpercent_isbase = false;
    mutable bool kio__faviconrequestjob_emitresult_isbase = false;
    mutable bool kio__faviconrequestjob_emitpercent_isbase = false;
    mutable bool kio__faviconrequestjob_emitspeed_isbase = false;
    mutable bool kio__faviconrequestjob_startelapsedtimer_isbase = false;
    mutable bool kio__faviconrequestjob_sender_isbase = false;
    mutable bool kio__faviconrequestjob_sendersignalindex_isbase = false;
    mutable bool kio__faviconrequestjob_receivers_isbase = false;
    mutable bool kio__faviconrequestjob_issignalconnected_isbase = false;

  public:
    VirtualKIOFavIconRequestJob(const QUrl& hostUrl) : KIO::FavIconRequestJob(hostUrl) {};
    VirtualKIOFavIconRequestJob(const QUrl& hostUrl, KIO::LoadType reload) : KIO::FavIconRequestJob(hostUrl, reload) {};
    VirtualKIOFavIconRequestJob(const QUrl& hostUrl, KIO::LoadType reload, QObject* parent) : KIO::FavIconRequestJob(hostUrl, reload, parent) {};

    ~VirtualKIOFavIconRequestJob() {
        kio__faviconrequestjob_metacall_callback = nullptr;
        kio__faviconrequestjob_start_callback = nullptr;
        kio__faviconrequestjob_addsubjob_callback = nullptr;
        kio__faviconrequestjob_removesubjob_callback = nullptr;
        kio__faviconrequestjob_slotinfomessage_callback = nullptr;
        kio__faviconrequestjob_dokill_callback = nullptr;
        kio__faviconrequestjob_dosuspend_callback = nullptr;
        kio__faviconrequestjob_doresume_callback = nullptr;
        kio__faviconrequestjob_errorstring_callback = nullptr;
        kio__faviconrequestjob_event_callback = nullptr;
        kio__faviconrequestjob_eventfilter_callback = nullptr;
        kio__faviconrequestjob_timerevent_callback = nullptr;
        kio__faviconrequestjob_childevent_callback = nullptr;
        kio__faviconrequestjob_customevent_callback = nullptr;
        kio__faviconrequestjob_connectnotify_callback = nullptr;
        kio__faviconrequestjob_disconnectnotify_callback = nullptr;
        kio__faviconrequestjob_hassubjobs_callback = nullptr;
        kio__faviconrequestjob_subjobs_callback = nullptr;
        kio__faviconrequestjob_clearsubjobs_callback = nullptr;
        kio__faviconrequestjob_setcapabilities_callback = nullptr;
        kio__faviconrequestjob_isfinished_callback = nullptr;
        kio__faviconrequestjob_seterror_callback = nullptr;
        kio__faviconrequestjob_seterrortext_callback = nullptr;
        kio__faviconrequestjob_setprocessedamount_callback = nullptr;
        kio__faviconrequestjob_settotalamount_callback = nullptr;
        kio__faviconrequestjob_setprogressunit_callback = nullptr;
        kio__faviconrequestjob_setpercent_callback = nullptr;
        kio__faviconrequestjob_emitresult_callback = nullptr;
        kio__faviconrequestjob_emitpercent_callback = nullptr;
        kio__faviconrequestjob_emitspeed_callback = nullptr;
        kio__faviconrequestjob_startelapsedtimer_callback = nullptr;
        kio__faviconrequestjob_sender_callback = nullptr;
        kio__faviconrequestjob_sendersignalindex_callback = nullptr;
        kio__faviconrequestjob_receivers_callback = nullptr;
        kio__faviconrequestjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__FavIconRequestJob_Metacall_Callback(KIO__FavIconRequestJob_Metacall_Callback cb) { kio__faviconrequestjob_metacall_callback = cb; }
    inline void setKIO__FavIconRequestJob_Start_Callback(KIO__FavIconRequestJob_Start_Callback cb) { kio__faviconrequestjob_start_callback = cb; }
    inline void setKIO__FavIconRequestJob_AddSubjob_Callback(KIO__FavIconRequestJob_AddSubjob_Callback cb) { kio__faviconrequestjob_addsubjob_callback = cb; }
    inline void setKIO__FavIconRequestJob_RemoveSubjob_Callback(KIO__FavIconRequestJob_RemoveSubjob_Callback cb) { kio__faviconrequestjob_removesubjob_callback = cb; }
    inline void setKIO__FavIconRequestJob_SlotInfoMessage_Callback(KIO__FavIconRequestJob_SlotInfoMessage_Callback cb) { kio__faviconrequestjob_slotinfomessage_callback = cb; }
    inline void setKIO__FavIconRequestJob_DoKill_Callback(KIO__FavIconRequestJob_DoKill_Callback cb) { kio__faviconrequestjob_dokill_callback = cb; }
    inline void setKIO__FavIconRequestJob_DoSuspend_Callback(KIO__FavIconRequestJob_DoSuspend_Callback cb) { kio__faviconrequestjob_dosuspend_callback = cb; }
    inline void setKIO__FavIconRequestJob_DoResume_Callback(KIO__FavIconRequestJob_DoResume_Callback cb) { kio__faviconrequestjob_doresume_callback = cb; }
    inline void setKIO__FavIconRequestJob_ErrorString_Callback(KIO__FavIconRequestJob_ErrorString_Callback cb) { kio__faviconrequestjob_errorstring_callback = cb; }
    inline void setKIO__FavIconRequestJob_Event_Callback(KIO__FavIconRequestJob_Event_Callback cb) { kio__faviconrequestjob_event_callback = cb; }
    inline void setKIO__FavIconRequestJob_EventFilter_Callback(KIO__FavIconRequestJob_EventFilter_Callback cb) { kio__faviconrequestjob_eventfilter_callback = cb; }
    inline void setKIO__FavIconRequestJob_TimerEvent_Callback(KIO__FavIconRequestJob_TimerEvent_Callback cb) { kio__faviconrequestjob_timerevent_callback = cb; }
    inline void setKIO__FavIconRequestJob_ChildEvent_Callback(KIO__FavIconRequestJob_ChildEvent_Callback cb) { kio__faviconrequestjob_childevent_callback = cb; }
    inline void setKIO__FavIconRequestJob_CustomEvent_Callback(KIO__FavIconRequestJob_CustomEvent_Callback cb) { kio__faviconrequestjob_customevent_callback = cb; }
    inline void setKIO__FavIconRequestJob_ConnectNotify_Callback(KIO__FavIconRequestJob_ConnectNotify_Callback cb) { kio__faviconrequestjob_connectnotify_callback = cb; }
    inline void setKIO__FavIconRequestJob_DisconnectNotify_Callback(KIO__FavIconRequestJob_DisconnectNotify_Callback cb) { kio__faviconrequestjob_disconnectnotify_callback = cb; }
    inline void setKIO__FavIconRequestJob_HasSubjobs_Callback(KIO__FavIconRequestJob_HasSubjobs_Callback cb) { kio__faviconrequestjob_hassubjobs_callback = cb; }
    inline void setKIO__FavIconRequestJob_Subjobs_Callback(KIO__FavIconRequestJob_Subjobs_Callback cb) { kio__faviconrequestjob_subjobs_callback = cb; }
    inline void setKIO__FavIconRequestJob_ClearSubjobs_Callback(KIO__FavIconRequestJob_ClearSubjobs_Callback cb) { kio__faviconrequestjob_clearsubjobs_callback = cb; }
    inline void setKIO__FavIconRequestJob_SetCapabilities_Callback(KIO__FavIconRequestJob_SetCapabilities_Callback cb) { kio__faviconrequestjob_setcapabilities_callback = cb; }
    inline void setKIO__FavIconRequestJob_IsFinished_Callback(KIO__FavIconRequestJob_IsFinished_Callback cb) { kio__faviconrequestjob_isfinished_callback = cb; }
    inline void setKIO__FavIconRequestJob_SetError_Callback(KIO__FavIconRequestJob_SetError_Callback cb) { kio__faviconrequestjob_seterror_callback = cb; }
    inline void setKIO__FavIconRequestJob_SetErrorText_Callback(KIO__FavIconRequestJob_SetErrorText_Callback cb) { kio__faviconrequestjob_seterrortext_callback = cb; }
    inline void setKIO__FavIconRequestJob_SetProcessedAmount_Callback(KIO__FavIconRequestJob_SetProcessedAmount_Callback cb) { kio__faviconrequestjob_setprocessedamount_callback = cb; }
    inline void setKIO__FavIconRequestJob_SetTotalAmount_Callback(KIO__FavIconRequestJob_SetTotalAmount_Callback cb) { kio__faviconrequestjob_settotalamount_callback = cb; }
    inline void setKIO__FavIconRequestJob_SetProgressUnit_Callback(KIO__FavIconRequestJob_SetProgressUnit_Callback cb) { kio__faviconrequestjob_setprogressunit_callback = cb; }
    inline void setKIO__FavIconRequestJob_SetPercent_Callback(KIO__FavIconRequestJob_SetPercent_Callback cb) { kio__faviconrequestjob_setpercent_callback = cb; }
    inline void setKIO__FavIconRequestJob_EmitResult_Callback(KIO__FavIconRequestJob_EmitResult_Callback cb) { kio__faviconrequestjob_emitresult_callback = cb; }
    inline void setKIO__FavIconRequestJob_EmitPercent_Callback(KIO__FavIconRequestJob_EmitPercent_Callback cb) { kio__faviconrequestjob_emitpercent_callback = cb; }
    inline void setKIO__FavIconRequestJob_EmitSpeed_Callback(KIO__FavIconRequestJob_EmitSpeed_Callback cb) { kio__faviconrequestjob_emitspeed_callback = cb; }
    inline void setKIO__FavIconRequestJob_StartElapsedTimer_Callback(KIO__FavIconRequestJob_StartElapsedTimer_Callback cb) { kio__faviconrequestjob_startelapsedtimer_callback = cb; }
    inline void setKIO__FavIconRequestJob_Sender_Callback(KIO__FavIconRequestJob_Sender_Callback cb) { kio__faviconrequestjob_sender_callback = cb; }
    inline void setKIO__FavIconRequestJob_SenderSignalIndex_Callback(KIO__FavIconRequestJob_SenderSignalIndex_Callback cb) { kio__faviconrequestjob_sendersignalindex_callback = cb; }
    inline void setKIO__FavIconRequestJob_Receivers_Callback(KIO__FavIconRequestJob_Receivers_Callback cb) { kio__faviconrequestjob_receivers_callback = cb; }
    inline void setKIO__FavIconRequestJob_IsSignalConnected_Callback(KIO__FavIconRequestJob_IsSignalConnected_Callback cb) { kio__faviconrequestjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__FavIconRequestJob_Metacall_IsBase(bool value) const { kio__faviconrequestjob_metacall_isbase = value; }
    inline void setKIO__FavIconRequestJob_Start_IsBase(bool value) const { kio__faviconrequestjob_start_isbase = value; }
    inline void setKIO__FavIconRequestJob_AddSubjob_IsBase(bool value) const { kio__faviconrequestjob_addsubjob_isbase = value; }
    inline void setKIO__FavIconRequestJob_RemoveSubjob_IsBase(bool value) const { kio__faviconrequestjob_removesubjob_isbase = value; }
    inline void setKIO__FavIconRequestJob_SlotInfoMessage_IsBase(bool value) const { kio__faviconrequestjob_slotinfomessage_isbase = value; }
    inline void setKIO__FavIconRequestJob_DoKill_IsBase(bool value) const { kio__faviconrequestjob_dokill_isbase = value; }
    inline void setKIO__FavIconRequestJob_DoSuspend_IsBase(bool value) const { kio__faviconrequestjob_dosuspend_isbase = value; }
    inline void setKIO__FavIconRequestJob_DoResume_IsBase(bool value) const { kio__faviconrequestjob_doresume_isbase = value; }
    inline void setKIO__FavIconRequestJob_ErrorString_IsBase(bool value) const { kio__faviconrequestjob_errorstring_isbase = value; }
    inline void setKIO__FavIconRequestJob_Event_IsBase(bool value) const { kio__faviconrequestjob_event_isbase = value; }
    inline void setKIO__FavIconRequestJob_EventFilter_IsBase(bool value) const { kio__faviconrequestjob_eventfilter_isbase = value; }
    inline void setKIO__FavIconRequestJob_TimerEvent_IsBase(bool value) const { kio__faviconrequestjob_timerevent_isbase = value; }
    inline void setKIO__FavIconRequestJob_ChildEvent_IsBase(bool value) const { kio__faviconrequestjob_childevent_isbase = value; }
    inline void setKIO__FavIconRequestJob_CustomEvent_IsBase(bool value) const { kio__faviconrequestjob_customevent_isbase = value; }
    inline void setKIO__FavIconRequestJob_ConnectNotify_IsBase(bool value) const { kio__faviconrequestjob_connectnotify_isbase = value; }
    inline void setKIO__FavIconRequestJob_DisconnectNotify_IsBase(bool value) const { kio__faviconrequestjob_disconnectnotify_isbase = value; }
    inline void setKIO__FavIconRequestJob_HasSubjobs_IsBase(bool value) const { kio__faviconrequestjob_hassubjobs_isbase = value; }
    inline void setKIO__FavIconRequestJob_Subjobs_IsBase(bool value) const { kio__faviconrequestjob_subjobs_isbase = value; }
    inline void setKIO__FavIconRequestJob_ClearSubjobs_IsBase(bool value) const { kio__faviconrequestjob_clearsubjobs_isbase = value; }
    inline void setKIO__FavIconRequestJob_SetCapabilities_IsBase(bool value) const { kio__faviconrequestjob_setcapabilities_isbase = value; }
    inline void setKIO__FavIconRequestJob_IsFinished_IsBase(bool value) const { kio__faviconrequestjob_isfinished_isbase = value; }
    inline void setKIO__FavIconRequestJob_SetError_IsBase(bool value) const { kio__faviconrequestjob_seterror_isbase = value; }
    inline void setKIO__FavIconRequestJob_SetErrorText_IsBase(bool value) const { kio__faviconrequestjob_seterrortext_isbase = value; }
    inline void setKIO__FavIconRequestJob_SetProcessedAmount_IsBase(bool value) const { kio__faviconrequestjob_setprocessedamount_isbase = value; }
    inline void setKIO__FavIconRequestJob_SetTotalAmount_IsBase(bool value) const { kio__faviconrequestjob_settotalamount_isbase = value; }
    inline void setKIO__FavIconRequestJob_SetProgressUnit_IsBase(bool value) const { kio__faviconrequestjob_setprogressunit_isbase = value; }
    inline void setKIO__FavIconRequestJob_SetPercent_IsBase(bool value) const { kio__faviconrequestjob_setpercent_isbase = value; }
    inline void setKIO__FavIconRequestJob_EmitResult_IsBase(bool value) const { kio__faviconrequestjob_emitresult_isbase = value; }
    inline void setKIO__FavIconRequestJob_EmitPercent_IsBase(bool value) const { kio__faviconrequestjob_emitpercent_isbase = value; }
    inline void setKIO__FavIconRequestJob_EmitSpeed_IsBase(bool value) const { kio__faviconrequestjob_emitspeed_isbase = value; }
    inline void setKIO__FavIconRequestJob_StartElapsedTimer_IsBase(bool value) const { kio__faviconrequestjob_startelapsedtimer_isbase = value; }
    inline void setKIO__FavIconRequestJob_Sender_IsBase(bool value) const { kio__faviconrequestjob_sender_isbase = value; }
    inline void setKIO__FavIconRequestJob_SenderSignalIndex_IsBase(bool value) const { kio__faviconrequestjob_sendersignalindex_isbase = value; }
    inline void setKIO__FavIconRequestJob_Receivers_IsBase(bool value) const { kio__faviconrequestjob_receivers_isbase = value; }
    inline void setKIO__FavIconRequestJob_IsSignalConnected_IsBase(bool value) const { kio__faviconrequestjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__faviconrequestjob_metacall_isbase) {
            kio__faviconrequestjob_metacall_isbase = false;
            return KIO__FavIconRequestJob::qt_metacall(param1, param2, param3);
        } else if (kio__faviconrequestjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__faviconrequestjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__FavIconRequestJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__faviconrequestjob_start_isbase) {
            kio__faviconrequestjob_start_isbase = false;
            KIO__FavIconRequestJob::start();
        } else if (kio__faviconrequestjob_start_callback != nullptr) {
            kio__faviconrequestjob_start_callback();
        } else {
            KIO__FavIconRequestJob::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__faviconrequestjob_addsubjob_isbase) {
            kio__faviconrequestjob_addsubjob_isbase = false;
            return KIO__FavIconRequestJob::addSubjob(job);
        } else if (kio__faviconrequestjob_addsubjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kio__faviconrequestjob_addsubjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__FavIconRequestJob::addSubjob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__faviconrequestjob_removesubjob_isbase) {
            kio__faviconrequestjob_removesubjob_isbase = false;
            return KIO__FavIconRequestJob::removeSubjob(job);
        } else if (kio__faviconrequestjob_removesubjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kio__faviconrequestjob_removesubjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__FavIconRequestJob::removeSubjob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__faviconrequestjob_slotinfomessage_isbase) {
            kio__faviconrequestjob_slotinfomessage_isbase = false;
            KIO__FavIconRequestJob::slotInfoMessage(job, message);
        } else if (kio__faviconrequestjob_slotinfomessage_callback != nullptr) {
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

            kio__faviconrequestjob_slotinfomessage_callback(this, cbval1, cbval2);
        } else {
            KIO__FavIconRequestJob::slotInfoMessage(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__faviconrequestjob_dokill_isbase) {
            kio__faviconrequestjob_dokill_isbase = false;
            return KIO__FavIconRequestJob::doKill();
        } else if (kio__faviconrequestjob_dokill_callback != nullptr) {
            bool callback_ret = kio__faviconrequestjob_dokill_callback();
            return callback_ret;
        } else {
            return KIO__FavIconRequestJob::doKill();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__faviconrequestjob_dosuspend_isbase) {
            kio__faviconrequestjob_dosuspend_isbase = false;
            return KIO__FavIconRequestJob::doSuspend();
        } else if (kio__faviconrequestjob_dosuspend_callback != nullptr) {
            bool callback_ret = kio__faviconrequestjob_dosuspend_callback();
            return callback_ret;
        } else {
            return KIO__FavIconRequestJob::doSuspend();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__faviconrequestjob_doresume_isbase) {
            kio__faviconrequestjob_doresume_isbase = false;
            return KIO__FavIconRequestJob::doResume();
        } else if (kio__faviconrequestjob_doresume_callback != nullptr) {
            bool callback_ret = kio__faviconrequestjob_doresume_callback();
            return callback_ret;
        } else {
            return KIO__FavIconRequestJob::doResume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__faviconrequestjob_errorstring_isbase) {
            kio__faviconrequestjob_errorstring_isbase = false;
            return KIO__FavIconRequestJob::errorString();
        } else if (kio__faviconrequestjob_errorstring_callback != nullptr) {
            const char* callback_ret = kio__faviconrequestjob_errorstring_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KIO__FavIconRequestJob::errorString();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__faviconrequestjob_event_isbase) {
            kio__faviconrequestjob_event_isbase = false;
            return KIO__FavIconRequestJob::event(event);
        } else if (kio__faviconrequestjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__faviconrequestjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__FavIconRequestJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__faviconrequestjob_eventfilter_isbase) {
            kio__faviconrequestjob_eventfilter_isbase = false;
            return KIO__FavIconRequestJob::eventFilter(watched, event);
        } else if (kio__faviconrequestjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kio__faviconrequestjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__FavIconRequestJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__faviconrequestjob_timerevent_isbase) {
            kio__faviconrequestjob_timerevent_isbase = false;
            KIO__FavIconRequestJob::timerEvent(event);
        } else if (kio__faviconrequestjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__faviconrequestjob_timerevent_callback(this, cbval1);
        } else {
            KIO__FavIconRequestJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__faviconrequestjob_childevent_isbase) {
            kio__faviconrequestjob_childevent_isbase = false;
            KIO__FavIconRequestJob::childEvent(event);
        } else if (kio__faviconrequestjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__faviconrequestjob_childevent_callback(this, cbval1);
        } else {
            KIO__FavIconRequestJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__faviconrequestjob_customevent_isbase) {
            kio__faviconrequestjob_customevent_isbase = false;
            KIO__FavIconRequestJob::customEvent(event);
        } else if (kio__faviconrequestjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__faviconrequestjob_customevent_callback(this, cbval1);
        } else {
            KIO__FavIconRequestJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__faviconrequestjob_connectnotify_isbase) {
            kio__faviconrequestjob_connectnotify_isbase = false;
            KIO__FavIconRequestJob::connectNotify(signal);
        } else if (kio__faviconrequestjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__faviconrequestjob_connectnotify_callback(this, cbval1);
        } else {
            KIO__FavIconRequestJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__faviconrequestjob_disconnectnotify_isbase) {
            kio__faviconrequestjob_disconnectnotify_isbase = false;
            KIO__FavIconRequestJob::disconnectNotify(signal);
        } else if (kio__faviconrequestjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__faviconrequestjob_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__FavIconRequestJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool hasSubjobs() const {
        if (kio__faviconrequestjob_hassubjobs_isbase) {
            kio__faviconrequestjob_hassubjobs_isbase = false;
            return KIO__FavIconRequestJob::hasSubjobs();
        } else if (kio__faviconrequestjob_hassubjobs_callback != nullptr) {
            bool callback_ret = kio__faviconrequestjob_hassubjobs_callback();
            return callback_ret;
        } else {
            return KIO__FavIconRequestJob::hasSubjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    const QList<KJob*>& subjobs() const {
        if (kio__faviconrequestjob_subjobs_isbase) {
            kio__faviconrequestjob_subjobs_isbase = false;
            return KIO__FavIconRequestJob::subjobs();
        } else if (kio__faviconrequestjob_subjobs_callback != nullptr) {
            KJob** callback_ret = kio__faviconrequestjob_subjobs_callback();
            QList<KJob*>* callback_ret_QList;
            callback_ret_QList = new QList<KJob*>;
            // Iterate until null pointer sentinel
            for (KJob** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList->push_back(*ptridx);
            }
            free(callback_ret);
            return *callback_ret_QList;
        } else {
            return KIO__FavIconRequestJob::subjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    void clearSubjobs() {
        if (kio__faviconrequestjob_clearsubjobs_isbase) {
            kio__faviconrequestjob_clearsubjobs_isbase = false;
            KIO__FavIconRequestJob::clearSubjobs();
        } else if (kio__faviconrequestjob_clearsubjobs_callback != nullptr) {
            kio__faviconrequestjob_clearsubjobs_callback();
        } else {
            KIO__FavIconRequestJob::clearSubjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kio__faviconrequestjob_setcapabilities_isbase) {
            kio__faviconrequestjob_setcapabilities_isbase = false;
            KIO__FavIconRequestJob::setCapabilities(capabilities);
        } else if (kio__faviconrequestjob_setcapabilities_callback != nullptr) {
            int cbval1 = static_cast<int>(capabilities);

            kio__faviconrequestjob_setcapabilities_callback(this, cbval1);
        } else {
            KIO__FavIconRequestJob::setCapabilities(capabilities);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kio__faviconrequestjob_isfinished_isbase) {
            kio__faviconrequestjob_isfinished_isbase = false;
            return KIO__FavIconRequestJob::isFinished();
        } else if (kio__faviconrequestjob_isfinished_callback != nullptr) {
            bool callback_ret = kio__faviconrequestjob_isfinished_callback();
            return callback_ret;
        } else {
            return KIO__FavIconRequestJob::isFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kio__faviconrequestjob_seterror_isbase) {
            kio__faviconrequestjob_seterror_isbase = false;
            KIO__FavIconRequestJob::setError(errorCode);
        } else if (kio__faviconrequestjob_seterror_callback != nullptr) {
            int cbval1 = errorCode;

            kio__faviconrequestjob_seterror_callback(this, cbval1);
        } else {
            KIO__FavIconRequestJob::setError(errorCode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kio__faviconrequestjob_seterrortext_isbase) {
            kio__faviconrequestjob_seterrortext_isbase = false;
            KIO__FavIconRequestJob::setErrorText(errorText);
        } else if (kio__faviconrequestjob_seterrortext_callback != nullptr) {
            const QString errorText_ret = errorText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorText_b = errorText_ret.toUtf8();
            libqt_string errorText_str;
            errorText_str.len = errorText_b.length();
            errorText_str.data = static_cast<const char*>(malloc(errorText_str.len + 1));
            memcpy((void*)errorText_str.data, errorText_b.data(), errorText_str.len);
            ((char*)errorText_str.data)[errorText_str.len] = '\0';
            libqt_string cbval1 = errorText_str;

            kio__faviconrequestjob_seterrortext_callback(this, cbval1);
        } else {
            KIO__FavIconRequestJob::setErrorText(errorText);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__faviconrequestjob_setprocessedamount_isbase) {
            kio__faviconrequestjob_setprocessedamount_isbase = false;
            KIO__FavIconRequestJob::setProcessedAmount(unit, amount);
        } else if (kio__faviconrequestjob_setprocessedamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__faviconrequestjob_setprocessedamount_callback(this, cbval1, cbval2);
        } else {
            KIO__FavIconRequestJob::setProcessedAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__faviconrequestjob_settotalamount_isbase) {
            kio__faviconrequestjob_settotalamount_isbase = false;
            KIO__FavIconRequestJob::setTotalAmount(unit, amount);
        } else if (kio__faviconrequestjob_settotalamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__faviconrequestjob_settotalamount_callback(this, cbval1, cbval2);
        } else {
            KIO__FavIconRequestJob::setTotalAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kio__faviconrequestjob_setprogressunit_isbase) {
            kio__faviconrequestjob_setprogressunit_isbase = false;
            KIO__FavIconRequestJob::setProgressUnit(unit);
        } else if (kio__faviconrequestjob_setprogressunit_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);

            kio__faviconrequestjob_setprogressunit_callback(this, cbval1);
        } else {
            KIO__FavIconRequestJob::setProgressUnit(unit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kio__faviconrequestjob_setpercent_isbase) {
            kio__faviconrequestjob_setpercent_isbase = false;
            KIO__FavIconRequestJob::setPercent(percentage);
        } else if (kio__faviconrequestjob_setpercent_callback != nullptr) {
            unsigned long cbval1 = percentage;

            kio__faviconrequestjob_setpercent_callback(this, cbval1);
        } else {
            KIO__FavIconRequestJob::setPercent(percentage);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kio__faviconrequestjob_emitresult_isbase) {
            kio__faviconrequestjob_emitresult_isbase = false;
            KIO__FavIconRequestJob::emitResult();
        } else if (kio__faviconrequestjob_emitresult_callback != nullptr) {
            kio__faviconrequestjob_emitresult_callback();
        } else {
            KIO__FavIconRequestJob::emitResult();
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kio__faviconrequestjob_emitpercent_isbase) {
            kio__faviconrequestjob_emitpercent_isbase = false;
            KIO__FavIconRequestJob::emitPercent(processedAmount, totalAmount);
        } else if (kio__faviconrequestjob_emitpercent_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            kio__faviconrequestjob_emitpercent_callback(this, cbval1, cbval2);
        } else {
            KIO__FavIconRequestJob::emitPercent(processedAmount, totalAmount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kio__faviconrequestjob_emitspeed_isbase) {
            kio__faviconrequestjob_emitspeed_isbase = false;
            KIO__FavIconRequestJob::emitSpeed(speed);
        } else if (kio__faviconrequestjob_emitspeed_callback != nullptr) {
            unsigned long cbval1 = speed;

            kio__faviconrequestjob_emitspeed_callback(this, cbval1);
        } else {
            KIO__FavIconRequestJob::emitSpeed(speed);
        }
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kio__faviconrequestjob_startelapsedtimer_isbase) {
            kio__faviconrequestjob_startelapsedtimer_isbase = false;
            KIO__FavIconRequestJob::startElapsedTimer();
        } else if (kio__faviconrequestjob_startelapsedtimer_callback != nullptr) {
            kio__faviconrequestjob_startelapsedtimer_callback();
        } else {
            KIO__FavIconRequestJob::startElapsedTimer();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__faviconrequestjob_sender_isbase) {
            kio__faviconrequestjob_sender_isbase = false;
            return KIO__FavIconRequestJob::sender();
        } else if (kio__faviconrequestjob_sender_callback != nullptr) {
            QObject* callback_ret = kio__faviconrequestjob_sender_callback();
            return callback_ret;
        } else {
            return KIO__FavIconRequestJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__faviconrequestjob_sendersignalindex_isbase) {
            kio__faviconrequestjob_sendersignalindex_isbase = false;
            return KIO__FavIconRequestJob::senderSignalIndex();
        } else if (kio__faviconrequestjob_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__faviconrequestjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__FavIconRequestJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__faviconrequestjob_receivers_isbase) {
            kio__faviconrequestjob_receivers_isbase = false;
            return KIO__FavIconRequestJob::receivers(signal);
        } else if (kio__faviconrequestjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__faviconrequestjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__FavIconRequestJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__faviconrequestjob_issignalconnected_isbase) {
            kio__faviconrequestjob_issignalconnected_isbase = false;
            return KIO__FavIconRequestJob::isSignalConnected(signal);
        } else if (kio__faviconrequestjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__faviconrequestjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__FavIconRequestJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KIO__FavIconRequestJob_AddSubjob(KIO::FavIconRequestJob* self, KJob* job);
    friend bool KIO__FavIconRequestJob_QBaseAddSubjob(KIO::FavIconRequestJob* self, KJob* job);
    friend bool KIO__FavIconRequestJob_RemoveSubjob(KIO::FavIconRequestJob* self, KJob* job);
    friend bool KIO__FavIconRequestJob_QBaseRemoveSubjob(KIO::FavIconRequestJob* self, KJob* job);
    friend void KIO__FavIconRequestJob_SlotInfoMessage(KIO::FavIconRequestJob* self, KJob* job, const libqt_string message);
    friend void KIO__FavIconRequestJob_QBaseSlotInfoMessage(KIO::FavIconRequestJob* self, KJob* job, const libqt_string message);
    friend bool KIO__FavIconRequestJob_DoKill(KIO::FavIconRequestJob* self);
    friend bool KIO__FavIconRequestJob_QBaseDoKill(KIO::FavIconRequestJob* self);
    friend bool KIO__FavIconRequestJob_DoSuspend(KIO::FavIconRequestJob* self);
    friend bool KIO__FavIconRequestJob_QBaseDoSuspend(KIO::FavIconRequestJob* self);
    friend bool KIO__FavIconRequestJob_DoResume(KIO::FavIconRequestJob* self);
    friend bool KIO__FavIconRequestJob_QBaseDoResume(KIO::FavIconRequestJob* self);
    friend void KIO__FavIconRequestJob_TimerEvent(KIO::FavIconRequestJob* self, QTimerEvent* event);
    friend void KIO__FavIconRequestJob_QBaseTimerEvent(KIO::FavIconRequestJob* self, QTimerEvent* event);
    friend void KIO__FavIconRequestJob_ChildEvent(KIO::FavIconRequestJob* self, QChildEvent* event);
    friend void KIO__FavIconRequestJob_QBaseChildEvent(KIO::FavIconRequestJob* self, QChildEvent* event);
    friend void KIO__FavIconRequestJob_CustomEvent(KIO::FavIconRequestJob* self, QEvent* event);
    friend void KIO__FavIconRequestJob_QBaseCustomEvent(KIO::FavIconRequestJob* self, QEvent* event);
    friend void KIO__FavIconRequestJob_ConnectNotify(KIO::FavIconRequestJob* self, const QMetaMethod* signal);
    friend void KIO__FavIconRequestJob_QBaseConnectNotify(KIO::FavIconRequestJob* self, const QMetaMethod* signal);
    friend void KIO__FavIconRequestJob_DisconnectNotify(KIO::FavIconRequestJob* self, const QMetaMethod* signal);
    friend void KIO__FavIconRequestJob_QBaseDisconnectNotify(KIO::FavIconRequestJob* self, const QMetaMethod* signal);
    friend bool KIO__FavIconRequestJob_HasSubjobs(const KIO::FavIconRequestJob* self);
    friend bool KIO__FavIconRequestJob_QBaseHasSubjobs(const KIO::FavIconRequestJob* self);
    friend libqt_list /* of KJob* */ KIO__FavIconRequestJob_Subjobs(const KIO::FavIconRequestJob* self);
    friend libqt_list /* of KJob* */ KIO__FavIconRequestJob_QBaseSubjobs(const KIO::FavIconRequestJob* self);
    friend void KIO__FavIconRequestJob_ClearSubjobs(KIO::FavIconRequestJob* self);
    friend void KIO__FavIconRequestJob_QBaseClearSubjobs(KIO::FavIconRequestJob* self);
    friend void KIO__FavIconRequestJob_SetCapabilities(KIO::FavIconRequestJob* self, int capabilities);
    friend void KIO__FavIconRequestJob_QBaseSetCapabilities(KIO::FavIconRequestJob* self, int capabilities);
    friend bool KIO__FavIconRequestJob_IsFinished(const KIO::FavIconRequestJob* self);
    friend bool KIO__FavIconRequestJob_QBaseIsFinished(const KIO::FavIconRequestJob* self);
    friend void KIO__FavIconRequestJob_SetError(KIO::FavIconRequestJob* self, int errorCode);
    friend void KIO__FavIconRequestJob_QBaseSetError(KIO::FavIconRequestJob* self, int errorCode);
    friend void KIO__FavIconRequestJob_SetErrorText(KIO::FavIconRequestJob* self, const libqt_string errorText);
    friend void KIO__FavIconRequestJob_QBaseSetErrorText(KIO::FavIconRequestJob* self, const libqt_string errorText);
    friend void KIO__FavIconRequestJob_SetProcessedAmount(KIO::FavIconRequestJob* self, int unit, unsigned long long amount);
    friend void KIO__FavIconRequestJob_QBaseSetProcessedAmount(KIO::FavIconRequestJob* self, int unit, unsigned long long amount);
    friend void KIO__FavIconRequestJob_SetTotalAmount(KIO::FavIconRequestJob* self, int unit, unsigned long long amount);
    friend void KIO__FavIconRequestJob_QBaseSetTotalAmount(KIO::FavIconRequestJob* self, int unit, unsigned long long amount);
    friend void KIO__FavIconRequestJob_SetProgressUnit(KIO::FavIconRequestJob* self, int unit);
    friend void KIO__FavIconRequestJob_QBaseSetProgressUnit(KIO::FavIconRequestJob* self, int unit);
    friend void KIO__FavIconRequestJob_SetPercent(KIO::FavIconRequestJob* self, unsigned long percentage);
    friend void KIO__FavIconRequestJob_QBaseSetPercent(KIO::FavIconRequestJob* self, unsigned long percentage);
    friend void KIO__FavIconRequestJob_EmitResult(KIO::FavIconRequestJob* self);
    friend void KIO__FavIconRequestJob_QBaseEmitResult(KIO::FavIconRequestJob* self);
    friend void KIO__FavIconRequestJob_EmitPercent(KIO::FavIconRequestJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__FavIconRequestJob_QBaseEmitPercent(KIO::FavIconRequestJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__FavIconRequestJob_EmitSpeed(KIO::FavIconRequestJob* self, unsigned long speed);
    friend void KIO__FavIconRequestJob_QBaseEmitSpeed(KIO::FavIconRequestJob* self, unsigned long speed);
    friend void KIO__FavIconRequestJob_StartElapsedTimer(KIO::FavIconRequestJob* self);
    friend void KIO__FavIconRequestJob_QBaseStartElapsedTimer(KIO::FavIconRequestJob* self);
    friend QObject* KIO__FavIconRequestJob_Sender(const KIO::FavIconRequestJob* self);
    friend QObject* KIO__FavIconRequestJob_QBaseSender(const KIO::FavIconRequestJob* self);
    friend int KIO__FavIconRequestJob_SenderSignalIndex(const KIO::FavIconRequestJob* self);
    friend int KIO__FavIconRequestJob_QBaseSenderSignalIndex(const KIO::FavIconRequestJob* self);
    friend int KIO__FavIconRequestJob_Receivers(const KIO::FavIconRequestJob* self, const char* signal);
    friend int KIO__FavIconRequestJob_QBaseReceivers(const KIO::FavIconRequestJob* self, const char* signal);
    friend bool KIO__FavIconRequestJob_IsSignalConnected(const KIO::FavIconRequestJob* self, const QMetaMethod* signal);
    friend bool KIO__FavIconRequestJob_QBaseIsSignalConnected(const KIO::FavIconRequestJob* self, const QMetaMethod* signal);
};

#endif
