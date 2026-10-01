#pragma once
#ifndef QUICK_LIBQQUICKIMAGEPROVIDER_HXX
#define QUICK_LIBQQUICKIMAGEPROVIDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickTextureFactory
class VirtualQQuickTextureFactory : public QQuickTextureFactory {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickTextureFactory_MetaObject_Callback = QMetaObject* (*)(const QQuickTextureFactory*);
    using QQuickTextureFactory_Metacast_Callback = void* (*)(QQuickTextureFactory*, const char*);
    using QQuickTextureFactory_Metacall_Callback = int (*)(QQuickTextureFactory*, int, int, void**);
    using QQuickTextureFactory_CreateTexture_Callback = QSGTexture* (*)(const QQuickTextureFactory*, QQuickWindow*);
    using QQuickTextureFactory_TextureSize_Callback = QSize* (*)(const QQuickTextureFactory*);
    using QQuickTextureFactory_TextureByteCount_Callback = int (*)(const QQuickTextureFactory*);
    using QQuickTextureFactory_Image_Callback = QImage* (*)(const QQuickTextureFactory*);
    using QQuickTextureFactory_Event_Callback = bool (*)(QQuickTextureFactory*, QEvent*);
    using QQuickTextureFactory_EventFilter_Callback = bool (*)(QQuickTextureFactory*, QObject*, QEvent*);
    using QQuickTextureFactory_TimerEvent_Callback = void (*)(QQuickTextureFactory*, QTimerEvent*);
    using QQuickTextureFactory_ChildEvent_Callback = void (*)(QQuickTextureFactory*, QChildEvent*);
    using QQuickTextureFactory_CustomEvent_Callback = void (*)(QQuickTextureFactory*, QEvent*);
    using QQuickTextureFactory_ConnectNotify_Callback = void (*)(QQuickTextureFactory*, QMetaMethod*);
    using QQuickTextureFactory_DisconnectNotify_Callback = void (*)(QQuickTextureFactory*, QMetaMethod*);
    using QQuickTextureFactory::isSignalConnected;
    using QQuickTextureFactory::receivers;
    using QQuickTextureFactory::sender;
    using QQuickTextureFactory::senderSignalIndex;

    // Instance callback storage
    QQuickTextureFactory_MetaObject_Callback qquicktexturefactory_metaobject_callback = nullptr;
    QQuickTextureFactory_Metacast_Callback qquicktexturefactory_metacast_callback = nullptr;
    QQuickTextureFactory_Metacall_Callback qquicktexturefactory_metacall_callback = nullptr;
    QQuickTextureFactory_CreateTexture_Callback qquicktexturefactory_createtexture_callback = nullptr;
    QQuickTextureFactory_TextureSize_Callback qquicktexturefactory_texturesize_callback = nullptr;
    QQuickTextureFactory_TextureByteCount_Callback qquicktexturefactory_texturebytecount_callback = nullptr;
    QQuickTextureFactory_Image_Callback qquicktexturefactory_image_callback = nullptr;
    QQuickTextureFactory_Event_Callback qquicktexturefactory_event_callback = nullptr;
    QQuickTextureFactory_EventFilter_Callback qquicktexturefactory_eventfilter_callback = nullptr;
    QQuickTextureFactory_TimerEvent_Callback qquicktexturefactory_timerevent_callback = nullptr;
    QQuickTextureFactory_ChildEvent_Callback qquicktexturefactory_childevent_callback = nullptr;
    QQuickTextureFactory_CustomEvent_Callback qquicktexturefactory_customevent_callback = nullptr;
    QQuickTextureFactory_ConnectNotify_Callback qquicktexturefactory_connectnotify_callback = nullptr;
    QQuickTextureFactory_DisconnectNotify_Callback qquicktexturefactory_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickTextureFactory {
        using QQuickTextureFactory::childEvent;
        using QQuickTextureFactory::connectNotify;
        using QQuickTextureFactory::customEvent;
        using QQuickTextureFactory::disconnectNotify;
        using QQuickTextureFactory::timerEvent;
    };

