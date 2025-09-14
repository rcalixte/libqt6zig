#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKDIALOGJOBUIDELEGATE_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKDIALOGJOBUIDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDialogJobUiDelegate so that we can call protected methods
class VirtualKDialogJobUiDelegate final : public KDialogJobUiDelegate {

  public:
    // Virtual class boolean flag
    bool isVirtualKDialogJobUiDelegate = true;

    // Virtual class public types (including callbacks)
    using KDialogJobUiDelegate_Metacall_Callback = int (*)(KDialogJobUiDelegate*, int, int, void**);
    using KDialogJobUiDelegate_SetJob_Callback = bool (*)(KDialogJobUiDelegate*, KJob*);
    using KDialogJobUiDelegate_SetWindow_Callback = void (*)(KDialogJobUiDelegate*, QWidget*);
    using KDialogJobUiDelegate_ShowErrorMessage_Callback = void (*)();
    using KDialogJobUiDelegate_SlotWarning_Callback = void (*)(KDialogJobUiDelegate*, KJob*, libqt_string);
    using KDialogJobUiDelegate_Event_Callback = bool (*)(KDialogJobUiDelegate*, QEvent*);
    using KDialogJobUiDelegate_EventFilter_Callback = bool (*)(KDialogJobUiDelegate*, QObject*, QEvent*);
    using KDialogJobUiDelegate_TimerEvent_Callback = void (*)(KDialogJobUiDelegate*, QTimerEvent*);
    using KDialogJobUiDelegate_ChildEvent_Callback = void (*)(KDialogJobUiDelegate*, QChildEvent*);
    using KDialogJobUiDelegate_CustomEvent_Callback = void (*)(KDialogJobUiDelegate*, QEvent*);
    using KDialogJobUiDelegate_ConnectNotify_Callback = void (*)(KDialogJobUiDelegate*, QMetaMethod*);
    using KDialogJobUiDelegate_DisconnectNotify_Callback = void (*)(KDialogJobUiDelegate*, QMetaMethod*);
    using KDialogJobUiDelegate_Job_Callback = KJob* (*)();
    using KDialogJobUiDelegate_Sender_Callback = QObject* (*)();
    using KDialogJobUiDelegate_SenderSignalIndex_Callback = int (*)();
    using KDialogJobUiDelegate_Receivers_Callback = int (*)(const KDialogJobUiDelegate*, const char*);
    using KDialogJobUiDelegate_IsSignalConnected_Callback = bool (*)(const KDialogJobUiDelegate*, QMetaMethod*);

  protected:
    // Instance callback storage
    KDialogJobUiDelegate_Metacall_Callback kdialogjobuidelegate_metacall_callback = nullptr;
    KDialogJobUiDelegate_SetJob_Callback kdialogjobuidelegate_setjob_callback = nullptr;
    KDialogJobUiDelegate_SetWindow_Callback kdialogjobuidelegate_setwindow_callback = nullptr;
    KDialogJobUiDelegate_ShowErrorMessage_Callback kdialogjobuidelegate_showerrormessage_callback = nullptr;
    KDialogJobUiDelegate_SlotWarning_Callback kdialogjobuidelegate_slotwarning_callback = nullptr;
    KDialogJobUiDelegate_Event_Callback kdialogjobuidelegate_event_callback = nullptr;
    KDialogJobUiDelegate_EventFilter_Callback kdialogjobuidelegate_eventfilter_callback = nullptr;
    KDialogJobUiDelegate_TimerEvent_Callback kdialogjobuidelegate_timerevent_callback = nullptr;
    KDialogJobUiDelegate_ChildEvent_Callback kdialogjobuidelegate_childevent_callback = nullptr;
    KDialogJobUiDelegate_CustomEvent_Callback kdialogjobuidelegate_customevent_callback = nullptr;
    KDialogJobUiDelegate_ConnectNotify_Callback kdialogjobuidelegate_connectnotify_callback = nullptr;
    KDialogJobUiDelegate_DisconnectNotify_Callback kdialogjobuidelegate_disconnectnotify_callback = nullptr;
    KDialogJobUiDelegate_Job_Callback kdialogjobuidelegate_job_callback = nullptr;
    KDialogJobUiDelegate_Sender_Callback kdialogjobuidelegate_sender_callback = nullptr;
    KDialogJobUiDelegate_SenderSignalIndex_Callback kdialogjobuidelegate_sendersignalindex_callback = nullptr;
    KDialogJobUiDelegate_Receivers_Callback kdialogjobuidelegate_receivers_callback = nullptr;
    KDialogJobUiDelegate_IsSignalConnected_Callback kdialogjobuidelegate_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kdialogjobuidelegate_metacall_isbase = false;
    mutable bool kdialogjobuidelegate_setjob_isbase = false;
    mutable bool kdialogjobuidelegate_setwindow_isbase = false;
    mutable bool kdialogjobuidelegate_showerrormessage_isbase = false;
    mutable bool kdialogjobuidelegate_slotwarning_isbase = false;
    mutable bool kdialogjobuidelegate_event_isbase = false;
    mutable bool kdialogjobuidelegate_eventfilter_isbase = false;
    mutable bool kdialogjobuidelegate_timerevent_isbase = false;
    mutable bool kdialogjobuidelegate_childevent_isbase = false;
    mutable bool kdialogjobuidelegate_customevent_isbase = false;
    mutable bool kdialogjobuidelegate_connectnotify_isbase = false;
    mutable bool kdialogjobuidelegate_disconnectnotify_isbase = false;
    mutable bool kdialogjobuidelegate_job_isbase = false;
    mutable bool kdialogjobuidelegate_sender_isbase = false;
    mutable bool kdialogjobuidelegate_sendersignalindex_isbase = false;
    mutable bool kdialogjobuidelegate_receivers_isbase = false;
    mutable bool kdialogjobuidelegate_issignalconnected_isbase = false;

