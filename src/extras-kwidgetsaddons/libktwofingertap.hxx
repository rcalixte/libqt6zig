#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTWOFINGERTAP_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTWOFINGERTAP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTwoFingerTap so that we can call protected methods
class VirtualKTwoFingerTap final : public KTwoFingerTap {

  public:
    // Virtual class boolean flag
    bool isVirtualKTwoFingerTap = true;

    // Virtual class public types (including callbacks)
    using KTwoFingerTap_Metacall_Callback = int (*)(KTwoFingerTap*, int, int, void**);
    using KTwoFingerTap_Event_Callback = bool (*)(KTwoFingerTap*, QEvent*);
    using KTwoFingerTap_EventFilter_Callback = bool (*)(KTwoFingerTap*, QObject*, QEvent*);
    using KTwoFingerTap_TimerEvent_Callback = void (*)(KTwoFingerTap*, QTimerEvent*);
    using KTwoFingerTap_ChildEvent_Callback = void (*)(KTwoFingerTap*, QChildEvent*);
    using KTwoFingerTap_CustomEvent_Callback = void (*)(KTwoFingerTap*, QEvent*);
    using KTwoFingerTap_ConnectNotify_Callback = void (*)(KTwoFingerTap*, QMetaMethod*);
    using KTwoFingerTap_DisconnectNotify_Callback = void (*)(KTwoFingerTap*, QMetaMethod*);
    using KTwoFingerTap_Sender_Callback = QObject* (*)();
    using KTwoFingerTap_SenderSignalIndex_Callback = int (*)();
    using KTwoFingerTap_Receivers_Callback = int (*)(const KTwoFingerTap*, const char*);
    using KTwoFingerTap_IsSignalConnected_Callback = bool (*)(const KTwoFingerTap*, QMetaMethod*);

  protected:
    // Instance callback storage
    KTwoFingerTap_Metacall_Callback ktwofingertap_metacall_callback = nullptr;
    KTwoFingerTap_Event_Callback ktwofingertap_event_callback = nullptr;
    KTwoFingerTap_EventFilter_Callback ktwofingertap_eventfilter_callback = nullptr;
    KTwoFingerTap_TimerEvent_Callback ktwofingertap_timerevent_callback = nullptr;
    KTwoFingerTap_ChildEvent_Callback ktwofingertap_childevent_callback = nullptr;
    KTwoFingerTap_CustomEvent_Callback ktwofingertap_customevent_callback = nullptr;
    KTwoFingerTap_ConnectNotify_Callback ktwofingertap_connectnotify_callback = nullptr;
    KTwoFingerTap_DisconnectNotify_Callback ktwofingertap_disconnectnotify_callback = nullptr;
    KTwoFingerTap_Sender_Callback ktwofingertap_sender_callback = nullptr;
    KTwoFingerTap_SenderSignalIndex_Callback ktwofingertap_sendersignalindex_callback = nullptr;
    KTwoFingerTap_Receivers_Callback ktwofingertap_receivers_callback = nullptr;
    KTwoFingerTap_IsSignalConnected_Callback ktwofingertap_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktwofingertap_metacall_isbase = false;
    mutable bool ktwofingertap_event_isbase = false;
    mutable bool ktwofingertap_eventfilter_isbase = false;
    mutable bool ktwofingertap_timerevent_isbase = false;
    mutable bool ktwofingertap_childevent_isbase = false;
    mutable bool ktwofingertap_customevent_isbase = false;
    mutable bool ktwofingertap_connectnotify_isbase = false;
    mutable bool ktwofingertap_disconnectnotify_isbase = false;
    mutable bool ktwofingertap_sender_isbase = false;
    mutable bool ktwofingertap_sendersignalindex_isbase = false;
    mutable bool ktwofingertap_receivers_isbase = false;
    mutable bool ktwofingertap_issignalconnected_isbase = false;

  public:
    VirtualKTwoFingerTap() : KTwoFingerTap() {};
    VirtualKTwoFingerTap(QObject* parent) : KTwoFingerTap(parent) {};

