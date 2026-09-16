#pragma once
#ifndef EXTRAS_KICONTHEMES_LIBKQUICKICONPROVIDER_HXX
#define EXTRAS_KICONTHEMES_LIBKQUICKICONPROVIDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KQuickIconProvider so that we can call protected methods
class VirtualKQuickIconProvider final : public KQuickIconProvider {

  public:
    // Virtual class boolean flag
    bool isVirtualKQuickIconProvider = true;

    // Virtual class public types (including callbacks)
    using KQuickIconProvider_RequestPixmap_Callback = QPixmap* (*)(KQuickIconProvider*, const char*, QSize*, QSize*);
    using KQuickIconProvider_MetaObject_Callback = QMetaObject* (*)();
    using KQuickIconProvider_Metacast_Callback = void* (*)(KQuickIconProvider*, const char*);
    using KQuickIconProvider_Metacall_Callback = int (*)(KQuickIconProvider*, int, int, void**);
    using KQuickIconProvider_ImageType_Callback = int (*)();
    using KQuickIconProvider_Flags_Callback = int (*)();
    using KQuickIconProvider_RequestImage_Callback = QImage* (*)(KQuickIconProvider*, const char*, QSize*, QSize*);
    using KQuickIconProvider_RequestTexture_Callback = QQuickTextureFactory* (*)(KQuickIconProvider*, const char*, QSize*, QSize*);
    using KQuickIconProvider_Event_Callback = bool (*)(KQuickIconProvider*, QEvent*);
    using KQuickIconProvider_EventFilter_Callback = bool (*)(KQuickIconProvider*, QObject*, QEvent*);
    using KQuickIconProvider_TimerEvent_Callback = void (*)(KQuickIconProvider*, QTimerEvent*);
    using KQuickIconProvider_ChildEvent_Callback = void (*)(KQuickIconProvider*, QChildEvent*);
    using KQuickIconProvider_CustomEvent_Callback = void (*)(KQuickIconProvider*, QEvent*);
    using KQuickIconProvider_ConnectNotify_Callback = void (*)(KQuickIconProvider*, QMetaMethod*);
    using KQuickIconProvider_DisconnectNotify_Callback = void (*)(KQuickIconProvider*, QMetaMethod*);
    using KQuickIconProvider_Sender_Callback = QObject* (*)();
    using KQuickIconProvider_SenderSignalIndex_Callback = int (*)();
    using KQuickIconProvider_Receivers_Callback = int (*)(const KQuickIconProvider*, const char*);
    using KQuickIconProvider_IsSignalConnected_Callback = bool (*)(const KQuickIconProvider*, QMetaMethod*);

