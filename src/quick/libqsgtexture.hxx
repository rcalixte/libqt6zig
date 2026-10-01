#pragma once
#ifndef QUICK_LIBQSGTEXTURE_HXX
#define QUICK_LIBQSGTEXTURE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGTexture
class VirtualQSGTexture : public QSGTexture {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGTexture_MetaObject_Callback = QMetaObject* (*)(const QSGTexture*);
    using QSGTexture_Metacast_Callback = void* (*)(QSGTexture*, const char*);
    using QSGTexture_Metacall_Callback = int (*)(QSGTexture*, int, int, void**);
    using QSGTexture_ComparisonKey_Callback = long long (*)(const QSGTexture*);
    using QSGTexture_TextureSize_Callback = QSize* (*)(const QSGTexture*);
    using QSGTexture_HasAlphaChannel_Callback = bool (*)(const QSGTexture*);
    using QSGTexture_HasMipmaps_Callback = bool (*)(const QSGTexture*);
    using QSGTexture_NormalizedTextureSubRect_Callback = QRectF* (*)(const QSGTexture*);
    using QSGTexture_IsAtlasTexture_Callback = bool (*)(const QSGTexture*);
    using QSGTexture_Event_Callback = bool (*)(QSGTexture*, QEvent*);
    using QSGTexture_EventFilter_Callback = bool (*)(QSGTexture*, QObject*, QEvent*);
    using QSGTexture_TimerEvent_Callback = void (*)(QSGTexture*, QTimerEvent*);
    using QSGTexture_ChildEvent_Callback = void (*)(QSGTexture*, QChildEvent*);
    using QSGTexture_CustomEvent_Callback = void (*)(QSGTexture*, QEvent*);
    using QSGTexture_ConnectNotify_Callback = void (*)(QSGTexture*, QMetaMethod*);
    using QSGTexture_DisconnectNotify_Callback = void (*)(QSGTexture*, QMetaMethod*);
    using QSGTexture::isSignalConnected;
    using QSGTexture::receivers;
    using QSGTexture::resolveInterface;
    using QSGTexture::sender;
    using QSGTexture::senderSignalIndex;

    // Instance callback storage
    QSGTexture_MetaObject_Callback qsgtexture_metaobject_callback = nullptr;
    QSGTexture_Metacast_Callback qsgtexture_metacast_callback = nullptr;
    QSGTexture_Metacall_Callback qsgtexture_metacall_callback = nullptr;
    QSGTexture_ComparisonKey_Callback qsgtexture_comparisonkey_callback = nullptr;
    QSGTexture_TextureSize_Callback qsgtexture_texturesize_callback = nullptr;
    QSGTexture_HasAlphaChannel_Callback qsgtexture_hasalphachannel_callback = nullptr;
    QSGTexture_HasMipmaps_Callback qsgtexture_hasmipmaps_callback = nullptr;
    QSGTexture_NormalizedTextureSubRect_Callback qsgtexture_normalizedtexturesubrect_callback = nullptr;
    QSGTexture_IsAtlasTexture_Callback qsgtexture_isatlastexture_callback = nullptr;
    QSGTexture_Event_Callback qsgtexture_event_callback = nullptr;
    QSGTexture_EventFilter_Callback qsgtexture_eventfilter_callback = nullptr;
    QSGTexture_TimerEvent_Callback qsgtexture_timerevent_callback = nullptr;
    QSGTexture_ChildEvent_Callback qsgtexture_childevent_callback = nullptr;
    QSGTexture_CustomEvent_Callback qsgtexture_customevent_callback = nullptr;
    QSGTexture_ConnectNotify_Callback qsgtexture_connectnotify_callback = nullptr;
    QSGTexture_DisconnectNotify_Callback qsgtexture_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSGTexture {
        using QSGTexture::childEvent;
        using QSGTexture::connectNotify;
        using QSGTexture::customEvent;
        using QSGTexture::disconnectNotify;
        using QSGTexture::timerEvent;
    };

