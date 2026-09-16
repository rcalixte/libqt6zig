#pragma once
#ifndef QUICK_LIBQSGTEXTURE_HXX
#define QUICK_LIBQSGTEXTURE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSGTexture so that we can call protected methods
class VirtualQSGTexture : public QSGTexture {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGTexture = true;

    // Virtual class public types (including callbacks)
    using QSGTexture_MetaObject_Callback = QMetaObject* (*)();
    using QSGTexture_Metacast_Callback = void* (*)(QSGTexture*, const char*);
    using QSGTexture_Metacall_Callback = int (*)(QSGTexture*, int, int, void**);
    using QSGTexture_ComparisonKey_Callback = long long (*)();
    using QSGTexture_TextureSize_Callback = QSize* (*)();
    using QSGTexture_HasAlphaChannel_Callback = bool (*)();
    using QSGTexture_HasMipmaps_Callback = bool (*)();
    using QSGTexture_NormalizedTextureSubRect_Callback = QRectF* (*)();
    using QSGTexture_IsAtlasTexture_Callback = bool (*)();
    using QSGTexture_Event_Callback = bool (*)(QSGTexture*, QEvent*);
    using QSGTexture_EventFilter_Callback = bool (*)(QSGTexture*, QObject*, QEvent*);
    using QSGTexture_TimerEvent_Callback = void (*)(QSGTexture*, QTimerEvent*);
    using QSGTexture_ChildEvent_Callback = void (*)(QSGTexture*, QChildEvent*);
    using QSGTexture_CustomEvent_Callback = void (*)(QSGTexture*, QEvent*);
    using QSGTexture_ConnectNotify_Callback = void (*)(QSGTexture*, QMetaMethod*);
    using QSGTexture_DisconnectNotify_Callback = void (*)(QSGTexture*, QMetaMethod*);
    using QSGTexture_ResolveInterface_Callback = void* (*)(const QSGTexture*, const char*, int);
    using QSGTexture_Sender_Callback = QObject* (*)();
    using QSGTexture_SenderSignalIndex_Callback = int (*)();
    using QSGTexture_Receivers_Callback = int (*)(const QSGTexture*, const char*);
    using QSGTexture_IsSignalConnected_Callback = bool (*)(const QSGTexture*, QMetaMethod*);

  protected:
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
    QSGTexture_ResolveInterface_Callback qsgtexture_resolveinterface_callback = nullptr;
    QSGTexture_Sender_Callback qsgtexture_sender_callback = nullptr;
    QSGTexture_SenderSignalIndex_Callback qsgtexture_sendersignalindex_callback = nullptr;
    QSGTexture_Receivers_Callback qsgtexture_receivers_callback = nullptr;
    QSGTexture_IsSignalConnected_Callback qsgtexture_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsgtexture_metaobject_isbase = false;
    mutable bool qsgtexture_metacast_isbase = false;
    mutable bool qsgtexture_metacall_isbase = false;
    mutable bool qsgtexture_comparisonkey_isbase = false;
    mutable bool qsgtexture_texturesize_isbase = false;
    mutable bool qsgtexture_hasalphachannel_isbase = false;
    mutable bool qsgtexture_hasmipmaps_isbase = false;
    mutable bool qsgtexture_normalizedtexturesubrect_isbase = false;
    mutable bool qsgtexture_isatlastexture_isbase = false;
    mutable bool qsgtexture_event_isbase = false;
    mutable bool qsgtexture_eventfilter_isbase = false;
    mutable bool qsgtexture_timerevent_isbase = false;
    mutable bool qsgtexture_childevent_isbase = false;
    mutable bool qsgtexture_customevent_isbase = false;
    mutable bool qsgtexture_connectnotify_isbase = false;
    mutable bool qsgtexture_disconnectnotify_isbase = false;
    mutable bool qsgtexture_resolveinterface_isbase = false;
    mutable bool qsgtexture_sender_isbase = false;
    mutable bool qsgtexture_sendersignalindex_isbase = false;
    mutable bool qsgtexture_receivers_isbase = false;
    mutable bool qsgtexture_issignalconnected_isbase = false;

  public:
    VirtualQSGTexture() : QSGTexture() {};

