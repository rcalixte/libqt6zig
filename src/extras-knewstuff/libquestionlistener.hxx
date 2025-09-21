#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALQUESTIONLISTENER_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALQUESTIONLISTENER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSCore::QuestionListener so that we can call protected methods
class VirtualKNSCoreQuestionListener : public KNSCore::QuestionListener {

  public:
    // Virtual class boolean flag
    bool isVirtualKNSCoreQuestionListener = true;

    // Virtual class public types (including callbacks)
    using KNSCore__QuestionListener_Metacall_Callback = int (*)(KNSCore__QuestionListener*, int, int, void**);
    using KNSCore__QuestionListener_AskQuestion_Callback = void (*)(KNSCore__QuestionListener*, KNSCore__Question*);
    using KNSCore__QuestionListener_Event_Callback = bool (*)(KNSCore__QuestionListener*, QEvent*);
    using KNSCore__QuestionListener_EventFilter_Callback = bool (*)(KNSCore__QuestionListener*, QObject*, QEvent*);
    using KNSCore__QuestionListener_TimerEvent_Callback = void (*)(KNSCore__QuestionListener*, QTimerEvent*);
    using KNSCore__QuestionListener_ChildEvent_Callback = void (*)(KNSCore__QuestionListener*, QChildEvent*);
    using KNSCore__QuestionListener_CustomEvent_Callback = void (*)(KNSCore__QuestionListener*, QEvent*);
    using KNSCore__QuestionListener_ConnectNotify_Callback = void (*)(KNSCore__QuestionListener*, QMetaMethod*);
    using KNSCore__QuestionListener_DisconnectNotify_Callback = void (*)(KNSCore__QuestionListener*, QMetaMethod*);
    using KNSCore__QuestionListener_Sender_Callback = QObject* (*)();
    using KNSCore__QuestionListener_SenderSignalIndex_Callback = int (*)();
    using KNSCore__QuestionListener_Receivers_Callback = int (*)(const KNSCore__QuestionListener*, const char*);
    using KNSCore__QuestionListener_IsSignalConnected_Callback = bool (*)(const KNSCore__QuestionListener*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNSCore__QuestionListener_Metacall_Callback knscore__questionlistener_metacall_callback = nullptr;
    KNSCore__QuestionListener_AskQuestion_Callback knscore__questionlistener_askquestion_callback = nullptr;
    KNSCore__QuestionListener_Event_Callback knscore__questionlistener_event_callback = nullptr;
    KNSCore__QuestionListener_EventFilter_Callback knscore__questionlistener_eventfilter_callback = nullptr;
    KNSCore__QuestionListener_TimerEvent_Callback knscore__questionlistener_timerevent_callback = nullptr;
    KNSCore__QuestionListener_ChildEvent_Callback knscore__questionlistener_childevent_callback = nullptr;
    KNSCore__QuestionListener_CustomEvent_Callback knscore__questionlistener_customevent_callback = nullptr;
    KNSCore__QuestionListener_ConnectNotify_Callback knscore__questionlistener_connectnotify_callback = nullptr;
    KNSCore__QuestionListener_DisconnectNotify_Callback knscore__questionlistener_disconnectnotify_callback = nullptr;
    KNSCore__QuestionListener_Sender_Callback knscore__questionlistener_sender_callback = nullptr;
    KNSCore__QuestionListener_SenderSignalIndex_Callback knscore__questionlistener_sendersignalindex_callback = nullptr;
    KNSCore__QuestionListener_Receivers_Callback knscore__questionlistener_receivers_callback = nullptr;
    KNSCore__QuestionListener_IsSignalConnected_Callback knscore__questionlistener_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knscore__questionlistener_metacall_isbase = false;
    mutable bool knscore__questionlistener_askquestion_isbase = false;
    mutable bool knscore__questionlistener_event_isbase = false;
    mutable bool knscore__questionlistener_eventfilter_isbase = false;
    mutable bool knscore__questionlistener_timerevent_isbase = false;
    mutable bool knscore__questionlistener_childevent_isbase = false;
    mutable bool knscore__questionlistener_customevent_isbase = false;
    mutable bool knscore__questionlistener_connectnotify_isbase = false;
    mutable bool knscore__questionlistener_disconnectnotify_isbase = false;
    mutable bool knscore__questionlistener_sender_isbase = false;
    mutable bool knscore__questionlistener_sendersignalindex_isbase = false;
    mutable bool knscore__questionlistener_receivers_isbase = false;
    mutable bool knscore__questionlistener_issignalconnected_isbase = false;

  public:
    VirtualKNSCoreQuestionListener() : KNSCore::QuestionListener() {};
    VirtualKNSCoreQuestionListener(QObject* parent) : KNSCore::QuestionListener(parent) {};

    ~VirtualKNSCoreQuestionListener() {
        knscore__questionlistener_metacall_callback = nullptr;
        knscore__questionlistener_askquestion_callback = nullptr;
        knscore__questionlistener_event_callback = nullptr;
        knscore__questionlistener_eventfilter_callback = nullptr;
        knscore__questionlistener_timerevent_callback = nullptr;
        knscore__questionlistener_childevent_callback = nullptr;
        knscore__questionlistener_customevent_callback = nullptr;
        knscore__questionlistener_connectnotify_callback = nullptr;
        knscore__questionlistener_disconnectnotify_callback = nullptr;
        knscore__questionlistener_sender_callback = nullptr;
        knscore__questionlistener_sendersignalindex_callback = nullptr;
        knscore__questionlistener_receivers_callback = nullptr;
        knscore__questionlistener_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKNSCore__QuestionListener_Metacall_Callback(KNSCore__QuestionListener_Metacall_Callback cb) { knscore__questionlistener_metacall_callback = cb; }
    inline void setKNSCore__QuestionListener_AskQuestion_Callback(KNSCore__QuestionListener_AskQuestion_Callback cb) { knscore__questionlistener_askquestion_callback = cb; }
    inline void setKNSCore__QuestionListener_Event_Callback(KNSCore__QuestionListener_Event_Callback cb) { knscore__questionlistener_event_callback = cb; }
    inline void setKNSCore__QuestionListener_EventFilter_Callback(KNSCore__QuestionListener_EventFilter_Callback cb) { knscore__questionlistener_eventfilter_callback = cb; }
    inline void setKNSCore__QuestionListener_TimerEvent_Callback(KNSCore__QuestionListener_TimerEvent_Callback cb) { knscore__questionlistener_timerevent_callback = cb; }
    inline void setKNSCore__QuestionListener_ChildEvent_Callback(KNSCore__QuestionListener_ChildEvent_Callback cb) { knscore__questionlistener_childevent_callback = cb; }
    inline void setKNSCore__QuestionListener_CustomEvent_Callback(KNSCore__QuestionListener_CustomEvent_Callback cb) { knscore__questionlistener_customevent_callback = cb; }
    inline void setKNSCore__QuestionListener_ConnectNotify_Callback(KNSCore__QuestionListener_ConnectNotify_Callback cb) { knscore__questionlistener_connectnotify_callback = cb; }
    inline void setKNSCore__QuestionListener_DisconnectNotify_Callback(KNSCore__QuestionListener_DisconnectNotify_Callback cb) { knscore__questionlistener_disconnectnotify_callback = cb; }
    inline void setKNSCore__QuestionListener_Sender_Callback(KNSCore__QuestionListener_Sender_Callback cb) { knscore__questionlistener_sender_callback = cb; }
    inline void setKNSCore__QuestionListener_SenderSignalIndex_Callback(KNSCore__QuestionListener_SenderSignalIndex_Callback cb) { knscore__questionlistener_sendersignalindex_callback = cb; }
    inline void setKNSCore__QuestionListener_Receivers_Callback(KNSCore__QuestionListener_Receivers_Callback cb) { knscore__questionlistener_receivers_callback = cb; }
    inline void setKNSCore__QuestionListener_IsSignalConnected_Callback(KNSCore__QuestionListener_IsSignalConnected_Callback cb) { knscore__questionlistener_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNSCore__QuestionListener_Metacall_IsBase(bool value) const { knscore__questionlistener_metacall_isbase = value; }
    inline void setKNSCore__QuestionListener_AskQuestion_IsBase(bool value) const { knscore__questionlistener_askquestion_isbase = value; }
    inline void setKNSCore__QuestionListener_Event_IsBase(bool value) const { knscore__questionlistener_event_isbase = value; }
    inline void setKNSCore__QuestionListener_EventFilter_IsBase(bool value) const { knscore__questionlistener_eventfilter_isbase = value; }
    inline void setKNSCore__QuestionListener_TimerEvent_IsBase(bool value) const { knscore__questionlistener_timerevent_isbase = value; }
    inline void setKNSCore__QuestionListener_ChildEvent_IsBase(bool value) const { knscore__questionlistener_childevent_isbase = value; }
    inline void setKNSCore__QuestionListener_CustomEvent_IsBase(bool value) const { knscore__questionlistener_customevent_isbase = value; }
    inline void setKNSCore__QuestionListener_ConnectNotify_IsBase(bool value) const { knscore__questionlistener_connectnotify_isbase = value; }
    inline void setKNSCore__QuestionListener_DisconnectNotify_IsBase(bool value) const { knscore__questionlistener_disconnectnotify_isbase = value; }
    inline void setKNSCore__QuestionListener_Sender_IsBase(bool value) const { knscore__questionlistener_sender_isbase = value; }
    inline void setKNSCore__QuestionListener_SenderSignalIndex_IsBase(bool value) const { knscore__questionlistener_sendersignalindex_isbase = value; }
    inline void setKNSCore__QuestionListener_Receivers_IsBase(bool value) const { knscore__questionlistener_receivers_isbase = value; }
    inline void setKNSCore__QuestionListener_IsSignalConnected_IsBase(bool value) const { knscore__questionlistener_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knscore__questionlistener_metacall_isbase) {
            knscore__questionlistener_metacall_isbase = false;
            return KNSCore__QuestionListener::qt_metacall(param1, param2, param3);
        } else if (knscore__questionlistener_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = knscore__questionlistener_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KNSCore__QuestionListener::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void askQuestion(KNSCore::Question* question) override {
        if (knscore__questionlistener_askquestion_callback != nullptr) {
            KNSCore__Question* cbval1 = question;

            knscore__questionlistener_askquestion_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knscore__questionlistener_event_isbase) {
            knscore__questionlistener_event_isbase = false;
            return KNSCore__QuestionListener::event(event);
        } else if (knscore__questionlistener_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = knscore__questionlistener_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSCore__QuestionListener::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knscore__questionlistener_eventfilter_isbase) {
            knscore__questionlistener_eventfilter_isbase = false;
            return KNSCore__QuestionListener::eventFilter(watched, event);
        } else if (knscore__questionlistener_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = knscore__questionlistener_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNSCore__QuestionListener::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knscore__questionlistener_timerevent_isbase) {
            knscore__questionlistener_timerevent_isbase = false;
            KNSCore__QuestionListener::timerEvent(event);
        } else if (knscore__questionlistener_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            knscore__questionlistener_timerevent_callback(this, cbval1);
        } else {
            KNSCore__QuestionListener::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knscore__questionlistener_childevent_isbase) {
            knscore__questionlistener_childevent_isbase = false;
            KNSCore__QuestionListener::childEvent(event);
        } else if (knscore__questionlistener_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            knscore__questionlistener_childevent_callback(this, cbval1);
        } else {
            KNSCore__QuestionListener::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knscore__questionlistener_customevent_isbase) {
            knscore__questionlistener_customevent_isbase = false;
            KNSCore__QuestionListener::customEvent(event);
        } else if (knscore__questionlistener_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knscore__questionlistener_customevent_callback(this, cbval1);
        } else {
            KNSCore__QuestionListener::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knscore__questionlistener_connectnotify_isbase) {
            knscore__questionlistener_connectnotify_isbase = false;
            KNSCore__QuestionListener::connectNotify(signal);
        } else if (knscore__questionlistener_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knscore__questionlistener_connectnotify_callback(this, cbval1);
        } else {
            KNSCore__QuestionListener::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knscore__questionlistener_disconnectnotify_isbase) {
            knscore__questionlistener_disconnectnotify_isbase = false;
            KNSCore__QuestionListener::disconnectNotify(signal);
        } else if (knscore__questionlistener_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knscore__questionlistener_disconnectnotify_callback(this, cbval1);
        } else {
            KNSCore__QuestionListener::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knscore__questionlistener_sender_isbase) {
            knscore__questionlistener_sender_isbase = false;
            return KNSCore__QuestionListener::sender();
        } else if (knscore__questionlistener_sender_callback != nullptr) {
            QObject* callback_ret = knscore__questionlistener_sender_callback();
            return callback_ret;
        } else {
            return KNSCore__QuestionListener::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knscore__questionlistener_sendersignalindex_isbase) {
            knscore__questionlistener_sendersignalindex_isbase = false;
            return KNSCore__QuestionListener::senderSignalIndex();
        } else if (knscore__questionlistener_sendersignalindex_callback != nullptr) {
            int callback_ret = knscore__questionlistener_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNSCore__QuestionListener::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knscore__questionlistener_receivers_isbase) {
            knscore__questionlistener_receivers_isbase = false;
            return KNSCore__QuestionListener::receivers(signal);
        } else if (knscore__questionlistener_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = knscore__questionlistener_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNSCore__QuestionListener::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knscore__questionlistener_issignalconnected_isbase) {
            knscore__questionlistener_issignalconnected_isbase = false;
            return KNSCore__QuestionListener::isSignalConnected(signal);
        } else if (knscore__questionlistener_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = knscore__questionlistener_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSCore__QuestionListener::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KNSCore__QuestionListener_TimerEvent(KNSCore::QuestionListener* self, QTimerEvent* event);
    friend void KNSCore__QuestionListener_QBaseTimerEvent(KNSCore::QuestionListener* self, QTimerEvent* event);
    friend void KNSCore__QuestionListener_ChildEvent(KNSCore::QuestionListener* self, QChildEvent* event);
    friend void KNSCore__QuestionListener_QBaseChildEvent(KNSCore::QuestionListener* self, QChildEvent* event);
    friend void KNSCore__QuestionListener_CustomEvent(KNSCore::QuestionListener* self, QEvent* event);
    friend void KNSCore__QuestionListener_QBaseCustomEvent(KNSCore::QuestionListener* self, QEvent* event);
    friend void KNSCore__QuestionListener_ConnectNotify(KNSCore::QuestionListener* self, const QMetaMethod* signal);
    friend void KNSCore__QuestionListener_QBaseConnectNotify(KNSCore::QuestionListener* self, const QMetaMethod* signal);
    friend void KNSCore__QuestionListener_DisconnectNotify(KNSCore::QuestionListener* self, const QMetaMethod* signal);
    friend void KNSCore__QuestionListener_QBaseDisconnectNotify(KNSCore::QuestionListener* self, const QMetaMethod* signal);
    friend QObject* KNSCore__QuestionListener_Sender(const KNSCore::QuestionListener* self);
    friend QObject* KNSCore__QuestionListener_QBaseSender(const KNSCore::QuestionListener* self);
    friend int KNSCore__QuestionListener_SenderSignalIndex(const KNSCore::QuestionListener* self);
    friend int KNSCore__QuestionListener_QBaseSenderSignalIndex(const KNSCore::QuestionListener* self);
    friend int KNSCore__QuestionListener_Receivers(const KNSCore::QuestionListener* self, const char* signal);
    friend int KNSCore__QuestionListener_QBaseReceivers(const KNSCore::QuestionListener* self, const char* signal);
    friend bool KNSCore__QuestionListener_IsSignalConnected(const KNSCore::QuestionListener* self, const QMetaMethod* signal);
    friend bool KNSCore__QuestionListener_QBaseIsSignalConnected(const KNSCore::QuestionListener* self, const QMetaMethod* signal);
};

#endif
