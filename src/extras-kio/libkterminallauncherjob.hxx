#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKTERMINALLAUNCHERJOB_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKTERMINALLAUNCHERJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTerminalLauncherJob so that we can call protected methods
class VirtualKTerminalLauncherJob final : public KTerminalLauncherJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKTerminalLauncherJob = true;

    // Virtual class public types (including callbacks)
    using KTerminalLauncherJob_Metacall_Callback = int (*)(KTerminalLauncherJob*, int, int, void**);
    using KTerminalLauncherJob_Start_Callback = void (*)();
    using KTerminalLauncherJob_DoKill_Callback = bool (*)();
    using KTerminalLauncherJob_DoSuspend_Callback = bool (*)();
    using KTerminalLauncherJob_DoResume_Callback = bool (*)();
    using KTerminalLauncherJob_ErrorString_Callback = const char* (*)();
    using KTerminalLauncherJob_Event_Callback = bool (*)(KTerminalLauncherJob*, QEvent*);
    using KTerminalLauncherJob_EventFilter_Callback = bool (*)(KTerminalLauncherJob*, QObject*, QEvent*);
    using KTerminalLauncherJob_TimerEvent_Callback = void (*)(KTerminalLauncherJob*, QTimerEvent*);
    using KTerminalLauncherJob_ChildEvent_Callback = void (*)(KTerminalLauncherJob*, QChildEvent*);
    using KTerminalLauncherJob_CustomEvent_Callback = void (*)(KTerminalLauncherJob*, QEvent*);
    using KTerminalLauncherJob_ConnectNotify_Callback = void (*)(KTerminalLauncherJob*, QMetaMethod*);
    using KTerminalLauncherJob_DisconnectNotify_Callback = void (*)(KTerminalLauncherJob*, QMetaMethod*);
    using KTerminalLauncherJob_SetCapabilities_Callback = void (*)(KTerminalLauncherJob*, int);
    using KTerminalLauncherJob_IsFinished_Callback = bool (*)();
    using KTerminalLauncherJob_SetError_Callback = void (*)(KTerminalLauncherJob*, int);
    using KTerminalLauncherJob_SetErrorText_Callback = void (*)(KTerminalLauncherJob*, libqt_string);
    using KTerminalLauncherJob_SetProcessedAmount_Callback = void (*)(KTerminalLauncherJob*, int, unsigned long long);
    using KTerminalLauncherJob_SetTotalAmount_Callback = void (*)(KTerminalLauncherJob*, int, unsigned long long);
    using KTerminalLauncherJob_SetProgressUnit_Callback = void (*)(KTerminalLauncherJob*, int);
    using KTerminalLauncherJob_SetPercent_Callback = void (*)(KTerminalLauncherJob*, unsigned long);
    using KTerminalLauncherJob_EmitResult_Callback = void (*)();
    using KTerminalLauncherJob_EmitPercent_Callback = void (*)(KTerminalLauncherJob*, unsigned long long, unsigned long long);
    using KTerminalLauncherJob_EmitSpeed_Callback = void (*)(KTerminalLauncherJob*, unsigned long);
    using KTerminalLauncherJob_StartElapsedTimer_Callback = void (*)();
    using KTerminalLauncherJob_Sender_Callback = QObject* (*)();
    using KTerminalLauncherJob_SenderSignalIndex_Callback = int (*)();
    using KTerminalLauncherJob_Receivers_Callback = int (*)(const KTerminalLauncherJob*, const char*);
    using KTerminalLauncherJob_IsSignalConnected_Callback = bool (*)(const KTerminalLauncherJob*, QMetaMethod*);

  protected:
    // Instance callback storage
    KTerminalLauncherJob_Metacall_Callback kterminallauncherjob_metacall_callback = nullptr;
    KTerminalLauncherJob_Start_Callback kterminallauncherjob_start_callback = nullptr;
    KTerminalLauncherJob_DoKill_Callback kterminallauncherjob_dokill_callback = nullptr;
    KTerminalLauncherJob_DoSuspend_Callback kterminallauncherjob_dosuspend_callback = nullptr;
    KTerminalLauncherJob_DoResume_Callback kterminallauncherjob_doresume_callback = nullptr;
    KTerminalLauncherJob_ErrorString_Callback kterminallauncherjob_errorstring_callback = nullptr;
    KTerminalLauncherJob_Event_Callback kterminallauncherjob_event_callback = nullptr;
    KTerminalLauncherJob_EventFilter_Callback kterminallauncherjob_eventfilter_callback = nullptr;
    KTerminalLauncherJob_TimerEvent_Callback kterminallauncherjob_timerevent_callback = nullptr;
    KTerminalLauncherJob_ChildEvent_Callback kterminallauncherjob_childevent_callback = nullptr;
    KTerminalLauncherJob_CustomEvent_Callback kterminallauncherjob_customevent_callback = nullptr;
    KTerminalLauncherJob_ConnectNotify_Callback kterminallauncherjob_connectnotify_callback = nullptr;
    KTerminalLauncherJob_DisconnectNotify_Callback kterminallauncherjob_disconnectnotify_callback = nullptr;
    KTerminalLauncherJob_SetCapabilities_Callback kterminallauncherjob_setcapabilities_callback = nullptr;
    KTerminalLauncherJob_IsFinished_Callback kterminallauncherjob_isfinished_callback = nullptr;
    KTerminalLauncherJob_SetError_Callback kterminallauncherjob_seterror_callback = nullptr;
    KTerminalLauncherJob_SetErrorText_Callback kterminallauncherjob_seterrortext_callback = nullptr;
    KTerminalLauncherJob_SetProcessedAmount_Callback kterminallauncherjob_setprocessedamount_callback = nullptr;
    KTerminalLauncherJob_SetTotalAmount_Callback kterminallauncherjob_settotalamount_callback = nullptr;
    KTerminalLauncherJob_SetProgressUnit_Callback kterminallauncherjob_setprogressunit_callback = nullptr;
    KTerminalLauncherJob_SetPercent_Callback kterminallauncherjob_setpercent_callback = nullptr;
    KTerminalLauncherJob_EmitResult_Callback kterminallauncherjob_emitresult_callback = nullptr;
    KTerminalLauncherJob_EmitPercent_Callback kterminallauncherjob_emitpercent_callback = nullptr;
    KTerminalLauncherJob_EmitSpeed_Callback kterminallauncherjob_emitspeed_callback = nullptr;
    KTerminalLauncherJob_StartElapsedTimer_Callback kterminallauncherjob_startelapsedtimer_callback = nullptr;
    KTerminalLauncherJob_Sender_Callback kterminallauncherjob_sender_callback = nullptr;
    KTerminalLauncherJob_SenderSignalIndex_Callback kterminallauncherjob_sendersignalindex_callback = nullptr;
    KTerminalLauncherJob_Receivers_Callback kterminallauncherjob_receivers_callback = nullptr;
    KTerminalLauncherJob_IsSignalConnected_Callback kterminallauncherjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kterminallauncherjob_metacall_isbase = false;
    mutable bool kterminallauncherjob_start_isbase = false;
    mutable bool kterminallauncherjob_dokill_isbase = false;
    mutable bool kterminallauncherjob_dosuspend_isbase = false;
    mutable bool kterminallauncherjob_doresume_isbase = false;
    mutable bool kterminallauncherjob_errorstring_isbase = false;
    mutable bool kterminallauncherjob_event_isbase = false;
    mutable bool kterminallauncherjob_eventfilter_isbase = false;
    mutable bool kterminallauncherjob_timerevent_isbase = false;
    mutable bool kterminallauncherjob_childevent_isbase = false;
    mutable bool kterminallauncherjob_customevent_isbase = false;
    mutable bool kterminallauncherjob_connectnotify_isbase = false;
    mutable bool kterminallauncherjob_disconnectnotify_isbase = false;
    mutable bool kterminallauncherjob_setcapabilities_isbase = false;
    mutable bool kterminallauncherjob_isfinished_isbase = false;
    mutable bool kterminallauncherjob_seterror_isbase = false;
    mutable bool kterminallauncherjob_seterrortext_isbase = false;
    mutable bool kterminallauncherjob_setprocessedamount_isbase = false;
    mutable bool kterminallauncherjob_settotalamount_isbase = false;
    mutable bool kterminallauncherjob_setprogressunit_isbase = false;
    mutable bool kterminallauncherjob_setpercent_isbase = false;
    mutable bool kterminallauncherjob_emitresult_isbase = false;
    mutable bool kterminallauncherjob_emitpercent_isbase = false;
    mutable bool kterminallauncherjob_emitspeed_isbase = false;
    mutable bool kterminallauncherjob_startelapsedtimer_isbase = false;
    mutable bool kterminallauncherjob_sender_isbase = false;
    mutable bool kterminallauncherjob_sendersignalindex_isbase = false;
    mutable bool kterminallauncherjob_receivers_isbase = false;
    mutable bool kterminallauncherjob_issignalconnected_isbase = false;

  public:
    VirtualKTerminalLauncherJob(const QString& command) : KTerminalLauncherJob(command) {};
    VirtualKTerminalLauncherJob(const QString& command, QObject* parent) : KTerminalLauncherJob(command, parent) {};

    ~VirtualKTerminalLauncherJob() {
        kterminallauncherjob_metacall_callback = nullptr;
        kterminallauncherjob_start_callback = nullptr;
        kterminallauncherjob_dokill_callback = nullptr;
        kterminallauncherjob_dosuspend_callback = nullptr;
        kterminallauncherjob_doresume_callback = nullptr;
        kterminallauncherjob_errorstring_callback = nullptr;
        kterminallauncherjob_event_callback = nullptr;
        kterminallauncherjob_eventfilter_callback = nullptr;
        kterminallauncherjob_timerevent_callback = nullptr;
        kterminallauncherjob_childevent_callback = nullptr;
        kterminallauncherjob_customevent_callback = nullptr;
        kterminallauncherjob_connectnotify_callback = nullptr;
        kterminallauncherjob_disconnectnotify_callback = nullptr;
        kterminallauncherjob_setcapabilities_callback = nullptr;
        kterminallauncherjob_isfinished_callback = nullptr;
        kterminallauncherjob_seterror_callback = nullptr;
        kterminallauncherjob_seterrortext_callback = nullptr;
        kterminallauncherjob_setprocessedamount_callback = nullptr;
        kterminallauncherjob_settotalamount_callback = nullptr;
        kterminallauncherjob_setprogressunit_callback = nullptr;
        kterminallauncherjob_setpercent_callback = nullptr;
        kterminallauncherjob_emitresult_callback = nullptr;
        kterminallauncherjob_emitpercent_callback = nullptr;
        kterminallauncherjob_emitspeed_callback = nullptr;
        kterminallauncherjob_startelapsedtimer_callback = nullptr;
        kterminallauncherjob_sender_callback = nullptr;
        kterminallauncherjob_sendersignalindex_callback = nullptr;
        kterminallauncherjob_receivers_callback = nullptr;
        kterminallauncherjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKTerminalLauncherJob_Metacall_Callback(KTerminalLauncherJob_Metacall_Callback cb) { kterminallauncherjob_metacall_callback = cb; }
    inline void setKTerminalLauncherJob_Start_Callback(KTerminalLauncherJob_Start_Callback cb) { kterminallauncherjob_start_callback = cb; }
    inline void setKTerminalLauncherJob_DoKill_Callback(KTerminalLauncherJob_DoKill_Callback cb) { kterminallauncherjob_dokill_callback = cb; }
    inline void setKTerminalLauncherJob_DoSuspend_Callback(KTerminalLauncherJob_DoSuspend_Callback cb) { kterminallauncherjob_dosuspend_callback = cb; }
    inline void setKTerminalLauncherJob_DoResume_Callback(KTerminalLauncherJob_DoResume_Callback cb) { kterminallauncherjob_doresume_callback = cb; }
    inline void setKTerminalLauncherJob_ErrorString_Callback(KTerminalLauncherJob_ErrorString_Callback cb) { kterminallauncherjob_errorstring_callback = cb; }
    inline void setKTerminalLauncherJob_Event_Callback(KTerminalLauncherJob_Event_Callback cb) { kterminallauncherjob_event_callback = cb; }
    inline void setKTerminalLauncherJob_EventFilter_Callback(KTerminalLauncherJob_EventFilter_Callback cb) { kterminallauncherjob_eventfilter_callback = cb; }
    inline void setKTerminalLauncherJob_TimerEvent_Callback(KTerminalLauncherJob_TimerEvent_Callback cb) { kterminallauncherjob_timerevent_callback = cb; }
    inline void setKTerminalLauncherJob_ChildEvent_Callback(KTerminalLauncherJob_ChildEvent_Callback cb) { kterminallauncherjob_childevent_callback = cb; }
    inline void setKTerminalLauncherJob_CustomEvent_Callback(KTerminalLauncherJob_CustomEvent_Callback cb) { kterminallauncherjob_customevent_callback = cb; }
    inline void setKTerminalLauncherJob_ConnectNotify_Callback(KTerminalLauncherJob_ConnectNotify_Callback cb) { kterminallauncherjob_connectnotify_callback = cb; }
    inline void setKTerminalLauncherJob_DisconnectNotify_Callback(KTerminalLauncherJob_DisconnectNotify_Callback cb) { kterminallauncherjob_disconnectnotify_callback = cb; }
    inline void setKTerminalLauncherJob_SetCapabilities_Callback(KTerminalLauncherJob_SetCapabilities_Callback cb) { kterminallauncherjob_setcapabilities_callback = cb; }
    inline void setKTerminalLauncherJob_IsFinished_Callback(KTerminalLauncherJob_IsFinished_Callback cb) { kterminallauncherjob_isfinished_callback = cb; }
    inline void setKTerminalLauncherJob_SetError_Callback(KTerminalLauncherJob_SetError_Callback cb) { kterminallauncherjob_seterror_callback = cb; }
    inline void setKTerminalLauncherJob_SetErrorText_Callback(KTerminalLauncherJob_SetErrorText_Callback cb) { kterminallauncherjob_seterrortext_callback = cb; }
    inline void setKTerminalLauncherJob_SetProcessedAmount_Callback(KTerminalLauncherJob_SetProcessedAmount_Callback cb) { kterminallauncherjob_setprocessedamount_callback = cb; }
    inline void setKTerminalLauncherJob_SetTotalAmount_Callback(KTerminalLauncherJob_SetTotalAmount_Callback cb) { kterminallauncherjob_settotalamount_callback = cb; }
    inline void setKTerminalLauncherJob_SetProgressUnit_Callback(KTerminalLauncherJob_SetProgressUnit_Callback cb) { kterminallauncherjob_setprogressunit_callback = cb; }
    inline void setKTerminalLauncherJob_SetPercent_Callback(KTerminalLauncherJob_SetPercent_Callback cb) { kterminallauncherjob_setpercent_callback = cb; }
    inline void setKTerminalLauncherJob_EmitResult_Callback(KTerminalLauncherJob_EmitResult_Callback cb) { kterminallauncherjob_emitresult_callback = cb; }
    inline void setKTerminalLauncherJob_EmitPercent_Callback(KTerminalLauncherJob_EmitPercent_Callback cb) { kterminallauncherjob_emitpercent_callback = cb; }
    inline void setKTerminalLauncherJob_EmitSpeed_Callback(KTerminalLauncherJob_EmitSpeed_Callback cb) { kterminallauncherjob_emitspeed_callback = cb; }
    inline void setKTerminalLauncherJob_StartElapsedTimer_Callback(KTerminalLauncherJob_StartElapsedTimer_Callback cb) { kterminallauncherjob_startelapsedtimer_callback = cb; }
    inline void setKTerminalLauncherJob_Sender_Callback(KTerminalLauncherJob_Sender_Callback cb) { kterminallauncherjob_sender_callback = cb; }
    inline void setKTerminalLauncherJob_SenderSignalIndex_Callback(KTerminalLauncherJob_SenderSignalIndex_Callback cb) { kterminallauncherjob_sendersignalindex_callback = cb; }
    inline void setKTerminalLauncherJob_Receivers_Callback(KTerminalLauncherJob_Receivers_Callback cb) { kterminallauncherjob_receivers_callback = cb; }
    inline void setKTerminalLauncherJob_IsSignalConnected_Callback(KTerminalLauncherJob_IsSignalConnected_Callback cb) { kterminallauncherjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKTerminalLauncherJob_Metacall_IsBase(bool value) const { kterminallauncherjob_metacall_isbase = value; }
    inline void setKTerminalLauncherJob_Start_IsBase(bool value) const { kterminallauncherjob_start_isbase = value; }
    inline void setKTerminalLauncherJob_DoKill_IsBase(bool value) const { kterminallauncherjob_dokill_isbase = value; }
    inline void setKTerminalLauncherJob_DoSuspend_IsBase(bool value) const { kterminallauncherjob_dosuspend_isbase = value; }
    inline void setKTerminalLauncherJob_DoResume_IsBase(bool value) const { kterminallauncherjob_doresume_isbase = value; }
    inline void setKTerminalLauncherJob_ErrorString_IsBase(bool value) const { kterminallauncherjob_errorstring_isbase = value; }
    inline void setKTerminalLauncherJob_Event_IsBase(bool value) const { kterminallauncherjob_event_isbase = value; }
    inline void setKTerminalLauncherJob_EventFilter_IsBase(bool value) const { kterminallauncherjob_eventfilter_isbase = value; }
    inline void setKTerminalLauncherJob_TimerEvent_IsBase(bool value) const { kterminallauncherjob_timerevent_isbase = value; }
    inline void setKTerminalLauncherJob_ChildEvent_IsBase(bool value) const { kterminallauncherjob_childevent_isbase = value; }
    inline void setKTerminalLauncherJob_CustomEvent_IsBase(bool value) const { kterminallauncherjob_customevent_isbase = value; }
    inline void setKTerminalLauncherJob_ConnectNotify_IsBase(bool value) const { kterminallauncherjob_connectnotify_isbase = value; }
    inline void setKTerminalLauncherJob_DisconnectNotify_IsBase(bool value) const { kterminallauncherjob_disconnectnotify_isbase = value; }
    inline void setKTerminalLauncherJob_SetCapabilities_IsBase(bool value) const { kterminallauncherjob_setcapabilities_isbase = value; }
    inline void setKTerminalLauncherJob_IsFinished_IsBase(bool value) const { kterminallauncherjob_isfinished_isbase = value; }
    inline void setKTerminalLauncherJob_SetError_IsBase(bool value) const { kterminallauncherjob_seterror_isbase = value; }
    inline void setKTerminalLauncherJob_SetErrorText_IsBase(bool value) const { kterminallauncherjob_seterrortext_isbase = value; }
    inline void setKTerminalLauncherJob_SetProcessedAmount_IsBase(bool value) const { kterminallauncherjob_setprocessedamount_isbase = value; }
    inline void setKTerminalLauncherJob_SetTotalAmount_IsBase(bool value) const { kterminallauncherjob_settotalamount_isbase = value; }
    inline void setKTerminalLauncherJob_SetProgressUnit_IsBase(bool value) const { kterminallauncherjob_setprogressunit_isbase = value; }
    inline void setKTerminalLauncherJob_SetPercent_IsBase(bool value) const { kterminallauncherjob_setpercent_isbase = value; }
    inline void setKTerminalLauncherJob_EmitResult_IsBase(bool value) const { kterminallauncherjob_emitresult_isbase = value; }
    inline void setKTerminalLauncherJob_EmitPercent_IsBase(bool value) const { kterminallauncherjob_emitpercent_isbase = value; }
    inline void setKTerminalLauncherJob_EmitSpeed_IsBase(bool value) const { kterminallauncherjob_emitspeed_isbase = value; }
    inline void setKTerminalLauncherJob_StartElapsedTimer_IsBase(bool value) const { kterminallauncherjob_startelapsedtimer_isbase = value; }
    inline void setKTerminalLauncherJob_Sender_IsBase(bool value) const { kterminallauncherjob_sender_isbase = value; }
    inline void setKTerminalLauncherJob_SenderSignalIndex_IsBase(bool value) const { kterminallauncherjob_sendersignalindex_isbase = value; }
    inline void setKTerminalLauncherJob_Receivers_IsBase(bool value) const { kterminallauncherjob_receivers_isbase = value; }
    inline void setKTerminalLauncherJob_IsSignalConnected_IsBase(bool value) const { kterminallauncherjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kterminallauncherjob_metacall_isbase) {
            kterminallauncherjob_metacall_isbase = false;
            return KTerminalLauncherJob::qt_metacall(param1, param2, param3);
        } else if (kterminallauncherjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kterminallauncherjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTerminalLauncherJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kterminallauncherjob_start_isbase) {
            kterminallauncherjob_start_isbase = false;
            KTerminalLauncherJob::start();
        } else if (kterminallauncherjob_start_callback != nullptr) {
            kterminallauncherjob_start_callback();
        } else {
            KTerminalLauncherJob::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kterminallauncherjob_dokill_isbase) {
            kterminallauncherjob_dokill_isbase = false;
            return KTerminalLauncherJob::doKill();
        } else if (kterminallauncherjob_dokill_callback != nullptr) {
            bool callback_ret = kterminallauncherjob_dokill_callback();
            return callback_ret;
        } else {
            return KTerminalLauncherJob::doKill();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kterminallauncherjob_dosuspend_isbase) {
            kterminallauncherjob_dosuspend_isbase = false;
            return KTerminalLauncherJob::doSuspend();
        } else if (kterminallauncherjob_dosuspend_callback != nullptr) {
            bool callback_ret = kterminallauncherjob_dosuspend_callback();
            return callback_ret;
        } else {
            return KTerminalLauncherJob::doSuspend();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kterminallauncherjob_doresume_isbase) {
            kterminallauncherjob_doresume_isbase = false;
            return KTerminalLauncherJob::doResume();
        } else if (kterminallauncherjob_doresume_callback != nullptr) {
            bool callback_ret = kterminallauncherjob_doresume_callback();
            return callback_ret;
        } else {
            return KTerminalLauncherJob::doResume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kterminallauncherjob_errorstring_isbase) {
            kterminallauncherjob_errorstring_isbase = false;
            return KTerminalLauncherJob::errorString();
        } else if (kterminallauncherjob_errorstring_callback != nullptr) {
            const char* callback_ret = kterminallauncherjob_errorstring_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KTerminalLauncherJob::errorString();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kterminallauncherjob_event_isbase) {
            kterminallauncherjob_event_isbase = false;
            return KTerminalLauncherJob::event(event);
        } else if (kterminallauncherjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kterminallauncherjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTerminalLauncherJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kterminallauncherjob_eventfilter_isbase) {
            kterminallauncherjob_eventfilter_isbase = false;
            return KTerminalLauncherJob::eventFilter(watched, event);
        } else if (kterminallauncherjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kterminallauncherjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTerminalLauncherJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kterminallauncherjob_timerevent_isbase) {
            kterminallauncherjob_timerevent_isbase = false;
            KTerminalLauncherJob::timerEvent(event);
        } else if (kterminallauncherjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kterminallauncherjob_timerevent_callback(this, cbval1);
        } else {
            KTerminalLauncherJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kterminallauncherjob_childevent_isbase) {
            kterminallauncherjob_childevent_isbase = false;
            KTerminalLauncherJob::childEvent(event);
        } else if (kterminallauncherjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kterminallauncherjob_childevent_callback(this, cbval1);
        } else {
            KTerminalLauncherJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kterminallauncherjob_customevent_isbase) {
            kterminallauncherjob_customevent_isbase = false;
            KTerminalLauncherJob::customEvent(event);
        } else if (kterminallauncherjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kterminallauncherjob_customevent_callback(this, cbval1);
        } else {
            KTerminalLauncherJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kterminallauncherjob_connectnotify_isbase) {
            kterminallauncherjob_connectnotify_isbase = false;
            KTerminalLauncherJob::connectNotify(signal);
        } else if (kterminallauncherjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kterminallauncherjob_connectnotify_callback(this, cbval1);
        } else {
            KTerminalLauncherJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kterminallauncherjob_disconnectnotify_isbase) {
            kterminallauncherjob_disconnectnotify_isbase = false;
            KTerminalLauncherJob::disconnectNotify(signal);
        } else if (kterminallauncherjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kterminallauncherjob_disconnectnotify_callback(this, cbval1);
        } else {
            KTerminalLauncherJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kterminallauncherjob_setcapabilities_isbase) {
            kterminallauncherjob_setcapabilities_isbase = false;
            KTerminalLauncherJob::setCapabilities(capabilities);
        } else if (kterminallauncherjob_setcapabilities_callback != nullptr) {
            int cbval1 = static_cast<int>(capabilities);

            kterminallauncherjob_setcapabilities_callback(this, cbval1);
        } else {
            KTerminalLauncherJob::setCapabilities(capabilities);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kterminallauncherjob_isfinished_isbase) {
            kterminallauncherjob_isfinished_isbase = false;
            return KTerminalLauncherJob::isFinished();
        } else if (kterminallauncherjob_isfinished_callback != nullptr) {
            bool callback_ret = kterminallauncherjob_isfinished_callback();
            return callback_ret;
        } else {
            return KTerminalLauncherJob::isFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kterminallauncherjob_seterror_isbase) {
            kterminallauncherjob_seterror_isbase = false;
            KTerminalLauncherJob::setError(errorCode);
        } else if (kterminallauncherjob_seterror_callback != nullptr) {
            int cbval1 = errorCode;

            kterminallauncherjob_seterror_callback(this, cbval1);
        } else {
            KTerminalLauncherJob::setError(errorCode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kterminallauncherjob_seterrortext_isbase) {
            kterminallauncherjob_seterrortext_isbase = false;
            KTerminalLauncherJob::setErrorText(errorText);
        } else if (kterminallauncherjob_seterrortext_callback != nullptr) {
            const QString errorText_ret = errorText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorText_b = errorText_ret.toUtf8();
            libqt_string errorText_str;
            errorText_str.len = errorText_b.length();
            errorText_str.data = static_cast<const char*>(malloc(errorText_str.len + 1));
            memcpy((void*)errorText_str.data, errorText_b.data(), errorText_str.len);
            ((char*)errorText_str.data)[errorText_str.len] = '\0';
            libqt_string cbval1 = errorText_str;

            kterminallauncherjob_seterrortext_callback(this, cbval1);
        } else {
            KTerminalLauncherJob::setErrorText(errorText);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kterminallauncherjob_setprocessedamount_isbase) {
            kterminallauncherjob_setprocessedamount_isbase = false;
            KTerminalLauncherJob::setProcessedAmount(unit, amount);
        } else if (kterminallauncherjob_setprocessedamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kterminallauncherjob_setprocessedamount_callback(this, cbval1, cbval2);
        } else {
            KTerminalLauncherJob::setProcessedAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kterminallauncherjob_settotalamount_isbase) {
            kterminallauncherjob_settotalamount_isbase = false;
            KTerminalLauncherJob::setTotalAmount(unit, amount);
        } else if (kterminallauncherjob_settotalamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kterminallauncherjob_settotalamount_callback(this, cbval1, cbval2);
        } else {
            KTerminalLauncherJob::setTotalAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kterminallauncherjob_setprogressunit_isbase) {
            kterminallauncherjob_setprogressunit_isbase = false;
            KTerminalLauncherJob::setProgressUnit(unit);
        } else if (kterminallauncherjob_setprogressunit_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);

            kterminallauncherjob_setprogressunit_callback(this, cbval1);
        } else {
            KTerminalLauncherJob::setProgressUnit(unit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kterminallauncherjob_setpercent_isbase) {
            kterminallauncherjob_setpercent_isbase = false;
            KTerminalLauncherJob::setPercent(percentage);
        } else if (kterminallauncherjob_setpercent_callback != nullptr) {
            unsigned long cbval1 = percentage;

            kterminallauncherjob_setpercent_callback(this, cbval1);
        } else {
            KTerminalLauncherJob::setPercent(percentage);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kterminallauncherjob_emitresult_isbase) {
            kterminallauncherjob_emitresult_isbase = false;
            KTerminalLauncherJob::emitResult();
        } else if (kterminallauncherjob_emitresult_callback != nullptr) {
            kterminallauncherjob_emitresult_callback();
        } else {
            KTerminalLauncherJob::emitResult();
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kterminallauncherjob_emitpercent_isbase) {
            kterminallauncherjob_emitpercent_isbase = false;
            KTerminalLauncherJob::emitPercent(processedAmount, totalAmount);
        } else if (kterminallauncherjob_emitpercent_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            kterminallauncherjob_emitpercent_callback(this, cbval1, cbval2);
        } else {
            KTerminalLauncherJob::emitPercent(processedAmount, totalAmount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kterminallauncherjob_emitspeed_isbase) {
            kterminallauncherjob_emitspeed_isbase = false;
            KTerminalLauncherJob::emitSpeed(speed);
        } else if (kterminallauncherjob_emitspeed_callback != nullptr) {
            unsigned long cbval1 = speed;

            kterminallauncherjob_emitspeed_callback(this, cbval1);
        } else {
            KTerminalLauncherJob::emitSpeed(speed);
        }
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kterminallauncherjob_startelapsedtimer_isbase) {
            kterminallauncherjob_startelapsedtimer_isbase = false;
            KTerminalLauncherJob::startElapsedTimer();
        } else if (kterminallauncherjob_startelapsedtimer_callback != nullptr) {
            kterminallauncherjob_startelapsedtimer_callback();
        } else {
            KTerminalLauncherJob::startElapsedTimer();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kterminallauncherjob_sender_isbase) {
            kterminallauncherjob_sender_isbase = false;
            return KTerminalLauncherJob::sender();
        } else if (kterminallauncherjob_sender_callback != nullptr) {
            QObject* callback_ret = kterminallauncherjob_sender_callback();
            return callback_ret;
        } else {
            return KTerminalLauncherJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kterminallauncherjob_sendersignalindex_isbase) {
            kterminallauncherjob_sendersignalindex_isbase = false;
            return KTerminalLauncherJob::senderSignalIndex();
        } else if (kterminallauncherjob_sendersignalindex_callback != nullptr) {
            int callback_ret = kterminallauncherjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTerminalLauncherJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kterminallauncherjob_receivers_isbase) {
            kterminallauncherjob_receivers_isbase = false;
            return KTerminalLauncherJob::receivers(signal);
        } else if (kterminallauncherjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kterminallauncherjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTerminalLauncherJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kterminallauncherjob_issignalconnected_isbase) {
            kterminallauncherjob_issignalconnected_isbase = false;
            return KTerminalLauncherJob::isSignalConnected(signal);
        } else if (kterminallauncherjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kterminallauncherjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTerminalLauncherJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KTerminalLauncherJob_DoKill(KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_QBaseDoKill(KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_DoSuspend(KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_QBaseDoSuspend(KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_DoResume(KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_QBaseDoResume(KTerminalLauncherJob* self);
    friend void KTerminalLauncherJob_TimerEvent(KTerminalLauncherJob* self, QTimerEvent* event);
    friend void KTerminalLauncherJob_QBaseTimerEvent(KTerminalLauncherJob* self, QTimerEvent* event);
    friend void KTerminalLauncherJob_ChildEvent(KTerminalLauncherJob* self, QChildEvent* event);
    friend void KTerminalLauncherJob_QBaseChildEvent(KTerminalLauncherJob* self, QChildEvent* event);
    friend void KTerminalLauncherJob_CustomEvent(KTerminalLauncherJob* self, QEvent* event);
    friend void KTerminalLauncherJob_QBaseCustomEvent(KTerminalLauncherJob* self, QEvent* event);
    friend void KTerminalLauncherJob_ConnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
    friend void KTerminalLauncherJob_QBaseConnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
    friend void KTerminalLauncherJob_DisconnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
    friend void KTerminalLauncherJob_QBaseDisconnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
    friend void KTerminalLauncherJob_SetCapabilities(KTerminalLauncherJob* self, int capabilities);
    friend void KTerminalLauncherJob_QBaseSetCapabilities(KTerminalLauncherJob* self, int capabilities);
    friend bool KTerminalLauncherJob_IsFinished(const KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_QBaseIsFinished(const KTerminalLauncherJob* self);
    friend void KTerminalLauncherJob_SetError(KTerminalLauncherJob* self, int errorCode);
    friend void KTerminalLauncherJob_QBaseSetError(KTerminalLauncherJob* self, int errorCode);
    friend void KTerminalLauncherJob_SetErrorText(KTerminalLauncherJob* self, const libqt_string errorText);
    friend void KTerminalLauncherJob_QBaseSetErrorText(KTerminalLauncherJob* self, const libqt_string errorText);
    friend void KTerminalLauncherJob_SetProcessedAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount);
    friend void KTerminalLauncherJob_QBaseSetProcessedAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount);
    friend void KTerminalLauncherJob_SetTotalAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount);
    friend void KTerminalLauncherJob_QBaseSetTotalAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount);
    friend void KTerminalLauncherJob_SetProgressUnit(KTerminalLauncherJob* self, int unit);
    friend void KTerminalLauncherJob_QBaseSetProgressUnit(KTerminalLauncherJob* self, int unit);
    friend void KTerminalLauncherJob_SetPercent(KTerminalLauncherJob* self, unsigned long percentage);
    friend void KTerminalLauncherJob_QBaseSetPercent(KTerminalLauncherJob* self, unsigned long percentage);
    friend void KTerminalLauncherJob_EmitResult(KTerminalLauncherJob* self);
    friend void KTerminalLauncherJob_QBaseEmitResult(KTerminalLauncherJob* self);
    friend void KTerminalLauncherJob_EmitPercent(KTerminalLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KTerminalLauncherJob_QBaseEmitPercent(KTerminalLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KTerminalLauncherJob_EmitSpeed(KTerminalLauncherJob* self, unsigned long speed);
    friend void KTerminalLauncherJob_QBaseEmitSpeed(KTerminalLauncherJob* self, unsigned long speed);
    friend void KTerminalLauncherJob_StartElapsedTimer(KTerminalLauncherJob* self);
    friend void KTerminalLauncherJob_QBaseStartElapsedTimer(KTerminalLauncherJob* self);
    friend QObject* KTerminalLauncherJob_Sender(const KTerminalLauncherJob* self);
    friend QObject* KTerminalLauncherJob_QBaseSender(const KTerminalLauncherJob* self);
    friend int KTerminalLauncherJob_SenderSignalIndex(const KTerminalLauncherJob* self);
    friend int KTerminalLauncherJob_QBaseSenderSignalIndex(const KTerminalLauncherJob* self);
    friend int KTerminalLauncherJob_Receivers(const KTerminalLauncherJob* self, const char* signal);
    friend int KTerminalLauncherJob_QBaseReceivers(const KTerminalLauncherJob* self, const char* signal);
    friend bool KTerminalLauncherJob_IsSignalConnected(const KTerminalLauncherJob* self, const QMetaMethod* signal);
    friend bool KTerminalLauncherJob_QBaseIsSignalConnected(const KTerminalLauncherJob* self, const QMetaMethod* signal);
};

#endif
