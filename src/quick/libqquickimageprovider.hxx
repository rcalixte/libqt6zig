#pragma once
#ifndef QUICK_LIBQQUICKIMAGEPROVIDER_HXX
#define QUICK_LIBQQUICKIMAGEPROVIDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickTextureFactory so that we can call protected methods
class VirtualQQuickTextureFactory : public QQuickTextureFactory {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickTextureFactory = true;

    // Virtual class public types (including callbacks)
    using QQuickTextureFactory_MetaObject_Callback = QMetaObject* (*)();
    using QQuickTextureFactory_Metacast_Callback = void* (*)(QQuickTextureFactory*, const char*);
    using QQuickTextureFactory_Metacall_Callback = int (*)(QQuickTextureFactory*, int, int, void**);
    using QQuickTextureFactory_CreateTexture_Callback = QSGTexture* (*)(const QQuickTextureFactory*, QQuickWindow*);
    using QQuickTextureFactory_TextureSize_Callback = QSize* (*)();
    using QQuickTextureFactory_TextureByteCount_Callback = int (*)();
    using QQuickTextureFactory_Image_Callback = QImage* (*)();
    using QQuickTextureFactory_Event_Callback = bool (*)(QQuickTextureFactory*, QEvent*);
    using QQuickTextureFactory_EventFilter_Callback = bool (*)(QQuickTextureFactory*, QObject*, QEvent*);
    using QQuickTextureFactory_TimerEvent_Callback = void (*)(QQuickTextureFactory*, QTimerEvent*);
    using QQuickTextureFactory_ChildEvent_Callback = void (*)(QQuickTextureFactory*, QChildEvent*);
    using QQuickTextureFactory_CustomEvent_Callback = void (*)(QQuickTextureFactory*, QEvent*);
    using QQuickTextureFactory_ConnectNotify_Callback = void (*)(QQuickTextureFactory*, QMetaMethod*);
    using QQuickTextureFactory_DisconnectNotify_Callback = void (*)(QQuickTextureFactory*, QMetaMethod*);
    using QQuickTextureFactory_Sender_Callback = QObject* (*)();
    using QQuickTextureFactory_SenderSignalIndex_Callback = int (*)();
    using QQuickTextureFactory_Receivers_Callback = int (*)(const QQuickTextureFactory*, const char*);
    using QQuickTextureFactory_IsSignalConnected_Callback = bool (*)(const QQuickTextureFactory*, QMetaMethod*);

  protected:
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
    QQuickTextureFactory_Sender_Callback qquicktexturefactory_sender_callback = nullptr;
    QQuickTextureFactory_SenderSignalIndex_Callback qquicktexturefactory_sendersignalindex_callback = nullptr;
    QQuickTextureFactory_Receivers_Callback qquicktexturefactory_receivers_callback = nullptr;
    QQuickTextureFactory_IsSignalConnected_Callback qquicktexturefactory_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquicktexturefactory_metaobject_isbase = false;
    mutable bool qquicktexturefactory_metacast_isbase = false;
    mutable bool qquicktexturefactory_metacall_isbase = false;
    mutable bool qquicktexturefactory_createtexture_isbase = false;
    mutable bool qquicktexturefactory_texturesize_isbase = false;
    mutable bool qquicktexturefactory_texturebytecount_isbase = false;
    mutable bool qquicktexturefactory_image_isbase = false;
    mutable bool qquicktexturefactory_event_isbase = false;
    mutable bool qquicktexturefactory_eventfilter_isbase = false;
    mutable bool qquicktexturefactory_timerevent_isbase = false;
    mutable bool qquicktexturefactory_childevent_isbase = false;
    mutable bool qquicktexturefactory_customevent_isbase = false;
    mutable bool qquicktexturefactory_connectnotify_isbase = false;
    mutable bool qquicktexturefactory_disconnectnotify_isbase = false;
    mutable bool qquicktexturefactory_sender_isbase = false;
    mutable bool qquicktexturefactory_sendersignalindex_isbase = false;
    mutable bool qquicktexturefactory_receivers_isbase = false;
    mutable bool qquicktexturefactory_issignalconnected_isbase = false;

  public:
    VirtualQQuickTextureFactory() : QQuickTextureFactory() {};

