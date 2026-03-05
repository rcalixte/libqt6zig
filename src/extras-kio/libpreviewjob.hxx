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
    using KIO__PreviewJob_MetaObject_Callback = QMetaObject* (*)();
    using KIO__PreviewJob_Metacast_Callback = void* (*)(KIO__PreviewJob*, const char*);
    using KIO__PreviewJob_Metacall_Callback = int (*)(KIO__PreviewJob*, int, int, void**);
    using KIO__PreviewJob_SlotResult_Callback = void (*)(KIO__PreviewJob*, KJob*);
    using KIO__PreviewJob_Start_Callback = void (*)();
    using KIO__PreviewJob_DoKill_Callback = bool (*)();
    using KIO__PreviewJob_DoSuspend_Callback = bool (*)();
    using KIO__PreviewJob_DoResume_Callback = bool (*)();
    using KIO__PreviewJob_ErrorString_Callback = const char* (*)();
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
    using KIO__PreviewJob_HasSubjobs_Callback = bool (*)();
    using KIO__PreviewJob_Subjobs_Callback = libqt_list /* of KJob* */ (*)();
    using KIO__PreviewJob_ClearSubjobs_Callback = void (*)();
    using KIO__PreviewJob_SetCapabilities_Callback = void (*)(KIO__PreviewJob*, int);
    using KIO__PreviewJob_IsFinished_Callback = bool (*)();
    using KIO__PreviewJob_SetError_Callback = void (*)(KIO__PreviewJob*, int);
    using KIO__PreviewJob_SetErrorText_Callback = void (*)(KIO__PreviewJob*, const char*);
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
    mutable bool kio__previewjob_metaobject_isbase = false;
    mutable bool kio__previewjob_metacast_isbase = false;
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

    // Callback setters
    inline void setKIO__PreviewJob_MetaObject_Callback(KIO__PreviewJob_MetaObject_Callback cb) { kio__previewjob_metaobject_callback = cb; }
    inline void setKIO__PreviewJob_Metacast_Callback(KIO__PreviewJob_Metacast_Callback cb) { kio__previewjob_metacast_callback = cb; }
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
    inline void setKIO__PreviewJob_MetaObject_IsBase(bool value) const { kio__previewjob_metaobject_isbase = value; }
    inline void setKIO__PreviewJob_Metacast_IsBase(bool value) const { kio__previewjob_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kio__previewjob_metaobject_isbase) {
            kio__previewjob_metaobject_isbase = false;
            return KIO__PreviewJob::metaObject();
        }
        auto metaobject_cb = kio__previewjob_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KIO__PreviewJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__previewjob_metacast_isbase) {
            kio__previewjob_metacast_isbase = false;
            return KIO__PreviewJob::qt_metacast(param1);
        }
        auto metacast_cb = kio__previewjob_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__PreviewJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__previewjob_metacall_isbase) {
            kio__previewjob_metacall_isbase = false;
            return KIO__PreviewJob::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kio__previewjob_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__PreviewJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResult(KJob* job) override {
        if (kio__previewjob_slotresult_isbase) {
            kio__previewjob_slotresult_isbase = false;
            KIO__PreviewJob::slotResult(job);
            return;
        }
        auto slotresult_cb = kio__previewjob_slotresult_callback;
        if (slotresult_cb) {
            KJob* cbval1 = job;

            slotresult_cb(this, cbval1);
            return;
        }
        KIO__PreviewJob::slotResult(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__previewjob_start_isbase) {
            kio__previewjob_start_isbase = false;
            KIO__PreviewJob::start();
            return;
        }
        auto start_cb = kio__previewjob_start_callback;
        if (start_cb) {
            start_cb();
            return;
        }
        KIO__PreviewJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__previewjob_dokill_isbase) {
            kio__previewjob_dokill_isbase = false;
            return KIO__PreviewJob::doKill();
        }
        auto dokill_cb = kio__previewjob_dokill_callback;
        if (dokill_cb) {
            bool callback_ret = dokill_cb();
            return callback_ret;
        }
        return KIO__PreviewJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__previewjob_dosuspend_isbase) {
            kio__previewjob_dosuspend_isbase = false;
            return KIO__PreviewJob::doSuspend();
        }
        auto dosuspend_cb = kio__previewjob_dosuspend_callback;
        if (dosuspend_cb) {
            bool callback_ret = dosuspend_cb();
            return callback_ret;
        }
        return KIO__PreviewJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__previewjob_doresume_isbase) {
            kio__previewjob_doresume_isbase = false;
            return KIO__PreviewJob::doResume();
        }
        auto doresume_cb = kio__previewjob_doresume_callback;
        if (doresume_cb) {
            bool callback_ret = doresume_cb();
            return callback_ret;
        }
        return KIO__PreviewJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__previewjob_errorstring_isbase) {
            kio__previewjob_errorstring_isbase = false;
            return KIO__PreviewJob::errorString();
        }
        auto errorstring_cb = kio__previewjob_errorstring_callback;
        if (errorstring_cb) {
            const char* callback_ret = errorstring_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIO__PreviewJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool addSubjob(KJob* job) override {
        if (kio__previewjob_addsubjob_isbase) {
            kio__previewjob_addsubjob_isbase = false;
            return KIO__PreviewJob::addSubjob(job);
        }
        auto addsubjob_cb = kio__previewjob_addsubjob_callback;
        if (addsubjob_cb) {
            KJob* cbval1 = job;

            bool callback_ret = addsubjob_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__PreviewJob::addSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeSubjob(KJob* job) override {
        if (kio__previewjob_removesubjob_isbase) {
            kio__previewjob_removesubjob_isbase = false;
            return KIO__PreviewJob::removeSubjob(job);
        }
        auto removesubjob_cb = kio__previewjob_removesubjob_callback;
        if (removesubjob_cb) {
            KJob* cbval1 = job;

            bool callback_ret = removesubjob_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__PreviewJob::removeSubjob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotInfoMessage(KJob* job, const QString& message) override {
        if (kio__previewjob_slotinfomessage_isbase) {
            kio__previewjob_slotinfomessage_isbase = false;
            KIO__PreviewJob::slotInfoMessage(job, message);
            return;
        }
        auto slotinfomessage_cb = kio__previewjob_slotinfomessage_callback;
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
        KIO__PreviewJob::slotInfoMessage(job, message);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__previewjob_event_isbase) {
            kio__previewjob_event_isbase = false;
            return KIO__PreviewJob::event(event);
        }
        auto event_cb = kio__previewjob_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__PreviewJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__previewjob_eventfilter_isbase) {
            kio__previewjob_eventfilter_isbase = false;
            return KIO__PreviewJob::eventFilter(watched, event);
        }
        auto eventfilter_cb = kio__previewjob_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__PreviewJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__previewjob_timerevent_isbase) {
            kio__previewjob_timerevent_isbase = false;
            KIO__PreviewJob::timerEvent(event);
            return;
        }
        auto timerevent_cb = kio__previewjob_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KIO__PreviewJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__previewjob_childevent_isbase) {
            kio__previewjob_childevent_isbase = false;
            KIO__PreviewJob::childEvent(event);
            return;
        }
        auto childevent_cb = kio__previewjob_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KIO__PreviewJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__previewjob_customevent_isbase) {
            kio__previewjob_customevent_isbase = false;
            KIO__PreviewJob::customEvent(event);
            return;
        }
        auto customevent_cb = kio__previewjob_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KIO__PreviewJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__previewjob_connectnotify_isbase) {
            kio__previewjob_connectnotify_isbase = false;
            KIO__PreviewJob::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kio__previewjob_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KIO__PreviewJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__previewjob_disconnectnotify_isbase) {
            kio__previewjob_disconnectnotify_isbase = false;
            KIO__PreviewJob::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kio__previewjob_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KIO__PreviewJob::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool hasSubjobs() const {
        if (kio__previewjob_hassubjobs_isbase) {
            kio__previewjob_hassubjobs_isbase = false;
            return KIO__PreviewJob::hasSubjobs();
        }
        auto hassubjobs_cb = kio__previewjob_hassubjobs_callback;
        if (hassubjobs_cb) {
            bool callback_ret = hassubjobs_cb();
            return callback_ret;
        }
        return KIO__PreviewJob::hasSubjobs();
    }

    // Virtual method for C ABI access and custom callback
    const QList<KJob*>& subjobs() const {
        if (kio__previewjob_subjobs_isbase) {
            kio__previewjob_subjobs_isbase = false;
            return KIO__PreviewJob::subjobs();
        }
        auto subjobs_cb = kio__previewjob_subjobs_callback;
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
        return KIO__PreviewJob::subjobs();
    }

    // Virtual method for C ABI access and custom callback
    void clearSubjobs() {
        if (kio__previewjob_clearsubjobs_isbase) {
            kio__previewjob_clearsubjobs_isbase = false;
            KIO__PreviewJob::clearSubjobs();
            return;
        }
        auto clearsubjobs_cb = kio__previewjob_clearsubjobs_callback;
        if (clearsubjobs_cb) {
            clearsubjobs_cb();
            return;
        }
        KIO__PreviewJob::clearSubjobs();
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kio__previewjob_setcapabilities_isbase) {
            kio__previewjob_setcapabilities_isbase = false;
            KIO__PreviewJob::setCapabilities(capabilities);
            return;
        }
        auto setcapabilities_cb = kio__previewjob_setcapabilities_callback;
        if (setcapabilities_cb) {
            int cbval1 = static_cast<int>(capabilities);

            setcapabilities_cb(this, cbval1);
            return;
        }
        KIO__PreviewJob::setCapabilities(capabilities);
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kio__previewjob_isfinished_isbase) {
            kio__previewjob_isfinished_isbase = false;
            return KIO__PreviewJob::isFinished();
        }
        auto isfinished_cb = kio__previewjob_isfinished_callback;
        if (isfinished_cb) {
            bool callback_ret = isfinished_cb();
            return callback_ret;
        }
        return KIO__PreviewJob::isFinished();
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kio__previewjob_seterror_isbase) {
            kio__previewjob_seterror_isbase = false;
            KIO__PreviewJob::setError(errorCode);
            return;
        }
        auto seterror_cb = kio__previewjob_seterror_callback;
        if (seterror_cb) {
            int cbval1 = errorCode;

            seterror_cb(this, cbval1);
            return;
        }
        KIO__PreviewJob::setError(errorCode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kio__previewjob_seterrortext_isbase) {
            kio__previewjob_seterrortext_isbase = false;
            KIO__PreviewJob::setErrorText(errorText);
            return;
        }
        auto seterrortext_cb = kio__previewjob_seterrortext_callback;
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
        KIO__PreviewJob::setErrorText(errorText);
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__previewjob_setprocessedamount_isbase) {
            kio__previewjob_setprocessedamount_isbase = false;
            KIO__PreviewJob::setProcessedAmount(unit, amount);
            return;
        }
        auto setprocessedamount_cb = kio__previewjob_setprocessedamount_callback;
        if (setprocessedamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            setprocessedamount_cb(this, cbval1, cbval2);
            return;
        }
        KIO__PreviewJob::setProcessedAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__previewjob_settotalamount_isbase) {
            kio__previewjob_settotalamount_isbase = false;
            KIO__PreviewJob::setTotalAmount(unit, amount);
            return;
        }
        auto settotalamount_cb = kio__previewjob_settotalamount_callback;
        if (settotalamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            settotalamount_cb(this, cbval1, cbval2);
            return;
        }
        KIO__PreviewJob::setTotalAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kio__previewjob_setprogressunit_isbase) {
            kio__previewjob_setprogressunit_isbase = false;
            KIO__PreviewJob::setProgressUnit(unit);
            return;
        }
        auto setprogressunit_cb = kio__previewjob_setprogressunit_callback;
        if (setprogressunit_cb) {
            int cbval1 = static_cast<int>(unit);

            setprogressunit_cb(this, cbval1);
            return;
        }
        KIO__PreviewJob::setProgressUnit(unit);
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kio__previewjob_setpercent_isbase) {
            kio__previewjob_setpercent_isbase = false;
            KIO__PreviewJob::setPercent(percentage);
            return;
        }
        auto setpercent_cb = kio__previewjob_setpercent_callback;
        if (setpercent_cb) {
            unsigned long cbval1 = percentage;

            setpercent_cb(this, cbval1);
            return;
        }
        KIO__PreviewJob::setPercent(percentage);
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kio__previewjob_emitresult_isbase) {
            kio__previewjob_emitresult_isbase = false;
            KIO__PreviewJob::emitResult();
            return;
        }
        auto emitresult_cb = kio__previewjob_emitresult_callback;
        if (emitresult_cb) {
            emitresult_cb();
            return;
        }
        KIO__PreviewJob::emitResult();
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kio__previewjob_emitpercent_isbase) {
            kio__previewjob_emitpercent_isbase = false;
            KIO__PreviewJob::emitPercent(processedAmount, totalAmount);
            return;
        }
        auto emitpercent_cb = kio__previewjob_emitpercent_callback;
        if (emitpercent_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            emitpercent_cb(this, cbval1, cbval2);
            return;
        }
        KIO__PreviewJob::emitPercent(processedAmount, totalAmount);
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kio__previewjob_emitspeed_isbase) {
            kio__previewjob_emitspeed_isbase = false;
            KIO__PreviewJob::emitSpeed(speed);
            return;
        }
        auto emitspeed_cb = kio__previewjob_emitspeed_callback;
        if (emitspeed_cb) {
            unsigned long cbval1 = speed;

            emitspeed_cb(this, cbval1);
            return;
        }
        KIO__PreviewJob::emitSpeed(speed);
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kio__previewjob_startelapsedtimer_isbase) {
            kio__previewjob_startelapsedtimer_isbase = false;
            KIO__PreviewJob::startElapsedTimer();
            return;
        }
        auto startelapsedtimer_cb = kio__previewjob_startelapsedtimer_callback;
        if (startelapsedtimer_cb) {
            startelapsedtimer_cb();
            return;
        }
        KIO__PreviewJob::startElapsedTimer();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__previewjob_sender_isbase) {
            kio__previewjob_sender_isbase = false;
            return KIO__PreviewJob::sender();
        }
        auto sender_cb = kio__previewjob_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KIO__PreviewJob::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__previewjob_sendersignalindex_isbase) {
            kio__previewjob_sendersignalindex_isbase = false;
            return KIO__PreviewJob::senderSignalIndex();
        }
        auto sendersignalindex_cb = kio__previewjob_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KIO__PreviewJob::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__previewjob_receivers_isbase) {
            kio__previewjob_receivers_isbase = false;
            return KIO__PreviewJob::receivers(signal);
        }
        auto receivers_cb = kio__previewjob_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIO__PreviewJob::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__previewjob_issignalconnected_isbase) {
            kio__previewjob_issignalconnected_isbase = false;
            return KIO__PreviewJob::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kio__previewjob_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__PreviewJob::isSignalConnected(signal);
    }

    // Friend functions
    friend void KIO__PreviewJob_SlotResult(KIO::PreviewJob* self, KJob* job);
    friend void KIO__PreviewJob_SuperSlotResult(KIO::PreviewJob* self, KJob* job);
    friend bool KIO__PreviewJob_DoKill(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_SuperDoKill(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_DoSuspend(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_SuperDoSuspend(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_DoResume(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_SuperDoResume(KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_AddSubjob(KIO::PreviewJob* self, KJob* job);
    friend bool KIO__PreviewJob_SuperAddSubjob(KIO::PreviewJob* self, KJob* job);
    friend bool KIO__PreviewJob_RemoveSubjob(KIO::PreviewJob* self, KJob* job);
    friend bool KIO__PreviewJob_SuperRemoveSubjob(KIO::PreviewJob* self, KJob* job);
    friend void KIO__PreviewJob_SlotInfoMessage(KIO::PreviewJob* self, KJob* job, const libqt_string message);
    friend void KIO__PreviewJob_SuperSlotInfoMessage(KIO::PreviewJob* self, KJob* job, const libqt_string message);
    friend void KIO__PreviewJob_TimerEvent(KIO::PreviewJob* self, QTimerEvent* event);
    friend void KIO__PreviewJob_SuperTimerEvent(KIO::PreviewJob* self, QTimerEvent* event);
    friend void KIO__PreviewJob_ChildEvent(KIO::PreviewJob* self, QChildEvent* event);
    friend void KIO__PreviewJob_SuperChildEvent(KIO::PreviewJob* self, QChildEvent* event);
    friend void KIO__PreviewJob_CustomEvent(KIO::PreviewJob* self, QEvent* event);
    friend void KIO__PreviewJob_SuperCustomEvent(KIO::PreviewJob* self, QEvent* event);
    friend void KIO__PreviewJob_ConnectNotify(KIO::PreviewJob* self, const QMetaMethod* signal);
    friend void KIO__PreviewJob_SuperConnectNotify(KIO::PreviewJob* self, const QMetaMethod* signal);
    friend void KIO__PreviewJob_DisconnectNotify(KIO::PreviewJob* self, const QMetaMethod* signal);
    friend void KIO__PreviewJob_SuperDisconnectNotify(KIO::PreviewJob* self, const QMetaMethod* signal);
    friend bool KIO__PreviewJob_HasSubjobs(const KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_SuperHasSubjobs(const KIO::PreviewJob* self);
    friend libqt_list /* of KJob* */ KIO__PreviewJob_Subjobs(const KIO::PreviewJob* self);
    friend libqt_list /* of KJob* */ KIO__PreviewJob_SuperSubjobs(const KIO::PreviewJob* self);
    friend void KIO__PreviewJob_ClearSubjobs(KIO::PreviewJob* self);
    friend void KIO__PreviewJob_SuperClearSubjobs(KIO::PreviewJob* self);
    friend void KIO__PreviewJob_SetCapabilities(KIO::PreviewJob* self, int capabilities);
    friend void KIO__PreviewJob_SuperSetCapabilities(KIO::PreviewJob* self, int capabilities);
    friend bool KIO__PreviewJob_IsFinished(const KIO::PreviewJob* self);
    friend bool KIO__PreviewJob_SuperIsFinished(const KIO::PreviewJob* self);
    friend void KIO__PreviewJob_SetError(KIO::PreviewJob* self, int errorCode);
    friend void KIO__PreviewJob_SuperSetError(KIO::PreviewJob* self, int errorCode);
    friend void KIO__PreviewJob_SetErrorText(KIO::PreviewJob* self, const libqt_string errorText);
    friend void KIO__PreviewJob_SuperSetErrorText(KIO::PreviewJob* self, const libqt_string errorText);
    friend void KIO__PreviewJob_SetProcessedAmount(KIO::PreviewJob* self, int unit, unsigned long long amount);
    friend void KIO__PreviewJob_SuperSetProcessedAmount(KIO::PreviewJob* self, int unit, unsigned long long amount);
    friend void KIO__PreviewJob_SetTotalAmount(KIO::PreviewJob* self, int unit, unsigned long long amount);
    friend void KIO__PreviewJob_SuperSetTotalAmount(KIO::PreviewJob* self, int unit, unsigned long long amount);
    friend void KIO__PreviewJob_SetProgressUnit(KIO::PreviewJob* self, int unit);
    friend void KIO__PreviewJob_SuperSetProgressUnit(KIO::PreviewJob* self, int unit);
    friend void KIO__PreviewJob_SetPercent(KIO::PreviewJob* self, unsigned long percentage);
    friend void KIO__PreviewJob_SuperSetPercent(KIO::PreviewJob* self, unsigned long percentage);
    friend void KIO__PreviewJob_EmitResult(KIO::PreviewJob* self);
    friend void KIO__PreviewJob_SuperEmitResult(KIO::PreviewJob* self);
    friend void KIO__PreviewJob_EmitPercent(KIO::PreviewJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__PreviewJob_SuperEmitPercent(KIO::PreviewJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__PreviewJob_EmitSpeed(KIO::PreviewJob* self, unsigned long speed);
    friend void KIO__PreviewJob_SuperEmitSpeed(KIO::PreviewJob* self, unsigned long speed);
    friend void KIO__PreviewJob_StartElapsedTimer(KIO::PreviewJob* self);
    friend void KIO__PreviewJob_SuperStartElapsedTimer(KIO::PreviewJob* self);
    friend QObject* KIO__PreviewJob_Sender(const KIO::PreviewJob* self);
    friend QObject* KIO__PreviewJob_SuperSender(const KIO::PreviewJob* self);
    friend int KIO__PreviewJob_SenderSignalIndex(const KIO::PreviewJob* self);
    friend int KIO__PreviewJob_SuperSenderSignalIndex(const KIO::PreviewJob* self);
    friend int KIO__PreviewJob_Receivers(const KIO::PreviewJob* self, const char* signal);
    friend int KIO__PreviewJob_SuperReceivers(const KIO::PreviewJob* self, const char* signal);
    friend bool KIO__PreviewJob_IsSignalConnected(const KIO::PreviewJob* self, const QMetaMethod* signal);
    friend bool KIO__PreviewJob_SuperIsSignalConnected(const KIO::PreviewJob* self, const QMetaMethod* signal);
};

#endif
