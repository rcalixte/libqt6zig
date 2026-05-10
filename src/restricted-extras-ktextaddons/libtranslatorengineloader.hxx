#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTRANSLATORENGINELOADER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTRANSLATORENGINELOADER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorEngineLoader so that we can call protected methods
class VirtualTextTranslatorTranslatorEngineLoader final : public TextTranslator::TranslatorEngineLoader {

  public:
    // Virtual class boolean flag
    bool isVirtualTextTranslatorTranslatorEngineLoader = true;

    // Virtual class public types (including callbacks)
    using TextTranslator__TranslatorEngineLoader_MetaObject_Callback = QMetaObject* (*)();
    using TextTranslator__TranslatorEngineLoader_Metacast_Callback = void* (*)(TextTranslator__TranslatorEngineLoader*, const char*);
    using TextTranslator__TranslatorEngineLoader_Metacall_Callback = int (*)(TextTranslator__TranslatorEngineLoader*, int, int, void**);
    using TextTranslator__TranslatorEngineLoader_Event_Callback = bool (*)(TextTranslator__TranslatorEngineLoader*, QEvent*);
    using TextTranslator__TranslatorEngineLoader_EventFilter_Callback = bool (*)(TextTranslator__TranslatorEngineLoader*, QObject*, QEvent*);
    using TextTranslator__TranslatorEngineLoader_TimerEvent_Callback = void (*)(TextTranslator__TranslatorEngineLoader*, QTimerEvent*);
    using TextTranslator__TranslatorEngineLoader_ChildEvent_Callback = void (*)(TextTranslator__TranslatorEngineLoader*, QChildEvent*);
    using TextTranslator__TranslatorEngineLoader_CustomEvent_Callback = void (*)(TextTranslator__TranslatorEngineLoader*, QEvent*);
    using TextTranslator__TranslatorEngineLoader_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorEngineLoader*, QMetaMethod*);
    using TextTranslator__TranslatorEngineLoader_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorEngineLoader*, QMetaMethod*);
    using TextTranslator__TranslatorEngineLoader_Sender_Callback = QObject* (*)();
    using TextTranslator__TranslatorEngineLoader_SenderSignalIndex_Callback = int (*)();
    using TextTranslator__TranslatorEngineLoader_Receivers_Callback = int (*)(const TextTranslator__TranslatorEngineLoader*, const char*);
    using TextTranslator__TranslatorEngineLoader_IsSignalConnected_Callback = bool (*)(const TextTranslator__TranslatorEngineLoader*, QMetaMethod*);

  protected:
    // Instance callback storage
    TextTranslator__TranslatorEngineLoader_MetaObject_Callback texttranslator__translatorengineloader_metaobject_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_Metacast_Callback texttranslator__translatorengineloader_metacast_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_Metacall_Callback texttranslator__translatorengineloader_metacall_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_Event_Callback texttranslator__translatorengineloader_event_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_EventFilter_Callback texttranslator__translatorengineloader_eventfilter_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_TimerEvent_Callback texttranslator__translatorengineloader_timerevent_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_ChildEvent_Callback texttranslator__translatorengineloader_childevent_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_CustomEvent_Callback texttranslator__translatorengineloader_customevent_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_ConnectNotify_Callback texttranslator__translatorengineloader_connectnotify_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_DisconnectNotify_Callback texttranslator__translatorengineloader_disconnectnotify_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_Sender_Callback texttranslator__translatorengineloader_sender_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_SenderSignalIndex_Callback texttranslator__translatorengineloader_sendersignalindex_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_Receivers_Callback texttranslator__translatorengineloader_receivers_callback = nullptr;
    TextTranslator__TranslatorEngineLoader_IsSignalConnected_Callback texttranslator__translatorengineloader_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool texttranslator__translatorengineloader_metaobject_isbase = false;
    mutable bool texttranslator__translatorengineloader_metacast_isbase = false;
    mutable bool texttranslator__translatorengineloader_metacall_isbase = false;
    mutable bool texttranslator__translatorengineloader_event_isbase = false;
    mutable bool texttranslator__translatorengineloader_eventfilter_isbase = false;
    mutable bool texttranslator__translatorengineloader_timerevent_isbase = false;
    mutable bool texttranslator__translatorengineloader_childevent_isbase = false;
    mutable bool texttranslator__translatorengineloader_customevent_isbase = false;
    mutable bool texttranslator__translatorengineloader_connectnotify_isbase = false;
    mutable bool texttranslator__translatorengineloader_disconnectnotify_isbase = false;
    mutable bool texttranslator__translatorengineloader_sender_isbase = false;
    mutable bool texttranslator__translatorengineloader_sendersignalindex_isbase = false;
    mutable bool texttranslator__translatorengineloader_receivers_isbase = false;
    mutable bool texttranslator__translatorengineloader_issignalconnected_isbase = false;

  public:
    VirtualTextTranslatorTranslatorEngineLoader() : TextTranslator::TranslatorEngineLoader() {};
    VirtualTextTranslatorTranslatorEngineLoader(QObject* parent) : TextTranslator::TranslatorEngineLoader(parent) {};

    // Callback setters
    inline void setTextTranslator__TranslatorEngineLoader_MetaObject_Callback(TextTranslator__TranslatorEngineLoader_MetaObject_Callback cb) { texttranslator__translatorengineloader_metaobject_callback = cb; }
    inline void setTextTranslator__TranslatorEngineLoader_Metacast_Callback(TextTranslator__TranslatorEngineLoader_Metacast_Callback cb) { texttranslator__translatorengineloader_metacast_callback = cb; }
    inline void setTextTranslator__TranslatorEngineLoader_Metacall_Callback(TextTranslator__TranslatorEngineLoader_Metacall_Callback cb) { texttranslator__translatorengineloader_metacall_callback = cb; }
    inline void setTextTranslator__TranslatorEngineLoader_Event_Callback(TextTranslator__TranslatorEngineLoader_Event_Callback cb) { texttranslator__translatorengineloader_event_callback = cb; }
    inline void setTextTranslator__TranslatorEngineLoader_EventFilter_Callback(TextTranslator__TranslatorEngineLoader_EventFilter_Callback cb) { texttranslator__translatorengineloader_eventfilter_callback = cb; }
    inline void setTextTranslator__TranslatorEngineLoader_TimerEvent_Callback(TextTranslator__TranslatorEngineLoader_TimerEvent_Callback cb) { texttranslator__translatorengineloader_timerevent_callback = cb; }
    inline void setTextTranslator__TranslatorEngineLoader_ChildEvent_Callback(TextTranslator__TranslatorEngineLoader_ChildEvent_Callback cb) { texttranslator__translatorengineloader_childevent_callback = cb; }
    inline void setTextTranslator__TranslatorEngineLoader_CustomEvent_Callback(TextTranslator__TranslatorEngineLoader_CustomEvent_Callback cb) { texttranslator__translatorengineloader_customevent_callback = cb; }
    inline void setTextTranslator__TranslatorEngineLoader_ConnectNotify_Callback(TextTranslator__TranslatorEngineLoader_ConnectNotify_Callback cb) { texttranslator__translatorengineloader_connectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorEngineLoader_DisconnectNotify_Callback(TextTranslator__TranslatorEngineLoader_DisconnectNotify_Callback cb) { texttranslator__translatorengineloader_disconnectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorEngineLoader_Sender_Callback(TextTranslator__TranslatorEngineLoader_Sender_Callback cb) { texttranslator__translatorengineloader_sender_callback = cb; }
    inline void setTextTranslator__TranslatorEngineLoader_SenderSignalIndex_Callback(TextTranslator__TranslatorEngineLoader_SenderSignalIndex_Callback cb) { texttranslator__translatorengineloader_sendersignalindex_callback = cb; }
    inline void setTextTranslator__TranslatorEngineLoader_Receivers_Callback(TextTranslator__TranslatorEngineLoader_Receivers_Callback cb) { texttranslator__translatorengineloader_receivers_callback = cb; }
    inline void setTextTranslator__TranslatorEngineLoader_IsSignalConnected_Callback(TextTranslator__TranslatorEngineLoader_IsSignalConnected_Callback cb) { texttranslator__translatorengineloader_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextTranslator__TranslatorEngineLoader_MetaObject_IsBase(bool value) const { texttranslator__translatorengineloader_metaobject_isbase = value; }
    inline void setTextTranslator__TranslatorEngineLoader_Metacast_IsBase(bool value) const { texttranslator__translatorengineloader_metacast_isbase = value; }
    inline void setTextTranslator__TranslatorEngineLoader_Metacall_IsBase(bool value) const { texttranslator__translatorengineloader_metacall_isbase = value; }
    inline void setTextTranslator__TranslatorEngineLoader_Event_IsBase(bool value) const { texttranslator__translatorengineloader_event_isbase = value; }
    inline void setTextTranslator__TranslatorEngineLoader_EventFilter_IsBase(bool value) const { texttranslator__translatorengineloader_eventfilter_isbase = value; }
    inline void setTextTranslator__TranslatorEngineLoader_TimerEvent_IsBase(bool value) const { texttranslator__translatorengineloader_timerevent_isbase = value; }
    inline void setTextTranslator__TranslatorEngineLoader_ChildEvent_IsBase(bool value) const { texttranslator__translatorengineloader_childevent_isbase = value; }
    inline void setTextTranslator__TranslatorEngineLoader_CustomEvent_IsBase(bool value) const { texttranslator__translatorengineloader_customevent_isbase = value; }
    inline void setTextTranslator__TranslatorEngineLoader_ConnectNotify_IsBase(bool value) const { texttranslator__translatorengineloader_connectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorEngineLoader_DisconnectNotify_IsBase(bool value) const { texttranslator__translatorengineloader_disconnectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorEngineLoader_Sender_IsBase(bool value) const { texttranslator__translatorengineloader_sender_isbase = value; }
    inline void setTextTranslator__TranslatorEngineLoader_SenderSignalIndex_IsBase(bool value) const { texttranslator__translatorengineloader_sendersignalindex_isbase = value; }
    inline void setTextTranslator__TranslatorEngineLoader_Receivers_IsBase(bool value) const { texttranslator__translatorengineloader_receivers_isbase = value; }
    inline void setTextTranslator__TranslatorEngineLoader_IsSignalConnected_IsBase(bool value) const { texttranslator__translatorengineloader_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorengineloader_metaobject_isbase) {
            texttranslator__translatorengineloader_metaobject_isbase = false;
            return TextTranslator__TranslatorEngineLoader::metaObject();
        }
        auto metaobject_cb = texttranslator__translatorengineloader_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineLoader::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorengineloader_metacast_isbase) {
            texttranslator__translatorengineloader_metacast_isbase = false;
            return TextTranslator__TranslatorEngineLoader::qt_metacast(param1);
        }
        auto metacast_cb = texttranslator__translatorengineloader_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineLoader::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorengineloader_metacall_isbase) {
            texttranslator__translatorengineloader_metacall_isbase = false;
            return TextTranslator__TranslatorEngineLoader::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = texttranslator__translatorengineloader_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEngineLoader::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (texttranslator__translatorengineloader_event_isbase) {
            texttranslator__translatorengineloader_event_isbase = false;
            return TextTranslator__TranslatorEngineLoader::event(event);
        }
        auto event_cb = texttranslator__translatorengineloader_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineLoader::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (texttranslator__translatorengineloader_eventfilter_isbase) {
            texttranslator__translatorengineloader_eventfilter_isbase = false;
            return TextTranslator__TranslatorEngineLoader::eventFilter(watched, event);
        }
        auto eventfilter_cb = texttranslator__translatorengineloader_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineLoader::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorengineloader_timerevent_isbase) {
            texttranslator__translatorengineloader_timerevent_isbase = false;
            TextTranslator__TranslatorEngineLoader::timerEvent(event);
            return;
        }
        auto timerevent_cb = texttranslator__translatorengineloader_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineLoader::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorengineloader_childevent_isbase) {
            texttranslator__translatorengineloader_childevent_isbase = false;
            TextTranslator__TranslatorEngineLoader::childEvent(event);
            return;
        }
        auto childevent_cb = texttranslator__translatorengineloader_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineLoader::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorengineloader_customevent_isbase) {
            texttranslator__translatorengineloader_customevent_isbase = false;
            TextTranslator__TranslatorEngineLoader::customEvent(event);
            return;
        }
        auto customevent_cb = texttranslator__translatorengineloader_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineLoader::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineloader_connectnotify_isbase) {
            texttranslator__translatorengineloader_connectnotify_isbase = false;
            TextTranslator__TranslatorEngineLoader::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = texttranslator__translatorengineloader_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineLoader::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineloader_disconnectnotify_isbase) {
            texttranslator__translatorengineloader_disconnectnotify_isbase = false;
            TextTranslator__TranslatorEngineLoader::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = texttranslator__translatorengineloader_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineLoader::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (texttranslator__translatorengineloader_sender_isbase) {
            texttranslator__translatorengineloader_sender_isbase = false;
            return TextTranslator__TranslatorEngineLoader::sender();
        }
        auto sender_cb = texttranslator__translatorengineloader_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineLoader::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (texttranslator__translatorengineloader_sendersignalindex_isbase) {
            texttranslator__translatorengineloader_sendersignalindex_isbase = false;
            return TextTranslator__TranslatorEngineLoader::senderSignalIndex();
        }
        auto sendersignalindex_cb = texttranslator__translatorengineloader_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEngineLoader::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (texttranslator__translatorengineloader_receivers_isbase) {
            texttranslator__translatorengineloader_receivers_isbase = false;
            return TextTranslator__TranslatorEngineLoader::receivers(signal);
        }
        auto receivers_cb = texttranslator__translatorengineloader_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEngineLoader::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (texttranslator__translatorengineloader_issignalconnected_isbase) {
            texttranslator__translatorengineloader_issignalconnected_isbase = false;
            return TextTranslator__TranslatorEngineLoader::isSignalConnected(signal);
        }
        auto issignalconnected_cb = texttranslator__translatorengineloader_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineLoader::isSignalConnected(signal);
    }

    // Friend functions
    friend void TextTranslator__TranslatorEngineLoader_TimerEvent(TextTranslator::TranslatorEngineLoader* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorEngineLoader_SuperTimerEvent(TextTranslator::TranslatorEngineLoader* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorEngineLoader_ChildEvent(TextTranslator::TranslatorEngineLoader* self, QChildEvent* event);
    friend void TextTranslator__TranslatorEngineLoader_SuperChildEvent(TextTranslator::TranslatorEngineLoader* self, QChildEvent* event);
    friend void TextTranslator__TranslatorEngineLoader_CustomEvent(TextTranslator::TranslatorEngineLoader* self, QEvent* event);
    friend void TextTranslator__TranslatorEngineLoader_SuperCustomEvent(TextTranslator::TranslatorEngineLoader* self, QEvent* event);
    friend void TextTranslator__TranslatorEngineLoader_ConnectNotify(TextTranslator::TranslatorEngineLoader* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEngineLoader_SuperConnectNotify(TextTranslator::TranslatorEngineLoader* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEngineLoader_DisconnectNotify(TextTranslator::TranslatorEngineLoader* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEngineLoader_SuperDisconnectNotify(TextTranslator::TranslatorEngineLoader* self, const QMetaMethod* signal);
    friend QObject* TextTranslator__TranslatorEngineLoader_Sender(const TextTranslator::TranslatorEngineLoader* self);
    friend QObject* TextTranslator__TranslatorEngineLoader_SuperSender(const TextTranslator::TranslatorEngineLoader* self);
    friend int TextTranslator__TranslatorEngineLoader_SenderSignalIndex(const TextTranslator::TranslatorEngineLoader* self);
    friend int TextTranslator__TranslatorEngineLoader_SuperSenderSignalIndex(const TextTranslator::TranslatorEngineLoader* self);
    friend int TextTranslator__TranslatorEngineLoader_Receivers(const TextTranslator::TranslatorEngineLoader* self, const char* signal);
    friend int TextTranslator__TranslatorEngineLoader_SuperReceivers(const TextTranslator::TranslatorEngineLoader* self, const char* signal);
    friend bool TextTranslator__TranslatorEngineLoader_IsSignalConnected(const TextTranslator::TranslatorEngineLoader* self, const QMetaMethod* signal);
    friend bool TextTranslator__TranslatorEngineLoader_SuperIsSignalConnected(const TextTranslator::TranslatorEngineLoader* self, const QMetaMethod* signal);
};

#endif
