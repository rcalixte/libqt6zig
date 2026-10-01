#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORENGINEPLUGIN_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORENGINEPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorEnginePlugin
class VirtualTextTranslatorTranslatorEnginePlugin : public TextTranslator::TranslatorEnginePlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextTranslator__TranslatorEnginePlugin_MetaObject_Callback = QMetaObject* (*)(const TextTranslator__TranslatorEnginePlugin*);
    using TextTranslator__TranslatorEnginePlugin_Metacast_Callback = void* (*)(TextTranslator__TranslatorEnginePlugin*, const char*);
    using TextTranslator__TranslatorEnginePlugin_Metacall_Callback = int (*)(TextTranslator__TranslatorEnginePlugin*, int, int, void**);
    using TextTranslator__TranslatorEnginePlugin_Translate_Callback = void (*)(TextTranslator__TranslatorEnginePlugin*);
    using TextTranslator__TranslatorEnginePlugin_LanguageCode_Callback = const char* (*)(TextTranslator__TranslatorEnginePlugin*, const char*);
    using TextTranslator__TranslatorEnginePlugin_Event_Callback = bool (*)(TextTranslator__TranslatorEnginePlugin*, QEvent*);
    using TextTranslator__TranslatorEnginePlugin_EventFilter_Callback = bool (*)(TextTranslator__TranslatorEnginePlugin*, QObject*, QEvent*);
    using TextTranslator__TranslatorEnginePlugin_TimerEvent_Callback = void (*)(TextTranslator__TranslatorEnginePlugin*, QTimerEvent*);
    using TextTranslator__TranslatorEnginePlugin_ChildEvent_Callback = void (*)(TextTranslator__TranslatorEnginePlugin*, QChildEvent*);
    using TextTranslator__TranslatorEnginePlugin_CustomEvent_Callback = void (*)(TextTranslator__TranslatorEnginePlugin*, QEvent*);
    using TextTranslator__TranslatorEnginePlugin_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorEnginePlugin*, QMetaMethod*);
    using TextTranslator__TranslatorEnginePlugin_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorEnginePlugin*, QMetaMethod*);
    using TextTranslator::TranslatorEnginePlugin::appendResult;
    using TextTranslator::TranslatorEnginePlugin::hasDebug;
    using TextTranslator::TranslatorEnginePlugin::isSignalConnected;
    using TextTranslator::TranslatorEnginePlugin::receivers;
    using TextTranslator::TranslatorEnginePlugin::sender;
    using TextTranslator::TranslatorEnginePlugin::senderSignalIndex;
    using TextTranslator::TranslatorEnginePlugin::slotError;
    using TextTranslator::TranslatorEnginePlugin::verifyFromAndToLanguage;

    // Instance callback storage
    TextTranslator__TranslatorEnginePlugin_MetaObject_Callback texttranslator__translatorengineplugin_metaobject_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_Metacast_Callback texttranslator__translatorengineplugin_metacast_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_Metacall_Callback texttranslator__translatorengineplugin_metacall_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_Translate_Callback texttranslator__translatorengineplugin_translate_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_LanguageCode_Callback texttranslator__translatorengineplugin_languagecode_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_Event_Callback texttranslator__translatorengineplugin_event_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_EventFilter_Callback texttranslator__translatorengineplugin_eventfilter_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_TimerEvent_Callback texttranslator__translatorengineplugin_timerevent_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_ChildEvent_Callback texttranslator__translatorengineplugin_childevent_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_CustomEvent_Callback texttranslator__translatorengineplugin_customevent_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_ConnectNotify_Callback texttranslator__translatorengineplugin_connectnotify_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_DisconnectNotify_Callback texttranslator__translatorengineplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextTranslator::TranslatorEnginePlugin {
        using TextTranslator::TranslatorEnginePlugin::childEvent;
        using TextTranslator::TranslatorEnginePlugin::connectNotify;
        using TextTranslator::TranslatorEnginePlugin::customEvent;
        using TextTranslator::TranslatorEnginePlugin::disconnectNotify;
        using TextTranslator::TranslatorEnginePlugin::languageCode;
        using TextTranslator::TranslatorEnginePlugin::timerEvent;
    };

    VirtualTextTranslatorTranslatorEnginePlugin() : TextTranslator::TranslatorEnginePlugin() {};
    VirtualTextTranslatorTranslatorEnginePlugin(QObject* parent) : TextTranslator::TranslatorEnginePlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorengineplugin_metaobject_callback) {
            QMetaObject* callback_ret = texttranslator__translatorengineplugin_metaobject_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorEnginePlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorengineplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = texttranslator__translatorengineplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEnginePlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorengineplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = texttranslator__translatorengineplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEnginePlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void translate() override {
        if (texttranslator__translatorengineplugin_translate_callback) {
            texttranslator__translatorengineplugin_translate_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextTranslator::TranslatorEnginePlugin::translate called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString languageCode(const QString& langStr) override {
        if (texttranslator__translatorengineplugin_languagecode_callback) {
            const auto langStr_ret = langStr;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray langStr_b = langStr_ret.toUtf8();
            auto langStr_str_len = langStr_b.length();
            const char* langStr_str = static_cast<const char*>(malloc(langStr_str_len + 1));
            memcpy((void*)langStr_str, langStr_b.data(), langStr_str_len);
            ((char*)langStr_str)[langStr_str_len] = '\0';
            const char* cbval1 = langStr_str;
            const char* callback_ret = texttranslator__translatorengineplugin_languagecode_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(langStr_str);
            return callback_ret_QString;
        }
        return TextTranslator__TranslatorEnginePlugin::languageCode(langStr);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (texttranslator__translatorengineplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = texttranslator__translatorengineplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEnginePlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (texttranslator__translatorengineplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = texttranslator__translatorengineplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorEnginePlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorengineplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            texttranslator__translatorengineplugin_timerevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEnginePlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorengineplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            texttranslator__translatorengineplugin_childevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEnginePlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorengineplugin_customevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatorengineplugin_customevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEnginePlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorengineplugin_connectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEnginePlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorengineplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEnginePlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend libqt_string TextTranslator__TranslatorEnginePlugin_SuperLanguageCode(TextTranslator::TranslatorEnginePlugin* self, const libqt_string langStr);
    friend void TextTranslator__TranslatorEnginePlugin_SuperTimerEvent(TextTranslator::TranslatorEnginePlugin* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorEnginePlugin_SuperChildEvent(TextTranslator::TranslatorEnginePlugin* self, QChildEvent* event);
    friend void TextTranslator__TranslatorEnginePlugin_SuperCustomEvent(TextTranslator::TranslatorEnginePlugin* self, QEvent* event);
    friend void TextTranslator__TranslatorEnginePlugin_SuperConnectNotify(TextTranslator::TranslatorEnginePlugin* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEnginePlugin_SuperDisconnectNotify(TextTranslator::TranslatorEnginePlugin* self, const QMetaMethod* signal);
};

#endif
