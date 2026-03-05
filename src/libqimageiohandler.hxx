#pragma once
#ifndef SRCC_LIBVIRTUALQIMAGEIOHANDLER_H
#define SRCC_LIBVIRTUALQIMAGEIOHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QImageIOHandler so that we can call protected methods
class VirtualQImageIOHandler : public QImageIOHandler {

  public:
    // Virtual class boolean flag
    bool isVirtualQImageIOHandler = true;

    // Virtual class public types (including callbacks)
    using QImageIOHandler_CanRead_Callback = bool (*)();
    using QImageIOHandler_Read_Callback = bool (*)(QImageIOHandler*, QImage*);
    using QImageIOHandler_Write_Callback = bool (*)(QImageIOHandler*, QImage*);
    using QImageIOHandler_Option_Callback = QVariant* (*)(const QImageIOHandler*, int);
    using QImageIOHandler_SetOption_Callback = void (*)(QImageIOHandler*, int, QVariant*);
    using QImageIOHandler_SupportsOption_Callback = bool (*)(const QImageIOHandler*, int);
    using QImageIOHandler_JumpToNextImage_Callback = bool (*)();
    using QImageIOHandler_JumpToImage_Callback = bool (*)(QImageIOHandler*, int);
    using QImageIOHandler_LoopCount_Callback = int (*)();
    using QImageIOHandler_ImageCount_Callback = int (*)();
    using QImageIOHandler_NextImageDelay_Callback = int (*)();
    using QImageIOHandler_CurrentImageNumber_Callback = int (*)();
    using QImageIOHandler_CurrentImageRect_Callback = QRect* (*)();

  protected:
    // Instance callback storage
    QImageIOHandler_CanRead_Callback qimageiohandler_canread_callback = nullptr;
    QImageIOHandler_Read_Callback qimageiohandler_read_callback = nullptr;
    QImageIOHandler_Write_Callback qimageiohandler_write_callback = nullptr;
    QImageIOHandler_Option_Callback qimageiohandler_option_callback = nullptr;
    QImageIOHandler_SetOption_Callback qimageiohandler_setoption_callback = nullptr;
    QImageIOHandler_SupportsOption_Callback qimageiohandler_supportsoption_callback = nullptr;
    QImageIOHandler_JumpToNextImage_Callback qimageiohandler_jumptonextimage_callback = nullptr;
    QImageIOHandler_JumpToImage_Callback qimageiohandler_jumptoimage_callback = nullptr;
    QImageIOHandler_LoopCount_Callback qimageiohandler_loopcount_callback = nullptr;
    QImageIOHandler_ImageCount_Callback qimageiohandler_imagecount_callback = nullptr;
    QImageIOHandler_NextImageDelay_Callback qimageiohandler_nextimagedelay_callback = nullptr;
    QImageIOHandler_CurrentImageNumber_Callback qimageiohandler_currentimagenumber_callback = nullptr;
    QImageIOHandler_CurrentImageRect_Callback qimageiohandler_currentimagerect_callback = nullptr;

    // Instance base flags
    mutable bool qimageiohandler_canread_isbase = false;
    mutable bool qimageiohandler_read_isbase = false;
    mutable bool qimageiohandler_write_isbase = false;
    mutable bool qimageiohandler_option_isbase = false;
    mutable bool qimageiohandler_setoption_isbase = false;
    mutable bool qimageiohandler_supportsoption_isbase = false;
    mutable bool qimageiohandler_jumptonextimage_isbase = false;
    mutable bool qimageiohandler_jumptoimage_isbase = false;
    mutable bool qimageiohandler_loopcount_isbase = false;
    mutable bool qimageiohandler_imagecount_isbase = false;
    mutable bool qimageiohandler_nextimagedelay_isbase = false;
    mutable bool qimageiohandler_currentimagenumber_isbase = false;
    mutable bool qimageiohandler_currentimagerect_isbase = false;

  public:
    VirtualQImageIOHandler() : QImageIOHandler() {};

