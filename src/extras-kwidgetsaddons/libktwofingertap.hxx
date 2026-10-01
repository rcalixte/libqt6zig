#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKTWOFINGERTAP_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKTWOFINGERTAP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTwoFingerTap
class VirtualKTwoFingerTap final : public KTwoFingerTap {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTwoFingerTap_MetaObject_Callback = QMetaObject* (*)(const KTwoFingerTap*);
    using KTwoFingerTap_Metacast_Callback = void* (*)(KTwoFingerTap*, const char*);
    using KTwoFingerTap_Metacall_Callback = int (*)(KTwoFingerTap*, int, int, void**);
    using KTwoFingerTap_Event_Callback = bool (*)(KTwoFingerTap*, QEvent*);
    using KTwoFingerTap_EventFilter_Callback = bool (*)(KTwoFingerTap*, QObject*, QEvent*);
    using KTwoFingerTap_TimerEvent_Callback = void (*)(KTwoFingerTap*, QTimerEvent*);
    using KTwoFingerTap_ChildEvent_Callback = void (*)(KTwoFingerTap*, QChildEvent*);
    using KTwoFingerTap_CustomEvent_Callback = void (*)(KTwoFingerTap*, QEvent*);
    using KTwoFingerTap_ConnectNotify_Callback = void (*)(KTwoFingerTap*, QMetaMethod*);
    using KTwoFingerTap_DisconnectNotify_Callback = void (*)(KTwoFingerTap*, QMetaMethod*);
    using KTwoFingerTap::isSignalConnected;
    using KTwoFingerTap::receivers;
    using KTwoFingerTap::sender;
    using KTwoFingerTap::senderSignalIndex;

    // Instance callback storage
    KTwoFingerTap_MetaObject_Callback ktwofingertap_metaobject_callback = nullptr;
    KTwoFingerTap_Metacast_Callback ktwofingertap_metacast_callback = nullptr;
    KTwoFingerTap_Metacall_Callback ktwofingertap_metacall_callback = nullptr;
    KTwoFingerTap_Event_Callback ktwofingertap_event_callback = nullptr;
    KTwoFingerTap_EventFilter_Callback ktwofingertap_eventfilter_callback = nullptr;
    KTwoFingerTap_TimerEvent_Callback ktwofingertap_timerevent_callback = nullptr;
    KTwoFingerTap_ChildEvent_Callback ktwofingertap_childevent_callback = nullptr;
    KTwoFingerTap_CustomEvent_Callback ktwofingertap_customevent_callback = nullptr;
    KTwoFingerTap_ConnectNotify_Callback ktwofingertap_connectnotify_callback = nullptr;
    KTwoFingerTap_DisconnectNotify_Callback ktwofingertap_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KTwoFingerTap {
        using KTwoFingerTap::childEvent;
        using KTwoFingerTap::connectNotify;
        using KTwoFingerTap::customEvent;
        using KTwoFingerTap::disconnectNotify;
        using KTwoFingerTap::timerEvent;
    };

    VirtualKTwoFingerTap() : KTwoFingerTap() {};
    VirtualKTwoFingerTap(QObject* parent) : KTwoFingerTap(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktwofingertap_metaobject_callback) {
            QMetaObject* callback_ret = ktwofingertap_metaobject_callback(this);
            return callback_ret;
        }
        return KTwoFingerTap::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktwofingertap_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktwofingertap_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTwoFingerTap::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktwofingertap_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktwofingertap_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTwoFingerTap::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktwofingertap_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktwofingertap_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTwoFingerTap::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktwofingertap_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktwofingertap_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTwoFingerTap::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktwofingertap_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktwofingertap_timerevent_callback(this, cbval1);
            return;
        }
        KTwoFingerTap::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktwofingertap_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktwofingertap_childevent_callback(this, cbval1);
            return;
        }
        KTwoFingerTap::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktwofingertap_customevent_callback) {
            QEvent* cbval1 = event;
            ktwofingertap_customevent_callback(this, cbval1);
            return;
        }
        KTwoFingerTap::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktwofingertap_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktwofingertap_connectnotify_callback(this, cbval1);
            return;
        }
        KTwoFingerTap::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktwofingertap_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktwofingertap_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTwoFingerTap::disconnectNotify(signal);
    }

    // Friend functions
    friend void KTwoFingerTap_SuperTimerEvent(KTwoFingerTap* self, QTimerEvent* event);
    friend void KTwoFingerTap_SuperChildEvent(KTwoFingerTap* self, QChildEvent* event);
    friend void KTwoFingerTap_SuperCustomEvent(KTwoFingerTap* self, QEvent* event);
    friend void KTwoFingerTap_SuperConnectNotify(KTwoFingerTap* self, const QMetaMethod* signal);
    friend void KTwoFingerTap_SuperDisconnectNotify(KTwoFingerTap* self, const QMetaMethod* signal);
};

// This class is a subclass of KTwoFingerTapRecognizer
class VirtualKTwoFingerTapRecognizer final : public KTwoFingerTapRecognizer {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTwoFingerTapRecognizer_Create_Callback = QGesture* (*)(KTwoFingerTapRecognizer*, QObject*);
    using KTwoFingerTapRecognizer_Recognize_Callback = int (*)(KTwoFingerTapRecognizer*, QGesture*, QObject*, QEvent*);
    using KTwoFingerTapRecognizer_Reset_Callback = void (*)(KTwoFingerTapRecognizer*, QGesture*);

    // Instance callback storage
    KTwoFingerTapRecognizer_Create_Callback ktwofingertaprecognizer_create_callback = nullptr;
    KTwoFingerTapRecognizer_Recognize_Callback ktwofingertaprecognizer_recognize_callback = nullptr;
    KTwoFingerTapRecognizer_Reset_Callback ktwofingertaprecognizer_reset_callback = nullptr;

    VirtualKTwoFingerTapRecognizer() : KTwoFingerTapRecognizer() {};

    // Virtual method for C ABI access and custom callback
    virtual QGesture* create(QObject* target) override {
        if (ktwofingertaprecognizer_create_callback) {
            QObject* cbval1 = target;
            QGesture* callback_ret = ktwofingertaprecognizer_create_callback(this, cbval1);
            return callback_ret;
        }
        return KTwoFingerTapRecognizer::create(target);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGestureRecognizer::Result recognize(QGesture* gesture, QObject* watched, QEvent* event) override {
        if (ktwofingertaprecognizer_recognize_callback) {
            QGesture* cbval1 = gesture;
            QObject* cbval2 = watched;
            QEvent* cbval3 = event;
            int callback_ret = ktwofingertaprecognizer_recognize_callback(this, cbval1, cbval2, cbval3);
            return static_cast<QGestureRecognizer::Result>(callback_ret);
        }
        return KTwoFingerTapRecognizer::recognize(gesture, watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset(QGesture* state) override {
        if (ktwofingertaprecognizer_reset_callback) {
            QGesture* cbval1 = state;
            ktwofingertaprecognizer_reset_callback(this, cbval1);
            return;
        }
        KTwoFingerTapRecognizer::reset(state);
    }
};

#endif
