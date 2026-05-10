#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTRANSLATORENGINEACCESSMANAGER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTRANSLATORENGINEACCESSMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorEngineAccessManager so that we can call protected methods
class VirtualTextTranslatorTranslatorEngineAccessManager final : public TextTranslator::TranslatorEngineAccessManager {

  public:
    // Virtual class boolean flag
    bool isVirtualTextTranslatorTranslatorEngineAccessManager = true;

    // Virtual class public types (including callbacks)
    using TextTranslator__TranslatorEngineAccessManager_MetaObject_Callback = QMetaObject* (*)();
    using TextTranslator__TranslatorEngineAccessManager_Metacast_Callback = void* (*)(TextTranslator__TranslatorEngineAccessManager*, const char*);
    using TextTranslator__TranslatorEngineAccessManager_Metacall_Callback = int (*)(TextTranslator__TranslatorEngineAccessManager*, int, int, void**);
    using TextTranslator__TranslatorEngineAccessManager_Event_Callback = bool (*)(TextTranslator__TranslatorEngineAccessManager*, QEvent*);
    using TextTranslator__TranslatorEngineAccessManager_EventFilter_Callback = bool (*)(TextTranslator__TranslatorEngineAccessManager*, QObject*, QEvent*);
    using TextTranslator__TranslatorEngineAccessManager_TimerEvent_Callback = void (*)(TextTranslator__TranslatorEngineAccessManager*, QTimerEvent*);
    using TextTranslator__TranslatorEngineAccessManager_ChildEvent_Callback = void (*)(TextTranslator__TranslatorEngineAccessManager*, QChildEvent*);
    using TextTranslator__TranslatorEngineAccessManager_CustomEvent_Callback = void (*)(TextTranslator__TranslatorEngineAccessManager*, QEvent*);
    using TextTranslator__TranslatorEngineAccessManager_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorEngineAccessManager*, QMetaMethod*);
    using TextTranslator__TranslatorEngineAccessManager_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorEngineAccessManager*, QMetaMethod*);
    using TextTranslator__TranslatorEngineAccessManager_Sender_Callback = QObject* (*)();
    using TextTranslator__TranslatorEngineAccessManager_SenderSignalIndex_Callback = int (*)();
    using TextTranslator__TranslatorEngineAccessManager_Receivers_Callback = int (*)(const TextTranslator__TranslatorEngineAccessManager*, const char*);
    using TextTranslator__TranslatorEngineAccessManager_IsSignalConnected_Callback = bool (*)(const TextTranslator__TranslatorEngineAccessManager*, QMetaMethod*);

  protected:
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
    TextTranslator__TranslatorEngineAccessManager_Sender_Callback texttranslator__translatorengineaccessmanager_sender_callback = nullptr;
    TextTranslator__TranslatorEngineAccessManager_SenderSignalIndex_Callback texttranslator__translatorengineaccessmanager_sendersignalindex_callback = nullptr;
    TextTranslator__TranslatorEngineAccessManager_Receivers_Callback texttranslator__translatorengineaccessmanager_receivers_callback = nullptr;
    TextTranslator__TranslatorEngineAccessManager_IsSignalConnected_Callback texttranslator__translatorengineaccessmanager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool texttranslator__translatorengineaccessmanager_metaobject_isbase = false;
    mutable bool texttranslator__translatorengineaccessmanager_metacast_isbase = false;
    mutable bool texttranslator__translatorengineaccessmanager_metacall_isbase = false;
    mutable bool texttranslator__translatorengineaccessmanager_event_isbase = false;
    mutable bool texttranslator__translatorengineaccessmanager_eventfilter_isbase = false;
    mutable bool texttranslator__translatorengineaccessmanager_timerevent_isbase = false;
    mutable bool texttranslator__translatorengineaccessmanager_childevent_isbase = false;
    mutable bool texttranslator__translatorengineaccessmanager_customevent_isbase = false;
    mutable bool texttranslator__translatorengineaccessmanager_connectnotify_isbase = false;
    mutable bool texttranslator__translatorengineaccessmanager_disconnectnotify_isbase = false;
    mutable bool texttranslator__translatorengineaccessmanager_sender_isbase = false;
    mutable bool texttranslator__translatorengineaccessmanager_sendersignalindex_isbase = false;
    mutable bool texttranslator__translatorengineaccessmanager_receivers_isbase = false;
    mutable bool texttranslator__translatorengineaccessmanager_issignalconnected_isbase = false;

  public:
    VirtualTextTranslatorTranslatorEngineAccessManager() : TextTranslator::TranslatorEngineAccessManager() {};
    VirtualTextTranslatorTranslatorEngineAccessManager(QObject* parent) : TextTranslator::TranslatorEngineAccessManager(parent) {};

    // Callback setters
    inline void setTextTranslator__TranslatorEngineAccessManager_MetaObject_Callback(TextTranslator__TranslatorEngineAccessManager_MetaObject_Callback cb) { texttranslator__translatorengineaccessmanager_metaobject_callback = cb; }
    inline void setTextTranslator__TranslatorEngineAccessManager_Metacast_Callback(TextTranslator__TranslatorEngineAccessManager_Metacast_Callback cb) { texttranslator__translatorengineaccessmanager_metacast_callback = cb; }
    inline void setTextTranslator__TranslatorEngineAccessManager_Metacall_Callback(TextTranslator__TranslatorEngineAccessManager_Metacall_Callback cb) { texttranslator__translatorengineaccessmanager_metacall_callback = cb; }
    inline void setTextTranslator__TranslatorEngineAccessManager_Event_Callback(TextTranslator__TranslatorEngineAccessManager_Event_Callback cb) { texttranslator__translatorengineaccessmanager_event_callback = cb; }
    inline void setTextTranslator__TranslatorEngineAccessManager_EventFilter_Callback(TextTranslator__TranslatorEngineAccessManager_EventFilter_Callback cb) { texttranslator__translatorengineaccessmanager_eventfilter_callback = cb; }
    inline void setTextTranslator__TranslatorEngineAccessManager_TimerEvent_Callback(TextTranslator__TranslatorEngineAccessManager_TimerEvent_Callback cb) { texttranslator__translatorengineaccessmanager_timerevent_callback = cb; }
    inline void setTextTranslator__TranslatorEngineAccessManager_ChildEvent_Callback(TextTranslator__TranslatorEngineAccessManager_ChildEvent_Callback cb) { texttranslator__translatorengineaccessmanager_childevent_callback = cb; }
    inline void setTextTranslator__TranslatorEngineAccessManager_CustomEvent_Callback(TextTranslator__TranslatorEngineAccessManager_CustomEvent_Callback cb) { texttranslator__translatorengineaccessmanager_customevent_callback = cb; }
    inline void setTextTranslator__TranslatorEngineAccessManager_ConnectNotify_Callback(TextTranslator__TranslatorEngineAccessManager_ConnectNotify_Callback cb) { texttranslator__translatorengineaccessmanager_connectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorEngineAccessManager_DisconnectNotify_Callback(TextTranslator__TranslatorEngineAccessManager_DisconnectNotify_Callback cb) { texttranslator__translatorengineaccessmanager_disconnectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorEngineAccessManager_Sender_Callback(TextTranslator__TranslatorEngineAccessManager_Sender_Callback cb) { texttranslator__translatorengineaccessmanager_sender_callback = cb; }
    inline void setTextTranslator__TranslatorEngineAccessManager_SenderSignalIndex_Callback(TextTranslator__TranslatorEngineAccessManager_SenderSignalIndex_Callback cb) { texttranslator__translatorengineaccessmanager_sendersignalindex_callback = cb; }
    inline void setTextTranslator__TranslatorEngineAccessManager_Receivers_Callback(TextTranslator__TranslatorEngineAccessManager_Receivers_Callback cb) { texttranslator__translatorengineaccessmanager_receivers_callback = cb; }
    inline void setTextTranslator__TranslatorEngineAccessManager_IsSignalConnected_Callback(TextTranslator__TranslatorEngineAccessManager_IsSignalConnected_Callback cb) { texttranslator__translatorengineaccessmanager_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextTranslator__TranslatorEngineAccessManager_MetaObject_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_metaobject_isbase = value; }
    inline void setTextTranslator__TranslatorEngineAccessManager_Metacast_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_metacast_isbase = value; }
    inline void setTextTranslator__TranslatorEngineAccessManager_Metacall_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_metacall_isbase = value; }
    inline void setTextTranslator__TranslatorEngineAccessManager_Event_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_event_isbase = value; }
    inline void setTextTranslator__TranslatorEngineAccessManager_EventFilter_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_eventfilter_isbase = value; }
    inline void setTextTranslator__TranslatorEngineAccessManager_TimerEvent_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_timerevent_isbase = value; }
    inline void setTextTranslator__TranslatorEngineAccessManager_ChildEvent_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_childevent_isbase = value; }
    inline void setTextTranslator__TranslatorEngineAccessManager_CustomEvent_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_customevent_isbase = value; }
    inline void setTextTranslator__TranslatorEngineAccessManager_ConnectNotify_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_connectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorEngineAccessManager_DisconnectNotify_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_disconnectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorEngineAccessManager_Sender_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_sender_isbase = value; }
    inline void setTextTranslator__TranslatorEngineAccessManager_SenderSignalIndex_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_sendersignalindex_isbase = value; }
    inline void setTextTranslator__TranslatorEngineAccessManager_Receivers_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_receivers_isbase = value; }
    inline void setTextTranslator__TranslatorEngineAccessManager_IsSignalConnected_IsBase(bool value) const { texttranslator__translatorengineaccessmanager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorengineaccessmanager_metaobject_isbase) {
            texttranslator__translatorengineaccessmanager_metaobject_isbase = false;
            return TextTranslator__TranslatorEngineAccessManager::metaObject();
        }
        auto metaobject_cb = texttranslator__translatorengineaccessmanager_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineAccessManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorengineaccessmanager_metacast_isbase) {
            texttranslator__translatorengineaccessmanager_metacast_isbase = false;
            return TextTranslator__TranslatorEngineAccessManager::qt_metacast(param1);
        }
        auto metacast_cb = texttranslator__translatorengineaccessmanager_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineAccessManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorengineaccessmanager_metacall_isbase) {
            texttranslator__translatorengineaccessmanager_metacall_isbase = false;
            return TextTranslator__TranslatorEngineAccessManager::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = texttranslator__translatorengineaccessmanager_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEngineAccessManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (texttranslator__translatorengineaccessmanager_event_isbase) {
            texttranslator__translatorengineaccessmanager_event_isbase = false;
            return TextTranslator__TranslatorEngineAccessManager::event(event);
        }
        auto event_cb = texttranslator__translatorengineaccessmanager_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineAccessManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (texttranslator__translatorengineaccessmanager_eventfilter_isbase) {
            texttranslator__translatorengineaccessmanager_eventfilter_isbase = false;
            return TextTranslator__TranslatorEngineAccessManager::eventFilter(watched, event);
        }
        auto eventfilter_cb = texttranslator__translatorengineaccessmanager_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineAccessManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorengineaccessmanager_timerevent_isbase) {
            texttranslator__translatorengineaccessmanager_timerevent_isbase = false;
            TextTranslator__TranslatorEngineAccessManager::timerEvent(event);
            return;
        }
        auto timerevent_cb = texttranslator__translatorengineaccessmanager_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineAccessManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorengineaccessmanager_childevent_isbase) {
            texttranslator__translatorengineaccessmanager_childevent_isbase = false;
            TextTranslator__TranslatorEngineAccessManager::childEvent(event);
            return;
        }
        auto childevent_cb = texttranslator__translatorengineaccessmanager_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineAccessManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorengineaccessmanager_customevent_isbase) {
            texttranslator__translatorengineaccessmanager_customevent_isbase = false;
            TextTranslator__TranslatorEngineAccessManager::customEvent(event);
            return;
        }
        auto customevent_cb = texttranslator__translatorengineaccessmanager_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineAccessManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineaccessmanager_connectnotify_isbase) {
            texttranslator__translatorengineaccessmanager_connectnotify_isbase = false;
            TextTranslator__TranslatorEngineAccessManager::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = texttranslator__translatorengineaccessmanager_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineAccessManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineaccessmanager_disconnectnotify_isbase) {
            texttranslator__translatorengineaccessmanager_disconnectnotify_isbase = false;
            TextTranslator__TranslatorEngineAccessManager::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = texttranslator__translatorengineaccessmanager_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineAccessManager::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (texttranslator__translatorengineaccessmanager_sender_isbase) {
            texttranslator__translatorengineaccessmanager_sender_isbase = false;
            return TextTranslator__TranslatorEngineAccessManager::sender();
        }
        auto sender_cb = texttranslator__translatorengineaccessmanager_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineAccessManager::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (texttranslator__translatorengineaccessmanager_sendersignalindex_isbase) {
            texttranslator__translatorengineaccessmanager_sendersignalindex_isbase = false;
            return TextTranslator__TranslatorEngineAccessManager::senderSignalIndex();
        }
        auto sendersignalindex_cb = texttranslator__translatorengineaccessmanager_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEngineAccessManager::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (texttranslator__translatorengineaccessmanager_receivers_isbase) {
            texttranslator__translatorengineaccessmanager_receivers_isbase = false;
            return TextTranslator__TranslatorEngineAccessManager::receivers(signal);
        }
        auto receivers_cb = texttranslator__translatorengineaccessmanager_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEngineAccessManager::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (texttranslator__translatorengineaccessmanager_issignalconnected_isbase) {
            texttranslator__translatorengineaccessmanager_issignalconnected_isbase = false;
            return TextTranslator__TranslatorEngineAccessManager::isSignalConnected(signal);
        }
        auto issignalconnected_cb = texttranslator__translatorengineaccessmanager_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineAccessManager::isSignalConnected(signal);
    }

    // Friend functions
    friend void TextTranslator__TranslatorEngineAccessManager_TimerEvent(TextTranslator::TranslatorEngineAccessManager* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorEngineAccessManager_SuperTimerEvent(TextTranslator::TranslatorEngineAccessManager* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorEngineAccessManager_ChildEvent(TextTranslator::TranslatorEngineAccessManager* self, QChildEvent* event);
    friend void TextTranslator__TranslatorEngineAccessManager_SuperChildEvent(TextTranslator::TranslatorEngineAccessManager* self, QChildEvent* event);
    friend void TextTranslator__TranslatorEngineAccessManager_CustomEvent(TextTranslator::TranslatorEngineAccessManager* self, QEvent* event);
    friend void TextTranslator__TranslatorEngineAccessManager_SuperCustomEvent(TextTranslator::TranslatorEngineAccessManager* self, QEvent* event);
    friend void TextTranslator__TranslatorEngineAccessManager_ConnectNotify(TextTranslator::TranslatorEngineAccessManager* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEngineAccessManager_SuperConnectNotify(TextTranslator::TranslatorEngineAccessManager* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEngineAccessManager_DisconnectNotify(TextTranslator::TranslatorEngineAccessManager* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEngineAccessManager_SuperDisconnectNotify(TextTranslator::TranslatorEngineAccessManager* self, const QMetaMethod* signal);
    friend QObject* TextTranslator__TranslatorEngineAccessManager_Sender(const TextTranslator::TranslatorEngineAccessManager* self);
    friend QObject* TextTranslator__TranslatorEngineAccessManager_SuperSender(const TextTranslator::TranslatorEngineAccessManager* self);
    friend int TextTranslator__TranslatorEngineAccessManager_SenderSignalIndex(const TextTranslator::TranslatorEngineAccessManager* self);
    friend int TextTranslator__TranslatorEngineAccessManager_SuperSenderSignalIndex(const TextTranslator::TranslatorEngineAccessManager* self);
    friend int TextTranslator__TranslatorEngineAccessManager_Receivers(const TextTranslator::TranslatorEngineAccessManager* self, const char* signal);
    friend int TextTranslator__TranslatorEngineAccessManager_SuperReceivers(const TextTranslator::TranslatorEngineAccessManager* self, const char* signal);
    friend bool TextTranslator__TranslatorEngineAccessManager_IsSignalConnected(const TextTranslator::TranslatorEngineAccessManager* self, const QMetaMethod* signal);
    friend bool TextTranslator__TranslatorEngineAccessManager_SuperIsSignalConnected(const TextTranslator::TranslatorEngineAccessManager* self, const QMetaMethod* signal);
};

#endif
