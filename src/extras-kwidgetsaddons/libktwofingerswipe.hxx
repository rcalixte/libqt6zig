#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTWOFINGERSWIPE_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTWOFINGERSWIPE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTwoFingerSwipe so that we can call protected methods
class VirtualKTwoFingerSwipe final : public KTwoFingerSwipe {

  public:
    // Virtual class boolean flag
    bool isVirtualKTwoFingerSwipe = true;

    // Virtual class public types (including callbacks)
    using KTwoFingerSwipe_Metacall_Callback = int (*)(KTwoFingerSwipe*, int, int, void**);
    using KTwoFingerSwipe_Event_Callback = bool (*)(KTwoFingerSwipe*, QEvent*);
    using KTwoFingerSwipe_EventFilter_Callback = bool (*)(KTwoFingerSwipe*, QObject*, QEvent*);
    using KTwoFingerSwipe_TimerEvent_Callback = void (*)(KTwoFingerSwipe*, QTimerEvent*);
    using KTwoFingerSwipe_ChildEvent_Callback = void (*)(KTwoFingerSwipe*, QChildEvent*);
    using KTwoFingerSwipe_CustomEvent_Callback = void (*)(KTwoFingerSwipe*, QEvent*);
    using KTwoFingerSwipe_ConnectNotify_Callback = void (*)(KTwoFingerSwipe*, QMetaMethod*);
    using KTwoFingerSwipe_DisconnectNotify_Callback = void (*)(KTwoFingerSwipe*, QMetaMethod*);
    using KTwoFingerSwipe_Sender_Callback = QObject* (*)();
    using KTwoFingerSwipe_SenderSignalIndex_Callback = int (*)();
    using KTwoFingerSwipe_Receivers_Callback = int (*)(const KTwoFingerSwipe*, const char*);
    using KTwoFingerSwipe_IsSignalConnected_Callback = bool (*)(const KTwoFingerSwipe*, QMetaMethod*);

  protected:
    // Instance callback storage
    KTwoFingerSwipe_Metacall_Callback ktwofingerswipe_metacall_callback = nullptr;
    KTwoFingerSwipe_Event_Callback ktwofingerswipe_event_callback = nullptr;
    KTwoFingerSwipe_EventFilter_Callback ktwofingerswipe_eventfilter_callback = nullptr;
    KTwoFingerSwipe_TimerEvent_Callback ktwofingerswipe_timerevent_callback = nullptr;
    KTwoFingerSwipe_ChildEvent_Callback ktwofingerswipe_childevent_callback = nullptr;
    KTwoFingerSwipe_CustomEvent_Callback ktwofingerswipe_customevent_callback = nullptr;
    KTwoFingerSwipe_ConnectNotify_Callback ktwofingerswipe_connectnotify_callback = nullptr;
    KTwoFingerSwipe_DisconnectNotify_Callback ktwofingerswipe_disconnectnotify_callback = nullptr;
    KTwoFingerSwipe_Sender_Callback ktwofingerswipe_sender_callback = nullptr;
    KTwoFingerSwipe_SenderSignalIndex_Callback ktwofingerswipe_sendersignalindex_callback = nullptr;
    KTwoFingerSwipe_Receivers_Callback ktwofingerswipe_receivers_callback = nullptr;
    KTwoFingerSwipe_IsSignalConnected_Callback ktwofingerswipe_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktwofingerswipe_metacall_isbase = false;
    mutable bool ktwofingerswipe_event_isbase = false;
    mutable bool ktwofingerswipe_eventfilter_isbase = false;
    mutable bool ktwofingerswipe_timerevent_isbase = false;
    mutable bool ktwofingerswipe_childevent_isbase = false;
    mutable bool ktwofingerswipe_customevent_isbase = false;
    mutable bool ktwofingerswipe_connectnotify_isbase = false;
    mutable bool ktwofingerswipe_disconnectnotify_isbase = false;
    mutable bool ktwofingerswipe_sender_isbase = false;
    mutable bool ktwofingerswipe_sendersignalindex_isbase = false;
    mutable bool ktwofingerswipe_receivers_isbase = false;
    mutable bool ktwofingerswipe_issignalconnected_isbase = false;