    // Callback setters
    inline void setQQuickTextureFactory_MetaObject_Callback(QQuickTextureFactory_MetaObject_Callback cb) { qquicktexturefactory_metaobject_callback = cb; }
    inline void setQQuickTextureFactory_Metacast_Callback(QQuickTextureFactory_Metacast_Callback cb) { qquicktexturefactory_metacast_callback = cb; }
    inline void setQQuickTextureFactory_Metacall_Callback(QQuickTextureFactory_Metacall_Callback cb) { qquicktexturefactory_metacall_callback = cb; }
    inline void setQQuickTextureFactory_CreateTexture_Callback(QQuickTextureFactory_CreateTexture_Callback cb) { qquicktexturefactory_createtexture_callback = cb; }
    inline void setQQuickTextureFactory_TextureSize_Callback(QQuickTextureFactory_TextureSize_Callback cb) { qquicktexturefactory_texturesize_callback = cb; }
    inline void setQQuickTextureFactory_TextureByteCount_Callback(QQuickTextureFactory_TextureByteCount_Callback cb) { qquicktexturefactory_texturebytecount_callback = cb; }
    inline void setQQuickTextureFactory_Image_Callback(QQuickTextureFactory_Image_Callback cb) { qquicktexturefactory_image_callback = cb; }
    inline void setQQuickTextureFactory_Event_Callback(QQuickTextureFactory_Event_Callback cb) { qquicktexturefactory_event_callback = cb; }
    inline void setQQuickTextureFactory_EventFilter_Callback(QQuickTextureFactory_EventFilter_Callback cb) { qquicktexturefactory_eventfilter_callback = cb; }
    inline void setQQuickTextureFactory_TimerEvent_Callback(QQuickTextureFactory_TimerEvent_Callback cb) { qquicktexturefactory_timerevent_callback = cb; }
    inline void setQQuickTextureFactory_ChildEvent_Callback(QQuickTextureFactory_ChildEvent_Callback cb) { qquicktexturefactory_childevent_callback = cb; }
    inline void setQQuickTextureFactory_CustomEvent_Callback(QQuickTextureFactory_CustomEvent_Callback cb) { qquicktexturefactory_customevent_callback = cb; }
    inline void setQQuickTextureFactory_ConnectNotify_Callback(QQuickTextureFactory_ConnectNotify_Callback cb) { qquicktexturefactory_connectnotify_callback = cb; }
    inline void setQQuickTextureFactory_DisconnectNotify_Callback(QQuickTextureFactory_DisconnectNotify_Callback cb) { qquicktexturefactory_disconnectnotify_callback = cb; }
    inline void setQQuickTextureFactory_Sender_Callback(QQuickTextureFactory_Sender_Callback cb) { qquicktexturefactory_sender_callback = cb; }
    inline void setQQuickTextureFactory_SenderSignalIndex_Callback(QQuickTextureFactory_SenderSignalIndex_Callback cb) { qquicktexturefactory_sendersignalindex_callback = cb; }
    inline void setQQuickTextureFactory_Receivers_Callback(QQuickTextureFactory_Receivers_Callback cb) { qquicktexturefactory_receivers_callback = cb; }
    inline void setQQuickTextureFactory_IsSignalConnected_Callback(QQuickTextureFactory_IsSignalConnected_Callback cb) { qquicktexturefactory_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickTextureFactory_MetaObject_IsBase(bool value) const { qquicktexturefactory_metaobject_isbase = value; }
    inline void setQQuickTextureFactory_Metacast_IsBase(bool value) const { qquicktexturefactory_metacast_isbase = value; }
    inline void setQQuickTextureFactory_Metacall_IsBase(bool value) const { qquicktexturefactory_metacall_isbase = value; }
    inline void setQQuickTextureFactory_CreateTexture_IsBase(bool value) const { qquicktexturefactory_createtexture_isbase = value; }
    inline void setQQuickTextureFactory_TextureSize_IsBase(bool value) const { qquicktexturefactory_texturesize_isbase = value; }
    inline void setQQuickTextureFactory_TextureByteCount_IsBase(bool value) const { qquicktexturefactory_texturebytecount_isbase = value; }
    inline void setQQuickTextureFactory_Image_IsBase(bool value) const { qquicktexturefactory_image_isbase = value; }
    inline void setQQuickTextureFactory_Event_IsBase(bool value) const { qquicktexturefactory_event_isbase = value; }
    inline void setQQuickTextureFactory_EventFilter_IsBase(bool value) const { qquicktexturefactory_eventfilter_isbase = value; }
    inline void setQQuickTextureFactory_TimerEvent_IsBase(bool value) const { qquicktexturefactory_timerevent_isbase = value; }
    inline void setQQuickTextureFactory_ChildEvent_IsBase(bool value) const { qquicktexturefactory_childevent_isbase = value; }
    inline void setQQuickTextureFactory_CustomEvent_IsBase(bool value) const { qquicktexturefactory_customevent_isbase = value; }
    inline void setQQuickTextureFactory_ConnectNotify_IsBase(bool value) const { qquicktexturefactory_connectnotify_isbase = value; }
    inline void setQQuickTextureFactory_DisconnectNotify_IsBase(bool value) const { qquicktexturefactory_disconnectnotify_isbase = value; }
    inline void setQQuickTextureFactory_Sender_IsBase(bool value) const { qquicktexturefactory_sender_isbase = value; }
    inline void setQQuickTextureFactory_SenderSignalIndex_IsBase(bool value) const { qquicktexturefactory_sendersignalindex_isbase = value; }
    inline void setQQuickTextureFactory_Receivers_IsBase(bool value) const { qquicktexturefactory_receivers_isbase = value; }
    inline void setQQuickTextureFactory_IsSignalConnected_IsBase(bool value) const { qquicktexturefactory_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquicktexturefactory_metaobject_isbase) {
            qquicktexturefactory_metaobject_isbase = false;
            return QQuickTextureFactory::metaObject();
        }
        auto metaobject_cb = qquicktexturefactory_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickTextureFactory::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquicktexturefactory_metacast_isbase) {
            qquicktexturefactory_metacast_isbase = false;
            return QQuickTextureFactory::qt_metacast(param1);
        }
        auto metacast_cb = qquicktexturefactory_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickTextureFactory::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquicktexturefactory_metacall_isbase) {
            qquicktexturefactory_metacall_isbase = false;
            return QQuickTextureFactory::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquicktexturefactory_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickTextureFactory::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGTexture* createTexture(QQuickWindow* window) const override {
        auto createtexture_cb = qquicktexturefactory_createtexture_callback;
        if (createtexture_cb) {
            QQuickWindow* cbval1 = window;
            QSGTexture* callback_ret = createtexture_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize textureSize() const override {
        auto texturesize_cb = qquicktexturefactory_texturesize_callback;
        if (texturesize_cb) {
            QSize* callback_ret = texturesize_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int textureByteCount() const override {
        auto texturebytecount_cb = qquicktexturefactory_texturebytecount_callback;
        if (texturebytecount_cb) {
            int callback_ret = texturebytecount_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QImage image() const override {
        if (qquicktexturefactory_image_isbase) {
            qquicktexturefactory_image_isbase = false;
            return QQuickTextureFactory::image();
        }
        auto image_cb = qquicktexturefactory_image_callback;
        if (image_cb) {
            QImage* callback_ret = image_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickTextureFactory::image();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquicktexturefactory_event_isbase) {
            qquicktexturefactory_event_isbase = false;
            return QQuickTextureFactory::event(event);
        }
        auto event_cb = qquicktexturefactory_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickTextureFactory::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquicktexturefactory_eventfilter_isbase) {
            qquicktexturefactory_eventfilter_isbase = false;
            return QQuickTextureFactory::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquicktexturefactory_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickTextureFactory::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquicktexturefactory_timerevent_isbase) {
            qquicktexturefactory_timerevent_isbase = false;
            QQuickTextureFactory::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquicktexturefactory_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickTextureFactory::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquicktexturefactory_childevent_isbase) {
            qquicktexturefactory_childevent_isbase = false;
            QQuickTextureFactory::childEvent(event);
            return;
        }
        auto childevent_cb = qquicktexturefactory_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickTextureFactory::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquicktexturefactory_customevent_isbase) {
            qquicktexturefactory_customevent_isbase = false;
            QQuickTextureFactory::customEvent(event);
            return;
        }
        auto customevent_cb = qquicktexturefactory_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickTextureFactory::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquicktexturefactory_connectnotify_isbase) {
            qquicktexturefactory_connectnotify_isbase = false;
            QQuickTextureFactory::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquicktexturefactory_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickTextureFactory::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquicktexturefactory_disconnectnotify_isbase) {
            qquicktexturefactory_disconnectnotify_isbase = false;
            QQuickTextureFactory::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquicktexturefactory_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickTextureFactory::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquicktexturefactory_sender_isbase) {
            qquicktexturefactory_sender_isbase = false;
            return QQuickTextureFactory::sender();
        }
        auto sender_cb = qquicktexturefactory_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickTextureFactory::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquicktexturefactory_sendersignalindex_isbase) {
            qquicktexturefactory_sendersignalindex_isbase = false;
            return QQuickTextureFactory::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquicktexturefactory_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickTextureFactory::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquicktexturefactory_receivers_isbase) {
            qquicktexturefactory_receivers_isbase = false;
            return QQuickTextureFactory::receivers(signal);
        }
        auto receivers_cb = qquicktexturefactory_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickTextureFactory::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquicktexturefactory_issignalconnected_isbase) {
            qquicktexturefactory_issignalconnected_isbase = false;
            return QQuickTextureFactory::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquicktexturefactory_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickTextureFactory::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQuickTextureFactory_TimerEvent(QQuickTextureFactory* self, QTimerEvent* event);
    friend void QQuickTextureFactory_SuperTimerEvent(QQuickTextureFactory* self, QTimerEvent* event);
    friend void QQuickTextureFactory_ChildEvent(QQuickTextureFactory* self, QChildEvent* event);
    friend void QQuickTextureFactory_SuperChildEvent(QQuickTextureFactory* self, QChildEvent* event);
    friend void QQuickTextureFactory_CustomEvent(QQuickTextureFactory* self, QEvent* event);
    friend void QQuickTextureFactory_SuperCustomEvent(QQuickTextureFactory* self, QEvent* event);
    friend void QQuickTextureFactory_ConnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal);
    friend void QQuickTextureFactory_SuperConnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal);
    friend void QQuickTextureFactory_DisconnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal);
    friend void QQuickTextureFactory_SuperDisconnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal);
    friend QObject* QQuickTextureFactory_Sender(const QQuickTextureFactory* self);
    friend QObject* QQuickTextureFactory_SuperSender(const QQuickTextureFactory* self);
    friend int QQuickTextureFactory_SenderSignalIndex(const QQuickTextureFactory* self);
    friend int QQuickTextureFactory_SuperSenderSignalIndex(const QQuickTextureFactory* self);
    friend int QQuickTextureFactory_Receivers(const QQuickTextureFactory* self, const char* signal);
    friend int QQuickTextureFactory_SuperReceivers(const QQuickTextureFactory* self, const char* signal);
    friend bool QQuickTextureFactory_IsSignalConnected(const QQuickTextureFactory* self, const QMetaMethod* signal);
    friend bool QQuickTextureFactory_SuperIsSignalConnected(const QQuickTextureFactory* self, const QMetaMethod* signal);
};

// This class is a subclass of QQuickImageResponse so that we can call protected methods
class VirtualQQuickImageResponse : public QQuickImageResponse {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickImageResponse = true;

