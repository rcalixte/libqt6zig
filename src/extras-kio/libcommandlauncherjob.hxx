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
    using KIO__CommandLauncherJob_MetaObject_Callback = QMetaObject* (*)();
    using KIO__CommandLauncherJob_Metacast_Callback = void* (*)(KIO__CommandLauncherJob*, const char*);
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
    using KIO__CommandLauncherJob_SetErrorText_Callback = void (*)(KIO__CommandLauncherJob*, const char*);
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
    KIO__CommandLauncherJob_MetaObject_Callback kio__commandlauncherjob_metaobject_callback = nullptr;
    KIO__CommandLauncherJob_Metacast_Callback kio__commandlauncherjob_metacast_callback = nullptr;
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
    mutable bool kio__commandlauncherjob_metaobject_isbase = false;
    mutable bool kio__commandlauncherjob_metacast_isbase = false;
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

    // Callback setters
    inline void setKIO__CommandLauncherJob_Start_Callback(KIO__CommandLauncherJob_Start_Callback cb) { kio__commandlauncherjob_start_callback = cb; }
    inline void setKIO__CommandLauncherJob_MetaObject_Callback(KIO__CommandLauncherJob_MetaObject_Callback cb) { kio__commandlauncherjob_metaobject_callback = cb; }
    inline void setKIO__CommandLauncherJob_Metacast_Callback(KIO__CommandLauncherJob_Metacast_Callback cb) { kio__commandlauncherjob_metacast_callback = cb; }
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
    inline void setKIO__CommandLauncherJob_MetaObject_IsBase(bool value) const { kio__commandlauncherjob_metaobject_isbase = value; }
    inline void setKIO__CommandLauncherJob_Metacast_IsBase(bool value) const { kio__commandlauncherjob_metacast_isbase = value; }
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
            return;
        }
        auto start_cb = kio__commandlauncherjob_start_callback;
        if (start_cb) {
            start_cb();
            return;
        }
        KIO__CommandLauncherJob::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__commandlauncherjob_metaobject_isbase) {
            kio__commandlauncherjob_metaobject_isbase = false;
            return KIO__CommandLauncherJob::metaObject();
        }
        auto metaobject_cb = kio__commandlauncherjob_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KIO__CommandLauncherJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__commandlauncherjob_metacast_isbase) {
            kio__commandlauncherjob_metacast_isbase = false;
            return KIO__CommandLauncherJob::qt_metacast(param1);
        }
        auto metacast_cb = kio__commandlauncherjob_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__CommandLauncherJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__commandlauncherjob_metacall_isbase) {
            kio__commandlauncherjob_metacall_isbase = false;
            return KIO__CommandLauncherJob::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kio__commandlauncherjob_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__CommandLauncherJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kio__commandlauncherjob_dokill_isbase) {
            kio__commandlauncherjob_dokill_isbase = false;
            return KIO__CommandLauncherJob::doKill();
        }
        auto dokill_cb = kio__commandlauncherjob_dokill_callback;
        if (dokill_cb) {
            bool callback_ret = dokill_cb();
            return callback_ret;
        }
        return KIO__CommandLauncherJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kio__commandlauncherjob_dosuspend_isbase) {
            kio__commandlauncherjob_dosuspend_isbase = false;
            return KIO__CommandLauncherJob::doSuspend();
        }
        auto dosuspend_cb = kio__commandlauncherjob_dosuspend_callback;
        if (dosuspend_cb) {
            bool callback_ret = dosuspend_cb();
            return callback_ret;
        }
        return KIO__CommandLauncherJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kio__commandlauncherjob_doresume_isbase) {
            kio__commandlauncherjob_doresume_isbase = false;
            return KIO__CommandLauncherJob::doResume();
        }
        auto doresume_cb = kio__commandlauncherjob_doresume_callback;
        if (doresume_cb) {
            bool callback_ret = doresume_cb();
            return callback_ret;
        }
        return KIO__CommandLauncherJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kio__commandlauncherjob_errorstring_isbase) {
            kio__commandlauncherjob_errorstring_isbase = false;
            return KIO__CommandLauncherJob::errorString();
        }
        auto errorstring_cb = kio__commandlauncherjob_errorstring_callback;
        if (errorstring_cb) {
            const char* callback_ret = errorstring_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIO__CommandLauncherJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__commandlauncherjob_event_isbase) {
            kio__commandlauncherjob_event_isbase = false;
            return KIO__CommandLauncherJob::event(event);
        }
        auto event_cb = kio__commandlauncherjob_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__CommandLauncherJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__commandlauncherjob_eventfilter_isbase) {
            kio__commandlauncherjob_eventfilter_isbase = false;
            return KIO__CommandLauncherJob::eventFilter(watched, event);
        }
        auto eventfilter_cb = kio__commandlauncherjob_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__CommandLauncherJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__commandlauncherjob_timerevent_isbase) {
            kio__commandlauncherjob_timerevent_isbase = false;
            KIO__CommandLauncherJob::timerEvent(event);
            return;
        }
        auto timerevent_cb = kio__commandlauncherjob_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__commandlauncherjob_childevent_isbase) {
            kio__commandlauncherjob_childevent_isbase = false;
            KIO__CommandLauncherJob::childEvent(event);
            return;
        }
        auto childevent_cb = kio__commandlauncherjob_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__commandlauncherjob_customevent_isbase) {
            kio__commandlauncherjob_customevent_isbase = false;
            KIO__CommandLauncherJob::customEvent(event);
            return;
        }
        auto customevent_cb = kio__commandlauncherjob_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__commandlauncherjob_connectnotify_isbase) {
            kio__commandlauncherjob_connectnotify_isbase = false;
            KIO__CommandLauncherJob::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kio__commandlauncherjob_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__commandlauncherjob_disconnectnotify_isbase) {
            kio__commandlauncherjob_disconnectnotify_isbase = false;
            KIO__CommandLauncherJob::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kio__commandlauncherjob_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kio__commandlauncherjob_setcapabilities_isbase) {
            kio__commandlauncherjob_setcapabilities_isbase = false;
            KIO__CommandLauncherJob::setCapabilities(capabilities);
            return;
        }
        auto setcapabilities_cb = kio__commandlauncherjob_setcapabilities_callback;
        if (setcapabilities_cb) {
            int cbval1 = static_cast<int>(capabilities);

            setcapabilities_cb(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::setCapabilities(capabilities);
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kio__commandlauncherjob_isfinished_isbase) {
            kio__commandlauncherjob_isfinished_isbase = false;
            return KIO__CommandLauncherJob::isFinished();
        }
        auto isfinished_cb = kio__commandlauncherjob_isfinished_callback;
        if (isfinished_cb) {
            bool callback_ret = isfinished_cb();
            return callback_ret;
        }
        return KIO__CommandLauncherJob::isFinished();
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kio__commandlauncherjob_seterror_isbase) {
            kio__commandlauncherjob_seterror_isbase = false;
            KIO__CommandLauncherJob::setError(errorCode);
            return;
        }
        auto seterror_cb = kio__commandlauncherjob_seterror_callback;
        if (seterror_cb) {
            int cbval1 = errorCode;

            seterror_cb(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::setError(errorCode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kio__commandlauncherjob_seterrortext_isbase) {
            kio__commandlauncherjob_seterrortext_isbase = false;
            KIO__CommandLauncherJob::setErrorText(errorText);
            return;
        }
        auto seterrortext_cb = kio__commandlauncherjob_seterrortext_callback;
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
        KIO__CommandLauncherJob::setErrorText(errorText);
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__commandlauncherjob_setprocessedamount_isbase) {
            kio__commandlauncherjob_setprocessedamount_isbase = false;
            KIO__CommandLauncherJob::setProcessedAmount(unit, amount);
            return;
        }
        auto setprocessedamount_cb = kio__commandlauncherjob_setprocessedamount_callback;
        if (setprocessedamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            setprocessedamount_cb(this, cbval1, cbval2);
            return;
        }
        KIO__CommandLauncherJob::setProcessedAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kio__commandlauncherjob_settotalamount_isbase) {
            kio__commandlauncherjob_settotalamount_isbase = false;
            KIO__CommandLauncherJob::setTotalAmount(unit, amount);
            return;
        }
        auto settotalamount_cb = kio__commandlauncherjob_settotalamount_callback;
        if (settotalamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            settotalamount_cb(this, cbval1, cbval2);
            return;
        }
        KIO__CommandLauncherJob::setTotalAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kio__commandlauncherjob_setprogressunit_isbase) {
            kio__commandlauncherjob_setprogressunit_isbase = false;
            KIO__CommandLauncherJob::setProgressUnit(unit);
            return;
        }
        auto setprogressunit_cb = kio__commandlauncherjob_setprogressunit_callback;
        if (setprogressunit_cb) {
            int cbval1 = static_cast<int>(unit);

            setprogressunit_cb(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::setProgressUnit(unit);
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kio__commandlauncherjob_setpercent_isbase) {
            kio__commandlauncherjob_setpercent_isbase = false;
            KIO__CommandLauncherJob::setPercent(percentage);
            return;
        }
        auto setpercent_cb = kio__commandlauncherjob_setpercent_callback;
        if (setpercent_cb) {
            unsigned long cbval1 = percentage;

            setpercent_cb(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::setPercent(percentage);
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kio__commandlauncherjob_emitresult_isbase) {
            kio__commandlauncherjob_emitresult_isbase = false;
            KIO__CommandLauncherJob::emitResult();
            return;
        }
        auto emitresult_cb = kio__commandlauncherjob_emitresult_callback;
        if (emitresult_cb) {
            emitresult_cb();
            return;
        }
        KIO__CommandLauncherJob::emitResult();
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kio__commandlauncherjob_emitpercent_isbase) {
            kio__commandlauncherjob_emitpercent_isbase = false;
            KIO__CommandLauncherJob::emitPercent(processedAmount, totalAmount);
            return;
        }
        auto emitpercent_cb = kio__commandlauncherjob_emitpercent_callback;
        if (emitpercent_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            emitpercent_cb(this, cbval1, cbval2);
            return;
        }
        KIO__CommandLauncherJob::emitPercent(processedAmount, totalAmount);
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kio__commandlauncherjob_emitspeed_isbase) {
            kio__commandlauncherjob_emitspeed_isbase = false;
            KIO__CommandLauncherJob::emitSpeed(speed);
            return;
        }
        auto emitspeed_cb = kio__commandlauncherjob_emitspeed_callback;
        if (emitspeed_cb) {
            unsigned long cbval1 = speed;

            emitspeed_cb(this, cbval1);
            return;
        }
        KIO__CommandLauncherJob::emitSpeed(speed);
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kio__commandlauncherjob_startelapsedtimer_isbase) {
            kio__commandlauncherjob_startelapsedtimer_isbase = false;
            KIO__CommandLauncherJob::startElapsedTimer();
            return;
        }
        auto startelapsedtimer_cb = kio__commandlauncherjob_startelapsedtimer_callback;
        if (startelapsedtimer_cb) {
            startelapsedtimer_cb();
            return;
        }
        KIO__CommandLauncherJob::startElapsedTimer();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__commandlauncherjob_sender_isbase) {
            kio__commandlauncherjob_sender_isbase = false;
            return KIO__CommandLauncherJob::sender();
        }
        auto sender_cb = kio__commandlauncherjob_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KIO__CommandLauncherJob::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__commandlauncherjob_sendersignalindex_isbase) {
            kio__commandlauncherjob_sendersignalindex_isbase = false;
            return KIO__CommandLauncherJob::senderSignalIndex();
        }
        auto sendersignalindex_cb = kio__commandlauncherjob_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KIO__CommandLauncherJob::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__commandlauncherjob_receivers_isbase) {
            kio__commandlauncherjob_receivers_isbase = false;
            return KIO__CommandLauncherJob::receivers(signal);
        }
        auto receivers_cb = kio__commandlauncherjob_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIO__CommandLauncherJob::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__commandlauncherjob_issignalconnected_isbase) {
            kio__commandlauncherjob_issignalconnected_isbase = false;
            return KIO__CommandLauncherJob::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kio__commandlauncherjob_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__CommandLauncherJob::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KIO__CommandLauncherJob_DoKill(KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_SuperDoKill(KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_DoSuspend(KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_SuperDoSuspend(KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_DoResume(KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_SuperDoResume(KIO::CommandLauncherJob* self);
    friend void KIO__CommandLauncherJob_TimerEvent(KIO::CommandLauncherJob* self, QTimerEvent* event);
    friend void KIO__CommandLauncherJob_SuperTimerEvent(KIO::CommandLauncherJob* self, QTimerEvent* event);
    friend void KIO__CommandLauncherJob_ChildEvent(KIO::CommandLauncherJob* self, QChildEvent* event);
    friend void KIO__CommandLauncherJob_SuperChildEvent(KIO::CommandLauncherJob* self, QChildEvent* event);
    friend void KIO__CommandLauncherJob_CustomEvent(KIO::CommandLauncherJob* self, QEvent* event);
    friend void KIO__CommandLauncherJob_SuperCustomEvent(KIO::CommandLauncherJob* self, QEvent* event);
    friend void KIO__CommandLauncherJob_ConnectNotify(KIO::CommandLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__CommandLauncherJob_SuperConnectNotify(KIO::CommandLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__CommandLauncherJob_DisconnectNotify(KIO::CommandLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__CommandLauncherJob_SuperDisconnectNotify(KIO::CommandLauncherJob* self, const QMetaMethod* signal);
    friend void KIO__CommandLauncherJob_SetCapabilities(KIO::CommandLauncherJob* self, int capabilities);
    friend void KIO__CommandLauncherJob_SuperSetCapabilities(KIO::CommandLauncherJob* self, int capabilities);
    friend bool KIO__CommandLauncherJob_IsFinished(const KIO::CommandLauncherJob* self);
    friend bool KIO__CommandLauncherJob_SuperIsFinished(const KIO::CommandLauncherJob* self);
    friend void KIO__CommandLauncherJob_SetError(KIO::CommandLauncherJob* self, int errorCode);
    friend void KIO__CommandLauncherJob_SuperSetError(KIO::CommandLauncherJob* self, int errorCode);
    friend void KIO__CommandLauncherJob_SetErrorText(KIO::CommandLauncherJob* self, const libqt_string errorText);
    friend void KIO__CommandLauncherJob_SuperSetErrorText(KIO::CommandLauncherJob* self, const libqt_string errorText);
    friend void KIO__CommandLauncherJob_SetProcessedAmount(KIO::CommandLauncherJob* self, int unit, unsigned long long amount);
    friend void KIO__CommandLauncherJob_SuperSetProcessedAmount(KIO::CommandLauncherJob* self, int unit, unsigned long long amount);
    friend void KIO__CommandLauncherJob_SetTotalAmount(KIO::CommandLauncherJob* self, int unit, unsigned long long amount);
    friend void KIO__CommandLauncherJob_SuperSetTotalAmount(KIO::CommandLauncherJob* self, int unit, unsigned long long amount);
    friend void KIO__CommandLauncherJob_SetProgressUnit(KIO::CommandLauncherJob* self, int unit);
    friend void KIO__CommandLauncherJob_SuperSetProgressUnit(KIO::CommandLauncherJob* self, int unit);
    friend void KIO__CommandLauncherJob_SetPercent(KIO::CommandLauncherJob* self, unsigned long percentage);
    friend void KIO__CommandLauncherJob_SuperSetPercent(KIO::CommandLauncherJob* self, unsigned long percentage);
    friend void KIO__CommandLauncherJob_EmitResult(KIO::CommandLauncherJob* self);
    friend void KIO__CommandLauncherJob_SuperEmitResult(KIO::CommandLauncherJob* self);
    friend void KIO__CommandLauncherJob_EmitPercent(KIO::CommandLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__CommandLauncherJob_SuperEmitPercent(KIO::CommandLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KIO__CommandLauncherJob_EmitSpeed(KIO::CommandLauncherJob* self, unsigned long speed);
    friend void KIO__CommandLauncherJob_SuperEmitSpeed(KIO::CommandLauncherJob* self, unsigned long speed);
    friend void KIO__CommandLauncherJob_StartElapsedTimer(KIO::CommandLauncherJob* self);
    friend void KIO__CommandLauncherJob_SuperStartElapsedTimer(KIO::CommandLauncherJob* self);
    friend QObject* KIO__CommandLauncherJob_Sender(const KIO::CommandLauncherJob* self);
    friend QObject* KIO__CommandLauncherJob_SuperSender(const KIO::CommandLauncherJob* self);
    friend int KIO__CommandLauncherJob_SenderSignalIndex(const KIO::CommandLauncherJob* self);
    friend int KIO__CommandLauncherJob_SuperSenderSignalIndex(const KIO::CommandLauncherJob* self);
    friend int KIO__CommandLauncherJob_Receivers(const KIO::CommandLauncherJob* self, const char* signal);
    friend int KIO__CommandLauncherJob_SuperReceivers(const KIO::CommandLauncherJob* self, const char* signal);
    friend bool KIO__CommandLauncherJob_IsSignalConnected(const KIO::CommandLauncherJob* self, const QMetaMethod* signal);
    friend bool KIO__CommandLauncherJob_SuperIsSignalConnected(const KIO::CommandLauncherJob* self, const QMetaMethod* signal);
};

#endif