  protected:
    // Instance callback storage
    KQuickIconProvider_RequestPixmap_Callback kquickiconprovider_requestpixmap_callback = nullptr;
    KQuickIconProvider_MetaObject_Callback kquickiconprovider_metaobject_callback = nullptr;
    KQuickIconProvider_Metacast_Callback kquickiconprovider_metacast_callback = nullptr;
    KQuickIconProvider_Metacall_Callback kquickiconprovider_metacall_callback = nullptr;
    KQuickIconProvider_ImageType_Callback kquickiconprovider_imagetype_callback = nullptr;
    KQuickIconProvider_Flags_Callback kquickiconprovider_flags_callback = nullptr;
    KQuickIconProvider_RequestImage_Callback kquickiconprovider_requestimage_callback = nullptr;
    KQuickIconProvider_RequestTexture_Callback kquickiconprovider_requesttexture_callback = nullptr;
    KQuickIconProvider_Event_Callback kquickiconprovider_event_callback = nullptr;
    KQuickIconProvider_EventFilter_Callback kquickiconprovider_eventfilter_callback = nullptr;
    KQuickIconProvider_TimerEvent_Callback kquickiconprovider_timerevent_callback = nullptr;
    KQuickIconProvider_ChildEvent_Callback kquickiconprovider_childevent_callback = nullptr;
    KQuickIconProvider_CustomEvent_Callback kquickiconprovider_customevent_callback = nullptr;
    KQuickIconProvider_ConnectNotify_Callback kquickiconprovider_connectnotify_callback = nullptr;
    KQuickIconProvider_DisconnectNotify_Callback kquickiconprovider_disconnectnotify_callback = nullptr;
    KQuickIconProvider_Sender_Callback kquickiconprovider_sender_callback = nullptr;
    KQuickIconProvider_SenderSignalIndex_Callback kquickiconprovider_sendersignalindex_callback = nullptr;
    KQuickIconProvider_Receivers_Callback kquickiconprovider_receivers_callback = nullptr;
    KQuickIconProvider_IsSignalConnected_Callback kquickiconprovider_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kquickiconprovider_requestpixmap_isbase = false;
    mutable bool kquickiconprovider_metaobject_isbase = false;
    mutable bool kquickiconprovider_metacast_isbase = false;
    mutable bool kquickiconprovider_metacall_isbase = false;
    mutable bool kquickiconprovider_imagetype_isbase = false;
    mutable bool kquickiconprovider_flags_isbase = false;
    mutable bool kquickiconprovider_requestimage_isbase = false;
    mutable bool kquickiconprovider_requesttexture_isbase = false;
    mutable bool kquickiconprovider_event_isbase = false;
    mutable bool kquickiconprovider_eventfilter_isbase = false;
    mutable bool kquickiconprovider_timerevent_isbase = false;
    mutable bool kquickiconprovider_childevent_isbase = false;
    mutable bool kquickiconprovider_customevent_isbase = false;
    mutable bool kquickiconprovider_connectnotify_isbase = false;
    mutable bool kquickiconprovider_disconnectnotify_isbase = false;
    mutable bool kquickiconprovider_sender_isbase = false;
    mutable bool kquickiconprovider_sendersignalindex_isbase = false;
    mutable bool kquickiconprovider_receivers_isbase = false;
    mutable bool kquickiconprovider_issignalconnected_isbase = false;

  public:
    VirtualKQuickIconProvider() : KQuickIconProvider() {};

