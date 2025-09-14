#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALOPENURLJOB_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALOPENURLJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::OpenUrlJob so that we can call protected methods
class VirtualKIOOpenUrlJob final : public KIO::OpenUrlJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOOpenUrlJob = true;

    // Virtual class public types (including callbacks)
    using KIO__OpenUrlJob_Metacall_Callback = int (*)(KIO__OpenUrlJob*, int, int, void**);
    using KIO__OpenUrlJob_Start_Callback = void (*)();
    using KIO__OpenUrlJob_DoKill_Callback = bool (*)();
    using KIO__OpenUrlJob_AddSubjob_Callback = bool (*)(KIO__OpenUrlJob*, KJob*);
    using KIO__OpenUrlJob_RemoveSubjob_Callback = bool (*)(KIO__OpenUrlJob*, KJob*);
    using KIO__OpenUrlJob_SlotInfoMessage_Callback = void (*)(KIO__OpenUrlJob*, KJob*, libqt_string);
    using KIO__OpenUrlJob_DoSuspend_Callback = bool (*)();
    using KIO__OpenUrlJob_DoResume_Callback = bool (*)();
    using KIO__OpenUrlJob_ErrorString_Callback = const char* (*)();
    using KIO__OpenUrlJob_Event_Callback = bool (*)(KIO__OpenUrlJob*, QEvent*);
    using KIO__OpenUrlJob_EventFilter_Callback = bool (*)(KIO__OpenUrlJob*, QObject*, QEvent*);
    using KIO__OpenUrlJob_TimerEvent_Callback = void (*)(KIO__OpenUrlJob*, QTimerEvent*);
    using KIO__OpenUrlJob_ChildEvent_Callback = void (*)(KIO__OpenUrlJob*, QChildEvent*);
    using KIO__OpenUrlJob_CustomEvent_Callback = void (*)(KIO__OpenUrlJob*, QEvent*);
    using KIO__OpenUrlJob_ConnectNotify_Callback = void (*)(KIO__OpenUrlJob*, QMetaMethod*);
    using KIO__OpenUrlJob_DisconnectNotify_Callback = void (*)(KIO__OpenUrlJob*, QMetaMethod*);
    using KIO__OpenUrlJob_HasSubjobs_Callback = bool (*)();
    using KIO__OpenUrlJob_Subjobs_Callback = KJob** (*)();
    using KIO__OpenUrlJob_ClearSubjobs_Callback = void (*)();
    using KIO__OpenUrlJob_SetCapabilities_Callback = void (*)(KIO__OpenUrlJob*, int);
    using KIO__OpenUrlJob_IsFinished_Callback = bool (*)();
    using KIO__OpenUrlJob_SetError_Callback = void (*)(KIO__OpenUrlJob*, int);
    using KIO__OpenUrlJob_SetErrorText_Callback = void (*)(KIO__OpenUrlJob*, libqt_string);
    using KIO__OpenUrlJob_SetProcessedAmount_Callback = void (*)(KIO__OpenUrlJob*, int, unsigned long long);
    using KIO__OpenUrlJob_SetTotalAmount_Callback = void (*)(KIO__OpenUrlJob*, int, unsigned long long);
    using KIO__OpenUrlJob_SetProgressUnit_Callback = void (*)(KIO__OpenUrlJob*, int);
    using KIO__OpenUrlJob_SetPercent_Callback = void (*)(KIO__OpenUrlJob*, unsigned long);
    using KIO__OpenUrlJob_EmitResult_Callback = void (*)();
    using KIO__OpenUrlJob_EmitPercent_Callback = void (*)(KIO__OpenUrlJob*, unsigned long long, unsigned long long);
    using KIO__OpenUrlJob_EmitSpeed_Callback = void (*)(KIO__OpenUrlJob*, unsigned long);
    using KIO__OpenUrlJob_StartElapsedTimer_Callback = void (*)();
    using KIO__OpenUrlJob_Sender_Callback = QObject* (*)();
    using KIO__OpenUrlJob_SenderSignalIndex_Callback = int (*)();
    using KIO__OpenUrlJob_Receivers_Callback = int (*)(const KIO__OpenUrlJob*, const char*);
    using KIO__OpenUrlJob_IsSignalConnected_Callback = bool (*)(const KIO__OpenUrlJob*, QMetaMethod*);

  protected:
    // Instance callback storage
    KIO__OpenUrlJob_Metacall_Callback kio__openurljob_metacall_callback = nullptr;
    KIO__OpenUrlJob_Start_Callback kio__openurljob_start_callback = nullptr;
    KIO__OpenUrlJob_DoKill_Callback kio__openurljob_dokill_callback = nullptr;
    KIO__OpenUrlJob_AddSubjob_Callback kio__openurljob_addsubjob_callback = nullptr;
    KIO__OpenUrlJob_RemoveSubjob_Callback kio__openurljob_removesubjob_callback = nullptr;
    KIO__OpenUrlJob_SlotInfoMessage_Callback kio__openurljob_slotinfomessage_callback = nullptr;
    KIO__OpenUrlJob_DoSuspend_Callback kio__openurljob_dosuspend_callback = nullptr;
    KIO__OpenUrlJob_DoResume_Callback kio__openurljob_doresume_callback = nullptr;
    KIO__OpenUrlJob_ErrorString_Callback kio__openurljob_errorstring_callback = nullptr;
    KIO__OpenUrlJob_Event_Callback kio__openurljob_event_callback = nullptr;
    KIO__OpenUrlJob_EventFilter_Callback kio__openurljob_eventfilter_callback = nullptr;
    KIO__OpenUrlJob_TimerEvent_Callback kio__openurljob_timerevent_callback = nullptr;
    KIO__OpenUrlJob_ChildEvent_Callback kio__openurljob_childevent_callback = nullptr;
    KIO__OpenUrlJob_CustomEvent_Callback kio__openurljob_customevent_callback = nullptr;
    KIO__OpenUrlJob_ConnectNotify_Callback kio__openurljob_connectnotify_callback = nullptr;
    KIO__OpenUrlJob_DisconnectNotify_Callback kio__openurljob_disconnectnotify_callback = nullptr;
    KIO__OpenUrlJob_HasSubjobs_Callback kio__openurljob_hassubjobs_callback = nullptr;
    KIO__OpenUrlJob_Subjobs_Callback kio__openurljob_subjobs_callback = nullptr;
    KIO__OpenUrlJob_ClearSubjobs_Callback kio__openurljob_clearsubjobs_callback = nullptr;
    KIO__OpenUrlJob_SetCapabilities_Callback kio__openurljob_setcapabilities_callback = nullptr;
    KIO__OpenUrlJob_IsFinished_Callback kio__openurljob_isfinished_callback = nullptr;
    KIO__OpenUrlJob_SetError_Callback kio__openurljob_seterror_callback = nullptr;
    KIO__OpenUrlJob_SetErrorText_Callback kio__openurljob_seterrortext_callback = nullptr;
    KIO__OpenUrlJob_SetProcessedAmount_Callback kio__openurljob_setprocessedamount_callback = nullptr;
    KIO__OpenUrlJob_SetTotalAmount_Callback kio__openurljob_settotalamount_callback = nullptr;
    KIO__OpenUrlJob_SetProgressUnit_Callback kio__openurljob_setprogressunit_callback = nullptr;
    KIO__OpenUrlJob_SetPercent_Callback kio__openurljob_setpercent_callback = nullptr;
    KIO__OpenUrlJob_EmitResult_Callback kio__openurljob_emitresult_callback = nullptr;
    KIO__OpenUrlJob_EmitPercent_Callback kio__openurljob_emitpercent_callback = nullptr;
    KIO__OpenUrlJob_EmitSpeed_Callback kio__openurljob_emitspeed_callback = nullptr;
    KIO__OpenUrlJob_StartElapsedTimer_Callback kio__openurljob_startelapsedtimer_callback = nullptr;
    KIO__OpenUrlJob_Sender_Callback kio__openurljob_sender_callback = nullptr;
    KIO__OpenUrlJob_SenderSignalIndex_Callback kio__openurljob_sendersignalindex_callback = nullptr;
    KIO__OpenUrlJob_Receivers_Callback kio__openurljob_receivers_callback = nullptr;
    KIO__OpenUrlJob_IsSignalConnected_Callback kio__openurljob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__openurljob_metacall_isbase = false;
    mutable bool kio__openurljob_start_isbase = false;
    mutable bool kio__openurljob_dokill_isbase = false;
    mutable bool kio__openurljob_addsubjob_isbase = false;
    mutable bool kio__openurljob_removesubjob_isbase = false;
    mutable bool kio__openurljob_slotinfomessage_isbase = false;
    mutable bool kio__openurljob_dosuspend_isbase = false;
    mutable bool kio__openurljob_doresume_isbase = false;
    mutable bool kio__openurljob_errorstring_isbase = false;
    mutable bool kio__openurljob_event_isbase = false;
    mutable bool kio__openurljob_eventfilter_isbase = false;
    mutable bool kio__openurljob_timerevent_isbase = false;
    mutable bool kio__openurljob_childevent_isbase = false;
    mutable bool kio__openurljob_customevent_isbase = false;
    mutable bool kio__openurljob_connectnotify_isbase = false;
    mutable bool kio__openurljob_disconnectnotify_isbase = false;
    mutable bool kio__openurljob_hassubjobs_isbase = false;
    mutable bool kio__openurljob_subjobs_isbase = false;
    mutable bool kio__openurljob_clearsubjobs_isbase = false;
    mutable bool kio__openurljob_setcapabilities_isbase = false;
    mutable bool kio__openurljob_isfinished_isbase = false;
    mutable bool kio__openurljob_seterror_isbase = false;
    mutable bool kio__openurljob_seterrortext_isbase = false;
    mutable bool kio__openurljob_setprocessedamount_isbase = false;
    mutable bool kio__openurljob_settotalamount_isbase = false;
    mutable bool kio__openurljob_setprogressunit_isbase = false;
    mutable bool kio__openurljob_setpercent_isbase = false;
    mutable bool kio__openurljob_emitresult_isbase = false;
    mutable bool kio__openurljob_emitpercent_isbase = false;
    mutable bool kio__openurljob_emitspeed_isbase = false;
    mutable bool kio__openurljob_startelapsedtimer_isbase = false;
    mutable bool kio__openurljob_sender_isbase = false;
    mutable bool kio__openurljob_sendersignalindex_isbase = false;
    mutable bool kio__openurljob_receivers_isbase = false;
    mutable bool kio__openurljob_issignalconnected_isbase = false;

  public:
    VirtualKIOOpenUrlJob(const QUrl& url) : KIO::OpenUrlJob(url) {};
    VirtualKIOOpenUrlJob(const QUrl& url, const QString& mimeType) : KIO::OpenUrlJob(url, mimeType) {};
    VirtualKIOOpenUrlJob(const QUrl& url, QObject* parent) : KIO::OpenUrlJob(url, parent) {};
    VirtualKIOOpenUrlJob(const QUrl& url, const QString& mimeType, QObject* parent) : KIO::OpenUrlJob(url, mimeType, parent) {};

    ~VirtualKIOOpenUrlJob() {
        kio__openurljob_metacall_callback = nullptr;
        kio__openurljob_start_callback = nullptr;
        kio__openurljob_dokill_callback = nullptr;
        kio__openurljob_addsubjob_callback = nullptr;
        kio__openurljob_removesubjob_callback = nullptr;
        kio__openurljob_slotinfomessage_callback = nullptr;
        kio__openurljob_dosuspend_callback = nullptr;
        kio__openurljob_doresume_callback = nullptr;
        kio__openurljob_errorstring_callback = nullptr;
        kio__openurljob_event_callback = nullptr;
        kio__openurljob_eventfilter_callback = nullptr;
        kio__openurljob_timerevent_callback = nullptr;
        kio__openurljob_childevent_callback = nullptr;
        kio__openurljob_customevent_callback = nullptr;
        kio__openurljob_connectnotify_callback = nullptr;
        kio__openurljob_disconnectnotify_callback = nullptr;
        kio__openurljob_hassubjobs_callback = nullptr;
        kio__openurljob_subjobs_callback = nullptr;
        kio__openurljob_clearsubjobs_callback = nullptr;
        kio__openurljob_setcapabilities_callback = nullptr;
        kio__openurljob_isfinished_callback = nullptr;
        kio__openurljob_seterror_callback = nullptr;
        kio__openurljob_seterrortext_callback = nullptr;
        kio__openurljob_setprocessedamount_callback = nullptr;
        kio__openurljob_settotalamount_callback = nullptr;
        kio__openurljob_setprogressunit_callback = nullptr;
        kio__openurljob_setpercent_callback = nullptr;
        kio__openurljob_emitresult_callback = nullptr;
        kio__openurljob_emitpercent_callback = nullptr;
        kio__openurljob_emitspeed_callback = nullptr;
        kio__openurljob_startelapsedtimer_callback = nullptr;
        kio__openurljob_sender_callback = nullptr;
        kio__openurljob_sendersignalindex_callback = nullptr;
        kio__openurljob_receivers_callback = nullptr;
        kio__openurljob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__OpenUrlJob_Metacall_Callback(KIO__OpenUrlJob_Metacall_Callback cb) { kio__openurljob_metacall_callback = cb; }
    inline void setKIO__OpenUrlJob_Start_Callback(KIO__OpenUrlJob_Start_Callback cb) { kio__openurljob_start_callback = cb; }
    inline void setKIO__OpenUrlJob_DoKill_Callback(KIO__OpenUrlJob_DoKill_Callback cb) { kio__openurljob_dokill_callback = cb; }
    inline void setKIO__OpenUrlJob_AddSubjob_Callback(KIO__OpenUrlJob_AddSubjob_Callback cb) { kio__openurljob_addsubjob_callback = cb; }
    inline void setKIO__OpenUrlJob_RemoveSubjob_Callback(KIO__OpenUrlJob_RemoveSubjob_Callback cb) { kio__openurljob_removesubjob_callback = cb; }
    inline void setKIO__OpenUrlJob_SlotInfoMessage_Callback(KIO__OpenUrlJob_SlotInfoMessage_Callback cb) { kio__openurljob_slotinfomessage_callback = cb; }
    inline void setKIO__OpenUrlJob_DoSuspend_Callback(KIO__OpenUrlJob_DoSuspend_Callback cb) { kio__openurljob_dosuspend_callback = cb; }
    inline void setKIO__OpenUrlJob_DoResume_Callback(KIO__OpenUrlJob_DoResume_Callback cb) { kio__openurljob_doresume_callback = cb; }
    inline void setKIO__OpenUrlJob_ErrorString_Callback(KIO__OpenUrlJob_ErrorString_Callback cb) { kio__openurljob_errorstring_callback = cb; }
    inline void setKIO__OpenUrlJob_Event_Callback(KIO__OpenUrlJob_Event_Callback cb) { kio__openurljob_event_callback = cb; }
    inline void setKIO__OpenUrlJob_EventFilter_Callback(KIO__OpenUrlJob_EventFilter_Callback cb) { kio__openurljob_eventfilter_callback = cb; }
    inline void setKIO__OpenUrlJob_TimerEvent_Callback(KIO__OpenUrlJob_TimerEvent_Callback cb) { kio__openurljob_timerevent_callback = cb; }
    inline void setKIO__OpenUrlJob_ChildEvent_Callback(KIO__OpenUrlJob_ChildEvent_Callback cb) { kio__openurljob_childevent_callback = cb; }
    inline void setKIO__OpenUrlJob_CustomEvent_Callback(KIO__OpenUrlJob_CustomEvent_Callback cb) { kio__openurljob_customevent_callback = cb; }
    inline void setKIO__OpenUrlJob_ConnectNotify_Callback(KIO__OpenUrlJob_ConnectNotify_Callback cb) { kio__openurljob_connectnotify_callback = cb; }
    inline void setKIO__OpenUrlJob_DisconnectNotify_Callback(KIO__OpenUrlJob_DisconnectNotify_Callback cb) { kio__openurljob_disconnectnotify_callback = cb; }
    inline void setKIO__OpenUrlJob_HasSubjobs_Callback(KIO__OpenUrlJob_HasSubjobs_Callback cb) { kio__openurljob_hassubjobs_callback = cb; }
    inline void setKIO__OpenUrlJob_Subjobs_Callback(KIO__OpenUrlJob_Subjobs_Callback cb) { kio__openurljob_subjobs_callback = cb; }
    inline void setKIO__OpenUrlJob_ClearSubjobs_Callback(KIO__OpenUrlJob_ClearSubjobs_Callback cb) { kio__openurljob_clearsubjobs_callback = cb; }
    inline void setKIO__OpenUrlJob_SetCapabilities_Callback(KIO__OpenUrlJob_SetCapabilities_Callback cb) { kio__openurljob_setcapabilities_callback = cb; }
    inline void setKIO__OpenUrlJob_IsFinished_Callback(KIO__OpenUrlJob_IsFinished_Callback cb) { kio__openurljob_isfinished_callback = cb; }
    inline void setKIO__OpenUrlJob_SetError_Callback(KIO__OpenUrlJob_SetError_Callback cb) { kio__openurljob_seterror_callback = cb; }
    inline void setKIO__OpenUrlJob_SetErrorText_Callback(KIO__OpenUrlJob_SetErrorText_Callback cb) { kio__openurljob_seterrortext_callback = cb; }
    inline void setKIO__OpenUrlJob_SetProcessedAmount_Callback(KIO__OpenUrlJob_SetProcessedAmount_Callback cb) { kio__openurljob_setprocessedamount_callback = cb; }
    inline void setKIO__OpenUrlJob_SetTotalAmount_Callback(KIO__OpenUrlJob_SetTotalAmount_Callback cb) { kio__openurljob_settotalamount_callback = cb; }
    inline void setKIO__OpenUrlJob_SetProgressUnit_Callback(KIO__OpenUrlJob_SetProgressUnit_Callback cb) { kio__openurljob_setprogressunit_callback = cb; }
    inline void setKIO__OpenUrlJob_SetPercent_Callback(KIO__OpenUrlJob_SetPercent_Callback cb) { kio__openurljob_setpercent_callback = cb; }
    inline void setKIO__OpenUrlJob_EmitResult_Callback(KIO__OpenUrlJob_EmitResult_Callback cb) { kio__openurljob_emitresult_callback = cb; }
    inline void setKIO__OpenUrlJob_EmitPercent_Callback(KIO__OpenUrlJob_EmitPercent_Callback cb) { kio__openurljob_emitpercent_callback = cb; }
    inline void setKIO__OpenUrlJob_EmitSpeed_Callback(KIO__OpenUrlJob_EmitSpeed_Callback cb) { kio__openurljob_emitspeed_callback = cb; }
    inline void setKIO__OpenUrlJob_StartElapsedTimer_Callback(KIO__OpenUrlJob_StartElapsedTimer_Callback cb) { kio__openurljob_startelapsedtimer_callback = cb; }
    inline void setKIO__OpenUrlJob_Sender_Callback(KIO__OpenUrlJob_Sender_Callback cb) { kio__openurljob_sender_callback = cb; }
    inline void setKIO__OpenUrlJob_SenderSignalIndex_Callback(KIO__OpenUrlJob_SenderSignalIndex_Callback cb) { kio__openurljob_sendersignalindex_callback = cb; }
    inline void setKIO__OpenUrlJob_Receivers_Callback(KIO__OpenUrlJob_Receivers_Callback cb) { kio__openurljob_receivers_callback = cb; }
    inline void setKIO__OpenUrlJob_IsSignalConnected_Callback(KIO__OpenUrlJob_IsSignalConnected_Callback cb) { kio__openurljob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__OpenUrlJob_Metacall_IsBase(bool value) const { kio__openurljob_metacall_isbase = value; }
    inline void setKIO__OpenUrlJob_Start_IsBase(bool value) const { kio__openurljob_start_isbase = value; }
    inline void setKIO__OpenUrlJob_DoKill_IsBase(bool value) const { kio__openurljob_dokill_isbase = value; }
    inline void setKIO__OpenUrlJob_AddSubjob_IsBase(bool value) const { kio__openurljob_addsubjob_isbase = value; }
    inline void setKIO__OpenUrlJob_RemoveSubjob_IsBase(bool value) const { kio__openurljob_removesubjob_isbase = value; }
    inline void setKIO__OpenUrlJob_SlotInfoMessage_IsBase(bool value) const { kio__openurljob_slotinfomessage_isbase = value; }
    inline void setKIO__OpenUrlJob_DoSuspend_IsBase(bool value) const { kio__openurljob_dosuspend_isbase = value; }
    inline void setKIO__OpenUrlJob_DoResume_IsBase(bool value) const { kio__openurljob_doresume_isbase = value; }
    inline void setKIO__OpenUrlJob_ErrorString_IsBase(bool value) const { kio__openurljob_errorstring_isbase = value; }
    inline void setKIO__OpenUrlJob_Event_IsBase(bool value) const { kio__openurljob_event_isbase = value; }
    inline void setKIO__OpenUrlJob_EventFilter_IsBase(bool value) const { kio__openurljob_eventfilter_isbase = value; }
    inline void setKIO__OpenUrlJob_TimerEvent_IsBase(bool value) const { kio__openurljob_timerevent_isbase = value; }
    inline void setKIO__OpenUrlJob_ChildEvent_IsBase(bool value) const { kio__openurljob_childevent_isbase = value; }
    inline void setKIO__OpenUrlJob_CustomEvent_IsBase(bool value) const { kio__openurljob_customevent_isbase = value; }
    inline void setKIO__OpenUrlJob_ConnectNotify_IsBase(bool value) const { kio__openurljob_connectnotify_isbase = value; }
    inline void setKIO__OpenUrlJob_DisconnectNotify_IsBase(bool value) const { kio__openurljob_disconnectnotify_isbase = value; }
    inline void setKIO__OpenUrlJob_HasSubjobs_IsBase(bool value) const { kio__openurljob_hassubjobs_isbase = value; }
    inline void setKIO__OpenUrlJob_Subjobs_IsBase(bool value) const { kio__openurljob_subjobs_isbase = value; }
    inline void setKIO__OpenUrlJob_ClearSubjobs_IsBase(bool value) const { kio__openurljob_clearsubjobs_isbase = value; }
    inline void setKIO__OpenUrlJob_SetCapabilities_IsBase(bool value) const { kio__openurljob_setcapabilities_isbase = value; }
    inline void setKIO__OpenUrlJob_IsFinished_IsBase(bool value) const { kio__openurljob_isfinished_isbase = value; }
    inline void setKIO__OpenUrlJob_SetError_IsBase(bool value) const { kio__openurljob_seterror_isbase = value; }
    inline void setKIO__OpenUrlJob_SetErrorText_IsBase(bool value) const { kio__openurljob_seterrortext_isbase = value; }
    inline void setKIO__OpenUrlJob_SetProcessedAmount_IsBase(bool value) const { kio__openurljob_setprocessedamount_isbase = value; }
    inline void setKIO__OpenUrlJob_SetTotalAmount_IsBase(bool value) const { kio__openurljob_settotalamount_isbase = value; }
    inline void setKIO__OpenUrlJob_SetProgressUnit_IsBase(bool value) const { kio__openurljob_setprogressunit_isbase = value; }
    inline void setKIO__OpenUrlJob_SetPercent_IsBase(bool value) const { kio__openurljob_setpercent_isbase = value; }
    inline void setKIO__OpenUrlJob_EmitResult_IsBase(bool value) const { kio__openurljob_emitresult_isbase = value; }
    inline void setKIO__OpenUrlJob_EmitPercent_IsBase(bool value) const { kio__openurljob_emitpercent_isbase = value; }
    inline void setKIO__OpenUrlJob_EmitSpeed_IsBase(bool value) const { kio__openurljob_emitspeed_isbase = value; }
    inline void setKIO__OpenUrlJob_StartElapsedTimer_IsBase(bool value) const { kio__openurljob_startelapsedtimer_isbase = value; }
    inline void setKIO__OpenUrlJob_Sender_IsBase(bool value) const { kio__openurljob_sender_isbase = value; }
    inline void setKIO__OpenUrlJob_SenderSignalIndex_IsBase(bool value) const { kio__openurljob_sendersignalindex_isbase = value; }
    inline void setKIO__OpenUrlJob_Receivers_IsBase(bool value) const { kio__openurljob_receivers_isbase = value; }
    inline void setKIO__OpenUrlJob_IsSignalConnected_IsBase(bool value) const { kio__openurljob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__openurljob_metacall_isbase) {
            kio__openurljob_metacall_isbase = false;
            return KIO__OpenUrlJob::qt_metacall(param1, param2, param3);
        } else if (kio__openurljob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__openurljob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__OpenUrlJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__openurljob_start_isbase) {
            kio__openurljob_start_isbase = false;
            KIO__OpenUrlJob::start();
        } else if (kio__openurljob_start_callback != nullptr) {
            kio__openurljob_start_callback();
        } else {
            KIO__OpenUrlJob::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__openurljob_dokill_isbase) {
            kio__openurljob_dokill_isbase = false;
            return KIO__OpenUrlJob::doKill();
        } else if (kio__openurljob_dokill_callback != nullptr) {
            bool callback_ret = kio__openurljob_dokill_callback();
            return callback_ret;
        } else {
            return KIO__OpenUrlJob::doKill();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__openurljob_addsubjob_isbase) {
            kio__openurljob_addsubjob_isbase = false;
            return KIO__OpenUrlJob::addSubjob(job);
        } else if (kio__openurljob_addsubjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kio__openurljob_addsubjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__OpenUrlJob::addSubjob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__openurljob_removesubjob_isbase) {
            kio__openurljob_removesubjob_isbase = false;
            return KIO__OpenUrlJob::removeSubjob(job);
        } else if (kio__openurljob_removesubjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kio__openurljob_removesubjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__OpenUrlJob::removeSubjob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__openurljob_slotinfomessage_isbase) {
            kio__openurljob_slotinfomessage_isbase = false;
            KIO__OpenUrlJob::slotInfoMessage(job, message);
        } else if (kio__openurljob_slotinfomessage_callback != nullptr) {
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

            kio__openurljob_slotinfomessage_callback(this, cbval1, cbval2);
        } else {
            KIO__OpenUrlJob::slotInfoMessage(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__openurljob_dosuspend_isbase) {
            kio__openurljob_dosuspend_isbase = false;
            return KIO__OpenUrlJob::doSuspend();
        } else if (kio__openurljob_dosuspend_callback != nullptr) {
            bool callback_ret = kio__openurljob_dosuspend_callback();
            return callback_ret;
        } else {
            return KIO__OpenUrlJob::doSuspend();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__openurljob_doresume_isbase) {
            kio__openurljob_doresume_isbase = false;
            return KIO__OpenUrlJob::doResume();
        } else if (kio__openurljob_doresume_callback != nullptr) {
            bool callback_ret = kio__openurljob_doresume_callback();
            return callback_ret;
        } else {
            return KIO__OpenUrlJob::doResume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__openurljob_errorstring_isbase) {
            kio__openurljob_errorstring_isbase = false;
            return KIO__OpenUrlJob::errorString();
        } else if (kio__openurljob_errorstring_callback != nullptr) {
            const char* callback_ret = kio__openurljob_errorstring_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KIO__OpenUrlJob::errorString();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__openurljob_event_isbase) {
            kio__openurljob_event_isbase = false;
            return KIO__OpenUrlJob::event(event);
        } else if (kio__openurljob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__openurljob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__OpenUrlJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__openurljob_eventfilter_isbase) {
            kio__openurljob_eventfilter_isbase = false;
            return KIO__OpenUrlJob::eventFilter(watched, event);
        } else if (kio__openurljob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kio__openurljob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__OpenUrlJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__openurljob_timerevent_isbase) {
            kio__openurljob_timerevent_isbase = false;
            KIO__OpenUrlJob::timerEvent(event);
        } else if (kio__openurljob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__openurljob_timerevent_callback(this, cbval1);
        } else {
            KIO__OpenUrlJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__openurljob_childevent_isbase) {
            kio__openurljob_childevent_isbase = false;
            KIO__OpenUrlJob::childEvent(event);
        } else if (kio__openurljob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__openurljob_childevent_callback(this, cbval1);
        } else {
            KIO__OpenUrlJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__openurljob_customevent_isbase) {
            kio__openurljob_customevent_isbase = false;
            KIO__OpenUrlJob::customEvent(event);
        } else if (kio__openurljob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__openurljob_customevent_callback(this, cbval1);
        } else {
            KIO__OpenUrlJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__openurljob_connectnotify_isbase) {
            kio__openurljob_connectnotify_isbase = false;
            KIO__OpenUrlJob::connectNotify(signal);
        } else if (kio__openurljob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__openurljob_connectnotify_callback(this, cbval1);
        } else {
            KIO__OpenUrlJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__openurljob_disconnectnotify_isbase) {
            kio__openurljob_disconnectnotify_isbase = false;
            KIO__OpenUrlJob::disconnectNotify(signal);
        } else if (kio__openurljob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__openurljob_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__OpenUrlJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool hasSubjobs() const {
        if (kio__openurljob_hassubjobs_isbase) {
            kio__openurljob_hassubjobs_isbase = false;
            return KIO__OpenUrlJob::hasSubjobs();
        } else if (kio__openurljob_hassubjobs_callback != nullptr) {
            bool callback_ret = kio__openurljob_hassubjobs_callback();
            return callback_ret;
        } else {
            return KIO__OpenUrlJob::hasSubjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    const QList<KJob*>& subjobs() const {
        if (kio__openurljob_subjobs_isbase) {
            kio__openurljob_subjobs_isbase = false;
            return KIO__OpenUrlJob::subjobs();
        } else if (kio__openurljob_subjobs_callback != nullptr) {
            KJob** callback_ret = kio__openurljob_subjobs_callback();
            QList<KJob*>* callback_ret_QList;
            callback_ret_QList = new QList<KJob*>;
            // Iterate until null pointer sentinel
            for (KJob** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList->push_back(*ptridx);
            }
            free(callback_ret);
            return *callback_ret_QList;
        } else {
            return KIO__OpenUrlJob::subjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    void clearSubjobs() {
        if (kio__openurljob_clearsubjobs_isbase) {
            kio__openurljob_clearsubjobs_isbase = false;
            KIO__OpenUrlJob::clearSubjobs();
        } else if (kio__openurljob_clearsubjobs_callback != nullptr) {
            kio__openurljob_clearsubjobs_callback();
        } else {
            KIO__OpenUrlJob::clearSubjobs();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kio__openurljob_setcapabilities_isbase) {
            kio__openurljob_setcapabilities_isbase = false;
            KIO__OpenUrlJob::setCapabilities(capabilities);
        } else if (kio__openurljob_setcapabilities_callback != nullptr) {
            int cbval1 = static_cast<int>(capabilities);

            kio__openurljob_setcapabilities_callback(this, cbval1);
        } else {
            KIO__OpenUrlJob::setCapabilities(capabilities);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kio__openurljob_isfinished_isbase) {
            kio__openurljob_isfinished_isbase = false;
            return KIO__OpenUrlJob::isFinished();
        } else if (kio__openurljob_isfinished_callback != nullptr) {
            bool callback_ret = kio__openurljob_isfinished_callback();
            return callback_ret;
        } else {
            return KIO__OpenUrlJob::isFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kio__openurljob_seterror_isbase) {
            kio__openurljob_seterror_isbase = false;
            KIO__OpenUrlJob::setError(errorCode);
        } else if (kio__openurljob_seterror_callback != nullptr) {
            int cbval1 = errorCode;

            kio__openurljob_seterror_callback(this, cbval1);
        } else {
            KIO__OpenUrlJob::setError(errorCode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kio__openurljob_seterrortext_isbase) {
            kio__openurljob_seterrortext_isbase = false;
            KIO__OpenUrlJob::setErrorText(errorText);
        } else if (kio__openurljob_seterrortext_callback != nullptr) {
            const QString errorText_ret = errorText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorText_b = errorText_ret.toUtf8();
            libqt_string errorText_str;
            errorText_str.len = errorText_b.length();
            errorText_str.data = static_cast<const char*>(malloc(errorText_str.len + 1));
            memcpy((void*)errorText_str.data, errorText_b.data(), errorText_str.len);
            ((char*)errorText_str.data)[errorText_str.len] = '\0';
            libqt_string cbval1 = errorText_str;

            kio__openurljob_seterrortext_callback(this, cbval1);
        } else {
            KIO__OpenUrlJob::setErrorText(errorText);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__openurljob_setprocessedamount_isbase) {
            kio__openurljob_setprocessedamount_isbase = false;
            KIO__OpenUrlJob::setProcessedAmount(unit, amount);
        } else if (kio__openurljob_setprocessedamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__openurljob_setprocessedamount_callback(this, cbval1, cbval2);
        } else {
            KIO__OpenUrlJob::setProcessedAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__openurljob_settotalamount_isbase) {
            kio__openurljob_settotalamount_isbase = false;
            KIO__OpenUrlJob::setTotalAmount(unit, amount);
        } else if (kio__openurljob_settotalamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__openurljob_settotalamount_callback(this, cbval1, cbval2);
        } else {
            KIO__OpenUrlJob::setTotalAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kio__openurljob_setprogressunit_isbase) {
            kio__openurljob_setprogressunit_isbase = false;
            KIO__OpenUrlJob::setProgressUnit(unit);
        } else if (kio__openurljob_setprogressunit_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);

            kio__openurljob_setprogressunit_callback(this, cbval1);
        } else {
            KIO__OpenUrlJob::setProgressUnit(unit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kio__openurljob_setpercent_isbase) {
            kio__openurljob_setpercent_isbase = false;
            KIO__OpenUrlJob::setPercent(percentage);
        } else if (kio__openurljob_setpercent_callback != nullptr) {
            unsigned long cbval1 = percentage;

            kio__openurljob_setpercent_callback(this, cbval1);
        } else {
            KIO__OpenUrlJob::setPercent(percentage);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kio__openurljob_emitresult_isbase) {
            kio__openurljob_emitresult_isbase = false;
            KIO__OpenUrlJob::emitResult();
        } else if (kio__openurljob_emitresult_callback != nullptr) {
            kio__openurljob_emitresult_callback();
        } else {
            KIO__OpenUrlJob::emitResult();
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kio__openurljob_emitpercent_isbase) {
            kio__openurljob_emitpercent_isbase = false;
            KIO__OpenUrlJob::emitPercent(processedAmount, totalAmount);
        } else if (kio__openurljob_emitpercent_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            kio__openurljob_emitpercent_callback(this, cbval1, cbval2);
        } else {
            KIO__OpenUrlJob::emitPercent(processedAmount, totalAmount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kio__openurljob_emitspeed_isbase) {
            kio__openurljob_emitspeed_isbase = false;
            KIO__OpenUrlJob::emitSpeed(speed);
        } else if (kio__openurljob_emitspeed_callback != nullptr) {
            unsigned long cbval1 = speed;

            kio__openurljob_emitspeed_callback(this, cbval1);
        } else {
            KIO__OpenUrlJob::emitSpeed(speed);
        }
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kio__openurljob_startelapsedtimer_isbase) {
            kio__openurljob_startelapsedtimer_isbase = false;
            KIO__OpenUrlJob::startElapsedTimer();
        } else if (kio__openurljob_startelapsedtimer_callback != nullptr) {
            kio__openurljob_startelapsedtimer_callback();
        } else {
            KIO__OpenUrlJob::startElapsedTimer();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__openurljob_sender_isbase) {
            kio__openurljob_sender_isbase = false;
            return KIO__OpenUrlJob::sender();
        } else if (kio__openurljob_sender_callback != nullptr) {
            QObject* callback_ret = kio__openurljob_sender_callback();
            return callback_ret;
        } else {
            return KIO__OpenUrlJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__openurljob_sendersignalindex_isbase) {
            kio__openurljob_sendersignalindex_isbase = false;
            return KIO__OpenUrlJob::senderSignalIndex();
        } else if (kio__openurljob_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__openurljob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__OpenUrlJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__openurljob_receivers_isbase) {
            kio__openurljob_receivers_isbase = false;
            return KIO__OpenUrlJob::receivers(signal);
        } else if (kio__openurljob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__openurljob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__OpenUrlJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__openurljob_issignalconnected_isbase) {
            kio__openurljob_issignalconnected_isbase = false;
            return KIO__OpenUrlJob::isSignalConnected(signal);
        } else if (kio__openurljob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__openurljob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__OpenUrlJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KIO__OpenUrlJob_DoKill(KIO::OpenUrlJob* self);
    friend bool KIO__OpenUrlJob_QBaseDoKill(KIO::OpenUrlJob* self);
    friend bool KIO__OpenUrlJob_AddSubjob(KIO::OpenUrlJob* self, KJob* job);
    friend bool KIO__OpenUrlJob_QBaseAddSubjob(KIO::OpenUrlJob* self, KJob* job);
    friend bool KIO__OpenUrlJob_RemoveSubjob(KIO::OpenUrlJob* self, KJob* job);
    friend bool KIO__OpenUrlJob_QBaseRemoveSubjob(KIO::OpenUrlJob* self, KJob* job);
    friend void KIO__OpenUrlJob_SlotInfoMessage(KIO::OpenUrlJob* self, KJob* job, const libqt_string message);
    friend void KIO__OpenUrlJob_QBaseSlotInfoMessage(KIO::OpenUrlJob* self, KJob* job, const libqt_string message);
    friend bool KIO__OpenUrlJob_DoSuspend(KIO::OpenUrlJob* self);
    friend bool KIO__OpenUrlJob_QBaseDoSuspend(KIO::OpenUrlJob* self);
    friend bool KIO__OpenUrlJob_DoResume(KIO::OpenUrlJob* self);
    friend bool KIO__OpenUrlJob_QBaseDoResume(KIO::OpenUrlJob* self);
    friend void KIO__OpenUrlJob_TimerEvent(KIO::OpenUrlJob* self, QTimerEvent* event);
    friend void KIO__OpenUrlJob_QBaseTimerEvent(KIO::OpenUrlJob* self, QTimerEvent* event);
    friend void KIO__OpenUrlJob_ChildEvent(KIO::OpenUrlJob* self, QChildEvent* event);
    friend void KIO__OpenUrlJob_QBaseChildEvent(KIO::OpenUrlJob* self, QChildEvent* event);
    friend void KIO__OpenUrlJob_CustomEvent(KIO::OpenUrlJob* self, QEvent* event);
    friend void KIO__OpenUrlJob_QBaseCustomEvent(KIO::OpenUrlJob* self, QEvent* event);
    friend void KIO__OpenUrlJob_ConnectNotify(KIO::OpenUrlJob* self, const QMetaMethod* signal);
    friend void KIO__OpenUrlJob_QBaseConnectNotify(KIO::OpenUrlJob* self, const QMetaMethod* signal);
    friend void KIO__OpenUrlJob_DisconnectNotify(KIO::OpenUrlJob* self, const QMetaMethod* signal);
    friend void KIO__OpenUrlJob_QBaseDisconnectNotify(KIO::OpenUrlJob* self, const QMetaMethod* signal);
    friend bool KIO__OpenUrlJob_HasSubjobs(const KIO::OpenUrlJob* self);
    friend bool KIO__OpenUrlJob_QBaseHasSubjobs(const KIO::OpenUrlJob* self);
    friend libqt_list /* of KJob* */ KIO__OpenUrlJob_Subjobs(const KIO::OpenUrlJob* self);
    friend libqt_list /* of KJob* */ KIO__OpenUrlJob_QBaseSubjobs(const KIO::OpenUrlJob* self);
    friend void KIO__OpenUrlJob_ClearSubjobs(KIO::OpenUrlJob* self);
    friend void KIO__OpenUrlJob_QBaseClearSubjobs(KIO::OpenUrlJob* self);
    friend void KIO__OpenUrlJob_SetCapabilities(KIO::OpenUrlJob* self, int capabilities);
    friend void KIO__OpenUrlJob_QBaseSetCapabilities(KIO::OpenUrlJob* self, int capabilities);
    friend bool KIO__OpenUrlJob_IsFinished(const KIO::OpenUrlJob* self);
    friend bool KIO__OpenUrlJob_QBaseIsFinished(const KIO::OpenUrlJob* self);
    friend void KIO__OpenUrlJob_SetError(KIO::OpenUrlJob* self, int errorCode);
    friend void KIO__OpenUrlJob_QBaseSetError(KIO::OpenUrlJob* self, int errorCode);
    friend void KIO__OpenUrlJob_SetErrorText(KIO::OpenUrlJob* self, const libqt_string errorText);
    friend void KIO__OpenUrlJob_QBaseSetErrorText(KIO::OpenUrlJob* self, const libqt_string errorText);
    friend void KIO__OpenUrlJob_SetProcessedAmount(KIO::OpenUrlJob* self, int unit, unsigned long long amount);
    friend void KIO__OpenUrlJob_QBaseSetProcessedAmount(KIO::OpenUrlJob* self, int unit, unsigned long long amount);
    friend void KIO__OpenUrlJob_SetTotalAmount(KIO::OpenUrlJob* self, int unit, unsigned long long amount);
    friend void KIO__OpenUrlJob_QBaseSetTotalAmount(KIO::OpenUrlJob* self, int unit, unsigned long long amount);
    friend void KIO__OpenUrlJob_SetProgressUnit(KIO::OpenUrlJob* self, int unit);
    friend void KIO__OpenUrlJob_QBaseSetProgressUnit(KIO::OpenUrlJob* self, int unit);
    friend void KIO__OpenUrlJob_SetPercent(KIO::OpenUrlJob* self, unsigned long percentage);
    friend void KIO__OpenUrlJob_QBaseSetPercent(KIO::OpenUrlJob* self, unsigned long percentage);
    friend void KIO__OpenUrlJob_EmitResult(KIO::OpenUrlJob* self);
    friend void KIO__OpenUrlJob_QBaseEmitResult(KIO::OpenUrlJob* self);
    friend void KIO__OpenUrlJob_EmitPercent(KIO::OpenUrlJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__OpenUrlJob_QBaseEmitPercent(KIO::OpenUrlJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__OpenUrlJob_EmitSpeed(KIO::OpenUrlJob* self, unsigned long speed);
    friend void KIO__OpenUrlJob_QBaseEmitSpeed(KIO::OpenUrlJob* self, unsigned long speed);
    friend void KIO__OpenUrlJob_StartElapsedTimer(KIO::OpenUrlJob* self);
    friend void KIO__OpenUrlJob_QBaseStartElapsedTimer(KIO::OpenUrlJob* self);
    friend QObject* KIO__OpenUrlJob_Sender(const KIO::OpenUrlJob* self);
    friend QObject* KIO__OpenUrlJob_QBaseSender(const KIO::OpenUrlJob* self);
    friend int KIO__OpenUrlJob_SenderSignalIndex(const KIO::OpenUrlJob* self);
    friend int KIO__OpenUrlJob_QBaseSenderSignalIndex(const KIO::OpenUrlJob* self);
    friend int KIO__OpenUrlJob_Receivers(const KIO::OpenUrlJob* self, const char* signal);
    friend int KIO__OpenUrlJob_QBaseReceivers(const KIO::OpenUrlJob* self, const char* signal);
    friend bool KIO__OpenUrlJob_IsSignalConnected(const KIO::OpenUrlJob* self, const QMetaMethod* signal);
    friend bool KIO__OpenUrlJob_QBaseIsSignalConnected(const KIO::OpenUrlJob* self, const QMetaMethod* signal);
};

#endif
