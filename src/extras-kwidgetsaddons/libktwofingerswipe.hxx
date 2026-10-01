#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKTWOFINGERSWIPE_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKTWOFINGERSWIPE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTwoFingerSwipe
class VirtualKTwoFingerSwipe final : public KTwoFingerSwipe {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTwoFingerSwipe_MetaObject_Callback = QMetaObject* (*)(const KTwoFingerSwipe*);
    using KTwoFingerSwipe_Metacast_Callback = void* (*)(KTwoFingerSwipe*, const char*);
    using KTwoFingerSwipe_Metacall_Callback = int (*)(KTwoFingerSwipe*, int, int, void**);
    using KTwoFingerSwipe_Event_Callback = bool (*)(KTwoFingerSwipe*, QEvent*);
    using KTwoFingerSwipe_EventFilter_Callback = bool (*)(KTwoFingerSwipe*, QObject*, QEvent*);
    using KTwoFingerSwipe_TimerEvent_Callback = void (*)(KTwoFingerSwipe*, QTimerEvent*);
    using KTwoFingerSwipe_ChildEvent_Callback = void (*)(KTwoFingerSwipe*, QChildEvent*);
    using KTwoFingerSwipe_CustomEvent_Callback = void (*)(KTwoFingerSwipe*, QEvent*);
    using KTwoFingerSwipe_ConnectNotify_Callback = void (*)(KTwoFingerSwipe*, QMetaMethod*);
    using KTwoFingerSwipe_DisconnectNotify_Callback = void (*)(KTwoFingerSwipe*, QMetaMethod*);
    using KTwoFingerSwipe::isSignalConnected;
    using KTwoFingerSwipe::receivers;
    using KTwoFingerSwipe::sender;
    using KTwoFingerSwipe::senderSignalIndex;

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

    // Access struct
    struct Base : KTwoFingerSwipe {
        using KTwoFingerSwipe::childEvent;
        using KTwoFingerSwipe::connectNotify;
        using KTwoFingerSwipe::customEvent;
        using KTwoFingerSwipe::disconnectNotify;
        using KTwoFingerSwipe::timerEvent;
    };

    VirtualKTwoFingerSwipe() : KTwoFingerSwipe() {};
    VirtualKTwoFingerSwipe(QObject* parent) : KTwoFingerSwipe(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktwofingerswipe_metaobject_callback) {
            QMetaObject* callback_ret = ktwofingerswipe_metaobject_callback(this);
            return callback_ret;
        }
        return KTwoFingerSwipe::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktwofingerswipe_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktwofingerswipe_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTwoFingerSwipe::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktwofingerswipe_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktwofingerswipe_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTwoFingerSwipe::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktwofingerswipe_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktwofingerswipe_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTwoFingerSwipe::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktwofingerswipe_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktwofingerswipe_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTwoFingerSwipe::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktwofingerswipe_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktwofingerswipe_timerevent_callback(this, cbval1);
            return;
        }
        KTwoFingerSwipe::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktwofingerswipe_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktwofingerswipe_childevent_callback(this, cbval1);
            return;
        }
        KTwoFingerSwipe::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktwofingerswipe_customevent_callback) {
            QEvent* cbval1 = event;
            ktwofingerswipe_customevent_callback(this, cbval1);
            return;
        }
        KTwoFingerSwipe::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktwofingerswipe_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktwofingerswipe_connectnotify_callback(this, cbval1);
            return;
        }
        KTwoFingerSwipe::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktwofingerswipe_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktwofingerswipe_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTwoFingerSwipe::disconnectNotify(signal);
    }

    // Friend functions
    friend void KTwoFingerSwipe_SuperTimerEvent(KTwoFingerSwipe* self, QTimerEvent* event);
    friend void KTwoFingerSwipe_SuperChildEvent(KTwoFingerSwipe* self, QChildEvent* event);
    friend void KTwoFingerSwipe_SuperCustomEvent(KTwoFingerSwipe* self, QEvent* event);
    friend void KTwoFingerSwipe_SuperConnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
    friend void KTwoFingerSwipe_SuperDisconnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal);
};

// This class is a subclass of KTwoFingerSwipeRecognizer
class VirtualKTwoFingerSwipeRecognizer final : public KTwoFingerSwipeRecognizer {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTwoFingerSwipeRecognizer_Create_Callback = QGesture* (*)(KTwoFingerSwipeRecognizer*, QObject*);
    using KTwoFingerSwipeRecognizer_Recognize_Callback = int (*)(KTwoFingerSwipeRecognizer*, QGesture*, QObject*, QEvent*);
    using KTwoFingerSwipeRecognizer_Reset_Callback = void (*)(KTwoFingerSwipeRecognizer*, QGesture*);

    // Instance callback storage
    KTwoFingerSwipeRecognizer_Create_Callback ktwofingerswiperecognizer_create_callback = nullptr;
    KTwoFingerSwipeRecognizer_Recognize_Callback ktwofingerswiperecognizer_recognize_callback = nullptr;
    KTwoFingerSwipeRecognizer_Reset_Callback ktwofingerswiperecognizer_reset_callback = nullptr;

    VirtualKTwoFingerSwipeRecognizer() : KTwoFingerSwipeRecognizer() {};

    // Virtual method for C ABI access and custom callback
    virtual QGesture* create(QObject* target) override {
        if (ktwofingerswiperecognizer_create_callback) {
            QObject* cbval1 = target;
            QGesture* callback_ret = ktwofingerswiperecognizer_create_callback(this, cbval1);
            return callback_ret;
        }
        return KTwoFingerSwipeRecognizer::create(target);
    }

    // Virtual method for C ABI access and custom callback
    virtual QGestureRecognizer::Result recognize(QGesture* gesture, QObject* watched, QEvent* event) override {
        if (ktwofingerswiperecognizer_recognize_callback) {
            QGesture* cbval1 = gesture;
            QObject* cbval2 = watched;
            QEvent* cbval3 = event;
            int callback_ret = ktwofingerswiperecognizer_recognize_callback(this, cbval1, cbval2, cbval3);
            return static_cast<QGestureRecognizer::Result>(callback_ret);
        }
        return KTwoFingerSwipeRecognizer::recognize(gesture, watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset(QGesture* state) override {
        if (ktwofingerswiperecognizer_reset_callback) {
            QGesture* cbval1 = state;
            ktwofingerswiperecognizer_reset_callback(this, cbval1);
            return;
        }
        KTwoFingerSwipeRecognizer::reset(state);
    }
};

#endif
