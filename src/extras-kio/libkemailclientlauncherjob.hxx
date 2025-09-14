#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKEMAILCLIENTLAUNCHERJOB_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKEMAILCLIENTLAUNCHERJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KEMailClientLauncherJob so that we can call protected methods
class VirtualKEMailClientLauncherJob final : public KEMailClientLauncherJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKEMailClientLauncherJob = true;

    // Virtual class public types (including callbacks)
    using KEMailClientLauncherJob_Metacall_Callback = int (*)(KEMailClientLauncherJob*, int, int, void**);
    using KEMailClientLauncherJob_Start_Callback = void (*)();
    using KEMailClientLauncherJob_DoKill_Callback = bool (*)();
    using KEMailClientLauncherJob_DoSuspend_Callback = bool (*)();
    using KEMailClientLauncherJob_DoResume_Callback = bool (*)();
    using KEMailClientLauncherJob_ErrorString_Callback = const char* (*)();
    using KEMailClientLauncherJob_Event_Callback = bool (*)(KEMailClientLauncherJob*, QEvent*);
    using KEMailClientLauncherJob_EventFilter_Callback = bool (*)(KEMailClientLauncherJob*, QObject*, QEvent*);
    using KEMailClientLauncherJob_TimerEvent_Callback = void (*)(KEMailClientLauncherJob*, QTimerEvent*);
    using KEMailClientLauncherJob_ChildEvent_Callback = void (*)(KEMailClientLauncherJob*, QChildEvent*);
    using KEMailClientLauncherJob_CustomEvent_Callback = void (*)(KEMailClientLauncherJob*, QEvent*);
    using KEMailClientLauncherJob_ConnectNotify_Callback = void (*)(KEMailClientLauncherJob*, QMetaMethod*);
    using KEMailClientLauncherJob_DisconnectNotify_Callback = void (*)(KEMailClientLauncherJob*, QMetaMethod*);
    using KEMailClientLauncherJob_SetCapabilities_Callback = void (*)(KEMailClientLauncherJob*, int);
    using KEMailClientLauncherJob_IsFinished_Callback = bool (*)();
    using KEMailClientLauncherJob_SetError_Callback = void (*)(KEMailClientLauncherJob*, int);
    using KEMailClientLauncherJob_SetErrorText_Callback = void (*)(KEMailClientLauncherJob*, libqt_string);
    using KEMailClientLauncherJob_SetProcessedAmount_Callback = void (*)(KEMailClientLauncherJob*, int, unsigned long long);
    using KEMailClientLauncherJob_SetTotalAmount_Callback = void (*)(KEMailClientLauncherJob*, int, unsigned long long);
    using KEMailClientLauncherJob_SetProgressUnit_Callback = void (*)(KEMailClientLauncherJob*, int);
    using KEMailClientLauncherJob_SetPercent_Callback = void (*)(KEMailClientLauncherJob*, unsigned long);
    using KEMailClientLauncherJob_EmitResult_Callback = void (*)();
    using KEMailClientLauncherJob_EmitPercent_Callback = void (*)(KEMailClientLauncherJob*, unsigned long long, unsigned long long);
    using KEMailClientLauncherJob_EmitSpeed_Callback = void (*)(KEMailClientLauncherJob*, unsigned long);
    using KEMailClientLauncherJob_StartElapsedTimer_Callback = void (*)();
    using KEMailClientLauncherJob_Sender_Callback = QObject* (*)();
    using KEMailClientLauncherJob_SenderSignalIndex_Callback = int (*)();
    using KEMailClientLauncherJob_Receivers_Callback = int (*)(const KEMailClientLauncherJob*, const char*);
    using KEMailClientLauncherJob_IsSignalConnected_Callback = bool (*)(const KEMailClientLauncherJob*, QMetaMethod*);

  protected:
    // Instance callback storage
    KEMailClientLauncherJob_Metacall_Callback kemailclientlauncherjob_metacall_callback = nullptr;
    KEMailClientLauncherJob_Start_Callback kemailclientlauncherjob_start_callback = nullptr;
    KEMailClientLauncherJob_DoKill_Callback kemailclientlauncherjob_dokill_callback = nullptr;
    KEMailClientLauncherJob_DoSuspend_Callback kemailclientlauncherjob_dosuspend_callback = nullptr;
    KEMailClientLauncherJob_DoResume_Callback kemailclientlauncherjob_doresume_callback = nullptr;
    KEMailClientLauncherJob_ErrorString_Callback kemailclientlauncherjob_errorstring_callback = nullptr;
    KEMailClientLauncherJob_Event_Callback kemailclientlauncherjob_event_callback = nullptr;
    KEMailClientLauncherJob_EventFilter_Callback kemailclientlauncherjob_eventfilter_callback = nullptr;
    KEMailClientLauncherJob_TimerEvent_Callback kemailclientlauncherjob_timerevent_callback = nullptr;
    KEMailClientLauncherJob_ChildEvent_Callback kemailclientlauncherjob_childevent_callback = nullptr;
    KEMailClientLauncherJob_CustomEvent_Callback kemailclientlauncherjob_customevent_callback = nullptr;
    KEMailClientLauncherJob_ConnectNotify_Callback kemailclientlauncherjob_connectnotify_callback = nullptr;
    KEMailClientLauncherJob_DisconnectNotify_Callback kemailclientlauncherjob_disconnectnotify_callback = nullptr;
    KEMailClientLauncherJob_SetCapabilities_Callback kemailclientlauncherjob_setcapabilities_callback = nullptr;
    KEMailClientLauncherJob_IsFinished_Callback kemailclientlauncherjob_isfinished_callback = nullptr;
    KEMailClientLauncherJob_SetError_Callback kemailclientlauncherjob_seterror_callback = nullptr;
    KEMailClientLauncherJob_SetErrorText_Callback kemailclientlauncherjob_seterrortext_callback = nullptr;
    KEMailClientLauncherJob_SetProcessedAmount_Callback kemailclientlauncherjob_setprocessedamount_callback = nullptr;
    KEMailClientLauncherJob_SetTotalAmount_Callback kemailclientlauncherjob_settotalamount_callback = nullptr;
    KEMailClientLauncherJob_SetProgressUnit_Callback kemailclientlauncherjob_setprogressunit_callback = nullptr;
    KEMailClientLauncherJob_SetPercent_Callback kemailclientlauncherjob_setpercent_callback = nullptr;
    KEMailClientLauncherJob_EmitResult_Callback kemailclientlauncherjob_emitresult_callback = nullptr;
    KEMailClientLauncherJob_EmitPercent_Callback kemailclientlauncherjob_emitpercent_callback = nullptr;
    KEMailClientLauncherJob_EmitSpeed_Callback kemailclientlauncherjob_emitspeed_callback = nullptr;
    KEMailClientLauncherJob_StartElapsedTimer_Callback kemailclientlauncherjob_startelapsedtimer_callback = nullptr;
    KEMailClientLauncherJob_Sender_Callback kemailclientlauncherjob_sender_callback = nullptr;
    KEMailClientLauncherJob_SenderSignalIndex_Callback kemailclientlauncherjob_sendersignalindex_callback = nullptr;
    KEMailClientLauncherJob_Receivers_Callback kemailclientlauncherjob_receivers_callback = nullptr;
    KEMailClientLauncherJob_IsSignalConnected_Callback kemailclientlauncherjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kemailclientlauncherjob_metacall_isbase = false;
    mutable bool kemailclientlauncherjob_start_isbase = false;
    mutable bool kemailclientlauncherjob_dokill_isbase = false;
    mutable bool kemailclientlauncherjob_dosuspend_isbase = false;
    mutable bool kemailclientlauncherjob_doresume_isbase = false;
    mutable bool kemailclientlauncherjob_errorstring_isbase = false;
    mutable bool kemailclientlauncherjob_event_isbase = false;
    mutable bool kemailclientlauncherjob_eventfilter_isbase = false;
    mutable bool kemailclientlauncherjob_timerevent_isbase = false;
    mutable bool kemailclientlauncherjob_childevent_isbase = false;
    mutable bool kemailclientlauncherjob_customevent_isbase = false;
    mutable bool kemailclientlauncherjob_connectnotify_isbase = false;
    mutable bool kemailclientlauncherjob_disconnectnotify_isbase = false;
    mutable bool kemailclientlauncherjob_setcapabilities_isbase = false;
    mutable bool kemailclientlauncherjob_isfinished_isbase = false;
    mutable bool kemailclientlauncherjob_seterror_isbase = false;
    mutable bool kemailclientlauncherjob_seterrortext_isbase = false;
    mutable bool kemailclientlauncherjob_setprocessedamount_isbase = false;
    mutable bool kemailclientlauncherjob_settotalamount_isbase = false;
    mutable bool kemailclientlauncherjob_setprogressunit_isbase = false;
    mutable bool kemailclientlauncherjob_setpercent_isbase = false;
    mutable bool kemailclientlauncherjob_emitresult_isbase = false;
    mutable bool kemailclientlauncherjob_emitpercent_isbase = false;
    mutable bool kemailclientlauncherjob_emitspeed_isbase = false;
    mutable bool kemailclientlauncherjob_startelapsedtimer_isbase = false;
    mutable bool kemailclientlauncherjob_sender_isbase = false;
    mutable bool kemailclientlauncherjob_sendersignalindex_isbase = false;
    mutable bool kemailclientlauncherjob_receivers_isbase = false;
    mutable bool kemailclientlauncherjob_issignalconnected_isbase = false;

  public:
    VirtualKEMailClientLauncherJob() : KEMailClientLauncherJob() {};
    VirtualKEMailClientLauncherJob(QObject* parent) : KEMailClientLauncherJob(parent) {};

    ~VirtualKEMailClientLauncherJob() {
        kemailclientlauncherjob_metacall_callback = nullptr;
        kemailclientlauncherjob_start_callback = nullptr;
        kemailclientlauncherjob_dokill_callback = nullptr;
        kemailclientlauncherjob_dosuspend_callback = nullptr;
        kemailclientlauncherjob_doresume_callback = nullptr;
        kemailclientlauncherjob_errorstring_callback = nullptr;
        kemailclientlauncherjob_event_callback = nullptr;
        kemailclientlauncherjob_eventfilter_callback = nullptr;
        kemailclientlauncherjob_timerevent_callback = nullptr;
        kemailclientlauncherjob_childevent_callback = nullptr;
        kemailclientlauncherjob_customevent_callback = nullptr;
        kemailclientlauncherjob_connectnotify_callback = nullptr;
        kemailclientlauncherjob_disconnectnotify_callback = nullptr;
        kemailclientlauncherjob_setcapabilities_callback = nullptr;
        kemailclientlauncherjob_isfinished_callback = nullptr;
        kemailclientlauncherjob_seterror_callback = nullptr;
        kemailclientlauncherjob_seterrortext_callback = nullptr;
        kemailclientlauncherjob_setprocessedamount_callback = nullptr;
        kemailclientlauncherjob_settotalamount_callback = nullptr;
        kemailclientlauncherjob_setprogressunit_callback = nullptr;
        kemailclientlauncherjob_setpercent_callback = nullptr;
        kemailclientlauncherjob_emitresult_callback = nullptr;
        kemailclientlauncherjob_emitpercent_callback = nullptr;
        kemailclientlauncherjob_emitspeed_callback = nullptr;
        kemailclientlauncherjob_startelapsedtimer_callback = nullptr;
        kemailclientlauncherjob_sender_callback = nullptr;
        kemailclientlauncherjob_sendersignalindex_callback = nullptr;
        kemailclientlauncherjob_receivers_callback = nullptr;
        kemailclientlauncherjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKEMailClientLauncherJob_Metacall_Callback(KEMailClientLauncherJob_Metacall_Callback cb) { kemailclientlauncherjob_metacall_callback = cb; }
    inline void setKEMailClientLauncherJob_Start_Callback(KEMailClientLauncherJob_Start_Callback cb) { kemailclientlauncherjob_start_callback = cb; }
    inline void setKEMailClientLauncherJob_DoKill_Callback(KEMailClientLauncherJob_DoKill_Callback cb) { kemailclientlauncherjob_dokill_callback = cb; }
    inline void setKEMailClientLauncherJob_DoSuspend_Callback(KEMailClientLauncherJob_DoSuspend_Callback cb) { kemailclientlauncherjob_dosuspend_callback = cb; }
    inline void setKEMailClientLauncherJob_DoResume_Callback(KEMailClientLauncherJob_DoResume_Callback cb) { kemailclientlauncherjob_doresume_callback = cb; }
    inline void setKEMailClientLauncherJob_ErrorString_Callback(KEMailClientLauncherJob_ErrorString_Callback cb) { kemailclientlauncherjob_errorstring_callback = cb; }
    inline void setKEMailClientLauncherJob_Event_Callback(KEMailClientLauncherJob_Event_Callback cb) { kemailclientlauncherjob_event_callback = cb; }
    inline void setKEMailClientLauncherJob_EventFilter_Callback(KEMailClientLauncherJob_EventFilter_Callback cb) { kemailclientlauncherjob_eventfilter_callback = cb; }
    inline void setKEMailClientLauncherJob_TimerEvent_Callback(KEMailClientLauncherJob_TimerEvent_Callback cb) { kemailclientlauncherjob_timerevent_callback = cb; }
    inline void setKEMailClientLauncherJob_ChildEvent_Callback(KEMailClientLauncherJob_ChildEvent_Callback cb) { kemailclientlauncherjob_childevent_callback = cb; }
    inline void setKEMailClientLauncherJob_CustomEvent_Callback(KEMailClientLauncherJob_CustomEvent_Callback cb) { kemailclientlauncherjob_customevent_callback = cb; }
    inline void setKEMailClientLauncherJob_ConnectNotify_Callback(KEMailClientLauncherJob_ConnectNotify_Callback cb) { kemailclientlauncherjob_connectnotify_callback = cb; }
    inline void setKEMailClientLauncherJob_DisconnectNotify_Callback(KEMailClientLauncherJob_DisconnectNotify_Callback cb) { kemailclientlauncherjob_disconnectnotify_callback = cb; }
    inline void setKEMailClientLauncherJob_SetCapabilities_Callback(KEMailClientLauncherJob_SetCapabilities_Callback cb) { kemailclientlauncherjob_setcapabilities_callback = cb; }
    inline void setKEMailClientLauncherJob_IsFinished_Callback(KEMailClientLauncherJob_IsFinished_Callback cb) { kemailclientlauncherjob_isfinished_callback = cb; }
    inline void setKEMailClientLauncherJob_SetError_Callback(KEMailClientLauncherJob_SetError_Callback cb) { kemailclientlauncherjob_seterror_callback = cb; }
    inline void setKEMailClientLauncherJob_SetErrorText_Callback(KEMailClientLauncherJob_SetErrorText_Callback cb) { kemailclientlauncherjob_seterrortext_callback = cb; }
    inline void setKEMailClientLauncherJob_SetProcessedAmount_Callback(KEMailClientLauncherJob_SetProcessedAmount_Callback cb) { kemailclientlauncherjob_setprocessedamount_callback = cb; }
    inline void setKEMailClientLauncherJob_SetTotalAmount_Callback(KEMailClientLauncherJob_SetTotalAmount_Callback cb) { kemailclientlauncherjob_settotalamount_callback = cb; }
    inline void setKEMailClientLauncherJob_SetProgressUnit_Callback(KEMailClientLauncherJob_SetProgressUnit_Callback cb) { kemailclientlauncherjob_setprogressunit_callback = cb; }
    inline void setKEMailClientLauncherJob_SetPercent_Callback(KEMailClientLauncherJob_SetPercent_Callback cb) { kemailclientlauncherjob_setpercent_callback = cb; }
    inline void setKEMailClientLauncherJob_EmitResult_Callback(KEMailClientLauncherJob_EmitResult_Callback cb) { kemailclientlauncherjob_emitresult_callback = cb; }
    inline void setKEMailClientLauncherJob_EmitPercent_Callback(KEMailClientLauncherJob_EmitPercent_Callback cb) { kemailclientlauncherjob_emitpercent_callback = cb; }
    inline void setKEMailClientLauncherJob_EmitSpeed_Callback(KEMailClientLauncherJob_EmitSpeed_Callback cb) { kemailclientlauncherjob_emitspeed_callback = cb; }
    inline void setKEMailClientLauncherJob_StartElapsedTimer_Callback(KEMailClientLauncherJob_StartElapsedTimer_Callback cb) { kemailclientlauncherjob_startelapsedtimer_callback = cb; }
    inline void setKEMailClientLauncherJob_Sender_Callback(KEMailClientLauncherJob_Sender_Callback cb) { kemailclientlauncherjob_sender_callback = cb; }
    inline void setKEMailClientLauncherJob_SenderSignalIndex_Callback(KEMailClientLauncherJob_SenderSignalIndex_Callback cb) { kemailclientlauncherjob_sendersignalindex_callback = cb; }
    inline void setKEMailClientLauncherJob_Receivers_Callback(KEMailClientLauncherJob_Receivers_Callback cb) { kemailclientlauncherjob_receivers_callback = cb; }
    inline void setKEMailClientLauncherJob_IsSignalConnected_Callback(KEMailClientLauncherJob_IsSignalConnected_Callback cb) { kemailclientlauncherjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKEMailClientLauncherJob_Metacall_IsBase(bool value) const { kemailclientlauncherjob_metacall_isbase = value; }
    inline void setKEMailClientLauncherJob_Start_IsBase(bool value) const { kemailclientlauncherjob_start_isbase = value; }
    inline void setKEMailClientLauncherJob_DoKill_IsBase(bool value) const { kemailclientlauncherjob_dokill_isbase = value; }
    inline void setKEMailClientLauncherJob_DoSuspend_IsBase(bool value) const { kemailclientlauncherjob_dosuspend_isbase = value; }
    inline void setKEMailClientLauncherJob_DoResume_IsBase(bool value) const { kemailclientlauncherjob_doresume_isbase = value; }
    inline void setKEMailClientLauncherJob_ErrorString_IsBase(bool value) const { kemailclientlauncherjob_errorstring_isbase = value; }
    inline void setKEMailClientLauncherJob_Event_IsBase(bool value) const { kemailclientlauncherjob_event_isbase = value; }
    inline void setKEMailClientLauncherJob_EventFilter_IsBase(bool value) const { kemailclientlauncherjob_eventfilter_isbase = value; }
    inline void setKEMailClientLauncherJob_TimerEvent_IsBase(bool value) const { kemailclientlauncherjob_timerevent_isbase = value; }
    inline void setKEMailClientLauncherJob_ChildEvent_IsBase(bool value) const { kemailclientlauncherjob_childevent_isbase = value; }
    inline void setKEMailClientLauncherJob_CustomEvent_IsBase(bool value) const { kemailclientlauncherjob_customevent_isbase = value; }
    inline void setKEMailClientLauncherJob_ConnectNotify_IsBase(bool value) const { kemailclientlauncherjob_connectnotify_isbase = value; }
    inline void setKEMailClientLauncherJob_DisconnectNotify_IsBase(bool value) const { kemailclientlauncherjob_disconnectnotify_isbase = value; }
    inline void setKEMailClientLauncherJob_SetCapabilities_IsBase(bool value) const { kemailclientlauncherjob_setcapabilities_isbase = value; }
    inline void setKEMailClientLauncherJob_IsFinished_IsBase(bool value) const { kemailclientlauncherjob_isfinished_isbase = value; }
    inline void setKEMailClientLauncherJob_SetError_IsBase(bool value) const { kemailclientlauncherjob_seterror_isbase = value; }
    inline void setKEMailClientLauncherJob_SetErrorText_IsBase(bool value) const { kemailclientlauncherjob_seterrortext_isbase = value; }
    inline void setKEMailClientLauncherJob_SetProcessedAmount_IsBase(bool value) const { kemailclientlauncherjob_setprocessedamount_isbase = value; }
    inline void setKEMailClientLauncherJob_SetTotalAmount_IsBase(bool value) const { kemailclientlauncherjob_settotalamount_isbase = value; }
    inline void setKEMailClientLauncherJob_SetProgressUnit_IsBase(bool value) const { kemailclientlauncherjob_setprogressunit_isbase = value; }
    inline void setKEMailClientLauncherJob_SetPercent_IsBase(bool value) const { kemailclientlauncherjob_setpercent_isbase = value; }
    inline void setKEMailClientLauncherJob_EmitResult_IsBase(bool value) const { kemailclientlauncherjob_emitresult_isbase = value; }
    inline void setKEMailClientLauncherJob_EmitPercent_IsBase(bool value) const { kemailclientlauncherjob_emitpercent_isbase = value; }
    inline void setKEMailClientLauncherJob_EmitSpeed_IsBase(bool value) const { kemailclientlauncherjob_emitspeed_isbase = value; }
    inline void setKEMailClientLauncherJob_StartElapsedTimer_IsBase(bool value) const { kemailclientlauncherjob_startelapsedtimer_isbase = value; }
    inline void setKEMailClientLauncherJob_Sender_IsBase(bool value) const { kemailclientlauncherjob_sender_isbase = value; }
    inline void setKEMailClientLauncherJob_SenderSignalIndex_IsBase(bool value) const { kemailclientlauncherjob_sendersignalindex_isbase = value; }
    inline void setKEMailClientLauncherJob_Receivers_IsBase(bool value) const { kemailclientlauncherjob_receivers_isbase = value; }
    inline void setKEMailClientLauncherJob_IsSignalConnected_IsBase(bool value) const { kemailclientlauncherjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kemailclientlauncherjob_metacall_isbase) {
            kemailclientlauncherjob_metacall_isbase = false;
            return KEMailClientLauncherJob::qt_metacall(param1, param2, param3);
        } else if (kemailclientlauncherjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kemailclientlauncherjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KEMailClientLauncherJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kemailclientlauncherjob_start_isbase) {
            kemailclientlauncherjob_start_isbase = false;
            KEMailClientLauncherJob::start();
        } else if (kemailclientlauncherjob_start_callback != nullptr) {
            kemailclientlauncherjob_start_callback();
        } else {
            KEMailClientLauncherJob::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kemailclientlauncherjob_dokill_isbase) {
            kemailclientlauncherjob_dokill_isbase = false;
            return KEMailClientLauncherJob::doKill();
        } else if (kemailclientlauncherjob_dokill_callback != nullptr) {
            bool callback_ret = kemailclientlauncherjob_dokill_callback();
            return callback_ret;
        } else {
            return KEMailClientLauncherJob::doKill();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kemailclientlauncherjob_dosuspend_isbase) {
            kemailclientlauncherjob_dosuspend_isbase = false;
            return KEMailClientLauncherJob::doSuspend();
        } else if (kemailclientlauncherjob_dosuspend_callback != nullptr) {
            bool callback_ret = kemailclientlauncherjob_dosuspend_callback();
            return callback_ret;
        } else {
            return KEMailClientLauncherJob::doSuspend();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kemailclientlauncherjob_doresume_isbase) {
            kemailclientlauncherjob_doresume_isbase = false;
            return KEMailClientLauncherJob::doResume();
        } else if (kemailclientlauncherjob_doresume_callback != nullptr) {
            bool callback_ret = kemailclientlauncherjob_doresume_callback();
            return callback_ret;
        } else {
            return KEMailClientLauncherJob::doResume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kemailclientlauncherjob_errorstring_isbase) {
            kemailclientlauncherjob_errorstring_isbase = false;
            return KEMailClientLauncherJob::errorString();
        } else if (kemailclientlauncherjob_errorstring_callback != nullptr) {
            const char* callback_ret = kemailclientlauncherjob_errorstring_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KEMailClientLauncherJob::errorString();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kemailclientlauncherjob_event_isbase) {
            kemailclientlauncherjob_event_isbase = false;
            return KEMailClientLauncherJob::event(event);
        } else if (kemailclientlauncherjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kemailclientlauncherjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KEMailClientLauncherJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kemailclientlauncherjob_eventfilter_isbase) {
            kemailclientlauncherjob_eventfilter_isbase = false;
            return KEMailClientLauncherJob::eventFilter(watched, event);
        } else if (kemailclientlauncherjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kemailclientlauncherjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KEMailClientLauncherJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kemailclientlauncherjob_timerevent_isbase) {
            kemailclientlauncherjob_timerevent_isbase = false;
            KEMailClientLauncherJob::timerEvent(event);
        } else if (kemailclientlauncherjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kemailclientlauncherjob_timerevent_callback(this, cbval1);
        } else {
            KEMailClientLauncherJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kemailclientlauncherjob_childevent_isbase) {
            kemailclientlauncherjob_childevent_isbase = false;
            KEMailClientLauncherJob::childEvent(event);
        } else if (kemailclientlauncherjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kemailclientlauncherjob_childevent_callback(this, cbval1);
        } else {
            KEMailClientLauncherJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kemailclientlauncherjob_customevent_isbase) {
            kemailclientlauncherjob_customevent_isbase = false;
            KEMailClientLauncherJob::customEvent(event);
        } else if (kemailclientlauncherjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kemailclientlauncherjob_customevent_callback(this, cbval1);
        } else {
            KEMailClientLauncherJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kemailclientlauncherjob_connectnotify_isbase) {
            kemailclientlauncherjob_connectnotify_isbase = false;
            KEMailClientLauncherJob::connectNotify(signal);
        } else if (kemailclientlauncherjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kemailclientlauncherjob_connectnotify_callback(this, cbval1);
        } else {
            KEMailClientLauncherJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kemailclientlauncherjob_disconnectnotify_isbase) {
            kemailclientlauncherjob_disconnectnotify_isbase = false;
            KEMailClientLauncherJob::disconnectNotify(signal);
        } else if (kemailclientlauncherjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kemailclientlauncherjob_disconnectnotify_callback(this, cbval1);
        } else {
            KEMailClientLauncherJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kemailclientlauncherjob_setcapabilities_isbase) {
            kemailclientlauncherjob_setcapabilities_isbase = false;
            KEMailClientLauncherJob::setCapabilities(capabilities);
        } else if (kemailclientlauncherjob_setcapabilities_callback != nullptr) {
            int cbval1 = static_cast<int>(capabilities);

            kemailclientlauncherjob_setcapabilities_callback(this, cbval1);
        } else {
            KEMailClientLauncherJob::setCapabilities(capabilities);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kemailclientlauncherjob_isfinished_isbase) {
            kemailclientlauncherjob_isfinished_isbase = false;
            return KEMailClientLauncherJob::isFinished();
        } else if (kemailclientlauncherjob_isfinished_callback != nullptr) {
            bool callback_ret = kemailclientlauncherjob_isfinished_callback();
            return callback_ret;
        } else {
            return KEMailClientLauncherJob::isFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kemailclientlauncherjob_seterror_isbase) {
            kemailclientlauncherjob_seterror_isbase = false;
            KEMailClientLauncherJob::setError(errorCode);
        } else if (kemailclientlauncherjob_seterror_callback != nullptr) {
            int cbval1 = errorCode;

            kemailclientlauncherjob_seterror_callback(this, cbval1);
        } else {
            KEMailClientLauncherJob::setError(errorCode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kemailclientlauncherjob_seterrortext_isbase) {
            kemailclientlauncherjob_seterrortext_isbase = false;
            KEMailClientLauncherJob::setErrorText(errorText);
        } else if (kemailclientlauncherjob_seterrortext_callback != nullptr) {
            const QString errorText_ret = errorText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorText_b = errorText_ret.toUtf8();
            libqt_string errorText_str;
            errorText_str.len = errorText_b.length();
            errorText_str.data = static_cast<const char*>(malloc(errorText_str.len + 1));
            memcpy((void*)errorText_str.data, errorText_b.data(), errorText_str.len);
            ((char*)errorText_str.data)[errorText_str.len] = '\0';
            libqt_string cbval1 = errorText_str;

            kemailclientlauncherjob_seterrortext_callback(this, cbval1);
        } else {
            KEMailClientLauncherJob::setErrorText(errorText);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kemailclientlauncherjob_setprocessedamount_isbase) {
            kemailclientlauncherjob_setprocessedamount_isbase = false;
            KEMailClientLauncherJob::setProcessedAmount(unit, amount);
        } else if (kemailclientlauncherjob_setprocessedamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kemailclientlauncherjob_setprocessedamount_callback(this, cbval1, cbval2);
        } else {
            KEMailClientLauncherJob::setProcessedAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kemailclientlauncherjob_settotalamount_isbase) {
            kemailclientlauncherjob_settotalamount_isbase = false;
            KEMailClientLauncherJob::setTotalAmount(unit, amount);
        } else if (kemailclientlauncherjob_settotalamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kemailclientlauncherjob_settotalamount_callback(this, cbval1, cbval2);
        } else {
            KEMailClientLauncherJob::setTotalAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kemailclientlauncherjob_setprogressunit_isbase) {
            kemailclientlauncherjob_setprogressunit_isbase = false;
            KEMailClientLauncherJob::setProgressUnit(unit);
        } else if (kemailclientlauncherjob_setprogressunit_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);

            kemailclientlauncherjob_setprogressunit_callback(this, cbval1);
        } else {
            KEMailClientLauncherJob::setProgressUnit(unit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kemailclientlauncherjob_setpercent_isbase) {
            kemailclientlauncherjob_setpercent_isbase = false;
            KEMailClientLauncherJob::setPercent(percentage);
        } else if (kemailclientlauncherjob_setpercent_callback != nullptr) {
            unsigned long cbval1 = percentage;

            kemailclientlauncherjob_setpercent_callback(this, cbval1);
        } else {
            KEMailClientLauncherJob::setPercent(percentage);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kemailclientlauncherjob_emitresult_isbase) {
            kemailclientlauncherjob_emitresult_isbase = false;
            KEMailClientLauncherJob::emitResult();
        } else if (kemailclientlauncherjob_emitresult_callback != nullptr) {
            kemailclientlauncherjob_emitresult_callback();
        } else {
            KEMailClientLauncherJob::emitResult();
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kemailclientlauncherjob_emitpercent_isbase) {
            kemailclientlauncherjob_emitpercent_isbase = false;
            KEMailClientLauncherJob::emitPercent(processedAmount, totalAmount);
        } else if (kemailclientlauncherjob_emitpercent_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            kemailclientlauncherjob_emitpercent_callback(this, cbval1, cbval2);
        } else {
            KEMailClientLauncherJob::emitPercent(processedAmount, totalAmount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kemailclientlauncherjob_emitspeed_isbase) {
            kemailclientlauncherjob_emitspeed_isbase = false;
            KEMailClientLauncherJob::emitSpeed(speed);
        } else if (kemailclientlauncherjob_emitspeed_callback != nullptr) {
            unsigned long cbval1 = speed;

            kemailclientlauncherjob_emitspeed_callback(this, cbval1);
        } else {
            KEMailClientLauncherJob::emitSpeed(speed);
        }
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kemailclientlauncherjob_startelapsedtimer_isbase) {
            kemailclientlauncherjob_startelapsedtimer_isbase = false;
            KEMailClientLauncherJob::startElapsedTimer();
        } else if (kemailclientlauncherjob_startelapsedtimer_callback != nullptr) {
            kemailclientlauncherjob_startelapsedtimer_callback();
        } else {
            KEMailClientLauncherJob::startElapsedTimer();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kemailclientlauncherjob_sender_isbase) {
            kemailclientlauncherjob_sender_isbase = false;
            return KEMailClientLauncherJob::sender();
        } else if (kemailclientlauncherjob_sender_callback != nullptr) {
            QObject* callback_ret = kemailclientlauncherjob_sender_callback();
            return callback_ret;
        } else {
            return KEMailClientLauncherJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kemailclientlauncherjob_sendersignalindex_isbase) {
            kemailclientlauncherjob_sendersignalindex_isbase = false;
            return KEMailClientLauncherJob::senderSignalIndex();
        } else if (kemailclientlauncherjob_sendersignalindex_callback != nullptr) {
            int callback_ret = kemailclientlauncherjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KEMailClientLauncherJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kemailclientlauncherjob_receivers_isbase) {
            kemailclientlauncherjob_receivers_isbase = false;
            return KEMailClientLauncherJob::receivers(signal);
        } else if (kemailclientlauncherjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kemailclientlauncherjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KEMailClientLauncherJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kemailclientlauncherjob_issignalconnected_isbase) {
            kemailclientlauncherjob_issignalconnected_isbase = false;
            return KEMailClientLauncherJob::isSignalConnected(signal);
        } else if (kemailclientlauncherjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kemailclientlauncherjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KEMailClientLauncherJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KEMailClientLauncherJob_DoKill(KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_QBaseDoKill(KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_DoSuspend(KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_QBaseDoSuspend(KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_DoResume(KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_QBaseDoResume(KEMailClientLauncherJob* self);
    friend void KEMailClientLauncherJob_TimerEvent(KEMailClientLauncherJob* self, QTimerEvent* event);
    friend void KEMailClientLauncherJob_QBaseTimerEvent(KEMailClientLauncherJob* self, QTimerEvent* event);
    friend void KEMailClientLauncherJob_ChildEvent(KEMailClientLauncherJob* self, QChildEvent* event);
    friend void KEMailClientLauncherJob_QBaseChildEvent(KEMailClientLauncherJob* self, QChildEvent* event);
    friend void KEMailClientLauncherJob_CustomEvent(KEMailClientLauncherJob* self, QEvent* event);
    friend void KEMailClientLauncherJob_QBaseCustomEvent(KEMailClientLauncherJob* self, QEvent* event);
    friend void KEMailClientLauncherJob_ConnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
    friend void KEMailClientLauncherJob_QBaseConnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
    friend void KEMailClientLauncherJob_DisconnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
    friend void KEMailClientLauncherJob_QBaseDisconnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
    friend void KEMailClientLauncherJob_SetCapabilities(KEMailClientLauncherJob* self, int capabilities);
    friend void KEMailClientLauncherJob_QBaseSetCapabilities(KEMailClientLauncherJob* self, int capabilities);
    friend bool KEMailClientLauncherJob_IsFinished(const KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_QBaseIsFinished(const KEMailClientLauncherJob* self);
    friend void KEMailClientLauncherJob_SetError(KEMailClientLauncherJob* self, int errorCode);
    friend void KEMailClientLauncherJob_QBaseSetError(KEMailClientLauncherJob* self, int errorCode);
    friend void KEMailClientLauncherJob_SetErrorText(KEMailClientLauncherJob* self, const libqt_string errorText);
    friend void KEMailClientLauncherJob_QBaseSetErrorText(KEMailClientLauncherJob* self, const libqt_string errorText);
    friend void KEMailClientLauncherJob_SetProcessedAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount);
    friend void KEMailClientLauncherJob_QBaseSetProcessedAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount);
    friend void KEMailClientLauncherJob_SetTotalAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount);
    friend void KEMailClientLauncherJob_QBaseSetTotalAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount);
    friend void KEMailClientLauncherJob_SetProgressUnit(KEMailClientLauncherJob* self, int unit);
    friend void KEMailClientLauncherJob_QBaseSetProgressUnit(KEMailClientLauncherJob* self, int unit);
    friend void KEMailClientLauncherJob_SetPercent(KEMailClientLauncherJob* self, unsigned long percentage);
    friend void KEMailClientLauncherJob_QBaseSetPercent(KEMailClientLauncherJob* self, unsigned long percentage);
    friend void KEMailClientLauncherJob_EmitResult(KEMailClientLauncherJob* self);
    friend void KEMailClientLauncherJob_QBaseEmitResult(KEMailClientLauncherJob* self);
    friend void KEMailClientLauncherJob_EmitPercent(KEMailClientLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KEMailClientLauncherJob_QBaseEmitPercent(KEMailClientLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KEMailClientLauncherJob_EmitSpeed(KEMailClientLauncherJob* self, unsigned long speed);
    friend void KEMailClientLauncherJob_QBaseEmitSpeed(KEMailClientLauncherJob* self, unsigned long speed);
    friend void KEMailClientLauncherJob_StartElapsedTimer(KEMailClientLauncherJob* self);
    friend void KEMailClientLauncherJob_QBaseStartElapsedTimer(KEMailClientLauncherJob* self);
    friend QObject* KEMailClientLauncherJob_Sender(const KEMailClientLauncherJob* self);
    friend QObject* KEMailClientLauncherJob_QBaseSender(const KEMailClientLauncherJob* self);
    friend int KEMailClientLauncherJob_SenderSignalIndex(const KEMailClientLauncherJob* self);
    friend int KEMailClientLauncherJob_QBaseSenderSignalIndex(const KEMailClientLauncherJob* self);
    friend int KEMailClientLauncherJob_Receivers(const KEMailClientLauncherJob* self, const char* signal);
    friend int KEMailClientLauncherJob_QBaseReceivers(const KEMailClientLauncherJob* self, const char* signal);
    friend bool KEMailClientLauncherJob_IsSignalConnected(const KEMailClientLauncherJob* self, const QMetaMethod* signal);
    friend bool KEMailClientLauncherJob_QBaseIsSignalConnected(const KEMailClientLauncherJob* self, const QMetaMethod* signal);
};

#endif
