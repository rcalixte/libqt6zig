#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBLANGUAGETOOLGETLISTOFLANGUAGEJOB_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBLANGUAGETOOLGETLISTOFLANGUAGEJOB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::LanguageToolGetListOfLanguageJob
class VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob final : public TextGrammarCheck::LanguageToolGetListOfLanguageJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__LanguageToolGetListOfLanguageJob_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__LanguageToolGetListOfLanguageJob*);
    using TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacast_Callback = void* (*)(TextGrammarCheck__LanguageToolGetListOfLanguageJob*, const char*);
    using TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacall_Callback = int (*)(TextGrammarCheck__LanguageToolGetListOfLanguageJob*, int, int, void**);
    using TextGrammarCheck__LanguageToolGetListOfLanguageJob_Event_Callback = bool (*)(TextGrammarCheck__LanguageToolGetListOfLanguageJob*, QEvent*);
    using TextGrammarCheck__LanguageToolGetListOfLanguageJob_EventFilter_Callback = bool (*)(TextGrammarCheck__LanguageToolGetListOfLanguageJob*, QObject*, QEvent*);
    using TextGrammarCheck__LanguageToolGetListOfLanguageJob_TimerEvent_Callback = void (*)(TextGrammarCheck__LanguageToolGetListOfLanguageJob*, QTimerEvent*);
    using TextGrammarCheck__LanguageToolGetListOfLanguageJob_ChildEvent_Callback = void (*)(TextGrammarCheck__LanguageToolGetListOfLanguageJob*, QChildEvent*);
    using TextGrammarCheck__LanguageToolGetListOfLanguageJob_CustomEvent_Callback = void (*)(TextGrammarCheck__LanguageToolGetListOfLanguageJob*, QEvent*);
    using TextGrammarCheck__LanguageToolGetListOfLanguageJob_ConnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolGetListOfLanguageJob*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolGetListOfLanguageJob_DisconnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolGetListOfLanguageJob*, QMetaMethod*);
    using TextGrammarCheck::LanguageToolGetListOfLanguageJob::isSignalConnected;
    using TextGrammarCheck::LanguageToolGetListOfLanguageJob::receivers;
    using TextGrammarCheck::LanguageToolGetListOfLanguageJob::sender;
    using TextGrammarCheck::LanguageToolGetListOfLanguageJob::senderSignalIndex;

    // Instance callback storage
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_MetaObject_Callback textgrammarcheck__languagetoolgetlistoflanguagejob_metaobject_callback = nullptr;
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacast_Callback textgrammarcheck__languagetoolgetlistoflanguagejob_metacast_callback = nullptr;
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacall_Callback textgrammarcheck__languagetoolgetlistoflanguagejob_metacall_callback = nullptr;
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_Event_Callback textgrammarcheck__languagetoolgetlistoflanguagejob_event_callback = nullptr;
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_EventFilter_Callback textgrammarcheck__languagetoolgetlistoflanguagejob_eventfilter_callback = nullptr;
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_TimerEvent_Callback textgrammarcheck__languagetoolgetlistoflanguagejob_timerevent_callback = nullptr;
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_ChildEvent_Callback textgrammarcheck__languagetoolgetlistoflanguagejob_childevent_callback = nullptr;
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_CustomEvent_Callback textgrammarcheck__languagetoolgetlistoflanguagejob_customevent_callback = nullptr;
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_ConnectNotify_Callback textgrammarcheck__languagetoolgetlistoflanguagejob_connectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_DisconnectNotify_Callback textgrammarcheck__languagetoolgetlistoflanguagejob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::LanguageToolGetListOfLanguageJob {
        using TextGrammarCheck::LanguageToolGetListOfLanguageJob::childEvent;
        using TextGrammarCheck::LanguageToolGetListOfLanguageJob::connectNotify;
        using TextGrammarCheck::LanguageToolGetListOfLanguageJob::customEvent;
        using TextGrammarCheck::LanguageToolGetListOfLanguageJob::disconnectNotify;
        using TextGrammarCheck::LanguageToolGetListOfLanguageJob::timerEvent;
    };

    VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob() : TextGrammarCheck::LanguageToolGetListOfLanguageJob() {};
    VirtualTextGrammarCheckLanguageToolGetListOfLanguageJob(QObject* parent) : TextGrammarCheck::LanguageToolGetListOfLanguageJob(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__languagetoolgetlistoflanguagejob_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__languagetoolgetlistoflanguagejob_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolGetListOfLanguageJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__languagetoolgetlistoflanguagejob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__languagetoolgetlistoflanguagejob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolGetListOfLanguageJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__languagetoolgetlistoflanguagejob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__languagetoolgetlistoflanguagejob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolGetListOfLanguageJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__languagetoolgetlistoflanguagejob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textgrammarcheck__languagetoolgetlistoflanguagejob_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolGetListOfLanguageJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__languagetoolgetlistoflanguagejob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textgrammarcheck__languagetoolgetlistoflanguagejob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolGetListOfLanguageJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__languagetoolgetlistoflanguagejob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textgrammarcheck__languagetoolgetlistoflanguagejob_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolGetListOfLanguageJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__languagetoolgetlistoflanguagejob_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__languagetoolgetlistoflanguagejob_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolGetListOfLanguageJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolgetlistoflanguagejob_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__languagetoolgetlistoflanguagejob_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolGetListOfLanguageJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolgetlistoflanguagejob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__languagetoolgetlistoflanguagejob_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolGetListOfLanguageJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolgetlistoflanguagejob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__languagetoolgetlistoflanguagejob_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolGetListOfLanguageJob::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperTimerEvent(TextGrammarCheck::LanguageToolGetListOfLanguageJob* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperChildEvent(TextGrammarCheck::LanguageToolGetListOfLanguageJob* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperCustomEvent(TextGrammarCheck::LanguageToolGetListOfLanguageJob* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperConnectNotify(TextGrammarCheck::LanguageToolGetListOfLanguageJob* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperDisconnectNotify(TextGrammarCheck::LanguageToolGetListOfLanguageJob* self, const QMetaMethod* signal);
};

#endif
