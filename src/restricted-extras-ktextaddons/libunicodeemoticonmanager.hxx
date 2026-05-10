#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALUNICODEEMOTICONMANAGER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALUNICODEEMOTICONMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEmoticonsCore::UnicodeEmoticonManager so that we can call protected methods
class VirtualTextEmoticonsCoreUnicodeEmoticonManager final : public TextEmoticonsCore::UnicodeEmoticonManager {

  public:
    // Virtual class boolean flag
    bool isVirtualTextEmoticonsCoreUnicodeEmoticonManager = true;

    // Virtual class public types (including callbacks)
    using TextEmoticonsCore__UnicodeEmoticonManager_MetaObject_Callback = QMetaObject* (*)();
    using TextEmoticonsCore__UnicodeEmoticonManager_Metacast_Callback = void* (*)(TextEmoticonsCore__UnicodeEmoticonManager*, const char*);
    using TextEmoticonsCore__UnicodeEmoticonManager_Metacall_Callback = int (*)(TextEmoticonsCore__UnicodeEmoticonManager*, int, int, void**);
    using TextEmoticonsCore__UnicodeEmoticonManager_Event_Callback = bool (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QEvent*);
    using TextEmoticonsCore__UnicodeEmoticonManager_EventFilter_Callback = bool (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QObject*, QEvent*);
    using TextEmoticonsCore__UnicodeEmoticonManager_TimerEvent_Callback = void (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QTimerEvent*);
    using TextEmoticonsCore__UnicodeEmoticonManager_ChildEvent_Callback = void (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QChildEvent*);
    using TextEmoticonsCore__UnicodeEmoticonManager_CustomEvent_Callback = void (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QEvent*);
    using TextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify_Callback = void (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QMetaMethod*);
    using TextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify_Callback = void (*)(TextEmoticonsCore__UnicodeEmoticonManager*, QMetaMethod*);
    using TextEmoticonsCore__UnicodeEmoticonManager_Sender_Callback = QObject* (*)();
    using TextEmoticonsCore__UnicodeEmoticonManager_SenderSignalIndex_Callback = int (*)();
    using TextEmoticonsCore__UnicodeEmoticonManager_Receivers_Callback = int (*)(const TextEmoticonsCore__UnicodeEmoticonManager*, const char*);
    using TextEmoticonsCore__UnicodeEmoticonManager_IsSignalConnected_Callback = bool (*)(const TextEmoticonsCore__UnicodeEmoticonManager*, QMetaMethod*);

  protected:
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
    TextEmoticonsCore__UnicodeEmoticonManager_Sender_Callback textemoticonscore__unicodeemoticonmanager_sender_callback = nullptr;
    TextEmoticonsCore__UnicodeEmoticonManager_SenderSignalIndex_Callback textemoticonscore__unicodeemoticonmanager_sendersignalindex_callback = nullptr;
    TextEmoticonsCore__UnicodeEmoticonManager_Receivers_Callback textemoticonscore__unicodeemoticonmanager_receivers_callback = nullptr;
    TextEmoticonsCore__UnicodeEmoticonManager_IsSignalConnected_Callback textemoticonscore__unicodeemoticonmanager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool textemoticonscore__unicodeemoticonmanager_metaobject_isbase = false;
    mutable bool textemoticonscore__unicodeemoticonmanager_metacast_isbase = false;
    mutable bool textemoticonscore__unicodeemoticonmanager_metacall_isbase = false;
    mutable bool textemoticonscore__unicodeemoticonmanager_event_isbase = false;
    mutable bool textemoticonscore__unicodeemoticonmanager_eventfilter_isbase = false;
    mutable bool textemoticonscore__unicodeemoticonmanager_timerevent_isbase = false;
    mutable bool textemoticonscore__unicodeemoticonmanager_childevent_isbase = false;
    mutable bool textemoticonscore__unicodeemoticonmanager_customevent_isbase = false;
    mutable bool textemoticonscore__unicodeemoticonmanager_connectnotify_isbase = false;
    mutable bool textemoticonscore__unicodeemoticonmanager_disconnectnotify_isbase = false;
    mutable bool textemoticonscore__unicodeemoticonmanager_sender_isbase = false;
    mutable bool textemoticonscore__unicodeemoticonmanager_sendersignalindex_isbase = false;
    mutable bool textemoticonscore__unicodeemoticonmanager_receivers_isbase = false;
    mutable bool textemoticonscore__unicodeemoticonmanager_issignalconnected_isbase = false;

