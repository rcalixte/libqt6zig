#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECHACTIONS_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECHACTIONS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEditTextToSpeech::TextToSpeechActions
class VirtualTextEditTextToSpeechTextToSpeechActions final : public TextEditTextToSpeech::TextToSpeechActions {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextEditTextToSpeech__TextToSpeechActions_MetaObject_Callback = QMetaObject* (*)(const TextEditTextToSpeech__TextToSpeechActions*);
    using TextEditTextToSpeech__TextToSpeechActions_Metacast_Callback = void* (*)(TextEditTextToSpeech__TextToSpeechActions*, const char*);
    using TextEditTextToSpeech__TextToSpeechActions_Metacall_Callback = int (*)(TextEditTextToSpeech__TextToSpeechActions*, int, int, void**);
    using TextEditTextToSpeech__TextToSpeechActions_Event_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechActions*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechActions_EventFilter_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechActions*, QObject*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechActions_TimerEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechActions*, QTimerEvent*);
    using TextEditTextToSpeech__TextToSpeechActions_ChildEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechActions*, QChildEvent*);
    using TextEditTextToSpeech__TextToSpeechActions_CustomEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechActions*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechActions_ConnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechActions*, QMetaMethod*);
    using TextEditTextToSpeech__TextToSpeechActions_DisconnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechActions*, QMetaMethod*);
    using TextEditTextToSpeech::TextToSpeechActions::isSignalConnected;
    using TextEditTextToSpeech::TextToSpeechActions::receivers;
    using TextEditTextToSpeech::TextToSpeechActions::sender;
    using TextEditTextToSpeech::TextToSpeechActions::senderSignalIndex;

    // Instance callback storage
    TextEditTextToSpeech__TextToSpeechActions_MetaObject_Callback textedittexttospeech__texttospeechactions_metaobject_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_Metacast_Callback textedittexttospeech__texttospeechactions_metacast_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_Metacall_Callback textedittexttospeech__texttospeechactions_metacall_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_Event_Callback textedittexttospeech__texttospeechactions_event_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_EventFilter_Callback textedittexttospeech__texttospeechactions_eventfilter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_TimerEvent_Callback textedittexttospeech__texttospeechactions_timerevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_ChildEvent_Callback textedittexttospeech__texttospeechactions_childevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_CustomEvent_Callback textedittexttospeech__texttospeechactions_customevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_ConnectNotify_Callback textedittexttospeech__texttospeechactions_connectnotify_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_DisconnectNotify_Callback textedittexttospeech__texttospeechactions_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextEditTextToSpeech::TextToSpeechActions {
        using TextEditTextToSpeech::TextToSpeechActions::childEvent;
        using TextEditTextToSpeech::TextToSpeechActions::connectNotify;
        using TextEditTextToSpeech::TextToSpeechActions::customEvent;
        using TextEditTextToSpeech::TextToSpeechActions::disconnectNotify;
        using TextEditTextToSpeech::TextToSpeechActions::timerEvent;
    };

    VirtualTextEditTextToSpeechTextToSpeechActions() : TextEditTextToSpeech::TextToSpeechActions() {};
    VirtualTextEditTextToSpeechTextToSpeechActions(QObject* parent) : TextEditTextToSpeech::TextToSpeechActions(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textedittexttospeech__texttospeechactions_metaobject_callback) {
            QMetaObject* callback_ret = textedittexttospeech__texttospeechactions_metaobject_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechActions::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textedittexttospeech__texttospeechactions_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textedittexttospeech__texttospeechactions_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechActions::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textedittexttospeech__texttospeechactions_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textedittexttospeech__texttospeechactions_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechActions::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textedittexttospeech__texttospeechactions_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textedittexttospeech__texttospeechactions_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechActions::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textedittexttospeech__texttospeechactions_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textedittexttospeech__texttospeechactions_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechActions::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textedittexttospeech__texttospeechactions_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textedittexttospeech__texttospeechactions_timerevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechActions::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textedittexttospeech__texttospeechactions_childevent_callback) {
            QChildEvent* cbval1 = event;
            textedittexttospeech__texttospeechactions_childevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechActions::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechactions_customevent_callback) {
            QEvent* cbval1 = event;
            textedittexttospeech__texttospeechactions_customevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechActions::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechactions_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textedittexttospeech__texttospeechactions_connectnotify_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechActions::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechactions_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textedittexttospeech__texttospeechactions_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechActions::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextEditTextToSpeech__TextToSpeechActions_SuperTimerEvent(TextEditTextToSpeech::TextToSpeechActions* self, QTimerEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechActions_SuperChildEvent(TextEditTextToSpeech::TextToSpeechActions* self, QChildEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechActions_SuperCustomEvent(TextEditTextToSpeech::TextToSpeechActions* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechActions_SuperConnectNotify(TextEditTextToSpeech::TextToSpeechActions* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechActions_SuperDisconnectNotify(TextEditTextToSpeech::TextToSpeechActions* self, const QMetaMethod* signal);
};

#endif
