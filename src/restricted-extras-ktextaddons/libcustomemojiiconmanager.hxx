#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALCUSTOMEMOJIICONMANAGER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALCUSTOMEMOJIICONMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEmoticonsCore::CustomEmojiIconManager so that we can call protected methods
class VirtualTextEmoticonsCoreCustomEmojiIconManager final : public TextEmoticonsCore::CustomEmojiIconManager {

  public:
    // Virtual class boolean flag
    bool isVirtualTextEmoticonsCoreCustomEmojiIconManager = true;

    // Virtual class public types (including callbacks)
    using TextEmoticonsCore__CustomEmojiIconManager_GenerateIcon_Callback = QIcon* (*)(TextEmoticonsCore__CustomEmojiIconManager*, const char*);
    using TextEmoticonsCore__CustomEmojiIconManager_FileName_Callback = const char* (*)(TextEmoticonsCore__CustomEmojiIconManager*, const char*);
    using TextEmoticonsCore__CustomEmojiIconManager_MetaObject_Callback = QMetaObject* (*)();
    using TextEmoticonsCore__CustomEmojiIconManager_Metacast_Callback = void* (*)(TextEmoticonsCore__CustomEmojiIconManager*, const char*);
    using TextEmoticonsCore__CustomEmojiIconManager_Metacall_Callback = int (*)(TextEmoticonsCore__CustomEmojiIconManager*, int, int, void**);
    using TextEmoticonsCore__CustomEmojiIconManager_Event_Callback = bool (*)(TextEmoticonsCore__CustomEmojiIconManager*, QEvent*);
    using TextEmoticonsCore__CustomEmojiIconManager_EventFilter_Callback = bool (*)(TextEmoticonsCore__CustomEmojiIconManager*, QObject*, QEvent*);
    using TextEmoticonsCore__CustomEmojiIconManager_TimerEvent_Callback = void (*)(TextEmoticonsCore__CustomEmojiIconManager*, QTimerEvent*);
    using TextEmoticonsCore__CustomEmojiIconManager_ChildEvent_Callback = void (*)(TextEmoticonsCore__CustomEmojiIconManager*, QChildEvent*);
    using TextEmoticonsCore__CustomEmojiIconManager_CustomEvent_Callback = void (*)(TextEmoticonsCore__CustomEmojiIconManager*, QEvent*);
    using TextEmoticonsCore__CustomEmojiIconManager_ConnectNotify_Callback = void (*)(TextEmoticonsCore__CustomEmojiIconManager*, QMetaMethod*);
    using TextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify_Callback = void (*)(TextEmoticonsCore__CustomEmojiIconManager*, QMetaMethod*);
    using TextEmoticonsCore__CustomEmojiIconManager_Sender_Callback = QObject* (*)();
    using TextEmoticonsCore__CustomEmojiIconManager_SenderSignalIndex_Callback = int (*)();
    using TextEmoticonsCore__CustomEmojiIconManager_Receivers_Callback = int (*)(const TextEmoticonsCore__CustomEmojiIconManager*, const char*);
    using TextEmoticonsCore__CustomEmojiIconManager_IsSignalConnected_Callback = bool (*)(const TextEmoticonsCore__CustomEmojiIconManager*, QMetaMethod*);

  protected:
    // Instance callback storage
    TextEmoticonsCore__CustomEmojiIconManager_GenerateIcon_Callback textemoticonscore__customemojiiconmanager_generateicon_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_FileName_Callback textemoticonscore__customemojiiconmanager_filename_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_MetaObject_Callback textemoticonscore__customemojiiconmanager_metaobject_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_Metacast_Callback textemoticonscore__customemojiiconmanager_metacast_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_Metacall_Callback textemoticonscore__customemojiiconmanager_metacall_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_Event_Callback textemoticonscore__customemojiiconmanager_event_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_EventFilter_Callback textemoticonscore__customemojiiconmanager_eventfilter_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_TimerEvent_Callback textemoticonscore__customemojiiconmanager_timerevent_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_ChildEvent_Callback textemoticonscore__customemojiiconmanager_childevent_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_CustomEvent_Callback textemoticonscore__customemojiiconmanager_customevent_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_ConnectNotify_Callback textemoticonscore__customemojiiconmanager_connectnotify_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify_Callback textemoticonscore__customemojiiconmanager_disconnectnotify_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_Sender_Callback textemoticonscore__customemojiiconmanager_sender_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_SenderSignalIndex_Callback textemoticonscore__customemojiiconmanager_sendersignalindex_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_Receivers_Callback textemoticonscore__customemojiiconmanager_receivers_callback = nullptr;
    TextEmoticonsCore__CustomEmojiIconManager_IsSignalConnected_Callback textemoticonscore__customemojiiconmanager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool textemoticonscore__customemojiiconmanager_generateicon_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_filename_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_metaobject_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_metacast_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_metacall_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_event_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_eventfilter_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_timerevent_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_childevent_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_customevent_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_connectnotify_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_disconnectnotify_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_sender_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_sendersignalindex_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_receivers_isbase = false;
    mutable bool textemoticonscore__customemojiiconmanager_issignalconnected_isbase = false;

