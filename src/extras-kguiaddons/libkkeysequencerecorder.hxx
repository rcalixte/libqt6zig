#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKKEYSEQUENCERECORDER_H
#define SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKKEYSEQUENCERECORDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KKeySequenceRecorder so that we can call protected methods
class VirtualKKeySequenceRecorder final : public KKeySequenceRecorder {

  public:
    // Virtual class boolean flag
    bool isVirtualKKeySequenceRecorder = true;

    // Virtual class public types (including callbacks)
    using KKeySequenceRecorder_Metacall_Callback = int (*)(KKeySequenceRecorder*, int, int, void**);
    using KKeySequenceRecorder_Event_Callback = bool (*)(KKeySequenceRecorder*, QEvent*);
    using KKeySequenceRecorder_EventFilter_Callback = bool (*)(KKeySequenceRecorder*, QObject*, QEvent*);
    using KKeySequenceRecorder_TimerEvent_Callback = void (*)(KKeySequenceRecorder*, QTimerEvent*);
    using KKeySequenceRecorder_ChildEvent_Callback = void (*)(KKeySequenceRecorder*, QChildEvent*);
    using KKeySequenceRecorder_CustomEvent_Callback = void (*)(KKeySequenceRecorder*, QEvent*);
    using KKeySequenceRecorder_ConnectNotify_Callback = void (*)(KKeySequenceRecorder*, QMetaMethod*);
    using KKeySequenceRecorder_DisconnectNotify_Callback = void (*)(KKeySequenceRecorder*, QMetaMethod*);
    using KKeySequenceRecorder_Sender_Callback = QObject* (*)();
    using KKeySequenceRecorder_SenderSignalIndex_Callback = int (*)();
    using KKeySequenceRecorder_Receivers_Callback = int (*)(const KKeySequenceRecorder*, const char*);
    using KKeySequenceRecorder_IsSignalConnected_Callback = bool (*)(const KKeySequenceRecorder*, QMetaMethod*);

  protected:
    // Instance callback storage
    KKeySequenceRecorder_Metacall_Callback kkeysequencerecorder_metacall_callback = nullptr;
    KKeySequenceRecorder_Event_Callback kkeysequencerecorder_event_callback = nullptr;
    KKeySequenceRecorder_EventFilter_Callback kkeysequencerecorder_eventfilter_callback = nullptr;
    KKeySequenceRecorder_TimerEvent_Callback kkeysequencerecorder_timerevent_callback = nullptr;
    KKeySequenceRecorder_ChildEvent_Callback kkeysequencerecorder_childevent_callback = nullptr;
    KKeySequenceRecorder_CustomEvent_Callback kkeysequencerecorder_customevent_callback = nullptr;
    KKeySequenceRecorder_ConnectNotify_Callback kkeysequencerecorder_connectnotify_callback = nullptr;
    KKeySequenceRecorder_DisconnectNotify_Callback kkeysequencerecorder_disconnectnotify_callback = nullptr;
    KKeySequenceRecorder_Sender_Callback kkeysequencerecorder_sender_callback = nullptr;
    KKeySequenceRecorder_SenderSignalIndex_Callback kkeysequencerecorder_sendersignalindex_callback = nullptr;
    KKeySequenceRecorder_Receivers_Callback kkeysequencerecorder_receivers_callback = nullptr;
    KKeySequenceRecorder_IsSignalConnected_Callback kkeysequencerecorder_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kkeysequencerecorder_metacall_isbase = false;
    mutable bool kkeysequencerecorder_event_isbase = false;
    mutable bool kkeysequencerecorder_eventfilter_isbase = false;
    mutable bool kkeysequencerecorder_timerevent_isbase = false;
    mutable bool kkeysequencerecorder_childevent_isbase = false;
    mutable bool kkeysequencerecorder_customevent_isbase = false;
    mutable bool kkeysequencerecorder_connectnotify_isbase = false;
    mutable bool kkeysequencerecorder_disconnectnotify_isbase = false;
    mutable bool kkeysequencerecorder_sender_isbase = false;
    mutable bool kkeysequencerecorder_sendersignalindex_isbase = false;
    mutable bool kkeysequencerecorder_receivers_isbase = false;
    mutable bool kkeysequencerecorder_issignalconnected_isbase = false;

  public:
    VirtualKKeySequenceRecorder(QWindow* window) : KKeySequenceRecorder(window) {};
    VirtualKKeySequenceRecorder(QWindow* window, QObject* parent) : KKeySequenceRecorder(window, parent) {};

