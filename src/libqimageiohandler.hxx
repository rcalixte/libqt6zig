#pragma once
#ifndef LIBQIMAGEIOHANDLER_HXX
#define LIBQIMAGEIOHANDLER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QImageIOHandler
class VirtualQImageIOHandler : public QImageIOHandler {
  public:
    // Virtual class public types (including callbacks and access types)
    using QImageIOHandler_CanRead_Callback = bool (*)(const QImageIOHandler*);
    using QImageIOHandler_Read_Callback = bool (*)(QImageIOHandler*, QImage*);
    using QImageIOHandler_Write_Callback = bool (*)(QImageIOHandler*, QImage*);
    using QImageIOHandler_Option_Callback = QVariant* (*)(const QImageIOHandler*, int);
    using QImageIOHandler_SetOption_Callback = void (*)(QImageIOHandler*, int, QVariant*);
    using QImageIOHandler_SupportsOption_Callback = bool (*)(const QImageIOHandler*, int);
    using QImageIOHandler_JumpToNextImage_Callback = bool (*)(QImageIOHandler*);
    using QImageIOHandler_JumpToImage_Callback = bool (*)(QImageIOHandler*, int);
    using QImageIOHandler_LoopCount_Callback = int (*)(const QImageIOHandler*);
    using QImageIOHandler_ImageCount_Callback = int (*)(const QImageIOHandler*);
    using QImageIOHandler_NextImageDelay_Callback = int (*)(const QImageIOHandler*);
    using QImageIOHandler_CurrentImageNumber_Callback = int (*)(const QImageIOHandler*);
    using QImageIOHandler_CurrentImageRect_Callback = QRect* (*)(const QImageIOHandler*);

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

    VirtualQImageIOHandler() : QImageIOHandler() {};