  public:
    VirtualTextEmoticonsCoreCustomEmojiIconManager() : TextEmoticonsCore::CustomEmojiIconManager() {};
    VirtualTextEmoticonsCoreCustomEmojiIconManager(QObject* parent) : TextEmoticonsCore::CustomEmojiIconManager(parent) {};

    // Callback setters
    inline void setTextEmoticonsCore__CustomEmojiIconManager_GenerateIcon_Callback(TextEmoticonsCore__CustomEmojiIconManager_GenerateIcon_Callback cb) { textemoticonscore__customemojiiconmanager_generateicon_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_FileName_Callback(TextEmoticonsCore__CustomEmojiIconManager_FileName_Callback cb) { textemoticonscore__customemojiiconmanager_filename_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_MetaObject_Callback(TextEmoticonsCore__CustomEmojiIconManager_MetaObject_Callback cb) { textemoticonscore__customemojiiconmanager_metaobject_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_Metacast_Callback(TextEmoticonsCore__CustomEmojiIconManager_Metacast_Callback cb) { textemoticonscore__customemojiiconmanager_metacast_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_Metacall_Callback(TextEmoticonsCore__CustomEmojiIconManager_Metacall_Callback cb) { textemoticonscore__customemojiiconmanager_metacall_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_Event_Callback(TextEmoticonsCore__CustomEmojiIconManager_Event_Callback cb) { textemoticonscore__customemojiiconmanager_event_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_EventFilter_Callback(TextEmoticonsCore__CustomEmojiIconManager_EventFilter_Callback cb) { textemoticonscore__customemojiiconmanager_eventfilter_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_TimerEvent_Callback(TextEmoticonsCore__CustomEmojiIconManager_TimerEvent_Callback cb) { textemoticonscore__customemojiiconmanager_timerevent_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_ChildEvent_Callback(TextEmoticonsCore__CustomEmojiIconManager_ChildEvent_Callback cb) { textemoticonscore__customemojiiconmanager_childevent_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_CustomEvent_Callback(TextEmoticonsCore__CustomEmojiIconManager_CustomEvent_Callback cb) { textemoticonscore__customemojiiconmanager_customevent_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_ConnectNotify_Callback(TextEmoticonsCore__CustomEmojiIconManager_ConnectNotify_Callback cb) { textemoticonscore__customemojiiconmanager_connectnotify_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify_Callback(TextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify_Callback cb) { textemoticonscore__customemojiiconmanager_disconnectnotify_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_Sender_Callback(TextEmoticonsCore__CustomEmojiIconManager_Sender_Callback cb) { textemoticonscore__customemojiiconmanager_sender_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_SenderSignalIndex_Callback(TextEmoticonsCore__CustomEmojiIconManager_SenderSignalIndex_Callback cb) { textemoticonscore__customemojiiconmanager_sendersignalindex_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_Receivers_Callback(TextEmoticonsCore__CustomEmojiIconManager_Receivers_Callback cb) { textemoticonscore__customemojiiconmanager_receivers_callback = cb; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_IsSignalConnected_Callback(TextEmoticonsCore__CustomEmojiIconManager_IsSignalConnected_Callback cb) { textemoticonscore__customemojiiconmanager_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextEmoticonsCore__CustomEmojiIconManager_GenerateIcon_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_generateicon_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_FileName_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_filename_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_MetaObject_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_metaobject_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_Metacast_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_metacast_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_Metacall_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_metacall_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_Event_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_event_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_EventFilter_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_eventfilter_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_TimerEvent_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_timerevent_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_ChildEvent_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_childevent_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_CustomEvent_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_customevent_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_ConnectNotify_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_connectnotify_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_disconnectnotify_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_Sender_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_sender_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_SenderSignalIndex_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_sendersignalindex_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_Receivers_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_receivers_isbase = value; }
    inline void setTextEmoticonsCore__CustomEmojiIconManager_IsSignalConnected_IsBase(bool value) const { textemoticonscore__customemojiiconmanager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QIcon generateIcon(const QString& customIdentifier) override {
        if (textemoticonscore__customemojiiconmanager_generateicon_isbase) {
            textemoticonscore__customemojiiconmanager_generateicon_isbase = false;
            return TextEmoticonsCore__CustomEmojiIconManager::generateIcon(customIdentifier);
        }
        auto generateicon_cb = textemoticonscore__customemojiiconmanager_generateicon_callback;
        if (generateicon_cb) {
            const auto customIdentifier_ret = customIdentifier;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray customIdentifier_b = customIdentifier_ret.toUtf8();
            auto customIdentifier_str_len = customIdentifier_b.length();
            const char* customIdentifier_str = static_cast<const char*>(malloc(customIdentifier_str_len + 1));
            memcpy((void*)customIdentifier_str, customIdentifier_b.data(), customIdentifier_str_len);
            ((char*)customIdentifier_str)[customIdentifier_str_len] = '\0';
            const char* cbval1 = customIdentifier_str;
            QIcon* callback_ret = generateicon_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(customIdentifier_str);
            return callback_ret_Value;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::generateIcon(customIdentifier);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fileName(const QString& customIdentifier) override {
        if (textemoticonscore__customemojiiconmanager_filename_isbase) {
            textemoticonscore__customemojiiconmanager_filename_isbase = false;
            return TextEmoticonsCore__CustomEmojiIconManager::fileName(customIdentifier);
        }
        auto filename_cb = textemoticonscore__customemojiiconmanager_filename_callback;
        if (filename_cb) {
            const auto customIdentifier_ret = customIdentifier;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray customIdentifier_b = customIdentifier_ret.toUtf8();
            auto customIdentifier_str_len = customIdentifier_b.length();
            const char* customIdentifier_str = static_cast<const char*>(malloc(customIdentifier_str_len + 1));
            memcpy((void*)customIdentifier_str, customIdentifier_b.data(), customIdentifier_str_len);
            ((char*)customIdentifier_str)[customIdentifier_str_len] = '\0';
            const char* cbval1 = customIdentifier_str;
            const char* callback_ret = filename_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(customIdentifier_str);
            return callback_ret_QString;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::fileName(customIdentifier);
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textemoticonscore__customemojiiconmanager_metaobject_isbase) {
            textemoticonscore__customemojiiconmanager_metaobject_isbase = false;
            return TextEmoticonsCore__CustomEmojiIconManager::metaObject();
        }
        auto metaobject_cb = textemoticonscore__customemojiiconmanager_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textemoticonscore__customemojiiconmanager_metacast_isbase) {
            textemoticonscore__customemojiiconmanager_metacast_isbase = false;
            return TextEmoticonsCore__CustomEmojiIconManager::qt_metacast(param1);
        }
        auto metacast_cb = textemoticonscore__customemojiiconmanager_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textemoticonscore__customemojiiconmanager_metacall_isbase) {
            textemoticonscore__customemojiiconmanager_metacall_isbase = false;
            return TextEmoticonsCore__CustomEmojiIconManager::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textemoticonscore__customemojiiconmanager_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__CustomEmojiIconManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textemoticonscore__customemojiiconmanager_event_isbase) {
            textemoticonscore__customemojiiconmanager_event_isbase = false;
            return TextEmoticonsCore__CustomEmojiIconManager::event(event);
        }
        auto event_cb = textemoticonscore__customemojiiconmanager_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textemoticonscore__customemojiiconmanager_eventfilter_isbase) {
            textemoticonscore__customemojiiconmanager_eventfilter_isbase = false;
            return TextEmoticonsCore__CustomEmojiIconManager::eventFilter(watched, event);
        }
        auto eventfilter_cb = textemoticonscore__customemojiiconmanager_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textemoticonscore__customemojiiconmanager_timerevent_isbase) {
            textemoticonscore__customemojiiconmanager_timerevent_isbase = false;
            TextEmoticonsCore__CustomEmojiIconManager::timerEvent(event);
            return;
        }
        auto timerevent_cb = textemoticonscore__customemojiiconmanager_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__CustomEmojiIconManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textemoticonscore__customemojiiconmanager_childevent_isbase) {
            textemoticonscore__customemojiiconmanager_childevent_isbase = false;
            TextEmoticonsCore__CustomEmojiIconManager::childEvent(event);
            return;
        }
        auto childevent_cb = textemoticonscore__customemojiiconmanager_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__CustomEmojiIconManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textemoticonscore__customemojiiconmanager_customevent_isbase) {
            textemoticonscore__customemojiiconmanager_customevent_isbase = false;
            TextEmoticonsCore__CustomEmojiIconManager::customEvent(event);
            return;
        }
        auto customevent_cb = textemoticonscore__customemojiiconmanager_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__CustomEmojiIconManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__customemojiiconmanager_connectnotify_isbase) {
            textemoticonscore__customemojiiconmanager_connectnotify_isbase = false;
            TextEmoticonsCore__CustomEmojiIconManager::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textemoticonscore__customemojiiconmanager_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__CustomEmojiIconManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__customemojiiconmanager_disconnectnotify_isbase) {
            textemoticonscore__customemojiiconmanager_disconnectnotify_isbase = false;
            TextEmoticonsCore__CustomEmojiIconManager::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textemoticonscore__customemojiiconmanager_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextEmoticonsCore__CustomEmojiIconManager::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textemoticonscore__customemojiiconmanager_sender_isbase) {
            textemoticonscore__customemojiiconmanager_sender_isbase = false;
            return TextEmoticonsCore__CustomEmojiIconManager::sender();
        }
        auto sender_cb = textemoticonscore__customemojiiconmanager_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textemoticonscore__customemojiiconmanager_sendersignalindex_isbase) {
            textemoticonscore__customemojiiconmanager_sendersignalindex_isbase = false;
            return TextEmoticonsCore__CustomEmojiIconManager::senderSignalIndex();
        }
        auto sendersignalindex_cb = textemoticonscore__customemojiiconmanager_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__CustomEmojiIconManager::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textemoticonscore__customemojiiconmanager_receivers_isbase) {
            textemoticonscore__customemojiiconmanager_receivers_isbase = false;
            return TextEmoticonsCore__CustomEmojiIconManager::receivers(signal);
        }
        auto receivers_cb = textemoticonscore__customemojiiconmanager_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__CustomEmojiIconManager::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textemoticonscore__customemojiiconmanager_issignalconnected_isbase) {
            textemoticonscore__customemojiiconmanager_issignalconnected_isbase = false;
            return TextEmoticonsCore__CustomEmojiIconManager::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textemoticonscore__customemojiiconmanager_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::isSignalConnected(signal);
    }

    // Friend functions
    friend void TextEmoticonsCore__CustomEmojiIconManager_TimerEvent(TextEmoticonsCore::CustomEmojiIconManager* self, QTimerEvent* event);
    friend void TextEmoticonsCore__CustomEmojiIconManager_SuperTimerEvent(TextEmoticonsCore::CustomEmojiIconManager* self, QTimerEvent* event);
    friend void TextEmoticonsCore__CustomEmojiIconManager_ChildEvent(TextEmoticonsCore::CustomEmojiIconManager* self, QChildEvent* event);
    friend void TextEmoticonsCore__CustomEmojiIconManager_SuperChildEvent(TextEmoticonsCore::CustomEmojiIconManager* self, QChildEvent* event);
    friend void TextEmoticonsCore__CustomEmojiIconManager_CustomEvent(TextEmoticonsCore::CustomEmojiIconManager* self, QEvent* event);
    friend void TextEmoticonsCore__CustomEmojiIconManager_SuperCustomEvent(TextEmoticonsCore::CustomEmojiIconManager* self, QEvent* event);
    friend void TextEmoticonsCore__CustomEmojiIconManager_ConnectNotify(TextEmoticonsCore::CustomEmojiIconManager* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__CustomEmojiIconManager_SuperConnectNotify(TextEmoticonsCore::CustomEmojiIconManager* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify(TextEmoticonsCore::CustomEmojiIconManager* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__CustomEmojiIconManager_SuperDisconnectNotify(TextEmoticonsCore::CustomEmojiIconManager* self, const QMetaMethod* signal);
    friend QObject* TextEmoticonsCore__CustomEmojiIconManager_Sender(const TextEmoticonsCore::CustomEmojiIconManager* self);
    friend QObject* TextEmoticonsCore__CustomEmojiIconManager_SuperSender(const TextEmoticonsCore::CustomEmojiIconManager* self);
    friend int TextEmoticonsCore__CustomEmojiIconManager_SenderSignalIndex(const TextEmoticonsCore::CustomEmojiIconManager* self);
    friend int TextEmoticonsCore__CustomEmojiIconManager_SuperSenderSignalIndex(const TextEmoticonsCore::CustomEmojiIconManager* self);
    friend int TextEmoticonsCore__CustomEmojiIconManager_Receivers(const TextEmoticonsCore::CustomEmojiIconManager* self, const char* signal);
    friend int TextEmoticonsCore__CustomEmojiIconManager_SuperReceivers(const TextEmoticonsCore::CustomEmojiIconManager* self, const char* signal);
    friend bool TextEmoticonsCore__CustomEmojiIconManager_IsSignalConnected(const TextEmoticonsCore::CustomEmojiIconManager* self, const QMetaMethod* signal);
    friend bool TextEmoticonsCore__CustomEmojiIconManager_SuperIsSignalConnected(const TextEmoticonsCore::CustomEmojiIconManager* self, const QMetaMethod* signal);
};

#endif
