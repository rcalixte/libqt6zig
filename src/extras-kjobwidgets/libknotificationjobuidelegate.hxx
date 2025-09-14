#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKNOTIFICATIONJOBUIDELEGATE_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKNOTIFICATIONJOBUIDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNotificationJobUiDelegate so that we can call protected methods
class VirtualKNotificationJobUiDelegate final : public KNotificationJobUiDelegate {

  public:
    // Virtual class boolean flag
    bool isVirtualKNotificationJobUiDelegate = true;

    // Virtual class public types (including callbacks)
    using KNotificationJobUiDelegate_Metacall_Callback = int (*)(KNotificationJobUiDelegate*, int, int, void**);
    using KNotificationJobUiDelegate_ShowErrorMessage_Callback = void (*)();
    using KNotificationJobUiDelegate_SetJob_Callback = bool (*)(KNotificationJobUiDelegate*, KJob*);
    using KNotificationJobUiDelegate_SlotWarning_Callback = void (*)(KNotificationJobUiDelegate*, KJob*, libqt_string);
    using KNotificationJobUiDelegate_Event_Callback = bool (*)(KNotificationJobUiDelegate*, QEvent*);
    using KNotificationJobUiDelegate_EventFilter_Callback = bool (*)(KNotificationJobUiDelegate*, QObject*, QEvent*);
    using KNotificationJobUiDelegate_TimerEvent_Callback = void (*)(KNotificationJobUiDelegate*, QTimerEvent*);
    using KNotificationJobUiDelegate_ChildEvent_Callback = void (*)(KNotificationJobUiDelegate*, QChildEvent*);
    using KNotificationJobUiDelegate_CustomEvent_Callback = void (*)(KNotificationJobUiDelegate*, QEvent*);
    using KNotificationJobUiDelegate_ConnectNotify_Callback = void (*)(KNotificationJobUiDelegate*, QMetaMethod*);
    using KNotificationJobUiDelegate_DisconnectNotify_Callback = void (*)(KNotificationJobUiDelegate*, QMetaMethod*);
    using KNotificationJobUiDelegate_Job_Callback = KJob* (*)();
    using KNotificationJobUiDelegate_Sender_Callback = QObject* (*)();
    using KNotificationJobUiDelegate_SenderSignalIndex_Callback = int (*)();
    using KNotificationJobUiDelegate_Receivers_Callback = int (*)(const KNotificationJobUiDelegate*, const char*);
    using KNotificationJobUiDelegate_IsSignalConnected_Callback = bool (*)(const KNotificationJobUiDelegate*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNotificationJobUiDelegate_Metacall_Callback knotificationjobuidelegate_metacall_callback = nullptr;
    KNotificationJobUiDelegate_ShowErrorMessage_Callback knotificationjobuidelegate_showerrormessage_callback = nullptr;
    KNotificationJobUiDelegate_SetJob_Callback knotificationjobuidelegate_setjob_callback = nullptr;
    KNotificationJobUiDelegate_SlotWarning_Callback knotificationjobuidelegate_slotwarning_callback = nullptr;
    KNotificationJobUiDelegate_Event_Callback knotificationjobuidelegate_event_callback = nullptr;
    KNotificationJobUiDelegate_EventFilter_Callback knotificationjobuidelegate_eventfilter_callback = nullptr;
    KNotificationJobUiDelegate_TimerEvent_Callback knotificationjobuidelegate_timerevent_callback = nullptr;
    KNotificationJobUiDelegate_ChildEvent_Callback knotificationjobuidelegate_childevent_callback = nullptr;
    KNotificationJobUiDelegate_CustomEvent_Callback knotificationjobuidelegate_customevent_callback = nullptr;
    KNotificationJobUiDelegate_ConnectNotify_Callback knotificationjobuidelegate_connectnotify_callback = nullptr;
    KNotificationJobUiDelegate_DisconnectNotify_Callback knotificationjobuidelegate_disconnectnotify_callback = nullptr;
    KNotificationJobUiDelegate_Job_Callback knotificationjobuidelegate_job_callback = nullptr;
    KNotificationJobUiDelegate_Sender_Callback knotificationjobuidelegate_sender_callback = nullptr;
    KNotificationJobUiDelegate_SenderSignalIndex_Callback knotificationjobuidelegate_sendersignalindex_callback = nullptr;
    KNotificationJobUiDelegate_Receivers_Callback knotificationjobuidelegate_receivers_callback = nullptr;
    KNotificationJobUiDelegate_IsSignalConnected_Callback knotificationjobuidelegate_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knotificationjobuidelegate_metacall_isbase = false;
    mutable bool knotificationjobuidelegate_showerrormessage_isbase = false;
    mutable bool knotificationjobuidelegate_setjob_isbase = false;
    mutable bool knotificationjobuidelegate_slotwarning_isbase = false;
    mutable bool knotificationjobuidelegate_event_isbase = false;
    mutable bool knotificationjobuidelegate_eventfilter_isbase = false;
    mutable bool knotificationjobuidelegate_timerevent_isbase = false;
    mutable bool knotificationjobuidelegate_childevent_isbase = false;
    mutable bool knotificationjobuidelegate_customevent_isbase = false;
    mutable bool knotificationjobuidelegate_connectnotify_isbase = false;
    mutable bool knotificationjobuidelegate_disconnectnotify_isbase = false;
    mutable bool knotificationjobuidelegate_job_isbase = false;
    mutable bool knotificationjobuidelegate_sender_isbase = false;
    mutable bool knotificationjobuidelegate_sendersignalindex_isbase = false;
    mutable bool knotificationjobuidelegate_receivers_isbase = false;
    mutable bool knotificationjobuidelegate_issignalconnected_isbase = false;

  public:
    VirtualKNotificationJobUiDelegate() : KNotificationJobUiDelegate() {};
    VirtualKNotificationJobUiDelegate(KJobUiDelegate::Flags flags) : KNotificationJobUiDelegate(flags) {};

    ~VirtualKNotificationJobUiDelegate() {
        knotificationjobuidelegate_metacall_callback = nullptr;
        knotificationjobuidelegate_showerrormessage_callback = nullptr;
        knotificationjobuidelegate_setjob_callback = nullptr;
        knotificationjobuidelegate_slotwarning_callback = nullptr;
        knotificationjobuidelegate_event_callback = nullptr;
        knotificationjobuidelegate_eventfilter_callback = nullptr;
        knotificationjobuidelegate_timerevent_callback = nullptr;
        knotificationjobuidelegate_childevent_callback = nullptr;
        knotificationjobuidelegate_customevent_callback = nullptr;
        knotificationjobuidelegate_connectnotify_callback = nullptr;
        knotificationjobuidelegate_disconnectnotify_callback = nullptr;
        knotificationjobuidelegate_job_callback = nullptr;
        knotificationjobuidelegate_sender_callback = nullptr;
        knotificationjobuidelegate_sendersignalindex_callback = nullptr;
        knotificationjobuidelegate_receivers_callback = nullptr;
        knotificationjobuidelegate_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKNotificationJobUiDelegate_Metacall_Callback(KNotificationJobUiDelegate_Metacall_Callback cb) { knotificationjobuidelegate_metacall_callback = cb; }
    inline void setKNotificationJobUiDelegate_ShowErrorMessage_Callback(KNotificationJobUiDelegate_ShowErrorMessage_Callback cb) { knotificationjobuidelegate_showerrormessage_callback = cb; }
    inline void setKNotificationJobUiDelegate_SetJob_Callback(KNotificationJobUiDelegate_SetJob_Callback cb) { knotificationjobuidelegate_setjob_callback = cb; }
    inline void setKNotificationJobUiDelegate_SlotWarning_Callback(KNotificationJobUiDelegate_SlotWarning_Callback cb) { knotificationjobuidelegate_slotwarning_callback = cb; }
    inline void setKNotificationJobUiDelegate_Event_Callback(KNotificationJobUiDelegate_Event_Callback cb) { knotificationjobuidelegate_event_callback = cb; }
    inline void setKNotificationJobUiDelegate_EventFilter_Callback(KNotificationJobUiDelegate_EventFilter_Callback cb) { knotificationjobuidelegate_eventfilter_callback = cb; }
    inline void setKNotificationJobUiDelegate_TimerEvent_Callback(KNotificationJobUiDelegate_TimerEvent_Callback cb) { knotificationjobuidelegate_timerevent_callback = cb; }
    inline void setKNotificationJobUiDelegate_ChildEvent_Callback(KNotificationJobUiDelegate_ChildEvent_Callback cb) { knotificationjobuidelegate_childevent_callback = cb; }
    inline void setKNotificationJobUiDelegate_CustomEvent_Callback(KNotificationJobUiDelegate_CustomEvent_Callback cb) { knotificationjobuidelegate_customevent_callback = cb; }
    inline void setKNotificationJobUiDelegate_ConnectNotify_Callback(KNotificationJobUiDelegate_ConnectNotify_Callback cb) { knotificationjobuidelegate_connectnotify_callback = cb; }
    inline void setKNotificationJobUiDelegate_DisconnectNotify_Callback(KNotificationJobUiDelegate_DisconnectNotify_Callback cb) { knotificationjobuidelegate_disconnectnotify_callback = cb; }
    inline void setKNotificationJobUiDelegate_Job_Callback(KNotificationJobUiDelegate_Job_Callback cb) { knotificationjobuidelegate_job_callback = cb; }
    inline void setKNotificationJobUiDelegate_Sender_Callback(KNotificationJobUiDelegate_Sender_Callback cb) { knotificationjobuidelegate_sender_callback = cb; }
    inline void setKNotificationJobUiDelegate_SenderSignalIndex_Callback(KNotificationJobUiDelegate_SenderSignalIndex_Callback cb) { knotificationjobuidelegate_sendersignalindex_callback = cb; }
    inline void setKNotificationJobUiDelegate_Receivers_Callback(KNotificationJobUiDelegate_Receivers_Callback cb) { knotificationjobuidelegate_receivers_callback = cb; }
    inline void setKNotificationJobUiDelegate_IsSignalConnected_Callback(KNotificationJobUiDelegate_IsSignalConnected_Callback cb) { knotificationjobuidelegate_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNotificationJobUiDelegate_Metacall_IsBase(bool value) const { knotificationjobuidelegate_metacall_isbase = value; }
    inline void setKNotificationJobUiDelegate_ShowErrorMessage_IsBase(bool value) const { knotificationjobuidelegate_showerrormessage_isbase = value; }
    inline void setKNotificationJobUiDelegate_SetJob_IsBase(bool value) const { knotificationjobuidelegate_setjob_isbase = value; }
    inline void setKNotificationJobUiDelegate_SlotWarning_IsBase(bool value) const { knotificationjobuidelegate_slotwarning_isbase = value; }
    inline void setKNotificationJobUiDelegate_Event_IsBase(bool value) const { knotificationjobuidelegate_event_isbase = value; }
    inline void setKNotificationJobUiDelegate_EventFilter_IsBase(bool value) const { knotificationjobuidelegate_eventfilter_isbase = value; }
    inline void setKNotificationJobUiDelegate_TimerEvent_IsBase(bool value) const { knotificationjobuidelegate_timerevent_isbase = value; }
    inline void setKNotificationJobUiDelegate_ChildEvent_IsBase(bool value) const { knotificationjobuidelegate_childevent_isbase = value; }
    inline void setKNotificationJobUiDelegate_CustomEvent_IsBase(bool value) const { knotificationjobuidelegate_customevent_isbase = value; }
    inline void setKNotificationJobUiDelegate_ConnectNotify_IsBase(bool value) const { knotificationjobuidelegate_connectnotify_isbase = value; }
    inline void setKNotificationJobUiDelegate_DisconnectNotify_IsBase(bool value) const { knotificationjobuidelegate_disconnectnotify_isbase = value; }
    inline void setKNotificationJobUiDelegate_Job_IsBase(bool value) const { knotificationjobuidelegate_job_isbase = value; }
    inline void setKNotificationJobUiDelegate_Sender_IsBase(bool value) const { knotificationjobuidelegate_sender_isbase = value; }
    inline void setKNotificationJobUiDelegate_SenderSignalIndex_IsBase(bool value) const { knotificationjobuidelegate_sendersignalindex_isbase = value; }
    inline void setKNotificationJobUiDelegate_Receivers_IsBase(bool value) const { knotificationjobuidelegate_receivers_isbase = value; }
    inline void setKNotificationJobUiDelegate_IsSignalConnected_IsBase(bool value) const { knotificationjobuidelegate_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knotificationjobuidelegate_metacall_isbase) {
            knotificationjobuidelegate_metacall_isbase = false;
            return KNotificationJobUiDelegate::qt_metacall(param1, param2, param3);
        } else if (knotificationjobuidelegate_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = knotificationjobuidelegate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KNotificationJobUiDelegate::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showErrorMessage() override {
        if (knotificationjobuidelegate_showerrormessage_isbase) {
            knotificationjobuidelegate_showerrormessage_isbase = false;
            KNotificationJobUiDelegate::showErrorMessage();
        } else if (knotificationjobuidelegate_showerrormessage_callback != nullptr) {
            knotificationjobuidelegate_showerrormessage_callback();
        } else {
            KNotificationJobUiDelegate::showErrorMessage();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setJob(KJob* job) override {
        if (knotificationjobuidelegate_setjob_isbase) {
            knotificationjobuidelegate_setjob_isbase = false;
            return KNotificationJobUiDelegate::setJob(job);
        } else if (knotificationjobuidelegate_setjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = knotificationjobuidelegate_setjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNotificationJobUiDelegate::setJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotWarning(KJob* job, const QString& message) override {
        if (knotificationjobuidelegate_slotwarning_isbase) {
            knotificationjobuidelegate_slotwarning_isbase = false;
            KNotificationJobUiDelegate::slotWarning(job, message);
        } else if (knotificationjobuidelegate_slotwarning_callback != nullptr) {
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

            knotificationjobuidelegate_slotwarning_callback(this, cbval1, cbval2);
        } else {
            KNotificationJobUiDelegate::slotWarning(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knotificationjobuidelegate_event_isbase) {
            knotificationjobuidelegate_event_isbase = false;
            return KNotificationJobUiDelegate::event(event);
        } else if (knotificationjobuidelegate_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = knotificationjobuidelegate_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNotificationJobUiDelegate::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knotificationjobuidelegate_eventfilter_isbase) {
            knotificationjobuidelegate_eventfilter_isbase = false;
            return KNotificationJobUiDelegate::eventFilter(watched, event);
        } else if (knotificationjobuidelegate_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = knotificationjobuidelegate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNotificationJobUiDelegate::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knotificationjobuidelegate_timerevent_isbase) {
            knotificationjobuidelegate_timerevent_isbase = false;
            KNotificationJobUiDelegate::timerEvent(event);
        } else if (knotificationjobuidelegate_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            knotificationjobuidelegate_timerevent_callback(this, cbval1);
        } else {
            KNotificationJobUiDelegate::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knotificationjobuidelegate_childevent_isbase) {
            knotificationjobuidelegate_childevent_isbase = false;
            KNotificationJobUiDelegate::childEvent(event);
        } else if (knotificationjobuidelegate_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            knotificationjobuidelegate_childevent_callback(this, cbval1);
        } else {
            KNotificationJobUiDelegate::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knotificationjobuidelegate_customevent_isbase) {
            knotificationjobuidelegate_customevent_isbase = false;
            KNotificationJobUiDelegate::customEvent(event);
        } else if (knotificationjobuidelegate_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knotificationjobuidelegate_customevent_callback(this, cbval1);
        } else {
            KNotificationJobUiDelegate::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knotificationjobuidelegate_connectnotify_isbase) {
            knotificationjobuidelegate_connectnotify_isbase = false;
            KNotificationJobUiDelegate::connectNotify(signal);
        } else if (knotificationjobuidelegate_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knotificationjobuidelegate_connectnotify_callback(this, cbval1);
        } else {
            KNotificationJobUiDelegate::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knotificationjobuidelegate_disconnectnotify_isbase) {
            knotificationjobuidelegate_disconnectnotify_isbase = false;
            KNotificationJobUiDelegate::disconnectNotify(signal);
        } else if (knotificationjobuidelegate_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knotificationjobuidelegate_disconnectnotify_callback(this, cbval1);
        } else {
            KNotificationJobUiDelegate::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    KJob* job() const {
        if (knotificationjobuidelegate_job_isbase) {
            knotificationjobuidelegate_job_isbase = false;
            return KNotificationJobUiDelegate::job();
        } else if (knotificationjobuidelegate_job_callback != nullptr) {
            KJob* callback_ret = knotificationjobuidelegate_job_callback();
            return callback_ret;
        } else {
            return KNotificationJobUiDelegate::job();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knotificationjobuidelegate_sender_isbase) {
            knotificationjobuidelegate_sender_isbase = false;
            return KNotificationJobUiDelegate::sender();
        } else if (knotificationjobuidelegate_sender_callback != nullptr) {
            QObject* callback_ret = knotificationjobuidelegate_sender_callback();
            return callback_ret;
        } else {
            return KNotificationJobUiDelegate::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knotificationjobuidelegate_sendersignalindex_isbase) {
            knotificationjobuidelegate_sendersignalindex_isbase = false;
            return KNotificationJobUiDelegate::senderSignalIndex();
        } else if (knotificationjobuidelegate_sendersignalindex_callback != nullptr) {
            int callback_ret = knotificationjobuidelegate_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNotificationJobUiDelegate::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knotificationjobuidelegate_receivers_isbase) {
            knotificationjobuidelegate_receivers_isbase = false;
            return KNotificationJobUiDelegate::receivers(signal);
        } else if (knotificationjobuidelegate_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = knotificationjobuidelegate_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNotificationJobUiDelegate::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knotificationjobuidelegate_issignalconnected_isbase) {
            knotificationjobuidelegate_issignalconnected_isbase = false;
            return KNotificationJobUiDelegate::isSignalConnected(signal);
        } else if (knotificationjobuidelegate_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = knotificationjobuidelegate_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNotificationJobUiDelegate::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KNotificationJobUiDelegate_SetJob(KNotificationJobUiDelegate* self, KJob* job);
    friend bool KNotificationJobUiDelegate_QBaseSetJob(KNotificationJobUiDelegate* self, KJob* job);
    friend void KNotificationJobUiDelegate_SlotWarning(KNotificationJobUiDelegate* self, KJob* job, const libqt_string message);
    friend void KNotificationJobUiDelegate_QBaseSlotWarning(KNotificationJobUiDelegate* self, KJob* job, const libqt_string message);
    friend void KNotificationJobUiDelegate_TimerEvent(KNotificationJobUiDelegate* self, QTimerEvent* event);
    friend void KNotificationJobUiDelegate_QBaseTimerEvent(KNotificationJobUiDelegate* self, QTimerEvent* event);
    friend void KNotificationJobUiDelegate_ChildEvent(KNotificationJobUiDelegate* self, QChildEvent* event);
    friend void KNotificationJobUiDelegate_QBaseChildEvent(KNotificationJobUiDelegate* self, QChildEvent* event);
    friend void KNotificationJobUiDelegate_CustomEvent(KNotificationJobUiDelegate* self, QEvent* event);
    friend void KNotificationJobUiDelegate_QBaseCustomEvent(KNotificationJobUiDelegate* self, QEvent* event);
    friend void KNotificationJobUiDelegate_ConnectNotify(KNotificationJobUiDelegate* self, const QMetaMethod* signal);
    friend void KNotificationJobUiDelegate_QBaseConnectNotify(KNotificationJobUiDelegate* self, const QMetaMethod* signal);
    friend void KNotificationJobUiDelegate_DisconnectNotify(KNotificationJobUiDelegate* self, const QMetaMethod* signal);
    friend void KNotificationJobUiDelegate_QBaseDisconnectNotify(KNotificationJobUiDelegate* self, const QMetaMethod* signal);
    friend KJob* KNotificationJobUiDelegate_Job(const KNotificationJobUiDelegate* self);
    friend KJob* KNotificationJobUiDelegate_QBaseJob(const KNotificationJobUiDelegate* self);
    friend QObject* KNotificationJobUiDelegate_Sender(const KNotificationJobUiDelegate* self);
    friend QObject* KNotificationJobUiDelegate_QBaseSender(const KNotificationJobUiDelegate* self);
    friend int KNotificationJobUiDelegate_SenderSignalIndex(const KNotificationJobUiDelegate* self);
    friend int KNotificationJobUiDelegate_QBaseSenderSignalIndex(const KNotificationJobUiDelegate* self);
    friend int KNotificationJobUiDelegate_Receivers(const KNotificationJobUiDelegate* self, const char* signal);
    friend int KNotificationJobUiDelegate_QBaseReceivers(const KNotificationJobUiDelegate* self, const char* signal);
    friend bool KNotificationJobUiDelegate_IsSignalConnected(const KNotificationJobUiDelegate* self, const QMetaMethod* signal);
    friend bool KNotificationJobUiDelegate_QBaseIsSignalConnected(const KNotificationJobUiDelegate* self, const QMetaMethod* signal);
};

#endif