    // Callback setters
    inline void setQSGTexture_MetaObject_Callback(QSGTexture_MetaObject_Callback cb) { qsgtexture_metaobject_callback = cb; }
    inline void setQSGTexture_Metacast_Callback(QSGTexture_Metacast_Callback cb) { qsgtexture_metacast_callback = cb; }
    inline void setQSGTexture_Metacall_Callback(QSGTexture_Metacall_Callback cb) { qsgtexture_metacall_callback = cb; }
    inline void setQSGTexture_ComparisonKey_Callback(QSGTexture_ComparisonKey_Callback cb) { qsgtexture_comparisonkey_callback = cb; }
    inline void setQSGTexture_TextureSize_Callback(QSGTexture_TextureSize_Callback cb) { qsgtexture_texturesize_callback = cb; }
    inline void setQSGTexture_HasAlphaChannel_Callback(QSGTexture_HasAlphaChannel_Callback cb) { qsgtexture_hasalphachannel_callback = cb; }
    inline void setQSGTexture_HasMipmaps_Callback(QSGTexture_HasMipmaps_Callback cb) { qsgtexture_hasmipmaps_callback = cb; }
    inline void setQSGTexture_NormalizedTextureSubRect_Callback(QSGTexture_NormalizedTextureSubRect_Callback cb) { qsgtexture_normalizedtexturesubrect_callback = cb; }
    inline void setQSGTexture_IsAtlasTexture_Callback(QSGTexture_IsAtlasTexture_Callback cb) { qsgtexture_isatlastexture_callback = cb; }
    inline void setQSGTexture_Event_Callback(QSGTexture_Event_Callback cb) { qsgtexture_event_callback = cb; }
    inline void setQSGTexture_EventFilter_Callback(QSGTexture_EventFilter_Callback cb) { qsgtexture_eventfilter_callback = cb; }
    inline void setQSGTexture_TimerEvent_Callback(QSGTexture_TimerEvent_Callback cb) { qsgtexture_timerevent_callback = cb; }
    inline void setQSGTexture_ChildEvent_Callback(QSGTexture_ChildEvent_Callback cb) { qsgtexture_childevent_callback = cb; }
    inline void setQSGTexture_CustomEvent_Callback(QSGTexture_CustomEvent_Callback cb) { qsgtexture_customevent_callback = cb; }
    inline void setQSGTexture_ConnectNotify_Callback(QSGTexture_ConnectNotify_Callback cb) { qsgtexture_connectnotify_callback = cb; }
    inline void setQSGTexture_DisconnectNotify_Callback(QSGTexture_DisconnectNotify_Callback cb) { qsgtexture_disconnectnotify_callback = cb; }
    inline void setQSGTexture_ResolveInterface_Callback(QSGTexture_ResolveInterface_Callback cb) { qsgtexture_resolveinterface_callback = cb; }
    inline void setQSGTexture_Sender_Callback(QSGTexture_Sender_Callback cb) { qsgtexture_sender_callback = cb; }
    inline void setQSGTexture_SenderSignalIndex_Callback(QSGTexture_SenderSignalIndex_Callback cb) { qsgtexture_sendersignalindex_callback = cb; }
    inline void setQSGTexture_Receivers_Callback(QSGTexture_Receivers_Callback cb) { qsgtexture_receivers_callback = cb; }
    inline void setQSGTexture_IsSignalConnected_Callback(QSGTexture_IsSignalConnected_Callback cb) { qsgtexture_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSGTexture_MetaObject_IsBase(bool value) const { qsgtexture_metaobject_isbase = value; }
    inline void setQSGTexture_Metacast_IsBase(bool value) const { qsgtexture_metacast_isbase = value; }
    inline void setQSGTexture_Metacall_IsBase(bool value) const { qsgtexture_metacall_isbase = value; }
    inline void setQSGTexture_ComparisonKey_IsBase(bool value) const { qsgtexture_comparisonkey_isbase = value; }
    inline void setQSGTexture_TextureSize_IsBase(bool value) const { qsgtexture_texturesize_isbase = value; }
    inline void setQSGTexture_HasAlphaChannel_IsBase(bool value) const { qsgtexture_hasalphachannel_isbase = value; }
    inline void setQSGTexture_HasMipmaps_IsBase(bool value) const { qsgtexture_hasmipmaps_isbase = value; }
    inline void setQSGTexture_NormalizedTextureSubRect_IsBase(bool value) const { qsgtexture_normalizedtexturesubrect_isbase = value; }
    inline void setQSGTexture_IsAtlasTexture_IsBase(bool value) const { qsgtexture_isatlastexture_isbase = value; }
    inline void setQSGTexture_Event_IsBase(bool value) const { qsgtexture_event_isbase = value; }
    inline void setQSGTexture_EventFilter_IsBase(bool value) const { qsgtexture_eventfilter_isbase = value; }
    inline void setQSGTexture_TimerEvent_IsBase(bool value) const { qsgtexture_timerevent_isbase = value; }
    inline void setQSGTexture_ChildEvent_IsBase(bool value) const { qsgtexture_childevent_isbase = value; }
    inline void setQSGTexture_CustomEvent_IsBase(bool value) const { qsgtexture_customevent_isbase = value; }
    inline void setQSGTexture_ConnectNotify_IsBase(bool value) const { qsgtexture_connectnotify_isbase = value; }
    inline void setQSGTexture_DisconnectNotify_IsBase(bool value) const { qsgtexture_disconnectnotify_isbase = value; }
    inline void setQSGTexture_ResolveInterface_IsBase(bool value) const { qsgtexture_resolveinterface_isbase = value; }
    inline void setQSGTexture_Sender_IsBase(bool value) const { qsgtexture_sender_isbase = value; }
    inline void setQSGTexture_SenderSignalIndex_IsBase(bool value) const { qsgtexture_sendersignalindex_isbase = value; }
    inline void setQSGTexture_Receivers_IsBase(bool value) const { qsgtexture_receivers_isbase = value; }
    inline void setQSGTexture_IsSignalConnected_IsBase(bool value) const { qsgtexture_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsgtexture_metaobject_isbase) {
            qsgtexture_metaobject_isbase = false;
            return QSGTexture::metaObject();
        }
        auto metaobject_cb = qsgtexture_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QSGTexture::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsgtexture_metacast_isbase) {
            qsgtexture_metacast_isbase = false;
            return QSGTexture::qt_metacast(param1);
        }
        auto metacast_cb = qsgtexture_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QSGTexture::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsgtexture_metacall_isbase) {
            qsgtexture_metacall_isbase = false;
            return QSGTexture::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qsgtexture_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSGTexture::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 comparisonKey() const override {
        auto comparisonkey_cb = qsgtexture_comparisonkey_callback;
        if (comparisonkey_cb) {
            long long callback_ret = comparisonkey_cb();
            return static_cast<qint64>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize textureSize() const override {
        auto texturesize_cb = qsgtexture_texturesize_callback;
        if (texturesize_cb) {
            QSize* callback_ret = texturesize_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasAlphaChannel() const override {
        auto hasalphachannel_cb = qsgtexture_hasalphachannel_callback;
        if (hasalphachannel_cb) {
            bool callback_ret = hasalphachannel_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasMipmaps() const override {
        auto hasmipmaps_cb = qsgtexture_hasmipmaps_callback;
        if (hasmipmaps_cb) {
            bool callback_ret = hasmipmaps_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF normalizedTextureSubRect() const override {
        if (qsgtexture_normalizedtexturesubrect_isbase) {
            qsgtexture_normalizedtexturesubrect_isbase = false;
            return QSGTexture::normalizedTextureSubRect();
        }
        auto normalizedtexturesubrect_cb = qsgtexture_normalizedtexturesubrect_callback;
        if (normalizedtexturesubrect_cb) {
            QRectF* callback_ret = normalizedtexturesubrect_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSGTexture::normalizedTextureSubRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isAtlasTexture() const override {
        if (qsgtexture_isatlastexture_isbase) {
            qsgtexture_isatlastexture_isbase = false;
            return QSGTexture::isAtlasTexture();
        }
        auto isatlastexture_cb = qsgtexture_isatlastexture_callback;
        if (isatlastexture_cb) {
            bool callback_ret = isatlastexture_cb();
            return callback_ret;
        }
        return QSGTexture::isAtlasTexture();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsgtexture_event_isbase) {
            qsgtexture_event_isbase = false;
            return QSGTexture::event(event);
        }
        auto event_cb = qsgtexture_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QSGTexture::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsgtexture_eventfilter_isbase) {
            qsgtexture_eventfilter_isbase = false;
            return QSGTexture::eventFilter(watched, event);
        }
        auto eventfilter_cb = qsgtexture_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSGTexture::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsgtexture_timerevent_isbase) {
            qsgtexture_timerevent_isbase = false;
            QSGTexture::timerEvent(event);
            return;
        }
        auto timerevent_cb = qsgtexture_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QSGTexture::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsgtexture_childevent_isbase) {
            qsgtexture_childevent_isbase = false;
            QSGTexture::childEvent(event);
            return;
        }
        auto childevent_cb = qsgtexture_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QSGTexture::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsgtexture_customevent_isbase) {
            qsgtexture_customevent_isbase = false;
            QSGTexture::customEvent(event);
            return;
        }
        auto customevent_cb = qsgtexture_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QSGTexture::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsgtexture_connectnotify_isbase) {
            qsgtexture_connectnotify_isbase = false;
            QSGTexture::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qsgtexture_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QSGTexture::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsgtexture_disconnectnotify_isbase) {
            qsgtexture_disconnectnotify_isbase = false;
            QSGTexture::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qsgtexture_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QSGTexture::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qsgtexture_resolveinterface_isbase) {
            qsgtexture_resolveinterface_isbase = false;
            return QSGTexture::resolveInterface(name, revision);
        }
        auto resolveinterface_cb = qsgtexture_resolveinterface_callback;
        if (resolveinterface_cb) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;
            void* callback_ret = resolveinterface_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSGTexture::resolveInterface(name, revision);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsgtexture_sender_isbase) {
            qsgtexture_sender_isbase = false;
            return QSGTexture::sender();
        }
        auto sender_cb = qsgtexture_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QSGTexture::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsgtexture_sendersignalindex_isbase) {
            qsgtexture_sendersignalindex_isbase = false;
            return QSGTexture::senderSignalIndex();
        }
        auto sendersignalindex_cb = qsgtexture_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QSGTexture::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsgtexture_receivers_isbase) {
            qsgtexture_receivers_isbase = false;
            return QSGTexture::receivers(signal);
        }
        auto receivers_cb = qsgtexture_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSGTexture::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsgtexture_issignalconnected_isbase) {
            qsgtexture_issignalconnected_isbase = false;
            return QSGTexture::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qsgtexture_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QSGTexture::isSignalConnected(signal);
    }

    // Friend functions
    friend void QSGTexture_TimerEvent(QSGTexture* self, QTimerEvent* event);
    friend void QSGTexture_SuperTimerEvent(QSGTexture* self, QTimerEvent* event);
    friend void QSGTexture_ChildEvent(QSGTexture* self, QChildEvent* event);
    friend void QSGTexture_SuperChildEvent(QSGTexture* self, QChildEvent* event);
    friend void QSGTexture_CustomEvent(QSGTexture* self, QEvent* event);
    friend void QSGTexture_SuperCustomEvent(QSGTexture* self, QEvent* event);
    friend void QSGTexture_ConnectNotify(QSGTexture* self, const QMetaMethod* signal);
    friend void QSGTexture_SuperConnectNotify(QSGTexture* self, const QMetaMethod* signal);
    friend void QSGTexture_DisconnectNotify(QSGTexture* self, const QMetaMethod* signal);
    friend void QSGTexture_SuperDisconnectNotify(QSGTexture* self, const QMetaMethod* signal);
    friend void* QSGTexture_ResolveInterface(const QSGTexture* self, const char* name, int revision);
    friend void* QSGTexture_SuperResolveInterface(const QSGTexture* self, const char* name, int revision);
    friend QObject* QSGTexture_Sender(const QSGTexture* self);
    friend QObject* QSGTexture_SuperSender(const QSGTexture* self);
    friend int QSGTexture_SenderSignalIndex(const QSGTexture* self);
    friend int QSGTexture_SuperSenderSignalIndex(const QSGTexture* self);
    friend int QSGTexture_Receivers(const QSGTexture* self, const char* signal);
    friend int QSGTexture_SuperReceivers(const QSGTexture* self, const char* signal);
    friend bool QSGTexture_IsSignalConnected(const QSGTexture* self, const QMetaMethod* signal);
    friend bool QSGTexture_SuperIsSignalConnected(const QSGTexture* self, const QMetaMethod* signal);
};

// This class is a subclass of QSGDynamicTexture so that we can call protected methods
class VirtualQSGDynamicTexture : public QSGDynamicTexture {

  public:
    // Virtual class boolean flag
    bool isVirtualQSGDynamicTexture = true;

    // Virtual class public types (including callbacks)
    using QSGDynamicTexture_MetaObject_Callback = QMetaObject* (*)();
    using QSGDynamicTexture_Metacast_Callback = void* (*)(QSGDynamicTexture*, const char*);
    using QSGDynamicTexture_Metacall_Callback = int (*)(QSGDynamicTexture*, int, int, void**);
    using QSGDynamicTexture_UpdateTexture_Callback = bool (*)();
    using QSGDynamicTexture_ComparisonKey_Callback = long long (*)();
    using QSGDynamicTexture_TextureSize_Callback = QSize* (*)();
    using QSGDynamicTexture_HasAlphaChannel_Callback = bool (*)();
    using QSGDynamicTexture_HasMipmaps_Callback = bool (*)();
    using QSGDynamicTexture_NormalizedTextureSubRect_Callback = QRectF* (*)();
    using QSGDynamicTexture_IsAtlasTexture_Callback = bool (*)();
    using QSGDynamicTexture_Event_Callback = bool (*)(QSGDynamicTexture*, QEvent*);
    using QSGDynamicTexture_EventFilter_Callback = bool (*)(QSGDynamicTexture*, QObject*, QEvent*);
    using QSGDynamicTexture_TimerEvent_Callback = void (*)(QSGDynamicTexture*, QTimerEvent*);
    using QSGDynamicTexture_ChildEvent_Callback = void (*)(QSGDynamicTexture*, QChildEvent*);
    using QSGDynamicTexture_CustomEvent_Callback = void (*)(QSGDynamicTexture*, QEvent*);
    using QSGDynamicTexture_ConnectNotify_Callback = void (*)(QSGDynamicTexture*, QMetaMethod*);
    using QSGDynamicTexture_DisconnectNotify_Callback = void (*)(QSGDynamicTexture*, QMetaMethod*);
    using QSGDynamicTexture_ResolveInterface_Callback = void* (*)(const QSGDynamicTexture*, const char*, int);
    using QSGDynamicTexture_Sender_Callback = QObject* (*)();
    using QSGDynamicTexture_SenderSignalIndex_Callback = int (*)();
    using QSGDynamicTexture_Receivers_Callback = int (*)(const QSGDynamicTexture*, const char*);
    using QSGDynamicTexture_IsSignalConnected_Callback = bool (*)(const QSGDynamicTexture*, QMetaMethod*);

  protected:
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
    QSGDynamicTexture_ResolveInterface_Callback qsgdynamictexture_resolveinterface_callback = nullptr;
    QSGDynamicTexture_Sender_Callback qsgdynamictexture_sender_callback = nullptr;
    QSGDynamicTexture_SenderSignalIndex_Callback qsgdynamictexture_sendersignalindex_callback = nullptr;
    QSGDynamicTexture_Receivers_Callback qsgdynamictexture_receivers_callback = nullptr;
    QSGDynamicTexture_IsSignalConnected_Callback qsgdynamictexture_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsgdynamictexture_metaobject_isbase = false;
    mutable bool qsgdynamictexture_metacast_isbase = false;
    mutable bool qsgdynamictexture_metacall_isbase = false;
    mutable bool qsgdynamictexture_updatetexture_isbase = false;
    mutable bool qsgdynamictexture_comparisonkey_isbase = false;
    mutable bool qsgdynamictexture_texturesize_isbase = false;
    mutable bool qsgdynamictexture_hasalphachannel_isbase = false;
    mutable bool qsgdynamictexture_hasmipmaps_isbase = false;
    mutable bool qsgdynamictexture_normalizedtexturesubrect_isbase = false;
    mutable bool qsgdynamictexture_isatlastexture_isbase = false;
    mutable bool qsgdynamictexture_event_isbase = false;
    mutable bool qsgdynamictexture_eventfilter_isbase = false;
    mutable bool qsgdynamictexture_timerevent_isbase = false;
    mutable bool qsgdynamictexture_childevent_isbase = false;
    mutable bool qsgdynamictexture_customevent_isbase = false;
    mutable bool qsgdynamictexture_connectnotify_isbase = false;
    mutable bool qsgdynamictexture_disconnectnotify_isbase = false;
    mutable bool qsgdynamictexture_resolveinterface_isbase = false;
    mutable bool qsgdynamictexture_sender_isbase = false;
    mutable bool qsgdynamictexture_sendersignalindex_isbase = false;
    mutable bool qsgdynamictexture_receivers_isbase = false;
    mutable bool qsgdynamictexture_issignalconnected_isbase = false;

  public:
    VirtualQSGDynamicTexture() : QSGDynamicTexture() {};

    // Callback setters
    inline void setQSGDynamicTexture_MetaObject_Callback(QSGDynamicTexture_MetaObject_Callback cb) { qsgdynamictexture_metaobject_callback = cb; }
    inline void setQSGDynamicTexture_Metacast_Callback(QSGDynamicTexture_Metacast_Callback cb) { qsgdynamictexture_metacast_callback = cb; }
    inline void setQSGDynamicTexture_Metacall_Callback(QSGDynamicTexture_Metacall_Callback cb) { qsgdynamictexture_metacall_callback = cb; }
    inline void setQSGDynamicTexture_UpdateTexture_Callback(QSGDynamicTexture_UpdateTexture_Callback cb) { qsgdynamictexture_updatetexture_callback = cb; }
    inline void setQSGDynamicTexture_ComparisonKey_Callback(QSGDynamicTexture_ComparisonKey_Callback cb) { qsgdynamictexture_comparisonkey_callback = cb; }
    inline void setQSGDynamicTexture_TextureSize_Callback(QSGDynamicTexture_TextureSize_Callback cb) { qsgdynamictexture_texturesize_callback = cb; }
    inline void setQSGDynamicTexture_HasAlphaChannel_Callback(QSGDynamicTexture_HasAlphaChannel_Callback cb) { qsgdynamictexture_hasalphachannel_callback = cb; }
    inline void setQSGDynamicTexture_HasMipmaps_Callback(QSGDynamicTexture_HasMipmaps_Callback cb) { qsgdynamictexture_hasmipmaps_callback = cb; }
    inline void setQSGDynamicTexture_NormalizedTextureSubRect_Callback(QSGDynamicTexture_NormalizedTextureSubRect_Callback cb) { qsgdynamictexture_normalizedtexturesubrect_callback = cb; }
    inline void setQSGDynamicTexture_IsAtlasTexture_Callback(QSGDynamicTexture_IsAtlasTexture_Callback cb) { qsgdynamictexture_isatlastexture_callback = cb; }
    inline void setQSGDynamicTexture_Event_Callback(QSGDynamicTexture_Event_Callback cb) { qsgdynamictexture_event_callback = cb; }
    inline void setQSGDynamicTexture_EventFilter_Callback(QSGDynamicTexture_EventFilter_Callback cb) { qsgdynamictexture_eventfilter_callback = cb; }
    inline void setQSGDynamicTexture_TimerEvent_Callback(QSGDynamicTexture_TimerEvent_Callback cb) { qsgdynamictexture_timerevent_callback = cb; }
    inline void setQSGDynamicTexture_ChildEvent_Callback(QSGDynamicTexture_ChildEvent_Callback cb) { qsgdynamictexture_childevent_callback = cb; }
    inline void setQSGDynamicTexture_CustomEvent_Callback(QSGDynamicTexture_CustomEvent_Callback cb) { qsgdynamictexture_customevent_callback = cb; }
    inline void setQSGDynamicTexture_ConnectNotify_Callback(QSGDynamicTexture_ConnectNotify_Callback cb) { qsgdynamictexture_connectnotify_callback = cb; }
    inline void setQSGDynamicTexture_DisconnectNotify_Callback(QSGDynamicTexture_DisconnectNotify_Callback cb) { qsgdynamictexture_disconnectnotify_callback = cb; }
    inline void setQSGDynamicTexture_ResolveInterface_Callback(QSGDynamicTexture_ResolveInterface_Callback cb) { qsgdynamictexture_resolveinterface_callback = cb; }
    inline void setQSGDynamicTexture_Sender_Callback(QSGDynamicTexture_Sender_Callback cb) { qsgdynamictexture_sender_callback = cb; }
    inline void setQSGDynamicTexture_SenderSignalIndex_Callback(QSGDynamicTexture_SenderSignalIndex_Callback cb) { qsgdynamictexture_sendersignalindex_callback = cb; }
    inline void setQSGDynamicTexture_Receivers_Callback(QSGDynamicTexture_Receivers_Callback cb) { qsgdynamictexture_receivers_callback = cb; }
    inline void setQSGDynamicTexture_IsSignalConnected_Callback(QSGDynamicTexture_IsSignalConnected_Callback cb) { qsgdynamictexture_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSGDynamicTexture_MetaObject_IsBase(bool value) const { qsgdynamictexture_metaobject_isbase = value; }
    inline void setQSGDynamicTexture_Metacast_IsBase(bool value) const { qsgdynamictexture_metacast_isbase = value; }
    inline void setQSGDynamicTexture_Metacall_IsBase(bool value) const { qsgdynamictexture_metacall_isbase = value; }
    inline void setQSGDynamicTexture_UpdateTexture_IsBase(bool value) const { qsgdynamictexture_updatetexture_isbase = value; }
    inline void setQSGDynamicTexture_ComparisonKey_IsBase(bool value) const { qsgdynamictexture_comparisonkey_isbase = value; }
    inline void setQSGDynamicTexture_TextureSize_IsBase(bool value) const { qsgdynamictexture_texturesize_isbase = value; }
    inline void setQSGDynamicTexture_HasAlphaChannel_IsBase(bool value) const { qsgdynamictexture_hasalphachannel_isbase = value; }
    inline void setQSGDynamicTexture_HasMipmaps_IsBase(bool value) const { qsgdynamictexture_hasmipmaps_isbase = value; }
    inline void setQSGDynamicTexture_NormalizedTextureSubRect_IsBase(bool value) const { qsgdynamictexture_normalizedtexturesubrect_isbase = value; }
    inline void setQSGDynamicTexture_IsAtlasTexture_IsBase(bool value) const { qsgdynamictexture_isatlastexture_isbase = value; }
    inline void setQSGDynamicTexture_Event_IsBase(bool value) const { qsgdynamictexture_event_isbase = value; }
    inline void setQSGDynamicTexture_EventFilter_IsBase(bool value) const { qsgdynamictexture_eventfilter_isbase = value; }
    inline void setQSGDynamicTexture_TimerEvent_IsBase(bool value) const { qsgdynamictexture_timerevent_isbase = value; }
    inline void setQSGDynamicTexture_ChildEvent_IsBase(bool value) const { qsgdynamictexture_childevent_isbase = value; }
    inline void setQSGDynamicTexture_CustomEvent_IsBase(bool value) const { qsgdynamictexture_customevent_isbase = value; }
    inline void setQSGDynamicTexture_ConnectNotify_IsBase(bool value) const { qsgdynamictexture_connectnotify_isbase = value; }
    inline void setQSGDynamicTexture_DisconnectNotify_IsBase(bool value) const { qsgdynamictexture_disconnectnotify_isbase = value; }
    inline void setQSGDynamicTexture_ResolveInterface_IsBase(bool value) const { qsgdynamictexture_resolveinterface_isbase = value; }
    inline void setQSGDynamicTexture_Sender_IsBase(bool value) const { qsgdynamictexture_sender_isbase = value; }
    inline void setQSGDynamicTexture_SenderSignalIndex_IsBase(bool value) const { qsgdynamictexture_sendersignalindex_isbase = value; }
    inline void setQSGDynamicTexture_Receivers_IsBase(bool value) const { qsgdynamictexture_receivers_isbase = value; }
    inline void setQSGDynamicTexture_IsSignalConnected_IsBase(bool value) const { qsgdynamictexture_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsgdynamictexture_metaobject_isbase) {
            qsgdynamictexture_metaobject_isbase = false;
            return QSGDynamicTexture::metaObject();
        }
        auto metaobject_cb = qsgdynamictexture_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QSGDynamicTexture::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsgdynamictexture_metacast_isbase) {
            qsgdynamictexture_metacast_isbase = false;
            return QSGDynamicTexture::qt_metacast(param1);
        }
        auto metacast_cb = qsgdynamictexture_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QSGDynamicTexture::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsgdynamictexture_metacall_isbase) {
            qsgdynamictexture_metacall_isbase = false;
            return QSGDynamicTexture::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qsgdynamictexture_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSGDynamicTexture::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool updateTexture() override {
        auto updatetexture_cb = qsgdynamictexture_updatetexture_callback;
        if (updatetexture_cb) {
            bool callback_ret = updatetexture_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 comparisonKey() const override {
        auto comparisonkey_cb = qsgdynamictexture_comparisonkey_callback;
        if (comparisonkey_cb) {
            long long callback_ret = comparisonkey_cb();
            return static_cast<qint64>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize textureSize() const override {
        auto texturesize_cb = qsgdynamictexture_texturesize_callback;
        if (texturesize_cb) {
            QSize* callback_ret = texturesize_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasAlphaChannel() const override {
        auto hasalphachannel_cb = qsgdynamictexture_hasalphachannel_callback;
        if (hasalphachannel_cb) {
            bool callback_ret = hasalphachannel_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasMipmaps() const override {
        auto hasmipmaps_cb = qsgdynamictexture_hasmipmaps_callback;
        if (hasmipmaps_cb) {
            bool callback_ret = hasmipmaps_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF normalizedTextureSubRect() const override {
        if (qsgdynamictexture_normalizedtexturesubrect_isbase) {
            qsgdynamictexture_normalizedtexturesubrect_isbase = false;
            return QSGDynamicTexture::normalizedTextureSubRect();
        }
        auto normalizedtexturesubrect_cb = qsgdynamictexture_normalizedtexturesubrect_callback;
        if (normalizedtexturesubrect_cb) {
            QRectF* callback_ret = normalizedtexturesubrect_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSGDynamicTexture::normalizedTextureSubRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isAtlasTexture() const override {
        if (qsgdynamictexture_isatlastexture_isbase) {
            qsgdynamictexture_isatlastexture_isbase = false;
            return QSGDynamicTexture::isAtlasTexture();
        }
        auto isatlastexture_cb = qsgdynamictexture_isatlastexture_callback;
        if (isatlastexture_cb) {
            bool callback_ret = isatlastexture_cb();
            return callback_ret;
        }
        return QSGDynamicTexture::isAtlasTexture();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsgdynamictexture_event_isbase) {
            qsgdynamictexture_event_isbase = false;
            return QSGDynamicTexture::event(event);
        }
        auto event_cb = qsgdynamictexture_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QSGDynamicTexture::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsgdynamictexture_eventfilter_isbase) {
            qsgdynamictexture_eventfilter_isbase = false;
            return QSGDynamicTexture::eventFilter(watched, event);
        }
        auto eventfilter_cb = qsgdynamictexture_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSGDynamicTexture::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsgdynamictexture_timerevent_isbase) {
            qsgdynamictexture_timerevent_isbase = false;
            QSGDynamicTexture::timerEvent(event);
            return;
        }
        auto timerevent_cb = qsgdynamictexture_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QSGDynamicTexture::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsgdynamictexture_childevent_isbase) {
            qsgdynamictexture_childevent_isbase = false;
            QSGDynamicTexture::childEvent(event);
            return;
        }
        auto childevent_cb = qsgdynamictexture_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QSGDynamicTexture::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsgdynamictexture_customevent_isbase) {
            qsgdynamictexture_customevent_isbase = false;
            QSGDynamicTexture::customEvent(event);
            return;
        }
        auto customevent_cb = qsgdynamictexture_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QSGDynamicTexture::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsgdynamictexture_connectnotify_isbase) {
            qsgdynamictexture_connectnotify_isbase = false;
            QSGDynamicTexture::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qsgdynamictexture_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QSGDynamicTexture::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsgdynamictexture_disconnectnotify_isbase) {
            qsgdynamictexture_disconnectnotify_isbase = false;
            QSGDynamicTexture::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qsgdynamictexture_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QSGDynamicTexture::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qsgdynamictexture_resolveinterface_isbase) {
            qsgdynamictexture_resolveinterface_isbase = false;
            return QSGDynamicTexture::resolveInterface(name, revision);
        }
        auto resolveinterface_cb = qsgdynamictexture_resolveinterface_callback;
        if (resolveinterface_cb) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;
            void* callback_ret = resolveinterface_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSGDynamicTexture::resolveInterface(name, revision);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsgdynamictexture_sender_isbase) {
            qsgdynamictexture_sender_isbase = false;
            return QSGDynamicTexture::sender();
        }
        auto sender_cb = qsgdynamictexture_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QSGDynamicTexture::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsgdynamictexture_sendersignalindex_isbase) {
            qsgdynamictexture_sendersignalindex_isbase = false;
            return QSGDynamicTexture::senderSignalIndex();
        }
        auto sendersignalindex_cb = qsgdynamictexture_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QSGDynamicTexture::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsgdynamictexture_receivers_isbase) {
            qsgdynamictexture_receivers_isbase = false;
            return QSGDynamicTexture::receivers(signal);
        }
        auto receivers_cb = qsgdynamictexture_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSGDynamicTexture::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsgdynamictexture_issignalconnected_isbase) {
            qsgdynamictexture_issignalconnected_isbase = false;
            return QSGDynamicTexture::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qsgdynamictexture_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QSGDynamicTexture::isSignalConnected(signal);
    }

    // Friend functions
    friend void QSGDynamicTexture_TimerEvent(QSGDynamicTexture* self, QTimerEvent* event);
    friend void QSGDynamicTexture_SuperTimerEvent(QSGDynamicTexture* self, QTimerEvent* event);
    friend void QSGDynamicTexture_ChildEvent(QSGDynamicTexture* self, QChildEvent* event);
    friend void QSGDynamicTexture_SuperChildEvent(QSGDynamicTexture* self, QChildEvent* event);
    friend void QSGDynamicTexture_CustomEvent(QSGDynamicTexture* self, QEvent* event);
    friend void QSGDynamicTexture_SuperCustomEvent(QSGDynamicTexture* self, QEvent* event);
    friend void QSGDynamicTexture_ConnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal);
    friend void QSGDynamicTexture_SuperConnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal);
    friend void QSGDynamicTexture_DisconnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal);
    friend void QSGDynamicTexture_SuperDisconnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal);
    friend void* QSGDynamicTexture_ResolveInterface(const QSGDynamicTexture* self, const char* name, int revision);
    friend void* QSGDynamicTexture_SuperResolveInterface(const QSGDynamicTexture* self, const char* name, int revision);
    friend QObject* QSGDynamicTexture_Sender(const QSGDynamicTexture* self);
    friend QObject* QSGDynamicTexture_SuperSender(const QSGDynamicTexture* self);
    friend int QSGDynamicTexture_SenderSignalIndex(const QSGDynamicTexture* self);
    friend int QSGDynamicTexture_SuperSenderSignalIndex(const QSGDynamicTexture* self);
    friend int QSGDynamicTexture_Receivers(const QSGDynamicTexture* self, const char* signal);
    friend int QSGDynamicTexture_SuperReceivers(const QSGDynamicTexture* self, const char* signal);
    friend bool QSGDynamicTexture_IsSignalConnected(const QSGDynamicTexture* self, const QMetaMethod* signal);
    friend bool QSGDynamicTexture_SuperIsSignalConnected(const QSGDynamicTexture* self, const QMetaMethod* signal);
};

#endif
