#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBLANGUAGETOOLMANAGER_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBLANGUAGETOOLMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::LanguageToolManager
class VirtualTextGrammarCheckLanguageToolManager final : public TextGrammarCheck::LanguageToolManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__LanguageToolManager_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__LanguageToolManager*);
    using TextGrammarCheck__LanguageToolManager_Metacast_Callback = void* (*)(TextGrammarCheck__LanguageToolManager*, const char*);
    using TextGrammarCheck__LanguageToolManager_Metacall_Callback = int (*)(TextGrammarCheck__LanguageToolManager*, int, int, void**);
    using TextGrammarCheck__LanguageToolManager_Event_Callback = bool (*)(TextGrammarCheck__LanguageToolManager*, QEvent*);
    using TextGrammarCheck__LanguageToolManager_EventFilter_Callback = bool (*)(TextGrammarCheck__LanguageToolManager*, QObject*, QEvent*);
    using TextGrammarCheck__LanguageToolManager_TimerEvent_Callback = void (*)(TextGrammarCheck__LanguageToolManager*, QTimerEvent*);
    using TextGrammarCheck__LanguageToolManager_ChildEvent_Callback = void (*)(TextGrammarCheck__LanguageToolManager*, QChildEvent*);
    using TextGrammarCheck__LanguageToolManager_CustomEvent_Callback = void (*)(TextGrammarCheck__LanguageToolManager*, QEvent*);
    using TextGrammarCheck__LanguageToolManager_ConnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolManager*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolManager_DisconnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolManager*, QMetaMethod*);
    using TextGrammarCheck::LanguageToolManager::isSignalConnected;
    using TextGrammarCheck::LanguageToolManager::receivers;
    using TextGrammarCheck::LanguageToolManager::sender;
    using TextGrammarCheck::LanguageToolManager::senderSignalIndex;

    // Instance callback storage
    TextGrammarCheck__LanguageToolManager_MetaObject_Callback textgrammarcheck__languagetoolmanager_metaobject_callback = nullptr;
    TextGrammarCheck__LanguageToolManager_Metacast_Callback textgrammarcheck__languagetoolmanager_metacast_callback = nullptr;
    TextGrammarCheck__LanguageToolManager_Metacall_Callback textgrammarcheck__languagetoolmanager_metacall_callback = nullptr;
    TextGrammarCheck__LanguageToolManager_Event_Callback textgrammarcheck__languagetoolmanager_event_callback = nullptr;
    TextGrammarCheck__LanguageToolManager_EventFilter_Callback textgrammarcheck__languagetoolmanager_eventfilter_callback = nullptr;
    TextGrammarCheck__LanguageToolManager_TimerEvent_Callback textgrammarcheck__languagetoolmanager_timerevent_callback = nullptr;
    TextGrammarCheck__LanguageToolManager_ChildEvent_Callback textgrammarcheck__languagetoolmanager_childevent_callback = nullptr;
    TextGrammarCheck__LanguageToolManager_CustomEvent_Callback textgrammarcheck__languagetoolmanager_customevent_callback = nullptr;
    TextGrammarCheck__LanguageToolManager_ConnectNotify_Callback textgrammarcheck__languagetoolmanager_connectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolManager_DisconnectNotify_Callback textgrammarcheck__languagetoolmanager_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::LanguageToolManager {
        using TextGrammarCheck::LanguageToolManager::childEvent;
        using TextGrammarCheck::LanguageToolManager::connectNotify;
        using TextGrammarCheck::LanguageToolManager::customEvent;
        using TextGrammarCheck::LanguageToolManager::disconnectNotify;
        using TextGrammarCheck::LanguageToolManager::timerEvent;
    };

    VirtualTextGrammarCheckLanguageToolManager() : TextGrammarCheck::LanguageToolManager() {};
    VirtualTextGrammarCheckLanguageToolManager(QObject* parent) : TextGrammarCheck::LanguageToolManager(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__languagetoolmanager_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__languagetoolmanager_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__languagetoolmanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__languagetoolmanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__languagetoolmanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__languagetoolmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__languagetoolmanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textgrammarcheck__languagetoolmanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__languagetoolmanager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textgrammarcheck__languagetoolmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__languagetoolmanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textgrammarcheck__languagetoolmanager_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__languagetoolmanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__languagetoolmanager_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolmanager_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__languagetoolmanager_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolmanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__languagetoolmanager_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolmanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__languagetoolmanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolManager::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__LanguageToolManager_SuperTimerEvent(TextGrammarCheck::LanguageToolManager* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolManager_SuperChildEvent(TextGrammarCheck::LanguageToolManager* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolManager_SuperCustomEvent(TextGrammarCheck::LanguageToolManager* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolManager_SuperConnectNotify(TextGrammarCheck::LanguageToolManager* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolManager_SuperDisconnectNotify(TextGrammarCheck::LanguageToolManager* self, const QMetaMethod* signal);
};

#endif
