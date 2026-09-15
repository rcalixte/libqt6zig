#pragma once
#ifndef QML_LIBQQMLEXTENSIONPLUGIN_HXX
#define QML_LIBQQMLEXTENSIONPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlExtensionPlugin so that we can call protected methods
class VirtualQQmlExtensionPlugin : public QQmlExtensionPlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlExtensionPlugin = true;

    // Virtual class public types (including callbacks)
    using QQmlExtensionPlugin_MetaObject_Callback = QMetaObject* (*)();
    using QQmlExtensionPlugin_Metacast_Callback = void* (*)(QQmlExtensionPlugin*, const char*);
    using QQmlExtensionPlugin_Metacall_Callback = int (*)(QQmlExtensionPlugin*, int, int, void**);
    using QQmlExtensionPlugin_RegisterTypes_Callback = void (*)(QQmlExtensionPlugin*, const char*);
    using QQmlExtensionPlugin_UnregisterTypes_Callback = void (*)();
    using QQmlExtensionPlugin_InitializeEngine_Callback = void (*)(QQmlExtensionPlugin*, QQmlEngine*, const char*);
    using QQmlExtensionPlugin_Event_Callback = bool (*)(QQmlExtensionPlugin*, QEvent*);
    using QQmlExtensionPlugin_EventFilter_Callback = bool (*)(QQmlExtensionPlugin*, QObject*, QEvent*);
    using QQmlExtensionPlugin_TimerEvent_Callback = void (*)(QQmlExtensionPlugin*, QTimerEvent*);
    using QQmlExtensionPlugin_ChildEvent_Callback = void (*)(QQmlExtensionPlugin*, QChildEvent*);
    using QQmlExtensionPlugin_CustomEvent_Callback = void (*)(QQmlExtensionPlugin*, QEvent*);
    using QQmlExtensionPlugin_ConnectNotify_Callback = void (*)(QQmlExtensionPlugin*, QMetaMethod*);
    using QQmlExtensionPlugin_DisconnectNotify_Callback = void (*)(QQmlExtensionPlugin*, QMetaMethod*);
    using QQmlExtensionPlugin_Sender_Callback = QObject* (*)();
    using QQmlExtensionPlugin_SenderSignalIndex_Callback = int (*)();
    using QQmlExtensionPlugin_Receivers_Callback = int (*)(const QQmlExtensionPlugin*, const char*);
    using QQmlExtensionPlugin_IsSignalConnected_Callback = bool (*)(const QQmlExtensionPlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQmlExtensionPlugin_MetaObject_Callback qqmlextensionplugin_metaobject_callback = nullptr;
    QQmlExtensionPlugin_Metacast_Callback qqmlextensionplugin_metacast_callback = nullptr;
    QQmlExtensionPlugin_Metacall_Callback qqmlextensionplugin_metacall_callback = nullptr;
    QQmlExtensionPlugin_RegisterTypes_Callback qqmlextensionplugin_registertypes_callback = nullptr;
    QQmlExtensionPlugin_UnregisterTypes_Callback qqmlextensionplugin_unregistertypes_callback = nullptr;
    QQmlExtensionPlugin_InitializeEngine_Callback qqmlextensionplugin_initializeengine_callback = nullptr;
    QQmlExtensionPlugin_Event_Callback qqmlextensionplugin_event_callback = nullptr;
    QQmlExtensionPlugin_EventFilter_Callback qqmlextensionplugin_eventfilter_callback = nullptr;
    QQmlExtensionPlugin_TimerEvent_Callback qqmlextensionplugin_timerevent_callback = nullptr;
    QQmlExtensionPlugin_ChildEvent_Callback qqmlextensionplugin_childevent_callback = nullptr;
    QQmlExtensionPlugin_CustomEvent_Callback qqmlextensionplugin_customevent_callback = nullptr;
    QQmlExtensionPlugin_ConnectNotify_Callback qqmlextensionplugin_connectnotify_callback = nullptr;
    QQmlExtensionPlugin_DisconnectNotify_Callback qqmlextensionplugin_disconnectnotify_callback = nullptr;
    QQmlExtensionPlugin_Sender_Callback qqmlextensionplugin_sender_callback = nullptr;
    QQmlExtensionPlugin_SenderSignalIndex_Callback qqmlextensionplugin_sendersignalindex_callback = nullptr;
    QQmlExtensionPlugin_Receivers_Callback qqmlextensionplugin_receivers_callback = nullptr;
    QQmlExtensionPlugin_IsSignalConnected_Callback qqmlextensionplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qqmlextensionplugin_metaobject_isbase = false;
    mutable bool qqmlextensionplugin_metacast_isbase = false;
    mutable bool qqmlextensionplugin_metacall_isbase = false;
    mutable bool qqmlextensionplugin_registertypes_isbase = false;
    mutable bool qqmlextensionplugin_unregistertypes_isbase = false;
    mutable bool qqmlextensionplugin_initializeengine_isbase = false;
    mutable bool qqmlextensionplugin_event_isbase = false;
    mutable bool qqmlextensionplugin_eventfilter_isbase = false;
    mutable bool qqmlextensionplugin_timerevent_isbase = false;
    mutable bool qqmlextensionplugin_childevent_isbase = false;
    mutable bool qqmlextensionplugin_customevent_isbase = false;
    mutable bool qqmlextensionplugin_connectnotify_isbase = false;
    mutable bool qqmlextensionplugin_disconnectnotify_isbase = false;
    mutable bool qqmlextensionplugin_sender_isbase = false;
    mutable bool qqmlextensionplugin_sendersignalindex_isbase = false;
    mutable bool qqmlextensionplugin_receivers_isbase = false;
    mutable bool qqmlextensionplugin_issignalconnected_isbase = false;

  public:
    VirtualQQmlExtensionPlugin() : QQmlExtensionPlugin() {};
    VirtualQQmlExtensionPlugin(QObject* parent) : QQmlExtensionPlugin(parent) {};

    // Callback setters
    inline void setQQmlExtensionPlugin_MetaObject_Callback(QQmlExtensionPlugin_MetaObject_Callback cb) { qqmlextensionplugin_metaobject_callback = cb; }
    inline void setQQmlExtensionPlugin_Metacast_Callback(QQmlExtensionPlugin_Metacast_Callback cb) { qqmlextensionplugin_metacast_callback = cb; }
    inline void setQQmlExtensionPlugin_Metacall_Callback(QQmlExtensionPlugin_Metacall_Callback cb) { qqmlextensionplugin_metacall_callback = cb; }
    inline void setQQmlExtensionPlugin_RegisterTypes_Callback(QQmlExtensionPlugin_RegisterTypes_Callback cb) { qqmlextensionplugin_registertypes_callback = cb; }
    inline void setQQmlExtensionPlugin_UnregisterTypes_Callback(QQmlExtensionPlugin_UnregisterTypes_Callback cb) { qqmlextensionplugin_unregistertypes_callback = cb; }
    inline void setQQmlExtensionPlugin_InitializeEngine_Callback(QQmlExtensionPlugin_InitializeEngine_Callback cb) { qqmlextensionplugin_initializeengine_callback = cb; }
    inline void setQQmlExtensionPlugin_Event_Callback(QQmlExtensionPlugin_Event_Callback cb) { qqmlextensionplugin_event_callback = cb; }
    inline void setQQmlExtensionPlugin_EventFilter_Callback(QQmlExtensionPlugin_EventFilter_Callback cb) { qqmlextensionplugin_eventfilter_callback = cb; }
    inline void setQQmlExtensionPlugin_TimerEvent_Callback(QQmlExtensionPlugin_TimerEvent_Callback cb) { qqmlextensionplugin_timerevent_callback = cb; }
    inline void setQQmlExtensionPlugin_ChildEvent_Callback(QQmlExtensionPlugin_ChildEvent_Callback cb) { qqmlextensionplugin_childevent_callback = cb; }
    inline void setQQmlExtensionPlugin_CustomEvent_Callback(QQmlExtensionPlugin_CustomEvent_Callback cb) { qqmlextensionplugin_customevent_callback = cb; }
    inline void setQQmlExtensionPlugin_ConnectNotify_Callback(QQmlExtensionPlugin_ConnectNotify_Callback cb) { qqmlextensionplugin_connectnotify_callback = cb; }
    inline void setQQmlExtensionPlugin_DisconnectNotify_Callback(QQmlExtensionPlugin_DisconnectNotify_Callback cb) { qqmlextensionplugin_disconnectnotify_callback = cb; }
    inline void setQQmlExtensionPlugin_Sender_Callback(QQmlExtensionPlugin_Sender_Callback cb) { qqmlextensionplugin_sender_callback = cb; }
    inline void setQQmlExtensionPlugin_SenderSignalIndex_Callback(QQmlExtensionPlugin_SenderSignalIndex_Callback cb) { qqmlextensionplugin_sendersignalindex_callback = cb; }
    inline void setQQmlExtensionPlugin_Receivers_Callback(QQmlExtensionPlugin_Receivers_Callback cb) { qqmlextensionplugin_receivers_callback = cb; }
    inline void setQQmlExtensionPlugin_IsSignalConnected_Callback(QQmlExtensionPlugin_IsSignalConnected_Callback cb) { qqmlextensionplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQmlExtensionPlugin_MetaObject_IsBase(bool value) const { qqmlextensionplugin_metaobject_isbase = value; }
    inline void setQQmlExtensionPlugin_Metacast_IsBase(bool value) const { qqmlextensionplugin_metacast_isbase = value; }
    inline void setQQmlExtensionPlugin_Metacall_IsBase(bool value) const { qqmlextensionplugin_metacall_isbase = value; }
    inline void setQQmlExtensionPlugin_RegisterTypes_IsBase(bool value) const { qqmlextensionplugin_registertypes_isbase = value; }
    inline void setQQmlExtensionPlugin_UnregisterTypes_IsBase(bool value) const { qqmlextensionplugin_unregistertypes_isbase = value; }
    inline void setQQmlExtensionPlugin_InitializeEngine_IsBase(bool value) const { qqmlextensionplugin_initializeengine_isbase = value; }
    inline void setQQmlExtensionPlugin_Event_IsBase(bool value) const { qqmlextensionplugin_event_isbase = value; }
    inline void setQQmlExtensionPlugin_EventFilter_IsBase(bool value) const { qqmlextensionplugin_eventfilter_isbase = value; }
    inline void setQQmlExtensionPlugin_TimerEvent_IsBase(bool value) const { qqmlextensionplugin_timerevent_isbase = value; }
    inline void setQQmlExtensionPlugin_ChildEvent_IsBase(bool value) const { qqmlextensionplugin_childevent_isbase = value; }
    inline void setQQmlExtensionPlugin_CustomEvent_IsBase(bool value) const { qqmlextensionplugin_customevent_isbase = value; }
    inline void setQQmlExtensionPlugin_ConnectNotify_IsBase(bool value) const { qqmlextensionplugin_connectnotify_isbase = value; }
    inline void setQQmlExtensionPlugin_DisconnectNotify_IsBase(bool value) const { qqmlextensionplugin_disconnectnotify_isbase = value; }
    inline void setQQmlExtensionPlugin_Sender_IsBase(bool value) const { qqmlextensionplugin_sender_isbase = value; }
    inline void setQQmlExtensionPlugin_SenderSignalIndex_IsBase(bool value) const { qqmlextensionplugin_sendersignalindex_isbase = value; }
    inline void setQQmlExtensionPlugin_Receivers_IsBase(bool value) const { qqmlextensionplugin_receivers_isbase = value; }
    inline void setQQmlExtensionPlugin_IsSignalConnected_IsBase(bool value) const { qqmlextensionplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlextensionplugin_metaobject_isbase) {
            qqmlextensionplugin_metaobject_isbase = false;
            return QQmlExtensionPlugin::metaObject();
        }
        auto metaobject_cb = qqmlextensionplugin_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQmlExtensionPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlextensionplugin_metacast_isbase) {
            qqmlextensionplugin_metacast_isbase = false;
            return QQmlExtensionPlugin::qt_metacast(param1);
        }
        auto metacast_cb = qqmlextensionplugin_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlExtensionPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlextensionplugin_metacall_isbase) {
            qqmlextensionplugin_metacall_isbase = false;
            return QQmlExtensionPlugin::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qqmlextensionplugin_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlExtensionPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void registerTypes(const char* uri) override {
        auto registertypes_cb = qqmlextensionplugin_registertypes_callback;
        if (registertypes_cb) {
            const char* cbval1 = (const char*)uri;
            registertypes_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unregisterTypes() override {
        if (qqmlextensionplugin_unregistertypes_isbase) {
            qqmlextensionplugin_unregistertypes_isbase = false;
            QQmlExtensionPlugin::unregisterTypes();
            return;
        }
        auto unregistertypes_cb = qqmlextensionplugin_unregistertypes_callback;
        if (unregistertypes_cb) {
            unregistertypes_cb();
            return;
        }
        QQmlExtensionPlugin::unregisterTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initializeEngine(QQmlEngine* engine, const char* uri) override {
        if (qqmlextensionplugin_initializeengine_isbase) {
            qqmlextensionplugin_initializeengine_isbase = false;
            QQmlExtensionPlugin::initializeEngine(engine, uri);
            return;
        }
        auto initializeengine_cb = qqmlextensionplugin_initializeengine_callback;
        if (initializeengine_cb) {
            QQmlEngine* cbval1 = engine;
            const char* cbval2 = (const char*)uri;
            initializeengine_cb(this, cbval1, cbval2);
            return;
        }
        QQmlExtensionPlugin::initializeEngine(engine, uri);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlextensionplugin_event_isbase) {
            qqmlextensionplugin_event_isbase = false;
            return QQmlExtensionPlugin::event(event);
        }
        auto event_cb = qqmlextensionplugin_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlExtensionPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlextensionplugin_eventfilter_isbase) {
            qqmlextensionplugin_eventfilter_isbase = false;
            return QQmlExtensionPlugin::eventFilter(watched, event);
        }
        auto eventfilter_cb = qqmlextensionplugin_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlExtensionPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlextensionplugin_timerevent_isbase) {
            qqmlextensionplugin_timerevent_isbase = false;
            QQmlExtensionPlugin::timerEvent(event);
            return;
        }
        auto timerevent_cb = qqmlextensionplugin_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQmlExtensionPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlextensionplugin_childevent_isbase) {
            qqmlextensionplugin_childevent_isbase = false;
            QQmlExtensionPlugin::childEvent(event);
            return;
        }
        auto childevent_cb = qqmlextensionplugin_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQmlExtensionPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlextensionplugin_customevent_isbase) {
            qqmlextensionplugin_customevent_isbase = false;
            QQmlExtensionPlugin::customEvent(event);
            return;
        }
        auto customevent_cb = qqmlextensionplugin_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQmlExtensionPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlextensionplugin_connectnotify_isbase) {
            qqmlextensionplugin_connectnotify_isbase = false;
            QQmlExtensionPlugin::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qqmlextensionplugin_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQmlExtensionPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlextensionplugin_disconnectnotify_isbase) {
            qqmlextensionplugin_disconnectnotify_isbase = false;
            QQmlExtensionPlugin::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qqmlextensionplugin_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQmlExtensionPlugin::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qqmlextensionplugin_sender_isbase) {
            qqmlextensionplugin_sender_isbase = false;
            return QQmlExtensionPlugin::sender();
        }
        auto sender_cb = qqmlextensionplugin_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQmlExtensionPlugin::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qqmlextensionplugin_sendersignalindex_isbase) {
            qqmlextensionplugin_sendersignalindex_isbase = false;
            return QQmlExtensionPlugin::senderSignalIndex();
        }
        auto sendersignalindex_cb = qqmlextensionplugin_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQmlExtensionPlugin::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qqmlextensionplugin_receivers_isbase) {
            qqmlextensionplugin_receivers_isbase = false;
            return QQmlExtensionPlugin::receivers(signal);
        }
        auto receivers_cb = qqmlextensionplugin_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQmlExtensionPlugin::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qqmlextensionplugin_issignalconnected_isbase) {
            qqmlextensionplugin_issignalconnected_isbase = false;
            return QQmlExtensionPlugin::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qqmlextensionplugin_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlExtensionPlugin::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQmlExtensionPlugin_TimerEvent(QQmlExtensionPlugin* self, QTimerEvent* event);
    friend void QQmlExtensionPlugin_SuperTimerEvent(QQmlExtensionPlugin* self, QTimerEvent* event);
    friend void QQmlExtensionPlugin_ChildEvent(QQmlExtensionPlugin* self, QChildEvent* event);
    friend void QQmlExtensionPlugin_SuperChildEvent(QQmlExtensionPlugin* self, QChildEvent* event);
    friend void QQmlExtensionPlugin_CustomEvent(QQmlExtensionPlugin* self, QEvent* event);
    friend void QQmlExtensionPlugin_SuperCustomEvent(QQmlExtensionPlugin* self, QEvent* event);
    friend void QQmlExtensionPlugin_ConnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal);
    friend void QQmlExtensionPlugin_SuperConnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal);
    friend void QQmlExtensionPlugin_DisconnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal);
    friend void QQmlExtensionPlugin_SuperDisconnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal);
    friend QObject* QQmlExtensionPlugin_Sender(const QQmlExtensionPlugin* self);
    friend QObject* QQmlExtensionPlugin_SuperSender(const QQmlExtensionPlugin* self);
    friend int QQmlExtensionPlugin_SenderSignalIndex(const QQmlExtensionPlugin* self);
    friend int QQmlExtensionPlugin_SuperSenderSignalIndex(const QQmlExtensionPlugin* self);
    friend int QQmlExtensionPlugin_Receivers(const QQmlExtensionPlugin* self, const char* signal);
    friend int QQmlExtensionPlugin_SuperReceivers(const QQmlExtensionPlugin* self, const char* signal);
    friend bool QQmlExtensionPlugin_IsSignalConnected(const QQmlExtensionPlugin* self, const QMetaMethod* signal);
    friend bool QQmlExtensionPlugin_SuperIsSignalConnected(const QQmlExtensionPlugin* self, const QMetaMethod* signal);
};

