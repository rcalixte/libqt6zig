#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKLISTOPENFILESJOB_H
#define SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKLISTOPENFILESJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KListOpenFilesJob so that we can call protected methods
class VirtualKListOpenFilesJob final : public KListOpenFilesJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKListOpenFilesJob = true;

    // Virtual class public types (including callbacks)
    using KListOpenFilesJob_Metacall_Callback = int (*)(KListOpenFilesJob*, int, int, void**);
    using KListOpenFilesJob_Start_Callback = void (*)();
    using KListOpenFilesJob_DoKill_Callback = bool (*)();
    using KListOpenFilesJob_DoSuspend_Callback = bool (*)();
    using KListOpenFilesJob_DoResume_Callback = bool (*)();
    using KListOpenFilesJob_ErrorString_Callback = const char* (*)();
    using KListOpenFilesJob_Event_Callback = bool (*)(KListOpenFilesJob*, QEvent*);
    using KListOpenFilesJob_EventFilter_Callback = bool (*)(KListOpenFilesJob*, QObject*, QEvent*);
    using KListOpenFilesJob_TimerEvent_Callback = void (*)(KListOpenFilesJob*, QTimerEvent*);
    using KListOpenFilesJob_ChildEvent_Callback = void (*)(KListOpenFilesJob*, QChildEvent*);
    using KListOpenFilesJob_CustomEvent_Callback = void (*)(KListOpenFilesJob*, QEvent*);
    using KListOpenFilesJob_ConnectNotify_Callback = void (*)(KListOpenFilesJob*, QMetaMethod*);
    using KListOpenFilesJob_DisconnectNotify_Callback = void (*)(KListOpenFilesJob*, QMetaMethod*);
    using KListOpenFilesJob_SetCapabilities_Callback = void (*)(KListOpenFilesJob*, int);
    using KListOpenFilesJob_IsFinished_Callback = bool (*)();
    using KListOpenFilesJob_SetError_Callback = void (*)(KListOpenFilesJob*, int);
    using KListOpenFilesJob_SetErrorText_Callback = void (*)(KListOpenFilesJob*, libqt_string);
    using KListOpenFilesJob_SetProcessedAmount_Callback = void (*)(KListOpenFilesJob*, int, unsigned long long);
    using KListOpenFilesJob_SetTotalAmount_Callback = void (*)(KListOpenFilesJob*, int, unsigned long long);
    using KListOpenFilesJob_SetProgressUnit_Callback = void (*)(KListOpenFilesJob*, int);
    using KListOpenFilesJob_SetPercent_Callback = void (*)(KListOpenFilesJob*, unsigned long);
    using KListOpenFilesJob_EmitResult_Callback = void (*)();
    using KListOpenFilesJob_EmitPercent_Callback = void (*)(KListOpenFilesJob*, unsigned long long, unsigned long long);
    using KListOpenFilesJob_EmitSpeed_Callback = void (*)(KListOpenFilesJob*, unsigned long);
    using KListOpenFilesJob_StartElapsedTimer_Callback = void (*)();
    using KListOpenFilesJob_Sender_Callback = QObject* (*)();
    using KListOpenFilesJob_SenderSignalIndex_Callback = int (*)();
    using KListOpenFilesJob_Receivers_Callback = int (*)(const KListOpenFilesJob*, const char*);
    using KListOpenFilesJob_IsSignalConnected_Callback = bool (*)(const KListOpenFilesJob*, QMetaMethod*);

  protected:
    // Instance callback storage
    KListOpenFilesJob_Metacall_Callback klistopenfilesjob_metacall_callback = nullptr;
    KListOpenFilesJob_Start_Callback klistopenfilesjob_start_callback = nullptr;
    KListOpenFilesJob_DoKill_Callback klistopenfilesjob_dokill_callback = nullptr;
    KListOpenFilesJob_DoSuspend_Callback klistopenfilesjob_dosuspend_callback = nullptr;
    KListOpenFilesJob_DoResume_Callback klistopenfilesjob_doresume_callback = nullptr;
    KListOpenFilesJob_ErrorString_Callback klistopenfilesjob_errorstring_callback = nullptr;
    KListOpenFilesJob_Event_Callback klistopenfilesjob_event_callback = nullptr;
    KListOpenFilesJob_EventFilter_Callback klistopenfilesjob_eventfilter_callback = nullptr;
    KListOpenFilesJob_TimerEvent_Callback klistopenfilesjob_timerevent_callback = nullptr;
    KListOpenFilesJob_ChildEvent_Callback klistopenfilesjob_childevent_callback = nullptr;
    KListOpenFilesJob_CustomEvent_Callback klistopenfilesjob_customevent_callback = nullptr;
    KListOpenFilesJob_ConnectNotify_Callback klistopenfilesjob_connectnotify_callback = nullptr;
    KListOpenFilesJob_DisconnectNotify_Callback klistopenfilesjob_disconnectnotify_callback = nullptr;
    KListOpenFilesJob_SetCapabilities_Callback klistopenfilesjob_setcapabilities_callback = nullptr;
    KListOpenFilesJob_IsFinished_Callback klistopenfilesjob_isfinished_callback = nullptr;
    KListOpenFilesJob_SetError_Callback klistopenfilesjob_seterror_callback = nullptr;
    KListOpenFilesJob_SetErrorText_Callback klistopenfilesjob_seterrortext_callback = nullptr;
    KListOpenFilesJob_SetProcessedAmount_Callback klistopenfilesjob_setprocessedamount_callback = nullptr;
    KListOpenFilesJob_SetTotalAmount_Callback klistopenfilesjob_settotalamount_callback = nullptr;
    KListOpenFilesJob_SetProgressUnit_Callback klistopenfilesjob_setprogressunit_callback = nullptr;
    KListOpenFilesJob_SetPercent_Callback klistopenfilesjob_setpercent_callback = nullptr;
    KListOpenFilesJob_EmitResult_Callback klistopenfilesjob_emitresult_callback = nullptr;
    KListOpenFilesJob_EmitPercent_Callback klistopenfilesjob_emitpercent_callback = nullptr;
    KListOpenFilesJob_EmitSpeed_Callback klistopenfilesjob_emitspeed_callback = nullptr;
    KListOpenFilesJob_StartElapsedTimer_Callback klistopenfilesjob_startelapsedtimer_callback = nullptr;
    KListOpenFilesJob_Sender_Callback klistopenfilesjob_sender_callback = nullptr;
    KListOpenFilesJob_SenderSignalIndex_Callback klistopenfilesjob_sendersignalindex_callback = nullptr;
    KListOpenFilesJob_Receivers_Callback klistopenfilesjob_receivers_callback = nullptr;
    KListOpenFilesJob_IsSignalConnected_Callback klistopenfilesjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool klistopenfilesjob_metacall_isbase = false;
    mutable bool klistopenfilesjob_start_isbase = false;
    mutable bool klistopenfilesjob_dokill_isbase = false;
    mutable bool klistopenfilesjob_dosuspend_isbase = false;
    mutable bool klistopenfilesjob_doresume_isbase = false;
    mutable bool klistopenfilesjob_errorstring_isbase = false;
    mutable bool klistopenfilesjob_event_isbase = false;
    mutable bool klistopenfilesjob_eventfilter_isbase = false;
    mutable bool klistopenfilesjob_timerevent_isbase = false;
    mutable bool klistopenfilesjob_childevent_isbase = false;
    mutable bool klistopenfilesjob_customevent_isbase = false;
    mutable bool klistopenfilesjob_connectnotify_isbase = false;
    mutable bool klistopenfilesjob_disconnectnotify_isbase = false;
    mutable bool klistopenfilesjob_setcapabilities_isbase = false;
    mutable bool klistopenfilesjob_isfinished_isbase = false;
    mutable bool klistopenfilesjob_seterror_isbase = false;
    mutable bool klistopenfilesjob_seterrortext_isbase = false;
    mutable bool klistopenfilesjob_setprocessedamount_isbase = false;
    mutable bool klistopenfilesjob_settotalamount_isbase = false;
    mutable bool klistopenfilesjob_setprogressunit_isbase = false;
    mutable bool klistopenfilesjob_setpercent_isbase = false;
    mutable bool klistopenfilesjob_emitresult_isbase = false;
    mutable bool klistopenfilesjob_emitpercent_isbase = false;
    mutable bool klistopenfilesjob_emitspeed_isbase = false;
    mutable bool klistopenfilesjob_startelapsedtimer_isbase = false;
    mutable bool klistopenfilesjob_sender_isbase = false;
    mutable bool klistopenfilesjob_sendersignalindex_isbase = false;
    mutable bool klistopenfilesjob_receivers_isbase = false;
    mutable bool klistopenfilesjob_issignalconnected_isbase = false;

  public:
    VirtualKListOpenFilesJob(const QString& path) : KListOpenFilesJob(path) {};

    ~VirtualKListOpenFilesJob() {
        klistopenfilesjob_metacall_callback = nullptr;
        klistopenfilesjob_start_callback = nullptr;
        klistopenfilesjob_dokill_callback = nullptr;
        klistopenfilesjob_dosuspend_callback = nullptr;
        klistopenfilesjob_doresume_callback = nullptr;
        klistopenfilesjob_errorstring_callback = nullptr;
        klistopenfilesjob_event_callback = nullptr;
        klistopenfilesjob_eventfilter_callback = nullptr;
        klistopenfilesjob_timerevent_callback = nullptr;
        klistopenfilesjob_childevent_callback = nullptr;
        klistopenfilesjob_customevent_callback = nullptr;
        klistopenfilesjob_connectnotify_callback = nullptr;
        klistopenfilesjob_disconnectnotify_callback = nullptr;
        klistopenfilesjob_setcapabilities_callback = nullptr;
        klistopenfilesjob_isfinished_callback = nullptr;
        klistopenfilesjob_seterror_callback = nullptr;
        klistopenfilesjob_seterrortext_callback = nullptr;
        klistopenfilesjob_setprocessedamount_callback = nullptr;
        klistopenfilesjob_settotalamount_callback = nullptr;
        klistopenfilesjob_setprogressunit_callback = nullptr;
        klistopenfilesjob_setpercent_callback = nullptr;
        klistopenfilesjob_emitresult_callback = nullptr;
        klistopenfilesjob_emitpercent_callback = nullptr;
        klistopenfilesjob_emitspeed_callback = nullptr;
        klistopenfilesjob_startelapsedtimer_callback = nullptr;
        klistopenfilesjob_sender_callback = nullptr;
        klistopenfilesjob_sendersignalindex_callback = nullptr;
        klistopenfilesjob_receivers_callback = nullptr;
        klistopenfilesjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKListOpenFilesJob_Metacall_Callback(KListOpenFilesJob_Metacall_Callback cb) { klistopenfilesjob_metacall_callback = cb; }
    inline void setKListOpenFilesJob_Start_Callback(KListOpenFilesJob_Start_Callback cb) { klistopenfilesjob_start_callback = cb; }
    inline void setKListOpenFilesJob_DoKill_Callback(KListOpenFilesJob_DoKill_Callback cb) { klistopenfilesjob_dokill_callback = cb; }
    inline void setKListOpenFilesJob_DoSuspend_Callback(KListOpenFilesJob_DoSuspend_Callback cb) { klistopenfilesjob_dosuspend_callback = cb; }
    inline void setKListOpenFilesJob_DoResume_Callback(KListOpenFilesJob_DoResume_Callback cb) { klistopenfilesjob_doresume_callback = cb; }
    inline void setKListOpenFilesJob_ErrorString_Callback(KListOpenFilesJob_ErrorString_Callback cb) { klistopenfilesjob_errorstring_callback = cb; }
    inline void setKListOpenFilesJob_Event_Callback(KListOpenFilesJob_Event_Callback cb) { klistopenfilesjob_event_callback = cb; }
    inline void setKListOpenFilesJob_EventFilter_Callback(KListOpenFilesJob_EventFilter_Callback cb) { klistopenfilesjob_eventfilter_callback = cb; }
    inline void setKListOpenFilesJob_TimerEvent_Callback(KListOpenFilesJob_TimerEvent_Callback cb) { klistopenfilesjob_timerevent_callback = cb; }
    inline void setKListOpenFilesJob_ChildEvent_Callback(KListOpenFilesJob_ChildEvent_Callback cb) { klistopenfilesjob_childevent_callback = cb; }
    inline void setKListOpenFilesJob_CustomEvent_Callback(KListOpenFilesJob_CustomEvent_Callback cb) { klistopenfilesjob_customevent_callback = cb; }
    inline void setKListOpenFilesJob_ConnectNotify_Callback(KListOpenFilesJob_ConnectNotify_Callback cb) { klistopenfilesjob_connectnotify_callback = cb; }
    inline void setKListOpenFilesJob_DisconnectNotify_Callback(KListOpenFilesJob_DisconnectNotify_Callback cb) { klistopenfilesjob_disconnectnotify_callback = cb; }
    inline void setKListOpenFilesJob_SetCapabilities_Callback(KListOpenFilesJob_SetCapabilities_Callback cb) { klistopenfilesjob_setcapabilities_callback = cb; }
    inline void setKListOpenFilesJob_IsFinished_Callback(KListOpenFilesJob_IsFinished_Callback cb) { klistopenfilesjob_isfinished_callback = cb; }
    inline void setKListOpenFilesJob_SetError_Callback(KListOpenFilesJob_SetError_Callback cb) { klistopenfilesjob_seterror_callback = cb; }
    inline void setKListOpenFilesJob_SetErrorText_Callback(KListOpenFilesJob_SetErrorText_Callback cb) { klistopenfilesjob_seterrortext_callback = cb; }
    inline void setKListOpenFilesJob_SetProcessedAmount_Callback(KListOpenFilesJob_SetProcessedAmount_Callback cb) { klistopenfilesjob_setprocessedamount_callback = cb; }
    inline void setKListOpenFilesJob_SetTotalAmount_Callback(KListOpenFilesJob_SetTotalAmount_Callback cb) { klistopenfilesjob_settotalamount_callback = cb; }
    inline void setKListOpenFilesJob_SetProgressUnit_Callback(KListOpenFilesJob_SetProgressUnit_Callback cb) { klistopenfilesjob_setprogressunit_callback = cb; }
    inline void setKListOpenFilesJob_SetPercent_Callback(KListOpenFilesJob_SetPercent_Callback cb) { klistopenfilesjob_setpercent_callback = cb; }
    inline void setKListOpenFilesJob_EmitResult_Callback(KListOpenFilesJob_EmitResult_Callback cb) { klistopenfilesjob_emitresult_callback = cb; }
    inline void setKListOpenFilesJob_EmitPercent_Callback(KListOpenFilesJob_EmitPercent_Callback cb) { klistopenfilesjob_emitpercent_callback = cb; }
    inline void setKListOpenFilesJob_EmitSpeed_Callback(KListOpenFilesJob_EmitSpeed_Callback cb) { klistopenfilesjob_emitspeed_callback = cb; }
    inline void setKListOpenFilesJob_StartElapsedTimer_Callback(KListOpenFilesJob_StartElapsedTimer_Callback cb) { klistopenfilesjob_startelapsedtimer_callback = cb; }
    inline void setKListOpenFilesJob_Sender_Callback(KListOpenFilesJob_Sender_Callback cb) { klistopenfilesjob_sender_callback = cb; }
    inline void setKListOpenFilesJob_SenderSignalIndex_Callback(KListOpenFilesJob_SenderSignalIndex_Callback cb) { klistopenfilesjob_sendersignalindex_callback = cb; }
    inline void setKListOpenFilesJob_Receivers_Callback(KListOpenFilesJob_Receivers_Callback cb) { klistopenfilesjob_receivers_callback = cb; }
    inline void setKListOpenFilesJob_IsSignalConnected_Callback(KListOpenFilesJob_IsSignalConnected_Callback cb) { klistopenfilesjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKListOpenFilesJob_Metacall_IsBase(bool value) const { klistopenfilesjob_metacall_isbase = value; }
    inline void setKListOpenFilesJob_Start_IsBase(bool value) const { klistopenfilesjob_start_isbase = value; }
    inline void setKListOpenFilesJob_DoKill_IsBase(bool value) const { klistopenfilesjob_dokill_isbase = value; }
    inline void setKListOpenFilesJob_DoSuspend_IsBase(bool value) const { klistopenfilesjob_dosuspend_isbase = value; }
    inline void setKListOpenFilesJob_DoResume_IsBase(bool value) const { klistopenfilesjob_doresume_isbase = value; }
    inline void setKListOpenFilesJob_ErrorString_IsBase(bool value) const { klistopenfilesjob_errorstring_isbase = value; }
    inline void setKListOpenFilesJob_Event_IsBase(bool value) const { klistopenfilesjob_event_isbase = value; }
    inline void setKListOpenFilesJob_EventFilter_IsBase(bool value) const { klistopenfilesjob_eventfilter_isbase = value; }
    inline void setKListOpenFilesJob_TimerEvent_IsBase(bool value) const { klistopenfilesjob_timerevent_isbase = value; }
    inline void setKListOpenFilesJob_ChildEvent_IsBase(bool value) const { klistopenfilesjob_childevent_isbase = value; }
    inline void setKListOpenFilesJob_CustomEvent_IsBase(bool value) const { klistopenfilesjob_customevent_isbase = value; }
    inline void setKListOpenFilesJob_ConnectNotify_IsBase(bool value) const { klistopenfilesjob_connectnotify_isbase = value; }
    inline void setKListOpenFilesJob_DisconnectNotify_IsBase(bool value) const { klistopenfilesjob_disconnectnotify_isbase = value; }
    inline void setKListOpenFilesJob_SetCapabilities_IsBase(bool value) const { klistopenfilesjob_setcapabilities_isbase = value; }
    inline void setKListOpenFilesJob_IsFinished_IsBase(bool value) const { klistopenfilesjob_isfinished_isbase = value; }
    inline void setKListOpenFilesJob_SetError_IsBase(bool value) const { klistopenfilesjob_seterror_isbase = value; }
    inline void setKListOpenFilesJob_SetErrorText_IsBase(bool value) const { klistopenfilesjob_seterrortext_isbase = value; }
    inline void setKListOpenFilesJob_SetProcessedAmount_IsBase(bool value) const { klistopenfilesjob_setprocessedamount_isbase = value; }
    inline void setKListOpenFilesJob_SetTotalAmount_IsBase(bool value) const { klistopenfilesjob_settotalamount_isbase = value; }
    inline void setKListOpenFilesJob_SetProgressUnit_IsBase(bool value) const { klistopenfilesjob_setprogressunit_isbase = value; }
    inline void setKListOpenFilesJob_SetPercent_IsBase(bool value) const { klistopenfilesjob_setpercent_isbase = value; }
    inline void setKListOpenFilesJob_EmitResult_IsBase(bool value) const { klistopenfilesjob_emitresult_isbase = value; }
    inline void setKListOpenFilesJob_EmitPercent_IsBase(bool value) const { klistopenfilesjob_emitpercent_isbase = value; }
    inline void setKListOpenFilesJob_EmitSpeed_IsBase(bool value) const { klistopenfilesjob_emitspeed_isbase = value; }
    inline void setKListOpenFilesJob_StartElapsedTimer_IsBase(bool value) const { klistopenfilesjob_startelapsedtimer_isbase = value; }
    inline void setKListOpenFilesJob_Sender_IsBase(bool value) const { klistopenfilesjob_sender_isbase = value; }
    inline void setKListOpenFilesJob_SenderSignalIndex_IsBase(bool value) const { klistopenfilesjob_sendersignalindex_isbase = value; }
    inline void setKListOpenFilesJob_Receivers_IsBase(bool value) const { klistopenfilesjob_receivers_isbase = value; }
    inline void setKListOpenFilesJob_IsSignalConnected_IsBase(bool value) const { klistopenfilesjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klistopenfilesjob_metacall_isbase) {
            klistopenfilesjob_metacall_isbase = false;
            return KListOpenFilesJob::qt_metacall(param1, param2, param3);
        } else if (klistopenfilesjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = klistopenfilesjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KListOpenFilesJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (klistopenfilesjob_start_isbase) {
            klistopenfilesjob_start_isbase = false;
            KListOpenFilesJob::start();
        } else if (klistopenfilesjob_start_callback != nullptr) {
            klistopenfilesjob_start_callback();
        } else {
            KListOpenFilesJob::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (klistopenfilesjob_dokill_isbase) {
            klistopenfilesjob_dokill_isbase = false;
            return KListOpenFilesJob::doKill();
        } else if (klistopenfilesjob_dokill_callback != nullptr) {
            bool callback_ret = klistopenfilesjob_dokill_callback();
            return callback_ret;
        } else {
            return KListOpenFilesJob::doKill();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (klistopenfilesjob_dosuspend_isbase) {
            klistopenfilesjob_dosuspend_isbase = false;
            return KListOpenFilesJob::doSuspend();
        } else if (klistopenfilesjob_dosuspend_callback != nullptr) {
            bool callback_ret = klistopenfilesjob_dosuspend_callback();
            return callback_ret;
        } else {
            return KListOpenFilesJob::doSuspend();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (klistopenfilesjob_doresume_isbase) {
            klistopenfilesjob_doresume_isbase = false;
            return KListOpenFilesJob::doResume();
        } else if (klistopenfilesjob_doresume_callback != nullptr) {
            bool callback_ret = klistopenfilesjob_doresume_callback();
            return callback_ret;
        } else {
            return KListOpenFilesJob::doResume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (klistopenfilesjob_errorstring_isbase) {
            klistopenfilesjob_errorstring_isbase = false;
            return KListOpenFilesJob::errorString();
        } else if (klistopenfilesjob_errorstring_callback != nullptr) {
            const char* callback_ret = klistopenfilesjob_errorstring_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KListOpenFilesJob::errorString();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klistopenfilesjob_event_isbase) {
            klistopenfilesjob_event_isbase = false;
            return KListOpenFilesJob::event(event);
        } else if (klistopenfilesjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = klistopenfilesjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KListOpenFilesJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klistopenfilesjob_eventfilter_isbase) {
            klistopenfilesjob_eventfilter_isbase = false;
            return KListOpenFilesJob::eventFilter(watched, event);
        } else if (klistopenfilesjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = klistopenfilesjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KListOpenFilesJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klistopenfilesjob_timerevent_isbase) {
            klistopenfilesjob_timerevent_isbase = false;
            KListOpenFilesJob::timerEvent(event);
        } else if (klistopenfilesjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            klistopenfilesjob_timerevent_callback(this, cbval1);
        } else {
            KListOpenFilesJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klistopenfilesjob_childevent_isbase) {
            klistopenfilesjob_childevent_isbase = false;
            KListOpenFilesJob::childEvent(event);
        } else if (klistopenfilesjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            klistopenfilesjob_childevent_callback(this, cbval1);
        } else {
            KListOpenFilesJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klistopenfilesjob_customevent_isbase) {
            klistopenfilesjob_customevent_isbase = false;
            KListOpenFilesJob::customEvent(event);
        } else if (klistopenfilesjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            klistopenfilesjob_customevent_callback(this, cbval1);
        } else {
            KListOpenFilesJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klistopenfilesjob_connectnotify_isbase) {
            klistopenfilesjob_connectnotify_isbase = false;
            KListOpenFilesJob::connectNotify(signal);
        } else if (klistopenfilesjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klistopenfilesjob_connectnotify_callback(this, cbval1);
        } else {
            KListOpenFilesJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klistopenfilesjob_disconnectnotify_isbase) {
            klistopenfilesjob_disconnectnotify_isbase = false;
            KListOpenFilesJob::disconnectNotify(signal);
        } else if (klistopenfilesjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klistopenfilesjob_disconnectnotify_callback(this, cbval1);
        } else {
            KListOpenFilesJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (klistopenfilesjob_setcapabilities_isbase) {
            klistopenfilesjob_setcapabilities_isbase = false;
            KListOpenFilesJob::setCapabilities(capabilities);
        } else if (klistopenfilesjob_setcapabilities_callback != nullptr) {
            int cbval1 = static_cast<int>(capabilities);

            klistopenfilesjob_setcapabilities_callback(this, cbval1);
        } else {
            KListOpenFilesJob::setCapabilities(capabilities);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (klistopenfilesjob_isfinished_isbase) {
            klistopenfilesjob_isfinished_isbase = false;
            return KListOpenFilesJob::isFinished();
        } else if (klistopenfilesjob_isfinished_callback != nullptr) {
            bool callback_ret = klistopenfilesjob_isfinished_callback();
            return callback_ret;
        } else {
            return KListOpenFilesJob::isFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (klistopenfilesjob_seterror_isbase) {
            klistopenfilesjob_seterror_isbase = false;
            KListOpenFilesJob::setError(errorCode);
        } else if (klistopenfilesjob_seterror_callback != nullptr) {
            int cbval1 = errorCode;

            klistopenfilesjob_seterror_callback(this, cbval1);
        } else {
            KListOpenFilesJob::setError(errorCode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (klistopenfilesjob_seterrortext_isbase) {
            klistopenfilesjob_seterrortext_isbase = false;
            KListOpenFilesJob::setErrorText(errorText);
        } else if (klistopenfilesjob_seterrortext_callback != nullptr) {
            const QString errorText_ret = errorText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorText_b = errorText_ret.toUtf8();
            libqt_string errorText_str;
            errorText_str.len = errorText_b.length();
            errorText_str.data = static_cast<const char*>(malloc(errorText_str.len + 1));
            memcpy((void*)errorText_str.data, errorText_b.data(), errorText_str.len);
            ((char*)errorText_str.data)[errorText_str.len] = '\0';
            libqt_string cbval1 = errorText_str;

            klistopenfilesjob_seterrortext_callback(this, cbval1);
        } else {
            KListOpenFilesJob::setErrorText(errorText);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (klistopenfilesjob_setprocessedamount_isbase) {
            klistopenfilesjob_setprocessedamount_isbase = false;
            KListOpenFilesJob::setProcessedAmount(unit, amount);
        } else if (klistopenfilesjob_setprocessedamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            klistopenfilesjob_setprocessedamount_callback(this, cbval1, cbval2);
        } else {
            KListOpenFilesJob::setProcessedAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (klistopenfilesjob_settotalamount_isbase) {
            klistopenfilesjob_settotalamount_isbase = false;
            KListOpenFilesJob::setTotalAmount(unit, amount);
        } else if (klistopenfilesjob_settotalamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            klistopenfilesjob_settotalamount_callback(this, cbval1, cbval2);
        } else {
            KListOpenFilesJob::setTotalAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (klistopenfilesjob_setprogressunit_isbase) {
            klistopenfilesjob_setprogressunit_isbase = false;
            KListOpenFilesJob::setProgressUnit(unit);
        } else if (klistopenfilesjob_setprogressunit_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);

            klistopenfilesjob_setprogressunit_callback(this, cbval1);
        } else {
            KListOpenFilesJob::setProgressUnit(unit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (klistopenfilesjob_setpercent_isbase) {
            klistopenfilesjob_setpercent_isbase = false;
            KListOpenFilesJob::setPercent(percentage);
        } else if (klistopenfilesjob_setpercent_callback != nullptr) {
            unsigned long cbval1 = percentage;

            klistopenfilesjob_setpercent_callback(this, cbval1);
        } else {
            KListOpenFilesJob::setPercent(percentage);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (klistopenfilesjob_emitresult_isbase) {
            klistopenfilesjob_emitresult_isbase = false;
            KListOpenFilesJob::emitResult();
        } else if (klistopenfilesjob_emitresult_callback != nullptr) {
            klistopenfilesjob_emitresult_callback();
        } else {
            KListOpenFilesJob::emitResult();
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (klistopenfilesjob_emitpercent_isbase) {
            klistopenfilesjob_emitpercent_isbase = false;
            KListOpenFilesJob::emitPercent(processedAmount, totalAmount);
        } else if (klistopenfilesjob_emitpercent_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            klistopenfilesjob_emitpercent_callback(this, cbval1, cbval2);
        } else {
            KListOpenFilesJob::emitPercent(processedAmount, totalAmount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (klistopenfilesjob_emitspeed_isbase) {
            klistopenfilesjob_emitspeed_isbase = false;
            KListOpenFilesJob::emitSpeed(speed);
        } else if (klistopenfilesjob_emitspeed_callback != nullptr) {
            unsigned long cbval1 = speed;

            klistopenfilesjob_emitspeed_callback(this, cbval1);
        } else {
            KListOpenFilesJob::emitSpeed(speed);
        }
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (klistopenfilesjob_startelapsedtimer_isbase) {
            klistopenfilesjob_startelapsedtimer_isbase = false;
            KListOpenFilesJob::startElapsedTimer();
        } else if (klistopenfilesjob_startelapsedtimer_callback != nullptr) {
            klistopenfilesjob_startelapsedtimer_callback();
        } else {
            KListOpenFilesJob::startElapsedTimer();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (klistopenfilesjob_sender_isbase) {
            klistopenfilesjob_sender_isbase = false;
            return KListOpenFilesJob::sender();
        } else if (klistopenfilesjob_sender_callback != nullptr) {
            QObject* callback_ret = klistopenfilesjob_sender_callback();
            return callback_ret;
        } else {
            return KListOpenFilesJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (klistopenfilesjob_sendersignalindex_isbase) {
            klistopenfilesjob_sendersignalindex_isbase = false;
            return KListOpenFilesJob::senderSignalIndex();
        } else if (klistopenfilesjob_sendersignalindex_callback != nullptr) {
            int callback_ret = klistopenfilesjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KListOpenFilesJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (klistopenfilesjob_receivers_isbase) {
            klistopenfilesjob_receivers_isbase = false;
            return KListOpenFilesJob::receivers(signal);
        } else if (klistopenfilesjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = klistopenfilesjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KListOpenFilesJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (klistopenfilesjob_issignalconnected_isbase) {
            klistopenfilesjob_issignalconnected_isbase = false;
            return KListOpenFilesJob::isSignalConnected(signal);
        } else if (klistopenfilesjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = klistopenfilesjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KListOpenFilesJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KListOpenFilesJob_DoKill(KListOpenFilesJob* self);
    friend bool KListOpenFilesJob_QBaseDoKill(KListOpenFilesJob* self);
    friend bool KListOpenFilesJob_DoSuspend(KListOpenFilesJob* self);
    friend bool KListOpenFilesJob_QBaseDoSuspend(KListOpenFilesJob* self);
    friend bool KListOpenFilesJob_DoResume(KListOpenFilesJob* self);
    friend bool KListOpenFilesJob_QBaseDoResume(KListOpenFilesJob* self);
    friend void KListOpenFilesJob_TimerEvent(KListOpenFilesJob* self, QTimerEvent* event);
    friend void KListOpenFilesJob_QBaseTimerEvent(KListOpenFilesJob* self, QTimerEvent* event);
    friend void KListOpenFilesJob_ChildEvent(KListOpenFilesJob* self, QChildEvent* event);
    friend void KListOpenFilesJob_QBaseChildEvent(KListOpenFilesJob* self, QChildEvent* event);
    friend void KListOpenFilesJob_CustomEvent(KListOpenFilesJob* self, QEvent* event);
    friend void KListOpenFilesJob_QBaseCustomEvent(KListOpenFilesJob* self, QEvent* event);
    friend void KListOpenFilesJob_ConnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
    friend void KListOpenFilesJob_QBaseConnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
    friend void KListOpenFilesJob_DisconnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
    friend void KListOpenFilesJob_QBaseDisconnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
    friend void KListOpenFilesJob_SetCapabilities(KListOpenFilesJob* self, int capabilities);
    friend void KListOpenFilesJob_QBaseSetCapabilities(KListOpenFilesJob* self, int capabilities);
    friend bool KListOpenFilesJob_IsFinished(const KListOpenFilesJob* self);
    friend bool KListOpenFilesJob_QBaseIsFinished(const KListOpenFilesJob* self);
    friend void KListOpenFilesJob_SetError(KListOpenFilesJob* self, int errorCode);
    friend void KListOpenFilesJob_QBaseSetError(KListOpenFilesJob* self, int errorCode);
    friend void KListOpenFilesJob_SetErrorText(KListOpenFilesJob* self, const libqt_string errorText);
    friend void KListOpenFilesJob_QBaseSetErrorText(KListOpenFilesJob* self, const libqt_string errorText);
    friend void KListOpenFilesJob_SetProcessedAmount(KListOpenFilesJob* self, int unit, unsigned long long amount);
    friend void KListOpenFilesJob_QBaseSetProcessedAmount(KListOpenFilesJob* self, int unit, unsigned long long amount);
    friend void KListOpenFilesJob_SetTotalAmount(KListOpenFilesJob* self, int unit, unsigned long long amount);
    friend void KListOpenFilesJob_QBaseSetTotalAmount(KListOpenFilesJob* self, int unit, unsigned long long amount);
    friend void KListOpenFilesJob_SetProgressUnit(KListOpenFilesJob* self, int unit);
    friend void KListOpenFilesJob_QBaseSetProgressUnit(KListOpenFilesJob* self, int unit);
    friend void KListOpenFilesJob_SetPercent(KListOpenFilesJob* self, unsigned long percentage);
    friend void KListOpenFilesJob_QBaseSetPercent(KListOpenFilesJob* self, unsigned long percentage);
    friend void KListOpenFilesJob_EmitResult(KListOpenFilesJob* self);
    friend void KListOpenFilesJob_QBaseEmitResult(KListOpenFilesJob* self);
    friend void KListOpenFilesJob_EmitPercent(KListOpenFilesJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KListOpenFilesJob_QBaseEmitPercent(KListOpenFilesJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KListOpenFilesJob_EmitSpeed(KListOpenFilesJob* self, unsigned long speed);
    friend void KListOpenFilesJob_QBaseEmitSpeed(KListOpenFilesJob* self, unsigned long speed);
    friend void KListOpenFilesJob_StartElapsedTimer(KListOpenFilesJob* self);
    friend void KListOpenFilesJob_QBaseStartElapsedTimer(KListOpenFilesJob* self);
    friend QObject* KListOpenFilesJob_Sender(const KListOpenFilesJob* self);
    friend QObject* KListOpenFilesJob_QBaseSender(const KListOpenFilesJob* self);
    friend int KListOpenFilesJob_SenderSignalIndex(const KListOpenFilesJob* self);
    friend int KListOpenFilesJob_QBaseSenderSignalIndex(const KListOpenFilesJob* self);
    friend int KListOpenFilesJob_Receivers(const KListOpenFilesJob* self, const char* signal);
    friend int KListOpenFilesJob_QBaseReceivers(const KListOpenFilesJob* self, const char* signal);
    friend bool KListOpenFilesJob_IsSignalConnected(const KListOpenFilesJob* self, const QMetaMethod* signal);
    friend bool KListOpenFilesJob_QBaseIsSignalConnected(const KListOpenFilesJob* self, const QMetaMethod* signal);
};

#endif
