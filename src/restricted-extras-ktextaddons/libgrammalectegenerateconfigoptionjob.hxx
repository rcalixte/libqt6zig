#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMALECTEGENERATECONFIGOPTIONJOB_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMALECTEGENERATECONFIGOPTIONJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammalecteGenerateConfigOptionJob
class VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob final : public TextGrammarCheck::GrammalecteGenerateConfigOptionJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacast_Callback = void* (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, const char*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacall_Callback = int (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, int, int, void**);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Event_Callback = bool (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QEvent*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QObject*, QEvent*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QTimerEvent*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QChildEvent*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QEvent*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QMetaMethod*);
    using TextGrammarCheck::GrammalecteGenerateConfigOptionJob::isSignalConnected;
    using TextGrammarCheck::GrammalecteGenerateConfigOptionJob::receivers;
    using TextGrammarCheck::GrammalecteGenerateConfigOptionJob::sender;
    using TextGrammarCheck::GrammalecteGenerateConfigOptionJob::senderSignalIndex;

    // Instance callback storage
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_MetaObject_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_metaobject_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacast_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_metacast_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacall_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_metacall_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Event_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_event_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_EventFilter_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_TimerEvent_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_timerevent_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ChildEvent_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_childevent_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_CustomEvent_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_customevent_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ConnectNotify_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_DisconnectNotify_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::GrammalecteGenerateConfigOptionJob {
        using TextGrammarCheck::GrammalecteGenerateConfigOptionJob::childEvent;
        using TextGrammarCheck::GrammalecteGenerateConfigOptionJob::connectNotify;
        using TextGrammarCheck::GrammalecteGenerateConfigOptionJob::customEvent;
        using TextGrammarCheck::GrammalecteGenerateConfigOptionJob::disconnectNotify;
        using TextGrammarCheck::GrammalecteGenerateConfigOptionJob::timerEvent;
    };

    VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob() : TextGrammarCheck::GrammalecteGenerateConfigOptionJob() {};
    VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob(QObject* parent) : TextGrammarCheck::GrammalecteGenerateConfigOptionJob(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__grammalectegenerateconfigoptionjob_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__grammalectegenerateconfigoptionjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__grammalectegenerateconfigoptionjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textgrammarcheck__grammalectegenerateconfigoptionjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textgrammarcheck__grammalectegenerateconfigoptionjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textgrammarcheck__grammalectegenerateconfigoptionjob_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteGenerateConfigOptionJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__grammalectegenerateconfigoptionjob_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteGenerateConfigOptionJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__grammalectegenerateconfigoptionjob_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteGenerateConfigOptionJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammalectegenerateconfigoptionjob_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteGenerateConfigOptionJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammalectegenerateconfigoptionjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteGenerateConfigOptionJob::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperTimerEvent(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperChildEvent(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperCustomEvent(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperConnectNotify(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperDisconnectNotify(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal);
};

#endif
