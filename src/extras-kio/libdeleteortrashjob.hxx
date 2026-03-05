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
    using KIO__DeleteOrTrashJob_MetaObject_Callback = QMetaObject* (*)();
    using KIO__DeleteOrTrashJob_Metacast_Callback = void* (*)(KIO__DeleteOrTrashJob*, const char*);
    using KIO__DeleteOrTrashJob_Metacall_Callback = int (*)(KIO__DeleteOrTrashJob*, int, int, void**);
    using KIO__DeleteOrTrashJob_Start_Callback = void (*)();
    using KIO__DeleteOrTrashJob_AddSubjob_Callback = bool (*)(KIO__DeleteOrTrashJob*, KJob*);
    using KIO__DeleteOrTrashJob_RemoveSubjob_Callback = bool (*)(KIO__DeleteOrTrashJob*, KJob*);
    using KIO__DeleteOrTrashJob_SlotInfoMessage_Callback = void (*)(KIO__DeleteOrTrashJob*, KJob*, const char*);
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
    using KIO__DeleteOrTrashJob_Subjobs_Callback = libqt_list /* of KJob* */ (*)();
    using KIO__DeleteOrTrashJob_ClearSubjobs_Callback = void (*)();
    using KIO__DeleteOrTrashJob_SetCapabilities_Callback = void (*)(KIO__DeleteOrTrashJob*, int);
    using KIO__DeleteOrTrashJob_IsFinished_Callback = bool (*)();
    using KIO__DeleteOrTrashJob_SetError_Callback = void (*)(KIO__DeleteOrTrashJob*, int);
    using KIO__DeleteOrTrashJob_SetErrorText_Callback = void (*)(KIO__DeleteOrTrashJob*, const char*);
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
    mutable bool kio__deleteortrashjob_metaobject_isbase = false;
    mutable bool kio__deleteortrashjob_metacast_isbase = false;
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

    // Callback setters
    inline void setKIO__DeleteOrTrashJob_MetaObject_Callback(KIO__DeleteOrTrashJob_MetaObject_Callback cb) { kio__deleteortrashjob_metaobject_callback = cb; }
    inline void setKIO__DeleteOrTrashJob_Metacast_Callback(KIO__DeleteOrTrashJob_Metacast_Callback cb) { kio__deleteortrashjob_metacast_callback = cb; }
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
    inline void setKIO__DeleteOrTrashJob_MetaObject_IsBase(bool value) const { kio__deleteortrashjob_metaobject_isbase = value; }
    inline void setKIO__DeleteOrTrashJob_Metacast_IsBase(bool value) const { kio__deleteortrashjob_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kio__deleteortrashjob_metaobject_isbase) {
            kio__deleteortrashjob_metaobject_isbase = false;
            return KIO__DeleteOrTrashJob::metaObject();
        }
        auto metaobject_cb = kio__deleteortrashjob_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__deleteortrashjob_metacast_isbase) {
            kio__deleteortrashjob_metacast_isbase = false;
            return KIO__DeleteOrTrashJob::qt_metacast(param1);
        }
        auto metacast_cb = kio__deleteortrashjob_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__deleteortrashjob_metacall_isbase) {
            kio__deleteortrashjob_metacall_isbase = false;
            return KIO__DeleteOrTrashJob::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kio__deleteortrashjob_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__DeleteOrTrashJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__deleteortrashjob_start_isbase) {
            kio__deleteortrashjob_start_isbase = false;
            KIO__DeleteOrTrashJob::start();
            return;
        }
        auto start_cb = kio__deleteortrashjob_start_callback;
        if (start_cb) {
            start_cb();
            return;
        }
        KIO__DeleteOrTrashJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__deleteortrashjob_addsubjob_isbase) {
            kio__deleteortrashjob_addsubjob_isbase = false;
            return KIO__DeleteOrTrashJob::addSubjob(job);
        }
        auto addsubjob_cb = kio__deleteortrashjob_addsubjob_callback;
        if (addsubjob_cb) {
            KJob* cbval1 = job;

            bool callback_ret = addsubjob_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::addSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__deleteortrashjob_removesubjob_isbase) {
            kio__deleteortrashjob_removesubjob_isbase = false;
            return KIO__DeleteOrTrashJob::removeSubjob(job);
        }
        auto removesubjob_cb = kio__deleteortrashjob_removesubjob_callback;
        if (removesubjob_cb) {
            KJob* cbval1 = job;

            bool callback_ret = removesubjob_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::removeSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__deleteortrashjob_slotinfomessage_isbase) {
            kio__deleteortrashjob_slotinfomessage_isbase = false;
            KIO__DeleteOrTrashJob::slotInfoMessage(job, message);
            return;
        }
        auto slotinfomessage_cb = kio__deleteortrashjob_slotinfomessage_callback;
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
        KIO__DeleteOrTrashJob::slotInfoMessage(job, message);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__deleteortrashjob_dokill_isbase) {
            kio__deleteortrashjob_dokill_isbase = false;
            return KIO__DeleteOrTrashJob::doKill();
        }
        auto dokill_cb = kio__deleteortrashjob_dokill_callback;
        if (dokill_cb) {
            bool callback_ret = dokill_cb();
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__deleteortrashjob_dosuspend_isbase) {
            kio__deleteortrashjob_dosuspend_isbase = false;
            return KIO__DeleteOrTrashJob::doSuspend();
        }
        auto dosuspend_cb = kio__deleteortrashjob_dosuspend_callback;
        if (dosuspend_cb) {
            bool callback_ret = dosuspend_cb();
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__deleteortrashjob_doresume_isbase) {
            kio__deleteortrashjob_doresume_isbase = false;
            return KIO__DeleteOrTrashJob::doResume();
        }
        auto doresume_cb = kio__deleteortrashjob_doresume_callback;
        if (doresume_cb) {
            bool callback_ret = doresume_cb();
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__deleteortrashjob_errorstring_isbase) {
            kio__deleteortrashjob_errorstring_isbase = false;
            return KIO__DeleteOrTrashJob::errorString();
        }
        auto errorstring_cb = kio__deleteortrashjob_errorstring_callback;
        if (errorstring_cb) {
            const char* callback_ret = errorstring_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIO__DeleteOrTrashJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__deleteortrashjob_event_isbase) {
            kio__deleteortrashjob_event_isbase = false;
            return KIO__DeleteOrTrashJob::event(event);
        }
        auto event_cb = kio__deleteortrashjob_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__deleteortrashjob_eventfilter_isbase) {
            kio__deleteortrashjob_eventfilter_isbase = false;
            return KIO__DeleteOrTrashJob::eventFilter(watched, event);
        }
        auto eventfilter_cb = kio__deleteortrashjob_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__deleteortrashjob_timerevent_isbase) {
            kio__deleteortrashjob_timerevent_isbase = false;
            KIO__DeleteOrTrashJob::timerEvent(event);
            return;
        }
        auto timerevent_cb = kio__deleteortrashjob_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__deleteortrashjob_childevent_isbase) {
            kio__deleteortrashjob_childevent_isbase = false;
            KIO__DeleteOrTrashJob::childEvent(event);
            return;
        }
        auto childevent_cb = kio__deleteortrashjob_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__deleteortrashjob_customevent_isbase) {
            kio__deleteortrashjob_customevent_isbase = false;
            KIO__DeleteOrTrashJob::customEvent(event);
            return;
        }
        auto customevent_cb = kio__deleteortrashjob_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__deleteortrashjob_connectnotify_isbase) {
            kio__deleteortrashjob_connectnotify_isbase = false;
            KIO__DeleteOrTrashJob::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kio__deleteortrashjob_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__deleteortrashjob_disconnectnotify_isbase) {
            kio__deleteortrashjob_disconnectnotify_isbase = false;
            KIO__DeleteOrTrashJob::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kio__deleteortrashjob_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool hasSubjobs() const {
        if (kio__deleteortrashjob_hassubjobs_isbase) {
            kio__deleteortrashjob_hassubjobs_isbase = false;
            return KIO__DeleteOrTrashJob::hasSubjobs();
        }
        auto hassubjobs_cb = kio__deleteortrashjob_hassubjobs_callback;
        if (hassubjobs_cb) {
            bool callback_ret = hassubjobs_cb();
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::hasSubjobs();
    }

    // Virtual method for C ABI access and custom callback
    const QList<KJob*>& subjobs() const {
        if (kio__deleteortrashjob_subjobs_isbase) {
            kio__deleteortrashjob_subjobs_isbase = false;
            return KIO__DeleteOrTrashJob::subjobs();
        }
        auto subjobs_cb = kio__deleteortrashjob_subjobs_callback;
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
        return KIO__DeleteOrTrashJob::subjobs();
    }

    // Virtual method for C ABI access and custom callback
    void clearSubjobs() {
        if (kio__deleteortrashjob_clearsubjobs_isbase) {
            kio__deleteortrashjob_clearsubjobs_isbase = false;
            KIO__DeleteOrTrashJob::clearSubjobs();
            return;
        }
        auto clearsubjobs_cb = kio__deleteortrashjob_clearsubjobs_callback;
        if (clearsubjobs_cb) {
            clearsubjobs_cb();
            return;
        }
        KIO__DeleteOrTrashJob::clearSubjobs();
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kio__deleteortrashjob_setcapabilities_isbase) {
            kio__deleteortrashjob_setcapabilities_isbase = false;
            KIO__DeleteOrTrashJob::setCapabilities(capabilities);
            return;
        }
        auto setcapabilities_cb = kio__deleteortrashjob_setcapabilities_callback;
        if (setcapabilities_cb) {
            int cbval1 = static_cast<int>(capabilities);

            setcapabilities_cb(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::setCapabilities(capabilities);
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kio__deleteortrashjob_isfinished_isbase) {
            kio__deleteortrashjob_isfinished_isbase = false;
            return KIO__DeleteOrTrashJob::isFinished();
        }
        auto isfinished_cb = kio__deleteortrashjob_isfinished_callback;
        if (isfinished_cb) {
            bool callback_ret = isfinished_cb();
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::isFinished();
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kio__deleteortrashjob_seterror_isbase) {
            kio__deleteortrashjob_seterror_isbase = false;
            KIO__DeleteOrTrashJob::setError(errorCode);
            return;
        }
        auto seterror_cb = kio__deleteortrashjob_seterror_callback;
        if (seterror_cb) {
            int cbval1 = errorCode;

            seterror_cb(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::setError(errorCode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kio__deleteortrashjob_seterrortext_isbase) {
            kio__deleteortrashjob_seterrortext_isbase = false;
            KIO__DeleteOrTrashJob::setErrorText(errorText);
            return;
        }
        auto seterrortext_cb = kio__deleteortrashjob_seterrortext_callback;
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
        KIO__DeleteOrTrashJob::setErrorText(errorText);
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__deleteortrashjob_setprocessedamount_isbase) {
            kio__deleteortrashjob_setprocessedamount_isbase = false;
            KIO__DeleteOrTrashJob::setProcessedAmount(unit, amount);
            return;
        }
        auto setprocessedamount_cb = kio__deleteortrashjob_setprocessedamount_callback;
        if (setprocessedamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            setprocessedamount_cb(this, cbval1, cbval2);
            return;
        }
        KIO__DeleteOrTrashJob::setProcessedAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__deleteortrashjob_settotalamount_isbase) {
            kio__deleteortrashjob_settotalamount_isbase = false;
            KIO__DeleteOrTrashJob::setTotalAmount(unit, amount);
            return;
        }
        auto settotalamount_cb = kio__deleteortrashjob_settotalamount_callback;
        if (settotalamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            settotalamount_cb(this, cbval1, cbval2);
            return;
        }
        KIO__DeleteOrTrashJob::setTotalAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kio__deleteortrashjob_setprogressunit_isbase) {
            kio__deleteortrashjob_setprogressunit_isbase = false;
            KIO__DeleteOrTrashJob::setProgressUnit(unit);
            return;
        }
        auto setprogressunit_cb = kio__deleteortrashjob_setprogressunit_callback;
        if (setprogressunit_cb) {
            int cbval1 = static_cast<int>(unit);

            setprogressunit_cb(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::setProgressUnit(unit);
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kio__deleteortrashjob_setpercent_isbase) {
            kio__deleteortrashjob_setpercent_isbase = false;
            KIO__DeleteOrTrashJob::setPercent(percentage);
            return;
        }
        auto setpercent_cb = kio__deleteortrashjob_setpercent_callback;
        if (setpercent_cb) {
            unsigned long cbval1 = percentage;

            setpercent_cb(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::setPercent(percentage);
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kio__deleteortrashjob_emitresult_isbase) {
            kio__deleteortrashjob_emitresult_isbase = false;
            KIO__DeleteOrTrashJob::emitResult();
            return;
        }
        auto emitresult_cb = kio__deleteortrashjob_emitresult_callback;
        if (emitresult_cb) {
            emitresult_cb();
            return;
        }
        KIO__DeleteOrTrashJob::emitResult();
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kio__deleteortrashjob_emitpercent_isbase) {
            kio__deleteortrashjob_emitpercent_isbase = false;
            KIO__DeleteOrTrashJob::emitPercent(processedAmount, totalAmount);
            return;
        }
        auto emitpercent_cb = kio__deleteortrashjob_emitpercent_callback;
        if (emitpercent_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            emitpercent_cb(this, cbval1, cbval2);
            return;
        }
        KIO__DeleteOrTrashJob::emitPercent(processedAmount, totalAmount);
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kio__deleteortrashjob_emitspeed_isbase) {
            kio__deleteortrashjob_emitspeed_isbase = false;
            KIO__DeleteOrTrashJob::emitSpeed(speed);
            return;
        }
        auto emitspeed_cb = kio__deleteortrashjob_emitspeed_callback;
        if (emitspeed_cb) {
            unsigned long cbval1 = speed;

            emitspeed_cb(this, cbval1);
            return;
        }
        KIO__DeleteOrTrashJob::emitSpeed(speed);
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kio__deleteortrashjob_startelapsedtimer_isbase) {
            kio__deleteortrashjob_startelapsedtimer_isbase = false;
            KIO__DeleteOrTrashJob::startElapsedTimer();
            return;
        }
        auto startelapsedtimer_cb = kio__deleteortrashjob_startelapsedtimer_callback;
        if (startelapsedtimer_cb) {
            startelapsedtimer_cb();
            return;
        }
        KIO__DeleteOrTrashJob::startElapsedTimer();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__deleteortrashjob_sender_isbase) {
            kio__deleteortrashjob_sender_isbase = false;
            return KIO__DeleteOrTrashJob::sender();
        }
        auto sender_cb = kio__deleteortrashjob_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__deleteortrashjob_sendersignalindex_isbase) {
            kio__deleteortrashjob_sendersignalindex_isbase = false;
            return KIO__DeleteOrTrashJob::senderSignalIndex();
        }
        auto sendersignalindex_cb = kio__deleteortrashjob_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KIO__DeleteOrTrashJob::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__deleteortrashjob_receivers_isbase) {
            kio__deleteortrashjob_receivers_isbase = false;
            return KIO__DeleteOrTrashJob::receivers(signal);
        }
        auto receivers_cb = kio__deleteortrashjob_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIO__DeleteOrTrashJob::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__deleteortrashjob_issignalconnected_isbase) {
            kio__deleteortrashjob_issignalconnected_isbase = false;
            return KIO__DeleteOrTrashJob::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kio__deleteortrashjob_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__DeleteOrTrashJob::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KIO__DeleteOrTrashJob_AddSubjob(KIO::DeleteOrTrashJob* self, KJob* job);
    friend bool KIO__DeleteOrTrashJob_SuperAddSubjob(KIO::DeleteOrTrashJob* self, KJob* job);
    friend bool KIO__DeleteOrTrashJob_RemoveSubjob(KIO::DeleteOrTrashJob* self, KJob* job);
    friend bool KIO__DeleteOrTrashJob_SuperRemoveSubjob(KIO::DeleteOrTrashJob* self, KJob* job);
    friend void KIO__DeleteOrTrashJob_SlotInfoMessage(KIO::DeleteOrTrashJob* self, KJob* job, const libqt_string message);
    friend void KIO__DeleteOrTrashJob_SuperSlotInfoMessage(KIO::DeleteOrTrashJob* self, KJob* job, const libqt_string message);
    friend bool KIO__DeleteOrTrashJob_DoKill(KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_SuperDoKill(KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_DoSuspend(KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_SuperDoSuspend(KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_DoResume(KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_SuperDoResume(KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_TimerEvent(KIO::DeleteOrTrashJob* self, QTimerEvent* event);
    friend void KIO__DeleteOrTrashJob_SuperTimerEvent(KIO::DeleteOrTrashJob* self, QTimerEvent* event);
    friend void KIO__DeleteOrTrashJob_ChildEvent(KIO::DeleteOrTrashJob* self, QChildEvent* event);
    friend void KIO__DeleteOrTrashJob_SuperChildEvent(KIO::DeleteOrTrashJob* self, QChildEvent* event);
    friend void KIO__DeleteOrTrashJob_CustomEvent(KIO::DeleteOrTrashJob* self, QEvent* event);
    friend void KIO__DeleteOrTrashJob_SuperCustomEvent(KIO::DeleteOrTrashJob* self, QEvent* event);
    friend void KIO__DeleteOrTrashJob_ConnectNotify(KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
    friend void KIO__DeleteOrTrashJob_SuperConnectNotify(KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
    friend void KIO__DeleteOrTrashJob_DisconnectNotify(KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
    friend void KIO__DeleteOrTrashJob_SuperDisconnectNotify(KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
    friend bool KIO__DeleteOrTrashJob_HasSubjobs(const KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_SuperHasSubjobs(const KIO::DeleteOrTrashJob* self);
    friend libqt_list /* of KJob* */ KIO__DeleteOrTrashJob_Subjobs(const KIO::DeleteOrTrashJob* self);
    friend libqt_list /* of KJob* */ KIO__DeleteOrTrashJob_SuperSubjobs(const KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_ClearSubjobs(KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_SuperClearSubjobs(KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_SetCapabilities(KIO::DeleteOrTrashJob* self, int capabilities);
    friend void KIO__DeleteOrTrashJob_SuperSetCapabilities(KIO::DeleteOrTrashJob* self, int capabilities);
    friend bool KIO__DeleteOrTrashJob_IsFinished(const KIO::DeleteOrTrashJob* self);
    friend bool KIO__DeleteOrTrashJob_SuperIsFinished(const KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_SetError(KIO::DeleteOrTrashJob* self, int errorCode);
    friend void KIO__DeleteOrTrashJob_SuperSetError(KIO::DeleteOrTrashJob* self, int errorCode);
    friend void KIO__DeleteOrTrashJob_SetErrorText(KIO::DeleteOrTrashJob* self, const libqt_string errorText);
    friend void KIO__DeleteOrTrashJob_SuperSetErrorText(KIO::DeleteOrTrashJob* self, const libqt_string errorText);
    friend void KIO__DeleteOrTrashJob_SetProcessedAmount(KIO::DeleteOrTrashJob* self, int unit, unsigned long long amount);
    friend void KIO__DeleteOrTrashJob_SuperSetProcessedAmount(KIO::DeleteOrTrashJob* self, int unit, unsigned long long amount);
    friend void KIO__DeleteOrTrashJob_SetTotalAmount(KIO::DeleteOrTrashJob* self, int unit, unsigned long long amount);
    friend void KIO__DeleteOrTrashJob_SuperSetTotalAmount(KIO::DeleteOrTrashJob* self, int unit, unsigned long long amount);
    friend void KIO__DeleteOrTrashJob_SetProgressUnit(KIO::DeleteOrTrashJob* self, int unit);
    friend void KIO__DeleteOrTrashJob_SuperSetProgressUnit(KIO::DeleteOrTrashJob* self, int unit);
    friend void KIO__DeleteOrTrashJob_SetPercent(KIO::DeleteOrTrashJob* self, unsigned long percentage);
    friend void KIO__DeleteOrTrashJob_SuperSetPercent(KIO::DeleteOrTrashJob* self, unsigned long percentage);
    friend void KIO__DeleteOrTrashJob_EmitResult(KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_SuperEmitResult(KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_EmitPercent(KIO::DeleteOrTrashJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__DeleteOrTrashJob_SuperEmitPercent(KIO::DeleteOrTrashJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__DeleteOrTrashJob_EmitSpeed(KIO::DeleteOrTrashJob* self, unsigned long speed);
    friend void KIO__DeleteOrTrashJob_SuperEmitSpeed(KIO::DeleteOrTrashJob* self, unsigned long speed);
    friend void KIO__DeleteOrTrashJob_StartElapsedTimer(KIO::DeleteOrTrashJob* self);
    friend void KIO__DeleteOrTrashJob_SuperStartElapsedTimer(KIO::DeleteOrTrashJob* self);
    friend QObject* KIO__DeleteOrTrashJob_Sender(const KIO::DeleteOrTrashJob* self);
    friend QObject* KIO__DeleteOrTrashJob_SuperSender(const KIO::DeleteOrTrashJob* self);
    friend int KIO__DeleteOrTrashJob_SenderSignalIndex(const KIO::DeleteOrTrashJob* self);
    friend int KIO__DeleteOrTrashJob_SuperSenderSignalIndex(const KIO::DeleteOrTrashJob* self);
    friend int KIO__DeleteOrTrashJob_Receivers(const KIO::DeleteOrTrashJob* self, const char* signal);
    friend int KIO__DeleteOrTrashJob_SuperReceivers(const KIO::DeleteOrTrashJob* self, const char* signal);
    friend bool KIO__DeleteOrTrashJob_IsSignalConnected(const KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
    friend bool KIO__DeleteOrTrashJob_SuperIsSignalConnected(const KIO::DeleteOrTrashJob* self, const QMetaMethod* signal);
};

#endif