    // Callback setters
    inline void setQImageIOHandler_CanRead_Callback(QImageIOHandler_CanRead_Callback cb) { qimageiohandler_canread_callback = cb; }
    inline void setQImageIOHandler_Read_Callback(QImageIOHandler_Read_Callback cb) { qimageiohandler_read_callback = cb; }
    inline void setQImageIOHandler_Write_Callback(QImageIOHandler_Write_Callback cb) { qimageiohandler_write_callback = cb; }
    inline void setQImageIOHandler_Option_Callback(QImageIOHandler_Option_Callback cb) { qimageiohandler_option_callback = cb; }
    inline void setQImageIOHandler_SetOption_Callback(QImageIOHandler_SetOption_Callback cb) { qimageiohandler_setoption_callback = cb; }
    inline void setQImageIOHandler_SupportsOption_Callback(QImageIOHandler_SupportsOption_Callback cb) { qimageiohandler_supportsoption_callback = cb; }
    inline void setQImageIOHandler_JumpToNextImage_Callback(QImageIOHandler_JumpToNextImage_Callback cb) { qimageiohandler_jumptonextimage_callback = cb; }
    inline void setQImageIOHandler_JumpToImage_Callback(QImageIOHandler_JumpToImage_Callback cb) { qimageiohandler_jumptoimage_callback = cb; }
    inline void setQImageIOHandler_LoopCount_Callback(QImageIOHandler_LoopCount_Callback cb) { qimageiohandler_loopcount_callback = cb; }
    inline void setQImageIOHandler_ImageCount_Callback(QImageIOHandler_ImageCount_Callback cb) { qimageiohandler_imagecount_callback = cb; }
    inline void setQImageIOHandler_NextImageDelay_Callback(QImageIOHandler_NextImageDelay_Callback cb) { qimageiohandler_nextimagedelay_callback = cb; }
    inline void setQImageIOHandler_CurrentImageNumber_Callback(QImageIOHandler_CurrentImageNumber_Callback cb) { qimageiohandler_currentimagenumber_callback = cb; }
    inline void setQImageIOHandler_CurrentImageRect_Callback(QImageIOHandler_CurrentImageRect_Callback cb) { qimageiohandler_currentimagerect_callback = cb; }