    // Virtual class public types (including callbacks)
    using QQuickImageResponse_MetaObject_Callback = QMetaObject* (*)();
    using QQuickImageResponse_Metacast_Callback = void* (*)(QQuickImageResponse*, const char*);
    using QQuickImageResponse_Metacall_Callback = int (*)(QQuickImageResponse*, int, int, void**);
    using QQuickImageResponse_TextureFactory_Callback = QQuickTextureFactory* (*)();
    using QQuickImageResponse_ErrorString_Callback = const char* (*)();
    using QQuickImageResponse_Cancel_Callback = void (*)();
    using QQuickImageResponse_Event_Callback = bool (*)(QQuickImageResponse*, QEvent*);
    using QQuickImageResponse_EventFilter_Callback = bool (*)(QQuickImageResponse*, QObject*, QEvent*);
    using QQuickImageResponse_TimerEvent_Callback = void (*)(QQuickImageResponse*, QTimerEvent*);
    using QQuickImageResponse_ChildEvent_Callback = void (*)(QQuickImageResponse*, QChildEvent*);
    using QQuickImageResponse_CustomEvent_Callback = void (*)(QQuickImageResponse*, QEvent*);
    using QQuickImageResponse_ConnectNotify_Callback = void (*)(QQuickImageResponse*, QMetaMethod*);
    using QQuickImageResponse_DisconnectNotify_Callback = void (*)(QQuickImageResponse*, QMetaMethod*);
    using QQuickImageResponse_Sender_Callback = QObject* (*)();
    using QQuickImageResponse_SenderSignalIndex_Callback = int (*)();
    using QQuickImageResponse_Receivers_Callback = int (*)(const QQuickImageResponse*, const char*);
    using QQuickImageResponse_IsSignalConnected_Callback = bool (*)(const QQuickImageResponse*, QMetaMethod*);

  protected:
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
    QQuickImageResponse_Sender_Callback qquickimageresponse_sender_callback = nullptr;
    QQuickImageResponse_SenderSignalIndex_Callback qquickimageresponse_sendersignalindex_callback = nullptr;
    QQuickImageResponse_Receivers_Callback qquickimageresponse_receivers_callback = nullptr;
    QQuickImageResponse_IsSignalConnected_Callback qquickimageresponse_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquickimageresponse_metaobject_isbase = false;
    mutable bool qquickimageresponse_metacast_isbase = false;
    mutable bool qquickimageresponse_metacall_isbase = false;
    mutable bool qquickimageresponse_texturefactory_isbase = false;
    mutable bool qquickimageresponse_errorstring_isbase = false;
    mutable bool qquickimageresponse_cancel_isbase = false;
    mutable bool qquickimageresponse_event_isbase = false;
    mutable bool qquickimageresponse_eventfilter_isbase = false;
    mutable bool qquickimageresponse_timerevent_isbase = false;
    mutable bool qquickimageresponse_childevent_isbase = false;
    mutable bool qquickimageresponse_customevent_isbase = false;
    mutable bool qquickimageresponse_connectnotify_isbase = false;
    mutable bool qquickimageresponse_disconnectnotify_isbase = false;
    mutable bool qquickimageresponse_sender_isbase = false;
    mutable bool qquickimageresponse_sendersignalindex_isbase = false;
    mutable bool qquickimageresponse_receivers_isbase = false;
    mutable bool qquickimageresponse_issignalconnected_isbase = false;

  public:
    VirtualQQuickImageResponse() : QQuickImageResponse() {};

