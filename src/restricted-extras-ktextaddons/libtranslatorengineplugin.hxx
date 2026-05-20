#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTRANSLATORENGINEPLUGIN_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTRANSLATORENGINEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorEnginePlugin so that we can call protected methods
class VirtualTextTranslatorTranslatorEnginePlugin : public TextTranslator::TranslatorEnginePlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualTextTranslatorTranslatorEnginePlugin = true;

    // Virtual class public types (including callbacks)
    using TextTranslator__TranslatorEnginePlugin_MetaObject_Callback = QMetaObject* (*)();
    using TextTranslator__TranslatorEnginePlugin_Metacast_Callback = void* (*)(TextTranslator__TranslatorEnginePlugin*, const char*);
    using TextTranslator__TranslatorEnginePlugin_Metacall_Callback = int (*)(TextTranslator__TranslatorEnginePlugin*, int, int, void**);
    using TextTranslator__TranslatorEnginePlugin_Translate_Callback = void (*)();
    using TextTranslator__TranslatorEnginePlugin_LanguageCode_Callback = const char* (*)(TextTranslator__TranslatorEnginePlugin*, const char*);
    using TextTranslator__TranslatorEnginePlugin_Event_Callback = bool (*)(TextTranslator__TranslatorEnginePlugin*, QEvent*);
    using TextTranslator__TranslatorEnginePlugin_EventFilter_Callback = bool (*)(TextTranslator__TranslatorEnginePlugin*, QObject*, QEvent*);
    using TextTranslator__TranslatorEnginePlugin_TimerEvent_Callback = void (*)(TextTranslator__TranslatorEnginePlugin*, QTimerEvent*);
    using TextTranslator__TranslatorEnginePlugin_ChildEvent_Callback = void (*)(TextTranslator__TranslatorEnginePlugin*, QChildEvent*);
    using TextTranslator__TranslatorEnginePlugin_CustomEvent_Callback = void (*)(TextTranslator__TranslatorEnginePlugin*, QEvent*);
    using TextTranslator__TranslatorEnginePlugin_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorEnginePlugin*, QMetaMethod*);
    using TextTranslator__TranslatorEnginePlugin_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorEnginePlugin*, QMetaMethod*);
    using TextTranslator__TranslatorEnginePlugin_AppendResult_Callback = void (*)(TextTranslator__TranslatorEnginePlugin*, const char*);
    using TextTranslator__TranslatorEnginePlugin_SlotError_Callback = void (*)(TextTranslator__TranslatorEnginePlugin*, int);
    using TextTranslator__TranslatorEnginePlugin_VerifyFromAndToLanguage_Callback = bool (*)();
    using TextTranslator__TranslatorEnginePlugin_HasDebug_Callback = bool (*)();
    using TextTranslator__TranslatorEnginePlugin_Sender_Callback = QObject* (*)();
    using TextTranslator__TranslatorEnginePlugin_SenderSignalIndex_Callback = int (*)();
    using TextTranslator__TranslatorEnginePlugin_Receivers_Callback = int (*)(const TextTranslator__TranslatorEnginePlugin*, const char*);
    using TextTranslator__TranslatorEnginePlugin_IsSignalConnected_Callback = bool (*)(const TextTranslator__TranslatorEnginePlugin*, QMetaMethod*);

  protected:
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
    TextTranslator__TranslatorEnginePlugin_AppendResult_Callback texttranslator__translatorengineplugin_appendresult_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_SlotError_Callback texttranslator__translatorengineplugin_sloterror_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_VerifyFromAndToLanguage_Callback texttranslator__translatorengineplugin_verifyfromandtolanguage_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_HasDebug_Callback texttranslator__translatorengineplugin_hasdebug_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_Sender_Callback texttranslator__translatorengineplugin_sender_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_SenderSignalIndex_Callback texttranslator__translatorengineplugin_sendersignalindex_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_Receivers_Callback texttranslator__translatorengineplugin_receivers_callback = nullptr;
    TextTranslator__TranslatorEnginePlugin_IsSignalConnected_Callback texttranslator__translatorengineplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool texttranslator__translatorengineplugin_metaobject_isbase = false;
    mutable bool texttranslator__translatorengineplugin_metacast_isbase = false;
    mutable bool texttranslator__translatorengineplugin_metacall_isbase = false;
    mutable bool texttranslator__translatorengineplugin_translate_isbase = false;
    mutable bool texttranslator__translatorengineplugin_languagecode_isbase = false;
    mutable bool texttranslator__translatorengineplugin_event_isbase = false;
    mutable bool texttranslator__translatorengineplugin_eventfilter_isbase = false;
    mutable bool texttranslator__translatorengineplugin_timerevent_isbase = false;
    mutable bool texttranslator__translatorengineplugin_childevent_isbase = false;
    mutable bool texttranslator__translatorengineplugin_customevent_isbase = false;
    mutable bool texttranslator__translatorengineplugin_connectnotify_isbase = false;
    mutable bool texttranslator__translatorengineplugin_disconnectnotify_isbase = false;
    mutable bool texttranslator__translatorengineplugin_appendresult_isbase = false;
    mutable bool texttranslator__translatorengineplugin_sloterror_isbase = false;
    mutable bool texttranslator__translatorengineplugin_verifyfromandtolanguage_isbase = false;
    mutable bool texttranslator__translatorengineplugin_hasdebug_isbase = false;
    mutable bool texttranslator__translatorengineplugin_sender_isbase = false;
    mutable bool texttranslator__translatorengineplugin_sendersignalindex_isbase = false;
    mutable bool texttranslator__translatorengineplugin_receivers_isbase = false;
    mutable bool texttranslator__translatorengineplugin_issignalconnected_isbase = false;

  public:
    VirtualTextTranslatorTranslatorEnginePlugin() : TextTranslator::TranslatorEnginePlugin() {};
    VirtualTextTranslatorTranslatorEnginePlugin(QObject* parent) : TextTranslator::TranslatorEnginePlugin(parent) {};

    // Callback setters
    inline void setTextTranslator__TranslatorEnginePlugin_MetaObject_Callback(TextTranslator__TranslatorEnginePlugin_MetaObject_Callback cb) { texttranslator__translatorengineplugin_metaobject_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_Metacast_Callback(TextTranslator__TranslatorEnginePlugin_Metacast_Callback cb) { texttranslator__translatorengineplugin_metacast_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_Metacall_Callback(TextTranslator__TranslatorEnginePlugin_Metacall_Callback cb) { texttranslator__translatorengineplugin_metacall_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_Translate_Callback(TextTranslator__TranslatorEnginePlugin_Translate_Callback cb) { texttranslator__translatorengineplugin_translate_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_LanguageCode_Callback(TextTranslator__TranslatorEnginePlugin_LanguageCode_Callback cb) { texttranslator__translatorengineplugin_languagecode_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_Event_Callback(TextTranslator__TranslatorEnginePlugin_Event_Callback cb) { texttranslator__translatorengineplugin_event_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_EventFilter_Callback(TextTranslator__TranslatorEnginePlugin_EventFilter_Callback cb) { texttranslator__translatorengineplugin_eventfilter_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_TimerEvent_Callback(TextTranslator__TranslatorEnginePlugin_TimerEvent_Callback cb) { texttranslator__translatorengineplugin_timerevent_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_ChildEvent_Callback(TextTranslator__TranslatorEnginePlugin_ChildEvent_Callback cb) { texttranslator__translatorengineplugin_childevent_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_CustomEvent_Callback(TextTranslator__TranslatorEnginePlugin_CustomEvent_Callback cb) { texttranslator__translatorengineplugin_customevent_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_ConnectNotify_Callback(TextTranslator__TranslatorEnginePlugin_ConnectNotify_Callback cb) { texttranslator__translatorengineplugin_connectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_DisconnectNotify_Callback(TextTranslator__TranslatorEnginePlugin_DisconnectNotify_Callback cb) { texttranslator__translatorengineplugin_disconnectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_AppendResult_Callback(TextTranslator__TranslatorEnginePlugin_AppendResult_Callback cb) { texttranslator__translatorengineplugin_appendresult_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_SlotError_Callback(TextTranslator__TranslatorEnginePlugin_SlotError_Callback cb) { texttranslator__translatorengineplugin_sloterror_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_VerifyFromAndToLanguage_Callback(TextTranslator__TranslatorEnginePlugin_VerifyFromAndToLanguage_Callback cb) { texttranslator__translatorengineplugin_verifyfromandtolanguage_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_HasDebug_Callback(TextTranslator__TranslatorEnginePlugin_HasDebug_Callback cb) { texttranslator__translatorengineplugin_hasdebug_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_Sender_Callback(TextTranslator__TranslatorEnginePlugin_Sender_Callback cb) { texttranslator__translatorengineplugin_sender_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_SenderSignalIndex_Callback(TextTranslator__TranslatorEnginePlugin_SenderSignalIndex_Callback cb) { texttranslator__translatorengineplugin_sendersignalindex_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_Receivers_Callback(TextTranslator__TranslatorEnginePlugin_Receivers_Callback cb) { texttranslator__translatorengineplugin_receivers_callback = cb; }
    inline void setTextTranslator__TranslatorEnginePlugin_IsSignalConnected_Callback(TextTranslator__TranslatorEnginePlugin_IsSignalConnected_Callback cb) { texttranslator__translatorengineplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextTranslator__TranslatorEnginePlugin_MetaObject_IsBase(bool value) const { texttranslator__translatorengineplugin_metaobject_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_Metacast_IsBase(bool value) const { texttranslator__translatorengineplugin_metacast_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_Metacall_IsBase(bool value) const { texttranslator__translatorengineplugin_metacall_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_Translate_IsBase(bool value) const { texttranslator__translatorengineplugin_translate_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_LanguageCode_IsBase(bool value) const { texttranslator__translatorengineplugin_languagecode_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_Event_IsBase(bool value) const { texttranslator__translatorengineplugin_event_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_EventFilter_IsBase(bool value) const { texttranslator__translatorengineplugin_eventfilter_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_TimerEvent_IsBase(bool value) const { texttranslator__translatorengineplugin_timerevent_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_ChildEvent_IsBase(bool value) const { texttranslator__translatorengineplugin_childevent_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_CustomEvent_IsBase(bool value) const { texttranslator__translatorengineplugin_customevent_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_ConnectNotify_IsBase(bool value) const { texttranslator__translatorengineplugin_connectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_DisconnectNotify_IsBase(bool value) const { texttranslator__translatorengineplugin_disconnectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_AppendResult_IsBase(bool value) const { texttranslator__translatorengineplugin_appendresult_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_SlotError_IsBase(bool value) const { texttranslator__translatorengineplugin_sloterror_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_VerifyFromAndToLanguage_IsBase(bool value) const { texttranslator__translatorengineplugin_verifyfromandtolanguage_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_HasDebug_IsBase(bool value) const { texttranslator__translatorengineplugin_hasdebug_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_Sender_IsBase(bool value) const { texttranslator__translatorengineplugin_sender_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_SenderSignalIndex_IsBase(bool value) const { texttranslator__translatorengineplugin_sendersignalindex_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_Receivers_IsBase(bool value) const { texttranslator__translatorengineplugin_receivers_isbase = value; }
    inline void setTextTranslator__TranslatorEnginePlugin_IsSignalConnected_IsBase(bool value) const { texttranslator__translatorengineplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorengineplugin_metaobject_isbase) {
            texttranslator__translatorengineplugin_metaobject_isbase = false;
            return TextTranslator__TranslatorEnginePlugin::metaObject();
        }
        auto metaobject_cb = texttranslator__translatorengineplugin_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorEnginePlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorengineplugin_metacast_isbase) {
            texttranslator__translatorengineplugin_metacast_isbase = false;
            return TextTranslator__TranslatorEnginePlugin::qt_metacast(param1);
        }
        auto metacast_cb = texttranslator__translatorengineplugin_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEnginePlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorengineplugin_metacall_isbase) {
            texttranslator__translatorengineplugin_metacall_isbase = false;
            return TextTranslator__TranslatorEnginePlugin::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = texttranslator__translatorengineplugin_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEnginePlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void translate() override {
        auto translate_cb = texttranslator__translatorengineplugin_translate_callback;
        if (translate_cb) {
            translate_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString languageCode(const QString& langStr) override {
        if (texttranslator__translatorengineplugin_languagecode_isbase) {
            texttranslator__translatorengineplugin_languagecode_isbase = false;
            return TextTranslator__TranslatorEnginePlugin::languageCode(langStr);
        }
        auto languagecode_cb = texttranslator__translatorengineplugin_languagecode_callback;
        if (languagecode_cb) {
            const QString langStr_ret = langStr;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray langStr_b = langStr_ret.toUtf8();
            auto langStr_str_len = langStr_b.length();
            const char* langStr_str = static_cast<const char*>(malloc(langStr_str_len + 1));
            memcpy((void*)langStr_str, langStr_b.data(), langStr_str_len);
            ((char*)langStr_str)[langStr_str_len] = '\0';
            const char* cbval1 = langStr_str;
            const char* callback_ret = languagecode_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(langStr_str);
            return callback_ret_QString;
        }
        return TextTranslator__TranslatorEnginePlugin::languageCode(langStr);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (texttranslator__translatorengineplugin_event_isbase) {
            texttranslator__translatorengineplugin_event_isbase = false;
            return TextTranslator__TranslatorEnginePlugin::event(event);
        }
        auto event_cb = texttranslator__translatorengineplugin_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEnginePlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (texttranslator__translatorengineplugin_eventfilter_isbase) {
            texttranslator__translatorengineplugin_eventfilter_isbase = false;
            return TextTranslator__TranslatorEnginePlugin::eventFilter(watched, event);
        }
        auto eventfilter_cb = texttranslator__translatorengineplugin_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorEnginePlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorengineplugin_timerevent_isbase) {
            texttranslator__translatorengineplugin_timerevent_isbase = false;
            TextTranslator__TranslatorEnginePlugin::timerEvent(event);
            return;
        }
        auto timerevent_cb = texttranslator__translatorengineplugin_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEnginePlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorengineplugin_childevent_isbase) {
            texttranslator__translatorengineplugin_childevent_isbase = false;
            TextTranslator__TranslatorEnginePlugin::childEvent(event);
            return;
        }
        auto childevent_cb = texttranslator__translatorengineplugin_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEnginePlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorengineplugin_customevent_isbase) {
            texttranslator__translatorengineplugin_customevent_isbase = false;
            TextTranslator__TranslatorEnginePlugin::customEvent(event);
            return;
        }
        auto customevent_cb = texttranslator__translatorengineplugin_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEnginePlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineplugin_connectnotify_isbase) {
            texttranslator__translatorengineplugin_connectnotify_isbase = false;
            TextTranslator__TranslatorEnginePlugin::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = texttranslator__translatorengineplugin_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEnginePlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineplugin_disconnectnotify_isbase) {
            texttranslator__translatorengineplugin_disconnectnotify_isbase = false;
            TextTranslator__TranslatorEnginePlugin::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = texttranslator__translatorengineplugin_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEnginePlugin::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void appendResult(const QString& result) {
        if (texttranslator__translatorengineplugin_appendresult_isbase) {
            texttranslator__translatorengineplugin_appendresult_isbase = false;
            TextTranslator__TranslatorEnginePlugin::appendResult(result);
            return;
        }
        auto appendresult_cb = texttranslator__translatorengineplugin_appendresult_callback;
        if (appendresult_cb) {
            const QString result_ret = result;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray result_b = result_ret.toUtf8();
            auto result_str_len = result_b.length();
            const char* result_str = static_cast<const char*>(malloc(result_str_len + 1));
            memcpy((void*)result_str, result_b.data(), result_str_len);
            ((char*)result_str)[result_str_len] = '\0';
            const char* cbval1 = result_str;
            appendresult_cb(this, cbval1);
            libqt_free(result_str);
            return;
        }
        TextTranslator__TranslatorEnginePlugin::appendResult(result);
    }

    // Virtual method for C ABI access and custom callback
    void slotError(QNetworkReply::NetworkError errorVal) {
        if (texttranslator__translatorengineplugin_sloterror_isbase) {
            texttranslator__translatorengineplugin_sloterror_isbase = false;
            TextTranslator__TranslatorEnginePlugin::slotError(errorVal);
            return;
        }
        auto sloterror_cb = texttranslator__translatorengineplugin_sloterror_callback;
        if (sloterror_cb) {
            int cbval1 = static_cast<int>(errorVal);
            sloterror_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEnginePlugin::slotError(errorVal);
    }

    // Virtual method for C ABI access and custom callback
    bool verifyFromAndToLanguage() {
        if (texttranslator__translatorengineplugin_verifyfromandtolanguage_isbase) {
            texttranslator__translatorengineplugin_verifyfromandtolanguage_isbase = false;
            return TextTranslator__TranslatorEnginePlugin::verifyFromAndToLanguage();
        }
        auto verifyfromandtolanguage_cb = texttranslator__translatorengineplugin_verifyfromandtolanguage_callback;
        if (verifyfromandtolanguage_cb) {
            bool callback_ret = verifyfromandtolanguage_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorEnginePlugin::verifyFromAndToLanguage();
    }

    // Virtual method for C ABI access and custom callback
    bool hasDebug() const {
        if (texttranslator__translatorengineplugin_hasdebug_isbase) {
            texttranslator__translatorengineplugin_hasdebug_isbase = false;
            return TextTranslator__TranslatorEnginePlugin::hasDebug();
        }
        auto hasdebug_cb = texttranslator__translatorengineplugin_hasdebug_callback;
        if (hasdebug_cb) {
            bool callback_ret = hasdebug_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorEnginePlugin::hasDebug();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (texttranslator__translatorengineplugin_sender_isbase) {
            texttranslator__translatorengineplugin_sender_isbase = false;
            return TextTranslator__TranslatorEnginePlugin::sender();
        }
        auto sender_cb = texttranslator__translatorengineplugin_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorEnginePlugin::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (texttranslator__translatorengineplugin_sendersignalindex_isbase) {
            texttranslator__translatorengineplugin_sendersignalindex_isbase = false;
            return TextTranslator__TranslatorEnginePlugin::senderSignalIndex();
        }
        auto sendersignalindex_cb = texttranslator__translatorengineplugin_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEnginePlugin::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (texttranslator__translatorengineplugin_receivers_isbase) {
            texttranslator__translatorengineplugin_receivers_isbase = false;
            return TextTranslator__TranslatorEnginePlugin::receivers(signal);
        }
        auto receivers_cb = texttranslator__translatorengineplugin_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEnginePlugin::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (texttranslator__translatorengineplugin_issignalconnected_isbase) {
            texttranslator__translatorengineplugin_issignalconnected_isbase = false;
            return TextTranslator__TranslatorEnginePlugin::isSignalConnected(signal);
        }
        auto issignalconnected_cb = texttranslator__translatorengineplugin_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEnginePlugin::isSignalConnected(signal);
    }

    // Friend functions
    friend libqt_string TextTranslator__TranslatorEnginePlugin_LanguageCode(TextTranslator::TranslatorEnginePlugin* self, const libqt_string langStr);
    friend libqt_string TextTranslator__TranslatorEnginePlugin_SuperLanguageCode(TextTranslator::TranslatorEnginePlugin* self, const libqt_string langStr);
    friend void TextTranslator__TranslatorEnginePlugin_TimerEvent(TextTranslator::TranslatorEnginePlugin* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorEnginePlugin_SuperTimerEvent(TextTranslator::TranslatorEnginePlugin* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorEnginePlugin_ChildEvent(TextTranslator::TranslatorEnginePlugin* self, QChildEvent* event);
    friend void TextTranslator__TranslatorEnginePlugin_SuperChildEvent(TextTranslator::TranslatorEnginePlugin* self, QChildEvent* event);
    friend void TextTranslator__TranslatorEnginePlugin_CustomEvent(TextTranslator::TranslatorEnginePlugin* self, QEvent* event);
    friend void TextTranslator__TranslatorEnginePlugin_SuperCustomEvent(TextTranslator::TranslatorEnginePlugin* self, QEvent* event);
    friend void TextTranslator__TranslatorEnginePlugin_ConnectNotify(TextTranslator::TranslatorEnginePlugin* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEnginePlugin_SuperConnectNotify(TextTranslator::TranslatorEnginePlugin* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEnginePlugin_DisconnectNotify(TextTranslator::TranslatorEnginePlugin* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEnginePlugin_SuperDisconnectNotify(TextTranslator::TranslatorEnginePlugin* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEnginePlugin_AppendResult(TextTranslator::TranslatorEnginePlugin* self, const libqt_string result);
    friend void TextTranslator__TranslatorEnginePlugin_SuperAppendResult(TextTranslator::TranslatorEnginePlugin* self, const libqt_string result);
    friend void TextTranslator__TranslatorEnginePlugin_SlotError(TextTranslator::TranslatorEnginePlugin* self, int errorVal);
    friend void TextTranslator__TranslatorEnginePlugin_SuperSlotError(TextTranslator::TranslatorEnginePlugin* self, int errorVal);
    friend bool TextTranslator__TranslatorEnginePlugin_VerifyFromAndToLanguage(TextTranslator::TranslatorEnginePlugin* self);
    friend bool TextTranslator__TranslatorEnginePlugin_SuperVerifyFromAndToLanguage(TextTranslator::TranslatorEnginePlugin* self);
    friend bool TextTranslator__TranslatorEnginePlugin_HasDebug(const TextTranslator::TranslatorEnginePlugin* self);
    friend bool TextTranslator__TranslatorEnginePlugin_SuperHasDebug(const TextTranslator::TranslatorEnginePlugin* self);
    friend QObject* TextTranslator__TranslatorEnginePlugin_Sender(const TextTranslator::TranslatorEnginePlugin* self);
    friend QObject* TextTranslator__TranslatorEnginePlugin_SuperSender(const TextTranslator::TranslatorEnginePlugin* self);
    friend int TextTranslator__TranslatorEnginePlugin_SenderSignalIndex(const TextTranslator::TranslatorEnginePlugin* self);
    friend int TextTranslator__TranslatorEnginePlugin_SuperSenderSignalIndex(const TextTranslator::TranslatorEnginePlugin* self);
    friend int TextTranslator__TranslatorEnginePlugin_Receivers(const TextTranslator::TranslatorEnginePlugin* self, const char* signal);
    friend int TextTranslator__TranslatorEnginePlugin_SuperReceivers(const TextTranslator::TranslatorEnginePlugin* self, const char* signal);
    friend bool TextTranslator__TranslatorEnginePlugin_IsSignalConnected(const TextTranslator::TranslatorEnginePlugin* self, const QMetaMethod* signal);
    friend bool TextTranslator__TranslatorEnginePlugin_SuperIsSignalConnected(const TextTranslator::TranslatorEnginePlugin* self, const QMetaMethod* signal);
};

#endif