// This class is a subclass of QQmlEngineExtensionPlugin so that we can call protected methods
class VirtualQQmlEngineExtensionPlugin final : public QQmlEngineExtensionPlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlEngineExtensionPlugin = true;

    // Virtual class public types (including callbacks)
    using QQmlEngineExtensionPlugin_MetaObject_Callback = QMetaObject* (*)();
    using QQmlEngineExtensionPlugin_Metacast_Callback = void* (*)(QQmlEngineExtensionPlugin*, const char*);
    using QQmlEngineExtensionPlugin_Metacall_Callback = int (*)(QQmlEngineExtensionPlugin*, int, int, void**);
    using QQmlEngineExtensionPlugin_InitializeEngine_Callback = void (*)(QQmlEngineExtensionPlugin*, QQmlEngine*, const char*);
    using QQmlEngineExtensionPlugin_Event_Callback = bool (*)(QQmlEngineExtensionPlugin*, QEvent*);
    using QQmlEngineExtensionPlugin_EventFilter_Callback = bool (*)(QQmlEngineExtensionPlugin*, QObject*, QEvent*);
    using QQmlEngineExtensionPlugin_TimerEvent_Callback = void (*)(QQmlEngineExtensionPlugin*, QTimerEvent*);
    using QQmlEngineExtensionPlugin_ChildEvent_Callback = void (*)(QQmlEngineExtensionPlugin*, QChildEvent*);
    using QQmlEngineExtensionPlugin_CustomEvent_Callback = void (*)(QQmlEngineExtensionPlugin*, QEvent*);
    using QQmlEngineExtensionPlugin_ConnectNotify_Callback = void (*)(QQmlEngineExtensionPlugin*, QMetaMethod*);
    using QQmlEngineExtensionPlugin_DisconnectNotify_Callback = void (*)(QQmlEngineExtensionPlugin*, QMetaMethod*);
    using QQmlEngineExtensionPlugin_Sender_Callback = QObject* (*)();
    using QQmlEngineExtensionPlugin_SenderSignalIndex_Callback = int (*)();
    using QQmlEngineExtensionPlugin_Receivers_Callback = int (*)(const QQmlEngineExtensionPlugin*, const char*);
    using QQmlEngineExtensionPlugin_IsSignalConnected_Callback = bool (*)(const QQmlEngineExtensionPlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQmlEngineExtensionPlugin_MetaObject_Callback qqmlengineextensionplugin_metaobject_callback = nullptr;
    QQmlEngineExtensionPlugin_Metacast_Callback qqmlengineextensionplugin_metacast_callback = nullptr;
    QQmlEngineExtensionPlugin_Metacall_Callback qqmlengineextensionplugin_metacall_callback = nullptr;
    QQmlEngineExtensionPlugin_InitializeEngine_Callback qqmlengineextensionplugin_initializeengine_callback = nullptr;
    QQmlEngineExtensionPlugin_Event_Callback qqmlengineextensionplugin_event_callback = nullptr;
    QQmlEngineExtensionPlugin_EventFilter_Callback qqmlengineextensionplugin_eventfilter_callback = nullptr;
    QQmlEngineExtensionPlugin_TimerEvent_Callback qqmlengineextensionplugin_timerevent_callback = nullptr;
    QQmlEngineExtensionPlugin_ChildEvent_Callback qqmlengineextensionplugin_childevent_callback = nullptr;
    QQmlEngineExtensionPlugin_CustomEvent_Callback qqmlengineextensionplugin_customevent_callback = nullptr;
    QQmlEngineExtensionPlugin_ConnectNotify_Callback qqmlengineextensionplugin_connectnotify_callback = nullptr;
    QQmlEngineExtensionPlugin_DisconnectNotify_Callback qqmlengineextensionplugin_disconnectnotify_callback = nullptr;
    QQmlEngineExtensionPlugin_Sender_Callback qqmlengineextensionplugin_sender_callback = nullptr;
    QQmlEngineExtensionPlugin_SenderSignalIndex_Callback qqmlengineextensionplugin_sendersignalindex_callback = nullptr;
    QQmlEngineExtensionPlugin_Receivers_Callback qqmlengineextensionplugin_receivers_callback = nullptr;
    QQmlEngineExtensionPlugin_IsSignalConnected_Callback qqmlengineextensionplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qqmlengineextensionplugin_metaobject_isbase = false;
    mutable bool qqmlengineextensionplugin_metacast_isbase = false;
    mutable bool qqmlengineextensionplugin_metacall_isbase = false;
    mutable bool qqmlengineextensionplugin_initializeengine_isbase = false;
    mutable bool qqmlengineextensionplugin_event_isbase = false;
    mutable bool qqmlengineextensionplugin_eventfilter_isbase = false;
    mutable bool qqmlengineextensionplugin_timerevent_isbase = false;
    mutable bool qqmlengineextensionplugin_childevent_isbase = false;
    mutable bool qqmlengineextensionplugin_customevent_isbase = false;
    mutable bool qqmlengineextensionplugin_connectnotify_isbase = false;
    mutable bool qqmlengineextensionplugin_disconnectnotify_isbase = false;
    mutable bool qqmlengineextensionplugin_sender_isbase = false;
    mutable bool qqmlengineextensionplugin_sendersignalindex_isbase = false;
    mutable bool qqmlengineextensionplugin_receivers_isbase = false;
    mutable bool qqmlengineextensionplugin_issignalconnected_isbase = false;

  public:
    VirtualQQmlEngineExtensionPlugin() : QQmlEngineExtensionPlugin() {};
    VirtualQQmlEngineExtensionPlugin(QObject* parent) : QQmlEngineExtensionPlugin(parent) {};

    // Callback setters
    inline void setQQmlEngineExtensionPlugin_MetaObject_Callback(QQmlEngineExtensionPlugin_MetaObject_Callback cb) { qqmlengineextensionplugin_metaobject_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_Metacast_Callback(QQmlEngineExtensionPlugin_Metacast_Callback cb) { qqmlengineextensionplugin_metacast_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_Metacall_Callback(QQmlEngineExtensionPlugin_Metacall_Callback cb) { qqmlengineextensionplugin_metacall_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_InitializeEngine_Callback(QQmlEngineExtensionPlugin_InitializeEngine_Callback cb) { qqmlengineextensionplugin_initializeengine_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_Event_Callback(QQmlEngineExtensionPlugin_Event_Callback cb) { qqmlengineextensionplugin_event_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_EventFilter_Callback(QQmlEngineExtensionPlugin_EventFilter_Callback cb) { qqmlengineextensionplugin_eventfilter_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_TimerEvent_Callback(QQmlEngineExtensionPlugin_TimerEvent_Callback cb) { qqmlengineextensionplugin_timerevent_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_ChildEvent_Callback(QQmlEngineExtensionPlugin_ChildEvent_Callback cb) { qqmlengineextensionplugin_childevent_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_CustomEvent_Callback(QQmlEngineExtensionPlugin_CustomEvent_Callback cb) { qqmlengineextensionplugin_customevent_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_ConnectNotify_Callback(QQmlEngineExtensionPlugin_ConnectNotify_Callback cb) { qqmlengineextensionplugin_connectnotify_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_DisconnectNotify_Callback(QQmlEngineExtensionPlugin_DisconnectNotify_Callback cb) { qqmlengineextensionplugin_disconnectnotify_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_Sender_Callback(QQmlEngineExtensionPlugin_Sender_Callback cb) { qqmlengineextensionplugin_sender_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_SenderSignalIndex_Callback(QQmlEngineExtensionPlugin_SenderSignalIndex_Callback cb) { qqmlengineextensionplugin_sendersignalindex_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_Receivers_Callback(QQmlEngineExtensionPlugin_Receivers_Callback cb) { qqmlengineextensionplugin_receivers_callback = cb; }
    inline void setQQmlEngineExtensionPlugin_IsSignalConnected_Callback(QQmlEngineExtensionPlugin_IsSignalConnected_Callback cb) { qqmlengineextensionplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQmlEngineExtensionPlugin_MetaObject_IsBase(bool value) const { qqmlengineextensionplugin_metaobject_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_Metacast_IsBase(bool value) const { qqmlengineextensionplugin_metacast_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_Metacall_IsBase(bool value) const { qqmlengineextensionplugin_metacall_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_InitializeEngine_IsBase(bool value) const { qqmlengineextensionplugin_initializeengine_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_Event_IsBase(bool value) const { qqmlengineextensionplugin_event_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_EventFilter_IsBase(bool value) const { qqmlengineextensionplugin_eventfilter_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_TimerEvent_IsBase(bool value) const { qqmlengineextensionplugin_timerevent_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_ChildEvent_IsBase(bool value) const { qqmlengineextensionplugin_childevent_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_CustomEvent_IsBase(bool value) const { qqmlengineextensionplugin_customevent_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_ConnectNotify_IsBase(bool value) const { qqmlengineextensionplugin_connectnotify_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_DisconnectNotify_IsBase(bool value) const { qqmlengineextensionplugin_disconnectnotify_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_Sender_IsBase(bool value) const { qqmlengineextensionplugin_sender_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_SenderSignalIndex_IsBase(bool value) const { qqmlengineextensionplugin_sendersignalindex_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_Receivers_IsBase(bool value) const { qqmlengineextensionplugin_receivers_isbase = value; }
    inline void setQQmlEngineExtensionPlugin_IsSignalConnected_IsBase(bool value) const { qqmlengineextensionplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlengineextensionplugin_metaobject_isbase) {
            qqmlengineextensionplugin_metaobject_isbase = false;
            return QQmlEngineExtensionPlugin::metaObject();
        }
        auto metaobject_cb = qqmlengineextensionplugin_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQmlEngineExtensionPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlengineextensionplugin_metacast_isbase) {
            qqmlengineextensionplugin_metacast_isbase = false;
            return QQmlEngineExtensionPlugin::qt_metacast(param1);
        }
        auto metacast_cb = qqmlengineextensionplugin_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlEngineExtensionPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlengineextensionplugin_metacall_isbase) {
            qqmlengineextensionplugin_metacall_isbase = false;
            return QQmlEngineExtensionPlugin::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qqmlengineextensionplugin_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlEngineExtensionPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initializeEngine(QQmlEngine* engine, const char* uri) override {
        if (qqmlengineextensionplugin_initializeengine_isbase) {
            qqmlengineextensionplugin_initializeengine_isbase = false;
            QQmlEngineExtensionPlugin::initializeEngine(engine, uri);
            return;
        }
        auto initializeengine_cb = qqmlengineextensionplugin_initializeengine_callback;
        if (initializeengine_cb) {
            QQmlEngine* cbval1 = engine;
            const char* cbval2 = (const char*)uri;
            initializeengine_cb(this, cbval1, cbval2);
            return;
        }
        QQmlEngineExtensionPlugin::initializeEngine(engine, uri);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlengineextensionplugin_event_isbase) {
            qqmlengineextensionplugin_event_isbase = false;
            return QQmlEngineExtensionPlugin::event(event);
        }
        auto event_cb = qqmlengineextensionplugin_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlEngineExtensionPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlengineextensionplugin_eventfilter_isbase) {
            qqmlengineextensionplugin_eventfilter_isbase = false;
            return QQmlEngineExtensionPlugin::eventFilter(watched, event);
        }
        auto eventfilter_cb = qqmlengineextensionplugin_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlEngineExtensionPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlengineextensionplugin_timerevent_isbase) {
            qqmlengineextensionplugin_timerevent_isbase = false;
            QQmlEngineExtensionPlugin::timerEvent(event);
            return;
        }
        auto timerevent_cb = qqmlengineextensionplugin_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQmlEngineExtensionPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlengineextensionplugin_childevent_isbase) {
            qqmlengineextensionplugin_childevent_isbase = false;
            QQmlEngineExtensionPlugin::childEvent(event);
            return;
        }
        auto childevent_cb = qqmlengineextensionplugin_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQmlEngineExtensionPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlengineextensionplugin_customevent_isbase) {
            qqmlengineextensionplugin_customevent_isbase = false;
            QQmlEngineExtensionPlugin::customEvent(event);
            return;
        }
        auto customevent_cb = qqmlengineextensionplugin_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQmlEngineExtensionPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlengineextensionplugin_connectnotify_isbase) {
            qqmlengineextensionplugin_connectnotify_isbase = false;
            QQmlEngineExtensionPlugin::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qqmlengineextensionplugin_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQmlEngineExtensionPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlengineextensionplugin_disconnectnotify_isbase) {
            qqmlengineextensionplugin_disconnectnotify_isbase = false;
            QQmlEngineExtensionPlugin::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qqmlengineextensionplugin_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQmlEngineExtensionPlugin::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qqmlengineextensionplugin_sender_isbase) {
            qqmlengineextensionplugin_sender_isbase = false;
            return QQmlEngineExtensionPlugin::sender();
        }
        auto sender_cb = qqmlengineextensionplugin_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQmlEngineExtensionPlugin::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qqmlengineextensionplugin_sendersignalindex_isbase) {
            qqmlengineextensionplugin_sendersignalindex_isbase = false;
            return QQmlEngineExtensionPlugin::senderSignalIndex();
        }
        auto sendersignalindex_cb = qqmlengineextensionplugin_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQmlEngineExtensionPlugin::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qqmlengineextensionplugin_receivers_isbase) {
            qqmlengineextensionplugin_receivers_isbase = false;
            return QQmlEngineExtensionPlugin::receivers(signal);
        }
        auto receivers_cb = qqmlengineextensionplugin_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQmlEngineExtensionPlugin::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qqmlengineextensionplugin_issignalconnected_isbase) {
            qqmlengineextensionplugin_issignalconnected_isbase = false;
            return QQmlEngineExtensionPlugin::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qqmlengineextensionplugin_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlEngineExtensionPlugin::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQmlEngineExtensionPlugin_TimerEvent(QQmlEngineExtensionPlugin* self, QTimerEvent* event);
    friend void QQmlEngineExtensionPlugin_SuperTimerEvent(QQmlEngineExtensionPlugin* self, QTimerEvent* event);
    friend void QQmlEngineExtensionPlugin_ChildEvent(QQmlEngineExtensionPlugin* self, QChildEvent* event);
    friend void QQmlEngineExtensionPlugin_SuperChildEvent(QQmlEngineExtensionPlugin* self, QChildEvent* event);
    friend void QQmlEngineExtensionPlugin_CustomEvent(QQmlEngineExtensionPlugin* self, QEvent* event);
    friend void QQmlEngineExtensionPlugin_SuperCustomEvent(QQmlEngineExtensionPlugin* self, QEvent* event);
    friend void QQmlEngineExtensionPlugin_ConnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
    friend void QQmlEngineExtensionPlugin_SuperConnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
    friend void QQmlEngineExtensionPlugin_DisconnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
    friend void QQmlEngineExtensionPlugin_SuperDisconnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
    friend QObject* QQmlEngineExtensionPlugin_Sender(const QQmlEngineExtensionPlugin* self);
    friend QObject* QQmlEngineExtensionPlugin_SuperSender(const QQmlEngineExtensionPlugin* self);
    friend int QQmlEngineExtensionPlugin_SenderSignalIndex(const QQmlEngineExtensionPlugin* self);
    friend int QQmlEngineExtensionPlugin_SuperSenderSignalIndex(const QQmlEngineExtensionPlugin* self);
    friend int QQmlEngineExtensionPlugin_Receivers(const QQmlEngineExtensionPlugin* self, const char* signal);
    friend int QQmlEngineExtensionPlugin_SuperReceivers(const QQmlEngineExtensionPlugin* self, const char* signal);
    friend bool QQmlEngineExtensionPlugin_IsSignalConnected(const QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
    friend bool QQmlEngineExtensionPlugin_SuperIsSignalConnected(const QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
};

#endif
