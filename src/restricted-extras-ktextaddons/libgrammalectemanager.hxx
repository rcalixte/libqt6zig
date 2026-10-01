#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMALECTEMANAGER_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMALECTEMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammalecteManager
class VirtualTextGrammarCheckGrammalecteManager final : public TextGrammarCheck::GrammalecteManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__GrammalecteManager_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__GrammalecteManager*);
    using TextGrammarCheck__GrammalecteManager_Metacast_Callback = void* (*)(TextGrammarCheck__GrammalecteManager*, const char*);
    using TextGrammarCheck__GrammalecteManager_Metacall_Callback = int (*)(TextGrammarCheck__GrammalecteManager*, int, int, void**);
    using TextGrammarCheck__GrammalecteManager_Event_Callback = bool (*)(TextGrammarCheck__GrammalecteManager*, QEvent*);
    using TextGrammarCheck__GrammalecteManager_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammalecteManager*, QObject*, QEvent*);
    using TextGrammarCheck__GrammalecteManager_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammalecteManager*, QTimerEvent*);
    using TextGrammarCheck__GrammalecteManager_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammalecteManager*, QChildEvent*);
    using TextGrammarCheck__GrammalecteManager_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammalecteManager*, QEvent*);
    using TextGrammarCheck__GrammalecteManager_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteManager*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteManager_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteManager*, QMetaMethod*);
    using TextGrammarCheck::GrammalecteManager::isSignalConnected;
    using TextGrammarCheck::GrammalecteManager::receivers;
    using TextGrammarCheck::GrammalecteManager::sender;
    using TextGrammarCheck::GrammalecteManager::senderSignalIndex;

    // Instance callback storage
    TextGrammarCheck__GrammalecteManager_MetaObject_Callback textgrammarcheck__grammalectemanager_metaobject_callback = nullptr;
    TextGrammarCheck__GrammalecteManager_Metacast_Callback textgrammarcheck__grammalectemanager_metacast_callback = nullptr;
    TextGrammarCheck__GrammalecteManager_Metacall_Callback textgrammarcheck__grammalectemanager_metacall_callback = nullptr;
    TextGrammarCheck__GrammalecteManager_Event_Callback textgrammarcheck__grammalectemanager_event_callback = nullptr;
    TextGrammarCheck__GrammalecteManager_EventFilter_Callback textgrammarcheck__grammalectemanager_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammalecteManager_TimerEvent_Callback textgrammarcheck__grammalectemanager_timerevent_callback = nullptr;
    TextGrammarCheck__GrammalecteManager_ChildEvent_Callback textgrammarcheck__grammalectemanager_childevent_callback = nullptr;
    TextGrammarCheck__GrammalecteManager_CustomEvent_Callback textgrammarcheck__grammalectemanager_customevent_callback = nullptr;
    TextGrammarCheck__GrammalecteManager_ConnectNotify_Callback textgrammarcheck__grammalectemanager_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteManager_DisconnectNotify_Callback textgrammarcheck__grammalectemanager_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::GrammalecteManager {
        using TextGrammarCheck::GrammalecteManager::childEvent;
        using TextGrammarCheck::GrammalecteManager::connectNotify;
        using TextGrammarCheck::GrammalecteManager::customEvent;
        using TextGrammarCheck::GrammalecteManager::disconnectNotify;
        using TextGrammarCheck::GrammalecteManager::timerEvent;
    };

    VirtualTextGrammarCheckGrammalecteManager() : TextGrammarCheck::GrammalecteManager() {};
    VirtualTextGrammarCheckGrammalecteManager(QObject* parent) : TextGrammarCheck::GrammalecteManager(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammalectemanager_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__grammalectemanager_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammalectemanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__grammalectemanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammalectemanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__grammalectemanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__grammalectemanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textgrammarcheck__grammalectemanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__grammalectemanager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textgrammarcheck__grammalectemanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__grammalectemanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textgrammarcheck__grammalectemanager_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammalectemanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__grammalectemanager_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammalectemanager_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__grammalectemanager_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalectemanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammalectemanager_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalectemanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammalectemanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteManager::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammalecteManager_SuperTimerEvent(TextGrammarCheck::GrammalecteManager* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteManager_SuperChildEvent(TextGrammarCheck::GrammalecteManager* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteManager_SuperCustomEvent(TextGrammarCheck::GrammalecteManager* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteManager_SuperConnectNotify(TextGrammarCheck::GrammalecteManager* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteManager_SuperDisconnectNotify(TextGrammarCheck::GrammalecteManager* self, const QMetaMethod* signal);
};

#endif