    // Callback setters
    inline void setQQuickImageResponse_MetaObject_Callback(QQuickImageResponse_MetaObject_Callback cb) { qquickimageresponse_metaobject_callback = cb; }
    inline void setQQuickImageResponse_Metacast_Callback(QQuickImageResponse_Metacast_Callback cb) { qquickimageresponse_metacast_callback = cb; }
    inline void setQQuickImageResponse_Metacall_Callback(QQuickImageResponse_Metacall_Callback cb) { qquickimageresponse_metacall_callback = cb; }
    inline void setQQuickImageResponse_TextureFactory_Callback(QQuickImageResponse_TextureFactory_Callback cb) { qquickimageresponse_texturefactory_callback = cb; }
    inline void setQQuickImageResponse_ErrorString_Callback(QQuickImageResponse_ErrorString_Callback cb) { qquickimageresponse_errorstring_callback = cb; }
    inline void setQQuickImageResponse_Cancel_Callback(QQuickImageResponse_Cancel_Callback cb) { qquickimageresponse_cancel_callback = cb; }
    inline void setQQuickImageResponse_Event_Callback(QQuickImageResponse_Event_Callback cb) { qquickimageresponse_event_callback = cb; }
    inline void setQQuickImageResponse_EventFilter_Callback(QQuickImageResponse_EventFilter_Callback cb) { qquickimageresponse_eventfilter_callback = cb; }
    inline void setQQuickImageResponse_TimerEvent_Callback(QQuickImageResponse_TimerEvent_Callback cb) { qquickimageresponse_timerevent_callback = cb; }
    inline void setQQuickImageResponse_ChildEvent_Callback(QQuickImageResponse_ChildEvent_Callback cb) { qquickimageresponse_childevent_callback = cb; }
    inline void setQQuickImageResponse_CustomEvent_Callback(QQuickImageResponse_CustomEvent_Callback cb) { qquickimageresponse_customevent_callback = cb; }
    inline void setQQuickImageResponse_ConnectNotify_Callback(QQuickImageResponse_ConnectNotify_Callback cb) { qquickimageresponse_connectnotify_callback = cb; }
    inline void setQQuickImageResponse_DisconnectNotify_Callback(QQuickImageResponse_DisconnectNotify_Callback cb) { qquickimageresponse_disconnectnotify_callback = cb; }
    inline void setQQuickImageResponse_Sender_Callback(QQuickImageResponse_Sender_Callback cb) { qquickimageresponse_sender_callback = cb; }
    inline void setQQuickImageResponse_SenderSignalIndex_Callback(QQuickImageResponse_SenderSignalIndex_Callback cb) { qquickimageresponse_sendersignalindex_callback = cb; }
    inline void setQQuickImageResponse_Receivers_Callback(QQuickImageResponse_Receivers_Callback cb) { qquickimageresponse_receivers_callback = cb; }
    inline void setQQuickImageResponse_IsSignalConnected_Callback(QQuickImageResponse_IsSignalConnected_Callback cb) { qquickimageresponse_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickImageResponse_MetaObject_IsBase(bool value) const { qquickimageresponse_metaobject_isbase = value; }
    inline void setQQuickImageResponse_Metacast_IsBase(bool value) const { qquickimageresponse_metacast_isbase = value; }
    inline void setQQuickImageResponse_Metacall_IsBase(bool value) const { qquickimageresponse_metacall_isbase = value; }
    inline void setQQuickImageResponse_TextureFactory_IsBase(bool value) const { qquickimageresponse_texturefactory_isbase = value; }
    inline void setQQuickImageResponse_ErrorString_IsBase(bool value) const { qquickimageresponse_errorstring_isbase = value; }
    inline void setQQuickImageResponse_Cancel_IsBase(bool value) const { qquickimageresponse_cancel_isbase = value; }
    inline void setQQuickImageResponse_Event_IsBase(bool value) const { qquickimageresponse_event_isbase = value; }
    inline void setQQuickImageResponse_EventFilter_IsBase(bool value) const { qquickimageresponse_eventfilter_isbase = value; }
    inline void setQQuickImageResponse_TimerEvent_IsBase(bool value) const { qquickimageresponse_timerevent_isbase = value; }
    inline void setQQuickImageResponse_ChildEvent_IsBase(bool value) const { qquickimageresponse_childevent_isbase = value; }
    inline void setQQuickImageResponse_CustomEvent_IsBase(bool value) const { qquickimageresponse_customevent_isbase = value; }
    inline void setQQuickImageResponse_ConnectNotify_IsBase(bool value) const { qquickimageresponse_connectnotify_isbase = value; }
    inline void setQQuickImageResponse_DisconnectNotify_IsBase(bool value) const { qquickimageresponse_disconnectnotify_isbase = value; }
    inline void setQQuickImageResponse_Sender_IsBase(bool value) const { qquickimageresponse_sender_isbase = value; }
    inline void setQQuickImageResponse_SenderSignalIndex_IsBase(bool value) const { qquickimageresponse_sendersignalindex_isbase = value; }
    inline void setQQuickImageResponse_Receivers_IsBase(bool value) const { qquickimageresponse_receivers_isbase = value; }
    inline void setQQuickImageResponse_IsSignalConnected_IsBase(bool value) const { qquickimageresponse_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickimageresponse_metaobject_isbase) {
            qquickimageresponse_metaobject_isbase = false;
            return QQuickImageResponse::metaObject();
        }
        auto metaobject_cb = qquickimageresponse_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickImageResponse::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickimageresponse_metacast_isbase) {
            qquickimageresponse_metacast_isbase = false;
            return QQuickImageResponse::qt_metacast(param1);
        }
        auto metacast_cb = qquickimageresponse_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickImageResponse::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickimageresponse_metacall_isbase) {
            qquickimageresponse_metacall_isbase = false;
            return QQuickImageResponse::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquickimageresponse_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickImageResponse::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQuickTextureFactory* textureFactory() const override {
        auto texturefactory_cb = qquickimageresponse_texturefactory_callback;
        if (texturefactory_cb) {
            QQuickTextureFactory* callback_ret = texturefactory_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (qquickimageresponse_errorstring_isbase) {
            qquickimageresponse_errorstring_isbase = false;
            return QQuickImageResponse::errorString();
        }
        auto errorstring_cb = qquickimageresponse_errorstring_callback;
        if (errorstring_cb) {
            const char* callback_ret = errorstring_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QQuickImageResponse::errorString();
    }

    // Virtual method for C ABI access and custom callback
    virtual void cancel() override {
        if (qquickimageresponse_cancel_isbase) {
            qquickimageresponse_cancel_isbase = false;
            QQuickImageResponse::cancel();
            return;
        }
        auto cancel_cb = qquickimageresponse_cancel_callback;
        if (cancel_cb) {
            cancel_cb();
            return;
        }
        QQuickImageResponse::cancel();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquickimageresponse_event_isbase) {
            qquickimageresponse_event_isbase = false;
            return QQuickImageResponse::event(event);
        }
        auto event_cb = qquickimageresponse_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickImageResponse::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickimageresponse_eventfilter_isbase) {
            qquickimageresponse_eventfilter_isbase = false;
            return QQuickImageResponse::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquickimageresponse_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickImageResponse::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickimageresponse_timerevent_isbase) {
            qquickimageresponse_timerevent_isbase = false;
            QQuickImageResponse::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquickimageresponse_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickImageResponse::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickimageresponse_childevent_isbase) {
            qquickimageresponse_childevent_isbase = false;
            QQuickImageResponse::childEvent(event);
            return;
        }
        auto childevent_cb = qquickimageresponse_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickImageResponse::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickimageresponse_customevent_isbase) {
            qquickimageresponse_customevent_isbase = false;
            QQuickImageResponse::customEvent(event);
            return;
        }
        auto customevent_cb = qquickimageresponse_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickImageResponse::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickimageresponse_connectnotify_isbase) {
            qquickimageresponse_connectnotify_isbase = false;
            QQuickImageResponse::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquickimageresponse_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickImageResponse::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickimageresponse_disconnectnotify_isbase) {
            qquickimageresponse_disconnectnotify_isbase = false;
            QQuickImageResponse::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquickimageresponse_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickImageResponse::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquickimageresponse_sender_isbase) {
            qquickimageresponse_sender_isbase = false;
            return QQuickImageResponse::sender();
        }
        auto sender_cb = qquickimageresponse_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickImageResponse::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquickimageresponse_sendersignalindex_isbase) {
            qquickimageresponse_sendersignalindex_isbase = false;
            return QQuickImageResponse::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquickimageresponse_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickImageResponse::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquickimageresponse_receivers_isbase) {
            qquickimageresponse_receivers_isbase = false;
            return QQuickImageResponse::receivers(signal);
        }
        auto receivers_cb = qquickimageresponse_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickImageResponse::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquickimageresponse_issignalconnected_isbase) {
            qquickimageresponse_issignalconnected_isbase = false;
            return QQuickImageResponse::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquickimageresponse_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickImageResponse::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQuickImageResponse_TimerEvent(QQuickImageResponse* self, QTimerEvent* event);
    friend void QQuickImageResponse_SuperTimerEvent(QQuickImageResponse* self, QTimerEvent* event);
    friend void QQuickImageResponse_ChildEvent(QQuickImageResponse* self, QChildEvent* event);
    friend void QQuickImageResponse_SuperChildEvent(QQuickImageResponse* self, QChildEvent* event);
    friend void QQuickImageResponse_CustomEvent(QQuickImageResponse* self, QEvent* event);
    friend void QQuickImageResponse_SuperCustomEvent(QQuickImageResponse* self, QEvent* event);
    friend void QQuickImageResponse_ConnectNotify(QQuickImageResponse* self, const QMetaMethod* signal);
    friend void QQuickImageResponse_SuperConnectNotify(QQuickImageResponse* self, const QMetaMethod* signal);
    friend void QQuickImageResponse_DisconnectNotify(QQuickImageResponse* self, const QMetaMethod* signal);
    friend void QQuickImageResponse_SuperDisconnectNotify(QQuickImageResponse* self, const QMetaMethod* signal);
    friend QObject* QQuickImageResponse_Sender(const QQuickImageResponse* self);
    friend QObject* QQuickImageResponse_SuperSender(const QQuickImageResponse* self);
    friend int QQuickImageResponse_SenderSignalIndex(const QQuickImageResponse* self);
    friend int QQuickImageResponse_SuperSenderSignalIndex(const QQuickImageResponse* self);
    friend int QQuickImageResponse_Receivers(const QQuickImageResponse* self, const char* signal);
    friend int QQuickImageResponse_SuperReceivers(const QQuickImageResponse* self, const char* signal);
    friend bool QQuickImageResponse_IsSignalConnected(const QQuickImageResponse* self, const QMetaMethod* signal);
    friend bool QQuickImageResponse_SuperIsSignalConnected(const QQuickImageResponse* self, const QMetaMethod* signal);
};

// This class is a subclass of QQuickImageProvider so that we can call protected methods
class VirtualQQuickImageProvider final : public QQuickImageProvider {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickImageProvider = true;

    // Virtual class public types (including callbacks)
    using QQuickImageProvider_MetaObject_Callback = QMetaObject* (*)();
    using QQuickImageProvider_Metacast_Callback = void* (*)(QQuickImageProvider*, const char*);
    using QQuickImageProvider_Metacall_Callback = int (*)(QQuickImageProvider*, int, int, void**);
    using QQuickImageProvider_ImageType_Callback = int (*)();
    using QQuickImageProvider_Flags_Callback = int (*)();
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
    using QQuickImageProvider_Sender_Callback = QObject* (*)();
    using QQuickImageProvider_SenderSignalIndex_Callback = int (*)();
    using QQuickImageProvider_Receivers_Callback = int (*)(const QQuickImageProvider*, const char*);
    using QQuickImageProvider_IsSignalConnected_Callback = bool (*)(const QQuickImageProvider*, QMetaMethod*);

  protected:
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
    QQuickImageProvider_Sender_Callback qquickimageprovider_sender_callback = nullptr;
    QQuickImageProvider_SenderSignalIndex_Callback qquickimageprovider_sendersignalindex_callback = nullptr;
    QQuickImageProvider_Receivers_Callback qquickimageprovider_receivers_callback = nullptr;
    QQuickImageProvider_IsSignalConnected_Callback qquickimageprovider_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquickimageprovider_metaobject_isbase = false;
    mutable bool qquickimageprovider_metacast_isbase = false;
    mutable bool qquickimageprovider_metacall_isbase = false;
    mutable bool qquickimageprovider_imagetype_isbase = false;
    mutable bool qquickimageprovider_flags_isbase = false;
    mutable bool qquickimageprovider_requestimage_isbase = false;
    mutable bool qquickimageprovider_requestpixmap_isbase = false;
    mutable bool qquickimageprovider_requesttexture_isbase = false;
    mutable bool qquickimageprovider_event_isbase = false;
    mutable bool qquickimageprovider_eventfilter_isbase = false;
    mutable bool qquickimageprovider_timerevent_isbase = false;
    mutable bool qquickimageprovider_childevent_isbase = false;
    mutable bool qquickimageprovider_customevent_isbase = false;
    mutable bool qquickimageprovider_connectnotify_isbase = false;
    mutable bool qquickimageprovider_disconnectnotify_isbase = false;
    mutable bool qquickimageprovider_sender_isbase = false;
    mutable bool qquickimageprovider_sendersignalindex_isbase = false;
    mutable bool qquickimageprovider_receivers_isbase = false;
    mutable bool qquickimageprovider_issignalconnected_isbase = false;

