#pragma once
#ifndef EXTRAS_KNEWSTUFF_LIBQUESTIONLISTENER_HXX
#define EXTRAS_KNEWSTUFF_LIBQUESTIONLISTENER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSCore::QuestionListener
class VirtualKNSCoreQuestionListener : public KNSCore::QuestionListener {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNSCore__QuestionListener_MetaObject_Callback = QMetaObject* (*)(const KNSCore__QuestionListener*);
    using KNSCore__QuestionListener_Metacast_Callback = void* (*)(KNSCore__QuestionListener*, const char*);
    using KNSCore__QuestionListener_Metacall_Callback = int (*)(KNSCore__QuestionListener*, int, int, void**);
    using KNSCore__QuestionListener_AskQuestion_Callback = void (*)(KNSCore__QuestionListener*, KNSCore__Question*);
    using KNSCore__QuestionListener_Event_Callback = bool (*)(KNSCore__QuestionListener*, QEvent*);
    using KNSCore__QuestionListener_EventFilter_Callback = bool (*)(KNSCore__QuestionListener*, QObject*, QEvent*);
    using KNSCore__QuestionListener_TimerEvent_Callback = void (*)(KNSCore__QuestionListener*, QTimerEvent*);
    using KNSCore__QuestionListener_ChildEvent_Callback = void (*)(KNSCore__QuestionListener*, QChildEvent*);
    using KNSCore__QuestionListener_CustomEvent_Callback = void (*)(KNSCore__QuestionListener*, QEvent*);
    using KNSCore__QuestionListener_ConnectNotify_Callback = void (*)(KNSCore__QuestionListener*, QMetaMethod*);
    using KNSCore__QuestionListener_DisconnectNotify_Callback = void (*)(KNSCore__QuestionListener*, QMetaMethod*);
    using KNSCore::QuestionListener::isSignalConnected;
    using KNSCore::QuestionListener::receivers;
    using KNSCore::QuestionListener::sender;
    using KNSCore::QuestionListener::senderSignalIndex;

    // Instance callback storage
    KNSCore__QuestionListener_MetaObject_Callback knscore__questionlistener_metaobject_callback = nullptr;
    KNSCore__QuestionListener_Metacast_Callback knscore__questionlistener_metacast_callback = nullptr;
    KNSCore__QuestionListener_Metacall_Callback knscore__questionlistener_metacall_callback = nullptr;
    KNSCore__QuestionListener_AskQuestion_Callback knscore__questionlistener_askquestion_callback = nullptr;
    KNSCore__QuestionListener_Event_Callback knscore__questionlistener_event_callback = nullptr;
    KNSCore__QuestionListener_EventFilter_Callback knscore__questionlistener_eventfilter_callback = nullptr;
    KNSCore__QuestionListener_TimerEvent_Callback knscore__questionlistener_timerevent_callback = nullptr;
    KNSCore__QuestionListener_ChildEvent_Callback knscore__questionlistener_childevent_callback = nullptr;
    KNSCore__QuestionListener_CustomEvent_Callback knscore__questionlistener_customevent_callback = nullptr;
    KNSCore__QuestionListener_ConnectNotify_Callback knscore__questionlistener_connectnotify_callback = nullptr;
    KNSCore__QuestionListener_DisconnectNotify_Callback knscore__questionlistener_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNSCore::QuestionListener {
        using KNSCore::QuestionListener::childEvent;
        using KNSCore::QuestionListener::connectNotify;
        using KNSCore::QuestionListener::customEvent;
        using KNSCore::QuestionListener::disconnectNotify;
        using KNSCore::QuestionListener::timerEvent;
    };

    VirtualKNSCoreQuestionListener() : KNSCore::QuestionListener() {};
    VirtualKNSCoreQuestionListener(QObject* parent) : KNSCore::QuestionListener(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knscore__questionlistener_metaobject_callback) {
            QMetaObject* callback_ret = knscore__questionlistener_metaobject_callback(this);
            return callback_ret;
        }
        return KNSCore__QuestionListener::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knscore__questionlistener_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knscore__questionlistener_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__QuestionListener::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knscore__questionlistener_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knscore__questionlistener_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__QuestionListener::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void askQuestion(KNSCore::Question* question) override {
        if (knscore__questionlistener_askquestion_callback) {
            KNSCore__Question* cbval1 = question;
            knscore__questionlistener_askquestion_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KNSCore::QuestionListener::askQuestion called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knscore__questionlistener_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knscore__questionlistener_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__QuestionListener::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knscore__questionlistener_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = knscore__questionlistener_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSCore__QuestionListener::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knscore__questionlistener_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knscore__questionlistener_timerevent_callback(this, cbval1);
            return;
        }
        KNSCore__QuestionListener::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knscore__questionlistener_childevent_callback) {
            QChildEvent* cbval1 = event;
            knscore__questionlistener_childevent_callback(this, cbval1);
            return;
        }
        KNSCore__QuestionListener::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knscore__questionlistener_customevent_callback) {
            QEvent* cbval1 = event;
            knscore__questionlistener_customevent_callback(this, cbval1);
            return;
        }
        KNSCore__QuestionListener::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knscore__questionlistener_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knscore__questionlistener_connectnotify_callback(this, cbval1);
            return;
        }
        KNSCore__QuestionListener::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knscore__questionlistener_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knscore__questionlistener_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNSCore__QuestionListener::disconnectNotify(signal);
    }

    // Friend functions
    friend void KNSCore__QuestionListener_SuperTimerEvent(KNSCore::QuestionListener* self, QTimerEvent* event);
    friend void KNSCore__QuestionListener_SuperChildEvent(KNSCore::QuestionListener* self, QChildEvent* event);
    friend void KNSCore__QuestionListener_SuperCustomEvent(KNSCore::QuestionListener* self, QEvent* event);
    friend void KNSCore__QuestionListener_SuperConnectNotify(KNSCore::QuestionListener* self, const QMetaMethod* signal);
    friend void KNSCore__QuestionListener_SuperDisconnectNotify(KNSCore::QuestionListener* self, const QMetaMethod* signal);
};

#endif
