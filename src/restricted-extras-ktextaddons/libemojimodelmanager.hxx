#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALEMOJIMODELMANAGER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALEMOJIMODELMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEmoticonsCore::EmojiModelManager so that we can call protected methods
class VirtualTextEmoticonsCoreEmojiModelManager final : public TextEmoticonsCore::EmojiModelManager {

  public:
    // Virtual class boolean flag
    bool isVirtualTextEmoticonsCoreEmojiModelManager = true;

    // Virtual class public types (including callbacks)
    using TextEmoticonsCore__EmojiModelManager_MetaObject_Callback = QMetaObject* (*)();
    using TextEmoticonsCore__EmojiModelManager_Metacast_Callback = void* (*)(TextEmoticonsCore__EmojiModelManager*, const char*);
    using TextEmoticonsCore__EmojiModelManager_Metacall_Callback = int (*)(TextEmoticonsCore__EmojiModelManager*, int, int, void**);
    using TextEmoticonsCore__EmojiModelManager_Event_Callback = bool (*)(TextEmoticonsCore__EmojiModelManager*, QEvent*);
    using TextEmoticonsCore__EmojiModelManager_EventFilter_Callback = bool (*)(TextEmoticonsCore__EmojiModelManager*, QObject*, QEvent*);
    using TextEmoticonsCore__EmojiModelManager_TimerEvent_Callback = void (*)(TextEmoticonsCore__EmojiModelManager*, QTimerEvent*);
    using TextEmoticonsCore__EmojiModelManager_ChildEvent_Callback = void (*)(TextEmoticonsCore__EmojiModelManager*, QChildEvent*);
    using TextEmoticonsCore__EmojiModelManager_CustomEvent_Callback = void (*)(TextEmoticonsCore__EmojiModelManager*, QEvent*);
    using TextEmoticonsCore__EmojiModelManager_ConnectNotify_Callback = void (*)(TextEmoticonsCore__EmojiModelManager*, QMetaMethod*);
    using TextEmoticonsCore__EmojiModelManager_DisconnectNotify_Callback = void (*)(TextEmoticonsCore__EmojiModelManager*, QMetaMethod*);
    using TextEmoticonsCore__EmojiModelManager_Sender_Callback = QObject* (*)();
    using TextEmoticonsCore__EmojiModelManager_SenderSignalIndex_Callback = int (*)();
    using TextEmoticonsCore__EmojiModelManager_Receivers_Callback = int (*)(const TextEmoticonsCore__EmojiModelManager*, const char*);
    using TextEmoticonsCore__EmojiModelManager_IsSignalConnected_Callback = bool (*)(const TextEmoticonsCore__EmojiModelManager*, QMetaMethod*);

  protected:
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
    TextEmoticonsCore__EmojiModelManager_Sender_Callback textemoticonscore__emojimodelmanager_sender_callback = nullptr;
    TextEmoticonsCore__EmojiModelManager_SenderSignalIndex_Callback textemoticonscore__emojimodelmanager_sendersignalindex_callback = nullptr;
    TextEmoticonsCore__EmojiModelManager_Receivers_Callback textemoticonscore__emojimodelmanager_receivers_callback = nullptr;
    TextEmoticonsCore__EmojiModelManager_IsSignalConnected_Callback textemoticonscore__emojimodelmanager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool textemoticonscore__emojimodelmanager_metaobject_isbase = false;
    mutable bool textemoticonscore__emojimodelmanager_metacast_isbase = false;
    mutable bool textemoticonscore__emojimodelmanager_metacall_isbase = false;
    mutable bool textemoticonscore__emojimodelmanager_event_isbase = false;
    mutable bool textemoticonscore__emojimodelmanager_eventfilter_isbase = false;
    mutable bool textemoticonscore__emojimodelmanager_timerevent_isbase = false;
    mutable bool textemoticonscore__emojimodelmanager_childevent_isbase = false;
    mutable bool textemoticonscore__emojimodelmanager_customevent_isbase = false;
    mutable bool textemoticonscore__emojimodelmanager_connectnotify_isbase = false;
    mutable bool textemoticonscore__emojimodelmanager_disconnectnotify_isbase = false;
    mutable bool textemoticonscore__emojimodelmanager_sender_isbase = false;
    mutable bool textemoticonscore__emojimodelmanager_sendersignalindex_isbase = false;
    mutable bool textemoticonscore__emojimodelmanager_receivers_isbase = false;
    mutable bool textemoticonscore__emojimodelmanager_issignalconnected_isbase = false;

