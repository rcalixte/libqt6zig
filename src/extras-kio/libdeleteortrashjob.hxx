#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALDELETEORTRASHJOB_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALDELETEORTRASHJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::DeleteOrTrashJob so that we can call protected methods
class VirtualKIODeleteOrTrashJob final : public KIO::DeleteOrTrashJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKIODeleteOrTrashJob = true;

    // Virtual class public types (including callbacks)
    using KIO__DeleteOrTrashJob_Metacall_Callback = int (*)(KIO__DeleteOrTrashJob*, int, int, void**);
    using KIO__DeleteOrTrashJob_Start_Callback = void (*)();
    using KIO__DeleteOrTrashJob_AddSubjob_Callback = bool (*)(KIO__DeleteOrTrashJob*, KJob*);
    using KIO__DeleteOrTrashJob_RemoveSubjob_Callback = bool (*)(KIO__DeleteOrTrashJob*, KJob*);
    using KIO__DeleteOrTrashJob_SlotInfoMessage_Callback = void (*)(KIO__DeleteOrTrashJob*, KJob*, libqt_string);
    using KIO__DeleteOrTrashJob_DoKill_Callback = bool (*)();
    using KIO__DeleteOrTrashJob_DoSuspend_Callback = bool (*)();
    using KIO__DeleteOrTrashJob_DoResume_Callback = bool (*)();
    using KIO__DeleteOrTrashJob_ErrorString_Callback = const char* (*)();
    using KIO__DeleteOrTrashJob_Event_Callback = bool (*)(KIO__DeleteOrTrashJob*, QEvent*);
    using KIO__DeleteOrTrashJob_EventFilter_Callback = bool (*)(KIO__DeleteOrTrashJob*, QObject*, QEvent*);
    using KIO__DeleteOrTrashJob_TimerEvent_Callback = void (*)(KIO__DeleteOrTrashJob*, QTimerEvent*);
    using KIO__DeleteOrTrashJob_ChildEvent_Callback = void (*)(KIO__DeleteOrTrashJob*, QChildEvent*);
    using KIO__DeleteOrTrashJob_CustomEvent_Callback = void (*)(KIO__DeleteOrTrashJob*, QEvent*);
    using KIO__DeleteOrTrashJob_ConnectNotify_Callback = void (*)(KIO__DeleteOrTrashJob*, QMetaMethod*);
    using KIO__DeleteOrTrashJob_DisconnectNotify_Callback = void (*)(KIO__DeleteOrTrashJob*, QMetaMethod*);
    using KIO__DeleteOrTrashJob_HasSubjobs_Callback = bool (*)();
    using KIO__DeleteOrTrashJob_Subjobs_Callback = KJob** (*)();
    using KIO__DeleteOrTrashJob_ClearSubjobs_Callback = void (*)();
    using KIO__DeleteOrTrashJob_SetCapabilities_Callback = void (*)(KIO__DeleteOrTrashJob*, int);
    using KIO__DeleteOrTrashJob_IsFinished_Callback = bool (*)();
    using KIO__DeleteOrTrashJob_SetError_Callback = void (*)(KIO__DeleteOrTrashJob*, int);
    using KIO__DeleteOrTrashJob_SetErrorText_Callback = void (*)(KIO__DeleteOrTrashJob*, libqt_string);
    using KIO__DeleteOrTrashJob_SetProcessedAmount_Callback = void (*)(KIO__DeleteOrTrashJob*, int, unsigned long long);
    using KIO__DeleteOrTrashJob_SetTotalAmount_Callback = void (*)(KIO__DeleteOrTrashJob*, int, unsigned long long);
    using KIO__DeleteOrTrashJob_SetProgressUnit_Callback = void (*)(KIO__DeleteOrTrashJob*, int);
    using KIO__DeleteOrTrashJob_SetPercent_Callback = void (*)(KIO__DeleteOrTrashJob*, unsigned long);
    using KIO__DeleteOrTrashJob_EmitResult_Callback = void (*)();
    using KIO__DeleteOrTrashJob_EmitPercent_Callback = void (*)(KIO__DeleteOrTrashJob*, unsigned long long, unsigned long long);
    using KIO__DeleteOrTrashJob_EmitSpeed_Callback = void (*)(KIO__DeleteOrTrashJob*, unsigned long);
    using KIO__DeleteOrTrashJob_StartElapsedTimer_Callback = void (*)();
    using KIO__DeleteOrTrashJob_Sender_Callback = QObject* (*)();
    using KIO__DeleteOrTrashJob_SenderSignalIndex_Callback = int (*)();
    using KIO__DeleteOrTrashJob_Receivers_Callback = int (*)(const KIO__DeleteOrTrashJob*, const char*);
    using KIO__DeleteOrTrashJob_IsSignalConnected_Callback = bool (*)(const KIO__DeleteOrTrashJob*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KIO__DeleteOrTrashJob_HasSubjobs_Callback kio__deleteortrashjob_hassubjobs_callback = nullptr;
    KIO__DeleteOrTrashJob_Subjobs_Callback kio__deleteortrashjob_subjobs_callback = nullptr;
    KIO__DeleteOrTrashJob_ClearSubjobs_Callback kio__deleteortrashjob_clearsubjobs_callback = nullptr;
    KIO__DeleteOrTrashJob_SetCapabilities_Callback kio__deleteortrashjob_setcapabilities_callback = nullptr;
    KIO__DeleteOrTrashJob_IsFinished_Callback kio__deleteortrashjob_isfinished_callback = nullptr;
    KIO__DeleteOrTrashJob_SetError_Callback kio__deleteortrashjob_seterror_callback = nullptr;
    KIO__DeleteOrTrashJob_SetErrorText_Callback kio__deleteortrashjob_seterrortext_callback = nullptr;
    KIO__DeleteOrTrashJob_SetProcessedAmount_Callback kio__deleteortrashjob_setprocessedamount_callback = nullptr;
    KIO__DeleteOrTrashJob_SetTotalAmount_Callback kio__deleteortrashjob_settotalamount_callback = nullptr;
    KIO__DeleteOrTrashJob_SetProgressUnit_Callback kio__deleteortrashjob_setprogressunit_callback = nullptr;
    KIO__DeleteOrTrashJob_SetPercent_Callback kio__deleteortrashjob_setpercent_callback = nullptr;
    KIO__DeleteOrTrashJob_EmitResult_Callback kio__deleteortrashjob_emitresult_callback = nullptr;
    KIO__DeleteOrTrashJob_EmitPercent_Callback kio__deleteortrashjob_emitpercent_callback = nullptr;
    KIO__DeleteOrTrashJob_EmitSpeed_Callback kio__deleteortrashjob_emitspeed_callback = nullptr;
    KIO__DeleteOrTrashJob_StartElapsedTimer_Callback kio__deleteortrashjob_startelapsedtimer_callback = nullptr;
    KIO__DeleteOrTrashJob_Sender_Callback kio__deleteortrashjob_sender_callback = nullptr;
    KIO__DeleteOrTrashJob_SenderSignalIndex_Callback kio__deleteortrashjob_sendersignalindex_callback = nullptr;
    KIO__DeleteOrTrashJob_Receivers_Callback kio__deleteortrashjob_receivers_callback = nullptr;
    KIO__DeleteOrTrashJob_IsSignalConnected_Callback kio__deleteortrashjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__deleteortrashjob_metacall_isbase = false;
    mutable bool kio__deleteortrashjob_start_isbase = false;
    mutable bool kio__deleteortrashjob_addsubjob_isbase = false;
    mutable bool kio__deleteortrashjob_removesubjob_isbase = false;
    mutable bool kio__deleteortrashjob_slotinfomessage_isbase = false;
    mutable bool kio__deleteortrashjob_dokill_isbase = false;
    mutable bool kio__deleteortrashjob_dosuspend_isbase = false;
    mutable bool kio__deleteortrashjob_doresume_isbase = false;
    mutable bool kio__deleteortrashjob_errorstring_isbase = false;
    mutable bool kio__deleteortrashjob_event_isbase = false;
    mutable bool kio__deleteortrashjob_eventfilter_isbase = false;
    mutable bool kio__deleteortrashjob_timerevent_isbase = false;
    mutable bool kio__deleteortrashjob_childevent_isbase = false;
    mutable bool kio__deleteortrashjob_customevent_isbase = false;
    mutable bool kio__deleteortrashjob_connectnotify_isbase = false;
    mutable bool kio__deleteortrashjob_disconnectnotify_isbase = false;
    mutable bool kio__deleteortrashjob_hassubjobs_isbase = false;
    mutable bool kio__deleteortrashjob_subjobs_isbase = false;
    mutable bool kio__deleteortrashjob_clearsubjobs_isbase = false;
    mutable bool kio__deleteortrashjob_setcapabilities_isbase = false;
    mutable bool kio__deleteortrashjob_isfinished_isbase = false;
    mutable bool kio__deleteortrashjob_seterror_isbase = false;
    mutable bool kio__deleteortrashjob_seterrortext_isbase = false;
    mutable bool kio__deleteortrashjob_setprocessedamount_isbase = false;
    mutable bool kio__deleteortrashjob_settotalamount_isbase = false;
    mutable bool kio__deleteortrashjob_setprogressunit_isbase = false;
    mutable bool kio__deleteortrashjob_setpercent_isbase = false;
    mutable bool kio__deleteortrashjob_emitresult_isbase = false;
    mutable bool kio__deleteortrashjob_emitpercent_isbase = false;
    mutable bool kio__deleteortrashjob_emitspeed_isbase = false;
    mutable bool kio__deleteortrashjob_startelapsedtimer_isbase = false;
    mutable bool kio__deleteortrashjob_sender_isbase = false;
    mutable bool kio__deleteortrashjob_sendersignalindex_isbase = false;
    mutable bool kio__deleteortrashjob_receivers_isbase = false;
    mutable bool kio__deleteortrashjob_issignalconnected_isbase = false;

  public:
    VirtualKIODeleteOrTrashJob(const QList<QUrl>& urls, KIO::AskUserActionInterface::DeletionType deletionType, KIO::AskUserActionInterface::ConfirmationType confirm, QObject* parent) : KIO::DeleteOrTrashJob(urls, deletionType, confirm, parent) {};

    ~VirtualKIODeleteOrTrashJob() {
        kio__deleteortrashjob_metacall_callback = nullptr;
        kio__deleteortrashjob_start_callback = nullptr;
        kio__deleteortrashjob_addsubjob_callback = nullptr;
        kio__deleteortrashjob_removesubjob_callback = nullptr;
        kio__deleteortrashjob_slotinfomessage_callback = nullptr;
        kio__deleteortrashjob_dokill_callback = nullptr;
        kio__deleteortrashjob_dosuspend_callback = nullptr;
        kio__deleteortrashjob_doresume_callback = nullptr;
        kio__deleteortrashjob_errorstring_callback = nullptr;
        kio__deleteortrashjob_event_callback = nullptr;
        kio__deleteortrashjob_eventfilter_callback = nullptr;
        kio__deleteortrashjob_timerevent_callback = nullptr;
        kio__deleteortrashjob_childevent_callback = nullptr;
        kio__deleteortrashjob_customevent_callback = nullptr;
        kio__deleteortrashjob_connectnotify_callback = nullptr;
        kio__deleteortrashjob_disconnectnotify_callback = nullptr;
        kio__deleteortrashjob_hassubjobs_callback = nullptr;
        kio__deleteortrashjob_subjobs_callback = nullptr;
        kio__deleteortrashjob_clearsubjobs_callback = nullptr;
        kio__deleteortrashjob_setcapabilities_callback = nullptr;
        kio__deleteortrashjob_isfinished_callback = nullptr;
        kio__deleteortrashjob_seterror_callback = nullptr;
        kio__deleteortrashjob_seterrortext_callback = nullptr;
        kio__deleteortrashjob_setprocessedamount_callback = nullptr;
        kio__deleteortrashjob_settotalamount_callback = nullptr;
        kio__deleteortrashjob_setprogressunit_callback = nullptr;
        kio__deleteortrashjob_setpercent_callback = nullptr;
        kio__deleteortrashjob_emitresult_callback = nullptr;
        kio__deleteortrashjob_emitpercent_callback = nullptr;
        kio__deleteortrashjob_emitspeed_callback = nullptr;
        kio__deleteortrashjob_startelapsedtimer_callback = nullptr;
        kio__deleteortrashjob_sender_callback = nullptr;
        kio__deleteortrashjob_sendersignalindex_callback = nullptr;
        kio__deleteortrashjob_receivers_callback = nullptr;
        kio__deleteortrashjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__DeleteOrTrashJob_Metacall_Callback(KIO__DeleteOrTrashJob_Metacall_Callback cb) { kio__deleteortrashjob_metacall_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_Start_Callback(KIO__DeleteOrTrashJob_Start_Callback cb) { kio__deleteortrashjob_start_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_AddSubjob_Callback(KIO__DeleteOrTrashJob_AddSubjob_Callback cb) { kio__deleteortrashjob_addsubjob_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_RemoveSubjob_Callback(KIO__DeleteOrTrashJob_RemoveSubjob_Callback cb) { kio__deleteortrashjob_removesubjob_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_SlotInfoMessage_Callback(KIO__DeleteOrTrashJob_SlotInfoMessage_Callback cb) { kio__deleteortrashjob_slotinfomessage_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_DoKill_Callback(KIO__DeleteOrTrashJob_DoKill_Callback cb) { kio__deleteortrashjob_dokill_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_DoSuspend_Callback(KIO__DeleteOrTrashJob_DoSuspend_Callback cb) { kio__deleteortrashjob_dosuspend_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_DoResume_Callback(KIO__DeleteOrTrashJob_DoResume_Callback cb) { kio__deleteortrashjob_doresume_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_ErrorString_Callback(KIO__DeleteOrTrashJob_ErrorString_Callback cb) { kio__deleteortrashjob_errorstring_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_Event_Callback(KIO__DeleteOrTrashJob_Event_Callback cb) { kio__deleteortrashjob_event_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_EventFilter_Callback(KIO__DeleteOrTrashJob_EventFilter_Callback cb) { kio__deleteortrashjob_eventfilter_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_TimerEvent_Callback(KIO__DeleteOrTrashJob_TimerEvent_Callback cb) { kio__deleteortrashjob_timerevent_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_ChildEvent_Callback(KIO__DeleteOrTrashJob_ChildEvent_Callback cb) { kio__deleteortrashjob_childevent_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_CustomEvent_Callback(KIO__DeleteOrTrashJob_CustomEvent_Callback cb) { kio__deleteortrashjob_customevent_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_ConnectNotify_Callback(KIO__DeleteOrTrashJob_ConnectNotify_Callback cb) { kio__deleteortrashjob_connectnotify_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_DisconnectNotify_Callback(KIO__DeleteOrTrashJob_DisconnectNotify_Callback cb) { kio__deleteortrashjob_disconnectnotify_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_HasSubjobs_Callback(KIO__DeleteOrTrashJob_HasSubjobs_Callback cb) { kio__deleteortrashjob_hassubjobs_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_Subjobs_Callback(KIO__DeleteOrTrashJob_Subjobs_Callback cb) { kio__deleteortrashjob_subjobs_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_ClearSubjobs_Callback(KIO__DeleteOrTrashJob_ClearSubjobs_Callback cb) { kio__deleteortrashjob_clearsubjobs_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_SetCapabilities_Callback(KIO__DeleteOrTrashJob_SetCapabilities_Callback cb) { kio__deleteortrashjob_setcapabilities_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_IsFinished_Callback(KIO__DeleteOrTrashJob_IsFinished_Callback cb) { kio__deleteortrashjob_isfinished_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_SetError_Callback(KIO__DeleteOrTrashJob_SetError_Callback cb) { kio__deleteortrashjob_seterror_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_SetErrorText_Callback(KIO__DeleteOrTrashJob_SetErrorText_Callback cb) { kio__deleteortrashjob_seterrortext_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_SetProcessedAmount_Callback(KIO__DeleteOrTrashJob_SetProcessedAmount_Callback cb) { kio__deleteortrashjob_setprocessedamount_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_SetTotalAmount_Callback(KIO__DeleteOrTrashJob_SetTotalAmount_Callback cb) { kio__deleteortrashjob_settotalamount_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_SetProgressUnit_Callback(KIO__DeleteOrTrashJob_SetProgressUnit_Callback cb) { kio__deleteortrashjob_setprogressunit_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_SetPercent_Callback(KIO__DeleteOrTrashJob_SetPercent_Callback cb) { kio__deleteortrashjob_setpercent_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_EmitResult_Callback(KIO__DeleteOrTrashJob_EmitResult_Callback cb) { kio__deleteortrashjob_emitresult_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_EmitPercent_Callback(KIO__DeleteOrTrashJob_EmitPercent_Callback cb) { kio__deleteortrashjob_emitpercent_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_EmitSpeed_Callback(KIO__DeleteOrTrashJob_EmitSpeed_Callback cb) { kio__deleteortrashjob_emitspeed_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_StartElapsedTimer_Callback(KIO__DeleteOrTrashJob_StartElapsedTimer_Callback cb) { kio__deleteortrashjob_startelapsedtimer_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_Sender_Callback(KIO__DeleteOrTrashJob_Sender_Callback cb) { kio__deleteortrashjob_sender_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_SenderSignalIndex_Callback(KIO__DeleteOrTrashJob_SenderSignalIndex_Callback cb) { kio__deleteortrashjob_sendersignalindex_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_Receivers_Callback(KIO__DeleteOrTrashJob_Receivers_Callback cb) { kio__deleteortrashjob_receivers_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_IsSignalConnected_Callback(KIO__DeleteOrTrashJob_IsSignalConnected_Callback cb) { kio__deleteortrashjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__DeleteOrTrashJob_Metacall_IsBase(bool value) const { kio__deleteortrashjob_metacall_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_Start_IsBase(bool value) const { kio__deleteortrashjob_start_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_AddSubjob_IsBase(bool value) const { kio__deleteortrashjob_addsubjob_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_RemoveSubjob_IsBase(bool value) const { kio__deleteortrashjob_removesubjob_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_SlotInfoMessage_IsBase(bool value) const { kio__deleteortrashjob_slotinfomessage_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_DoKill_IsBase(bool value) const { kio__deleteortrashjob_dokill_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_DoSuspend_IsBase(bool value) const { kio__deleteortrashjob_dosuspend_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_DoResume_IsBase(bool value) const { kio__deleteortrashjob_doresume_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_ErrorString_IsBase(bool value) const { kio__deleteortrashjob_errorstring_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_Event_IsBase(bool value) const { kio__deleteortrashjob_event_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_EventFilter_IsBase(bool value) const { kio__deleteortrashjob_eventfilter_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_TimerEvent_IsBase(bool value) const { kio__deleteortrashjob_timerevent_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_ChildEvent_IsBase(bool value) const { kio__deleteortrashjob_childevent_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_CustomEvent_IsBase(bool value) const { kio__deleteortrashjob_customevent_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_ConnectNotify_IsBase(bool value) const { kio__deleteortrashjob_connectnotify_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_DisconnectNotify_IsBase(bool value) const { kio__deleteortrashjob_disconnectnotify_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_HasSubjobs_IsBase(bool value) const { kio__deleteortrashjob_hassubjobs_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_Subjobs_IsBase(bool value) const { kio__deleteortrashjob_subjobs_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_ClearSubjobs_IsBase(bool value) const { kio__deleteortrashjob_clearsubjobs_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_SetCapabilities_IsBase(bool value) const { kio__deleteortrashjob_setcapabilities_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_IsFinished_IsBase(bool value) const { kio__deleteortrashjob_isfinished_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_SetError_IsBase(bool value) const { kio__deleteortrashjob_seterror_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_SetErrorText_IsBase(bool value) const { kio__deleteortrashjob_seterrortext_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_SetProcessedAmount_IsBase(bool value) const { kio__deleteortrashjob_setprocessedamount_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_SetTotalAmount_IsBase(bool value) const { kio__deleteortrashjob_settotalamount_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_SetProgressUnit_IsBase(bool value) const { kio__deleteortrashjob_setprogressunit_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_SetPercent_IsBase(bool value) const { kio__deleteortrashjob_setpercent_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_EmitResult_IsBase(bool value) const { kio__deleteortrashjob_emitresult_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_EmitPercent_IsBase(bool value) const { kio__deleteortrashjob_emitpercent_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_EmitSpeed_IsBase(bool value) const { kio__deleteortrashjob_emitspeed_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_StartElapsedTimer_IsBase(bool value) const { kio__deleteortrashjob_startelapsedtimer_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_Sender_IsBase(bool value) const { kio__deleteortrashjob_sender_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_SenderSignalIndex_IsBase(bool value) const { kio__deleteortrashjob_sendersignalindex_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_Receivers_IsBase(bool value) const { kio__deleteortrashjob_receivers_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_IsSignalConnected_IsBase(bool value) const { kio__deleteortrashjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__deleteortrashjob_metacall_isbase) {
            kio__deleteortrashjob_metacall_isbase = false;
            return KIO__DeleteOrTrashJob::qt_metacall(param1, param2, param3);
        } else if (kio__deleteortrashjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__deleteortrashjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__DeleteOrTrashJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__deleteortrashjob_start_isbase) {
            kio__deleteortrashjob_start_isbase = false;
            KIO__DeleteOrTrashJob::start();
        } else if (kio__deleteortrashjob_start_callback != nullptr) {
            kio__deleteortrashjob_start_callback();
        } else {
            KIO__DeleteOrTrashJob::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__deleteortrashjob_addsubjob_isbase) {
            kio__deleteortrashjob_addsubjob_isbase = false;
            return KIO__DeleteOrTrashJob::addSubjob(job);
        } else if (kio__deleteortrashjob_addsubjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kio__deleteortrashjob_addsubjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__DeleteOrTrashJob::addSubjob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__deleteortrashjob_removesubjob_isbase) {
            kio__deleteortrashjob_removesubjob_isbase = false;
            return KIO__DeleteOrTrashJob::removeSubjob(job);
        } else if (kio__deleteortrashjob_removesubjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kio__deleteortrashjob_removesubjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__DeleteOrTrashJob::removeSubjob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__deleteortrashjob_slotinfomessage_isbase) {
            kio__deleteortrashjob_slotinfomessage_isbase = false;
            KIO__DeleteOrTrashJob::slotInfoMessage(job, message);
        } else if (kio__deleteortrashjob_slotinfomessage_callback != nullptr) {
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

            kio__deleteortrashjob_slotinfomessage_callback(this, cbval1, cbval2);
        } else {
            KIO__DeleteOrTrashJob::slotInfoMessage(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__deleteortrashjob_dokill_isbase) {
            kio__deleteortrashjob_dokill_isbase = false;
            return KIO__DeleteOrTrashJob::doKill();
        } else if (kio__deleteortrashjob_dokill_callback != nullptr) {
            bool callback_ret = kio__deleteortrashjob_dokill_callback();
            return callback_ret;
        } else {
            return KIO__DeleteOrTrashJob::doKill();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__deleteortrashjob_dosuspend_isbase) {
            kio__deleteortrashjob_dosuspend_isbase = false;
            return KIO__DeleteOrTrashJob::doSuspend();
        } else if (kio__deleteortrashjob_dosuspend_callback != nullptr) {
            bool callback_ret = kio__deleteortrashjob_dosuspend_callback();
            return callback_ret;
        } else {
            return KIO__DeleteOrTrashJob::doSuspend();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__deleteortrashjob_doresume_isbase) {
            kio__deleteortrashjob_doresume_isbase = false;
            return KIO__DeleteOrTrashJob::doResume();
        } else if (kio__deleteortrashjob_doresume_callback != nullptr) {
            bool callback_ret = kio__deleteortrashjob_doresume_callback();
            return callback_ret;
        } else {
            return KIO__DeleteOrTrashJob::doResume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__deleteortrashjob_errorstring_isbase) {
            kio__deleteortrashjob_errorstring_isbase = false;
            return KIO__DeleteOrTrashJob::errorString();
        } else if (kio__deleteortrashjob_errorstring_callback != nullptr) {
            const char* callback_ret = kio__deleteortrashjob_errorstring_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KIO__DeleteOrTrashJob::errorString();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__deleteortrashjob_event_isbase) {
            kio__deleteortrashjob_event_isbase = false;
            return KIO__DeleteOrTrashJob::event(event);
        } else if (kio__deleteortrashjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__deleteortrashjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__DeleteOrTrashJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__deleteortrashjob_eventfilter_isbase) {
            kio__deleteortrashjob_eventfilter_isbase = false;
            return KIO__DeleteOrTrashJob::eventFilter(watched, event);
        } else if (kio__deleteortrashjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kio__deleteortrashjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__DeleteOrTrashJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__deleteortrashjob_timerevent_isbase) {
            kio__deleteortrashjob_timerevent_isbase = false;
            KIO__DeleteOrTrashJob::timerEvent(event);
        } else if (kio__deleteortrashjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__deleteortrashjob_timerevent_callback(this, cbval1);
        } else {
            KIO__DeleteOrTrashJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__deleteortrashjob_childevent_isbase) {
            kio__deleteortrashjob_childevent_isbase = false;
            KIO__DeleteOrTrashJob::childEvent(event);
        } else if (kio__deleteortrashjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__deleteortrashjob_childevent_callback(this, cbval1);
        } else {
            KIO__DeleteOrTrashJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__deleteortrashjob_customevent_isbase) {
            kio__deleteortrashjob_customevent_isbase = false;
            KIO__DeleteOrTrashJob::customEvent(event);
        } else if (kio__deleteortrashjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__deleteortrashjob_customevent_callback(this, cbval1);
        } else {
            KIO__DeleteOrTrashJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__deleteortrashjob_connectnotify_isbase) {
            kio__deleteortrashjob_connectnotify_isbase = false;
            KIO__DeleteOrTrashJob::connectNotify(signal);
        } else if (kio__deleteortrashjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__deleteortrashjob_connectnotify_callback(this, cbval1);
        } else {
            KIO__DeleteOrTrashJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__deleteortrashjob_disconnectnotify_isbase) {
            kio__deleteortrashjob_disconnectnotify_isbase = false;
            KIO__DeleteOrTrashJob::disconnectNotify(signal);
        } else if (kio__deleteortrashjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__deleteortrashjob_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__DeleteOrTrashJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool hasSubjobs() const {
        if (kio__deleteortrashjob_hassubjobs_isbase) {
            kio__deleteortrashjob_hassubjobs_isbase = false;
            return KIO__DeleteOrTrashJob::hasSubjobs();
        } else if (kio__deleteortrashjob_hassubjobs_callback != nullptr) {
            bool callback_ret = kio__deleteortrashjob_hassubjobs_callback();
            return callback_ret;
        } else {
            return KIO__DeleteOrTrashJob::hasSubjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    const QList<KJob*>& subjobs() const {
        if (kio__deleteortrashjob_subjobs_isbase) {
            kio__deleteortrashjob_subjobs_isbase = false;
            return KIO__DeleteOrTrashJob::subjobs();
        } else if (kio__deleteortrashjob_subjobs_callback != nullptr) {
            KJob** callback_ret = kio__deleteortrashjob_subjobs_callback();
            QList<KJob*>* callback_ret_QList;
            callback_ret_QList = new QList<KJob*>;
            // Iterate until null pointer sentinel
            for (KJob** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList->push_back(*ptridx);
            }
            free(callback_ret);
            return *callback_ret_QList;
        } else {
            return KIO__DeleteOrTrashJob::subjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    void clearSubjobs() {
        if (kio__deleteortrashjob_clearsubjobs_isbase) {
            kio__deleteortrashjob_clearsubjobs_isbase = false;
            KIO__DeleteOrTrashJob::clearSubjobs();
        } else if (kio__deleteortrashjob_clearsubjobs_callback != nullptr) {
            kio__deleteortrashjob_clearsubjobs_callback();
        } else {
            KIO__DeleteOrTrashJob::clearSubjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kio__deleteortrashjob_setcapabilities_isbase) {
            kio__deleteortrashjob_setcapabilities_isbase = false;
            KIO__DeleteOrTrashJob::setCapabilities(capabilities);
        } else if (kio__deleteortrashjob_setcapabilities_callback != nullptr) {
            int cbval1 = static_cast<int>(capabilities);

            kio__deleteortrashjob_setcapabilities_callback(this, cbval1);
        } else {
            KIO__DeleteOrTrashJob::setCapabilities(capabilities);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kio__deleteortrashjob_isfinished_isbase) {
            kio__deleteortrashjob_isfinished_isbase = false;
            return KIO__DeleteOrTrashJob::isFinished();
        } else if (kio__deleteortrashjob_isfinished_callback != nullptr) {
            bool callback_ret = kio__deleteortrashjob_isfinished_callback();
            return callback_ret;
        } else {
            return KIO__DeleteOrTrashJob::isFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kio__deleteortrashjob_seterror_isbase) {
            kio__deleteortrashjob_seterror_isbase = false;
            KIO__DeleteOrTrashJob::setError(errorCode);
        } else if (kio__deleteortrashjob_seterror_callback != nullptr) {
            int cbval1 = errorCode;

            kio__deleteortrashjob_seterror_callback(this, cbval1);
        } else {
            KIO__DeleteOrTrashJob::setError(errorCode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kio__deleteortrashjob_seterrortext_isbase) {
            kio__deleteortrashjob_seterrortext_isbase = false;
            KIO__DeleteOrTrashJob::setErrorText(errorText);
        } else if (kio__deleteortrashjob_seterrortext_callback != nullptr) {
            const QString errorText_ret = errorText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorText_b = errorText_ret.toUtf8();
            libqt_string errorText_str;
            errorText_str.len = errorText_b.length();
            errorText_str.data = static_cast<const char*>(malloc(errorText_str.len + 1));
            memcpy((void*)errorText_str.data, errorText_b.data(), errorText_str.len);
            ((char*)errorText_str.data)[errorText_str.len] = '\0';
            libqt_string cbval1 = errorText_str;

            kio__deleteortrashjob_seterrortext_callback(this, cbval1);
        } else {
            KIO__DeleteOrTrashJob::setErrorText(errorText);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__deleteortrashjob_setprocessedamount_isbase) {
            kio__deleteortrashjob_setprocessedamount_isbase = false;
            KIO__DeleteOrTrashJob::setProcessedAmount(unit, amount);
        } else if (kio__deleteortrashjob_setprocessedamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__deleteortrashjob_setprocessedamount_callback(this, cbval1, cbval2);
        } else {
            KIO__DeleteOrTrashJob::setProcessedAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__deleteortrashjob_settotalamount_isbase) {
            kio__deleteortrashjob_settotalamount_isbase = false;
            KIO__DeleteOrTrashJob::setTotalAmount(unit, amount);
        } else if (kio__deleteortrashjob_settotalamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__deleteortrashjob_settotalamount_callback(this, cbval1, cbval2);
        } else {
            KIO__DeleteOrTrashJob::setTotalAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kio__deleteortrashjob_setprogressunit_isbase) {
            kio__deleteortrashjob_setprogressunit_isbase = false;
            KIO__DeleteOrTrashJob::setProgressUnit(unit);
        } else if (kio__deleteortrashjob_setprogressunit_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);

            kio__deleteortrashjob_setprogressunit_callback(this, cbval1);
        } else {
            KIO__DeleteOrTrashJob::setProgressUnit(unit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kio__deleteortrashjob_setpercent_isbase) {
            kio__deleteortrashjob_setpercent_isbase = false;
            KIO__DeleteOrTrashJob::setPercent(percentage);
        } else if (kio__deleteortrashjob_setpercent_callback != nullptr) {
            unsigned long cbval1 = percentage;

            kio__deleteortrashjob_setpercent_callback(this, cbval1);
        } else {
            KIO__DeleteOrTrashJob::setPercent(percentage);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kio__deleteortrashjob_emitresult_isbase) {
            kio__deleteortrashjob_emitresult_isbase = false;
            KIO__DeleteOrTrashJob::emitResult();
        } else if (kio__deleteortrashjob_emitresult_callback != nullptr) {
            kio__deleteortrashjob_emitresult_callback();
        } else {
            KIO__DeleteOrTrashJob::emitResult();
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kio__deleteortrashjob_emitpercent_isbase) {
            kio__deleteortrashjob_emitpercent_isbase = false;
            KIO__DeleteOrTrashJob::emitPercent(processedAmount, totalAmount);
        } else if (kio__deleteortrashjob_emitpercent_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            kio__deleteortrashjob_emitpercent_callback(this, cbval1, cbval2);
        } else {
            KIO__DeleteOrTrashJob::emitPercent(processedAmount, totalAmount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kio__deleteortrashjob_emitspeed_isbase) {
            kio__deleteortrashjob_emitspeed_isbase = false;
            KIO__DeleteOrTrashJob::emitSpeed(speed);
        } else if (kio__deleteortrashjob_emitspeed_callback != nullptr) {
            unsigned long cbval1 = speed;

            kio__deleteortrashjob_emitspeed_callback(this, cbval1);
        } else {
            KIO__DeleteOrTrashJob::emitSpeed(speed);
        }
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kio__deleteortrashjob_startelapsedtimer_isbase) {
            kio__deleteortrashjob_startelapsedtimer_isbase = false;
            KIO__DeleteOrTrashJob::startElapsedTimer();
        } else if (kio__deleteortrashjob_startelapsedtimer_callback != nullptr) {
            kio__deleteortrashjob_startelapsedtimer_callback();
        } else {
            KIO__DeleteOrTrashJob::startElapsedTimer();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__deleteortrashjob_sender_isbase) {
            kio__deleteortrashjob_sender_isbase = false;
            return KIO__DeleteOrTrashJob::sender();
        } else if (kio__deleteortrashjob_sender_callback != nullptr) {
            QObject* callback_ret = kio__deleteortrashjob_sender_callback();
            return callback_ret;
        } else {
            return KIO__DeleteOrTrashJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__deleteortrashjob_sendersignalindex_isbase) {
            kio__deleteortrashjob_sendersignalindex_isbase = false;
            return KIO__DeleteOrTrashJob::senderSignalIndex();
        } else if (kio__deleteortrashjob_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__deleteortrashjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__DeleteOrTrashJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__deleteortrashjob_receivers_isbase) {
            kio__deleteortrashjob_receivers_isbase = false;
            return KIO__DeleteOrTrashJob::receivers(signal);
        } else if (kio__deleteortrashjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__deleteortrashjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__DeleteOrTrashJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__deleteortrashjob_issignalconnected_isbase) {
            kio__deleteortrashjob_issignalconnected_isbase = false;
            return KIO__DeleteOrTrashJob::isSignalConnected(signal);
        } else if (kio__deleteortrashjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__deleteortrashjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__DeleteOrTrashJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KIO__DeleteOrTrashJob_AddSubjob(KIO::DeleteOrTrashJob* self, KJob* job);
    friend bool KIO__DeleteOrTrashJob_QBaseAddSubjob(KIO::DeleteOrTrashJob* self, KJob* job);
    friend bool KIO__DeleteOrTrashJob_RemoveSubjob(KIO::DeleteOrTrashJob* self, KJob* job);
    friend bool KIO__DeleteOrTrashJob_QBaseRemoveSubjob(KIO::DeleteOrTrashJob* self, KJob* job);
    friend void KIO__DeleteOrTrashJob_SlotInfoMessage(KIO::DeleteOrTrashJob* self, KJob* job, const libqt_string message);
    friend void KIO__DeleteOrTrashJob_QBaseSlotInfoMessage(KIO::DeleteOrTrashJob* self, KJob* job, const libqt_string message);
    friend bool KIO__DeleteOrTrashJob_DoKill(KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_QBaseDoKill(KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_DoSuspend(KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_QBaseDoSuspend(KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_DoResume(KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_QBaseDoResume(KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_TimerEvent(KIO::DeleteOrTrashJob* self, QTimerEvent* event);
    friend void KIO__DeleteOrTrashJob_QBaseTimerEvent(KIO::DeleteOrTrashJob* self, QTimerEvent* event);
    friend void KIO__DeleteOrTrashJob_ChildEvent(KIO::DeleteOrTrashJob* self, QChildEvent* event);
    friend void KIO__DeleteOrTrashJob_QBaseChildEvent(KIO::DeleteOrTrashJob* self, QChildEvent* event);
    friend void KIO__DeleteOrTrashJob_CustomEvent(KIO::DeleteOrTrashJob* self, QEvent* event);
    friend void KIO__DeleteOrTrashJob_QBaseCustomEvent(KIO::DeleteOrTrashJob* self, QEvent* event);
    friend void KIO__DeleteOrTrashJob_ConnectNotify(KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
    friend void KIO__DeleteOrTrashJob_QBaseConnectNotify(KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
    friend void KIO__DeleteOrTrashJob_DisconnectNotify(KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
    friend void KIO__DeleteOrTrashJob_QBaseDisconnectNotify(KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
    friend bool KIO__DeleteOrTrashJob_HasSubjobs(const KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_QBaseHasSubjobs(const KIO::DeleteOrTrashJob* self);
    friend libqt_list /* of KJob* */ KIO__DeleteOrTrashJob_Subjobs(const KIO::DeleteOrTrashJob* self);
    friend libqt_list /* of KJob* */ KIO__DeleteOrTrashJob_QBaseSubjobs(const KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_ClearSubjobs(KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_QBaseClearSubjobs(KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_SetCapabilities(KIO::DeleteOrTrashJob* self, int capabilities);
    friend void KIO__DeleteOrTrashJob_QBaseSetCapabilities(KIO::DeleteOrTrashJob* self, int capabilities);
    friend bool KIO__DeleteOrTrashJob_IsFinished(const KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_QBaseIsFinished(const KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_SetError(KIO::DeleteOrTrashJob* self, int errorCode);
    friend void KIO__DeleteOrTrashJob_QBaseSetError(KIO::DeleteOrTrashJob* self, int errorCode);
    friend void KIO__DeleteOrTrashJob_SetErrorText(KIO::DeleteOrTrashJob* self, const libqt_string errorText);
    friend void KIO__DeleteOrTrashJob_QBaseSetErrorText(KIO::DeleteOrTrashJob* self, const libqt_string errorText);
    friend void KIO__DeleteOrTrashJob_SetProcessedAmount(KIO::DeleteOrTrashJob* self, int unit, unsigned long long amount);
    friend void KIO__DeleteOrTrashJob_QBaseSetProcessedAmount(KIO::DeleteOrTrashJob* self, int unit, unsigned long long amount);
    friend void KIO__DeleteOrTrashJob_SetTotalAmount(KIO::DeleteOrTrashJob* self, int unit, unsigned long long amount);
    friend void KIO__DeleteOrTrashJob_QBaseSetTotalAmount(KIO::DeleteOrTrashJob* self, int unit, unsigned long long amount);
    friend void KIO__DeleteOrTrashJob_SetProgressUnit(KIO::DeleteOrTrashJob* self, int unit);
    friend void KIO__DeleteOrTrashJob_QBaseSetProgressUnit(KIO::DeleteOrTrashJob* self, int unit);
    friend void KIO__DeleteOrTrashJob_SetPercent(KIO::DeleteOrTrashJob* self, unsigned long percentage);
    friend void KIO__DeleteOrTrashJob_QBaseSetPercent(KIO::DeleteOrTrashJob* self, unsigned long percentage);
    friend void KIO__DeleteOrTrashJob_EmitResult(KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_QBaseEmitResult(KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_EmitPercent(KIO::DeleteOrTrashJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__DeleteOrTrashJob_QBaseEmitPercent(KIO::DeleteOrTrashJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__DeleteOrTrashJob_EmitSpeed(KIO::DeleteOrTrashJob* self, unsigned long speed);
    friend void KIO__DeleteOrTrashJob_QBaseEmitSpeed(KIO::DeleteOrTrashJob* self, unsigned long speed);
    friend void KIO__DeleteOrTrashJob_StartElapsedTimer(KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_QBaseStartElapsedTimer(KIO::DeleteOrTrashJob* self);
    friend QObject* KIO__DeleteOrTrashJob_Sender(const KIO::DeleteOrTrashJob* self);
    friend QObject* KIO__DeleteOrTrashJob_QBaseSender(const KIO::DeleteOrTrashJob* self);
    friend int KIO__DeleteOrTrashJob_SenderSignalIndex(const KIO::DeleteOrTrashJob* self);
    friend int KIO__DeleteOrTrashJob_QBaseSenderSignalIndex(const KIO::DeleteOrTrashJob* self);
    friend int KIO__DeleteOrTrashJob_Receivers(const KIO::DeleteOrTrashJob* self, const char* signal);
    friend int KIO__DeleteOrTrashJob_QBaseReceivers(const KIO::DeleteOrTrashJob* self, const char* signal);
    friend bool KIO__DeleteOrTrashJob_IsSignalConnected(const KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
    friend bool KIO__DeleteOrTrashJob_QBaseIsSignalConnected(const KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
};

#endif