  public:
    VirtualQQuickImageProvider(QQmlImageProviderBase::ImageType typeVal) : QQuickImageProvider(typeVal) {};
    VirtualQQuickImageProvider(QQmlImageProviderBase::ImageType typeVal, QQmlImageProviderBase::Flags flags) : QQuickImageProvider(typeVal, flags) {};

    // Callback setters
    inline void setQQuickImageProvider_MetaObject_Callback(QQuickImageProvider_MetaObject_Callback cb) { qquickimageprovider_metaobject_callback = cb; }
    inline void setQQuickImageProvider_Metacast_Callback(QQuickImageProvider_Metacast_Callback cb) { qquickimageprovider_metacast_callback = cb; }
    inline void setQQuickImageProvider_Metacall_Callback(QQuickImageProvider_Metacall_Callback cb) { qquickimageprovider_metacall_callback = cb; }
    inline void setQQuickImageProvider_ImageType_Callback(QQuickImageProvider_ImageType_Callback cb) { qquickimageprovider_imagetype_callback = cb; }
    inline void setQQuickImageProvider_Flags_Callback(QQuickImageProvider_Flags_Callback cb) { qquickimageprovider_flags_callback = cb; }
    inline void setQQuickImageProvider_RequestImage_Callback(QQuickImageProvider_RequestImage_Callback cb) { qquickimageprovider_requestimage_callback = cb; }
    inline void setQQuickImageProvider_RequestPixmap_Callback(QQuickImageProvider_RequestPixmap_Callback cb) { qquickimageprovider_requestpixmap_callback = cb; }
    inline void setQQuickImageProvider_RequestTexture_Callback(QQuickImageProvider_RequestTexture_Callback cb) { qquickimageprovider_requesttexture_callback = cb; }
    inline void setQQuickImageProvider_Event_Callback(QQuickImageProvider_Event_Callback cb) { qquickimageprovider_event_callback = cb; }
    inline void setQQuickImageProvider_EventFilter_Callback(QQuickImageProvider_EventFilter_Callback cb) { qquickimageprovider_eventfilter_callback = cb; }
    inline void setQQuickImageProvider_TimerEvent_Callback(QQuickImageProvider_TimerEvent_Callback cb) { qquickimageprovider_timerevent_callback = cb; }
    inline void setQQuickImageProvider_ChildEvent_Callback(QQuickImageProvider_ChildEvent_Callback cb) { qquickimageprovider_childevent_callback = cb; }
    inline void setQQuickImageProvider_CustomEvent_Callback(QQuickImageProvider_CustomEvent_Callback cb) { qquickimageprovider_customevent_callback = cb; }
    inline void setQQuickImageProvider_ConnectNotify_Callback(QQuickImageProvider_ConnectNotify_Callback cb) { qquickimageprovider_connectnotify_callback = cb; }
    inline void setQQuickImageProvider_DisconnectNotify_Callback(QQuickImageProvider_DisconnectNotify_Callback cb) { qquickimageprovider_disconnectnotify_callback = cb; }
    inline void setQQuickImageProvider_Sender_Callback(QQuickImageProvider_Sender_Callback cb) { qquickimageprovider_sender_callback = cb; }
    inline void setQQuickImageProvider_SenderSignalIndex_Callback(QQuickImageProvider_SenderSignalIndex_Callback cb) { qquickimageprovider_sendersignalindex_callback = cb; }
    inline void setQQuickImageProvider_Receivers_Callback(QQuickImageProvider_Receivers_Callback cb) { qquickimageprovider_receivers_callback = cb; }
    inline void setQQuickImageProvider_IsSignalConnected_Callback(QQuickImageProvider_IsSignalConnected_Callback cb) { qquickimageprovider_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickImageProvider_MetaObject_IsBase(bool value) const { qquickimageprovider_metaobject_isbase = value; }
    inline void setQQuickImageProvider_Metacast_IsBase(bool value) const { qquickimageprovider_metacast_isbase = value; }
    inline void setQQuickImageProvider_Metacall_IsBase(bool value) const { qquickimageprovider_metacall_isbase = value; }
    inline void setQQuickImageProvider_ImageType_IsBase(bool value) const { qquickimageprovider_imagetype_isbase = value; }
    inline void setQQuickImageProvider_Flags_IsBase(bool value) const { qquickimageprovider_flags_isbase = value; }
    inline void setQQuickImageProvider_RequestImage_IsBase(bool value) const { qquickimageprovider_requestimage_isbase = value; }
    inline void setQQuickImageProvider_RequestPixmap_IsBase(bool value) const { qquickimageprovider_requestpixmap_isbase = value; }
    inline void setQQuickImageProvider_RequestTexture_IsBase(bool value) const { qquickimageprovider_requesttexture_isbase = value; }
    inline void setQQuickImageProvider_Event_IsBase(bool value) const { qquickimageprovider_event_isbase = value; }
    inline void setQQuickImageProvider_EventFilter_IsBase(bool value) const { qquickimageprovider_eventfilter_isbase = value; }
    inline void setQQuickImageProvider_TimerEvent_IsBase(bool value) const { qquickimageprovider_timerevent_isbase = value; }
    inline void setQQuickImageProvider_ChildEvent_IsBase(bool value) const { qquickimageprovider_childevent_isbase = value; }
    inline void setQQuickImageProvider_CustomEvent_IsBase(bool value) const { qquickimageprovider_customevent_isbase = value; }
    inline void setQQuickImageProvider_ConnectNotify_IsBase(bool value) const { qquickimageprovider_connectnotify_isbase = value; }
    inline void setQQuickImageProvider_DisconnectNotify_IsBase(bool value) const { qquickimageprovider_disconnectnotify_isbase = value; }
    inline void setQQuickImageProvider_Sender_IsBase(bool value) const { qquickimageprovider_sender_isbase = value; }
    inline void setQQuickImageProvider_SenderSignalIndex_IsBase(bool value) const { qquickimageprovider_sendersignalindex_isbase = value; }
    inline void setQQuickImageProvider_Receivers_IsBase(bool value) const { qquickimageprovider_receivers_isbase = value; }
    inline void setQQuickImageProvider_IsSignalConnected_IsBase(bool value) const { qquickimageprovider_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickimageprovider_metaobject_isbase) {
            qquickimageprovider_metaobject_isbase = false;
            return QQuickImageProvider::metaObject();
        }
        auto metaobject_cb = qquickimageprovider_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickImageProvider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickimageprovider_metacast_isbase) {
            qquickimageprovider_metacast_isbase = false;
            return QQuickImageProvider::qt_metacast(param1);
        }
        auto metacast_cb = qquickimageprovider_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickImageProvider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickimageprovider_metacall_isbase) {
            qquickimageprovider_metacall_isbase = false;
            return QQuickImageProvider::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquickimageprovider_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickImageProvider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQmlImageProviderBase::ImageType imageType() const override {
        if (qquickimageprovider_imagetype_isbase) {
            qquickimageprovider_imagetype_isbase = false;
            return QQuickImageProvider::imageType();
        }
        auto imagetype_cb = qquickimageprovider_imagetype_callback;
        if (imagetype_cb) {
            int callback_ret = imagetype_cb();
            return static_cast<QQmlImageProviderBase::ImageType>(callback_ret);
        }
        return QQuickImageProvider::imageType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QQmlImageProviderBase::Flags flags() const override {
        if (qquickimageprovider_flags_isbase) {
            qquickimageprovider_flags_isbase = false;
            return QQuickImageProvider::flags();
        }
        auto flags_cb = qquickimageprovider_flags_callback;
        if (flags_cb) {
            int callback_ret = flags_cb();
            return static_cast<QQmlImageProviderBase::Flags>(callback_ret);
        }
        return QQuickImageProvider::flags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QImage requestImage(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (qquickimageprovider_requestimage_isbase) {
            qquickimageprovider_requestimage_isbase = false;
            return QQuickImageProvider::requestImage(id, size, requestedSize);
        }
        auto requestimage_cb = qquickimageprovider_requestimage_callback;
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
        return QQuickImageProvider::requestImage(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap requestPixmap(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (qquickimageprovider_requestpixmap_isbase) {
            qquickimageprovider_requestpixmap_isbase = false;
            return QQuickImageProvider::requestPixmap(id, size, requestedSize);
        }
        auto requestpixmap_cb = qquickimageprovider_requestpixmap_callback;
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
        return QQuickImageProvider::requestPixmap(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQuickTextureFactory* requestTexture(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (qquickimageprovider_requesttexture_isbase) {
            qquickimageprovider_requesttexture_isbase = false;
            return QQuickImageProvider::requestTexture(id, size, requestedSize);
        }
        auto requesttexture_cb = qquickimageprovider_requesttexture_callback;
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
        return QQuickImageProvider::requestTexture(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquickimageprovider_event_isbase) {
            qquickimageprovider_event_isbase = false;
            return QQuickImageProvider::event(event);
        }
        auto event_cb = qquickimageprovider_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickImageProvider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickimageprovider_eventfilter_isbase) {
            qquickimageprovider_eventfilter_isbase = false;
            return QQuickImageProvider::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquickimageprovider_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickImageProvider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickimageprovider_timerevent_isbase) {
            qquickimageprovider_timerevent_isbase = false;
            QQuickImageProvider::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquickimageprovider_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickImageProvider::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickimageprovider_childevent_isbase) {
            qquickimageprovider_childevent_isbase = false;
            QQuickImageProvider::childEvent(event);
            return;
        }
        auto childevent_cb = qquickimageprovider_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickImageProvider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickimageprovider_customevent_isbase) {
            qquickimageprovider_customevent_isbase = false;
            QQuickImageProvider::customEvent(event);
            return;
        }
        auto customevent_cb = qquickimageprovider_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickImageProvider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickimageprovider_connectnotify_isbase) {
            qquickimageprovider_connectnotify_isbase = false;
            QQuickImageProvider::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquickimageprovider_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickImageProvider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickimageprovider_disconnectnotify_isbase) {
            qquickimageprovider_disconnectnotify_isbase = false;
            QQuickImageProvider::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquickimageprovider_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickImageProvider::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquickimageprovider_sender_isbase) {
            qquickimageprovider_sender_isbase = false;
            return QQuickImageProvider::sender();
        }
        auto sender_cb = qquickimageprovider_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickImageProvider::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquickimageprovider_sendersignalindex_isbase) {
            qquickimageprovider_sendersignalindex_isbase = false;
            return QQuickImageProvider::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquickimageprovider_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickImageProvider::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquickimageprovider_receivers_isbase) {
            qquickimageprovider_receivers_isbase = false;
            return QQuickImageProvider::receivers(signal);
        }
        auto receivers_cb = qquickimageprovider_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickImageProvider::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquickimageprovider_issignalconnected_isbase) {
            qquickimageprovider_issignalconnected_isbase = false;
            return QQuickImageProvider::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquickimageprovider_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickImageProvider::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQuickImageProvider_TimerEvent(QQuickImageProvider* self, QTimerEvent* event);
    friend void QQuickImageProvider_SuperTimerEvent(QQuickImageProvider* self, QTimerEvent* event);
    friend void QQuickImageProvider_ChildEvent(QQuickImageProvider* self, QChildEvent* event);
    friend void QQuickImageProvider_SuperChildEvent(QQuickImageProvider* self, QChildEvent* event);
    friend void QQuickImageProvider_CustomEvent(QQuickImageProvider* self, QEvent* event);
    friend void QQuickImageProvider_SuperCustomEvent(QQuickImageProvider* self, QEvent* event);
    friend void QQuickImageProvider_ConnectNotify(QQuickImageProvider* self, const QMetaMethod* signal);
    friend void QQuickImageProvider_SuperConnectNotify(QQuickImageProvider* self, const QMetaMethod* signal);
    friend void QQuickImageProvider_DisconnectNotify(QQuickImageProvider* self, const QMetaMethod* signal);
    friend void QQuickImageProvider_SuperDisconnectNotify(QQuickImageProvider* self, const QMetaMethod* signal);
    friend QObject* QQuickImageProvider_Sender(const QQuickImageProvider* self);
    friend QObject* QQuickImageProvider_SuperSender(const QQuickImageProvider* self);
    friend int QQuickImageProvider_SenderSignalIndex(const QQuickImageProvider* self);
    friend int QQuickImageProvider_SuperSenderSignalIndex(const QQuickImageProvider* self);
    friend int QQuickImageProvider_Receivers(const QQuickImageProvider* self, const char* signal);
    friend int QQuickImageProvider_SuperReceivers(const QQuickImageProvider* self, const char* signal);
    friend bool QQuickImageProvider_IsSignalConnected(const QQuickImageProvider* self, const QMetaMethod* signal);
    friend bool QQuickImageProvider_SuperIsSignalConnected(const QQuickImageProvider* self, const QMetaMethod* signal);
};

// This class is a subclass of QQuickAsyncImageProvider so that we can call protected methods
class VirtualQQuickAsyncImageProvider : public QQuickAsyncImageProvider {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickAsyncImageProvider = true;

    // Virtual class public types (including callbacks)
    using QQuickAsyncImageProvider_RequestImageResponse_Callback = QQuickImageResponse* (*)(QQuickAsyncImageProvider*, const char*, QSize*);
    using QQuickAsyncImageProvider_MetaObject_Callback = QMetaObject* (*)();
    using QQuickAsyncImageProvider_Metacast_Callback = void* (*)(QQuickAsyncImageProvider*, const char*);
    using QQuickAsyncImageProvider_Metacall_Callback = int (*)(QQuickAsyncImageProvider*, int, int, void**);
    using QQuickAsyncImageProvider_ImageType_Callback = int (*)();
    using QQuickAsyncImageProvider_Flags_Callback = int (*)();
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
    using QQuickAsyncImageProvider_Sender_Callback = QObject* (*)();
    using QQuickAsyncImageProvider_SenderSignalIndex_Callback = int (*)();
    using QQuickAsyncImageProvider_Receivers_Callback = int (*)(const QQuickAsyncImageProvider*, const char*);
    using QQuickAsyncImageProvider_IsSignalConnected_Callback = bool (*)(const QQuickAsyncImageProvider*, QMetaMethod*);

  protected:
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
    QQuickAsyncImageProvider_Sender_Callback qquickasyncimageprovider_sender_callback = nullptr;
    QQuickAsyncImageProvider_SenderSignalIndex_Callback qquickasyncimageprovider_sendersignalindex_callback = nullptr;
    QQuickAsyncImageProvider_Receivers_Callback qquickasyncimageprovider_receivers_callback = nullptr;
    QQuickAsyncImageProvider_IsSignalConnected_Callback qquickasyncimageprovider_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquickasyncimageprovider_requestimageresponse_isbase = false;
    mutable bool qquickasyncimageprovider_metaobject_isbase = false;
    mutable bool qquickasyncimageprovider_metacast_isbase = false;
    mutable bool qquickasyncimageprovider_metacall_isbase = false;
    mutable bool qquickasyncimageprovider_imagetype_isbase = false;
    mutable bool qquickasyncimageprovider_flags_isbase = false;
    mutable bool qquickasyncimageprovider_requestimage_isbase = false;
    mutable bool qquickasyncimageprovider_requestpixmap_isbase = false;
    mutable bool qquickasyncimageprovider_requesttexture_isbase = false;
    mutable bool qquickasyncimageprovider_event_isbase = false;
    mutable bool qquickasyncimageprovider_eventfilter_isbase = false;
    mutable bool qquickasyncimageprovider_timerevent_isbase = false;
    mutable bool qquickasyncimageprovider_childevent_isbase = false;
    mutable bool qquickasyncimageprovider_customevent_isbase = false;
    mutable bool qquickasyncimageprovider_connectnotify_isbase = false;
    mutable bool qquickasyncimageprovider_disconnectnotify_isbase = false;
    mutable bool qquickasyncimageprovider_sender_isbase = false;
    mutable bool qquickasyncimageprovider_sendersignalindex_isbase = false;
    mutable bool qquickasyncimageprovider_receivers_isbase = false;
    mutable bool qquickasyncimageprovider_issignalconnected_isbase = false;

  public:
    VirtualQQuickAsyncImageProvider() : QQuickAsyncImageProvider() {};

    // Callback setters
    inline void setQQuickAsyncImageProvider_RequestImageResponse_Callback(QQuickAsyncImageProvider_RequestImageResponse_Callback cb) { qquickasyncimageprovider_requestimageresponse_callback = cb; }
    inline void setQQuickAsyncImageProvider_MetaObject_Callback(QQuickAsyncImageProvider_MetaObject_Callback cb) { qquickasyncimageprovider_metaobject_callback = cb; }
    inline void setQQuickAsyncImageProvider_Metacast_Callback(QQuickAsyncImageProvider_Metacast_Callback cb) { qquickasyncimageprovider_metacast_callback = cb; }
    inline void setQQuickAsyncImageProvider_Metacall_Callback(QQuickAsyncImageProvider_Metacall_Callback cb) { qquickasyncimageprovider_metacall_callback = cb; }
    inline void setQQuickAsyncImageProvider_ImageType_Callback(QQuickAsyncImageProvider_ImageType_Callback cb) { qquickasyncimageprovider_imagetype_callback = cb; }
    inline void setQQuickAsyncImageProvider_Flags_Callback(QQuickAsyncImageProvider_Flags_Callback cb) { qquickasyncimageprovider_flags_callback = cb; }
    inline void setQQuickAsyncImageProvider_RequestImage_Callback(QQuickAsyncImageProvider_RequestImage_Callback cb) { qquickasyncimageprovider_requestimage_callback = cb; }
    inline void setQQuickAsyncImageProvider_RequestPixmap_Callback(QQuickAsyncImageProvider_RequestPixmap_Callback cb) { qquickasyncimageprovider_requestpixmap_callback = cb; }
    inline void setQQuickAsyncImageProvider_RequestTexture_Callback(QQuickAsyncImageProvider_RequestTexture_Callback cb) { qquickasyncimageprovider_requesttexture_callback = cb; }
    inline void setQQuickAsyncImageProvider_Event_Callback(QQuickAsyncImageProvider_Event_Callback cb) { qquickasyncimageprovider_event_callback = cb; }
    inline void setQQuickAsyncImageProvider_EventFilter_Callback(QQuickAsyncImageProvider_EventFilter_Callback cb) { qquickasyncimageprovider_eventfilter_callback = cb; }
    inline void setQQuickAsyncImageProvider_TimerEvent_Callback(QQuickAsyncImageProvider_TimerEvent_Callback cb) { qquickasyncimageprovider_timerevent_callback = cb; }
    inline void setQQuickAsyncImageProvider_ChildEvent_Callback(QQuickAsyncImageProvider_ChildEvent_Callback cb) { qquickasyncimageprovider_childevent_callback = cb; }
    inline void setQQuickAsyncImageProvider_CustomEvent_Callback(QQuickAsyncImageProvider_CustomEvent_Callback cb) { qquickasyncimageprovider_customevent_callback = cb; }
    inline void setQQuickAsyncImageProvider_ConnectNotify_Callback(QQuickAsyncImageProvider_ConnectNotify_Callback cb) { qquickasyncimageprovider_connectnotify_callback = cb; }
    inline void setQQuickAsyncImageProvider_DisconnectNotify_Callback(QQuickAsyncImageProvider_DisconnectNotify_Callback cb) { qquickasyncimageprovider_disconnectnotify_callback = cb; }
    inline void setQQuickAsyncImageProvider_Sender_Callback(QQuickAsyncImageProvider_Sender_Callback cb) { qquickasyncimageprovider_sender_callback = cb; }
    inline void setQQuickAsyncImageProvider_SenderSignalIndex_Callback(QQuickAsyncImageProvider_SenderSignalIndex_Callback cb) { qquickasyncimageprovider_sendersignalindex_callback = cb; }
    inline void setQQuickAsyncImageProvider_Receivers_Callback(QQuickAsyncImageProvider_Receivers_Callback cb) { qquickasyncimageprovider_receivers_callback = cb; }
    inline void setQQuickAsyncImageProvider_IsSignalConnected_Callback(QQuickAsyncImageProvider_IsSignalConnected_Callback cb) { qquickasyncimageprovider_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickAsyncImageProvider_RequestImageResponse_IsBase(bool value) const { qquickasyncimageprovider_requestimageresponse_isbase = value; }
    inline void setQQuickAsyncImageProvider_MetaObject_IsBase(bool value) const { qquickasyncimageprovider_metaobject_isbase = value; }
    inline void setQQuickAsyncImageProvider_Metacast_IsBase(bool value) const { qquickasyncimageprovider_metacast_isbase = value; }
    inline void setQQuickAsyncImageProvider_Metacall_IsBase(bool value) const { qquickasyncimageprovider_metacall_isbase = value; }
    inline void setQQuickAsyncImageProvider_ImageType_IsBase(bool value) const { qquickasyncimageprovider_imagetype_isbase = value; }
    inline void setQQuickAsyncImageProvider_Flags_IsBase(bool value) const { qquickasyncimageprovider_flags_isbase = value; }
    inline void setQQuickAsyncImageProvider_RequestImage_IsBase(bool value) const { qquickasyncimageprovider_requestimage_isbase = value; }
    inline void setQQuickAsyncImageProvider_RequestPixmap_IsBase(bool value) const { qquickasyncimageprovider_requestpixmap_isbase = value; }
    inline void setQQuickAsyncImageProvider_RequestTexture_IsBase(bool value) const { qquickasyncimageprovider_requesttexture_isbase = value; }
    inline void setQQuickAsyncImageProvider_Event_IsBase(bool value) const { qquickasyncimageprovider_event_isbase = value; }
    inline void setQQuickAsyncImageProvider_EventFilter_IsBase(bool value) const { qquickasyncimageprovider_eventfilter_isbase = value; }
    inline void setQQuickAsyncImageProvider_TimerEvent_IsBase(bool value) const { qquickasyncimageprovider_timerevent_isbase = value; }
    inline void setQQuickAsyncImageProvider_ChildEvent_IsBase(bool value) const { qquickasyncimageprovider_childevent_isbase = value; }
    inline void setQQuickAsyncImageProvider_CustomEvent_IsBase(bool value) const { qquickasyncimageprovider_customevent_isbase = value; }
    inline void setQQuickAsyncImageProvider_ConnectNotify_IsBase(bool value) const { qquickasyncimageprovider_connectnotify_isbase = value; }
    inline void setQQuickAsyncImageProvider_DisconnectNotify_IsBase(bool value) const { qquickasyncimageprovider_disconnectnotify_isbase = value; }
    inline void setQQuickAsyncImageProvider_Sender_IsBase(bool value) const { qquickasyncimageprovider_sender_isbase = value; }
    inline void setQQuickAsyncImageProvider_SenderSignalIndex_IsBase(bool value) const { qquickasyncimageprovider_sendersignalindex_isbase = value; }
    inline void setQQuickAsyncImageProvider_Receivers_IsBase(bool value) const { qquickasyncimageprovider_receivers_isbase = value; }
    inline void setQQuickAsyncImageProvider_IsSignalConnected_IsBase(bool value) const { qquickasyncimageprovider_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QQuickImageResponse* requestImageResponse(const QString& id, const QSize& requestedSize) override {
        auto requestimageresponse_cb = qquickasyncimageprovider_requestimageresponse_callback;
        if (requestimageresponse_cb) {
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
            QQuickImageResponse* callback_ret = requestimageresponse_cb(this, cbval1, cbval2);
            libqt_free(id_str);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickasyncimageprovider_metaobject_isbase) {
            qquickasyncimageprovider_metaobject_isbase = false;
            return QQuickAsyncImageProvider::metaObject();
        }
        auto metaobject_cb = qquickasyncimageprovider_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickAsyncImageProvider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickasyncimageprovider_metacast_isbase) {
            qquickasyncimageprovider_metacast_isbase = false;
            return QQuickAsyncImageProvider::qt_metacast(param1);
        }
        auto metacast_cb = qquickasyncimageprovider_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickAsyncImageProvider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickasyncimageprovider_metacall_isbase) {
            qquickasyncimageprovider_metacall_isbase = false;
            return QQuickAsyncImageProvider::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquickasyncimageprovider_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickAsyncImageProvider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQmlImageProviderBase::ImageType imageType() const override {
        if (qquickasyncimageprovider_imagetype_isbase) {
            qquickasyncimageprovider_imagetype_isbase = false;
            return QQuickAsyncImageProvider::imageType();
        }
        auto imagetype_cb = qquickasyncimageprovider_imagetype_callback;
        if (imagetype_cb) {
            int callback_ret = imagetype_cb();
            return static_cast<QQmlImageProviderBase::ImageType>(callback_ret);
        }
        return QQuickAsyncImageProvider::imageType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QQmlImageProviderBase::Flags flags() const override {
        if (qquickasyncimageprovider_flags_isbase) {
            qquickasyncimageprovider_flags_isbase = false;
            return QQuickAsyncImageProvider::flags();
        }
        auto flags_cb = qquickasyncimageprovider_flags_callback;
        if (flags_cb) {
            int callback_ret = flags_cb();
            return static_cast<QQmlImageProviderBase::Flags>(callback_ret);
        }
        return QQuickAsyncImageProvider::flags();
    }

    // Virtual method for C ABI access and custom callback
    virtual QImage requestImage(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (qquickasyncimageprovider_requestimage_isbase) {
            qquickasyncimageprovider_requestimage_isbase = false;
            return QQuickAsyncImageProvider::requestImage(id, size, requestedSize);
        }
        auto requestimage_cb = qquickasyncimageprovider_requestimage_callback;
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
        return QQuickAsyncImageProvider::requestImage(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap requestPixmap(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (qquickasyncimageprovider_requestpixmap_isbase) {
            qquickasyncimageprovider_requestpixmap_isbase = false;
            return QQuickAsyncImageProvider::requestPixmap(id, size, requestedSize);
        }
        auto requestpixmap_cb = qquickasyncimageprovider_requestpixmap_callback;
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
        return QQuickAsyncImageProvider::requestPixmap(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQuickTextureFactory* requestTexture(const QString& id, QSize* size, const QSize& requestedSize) override {
        if (qquickasyncimageprovider_requesttexture_isbase) {
            qquickasyncimageprovider_requesttexture_isbase = false;
            return QQuickAsyncImageProvider::requestTexture(id, size, requestedSize);
        }
        auto requesttexture_cb = qquickasyncimageprovider_requesttexture_callback;
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
        return QQuickAsyncImageProvider::requestTexture(id, size, requestedSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquickasyncimageprovider_event_isbase) {
            qquickasyncimageprovider_event_isbase = false;
            return QQuickAsyncImageProvider::event(event);
        }
        auto event_cb = qquickasyncimageprovider_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickAsyncImageProvider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickasyncimageprovider_eventfilter_isbase) {
            qquickasyncimageprovider_eventfilter_isbase = false;
            return QQuickAsyncImageProvider::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquickasyncimageprovider_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickAsyncImageProvider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickasyncimageprovider_timerevent_isbase) {
            qquickasyncimageprovider_timerevent_isbase = false;
            QQuickAsyncImageProvider::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquickasyncimageprovider_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickAsyncImageProvider::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickasyncimageprovider_childevent_isbase) {
            qquickasyncimageprovider_childevent_isbase = false;
            QQuickAsyncImageProvider::childEvent(event);
            return;
        }
        auto childevent_cb = qquickasyncimageprovider_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickAsyncImageProvider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickasyncimageprovider_customevent_isbase) {
            qquickasyncimageprovider_customevent_isbase = false;
            QQuickAsyncImageProvider::customEvent(event);
            return;
        }
        auto customevent_cb = qquickasyncimageprovider_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickAsyncImageProvider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickasyncimageprovider_connectnotify_isbase) {
            qquickasyncimageprovider_connectnotify_isbase = false;
            QQuickAsyncImageProvider::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquickasyncimageprovider_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickAsyncImageProvider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickasyncimageprovider_disconnectnotify_isbase) {
            qquickasyncimageprovider_disconnectnotify_isbase = false;
            QQuickAsyncImageProvider::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquickasyncimageprovider_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickAsyncImageProvider::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquickasyncimageprovider_sender_isbase) {
            qquickasyncimageprovider_sender_isbase = false;
            return QQuickAsyncImageProvider::sender();
        }
        auto sender_cb = qquickasyncimageprovider_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickAsyncImageProvider::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquickasyncimageprovider_sendersignalindex_isbase) {
            qquickasyncimageprovider_sendersignalindex_isbase = false;
            return QQuickAsyncImageProvider::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquickasyncimageprovider_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickAsyncImageProvider::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquickasyncimageprovider_receivers_isbase) {
            qquickasyncimageprovider_receivers_isbase = false;
            return QQuickAsyncImageProvider::receivers(signal);
        }
        auto receivers_cb = qquickasyncimageprovider_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickAsyncImageProvider::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquickasyncimageprovider_issignalconnected_isbase) {
            qquickasyncimageprovider_issignalconnected_isbase = false;
            return QQuickAsyncImageProvider::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquickasyncimageprovider_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickAsyncImageProvider::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQuickAsyncImageProvider_TimerEvent(QQuickAsyncImageProvider* self, QTimerEvent* event);
    friend void QQuickAsyncImageProvider_SuperTimerEvent(QQuickAsyncImageProvider* self, QTimerEvent* event);
    friend void QQuickAsyncImageProvider_ChildEvent(QQuickAsyncImageProvider* self, QChildEvent* event);
    friend void QQuickAsyncImageProvider_SuperChildEvent(QQuickAsyncImageProvider* self, QChildEvent* event);
    friend void QQuickAsyncImageProvider_CustomEvent(QQuickAsyncImageProvider* self, QEvent* event);
    friend void QQuickAsyncImageProvider_SuperCustomEvent(QQuickAsyncImageProvider* self, QEvent* event);
    friend void QQuickAsyncImageProvider_ConnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal);
    friend void QQuickAsyncImageProvider_SuperConnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal);
    friend void QQuickAsyncImageProvider_DisconnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal);
    friend void QQuickAsyncImageProvider_SuperDisconnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal);
    friend QObject* QQuickAsyncImageProvider_Sender(const QQuickAsyncImageProvider* self);
    friend QObject* QQuickAsyncImageProvider_SuperSender(const QQuickAsyncImageProvider* self);
    friend int QQuickAsyncImageProvider_SenderSignalIndex(const QQuickAsyncImageProvider* self);
    friend int QQuickAsyncImageProvider_SuperSenderSignalIndex(const QQuickAsyncImageProvider* self);
    friend int QQuickAsyncImageProvider_Receivers(const QQuickAsyncImageProvider* self, const char* signal);
    friend int QQuickAsyncImageProvider_SuperReceivers(const QQuickAsyncImageProvider* self, const char* signal);
    friend bool QQuickAsyncImageProvider_IsSignalConnected(const QQuickAsyncImageProvider* self, const QMetaMethod* signal);
    friend bool QQuickAsyncImageProvider_SuperIsSignalConnected(const QQuickAsyncImageProvider* self, const QMetaMethod* signal);
};

#endif
