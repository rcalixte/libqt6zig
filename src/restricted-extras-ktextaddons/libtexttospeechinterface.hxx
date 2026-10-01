#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECHINTERFACE_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECHINTERFACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEditTextToSpeech::TextToSpeechInterface
class VirtualTextEditTextToSpeechTextToSpeechInterface final : public TextEditTextToSpeech::TextToSpeechInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextEditTextToSpeech__TextToSpeechInterface_MetaObject_Callback = QMetaObject* (*)(const TextEditTextToSpeech__TextToSpeechInterface*);
    using TextEditTextToSpeech__TextToSpeechInterface_Metacast_Callback = void* (*)(TextEditTextToSpeech__TextToSpeechInterface*, const char*);
    using TextEditTextToSpeech__TextToSpeechInterface_Metacall_Callback = int (*)(TextEditTextToSpeech__TextToSpeechInterface*, int, int, void**);
    using TextEditTextToSpeech__TextToSpeechInterface_Event_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechInterface*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechInterface_EventFilter_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechInterface*, QObject*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechInterface_TimerEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechInterface*, QTimerEvent*);
    using TextEditTextToSpeech__TextToSpeechInterface_ChildEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechInterface*, QChildEvent*);
    using TextEditTextToSpeech__TextToSpeechInterface_CustomEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechInterface*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechInterface_ConnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechInterface*, QMetaMethod*);
    using TextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechInterface*, QMetaMethod*);
    using TextEditTextToSpeech::TextToSpeechInterface::isSignalConnected;
    using TextEditTextToSpeech::TextToSpeechInterface::receivers;
    using TextEditTextToSpeech::TextToSpeechInterface::sender;
    using TextEditTextToSpeech::TextToSpeechInterface::senderSignalIndex;

    // Instance callback storage
    TextEditTextToSpeech__TextToSpeechInterface_MetaObject_Callback textedittexttospeech__texttospeechinterface_metaobject_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_Metacast_Callback textedittexttospeech__texttospeechinterface_metacast_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_Metacall_Callback textedittexttospeech__texttospeechinterface_metacall_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_Event_Callback textedittexttospeech__texttospeechinterface_event_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_EventFilter_Callback textedittexttospeech__texttospeechinterface_eventfilter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_TimerEvent_Callback textedittexttospeech__texttospeechinterface_timerevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_ChildEvent_Callback textedittexttospeech__texttospeechinterface_childevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_CustomEvent_Callback textedittexttospeech__texttospeechinterface_customevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_ConnectNotify_Callback textedittexttospeech__texttospeechinterface_connectnotify_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify_Callback textedittexttospeech__texttospeechinterface_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextEditTextToSpeech::TextToSpeechInterface {
        using TextEditTextToSpeech::TextToSpeechInterface::childEvent;
        using TextEditTextToSpeech::TextToSpeechInterface::connectNotify;
        using TextEditTextToSpeech::TextToSpeechInterface::customEvent;
        using TextEditTextToSpeech::TextToSpeechInterface::disconnectNotify;
        using TextEditTextToSpeech::TextToSpeechInterface::timerEvent;
    };

    VirtualTextEditTextToSpeechTextToSpeechInterface(TextEditTextToSpeech::TextToSpeechWidget* textToSpeechWidget) : TextEditTextToSpeech::TextToSpeechInterface(textToSpeechWidget) {};
    VirtualTextEditTextToSpeechTextToSpeechInterface(TextEditTextToSpeech::TextToSpeechWidget* textToSpeechWidget, QObject* parent) : TextEditTextToSpeech::TextToSpeechInterface(textToSpeechWidget, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textedittexttospeech__texttospeechinterface_metaobject_callback) {
            QMetaObject* callback_ret = textedittexttospeech__texttospeechinterface_metaobject_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textedittexttospeech__texttospeechinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textedittexttospeech__texttospeechinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textedittexttospeech__texttospeechinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textedittexttospeech__texttospeechinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textedittexttospeech__texttospeechinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textedittexttospeech__texttospeechinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textedittexttospeech__texttospeechinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textedittexttospeech__texttospeechinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textedittexttospeech__texttospeechinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textedittexttospeech__texttospeechinterface_timerevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textedittexttospeech__texttospeechinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            textedittexttospeech__texttospeechinterface_childevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechinterface_customevent_callback) {
            QEvent* cbval1 = event;
            textedittexttospeech__texttospeechinterface_customevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textedittexttospeech__texttospeechinterface_connectnotify_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textedittexttospeech__texttospeechinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechInterface::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextEditTextToSpeech__TextToSpeechInterface_SuperTimerEvent(TextEditTextToSpeech::TextToSpeechInterface* self, QTimerEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechInterface_SuperChildEvent(TextEditTextToSpeech::TextToSpeechInterface* self, QChildEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechInterface_SuperCustomEvent(TextEditTextToSpeech::TextToSpeechInterface* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechInterface_SuperConnectNotify(TextEditTextToSpeech::TextToSpeechInterface* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechInterface_SuperDisconnectNotify(TextEditTextToSpeech::TextToSpeechInterface* self, const QMetaMethod* signal);
};

#endif
