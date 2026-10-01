#pragma once
#ifndef EXTRAS_KICONTHEMES_LIBKQUICKICONPROVIDER_HXX
#define EXTRAS_KICONTHEMES_LIBKQUICKICONPROVIDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KQuickIconProvider
class VirtualKQuickIconProvider final : public KQuickIconProvider {
  public:
    // Virtual class public types (including callbacks and access types)
    using KQuickIconProvider_RequestPixmap_Callback = QPixmap* (*)(KQuickIconProvider*, const char*, QSize*, QSize*);
    using KQuickIconProvider_MetaObject_Callback = QMetaObject* (*)(const KQuickIconProvider*);
    using KQuickIconProvider_Metacast_Callback = void* (*)(KQuickIconProvider*, const char*);
    using KQuickIconProvider_Metacall_Callback = int (*)(KQuickIconProvider*, int, int, void**);
    using KQuickIconProvider_ImageType_Callback = int (*)(const KQuickIconProvider*);
    using KQuickIconProvider_Flags_Callback = int (*)(const KQuickIconProvider*);
    using KQuickIconProvider_RequestImage_Callback = QImage* (*)(KQuickIconProvider*, const char*, QSize*, QSize*);
    using KQuickIconProvider_RequestTexture_Callback = QQuickTextureFactory* (*)(KQuickIconProvider*, const char*, QSize*, QSize*);
    using KQuickIconProvider_Event_Callback = bool (*)(KQuickIconProvider*, QEvent*);
    using KQuickIconProvider_EventFilter_Callback = bool (*)(KQuickIconProvider*, QObject*, QEvent*);
    using KQuickIconProvider_TimerEvent_Callback = void (*)(KQuickIconProvider*, QTimerEvent*);
    using KQuickIconProvider_ChildEvent_Callback = void (*)(KQuickIconProvider*, QChildEvent*);
    using KQuickIconProvider_CustomEvent_Callback = void (*)(KQuickIconProvider*, QEvent*);
    using KQuickIconProvider_ConnectNotify_Callback = void (*)(KQuickIconProvider*, QMetaMethod*);
    using KQuickIconProvider_DisconnectNotify_Callback = void (*)(KQuickIconProvider*, QMetaMethod*);
    using KQuickIconProvider::isSignalConnected;
    using KQuickIconProvider::receivers;
    using KQuickIconProvider::sender;
    using KQuickIconProvider::senderSignalIndex;

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

    // Access struct
    struct Base : KQuickIconProvider {
        using KQuickIconProvider::childEvent;
        using KQuickIconProvider::connectNotify;
        using KQuickIconProvider::customEvent;
        using KQuickIconProvider::disconnectNotify;
        using KQuickIconProvider::timerEvent;
    };

    VirtualKQuickIconProvider() : KQuickIconProvider() {};

    // Virtual method for C ABI access and custom callback
    virtual QPixmap requestPixmap(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (kquickiconprovider_requestpixmap_callback) {
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
            QPixmap* callback_ret = kquickiconprovider_requestpixmap_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(id_str);
            return callback_ret_Value;
        }
        return KQuickIconProvider::requestPixmap(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kquickiconprovider_metaobject_callback) {
            QMetaObject* callback_ret = kquickiconprovider_metaobject_callback(this);
            return callback_ret;
        }
        return KQuickIconProvider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kquickiconprovider_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kquickiconprovider_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KQuickIconProvider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kquickiconprovider_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kquickiconprovider_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KQuickIconProvider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQmlImageProviderBase::ImageType imageType() const override {
        if (kquickiconprovider_imagetype_callback) {
            int callback_ret = kquickiconprovider_imagetype_callback(this);
            return static_cast<QQmlImageProviderBase::ImageType>(callback_ret);
        }
        return KQuickIconProvider::imageType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QQmlImageProviderBase::Flags flags() const override {
        if (kquickiconprovider_flags_callback) {
            int callback_ret = kquickiconprovider_flags_callback(this);
            return static_cast<QQmlImageProviderBase::Flags>(callback_ret);
        }
        return KQuickIconProvider::flags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QImage requestImage(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (kquickiconprovider_requestimage_callback) {
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
            QImage* callback_ret = kquickiconprovider_requestimage_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(id_str);
            return callback_ret_Value;
        }
        return KQuickIconProvider::requestImage(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQuickTextureFactory* requestTexture(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (kquickiconprovider_requesttexture_callback) {
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
            QQuickTextureFactory* callback_ret = kquickiconprovider_requesttexture_callback(this, cbval1, cbval2, cbval3);
            libqt_free(id_str);
            return callback_ret;
        }
        return KQuickIconProvider::requestTexture(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kquickiconprovider_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kquickiconprovider_event_callback(this, cbval1);
            return callback_ret;
        }
        return KQuickIconProvider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kquickiconprovider_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kquickiconprovider_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KQuickIconProvider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kquickiconprovider_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kquickiconprovider_timerevent_callback(this, cbval1);
            return;
        }
        KQuickIconProvider::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kquickiconprovider_childevent_callback) {
            QChildEvent* cbval1 = event;
            kquickiconprovider_childevent_callback(this, cbval1);
            return;
        }
        KQuickIconProvider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kquickiconprovider_customevent_callback) {
            QEvent* cbval1 = event;
            kquickiconprovider_customevent_callback(this, cbval1);
            return;
        }
        KQuickIconProvider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kquickiconprovider_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kquickiconprovider_connectnotify_callback(this, cbval1);
            return;
        }
        KQuickIconProvider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kquickiconprovider_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kquickiconprovider_disconnectnotify_callback(this, cbval1);
            return;
        }
        KQuickIconProvider::disconnectNotify(signal);
    }

    // Friend functions
    friend void KQuickIconProvider_SuperTimerEvent(KQuickIconProvider* self, QTimerEvent* event);
    friend void KQuickIconProvider_SuperChildEvent(KQuickIconProvider* self, QChildEvent* event);
    friend void KQuickIconProvider_SuperCustomEvent(KQuickIconProvider* self, QEvent* event);
    friend void KQuickIconProvider_SuperConnectNotify(KQuickIconProvider* self, const QMetaMethod* signal);
    friend void KQuickIconProvider_SuperDisconnectNotify(KQuickIconProvider* self, const QMetaMethod* signal);
};

#endif
