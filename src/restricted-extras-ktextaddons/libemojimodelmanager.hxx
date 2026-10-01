#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBEMOJIMODELMANAGER_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBEMOJIMODELMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEmoticonsCore::EmojiModelManager
class VirtualTextEmoticonsCoreEmojiModelManager final : public TextEmoticonsCore::EmojiModelManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextEmoticonsCore__EmojiModelManager_MetaObject_Callback = QMetaObject* (*)(const TextEmoticonsCore__EmojiModelManager*);
    using TextEmoticonsCore__EmojiModelManager_Metacast_Callback = void* (*)(TextEmoticonsCore__EmojiModelManager*, const char*);
    using TextEmoticonsCore__EmojiModelManager_Metacall_Callback = int (*)(TextEmoticonsCore__EmojiModelManager*, int, int, void**);
    using TextEmoticonsCore__EmojiModelManager_Event_Callback = bool (*)(TextEmoticonsCore__EmojiModelManager*, QEvent*);
    using TextEmoticonsCore__EmojiModelManager_EventFilter_Callback = bool (*)(TextEmoticonsCore__EmojiModelManager*, QObject*, QEvent*);
    using TextEmoticonsCore__EmojiModelManager_TimerEvent_Callback = void (*)(TextEmoticonsCore__EmojiModelManager*, QTimerEvent*);
    using TextEmoticonsCore__EmojiModelManager_ChildEvent_Callback = void (*)(TextEmoticonsCore__EmojiModelManager*, QChildEvent*);
    using TextEmoticonsCore__EmojiModelManager_CustomEvent_Callback = void (*)(TextEmoticonsCore__EmojiModelManager*, QEvent*);
    using TextEmoticonsCore__EmojiModelManager_ConnectNotify_Callback = void (*)(TextEmoticonsCore__EmojiModelManager*, QMetaMethod*);
    using TextEmoticonsCore__EmojiModelManager_DisconnectNotify_Callback = void (*)(TextEmoticonsCore__EmojiModelManager*, QMetaMethod*);
    using TextEmoticonsCore::EmojiModelManager::isSignalConnected;
    using TextEmoticonsCore::EmojiModelManager::receivers;
    using TextEmoticonsCore::EmojiModelManager::sender;
    using TextEmoticonsCore::EmojiModelManager::senderSignalIndex;

    // Instance callback storage
    TextEmoticonsCore__EmojiModelManager_MetaObject_Callback textemoticonscore__emojimodelmanager_metaobject_callback = nullptr;
    TextEmoticonsCore__EmojiModelManager_Metacast_Callback textemoticonscore__emojimodelmanager_metacast_callback = nullptr;
    TextEmoticonsCore__EmojiModelManager_Metacall_Callback textemoticonscore__emojimodelmanager_metacall_callback = nullptr;
    TextEmoticonsCore__EmojiModelManager_Event_Callback textemoticonscore__emojimodelmanager_event_callback = nullptr;
    TextEmoticonsCore__EmojiModelManager_EventFilter_Callback textemoticonscore__emojimodelmanager_eventfilter_callback = nullptr;
    TextEmoticonsCore__EmojiModelManager_TimerEvent_Callback textemoticonscore__emojimodelmanager_timerevent_callback = nullptr;
    TextEmoticonsCore__EmojiModelManager_ChildEvent_Callback textemoticonscore__emojimodelmanager_childevent_callback = nullptr;
    TextEmoticonsCore__EmojiModelManager_CustomEvent_Callback textemoticonscore__emojimodelmanager_customevent_callback = nullptr;
    TextEmoticonsCore__EmojiModelManager_ConnectNotify_Callback textemoticonscore__emojimodelmanager_connectnotify_callback = nullptr;
    TextEmoticonsCore__EmojiModelManager_DisconnectNotify_Callback textemoticonscore__emojimodelmanager_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextEmoticonsCore::EmojiModelManager {
        using TextEmoticonsCore::EmojiModelManager::childEvent;
        using TextEmoticonsCore::EmojiModelManager::connectNotify;
        using TextEmoticonsCore::EmojiModelManager::customEvent;
        using TextEmoticonsCore::EmojiModelManager::disconnectNotify;
        using TextEmoticonsCore::EmojiModelManager::timerEvent;
    };

    VirtualTextEmoticonsCoreEmojiModelManager() : TextEmoticonsCore::EmojiModelManager() {};
    VirtualTextEmoticonsCoreEmojiModelManager(QObject* parent) : TextEmoticonsCore::EmojiModelManager(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textemoticonscore__emojimodelmanager_metaobject_callback) {
            QMetaObject* callback_ret = textemoticonscore__emojimodelmanager_metaobject_callback(this);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModelManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textemoticonscore__emojimodelmanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textemoticonscore__emojimodelmanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModelManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textemoticonscore__emojimodelmanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textemoticonscore__emojimodelmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiModelManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textemoticonscore__emojimodelmanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textemoticonscore__emojimodelmanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModelManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textemoticonscore__emojimodelmanager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textemoticonscore__emojimodelmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModelManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textemoticonscore__emojimodelmanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textemoticonscore__emojimodelmanager_timerevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModelManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textemoticonscore__emojimodelmanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            textemoticonscore__emojimodelmanager_childevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModelManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textemoticonscore__emojimodelmanager_customevent_callback) {
            QEvent* cbval1 = event;
            textemoticonscore__emojimodelmanager_customevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModelManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__emojimodelmanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonscore__emojimodelmanager_connectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModelManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__emojimodelmanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonscore__emojimodelmanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModelManager::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextEmoticonsCore__EmojiModelManager_SuperTimerEvent(TextEmoticonsCore::EmojiModelManager* self, QTimerEvent* event);
    friend void TextEmoticonsCore__EmojiModelManager_SuperChildEvent(TextEmoticonsCore::EmojiModelManager* self, QChildEvent* event);
    friend void TextEmoticonsCore__EmojiModelManager_SuperCustomEvent(TextEmoticonsCore::EmojiModelManager* self, QEvent* event);
    friend void TextEmoticonsCore__EmojiModelManager_SuperConnectNotify(TextEmoticonsCore::EmojiModelManager* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__EmojiModelManager_SuperDisconnectNotify(TextEmoticonsCore::EmojiModelManager* self, const QMetaMethod* signal);
};

#endif
