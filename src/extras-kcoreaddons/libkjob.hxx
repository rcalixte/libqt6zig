#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKJOB_H
#define SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KJob so that we can call protected methods
class VirtualKJob : public KJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKJob = true;

    // Virtual class public types (including callbacks)
    using KJob_MetaObject_Callback = QMetaObject* (*)();
    using KJob_Metacast_Callback = void* (*)(KJob*, const char*);
    using KJob_Metacall_Callback = int (*)(KJob*, int, int, void**);
    using KJob_Start_Callback = void (*)();
    using KJob_DoKill_Callback = bool (*)();
    using KJob_DoSuspend_Callback = bool (*)();
    using KJob_DoResume_Callback = bool (*)();
    using KJob_ErrorString_Callback = const char* (*)();
    using KJob_Event_Callback = bool (*)(KJob*, QEvent*);
    using KJob_EventFilter_Callback = bool (*)(KJob*, QObject*, QEvent*);
    using KJob_TimerEvent_Callback = void (*)(KJob*, QTimerEvent*);
    using KJob_ChildEvent_Callback = void (*)(KJob*, QChildEvent*);
    using KJob_CustomEvent_Callback = void (*)(KJob*, QEvent*);
    using KJob_ConnectNotify_Callback = void (*)(KJob*, QMetaMethod*);
    using KJob_DisconnectNotify_Callback = void (*)(KJob*, QMetaMethod*);
    using KJob_SetCapabilities_Callback = void (*)(KJob*, int);
    using KJob_IsFinished_Callback = bool (*)();
    using KJob_SetError_Callback = void (*)(KJob*, int);
    using KJob_SetErrorText_Callback = void (*)(KJob*, const char*);
    using KJob_SetProcessedAmount_Callback = void (*)(KJob*, int, unsigned long long);
    using KJob_SetTotalAmount_Callback = void (*)(KJob*, int, unsigned long long);
    using KJob_SetProgressUnit_Callback = void (*)(KJob*, int);
    using KJob_SetPercent_Callback = void (*)(KJob*, unsigned long);
    using KJob_EmitResult_Callback = void (*)();
    using KJob_EmitPercent_Callback = void (*)(KJob*, unsigned long long, unsigned long long);
    using KJob_EmitSpeed_Callback = void (*)(KJob*, unsigned long);
    using KJob_StartElapsedTimer_Callback = void (*)();
    using KJob_Sender_Callback = QObject* (*)();
    using KJob_SenderSignalIndex_Callback = int (*)();
    using KJob_Receivers_Callback = int (*)(const KJob*, const char*);
    using KJob_IsSignalConnected_Callback = bool (*)(const KJob*, QMetaMethod*);

  protected:
    // Instance callback storage
    KJob_MetaObject_Callback kjob_metaobject_callback = nullptr;
    KJob_Metacast_Callback kjob_metacast_callback = nullptr;
    KJob_Metacall_Callback kjob_metacall_callback = nullptr;
    KJob_Start_Callback kjob_start_callback = nullptr;
    KJob_DoKill_Callback kjob_dokill_callback = nullptr;
    KJob_DoSuspend_Callback kjob_dosuspend_callback = nullptr;
    KJob_DoResume_Callback kjob_doresume_callback = nullptr;
    KJob_ErrorString_Callback kjob_errorstring_callback = nullptr;
    KJob_Event_Callback kjob_event_callback = nullptr;
    KJob_EventFilter_Callback kjob_eventfilter_callback = nullptr;
    KJob_TimerEvent_Callback kjob_timerevent_callback = nullptr;
    KJob_ChildEvent_Callback kjob_childevent_callback = nullptr;
    KJob_CustomEvent_Callback kjob_customevent_callback = nullptr;
    KJob_ConnectNotify_Callback kjob_connectnotify_callback = nullptr;
    KJob_DisconnectNotify_Callback kjob_disconnectnotify_callback = nullptr;
    KJob_SetCapabilities_Callback kjob_setcapabilities_callback = nullptr;
    KJob_IsFinished_Callback kjob_isfinished_callback = nullptr;
    KJob_SetError_Callback kjob_seterror_callback = nullptr;
    KJob_SetErrorText_Callback kjob_seterrortext_callback = nullptr;
    KJob_SetProcessedAmount_Callback kjob_setprocessedamount_callback = nullptr;
    KJob_SetTotalAmount_Callback kjob_settotalamount_callback = nullptr;
    KJob_SetProgressUnit_Callback kjob_setprogressunit_callback = nullptr;
    KJob_SetPercent_Callback kjob_setpercent_callback = nullptr;
    KJob_EmitResult_Callback kjob_emitresult_callback = nullptr;
    KJob_EmitPercent_Callback kjob_emitpercent_callback = nullptr;
    KJob_EmitSpeed_Callback kjob_emitspeed_callback = nullptr;
    KJob_StartElapsedTimer_Callback kjob_startelapsedtimer_callback = nullptr;
    KJob_Sender_Callback kjob_sender_callback = nullptr;
    KJob_SenderSignalIndex_Callback kjob_sendersignalindex_callback = nullptr;
    KJob_Receivers_Callback kjob_receivers_callback = nullptr;
    KJob_IsSignalConnected_Callback kjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kjob_metaobject_isbase = false;
    mutable bool kjob_metacast_isbase = false;
    mutable bool kjob_metacall_isbase = false;
    mutable bool kjob_start_isbase = false;
    mutable bool kjob_dokill_isbase = false;
    mutable bool kjob_dosuspend_isbase = false;
    mutable bool kjob_doresume_isbase = false;
    mutable bool kjob_errorstring_isbase = false;
    mutable bool kjob_event_isbase = false;
    mutable bool kjob_eventfilter_isbase = false;
    mutable bool kjob_timerevent_isbase = false;
    mutable bool kjob_childevent_isbase = false;
    mutable bool kjob_customevent_isbase = false;
    mutable bool kjob_connectnotify_isbase = false;
    mutable bool kjob_disconnectnotify_isbase = false;
    mutable bool kjob_setcapabilities_isbase = false;
    mutable bool kjob_isfinished_isbase = false;
    mutable bool kjob_seterror_isbase = false;
    mutable bool kjob_seterrortext_isbase = false;
    mutable bool kjob_setprocessedamount_isbase = false;
    mutable bool kjob_settotalamount_isbase = false;
    mutable bool kjob_setprogressunit_isbase = false;
    mutable bool kjob_setpercent_isbase = false;
    mutable bool kjob_emitresult_isbase = false;
    mutable bool kjob_emitpercent_isbase = false;
    mutable bool kjob_emitspeed_isbase = false;
    mutable bool kjob_startelapsedtimer_isbase = false;
    mutable bool kjob_sender_isbase = false;
    mutable bool kjob_sendersignalindex_isbase = false;
    mutable bool kjob_receivers_isbase = false;
    mutable bool kjob_issignalconnected_isbase = false;

  public:
    VirtualKJob() : KJob() {};
    VirtualKJob(QObject* parent) : KJob(parent) {};

    // Callback setters
    inline void setKJob_MetaObject_Callback(KJob_MetaObject_Callback cb) { kjob_metaobject_callback = cb; }
    inline void setKJob_Metacast_Callback(KJob_Metacast_Callback cb) { kjob_metacast_callback = cb; }
    inline void setKJob_Metacall_Callback(KJob_Metacall_Callback cb) { kjob_metacall_callback = cb; }
    inline void setKJob_Start_Callback(KJob_Start_Callback cb) { kjob_start_callback = cb; }
    inline void setKJob_DoKill_Callback(KJob_DoKill_Callback cb) { kjob_dokill_callback = cb; }
    inline void setKJob_DoSuspend_Callback(KJob_DoSuspend_Callback cb) { kjob_dosuspend_callback = cb; }
    inline void setKJob_DoResume_Callback(KJob_DoResume_Callback cb) { kjob_doresume_callback = cb; }
    inline void setKJob_ErrorString_Callback(KJob_ErrorString_Callback cb) { kjob_errorstring_callback = cb; }
    inline void setKJob_Event_Callback(KJob_Event_Callback cb) { kjob_event_callback = cb; }
    inline void setKJob_EventFilter_Callback(KJob_EventFilter_Callback cb) { kjob_eventfilter_callback = cb; }
    inline void setKJob_TimerEvent_Callback(KJob_TimerEvent_Callback cb) { kjob_timerevent_callback = cb; }
    inline void setKJob_ChildEvent_Callback(KJob_ChildEvent_Callback cb) { kjob_childevent_callback = cb; }
    inline void setKJob_CustomEvent_Callback(KJob_CustomEvent_Callback cb) { kjob_customevent_callback = cb; }
    inline void setKJob_ConnectNotify_Callback(KJob_ConnectNotify_Callback cb) { kjob_connectnotify_callback = cb; }
    inline void setKJob_DisconnectNotify_Callback(KJob_DisconnectNotify_Callback cb) { kjob_disconnectnotify_callback = cb; }
    inline void setKJob_SetCapabilities_Callback(KJob_SetCapabilities_Callback cb) { kjob_setcapabilities_callback = cb; }
    inline void setKJob_IsFinished_Callback(KJob_IsFinished_Callback cb) { kjob_isfinished_callback = cb; }
    inline void setKJob_SetError_Callback(KJob_SetError_Callback cb) { kjob_seterror_callback = cb; }
    inline void setKJob_SetErrorText_Callback(KJob_SetErrorText_Callback cb) { kjob_seterrortext_callback = cb; }
    inline void setKJob_SetProcessedAmount_Callback(KJob_SetProcessedAmount_Callback cb) { kjob_setprocessedamount_callback = cb; }
    inline void setKJob_SetTotalAmount_Callback(KJob_SetTotalAmount_Callback cb) { kjob_settotalamount_callback = cb; }
    inline void setKJob_SetProgressUnit_Callback(KJob_SetProgressUnit_Callback cb) { kjob_setprogressunit_callback = cb; }
    inline void setKJob_SetPercent_Callback(KJob_SetPercent_Callback cb) { kjob_setpercent_callback = cb; }
    inline void setKJob_EmitResult_Callback(KJob_EmitResult_Callback cb) { kjob_emitresult_callback = cb; }
    inline void setKJob_EmitPercent_Callback(KJob_EmitPercent_Callback cb) { kjob_emitpercent_callback = cb; }
    inline void setKJob_EmitSpeed_Callback(KJob_EmitSpeed_Callback cb) { kjob_emitspeed_callback = cb; }
    inline void setKJob_StartElapsedTimer_Callback(KJob_StartElapsedTimer_Callback cb) { kjob_startelapsedtimer_callback = cb; }
    inline void setKJob_Sender_Callback(KJob_Sender_Callback cb) { kjob_sender_callback = cb; }
    inline void setKJob_SenderSignalIndex_Callback(KJob_SenderSignalIndex_Callback cb) { kjob_sendersignalindex_callback = cb; }
    inline void setKJob_Receivers_Callback(KJob_Receivers_Callback cb) { kjob_receivers_callback = cb; }
    inline void setKJob_IsSignalConnected_Callback(KJob_IsSignalConnected_Callback cb) { kjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKJob_MetaObject_IsBase(bool value) const { kjob_metaobject_isbase = value; }
    inline void setKJob_Metacast_IsBase(bool value) const { kjob_metacast_isbase = value; }
    inline void setKJob_Metacall_IsBase(bool value) const { kjob_metacall_isbase = value; }
    inline void setKJob_Start_IsBase(bool value) const { kjob_start_isbase = value; }
    inline void setKJob_DoKill_IsBase(bool value) const { kjob_dokill_isbase = value; }
    inline void setKJob_DoSuspend_IsBase(bool value) const { kjob_dosuspend_isbase = value; }
    inline void setKJob_DoResume_IsBase(bool value) const { kjob_doresume_isbase = value; }
    inline void setKJob_ErrorString_IsBase(bool value) const { kjob_errorstring_isbase = value; }
    inline void setKJob_Event_IsBase(bool value) const { kjob_event_isbase = value; }
    inline void setKJob_EventFilter_IsBase(bool value) const { kjob_eventfilter_isbase = value; }
    inline void setKJob_TimerEvent_IsBase(bool value) const { kjob_timerevent_isbase = value; }
    inline void setKJob_ChildEvent_IsBase(bool value) const { kjob_childevent_isbase = value; }
    inline void setKJob_CustomEvent_IsBase(bool value) const { kjob_customevent_isbase = value; }
    inline void setKJob_ConnectNotify_IsBase(bool value) const { kjob_connectnotify_isbase = value; }
    inline void setKJob_DisconnectNotify_IsBase(bool value) const { kjob_disconnectnotify_isbase = value; }
    inline void setKJob_SetCapabilities_IsBase(bool value) const { kjob_setcapabilities_isbase = value; }
    inline void setKJob_IsFinished_IsBase(bool value) const { kjob_isfinished_isbase = value; }
    inline void setKJob_SetError_IsBase(bool value) const { kjob_seterror_isbase = value; }
    inline void setKJob_SetErrorText_IsBase(bool value) const { kjob_seterrortext_isbase = value; }
    inline void setKJob_SetProcessedAmount_IsBase(bool value) const { kjob_setprocessedamount_isbase = value; }
    inline void setKJob_SetTotalAmount_IsBase(bool value) const { kjob_settotalamount_isbase = value; }
    inline void setKJob_SetProgressUnit_IsBase(bool value) const { kjob_setprogressunit_isbase = value; }
    inline void setKJob_SetPercent_IsBase(bool value) const { kjob_setpercent_isbase = value; }
    inline void setKJob_EmitResult_IsBase(bool value) const { kjob_emitresult_isbase = value; }
    inline void setKJob_EmitPercent_IsBase(bool value) const { kjob_emitpercent_isbase = value; }
    inline void setKJob_EmitSpeed_IsBase(bool value) const { kjob_emitspeed_isbase = value; }
    inline void setKJob_StartElapsedTimer_IsBase(bool value) const { kjob_startelapsedtimer_isbase = value; }
    inline void setKJob_Sender_IsBase(bool value) const { kjob_sender_isbase = value; }
    inline void setKJob_SenderSignalIndex_IsBase(bool value) const { kjob_sendersignalindex_isbase = value; }
    inline void setKJob_Receivers_IsBase(bool value) const { kjob_receivers_isbase = value; }
    inline void setKJob_IsSignalConnected_IsBase(bool value) const { kjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kjob_metaobject_isbase) {
            kjob_metaobject_isbase = false;
            return KJob::metaObject();
        }
        auto metaobject_cb = kjob_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kjob_metacast_isbase) {
            kjob_metacast_isbase = false;
            return KJob::qt_metacast(param1);
        }
        auto metacast_cb = kjob_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kjob_metacall_isbase) {
            kjob_metacall_isbase = false;
            return KJob::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kjob_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        auto start_cb = kjob_start_callback;
        if (start_cb) {
            start_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kjob_dokill_isbase) {
            kjob_dokill_isbase = false;
            return KJob::doKill();
        }
        auto dokill_cb = kjob_dokill_callback;
        if (dokill_cb) {
            bool callback_ret = dokill_cb();
            return callback_ret;
        }
        return KJob::doKill();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kjob_dosuspend_isbase) {
            kjob_dosuspend_isbase = false;
            return KJob::doSuspend();
        }
        auto dosuspend_cb = kjob_dosuspend_callback;
        if (dosuspend_cb) {
            bool callback_ret = dosuspend_cb();
            return callback_ret;
        }
        return KJob::doSuspend();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kjob_doresume_isbase) {
            kjob_doresume_isbase = false;
            return KJob::doResume();
        }
        auto doresume_cb = kjob_doresume_callback;
        if (doresume_cb) {
            bool callback_ret = doresume_cb();
            return callback_ret;
        }
        return KJob::doResume();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kjob_errorstring_isbase) {
            kjob_errorstring_isbase = false;
            return KJob::errorString();
        }
        auto errorstring_cb = kjob_errorstring_callback;
        if (errorstring_cb) {
            const char* callback_ret = errorstring_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KJob::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kjob_event_isbase) {
            kjob_event_isbase = false;
            return KJob::event(event);
        }
        auto event_cb = kjob_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kjob_eventfilter_isbase) {
            kjob_eventfilter_isbase = false;
            return KJob::eventFilter(watched, event);
        }
        auto eventfilter_cb = kjob_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kjob_timerevent_isbase) {
            kjob_timerevent_isbase = false;
            KJob::timerEvent(event);
            return;
        }
        auto timerevent_cb = kjob_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kjob_childevent_isbase) {
            kjob_childevent_isbase = false;
            KJob::childEvent(event);
            return;
        }
        auto childevent_cb = kjob_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kjob_customevent_isbase) {
            kjob_customevent_isbase = false;
            KJob::customEvent(event);
            return;
        }
        auto customevent_cb = kjob_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kjob_connectnotify_isbase) {
            kjob_connectnotify_isbase = false;
            KJob::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kjob_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kjob_disconnectnotify_isbase) {
            kjob_disconnectnotify_isbase = false;
            KJob::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kjob_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KJob::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kjob_setcapabilities_isbase) {
            kjob_setcapabilities_isbase = false;
            KJob::setCapabilities(capabilities);
            return;
        }
        auto setcapabilities_cb = kjob_setcapabilities_callback;
        if (setcapabilities_cb) {
            int cbval1 = static_cast<int>(capabilities);

            setcapabilities_cb(this, cbval1);
            return;
        }
        KJob::setCapabilities(capabilities);
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kjob_isfinished_isbase) {
            kjob_isfinished_isbase = false;
            return KJob::isFinished();
        }
        auto isfinished_cb = kjob_isfinished_callback;
        if (isfinished_cb) {
            bool callback_ret = isfinished_cb();
            return callback_ret;
        }
        return KJob::isFinished();
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kjob_seterror_isbase) {
            kjob_seterror_isbase = false;
            KJob::setError(errorCode);
            return;
        }
        auto seterror_cb = kjob_seterror_callback;
        if (seterror_cb) {
            int cbval1 = errorCode;

            seterror_cb(this, cbval1);
            return;
        }
        KJob::setError(errorCode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kjob_seterrortext_isbase) {
            kjob_seterrortext_isbase = false;
            KJob::setErrorText(errorText);
            return;
        }
        auto seterrortext_cb = kjob_seterrortext_callback;
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
        KJob::setErrorText(errorText);
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kjob_setprocessedamount_isbase) {
            kjob_setprocessedamount_isbase = false;
            KJob::setProcessedAmount(unit, amount);
            return;
        }
        auto setprocessedamount_cb = kjob_setprocessedamount_callback;
        if (setprocessedamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            setprocessedamount_cb(this, cbval1, cbval2);
            return;
        }
        KJob::setProcessedAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kjob_settotalamount_isbase) {
            kjob_settotalamount_isbase = false;
            KJob::setTotalAmount(unit, amount);
            return;
        }
        auto settotalamount_cb = kjob_settotalamount_callback;
        if (settotalamount_cb) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            settotalamount_cb(this, cbval1, cbval2);
            return;
        }
        KJob::setTotalAmount(unit, amount);
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kjob_setprogressunit_isbase) {
            kjob_setprogressunit_isbase = false;
            KJob::setProgressUnit(unit);
            return;
        }
        auto setprogressunit_cb = kjob_setprogressunit_callback;
        if (setprogressunit_cb) {
            int cbval1 = static_cast<int>(unit);

            setprogressunit_cb(this, cbval1);
            return;
        }
        KJob::setProgressUnit(unit);
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kjob_setpercent_isbase) {
            kjob_setpercent_isbase = false;
            KJob::setPercent(percentage);
            return;
        }
        auto setpercent_cb = kjob_setpercent_callback;
        if (setpercent_cb) {
            unsigned long cbval1 = percentage;

            setpercent_cb(this, cbval1);
            return;
        }
        KJob::setPercent(percentage);
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kjob_emitresult_isbase) {
            kjob_emitresult_isbase = false;
            KJob::emitResult();
            return;
        }
        auto emitresult_cb = kjob_emitresult_callback;
        if (emitresult_cb) {
            emitresult_cb();
            return;
        }
        KJob::emitResult();
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kjob_emitpercent_isbase) {
            kjob_emitpercent_isbase = false;
            KJob::emitPercent(processedAmount, totalAmount);
            return;
        }
        auto emitpercent_cb = kjob_emitpercent_callback;
        if (emitpercent_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            emitpercent_cb(this, cbval1, cbval2);
            return;
        }
        KJob::emitPercent(processedAmount, totalAmount);
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kjob_emitspeed_isbase) {
            kjob_emitspeed_isbase = false;
            KJob::emitSpeed(speed);
            return;
        }
        auto emitspeed_cb = kjob_emitspeed_callback;
        if (emitspeed_cb) {
            unsigned long cbval1 = speed;

            emitspeed_cb(this, cbval1);
            return;
        }
        KJob::emitSpeed(speed);
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kjob_startelapsedtimer_isbase) {
            kjob_startelapsedtimer_isbase = false;
            KJob::startElapsedTimer();
            return;
        }
        auto startelapsedtimer_cb = kjob_startelapsedtimer_callback;
        if (startelapsedtimer_cb) {
            startelapsedtimer_cb();
            return;
        }
        KJob::startElapsedTimer();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kjob_sender_isbase) {
            kjob_sender_isbase = false;
            return KJob::sender();
        }
        auto sender_cb = kjob_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KJob::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kjob_sendersignalindex_isbase) {
            kjob_sendersignalindex_isbase = false;
            return KJob::senderSignalIndex();
        }
        auto sendersignalindex_cb = kjob_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KJob::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kjob_receivers_isbase) {
            kjob_receivers_isbase = false;
            return KJob::receivers(signal);
        }
        auto receivers_cb = kjob_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KJob::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kjob_issignalconnected_isbase) {
            kjob_issignalconnected_isbase = false;
            return KJob::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kjob_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KJob::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KJob_DoKill(KJob* self);
    friend bool KJob_SuperDoKill(KJob* self);
    friend bool KJob_DoSuspend(KJob* self);
    friend bool KJob_SuperDoSuspend(KJob* self);
    friend bool KJob_DoResume(KJob* self);
    friend bool KJob_SuperDoResume(KJob* self);
    friend void KJob_TimerEvent(KJob* self, QTimerEvent* event);
    friend void KJob_SuperTimerEvent(KJob* self, QTimerEvent* event);
    friend void KJob_ChildEvent(KJob* self, QChildEvent* event);
    friend void KJob_SuperChildEvent(KJob* self, QChildEvent* event);
    friend void KJob_CustomEvent(KJob* self, QEvent* event);
    friend void KJob_SuperCustomEvent(KJob* self, QEvent* event);
    friend void KJob_ConnectNotify(KJob* self, const QMetaMethod* signal);
    friend void KJob_SuperConnectNotify(KJob* self, const QMetaMethod* signal);
    friend void KJob_DisconnectNotify(KJob* self, const QMetaMethod* signal);
    friend void KJob_SuperDisconnectNotify(KJob* self, const QMetaMethod* signal);
    friend void KJob_SetCapabilities(KJob* self, int capabilities);
    friend void KJob_SuperSetCapabilities(KJob* self, int capabilities);
    friend bool KJob_IsFinished(const KJob* self);
    friend bool KJob_SuperIsFinished(const KJob* self);
    friend void KJob_SetError(KJob* self, int errorCode);
    friend void KJob_SuperSetError(KJob* self, int errorCode);
    friend void KJob_SetErrorText(KJob* self, const libqt_string errorText);
    friend void KJob_SuperSetErrorText(KJob* self, const libqt_string errorText);
    friend void KJob_SetProcessedAmount(KJob* self, int unit, unsigned long long amount);
    friend void KJob_SuperSetProcessedAmount(KJob* self, int unit, unsigned long long amount);
    friend void KJob_SetTotalAmount(KJob* self, int unit, unsigned long long amount);
    friend void KJob_SuperSetTotalAmount(KJob* self, int unit, unsigned long long amount);
    friend void KJob_SetProgressUnit(KJob* self, int unit);
    friend void KJob_SuperSetProgressUnit(KJob* self, int unit);
    friend void KJob_SetPercent(KJob* self, unsigned long percentage);
    friend void KJob_SuperSetPercent(KJob* self, unsigned long percentage);
    friend void KJob_EmitResult(KJob* self);
    friend void KJob_SuperEmitResult(KJob* self);
    friend void KJob_EmitPercent(KJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KJob_SuperEmitPercent(KJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KJob_EmitSpeed(KJob* self, unsigned long speed);
    friend void KJob_SuperEmitSpeed(KJob* self, unsigned long speed);
    friend void KJob_StartElapsedTimer(KJob* self);
    friend void KJob_SuperStartElapsedTimer(KJob* self);
    friend QObject* KJob_Sender(const KJob* self);
    friend QObject* KJob_SuperSender(const KJob* self);
    friend int KJob_SenderSignalIndex(const KJob* self);
    friend int KJob_SuperSenderSignalIndex(const KJob* self);
    friend int KJob_Receivers(const KJob* self, const char* signal);
    friend int KJob_SuperReceivers(const KJob* self, const char* signal);
    friend bool KJob_IsSignalConnected(const KJob* self, const QMetaMethod* signal);
    friend bool KJob_SuperIsSignalConnected(const KJob* self, const QMetaMethod* signal);
};

#endif
