#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBUNICODEEMOTICONMANAGER_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBUNICODEEMOTICONMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEmoticonsCore::UnicodeEmoticonManager
class VirtualTextEmoticonsCoreUnicodeEmoticonManager final : public TextEmoticonsCore::UnicodeEmoticonManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextEmoticonsCore__UnicodeEmoticonManager_MetaObject_Callback = QMetaObject* (*)(const TextEmoticonsCore__UnicodeEmoticonManager*);
    using TextEmoticonsCore__UnicodeEmoticonManager_Metacast_Callback = void* (*)(TextEmoticonsCore__UnicodeEmoticonManager*, const char*);
    using TextEmoticonsCore__UnicodeEmoticonManager_Metacall_Callback = int (*)(TextEmoticonsCore__UnicodeEmoticonManager*, int, int, void**);
    using TextEmoticonsCore__UnicodeEmoticonManager_Event_Callback = bool (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QEvent*);
    using TextEmoticonsCore__UnicodeEmoticonManager_EventFilter_Callback = bool (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QObject*, QEvent*);
    using TextEmoticonsCore__UnicodeEmoticonManager_TimerEvent_Callback = void (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QTimerEvent*);
    using TextEmoticonsCore__UnicodeEmoticonManager_ChildEvent_Callback = void (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QChildEvent*);
    using TextEmoticonsCore__UnicodeEmoticonManager_CustomEvent_Callback = void (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QEvent*);
    using TextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify_Callback = void (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QMetaMethod*);
    using TextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify_Callback = void (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QMetaMethod*);
    using TextEmoticonsCore::UnicodeEmoticonManager::isSignalConnected;
    using TextEmoticonsCore::UnicodeEmoticonManager::receivers;
    using TextEmoticonsCore::UnicodeEmoticonManager::sender;
    using TextEmoticonsCore::UnicodeEmoticonManager::senderSignalIndex;

    // Instance callback storage
    TextEmoticonsCore__UnicodeEmoticonManager_MetaObject_Callback textemoticonscore__unicodeemoticonmanager_metaobject_callback = nullptr;
    TextEmoticonsCore__UnicodeEmoticonManager_Metacast_Callback textemoticonscore__unicodeemoticonmanager_metacast_callback = nullptr;
    TextEmoticonsCore__UnicodeEmoticonManager_Metacall_Callback textemoticonscore__unicodeemoticonmanager_metacall_callback = nullptr;
    TextEmoticonsCore__UnicodeEmoticonManager_Event_Callback textemoticonscore__unicodeemoticonmanager_event_callback = nullptr;
    TextEmoticonsCore__UnicodeEmoticonManager_EventFilter_Callback textemoticonscore__unicodeemoticonmanager_eventfilter_callback = nullptr;
    TextEmoticonsCore__UnicodeEmoticonManager_TimerEvent_Callback textemoticonscore__unicodeemoticonmanager_timerevent_callback = nullptr;
    TextEmoticonsCore__UnicodeEmoticonManager_ChildEvent_Callback textemoticonscore__unicodeemoticonmanager_childevent_callback = nullptr;
    TextEmoticonsCore__UnicodeEmoticonManager_CustomEvent_Callback textemoticonscore__unicodeemoticonmanager_customevent_callback = nullptr;
    TextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify_Callback textemoticonscore__unicodeemoticonmanager_connectnotify_callback = nullptr;
    TextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify_Callback textemoticonscore__unicodeemoticonmanager_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextEmoticonsCore::UnicodeEmoticonManager {
        using TextEmoticonsCore::UnicodeEmoticonManager::childEvent;
        using TextEmoticonsCore::UnicodeEmoticonManager::connectNotify;
        using TextEmoticonsCore::UnicodeEmoticonManager::customEvent;
        using TextEmoticonsCore::UnicodeEmoticonManager::disconnectNotify;
        using TextEmoticonsCore::UnicodeEmoticonManager::timerEvent;
    };

    VirtualTextEmoticonsCoreUnicodeEmoticonManager() : TextEmoticonsCore::UnicodeEmoticonManager() {};
    VirtualTextEmoticonsCoreUnicodeEmoticonManager(QObject* parent) : TextEmoticonsCore::UnicodeEmoticonManager(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textemoticonscore__unicodeemoticonmanager_metaobject_callback) {
            QMetaObject* callback_ret = textemoticonscore__unicodeemoticonmanager_metaobject_callback(this);
            return callback_ret;
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textemoticonscore__unicodeemoticonmanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textemoticonscore__unicodeemoticonmanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textemoticonscore__unicodeemoticonmanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textemoticonscore__unicodeemoticonmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textemoticonscore__unicodeemoticonmanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textemoticonscore__unicodeemoticonmanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textemoticonscore__unicodeemoticonmanager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textemoticonscore__unicodeemoticonmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textemoticonscore__unicodeemoticonmanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textemoticonscore__unicodeemoticonmanager_timerevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__UnicodeEmoticonManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textemoticonscore__unicodeemoticonmanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            textemoticonscore__unicodeemoticonmanager_childevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__UnicodeEmoticonManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textemoticonscore__unicodeemoticonmanager_customevent_callback) {
            QEvent* cbval1 = event;
            textemoticonscore__unicodeemoticonmanager_customevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__UnicodeEmoticonManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__unicodeemoticonmanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonscore__unicodeemoticonmanager_connectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__UnicodeEmoticonManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__unicodeemoticonmanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonscore__unicodeemoticonmanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__UnicodeEmoticonManager::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextEmoticonsCore__UnicodeEmoticonManager_SuperTimerEvent(TextEmoticonsCore::UnicodeEmoticonManager* self, QTimerEvent* event);
    friend void TextEmoticonsCore__UnicodeEmoticonManager_SuperChildEvent(TextEmoticonsCore::UnicodeEmoticonManager* self, QChildEvent* event);
    friend void TextEmoticonsCore__UnicodeEmoticonManager_SuperCustomEvent(TextEmoticonsCore::UnicodeEmoticonManager* self, QEvent* event);
    friend void TextEmoticonsCore__UnicodeEmoticonManager_SuperConnectNotify(TextEmoticonsCore::UnicodeEmoticonManager* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__UnicodeEmoticonManager_SuperDisconnectNotify(TextEmoticonsCore::UnicodeEmoticonManager* self, const QMetaMethod* signal);
};

#endif