    ~VirtualKTwoFingerTap() {
        ktwofingertap_metacall_callback = nullptr;
        ktwofingertap_event_callback = nullptr;
        ktwofingertap_eventfilter_callback = nullptr;
        ktwofingertap_timerevent_callback = nullptr;
        ktwofingertap_childevent_callback = nullptr;
        ktwofingertap_customevent_callback = nullptr;
        ktwofingertap_connectnotify_callback = nullptr;
        ktwofingertap_disconnectnotify_callback = nullptr;
        ktwofingertap_sender_callback = nullptr;
        ktwofingertap_sendersignalindex_callback = nullptr;
        ktwofingertap_receivers_callback = nullptr;
        ktwofingertap_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKTwoFingerTap_Metacall_Callback(KTwoFingerTap_Metacall_Callback cb) { ktwofingertap_metacall_callback = cb; }
    inline void setKTwoFingerTap_Event_Callback(KTwoFingerTap_Event_Callback cb) { ktwofingertap_event_callback = cb; }
    inline void setKTwoFingerTap_EventFilter_Callback(KTwoFingerTap_EventFilter_Callback cb) { ktwofingertap_eventfilter_callback = cb; }
    inline void setKTwoFingerTap_TimerEvent_Callback(KTwoFingerTap_TimerEvent_Callback cb) { ktwofingertap_timerevent_callback = cb; }
    inline void setKTwoFingerTap_ChildEvent_Callback(KTwoFingerTap_ChildEvent_Callback cb) { ktwofingertap_childevent_callback = cb; }
    inline void setKTwoFingerTap_CustomEvent_Callback(KTwoFingerTap_CustomEvent_Callback cb) { ktwofingertap_customevent_callback = cb; }
    inline void setKTwoFingerTap_ConnectNotify_Callback(KTwoFingerTap_ConnectNotify_Callback cb) { ktwofingertap_connectnotify_callback = cb; }
    inline void setKTwoFingerTap_DisconnectNotify_Callback(KTwoFingerTap_DisconnectNotify_Callback cb) { ktwofingertap_disconnectnotify_callback = cb; }
    inline void setKTwoFingerTap_Sender_Callback(KTwoFingerTap_Sender_Callback cb) { ktwofingertap_sender_callback = cb; }
    inline void setKTwoFingerTap_SenderSignalIndex_Callback(KTwoFingerTap_SenderSignalIndex_Callback cb) { ktwofingertap_sendersignalindex_callback = cb; }
    inline void setKTwoFingerTap_Receivers_Callback(KTwoFingerTap_Receivers_Callback cb) { ktwofingertap_receivers_callback = cb; }
    inline void setKTwoFingerTap_IsSignalConnected_Callback(KTwoFingerTap_IsSignalConnected_Callback cb) { ktwofingertap_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKTwoFingerTap_Metacall_IsBase(bool value) const { ktwofingertap_metacall_isbase = value; }
    inline void setKTwoFingerTap_Event_IsBase(bool value) const { ktwofingertap_event_isbase = value; }
    inline void setKTwoFingerTap_EventFilter_IsBase(bool value) const { ktwofingertap_eventfilter_isbase = value; }
    inline void setKTwoFingerTap_TimerEvent_IsBase(bool value) const { ktwofingertap_timerevent_isbase = value; }
    inline void setKTwoFingerTap_ChildEvent_IsBase(bool value) const { ktwofingertap_childevent_isbase = value; }
    inline void setKTwoFingerTap_CustomEvent_IsBase(bool value) const { ktwofingertap_customevent_isbase = value; }
    inline void setKTwoFingerTap_ConnectNotify_IsBase(bool value) const { ktwofingertap_connectnotify_isbase = value; }
    inline void setKTwoFingerTap_DisconnectNotify_IsBase(bool value) const { ktwofingertap_disconnectnotify_isbase = value; }
    inline void setKTwoFingerTap_Sender_IsBase(bool value) const { ktwofingertap_sender_isbase = value; }
    inline void setKTwoFingerTap_SenderSignalIndex_IsBase(bool value) const { ktwofingertap_sendersignalindex_isbase = value; }
    inline void setKTwoFingerTap_Receivers_IsBase(bool value) const { ktwofingertap_receivers_isbase = value; }
    inline void setKTwoFingerTap_IsSignalConnected_IsBase(bool value) const { ktwofingertap_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktwofingertap_metacall_isbase) {
            ktwofingertap_metacall_isbase = false;
            return KTwoFingerTap::qt_metacall(param1, param2, param3);
        } else if (ktwofingertap_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktwofingertap_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTwoFingerTap::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktwofingertap_event_isbase) {
            ktwofingertap_event_isbase = false;
            return KTwoFingerTap::event(event);
        } else if (ktwofingertap_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktwofingertap_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTwoFingerTap::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktwofingertap_eventfilter_isbase) {
            ktwofingertap_eventfilter_isbase = false;
            return KTwoFingerTap::eventFilter(watched, event);
        } else if (ktwofingertap_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktwofingertap_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTwoFingerTap::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktwofingertap_timerevent_isbase) {
            ktwofingertap_timerevent_isbase = false;
            KTwoFingerTap::timerEvent(event);
        } else if (ktwofingertap_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktwofingertap_timerevent_callback(this, cbval1);
        } else {
            KTwoFingerTap::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktwofingertap_childevent_isbase) {
            ktwofingertap_childevent_isbase = false;
            KTwoFingerTap::childEvent(event);
        } else if (ktwofingertap_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktwofingertap_childevent_callback(this, cbval1);
        } else {
            KTwoFingerTap::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktwofingertap_customevent_isbase) {
            ktwofingertap_customevent_isbase = false;
            KTwoFingerTap::customEvent(event);
        } else if (ktwofingertap_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktwofingertap_customevent_callback(this, cbval1);
        } else {
            KTwoFingerTap::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktwofingertap_connectnotify_isbase) {
            ktwofingertap_connectnotify_isbase = false;
            KTwoFingerTap::connectNotify(signal);
        } else if (ktwofingertap_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktwofingertap_connectnotify_callback(this, cbval1);
        } else {
            KTwoFingerTap::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktwofingertap_disconnectnotify_isbase) {
            ktwofingertap_disconnectnotify_isbase = false;
            KTwoFingerTap::disconnectNotify(signal);
        } else if (ktwofingertap_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktwofingertap_disconnectnotify_callback(this, cbval1);
        } else {
            KTwoFingerTap::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktwofingertap_sender_isbase) {
            ktwofingertap_sender_isbase = false;
            return KTwoFingerTap::sender();
        } else if (ktwofingertap_sender_callback != nullptr) {
            QObject* callback_ret = ktwofingertap_sender_callback();
            return callback_ret;
        } else {
            return KTwoFingerTap::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktwofingertap_sendersignalindex_isbase) {
            ktwofingertap_sendersignalindex_isbase = false;
            return KTwoFingerTap::senderSignalIndex();
        } else if (ktwofingertap_sendersignalindex_callback != nullptr) {
            int callback_ret = ktwofingertap_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTwoFingerTap::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktwofingertap_receivers_isbase) {
            ktwofingertap_receivers_isbase = false;
            return KTwoFingerTap::receivers(signal);
        } else if (ktwofingertap_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktwofingertap_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTwoFingerTap::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktwofingertap_issignalconnected_isbase) {
            ktwofingertap_issignalconnected_isbase = false;
            return KTwoFingerTap::isSignalConnected(signal);
        } else if (ktwofingertap_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktwofingertap_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTwoFingerTap::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KTwoFingerTap_TimerEvent(KTwoFingerTap* self, QTimerEvent* event);
    friend void KTwoFingerTap_QBaseTimerEvent(KTwoFingerTap* self, QTimerEvent* event);
    friend void KTwoFingerTap_ChildEvent(KTwoFingerTap* self, QChildEvent* event);
    friend void KTwoFingerTap_QBaseChildEvent(KTwoFingerTap* self, QChildEvent* event);
    friend void KTwoFingerTap_CustomEvent(KTwoFingerTap* self, QEvent* event);
    friend void KTwoFingerTap_QBaseCustomEvent(KTwoFingerTap* self, QEvent* event);
    friend void KTwoFingerTap_ConnectNotify(KTwoFingerTap* self, const QMetaMethod* signal);
    friend void KTwoFingerTap_QBaseConnectNotify(KTwoFingerTap* self, const QMetaMethod* signal);
    friend void KTwoFingerTap_DisconnectNotify(KTwoFingerTap* self, const QMetaMethod* signal);
    friend void KTwoFingerTap_QBaseDisconnectNotify(KTwoFingerTap* self, const QMetaMethod* signal);
    friend QObject* KTwoFingerTap_Sender(const KTwoFingerTap* self);
    friend QObject* KTwoFingerTap_QBaseSender(const KTwoFingerTap* self);
    friend int KTwoFingerTap_SenderSignalIndex(const KTwoFingerTap* self);
    friend int KTwoFingerTap_QBaseSenderSignalIndex(const KTwoFingerTap* self);
    friend int KTwoFingerTap_Receivers(const KTwoFingerTap* self, const char* signal);
    friend int KTwoFingerTap_QBaseReceivers(const KTwoFingerTap* self, const char* signal);
    friend bool KTwoFingerTap_IsSignalConnected(const KTwoFingerTap* self, const QMetaMethod* signal);
    friend bool KTwoFingerTap_QBaseIsSignalConnected(const KTwoFingerTap* self, const QMetaMethod* signal);
};

// This class is a subclass of KTwoFingerTapRecognizer so that we can call protected methods
class VirtualKTwoFingerTapRecognizer final : public KTwoFingerTapRecognizer {

  public:
    // Virtual class boolean flag
    bool isVirtualKTwoFingerTapRecognizer = true;

    // Virtual class public types (including callbacks)
    using KTwoFingerTapRecognizer_Create_Callback = QGesture* (*)(KTwoFingerTapRecognizer*, QObject*);
    using KTwoFingerTapRecognizer_Recognize_Callback = int (*)(KTwoFingerTapRecognizer*, QGesture*, QObject*, QEvent*);
    using KTwoFingerTapRecognizer_Reset_Callback = void (*)(KTwoFingerTapRecognizer*, QGesture*);

  protected:
    // Instance callback storage
    KTwoFingerTapRecognizer_Create_Callback ktwofingertaprecognizer_create_callback = nullptr;
    KTwoFingerTapRecognizer_Recognize_Callback ktwofingertaprecognizer_recognize_callback = nullptr;
    KTwoFingerTapRecognizer_Reset_Callback ktwofingertaprecognizer_reset_callback = nullptr;

    // Instance base flags
    mutable bool ktwofingertaprecognizer_create_isbase = false;
    mutable bool ktwofingertaprecognizer_recognize_isbase = false;
    mutable bool ktwofingertaprecognizer_reset_isbase = false;

  public:
    VirtualKTwoFingerTapRecognizer() : KTwoFingerTapRecognizer() {};

    ~VirtualKTwoFingerTapRecognizer() {
        ktwofingertaprecognizer_create_callback = nullptr;
        ktwofingertaprecognizer_recognize_callback = nullptr;
        ktwofingertaprecognizer_reset_callback = nullptr;
    }

    // Callback setters
    inline void setKTwoFingerTapRecognizer_Create_Callback(KTwoFingerTapRecognizer_Create_Callback cb) { ktwofingertaprecognizer_create_callback = cb; }
    inline void setKTwoFingerTapRecognizer_Recognize_Callback(KTwoFingerTapRecognizer_Recognize_Callback cb) { ktwofingertaprecognizer_recognize_callback = cb; }
    inline void setKTwoFingerTapRecognizer_Reset_Callback(KTwoFingerTapRecognizer_Reset_Callback cb) { ktwofingertaprecognizer_reset_callback = cb; }

    // Base flag setters
    inline void setKTwoFingerTapRecognizer_Create_IsBase(bool value) const { ktwofingertaprecognizer_create_isbase = value; }
    inline void setKTwoFingerTapRecognizer_Recognize_IsBase(bool value) const { ktwofingertaprecognizer_recognize_isbase = value; }
    inline void setKTwoFingerTapRecognizer_Reset_IsBase(bool value) const { ktwofingertaprecognizer_reset_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QGesture* create(QObject* target) override {
        if (ktwofingertaprecognizer_create_isbase) {
            ktwofingertaprecognizer_create_isbase = false;
            return KTwoFingerTapRecognizer::create(target);
        } else if (ktwofingertaprecognizer_create_callback != nullptr) {
            QObject* cbval1 = target;

            QGesture* callback_ret = ktwofingertaprecognizer_create_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTwoFingerTapRecognizer::create(target);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGestureRecognizer::Result recognize(QGesture* gesture, QObject* watched, QEvent* event) override {
        if (ktwofingertaprecognizer_recognize_isbase) {
            ktwofingertaprecognizer_recognize_isbase = false;
            return KTwoFingerTapRecognizer::recognize(gesture, watched, event);
        } else if (ktwofingertaprecognizer_recognize_callback != nullptr) {
            QGesture* cbval1 = gesture;
            QObject* cbval2 = watched;
            QEvent* cbval3 = event;

            int callback_ret = ktwofingertaprecognizer_recognize_callback(this, cbval1, cbval2, cbval3);
            return static_cast<QGestureRecognizer::Result>(callback_ret);
        } else {
            return KTwoFingerTapRecognizer::recognize(gesture, watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset(QGesture* state) override {
        if (ktwofingertaprecognizer_reset_isbase) {
            ktwofingertaprecognizer_reset_isbase = false;
            KTwoFingerTapRecognizer::reset(state);
        } else if (ktwofingertaprecognizer_reset_callback != nullptr) {
            QGesture* cbval1 = state;

            ktwofingertaprecognizer_reset_callback(this, cbval1);
        } else {
            KTwoFingerTapRecognizer::reset(state);
        }
    }
};

#endif