    // Virtual method for C ABI access and custom callback
    virtual bool canRead() const override {
        if (qimageiohandler_canread_callback) {
            bool callback_ret = qimageiohandler_canread_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QImageIOHandler::canRead called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool read(QImage* image) override {
        if (qimageiohandler_read_callback) {
            QImage* cbval1 = image;
            bool callback_ret = qimageiohandler_read_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QImageIOHandler::read called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool write(const QImage& image) override {
        if (qimageiohandler_write_callback) {
            const QImage& image_ret = image;
            // Cast returned reference into pointer
            QImage* cbval1 = const_cast<QImage*>(&image_ret);
            bool callback_ret = qimageiohandler_write_callback(this, cbval1);
            return callback_ret;
        }
        return QImageIOHandler::write(image);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant option(QImageIOHandler::ImageOption option) const override {
        if (qimageiohandler_option_callback) {
            int cbval1 = static_cast<int>(option);
            QVariant* callback_ret = qimageiohandler_option_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QImageIOHandler::option(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOption(QImageIOHandler::ImageOption option, const QVariant& value) override {
        if (qimageiohandler_setoption_callback) {
            int cbval1 = static_cast<int>(option);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            qimageiohandler_setoption_callback(this, cbval1, cbval2);
            return;
        }
        QImageIOHandler::setOption(option, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsOption(QImageIOHandler::ImageOption option) const override {
        if (qimageiohandler_supportsoption_callback) {
            int cbval1 = static_cast<int>(option);
            bool callback_ret = qimageiohandler_supportsoption_callback(this, cbval1);
            return callback_ret;
        }
        return QImageIOHandler::supportsOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool jumpToNextImage() override {
        if (qimageiohandler_jumptonextimage_callback) {
            bool callback_ret = qimageiohandler_jumptonextimage_callback(this);
            return callback_ret;
        }
        return QImageIOHandler::jumpToNextImage();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool jumpToImage(int imageNumber) override {
        if (qimageiohandler_jumptoimage_callback) {
            int cbval1 = imageNumber;
            bool callback_ret = qimageiohandler_jumptoimage_callback(this, cbval1);
            return callback_ret;
        }
        return QImageIOHandler::jumpToImage(imageNumber);
    }

    // Virtual method for C ABI access and custom callback
    virtual int loopCount() const override {
        if (qimageiohandler_loopcount_callback) {
            int callback_ret = qimageiohandler_loopcount_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QImageIOHandler::loopCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual int imageCount() const override {
        if (qimageiohandler_imagecount_callback) {
            int callback_ret = qimageiohandler_imagecount_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QImageIOHandler::imageCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual int nextImageDelay() const override {
        if (qimageiohandler_nextimagedelay_callback) {
            int callback_ret = qimageiohandler_nextimagedelay_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QImageIOHandler::nextImageDelay();
    }

    // Virtual method for C ABI access and custom callback
    virtual int currentImageNumber() const override {
        if (qimageiohandler_currentimagenumber_callback) {
            int callback_ret = qimageiohandler_currentimagenumber_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QImageIOHandler::currentImageNumber();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect currentImageRect() const override {
        if (qimageiohandler_currentimagerect_callback) {
            QRect* callback_ret = qimageiohandler_currentimagerect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QImageIOHandler::currentImageRect();
    }
};

// This class is a subclass of QImageIOPlugin
class VirtualQImageIOPlugin : public QImageIOPlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using QImageIOPlugin_MetaObject_Callback = QMetaObject* (*)(const QImageIOPlugin*);
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
    using QImageIOPlugin::isSignalConnected;
    using QImageIOPlugin::receivers;
    using QImageIOPlugin::sender;
    using QImageIOPlugin::senderSignalIndex;

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

    // Access struct
    struct Base : QImageIOPlugin {
        using QImageIOPlugin::childEvent;
        using QImageIOPlugin::connectNotify;
        using QImageIOPlugin::customEvent;
        using QImageIOPlugin::disconnectNotify;
        using QImageIOPlugin::timerEvent;
    };

    VirtualQImageIOPlugin() : QImageIOPlugin() {};
    VirtualQImageIOPlugin(QObject* parent) : QImageIOPlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qimageioplugin_metaobject_callback) {
            QMetaObject* callback_ret = qimageioplugin_metaobject_callback(this);
            return callback_ret;
        }
        return QImageIOPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qimageioplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qimageioplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QImageIOPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qimageioplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qimageioplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QImageIOPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QImageIOPlugin::Capabilities capabilities(QIODevice* device, const QByteArray& format) const override {
        if (qimageioplugin_capabilities_callback) {
            QIODevice* cbval1 = device;
            const QByteArray format_qb = format;
            libqt_string format_str;
            format_str.len = format_qb.length();
            format_str.data = static_cast<char*>(malloc(format_str.len));
            memcpy((void*)format_str.data, format_qb.data(), format_str.len);
            libqt_string cbval2 = format_str;
            int callback_ret = qimageioplugin_capabilities_callback(this, cbval1, cbval2);
            libqt_free(format_str.data);
            return static_cast<QImageIOPlugin::Capabilities>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QImageIOPlugin::capabilities called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QImageIOHandler* create(QIODevice* device, const QByteArray& format) const override {
        if (qimageioplugin_create_callback) {
            QIODevice* cbval1 = device;
            const QByteArray format_qb = format;
            libqt_string format_str;
            format_str.len = format_qb.length();
            format_str.data = static_cast<char*>(malloc(format_str.len));
            memcpy((void*)format_str.data, format_qb.data(), format_str.len);
            libqt_string cbval2 = format_str;
            QImageIOHandler* callback_ret = qimageioplugin_create_callback(this, cbval1, cbval2);
            libqt_free(format_str.data);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QImageIOPlugin::create called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qimageioplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qimageioplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return QImageIOPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qimageioplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qimageioplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QImageIOPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qimageioplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qimageioplugin_timerevent_callback(this, cbval1);
            return;
        }
        QImageIOPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qimageioplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            qimageioplugin_childevent_callback(this, cbval1);
            return;
        }
        QImageIOPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qimageioplugin_customevent_callback) {
            QEvent* cbval1 = event;
            qimageioplugin_customevent_callback(this, cbval1);
            return;
        }
        QImageIOPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qimageioplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qimageioplugin_connectnotify_callback(this, cbval1);
            return;
        }
        QImageIOPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qimageioplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qimageioplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        QImageIOPlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void QImageIOPlugin_SuperTimerEvent(QImageIOPlugin* self, QTimerEvent* event);
    friend void QImageIOPlugin_SuperChildEvent(QImageIOPlugin* self, QChildEvent* event);
    friend void QImageIOPlugin_SuperCustomEvent(QImageIOPlugin* self, QEvent* event);
    friend void QImageIOPlugin_SuperConnectNotify(QImageIOPlugin* self, const QMetaMethod* signal);
    friend void QImageIOPlugin_SuperDisconnectNotify(QImageIOPlugin* self, const QMetaMethod* signal);
};

#endif
