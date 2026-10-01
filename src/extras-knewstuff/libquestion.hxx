#pragma once
#ifndef EXTRAS_KNEWSTUFF_LIBQUESTION_HXX
#define EXTRAS_KNEWSTUFF_LIBQUESTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSCore::Question
class VirtualKNSCoreQuestion final : public KNSCore::Question {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNSCore__Question_MetaObject_Callback = QMetaObject* (*)(const KNSCore__Question*);
    using KNSCore__Question_Metacast_Callback = void* (*)(KNSCore__Question*, const char*);
    using KNSCore__Question_Metacall_Callback = int (*)(KNSCore__Question*, int, int, void**);
    using KNSCore__Question_Event_Callback = bool (*)(KNSCore__Question*, QEvent*);
    using KNSCore__Question_EventFilter_Callback = bool (*)(KNSCore__Question*, QObject*, QEvent*);
    using KNSCore__Question_TimerEvent_Callback = void (*)(KNSCore__Question*, QTimerEvent*);
    using KNSCore__Question_ChildEvent_Callback = void (*)(KNSCore__Question*, QChildEvent*);
    using KNSCore__Question_CustomEvent_Callback = void (*)(KNSCore__Question*, QEvent*);
    using KNSCore__Question_ConnectNotify_Callback = void (*)(KNSCore__Question*, QMetaMethod*);
    using KNSCore__Question_DisconnectNotify_Callback = void (*)(KNSCore__Question*, QMetaMethod*);
    using KNSCore::Question::isSignalConnected;
    using KNSCore::Question::receivers;
    using KNSCore::Question::sender;
    using KNSCore::Question::senderSignalIndex;

    // Instance callback storage
    KNSCore__Question_MetaObject_Callback knscore__question_metaobject_callback = nullptr;
    KNSCore__Question_Metacast_Callback knscore__question_metacast_callback = nullptr;
    KNSCore__Question_Metacall_Callback knscore__question_metacall_callback = nullptr;
    KNSCore__Question_Event_Callback knscore__question_event_callback = nullptr;
    KNSCore__Question_EventFilter_Callback knscore__question_eventfilter_callback = nullptr;
    KNSCore__Question_TimerEvent_Callback knscore__question_timerevent_callback = nullptr;
    KNSCore__Question_ChildEvent_Callback knscore__question_childevent_callback = nullptr;
    KNSCore__Question_CustomEvent_Callback knscore__question_customevent_callback = nullptr;
    KNSCore__Question_ConnectNotify_Callback knscore__question_connectnotify_callback = nullptr;
    KNSCore__Question_DisconnectNotify_Callback knscore__question_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNSCore::Question {
        using KNSCore::Question::childEvent;
        using KNSCore::Question::connectNotify;
        using KNSCore::Question::customEvent;
        using KNSCore::Question::disconnectNotify;
        using KNSCore::Question::timerEvent;
    };

    VirtualKNSCoreQuestion() : KNSCore::Question() {};
    VirtualKNSCoreQuestion(KNSCore::Question::QuestionType param1) : KNSCore::Question(param1) {};
    VirtualKNSCoreQuestion(KNSCore::Question::QuestionType param1, QObject* parent) : KNSCore::Question(param1, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knscore__question_metaobject_callback) {
            QMetaObject* callback_ret = knscore__question_metaobject_callback(this);
            return callback_ret;
        }
        return KNSCore__Question::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knscore__question_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knscore__question_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__Question::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knscore__question_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knscore__question_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__Question::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knscore__question_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knscore__question_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__Question::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knscore__question_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = knscore__question_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSCore__Question::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knscore__question_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knscore__question_timerevent_callback(this, cbval1);
            return;
        }
        KNSCore__Question::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knscore__question_childevent_callback) {
            QChildEvent* cbval1 = event;
            knscore__question_childevent_callback(this, cbval1);
            return;
        }
        KNSCore__Question::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knscore__question_customevent_callback) {
            QEvent* cbval1 = event;
            knscore__question_customevent_callback(this, cbval1);
            return;
        }
        KNSCore__Question::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knscore__question_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knscore__question_connectnotify_callback(this, cbval1);
            return;
        }
        KNSCore__Question::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knscore__question_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knscore__question_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNSCore__Question::disconnectNotify(signal);
    }

    // Friend functions
    friend void KNSCore__Question_SuperTimerEvent(KNSCore::Question* self, QTimerEvent* event);
    friend void KNSCore__Question_SuperChildEvent(KNSCore::Question* self, QChildEvent* event);
    friend void KNSCore__Question_SuperCustomEvent(KNSCore::Question* self, QEvent* event);
    friend void KNSCore__Question_SuperConnectNotify(KNSCore::Question* self, const QMetaMethod* signal);
    friend void KNSCore__Question_SuperDisconnectNotify(KNSCore::Question* self, const QMetaMethod* signal);
};

#endif