    // Base flag setters
    inline void setQImageIOHandler_CanRead_IsBase(bool value) const { qimageiohandler_canread_isbase = value; }
    inline void setQImageIOHandler_Read_IsBase(bool value) const { qimageiohandler_read_isbase = value; }
    inline void setQImageIOHandler_Write_IsBase(bool value) const { qimageiohandler_write_isbase = value; }
    inline void setQImageIOHandler_Option_IsBase(bool value) const { qimageiohandler_option_isbase = value; }
    inline void setQImageIOHandler_SetOption_IsBase(bool value) const { qimageiohandler_setoption_isbase = value; }
    inline void setQImageIOHandler_SupportsOption_IsBase(bool value) const { qimageiohandler_supportsoption_isbase = value; }
    inline void setQImageIOHandler_JumpToNextImage_IsBase(bool value) const { qimageiohandler_jumptonextimage_isbase = value; }
    inline void setQImageIOHandler_JumpToImage_IsBase(bool value) const { qimageiohandler_jumptoimage_isbase = value; }
    inline void setQImageIOHandler_LoopCount_IsBase(bool value) const { qimageiohandler_loopcount_isbase = value; }
    inline void setQImageIOHandler_ImageCount_IsBase(bool value) const { qimageiohandler_imagecount_isbase = value; }
    inline void setQImageIOHandler_NextImageDelay_IsBase(bool value) const { qimageiohandler_nextimagedelay_isbase = value; }
    inline void setQImageIOHandler_CurrentImageNumber_IsBase(bool value) const { qimageiohandler_currentimagenumber_isbase = value; }
    inline void setQImageIOHandler_CurrentImageRect_IsBase(bool value) const { qimageiohandler_currentimagerect_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool canRead() const override {
        auto canread_cb = qimageiohandler_canread_callback;
        if (canread_cb) {
            bool callback_ret = canread_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool read(QImage* image) override {
        auto read_cb = qimageiohandler_read_callback;
        if (read_cb) {
            QImage* cbval1 = image;

            bool callback_ret = read_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool write(const QImage& image) override {
        if (qimageiohandler_write_isbase) {
            qimageiohandler_write_isbase = false;
            return QImageIOHandler::write(image);
        }
        auto write_cb = qimageiohandler_write_callback;
        if (write_cb) {
            const QImage& image_ret = image;
            // Cast returned reference into pointer
            QImage* cbval1 = const_cast<QImage*>(&image_ret);

            bool callback_ret = write_cb(this, cbval1);
            return callback_ret;
        }
        return QImageIOHandler::write(image);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant option(QImageIOHandler::ImageOption option) const override {
        if (qimageiohandler_option_isbase) {
            qimageiohandler_option_isbase = false;
            return QImageIOHandler::option(option);
        }
        auto option_cb = qimageiohandler_option_callback;
        if (option_cb) {
            int cbval1 = static_cast<int>(option);

            QVariant* callback_ret = option_cb(this, cbval1);
            return *callback_ret;
        }
        return QImageIOHandler::option(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOption(QImageIOHandler::ImageOption option, const QVariant& value) override {
        if (qimageiohandler_setoption_isbase) {
            qimageiohandler_setoption_isbase = false;
            QImageIOHandler::setOption(option, value);
            return;
        }
        auto setoption_cb = qimageiohandler_setoption_callback;
        if (setoption_cb) {
            int cbval1 = static_cast<int>(option);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            setoption_cb(this, cbval1, cbval2);
            return;
        }
        QImageIOHandler::setOption(option, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsOption(QImageIOHandler::ImageOption option) const override {
        if (qimageiohandler_supportsoption_isbase) {
            qimageiohandler_supportsoption_isbase = false;
            return QImageIOHandler::supportsOption(option);
        }
        auto supportsoption_cb = qimageiohandler_supportsoption_callback;
        if (supportsoption_cb) {
            int cbval1 = static_cast<int>(option);

            bool callback_ret = supportsoption_cb(this, cbval1);
            return callback_ret;
        }
        return QImageIOHandler::supportsOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool jumpToNextImage() override {
        if (qimageiohandler_jumptonextimage_isbase) {
            qimageiohandler_jumptonextimage_isbase = false;
            return QImageIOHandler::jumpToNextImage();
        }
        auto jumptonextimage_cb = qimageiohandler_jumptonextimage_callback;
        if (jumptonextimage_cb) {
            bool callback_ret = jumptonextimage_cb();
            return callback_ret;
        }
        return QImageIOHandler::jumpToNextImage();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool jumpToImage(int imageNumber) override {
        if (qimageiohandler_jumptoimage_isbase) {
            qimageiohandler_jumptoimage_isbase = false;
            return QImageIOHandler::jumpToImage(imageNumber);
        }
        auto jumptoimage_cb = qimageiohandler_jumptoimage_callback;
        if (jumptoimage_cb) {
            int cbval1 = imageNumber;

            bool callback_ret = jumptoimage_cb(this, cbval1);
            return callback_ret;
        }
        return QImageIOHandler::jumpToImage(imageNumber);
    }

    // Virtual method for C ABI access and custom callback
    virtual int loopCount() const override {
        if (qimageiohandler_loopcount_isbase) {
            qimageiohandler_loopcount_isbase = false;
            return QImageIOHandler::loopCount();
        }
        auto loopcount_cb = qimageiohandler_loopcount_callback;
        if (loopcount_cb) {
            int callback_ret = loopcount_cb();
            return static_cast<int>(callback_ret);
        }
        return QImageIOHandler::loopCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual int imageCount() const override {
        if (qimageiohandler_imagecount_isbase) {
            qimageiohandler_imagecount_isbase = false;
            return QImageIOHandler::imageCount();
        }
        auto imagecount_cb = qimageiohandler_imagecount_callback;
        if (imagecount_cb) {
            int callback_ret = imagecount_cb();
            return static_cast<int>(callback_ret);
        }
        return QImageIOHandler::imageCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual int nextImageDelay() const override {
        if (qimageiohandler_nextimagedelay_isbase) {
            qimageiohandler_nextimagedelay_isbase = false;
            return QImageIOHandler::nextImageDelay();
        }
        auto nextimagedelay_cb = qimageiohandler_nextimagedelay_callback;
        if (nextimagedelay_cb) {
            int callback_ret = nextimagedelay_cb();
            return static_cast<int>(callback_ret);
        }
        return QImageIOHandler::nextImageDelay();
    }

    // Virtual method for C ABI access and custom callback
    virtual int currentImageNumber() const override {
        if (qimageiohandler_currentimagenumber_isbase) {
            qimageiohandler_currentimagenumber_isbase = false;
            return QImageIOHandler::currentImageNumber();
        }
        auto currentimagenumber_cb = qimageiohandler_currentimagenumber_callback;
        if (currentimagenumber_cb) {
            int callback_ret = currentimagenumber_cb();
            return static_cast<int>(callback_ret);
        }
        return QImageIOHandler::currentImageNumber();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect currentImageRect() const override {
        if (qimageiohandler_currentimagerect_isbase) {
            qimageiohandler_currentimagerect_isbase = false;
            return QImageIOHandler::currentImageRect();
        }
        auto currentimagerect_cb = qimageiohandler_currentimagerect_callback;
        if (currentimagerect_cb) {
            QRect* callback_ret = currentimagerect_cb();
            return *callback_ret;
        }
        return QImageIOHandler::currentImageRect();
    }
};

// This class is a subclass of QImageIOPlugin so that we can call protected methods
class VirtualQImageIOPlugin : public QImageIOPlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualQImageIOPlugin = true;

    // Virtual class public types (including callbacks)
    using QImageIOPlugin_MetaObject_Callback = QMetaObject* (*)();
    using QImageIOPlugin_Metacast_Callback = void* (*)(QImageIOPlugin*, const char*);
    using QImageIOPlugin_Metacall_Callback = int (*)(QImageIOPlugin*, int, int, void**);
    using QImageIOPlugin_Capabilities_Callback = int (*)(const QImageIOPlugin*, QIODevice*, libqt_string);
    using QImageIOPlugin_Create_Callback = QImageIOHandler* (*)(const QImageIOPlugin*, QIODevice*, libqt_string);
    using QImageIOPlugin_Event_Callback = bool (*)(QImageIOPlugin*, QEvent*);
    using QImageIOPlugin_EventFilter_Callback = bool (*)(QImageIOPlugin*, QObject*, QEvent*);
    using QImageIOPlugin_TimerEvent_Callback = void (*)(QImageIOPlugin*, QTimerEvent*);
    using QImageIOPlugin_ChildEvent_Callback = void (*)(QImageIOPlugin*, QChildEvent*);
    using QImageIOPlugin_CustomEvent_Callback = void (*)(QImageIOPlugin*, QEvent*);
    using QImageIOPlugin_ConnectNotify_Callback = void (*)(QImageIOPlugin*, QMetaMethod*);
    using QImageIOPlugin_DisconnectNotify_Callback = void (*)(QImageIOPlugin*, QMetaMethod*);
    using QImageIOPlugin_Sender_Callback = QObject* (*)();
    using QImageIOPlugin_SenderSignalIndex_Callback = int (*)();
    using QImageIOPlugin_Receivers_Callback = int (*)(const QImageIOPlugin*, const char*);
    using QImageIOPlugin_IsSignalConnected_Callback = bool (*)(const QImageIOPlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    QImageIOPlugin_MetaObject_Callback qimageioplugin_metaobject_callback = nullptr;
    QImageIOPlugin_Metacast_Callback qimageioplugin_metacast_callback = nullptr;
    QImageIOPlugin_Metacall_Callback qimageioplugin_metacall_callback = nullptr;
    QImageIOPlugin_Capabilities_Callback qimageioplugin_capabilities_callback = nullptr;
    QImageIOPlugin_Create_Callback qimageioplugin_create_callback = nullptr;
    QImageIOPlugin_Event_Callback qimageioplugin_event_callback = nullptr;
    QImageIOPlugin_EventFilter_Callback qimageioplugin_eventfilter_callback = nullptr;
    QImageIOPlugin_TimerEvent_Callback qimageioplugin_timerevent_callback = nullptr;
    QImageIOPlugin_ChildEvent_Callback qimageioplugin_childevent_callback = nullptr;
    QImageIOPlugin_CustomEvent_Callback qimageioplugin_customevent_callback = nullptr;
    QImageIOPlugin_ConnectNotify_Callback qimageioplugin_connectnotify_callback = nullptr;
    QImageIOPlugin_DisconnectNotify_Callback qimageioplugin_disconnectnotify_callback = nullptr;
    QImageIOPlugin_Sender_Callback qimageioplugin_sender_callback = nullptr;
    QImageIOPlugin_SenderSignalIndex_Callback qimageioplugin_sendersignalindex_callback = nullptr;
    QImageIOPlugin_Receivers_Callback qimageioplugin_receivers_callback = nullptr;
    QImageIOPlugin_IsSignalConnected_Callback qimageioplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qimageioplugin_metaobject_isbase = false;
    mutable bool qimageioplugin_metacast_isbase = false;
    mutable bool qimageioplugin_metacall_isbase = false;
    mutable bool qimageioplugin_capabilities_isbase = false;
    mutable bool qimageioplugin_create_isbase = false;
    mutable bool qimageioplugin_event_isbase = false;
    mutable bool qimageioplugin_eventfilter_isbase = false;
    mutable bool qimageioplugin_timerevent_isbase = false;
    mutable bool qimageioplugin_childevent_isbase = false;
    mutable bool qimageioplugin_customevent_isbase = false;
    mutable bool qimageioplugin_connectnotify_isbase = false;
    mutable bool qimageioplugin_disconnectnotify_isbase = false;
    mutable bool qimageioplugin_sender_isbase = false;
    mutable bool qimageioplugin_sendersignalindex_isbase = false;
    mutable bool qimageioplugin_receivers_isbase = false;
    mutable bool qimageioplugin_issignalconnected_isbase = false;

  public:
    VirtualQImageIOPlugin() : QImageIOPlugin() {};
    VirtualQImageIOPlugin(QObject* parent) : QImageIOPlugin(parent) {};

    // Callback setters
    inline void setQImageIOPlugin_MetaObject_Callback(QImageIOPlugin_MetaObject_Callback cb) { qimageioplugin_metaobject_callback = cb; }
    inline void setQImageIOPlugin_Metacast_Callback(QImageIOPlugin_Metacast_Callback cb) { qimageioplugin_metacast_callback = cb; }
    inline void setQImageIOPlugin_Metacall_Callback(QImageIOPlugin_Metacall_Callback cb) { qimageioplugin_metacall_callback = cb; }
    inline void setQImageIOPlugin_Capabilities_Callback(QImageIOPlugin_Capabilities_Callback cb) { qimageioplugin_capabilities_callback = cb; }
    inline void setQImageIOPlugin_Create_Callback(QImageIOPlugin_Create_Callback cb) { qimageioplugin_create_callback = cb; }
    inline void setQImageIOPlugin_Event_Callback(QImageIOPlugin_Event_Callback cb) { qimageioplugin_event_callback = cb; }
    inline void setQImageIOPlugin_EventFilter_Callback(QImageIOPlugin_EventFilter_Callback cb) { qimageioplugin_eventfilter_callback = cb; }
    inline void setQImageIOPlugin_TimerEvent_Callback(QImageIOPlugin_TimerEvent_Callback cb) { qimageioplugin_timerevent_callback = cb; }
    inline void setQImageIOPlugin_ChildEvent_Callback(QImageIOPlugin_ChildEvent_Callback cb) { qimageioplugin_childevent_callback = cb; }
    inline void setQImageIOPlugin_CustomEvent_Callback(QImageIOPlugin_CustomEvent_Callback cb) { qimageioplugin_customevent_callback = cb; }
    inline void setQImageIOPlugin_ConnectNotify_Callback(QImageIOPlugin_ConnectNotify_Callback cb) { qimageioplugin_connectnotify_callback = cb; }
    inline void setQImageIOPlugin_DisconnectNotify_Callback(QImageIOPlugin_DisconnectNotify_Callback cb) { qimageioplugin_disconnectnotify_callback = cb; }
    inline void setQImageIOPlugin_Sender_Callback(QImageIOPlugin_Sender_Callback cb) { qimageioplugin_sender_callback = cb; }
    inline void setQImageIOPlugin_SenderSignalIndex_Callback(QImageIOPlugin_SenderSignalIndex_Callback cb) { qimageioplugin_sendersignalindex_callback = cb; }
    inline void setQImageIOPlugin_Receivers_Callback(QImageIOPlugin_Receivers_Callback cb) { qimageioplugin_receivers_callback = cb; }
    inline void setQImageIOPlugin_IsSignalConnected_Callback(QImageIOPlugin_IsSignalConnected_Callback cb) { qimageioplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQImageIOPlugin_MetaObject_IsBase(bool value) const { qimageioplugin_metaobject_isbase = value; }
    inline void setQImageIOPlugin_Metacast_IsBase(bool value) const { qimageioplugin_metacast_isbase = value; }
    inline void setQImageIOPlugin_Metacall_IsBase(bool value) const { qimageioplugin_metacall_isbase = value; }
    inline void setQImageIOPlugin_Capabilities_IsBase(bool value) const { qimageioplugin_capabilities_isbase = value; }
    inline void setQImageIOPlugin_Create_IsBase(bool value) const { qimageioplugin_create_isbase = value; }
    inline void setQImageIOPlugin_Event_IsBase(bool value) const { qimageioplugin_event_isbase = value; }
    inline void setQImageIOPlugin_EventFilter_IsBase(bool value) const { qimageioplugin_eventfilter_isbase = value; }
    inline void setQImageIOPlugin_TimerEvent_IsBase(bool value) const { qimageioplugin_timerevent_isbase = value; }
    inline void setQImageIOPlugin_ChildEvent_IsBase(bool value) const { qimageioplugin_childevent_isbase = value; }
    inline void setQImageIOPlugin_CustomEvent_IsBase(bool value) const { qimageioplugin_customevent_isbase = value; }
    inline void setQImageIOPlugin_ConnectNotify_IsBase(bool value) const { qimageioplugin_connectnotify_isbase = value; }
    inline void setQImageIOPlugin_DisconnectNotify_IsBase(bool value) const { qimageioplugin_disconnectnotify_isbase = value; }
    inline void setQImageIOPlugin_Sender_IsBase(bool value) const { qimageioplugin_sender_isbase = value; }
    inline void setQImageIOPlugin_SenderSignalIndex_IsBase(bool value) const { qimageioplugin_sendersignalindex_isbase = value; }
    inline void setQImageIOPlugin_Receivers_IsBase(bool value) const { qimageioplugin_receivers_isbase = value; }
    inline void setQImageIOPlugin_IsSignalConnected_IsBase(bool value) const { qimageioplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qimageioplugin_metaobject_isbase) {
            qimageioplugin_metaobject_isbase = false;
            return QImageIOPlugin::metaObject();
        }
        auto metaobject_cb = qimageioplugin_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QImageIOPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qimageioplugin_metacast_isbase) {
            qimageioplugin_metacast_isbase = false;
            return QImageIOPlugin::qt_metacast(param1);
        }
        auto metacast_cb = qimageioplugin_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QImageIOPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qimageioplugin_metacall_isbase) {
            qimageioplugin_metacall_isbase = false;
            return QImageIOPlugin::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qimageioplugin_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QImageIOPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QImageIOPlugin::Capabilities capabilities(QIODevice* device, const QByteArray& format) const override {
        auto capabilities_cb = qimageioplugin_capabilities_callback;
        if (capabilities_cb) {
            QIODevice* cbval1 = device;
            const QByteArray format_qb = format;
            libqt_string format_str;
            format_str.len = format_qb.length();
            format_str.data = static_cast<char*>(malloc(format_str.len));
            memcpy((void*)format_str.data, format_qb.data(), format_str.len);
            libqt_string cbval2 = format_str;

            int callback_ret = capabilities_cb(this, cbval1, cbval2);
            libqt_free(format_str.data);
            return static_cast<QImageIOPlugin::Capabilities>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QImageIOHandler* create(QIODevice* device, const QByteArray& format) const override {
        auto create_cb = qimageioplugin_create_callback;
        if (create_cb) {
            QIODevice* cbval1 = device;
            const QByteArray format_qb = format;
            libqt_string format_str;
            format_str.len = format_qb.length();
            format_str.data = static_cast<char*>(malloc(format_str.len));
            memcpy((void*)format_str.data, format_qb.data(), format_str.len);
            libqt_string cbval2 = format_str;

            QImageIOHandler* callback_ret = create_cb(this, cbval1, cbval2);
            libqt_free(format_str.data);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qimageioplugin_event_isbase) {
            qimageioplugin_event_isbase = false;
            return QImageIOPlugin::event(event);
        }
        auto event_cb = qimageioplugin_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QImageIOPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qimageioplugin_eventfilter_isbase) {
            qimageioplugin_eventfilter_isbase = false;
            return QImageIOPlugin::eventFilter(watched, event);
        }
        auto eventfilter_cb = qimageioplugin_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QImageIOPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qimageioplugin_timerevent_isbase) {
            qimageioplugin_timerevent_isbase = false;
            QImageIOPlugin::timerEvent(event);
            return;
        }
        auto timerevent_cb = qimageioplugin_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QImageIOPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qimageioplugin_childevent_isbase) {
            qimageioplugin_childevent_isbase = false;
            QImageIOPlugin::childEvent(event);
            return;
        }
        auto childevent_cb = qimageioplugin_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QImageIOPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qimageioplugin_customevent_isbase) {
            qimageioplugin_customevent_isbase = false;
            QImageIOPlugin::customEvent(event);
            return;
        }
        auto customevent_cb = qimageioplugin_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QImageIOPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qimageioplugin_connectnotify_isbase) {
            qimageioplugin_connectnotify_isbase = false;
            QImageIOPlugin::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qimageioplugin_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QImageIOPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qimageioplugin_disconnectnotify_isbase) {
            qimageioplugin_disconnectnotify_isbase = false;
            QImageIOPlugin::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qimageioplugin_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QImageIOPlugin::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qimageioplugin_sender_isbase) {
            qimageioplugin_sender_isbase = false;
            return QImageIOPlugin::sender();
        }
        auto sender_cb = qimageioplugin_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QImageIOPlugin::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qimageioplugin_sendersignalindex_isbase) {
            qimageioplugin_sendersignalindex_isbase = false;
            return QImageIOPlugin::senderSignalIndex();
        }
        auto sendersignalindex_cb = qimageioplugin_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QImageIOPlugin::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qimageioplugin_receivers_isbase) {
            qimageioplugin_receivers_isbase = false;
            return QImageIOPlugin::receivers(signal);
        }
        auto receivers_cb = qimageioplugin_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QImageIOPlugin::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qimageioplugin_issignalconnected_isbase) {
            qimageioplugin_issignalconnected_isbase = false;
            return QImageIOPlugin::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qimageioplugin_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QImageIOPlugin::isSignalConnected(signal);
    }

    // Friend functions
    friend void QImageIOPlugin_TimerEvent(QImageIOPlugin* self, QTimerEvent* event);
    friend void QImageIOPlugin_SuperTimerEvent(QImageIOPlugin* self, QTimerEvent* event);
    friend void QImageIOPlugin_ChildEvent(QImageIOPlugin* self, QChildEvent* event);
    friend void QImageIOPlugin_SuperChildEvent(QImageIOPlugin* self, QChildEvent* event);
    friend void QImageIOPlugin_CustomEvent(QImageIOPlugin* self, QEvent* event);
    friend void QImageIOPlugin_SuperCustomEvent(QImageIOPlugin* self, QEvent* event);
    friend void QImageIOPlugin_ConnectNotify(QImageIOPlugin* self, const QMetaMethod* signal);
    friend void QImageIOPlugin_SuperConnectNotify(QImageIOPlugin* self, const QMetaMethod* signal);
    friend void QImageIOPlugin_DisconnectNotify(QImageIOPlugin* self, const QMetaMethod* signal);
    friend void QImageIOPlugin_SuperDisconnectNotify(QImageIOPlugin* self, const QMetaMethod* signal);
    friend QObject* QImageIOPlugin_Sender(const QImageIOPlugin* self);
    friend QObject* QImageIOPlugin_SuperSender(const QImageIOPlugin* self);
    friend int QImageIOPlugin_SenderSignalIndex(const QImageIOPlugin* self);
    friend int QImageIOPlugin_SuperSenderSignalIndex(const QImageIOPlugin* self);
    friend int QImageIOPlugin_Receivers(const QImageIOPlugin* self, const char* signal);
    friend int QImageIOPlugin_SuperReceivers(const QImageIOPlugin* self, const char* signal);
    friend bool QImageIOPlugin_IsSignalConnected(const QImageIOPlugin* self, const QMetaMethod* signal);
    friend bool QImageIOPlugin_SuperIsSignalConnected(const QImageIOPlugin* self, const QMetaMethod* signal);
};

#endif
