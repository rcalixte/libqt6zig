#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBCUSTOMEMOJIICONMANAGER_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBCUSTOMEMOJIICONMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEmoticonsCore::CustomEmojiIconManager
class VirtualTextEmoticonsCoreCustomEmojiIconManager final : public TextEmoticonsCore::CustomEmojiIconManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextEmoticonsCore__CustomEmojiIconManager_GenerateIcon_Callback = QIcon* (*)(TextEmoticonsCore__CustomEmojiIconManager*, const char*);
    using TextEmoticonsCore__CustomEmojiIconManager_FileName_Callback = const char* (*)(TextEmoticonsCore__CustomEmojiIconManager*, const char*);
    using TextEmoticonsCore__CustomEmojiIconManager_MetaObject_Callback = QMetaObject* (*)(const TextEmoticonsCore__CustomEmojiIconManager*);
    using TextEmoticonsCore__CustomEmojiIconManager_Metacast_Callback = void* (*)(TextEmoticonsCore__CustomEmojiIconManager*, const char*);
    using TextEmoticonsCore__CustomEmojiIconManager_Metacall_Callback = int (*)(TextEmoticonsCore__CustomEmojiIconManager*, int, int, void**);
    using TextEmoticonsCore__CustomEmojiIconManager_Event_Callback = bool (*)(TextEmoticonsCore__CustomEmojiIconManager*, QEvent*);
    using TextEmoticonsCore__CustomEmojiIconManager_EventFilter_Callback = bool (*)(TextEmoticonsCore__CustomEmojiIconManager*, QObject*, QEvent*);
    using TextEmoticonsCore__CustomEmojiIconManager_TimerEvent_Callback = void (*)(TextEmoticonsCore__CustomEmojiIconManager*, QTimerEvent*);
    using TextEmoticonsCore__CustomEmojiIconManager_ChildEvent_Callback = void (*)(TextEmoticonsCore__CustomEmojiIconManager*, QChildEvent*);
    using TextEmoticonsCore__CustomEmojiIconManager_CustomEvent_Callback = void (*)(TextEmoticonsCore__CustomEmojiIconManager*, QEvent*);
    using TextEmoticonsCore__CustomEmojiIconManager_ConnectNotify_Callback = void (*)(TextEmoticonsCore__CustomEmojiIconManager*, QMetaMethod*);
    using TextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify_Callback = void (*)(TextEmoticonsCore__CustomEmojiIconManager*, QMetaMethod*);
    using TextEmoticonsCore::CustomEmojiIconManager::isSignalConnected;
    using TextEmoticonsCore::CustomEmojiIconManager::receivers;
    using TextEmoticonsCore::CustomEmojiIconManager::sender;
    using TextEmoticonsCore::CustomEmojiIconManager::senderSignalIndex;

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

    // Access struct
    struct Base : TextEmoticonsCore::CustomEmojiIconManager {
        using TextEmoticonsCore::CustomEmojiIconManager::childEvent;
        using TextEmoticonsCore::CustomEmojiIconManager::connectNotify;
        using TextEmoticonsCore::CustomEmojiIconManager::customEvent;
        using TextEmoticonsCore::CustomEmojiIconManager::disconnectNotify;
        using TextEmoticonsCore::CustomEmojiIconManager::timerEvent;
    };

    VirtualTextEmoticonsCoreCustomEmojiIconManager() : TextEmoticonsCore::CustomEmojiIconManager() {};
    VirtualTextEmoticonsCoreCustomEmojiIconManager(QObject* parent) : TextEmoticonsCore::CustomEmojiIconManager(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual QIcon generateIcon(const QString& customIdentifier) override {
        if (textemoticonscore__customemojiiconmanager_generateicon_callback) {
            const auto customIdentifier_ret = customIdentifier;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray customIdentifier_b = customIdentifier_ret.toUtf8();
            auto customIdentifier_str_len = customIdentifier_b.length();
            const char* customIdentifier_str = static_cast<const char*>(malloc(customIdentifier_str_len + 1));
            memcpy((void*)customIdentifier_str, customIdentifier_b.data(), customIdentifier_str_len);
            ((char*)customIdentifier_str)[customIdentifier_str_len] = '\0';
            const char* cbval1 = customIdentifier_str;
            QIcon* callback_ret = textemoticonscore__customemojiiconmanager_generateicon_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(customIdentifier_str);
            return callback_ret_Value;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::generateIcon(customIdentifier);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fileName(const QString& customIdentifier) override {
        if (textemoticonscore__customemojiiconmanager_filename_callback) {
            const auto customIdentifier_ret = customIdentifier;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray customIdentifier_b = customIdentifier_ret.toUtf8();
            auto customIdentifier_str_len = customIdentifier_b.length();
            const char* customIdentifier_str = static_cast<const char*>(malloc(customIdentifier_str_len + 1));
            memcpy((void*)customIdentifier_str, customIdentifier_b.data(), customIdentifier_str_len);
            ((char*)customIdentifier_str)[customIdentifier_str_len] = '\0';
            const char* cbval1 = customIdentifier_str;
            const char* callback_ret = textemoticonscore__customemojiiconmanager_filename_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(customIdentifier_str);
            return callback_ret_QString;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::fileName(customIdentifier);
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textemoticonscore__customemojiiconmanager_metaobject_callback) {
            QMetaObject* callback_ret = textemoticonscore__customemojiiconmanager_metaobject_callback(this);
            return callback_ret;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textemoticonscore__customemojiiconmanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textemoticonscore__customemojiiconmanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textemoticonscore__customemojiiconmanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textemoticonscore__customemojiiconmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__CustomEmojiIconManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textemoticonscore__customemojiiconmanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textemoticonscore__customemojiiconmanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textemoticonscore__customemojiiconmanager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textemoticonscore__customemojiiconmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__CustomEmojiIconManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textemoticonscore__customemojiiconmanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textemoticonscore__customemojiiconmanager_timerevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__CustomEmojiIconManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textemoticonscore__customemojiiconmanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            textemoticonscore__customemojiiconmanager_childevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__CustomEmojiIconManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textemoticonscore__customemojiiconmanager_customevent_callback) {
            QEvent* cbval1 = event;
            textemoticonscore__customemojiiconmanager_customevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__CustomEmojiIconManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__customemojiiconmanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonscore__customemojiiconmanager_connectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__CustomEmojiIconManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__customemojiiconmanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonscore__customemojiiconmanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__CustomEmojiIconManager::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextEmoticonsCore__CustomEmojiIconManager_SuperTimerEvent(TextEmoticonsCore::CustomEmojiIconManager* self, QTimerEvent* event);
    friend void TextEmoticonsCore__CustomEmojiIconManager_SuperChildEvent(TextEmoticonsCore::CustomEmojiIconManager* self, QChildEvent* event);
    friend void TextEmoticonsCore__CustomEmojiIconManager_SuperCustomEvent(TextEmoticonsCore::CustomEmojiIconManager* self, QEvent* event);
    friend void TextEmoticonsCore__CustomEmojiIconManager_SuperConnectNotify(TextEmoticonsCore::CustomEmojiIconManager* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__CustomEmojiIconManager_SuperDisconnectNotify(TextEmoticonsCore::CustomEmojiIconManager* self, const QMetaMethod* signal);
};

#endif