  public:
    VirtualTextEmoticonsCoreEmojiModelManager() : TextEmoticonsCore::EmojiModelManager() {};
    VirtualTextEmoticonsCoreEmojiModelManager(QObject* parent) : TextEmoticonsCore::EmojiModelManager(parent) {};

    // Callback setters
    inline void setTextEmoticonsCore__EmojiModelManager_MetaObject_Callback(TextEmoticonsCore__EmojiModelManager_MetaObject_Callback cb) { textemoticonscore__emojimodelmanager_metaobject_callback = cb; }
    inline void setTextEmoticonsCore__EmojiModelManager_Metacast_Callback(TextEmoticonsCore__EmojiModelManager_Metacast_Callback cb) { textemoticonscore__emojimodelmanager_metacast_callback = cb; }
    inline void setTextEmoticonsCore__EmojiModelManager_Metacall_Callback(TextEmoticonsCore__EmojiModelManager_Metacall_Callback cb) { textemoticonscore__emojimodelmanager_metacall_callback = cb; }
    inline void setTextEmoticonsCore__EmojiModelManager_Event_Callback(TextEmoticonsCore__EmojiModelManager_Event_Callback cb) { textemoticonscore__emojimodelmanager_event_callback = cb; }
    inline void setTextEmoticonsCore__EmojiModelManager_EventFilter_Callback(TextEmoticonsCore__EmojiModelManager_EventFilter_Callback cb) { textemoticonscore__emojimodelmanager_eventfilter_callback = cb; }
    inline void setTextEmoticonsCore__EmojiModelManager_TimerEvent_Callback(TextEmoticonsCore__EmojiModelManager_TimerEvent_Callback cb) { textemoticonscore__emojimodelmanager_timerevent_callback = cb; }
    inline void setTextEmoticonsCore__EmojiModelManager_ChildEvent_Callback(TextEmoticonsCore__EmojiModelManager_ChildEvent_Callback cb) { textemoticonscore__emojimodelmanager_childevent_callback = cb; }
    inline void setTextEmoticonsCore__EmojiModelManager_CustomEvent_Callback(TextEmoticonsCore__EmojiModelManager_CustomEvent_Callback cb) { textemoticonscore__emojimodelmanager_customevent_callback = cb; }
    inline void setTextEmoticonsCore__EmojiModelManager_ConnectNotify_Callback(TextEmoticonsCore__EmojiModelManager_ConnectNotify_Callback cb) { textemoticonscore__emojimodelmanager_connectnotify_callback = cb; }
    inline void setTextEmoticonsCore__EmojiModelManager_DisconnectNotify_Callback(TextEmoticonsCore__EmojiModelManager_DisconnectNotify_Callback cb) { textemoticonscore__emojimodelmanager_disconnectnotify_callback = cb; }
    inline void setTextEmoticonsCore__EmojiModelManager_Sender_Callback(TextEmoticonsCore__EmojiModelManager_Sender_Callback cb) { textemoticonscore__emojimodelmanager_sender_callback = cb; }
    inline void setTextEmoticonsCore__EmojiModelManager_SenderSignalIndex_Callback(TextEmoticonsCore__EmojiModelManager_SenderSignalIndex_Callback cb) { textemoticonscore__emojimodelmanager_sendersignalindex_callback = cb; }
    inline void setTextEmoticonsCore__EmojiModelManager_Receivers_Callback(TextEmoticonsCore__EmojiModelManager_Receivers_Callback cb) { textemoticonscore__emojimodelmanager_receivers_callback = cb; }
    inline void setTextEmoticonsCore__EmojiModelManager_IsSignalConnected_Callback(TextEmoticonsCore__EmojiModelManager_IsSignalConnected_Callback cb) { textemoticonscore__emojimodelmanager_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextEmoticonsCore__EmojiModelManager_MetaObject_IsBase(bool value) const { textemoticonscore__emojimodelmanager_metaobject_isbase = value; }
    inline void setTextEmoticonsCore__EmojiModelManager_Metacast_IsBase(bool value) const { textemoticonscore__emojimodelmanager_metacast_isbase = value; }
    inline void setTextEmoticonsCore__EmojiModelManager_Metacall_IsBase(bool value) const { textemoticonscore__emojimodelmanager_metacall_isbase = value; }
    inline void setTextEmoticonsCore__EmojiModelManager_Event_IsBase(bool value) const { textemoticonscore__emojimodelmanager_event_isbase = value; }
    inline void setTextEmoticonsCore__EmojiModelManager_EventFilter_IsBase(bool value) const { textemoticonscore__emojimodelmanager_eventfilter_isbase = value; }
    inline void setTextEmoticonsCore__EmojiModelManager_TimerEvent_IsBase(bool value) const { textemoticonscore__emojimodelmanager_timerevent_isbase = value; }
    inline void setTextEmoticonsCore__EmojiModelManager_ChildEvent_IsBase(bool value) const { textemoticonscore__emojimodelmanager_childevent_isbase = value; }
    inline void setTextEmoticonsCore__EmojiModelManager_CustomEvent_IsBase(bool value) const { textemoticonscore__emojimodelmanager_customevent_isbase = value; }
    inline void setTextEmoticonsCore__EmojiModelManager_ConnectNotify_IsBase(bool value) const { textemoticonscore__emojimodelmanager_connectnotify_isbase = value; }
    inline void setTextEmoticonsCore__EmojiModelManager_DisconnectNotify_IsBase(bool value) const { textemoticonscore__emojimodelmanager_disconnectnotify_isbase = value; }
    inline void setTextEmoticonsCore__EmojiModelManager_Sender_IsBase(bool value) const { textemoticonscore__emojimodelmanager_sender_isbase = value; }
    inline void setTextEmoticonsCore__EmojiModelManager_SenderSignalIndex_IsBase(bool value) const { textemoticonscore__emojimodelmanager_sendersignalindex_isbase = value; }
    inline void setTextEmoticonsCore__EmojiModelManager_Receivers_IsBase(bool value) const { textemoticonscore__emojimodelmanager_receivers_isbase = value; }
    inline void setTextEmoticonsCore__EmojiModelManager_IsSignalConnected_IsBase(bool value) const { textemoticonscore__emojimodelmanager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textemoticonscore__emojimodelmanager_metaobject_isbase) {
            textemoticonscore__emojimodelmanager_metaobject_isbase = false;
            return TextEmoticonsCore__EmojiModelManager::metaObject();
        }
        auto metaobject_cb = textemoticonscore__emojimodelmanager_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModelManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textemoticonscore__emojimodelmanager_metacast_isbase) {
            textemoticonscore__emojimodelmanager_metacast_isbase = false;
            return TextEmoticonsCore__EmojiModelManager::qt_metacast(param1);
        }
        auto metacast_cb = textemoticonscore__emojimodelmanager_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModelManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textemoticonscore__emojimodelmanager_metacall_isbase) {
            textemoticonscore__emojimodelmanager_metacall_isbase = false;
            return TextEmoticonsCore__EmojiModelManager::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textemoticonscore__emojimodelmanager_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiModelManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textemoticonscore__emojimodelmanager_event_isbase) {
            textemoticonscore__emojimodelmanager_event_isbase = false;
            return TextEmoticonsCore__EmojiModelManager::event(event);
        }
        auto event_cb = textemoticonscore__emojimodelmanager_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModelManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textemoticonscore__emojimodelmanager_eventfilter_isbase) {
            textemoticonscore__emojimodelmanager_eventfilter_isbase = false;
            return TextEmoticonsCore__EmojiModelManager::eventFilter(watched, event);
        }
        auto eventfilter_cb = textemoticonscore__emojimodelmanager_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModelManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textemoticonscore__emojimodelmanager_timerevent_isbase) {
            textemoticonscore__emojimodelmanager_timerevent_isbase = false;
            TextEmoticonsCore__EmojiModelManager::timerEvent(event);
            return;
        }
        auto timerevent_cb = textemoticonscore__emojimodelmanager_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModelManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textemoticonscore__emojimodelmanager_childevent_isbase) {
            textemoticonscore__emojimodelmanager_childevent_isbase = false;
            TextEmoticonsCore__EmojiModelManager::childEvent(event);
            return;
        }
        auto childevent_cb = textemoticonscore__emojimodelmanager_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModelManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textemoticonscore__emojimodelmanager_customevent_isbase) {
            textemoticonscore__emojimodelmanager_customevent_isbase = false;
            TextEmoticonsCore__EmojiModelManager::customEvent(event);
            return;
        }
        auto customevent_cb = textemoticonscore__emojimodelmanager_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModelManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__emojimodelmanager_connectnotify_isbase) {
            textemoticonscore__emojimodelmanager_connectnotify_isbase = false;
            TextEmoticonsCore__EmojiModelManager::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textemoticonscore__emojimodelmanager_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModelManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__emojimodelmanager_disconnectnotify_isbase) {
            textemoticonscore__emojimodelmanager_disconnectnotify_isbase = false;
            TextEmoticonsCore__EmojiModelManager::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textemoticonscore__emojimodelmanager_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModelManager::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textemoticonscore__emojimodelmanager_sender_isbase) {
            textemoticonscore__emojimodelmanager_sender_isbase = false;
            return TextEmoticonsCore__EmojiModelManager::sender();
        }
        auto sender_cb = textemoticonscore__emojimodelmanager_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModelManager::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textemoticonscore__emojimodelmanager_sendersignalindex_isbase) {
            textemoticonscore__emojimodelmanager_sendersignalindex_isbase = false;
            return TextEmoticonsCore__EmojiModelManager::senderSignalIndex();
        }
        auto sendersignalindex_cb = textemoticonscore__emojimodelmanager_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiModelManager::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textemoticonscore__emojimodelmanager_receivers_isbase) {
            textemoticonscore__emojimodelmanager_receivers_isbase = false;
            return TextEmoticonsCore__EmojiModelManager::receivers(signal);
        }
        auto receivers_cb = textemoticonscore__emojimodelmanager_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiModelManager::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textemoticonscore__emojimodelmanager_issignalconnected_isbase) {
            textemoticonscore__emojimodelmanager_issignalconnected_isbase = false;
            return TextEmoticonsCore__EmojiModelManager::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textemoticonscore__emojimodelmanager_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModelManager::isSignalConnected(signal);
    }

    // Friend functions
    friend void TextEmoticonsCore__EmojiModelManager_TimerEvent(TextEmoticonsCore::EmojiModelManager* self, QTimerEvent* event);
    friend void TextEmoticonsCore__EmojiModelManager_SuperTimerEvent(TextEmoticonsCore::EmojiModelManager* self, QTimerEvent* event);
    friend void TextEmoticonsCore__EmojiModelManager_ChildEvent(TextEmoticonsCore::EmojiModelManager* self, QChildEvent* event);
    friend void TextEmoticonsCore__EmojiModelManager_SuperChildEvent(TextEmoticonsCore::EmojiModelManager* self, QChildEvent* event);
    friend void TextEmoticonsCore__EmojiModelManager_CustomEvent(TextEmoticonsCore::EmojiModelManager* self, QEvent* event);
    friend void TextEmoticonsCore__EmojiModelManager_SuperCustomEvent(TextEmoticonsCore::EmojiModelManager* self, QEvent* event);
    friend void TextEmoticonsCore__EmojiModelManager_ConnectNotify(TextEmoticonsCore::EmojiModelManager* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__EmojiModelManager_SuperConnectNotify(TextEmoticonsCore::EmojiModelManager* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__EmojiModelManager_DisconnectNotify(TextEmoticonsCore::EmojiModelManager* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__EmojiModelManager_SuperDisconnectNotify(TextEmoticonsCore::EmojiModelManager* self, const QMetaMethod* signal);
    friend QObject* TextEmoticonsCore__EmojiModelManager_Sender(const TextEmoticonsCore::EmojiModelManager* self);
    friend QObject* TextEmoticonsCore__EmojiModelManager_SuperSender(const TextEmoticonsCore::EmojiModelManager* self);
    friend int TextEmoticonsCore__EmojiModelManager_SenderSignalIndex(const TextEmoticonsCore::EmojiModelManager* self);
    friend int TextEmoticonsCore__EmojiModelManager_SuperSenderSignalIndex(const TextEmoticonsCore::EmojiModelManager* self);
    friend int TextEmoticonsCore__EmojiModelManager_Receivers(const TextEmoticonsCore::EmojiModelManager* self, const char* signal);
    friend int TextEmoticonsCore__EmojiModelManager_SuperReceivers(const TextEmoticonsCore::EmojiModelManager* self, const char* signal);
    friend bool TextEmoticonsCore__EmojiModelManager_IsSignalConnected(const TextEmoticonsCore::EmojiModelManager* self, const QMetaMethod* signal);
    friend bool TextEmoticonsCore__EmojiModelManager_SuperIsSignalConnected(const TextEmoticonsCore::EmojiModelManager* self, const QMetaMethod* signal);
};

#endif
