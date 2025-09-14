#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALCOMMANDLAUNCHERJOB_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALCOMMANDLAUNCHERJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::CommandLauncherJob so that we can call protected methods
class VirtualKIOCommandLauncherJob final : public KIO::CommandLauncherJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOCommandLauncherJob = true;

    // Virtual class public types (including callbacks)
    using KIO__CommandLauncherJob_Start_Callback = void (*)();
    using KIO__CommandLauncherJob_Metacall_Callback = int (*)(KIO__CommandLauncherJob*, int, int, void**);
    using KIO__CommandLauncherJob_DoKill_Callback = bool (*)();
    using KIO__CommandLauncherJob_DoSuspend_Callback = bool (*)();
    using KIO__CommandLauncherJob_DoResume_Callback = bool (*)();
    using KIO__CommandLauncherJob_ErrorString_Callback = const char* (*)();
    using KIO__CommandLauncherJob_Event_Callback = bool (*)(KIO__CommandLauncherJob*, QEvent*);
    using KIO__CommandLauncherJob_EventFilter_Callback = bool (*)(KIO__CommandLauncherJob*, QObject*, QEvent*);
    using KIO__CommandLauncherJob_TimerEvent_Callback = void (*)(KIO__CommandLauncherJob*, QTimerEvent*);
    using KIO__CommandLauncherJob_ChildEvent_Callback = void (*)(KIO__CommandLauncherJob*, QChildEvent*);
    using KIO__CommandLauncherJob_CustomEvent_Callback = void (*)(KIO__CommandLauncherJob*, QEvent*);
    using KIO__CommandLauncherJob_ConnectNotify_Callback = void (*)(KIO__CommandLauncherJob*, QMetaMethod*);
    using KIO__CommandLauncherJob_DisconnectNotify_Callback = void (*)(KIO__CommandLauncherJob*, QMetaMethod*);
    using KIO__CommandLauncherJob_SetCapabilities_Callback = void (*)(KIO__CommandLauncherJob*, int);
    using KIO__CommandLauncherJob_IsFinished_Callback = bool (*)();
    using KIO__CommandLauncherJob_SetError_Callback = void (*)(KIO__CommandLauncherJob*, int);
    using KIO__CommandLauncherJob_SetErrorText_Callback = void (*)(KIO__CommandLauncherJob*, libqt_string);
    using KIO__CommandLauncherJob_SetProcessedAmount_Callback = void (*)(KIO__CommandLauncherJob*, int, unsigned long long);
    using KIO__CommandLauncherJob_SetTotalAmount_Callback = void (*)(KIO__CommandLauncherJob*, int, unsigned long long);
    using KIO__CommandLauncherJob_SetProgressUnit_Callback = void (*)(KIO__CommandLauncherJob*, int);
    using KIO__CommandLauncherJob_SetPercent_Callback = void (*)(KIO__CommandLauncherJob*, unsigned long);
    using KIO__CommandLauncherJob_EmitResult_Callback = void (*)();
    using KIO__CommandLauncherJob_EmitPercent_Callback = void (*)(KIO__CommandLauncherJob*, unsigned long long, unsigned long long);
    using KIO__CommandLauncherJob_EmitSpeed_Callback = void (*)(KIO__CommandLauncherJob*, unsigned long);
    using KIO__CommandLauncherJob_StartElapsedTimer_Callback = void (*)();
    using KIO__CommandLauncherJob_Sender_Callback = QObject* (*)();
    using KIO__CommandLauncherJob_SenderSignalIndex_Callback = int (*)();
    using KIO__CommandLauncherJob_Receivers_Callback = int (*)(const KIO__CommandLauncherJob*, const char*);
    using KIO__CommandLauncherJob_IsSignalConnected_Callback = bool (*)(const KIO__CommandLauncherJob*, QMetaMethod*);

  protected:
    // Instance callback storage
    KIO__CommandLauncherJob_Start_Callback kio__commandlauncherjob_start_callback = nullptr;
    KIO__CommandLauncherJob_Metacall_Callback kio__commandlauncherjob_metacall_callback = nullptr;
    KIO__CommandLauncherJob_DoKill_Callback kio__commandlauncherjob_dokill_callback = nullptr;
    KIO__CommandLauncherJob_DoSuspend_Callback kio__commandlauncherjob_dosuspend_callback = nullptr;
    KIO__CommandLauncherJob_DoResume_Callback kio__commandlauncherjob_doresume_callback = nullptr;
    KIO__CommandLauncherJob_ErrorString_Callback kio__commandlauncherjob_errorstring_callback = nullptr;
    KIO__CommandLauncherJob_Event_Callback kio__commandlauncherjob_event_callback = nullptr;
    KIO__CommandLauncherJob_EventFilter_Callback kio__commandlauncherjob_eventfilter_callback = nullptr;
    KIO__CommandLauncherJob_TimerEvent_Callback kio__commandlauncherjob_timerevent_callback = nullptr;
    KIO__CommandLauncherJob_ChildEvent_Callback kio__commandlauncherjob_childevent_callback = nullptr;
    KIO__CommandLauncherJob_CustomEvent_Callback kio__commandlauncherjob_customevent_callback = nullptr;
    KIO__CommandLauncherJob_ConnectNotify_Callback kio__commandlauncherjob_connectnotify_callback = nullptr;
    KIO__CommandLauncherJob_DisconnectNotify_Callback kio__commandlauncherjob_disconnectnotify_callback = nullptr;
    KIO__CommandLauncherJob_SetCapabilities_Callback kio__commandlauncherjob_setcapabilities_callback = nullptr;
    KIO__CommandLauncherJob_IsFinished_Callback kio__commandlauncherjob_isfinished_callback = nullptr;
    KIO__CommandLauncherJob_SetError_Callback kio__commandlauncherjob_seterror_callback = nullptr;
    KIO__CommandLauncherJob_SetErrorText_Callback kio__commandlauncherjob_seterrortext_callback = nullptr;
    KIO__CommandLauncherJob_SetProcessedAmount_Callback kio__commandlauncherjob_setprocessedamount_callback = nullptr;
    KIO__CommandLauncherJob_SetTotalAmount_Callback kio__commandlauncherjob_settotalamount_callback = nullptr;
    KIO__CommandLauncherJob_SetProgressUnit_Callback kio__commandlauncherjob_setprogressunit_callback = nullptr;
    KIO__CommandLauncherJob_SetPercent_Callback kio__commandlauncherjob_setpercent_callback = nullptr;
    KIO__CommandLauncherJob_EmitResult_Callback kio__commandlauncherjob_emitresult_callback = nullptr;
    KIO__CommandLauncherJob_EmitPercent_Callback kio__commandlauncherjob_emitpercent_callback = nullptr;
    KIO__CommandLauncherJob_EmitSpeed_Callback kio__commandlauncherjob_emitspeed_callback = nullptr;
    KIO__CommandLauncherJob_StartElapsedTimer_Callback kio__commandlauncherjob_startelapsedtimer_callback = nullptr;
    KIO__CommandLauncherJob_Sender_Callback kio__commandlauncherjob_sender_callback = nullptr;
    KIO__CommandLauncherJob_SenderSignalIndex_Callback kio__commandlauncherjob_sendersignalindex_callback = nullptr;
    KIO__CommandLauncherJob_Receivers_Callback kio__commandlauncherjob_receivers_callback = nullptr;
    KIO__CommandLauncherJob_IsSignalConnected_Callback kio__commandlauncherjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__commandlauncherjob_start_isbase = false;
    mutable bool kio__commandlauncherjob_metacall_isbase = false;
    mutable bool kio__commandlauncherjob_dokill_isbase = false;
    mutable bool kio__commandlauncherjob_dosuspend_isbase = false;
    mutable bool kio__commandlauncherjob_doresume_isbase = false;
    mutable bool kio__commandlauncherjob_errorstring_isbase = false;
    mutable bool kio__commandlauncherjob_event_isbase = false;
    mutable bool kio__commandlauncherjob_eventfilter_isbase = false;
    mutable bool kio__commandlauncherjob_timerevent_isbase = false;
    mutable bool kio__commandlauncherjob_childevent_isbase = false;
    mutable bool kio__commandlauncherjob_customevent_isbase = false;
    mutable bool kio__commandlauncherjob_connectnotify_isbase = false;
    mutable bool kio__commandlauncherjob_disconnectnotify_isbase = false;
    mutable bool kio__commandlauncherjob_setcapabilities_isbase = false;
    mutable bool kio__commandlauncherjob_isfinished_isbase = false;
    mutable bool kio__commandlauncherjob_seterror_isbase = false;
    mutable bool kio__commandlauncherjob_seterrortext_isbase = false;
    mutable bool kio__commandlauncherjob_setprocessedamount_isbase = false;
    mutable bool kio__commandlauncherjob_settotalamount_isbase = false;
    mutable bool kio__commandlauncherjob_setprogressunit_isbase = false;
    mutable bool kio__commandlauncherjob_setpercent_isbase = false;
    mutable bool kio__commandlauncherjob_emitresult_isbase = false;
    mutable bool kio__commandlauncherjob_emitpercent_isbase = false;
    mutable bool kio__commandlauncherjob_emitspeed_isbase = false;
    mutable bool kio__commandlauncherjob_startelapsedtimer_isbase = false;
    mutable bool kio__commandlauncherjob_sender_isbase = false;
    mutable bool kio__commandlauncherjob_sendersignalindex_isbase = false;
    mutable bool kio__commandlauncherjob_receivers_isbase = false;
    mutable bool kio__commandlauncherjob_issignalconnected_isbase = false;

  public:
    VirtualKIOCommandLauncherJob(const QString& command) : KIO::CommandLauncherJob(command) {};
    VirtualKIOCommandLauncherJob(const QString& executable, const QList<QString>& args) : KIO::CommandLauncherJob(executable, args) {};
    VirtualKIOCommandLauncherJob(const QString& command, QObject* parent) : KIO::CommandLauncherJob(command, parent) {};
    VirtualKIOCommandLauncherJob(const QString& executable, const QList<QString>& args, QObject* parent) : KIO::CommandLauncherJob(executable, args, parent) {};

    ~VirtualKIOCommandLauncherJob() {
        kio__commandlauncherjob_start_callback = nullptr;
        kio__commandlauncherjob_metacall_callback = nullptr;
        kio__commandlauncherjob_dokill_callback = nullptr;
        kio__commandlauncherjob_dosuspend_callback = nullptr;
        kio__commandlauncherjob_doresume_callback = nullptr;
        kio__commandlauncherjob_errorstring_callback = nullptr;
        kio__commandlauncherjob_event_callback = nullptr;
        kio__commandlauncherjob_eventfilter_callback = nullptr;
        kio__commandlauncherjob_timerevent_callback = nullptr;
        kio__commandlauncherjob_childevent_callback = nullptr;
        kio__commandlauncherjob_customevent_callback = nullptr;
        kio__commandlauncherjob_connectnotify_callback = nullptr;
        kio__commandlauncherjob_disconnectnotify_callback = nullptr;
        kio__commandlauncherjob_setcapabilities_callback = nullptr;
        kio__commandlauncherjob_isfinished_callback = nullptr;
        kio__commandlauncherjob_seterror_callback = nullptr;
        kio__commandlauncherjob_seterrortext_callback = nullptr;
        kio__commandlauncherjob_setprocessedamount_callback = nullptr;
        kio__commandlauncherjob_settotalamount_callback = nullptr;
        kio__commandlauncherjob_setprogressunit_callback = nullptr;
        kio__commandlauncherjob_setpercent_callback = nullptr;
        kio__commandlauncherjob_emitresult_callback = nullptr;
        kio__commandlauncherjob_emitpercent_callback = nullptr;
        kio__commandlauncherjob_emitspeed_callback = nullptr;
        kio__commandlauncherjob_startelapsedtimer_callback = nullptr;
        kio__commandlauncherjob_sender_callback = nullptr;
        kio__commandlauncherjob_sendersignalindex_callback = nullptr;
        kio__commandlauncherjob_receivers_callback = nullptr;
        kio__commandlauncherjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__CommandLauncherJob_Start_Callback(KIO__CommandLauncherJob_Start_Callback cb) { kio__commandlauncherjob_start_callback = cb; }
    inline void setKIO__CommandLauncherJob_Metacall_Callback(KIO__CommandLauncherJob_Metacall_Callback cb) { kio__commandlauncherjob_metacall_callback = cb; }
    inline void setKIO__CommandLauncherJob_DoKill_Callback(KIO__CommandLauncherJob_DoKill_Callback cb) { kio__commandlauncherjob_dokill_callback = cb; }
    inline void setKIO__CommandLauncherJob_DoSuspend_Callback(KIO__CommandLauncherJob_DoSuspend_Callback cb) { kio__commandlauncherjob_dosuspend_callback = cb; }
    inline void setKIO__CommandLauncherJob_DoResume_Callback(KIO__CommandLauncherJob_DoResume_Callback cb) { kio__commandlauncherjob_doresume_callback = cb; }
    inline void setKIO__CommandLauncherJob_ErrorString_Callback(KIO__CommandLauncherJob_ErrorString_Callback cb) { kio__commandlauncherjob_errorstring_callback = cb; }
    inline void setKIO__CommandLauncherJob_Event_Callback(KIO__CommandLauncherJob_Event_Callback cb) { kio__commandlauncherjob_event_callback = cb; }
    inline void setKIO__CommandLauncherJob_EventFilter_Callback(KIO__CommandLauncherJob_EventFilter_Callback cb) { kio__commandlauncherjob_eventfilter_callback = cb; }
    inline void setKIO__CommandLauncherJob_TimerEvent_Callback(KIO__CommandLauncherJob_TimerEvent_Callback cb) { kio__commandlauncherjob_timerevent_callback = cb; }
    inline void setKIO__CommandLauncherJob_ChildEvent_Callback(KIO__CommandLauncherJob_ChildEvent_Callback cb) { kio__commandlauncherjob_childevent_callback = cb; }
    inline void setKIO__CommandLauncherJob_CustomEvent_Callback(KIO__CommandLauncherJob_CustomEvent_Callback cb) { kio__commandlauncherjob_customevent_callback = cb; }
    inline void setKIO__CommandLauncherJob_ConnectNotify_Callback(KIO__CommandLauncherJob_ConnectNotify_Callback cb) { kio__commandlauncherjob_connectnotify_callback = cb; }
    inline void setKIO__CommandLauncherJob_DisconnectNotify_Callback(KIO__CommandLauncherJob_DisconnectNotify_Callback cb) { kio__commandlauncherjob_disconnectnotify_callback = cb; }
    inline void setKIO__CommandLauncherJob_SetCapabilities_Callback(KIO__CommandLauncherJob_SetCapabilities_Callback cb) { kio__commandlauncherjob_setcapabilities_callback = cb; }
    inline void setKIO__CommandLauncherJob_IsFinished_Callback(KIO__CommandLauncherJob_IsFinished_Callback cb) { kio__commandlauncherjob_isfinished_callback = cb; }
    inline void setKIO__CommandLauncherJob_SetError_Callback(KIO__CommandLauncherJob_SetError_Callback cb) { kio__commandlauncherjob_seterror_callback = cb; }
    inline void setKIO__CommandLauncherJob_SetErrorText_Callback(KIO__CommandLauncherJob_SetErrorText_Callback cb) { kio__commandlauncherjob_seterrortext_callback = cb; }
    inline void setKIO__CommandLauncherJob_SetProcessedAmount_Callback(KIO__CommandLauncherJob_SetProcessedAmount_Callback cb) { kio__commandlauncherjob_setprocessedamount_callback = cb; }
    inline void setKIO__CommandLauncherJob_SetTotalAmount_Callback(KIO__CommandLauncherJob_SetTotalAmount_Callback cb) { kio__commandlauncherjob_settotalamount_callback = cb; }
    inline void setKIO__CommandLauncherJob_SetProgressUnit_Callback(KIO__CommandLauncherJob_SetProgressUnit_Callback cb) { kio__commandlauncherjob_setprogressunit_callback = cb; }
    inline void setKIO__CommandLauncherJob_SetPercent_Callback(KIO__CommandLauncherJob_SetPercent_Callback cb) { kio__commandlauncherjob_setpercent_callback = cb; }
    inline void setKIO__CommandLauncherJob_EmitResult_Callback(KIO__CommandLauncherJob_EmitResult_Callback cb) { kio__commandlauncherjob_emitresult_callback = cb; }
    inline void setKIO__CommandLauncherJob_EmitPercent_Callback(KIO__CommandLauncherJob_EmitPercent_Callback cb) { kio__commandlauncherjob_emitpercent_callback = cb; }
    inline void setKIO__CommandLauncherJob_EmitSpeed_Callback(KIO__CommandLauncherJob_EmitSpeed_Callback cb) { kio__commandlauncherjob_emitspeed_callback = cb; }
    inline void setKIO__CommandLauncherJob_StartElapsedTimer_Callback(KIO__CommandLauncherJob_StartElapsedTimer_Callback cb) { kio__commandlauncherjob_startelapsedtimer_callback = cb; }
    inline void setKIO__CommandLauncherJob_Sender_Callback(KIO__CommandLauncherJob_Sender_Callback cb) { kio__commandlauncherjob_sender_callback = cb; }
    inline void setKIO__CommandLauncherJob_SenderSignalIndex_Callback(KIO__CommandLauncherJob_SenderSignalIndex_Callback cb) { kio__commandlauncherjob_sendersignalindex_callback = cb; }
    inline void setKIO__CommandLauncherJob_Receivers_Callback(KIO__CommandLauncherJob_Receivers_Callback cb) { kio__commandlauncherjob_receivers_callback = cb; }
    inline void setKIO__CommandLauncherJob_IsSignalConnected_Callback(KIO__CommandLauncherJob_IsSignalConnected_Callback cb) { kio__commandlauncherjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__CommandLauncherJob_Start_IsBase(bool value) const { kio__commandlauncherjob_start_isbase = value; }
    inline void setKIO__CommandLauncherJob_Metacall_IsBase(bool value) const { kio__commandlauncherjob_metacall_isbase = value; }
    inline void setKIO__CommandLauncherJob_DoKill_IsBase(bool value) const { kio__commandlauncherjob_dokill_isbase = value; }
    inline void setKIO__CommandLauncherJob_DoSuspend_IsBase(bool value) const { kio__commandlauncherjob_dosuspend_isbase = value; }
    inline void setKIO__CommandLauncherJob_DoResume_IsBase(bool value) const { kio__commandlauncherjob_doresume_isbase = value; }
    inline void setKIO__CommandLauncherJob_ErrorString_IsBase(bool value) const { kio__commandlauncherjob_errorstring_isbase = value; }
    inline void setKIO__CommandLauncherJob_Event_IsBase(bool value) const { kio__commandlauncherjob_event_isbase = value; }
    inline void setKIO__CommandLauncherJob_EventFilter_IsBase(bool value) const { kio__commandlauncherjob_eventfilter_isbase = value; }
    inline void setKIO__CommandLauncherJob_TimerEvent_IsBase(bool value) const { kio__commandlauncherjob_timerevent_isbase = value; }
    inline void setKIO__CommandLauncherJob_ChildEvent_IsBase(bool value) const { kio__commandlauncherjob_childevent_isbase = value; }
    inline void setKIO__CommandLauncherJob_CustomEvent_IsBase(bool value) const { kio__commandlauncherjob_customevent_isbase = value; }
    inline void setKIO__CommandLauncherJob_ConnectNotify_IsBase(bool value) const { kio__commandlauncherjob_connectnotify_isbase = value; }
    inline void setKIO__CommandLauncherJob_DisconnectNotify_IsBase(bool value) const { kio__commandlauncherjob_disconnectnotify_isbase = value; }
    inline void setKIO__CommandLauncherJob_SetCapabilities_IsBase(bool value) const { kio__commandlauncherjob_setcapabilities_isbase = value; }
    inline void setKIO__CommandLauncherJob_IsFinished_IsBase(bool value) const { kio__commandlauncherjob_isfinished_isbase = value; }
    inline void setKIO__CommandLauncherJob_SetError_IsBase(bool value) const { kio__commandlauncherjob_seterror_isbase = value; }
    inline void setKIO__CommandLauncherJob_SetErrorText_IsBase(bool value) const { kio__commandlauncherjob_seterrortext_isbase = value; }
    inline void setKIO__CommandLauncherJob_SetProcessedAmount_IsBase(bool value) const { kio__commandlauncherjob_setprocessedamount_isbase = value; }
    inline void setKIO__CommandLauncherJob_SetTotalAmount_IsBase(bool value) const { kio__commandlauncherjob_settotalamount_isbase = value; }
    inline void setKIO__CommandLauncherJob_SetProgressUnit_IsBase(bool value) const { kio__commandlauncherjob_setprogressunit_isbase = value; }
    inline void setKIO__CommandLauncherJob_SetPercent_IsBase(bool value) const { kio__commandlauncherjob_setpercent_isbase = value; }
    inline void setKIO__CommandLauncherJob_EmitResult_IsBase(bool value) const { kio__commandlauncherjob_emitresult_isbase = value; }
    inline void setKIO__CommandLauncherJob_EmitPercent_IsBase(bool value) const { kio__commandlauncherjob_emitpercent_isbase = value; }
    inline void setKIO__CommandLauncherJob_EmitSpeed_IsBase(bool value) const { kio__commandlauncherjob_emitspeed_isbase = value; }
    inline void setKIO__CommandLauncherJob_StartElapsedTimer_IsBase(bool value) const { kio__commandlauncherjob_startelapsedtimer_isbase = value; }
    inline void setKIO__CommandLauncherJob_Sender_IsBase(bool value) const { kio__commandlauncherjob_sender_isbase = value; }
    inline void setKIO__CommandLauncherJob_SenderSignalIndex_IsBase(bool value) const { kio__commandlauncherjob_sendersignalindex_isbase = value; }
    inline void setKIO__CommandLauncherJob_Receivers_IsBase(bool value) const { kio__commandlauncherjob_receivers_isbase = value; }
    inline void setKIO__CommandLauncherJob_IsSignalConnected_IsBase(bool value) const { kio__commandlauncherjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kio__commandlauncherjob_start_isbase) {
            kio__commandlauncherjob_start_isbase = false;
            KIO__CommandLauncherJob::start();
        } else if (kio__commandlauncherjob_start_callback != nullptr) {
            kio__commandlauncherjob_start_callback();
        } else {
            KIO__CommandLauncherJob::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__commandlauncherjob_metacall_isbase) {
            kio__commandlauncherjob_metacall_isbase = false;
            return KIO__CommandLauncherJob::qt_metacall(param1, param2, param3);
        } else if (kio__commandlauncherjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__commandlauncherjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__CommandLauncherJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__commandlauncherjob_dokill_isbase) {
            kio__commandlauncherjob_dokill_isbase = false;
            return KIO__CommandLauncherJob::doKill();
        } else if (kio__commandlauncherjob_dokill_callback != nullptr) {
            bool callback_ret = kio__commandlauncherjob_dokill_callback();
            return callback_ret;
        } else {
            return KIO__CommandLauncherJob::doKill();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__commandlauncherjob_dosuspend_isbase) {
            kio__commandlauncherjob_dosuspend_isbase = false;
            return KIO__CommandLauncherJob::doSuspend();
        } else if (kio__commandlauncherjob_dosuspend_callback != nullptr) {
            bool callback_ret = kio__commandlauncherjob_dosuspend_callback();
            return callback_ret;
        } else {
            return KIO__CommandLauncherJob::doSuspend();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__commandlauncherjob_doresume_isbase) {
            kio__commandlauncherjob_doresume_isbase = false;
            return KIO__CommandLauncherJob::doResume();
        } else if (kio__commandlauncherjob_doresume_callback != nullptr) {
            bool callback_ret = kio__commandlauncherjob_doresume_callback();
            return callback_ret;
        } else {
            return KIO__CommandLauncherJob::doResume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__commandlauncherjob_errorstring_isbase) {
            kio__commandlauncherjob_errorstring_isbase = false;
            return KIO__CommandLauncherJob::errorString();
        } else if (kio__commandlauncherjob_errorstring_callback != nullptr) {
            const char* callback_ret = kio__commandlauncherjob_errorstring_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KIO__CommandLauncherJob::errorString();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__commandlauncherjob_event_isbase) {
            kio__commandlauncherjob_event_isbase = false;
            return KIO__CommandLauncherJob::event(event);
        } else if (kio__commandlauncherjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__commandlauncherjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__CommandLauncherJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__commandlauncherjob_eventfilter_isbase) {
            kio__commandlauncherjob_eventfilter_isbase = false;
            return KIO__CommandLauncherJob::eventFilter(watched, event);
        } else if (kio__commandlauncherjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kio__commandlauncherjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__CommandLauncherJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__commandlauncherjob_timerevent_isbase) {
            kio__commandlauncherjob_timerevent_isbase = false;
            KIO__CommandLauncherJob::timerEvent(event);
        } else if (kio__commandlauncherjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__commandlauncherjob_timerevent_callback(this, cbval1);
        } else {
            KIO__CommandLauncherJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__commandlauncherjob_childevent_isbase) {
            kio__commandlauncherjob_childevent_isbase = false;
            KIO__CommandLauncherJob::childEvent(event);
        } else if (kio__commandlauncherjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__commandlauncherjob_childevent_callback(this, cbval1);
        } else {
            KIO__CommandLauncherJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__commandlauncherjob_customevent_isbase) {
            kio__commandlauncherjob_customevent_isbase = false;
            KIO__CommandLauncherJob::customEvent(event);
        } else if (kio__commandlauncherjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__commandlauncherjob_customevent_callback(this, cbval1);
        } else {
            KIO__CommandLauncherJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__commandlauncherjob_connectnotify_isbase) {
            kio__commandlauncherjob_connectnotify_isbase = false;
            KIO__CommandLauncherJob::connectNotify(signal);
        } else if (kio__commandlauncherjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__commandlauncherjob_connectnotify_callback(this, cbval1);
        } else {
            KIO__CommandLauncherJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__commandlauncherjob_disconnectnotify_isbase) {
            kio__commandlauncherjob_disconnectnotify_isbase = false;
            KIO__CommandLauncherJob::disconnectNotify(signal);
        } else if (kio__commandlauncherjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__commandlauncherjob_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__CommandLauncherJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kio__commandlauncherjob_setcapabilities_isbase) {
            kio__commandlauncherjob_setcapabilities_isbase = false;
            KIO__CommandLauncherJob::setCapabilities(capabilities);
        } else if (kio__commandlauncherjob_setcapabilities_callback != nullptr) {
            int cbval1 = static_cast<int>(capabilities);

            kio__commandlauncherjob_setcapabilities_callback(this, cbval1);
        } else {
            KIO__CommandLauncherJob::setCapabilities(capabilities);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kio__commandlauncherjob_isfinished_isbase) {
            kio__commandlauncherjob_isfinished_isbase = false;
            return KIO__CommandLauncherJob::isFinished();
        } else if (kio__commandlauncherjob_isfinished_callback != nullptr) {
            bool callback_ret = kio__commandlauncherjob_isfinished_callback();
            return callback_ret;
        } else {
            return KIO__CommandLauncherJob::isFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kio__commandlauncherjob_seterror_isbase) {
            kio__commandlauncherjob_seterror_isbase = false;
            KIO__CommandLauncherJob::setError(errorCode);
        } else if (kio__commandlauncherjob_seterror_callback != nullptr) {
            int cbval1 = errorCode;

            kio__commandlauncherjob_seterror_callback(this, cbval1);
        } else {
            KIO__CommandLauncherJob::setError(errorCode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kio__commandlauncherjob_seterrortext_isbase) {
            kio__commandlauncherjob_seterrortext_isbase = false;
            KIO__CommandLauncherJob::setErrorText(errorText);
        } else if (kio__commandlauncherjob_seterrortext_callback != nullptr) {
            const QString errorText_ret = errorText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorText_b = errorText_ret.toUtf8();
            libqt_string errorText_str;
            errorText_str.len = errorText_b.length();
            errorText_str.data = static_cast<const char*>(malloc(errorText_str.len + 1));
            memcpy((void*)errorText_str.data, errorText_b.data(), errorText_str.len);
            ((char*)errorText_str.data)[errorText_str.len] = '\0';
            libqt_string cbval1 = errorText_str;

            kio__commandlauncherjob_seterrortext_callback(this, cbval1);
        } else {
            KIO__CommandLauncherJob::setErrorText(errorText);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__commandlauncherjob_setprocessedamount_isbase) {
            kio__commandlauncherjob_setprocessedamount_isbase = false;
            KIO__CommandLauncherJob::setProcessedAmount(unit, amount);
        } else if (kio__commandlauncherjob_setprocessedamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__commandlauncherjob_setprocessedamount_callback(this, cbval1, cbval2);
        } else {
            KIO__CommandLauncherJob::setProcessedAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__commandlauncherjob_settotalamount_isbase) {
            kio__commandlauncherjob_settotalamount_isbase = false;
            KIO__CommandLauncherJob::setTotalAmount(unit, amount);
        } else if (kio__commandlauncherjob_settotalamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kio__commandlauncherjob_settotalamount_callback(this, cbval1, cbval2);
        } else {
            KIO__CommandLauncherJob::setTotalAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kio__commandlauncherjob_setprogressunit_isbase) {
            kio__commandlauncherjob_setprogressunit_isbase = false;
            KIO__CommandLauncherJob::setProgressUnit(unit);
        } else if (kio__commandlauncherjob_setprogressunit_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);

            kio__commandlauncherjob_setprogressunit_callback(this, cbval1);
        } else {
            KIO__CommandLauncherJob::setProgressUnit(unit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kio__commandlauncherjob_setpercent_isbase) {
            kio__commandlauncherjob_setpercent_isbase = false;
            KIO__CommandLauncherJob::setPercent(percentage);
        } else if (kio__commandlauncherjob_setpercent_callback != nullptr) {
            unsigned long cbval1 = percentage;

            kio__commandlauncherjob_setpercent_callback(this, cbval1);
        } else {
            KIO__CommandLauncherJob::setPercent(percentage);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kio__commandlauncherjob_emitresult_isbase) {
            kio__commandlauncherjob_emitresult_isbase = false;
            KIO__CommandLauncherJob::emitResult();
        } else if (kio__commandlauncherjob_emitresult_callback != nullptr) {
            kio__commandlauncherjob_emitresult_callback();
        } else {
            KIO__CommandLauncherJob::emitResult();
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kio__commandlauncherjob_emitpercent_isbase) {
            kio__commandlauncherjob_emitpercent_isbase = false;
            KIO__CommandLauncherJob::emitPercent(processedAmount, totalAmount);
        } else if (kio__commandlauncherjob_emitpercent_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            kio__commandlauncherjob_emitpercent_callback(this, cbval1, cbval2);
        } else {
            KIO__CommandLauncherJob::emitPercent(processedAmount, totalAmount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kio__commandlauncherjob_emitspeed_isbase) {
            kio__commandlauncherjob_emitspeed_isbase = false;
            KIO__CommandLauncherJob::emitSpeed(speed);
        } else if (kio__commandlauncherjob_emitspeed_callback != nullptr) {
            unsigned long cbval1 = speed;

            kio__commandlauncherjob_emitspeed_callback(this, cbval1);
        } else {
            KIO__CommandLauncherJob::emitSpeed(speed);
        }
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kio__commandlauncherjob_startelapsedtimer_isbase) {
            kio__commandlauncherjob_startelapsedtimer_isbase = false;
            KIO__CommandLauncherJob::startElapsedTimer();
        } else if (kio__commandlauncherjob_startelapsedtimer_callback != nullptr) {
            kio__commandlauncherjob_startelapsedtimer_callback();
        } else {
            KIO__CommandLauncherJob::startElapsedTimer();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__commandlauncherjob_sender_isbase) {
            kio__commandlauncherjob_sender_isbase = false;
            return KIO__CommandLauncherJob::sender();
        } else if (kio__commandlauncherjob_sender_callback != nullptr) {
            QObject* callback_ret = kio__commandlauncherjob_sender_callback();
            return callback_ret;
        } else {
            return KIO__CommandLauncherJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__commandlauncherjob_sendersignalindex_isbase) {
            kio__commandlauncherjob_sendersignalindex_isbase = false;
            return KIO__CommandLauncherJob::senderSignalIndex();
        } else if (kio__commandlauncherjob_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__commandlauncherjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__CommandLauncherJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__commandlauncherjob_receivers_isbase) {
            kio__commandlauncherjob_receivers_isbase = false;
            return KIO__CommandLauncherJob::receivers(signal);
        } else if (kio__commandlauncherjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__commandlauncherjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__CommandLauncherJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__commandlauncherjob_issignalconnected_isbase) {
            kio__commandlauncherjob_issignalconnected_isbase = false;
            return KIO__CommandLauncherJob::isSignalConnected(signal);
        } else if (kio__commandlauncherjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__commandlauncherjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__CommandLauncherJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KIO__CommandLauncherJob_DoKill(KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_QBaseDoKill(KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_DoSuspend(KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_QBaseDoSuspend(KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_DoResume(KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_QBaseDoResume(KIO::CommandLauncherJob* self);
    friend void KIO__CommandLauncherJob_TimerEvent(KIO::CommandLauncherJob* self, QTimerEvent* event);
    friend void KIO__CommandLauncherJob_QBaseTimerEvent(KIO::CommandLauncherJob* self, QTimerEvent* event);
    friend void KIO__CommandLauncherJob_ChildEvent(KIO::CommandLauncherJob* self, QChildEvent* event);
    friend void KIO__CommandLauncherJob_QBaseChildEvent(KIO::CommandLauncherJob* self, QChildEvent* event);
    friend void KIO__CommandLauncherJob_CustomEvent(KIO::CommandLauncherJob* self, QEvent* event);
    friend void KIO__CommandLauncherJob_QBaseCustomEvent(KIO::CommandLauncherJob* self, QEvent* event);
    friend void KIO__CommandLauncherJob_ConnectNotify(KIO::CommandLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__CommandLauncherJob_QBaseConnectNotify(KIO::CommandLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__CommandLauncherJob_DisconnectNotify(KIO::CommandLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__CommandLauncherJob_QBaseDisconnectNotify(KIO::CommandLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__CommandLauncherJob_SetCapabilities(KIO::CommandLauncherJob* self, int capabilities);
    friend void KIO__CommandLauncherJob_QBaseSetCapabilities(KIO::CommandLauncherJob* self, int capabilities);
    friend bool KIO__CommandLauncherJob_IsFinished(const KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_QBaseIsFinished(const KIO::CommandLauncherJob* self);
    friend void KIO__CommandLauncherJob_SetError(KIO::CommandLauncherJob* self, int errorCode);
    friend void KIO__CommandLauncherJob_QBaseSetError(KIO::CommandLauncherJob* self, int errorCode);
    friend void KIO__CommandLauncherJob_SetErrorText(KIO::CommandLauncherJob* self, const libqt_string errorText);
    friend void KIO__CommandLauncherJob_QBaseSetErrorText(KIO::CommandLauncherJob* self, const libqt_string errorText);
    friend void KIO__CommandLauncherJob_SetProcessedAmount(KIO::CommandLauncherJob* self, int unit, unsigned long long amount);
    friend void KIO__CommandLauncherJob_QBaseSetProcessedAmount(KIO::CommandLauncherJob* self, int unit, unsigned long long amount);
    friend void KIO__CommandLauncherJob_SetTotalAmount(KIO::CommandLauncherJob* self, int unit, unsigned long long amount);
    friend void KIO__CommandLauncherJob_QBaseSetTotalAmount(KIO::CommandLauncherJob* self, int unit, unsigned long long amount);
    friend void KIO__CommandLauncherJob_SetProgressUnit(KIO::CommandLauncherJob* self, int unit);
    friend void KIO__CommandLauncherJob_QBaseSetProgressUnit(KIO::CommandLauncherJob* self, int unit);
    friend void KIO__CommandLauncherJob_SetPercent(KIO::CommandLauncherJob* self, unsigned long percentage);
    friend void KIO__CommandLauncherJob_QBaseSetPercent(KIO::CommandLauncherJob* self, unsigned long percentage);
    friend void KIO__CommandLauncherJob_EmitResult(KIO::CommandLauncherJob* self);
    friend void KIO__CommandLauncherJob_QBaseEmitResult(KIO::CommandLauncherJob* self);
    friend void KIO__CommandLauncherJob_EmitPercent(KIO::CommandLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__CommandLauncherJob_QBaseEmitPercent(KIO::CommandLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__CommandLauncherJob_EmitSpeed(KIO::CommandLauncherJob* self, unsigned long speed);
    friend void KIO__CommandLauncherJob_QBaseEmitSpeed(KIO::CommandLauncherJob* self, unsigned long speed);
    friend void KIO__CommandLauncherJob_StartElapsedTimer(KIO::CommandLauncherJob* self);
    friend void KIO__CommandLauncherJob_QBaseStartElapsedTimer(KIO::CommandLauncherJob* self);
    friend QObject* KIO__CommandLauncherJob_Sender(const KIO::CommandLauncherJob* self);
    friend QObject* KIO__CommandLauncherJob_QBaseSender(const KIO::CommandLauncherJob* self);
    friend int KIO__CommandLauncherJob_SenderSignalIndex(const KIO::CommandLauncherJob* self);
    friend int KIO__CommandLauncherJob_QBaseSenderSignalIndex(const KIO::CommandLauncherJob* self);
    friend int KIO__CommandLauncherJob_Receivers(const KIO::CommandLauncherJob* self, const char* signal);
    friend int KIO__CommandLauncherJob_QBaseReceivers(const KIO::CommandLauncherJob* self, const char* signal);
    friend bool KIO__CommandLauncherJob_IsSignalConnected(const KIO::CommandLauncherJob* self, const QMetaMethod* signal);
    friend bool KIO__CommandLauncherJob_QBaseIsSignalConnected(const KIO::CommandLauncherJob* self, const QMetaMethod* signal);
};

#endif
