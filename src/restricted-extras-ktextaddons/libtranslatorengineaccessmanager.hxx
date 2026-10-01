#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORENGINEACCESSMANAGER_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORENGINEACCESSMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorEngineAccessManager
class VirtualTextTranslatorTranslatorEngineAccessManager final : public TextTranslator::TranslatorEngineAccessManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextTranslator__TranslatorEngineAccessManager_MetaObject_Callback = QMetaObject* (*)(const TextTranslator__TranslatorEngineAccessManager*);
    using TextTranslator__TranslatorEngineAccessManager_Metacast_Callback = void* (*)(TextTranslator__TranslatorEngineAccessManager*, const char*);
    using TextTranslator__TranslatorEngineAccessManager_Metacall_Callback = int (*)(TextTranslator__TranslatorEngineAccessManager*, int, int, void**);
    using TextTranslator__TranslatorEngineAccessManager_Event_Callback = bool (*)(TextTranslator__TranslatorEngineAccessManager*, QEvent*);
    using TextTranslator__TranslatorEngineAccessManager_EventFilter_Callback = bool (*)(TextTranslator__TranslatorEngineAccessManager*, QObject*, QEvent*);
    using TextTranslator__TranslatorEngineAccessManager_TimerEvent_Callback = void (*)(TextTranslator__TranslatorEngineAccessManager*, QTimerEvent*);
    using TextTranslator__TranslatorEngineAccessManager_ChildEvent_Callback = void (*)(TextTranslator__TranslatorEngineAccessManager*, QChildEvent*);
    using TextTranslator__TranslatorEngineAccessManager_CustomEvent_Callback = void (*)(TextTranslator__TranslatorEngineAccessManager*, QEvent*);
    using TextTranslator__TranslatorEngineAccessManager_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorEngineAccessManager*, QMetaMethod*);
    using TextTranslator__TranslatorEngineAccessManager_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorEngineAccessManager*, QMetaMethod*);
    using TextTranslator::TranslatorEngineAccessManager::isSignalConnected;
    using TextTranslator::TranslatorEngineAccessManager::receivers;
    using TextTranslator::TranslatorEngineAccessManager::sender;
    using TextTranslator::TranslatorEngineAccessManager::senderSignalIndex;

    // Instance callback storage
    TextTranslator__TranslatorEngineAccessManager_MetaObject_Callback texttranslator__translatorengineaccessmanager_metaobject_callback = nullptr;
    TextTranslator__TranslatorEngineAccessManager_Metacast_Callback texttranslator__translatorengineaccessmanager_metacast_callback = nullptr;
    TextTranslator__TranslatorEngineAccessManager_Metacall_Callback texttranslator__translatorengineaccessmanager_metacall_callback = nullptr;
    TextTranslator__TranslatorEngineAccessManager_Event_Callback texttranslator__translatorengineaccessmanager_event_callback = nullptr;
    TextTranslator__TranslatorEngineAccessManager_EventFilter_Callback texttranslator__translatorengineaccessmanager_eventfilter_callback = nullptr;
    TextTranslator__TranslatorEngineAccessManager_TimerEvent_Callback texttranslator__translatorengineaccessmanager_timerevent_callback = nullptr;
    TextTranslator__TranslatorEngineAccessManager_ChildEvent_Callback texttranslator__translatorengineaccessmanager_childevent_callback = nullptr;
    TextTranslator__TranslatorEngineAccessManager_CustomEvent_Callback texttranslator__translatorengineaccessmanager_customevent_callback = nullptr;
    TextTranslator__TranslatorEngineAccessManager_ConnectNotify_Callback texttranslator__translatorengineaccessmanager_connectnotify_callback = nullptr;
    TextTranslator__TranslatorEngineAccessManager_DisconnectNotify_Callback texttranslator__translatorengineaccessmanager_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextTranslator::TranslatorEngineAccessManager {
        using TextTranslator::TranslatorEngineAccessManager::childEvent;
        using TextTranslator::TranslatorEngineAccessManager::connectNotify;
        using TextTranslator::TranslatorEngineAccessManager::customEvent;
        using TextTranslator::TranslatorEngineAccessManager::disconnectNotify;
        using TextTranslator::TranslatorEngineAccessManager::timerEvent;
    };

    VirtualTextTranslatorTranslatorEngineAccessManager() : TextTranslator::TranslatorEngineAccessManager() {};
    VirtualTextTranslatorTranslatorEngineAccessManager(QObject* parent) : TextTranslator::TranslatorEngineAccessManager(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorengineaccessmanager_metaobject_callback) {
            QMetaObject* callback_ret = texttranslator__translatorengineaccessmanager_metaobject_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineAccessManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorengineaccessmanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = texttranslator__translatorengineaccessmanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineAccessManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorengineaccessmanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = texttranslator__translatorengineaccessmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEngineAccessManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (texttranslator__translatorengineaccessmanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = texttranslator__translatorengineaccessmanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineAccessManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (texttranslator__translatorengineaccessmanager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = texttranslator__translatorengineaccessmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineAccessManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorengineaccessmanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            texttranslator__translatorengineaccessmanager_timerevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineAccessManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorengineaccessmanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            texttranslator__translatorengineaccessmanager_childevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineAccessManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorengineaccessmanager_customevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatorengineaccessmanager_customevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineAccessManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineaccessmanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorengineaccessmanager_connectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineAccessManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineaccessmanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorengineaccessmanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineAccessManager::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextTranslator__TranslatorEngineAccessManager_SuperTimerEvent(TextTranslator::TranslatorEngineAccessManager* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorEngineAccessManager_SuperChildEvent(TextTranslator::TranslatorEngineAccessManager* self, QChildEvent* event);
    friend void TextTranslator__TranslatorEngineAccessManager_SuperCustomEvent(TextTranslator::TranslatorEngineAccessManager* self, QEvent* event);
    friend void TextTranslator__TranslatorEngineAccessManager_SuperConnectNotify(TextTranslator::TranslatorEngineAccessManager* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEngineAccessManager_SuperDisconnectNotify(TextTranslator::TranslatorEngineAccessManager* self, const QMetaMethod* signal);
};

#endif
