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
    using KEMailClientLauncherJob_MetaObject_Callback = QMetaObject* (*)();
    using KEMailClientLauncherJob_Metacast_Callback = void* (*)(KEMailClientLauncherJob*, const char*);
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
    using KEMailClientLauncherJob_SetErrorText_Callback = void (*)(KEMailClientLauncherJob*, const char*);
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
    KEMailClientLauncherJob_MetaObject_Callback kemailclientlauncherjob_metaobject_callback = nullptr;
    KEMailClientLauncherJob_Metacast_Callback kemailclientlauncherjob_metacast_callback = nullptr;
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
    mutable bool kemailclientlauncherjob_metaobject_isbase = false;
    mutable bool kemailclientlauncherjob_metacast_isbase = false;
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

    // Callback setters
    inline void setKEMailClientLauncherJob_MetaObject_Callback(KEMailClientLauncherJob_MetaObject_Callback cb) { kemailclientlauncherjob_metaobject_callback = cb; }
    inline void setKEMailClientLauncherJob_Metacast_Callback(KEMailClientLauncherJob_Metacast_Callback cb) { kemailclientlauncherjob_metacast_callback = cb; }
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
    inline void setKEMailClientLauncherJob_MetaObject_IsBase(bool value) const { kemailclientlauncherjob_metaobject_isbase = value; }
    inline void setKEMailClientLauncherJob_Metacast_IsBase(bool value) const { kemailclientlauncherjob_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kemailclientlauncherjob_metaobject_isbase) {
            kemailclientlauncherjob_metaobject_isbase = false;
            return KEMailClientLauncherJob::metaObject();
        }
        auto metaobject_cb = kemailclientlauncherjob_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KEMailClientLauncherJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kemailclientlauncherjob_metacast_isbase) {
            kemailclientlauncherjob_metacast_isbase = false;
            return KEMailClientLauncherJob::qt_metacast(param1);
        }
        auto metacast_cb = kemailclientlauncherjob_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KEMailClientLauncherJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kemailclientlauncherjob_metacall_isbase) {
            kemailclientlauncherjob_metacall_isbase = false;
            return KEMailClientLauncherJob::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kemailclientlauncherjob_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KEMailClientLauncherJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kemailclientlauncherjob_start_isbase) {
            kemailclientlauncherjob_start_isbase = false;
            KEMailClientLauncherJob::start();
            return;
        }
        auto start_cb = kemailclientlauncherjob_start_callback;
        if (start_cb) {
            start_cb();
            return;
        }
        KEMailClientLauncherJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kemailclientlauncherjob_dokill_isbase) {
            kemailclientlauncherjob_dokill_isbase = false;
            return KEMailClientLauncherJob::doKill();
        }
        auto dokill_cb = kemailclientlauncherjob_dokill_callback;
        if (dokill_cb) {
            bool callback_ret = dokill_cb();
            return callback_ret;
        }
        return KEMailClientLauncherJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kemailclientlauncherjob_dosuspend_isbase) {
            kemailclientlauncherjob_dosuspend_isbase = false;
            return KEMailClientLauncherJob::doSuspend();
        }
        auto dosuspend_cb = kemailclientlauncherjob_dosuspend_callback;
        if (dosuspend_cb) {
            bool callback_ret = dosuspend_cb();
            return callback_ret;
        }
        return KEMailClientLauncherJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kemailclientlauncherjob_doresume_isbase) {
            kemailclientlauncherjob_doresume_isbase = false;
            return KEMailClientLauncherJob::doResume();
        }
        auto doresume_cb = kemailclientlauncherjob_doresume_callback;
        if (doresume_cb) {
            bool callback_ret = doresume_cb();
            return callback_ret;
        }
        return KEMailClientLauncherJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kemailclientlauncherjob_errorstring_isbase) {
            kemailclientlauncherjob_errorstring_isbase = false;
            return KEMailClientLauncherJob::errorString();
        }
        auto errorstring_cb = kemailclientlauncherjob_errorstring_callback;
        if (errorstring_cb) {
            const char* callback_ret = errorstring_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KEMailClientLauncherJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kemailclientlauncherjob_event_isbase) {
            kemailclientlauncherjob_event_isbase = false;
            return KEMailClientLauncherJob::event(event);
        }
        auto event_cb = kemailclientlauncherjob_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KEMailClientLauncherJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kemailclientlauncherjob_eventfilter_isbase) {
            kemailclientlauncherjob_eventfilter_isbase = false;
            return KEMailClientLauncherJob::eventFilter(watched, event);
        }
        auto eventfilter_cb = kemailclientlauncherjob_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KEMailClientLauncherJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kemailclientlauncherjob_timerevent_isbase) {
            kemailclientlauncherjob_timerevent_isbase = false;
            KEMailClientLauncherJob::timerEvent(event);
            return;
        }
        auto timerevent_cb = kemailclientlauncherjob_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kemailclientlauncherjob_childevent_isbase) {
            kemailclientlauncherjob_childevent_isbase = false;
            KEMailClientLauncherJob::childEvent(event);
            return;
        }
        auto childevent_cb = kemailclientlauncherjob_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kemailclientlauncherjob_customevent_isbase) {
            kemailclientlauncherjob_customevent_isbase = false;
            KEMailClientLauncherJob::customEvent(event);
            return;
        }
        auto customevent_cb = kemailclientlauncherjob_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kemailclientlauncherjob_connectnotify_isbase) {
            kemailclientlauncherjob_connectnotify_isbase = false;
            KEMailClientLauncherJob::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kemailclientlauncherjob_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kemailclientlauncherjob_disconnectnotify_isbase) {
            kemailclientlauncherjob_disconnectnotify_isbase = false;
            KEMailClientLauncherJob::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kemailclientlauncherjob_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kemailclientlauncherjob_setcapabilities_isbase) {
            kemailclientlauncherjob_setcapabilities_isbase = false;
            KEMailClientLauncherJob::setCapabilities(capabilities);
            return;
        }
        auto setcapabilities_cb = kemailclientlauncherjob_setcapabilities_callback;
        if (setcapabilities_cb) {
            int cbval1 = static_cast<int>(capabilities);

            setcapabilities_cb(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::setCapabilities(capabilities);
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kemailclientlauncherjob_isfinished_isbase) {
            kemailclientlauncherjob_isfinished_isbase = false;
            return KEMailClientLauncherJob::isFinished();
        }
        auto isfinished_cb = kemailclientlauncherjob_isfinished_callback;
        if (isfinished_cb) {
            bool callback_ret = isfinished_cb();
            return callback_ret;
        }
        return KEMailClientLauncherJob::isFinished();
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kemailclientlauncherjob_seterror_isbase) {
            kemailclientlauncherjob_seterror_isbase = false;
            KEMailClientLauncherJob::setError(errorCode);
            return;
        }
        auto seterror_cb = kemailclientlauncherjob_seterror_callback;
        if (seterror_cb) {
            int cbval1 = errorCode;

            seterror_cb(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::setError(errorCode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kemailclientlauncherjob_seterrortext_isbase) {
            kemailclientlauncherjob_seterrortext_isbase = false;
            KEMailClientLauncherJob::setErrorText(errorText);
            return;
        }
        auto seterrortext_cb = kemailclientlauncherjob_seterrortext_callback;
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
        KEMailClientLauncherJob::setErrorText(errorText);
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kemailclientlauncherjob_setprocessedamount_isbase) {
            kemailclientlauncherjob_setprocessedamount_isbase = false;
            KEMailClientLauncherJob::setProcessedAmount(unit, amount);
            return;
        }
        auto setprocessedamount_cb = kemailclientlauncherjob_setprocessedamount_callback;
        if (setprocessedamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            setprocessedamount_cb(this, cbval1, cbval2);
            return;
        }
        KEMailClientLauncherJob::setProcessedAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kemailclientlauncherjob_settotalamount_isbase) {
            kemailclientlauncherjob_settotalamount_isbase = false;
            KEMailClientLauncherJob::setTotalAmount(unit, amount);
            return;
        }
        auto settotalamount_cb = kemailclientlauncherjob_settotalamount_callback;
        if (settotalamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            settotalamount_cb(this, cbval1, cbval2);
            return;
        }
        KEMailClientLauncherJob::setTotalAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kemailclientlauncherjob_setprogressunit_isbase) {
            kemailclientlauncherjob_setprogressunit_isbase = false;
            KEMailClientLauncherJob::setProgressUnit(unit);
            return;
        }
        auto setprogressunit_cb = kemailclientlauncherjob_setprogressunit_callback;
        if (setprogressunit_cb) {
            int cbval1 = static_cast<int>(unit);

            setprogressunit_cb(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::setProgressUnit(unit);
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kemailclientlauncherjob_setpercent_isbase) {
            kemailclientlauncherjob_setpercent_isbase = false;
            KEMailClientLauncherJob::setPercent(percentage);
            return;
        }
        auto setpercent_cb = kemailclientlauncherjob_setpercent_callback;
        if (setpercent_cb) {
            unsigned long cbval1 = percentage;

            setpercent_cb(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::setPercent(percentage);
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kemailclientlauncherjob_emitresult_isbase) {
            kemailclientlauncherjob_emitresult_isbase = false;
            KEMailClientLauncherJob::emitResult();
            return;
        }
        auto emitresult_cb = kemailclientlauncherjob_emitresult_callback;
        if (emitresult_cb) {
            emitresult_cb();
            return;
        }
        KEMailClientLauncherJob::emitResult();
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kemailclientlauncherjob_emitpercent_isbase) {
            kemailclientlauncherjob_emitpercent_isbase = false;
            KEMailClientLauncherJob::emitPercent(processedAmount, totalAmount);
            return;
        }
        auto emitpercent_cb = kemailclientlauncherjob_emitpercent_callback;
        if (emitpercent_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            emitpercent_cb(this, cbval1, cbval2);
            return;
        }
        KEMailClientLauncherJob::emitPercent(processedAmount, totalAmount);
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kemailclientlauncherjob_emitspeed_isbase) {
            kemailclientlauncherjob_emitspeed_isbase = false;
            KEMailClientLauncherJob::emitSpeed(speed);
            return;
        }
        auto emitspeed_cb = kemailclientlauncherjob_emitspeed_callback;
        if (emitspeed_cb) {
            unsigned long cbval1 = speed;

            emitspeed_cb(this, cbval1);
            return;
        }
        KEMailClientLauncherJob::emitSpeed(speed);
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kemailclientlauncherjob_startelapsedtimer_isbase) {
            kemailclientlauncherjob_startelapsedtimer_isbase = false;
            KEMailClientLauncherJob::startElapsedTimer();
            return;
        }
        auto startelapsedtimer_cb = kemailclientlauncherjob_startelapsedtimer_callback;
        if (startelapsedtimer_cb) {
            startelapsedtimer_cb();
            return;
        }
        KEMailClientLauncherJob::startElapsedTimer();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kemailclientlauncherjob_sender_isbase) {
            kemailclientlauncherjob_sender_isbase = false;
            return KEMailClientLauncherJob::sender();
        }
        auto sender_cb = kemailclientlauncherjob_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KEMailClientLauncherJob::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kemailclientlauncherjob_sendersignalindex_isbase) {
            kemailclientlauncherjob_sendersignalindex_isbase = false;
            return KEMailClientLauncherJob::senderSignalIndex();
        }
        auto sendersignalindex_cb = kemailclientlauncherjob_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KEMailClientLauncherJob::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kemailclientlauncherjob_receivers_isbase) {
            kemailclientlauncherjob_receivers_isbase = false;
            return KEMailClientLauncherJob::receivers(signal);
        }
        auto receivers_cb = kemailclientlauncherjob_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KEMailClientLauncherJob::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kemailclientlauncherjob_issignalconnected_isbase) {
            kemailclientlauncherjob_issignalconnected_isbase = false;
            return KEMailClientLauncherJob::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kemailclientlauncherjob_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KEMailClientLauncherJob::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KEMailClientLauncherJob_DoKill(KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_SuperDoKill(KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_DoSuspend(KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_SuperDoSuspend(KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_DoResume(KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_SuperDoResume(KEMailClientLauncherJob* self);
    friend void KEMailClientLauncherJob_TimerEvent(KEMailClientLauncherJob* self, QTimerEvent* event);
    friend void KEMailClientLauncherJob_SuperTimerEvent(KEMailClientLauncherJob* self, QTimerEvent* event);
    friend void KEMailClientLauncherJob_ChildEvent(KEMailClientLauncherJob* self, QChildEvent* event);
    friend void KEMailClientLauncherJob_SuperChildEvent(KEMailClientLauncherJob* self, QChildEvent* event);
    friend void KEMailClientLauncherJob_CustomEvent(KEMailClientLauncherJob* self, QEvent* event);
    friend void KEMailClientLauncherJob_SuperCustomEvent(KEMailClientLauncherJob* self, QEvent* event);
    friend void KEMailClientLauncherJob_ConnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
    friend void KEMailClientLauncherJob_SuperConnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
    friend void KEMailClientLauncherJob_DisconnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
    friend void KEMailClientLauncherJob_SuperDisconnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
    friend void KEMailClientLauncherJob_SetCapabilities(KEMailClientLauncherJob* self, int capabilities);
    friend void KEMailClientLauncherJob_SuperSetCapabilities(KEMailClientLauncherJob* self, int capabilities);
    friend bool KEMailClientLauncherJob_IsFinished(const KEMailClientLauncherJob* self);
    friend bool KEMailClientLauncherJob_SuperIsFinished(const KEMailClientLauncherJob* self);
    friend void KEMailClientLauncherJob_SetError(KEMailClientLauncherJob* self, int errorCode);
    friend void KEMailClientLauncherJob_SuperSetError(KEMailClientLauncherJob* self, int errorCode);
    friend void KEMailClientLauncherJob_SetErrorText(KEMailClientLauncherJob* self, const libqt_string errorText);
    friend void KEMailClientLauncherJob_SuperSetErrorText(KEMailClientLauncherJob* self, const libqt_string errorText);
    friend void KEMailClientLauncherJob_SetProcessedAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount);
    friend void KEMailClientLauncherJob_SuperSetProcessedAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount);
    friend void KEMailClientLauncherJob_SetTotalAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount);
    friend void KEMailClientLauncherJob_SuperSetTotalAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount);
    friend void KEMailClientLauncherJob_SetProgressUnit(KEMailClientLauncherJob* self, int unit);
    friend void KEMailClientLauncherJob_SuperSetProgressUnit(KEMailClientLauncherJob* self, int unit);
    friend void KEMailClientLauncherJob_SetPercent(KEMailClientLauncherJob* self, unsigned long percentage);
    friend void KEMailClientLauncherJob_SuperSetPercent(KEMailClientLauncherJob* self, unsigned long percentage);
    friend void KEMailClientLauncherJob_EmitResult(KEMailClientLauncherJob* self);
    friend void KEMailClientLauncherJob_SuperEmitResult(KEMailClientLauncherJob* self);
    friend void KEMailClientLauncherJob_EmitPercent(KEMailClientLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KEMailClientLauncherJob_SuperEmitPercent(KEMailClientLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KEMailClientLauncherJob_EmitSpeed(KEMailClientLauncherJob* self, unsigned long speed);
    friend void KEMailClientLauncherJob_SuperEmitSpeed(KEMailClientLauncherJob* self, unsigned long speed);
    friend void KEMailClientLauncherJob_StartElapsedTimer(KEMailClientLauncherJob* self);
    friend void KEMailClientLauncherJob_SuperStartElapsedTimer(KEMailClientLauncherJob* self);
    friend QObject* KEMailClientLauncherJob_Sender(const KEMailClientLauncherJob* self);
    friend QObject* KEMailClientLauncherJob_SuperSender(const KEMailClientLauncherJob* self);
    friend int KEMailClientLauncherJob_SenderSignalIndex(const KEMailClientLauncherJob* self);
    friend int KEMailClientLauncherJob_SuperSenderSignalIndex(const KEMailClientLauncherJob* self);
    friend int KEMailClientLauncherJob_Receivers(const KEMailClientLauncherJob* self, const char* signal);
    friend int KEMailClientLauncherJob_SuperReceivers(const KEMailClientLauncherJob* self, const char* signal);
    friend bool KEMailClientLauncherJob_IsSignalConnected(const KEMailClientLauncherJob* self, const QMetaMethod* signal);
    friend bool KEMailClientLauncherJob_SuperIsSignalConnected(const KEMailClientLauncherJob* self, const QMetaMethod* signal);
};

#endif