    VirtualQSGTexture() : QSGTexture() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsgtexture_metaobject_callback) {
            QMetaObject* callback_ret = qsgtexture_metaobject_callback(this);
            return callback_ret;
        }
        return QSGTexture::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsgtexture_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsgtexture_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSGTexture::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsgtexture_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsgtexture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSGTexture::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 comparisonKey() const override {
        if (qsgtexture_comparisonkey_callback) {
            long long callback_ret = qsgtexture_comparisonkey_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSGTexture::comparisonKey called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize textureSize() const override {
        if (qsgtexture_texturesize_callback) {
            QSize* callback_ret = qsgtexture_texturesize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSGTexture::textureSize called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasAlphaChannel() const override {
        if (qsgtexture_hasalphachannel_callback) {
            bool callback_ret = qsgtexture_hasalphachannel_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSGTexture::hasAlphaChannel called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasMipmaps() const override {
        if (qsgtexture_hasmipmaps_callback) {
            bool callback_ret = qsgtexture_hasmipmaps_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSGTexture::hasMipmaps called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF normalizedTextureSubRect() const override {
        if (qsgtexture_normalizedtexturesubrect_callback) {
            QRectF* callback_ret = qsgtexture_normalizedtexturesubrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSGTexture::normalizedTextureSubRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isAtlasTexture() const override {
        if (qsgtexture_isatlastexture_callback) {
            bool callback_ret = qsgtexture_isatlastexture_callback(this);
            return callback_ret;
        }
        return QSGTexture::isAtlasTexture();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsgtexture_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsgtexture_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSGTexture::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsgtexture_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsgtexture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSGTexture::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsgtexture_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsgtexture_timerevent_callback(this, cbval1);
            return;
        }
        QSGTexture::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsgtexture_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsgtexture_childevent_callback(this, cbval1);
            return;
        }
        QSGTexture::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsgtexture_customevent_callback) {
            QEvent* cbval1 = event;
            qsgtexture_customevent_callback(this, cbval1);
            return;
        }
        QSGTexture::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsgtexture_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsgtexture_connectnotify_callback(this, cbval1);
            return;
        }
        QSGTexture::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsgtexture_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsgtexture_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSGTexture::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSGTexture_SuperTimerEvent(QSGTexture* self, QTimerEvent* event);
    friend void QSGTexture_SuperChildEvent(QSGTexture* self, QChildEvent* event);
    friend void QSGTexture_SuperCustomEvent(QSGTexture* self, QEvent* event);
    friend void QSGTexture_SuperConnectNotify(QSGTexture* self, const QMetaMethod* signal);
    friend void QSGTexture_SuperDisconnectNotify(QSGTexture* self, const QMetaMethod* signal);
};

// This class is a subclass of QSGDynamicTexture
class VirtualQSGDynamicTexture : public QSGDynamicTexture {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSGDynamicTexture_MetaObject_Callback = QMetaObject* (*)(const QSGDynamicTexture*);
    using QSGDynamicTexture_Metacast_Callback = void* (*)(QSGDynamicTexture*, const char*);
    using QSGDynamicTexture_Metacall_Callback = int (*)(QSGDynamicTexture*, int, int, void**);
    using QSGDynamicTexture_UpdateTexture_Callback = bool (*)(QSGDynamicTexture*);
    using QSGDynamicTexture_ComparisonKey_Callback = long long (*)(const QSGDynamicTexture*);
    using QSGDynamicTexture_TextureSize_Callback = QSize* (*)(const QSGDynamicTexture*);
    using QSGDynamicTexture_HasAlphaChannel_Callback = bool (*)(const QSGDynamicTexture*);
    using QSGDynamicTexture_HasMipmaps_Callback = bool (*)(const QSGDynamicTexture*);
    using QSGDynamicTexture_NormalizedTextureSubRect_Callback = QRectF* (*)(const QSGDynamicTexture*);
    using QSGDynamicTexture_IsAtlasTexture_Callback = bool (*)(const QSGDynamicTexture*);
    using QSGDynamicTexture_Event_Callback = bool (*)(QSGDynamicTexture*, QEvent*);
    using QSGDynamicTexture_EventFilter_Callback = bool (*)(QSGDynamicTexture*, QObject*, QEvent*);
    using QSGDynamicTexture_TimerEvent_Callback = void (*)(QSGDynamicTexture*, QTimerEvent*);
    using QSGDynamicTexture_ChildEvent_Callback = void (*)(QSGDynamicTexture*, QChildEvent*);
    using QSGDynamicTexture_CustomEvent_Callback = void (*)(QSGDynamicTexture*, QEvent*);
    using QSGDynamicTexture_ConnectNotify_Callback = void (*)(QSGDynamicTexture*, QMetaMethod*);
    using QSGDynamicTexture_DisconnectNotify_Callback = void (*)(QSGDynamicTexture*, QMetaMethod*);
    using QSGDynamicTexture::isSignalConnected;
    using QSGDynamicTexture::receivers;
    using QSGDynamicTexture::resolveInterface;
    using QSGDynamicTexture::sender;
    using QSGDynamicTexture::senderSignalIndex;

    // Instance callback storage
    QSGDynamicTexture_MetaObject_Callback qsgdynamictexture_metaobject_callback = nullptr;
    QSGDynamicTexture_Metacast_Callback qsgdynamictexture_metacast_callback = nullptr;
    QSGDynamicTexture_Metacall_Callback qsgdynamictexture_metacall_callback = nullptr;
    QSGDynamicTexture_UpdateTexture_Callback qsgdynamictexture_updatetexture_callback = nullptr;
    QSGDynamicTexture_ComparisonKey_Callback qsgdynamictexture_comparisonkey_callback = nullptr;
    QSGDynamicTexture_TextureSize_Callback qsgdynamictexture_texturesize_callback = nullptr;
    QSGDynamicTexture_HasAlphaChannel_Callback qsgdynamictexture_hasalphachannel_callback = nullptr;
    QSGDynamicTexture_HasMipmaps_Callback qsgdynamictexture_hasmipmaps_callback = nullptr;
    QSGDynamicTexture_NormalizedTextureSubRect_Callback qsgdynamictexture_normalizedtexturesubrect_callback = nullptr;
    QSGDynamicTexture_IsAtlasTexture_Callback qsgdynamictexture_isatlastexture_callback = nullptr;
    QSGDynamicTexture_Event_Callback qsgdynamictexture_event_callback = nullptr;
    QSGDynamicTexture_EventFilter_Callback qsgdynamictexture_eventfilter_callback = nullptr;
    QSGDynamicTexture_TimerEvent_Callback qsgdynamictexture_timerevent_callback = nullptr;
    QSGDynamicTexture_ChildEvent_Callback qsgdynamictexture_childevent_callback = nullptr;
    QSGDynamicTexture_CustomEvent_Callback qsgdynamictexture_customevent_callback = nullptr;
    QSGDynamicTexture_ConnectNotify_Callback qsgdynamictexture_connectnotify_callback = nullptr;
    QSGDynamicTexture_DisconnectNotify_Callback qsgdynamictexture_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSGDynamicTexture {
        using QSGDynamicTexture::childEvent;
        using QSGDynamicTexture::connectNotify;
        using QSGDynamicTexture::customEvent;
        using QSGDynamicTexture::disconnectNotify;
        using QSGDynamicTexture::timerEvent;
    };

    VirtualQSGDynamicTexture() : QSGDynamicTexture() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsgdynamictexture_metaobject_callback) {
            QMetaObject* callback_ret = qsgdynamictexture_metaobject_callback(this);
            return callback_ret;
        }
        return QSGDynamicTexture::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsgdynamictexture_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsgdynamictexture_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSGDynamicTexture::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsgdynamictexture_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsgdynamictexture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSGDynamicTexture::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool updateTexture() override {
        if (qsgdynamictexture_updatetexture_callback) {
            bool callback_ret = qsgdynamictexture_updatetexture_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSGDynamicTexture::updateTexture called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 comparisonKey() const override {
        if (qsgdynamictexture_comparisonkey_callback) {
            long long callback_ret = qsgdynamictexture_comparisonkey_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSGDynamicTexture::comparisonKey called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize textureSize() const override {
        if (qsgdynamictexture_texturesize_callback) {
            QSize* callback_ret = qsgdynamictexture_texturesize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSGDynamicTexture::textureSize called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasAlphaChannel() const override {
        if (qsgdynamictexture_hasalphachannel_callback) {
            bool callback_ret = qsgdynamictexture_hasalphachannel_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSGDynamicTexture::hasAlphaChannel called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasMipmaps() const override {
        if (qsgdynamictexture_hasmipmaps_callback) {
            bool callback_ret = qsgdynamictexture_hasmipmaps_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSGDynamicTexture::hasMipmaps called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF normalizedTextureSubRect() const override {
        if (qsgdynamictexture_normalizedtexturesubrect_callback) {
            QRectF* callback_ret = qsgdynamictexture_normalizedtexturesubrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSGDynamicTexture::normalizedTextureSubRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isAtlasTexture() const override {
        if (qsgdynamictexture_isatlastexture_callback) {
            bool callback_ret = qsgdynamictexture_isatlastexture_callback(this);
            return callback_ret;
        }
        return QSGDynamicTexture::isAtlasTexture();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsgdynamictexture_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsgdynamictexture_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSGDynamicTexture::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsgdynamictexture_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsgdynamictexture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSGDynamicTexture::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsgdynamictexture_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsgdynamictexture_timerevent_callback(this, cbval1);
            return;
        }
        QSGDynamicTexture::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsgdynamictexture_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsgdynamictexture_childevent_callback(this, cbval1);
            return;
        }
        QSGDynamicTexture::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsgdynamictexture_customevent_callback) {
            QEvent* cbval1 = event;
            qsgdynamictexture_customevent_callback(this, cbval1);
            return;
        }
        QSGDynamicTexture::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsgdynamictexture_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsgdynamictexture_connectnotify_callback(this, cbval1);
            return;
        }
        QSGDynamicTexture::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsgdynamictexture_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsgdynamictexture_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSGDynamicTexture::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSGDynamicTexture_SuperTimerEvent(QSGDynamicTexture* self, QTimerEvent* event);
    friend void QSGDynamicTexture_SuperChildEvent(QSGDynamicTexture* self, QChildEvent* event);
    friend void QSGDynamicTexture_SuperCustomEvent(QSGDynamicTexture* self, QEvent* event);
    friend void QSGDynamicTexture_SuperConnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal);
    friend void QSGDynamicTexture_SuperDisconnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal);
};

#endif