    // Callback setters
    inline void setKQuickIconProvider_RequestPixmap_Callback(KQuickIconProvider_RequestPixmap_Callback cb) { kquickiconprovider_requestpixmap_callback = cb; }
    inline void setKQuickIconProvider_MetaObject_Callback(KQuickIconProvider_MetaObject_Callback cb) { kquickiconprovider_metaobject_callback = cb; }
    inline void setKQuickIconProvider_Metacast_Callback(KQuickIconProvider_Metacast_Callback cb) { kquickiconprovider_metacast_callback = cb; }
    inline void setKQuickIconProvider_Metacall_Callback(KQuickIconProvider_Metacall_Callback cb) { kquickiconprovider_metacall_callback = cb; }
    inline void setKQuickIconProvider_ImageType_Callback(KQuickIconProvider_ImageType_Callback cb) { kquickiconprovider_imagetype_callback = cb; }
    inline void setKQuickIconProvider_Flags_Callback(KQuickIconProvider_Flags_Callback cb) { kquickiconprovider_flags_callback = cb; }
    inline void setKQuickIconProvider_RequestImage_Callback(KQuickIconProvider_RequestImage_Callback cb) { kquickiconprovider_requestimage_callback = cb; }
    inline void setKQuickIconProvider_RequestTexture_Callback(KQuickIconProvider_RequestTexture_Callback cb) { kquickiconprovider_requesttexture_callback = cb; }
    inline void setKQuickIconProvider_Event_Callback(KQuickIconProvider_Event_Callback cb) { kquickiconprovider_event_callback = cb; }
    inline void setKQuickIconProvider_EventFilter_Callback(KQuickIconProvider_EventFilter_Callback cb) { kquickiconprovider_eventfilter_callback = cb; }
    inline void setKQuickIconProvider_TimerEvent_Callback(KQuickIconProvider_TimerEvent_Callback cb) { kquickiconprovider_timerevent_callback = cb; }
    inline void setKQuickIconProvider_ChildEvent_Callback(KQuickIconProvider_ChildEvent_Callback cb) { kquickiconprovider_childevent_callback = cb; }
    inline void setKQuickIconProvider_CustomEvent_Callback(KQuickIconProvider_CustomEvent_Callback cb) { kquickiconprovider_customevent_callback = cb; }
    inline void setKQuickIconProvider_ConnectNotify_Callback(KQuickIconProvider_ConnectNotify_Callback cb) { kquickiconprovider_connectnotify_callback = cb; }
    inline void setKQuickIconProvider_DisconnectNotify_Callback(KQuickIconProvider_DisconnectNotify_Callback cb) { kquickiconprovider_disconnectnotify_callback = cb; }
    inline void setKQuickIconProvider_Sender_Callback(KQuickIconProvider_Sender_Callback cb) { kquickiconprovider_sender_callback = cb; }
    inline void setKQuickIconProvider_SenderSignalIndex_Callback(KQuickIconProvider_SenderSignalIndex_Callback cb) { kquickiconprovider_sendersignalindex_callback = cb; }
    inline void setKQuickIconProvider_Receivers_Callback(KQuickIconProvider_Receivers_Callback cb) { kquickiconprovider_receivers_callback = cb; }
    inline void setKQuickIconProvider_IsSignalConnected_Callback(KQuickIconProvider_IsSignalConnected_Callback cb) { kquickiconprovider_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKQuickIconProvider_RequestPixmap_IsBase(bool value) const { kquickiconprovider_requestpixmap_isbase = value; }
    inline void setKQuickIconProvider_MetaObject_IsBase(bool value) const { kquickiconprovider_metaobject_isbase = value; }
    inline void setKQuickIconProvider_Metacast_IsBase(bool value) const { kquickiconprovider_metacast_isbase = value; }
    inline void setKQuickIconProvider_Metacall_IsBase(bool value) const { kquickiconprovider_metacall_isbase = value; }
    inline void setKQuickIconProvider_ImageType_IsBase(bool value) const { kquickiconprovider_imagetype_isbase = value; }
    inline void setKQuickIconProvider_Flags_IsBase(bool value) const { kquickiconprovider_flags_isbase = value; }
    inline void setKQuickIconProvider_RequestImage_IsBase(bool value) const { kquickiconprovider_requestimage_isbase = value; }
    inline void setKQuickIconProvider_RequestTexture_IsBase(bool value) const { kquickiconprovider_requesttexture_isbase = value; }
    inline void setKQuickIconProvider_Event_IsBase(bool value) const { kquickiconprovider_event_isbase = value; }
    inline void setKQuickIconProvider_EventFilter_IsBase(bool value) const { kquickiconprovider_eventfilter_isbase = value; }
    inline void setKQuickIconProvider_TimerEvent_IsBase(bool value) const { kquickiconprovider_timerevent_isbase = value; }
    inline void setKQuickIconProvider_ChildEvent_IsBase(bool value) const { kquickiconprovider_childevent_isbase = value; }
    inline void setKQuickIconProvider_CustomEvent_IsBase(bool value) const { kquickiconprovider_customevent_isbase = value; }
    inline void setKQuickIconProvider_ConnectNotify_IsBase(bool value) const { kquickiconprovider_connectnotify_isbase = value; }
    inline void setKQuickIconProvider_DisconnectNotify_IsBase(bool value) const { kquickiconprovider_disconnectnotify_isbase = value; }
    inline void setKQuickIconProvider_Sender_IsBase(bool value) const { kquickiconprovider_sender_isbase = value; }
    inline void setKQuickIconProvider_SenderSignalIndex_IsBase(bool value) const { kquickiconprovider_sendersignalindex_isbase = value; }
    inline void setKQuickIconProvider_Receivers_IsBase(bool value) const { kquickiconprovider_receivers_isbase = value; }
    inline void setKQuickIconProvider_IsSignalConnected_IsBase(bool value) const { kquickiconprovider_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap requestPixmap(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (kquickiconprovider_requestpixmap_isbase) {
            kquickiconprovider_requestpixmap_isbase = false;
            return KQuickIconProvider::requestPixmap(id, size, requestedSize);
        }
        auto requestpixmap_cb = kquickiconprovider_requestpixmap_callback;
        if (requestpixmap_cb) {
            const auto id_ret = id;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray id_b = id_ret.toUtf8();
            auto id_str_len = id_b.length();
            const char* id_str = static_cast<const char*>(malloc(id_str_len + 1));
            memcpy((void*)id_str, id_b.data(), id_str_len);
            ((char*)id_str)[id_str_len] = '\0';
            const char* cbval1 = id_str;
            QSize* cbval2 = size;
            const QSize& requestedSize_ret = requestedSize;
            // Cast returned reference into pointer
            QSize* cbval3 = const_cast<QSize*>(&requestedSize_ret);
            QPixmap* callback_ret = requestpixmap_cb(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(id_str);
            return callback_ret_Value;
        }
        return KQuickIconProvider::requestPixmap(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kquickiconprovider_metaobject_isbase) {
            kquickiconprovider_metaobject_isbase = false;
            return KQuickIconProvider::metaObject();
        }
        auto metaobject_cb = kquickiconprovider_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KQuickIconProvider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kquickiconprovider_metacast_isbase) {
            kquickiconprovider_metacast_isbase = false;
            return KQuickIconProvider::qt_metacast(param1);
        }
        auto metacast_cb = kquickiconprovider_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KQuickIconProvider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kquickiconprovider_metacall_isbase) {
            kquickiconprovider_metacall_isbase = false;
            return KQuickIconProvider::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kquickiconprovider_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KQuickIconProvider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQmlImageProviderBase::ImageType imageType() const override {
        if (kquickiconprovider_imagetype_isbase) {
            kquickiconprovider_imagetype_isbase = false;
            return KQuickIconProvider::imageType();
        }
        auto imagetype_cb = kquickiconprovider_imagetype_callback;
        if (imagetype_cb) {
            int callback_ret = imagetype_cb();
            return static_cast<QQmlImageProviderBase::ImageType>(callback_ret);
        }
        return KQuickIconProvider::imageType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QQmlImageProviderBase::Flags flags() const override {
        if (kquickiconprovider_flags_isbase) {
            kquickiconprovider_flags_isbase = false;
            return KQuickIconProvider::flags();
        }
        auto flags_cb = kquickiconprovider_flags_callback;
        if (flags_cb) {
            int callback_ret = flags_cb();
            return static_cast<QQmlImageProviderBase::Flags>(callback_ret);
        }
        return KQuickIconProvider::flags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QImage requestImage(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (kquickiconprovider_requestimage_isbase) {
            kquickiconprovider_requestimage_isbase = false;
            return KQuickIconProvider::requestImage(id, size, requestedSize);
        }
        auto requestimage_cb = kquickiconprovider_requestimage_callback;
        if (requestimage_cb) {
            const auto id_ret = id;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray id_b = id_ret.toUtf8();
            auto id_str_len = id_b.length();
            const char* id_str = static_cast<const char*>(malloc(id_str_len + 1));
            memcpy((void*)id_str, id_b.data(), id_str_len);
            ((char*)id_str)[id_str_len] = '\0';
            const char* cbval1 = id_str;
            QSize* cbval2 = size;
            const QSize& requestedSize_ret = requestedSize;
            // Cast returned reference into pointer
            QSize* cbval3 = const_cast<QSize*>(&requestedSize_ret);
            QImage* callback_ret = requestimage_cb(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(id_str);
            return callback_ret_Value;
        }
        return KQuickIconProvider::requestImage(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQuickTextureFactory* requestTexture(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (kquickiconprovider_requesttexture_isbase) {
            kquickiconprovider_requesttexture_isbase = false;
            return KQuickIconProvider::requestTexture(id, size, requestedSize);
        }
        auto requesttexture_cb = kquickiconprovider_requesttexture_callback;
        if (requesttexture_cb) {
            const auto id_ret = id;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray id_b = id_ret.toUtf8();
            auto id_str_len = id_b.length();
            const char* id_str = static_cast<const char*>(malloc(id_str_len + 1));
            memcpy((void*)id_str, id_b.data(), id_str_len);
            ((char*)id_str)[id_str_len] = '\0';
            const char* cbval1 = id_str;
            QSize* cbval2 = size;
            const QSize& requestedSize_ret = requestedSize;
            // Cast returned reference into pointer
            QSize* cbval3 = const_cast<QSize*>(&requestedSize_ret);
            QQuickTextureFactory* callback_ret = requesttexture_cb(this, cbval1, cbval2, cbval3);
            libqt_free(id_str);
            return callback_ret;
        }
        return KQuickIconProvider::requestTexture(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kquickiconprovider_event_isbase) {
            kquickiconprovider_event_isbase = false;
            return KQuickIconProvider::event(event);
        }
        auto event_cb = kquickiconprovider_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KQuickIconProvider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kquickiconprovider_eventfilter_isbase) {
            kquickiconprovider_eventfilter_isbase = false;
            return KQuickIconProvider::eventFilter(watched, event);
        }
        auto eventfilter_cb = kquickiconprovider_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KQuickIconProvider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kquickiconprovider_timerevent_isbase) {
            kquickiconprovider_timerevent_isbase = false;
            KQuickIconProvider::timerEvent(event);
            return;
        }
        auto timerevent_cb = kquickiconprovider_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        KQuickIconProvider::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kquickiconprovider_childevent_isbase) {
            kquickiconprovider_childevent_isbase = false;
            KQuickIconProvider::childEvent(event);
            return;
        }
        auto childevent_cb = kquickiconprovider_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        KQuickIconProvider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kquickiconprovider_customevent_isbase) {
            kquickiconprovider_customevent_isbase = false;
            KQuickIconProvider::customEvent(event);
            return;
        }
        auto customevent_cb = kquickiconprovider_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        KQuickIconProvider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kquickiconprovider_connectnotify_isbase) {
            kquickiconprovider_connectnotify_isbase = false;
            KQuickIconProvider::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kquickiconprovider_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        KQuickIconProvider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kquickiconprovider_disconnectnotify_isbase) {
            kquickiconprovider_disconnectnotify_isbase = false;
            KQuickIconProvider::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kquickiconprovider_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        KQuickIconProvider::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kquickiconprovider_sender_isbase) {
            kquickiconprovider_sender_isbase = false;
            return KQuickIconProvider::sender();
        }
        auto sender_cb = kquickiconprovider_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KQuickIconProvider::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kquickiconprovider_sendersignalindex_isbase) {
            kquickiconprovider_sendersignalindex_isbase = false;
            return KQuickIconProvider::senderSignalIndex();
        }
        auto sendersignalindex_cb = kquickiconprovider_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KQuickIconProvider::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kquickiconprovider_receivers_isbase) {
            kquickiconprovider_receivers_isbase = false;
            return KQuickIconProvider::receivers(signal);
        }
        auto receivers_cb = kquickiconprovider_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KQuickIconProvider::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kquickiconprovider_issignalconnected_isbase) {
            kquickiconprovider_issignalconnected_isbase = false;
            return KQuickIconProvider::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kquickiconprovider_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KQuickIconProvider::isSignalConnected(signal);
    }

    // Friend functions
    friend void KQuickIconProvider_TimerEvent(KQuickIconProvider* self, QTimerEvent* event);
    friend void KQuickIconProvider_SuperTimerEvent(KQuickIconProvider* self, QTimerEvent* event);
    friend void KQuickIconProvider_ChildEvent(KQuickIconProvider* self, QChildEvent* event);
    friend void KQuickIconProvider_SuperChildEvent(KQuickIconProvider* self, QChildEvent* event);
    friend void KQuickIconProvider_CustomEvent(KQuickIconProvider* self, QEvent* event);
    friend void KQuickIconProvider_SuperCustomEvent(KQuickIconProvider* self, QEvent* event);
    friend void KQuickIconProvider_ConnectNotify(KQuickIconProvider* self, const QMetaMethod* signal);
    friend void KQuickIconProvider_SuperConnectNotify(KQuickIconProvider* self, const QMetaMethod* signal);
    friend void KQuickIconProvider_DisconnectNotify(KQuickIconProvider* self, const QMetaMethod* signal);
    friend void KQuickIconProvider_SuperDisconnectNotify(KQuickIconProvider* self, const QMetaMethod* signal);
    friend QObject* KQuickIconProvider_Sender(const KQuickIconProvider* self);
    friend QObject* KQuickIconProvider_SuperSender(const KQuickIconProvider* self);
    friend int KQuickIconProvider_SenderSignalIndex(const KQuickIconProvider* self);
    friend int KQuickIconProvider_SuperSenderSignalIndex(const KQuickIconProvider* self);
    friend int KQuickIconProvider_Receivers(const KQuickIconProvider* self, const char* signal);
    friend int KQuickIconProvider_SuperReceivers(const KQuickIconProvider* self, const char* signal);
    friend bool KQuickIconProvider_IsSignalConnected(const KQuickIconProvider* self, const QMetaMethod* signal);
    friend bool KQuickIconProvider_SuperIsSignalConnected(const KQuickIconProvider* self, const QMetaMethod* signal);
};

#endif
