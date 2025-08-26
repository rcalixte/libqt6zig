#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKJOBUIDELEGATE_H
#define SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKJOBUIDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KJobUiDelegate so that we can call protected methods
class VirtualKJobUiDelegate final : public KJobUiDelegate {

  public:
    // Virtual class boolean flag
    bool isVirtualKJobUiDelegate = true;

    // Virtual class public types (including callbacks)
    using KJobUiDelegate_Metacall_Callback = int (*)(KJobUiDelegate*, int, int, void**);
    using KJobUiDelegate_SetJob_Callback = bool (*)(KJobUiDelegate*, KJob*);
    using KJobUiDelegate_ShowErrorMessage_Callback = void (*)();
    using KJobUiDelegate_SlotWarning_Callback = void (*)(KJobUiDelegate*, KJob*, libqt_string);
    using KJobUiDelegate_Event_Callback = bool (*)(KJobUiDelegate*, QEvent*);
    using KJobUiDelegate_EventFilter_Callback = bool (*)(KJobUiDelegate*, QObject*, QEvent*);
    using KJobUiDelegate_TimerEvent_Callback = void (*)(KJobUiDelegate*, QTimerEvent*);
    using KJobUiDelegate_ChildEvent_Callback = void (*)(KJobUiDelegate*, QChildEvent*);
    using KJobUiDelegate_CustomEvent_Callback = void (*)(KJobUiDelegate*, QEvent*);
    using KJobUiDelegate_ConnectNotify_Callback = void (*)(KJobUiDelegate*, QMetaMethod*);
    using KJobUiDelegate_DisconnectNotify_Callback = void (*)(KJobUiDelegate*, QMetaMethod*);
    using KJobUiDelegate_Job_Callback = KJob* (*)();
    using KJobUiDelegate_Sender_Callback = QObject* (*)();
    using KJobUiDelegate_SenderSignalIndex_Callback = int (*)();
    using KJobUiDelegate_Receivers_Callback = int (*)(const KJobUiDelegate*, const char*);
    using KJobUiDelegate_IsSignalConnected_Callback = bool (*)(const KJobUiDelegate*, QMetaMethod*);

  protected:
    // Instance callback storage
    KJobUiDelegate_Metacall_Callback kjobuidelegate_metacall_callback = nullptr;
    KJobUiDelegate_SetJob_Callback kjobuidelegate_setjob_callback = nullptr;
    KJobUiDelegate_ShowErrorMessage_Callback kjobuidelegate_showerrormessage_callback = nullptr;
    KJobUiDelegate_SlotWarning_Callback kjobuidelegate_slotwarning_callback = nullptr;
    KJobUiDelegate_Event_Callback kjobuidelegate_event_callback = nullptr;
    KJobUiDelegate_EventFilter_Callback kjobuidelegate_eventfilter_callback = nullptr;
    KJobUiDelegate_TimerEvent_Callback kjobuidelegate_timerevent_callback = nullptr;
    KJobUiDelegate_ChildEvent_Callback kjobuidelegate_childevent_callback = nullptr;
    KJobUiDelegate_CustomEvent_Callback kjobuidelegate_customevent_callback = nullptr;
    KJobUiDelegate_ConnectNotify_Callback kjobuidelegate_connectnotify_callback = nullptr;
    KJobUiDelegate_DisconnectNotify_Callback kjobuidelegate_disconnectnotify_callback = nullptr;
    KJobUiDelegate_Job_Callback kjobuidelegate_job_callback = nullptr;
    KJobUiDelegate_Sender_Callback kjobuidelegate_sender_callback = nullptr;
    KJobUiDelegate_SenderSignalIndex_Callback kjobuidelegate_sendersignalindex_callback = nullptr;
    KJobUiDelegate_Receivers_Callback kjobuidelegate_receivers_callback = nullptr;
    KJobUiDelegate_IsSignalConnected_Callback kjobuidelegate_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kjobuidelegate_metacall_isbase = false;
    mutable bool kjobuidelegate_setjob_isbase = false;
    mutable bool kjobuidelegate_showerrormessage_isbase = false;
    mutable bool kjobuidelegate_slotwarning_isbase = false;
    mutable bool kjobuidelegate_event_isbase = false;
    mutable bool kjobuidelegate_eventfilter_isbase = false;
    mutable bool kjobuidelegate_timerevent_isbase = false;
    mutable bool kjobuidelegate_childevent_isbase = false;
    mutable bool kjobuidelegate_customevent_isbase = false;
    mutable bool kjobuidelegate_connectnotify_isbase = false;
    mutable bool kjobuidelegate_disconnectnotify_isbase = false;
    mutable bool kjobuidelegate_job_isbase = false;
    mutable bool kjobuidelegate_sender_isbase = false;
    mutable bool kjobuidelegate_sendersignalindex_isbase = false;
    mutable bool kjobuidelegate_receivers_isbase = false;
    mutable bool kjobuidelegate_issignalconnected_isbase = false;

