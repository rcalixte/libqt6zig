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
    using KTwoFingerSwipe_MetaObject_Callback = QMetaObject* (*)();
    using KTwoFingerSwipe_Metacast_Callback = void* (*)(KTwoFingerSwipe*, const char*);
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
    KTwoFingerSwipe_MetaObject_Callback ktwofingerswipe_metaobject_callback = nullptr;
    KTwoFingerSwipe_Metacast_Callback ktwofingerswipe_metacast_callback = nullptr;
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
    mutable bool ktwofingerswipe_metaobject_isbase = false;
    mutable bool ktwofingerswipe_metacast_isbase = false;
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

    // Callback setters
    inline void setKTwoFingerSwipe_MetaObject_Callback(KTwoFingerSwipe_MetaObject_Callback cb) { ktwofingerswipe_metaobject_callback = cb; }
    inline void setKTwoFingerSwipe_Metacast_Callback(KTwoFingerSwipe_Metacast_Callback cb) { ktwofingerswipe_metacast_callback = cb; }
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
    inline void setKTwoFingerSwipe_MetaObject_IsBase(bool value) const { ktwofingerswipe_metaobject_isbase = value; }
    inline void setKTwoFingerSwipe_Metacast_IsBase(bool value) const { ktwofingerswipe_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (ktwofingerswipe_metaobject_isbase) {
            ktwofingerswipe_metaobject_isbase = false;
            return KTwoFingerSwipe::metaObject();
        }
        auto metaobject_cb = ktwofingerswipe_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KTwoFingerSwipe::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktwofingerswipe_metacast_isbase) {
            ktwofingerswipe_metacast_isbase = false;
            return KTwoFingerSwipe::qt_metacast(param1);
        }
        auto metacast_cb = ktwofingerswipe_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KTwoFingerSwipe::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktwofingerswipe_metacall_isbase) {
            ktwofingerswipe_metacall_isbase = false;
            return KTwoFingerSwipe::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ktwofingerswipe_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTwoFingerSwipe::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktwofingerswipe_event_isbase) {
            ktwofingerswipe_event_isbase = false;
            return KTwoFingerSwipe::event(event);
        }
        auto event_cb = ktwofingerswipe_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KTwoFingerSwipe::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktwofingerswipe_eventfilter_isbase) {
            ktwofingerswipe_eventfilter_isbase = false;
            return KTwoFingerSwipe::eventFilter(watched, event);
        }
        auto eventfilter_cb = ktwofingerswipe_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTwoFingerSwipe::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktwofingerswipe_timerevent_isbase) {
            ktwofingerswipe_timerevent_isbase = false;
            KTwoFingerSwipe::timerEvent(event);
            return;
        }
        auto timerevent_cb = ktwofingerswipe_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KTwoFingerSwipe::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktwofingerswipe_childevent_isbase) {
            ktwofingerswipe_childevent_isbase = false;
            KTwoFingerSwipe::childEvent(event);
            return;
        }
        auto childevent_cb = ktwofingerswipe_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KTwoFingerSwipe::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktwofingerswipe_customevent_isbase) {
            ktwofingerswipe_customevent_isbase = false;
            KTwoFingerSwipe::customEvent(event);
            return;
        }
        auto customevent_cb = ktwofingerswipe_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KTwoFingerSwipe::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktwofingerswipe_connectnotify_isbase) {
            ktwofingerswipe_connectnotify_isbase = false;
            KTwoFingerSwipe::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ktwofingerswipe_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KTwoFingerSwipe::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktwofingerswipe_disconnectnotify_isbase) {
            ktwofingerswipe_disconnectnotify_isbase = false;
            KTwoFingerSwipe::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ktwofingerswipe_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KTwoFingerSwipe::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktwofingerswipe_sender_isbase) {
            ktwofingerswipe_sender_isbase = false;
            return KTwoFingerSwipe::sender();
        }
        auto sender_cb = ktwofingerswipe_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KTwoFingerSwipe::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktwofingerswipe_sendersignalindex_isbase) {
            ktwofingerswipe_sendersignalindex_isbase = false;
            return KTwoFingerSwipe::senderSignalIndex();
        }
        auto sendersignalindex_cb = ktwofingerswipe_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KTwoFingerSwipe::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktwofingerswipe_receivers_isbase) {
            ktwofingerswipe_receivers_isbase = false;
            return KTwoFingerSwipe::receivers(signal);
        }
        auto receivers_cb = ktwofingerswipe_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTwoFingerSwipe::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktwofingerswipe_issignalconnected_isbase) {
            ktwofingerswipe_issignalconnected_isbase = false;
            return KTwoFingerSwipe::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ktwofingerswipe_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KTwoFingerSwipe::isSignalConnected(signal);
    }

    // Friend functions
    friend void KTwoFingerSwipe_TimerEvent(KTwoFingerSwipe* self, QTimerEvent* event);
    friend void KTwoFingerSwipe_SuperTimerEvent(KTwoFingerSwipe* self, QTimerEvent* event);
    friend void KTwoFingerSwipe_ChildEvent(KTwoFingerSwipe* self, QChildEvent* event);
    friend void KTwoFingerSwipe_SuperChildEvent(KTwoFingerSwipe* self, QChildEvent* event);
    friend void KTwoFingerSwipe_CustomEvent(KTwoFingerSwipe* self, QEvent* event);
    friend void KTwoFingerSwipe_SuperCustomEvent(KTwoFingerSwipe* self, QEvent* event);
    friend void KTwoFingerSwipe_ConnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
    friend void KTwoFingerSwipe_SuperConnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
    friend void KTwoFingerSwipe_DisconnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
    friend void KTwoFingerSwipe_SuperDisconnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
    friend QObject* KTwoFingerSwipe_Sender(const KTwoFingerSwipe* self);
    friend QObject* KTwoFingerSwipe_SuperSender(const KTwoFingerSwipe* self);
    friend int KTwoFingerSwipe_SenderSignalIndex(const KTwoFingerSwipe* self);
    friend int KTwoFingerSwipe_SuperSenderSignalIndex(const KTwoFingerSwipe* self);
    friend int KTwoFingerSwipe_Receivers(const KTwoFingerSwipe* self, const char* signal);
    friend int KTwoFingerSwipe_SuperReceivers(const KTwoFingerSwipe* self, const char* signal);
    friend bool KTwoFingerSwipe_IsSignalConnected(const KTwoFingerSwipe* self, const QMetaMethod* signal);
    friend bool KTwoFingerSwipe_SuperIsSignalConnected(const KTwoFingerSwipe* self, const QMetaMethod* signal);
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
        }
        auto create_cb = ktwofingerswiperecognizer_create_callback;
        if (create_cb) {
            QObject* cbval1 = target;

            QGesture* callback_ret = create_cb(this, cbval1);
            return callback_ret;
        }
        return KTwoFingerSwipeRecognizer::create(target);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGestureRecognizer::Result recognize(QGesture* gesture, QObject* watched, QEvent* event) override {
        if (ktwofingerswiperecognizer_recognize_isbase) {
            ktwofingerswiperecognizer_recognize_isbase = false;
            return KTwoFingerSwipeRecognizer::recognize(gesture, watched, event);
        }
        auto recognize_cb = ktwofingerswiperecognizer_recognize_callback;
        if (recognize_cb) {
            QGesture* cbval1 = gesture;
            QObject* cbval2 = watched;
            QEvent* cbval3 = event;

            int callback_ret = recognize_cb(this, cbval1, cbval2, cbval3);
            return static_cast<QGestureRecognizer::Result>(callback_ret);
        }
        return KTwoFingerSwipeRecognizer::recognize(gesture, watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset(QGesture* state) override {
        if (ktwofingerswiperecognizer_reset_isbase) {
            ktwofingerswiperecognizer_reset_isbase = false;
            KTwoFingerSwipeRecognizer::reset(state);
            return;
        }
        auto reset_cb = ktwofingerswiperecognizer_reset_callback;
        if (reset_cb) {
            QGesture* cbval1 = state;

            reset_cb(this, cbval1);
            return;
        }
        KTwoFingerSwipeRecognizer::reset(state);
    }
};

#endif