    ~VirtualKKeySequenceRecorder() {
        kkeysequencerecorder_metacall_callback = nullptr;
        kkeysequencerecorder_event_callback = nullptr;
        kkeysequencerecorder_eventfilter_callback = nullptr;
        kkeysequencerecorder_timerevent_callback = nullptr;
        kkeysequencerecorder_childevent_callback = nullptr;
        kkeysequencerecorder_customevent_callback = nullptr;
        kkeysequencerecorder_connectnotify_callback = nullptr;
        kkeysequencerecorder_disconnectnotify_callback = nullptr;
        kkeysequencerecorder_sender_callback = nullptr;
        kkeysequencerecorder_sendersignalindex_callback = nullptr;
        kkeysequencerecorder_receivers_callback = nullptr;
        kkeysequencerecorder_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKKeySequenceRecorder_Metacall_Callback(KKeySequenceRecorder_Metacall_Callback cb) { kkeysequencerecorder_metacall_callback = cb; }
    inline void setKKeySequenceRecorder_Event_Callback(KKeySequenceRecorder_Event_Callback cb) { kkeysequencerecorder_event_callback = cb; }
    inline void setKKeySequenceRecorder_EventFilter_Callback(KKeySequenceRecorder_EventFilter_Callback cb) { kkeysequencerecorder_eventfilter_callback = cb; }
    inline void setKKeySequenceRecorder_TimerEvent_Callback(KKeySequenceRecorder_TimerEvent_Callback cb) { kkeysequencerecorder_timerevent_callback = cb; }
    inline void setKKeySequenceRecorder_ChildEvent_Callback(KKeySequenceRecorder_ChildEvent_Callback cb) { kkeysequencerecorder_childevent_callback = cb; }
    inline void setKKeySequenceRecorder_CustomEvent_Callback(KKeySequenceRecorder_CustomEvent_Callback cb) { kkeysequencerecorder_customevent_callback = cb; }
    inline void setKKeySequenceRecorder_ConnectNotify_Callback(KKeySequenceRecorder_ConnectNotify_Callback cb) { kkeysequencerecorder_connectnotify_callback = cb; }
    inline void setKKeySequenceRecorder_DisconnectNotify_Callback(KKeySequenceRecorder_DisconnectNotify_Callback cb) { kkeysequencerecorder_disconnectnotify_callback = cb; }
    inline void setKKeySequenceRecorder_Sender_Callback(KKeySequenceRecorder_Sender_Callback cb) { kkeysequencerecorder_sender_callback = cb; }
    inline void setKKeySequenceRecorder_SenderSignalIndex_Callback(KKeySequenceRecorder_SenderSignalIndex_Callback cb) { kkeysequencerecorder_sendersignalindex_callback = cb; }
    inline void setKKeySequenceRecorder_Receivers_Callback(KKeySequenceRecorder_Receivers_Callback cb) { kkeysequencerecorder_receivers_callback = cb; }
    inline void setKKeySequenceRecorder_IsSignalConnected_Callback(KKeySequenceRecorder_IsSignalConnected_Callback cb) { kkeysequencerecorder_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKKeySequenceRecorder_Metacall_IsBase(bool value) const { kkeysequencerecorder_metacall_isbase = value; }
    inline void setKKeySequenceRecorder_Event_IsBase(bool value) const { kkeysequencerecorder_event_isbase = value; }
    inline void setKKeySequenceRecorder_EventFilter_IsBase(bool value) const { kkeysequencerecorder_eventfilter_isbase = value; }
    inline void setKKeySequenceRecorder_TimerEvent_IsBase(bool value) const { kkeysequencerecorder_timerevent_isbase = value; }
    inline void setKKeySequenceRecorder_ChildEvent_IsBase(bool value) const { kkeysequencerecorder_childevent_isbase = value; }
    inline void setKKeySequenceRecorder_CustomEvent_IsBase(bool value) const { kkeysequencerecorder_customevent_isbase = value; }
    inline void setKKeySequenceRecorder_ConnectNotify_IsBase(bool value) const { kkeysequencerecorder_connectnotify_isbase = value; }
    inline void setKKeySequenceRecorder_DisconnectNotify_IsBase(bool value) const { kkeysequencerecorder_disconnectnotify_isbase = value; }
    inline void setKKeySequenceRecorder_Sender_IsBase(bool value) const { kkeysequencerecorder_sender_isbase = value; }
    inline void setKKeySequenceRecorder_SenderSignalIndex_IsBase(bool value) const { kkeysequencerecorder_sendersignalindex_isbase = value; }
    inline void setKKeySequenceRecorder_Receivers_IsBase(bool value) const { kkeysequencerecorder_receivers_isbase = value; }
    inline void setKKeySequenceRecorder_IsSignalConnected_IsBase(bool value) const { kkeysequencerecorder_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kkeysequencerecorder_metacall_isbase) {
            kkeysequencerecorder_metacall_isbase = false;
            return KKeySequenceRecorder::qt_metacall(param1, param2, param3);
        } else if (kkeysequencerecorder_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kkeysequencerecorder_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KKeySequenceRecorder::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kkeysequencerecorder_event_isbase) {
            kkeysequencerecorder_event_isbase = false;
            return KKeySequenceRecorder::event(event);
        } else if (kkeysequencerecorder_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kkeysequencerecorder_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KKeySequenceRecorder::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kkeysequencerecorder_eventfilter_isbase) {
            kkeysequencerecorder_eventfilter_isbase = false;
            return KKeySequenceRecorder::eventFilter(watched, event);
        } else if (kkeysequencerecorder_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kkeysequencerecorder_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KKeySequenceRecorder::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kkeysequencerecorder_timerevent_isbase) {
            kkeysequencerecorder_timerevent_isbase = false;
            KKeySequenceRecorder::timerEvent(event);
        } else if (kkeysequencerecorder_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kkeysequencerecorder_timerevent_callback(this, cbval1);
        } else {
            KKeySequenceRecorder::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kkeysequencerecorder_childevent_isbase) {
            kkeysequencerecorder_childevent_isbase = false;
            KKeySequenceRecorder::childEvent(event);
        } else if (kkeysequencerecorder_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kkeysequencerecorder_childevent_callback(this, cbval1);
        } else {
            KKeySequenceRecorder::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kkeysequencerecorder_customevent_isbase) {
            kkeysequencerecorder_customevent_isbase = false;
            KKeySequenceRecorder::customEvent(event);
        } else if (kkeysequencerecorder_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kkeysequencerecorder_customevent_callback(this, cbval1);
        } else {
            KKeySequenceRecorder::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kkeysequencerecorder_connectnotify_isbase) {
            kkeysequencerecorder_connectnotify_isbase = false;
            KKeySequenceRecorder::connectNotify(signal);
        } else if (kkeysequencerecorder_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kkeysequencerecorder_connectnotify_callback(this, cbval1);
        } else {
            KKeySequenceRecorder::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kkeysequencerecorder_disconnectnotify_isbase) {
            kkeysequencerecorder_disconnectnotify_isbase = false;
            KKeySequenceRecorder::disconnectNotify(signal);
        } else if (kkeysequencerecorder_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kkeysequencerecorder_disconnectnotify_callback(this, cbval1);
        } else {
            KKeySequenceRecorder::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kkeysequencerecorder_sender_isbase) {
            kkeysequencerecorder_sender_isbase = false;
            return KKeySequenceRecorder::sender();
        } else if (kkeysequencerecorder_sender_callback != nullptr) {
            QObject* callback_ret = kkeysequencerecorder_sender_callback();
            return callback_ret;
        } else {
            return KKeySequenceRecorder::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kkeysequencerecorder_sendersignalindex_isbase) {
            kkeysequencerecorder_sendersignalindex_isbase = false;
            return KKeySequenceRecorder::senderSignalIndex();
        } else if (kkeysequencerecorder_sendersignalindex_callback != nullptr) {
            int callback_ret = kkeysequencerecorder_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KKeySequenceRecorder::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kkeysequencerecorder_receivers_isbase) {
            kkeysequencerecorder_receivers_isbase = false;
            return KKeySequenceRecorder::receivers(signal);
        } else if (kkeysequencerecorder_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kkeysequencerecorder_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KKeySequenceRecorder::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kkeysequencerecorder_issignalconnected_isbase) {
            kkeysequencerecorder_issignalconnected_isbase = false;
            return KKeySequenceRecorder::isSignalConnected(signal);
        } else if (kkeysequencerecorder_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kkeysequencerecorder_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KKeySequenceRecorder::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KKeySequenceRecorder_TimerEvent(KKeySequenceRecorder* self, QTimerEvent* event);
    friend void KKeySequenceRecorder_QBaseTimerEvent(KKeySequenceRecorder* self, QTimerEvent* event);
    friend void KKeySequenceRecorder_ChildEvent(KKeySequenceRecorder* self, QChildEvent* event);
    friend void KKeySequenceRecorder_QBaseChildEvent(KKeySequenceRecorder* self, QChildEvent* event);
    friend void KKeySequenceRecorder_CustomEvent(KKeySequenceRecorder* self, QEvent* event);
    friend void KKeySequenceRecorder_QBaseCustomEvent(KKeySequenceRecorder* self, QEvent* event);
    friend void KKeySequenceRecorder_ConnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal);
    friend void KKeySequenceRecorder_QBaseConnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal);
    friend void KKeySequenceRecorder_DisconnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal);
    friend void KKeySequenceRecorder_QBaseDisconnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal);
    friend QObject* KKeySequenceRecorder_Sender(const KKeySequenceRecorder* self);
    friend QObject* KKeySequenceRecorder_QBaseSender(const KKeySequenceRecorder* self);
    friend int KKeySequenceRecorder_SenderSignalIndex(const KKeySequenceRecorder* self);
    friend int KKeySequenceRecorder_QBaseSenderSignalIndex(const KKeySequenceRecorder* self);
    friend int KKeySequenceRecorder_Receivers(const KKeySequenceRecorder* self, const char* signal);
    friend int KKeySequenceRecorder_QBaseReceivers(const KKeySequenceRecorder* self, const char* signal);
    friend bool KKeySequenceRecorder_IsSignalConnected(const KKeySequenceRecorder* self, const QMetaMethod* signal);
    friend bool KKeySequenceRecorder_QBaseIsSignalConnected(const KKeySequenceRecorder* self, const QMetaMethod* signal);
};

#endif