    VirtualQQuickTextureFactory() : QQuickTextureFactory() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquicktexturefactory_metaobject_callback) {
            QMetaObject* callback_ret = qquicktexturefactory_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickTextureFactory::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquicktexturefactory_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquicktexturefactory_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickTextureFactory::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquicktexturefactory_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquicktexturefactory_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickTextureFactory::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGTexture* createTexture(QQuickWindow* window) const override {
        if (qquicktexturefactory_createtexture_callback) {
            QQuickWindow* cbval1 = window;
            QSGTexture* callback_ret = qquicktexturefactory_createtexture_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQuickTextureFactory::createTexture called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize textureSize() const override {
        if (qquicktexturefactory_texturesize_callback) {
            QSize* callback_ret = qquicktexturefactory_texturesize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQuickTextureFactory::textureSize called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int textureByteCount() const override {
        if (qquicktexturefactory_texturebytecount_callback) {
            int callback_ret = qquicktexturefactory_texturebytecount_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQuickTextureFactory::textureByteCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QImage image() const override {
        if (qquicktexturefactory_image_callback) {
            QImage* callback_ret = qquicktexturefactory_image_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickTextureFactory::image();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquicktexturefactory_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquicktexturefactory_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickTextureFactory::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquicktexturefactory_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquicktexturefactory_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickTextureFactory::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquicktexturefactory_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquicktexturefactory_timerevent_callback(this, cbval1);
            return;
        }
        QQuickTextureFactory::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquicktexturefactory_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquicktexturefactory_childevent_callback(this, cbval1);
            return;
        }
        QQuickTextureFactory::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquicktexturefactory_customevent_callback) {
            QEvent* cbval1 = event;
            qquicktexturefactory_customevent_callback(this, cbval1);
            return;
        }
        QQuickTextureFactory::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquicktexturefactory_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquicktexturefactory_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickTextureFactory::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquicktexturefactory_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquicktexturefactory_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickTextureFactory::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuickTextureFactory_SuperTimerEvent(QQuickTextureFactory* self, QTimerEvent* event);
    friend void QQuickTextureFactory_SuperChildEvent(QQuickTextureFactory* self, QChildEvent* event);
    friend void QQuickTextureFactory_SuperCustomEvent(QQuickTextureFactory* self, QEvent* event);
    friend void QQuickTextureFactory_SuperConnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal);
    friend void QQuickTextureFactory_SuperDisconnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal);
};

// This class is a subclass of QQuickImageResponse
class VirtualQQuickImageResponse : public QQuickImageResponse {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickImageResponse_MetaObject_Callback = QMetaObject* (*)(const QQuickImageResponse*);
    using QQuickImageResponse_Metacast_Callback = void* (*)(QQuickImageResponse*, const char*);
    using QQuickImageResponse_Metacall_Callback = int (*)(QQuickImageResponse*, int, int, void**);
    using QQuickImageResponse_TextureFactory_Callback = QQuickTextureFactory* (*)(const QQuickImageResponse*);
    using QQuickImageResponse_ErrorString_Callback = const char* (*)(const QQuickImageResponse*);
    using QQuickImageResponse_Cancel_Callback = void (*)(QQuickImageResponse*);
    using QQuickImageResponse_Event_Callback = bool (*)(QQuickImageResponse*, QEvent*);
    using QQuickImageResponse_EventFilter_Callback = bool (*)(QQuickImageResponse*, QObject*, QEvent*);
    using QQuickImageResponse_TimerEvent_Callback = void (*)(QQuickImageResponse*, QTimerEvent*);
    using QQuickImageResponse_ChildEvent_Callback = void (*)(QQuickImageResponse*, QChildEvent*);
    using QQuickImageResponse_CustomEvent_Callback = void (*)(QQuickImageResponse*, QEvent*);
    using QQuickImageResponse_ConnectNotify_Callback = void (*)(QQuickImageResponse*, QMetaMethod*);
    using QQuickImageResponse_DisconnectNotify_Callback = void (*)(QQuickImageResponse*, QMetaMethod*);
    using QQuickImageResponse::isSignalConnected;
    using QQuickImageResponse::receivers;
    using QQuickImageResponse::sender;
    using QQuickImageResponse::senderSignalIndex;

    // Instance callback storage
    QQuickImageResponse_MetaObject_Callback qquickimageresponse_metaobject_callback = nullptr;
    QQuickImageResponse_Metacast_Callback qquickimageresponse_metacast_callback = nullptr;
    QQuickImageResponse_Metacall_Callback qquickimageresponse_metacall_callback = nullptr;
    QQuickImageResponse_TextureFactory_Callback qquickimageresponse_texturefactory_callback = nullptr;
    QQuickImageResponse_ErrorString_Callback qquickimageresponse_errorstring_callback = nullptr;
    QQuickImageResponse_Cancel_Callback qquickimageresponse_cancel_callback = nullptr;
    QQuickImageResponse_Event_Callback qquickimageresponse_event_callback = nullptr;
    QQuickImageResponse_EventFilter_Callback qquickimageresponse_eventfilter_callback = nullptr;
    QQuickImageResponse_TimerEvent_Callback qquickimageresponse_timerevent_callback = nullptr;
    QQuickImageResponse_ChildEvent_Callback qquickimageresponse_childevent_callback = nullptr;
    QQuickImageResponse_CustomEvent_Callback qquickimageresponse_customevent_callback = nullptr;
    QQuickImageResponse_ConnectNotify_Callback qquickimageresponse_connectnotify_callback = nullptr;
    QQuickImageResponse_DisconnectNotify_Callback qquickimageresponse_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickImageResponse {
        using QQuickImageResponse::childEvent;
        using QQuickImageResponse::connectNotify;
        using QQuickImageResponse::customEvent;
        using QQuickImageResponse::disconnectNotify;
        using QQuickImageResponse::timerEvent;
    };

    VirtualQQuickImageResponse() : QQuickImageResponse() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickimageresponse_metaobject_callback) {
            QMetaObject* callback_ret = qquickimageresponse_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickImageResponse::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickimageresponse_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquickimageresponse_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickImageResponse::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickimageresponse_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquickimageresponse_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickImageResponse::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQuickTextureFactory* textureFactory() const override {
        if (qquickimageresponse_texturefactory_callback) {
            QQuickTextureFactory* callback_ret = qquickimageresponse_texturefactory_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQuickImageResponse::textureFactory called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (qquickimageresponse_errorstring_callback) {
            const char* callback_ret = qquickimageresponse_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QQuickImageResponse::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual void cancel() override {
        if (qquickimageresponse_cancel_callback) {
            qquickimageresponse_cancel_callback(this);
            return;
        }
        QQuickImageResponse::cancel();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquickimageresponse_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquickimageresponse_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickImageResponse::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickimageresponse_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquickimageresponse_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickImageResponse::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickimageresponse_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquickimageresponse_timerevent_callback(this, cbval1);
            return;
        }
        QQuickImageResponse::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickimageresponse_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquickimageresponse_childevent_callback(this, cbval1);
            return;
        }
        QQuickImageResponse::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickimageresponse_customevent_callback) {
            QEvent* cbval1 = event;
            qquickimageresponse_customevent_callback(this, cbval1);
            return;
        }
        QQuickImageResponse::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickimageresponse_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickimageresponse_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickImageResponse::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickimageresponse_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickimageresponse_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickImageResponse::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuickImageResponse_SuperTimerEvent(QQuickImageResponse* self, QTimerEvent* event);
    friend void QQuickImageResponse_SuperChildEvent(QQuickImageResponse* self, QChildEvent* event);
    friend void QQuickImageResponse_SuperCustomEvent(QQuickImageResponse* self, QEvent* event);
    friend void QQuickImageResponse_SuperConnectNotify(QQuickImageResponse* self, const QMetaMethod* signal);
    friend void QQuickImageResponse_SuperDisconnectNotify(QQuickImageResponse* self, const QMetaMethod* signal);
};

// This class is a subclass of QQuickImageProvider
class VirtualQQuickImageProvider final : public QQuickImageProvider {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickImageProvider_MetaObject_Callback = QMetaObject* (*)(const QQuickImageProvider*);
    using QQuickImageProvider_Metacast_Callback = void* (*)(QQuickImageProvider*, const char*);
    using QQuickImageProvider_Metacall_Callback = int (*)(QQuickImageProvider*, int, int, void**);
    using QQuickImageProvider_ImageType_Callback = int (*)(const QQuickImageProvider*);
    using QQuickImageProvider_Flags_Callback = int (*)(const QQuickImageProvider*);
    using QQuickImageProvider_RequestImage_Callback = QImage* (*)(QQuickImageProvider*, const char*, QSize*, QSize*);
    using QQuickImageProvider_RequestPixmap_Callback = QPixmap* (*)(QQuickImageProvider*, const char*, QSize*, QSize*);
    using QQuickImageProvider_RequestTexture_Callback = QQuickTextureFactory* (*)(QQuickImageProvider*, const char*, QSize*, QSize*);
    using QQuickImageProvider_Event_Callback = bool (*)(QQuickImageProvider*, QEvent*);
    using QQuickImageProvider_EventFilter_Callback = bool (*)(QQuickImageProvider*, QObject*, QEvent*);
    using QQuickImageProvider_TimerEvent_Callback = void (*)(QQuickImageProvider*, QTimerEvent*);
    using QQuickImageProvider_ChildEvent_Callback = void (*)(QQuickImageProvider*, QChildEvent*);
    using QQuickImageProvider_CustomEvent_Callback = void (*)(QQuickImageProvider*, QEvent*);
    using QQuickImageProvider_ConnectNotify_Callback = void (*)(QQuickImageProvider*, QMetaMethod*);
    using QQuickImageProvider_DisconnectNotify_Callback = void (*)(QQuickImageProvider*, QMetaMethod*);
    using QQuickImageProvider::isSignalConnected;
    using QQuickImageProvider::receivers;
    using QQuickImageProvider::sender;
    using QQuickImageProvider::senderSignalIndex;

    // Instance callback storage
    QQuickImageProvider_MetaObject_Callback qquickimageprovider_metaobject_callback = nullptr;
    QQuickImageProvider_Metacast_Callback qquickimageprovider_metacast_callback = nullptr;
    QQuickImageProvider_Metacall_Callback qquickimageprovider_metacall_callback = nullptr;
    QQuickImageProvider_ImageType_Callback qquickimageprovider_imagetype_callback = nullptr;
    QQuickImageProvider_Flags_Callback qquickimageprovider_flags_callback = nullptr;
    QQuickImageProvider_RequestImage_Callback qquickimageprovider_requestimage_callback = nullptr;
    QQuickImageProvider_RequestPixmap_Callback qquickimageprovider_requestpixmap_callback = nullptr;
    QQuickImageProvider_RequestTexture_Callback qquickimageprovider_requesttexture_callback = nullptr;
    QQuickImageProvider_Event_Callback qquickimageprovider_event_callback = nullptr;
    QQuickImageProvider_EventFilter_Callback qquickimageprovider_eventfilter_callback = nullptr;
    QQuickImageProvider_TimerEvent_Callback qquickimageprovider_timerevent_callback = nullptr;
    QQuickImageProvider_ChildEvent_Callback qquickimageprovider_childevent_callback = nullptr;
    QQuickImageProvider_CustomEvent_Callback qquickimageprovider_customevent_callback = nullptr;
    QQuickImageProvider_ConnectNotify_Callback qquickimageprovider_connectnotify_callback = nullptr;
    QQuickImageProvider_DisconnectNotify_Callback qquickimageprovider_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickImageProvider {
        using QQuickImageProvider::childEvent;
        using QQuickImageProvider::connectNotify;
        using QQuickImageProvider::customEvent;
        using QQuickImageProvider::disconnectNotify;
        using QQuickImageProvider::timerEvent;
    };

    VirtualQQuickImageProvider(QQmlImageProviderBase::ImageType typeVal) : QQuickImageProvider(typeVal) {};
    VirtualQQuickImageProvider(QQmlImageProviderBase::ImageType typeVal, QQmlImageProviderBase::Flags flags) : QQuickImageProvider(typeVal, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickimageprovider_metaobject_callback) {
            QMetaObject* callback_ret = qquickimageprovider_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickImageProvider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickimageprovider_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquickimageprovider_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickImageProvider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickimageprovider_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquickimageprovider_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickImageProvider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQmlImageProviderBase::ImageType imageType() const override {
        if (qquickimageprovider_imagetype_callback) {
            int callback_ret = qquickimageprovider_imagetype_callback(this);
            return static_cast<QQmlImageProviderBase::ImageType>(callback_ret);
        }
        return QQuickImageProvider::imageType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QQmlImageProviderBase::Flags flags() const override {
        if (qquickimageprovider_flags_callback) {
            int callback_ret = qquickimageprovider_flags_callback(this);
            return static_cast<QQmlImageProviderBase::Flags>(callback_ret);
        }
        return QQuickImageProvider::flags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QImage requestImage(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (qquickimageprovider_requestimage_callback) {
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
            QImage* callback_ret = qquickimageprovider_requestimage_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(id_str);
            return callback_ret_Value;
        }
        return QQuickImageProvider::requestImage(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap requestPixmap(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (qquickimageprovider_requestpixmap_callback) {
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
            QPixmap* callback_ret = qquickimageprovider_requestpixmap_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(id_str);
            return callback_ret_Value;
        }
        return QQuickImageProvider::requestPixmap(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQuickTextureFactory* requestTexture(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (qquickimageprovider_requesttexture_callback) {
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
            QQuickTextureFactory* callback_ret = qquickimageprovider_requesttexture_callback(this, cbval1, cbval2, cbval3);
            libqt_free(id_str);
            return callback_ret;
        }
        return QQuickImageProvider::requestTexture(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquickimageprovider_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquickimageprovider_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickImageProvider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickimageprovider_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquickimageprovider_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickImageProvider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickimageprovider_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquickimageprovider_timerevent_callback(this, cbval1);
            return;
        }
        QQuickImageProvider::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickimageprovider_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquickimageprovider_childevent_callback(this, cbval1);
            return;
        }
        QQuickImageProvider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickimageprovider_customevent_callback) {
            QEvent* cbval1 = event;
            qquickimageprovider_customevent_callback(this, cbval1);
            return;
        }
        QQuickImageProvider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickimageprovider_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickimageprovider_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickImageProvider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickimageprovider_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickimageprovider_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickImageProvider::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuickImageProvider_SuperTimerEvent(QQuickImageProvider* self, QTimerEvent* event);
    friend void QQuickImageProvider_SuperChildEvent(QQuickImageProvider* self, QChildEvent* event);
    friend void QQuickImageProvider_SuperCustomEvent(QQuickImageProvider* self, QEvent* event);
    friend void QQuickImageProvider_SuperConnectNotify(QQuickImageProvider* self, const QMetaMethod* signal);
    friend void QQuickImageProvider_SuperDisconnectNotify(QQuickImageProvider* self, const QMetaMethod* signal);
};

// This class is a subclass of QQuickAsyncImageProvider
class VirtualQQuickAsyncImageProvider : public QQuickAsyncImageProvider {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickAsyncImageProvider_RequestImageResponse_Callback = QQuickImageResponse* (*)(QQuickAsyncImageProvider*, const char*, QSize*);
    using QQuickAsyncImageProvider_MetaObject_Callback = QMetaObject* (*)(const QQuickAsyncImageProvider*);
    using QQuickAsyncImageProvider_Metacast_Callback = void* (*)(QQuickAsyncImageProvider*, const char*);
    using QQuickAsyncImageProvider_Metacall_Callback = int (*)(QQuickAsyncImageProvider*, int, int, void**);
    using QQuickAsyncImageProvider_ImageType_Callback = int (*)(const QQuickAsyncImageProvider*);
    using QQuickAsyncImageProvider_Flags_Callback = int (*)(const QQuickAsyncImageProvider*);
    using QQuickAsyncImageProvider_RequestImage_Callback = QImage* (*)(QQuickAsyncImageProvider*, const char*, QSize*, QSize*);
    using QQuickAsyncImageProvider_RequestPixmap_Callback = QPixmap* (*)(QQuickAsyncImageProvider*, const char*, QSize*, QSize*);
    using QQuickAsyncImageProvider_RequestTexture_Callback = QQuickTextureFactory* (*)(QQuickAsyncImageProvider*, const char*, QSize*, QSize*);
    using QQuickAsyncImageProvider_Event_Callback = bool (*)(QQuickAsyncImageProvider*, QEvent*);
    using QQuickAsyncImageProvider_EventFilter_Callback = bool (*)(QQuickAsyncImageProvider*, QObject*, QEvent*);
    using QQuickAsyncImageProvider_TimerEvent_Callback = void (*)(QQuickAsyncImageProvider*, QTimerEvent*);
    using QQuickAsyncImageProvider_ChildEvent_Callback = void (*)(QQuickAsyncImageProvider*, QChildEvent*);
    using QQuickAsyncImageProvider_CustomEvent_Callback = void (*)(QQuickAsyncImageProvider*, QEvent*);
    using QQuickAsyncImageProvider_ConnectNotify_Callback = void (*)(QQuickAsyncImageProvider*, QMetaMethod*);
    using QQuickAsyncImageProvider_DisconnectNotify_Callback = void (*)(QQuickAsyncImageProvider*, QMetaMethod*);
    using QQuickAsyncImageProvider::isSignalConnected;
    using QQuickAsyncImageProvider::receivers;
    using QQuickAsyncImageProvider::sender;
    using QQuickAsyncImageProvider::senderSignalIndex;

    // Instance callback storage
    QQuickAsyncImageProvider_RequestImageResponse_Callback qquickasyncimageprovider_requestimageresponse_callback = nullptr;
    QQuickAsyncImageProvider_MetaObject_Callback qquickasyncimageprovider_metaobject_callback = nullptr;
    QQuickAsyncImageProvider_Metacast_Callback qquickasyncimageprovider_metacast_callback = nullptr;
    QQuickAsyncImageProvider_Metacall_Callback qquickasyncimageprovider_metacall_callback = nullptr;
    QQuickAsyncImageProvider_ImageType_Callback qquickasyncimageprovider_imagetype_callback = nullptr;
    QQuickAsyncImageProvider_Flags_Callback qquickasyncimageprovider_flags_callback = nullptr;
    QQuickAsyncImageProvider_RequestImage_Callback qquickasyncimageprovider_requestimage_callback = nullptr;
    QQuickAsyncImageProvider_RequestPixmap_Callback qquickasyncimageprovider_requestpixmap_callback = nullptr;
    QQuickAsyncImageProvider_RequestTexture_Callback qquickasyncimageprovider_requesttexture_callback = nullptr;
    QQuickAsyncImageProvider_Event_Callback qquickasyncimageprovider_event_callback = nullptr;
    QQuickAsyncImageProvider_EventFilter_Callback qquickasyncimageprovider_eventfilter_callback = nullptr;
    QQuickAsyncImageProvider_TimerEvent_Callback qquickasyncimageprovider_timerevent_callback = nullptr;
    QQuickAsyncImageProvider_ChildEvent_Callback qquickasyncimageprovider_childevent_callback = nullptr;
    QQuickAsyncImageProvider_CustomEvent_Callback qquickasyncimageprovider_customevent_callback = nullptr;
    QQuickAsyncImageProvider_ConnectNotify_Callback qquickasyncimageprovider_connectnotify_callback = nullptr;
    QQuickAsyncImageProvider_DisconnectNotify_Callback qquickasyncimageprovider_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickAsyncImageProvider {
        using QQuickAsyncImageProvider::childEvent;
        using QQuickAsyncImageProvider::connectNotify;
        using QQuickAsyncImageProvider::customEvent;
        using QQuickAsyncImageProvider::disconnectNotify;
        using QQuickAsyncImageProvider::timerEvent;
    };

    VirtualQQuickAsyncImageProvider() : QQuickAsyncImageProvider() {};

    // Virtual method for C ABI access and custom callback
    virtual QQuickImageResponse* requestImageResponse(const QString& id, const QSize& requestedSize) override {
        if (qquickasyncimageprovider_requestimageresponse_callback) {
            const auto id_ret = id;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray id_b = id_ret.toUtf8();
            auto id_str_len = id_b.length();
            const char* id_str = static_cast<const char*>(malloc(id_str_len + 1));
            memcpy((void*)id_str, id_b.data(), id_str_len);
            ((char*)id_str)[id_str_len] = '\0';
            const char* cbval1 = id_str;
            const QSize& requestedSize_ret = requestedSize;
            // Cast returned reference into pointer
            QSize* cbval2 = const_cast<QSize*>(&requestedSize_ret);
            QQuickImageResponse* callback_ret = qquickasyncimageprovider_requestimageresponse_callback(this, cbval1, cbval2);
            libqt_free(id_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQuickAsyncImageProvider::requestImageResponse called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickasyncimageprovider_metaobject_callback) {
            QMetaObject* callback_ret = qquickasyncimageprovider_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickAsyncImageProvider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickasyncimageprovider_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquickasyncimageprovider_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickAsyncImageProvider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickasyncimageprovider_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquickasyncimageprovider_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickAsyncImageProvider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQmlImageProviderBase::ImageType imageType() const override {
        if (qquickasyncimageprovider_imagetype_callback) {
            int callback_ret = qquickasyncimageprovider_imagetype_callback(this);
            return static_cast<QQmlImageProviderBase::ImageType>(callback_ret);
        }
        return QQuickAsyncImageProvider::imageType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QQmlImageProviderBase::Flags flags() const override {
        if (qquickasyncimageprovider_flags_callback) {
            int callback_ret = qquickasyncimageprovider_flags_callback(this);
            return static_cast<QQmlImageProviderBase::Flags>(callback_ret);
        }
        return QQuickAsyncImageProvider::flags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QImage requestImage(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (qquickasyncimageprovider_requestimage_callback) {
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
            QImage* callback_ret = qquickasyncimageprovider_requestimage_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(id_str);
            return callback_ret_Value;
        }
        return QQuickAsyncImageProvider::requestImage(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap requestPixmap(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (qquickasyncimageprovider_requestpixmap_callback) {
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
            QPixmap* callback_ret = qquickasyncimageprovider_requestpixmap_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(id_str);
            return callback_ret_Value;
        }
        return QQuickAsyncImageProvider::requestPixmap(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQuickTextureFactory* requestTexture(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (qquickasyncimageprovider_requesttexture_callback) {
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
            QQuickTextureFactory* callback_ret = qquickasyncimageprovider_requesttexture_callback(this, cbval1, cbval2, cbval3);
            libqt_free(id_str);
            return callback_ret;
        }
        return QQuickAsyncImageProvider::requestTexture(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquickasyncimageprovider_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquickasyncimageprovider_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickAsyncImageProvider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickasyncimageprovider_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquickasyncimageprovider_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickAsyncImageProvider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickasyncimageprovider_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquickasyncimageprovider_timerevent_callback(this, cbval1);
            return;
        }
        QQuickAsyncImageProvider::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickasyncimageprovider_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquickasyncimageprovider_childevent_callback(this, cbval1);
            return;
        }
        QQuickAsyncImageProvider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickasyncimageprovider_customevent_callback) {
            QEvent* cbval1 = event;
            qquickasyncimageprovider_customevent_callback(this, cbval1);
            return;
        }
        QQuickAsyncImageProvider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickasyncimageprovider_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickasyncimageprovider_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickAsyncImageProvider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickasyncimageprovider_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickasyncimageprovider_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickAsyncImageProvider::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuickAsyncImageProvider_SuperTimerEvent(QQuickAsyncImageProvider* self, QTimerEvent* event);
    friend void QQuickAsyncImageProvider_SuperChildEvent(QQuickAsyncImageProvider* self, QChildEvent* event);
    friend void QQuickAsyncImageProvider_SuperCustomEvent(QQuickAsyncImageProvider* self, QEvent* event);
    friend void QQuickAsyncImageProvider_SuperConnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal);
    friend void QQuickAsyncImageProvider_SuperDisconnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal);
};

#endif
