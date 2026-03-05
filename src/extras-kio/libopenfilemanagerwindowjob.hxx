#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALOPENFILEMANAGERWINDOWJOB_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALOPENFILEMANAGERWINDOWJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::OpenFileManagerWindowJob so that we can call protected methods
class VirtualKIOOpenFileManagerWindowJob final : public KIO::OpenFileManagerWindowJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOOpenFileManagerWindowJob = true;

    // Virtual class public types (including callbacks)
    using KIO__OpenFileManagerWindowJob_MetaObject_Callback = QMetaObject* (*)();
    using KIO__OpenFileManagerWindowJob_Metacast_Callback = void* (*)(KIO__OpenFileManagerWindowJob*, const char*);
    using KIO__OpenFileManagerWindowJob_Metacall_Callback = int (*)(KIO__OpenFileManagerWindowJob*, int, int, void**);
    using KIO__OpenFileManagerWindowJob_Start_Callback = void (*)();
    using KIO__OpenFileManagerWindowJob_DoKill_Callback = bool (*)();
    using KIO__OpenFileManagerWindowJob_DoSuspend_Callback = bool (*)();
    using KIO__OpenFileManagerWindowJob_DoResume_Callback = bool (*)();
    using KIO__OpenFileManagerWindowJob_ErrorString_Callback = const char* (*)();
    using KIO__OpenFileManagerWindowJob_Event_Callback = bool (*)(KIO__OpenFileManagerWindowJob*, QEvent*);
    using KIO__OpenFileManagerWindowJob_EventFilter_Callback = bool (*)(KIO__OpenFileManagerWindowJob*, QObject*, QEvent*);
    using KIO__OpenFileManagerWindowJob_TimerEvent_Callback = void (*)(KIO__OpenFileManagerWindowJob*, QTimerEvent*);
    using KIO__OpenFileManagerWindowJob_ChildEvent_Callback = void (*)(KIO__OpenFileManagerWindowJob*, QChildEvent*);
    using KIO__OpenFileManagerWindowJob_CustomEvent_Callback = void (*)(KIO__OpenFileManagerWindowJob*, QEvent*);
    using KIO__OpenFileManagerWindowJob_ConnectNotify_Callback = void (*)(KIO__OpenFileManagerWindowJob*, QMetaMethod*);
    using KIO__OpenFileManagerWindowJob_DisconnectNotify_Callback = void (*)(KIO__OpenFileManagerWindowJob*, QMetaMethod*);
    using KIO__OpenFileManagerWindowJob_SetCapabilities_Callback = void (*)(KIO__OpenFileManagerWindowJob*, int);
    using KIO__OpenFileManagerWindowJob_IsFinished_Callback = bool (*)();
    using KIO__OpenFileManagerWindowJob_SetError_Callback = void (*)(KIO__OpenFileManagerWindowJob*, int);
    using KIO__OpenFileManagerWindowJob_SetErrorText_Callback = void (*)(KIO__OpenFileManagerWindowJob*, const char*);
    using KIO__OpenFileManagerWindowJob_SetProcessedAmount_Callback = void (*)(KIO__OpenFileManagerWindowJob*, int, unsigned long long);
    using KIO__OpenFileManagerWindowJob_SetTotalAmount_Callback = void (*)(KIO__OpenFileManagerWindowJob*, int, unsigned long long);
    using KIO__OpenFileManagerWindowJob_SetProgressUnit_Callback = void (*)(KIO__OpenFileManagerWindowJob*, int);
    using KIO__OpenFileManagerWindowJob_SetPercent_Callback = void (*)(KIO__OpenFileManagerWindowJob*, unsigned long);
    using KIO__OpenFileManagerWindowJob_EmitResult_Callback = void (*)();
    using KIO__OpenFileManagerWindowJob_EmitPercent_Callback = void (*)(KIO__OpenFileManagerWindowJob*, unsigned long long, unsigned long long);
    using KIO__OpenFileManagerWindowJob_EmitSpeed_Callback = void (*)(KIO__OpenFileManagerWindowJob*, unsigned long);
    using KIO__OpenFileManagerWindowJob_StartElapsedTimer_Callback = void (*)();
    using KIO__OpenFileManagerWindowJob_Sender_Callback = QObject* (*)();
    using KIO__OpenFileManagerWindowJob_SenderSignalIndex_Callback = int (*)();
    using KIO__OpenFileManagerWindowJob_Receivers_Callback = int (*)(const KIO__OpenFileManagerWindowJob*, const char*);
    using KIO__OpenFileManagerWindowJob_IsSignalConnected_Callback = bool (*)(const KIO__OpenFileManagerWindowJob*, QMetaMethod*);

  protected:
    // Instance callback storage
    KIO__OpenFileManagerWindowJob_MetaObject_Callback kio__openfilemanagerwindowjob_metaobject_callback = nullptr;
    KIO__OpenFileManagerWindowJob_Metacast_Callback kio__openfilemanagerwindowjob_metacast_callback = nullptr;
    KIO__OpenFileManagerWindowJob_Metacall_Callback kio__openfilemanagerwindowjob_metacall_callback = nullptr;
    KIO__OpenFileManagerWindowJob_Start_Callback kio__openfilemanagerwindowjob_start_callback = nullptr;
    KIO__OpenFileManagerWindowJob_DoKill_Callback kio__openfilemanagerwindowjob_dokill_callback = nullptr;
    KIO__OpenFileManagerWindowJob_DoSuspend_Callback kio__openfilemanagerwindowjob_dosuspend_callback = nullptr;
    KIO__OpenFileManagerWindowJob_DoResume_Callback kio__openfilemanagerwindowjob_doresume_callback = nullptr;
    KIO__OpenFileManagerWindowJob_ErrorString_Callback kio__openfilemanagerwindowjob_errorstring_callback = nullptr;
    KIO__OpenFileManagerWindowJob_Event_Callback kio__openfilemanagerwindowjob_event_callback = nullptr;
    KIO__OpenFileManagerWindowJob_EventFilter_Callback kio__openfilemanagerwindowjob_eventfilter_callback = nullptr;
    KIO__OpenFileManagerWindowJob_TimerEvent_Callback kio__openfilemanagerwindowjob_timerevent_callback = nullptr;
    KIO__OpenFileManagerWindowJob_ChildEvent_Callback kio__openfilemanagerwindowjob_childevent_callback = nullptr;
    KIO__OpenFileManagerWindowJob_CustomEvent_Callback kio__openfilemanagerwindowjob_customevent_callback = nullptr;
    KIO__OpenFileManagerWindowJob_ConnectNotify_Callback kio__openfilemanagerwindowjob_connectnotify_callback = nullptr;
    KIO__OpenFileManagerWindowJob_DisconnectNotify_Callback kio__openfilemanagerwindowjob_disconnectnotify_callback = nullptr;
    KIO__OpenFileManagerWindowJob_SetCapabilities_Callback kio__openfilemanagerwindowjob_setcapabilities_callback = nullptr;
    KIO__OpenFileManagerWindowJob_IsFinished_Callback kio__openfilemanagerwindowjob_isfinished_callback = nullptr;
    KIO__OpenFileManagerWindowJob_SetError_Callback kio__openfilemanagerwindowjob_seterror_callback = nullptr;
    KIO__OpenFileManagerWindowJob_SetErrorText_Callback kio__openfilemanagerwindowjob_seterrortext_callback = nullptr;
    KIO__OpenFileManagerWindowJob_SetProcessedAmount_Callback kio__openfilemanagerwindowjob_setprocessedamount_callback = nullptr;
    KIO__OpenFileManagerWindowJob_SetTotalAmount_Callback kio__openfilemanagerwindowjob_settotalamount_callback = nullptr;
    KIO__OpenFileManagerWindowJob_SetProgressUnit_Callback kio__openfilemanagerwindowjob_setprogressunit_callback = nullptr;
    KIO__OpenFileManagerWindowJob_SetPercent_Callback kio__openfilemanagerwindowjob_setpercent_callback = nullptr;
    KIO__OpenFileManagerWindowJob_EmitResult_Callback kio__openfilemanagerwindowjob_emitresult_callback = nullptr;
    KIO__OpenFileManagerWindowJob_EmitPercent_Callback kio__openfilemanagerwindowjob_emitpercent_callback = nullptr;
    KIO__OpenFileManagerWindowJob_EmitSpeed_Callback kio__openfilemanagerwindowjob_emitspeed_callback = nullptr;
    KIO__OpenFileManagerWindowJob_StartElapsedTimer_Callback kio__openfilemanagerwindowjob_startelapsedtimer_callback = nullptr;
    KIO__OpenFileManagerWindowJob_Sender_Callback kio__openfilemanagerwindowjob_sender_callback = nullptr;
    KIO__OpenFileManagerWindowJob_SenderSignalIndex_Callback kio__openfilemanagerwindowjob_sendersignalindex_callback = nullptr;
    KIO__OpenFileManagerWindowJob_Receivers_Callback kio__openfilemanagerwindowjob_receivers_callback = nullptr;
    KIO__OpenFileManagerWindowJob_IsSignalConnected_Callback kio__openfilemanagerwindowjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__openfilemanagerwindowjob_metaobject_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_metacast_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_metacall_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_start_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_dokill_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_dosuspend_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_doresume_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_errorstring_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_event_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_eventfilter_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_timerevent_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_childevent_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_customevent_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_connectnotify_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_disconnectnotify_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_setcapabilities_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_isfinished_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_seterror_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_seterrortext_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_setprocessedamount_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_settotalamount_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_setprogressunit_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_setpercent_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_emitresult_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_emitpercent_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_emitspeed_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_startelapsedtimer_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_sender_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_sendersignalindex_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_receivers_isbase = false;
    mutable bool kio__openfilemanagerwindowjob_issignalconnected_isbase = false;

  public:
    VirtualKIOOpenFileManagerWindowJob() : KIO::OpenFileManagerWindowJob() {};
    VirtualKIOOpenFileManagerWindowJob(QObject* parent) : KIO::OpenFileManagerWindowJob(parent) {};

    // Callback setters
    inline void setKIO__OpenFileManagerWindowJob_MetaObject_Callback(KIO__OpenFileManagerWindowJob_MetaObject_Callback cb) { kio__openfilemanagerwindowjob_metaobject_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_Metacast_Callback(KIO__OpenFileManagerWindowJob_Metacast_Callback cb) { kio__openfilemanagerwindowjob_metacast_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_Metacall_Callback(KIO__OpenFileManagerWindowJob_Metacall_Callback cb) { kio__openfilemanagerwindowjob_metacall_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_Start_Callback(KIO__OpenFileManagerWindowJob_Start_Callback cb) { kio__openfilemanagerwindowjob_start_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_DoKill_Callback(KIO__OpenFileManagerWindowJob_DoKill_Callback cb) { kio__openfilemanagerwindowjob_dokill_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_DoSuspend_Callback(KIO__OpenFileManagerWindowJob_DoSuspend_Callback cb) { kio__openfilemanagerwindowjob_dosuspend_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_DoResume_Callback(KIO__OpenFileManagerWindowJob_DoResume_Callback cb) { kio__openfilemanagerwindowjob_doresume_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_ErrorString_Callback(KIO__OpenFileManagerWindowJob_ErrorString_Callback cb) { kio__openfilemanagerwindowjob_errorstring_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_Event_Callback(KIO__OpenFileManagerWindowJob_Event_Callback cb) { kio__openfilemanagerwindowjob_event_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_EventFilter_Callback(KIO__OpenFileManagerWindowJob_EventFilter_Callback cb) { kio__openfilemanagerwindowjob_eventfilter_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_TimerEvent_Callback(KIO__OpenFileManagerWindowJob_TimerEvent_Callback cb) { kio__openfilemanagerwindowjob_timerevent_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_ChildEvent_Callback(KIO__OpenFileManagerWindowJob_ChildEvent_Callback cb) { kio__openfilemanagerwindowjob_childevent_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_CustomEvent_Callback(KIO__OpenFileManagerWindowJob_CustomEvent_Callback cb) { kio__openfilemanagerwindowjob_customevent_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_ConnectNotify_Callback(KIO__OpenFileManagerWindowJob_ConnectNotify_Callback cb) { kio__openfilemanagerwindowjob_connectnotify_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_DisconnectNotify_Callback(KIO__OpenFileManagerWindowJob_DisconnectNotify_Callback cb) { kio__openfilemanagerwindowjob_disconnectnotify_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_SetCapabilities_Callback(KIO__OpenFileManagerWindowJob_SetCapabilities_Callback cb) { kio__openfilemanagerwindowjob_setcapabilities_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_IsFinished_Callback(KIO__OpenFileManagerWindowJob_IsFinished_Callback cb) { kio__openfilemanagerwindowjob_isfinished_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_SetError_Callback(KIO__OpenFileManagerWindowJob_SetError_Callback cb) { kio__openfilemanagerwindowjob_seterror_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_SetErrorText_Callback(KIO__OpenFileManagerWindowJob_SetErrorText_Callback cb) { kio__openfilemanagerwindowjob_seterrortext_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_SetProcessedAmount_Callback(KIO__OpenFileManagerWindowJob_SetProcessedAmount_Callback cb) { kio__openfilemanagerwindowjob_setprocessedamount_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_SetTotalAmount_Callback(KIO__OpenFileManagerWindowJob_SetTotalAmount_Callback cb) { kio__openfilemanagerwindowjob_settotalamount_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_SetProgressUnit_Callback(KIO__OpenFileManagerWindowJob_SetProgressUnit_Callback cb) { kio__openfilemanagerwindowjob_setprogressunit_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_SetPercent_Callback(KIO__OpenFileManagerWindowJob_SetPercent_Callback cb) { kio__openfilemanagerwindowjob_setpercent_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_EmitResult_Callback(KIO__OpenFileManagerWindowJob_EmitResult_Callback cb) { kio__openfilemanagerwindowjob_emitresult_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_EmitPercent_Callback(KIO__OpenFileManagerWindowJob_EmitPercent_Callback cb) { kio__openfilemanagerwindowjob_emitpercent_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_EmitSpeed_Callback(KIO__OpenFileManagerWindowJob_EmitSpeed_Callback cb) { kio__openfilemanagerwindowjob_emitspeed_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_StartElapsedTimer_Callback(KIO__OpenFileManagerWindowJob_StartElapsedTimer_Callback cb) { kio__openfilemanagerwindowjob_startelapsedtimer_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_Sender_Callback(KIO__OpenFileManagerWindowJob_Sender_Callback cb) { kio__openfilemanagerwindowjob_sender_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_SenderSignalIndex_Callback(KIO__OpenFileManagerWindowJob_SenderSignalIndex_Callback cb) { kio__openfilemanagerwindowjob_sendersignalindex_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_Receivers_Callback(KIO__OpenFileManagerWindowJob_Receivers_Callback cb) { kio__openfilemanagerwindowjob_receivers_callback = cb; }
    inline void setKIO__OpenFileManagerWindowJob_IsSignalConnected_Callback(KIO__OpenFileManagerWindowJob_IsSignalConnected_Callback cb) { kio__openfilemanagerwindowjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__OpenFileManagerWindowJob_MetaObject_IsBase(bool value) const { kio__openfilemanagerwindowjob_metaobject_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_Metacast_IsBase(bool value) const { kio__openfilemanagerwindowjob_metacast_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_Metacall_IsBase(bool value) const { kio__openfilemanagerwindowjob_metacall_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_Start_IsBase(bool value) const { kio__openfilemanagerwindowjob_start_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_DoKill_IsBase(bool value) const { kio__openfilemanagerwindowjob_dokill_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_DoSuspend_IsBase(bool value) const { kio__openfilemanagerwindowjob_dosuspend_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_DoResume_IsBase(bool value) const { kio__openfilemanagerwindowjob_doresume_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_ErrorString_IsBase(bool value) const { kio__openfilemanagerwindowjob_errorstring_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_Event_IsBase(bool value) const { kio__openfilemanagerwindowjob_event_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_EventFilter_IsBase(bool value) const { kio__openfilemanagerwindowjob_eventfilter_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_TimerEvent_IsBase(bool value) const { kio__openfilemanagerwindowjob_timerevent_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_ChildEvent_IsBase(bool value) const { kio__openfilemanagerwindowjob_childevent_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_CustomEvent_IsBase(bool value) const { kio__openfilemanagerwindowjob_customevent_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_ConnectNotify_IsBase(bool value) const { kio__openfilemanagerwindowjob_connectnotify_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_DisconnectNotify_IsBase(bool value) const { kio__openfilemanagerwindowjob_disconnectnotify_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_SetCapabilities_IsBase(bool value) const { kio__openfilemanagerwindowjob_setcapabilities_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_IsFinished_IsBase(bool value) const { kio__openfilemanagerwindowjob_isfinished_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_SetError_IsBase(bool value) const { kio__openfilemanagerwindowjob_seterror_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_SetErrorText_IsBase(bool value) const { kio__openfilemanagerwindowjob_seterrortext_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_SetProcessedAmount_IsBase(bool value) const { kio__openfilemanagerwindowjob_setprocessedamount_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_SetTotalAmount_IsBase(bool value) const { kio__openfilemanagerwindowjob_settotalamount_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_SetProgressUnit_IsBase(bool value) const { kio__openfilemanagerwindowjob_setprogressunit_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_SetPercent_IsBase(bool value) const { kio__openfilemanagerwindowjob_setpercent_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_EmitResult_IsBase(bool value) const { kio__openfilemanagerwindowjob_emitresult_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_EmitPercent_IsBase(bool value) const { kio__openfilemanagerwindowjob_emitpercent_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_EmitSpeed_IsBase(bool value) const { kio__openfilemanagerwindowjob_emitspeed_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_StartElapsedTimer_IsBase(bool value) const { kio__openfilemanagerwindowjob_startelapsedtimer_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_Sender_IsBase(bool value) const { kio__openfilemanagerwindowjob_sender_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_SenderSignalIndex_IsBase(bool value) const { kio__openfilemanagerwindowjob_sendersignalindex_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_Receivers_IsBase(bool value) const { kio__openfilemanagerwindowjob_receivers_isbase = value; }
    inline void setKIO__OpenFileManagerWindowJob_IsSignalConnected_IsBase(bool value) const { kio__openfilemanagerwindowjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__openfilemanagerwindowjob_metaobject_isbase) {
            kio__openfilemanagerwindowjob_metaobject_isbase = false;
            return KIO__OpenFileManagerWindowJob::metaObject();
        }
        auto metaobject_cb = kio__openfilemanagerwindowjob_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KIO__OpenFileManagerWindowJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__openfilemanagerwindowjob_metacast_isbase) {
            kio__openfilemanagerwindowjob_metacast_isbase = false;
            return KIO__OpenFileManagerWindowJob::qt_metacast(param1);
        }
        auto metacast_cb = kio__openfilemanagerwindowjob_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__OpenFileManagerWindowJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__openfilemanagerwindowjob_metacall_isbase) {
            kio__openfilemanagerwindowjob_metacall_isbase = false;
            return KIO__OpenFileManagerWindowJob::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kio__openfilemanagerwindowjob_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__OpenFileManagerWindowJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__openfilemanagerwindowjob_start_isbase) {
            kio__openfilemanagerwindowjob_start_isbase = false;
            KIO__OpenFileManagerWindowJob::start();
            return;
        }
        auto start_cb = kio__openfilemanagerwindowjob_start_callback;
        if (start_cb) {
            start_cb();
            return;
        }
        KIO__OpenFileManagerWindowJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__openfilemanagerwindowjob_dokill_isbase) {
            kio__openfilemanagerwindowjob_dokill_isbase = false;
            return KIO__OpenFileManagerWindowJob::doKill();
        }
        auto dokill_cb = kio__openfilemanagerwindowjob_dokill_callback;
        if (dokill_cb) {
            bool callback_ret = dokill_cb();
            return callback_ret;
        }
        return KIO__OpenFileManagerWindowJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__openfilemanagerwindowjob_dosuspend_isbase) {
            kio__openfilemanagerwindowjob_dosuspend_isbase = false;
            return KIO__OpenFileManagerWindowJob::doSuspend();
        }
        auto dosuspend_cb = kio__openfilemanagerwindowjob_dosuspend_callback;
        if (dosuspend_cb) {
            bool callback_ret = dosuspend_cb();
            return callback_ret;
        }
        return KIO__OpenFileManagerWindowJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__openfilemanagerwindowjob_doresume_isbase) {
            kio__openfilemanagerwindowjob_doresume_isbase = false;
            return KIO__OpenFileManagerWindowJob::doResume();
        }
        auto doresume_cb = kio__openfilemanagerwindowjob_doresume_callback;
        if (doresume_cb) {
            bool callback_ret = doresume_cb();
            return callback_ret;
        }
        return KIO__OpenFileManagerWindowJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__openfilemanagerwindowjob_errorstring_isbase) {
            kio__openfilemanagerwindowjob_errorstring_isbase = false;
            return KIO__OpenFileManagerWindowJob::errorString();
        }
        auto errorstring_cb = kio__openfilemanagerwindowjob_errorstring_callback;
        if (errorstring_cb) {
            const char* callback_ret = errorstring_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIO__OpenFileManagerWindowJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__openfilemanagerwindowjob_event_isbase) {
            kio__openfilemanagerwindowjob_event_isbase = false;
            return KIO__OpenFileManagerWindowJob::event(event);
        }
        auto event_cb = kio__openfilemanagerwindowjob_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__OpenFileManagerWindowJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__openfilemanagerwindowjob_eventfilter_isbase) {
            kio__openfilemanagerwindowjob_eventfilter_isbase = false;
            return KIO__OpenFileManagerWindowJob::eventFilter(watched, event);
        }
        auto eventfilter_cb = kio__openfilemanagerwindowjob_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__OpenFileManagerWindowJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__openfilemanagerwindowjob_timerevent_isbase) {
            kio__openfilemanagerwindowjob_timerevent_isbase = false;
            KIO__OpenFileManagerWindowJob::timerEvent(event);
            return;
        }
        auto timerevent_cb = kio__openfilemanagerwindowjob_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KIO__OpenFileManagerWindowJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__openfilemanagerwindowjob_childevent_isbase) {
            kio__openfilemanagerwindowjob_childevent_isbase = false;
            KIO__OpenFileManagerWindowJob::childEvent(event);
            return;
        }
        auto childevent_cb = kio__openfilemanagerwindowjob_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KIO__OpenFileManagerWindowJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__openfilemanagerwindowjob_customevent_isbase) {
            kio__openfilemanagerwindowjob_customevent_isbase = false;
            KIO__OpenFileManagerWindowJob::customEvent(event);
            return;
        }
        auto customevent_cb = kio__openfilemanagerwindowjob_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KIO__OpenFileManagerWindowJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__openfilemanagerwindowjob_connectnotify_isbase) {
            kio__openfilemanagerwindowjob_connectnotify_isbase = false;
            KIO__OpenFileManagerWindowJob::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kio__openfilemanagerwindowjob_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KIO__OpenFileManagerWindowJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__openfilemanagerwindowjob_disconnectnotify_isbase) {
            kio__openfilemanagerwindowjob_disconnectnotify_isbase = false;
            KIO__OpenFileManagerWindowJob::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kio__openfilemanagerwindowjob_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KIO__OpenFileManagerWindowJob::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kio__openfilemanagerwindowjob_setcapabilities_isbase) {
            kio__openfilemanagerwindowjob_setcapabilities_isbase = false;
            KIO__OpenFileManagerWindowJob::setCapabilities(capabilities);
            return;
        }
        auto setcapabilities_cb = kio__openfilemanagerwindowjob_setcapabilities_callback;
        if (setcapabilities_cb) {
            int cbval1 = static_cast<int>(capabilities);

            setcapabilities_cb(this, cbval1);
            return;
        }
        KIO__OpenFileManagerWindowJob::setCapabilities(capabilities);
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kio__openfilemanagerwindowjob_isfinished_isbase) {
            kio__openfilemanagerwindowjob_isfinished_isbase = false;
            return KIO__OpenFileManagerWindowJob::isFinished();
        }
        auto isfinished_cb = kio__openfilemanagerwindowjob_isfinished_callback;
        if (isfinished_cb) {
            bool callback_ret = isfinished_cb();
            return callback_ret;
        }
        return KIO__OpenFileManagerWindowJob::isFinished();
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kio__openfilemanagerwindowjob_seterror_isbase) {
            kio__openfilemanagerwindowjob_seterror_isbase = false;
            KIO__OpenFileManagerWindowJob::setError(errorCode);
            return;
        }
        auto seterror_cb = kio__openfilemanagerwindowjob_seterror_callback;
        if (seterror_cb) {
            int cbval1 = errorCode;

            seterror_cb(this, cbval1);
            return;
        }
        KIO__OpenFileManagerWindowJob::setError(errorCode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kio__openfilemanagerwindowjob_seterrortext_isbase) {
            kio__openfilemanagerwindowjob_seterrortext_isbase = false;
            KIO__OpenFileManagerWindowJob::setErrorText(errorText);
            return;
        }
        auto seterrortext_cb = kio__openfilemanagerwindowjob_seterrortext_callback;
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
        KIO__OpenFileManagerWindowJob::setErrorText(errorText);
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__openfilemanagerwindowjob_setprocessedamount_isbase) {
            kio__openfilemanagerwindowjob_setprocessedamount_isbase = false;
            KIO__OpenFileManagerWindowJob::setProcessedAmount(unit, amount);
            return;
        }
        auto setprocessedamount_cb = kio__openfilemanagerwindowjob_setprocessedamount_callback;
        if (setprocessedamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            setprocessedamount_cb(this, cbval1, cbval2);
            return;
        }
        KIO__OpenFileManagerWindowJob::setProcessedAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__openfilemanagerwindowjob_settotalamount_isbase) {
            kio__openfilemanagerwindowjob_settotalamount_isbase = false;
            KIO__OpenFileManagerWindowJob::setTotalAmount(unit, amount);
            return;
        }
        auto settotalamount_cb = kio__openfilemanagerwindowjob_settotalamount_callback;
        if (settotalamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            settotalamount_cb(this, cbval1, cbval2);
            return;
        }
        KIO__OpenFileManagerWindowJob::setTotalAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kio__openfilemanagerwindowjob_setprogressunit_isbase) {
            kio__openfilemanagerwindowjob_setprogressunit_isbase = false;
            KIO__OpenFileManagerWindowJob::setProgressUnit(unit);
            return;
        }
        auto setprogressunit_cb = kio__openfilemanagerwindowjob_setprogressunit_callback;
        if (setprogressunit_cb) {
            int cbval1 = static_cast<int>(unit);

            setprogressunit_cb(this, cbval1);
            return;
        }
        KIO__OpenFileManagerWindowJob::setProgressUnit(unit);
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kio__openfilemanagerwindowjob_setpercent_isbase) {
            kio__openfilemanagerwindowjob_setpercent_isbase = false;
            KIO__OpenFileManagerWindowJob::setPercent(percentage);
            return;
        }
        auto setpercent_cb = kio__openfilemanagerwindowjob_setpercent_callback;
        if (setpercent_cb) {
            unsigned long cbval1 = percentage;

            setpercent_cb(this, cbval1);
            return;
        }
        KIO__OpenFileManagerWindowJob::setPercent(percentage);
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kio__openfilemanagerwindowjob_emitresult_isbase) {
            kio__openfilemanagerwindowjob_emitresult_isbase = false;
            KIO__OpenFileManagerWindowJob::emitResult();
            return;
        }
        auto emitresult_cb = kio__openfilemanagerwindowjob_emitresult_callback;
        if (emitresult_cb) {
            emitresult_cb();
            return;
        }
        KIO__OpenFileManagerWindowJob::emitResult();
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kio__openfilemanagerwindowjob_emitpercent_isbase) {
            kio__openfilemanagerwindowjob_emitpercent_isbase = false;
            KIO__OpenFileManagerWindowJob::emitPercent(processedAmount, totalAmount);
            return;
        }
        auto emitpercent_cb = kio__openfilemanagerwindowjob_emitpercent_callback;
        if (emitpercent_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            emitpercent_cb(this, cbval1, cbval2);
            return;
        }
        KIO__OpenFileManagerWindowJob::emitPercent(processedAmount, totalAmount);
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kio__openfilemanagerwindowjob_emitspeed_isbase) {
            kio__openfilemanagerwindowjob_emitspeed_isbase = false;
            KIO__OpenFileManagerWindowJob::emitSpeed(speed);
            return;
        }
        auto emitspeed_cb = kio__openfilemanagerwindowjob_emitspeed_callback;
        if (emitspeed_cb) {
            unsigned long cbval1 = speed;

            emitspeed_cb(this, cbval1);
            return;
        }
        KIO__OpenFileManagerWindowJob::emitSpeed(speed);
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kio__openfilemanagerwindowjob_startelapsedtimer_isbase) {
            kio__openfilemanagerwindowjob_startelapsedtimer_isbase = false;
            KIO__OpenFileManagerWindowJob::startElapsedTimer();
            return;
        }
        auto startelapsedtimer_cb = kio__openfilemanagerwindowjob_startelapsedtimer_callback;
        if (startelapsedtimer_cb) {
            startelapsedtimer_cb();
            return;
        }
        KIO__OpenFileManagerWindowJob::startElapsedTimer();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__openfilemanagerwindowjob_sender_isbase) {
            kio__openfilemanagerwindowjob_sender_isbase = false;
            return KIO__OpenFileManagerWindowJob::sender();
        }
        auto sender_cb = kio__openfilemanagerwindowjob_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KIO__OpenFileManagerWindowJob::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__openfilemanagerwindowjob_sendersignalindex_isbase) {
            kio__openfilemanagerwindowjob_sendersignalindex_isbase = false;
            return KIO__OpenFileManagerWindowJob::senderSignalIndex();
        }
        auto sendersignalindex_cb = kio__openfilemanagerwindowjob_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KIO__OpenFileManagerWindowJob::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__openfilemanagerwindowjob_receivers_isbase) {
            kio__openfilemanagerwindowjob_receivers_isbase = false;
            return KIO__OpenFileManagerWindowJob::receivers(signal);
        }
        auto receivers_cb = kio__openfilemanagerwindowjob_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIO__OpenFileManagerWindowJob::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__openfilemanagerwindowjob_issignalconnected_isbase) {
            kio__openfilemanagerwindowjob_issignalconnected_isbase = false;
            return KIO__OpenFileManagerWindowJob::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kio__openfilemanagerwindowjob_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__OpenFileManagerWindowJob::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KIO__OpenFileManagerWindowJob_DoKill(KIO::OpenFileManagerWindowJob* self);
    friend bool KIO__OpenFileManagerWindowJob_SuperDoKill(KIO::OpenFileManagerWindowJob* self);
    friend bool KIO__OpenFileManagerWindowJob_DoSuspend(KIO::OpenFileManagerWindowJob* self);
    friend bool KIO__OpenFileManagerWindowJob_SuperDoSuspend(KIO::OpenFileManagerWindowJob* self);
    friend bool KIO__OpenFileManagerWindowJob_DoResume(KIO::OpenFileManagerWindowJob* self);
    friend bool KIO__OpenFileManagerWindowJob_SuperDoResume(KIO::OpenFileManagerWindowJob* self);
    friend void KIO__OpenFileManagerWindowJob_TimerEvent(KIO::OpenFileManagerWindowJob* self, QTimerEvent* event);
    friend void KIO__OpenFileManagerWindowJob_SuperTimerEvent(KIO::OpenFileManagerWindowJob* self, QTimerEvent* event);
    friend void KIO__OpenFileManagerWindowJob_ChildEvent(KIO::OpenFileManagerWindowJob* self, QChildEvent* event);
    friend void KIO__OpenFileManagerWindowJob_SuperChildEvent(KIO::OpenFileManagerWindowJob* self, QChildEvent* event);
    friend void KIO__OpenFileManagerWindowJob_CustomEvent(KIO::OpenFileManagerWindowJob* self, QEvent* event);
    friend void KIO__OpenFileManagerWindowJob_SuperCustomEvent(KIO::OpenFileManagerWindowJob* self, QEvent* event);
    friend void KIO__OpenFileManagerWindowJob_ConnectNotify(KIO::OpenFileManagerWindowJob* self, const QMetaMethod* signal);
    friend void KIO__OpenFileManagerWindowJob_SuperConnectNotify(KIO::OpenFileManagerWindowJob* self, const QMetaMethod* signal);
    friend void KIO__OpenFileManagerWindowJob_DisconnectNotify(KIO::OpenFileManagerWindowJob* self, const QMetaMethod* signal);
    friend void KIO__OpenFileManagerWindowJob_SuperDisconnectNotify(KIO::OpenFileManagerWindowJob* self, const QMetaMethod* signal);
    friend void KIO__OpenFileManagerWindowJob_SetCapabilities(KIO::OpenFileManagerWindowJob* self, int capabilities);
    friend void KIO__OpenFileManagerWindowJob_SuperSetCapabilities(KIO::OpenFileManagerWindowJob* self, int capabilities);
    friend bool KIO__OpenFileManagerWindowJob_IsFinished(const KIO::OpenFileManagerWindowJob* self);
    friend bool KIO__OpenFileManagerWindowJob_SuperIsFinished(const KIO::OpenFileManagerWindowJob* self);
    friend void KIO__OpenFileManagerWindowJob_SetError(KIO::OpenFileManagerWindowJob* self, int errorCode);
    friend void KIO__OpenFileManagerWindowJob_SuperSetError(KIO::OpenFileManagerWindowJob* self, int errorCode);
    friend void KIO__OpenFileManagerWindowJob_SetErrorText(KIO::OpenFileManagerWindowJob* self, const libqt_string errorText);
    friend void KIO__OpenFileManagerWindowJob_SuperSetErrorText(KIO::OpenFileManagerWindowJob* self, const libqt_string errorText);
    friend void KIO__OpenFileManagerWindowJob_SetProcessedAmount(KIO::OpenFileManagerWindowJob* self, int unit, unsigned long long amount);
    friend void KIO__OpenFileManagerWindowJob_SuperSetProcessedAmount(KIO::OpenFileManagerWindowJob* self, int unit, unsigned long long amount);
    friend void KIO__OpenFileManagerWindowJob_SetTotalAmount(KIO::OpenFileManagerWindowJob* self, int unit, unsigned long long amount);
    friend void KIO__OpenFileManagerWindowJob_SuperSetTotalAmount(KIO::OpenFileManagerWindowJob* self, int unit, unsigned long long amount);
    friend void KIO__OpenFileManagerWindowJob_SetProgressUnit(KIO::OpenFileManagerWindowJob* self, int unit);
    friend void KIO__OpenFileManagerWindowJob_SuperSetProgressUnit(KIO::OpenFileManagerWindowJob* self, int unit);
    friend void KIO__OpenFileManagerWindowJob_SetPercent(KIO::OpenFileManagerWindowJob* self, unsigned long percentage);
    friend void KIO__OpenFileManagerWindowJob_SuperSetPercent(KIO::OpenFileManagerWindowJob* self, unsigned long percentage);
    friend void KIO__OpenFileManagerWindowJob_EmitResult(KIO::OpenFileManagerWindowJob* self);
    friend void KIO__OpenFileManagerWindowJob_SuperEmitResult(KIO::OpenFileManagerWindowJob* self);
    friend void KIO__OpenFileManagerWindowJob_EmitPercent(KIO::OpenFileManagerWindowJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__OpenFileManagerWindowJob_SuperEmitPercent(KIO::OpenFileManagerWindowJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__OpenFileManagerWindowJob_EmitSpeed(KIO::OpenFileManagerWindowJob* self, unsigned long speed);
    friend void KIO__OpenFileManagerWindowJob_SuperEmitSpeed(KIO::OpenFileManagerWindowJob* self, unsigned long speed);
    friend void KIO__OpenFileManagerWindowJob_StartElapsedTimer(KIO::OpenFileManagerWindowJob* self);
    friend void KIO__OpenFileManagerWindowJob_SuperStartElapsedTimer(KIO::OpenFileManagerWindowJob* self);
    friend QObject* KIO__OpenFileManagerWindowJob_Sender(const KIO::OpenFileManagerWindowJob* self);
    friend QObject* KIO__OpenFileManagerWindowJob_SuperSender(const KIO::OpenFileManagerWindowJob* self);
    friend int KIO__OpenFileManagerWindowJob_SenderSignalIndex(const KIO::OpenFileManagerWindowJob* self);
    friend int KIO__OpenFileManagerWindowJob_SuperSenderSignalIndex(const KIO::OpenFileManagerWindowJob* self);
    friend int KIO__OpenFileManagerWindowJob_Receivers(const KIO::OpenFileManagerWindowJob* self, const char* signal);
    friend int KIO__OpenFileManagerWindowJob_SuperReceivers(const KIO::OpenFileManagerWindowJob* self, const char* signal);
    friend bool KIO__OpenFileManagerWindowJob_IsSignalConnected(const KIO::OpenFileManagerWindowJob* self, const QMetaMethod* signal);
    friend bool KIO__OpenFileManagerWindowJob_SuperIsSignalConnected(const KIO::OpenFileManagerWindowJob* self, const QMetaMethod* signal);
};

#endif
