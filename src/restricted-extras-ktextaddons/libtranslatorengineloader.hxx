#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORENGINELOADER_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORENGINELOADER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorEngineLoader
class VirtualTextTranslatorTranslatorEngineLoader final : public TextTranslator::TranslatorEngineLoader {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextTranslator__TranslatorEngineLoader_MetaObject_Callback = QMetaObject* (*)(const TextTranslator__TranslatorEngineLoader*);
    using TextTranslator__TranslatorEngineLoader_Metacast_Callback = void* (*)(TextTranslator__TranslatorEngineLoader*, const char*);
    using TextTranslator__TranslatorEngineLoader_Metacall_Callback = int (*)(TextTranslator__TranslatorEngineLoader*, int, int, void**);
    using TextTranslator__TranslatorEngineLoader_Event_Callback = bool (*)(TextTranslator__TranslatorEngineLoader*, QEvent*);
    using TextTranslator__TranslatorEngineLoader_EventFilter_Callback = bool (*)(TextTranslator__TranslatorEngineLoader*, QObject*, QEvent*);
    using TextTranslator__TranslatorEngineLoader_TimerEvent_Callback = void (*)(TextTranslator__TranslatorEngineLoader*, QTimerEvent*);
    using TextTranslator__TranslatorEngineLoader_ChildEvent_Callback = void (*)(TextTranslator__TranslatorEngineLoader*, QChildEvent*);
    using TextTranslator__TranslatorEngineLoader_CustomEvent_Callback = void (*)(TextTranslator__TranslatorEngineLoader*, QEvent*);
    using TextTranslator__TranslatorEngineLoader_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorEngineLoader*, QMetaMethod*);
    using TextTranslator__TranslatorEngineLoader_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorEngineLoader*, QMetaMethod*);
    using TextTranslator::TranslatorEngineLoader::isSignalConnected;
    using TextTranslator::TranslatorEngineLoader::receivers;
    using TextTranslator::TranslatorEngineLoader::sender;
    using TextTranslator::TranslatorEngineLoader::senderSignalIndex;

    // Instance callback storage
    TextTranslator__TranslatorEngineLoader_MetaObject_Callback texttranslator__translatorengineloader_metaobject_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_Metacast_Callback texttranslator__translatorengineloader_metacast_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_Metacall_Callback texttranslator__translatorengineloader_metacall_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_Event_Callback texttranslator__translatorengineloader_event_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_EventFilter_Callback texttranslator__translatorengineloader_eventfilter_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_TimerEvent_Callback texttranslator__translatorengineloader_timerevent_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_ChildEvent_Callback texttranslator__translatorengineloader_childevent_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_CustomEvent_Callback texttranslator__translatorengineloader_customevent_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_ConnectNotify_Callback texttranslator__translatorengineloader_connectnotify_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_DisconnectNotify_Callback texttranslator__translatorengineloader_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextTranslator::TranslatorEngineLoader {
        using TextTranslator::TranslatorEngineLoader::childEvent;
        using TextTranslator::TranslatorEngineLoader::connectNotify;
        using TextTranslator::TranslatorEngineLoader::customEvent;
        using TextTranslator::TranslatorEngineLoader::disconnectNotify;
        using TextTranslator::TranslatorEngineLoader::timerEvent;
    };

    VirtualTextTranslatorTranslatorEngineLoader() : TextTranslator::TranslatorEngineLoader() {};
    VirtualTextTranslatorTranslatorEngineLoader(QObject* parent) : TextTranslator::TranslatorEngineLoader(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorengineloader_metaobject_callback) {
            QMetaObject* callback_ret = texttranslator__translatorengineloader_metaobject_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineLoader::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorengineloader_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = texttranslator__translatorengineloader_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineLoader::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorengineloader_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = texttranslator__translatorengineloader_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEngineLoader::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (texttranslator__translatorengineloader_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = texttranslator__translatorengineloader_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineLoader::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (texttranslator__translatorengineloader_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = texttranslator__translatorengineloader_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineLoader::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorengineloader_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            texttranslator__translatorengineloader_timerevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineLoader::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorengineloader_childevent_callback) {
            QChildEvent* cbval1 = event;
            texttranslator__translatorengineloader_childevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineLoader::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorengineloader_customevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatorengineloader_customevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineLoader::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineloader_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorengineloader_connectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineLoader::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineloader_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorengineloader_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineLoader::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextTranslator__TranslatorEngineLoader_SuperTimerEvent(TextTranslator::TranslatorEngineLoader* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorEngineLoader_SuperChildEvent(TextTranslator::TranslatorEngineLoader* self, QChildEvent* event);
    friend void TextTranslator__TranslatorEngineLoader_SuperCustomEvent(TextTranslator::TranslatorEngineLoader* self, QEvent* event);
    friend void TextTranslator__TranslatorEngineLoader_SuperConnectNotify(TextTranslator::TranslatorEngineLoader* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEngineLoader_SuperDisconnectNotify(TextTranslator::TranslatorEngineLoader* self, const QMetaMethod* signal);
};

#endif
