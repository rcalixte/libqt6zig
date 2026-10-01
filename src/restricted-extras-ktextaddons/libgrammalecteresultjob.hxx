#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMALECTERESULTJOB_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMALECTERESULTJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammalecteResultJob
class VirtualTextGrammarCheckGrammalecteResultJob final : public TextGrammarCheck::GrammalecteResultJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__GrammalecteResultJob_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__GrammalecteResultJob*);
    using TextGrammarCheck__GrammalecteResultJob_Metacast_Callback = void* (*)(TextGrammarCheck__GrammalecteResultJob*, const char*);
    using TextGrammarCheck__GrammalecteResultJob_Metacall_Callback = int (*)(TextGrammarCheck__GrammalecteResultJob*, int, int, void**);
    using TextGrammarCheck__GrammalecteResultJob_Event_Callback = bool (*)(TextGrammarCheck__GrammalecteResultJob*, QEvent*);
    using TextGrammarCheck__GrammalecteResultJob_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammalecteResultJob*, QObject*, QEvent*);
    using TextGrammarCheck__GrammalecteResultJob_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultJob*, QTimerEvent*);
    using TextGrammarCheck__GrammalecteResultJob_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultJob*, QChildEvent*);
    using TextGrammarCheck__GrammalecteResultJob_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultJob*, QEvent*);
    using TextGrammarCheck__GrammalecteResultJob_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteResultJob*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteResultJob_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteResultJob*, QMetaMethod*);
    using TextGrammarCheck::GrammalecteResultJob::isSignalConnected;
    using TextGrammarCheck::GrammalecteResultJob::receivers;
    using TextGrammarCheck::GrammalecteResultJob::sender;
    using TextGrammarCheck::GrammalecteResultJob::senderSignalIndex;

    // Instance callback storage
    TextGrammarCheck__GrammalecteResultJob_MetaObject_Callback textgrammarcheck__grammalecteresultjob_metaobject_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_Metacast_Callback textgrammarcheck__grammalecteresultjob_metacast_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_Metacall_Callback textgrammarcheck__grammalecteresultjob_metacall_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_Event_Callback textgrammarcheck__grammalecteresultjob_event_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_EventFilter_Callback textgrammarcheck__grammalecteresultjob_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_TimerEvent_Callback textgrammarcheck__grammalecteresultjob_timerevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_ChildEvent_Callback textgrammarcheck__grammalecteresultjob_childevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_CustomEvent_Callback textgrammarcheck__grammalecteresultjob_customevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_ConnectNotify_Callback textgrammarcheck__grammalecteresultjob_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_DisconnectNotify_Callback textgrammarcheck__grammalecteresultjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::GrammalecteResultJob {
        using TextGrammarCheck::GrammalecteResultJob::childEvent;
        using TextGrammarCheck::GrammalecteResultJob::connectNotify;
        using TextGrammarCheck::GrammalecteResultJob::customEvent;
        using TextGrammarCheck::GrammalecteResultJob::disconnectNotify;
        using TextGrammarCheck::GrammalecteResultJob::timerEvent;
    };

    VirtualTextGrammarCheckGrammalecteResultJob() : TextGrammarCheck::GrammalecteResultJob() {};
    VirtualTextGrammarCheckGrammalecteResultJob(QObject* parent) : TextGrammarCheck::GrammalecteResultJob(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammalecteresultjob_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__grammalecteresultjob_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammalecteresultjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__grammalecteresultjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammalecteresultjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__grammalecteresultjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__grammalecteresultjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textgrammarcheck__grammalecteresultjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__grammalecteresultjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textgrammarcheck__grammalecteresultjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__grammalecteresultjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultjob_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammalecteresultjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultjob_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteresultjob_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultjob_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteresultjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammalecteresultjob_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteresultjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammalecteresultjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultJob::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammalecteResultJob_SuperTimerEvent(TextGrammarCheck::GrammalecteResultJob* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteResultJob_SuperChildEvent(TextGrammarCheck::GrammalecteResultJob* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteResultJob_SuperCustomEvent(TextGrammarCheck::GrammalecteResultJob* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteResultJob_SuperConnectNotify(TextGrammarCheck::GrammalecteResultJob* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteResultJob_SuperDisconnectNotify(TextGrammarCheck::GrammalecteResultJob* self, const QMetaMethod* signal);
};

#endif
