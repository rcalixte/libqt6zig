#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKJOB_H
#define SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KJob so that we can call protected methods
class VirtualKJob final : public KJob {

  public:
    // Virtual class boolean flag
    bool isVirtualKJob = true;

    // Virtual class public types (including callbacks)
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
    using KJob_SetErrorText_Callback = void (*)(KJob*, libqt_string);
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

    ~VirtualKJob() {
        kjob_metacall_callback = nullptr;
        kjob_start_callback = nullptr;
        kjob_dokill_callback = nullptr;
        kjob_dosuspend_callback = nullptr;
        kjob_doresume_callback = nullptr;
        kjob_errorstring_callback = nullptr;
        kjob_event_callback = nullptr;
        kjob_eventfilter_callback = nullptr;
        kjob_timerevent_callback = nullptr;
        kjob_childevent_callback = nullptr;
        kjob_customevent_callback = nullptr;
        kjob_connectnotify_callback = nullptr;
        kjob_disconnectnotify_callback = nullptr;
        kjob_setcapabilities_callback = nullptr;
        kjob_isfinished_callback = nullptr;
        kjob_seterror_callback = nullptr;
        kjob_seterrortext_callback = nullptr;
        kjob_setprocessedamount_callback = nullptr;
        kjob_settotalamount_callback = nullptr;
        kjob_setprogressunit_callback = nullptr;
        kjob_setpercent_callback = nullptr;
        kjob_emitresult_callback = nullptr;
        kjob_emitpercent_callback = nullptr;
        kjob_emitspeed_callback = nullptr;
        kjob_startelapsedtimer_callback = nullptr;
        kjob_sender_callback = nullptr;
        kjob_sendersignalindex_callback = nullptr;
        kjob_receivers_callback = nullptr;
        kjob_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kjob_metacall_isbase) {
            kjob_metacall_isbase = false;
            return KJob::qt_metacall(param1, param2, param3);
        } else if (kjob_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KJob::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (kjob_start_callback != nullptr) {
            kjob_start_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doKill() override {
        if (kjob_dokill_isbase) {
            kjob_dokill_isbase = false;
            return KJob::doKill();
        } else if (kjob_dokill_callback != nullptr) {
            bool callback_ret = kjob_dokill_callback();
            return callback_ret;
        } else {
            return KJob::doKill();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doSuspend() override {
        if (kjob_dosuspend_isbase) {
            kjob_dosuspend_isbase = false;
            return KJob::doSuspend();
        } else if (kjob_dosuspend_callback != nullptr) {
            bool callback_ret = kjob_dosuspend_callback();
            return callback_ret;
        } else {
            return KJob::doSuspend();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool doResume() override {
        if (kjob_doresume_isbase) {
            kjob_doresume_isbase = false;
            return KJob::doResume();
        } else if (kjob_doresume_callback != nullptr) {
            bool callback_ret = kjob_doresume_callback();
            return callback_ret;
        } else {
            return KJob::doResume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (kjob_errorstring_isbase) {
            kjob_errorstring_isbase = false;
            return KJob::errorString();
        } else if (kjob_errorstring_callback != nullptr) {
            const char* callback_ret = kjob_errorstring_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KJob::errorString();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kjob_event_isbase) {
            kjob_event_isbase = false;
            return KJob::event(event);
        } else if (kjob_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kjob_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KJob::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kjob_eventfilter_isbase) {
            kjob_eventfilter_isbase = false;
            return KJob::eventFilter(watched, event);
        } else if (kjob_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KJob::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kjob_timerevent_isbase) {
            kjob_timerevent_isbase = false;
            KJob::timerEvent(event);
        } else if (kjob_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kjob_timerevent_callback(this, cbval1);
        } else {
            KJob::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kjob_childevent_isbase) {
            kjob_childevent_isbase = false;
            KJob::childEvent(event);
        } else if (kjob_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kjob_childevent_callback(this, cbval1);
        } else {
            KJob::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kjob_customevent_isbase) {
            kjob_customevent_isbase = false;
            KJob::customEvent(event);
        } else if (kjob_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kjob_customevent_callback(this, cbval1);
        } else {
            KJob::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kjob_connectnotify_isbase) {
            kjob_connectnotify_isbase = false;
            KJob::connectNotify(signal);
        } else if (kjob_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kjob_connectnotify_callback(this, cbval1);
        } else {
            KJob::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kjob_disconnectnotify_isbase) {
            kjob_disconnectnotify_isbase = false;
            KJob::disconnectNotify(signal);
        } else if (kjob_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kjob_disconnectnotify_callback(this, cbval1);
        } else {
            KJob::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCapabilities(QFlags<KJob::Capability> capabilities) {
        if (kjob_setcapabilities_isbase) {
            kjob_setcapabilities_isbase = false;
            KJob::setCapabilities(capabilities);
        } else if (kjob_setcapabilities_callback != nullptr) {
            int cbval1 = static_cast<int>(capabilities);

            kjob_setcapabilities_callback(this, cbval1);
        } else {
            KJob::setCapabilities(capabilities);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isFinished() const {
        if (kjob_isfinished_isbase) {
            kjob_isfinished_isbase = false;
            return KJob::isFinished();
        } else if (kjob_isfinished_callback != nullptr) {
            bool callback_ret = kjob_isfinished_callback();
            return callback_ret;
        } else {
            return KJob::isFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setError(int errorCode) {
        if (kjob_seterror_isbase) {
            kjob_seterror_isbase = false;
            KJob::setError(errorCode);
        } else if (kjob_seterror_callback != nullptr) {
            int cbval1 = errorCode;

            kjob_seterror_callback(this, cbval1);
        } else {
            KJob::setError(errorCode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorText(const QString& errorText) {
        if (kjob_seterrortext_isbase) {
            kjob_seterrortext_isbase = false;
            KJob::setErrorText(errorText);
        } else if (kjob_seterrortext_callback != nullptr) {
            const QString errorText_ret = errorText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorText_b = errorText_ret.toUtf8();
            libqt_string errorText_str;
            errorText_str.len = errorText_b.length();
            errorText_str.data = static_cast<const char*>(malloc(errorText_str.len + 1));
            memcpy((void*)errorText_str.data, errorText_b.data(), errorText_str.len);
            ((char*)errorText_str.data)[errorText_str.len] = '\0';
            libqt_string cbval1 = errorText_str;

            kjob_seterrortext_callback(this, cbval1);
        } else {
            KJob::setErrorText(errorText);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessedAmount(KJob::Unit unit, qulonglong amount) {
        if (kjob_setprocessedamount_isbase) {
            kjob_setprocessedamount_isbase = false;
            KJob::setProcessedAmount(unit, amount);
        } else if (kjob_setprocessedamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kjob_setprocessedamount_callback(this, cbval1, cbval2);
        } else {
            KJob::setProcessedAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTotalAmount(KJob::Unit unit, qulonglong amount) {
        if (kjob_settotalamount_isbase) {
            kjob_settotalamount_isbase = false;
            KJob::setTotalAmount(unit, amount);
        } else if (kjob_settotalamount_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);
            unsigned long long cbval2 = static_cast<unsigned long long>(amount);

            kjob_settotalamount_callback(this, cbval1, cbval2);
        } else {
            KJob::setTotalAmount(unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProgressUnit(KJob::Unit unit) {
        if (kjob_setprogressunit_isbase) {
            kjob_setprogressunit_isbase = false;
            KJob::setProgressUnit(unit);
        } else if (kjob_setprogressunit_callback != nullptr) {
            int cbval1 = static_cast<int>(unit);

            kjob_setprogressunit_callback(this, cbval1);
        } else {
            KJob::setProgressUnit(unit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPercent(unsigned long percentage) {
        if (kjob_setpercent_isbase) {
            kjob_setpercent_isbase = false;
            KJob::setPercent(percentage);
        } else if (kjob_setpercent_callback != nullptr) {
            unsigned long cbval1 = percentage;

            kjob_setpercent_callback(this, cbval1);
        } else {
            KJob::setPercent(percentage);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitResult() {
        if (kjob_emitresult_isbase) {
            kjob_emitresult_isbase = false;
            KJob::emitResult();
        } else if (kjob_emitresult_callback != nullptr) {
            kjob_emitresult_callback();
        } else {
            KJob::emitResult();
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitPercent(qulonglong processedAmount, qulonglong totalAmount) {
        if (kjob_emitpercent_isbase) {
            kjob_emitpercent_isbase = false;
            KJob::emitPercent(processedAmount, totalAmount);
        } else if (kjob_emitpercent_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(processedAmount);
            unsigned long long cbval2 = static_cast<unsigned long long>(totalAmount);

            kjob_emitpercent_callback(this, cbval1, cbval2);
        } else {
            KJob::emitPercent(processedAmount, totalAmount);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSpeed(unsigned long speed) {
        if (kjob_emitspeed_isbase) {
            kjob_emitspeed_isbase = false;
            KJob::emitSpeed(speed);
        } else if (kjob_emitspeed_callback != nullptr) {
            unsigned long cbval1 = speed;

            kjob_emitspeed_callback(this, cbval1);
        } else {
            KJob::emitSpeed(speed);
        }
    }

    // Virtual method for C ABI access and custom callback
    void startElapsedTimer() {
        if (kjob_startelapsedtimer_isbase) {
            kjob_startelapsedtimer_isbase = false;
            KJob::startElapsedTimer();
        } else if (kjob_startelapsedtimer_callback != nullptr) {
            kjob_startelapsedtimer_callback();
        } else {
            KJob::startElapsedTimer();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kjob_sender_isbase) {
            kjob_sender_isbase = false;
            return KJob::sender();
        } else if (kjob_sender_callback != nullptr) {
            QObject* callback_ret = kjob_sender_callback();
            return callback_ret;
        } else {
            return KJob::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kjob_sendersignalindex_isbase) {
            kjob_sendersignalindex_isbase = false;
            return KJob::senderSignalIndex();
        } else if (kjob_sendersignalindex_callback != nullptr) {
            int callback_ret = kjob_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KJob::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kjob_receivers_isbase) {
            kjob_receivers_isbase = false;
            return KJob::receivers(signal);
        } else if (kjob_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kjob_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KJob::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kjob_issignalconnected_isbase) {
            kjob_issignalconnected_isbase = false;
            return KJob::isSignalConnected(signal);
        } else if (kjob_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kjob_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KJob::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KJob_DoKill(KJob* self);
    friend bool KJob_QBaseDoKill(KJob* self);
    friend bool KJob_DoSuspend(KJob* self);
    friend bool KJob_QBaseDoSuspend(KJob* self);
    friend bool KJob_DoResume(KJob* self);
    friend bool KJob_QBaseDoResume(KJob* self);
    friend void KJob_TimerEvent(KJob* self, QTimerEvent* event);
    friend void KJob_QBaseTimerEvent(KJob* self, QTimerEvent* event);
    friend void KJob_ChildEvent(KJob* self, QChildEvent* event);
    friend void KJob_QBaseChildEvent(KJob* self, QChildEvent* event);
    friend void KJob_CustomEvent(KJob* self, QEvent* event);
    friend void KJob_QBaseCustomEvent(KJob* self, QEvent* event);
    friend void KJob_ConnectNotify(KJob* self, const QMetaMethod* signal);
    friend void KJob_QBaseConnectNotify(KJob* self, const QMetaMethod* signal);
    friend void KJob_DisconnectNotify(KJob* self, const QMetaMethod* signal);
    friend void KJob_QBaseDisconnectNotify(KJob* self, const QMetaMethod* signal);
    friend void KJob_SetCapabilities(KJob* self, int capabilities);
    friend void KJob_QBaseSetCapabilities(KJob* self, int capabilities);
    friend bool KJob_IsFinished(const KJob* self);
    friend bool KJob_QBaseIsFinished(const KJob* self);
    friend void KJob_SetError(KJob* self, int errorCode);
    friend void KJob_QBaseSetError(KJob* self, int errorCode);
    friend void KJob_SetErrorText(KJob* self, const libqt_string errorText);
    friend void KJob_QBaseSetErrorText(KJob* self, const libqt_string errorText);
    friend void KJob_SetProcessedAmount(KJob* self, int unit, unsigned long long amount);
    friend void KJob_QBaseSetProcessedAmount(KJob* self, int unit, unsigned long long amount);
    friend void KJob_SetTotalAmount(KJob* self, int unit, unsigned long long amount);
    friend void KJob_QBaseSetTotalAmount(KJob* self, int unit, unsigned long long amount);
    friend void KJob_SetProgressUnit(KJob* self, int unit);
    friend void KJob_QBaseSetProgressUnit(KJob* self, int unit);
    friend void KJob_SetPercent(KJob* self, unsigned long percentage);
    friend void KJob_QBaseSetPercent(KJob* self, unsigned long percentage);
    friend void KJob_EmitResult(KJob* self);
    friend void KJob_QBaseEmitResult(KJob* self);
    friend void KJob_EmitPercent(KJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KJob_QBaseEmitPercent(KJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
    friend void KJob_EmitSpeed(KJob* self, unsigned long speed);
    friend void KJob_QBaseEmitSpeed(KJob* self, unsigned long speed);
    friend void KJob_StartElapsedTimer(KJob* self);
    friend void KJob_QBaseStartElapsedTimer(KJob* self);
    friend QObject* KJob_Sender(const KJob* self);
    friend QObject* KJob_QBaseSender(const KJob* self);
    friend int KJob_SenderSignalIndex(const KJob* self);
    friend int KJob_QBaseSenderSignalIndex(const KJob* self);
    friend int KJob_Receivers(const KJob* self, const char* signal);
    friend int KJob_QBaseReceivers(const KJob* self, const char* signal);
    friend bool KJob_IsSignalConnected(const KJob* self, const QMetaMethod* signal);
    friend bool KJob_QBaseIsSignalConnected(const KJob* self, const QMetaMethod* signal);
};

#endif