  public:
    VirtualKDialogJobUiDelegate() : KDialogJobUiDelegate() {};
    VirtualKDialogJobUiDelegate(KJobUiDelegate::Flags flags, QWidget* window) : KDialogJobUiDelegate(flags, window) {};

    ~VirtualKDialogJobUiDelegate() {
        kdialogjobuidelegate_metacall_callback = nullptr;
        kdialogjobuidelegate_setjob_callback = nullptr;
        kdialogjobuidelegate_setwindow_callback = nullptr;
        kdialogjobuidelegate_showerrormessage_callback = nullptr;
        kdialogjobuidelegate_slotwarning_callback = nullptr;
        kdialogjobuidelegate_event_callback = nullptr;
        kdialogjobuidelegate_eventfilter_callback = nullptr;
        kdialogjobuidelegate_timerevent_callback = nullptr;
        kdialogjobuidelegate_childevent_callback = nullptr;
        kdialogjobuidelegate_customevent_callback = nullptr;
        kdialogjobuidelegate_connectnotify_callback = nullptr;
        kdialogjobuidelegate_disconnectnotify_callback = nullptr;
        kdialogjobuidelegate_job_callback = nullptr;
        kdialogjobuidelegate_sender_callback = nullptr;
        kdialogjobuidelegate_sendersignalindex_callback = nullptr;
        kdialogjobuidelegate_receivers_callback = nullptr;
        kdialogjobuidelegate_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKDialogJobUiDelegate_Metacall_Callback(KDialogJobUiDelegate_Metacall_Callback cb) { kdialogjobuidelegate_metacall_callback = cb; }
    inline void setKDialogJobUiDelegate_SetJob_Callback(KDialogJobUiDelegate_SetJob_Callback cb) { kdialogjobuidelegate_setjob_callback = cb; }
    inline void setKDialogJobUiDelegate_SetWindow_Callback(KDialogJobUiDelegate_SetWindow_Callback cb) { kdialogjobuidelegate_setwindow_callback = cb; }
    inline void setKDialogJobUiDelegate_ShowErrorMessage_Callback(KDialogJobUiDelegate_ShowErrorMessage_Callback cb) { kdialogjobuidelegate_showerrormessage_callback = cb; }
    inline void setKDialogJobUiDelegate_SlotWarning_Callback(KDialogJobUiDelegate_SlotWarning_Callback cb) { kdialogjobuidelegate_slotwarning_callback = cb; }
    inline void setKDialogJobUiDelegate_Event_Callback(KDialogJobUiDelegate_Event_Callback cb) { kdialogjobuidelegate_event_callback = cb; }
    inline void setKDialogJobUiDelegate_EventFilter_Callback(KDialogJobUiDelegate_EventFilter_Callback cb) { kdialogjobuidelegate_eventfilter_callback = cb; }
    inline void setKDialogJobUiDelegate_TimerEvent_Callback(KDialogJobUiDelegate_TimerEvent_Callback cb) { kdialogjobuidelegate_timerevent_callback = cb; }
    inline void setKDialogJobUiDelegate_ChildEvent_Callback(KDialogJobUiDelegate_ChildEvent_Callback cb) { kdialogjobuidelegate_childevent_callback = cb; }
    inline void setKDialogJobUiDelegate_CustomEvent_Callback(KDialogJobUiDelegate_CustomEvent_Callback cb) { kdialogjobuidelegate_customevent_callback = cb; }
    inline void setKDialogJobUiDelegate_ConnectNotify_Callback(KDialogJobUiDelegate_ConnectNotify_Callback cb) { kdialogjobuidelegate_connectnotify_callback = cb; }
    inline void setKDialogJobUiDelegate_DisconnectNotify_Callback(KDialogJobUiDelegate_DisconnectNotify_Callback cb) { kdialogjobuidelegate_disconnectnotify_callback = cb; }
    inline void setKDialogJobUiDelegate_Job_Callback(KDialogJobUiDelegate_Job_Callback cb) { kdialogjobuidelegate_job_callback = cb; }
    inline void setKDialogJobUiDelegate_Sender_Callback(KDialogJobUiDelegate_Sender_Callback cb) { kdialogjobuidelegate_sender_callback = cb; }
    inline void setKDialogJobUiDelegate_SenderSignalIndex_Callback(KDialogJobUiDelegate_SenderSignalIndex_Callback cb) { kdialogjobuidelegate_sendersignalindex_callback = cb; }
    inline void setKDialogJobUiDelegate_Receivers_Callback(KDialogJobUiDelegate_Receivers_Callback cb) { kdialogjobuidelegate_receivers_callback = cb; }
    inline void setKDialogJobUiDelegate_IsSignalConnected_Callback(KDialogJobUiDelegate_IsSignalConnected_Callback cb) { kdialogjobuidelegate_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKDialogJobUiDelegate_Metacall_IsBase(bool value) const { kdialogjobuidelegate_metacall_isbase = value; }
    inline void setKDialogJobUiDelegate_SetJob_IsBase(bool value) const { kdialogjobuidelegate_setjob_isbase = value; }
    inline void setKDialogJobUiDelegate_SetWindow_IsBase(bool value) const { kdialogjobuidelegate_setwindow_isbase = value; }
    inline void setKDialogJobUiDelegate_ShowErrorMessage_IsBase(bool value) const { kdialogjobuidelegate_showerrormessage_isbase = value; }
    inline void setKDialogJobUiDelegate_SlotWarning_IsBase(bool value) const { kdialogjobuidelegate_slotwarning_isbase = value; }
    inline void setKDialogJobUiDelegate_Event_IsBase(bool value) const { kdialogjobuidelegate_event_isbase = value; }
    inline void setKDialogJobUiDelegate_EventFilter_IsBase(bool value) const { kdialogjobuidelegate_eventfilter_isbase = value; }
    inline void setKDialogJobUiDelegate_TimerEvent_IsBase(bool value) const { kdialogjobuidelegate_timerevent_isbase = value; }
    inline void setKDialogJobUiDelegate_ChildEvent_IsBase(bool value) const { kdialogjobuidelegate_childevent_isbase = value; }
    inline void setKDialogJobUiDelegate_CustomEvent_IsBase(bool value) const { kdialogjobuidelegate_customevent_isbase = value; }
    inline void setKDialogJobUiDelegate_ConnectNotify_IsBase(bool value) const { kdialogjobuidelegate_connectnotify_isbase = value; }
    inline void setKDialogJobUiDelegate_DisconnectNotify_IsBase(bool value) const { kdialogjobuidelegate_disconnectnotify_isbase = value; }
    inline void setKDialogJobUiDelegate_Job_IsBase(bool value) const { kdialogjobuidelegate_job_isbase = value; }
    inline void setKDialogJobUiDelegate_Sender_IsBase(bool value) const { kdialogjobuidelegate_sender_isbase = value; }
    inline void setKDialogJobUiDelegate_SenderSignalIndex_IsBase(bool value) const { kdialogjobuidelegate_sendersignalindex_isbase = value; }
    inline void setKDialogJobUiDelegate_Receivers_IsBase(bool value) const { kdialogjobuidelegate_receivers_isbase = value; }
    inline void setKDialogJobUiDelegate_IsSignalConnected_IsBase(bool value) const { kdialogjobuidelegate_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdialogjobuidelegate_metacall_isbase) {
            kdialogjobuidelegate_metacall_isbase = false;
            return KDialogJobUiDelegate::qt_metacall(param1, param2, param3);
        } else if (kdialogjobuidelegate_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdialogjobuidelegate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDialogJobUiDelegate::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setJob(KJob* job) override {
        if (kdialogjobuidelegate_setjob_isbase) {
            kdialogjobuidelegate_setjob_isbase = false;
            return KDialogJobUiDelegate::setJob(job);
        } else if (kdialogjobuidelegate_setjob_callback != nullptr) {
            KJob* cbval1 = job;

            bool callback_ret = kdialogjobuidelegate_setjob_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDialogJobUiDelegate::setJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWindow(QWidget* window) override {
        if (kdialogjobuidelegate_setwindow_isbase) {
            kdialogjobuidelegate_setwindow_isbase = false;
            KDialogJobUiDelegate::setWindow(window);
        } else if (kdialogjobuidelegate_setwindow_callback != nullptr) {
            QWidget* cbval1 = window;

            kdialogjobuidelegate_setwindow_callback(this, cbval1);
        } else {
            KDialogJobUiDelegate::setWindow(window);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showErrorMessage() override {
        if (kdialogjobuidelegate_showerrormessage_isbase) {
            kdialogjobuidelegate_showerrormessage_isbase = false;
            KDialogJobUiDelegate::showErrorMessage();
        } else if (kdialogjobuidelegate_showerrormessage_callback != nullptr) {
            kdialogjobuidelegate_showerrormessage_callback();
        } else {
            KDialogJobUiDelegate::showErrorMessage();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotWarning(KJob* job, const QString& message) override {
        if (kdialogjobuidelegate_slotwarning_isbase) {
            kdialogjobuidelegate_slotwarning_isbase = false;
            KDialogJobUiDelegate::slotWarning(job, message);
        } else if (kdialogjobuidelegate_slotwarning_callback != nullptr) {
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

            kdialogjobuidelegate_slotwarning_callback(this, cbval1, cbval2);
        } else {
            KDialogJobUiDelegate::slotWarning(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdialogjobuidelegate_event_isbase) {
            kdialogjobuidelegate_event_isbase = false;
            return KDialogJobUiDelegate::event(event);
        } else if (kdialogjobuidelegate_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kdialogjobuidelegate_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDialogJobUiDelegate::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdialogjobuidelegate_eventfilter_isbase) {
            kdialogjobuidelegate_eventfilter_isbase = false;
            return KDialogJobUiDelegate::eventFilter(watched, event);
        } else if (kdialogjobuidelegate_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kdialogjobuidelegate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDialogJobUiDelegate::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdialogjobuidelegate_timerevent_isbase) {
            kdialogjobuidelegate_timerevent_isbase = false;
            KDialogJobUiDelegate::timerEvent(event);
        } else if (kdialogjobuidelegate_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kdialogjobuidelegate_timerevent_callback(this, cbval1);
        } else {
            KDialogJobUiDelegate::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdialogjobuidelegate_childevent_isbase) {
            kdialogjobuidelegate_childevent_isbase = false;
            KDialogJobUiDelegate::childEvent(event);
        } else if (kdialogjobuidelegate_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdialogjobuidelegate_childevent_callback(this, cbval1);
        } else {
            KDialogJobUiDelegate::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdialogjobuidelegate_customevent_isbase) {
            kdialogjobuidelegate_customevent_isbase = false;
            KDialogJobUiDelegate::customEvent(event);
        } else if (kdialogjobuidelegate_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdialogjobuidelegate_customevent_callback(this, cbval1);
        } else {
            KDialogJobUiDelegate::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdialogjobuidelegate_connectnotify_isbase) {
            kdialogjobuidelegate_connectnotify_isbase = false;
            KDialogJobUiDelegate::connectNotify(signal);
        } else if (kdialogjobuidelegate_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdialogjobuidelegate_connectnotify_callback(this, cbval1);
        } else {
            KDialogJobUiDelegate::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdialogjobuidelegate_disconnectnotify_isbase) {
            kdialogjobuidelegate_disconnectnotify_isbase = false;
            KDialogJobUiDelegate::disconnectNotify(signal);
        } else if (kdialogjobuidelegate_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdialogjobuidelegate_disconnectnotify_callback(this, cbval1);
        } else {
            KDialogJobUiDelegate::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    KJob* job() const {
        if (kdialogjobuidelegate_job_isbase) {
            kdialogjobuidelegate_job_isbase = false;
            return KDialogJobUiDelegate::job();
        } else if (kdialogjobuidelegate_job_callback != nullptr) {
            KJob* callback_ret = kdialogjobuidelegate_job_callback();
            return callback_ret;
        } else {
            return KDialogJobUiDelegate::job();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdialogjobuidelegate_sender_isbase) {
            kdialogjobuidelegate_sender_isbase = false;
            return KDialogJobUiDelegate::sender();
        } else if (kdialogjobuidelegate_sender_callback != nullptr) {
            QObject* callback_ret = kdialogjobuidelegate_sender_callback();
            return callback_ret;
        } else {
            return KDialogJobUiDelegate::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdialogjobuidelegate_sendersignalindex_isbase) {
            kdialogjobuidelegate_sendersignalindex_isbase = false;
            return KDialogJobUiDelegate::senderSignalIndex();
        } else if (kdialogjobuidelegate_sendersignalindex_callback != nullptr) {
            int callback_ret = kdialogjobuidelegate_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDialogJobUiDelegate::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdialogjobuidelegate_receivers_isbase) {
            kdialogjobuidelegate_receivers_isbase = false;
            return KDialogJobUiDelegate::receivers(signal);
        } else if (kdialogjobuidelegate_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdialogjobuidelegate_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDialogJobUiDelegate::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdialogjobuidelegate_issignalconnected_isbase) {
            kdialogjobuidelegate_issignalconnected_isbase = false;
            return KDialogJobUiDelegate::isSignalConnected(signal);
        } else if (kdialogjobuidelegate_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdialogjobuidelegate_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDialogJobUiDelegate::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KDialogJobUiDelegate_SlotWarning(KDialogJobUiDelegate* self, KJob* job, const libqt_string message);
    friend void KDialogJobUiDelegate_QBaseSlotWarning(KDialogJobUiDelegate* self, KJob* job, const libqt_string message);
    friend void KDialogJobUiDelegate_TimerEvent(KDialogJobUiDelegate* self, QTimerEvent* event);
    friend void KDialogJobUiDelegate_QBaseTimerEvent(KDialogJobUiDelegate* self, QTimerEvent* event);
    friend void KDialogJobUiDelegate_ChildEvent(KDialogJobUiDelegate* self, QChildEvent* event);
    friend void KDialogJobUiDelegate_QBaseChildEvent(KDialogJobUiDelegate* self, QChildEvent* event);
    friend void KDialogJobUiDelegate_CustomEvent(KDialogJobUiDelegate* self, QEvent* event);
    friend void KDialogJobUiDelegate_QBaseCustomEvent(KDialogJobUiDelegate* self, QEvent* event);
    friend void KDialogJobUiDelegate_ConnectNotify(KDialogJobUiDelegate* self, const QMetaMethod* signal);
    friend void KDialogJobUiDelegate_QBaseConnectNotify(KDialogJobUiDelegate* self, const QMetaMethod* signal);
    friend void KDialogJobUiDelegate_DisconnectNotify(KDialogJobUiDelegate* self, const QMetaMethod* signal);
    friend void KDialogJobUiDelegate_QBaseDisconnectNotify(KDialogJobUiDelegate* self, const QMetaMethod* signal);
    friend KJob* KDialogJobUiDelegate_Job(const KDialogJobUiDelegate* self);
    friend KJob* KDialogJobUiDelegate_QBaseJob(const KDialogJobUiDelegate* self);
    friend QObject* KDialogJobUiDelegate_Sender(const KDialogJobUiDelegate* self);
    friend QObject* KDialogJobUiDelegate_QBaseSender(const KDialogJobUiDelegate* self);
    friend int KDialogJobUiDelegate_SenderSignalIndex(const KDialogJobUiDelegate* self);
    friend int KDialogJobUiDelegate_QBaseSenderSignalIndex(const KDialogJobUiDelegate* self);
    friend int KDialogJobUiDelegate_Receivers(const KDialogJobUiDelegate* self, const char* signal);
    friend int KDialogJobUiDelegate_QBaseReceivers(const KDialogJobUiDelegate* self, const char* signal);
    friend bool KDialogJobUiDelegate_IsSignalConnected(const KDialogJobUiDelegate* self, const QMetaMethod* signal);
    friend bool KDialogJobUiDelegate_QBaseIsSignalConnected(const KDialogJobUiDelegate* self, const QMetaMethod* signal);
};

#endif
