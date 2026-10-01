#pragma once
#ifndef EXTRAS_KGUIADDONS_LIBKKEYSEQUENCERECORDER_HXX
#define EXTRAS_KGUIADDONS_LIBKKEYSEQUENCERECORDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KKeySequenceRecorder
class VirtualKKeySequenceRecorder final : public KKeySequenceRecorder {
  public:
    // Virtual class public types (including callbacks and access types)
    using KKeySequenceRecorder_MetaObject_Callback = QMetaObject* (*)(const KKeySequenceRecorder*);
    using KKeySequenceRecorder_Metacast_Callback = void* (*)(KKeySequenceRecorder*, const char*);
    using KKeySequenceRecorder_Metacall_Callback = int (*)(KKeySequenceRecorder*, int, int, void**);
    using KKeySequenceRecorder_Event_Callback = bool (*)(KKeySequenceRecorder*, QEvent*);
    using KKeySequenceRecorder_EventFilter_Callback = bool (*)(KKeySequenceRecorder*, QObject*, QEvent*);
    using KKeySequenceRecorder_TimerEvent_Callback = void (*)(KKeySequenceRecorder*, QTimerEvent*);
    using KKeySequenceRecorder_ChildEvent_Callback = void (*)(KKeySequenceRecorder*, QChildEvent*);
    using KKeySequenceRecorder_CustomEvent_Callback = void (*)(KKeySequenceRecorder*, QEvent*);
    using KKeySequenceRecorder_ConnectNotify_Callback = void (*)(KKeySequenceRecorder*, QMetaMethod*);
    using KKeySequenceRecorder_DisconnectNotify_Callback = void (*)(KKeySequenceRecorder*, QMetaMethod*);
    using KKeySequenceRecorder::isSignalConnected;
    using KKeySequenceRecorder::receivers;
    using KKeySequenceRecorder::sender;
    using KKeySequenceRecorder::senderSignalIndex;

    // Instance callback storage
    KKeySequenceRecorder_MetaObject_Callback kkeysequencerecorder_metaobject_callback = nullptr;
    KKeySequenceRecorder_Metacast_Callback kkeysequencerecorder_metacast_callback = nullptr;
    KKeySequenceRecorder_Metacall_Callback kkeysequencerecorder_metacall_callback = nullptr;
    KKeySequenceRecorder_Event_Callback kkeysequencerecorder_event_callback = nullptr;
    KKeySequenceRecorder_EventFilter_Callback kkeysequencerecorder_eventfilter_callback = nullptr;
    KKeySequenceRecorder_TimerEvent_Callback kkeysequencerecorder_timerevent_callback = nullptr;
    KKeySequenceRecorder_ChildEvent_Callback kkeysequencerecorder_childevent_callback = nullptr;
    KKeySequenceRecorder_CustomEvent_Callback kkeysequencerecorder_customevent_callback = nullptr;
    KKeySequenceRecorder_ConnectNotify_Callback kkeysequencerecorder_connectnotify_callback = nullptr;
    KKeySequenceRecorder_DisconnectNotify_Callback kkeysequencerecorder_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KKeySequenceRecorder {
        using KKeySequenceRecorder::childEvent;
        using KKeySequenceRecorder::connectNotify;
        using KKeySequenceRecorder::customEvent;
        using KKeySequenceRecorder::disconnectNotify;
        using KKeySequenceRecorder::timerEvent;
    };

    VirtualKKeySequenceRecorder(QWindow* window) : KKeySequenceRecorder(window) {};
    VirtualKKeySequenceRecorder(QWindow* window, QObject* parent) : KKeySequenceRecorder(window, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kkeysequencerecorder_metaobject_callback) {
            QMetaObject* callback_ret = kkeysequencerecorder_metaobject_callback(this);
            return callback_ret;
        }
        return KKeySequenceRecorder::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kkeysequencerecorder_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kkeysequencerecorder_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KKeySequenceRecorder::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kkeysequencerecorder_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kkeysequencerecorder_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KKeySequenceRecorder::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kkeysequencerecorder_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kkeysequencerecorder_event_callback(this, cbval1);
            return callback_ret;
        }
        return KKeySequenceRecorder::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kkeysequencerecorder_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kkeysequencerecorder_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KKeySequenceRecorder::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kkeysequencerecorder_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kkeysequencerecorder_timerevent_callback(this, cbval1);
            return;
        }
        KKeySequenceRecorder::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kkeysequencerecorder_childevent_callback) {
            QChildEvent* cbval1 = event;
            kkeysequencerecorder_childevent_callback(this, cbval1);
            return;
        }
        KKeySequenceRecorder::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kkeysequencerecorder_customevent_callback) {
            QEvent* cbval1 = event;
            kkeysequencerecorder_customevent_callback(this, cbval1);
            return;
        }
        KKeySequenceRecorder::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kkeysequencerecorder_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kkeysequencerecorder_connectnotify_callback(this, cbval1);
            return;
        }
        KKeySequenceRecorder::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kkeysequencerecorder_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kkeysequencerecorder_disconnectnotify_callback(this, cbval1);
            return;
        }
        KKeySequenceRecorder::disconnectNotify(signal);
    }

    // Friend functions
    friend void KKeySequenceRecorder_SuperTimerEvent(KKeySequenceRecorder* self, QTimerEvent* event);
    friend void KKeySequenceRecorder_SuperChildEvent(KKeySequenceRecorder* self, QChildEvent* event);
    friend void KKeySequenceRecorder_SuperCustomEvent(KKeySequenceRecorder* self, QEvent* event);
    friend void KKeySequenceRecorder_SuperConnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal);
    friend void KKeySequenceRecorder_SuperDisconnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal);
};

#endif