  public:
    VirtualKJobUiDelegate() : KJobUiDelegate() {};
    VirtualKJobUiDelegate(KJobUiDelegate::Flags flags) : KJobUiDelegate(flags) {};

    ~VirtualKJobUiDelegate() {
        kjobuidelegate_metacall_callback = nullptr;
        kjobuidelegate_setjob_callback = nullptr;
        kjobuidelegate_showerrormessage_callback = nullptr;
        kjobuidelegate_slotwarning_callback = nullptr;
        kjobuidelegate_event_callback = nullptr;
        kjobuidelegate_eventfilter_callback = nullptr;
        kjobuidelegate_timerevent_callback = nullptr;
        kjobuidelegate_childevent_callback = nullptr;
        kjobuidelegate_customevent_callback = nullptr;
        kjobuidelegate_connectnotify_callback = nullptr;
        kjobuidelegate_disconnectnotify_callback = nullptr;
        kjobuidelegate_job_callback = nullptr;
        kjobuidelegate_sender_callback = nullptr;
        kjobuidelegate_sendersignalindex_callback = nullptr;
        kjobuidelegate_receivers_callback = nullptr;
        kjobuidelegate_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKJobUiDelegate_Metacall_Callback(KJobUiDelegate_Metacall_Callback cb) { kjobuidelegate_metacall_callback = cb; }
    inline void setKJobUiDelegate_SetJob_Callback(KJobUiDelegate_SetJob_Callback cb) { kjobuidelegate_setjob_callback = cb; }
    inline void setKJobUiDelegate_ShowErrorMessage_Callback(KJobUiDelegate_ShowErrorMessage_Callback cb) { kjobuidelegate_showerrormessage_callback = cb; }
    inline void setKJobUiDelegate_SlotWarning_Callback(KJobUiDelegate_SlotWarning_Callback cb) { kjobuidelegate_slotwarning_callback = cb; }
    inline void setKJobUiDelegate_Event_Callback(KJobUiDelegate_Event_Callback cb) { kjobuidelegate_event_callback = cb; }
    inline void setKJobUiDelegate_EventFilter_Callback(KJobUiDelegate_EventFilter_Callback cb) { kjobuidelegate_eventfilter_callback = cb; }
    inline void setKJobUiDelegate_TimerEvent_Callback(KJobUiDelegate_TimerEvent_Callback cb) { kjobuidelegate_timerevent_callback = cb; }
    inline void setKJobUiDelegate_ChildEvent_Callback(KJobUiDelegate_ChildEvent_Callback cb) { kjobuidelegate_childevent_callback = cb; }
    inline void setKJobUiDelegate_CustomEvent_Callback(KJobUiDelegate_CustomEvent_Callback cb) { kjobuidelegate_customevent_callback = cb; }
    inline void setKJobUiDelegate_ConnectNotify_Callback(KJobUiDelegate_ConnectNotify_Callback cb) { kjobuidelegate_connectnotify_callback = cb; }
    inline void setKJobUiDelegate_DisconnectNotify_Callback(KJobUiDelegate_DisconnectNotify_Callback cb) { kjobuidelegate_disconnectnotify_callback = cb; }
    inline void setKJobUiDelegate_Job_Callback(KJobUiDelegate_Job_Callback cb) { kjobuidelegate_job_callback = cb; }
    inline void setKJobUiDelegate_Sender_Callback(KJobUiDelegate_Sender_Callback cb) { kjobuidelegate_sender_callback = cb; }
    inline void setKJobUiDelegate_SenderSignalIndex_Callback(KJobUiDelegate_SenderSignalIndex_Callback cb) { kjobuidelegate_sendersignalindex_callback = cb; }
    inline void setKJobUiDelegate_Receivers_Callback(KJobUiDelegate_Receivers_Callback cb) { kjobuidelegate_receivers_callback = cb; }
    inline void setKJobUiDelegate_IsSignalConnected_Callback(KJobUiDelegate_IsSignalConnected_Callback cb) { kjobuidelegate_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKJobUiDelegate_Metacall_IsBase(bool value) const { kjobuidelegate_metacall_isbase = value; }
    inline void setKJobUiDelegate_SetJob_IsBase(bool value) const { kjobuidelegate_setjob_isbase = value; }
    inline void setKJobUiDelegate_ShowErrorMessage_IsBase(bool value) const { kjobuidelegate_showerrormessage_isbase = value; }
    inline void setKJobUiDelegate_SlotWarning_IsBase(bool value) const { kjobuidelegate_slotwarning_isbase = value; }
    inline void setKJobUiDelegate_Event_IsBase(bool value) const { kjobuidelegate_event_isbase = value; }
    inline void setKJobUiDelegate_EventFilter_IsBase(bool value) const { kjobuidelegate_eventfilter_isbase = value; }
    inline void setKJobUiDelegate_TimerEvent_IsBase(bool value) const { kjobuidelegate_timerevent_isbase = value; }
    inline void setKJobUiDelegate_ChildEvent_IsBase(bool value) const { kjobuidelegate_childevent_isbase = value; }
    inline void setKJobUiDelegate_CustomEvent_IsBase(bool value) const { kjobuidelegate_customevent_isbase = value; }
    inline void setKJobUiDelegate_ConnectNotify_IsBase(bool value) const { kjobuidelegate_connectnotify_isbase = value; }
    inline void setKJobUiDelegate_DisconnectNotify_IsBase(bool value) const { kjobuidelegate_disconnectnotify_isbase = value; }
    inline void setKJobUiDelegate_Job_IsBase(bool value) const { kjobuidelegate_job_isbase = value; }
    inline void setKJobUiDelegate_Sender_IsBase(bool value) const { kjobuidelegate_sender_isbase = value; }
    inline void setKJobUiDelegate_SenderSignalIndex_IsBase(bool value) const { kjobuidelegate_sendersignalindex_isbase = value; }
    inline void setKJobUiDelegate_Receivers_IsBase(bool value) const { kjobuidelegate_receivers_isbase = value; }
    inline void setKJobUiDelegate_IsSignalConnected_IsBase(bool value) const { kjobuidelegate_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kjobuidelegate_metacall_isbase) {
            kjobuidelegate_metacall_isbase = false;
            return KJobUiDelegate::qt_metacall(param1, param2, param3);
        } else if (kjobuidelegate_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kjobuidelegate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KJobUiDelegate::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setJob(KJob* job) override {
        if (kjobuidelegate_setjob_isbase) {
            kjobuidelegate_setjob_isbase = false;
            return KJobUiDelegate::setJob(job);
        } else if (kjobuidelegate_setjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kjobuidelegate_setjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KJobUiDelegate::setJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showErrorMessage() override {
        if (kjobuidelegate_showerrormessage_isbase) {
            kjobuidelegate_showerrormessage_isbase = false;
            KJobUiDelegate::showErrorMessage();
        } else if (kjobuidelegate_showerrormessage_callback != nullptr) {
            kjobuidelegate_showerrormessage_callback();
        } else {
            KJobUiDelegate::showErrorMessage();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotWarning(KJob* job, const QString& message) override {
        if (kjobuidelegate_slotwarning_isbase) {
            kjobuidelegate_slotwarning_isbase = false;
            KJobUiDelegate::slotWarning(job, message);
        } else if (kjobuidelegate_slotwarning_callback != nullptr) {
            KJob* cbval1 = job;
            const QString message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            libqt_string message_str;
            message_str.len = message_b.length();
            message_str.data = static_cast<const char*>(malloc(message_str.len + 1));
            memcpy((void*)message_str.data, message_b.data(), message_str.len);
            ((char*)message_str.data)[message_str.len] = '\0';
            libqt_string cbval2 = message_str;

            kjobuidelegate_slotwarning_callback(this, cbval1, cbval2);
        } else {
            KJobUiDelegate::slotWarning(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kjobuidelegate_event_isbase) {
            kjobuidelegate_event_isbase = false;
            return KJobUiDelegate::event(event);
        } else if (kjobuidelegate_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kjobuidelegate_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KJobUiDelegate::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kjobuidelegate_eventfilter_isbase) {
            kjobuidelegate_eventfilter_isbase = false;
            return KJobUiDelegate::eventFilter(watched, event);
        } else if (kjobuidelegate_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kjobuidelegate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KJobUiDelegate::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kjobuidelegate_timerevent_isbase) {
            kjobuidelegate_timerevent_isbase = false;
            KJobUiDelegate::timerEvent(event);
        } else if (kjobuidelegate_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kjobuidelegate_timerevent_callback(this, cbval1);
        } else {
            KJobUiDelegate::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kjobuidelegate_childevent_isbase) {
            kjobuidelegate_childevent_isbase = false;
            KJobUiDelegate::childEvent(event);
        } else if (kjobuidelegate_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kjobuidelegate_childevent_callback(this, cbval1);
        } else {
            KJobUiDelegate::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kjobuidelegate_customevent_isbase) {
            kjobuidelegate_customevent_isbase = false;
            KJobUiDelegate::customEvent(event);
        } else if (kjobuidelegate_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kjobuidelegate_customevent_callback(this, cbval1);
        } else {
            KJobUiDelegate::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kjobuidelegate_connectnotify_isbase) {
            kjobuidelegate_connectnotify_isbase = false;
            KJobUiDelegate::connectNotify(signal);
        } else if (kjobuidelegate_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kjobuidelegate_connectnotify_callback(this, cbval1);
        } else {
            KJobUiDelegate::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kjobuidelegate_disconnectnotify_isbase) {
            kjobuidelegate_disconnectnotify_isbase = false;
            KJobUiDelegate::disconnectNotify(signal);
        } else if (kjobuidelegate_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kjobuidelegate_disconnectnotify_callback(this, cbval1);
        } else {
            KJobUiDelegate::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    KJob* job() const {
        if (kjobuidelegate_job_isbase) {
            kjobuidelegate_job_isbase = false;
            return KJobUiDelegate::job();
        } else if (kjobuidelegate_job_callback != nullptr) {
            KJob* callback_ret = kjobuidelegate_job_callback();
            return callback_ret;
        } else {
            return KJobUiDelegate::job();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kjobuidelegate_sender_isbase) {
            kjobuidelegate_sender_isbase = false;
            return KJobUiDelegate::sender();
        } else if (kjobuidelegate_sender_callback != nullptr) {
            QObject* callback_ret = kjobuidelegate_sender_callback();
            return callback_ret;
        } else {
            return KJobUiDelegate::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kjobuidelegate_sendersignalindex_isbase) {
            kjobuidelegate_sendersignalindex_isbase = false;
            return KJobUiDelegate::senderSignalIndex();
        } else if (kjobuidelegate_sendersignalindex_callback != nullptr) {
            int callback_ret = kjobuidelegate_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KJobUiDelegate::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kjobuidelegate_receivers_isbase) {
            kjobuidelegate_receivers_isbase = false;
            return KJobUiDelegate::receivers(signal);
        } else if (kjobuidelegate_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kjobuidelegate_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KJobUiDelegate::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kjobuidelegate_issignalconnected_isbase) {
            kjobuidelegate_issignalconnected_isbase = false;
            return KJobUiDelegate::isSignalConnected(signal);
        } else if (kjobuidelegate_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kjobuidelegate_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KJobUiDelegate::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KJobUiDelegate_SetJob(KJobUiDelegate* self, KJob* job);
    friend bool KJobUiDelegate_QBaseSetJob(KJobUiDelegate* self, KJob* job);
    friend void KJobUiDelegate_SlotWarning(KJobUiDelegate* self, KJob* job, const libqt_string message);
    friend void KJobUiDelegate_QBaseSlotWarning(KJobUiDelegate* self, KJob* job, const libqt_string message);
    friend void KJobUiDelegate_TimerEvent(KJobUiDelegate* self, QTimerEvent* event);
    friend void KJobUiDelegate_QBaseTimerEvent(KJobUiDelegate* self, QTimerEvent* event);
    friend void KJobUiDelegate_ChildEvent(KJobUiDelegate* self, QChildEvent* event);
    friend void KJobUiDelegate_QBaseChildEvent(KJobUiDelegate* self, QChildEvent* event);
    friend void KJobUiDelegate_CustomEvent(KJobUiDelegate* self, QEvent* event);
    friend void KJobUiDelegate_QBaseCustomEvent(KJobUiDelegate* self, QEvent* event);
    friend void KJobUiDelegate_ConnectNotify(KJobUiDelegate* self, const QMetaMethod* signal);
    friend void KJobUiDelegate_QBaseConnectNotify(KJobUiDelegate* self, const QMetaMethod* signal);
    friend void KJobUiDelegate_DisconnectNotify(KJobUiDelegate* self, const QMetaMethod* signal);
    friend void KJobUiDelegate_QBaseDisconnectNotify(KJobUiDelegate* self, const QMetaMethod* signal);
    friend KJob* KJobUiDelegate_Job(const KJobUiDelegate* self);
    friend KJob* KJobUiDelegate_QBaseJob(const KJobUiDelegate* self);
    friend QObject* KJobUiDelegate_Sender(const KJobUiDelegate* self);
    friend QObject* KJobUiDelegate_QBaseSender(const KJobUiDelegate* self);
    friend int KJobUiDelegate_SenderSignalIndex(const KJobUiDelegate* self);
    friend int KJobUiDelegate_QBaseSenderSignalIndex(const KJobUiDelegate* self);
    friend int KJobUiDelegate_Receivers(const KJobUiDelegate* self, const char* signal);
    friend int KJobUiDelegate_QBaseReceivers(const KJobUiDelegate* self, const char* signal);
    friend bool KJobUiDelegate_IsSignalConnected(const KJobUiDelegate* self, const QMetaMethod* signal);
    friend bool KJobUiDelegate_QBaseIsSignalConnected(const KJobUiDelegate* self, const QMetaMethod* signal);
};

#endif
