#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALQUESTION_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALQUESTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSCore::Question so that we can call protected methods
class VirtualKNSCoreQuestion final : public KNSCore::Question {

  public:
    // Virtual class boolean flag
    bool isVirtualKNSCoreQuestion = true;

    // Virtual class public types (including callbacks)
    using KNSCore__Question_Metacall_Callback = int (*)(KNSCore__Question*, int, int, void**);
    using KNSCore__Question_Event_Callback = bool (*)(KNSCore__Question*, QEvent*);
    using KNSCore__Question_EventFilter_Callback = bool (*)(KNSCore__Question*, QObject*, QEvent*);
    using KNSCore__Question_TimerEvent_Callback = void (*)(KNSCore__Question*, QTimerEvent*);
    using KNSCore__Question_ChildEvent_Callback = void (*)(KNSCore__Question*, QChildEvent*);
    using KNSCore__Question_CustomEvent_Callback = void (*)(KNSCore__Question*, QEvent*);
    using KNSCore__Question_ConnectNotify_Callback = void (*)(KNSCore__Question*, QMetaMethod*);
    using KNSCore__Question_DisconnectNotify_Callback = void (*)(KNSCore__Question*, QMetaMethod*);
    using KNSCore__Question_Sender_Callback = QObject* (*)();
    using KNSCore__Question_SenderSignalIndex_Callback = int (*)();
    using KNSCore__Question_Receivers_Callback = int (*)(const KNSCore__Question*, const char*);
    using KNSCore__Question_IsSignalConnected_Callback = bool (*)(const KNSCore__Question*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNSCore__Question_Metacall_Callback knscore__question_metacall_callback = nullptr;
    KNSCore__Question_Event_Callback knscore__question_event_callback = nullptr;
    KNSCore__Question_EventFilter_Callback knscore__question_eventfilter_callback = nullptr;
    KNSCore__Question_TimerEvent_Callback knscore__question_timerevent_callback = nullptr;
    KNSCore__Question_ChildEvent_Callback knscore__question_childevent_callback = nullptr;
    KNSCore__Question_CustomEvent_Callback knscore__question_customevent_callback = nullptr;
    KNSCore__Question_ConnectNotify_Callback knscore__question_connectnotify_callback = nullptr;
    KNSCore__Question_DisconnectNotify_Callback knscore__question_disconnectnotify_callback = nullptr;
    KNSCore__Question_Sender_Callback knscore__question_sender_callback = nullptr;
    KNSCore__Question_SenderSignalIndex_Callback knscore__question_sendersignalindex_callback = nullptr;
    KNSCore__Question_Receivers_Callback knscore__question_receivers_callback = nullptr;
    KNSCore__Question_IsSignalConnected_Callback knscore__question_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knscore__question_metacall_isbase = false;
    mutable bool knscore__question_event_isbase = false;
    mutable bool knscore__question_eventfilter_isbase = false;
    mutable bool knscore__question_timerevent_isbase = false;
    mutable bool knscore__question_childevent_isbase = false;
    mutable bool knscore__question_customevent_isbase = false;
    mutable bool knscore__question_connectnotify_isbase = false;
    mutable bool knscore__question_disconnectnotify_isbase = false;
    mutable bool knscore__question_sender_isbase = false;
    mutable bool knscore__question_sendersignalindex_isbase = false;
    mutable bool knscore__question_receivers_isbase = false;
    mutable bool knscore__question_issignalconnected_isbase = false;

  public:
    VirtualKNSCoreQuestion() : KNSCore::Question() {};
    VirtualKNSCoreQuestion(KNSCore::Question::QuestionType param1) : KNSCore::Question(param1) {};
    VirtualKNSCoreQuestion(KNSCore::Question::QuestionType param1, QObject* parent) : KNSCore::Question(param1, parent) {};

    ~VirtualKNSCoreQuestion() {
        knscore__question_metacall_callback = nullptr;
        knscore__question_event_callback = nullptr;
        knscore__question_eventfilter_callback = nullptr;
        knscore__question_timerevent_callback = nullptr;
        knscore__question_childevent_callback = nullptr;
        knscore__question_customevent_callback = nullptr;
        knscore__question_connectnotify_callback = nullptr;
        knscore__question_disconnectnotify_callback = nullptr;
        knscore__question_sender_callback = nullptr;
        knscore__question_sendersignalindex_callback = nullptr;
        knscore__question_receivers_callback = nullptr;
        knscore__question_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKNSCore__Question_Metacall_Callback(KNSCore__Question_Metacall_Callback cb) { knscore__question_metacall_callback = cb; }
    inline void setKNSCore__Question_Event_Callback(KNSCore__Question_Event_Callback cb) { knscore__question_event_callback = cb; }
    inline void setKNSCore__Question_EventFilter_Callback(KNSCore__Question_EventFilter_Callback cb) { knscore__question_eventfilter_callback = cb; }
    inline void setKNSCore__Question_TimerEvent_Callback(KNSCore__Question_TimerEvent_Callback cb) { knscore__question_timerevent_callback = cb; }
    inline void setKNSCore__Question_ChildEvent_Callback(KNSCore__Question_ChildEvent_Callback cb) { knscore__question_childevent_callback = cb; }
    inline void setKNSCore__Question_CustomEvent_Callback(KNSCore__Question_CustomEvent_Callback cb) { knscore__question_customevent_callback = cb; }
    inline void setKNSCore__Question_ConnectNotify_Callback(KNSCore__Question_ConnectNotify_Callback cb) { knscore__question_connectnotify_callback = cb; }
    inline void setKNSCore__Question_DisconnectNotify_Callback(KNSCore__Question_DisconnectNotify_Callback cb) { knscore__question_disconnectnotify_callback = cb; }
    inline void setKNSCore__Question_Sender_Callback(KNSCore__Question_Sender_Callback cb) { knscore__question_sender_callback = cb; }
    inline void setKNSCore__Question_SenderSignalIndex_Callback(KNSCore__Question_SenderSignalIndex_Callback cb) { knscore__question_sendersignalindex_callback = cb; }
    inline void setKNSCore__Question_Receivers_Callback(KNSCore__Question_Receivers_Callback cb) { knscore__question_receivers_callback = cb; }
    inline void setKNSCore__Question_IsSignalConnected_Callback(KNSCore__Question_IsSignalConnected_Callback cb) { knscore__question_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNSCore__Question_Metacall_IsBase(bool value) const { knscore__question_metacall_isbase = value; }
    inline void setKNSCore__Question_Event_IsBase(bool value) const { knscore__question_event_isbase = value; }
    inline void setKNSCore__Question_EventFilter_IsBase(bool value) const { knscore__question_eventfilter_isbase = value; }
    inline void setKNSCore__Question_TimerEvent_IsBase(bool value) const { knscore__question_timerevent_isbase = value; }
    inline void setKNSCore__Question_ChildEvent_IsBase(bool value) const { knscore__question_childevent_isbase = value; }
    inline void setKNSCore__Question_CustomEvent_IsBase(bool value) const { knscore__question_customevent_isbase = value; }
    inline void setKNSCore__Question_ConnectNotify_IsBase(bool value) const { knscore__question_connectnotify_isbase = value; }
    inline void setKNSCore__Question_DisconnectNotify_IsBase(bool value) const { knscore__question_disconnectnotify_isbase = value; }
    inline void setKNSCore__Question_Sender_IsBase(bool value) const { knscore__question_sender_isbase = value; }
    inline void setKNSCore__Question_SenderSignalIndex_IsBase(bool value) const { knscore__question_sendersignalindex_isbase = value; }
    inline void setKNSCore__Question_Receivers_IsBase(bool value) const { knscore__question_receivers_isbase = value; }
    inline void setKNSCore__Question_IsSignalConnected_IsBase(bool value) const { knscore__question_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knscore__question_metacall_isbase) {
            knscore__question_metacall_isbase = false;
            return KNSCore__Question::qt_metacall(param1, param2, param3);
        } else if (knscore__question_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = knscore__question_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KNSCore__Question::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knscore__question_event_isbase) {
            knscore__question_event_isbase = false;
            return KNSCore__Question::event(event);
        } else if (knscore__question_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = knscore__question_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSCore__Question::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knscore__question_eventfilter_isbase) {
            knscore__question_eventfilter_isbase = false;
            return KNSCore__Question::eventFilter(watched, event);
        } else if (knscore__question_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = knscore__question_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNSCore__Question::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knscore__question_timerevent_isbase) {
            knscore__question_timerevent_isbase = false;
            KNSCore__Question::timerEvent(event);
        } else if (knscore__question_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            knscore__question_timerevent_callback(this, cbval1);
        } else {
            KNSCore__Question::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knscore__question_childevent_isbase) {
            knscore__question_childevent_isbase = false;
            KNSCore__Question::childEvent(event);
        } else if (knscore__question_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            knscore__question_childevent_callback(this, cbval1);
        } else {
            KNSCore__Question::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knscore__question_customevent_isbase) {
            knscore__question_customevent_isbase = false;
            KNSCore__Question::customEvent(event);
        } else if (knscore__question_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knscore__question_customevent_callback(this, cbval1);
        } else {
            KNSCore__Question::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knscore__question_connectnotify_isbase) {
            knscore__question_connectnotify_isbase = false;
            KNSCore__Question::connectNotify(signal);
        } else if (knscore__question_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knscore__question_connectnotify_callback(this, cbval1);
        } else {
            KNSCore__Question::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knscore__question_disconnectnotify_isbase) {
            knscore__question_disconnectnotify_isbase = false;
            KNSCore__Question::disconnectNotify(signal);
        } else if (knscore__question_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knscore__question_disconnectnotify_callback(this, cbval1);
        } else {
            KNSCore__Question::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knscore__question_sender_isbase) {
            knscore__question_sender_isbase = false;
            return KNSCore__Question::sender();
        } else if (knscore__question_sender_callback != nullptr) {
            QObject* callback_ret = knscore__question_sender_callback();
            return callback_ret;
        } else {
            return KNSCore__Question::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knscore__question_sendersignalindex_isbase) {
            knscore__question_sendersignalindex_isbase = false;
            return KNSCore__Question::senderSignalIndex();
        } else if (knscore__question_sendersignalindex_callback != nullptr) {
            int callback_ret = knscore__question_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNSCore__Question::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knscore__question_receivers_isbase) {
            knscore__question_receivers_isbase = false;
            return KNSCore__Question::receivers(signal);
        } else if (knscore__question_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = knscore__question_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNSCore__Question::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knscore__question_issignalconnected_isbase) {
            knscore__question_issignalconnected_isbase = false;
            return KNSCore__Question::isSignalConnected(signal);
        } else if (knscore__question_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = knscore__question_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSCore__Question::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KNSCore__Question_TimerEvent(KNSCore::Question* self, QTimerEvent* event);
    friend void KNSCore__Question_QBaseTimerEvent(KNSCore::Question* self, QTimerEvent* event);
    friend void KNSCore__Question_ChildEvent(KNSCore::Question* self, QChildEvent* event);
    friend void KNSCore__Question_QBaseChildEvent(KNSCore::Question* self, QChildEvent* event);
    friend void KNSCore__Question_CustomEvent(KNSCore::Question* self, QEvent* event);
    friend void KNSCore__Question_QBaseCustomEvent(KNSCore::Question* self, QEvent* event);
    friend void KNSCore__Question_ConnectNotify(KNSCore::Question* self, const QMetaMethod* signal);
    friend void KNSCore__Question_QBaseConnectNotify(KNSCore::Question* self, const QMetaMethod* signal);
    friend void KNSCore__Question_DisconnectNotify(KNSCore::Question* self, const QMetaMethod* signal);
    friend void KNSCore__Question_QBaseDisconnectNotify(KNSCore::Question* self, const QMetaMethod* signal);
    friend QObject* KNSCore__Question_Sender(const KNSCore::Question* self);
    friend QObject* KNSCore__Question_QBaseSender(const KNSCore::Question* self);
    friend int KNSCore__Question_SenderSignalIndex(const KNSCore::Question* self);
    friend int KNSCore__Question_QBaseSenderSignalIndex(const KNSCore::Question* self);
    friend int KNSCore__Question_Receivers(const KNSCore::Question* self, const char* signal);
    friend int KNSCore__Question_QBaseReceivers(const KNSCore::Question* self, const char* signal);
    friend bool KNSCore__Question_IsSignalConnected(const KNSCore::Question* self, const QMetaMethod* signal);
    friend bool KNSCore__Question_QBaseIsSignalConnected(const KNSCore::Question* self, const QMetaMethod* signal);
};

#endif
