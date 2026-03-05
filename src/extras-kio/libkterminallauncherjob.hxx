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
    using KTerminalLauncherJob_MetaObject_Callback = QMetaObject* (*)();
    using KTerminalLauncherJob_Metacast_Callback = void* (*)(KTerminalLauncherJob*, const char*);
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
    using KTerminalLauncherJob_SetErrorText_Callback = void (*)(KTerminalLauncherJob*, const char*);
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
    KTerminalLauncherJob_MetaObject_Callback kterminallauncherjob_metaobject_callback = nullptr;
    KTerminalLauncherJob_Metacast_Callback kterminallauncherjob_metacast_callback = nullptr;
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
    mutable bool kterminallauncherjob_metaobject_isbase = false;
    mutable bool kterminallauncherjob_metacast_isbase = false;
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

    // Callback setters
    inline void setKTerminalLauncherJob_MetaObject_Callback(KTerminalLauncherJob_MetaObject_Callback cb) { kterminallauncherjob_metaobject_callback = cb; }
    inline void setKTerminalLauncherJob_Metacast_Callback(KTerminalLauncherJob_Metacast_Callback cb) { kterminallauncherjob_metacast_callback = cb; }
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
    inline void setKTerminalLauncherJob_MetaObject_IsBase(bool value) const { kterminallauncherjob_metaobject_isbase = value; }
    inline void setKTerminalLauncherJob_Metacast_IsBase(bool value) const { kterminallauncherjob_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kterminallauncherjob_metaobject_isbase) {
            kterminallauncherjob_metaobject_isbase = false;
            return KTerminalLauncherJob::metaObject();
        }
        auto metaobject_cb = kterminallauncherjob_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KTerminalLauncherJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kterminallauncherjob_metacast_isbase) {
            kterminallauncherjob_metacast_isbase = false;
            return KTerminalLauncherJob::qt_metacast(param1);
        }
        auto metacast_cb = kterminallauncherjob_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KTerminalLauncherJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kterminallauncherjob_metacall_isbase) {
            kterminallauncherjob_metacall_isbase = false;
            return KTerminalLauncherJob::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kterminallauncherjob_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTerminalLauncherJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kterminallauncherjob_start_isbase) {
            kterminallauncherjob_start_isbase = false;
            KTerminalLauncherJob::start();
            return;
        }
        auto start_cb = kterminallauncherjob_start_callback;
        if (start_cb) {
            start_cb();
            return;
        }
        KTerminalLauncherJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kterminallauncherjob_dokill_isbase) {
            kterminallauncherjob_dokill_isbase = false;
            return KTerminalLauncherJob::doKill();
        }
        auto dokill_cb = kterminallauncherjob_dokill_callback;
        if (dokill_cb) {
            bool callback_ret = dokill_cb();
            return callback_ret;
        }
        return KTerminalLauncherJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kterminallauncherjob_dosuspend_isbase) {
            kterminallauncherjob_dosuspend_isbase = false;
            return KTerminalLauncherJob::doSuspend();
        }
        auto dosuspend_cb = kterminallauncherjob_dosuspend_callback;
        if (dosuspend_cb) {
            bool callback_ret = dosuspend_cb();
            return callback_ret;
        }
        return KTerminalLauncherJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kterminallauncherjob_doresume_isbase) {
            kterminallauncherjob_doresume_isbase = false;
            return KTerminalLauncherJob::doResume();
        }
        auto doresume_cb = kterminallauncherjob_doresume_callback;
        if (doresume_cb) {
            bool callback_ret = doresume_cb();
            return callback_ret;
        }
        return KTerminalLauncherJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kterminallauncherjob_errorstring_isbase) {
            kterminallauncherjob_errorstring_isbase = false;
            return KTerminalLauncherJob::errorString();
        }
        auto errorstring_cb = kterminallauncherjob_errorstring_callback;
        if (errorstring_cb) {
            const char* callback_ret = errorstring_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KTerminalLauncherJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kterminallauncherjob_event_isbase) {
            kterminallauncherjob_event_isbase = false;
            return KTerminalLauncherJob::event(event);
        }
        auto event_cb = kterminallauncherjob_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KTerminalLauncherJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kterminallauncherjob_eventfilter_isbase) {
            kterminallauncherjob_eventfilter_isbase = false;
            return KTerminalLauncherJob::eventFilter(watched, event);
        }
        auto eventfilter_cb = kterminallauncherjob_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTerminalLauncherJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kterminallauncherjob_timerevent_isbase) {
            kterminallauncherjob_timerevent_isbase = false;
            KTerminalLauncherJob::timerEvent(event);
            return;
        }
        auto timerevent_cb = kterminallauncherjob_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KTerminalLauncherJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kterminallauncherjob_childevent_isbase) {
            kterminallauncherjob_childevent_isbase = false;
            KTerminalLauncherJob::childEvent(event);
            return;
        }
        auto childevent_cb = kterminallauncherjob_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KTerminalLauncherJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kterminallauncherjob_customevent_isbase) {
            kterminallauncherjob_customevent_isbase = false;
            KTerminalLauncherJob::customEvent(event);
            return;
        }
        auto customevent_cb = kterminallauncherjob_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KTerminalLauncherJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kterminallauncherjob_connectnotify_isbase) {
            kterminallauncherjob_connectnotify_isbase = false;
            KTerminalLauncherJob::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kterminallauncherjob_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KTerminalLauncherJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kterminallauncherjob_disconnectnotify_isbase) {
            kterminallauncherjob_disconnectnotify_isbase = false;
            KTerminalLauncherJob::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kterminallauncherjob_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KTerminalLauncherJob::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kterminallauncherjob_setcapabilities_isbase) {
            kterminallauncherjob_setcapabilities_isbase = false;
            KTerminalLauncherJob::setCapabilities(capabilities);
            return;
        }
        auto setcapabilities_cb = kterminallauncherjob_setcapabilities_callback;
        if (setcapabilities_cb) {
            int cbval1 = static_cast<int>(capabilities);

            setcapabilities_cb(this, cbval1);
            return;
        }
        KTerminalLauncherJob::setCapabilities(capabilities);
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kterminallauncherjob_isfinished_isbase) {
            kterminallauncherjob_isfinished_isbase = false;
            return KTerminalLauncherJob::isFinished();
        }
        auto isfinished_cb = kterminallauncherjob_isfinished_callback;
        if (isfinished_cb) {
            bool callback_ret = isfinished_cb();
            return callback_ret;
        }
        return KTerminalLauncherJob::isFinished();
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kterminallauncherjob_seterror_isbase) {
            kterminallauncherjob_seterror_isbase = false;
            KTerminalLauncherJob::setError(errorCode);
            return;
        }
        auto seterror_cb = kterminallauncherjob_seterror_callback;
        if (seterror_cb) {
            int cbval1 = errorCode;

            seterror_cb(this, cbval1);
            return;
        }
        KTerminalLauncherJob::setError(errorCode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kterminallauncherjob_seterrortext_isbase) {
            kterminallauncherjob_seterrortext_isbase = false;
            KTerminalLauncherJob::setErrorText(errorText);
            return;
        }
        auto seterrortext_cb = kterminallauncherjob_seterrortext_callback;
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
        KTerminalLauncherJob::setErrorText(errorText);
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kterminallauncherjob_setprocessedamount_isbase) {
            kterminallauncherjob_setprocessedamount_isbase = false;
            KTerminalLauncherJob::setProcessedAmount(unit, amount);
            return;
        }
        auto setprocessedamount_cb = kterminallauncherjob_setprocessedamount_callback;
        if (setprocessedamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            setprocessedamount_cb(this, cbval1, cbval2);
            return;
        }
        KTerminalLauncherJob::setProcessedAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kterminallauncherjob_settotalamount_isbase) {
            kterminallauncherjob_settotalamount_isbase = false;
            KTerminalLauncherJob::setTotalAmount(unit, amount);
            return;
        }
        auto settotalamount_cb = kterminallauncherjob_settotalamount_callback;
        if (settotalamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            settotalamount_cb(this, cbval1, cbval2);
            return;
        }
        KTerminalLauncherJob::setTotalAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kterminallauncherjob_setprogressunit_isbase) {
            kterminallauncherjob_setprogressunit_isbase = false;
            KTerminalLauncherJob::setProgressUnit(unit);
            return;
        }
        auto setprogressunit_cb = kterminallauncherjob_setprogressunit_callback;
        if (setprogressunit_cb) {
            int cbval1 = static_cast<int>(unit);

            setprogressunit_cb(this, cbval1);
            return;
        }
        KTerminalLauncherJob::setProgressUnit(unit);
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kterminallauncherjob_setpercent_isbase) {
            kterminallauncherjob_setpercent_isbase = false;
            KTerminalLauncherJob::setPercent(percentage);
            return;
        }
        auto setpercent_cb = kterminallauncherjob_setpercent_callback;
        if (setpercent_cb) {
            unsigned long cbval1 = percentage;

            setpercent_cb(this, cbval1);
            return;
        }
        KTerminalLauncherJob::setPercent(percentage);
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kterminallauncherjob_emitresult_isbase) {
            kterminallauncherjob_emitresult_isbase = false;
            KTerminalLauncherJob::emitResult();
            return;
        }
        auto emitresult_cb = kterminallauncherjob_emitresult_callback;
        if (emitresult_cb) {
            emitresult_cb();
            return;
        }
        KTerminalLauncherJob::emitResult();
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kterminallauncherjob_emitpercent_isbase) {
            kterminallauncherjob_emitpercent_isbase = false;
            KTerminalLauncherJob::emitPercent(processedAmount, totalAmount);
            return;
        }
        auto emitpercent_cb = kterminallauncherjob_emitpercent_callback;
        if (emitpercent_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            emitpercent_cb(this, cbval1, cbval2);
            return;
        }
        KTerminalLauncherJob::emitPercent(processedAmount, totalAmount);
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kterminallauncherjob_emitspeed_isbase) {
            kterminallauncherjob_emitspeed_isbase = false;
            KTerminalLauncherJob::emitSpeed(speed);
            return;
        }
        auto emitspeed_cb = kterminallauncherjob_emitspeed_callback;
        if (emitspeed_cb) {
            unsigned long cbval1 = speed;

            emitspeed_cb(this, cbval1);
            return;
        }
        KTerminalLauncherJob::emitSpeed(speed);
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kterminallauncherjob_startelapsedtimer_isbase) {
            kterminallauncherjob_startelapsedtimer_isbase = false;
            KTerminalLauncherJob::startElapsedTimer();
            return;
        }
        auto startelapsedtimer_cb = kterminallauncherjob_startelapsedtimer_callback;
        if (startelapsedtimer_cb) {
            startelapsedtimer_cb();
            return;
        }
        KTerminalLauncherJob::startElapsedTimer();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kterminallauncherjob_sender_isbase) {
            kterminallauncherjob_sender_isbase = false;
            return KTerminalLauncherJob::sender();
        }
        auto sender_cb = kterminallauncherjob_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KTerminalLauncherJob::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kterminallauncherjob_sendersignalindex_isbase) {
            kterminallauncherjob_sendersignalindex_isbase = false;
            return KTerminalLauncherJob::senderSignalIndex();
        }
        auto sendersignalindex_cb = kterminallauncherjob_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KTerminalLauncherJob::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kterminallauncherjob_receivers_isbase) {
            kterminallauncherjob_receivers_isbase = false;
            return KTerminalLauncherJob::receivers(signal);
        }
        auto receivers_cb = kterminallauncherjob_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTerminalLauncherJob::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kterminallauncherjob_issignalconnected_isbase) {
            kterminallauncherjob_issignalconnected_isbase = false;
            return KTerminalLauncherJob::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kterminallauncherjob_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KTerminalLauncherJob::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KTerminalLauncherJob_DoKill(KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_SuperDoKill(KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_DoSuspend(KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_SuperDoSuspend(KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_DoResume(KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_SuperDoResume(KTerminalLauncherJob* self);
    friend void KTerminalLauncherJob_TimerEvent(KTerminalLauncherJob* self, QTimerEvent* event);
    friend void KTerminalLauncherJob_SuperTimerEvent(KTerminalLauncherJob* self, QTimerEvent* event);
    friend void KTerminalLauncherJob_ChildEvent(KTerminalLauncherJob* self, QChildEvent* event);
    friend void KTerminalLauncherJob_SuperChildEvent(KTerminalLauncherJob* self, QChildEvent* event);
    friend void KTerminalLauncherJob_CustomEvent(KTerminalLauncherJob* self, QEvent* event);
    friend void KTerminalLauncherJob_SuperCustomEvent(KTerminalLauncherJob* self, QEvent* event);
    friend void KTerminalLauncherJob_ConnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
    friend void KTerminalLauncherJob_SuperConnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
    friend void KTerminalLauncherJob_DisconnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
    friend void KTerminalLauncherJob_SuperDisconnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal);
    friend void KTerminalLauncherJob_SetCapabilities(KTerminalLauncherJob* self, int capabilities);
    friend void KTerminalLauncherJob_SuperSetCapabilities(KTerminalLauncherJob* self, int capabilities);
    friend bool KTerminalLauncherJob_IsFinished(const KTerminalLauncherJob* self);
    friend bool KTerminalLauncherJob_SuperIsFinished(const KTerminalLauncherJob* self);
    friend void KTerminalLauncherJob_SetError(KTerminalLauncherJob* self, int errorCode);
    friend void KTerminalLauncherJob_SuperSetError(KTerminalLauncherJob* self, int errorCode);
    friend void KTerminalLauncherJob_SetErrorText(KTerminalLauncherJob* self, const libqt_string errorText);
    friend void KTerminalLauncherJob_SuperSetErrorText(KTerminalLauncherJob* self, const libqt_string errorText);
    friend void KTerminalLauncherJob_SetProcessedAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount);
    friend void KTerminalLauncherJob_SuperSetProcessedAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount);
    friend void KTerminalLauncherJob_SetTotalAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount);
    friend void KTerminalLauncherJob_SuperSetTotalAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount);
    friend void KTerminalLauncherJob_SetProgressUnit(KTerminalLauncherJob* self, int unit);
    friend void KTerminalLauncherJob_SuperSetProgressUnit(KTerminalLauncherJob* self, int unit);
    friend void KTerminalLauncherJob_SetPercent(KTerminalLauncherJob* self, unsigned long percentage);
    friend void KTerminalLauncherJob_SuperSetPercent(KTerminalLauncherJob* self, unsigned long percentage);
    friend void KTerminalLauncherJob_EmitResult(KTerminalLauncherJob* self);
    friend void KTerminalLauncherJob_SuperEmitResult(KTerminalLauncherJob* self);
    friend void KTerminalLauncherJob_EmitPercent(KTerminalLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KTerminalLauncherJob_SuperEmitPercent(KTerminalLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KTerminalLauncherJob_EmitSpeed(KTerminalLauncherJob* self, unsigned long speed);
    friend void KTerminalLauncherJob_SuperEmitSpeed(KTerminalLauncherJob* self, unsigned long speed);
    friend void KTerminalLauncherJob_StartElapsedTimer(KTerminalLauncherJob* self);
    friend void KTerminalLauncherJob_SuperStartElapsedTimer(KTerminalLauncherJob* self);
    friend QObject* KTerminalLauncherJob_Sender(const KTerminalLauncherJob* self);
    friend QObject* KTerminalLauncherJob_SuperSender(const KTerminalLauncherJob* self);
    friend int KTerminalLauncherJob_SenderSignalIndex(const KTerminalLauncherJob* self);
    friend int KTerminalLauncherJob_SuperSenderSignalIndex(const KTerminalLauncherJob* self);
    friend int KTerminalLauncherJob_Receivers(const KTerminalLauncherJob* self, const char* signal);
    friend int KTerminalLauncherJob_SuperReceivers(const KTerminalLauncherJob* self, const char* signal);
    friend bool KTerminalLauncherJob_IsSignalConnected(const KTerminalLauncherJob* self, const QMetaMethod* signal);
    friend bool KTerminalLauncherJob_SuperIsSignalConnected(const KTerminalLauncherJob* self, const QMetaMethod* signal);
};

#endif
