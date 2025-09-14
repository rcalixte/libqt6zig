#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALAPPLICATIONLAUNCHERJOB_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALAPPLICATIONLAUNCHERJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::ApplicationLauncherJob so that we can call protected methods
class VirtualKIOApplicationLauncherJob final : public KIO::ApplicationLauncherJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOApplicationLauncherJob = true;

    // Virtual class public types (including callbacks)
    using KIO__ApplicationLauncherJob_Start_Callback = void (*)();
    using KIO__ApplicationLauncherJob_Metacall_Callback = int (*)(KIO__ApplicationLauncherJob*, int, int, void**);
    using KIO__ApplicationLauncherJob_DoKill_Callback = bool (*)();
    using KIO__ApplicationLauncherJob_DoSuspend_Callback = bool (*)();
    using KIO__ApplicationLauncherJob_DoResume_Callback = bool (*)();
    using KIO__ApplicationLauncherJob_ErrorString_Callback = const char* (*)();
    using KIO__ApplicationLauncherJob_Event_Callback = bool (*)(KIO__ApplicationLauncherJob*, QEvent*);
    using KIO__ApplicationLauncherJob_EventFilter_Callback = bool (*)(KIO__ApplicationLauncherJob*, QObject*, QEvent*);
    using KIO__ApplicationLauncherJob_TimerEvent_Callback = void (*)(KIO__ApplicationLauncherJob*, QTimerEvent*);
    using KIO__ApplicationLauncherJob_ChildEvent_Callback = void (*)(KIO__ApplicationLauncherJob*, QChildEvent*);
    using KIO__ApplicationLauncherJob_CustomEvent_Callback = void (*)(KIO__ApplicationLauncherJob*, QEvent*);
    using KIO__ApplicationLauncherJob_ConnectNotify_Callback = void (*)(KIO__ApplicationLauncherJob*, QMetaMethod*);
    using KIO__ApplicationLauncherJob_DisconnectNotify_Callback = void (*)(KIO__ApplicationLauncherJob*, QMetaMethod*);
    using KIO__ApplicationLauncherJob_SetCapabilities_Callback = void (*)(KIO__ApplicationLauncherJob*, int);
    using KIO__ApplicationLauncherJob_IsFinished_Callback = bool (*)();
    using KIO__ApplicationLauncherJob_SetError_Callback = void (*)(KIO__ApplicationLauncherJob*, int);
    using KIO__ApplicationLauncherJob_SetErrorText_Callback = void (*)(KIO__ApplicationLauncherJob*, libqt_string);
    using KIO__ApplicationLauncherJob_SetProcessedAmount_Callback = void (*)(KIO__ApplicationLauncherJob*, int, unsigned long long);
    using KIO__ApplicationLauncherJob_SetTotalAmount_Callback = void (*)(KIO__ApplicationLauncherJob*, int, unsigned long long);
    using KIO__ApplicationLauncherJob_SetProgressUnit_Callback = void (*)(KIO__ApplicationLauncherJob*, int);
    using KIO__ApplicationLauncherJob_SetPercent_Callback = void (*)(KIO__ApplicationLauncherJob*, unsigned long);
    using KIO__ApplicationLauncherJob_EmitResult_Callback = void (*)();
    using KIO__ApplicationLauncherJob_EmitPercent_Callback = void (*)(KIO__ApplicationLauncherJob*, unsigned long long, unsigned long long);
    using KIO__ApplicationLauncherJob_EmitSpeed_Callback = void (*)(KIO__ApplicationLauncherJob*, unsigned long);
    using KIO__ApplicationLauncherJob_StartElapsedTimer_Callback = void (*)();
    using KIO__ApplicationLauncherJob_Sender_Callback = QObject* (*)();
    using KIO__ApplicationLauncherJob_SenderSignalIndex_Callback = int (*)();
    using KIO__ApplicationLauncherJob_Receivers_Callback = int (*)(const KIO__ApplicationLauncherJob*, const char*);
    using KIO__ApplicationLauncherJob_IsSignalConnected_Callback = bool (*)(const KIO__ApplicationLauncherJob*, QMetaMethod*);

  protected:
    // Instance callback storage
    KIO__ApplicationLauncherJob_Start_Callback kio__applicationlauncherjob_start_callback = nullptr;
    KIO__ApplicationLauncherJob_Metacall_Callback kio__applicationlauncherjob_metacall_callback = nullptr;
    KIO__ApplicationLauncherJob_DoKill_Callback kio__applicationlauncherjob_dokill_callback = nullptr;
    KIO__ApplicationLauncherJob_DoSuspend_Callback kio__applicationlauncherjob_dosuspend_callback = nullptr;
    KIO__ApplicationLauncherJob_DoResume_Callback kio__applicationlauncherjob_doresume_callback = nullptr;
    KIO__ApplicationLauncherJob_ErrorString_Callback kio__applicationlauncherjob_errorstring_callback = nullptr;
    KIO__ApplicationLauncherJob_Event_Callback kio__applicationlauncherjob_event_callback = nullptr;
    KIO__ApplicationLauncherJob_EventFilter_Callback kio__applicationlauncherjob_eventfilter_callback = nullptr;
    KIO__ApplicationLauncherJob_TimerEvent_Callback kio__applicationlauncherjob_timerevent_callback = nullptr;
    KIO__ApplicationLauncherJob_ChildEvent_Callback kio__applicationlauncherjob_childevent_callback = nullptr;
    KIO__ApplicationLauncherJob_CustomEvent_Callback kio__applicationlauncherjob_customevent_callback = nullptr;
    KIO__ApplicationLauncherJob_ConnectNotify_Callback kio__applicationlauncherjob_connectnotify_callback = nullptr;
    KIO__ApplicationLauncherJob_DisconnectNotify_Callback kio__applicationlauncherjob_disconnectnotify_callback = nullptr;
    KIO__ApplicationLauncherJob_SetCapabilities_Callback kio__applicationlauncherjob_setcapabilities_callback = nullptr;
    KIO__ApplicationLauncherJob_IsFinished_Callback kio__applicationlauncherjob_isfinished_callback = nullptr;
    KIO__ApplicationLauncherJob_SetError_Callback kio__applicationlauncherjob_seterror_callback = nullptr;
    KIO__ApplicationLauncherJob_SetErrorText_Callback kio__applicationlauncherjob_seterrortext_callback = nullptr;
    KIO__ApplicationLauncherJob_SetProcessedAmount_Callback kio__applicationlauncherjob_setprocessedamount_callback = nullptr;
    KIO__ApplicationLauncherJob_SetTotalAmount_Callback kio__applicationlauncherjob_settotalamount_callback = nullptr;
    KIO__ApplicationLauncherJob_SetProgressUnit_Callback kio__applicationlauncherjob_setprogressunit_callback = nullptr;
    KIO__ApplicationLauncherJob_SetPercent_Callback kio__applicationlauncherjob_setpercent_callback = nullptr;
    KIO__ApplicationLauncherJob_EmitResult_Callback kio__applicationlauncherjob_emitresult_callback = nullptr;
    KIO__ApplicationLauncherJob_EmitPercent_Callback kio__applicationlauncherjob_emitpercent_callback = nullptr;
    KIO__ApplicationLauncherJob_EmitSpeed_Callback kio__applicationlauncherjob_emitspeed_callback = nullptr;
    KIO__ApplicationLauncherJob_StartElapsedTimer_Callback kio__applicationlauncherjob_startelapsedtimer_callback = nullptr;
    KIO__ApplicationLauncherJob_Sender_Callback kio__applicationlauncherjob_sender_callback = nullptr;
    KIO__ApplicationLauncherJob_SenderSignalIndex_Callback kio__applicationlauncherjob_sendersignalindex_callback = nullptr;
    KIO__ApplicationLauncherJob_Receivers_Callback kio__applicationlauncherjob_receivers_callback = nullptr;
    KIO__ApplicationLauncherJob_IsSignalConnected_Callback kio__applicationlauncherjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__applicationlauncherjob_start_isbase = false;
    mutable bool kio__applicationlauncherjob_metacall_isbase = false;
    mutable bool kio__applicationlauncherjob_dokill_isbase = false;
    mutable bool kio__applicationlauncherjob_dosuspend_isbase = false;
    mutable bool kio__applicationlauncherjob_doresume_isbase = false;
    mutable bool kio__applicationlauncherjob_errorstring_isbase = false;
    mutable bool kio__applicationlauncherjob_event_isbase = false;
    mutable bool kio__applicationlauncherjob_eventfilter_isbase = false;
    mutable bool kio__applicationlauncherjob_timerevent_isbase = false;
    mutable bool kio__applicationlauncherjob_childevent_isbase = false;
    mutable bool kio__applicationlauncherjob_customevent_isbase = false;
    mutable bool kio__applicationlauncherjob_connectnotify_isbase = false;
    mutable bool kio__applicationlauncherjob_disconnectnotify_isbase = false;
    mutable bool kio__applicationlauncherjob_setcapabilities_isbase = false;
    mutable bool kio__applicationlauncherjob_isfinished_isbase = false;
    mutable bool kio__applicationlauncherjob_seterror_isbase = false;
    mutable bool kio__applicationlauncherjob_seterrortext_isbase = false;
    mutable bool kio__applicationlauncherjob_setprocessedamount_isbase = false;
    mutable bool kio__applicationlauncherjob_settotalamount_isbase = false;
    mutable bool kio__applicationlauncherjob_setprogressunit_isbase = false;
    mutable bool kio__applicationlauncherjob_setpercent_isbase = false;
    mutable bool kio__applicationlauncherjob_emitresult_isbase = false;
    mutable bool kio__applicationlauncherjob_emitpercent_isbase = false;
    mutable bool kio__applicationlauncherjob_emitspeed_isbase = false;
    mutable bool kio__applicationlauncherjob_startelapsedtimer_isbase = false;
    mutable bool kio__applicationlauncherjob_sender_isbase = false;
    mutable bool kio__applicationlauncherjob_sendersignalindex_isbase = false;
    mutable bool kio__applicationlauncherjob_receivers_isbase = false;
    mutable bool kio__applicationlauncherjob_issignalconnected_isbase = false;

  public:
    VirtualKIOApplicationLauncherJob(const KServiceAction& serviceAction) : KIO::ApplicationLauncherJob(serviceAction) {};
    VirtualKIOApplicationLauncherJob(const KDesktopFileAction& desktopFileAction) : KIO::ApplicationLauncherJob(desktopFileAction) {};
    VirtualKIOApplicationLauncherJob() : KIO::ApplicationLauncherJob() {};
    VirtualKIOApplicationLauncherJob(const KServiceAction& serviceAction, QObject* parent) : KIO::ApplicationLauncherJob(serviceAction, parent) {};
    VirtualKIOApplicationLauncherJob(const KDesktopFileAction& desktopFileAction, QObject* parent) : KIO::ApplicationLauncherJob(desktopFileAction, parent) {};
    VirtualKIOApplicationLauncherJob(QObject* parent) : KIO::ApplicationLauncherJob(parent) {};

    ~VirtualKIOApplicationLauncherJob() {
        kio__applicationlauncherjob_start_callback = nullptr;
        kio__applicationlauncherjob_metacall_callback = nullptr;
        kio__applicationlauncherjob_dokill_callback = nullptr;
        kio__applicationlauncherjob_dosuspend_callback = nullptr;
        kio__applicationlauncherjob_doresume_callback = nullptr;
        kio__applicationlauncherjob_errorstring_callback = nullptr;
        kio__applicationlauncherjob_event_callback = nullptr;
        kio__applicationlauncherjob_eventfilter_callback = nullptr;
        kio__applicationlauncherjob_timerevent_callback = nullptr;
        kio__applicationlauncherjob_childevent_callback = nullptr;
        kio__applicationlauncherjob_customevent_callback = nullptr;
        kio__applicationlauncherjob_connectnotify_callback = nullptr;
        kio__applicationlauncherjob_disconnectnotify_callback = nullptr;
        kio__applicationlauncherjob_setcapabilities_callback = nullptr;
        kio__applicationlauncherjob_isfinished_callback = nullptr;
        kio__applicationlauncherjob_seterror_callback = nullptr;
        kio__applicationlauncherjob_seterrortext_callback = nullptr;
        kio__applicationlauncherjob_setprocessedamount_callback = nullptr;
        kio__applicationlauncherjob_settotalamount_callback = nullptr;
        kio__applicationlauncherjob_setprogressunit_callback = nullptr;
        kio__applicationlauncherjob_setpercent_callback = nullptr;
        kio__applicationlauncherjob_emitresult_callback = nullptr;
        kio__applicationlauncherjob_emitpercent_callback = nullptr;
        kio__applicationlauncherjob_emitspeed_callback = nullptr;
        kio__applicationlauncherjob_startelapsedtimer_callback = nullptr;
        kio__applicationlauncherjob_sender_callback = nullptr;
        kio__applicationlauncherjob_sendersignalindex_callback = nullptr;
        kio__applicationlauncherjob_receivers_callback = nullptr;
        kio__applicationlauncherjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__ApplicationLauncherJob_Start_Callback(KIO__ApplicationLauncherJob_Start_Callback cb) { kio__applicationlauncherjob_start_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_Metacall_Callback(KIO__ApplicationLauncherJob_Metacall_Callback cb) { kio__applicationlauncherjob_metacall_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_DoKill_Callback(KIO__ApplicationLauncherJob_DoKill_Callback cb) { kio__applicationlauncherjob_dokill_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_DoSuspend_Callback(KIO__ApplicationLauncherJob_DoSuspend_Callback cb) { kio__applicationlauncherjob_dosuspend_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_DoResume_Callback(KIO__ApplicationLauncherJob_DoResume_Callback cb) { kio__applicationlauncherjob_doresume_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_ErrorString_Callback(KIO__ApplicationLauncherJob_ErrorString_Callback cb) { kio__applicationlauncherjob_errorstring_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_Event_Callback(KIO__ApplicationLauncherJob_Event_Callback cb) { kio__applicationlauncherjob_event_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_EventFilter_Callback(KIO__ApplicationLauncherJob_EventFilter_Callback cb) { kio__applicationlauncherjob_eventfilter_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_TimerEvent_Callback(KIO__ApplicationLauncherJob_TimerEvent_Callback cb) { kio__applicationlauncherjob_timerevent_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_ChildEvent_Callback(KIO__ApplicationLauncherJob_ChildEvent_Callback cb) { kio__applicationlauncherjob_childevent_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_CustomEvent_Callback(KIO__ApplicationLauncherJob_CustomEvent_Callback cb) { kio__applicationlauncherjob_customevent_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_ConnectNotify_Callback(KIO__ApplicationLauncherJob_ConnectNotify_Callback cb) { kio__applicationlauncherjob_connectnotify_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_DisconnectNotify_Callback(KIO__ApplicationLauncherJob_DisconnectNotify_Callback cb) { kio__applicationlauncherjob_disconnectnotify_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_SetCapabilities_Callback(KIO__ApplicationLauncherJob_SetCapabilities_Callback cb) { kio__applicationlauncherjob_setcapabilities_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_IsFinished_Callback(KIO__ApplicationLauncherJob_IsFinished_Callback cb) { kio__applicationlauncherjob_isfinished_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_SetError_Callback(KIO__ApplicationLauncherJob_SetError_Callback cb) { kio__applicationlauncherjob_seterror_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_SetErrorText_Callback(KIO__ApplicationLauncherJob_SetErrorText_Callback cb) { kio__applicationlauncherjob_seterrortext_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_SetProcessedAmount_Callback(KIO__ApplicationLauncherJob_SetProcessedAmount_Callback cb) { kio__applicationlauncherjob_setprocessedamount_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_SetTotalAmount_Callback(KIO__ApplicationLauncherJob_SetTotalAmount_Callback cb) { kio__applicationlauncherjob_settotalamount_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_SetProgressUnit_Callback(KIO__ApplicationLauncherJob_SetProgressUnit_Callback cb) { kio__applicationlauncherjob_setprogressunit_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_SetPercent_Callback(KIO__ApplicationLauncherJob_SetPercent_Callback cb) { kio__applicationlauncherjob_setpercent_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_EmitResult_Callback(KIO__ApplicationLauncherJob_EmitResult_Callback cb) { kio__applicationlauncherjob_emitresult_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_EmitPercent_Callback(KIO__ApplicationLauncherJob_EmitPercent_Callback cb) { kio__applicationlauncherjob_emitpercent_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_EmitSpeed_Callback(KIO__ApplicationLauncherJob_EmitSpeed_Callback cb) { kio__applicationlauncherjob_emitspeed_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_StartElapsedTimer_Callback(KIO__ApplicationLauncherJob_StartElapsedTimer_Callback cb) { kio__applicationlauncherjob_startelapsedtimer_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_Sender_Callback(KIO__ApplicationLauncherJob_Sender_Callback cb) { kio__applicationlauncherjob_sender_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_SenderSignalIndex_Callback(KIO__ApplicationLauncherJob_SenderSignalIndex_Callback cb) { kio__applicationlauncherjob_sendersignalindex_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_Receivers_Callback(KIO__ApplicationLauncherJob_Receivers_Callback cb) { kio__applicationlauncherjob_receivers_callback = cb; }
    inline void setKIO__ApplicationLauncherJob_IsSignalConnected_Callback(KIO__ApplicationLauncherJob_IsSignalConnected_Callback cb) { kio__applicationlauncherjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__ApplicationLauncherJob_Start_IsBase(bool value) const { kio__applicationlauncherjob_start_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_Metacall_IsBase(bool value) const { kio__applicationlauncherjob_metacall_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_DoKill_IsBase(bool value) const { kio__applicationlauncherjob_dokill_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_DoSuspend_IsBase(bool value) const { kio__applicationlauncherjob_dosuspend_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_DoResume_IsBase(bool value) const { kio__applicationlauncherjob_doresume_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_ErrorString_IsBase(bool value) const { kio__applicationlauncherjob_errorstring_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_Event_IsBase(bool value) const { kio__applicationlauncherjob_event_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_EventFilter_IsBase(bool value) const { kio__applicationlauncherjob_eventfilter_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_TimerEvent_IsBase(bool value) const { kio__applicationlauncherjob_timerevent_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_ChildEvent_IsBase(bool value) const { kio__applicationlauncherjob_childevent_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_CustomEvent_IsBase(bool value) const { kio__applicationlauncherjob_customevent_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_ConnectNotify_IsBase(bool value) const { kio__applicationlauncherjob_connectnotify_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_DisconnectNotify_IsBase(bool value) const { kio__applicationlauncherjob_disconnectnotify_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_SetCapabilities_IsBase(bool value) const { kio__applicationlauncherjob_setcapabilities_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_IsFinished_IsBase(bool value) const { kio__applicationlauncherjob_isfinished_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_SetError_IsBase(bool value) const { kio__applicationlauncherjob_seterror_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_SetErrorText_IsBase(bool value) const { kio__applicationlauncherjob_seterrortext_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_SetProcessedAmount_IsBase(bool value) const { kio__applicationlauncherjob_setprocessedamount_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_SetTotalAmount_IsBase(bool value) const { kio__applicationlauncherjob_settotalamount_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_SetProgressUnit_IsBase(bool value) const { kio__applicationlauncherjob_setprogressunit_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_SetPercent_IsBase(bool value) const { kio__applicationlauncherjob_setpercent_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_EmitResult_IsBase(bool value) const { kio__applicationlauncherjob_emitresult_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_EmitPercent_IsBase(bool value) const { kio__applicationlauncherjob_emitpercent_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_EmitSpeed_IsBase(bool value) const { kio__applicationlauncherjob_emitspeed_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_StartElapsedTimer_IsBase(bool value) const { kio__applicationlauncherjob_startelapsedtimer_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_Sender_IsBase(bool value) const { kio__applicationlauncherjob_sender_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_SenderSignalIndex_IsBase(bool value) const { kio__applicationlauncherjob_sendersignalindex_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_Receivers_IsBase(bool value) const { kio__applicationlauncherjob_receivers_isbase = value; }
    inline void setKIO__ApplicationLauncherJob_IsSignalConnected_IsBase(bool value) const { kio__applicationlauncherjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__applicationlauncherjob_start_isbase) {
            kio__applicationlauncherjob_start_isbase = false;
            KIO__ApplicationLauncherJob::start();
        } else if (kio__applicationlauncherjob_start_callback != nullptr) {
            kio__applicationlauncherjob_start_callback();
        } else {
            KIO__ApplicationLauncherJob::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__applicationlauncherjob_metacall_isbase) {
            kio__applicationlauncherjob_metacall_isbase = false;
            return KIO__ApplicationLauncherJob::qt_metacall(param1, param2, param3);
        } else if (kio__applicationlauncherjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__applicationlauncherjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__ApplicationLauncherJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__applicationlauncherjob_dokill_isbase) {
            kio__applicationlauncherjob_dokill_isbase = false;
            return KIO__ApplicationLauncherJob::doKill();
        } else if (kio__applicationlauncherjob_dokill_callback != nullptr) {
            bool callback_ret = kio__applicationlauncherjob_dokill_callback();
            return callback_ret;
        } else {
            return KIO__ApplicationLauncherJob::doKill();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__applicationlauncherjob_dosuspend_isbase) {
            kio__applicationlauncherjob_dosuspend_isbase = false;
            return KIO__ApplicationLauncherJob::doSuspend();
        } else if (kio__applicationlauncherjob_dosuspend_callback != nullptr) {
            bool callback_ret = kio__applicationlauncherjob_dosuspend_callback();
            return callback_ret;
        } else {
            return KIO__ApplicationLauncherJob::doSuspend();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__applicationlauncherjob_doresume_isbase) {
            kio__applicationlauncherjob_doresume_isbase = false;
            return KIO__ApplicationLauncherJob::doResume();
        } else if (kio__applicationlauncherjob_doresume_callback != nullptr) {
            bool callback_ret = kio__applicationlauncherjob_doresume_callback();
            return callback_ret;
        } else {
            return KIO__ApplicationLauncherJob::doResume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__applicationlauncherjob_errorstring_isbase) {
            kio__applicationlauncherjob_errorstring_isbase = false;
            return KIO__ApplicationLauncherJob::errorString();
        } else if (kio__applicationlauncherjob_errorstring_callback != nullptr) {
            const char* callback_ret = kio__applicationlauncherjob_errorstring_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KIO__ApplicationLauncherJob::errorString();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__applicationlauncherjob_event_isbase) {
            kio__applicationlauncherjob_event_isbase = false;
            return KIO__ApplicationLauncherJob::event(event);
        } else if (kio__applicationlauncherjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__applicationlauncherjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__ApplicationLauncherJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__applicationlauncherjob_eventfilter_isbase) {
            kio__applicationlauncherjob_eventfilter_isbase = false;
            return KIO__ApplicationLauncherJob::eventFilter(watched, event);
        } else if (kio__applicationlauncherjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kio__applicationlauncherjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__ApplicationLauncherJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__applicationlauncherjob_timerevent_isbase) {
            kio__applicationlauncherjob_timerevent_isbase = false;
            KIO__ApplicationLauncherJob::timerEvent(event);
        } else if (kio__applicationlauncherjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__applicationlauncherjob_timerevent_callback(this, cbval1);
        } else {
            KIO__ApplicationLauncherJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__applicationlauncherjob_childevent_isbase) {
            kio__applicationlauncherjob_childevent_isbase = false;
            KIO__ApplicationLauncherJob::childEvent(event);
        } else if (kio__applicationlauncherjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__applicationlauncherjob_childevent_callback(this, cbval1);
        } else {
            KIO__ApplicationLauncherJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__applicationlauncherjob_customevent_isbase) {
            kio__applicationlauncherjob_customevent_isbase = false;
            KIO__ApplicationLauncherJob::customEvent(event);
        } else if (kio__applicationlauncherjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__applicationlauncherjob_customevent_callback(this, cbval1);
        } else {
            KIO__ApplicationLauncherJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__applicationlauncherjob_connectnotify_isbase) {
            kio__applicationlauncherjob_connectnotify_isbase = false;
            KIO__ApplicationLauncherJob::connectNotify(signal);
        } else if (kio__applicationlauncherjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__applicationlauncherjob_connectnotify_callback(this, cbval1);
        } else {
            KIO__ApplicationLauncherJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__applicationlauncherjob_disconnectnotify_isbase) {
            kio__applicationlauncherjob_disconnectnotify_isbase = false;
            KIO__ApplicationLauncherJob::disconnectNotify(signal);
        } else if (kio__applicationlauncherjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__applicationlauncherjob_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__ApplicationLauncherJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kio__applicationlauncherjob_setcapabilities_isbase) {
            kio__applicationlauncherjob_setcapabilities_isbase = false;
            KIO__ApplicationLauncherJob::setCapabilities(capabilities);
        } else if (kio__applicationlauncherjob_setcapabilities_callback != nullptr) {
            int cbval1 = static_cast<int>(capabilities);

            kio__applicationlauncherjob_setcapabilities_callback(this, cbval1);
        } else {
            KIO__ApplicationLauncherJob::setCapabilities(capabilities);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kio__applicationlauncherjob_isfinished_isbase) {
            kio__applicationlauncherjob_isfinished_isbase = false;
            return KIO__ApplicationLauncherJob::isFinished();
        } else if (kio__applicationlauncherjob_isfinished_callback != nullptr) {
            bool callback_ret = kio__applicationlauncherjob_isfinished_callback();
            return callback_ret;
        } else {
            return KIO__ApplicationLauncherJob::isFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kio__applicationlauncherjob_seterror_isbase) {
            kio__applicationlauncherjob_seterror_isbase = false;
            KIO__ApplicationLauncherJob::setError(errorCode);
        } else if (kio__applicationlauncherjob_seterror_callback != nullptr) {
            int cbval1 = errorCode;

            kio__applicationlauncherjob_seterror_callback(this, cbval1);
        } else {
            KIO__ApplicationLauncherJob::setError(errorCode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kio__applicationlauncherjob_seterrortext_isbase) {
            kio__applicationlauncherjob_seterrortext_isbase = false;
            KIO__ApplicationLauncherJob::setErrorText(errorText);
        } else if (kio__applicationlauncherjob_seterrortext_callback != nullptr) {
            const QString errorText_ret = errorText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorText_b = errorText_ret.toUtf8();
            libqt_string errorText_str;
            errorText_str.len = errorText_b.length();
            errorText_str.data = static_cast<const char*>(malloc(errorText_str.len + 1));
            memcpy((void*)errorText_str.data, errorText_b.data(), errorText_str.len);
            ((char*)errorText_str.data)[errorText_str.len] = '\0';
            libqt_string cbval1 = errorText_str;

            kio__applicationlauncherjob_seterrortext_callback(this, cbval1);
        } else {
            KIO__ApplicationLauncherJob::setErrorText(errorText);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__applicationlauncherjob_setprocessedamount_isbase) {
            kio__applicationlauncherjob_setprocessedamount_isbase = false;
            KIO__ApplicationLauncherJob::setProcessedAmount(unit, amount);
        } else if (kio__applicationlauncherjob_setprocessedamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__applicationlauncherjob_setprocessedamount_callback(this, cbval1, cbval2);
        } else {
            KIO__ApplicationLauncherJob::setProcessedAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__applicationlauncherjob_settotalamount_isbase) {
            kio__applicationlauncherjob_settotalamount_isbase = false;
            KIO__ApplicationLauncherJob::setTotalAmount(unit, amount);
        } else if (kio__applicationlauncherjob_settotalamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__applicationlauncherjob_settotalamount_callback(this, cbval1, cbval2);
        } else {
            KIO__ApplicationLauncherJob::setTotalAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kio__applicationlauncherjob_setprogressunit_isbase) {
            kio__applicationlauncherjob_setprogressunit_isbase = false;
            KIO__ApplicationLauncherJob::setProgressUnit(unit);
        } else if (kio__applicationlauncherjob_setprogressunit_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);

            kio__applicationlauncherjob_setprogressunit_callback(this, cbval1);
        } else {
            KIO__ApplicationLauncherJob::setProgressUnit(unit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kio__applicationlauncherjob_setpercent_isbase) {
            kio__applicationlauncherjob_setpercent_isbase = false;
            KIO__ApplicationLauncherJob::setPercent(percentage);
        } else if (kio__applicationlauncherjob_setpercent_callback != nullptr) {
            unsigned long cbval1 = percentage;

            kio__applicationlauncherjob_setpercent_callback(this, cbval1);
        } else {
            KIO__ApplicationLauncherJob::setPercent(percentage);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kio__applicationlauncherjob_emitresult_isbase) {
            kio__applicationlauncherjob_emitresult_isbase = false;
            KIO__ApplicationLauncherJob::emitResult();
        } else if (kio__applicationlauncherjob_emitresult_callback != nullptr) {
            kio__applicationlauncherjob_emitresult_callback();
        } else {
            KIO__ApplicationLauncherJob::emitResult();
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kio__applicationlauncherjob_emitpercent_isbase) {
            kio__applicationlauncherjob_emitpercent_isbase = false;
            KIO__ApplicationLauncherJob::emitPercent(processedAmount, totalAmount);
        } else if (kio__applicationlauncherjob_emitpercent_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            kio__applicationlauncherjob_emitpercent_callback(this, cbval1, cbval2);
        } else {
            KIO__ApplicationLauncherJob::emitPercent(processedAmount, totalAmount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kio__applicationlauncherjob_emitspeed_isbase) {
            kio__applicationlauncherjob_emitspeed_isbase = false;
            KIO__ApplicationLauncherJob::emitSpeed(speed);
        } else if (kio__applicationlauncherjob_emitspeed_callback != nullptr) {
            unsigned long cbval1 = speed;

            kio__applicationlauncherjob_emitspeed_callback(this, cbval1);
        } else {
            KIO__ApplicationLauncherJob::emitSpeed(speed);
        }
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kio__applicationlauncherjob_startelapsedtimer_isbase) {
            kio__applicationlauncherjob_startelapsedtimer_isbase = false;
            KIO__ApplicationLauncherJob::startElapsedTimer();
        } else if (kio__applicationlauncherjob_startelapsedtimer_callback != nullptr) {
            kio__applicationlauncherjob_startelapsedtimer_callback();
        } else {
            KIO__ApplicationLauncherJob::startElapsedTimer();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__applicationlauncherjob_sender_isbase) {
            kio__applicationlauncherjob_sender_isbase = false;
            return KIO__ApplicationLauncherJob::sender();
        } else if (kio__applicationlauncherjob_sender_callback != nullptr) {
            QObject* callback_ret = kio__applicationlauncherjob_sender_callback();
            return callback_ret;
        } else {
            return KIO__ApplicationLauncherJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__applicationlauncherjob_sendersignalindex_isbase) {
            kio__applicationlauncherjob_sendersignalindex_isbase = false;
            return KIO__ApplicationLauncherJob::senderSignalIndex();
        } else if (kio__applicationlauncherjob_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__applicationlauncherjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__ApplicationLauncherJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__applicationlauncherjob_receivers_isbase) {
            kio__applicationlauncherjob_receivers_isbase = false;
            return KIO__ApplicationLauncherJob::receivers(signal);
        } else if (kio__applicationlauncherjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__applicationlauncherjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__ApplicationLauncherJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__applicationlauncherjob_issignalconnected_isbase) {
            kio__applicationlauncherjob_issignalconnected_isbase = false;
            return KIO__ApplicationLauncherJob::isSignalConnected(signal);
        } else if (kio__applicationlauncherjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__applicationlauncherjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__ApplicationLauncherJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KIO__ApplicationLauncherJob_DoKill(KIO::ApplicationLauncherJob* self);
    friend bool KIO__ApplicationLauncherJob_QBaseDoKill(KIO::ApplicationLauncherJob* self);
    friend bool KIO__ApplicationLauncherJob_DoSuspend(KIO::ApplicationLauncherJob* self);
    friend bool KIO__ApplicationLauncherJob_QBaseDoSuspend(KIO::ApplicationLauncherJob* self);
    friend bool KIO__ApplicationLauncherJob_DoResume(KIO::ApplicationLauncherJob* self);
    friend bool KIO__ApplicationLauncherJob_QBaseDoResume(KIO::ApplicationLauncherJob* self);
    friend void KIO__ApplicationLauncherJob_TimerEvent(KIO::ApplicationLauncherJob* self, QTimerEvent* event);
    friend void KIO__ApplicationLauncherJob_QBaseTimerEvent(KIO::ApplicationLauncherJob* self, QTimerEvent* event);
    friend void KIO__ApplicationLauncherJob_ChildEvent(KIO::ApplicationLauncherJob* self, QChildEvent* event);
    friend void KIO__ApplicationLauncherJob_QBaseChildEvent(KIO::ApplicationLauncherJob* self, QChildEvent* event);
    friend void KIO__ApplicationLauncherJob_CustomEvent(KIO::ApplicationLauncherJob* self, QEvent* event);
    friend void KIO__ApplicationLauncherJob_QBaseCustomEvent(KIO::ApplicationLauncherJob* self, QEvent* event);
    friend void KIO__ApplicationLauncherJob_ConnectNotify(KIO::ApplicationLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__ApplicationLauncherJob_QBaseConnectNotify(KIO::ApplicationLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__ApplicationLauncherJob_DisconnectNotify(KIO::ApplicationLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__ApplicationLauncherJob_QBaseDisconnectNotify(KIO::ApplicationLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__ApplicationLauncherJob_SetCapabilities(KIO::ApplicationLauncherJob* self, int capabilities);
    friend void KIO__ApplicationLauncherJob_QBaseSetCapabilities(KIO::ApplicationLauncherJob* self, int capabilities);
    friend bool KIO__ApplicationLauncherJob_IsFinished(const KIO::ApplicationLauncherJob* self);
    friend bool KIO__ApplicationLauncherJob_QBaseIsFinished(const KIO::ApplicationLauncherJob* self);
    friend void KIO__ApplicationLauncherJob_SetError(KIO::ApplicationLauncherJob* self, int errorCode);
    friend void KIO__ApplicationLauncherJob_QBaseSetError(KIO::ApplicationLauncherJob* self, int errorCode);
    friend void KIO__ApplicationLauncherJob_SetErrorText(KIO::ApplicationLauncherJob* self, const libqt_string errorText);
    friend void KIO__ApplicationLauncherJob_QBaseSetErrorText(KIO::ApplicationLauncherJob* self, const libqt_string errorText);
    friend void KIO__ApplicationLauncherJob_SetProcessedAmount(KIO::ApplicationLauncherJob* self, int unit, unsigned long long amount);
    friend void KIO__ApplicationLauncherJob_QBaseSetProcessedAmount(KIO::ApplicationLauncherJob* self, int unit, unsigned long long amount);
    friend void KIO__ApplicationLauncherJob_SetTotalAmount(KIO::ApplicationLauncherJob* self, int unit, unsigned long long amount);
    friend void KIO__ApplicationLauncherJob_QBaseSetTotalAmount(KIO::ApplicationLauncherJob* self, int unit, unsigned long long amount);
    friend void KIO__ApplicationLauncherJob_SetProgressUnit(KIO::ApplicationLauncherJob* self, int unit);
    friend void KIO__ApplicationLauncherJob_QBaseSetProgressUnit(KIO::ApplicationLauncherJob* self, int unit);
    friend void KIO__ApplicationLauncherJob_SetPercent(KIO::ApplicationLauncherJob* self, unsigned long percentage);
    friend void KIO__ApplicationLauncherJob_QBaseSetPercent(KIO::ApplicationLauncherJob* self, unsigned long percentage);
    friend void KIO__ApplicationLauncherJob_EmitResult(KIO::ApplicationLauncherJob* self);
    friend void KIO__ApplicationLauncherJob_QBaseEmitResult(KIO::ApplicationLauncherJob* self);
    friend void KIO__ApplicationLauncherJob_EmitPercent(KIO::ApplicationLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__ApplicationLauncherJob_QBaseEmitPercent(KIO::ApplicationLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__ApplicationLauncherJob_EmitSpeed(KIO::ApplicationLauncherJob* self, unsigned long speed);
    friend void KIO__ApplicationLauncherJob_QBaseEmitSpeed(KIO::ApplicationLauncherJob* self, unsigned long speed);
    friend void KIO__ApplicationLauncherJob_StartElapsedTimer(KIO::ApplicationLauncherJob* self);
    friend void KIO__ApplicationLauncherJob_QBaseStartElapsedTimer(KIO::ApplicationLauncherJob* self);
    friend QObject* KIO__ApplicationLauncherJob_Sender(const KIO::ApplicationLauncherJob* self);
    friend QObject* KIO__ApplicationLauncherJob_QBaseSender(const KIO::ApplicationLauncherJob* self);
    friend int KIO__ApplicationLauncherJob_SenderSignalIndex(const KIO::ApplicationLauncherJob* self);
    friend int KIO__ApplicationLauncherJob_QBaseSenderSignalIndex(const KIO::ApplicationLauncherJob* self);
    friend int KIO__ApplicationLauncherJob_Receivers(const KIO::ApplicationLauncherJob* self, const char* signal);
    friend int KIO__ApplicationLauncherJob_QBaseReceivers(const KIO::ApplicationLauncherJob* self, const char* signal);
    friend bool KIO__ApplicationLauncherJob_IsSignalConnected(const KIO::ApplicationLauncherJob* self, const QMetaMethod* signal);
    friend bool KIO__ApplicationLauncherJob_QBaseIsSignalConnected(const KIO::ApplicationLauncherJob* self, const QMetaMethod* signal);
};

#endif