  public:
    VirtualTextEmoticonsCoreUnicodeEmoticonManager() : TextEmoticonsCore::UnicodeEmoticonManager() {};
    VirtualTextEmoticonsCoreUnicodeEmoticonManager(QObject* parent) : TextEmoticonsCore::UnicodeEmoticonManager(parent) {};

    // Callback setters
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_MetaObject_Callback(TextEmoticonsCore__UnicodeEmoticonManager_MetaObject_Callback cb) { textemoticonscore__unicodeemoticonmanager_metaobject_callback = cb; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_Metacast_Callback(TextEmoticonsCore__UnicodeEmoticonManager_Metacast_Callback cb) { textemoticonscore__unicodeemoticonmanager_metacast_callback = cb; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_Metacall_Callback(TextEmoticonsCore__UnicodeEmoticonManager_Metacall_Callback cb) { textemoticonscore__unicodeemoticonmanager_metacall_callback = cb; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_Event_Callback(TextEmoticonsCore__UnicodeEmoticonManager_Event_Callback cb) { textemoticonscore__unicodeemoticonmanager_event_callback = cb; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_EventFilter_Callback(TextEmoticonsCore__UnicodeEmoticonManager_EventFilter_Callback cb) { textemoticonscore__unicodeemoticonmanager_eventfilter_callback = cb; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_TimerEvent_Callback(TextEmoticonsCore__UnicodeEmoticonManager_TimerEvent_Callback cb) { textemoticonscore__unicodeemoticonmanager_timerevent_callback = cb; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_ChildEvent_Callback(TextEmoticonsCore__UnicodeEmoticonManager_ChildEvent_Callback cb) { textemoticonscore__unicodeemoticonmanager_childevent_callback = cb; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_CustomEvent_Callback(TextEmoticonsCore__UnicodeEmoticonManager_CustomEvent_Callback cb) { textemoticonscore__unicodeemoticonmanager_customevent_callback = cb; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify_Callback(TextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify_Callback cb) { textemoticonscore__unicodeemoticonmanager_connectnotify_callback = cb; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify_Callback(TextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify_Callback cb) { textemoticonscore__unicodeemoticonmanager_disconnectnotify_callback = cb; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_Sender_Callback(TextEmoticonsCore__UnicodeEmoticonManager_Sender_Callback cb) { textemoticonscore__unicodeemoticonmanager_sender_callback = cb; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_SenderSignalIndex_Callback(TextEmoticonsCore__UnicodeEmoticonManager_SenderSignalIndex_Callback cb) { textemoticonscore__unicodeemoticonmanager_sendersignalindex_callback = cb; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_Receivers_Callback(TextEmoticonsCore__UnicodeEmoticonManager_Receivers_Callback cb) { textemoticonscore__unicodeemoticonmanager_receivers_callback = cb; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_IsSignalConnected_Callback(TextEmoticonsCore__UnicodeEmoticonManager_IsSignalConnected_Callback cb) { textemoticonscore__unicodeemoticonmanager_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_MetaObject_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_metaobject_isbase = value; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_Metacast_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_metacast_isbase = value; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_Metacall_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_metacall_isbase = value; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_Event_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_event_isbase = value; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_EventFilter_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_eventfilter_isbase = value; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_TimerEvent_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_timerevent_isbase = value; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_ChildEvent_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_childevent_isbase = value; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_CustomEvent_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_customevent_isbase = value; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_connectnotify_isbase = value; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_disconnectnotify_isbase = value; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_Sender_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_sender_isbase = value; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_SenderSignalIndex_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_sendersignalindex_isbase = value; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_Receivers_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_receivers_isbase = value; }
    inline void setTextEmoticonsCore__UnicodeEmoticonManager_IsSignalConnected_IsBase(bool value) const { textemoticonscore__unicodeemoticonmanager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textemoticonscore__unicodeemoticonmanager_metaobject_isbase) {
            textemoticonscore__unicodeemoticonmanager_metaobject_isbase = false;
            return TextEmoticonsCore__UnicodeEmoticonManager::metaObject();
        }
        auto metaobject_cb = textemoticonscore__unicodeemoticonmanager_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textemoticonscore__unicodeemoticonmanager_metacast_isbase) {
            textemoticonscore__unicodeemoticonmanager_metacast_isbase = false;
            return TextEmoticonsCore__UnicodeEmoticonManager::qt_metacast(param1);
        }
        auto metacast_cb = textemoticonscore__unicodeemoticonmanager_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textemoticonscore__unicodeemoticonmanager_metacall_isbase) {
            textemoticonscore__unicodeemoticonmanager_metacall_isbase = false;
            return TextEmoticonsCore__UnicodeEmoticonManager::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textemoticonscore__unicodeemoticonmanager_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textemoticonscore__unicodeemoticonmanager_event_isbase) {
            textemoticonscore__unicodeemoticonmanager_event_isbase = false;
            return TextEmoticonsCore__UnicodeEmoticonManager::event(event);
        }
        auto event_cb = textemoticonscore__unicodeemoticonmanager_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textemoticonscore__unicodeemoticonmanager_eventfilter_isbase) {
            textemoticonscore__unicodeemoticonmanager_eventfilter_isbase = false;
            return TextEmoticonsCore__UnicodeEmoticonManager::eventFilter(watched, event);
        }
        auto eventfilter_cb = textemoticonscore__unicodeemoticonmanager_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textemoticonscore__unicodeemoticonmanager_timerevent_isbase) {
            textemoticonscore__unicodeemoticonmanager_timerevent_isbase = false;
            TextEmoticonsCore__UnicodeEmoticonManager::timerEvent(event);
            return;
        }
        auto timerevent_cb = textemoticonscore__unicodeemoticonmanager_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__UnicodeEmoticonManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textemoticonscore__unicodeemoticonmanager_childevent_isbase) {
            textemoticonscore__unicodeemoticonmanager_childevent_isbase = false;
            TextEmoticonsCore__UnicodeEmoticonManager::childEvent(event);
            return;
        }
        auto childevent_cb = textemoticonscore__unicodeemoticonmanager_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__UnicodeEmoticonManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textemoticonscore__unicodeemoticonmanager_customevent_isbase) {
            textemoticonscore__unicodeemoticonmanager_customevent_isbase = false;
            TextEmoticonsCore__UnicodeEmoticonManager::customEvent(event);
            return;
        }
        auto customevent_cb = textemoticonscore__unicodeemoticonmanager_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__UnicodeEmoticonManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__unicodeemoticonmanager_connectnotify_isbase) {
            textemoticonscore__unicodeemoticonmanager_connectnotify_isbase = false;
            TextEmoticonsCore__UnicodeEmoticonManager::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textemoticonscore__unicodeemoticonmanager_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__UnicodeEmoticonManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__unicodeemoticonmanager_disconnectnotify_isbase) {
            textemoticonscore__unicodeemoticonmanager_disconnectnotify_isbase = false;
            TextEmoticonsCore__UnicodeEmoticonManager::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textemoticonscore__unicodeemoticonmanager_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__UnicodeEmoticonManager::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textemoticonscore__unicodeemoticonmanager_sender_isbase) {
            textemoticonscore__unicodeemoticonmanager_sender_isbase = false;
            return TextEmoticonsCore__UnicodeEmoticonManager::sender();
        }
        auto sender_cb = textemoticonscore__unicodeemoticonmanager_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textemoticonscore__unicodeemoticonmanager_sendersignalindex_isbase) {
            textemoticonscore__unicodeemoticonmanager_sendersignalindex_isbase = false;
            return TextEmoticonsCore__UnicodeEmoticonManager::senderSignalIndex();
        }
        auto sendersignalindex_cb = textemoticonscore__unicodeemoticonmanager_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textemoticonscore__unicodeemoticonmanager_receivers_isbase) {
            textemoticonscore__unicodeemoticonmanager_receivers_isbase = false;
            return TextEmoticonsCore__UnicodeEmoticonManager::receivers(signal);
        }
        auto receivers_cb = textemoticonscore__unicodeemoticonmanager_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textemoticonscore__unicodeemoticonmanager_issignalconnected_isbase) {
            textemoticonscore__unicodeemoticonmanager_issignalconnected_isbase = false;
            return TextEmoticonsCore__UnicodeEmoticonManager::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textemoticonscore__unicodeemoticonmanager_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__UnicodeEmoticonManager::isSignalConnected(signal);
    }

    // Friend functions
    friend void TextEmoticonsCore__UnicodeEmoticonManager_TimerEvent(TextEmoticonsCore::UnicodeEmoticonManager* self, QTimerEvent* event);
    friend void TextEmoticonsCore__UnicodeEmoticonManager_SuperTimerEvent(TextEmoticonsCore::UnicodeEmoticonManager* self, QTimerEvent* event);
    friend void TextEmoticonsCore__UnicodeEmoticonManager_ChildEvent(TextEmoticonsCore::UnicodeEmoticonManager* self, QChildEvent* event);
    friend void TextEmoticonsCore__UnicodeEmoticonManager_SuperChildEvent(TextEmoticonsCore::UnicodeEmoticonManager* self, QChildEvent* event);
    friend void TextEmoticonsCore__UnicodeEmoticonManager_CustomEvent(TextEmoticonsCore::UnicodeEmoticonManager* self, QEvent* event);
    friend void TextEmoticonsCore__UnicodeEmoticonManager_SuperCustomEvent(TextEmoticonsCore::UnicodeEmoticonManager* self, QEvent* event);
    friend void TextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify(TextEmoticonsCore::UnicodeEmoticonManager* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__UnicodeEmoticonManager_SuperConnectNotify(TextEmoticonsCore::UnicodeEmoticonManager* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify(TextEmoticonsCore::UnicodeEmoticonManager* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__UnicodeEmoticonManager_SuperDisconnectNotify(TextEmoticonsCore::UnicodeEmoticonManager* self, const QMetaMethod* signal);
    friend QObject* TextEmoticonsCore__UnicodeEmoticonManager_Sender(const TextEmoticonsCore::UnicodeEmoticonManager* self);
    friend QObject* TextEmoticonsCore__UnicodeEmoticonManager_SuperSender(const TextEmoticonsCore::UnicodeEmoticonManager* self);
    friend int TextEmoticonsCore__UnicodeEmoticonManager_SenderSignalIndex(const TextEmoticonsCore::UnicodeEmoticonManager* self);
    friend int TextEmoticonsCore__UnicodeEmoticonManager_SuperSenderSignalIndex(const TextEmoticonsCore::UnicodeEmoticonManager* self);
    friend int TextEmoticonsCore__UnicodeEmoticonManager_Receivers(const TextEmoticonsCore::UnicodeEmoticonManager* self, const char* signal);
    friend int TextEmoticonsCore__UnicodeEmoticonManager_SuperReceivers(const TextEmoticonsCore::UnicodeEmoticonManager* self, const char* signal);
    friend bool TextEmoticonsCore__UnicodeEmoticonManager_IsSignalConnected(const TextEmoticonsCore::UnicodeEmoticonManager* self, const QMetaMethod* signal);
    friend bool TextEmoticonsCore__UnicodeEmoticonManager_SuperIsSignalConnected(const TextEmoticonsCore::UnicodeEmoticonManager* self, const QMetaMethod* signal);
};

#endif