  public:
    VirtualKTwoFingerSwipe() : KTwoFingerSwipe() {};
    VirtualKTwoFingerSwipe(QObject* parent) : KTwoFingerSwipe(parent) {};

    ~VirtualKTwoFingerSwipe() {
        ktwofingerswipe_metacall_callback = nullptr;
        ktwofingerswipe_event_callback = nullptr;
        ktwofingerswipe_eventfilter_callback = nullptr;
        ktwofingerswipe_timerevent_callback = nullptr;
        ktwofingerswipe_childevent_callback = nullptr;
        ktwofingerswipe_customevent_callback = nullptr;
        ktwofingerswipe_connectnotify_callback = nullptr;
        ktwofingerswipe_disconnectnotify_callback = nullptr;
        ktwofingerswipe_sender_callback = nullptr;
        ktwofingerswipe_sendersignalindex_callback = nullptr;
        ktwofingerswipe_receivers_callback = nullptr;
        ktwofingerswipe_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKTwoFingerSwipe_Metacall_Callback(KTwoFingerSwipe_Metacall_Callback cb) { ktwofingerswipe_metacall_callback = cb; }
    inline void setKTwoFingerSwipe_Event_Callback(KTwoFingerSwipe_Event_Callback cb) { ktwofingerswipe_event_callback = cb; }
    inline void setKTwoFingerSwipe_EventFilter_Callback(KTwoFingerSwipe_EventFilter_Callback cb) { ktwofingerswipe_eventfilter_callback = cb; }
    inline void setKTwoFingerSwipe_TimerEvent_Callback(KTwoFingerSwipe_TimerEvent_Callback cb) { ktwofingerswipe_timerevent_callback = cb; }
    inline void setKTwoFingerSwipe_ChildEvent_Callback(KTwoFingerSwipe_ChildEvent_Callback cb) { ktwofingerswipe_childevent_callback = cb; }
    inline void setKTwoFingerSwipe_CustomEvent_Callback(KTwoFingerSwipe_CustomEvent_Callback cb) { ktwofingerswipe_customevent_callback = cb; }
    inline void setKTwoFingerSwipe_ConnectNotify_Callback(KTwoFingerSwipe_ConnectNotify_Callback cb) { ktwofingerswipe_connectnotify_callback = cb; }
    inline void setKTwoFingerSwipe_DisconnectNotify_Callback(KTwoFingerSwipe_DisconnectNotify_Callback cb) { ktwofingerswipe_disconnectnotify_callback = cb; }
    inline void setKTwoFingerSwipe_Sender_Callback(KTwoFingerSwipe_Sender_Callback cb) { ktwofingerswipe_sender_callback = cb; }
    inline void setKTwoFingerSwipe_SenderSignalIndex_Callback(KTwoFingerSwipe_SenderSignalIndex_Callback cb) { ktwofingerswipe_sendersignalindex_callback = cb; }
    inline void setKTwoFingerSwipe_Receivers_Callback(KTwoFingerSwipe_Receivers_Callback cb) { ktwofingerswipe_receivers_callback = cb; }
    inline void setKTwoFingerSwipe_IsSignalConnected_Callback(KTwoFingerSwipe_IsSignalConnected_Callback cb) { ktwofingerswipe_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKTwoFingerSwipe_Metacall_IsBase(bool value) const { ktwofingerswipe_metacall_isbase = value; }
    inline void setKTwoFingerSwipe_Event_IsBase(bool value) const { ktwofingerswipe_event_isbase = value; }
    inline void setKTwoFingerSwipe_EventFilter_IsBase(bool value) const { ktwofingerswipe_eventfilter_isbase = value; }
    inline void setKTwoFingerSwipe_TimerEvent_IsBase(bool value) const { ktwofingerswipe_timerevent_isbase = value; }
    inline void setKTwoFingerSwipe_ChildEvent_IsBase(bool value) const { ktwofingerswipe_childevent_isbase = value; }
    inline void setKTwoFingerSwipe_CustomEvent_IsBase(bool value) const { ktwofingerswipe_customevent_isbase = value; }
    inline void setKTwoFingerSwipe_ConnectNotify_IsBase(bool value) const { ktwofingerswipe_connectnotify_isbase = value; }
    inline void setKTwoFingerSwipe_DisconnectNotify_IsBase(bool value) const { ktwofingerswipe_disconnectnotify_isbase = value; }
    inline void setKTwoFingerSwipe_Sender_IsBase(bool value) const { ktwofingerswipe_sender_isbase = value; }
    inline void setKTwoFingerSwipe_SenderSignalIndex_IsBase(bool value) const { ktwofingerswipe_sendersignalindex_isbase = value; }
    inline void setKTwoFingerSwipe_Receivers_IsBase(bool value) const { ktwofingerswipe_receivers_isbase = value; }
    inline void setKTwoFingerSwipe_IsSignalConnected_IsBase(bool value) const { ktwofingerswipe_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktwofingerswipe_metacall_isbase) {
            ktwofingerswipe_metacall_isbase = false;
            return KTwoFingerSwipe::qt_metacall(param1, param2, param3);
        } else if (ktwofingerswipe_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktwofingerswipe_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTwoFingerSwipe::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktwofingerswipe_event_isbase) {
            ktwofingerswipe_event_isbase = false;
            return KTwoFingerSwipe::event(event);
        } else if (ktwofingerswipe_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktwofingerswipe_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTwoFingerSwipe::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktwofingerswipe_eventfilter_isbase) {
            ktwofingerswipe_eventfilter_isbase = false;
            return KTwoFingerSwipe::eventFilter(watched, event);
        } else if (ktwofingerswipe_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktwofingerswipe_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTwoFingerSwipe::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktwofingerswipe_timerevent_isbase) {
            ktwofingerswipe_timerevent_isbase = false;
            KTwoFingerSwipe::timerEvent(event);
        } else if (ktwofingerswipe_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktwofingerswipe_timerevent_callback(this, cbval1);
        } else {
            KTwoFingerSwipe::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktwofingerswipe_childevent_isbase) {
            ktwofingerswipe_childevent_isbase = false;
            KTwoFingerSwipe::childEvent(event);
        } else if (ktwofingerswipe_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktwofingerswipe_childevent_callback(this, cbval1);
        } else {
            KTwoFingerSwipe::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktwofingerswipe_customevent_isbase) {
            ktwofingerswipe_customevent_isbase = false;
            KTwoFingerSwipe::customEvent(event);
        } else if (ktwofingerswipe_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktwofingerswipe_customevent_callback(this, cbval1);
        } else {
            KTwoFingerSwipe::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktwofingerswipe_connectnotify_isbase) {
            ktwofingerswipe_connectnotify_isbase = false;
            KTwoFingerSwipe::connectNotify(signal);
        } else if (ktwofingerswipe_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktwofingerswipe_connectnotify_callback(this, cbval1);
        } else {
            KTwoFingerSwipe::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktwofingerswipe_disconnectnotify_isbase) {
            ktwofingerswipe_disconnectnotify_isbase = false;
            KTwoFingerSwipe::disconnectNotify(signal);
        } else if (ktwofingerswipe_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktwofingerswipe_disconnectnotify_callback(this, cbval1);
        } else {
            KTwoFingerSwipe::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktwofingerswipe_sender_isbase) {
            ktwofingerswipe_sender_isbase = false;
            return KTwoFingerSwipe::sender();
        } else if (ktwofingerswipe_sender_callback != nullptr) {
            QObject* callback_ret = ktwofingerswipe_sender_callback();
            return callback_ret;
        } else {
            return KTwoFingerSwipe::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktwofingerswipe_sendersignalindex_isbase) {
            ktwofingerswipe_sendersignalindex_isbase = false;
            return KTwoFingerSwipe::senderSignalIndex();
        } else if (ktwofingerswipe_sendersignalindex_callback != nullptr) {
            int callback_ret = ktwofingerswipe_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTwoFingerSwipe::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktwofingerswipe_receivers_isbase) {
            ktwofingerswipe_receivers_isbase = false;
            return KTwoFingerSwipe::receivers(signal);
        } else if (ktwofingerswipe_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktwofingerswipe_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTwoFingerSwipe::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktwofingerswipe_issignalconnected_isbase) {
            ktwofingerswipe_issignalconnected_isbase = false;
            return KTwoFingerSwipe::isSignalConnected(signal);
        } else if (ktwofingerswipe_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktwofingerswipe_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTwoFingerSwipe::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KTwoFingerSwipe_TimerEvent(KTwoFingerSwipe* self, QTimerEvent* event);
    friend void KTwoFingerSwipe_QBaseTimerEvent(KTwoFingerSwipe* self, QTimerEvent* event);
    friend void KTwoFingerSwipe_ChildEvent(KTwoFingerSwipe* self, QChildEvent* event);
    friend void KTwoFingerSwipe_QBaseChildEvent(KTwoFingerSwipe* self, QChildEvent* event);
    friend void KTwoFingerSwipe_CustomEvent(KTwoFingerSwipe* self, QEvent* event);
    friend void KTwoFingerSwipe_QBaseCustomEvent(KTwoFingerSwipe* self, QEvent* event);
    friend void KTwoFingerSwipe_ConnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
    friend void KTwoFingerSwipe_QBaseConnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
    friend void KTwoFingerSwipe_DisconnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
    friend void KTwoFingerSwipe_QBaseDisconnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
    friend QObject* KTwoFingerSwipe_Sender(const KTwoFingerSwipe* self);
    friend QObject* KTwoFingerSwipe_QBaseSender(const KTwoFingerSwipe* self);
    friend int KTwoFingerSwipe_SenderSignalIndex(const KTwoFingerSwipe* self);
    friend int KTwoFingerSwipe_QBaseSenderSignalIndex(const KTwoFingerSwipe* self);
    friend int KTwoFingerSwipe_Receivers(const KTwoFingerSwipe* self, const char* signal);
    friend int KTwoFingerSwipe_QBaseReceivers(const KTwoFingerSwipe* self, const char* signal);
    friend bool KTwoFingerSwipe_IsSignalConnected(const KTwoFingerSwipe* self, const QMetaMethod* signal);
    friend bool KTwoFingerSwipe_QBaseIsSignalConnected(const KTwoFingerSwipe* self, const QMetaMethod* signal);
};

// This class is a subclass of KTwoFingerSwipeRecognizer so that we can call protected methods
class VirtualKTwoFingerSwipeRecognizer final : public KTwoFingerSwipeRecognizer {

  public:
    // Virtual class boolean flag
    bool isVirtualKTwoFingerSwipeRecognizer = true;

    // Virtual class public types (including callbacks)
    using KTwoFingerSwipeRecognizer_Create_Callback = QGesture* (*)(KTwoFingerSwipeRecognizer*, QObject*);
    using KTwoFingerSwipeRecognizer_Recognize_Callback = int (*)(KTwoFingerSwipeRecognizer*, QGesture*, QObject*, QEvent*);
    using KTwoFingerSwipeRecognizer_Reset_Callback = void (*)(KTwoFingerSwipeRecognizer*, QGesture*);

  protected:
    // Instance callback storage
    KTwoFingerSwipeRecognizer_Create_Callback ktwofingerswiperecognizer_create_callback = nullptr;
    KTwoFingerSwipeRecognizer_Recognize_Callback ktwofingerswiperecognizer_recognize_callback = nullptr;
    KTwoFingerSwipeRecognizer_Reset_Callback ktwofingerswiperecognizer_reset_callback = nullptr;

    // Instance base flags
    mutable bool ktwofingerswiperecognizer_create_isbase = false;
    mutable bool ktwofingerswiperecognizer_recognize_isbase = false;
    mutable bool ktwofingerswiperecognizer_reset_isbase = false;

  public:
    VirtualKTwoFingerSwipeRecognizer() : KTwoFingerSwipeRecognizer() {};

    ~VirtualKTwoFingerSwipeRecognizer() {
        ktwofingerswiperecognizer_create_callback = nullptr;
        ktwofingerswiperecognizer_recognize_callback = nullptr;
        ktwofingerswiperecognizer_reset_callback = nullptr;
    }

    // Callback setters
    inline void setKTwoFingerSwipeRecognizer_Create_Callback(KTwoFingerSwipeRecognizer_Create_Callback cb) { ktwofingerswiperecognizer_create_callback = cb; }
    inline void setKTwoFingerSwipeRecognizer_Recognize_Callback(KTwoFingerSwipeRecognizer_Recognize_Callback cb) { ktwofingerswiperecognizer_recognize_callback = cb; }
    inline void setKTwoFingerSwipeRecognizer_Reset_Callback(KTwoFingerSwipeRecognizer_Reset_Callback cb) { ktwofingerswiperecognizer_reset_callback = cb; }

    // Base flag setters
    inline void setKTwoFingerSwipeRecognizer_Create_IsBase(bool value) const { ktwofingerswiperecognizer_create_isbase = value; }
    inline void setKTwoFingerSwipeRecognizer_Recognize_IsBase(bool value) const { ktwofingerswiperecognizer_recognize_isbase = value; }
    inline void setKTwoFingerSwipeRecognizer_Reset_IsBase(bool value) const { ktwofingerswiperecognizer_reset_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QGesture* create(QObject* target) override {
        if (ktwofingerswiperecognizer_create_isbase) {
            ktwofingerswiperecognizer_create_isbase = false;
            return KTwoFingerSwipeRecognizer::create(target);
        } else if (ktwofingerswiperecognizer_create_callback != nullptr) {
            QObject* cbval1 = target;

            QGesture* callback_ret = ktwofingerswiperecognizer_create_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTwoFingerSwipeRecognizer::create(target);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGestureRecognizer::Result recognize(QGesture* gesture, QObject* watched, QEvent* event) override {
        if (ktwofingerswiperecognizer_recognize_isbase) {
            ktwofingerswiperecognizer_recognize_isbase = false;
            return KTwoFingerSwipeRecognizer::recognize(gesture, watched, event);
        } else if (ktwofingerswiperecognizer_recognize_callback != nullptr) {
            QGesture* cbval1 = gesture;
            QObject* cbval2 = watched;
            QEvent* cbval3 = event;

            int callback_ret = ktwofingerswiperecognizer_recognize_callback(this, cbval1, cbval2, cbval3);
            return static_cast<QGestureRecognizer::Result>(callback_ret);
        } else {
            return KTwoFingerSwipeRecognizer::recognize(gesture, watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset(QGesture* state) override {
        if (ktwofingerswiperecognizer_reset_isbase) {
            ktwofingerswiperecognizer_reset_isbase = false;
            KTwoFingerSwipeRecognizer::reset(state);
        } else if (ktwofingerswiperecognizer_reset_callback != nullptr) {
            QGesture* cbval1 = state;

            ktwofingerswiperecognizer_reset_callback(this, cbval1);
        } else {
            KTwoFingerSwipeRecognizer::reset(state);
        }
    }
};

#endif
