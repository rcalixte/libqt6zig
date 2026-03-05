#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALQEXTENSIONMANAGER_H
#define SRC_DESIGNERC_LIBVIRTUALQEXTENSIONMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QExtensionManager so that we can call protected methods
class VirtualQExtensionManager final : public QExtensionManager {

  public:
    // Virtual class boolean flag
    bool isVirtualQExtensionManager = true;

    // Virtual class public types (including callbacks)
    using QExtensionManager_MetaObject_Callback = QMetaObject* (*)();
    using QExtensionManager_Metacast_Callback = void* (*)(QExtensionManager*, const char*);
    using QExtensionManager_Metacall_Callback = int (*)(QExtensionManager*, int, int, void**);
    using QExtensionManager_RegisterExtensions_Callback = void (*)(QExtensionManager*, QAbstractExtensionFactory*, const char*);
    using QExtensionManager_UnregisterExtensions_Callback = void (*)(QExtensionManager*, QAbstractExtensionFactory*, const char*);
    using QExtensionManager_Extension_Callback = QObject* (*)(const QExtensionManager*, QObject*, const char*);
    using QExtensionManager_Event_Callback = bool (*)(QExtensionManager*, QEvent*);
    using QExtensionManager_EventFilter_Callback = bool (*)(QExtensionManager*, QObject*, QEvent*);
    using QExtensionManager_TimerEvent_Callback = void (*)(QExtensionManager*, QTimerEvent*);
    using QExtensionManager_ChildEvent_Callback = void (*)(QExtensionManager*, QChildEvent*);
    using QExtensionManager_CustomEvent_Callback = void (*)(QExtensionManager*, QEvent*);
    using QExtensionManager_ConnectNotify_Callback = void (*)(QExtensionManager*, QMetaMethod*);
    using QExtensionManager_DisconnectNotify_Callback = void (*)(QExtensionManager*, QMetaMethod*);
    using QExtensionManager_Sender_Callback = QObject* (*)();
    using QExtensionManager_SenderSignalIndex_Callback = int (*)();
    using QExtensionManager_Receivers_Callback = int (*)(const QExtensionManager*, const char*);
    using QExtensionManager_IsSignalConnected_Callback = bool (*)(const QExtensionManager*, QMetaMethod*);

  protected:
    // Instance callback storage
    QExtensionManager_MetaObject_Callback qextensionmanager_metaobject_callback = nullptr;
    QExtensionManager_Metacast_Callback qextensionmanager_metacast_callback = nullptr;
    QExtensionManager_Metacall_Callback qextensionmanager_metacall_callback = nullptr;
    QExtensionManager_RegisterExtensions_Callback qextensionmanager_registerextensions_callback = nullptr;
    QExtensionManager_UnregisterExtensions_Callback qextensionmanager_unregisterextensions_callback = nullptr;
    QExtensionManager_Extension_Callback qextensionmanager_extension_callback = nullptr;
    QExtensionManager_Event_Callback qextensionmanager_event_callback = nullptr;
    QExtensionManager_EventFilter_Callback qextensionmanager_eventfilter_callback = nullptr;
    QExtensionManager_TimerEvent_Callback qextensionmanager_timerevent_callback = nullptr;
    QExtensionManager_ChildEvent_Callback qextensionmanager_childevent_callback = nullptr;
    QExtensionManager_CustomEvent_Callback qextensionmanager_customevent_callback = nullptr;
    QExtensionManager_ConnectNotify_Callback qextensionmanager_connectnotify_callback = nullptr;
    QExtensionManager_DisconnectNotify_Callback qextensionmanager_disconnectnotify_callback = nullptr;
    QExtensionManager_Sender_Callback qextensionmanager_sender_callback = nullptr;
    QExtensionManager_SenderSignalIndex_Callback qextensionmanager_sendersignalindex_callback = nullptr;
    QExtensionManager_Receivers_Callback qextensionmanager_receivers_callback = nullptr;
    QExtensionManager_IsSignalConnected_Callback qextensionmanager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qextensionmanager_metaobject_isbase = false;
    mutable bool qextensionmanager_metacast_isbase = false;
    mutable bool qextensionmanager_metacall_isbase = false;
    mutable bool qextensionmanager_registerextensions_isbase = false;
    mutable bool qextensionmanager_unregisterextensions_isbase = false;
    mutable bool qextensionmanager_extension_isbase = false;
    mutable bool qextensionmanager_event_isbase = false;
    mutable bool qextensionmanager_eventfilter_isbase = false;
    mutable bool qextensionmanager_timerevent_isbase = false;
    mutable bool qextensionmanager_childevent_isbase = false;
    mutable bool qextensionmanager_customevent_isbase = false;
    mutable bool qextensionmanager_connectnotify_isbase = false;
    mutable bool qextensionmanager_disconnectnotify_isbase = false;
    mutable bool qextensionmanager_sender_isbase = false;
    mutable bool qextensionmanager_sendersignalindex_isbase = false;
    mutable bool qextensionmanager_receivers_isbase = false;
    mutable bool qextensionmanager_issignalconnected_isbase = false;

  public:
    VirtualQExtensionManager() : QExtensionManager() {};
    VirtualQExtensionManager(QObject* parent) : QExtensionManager(parent) {};

    // Callback setters
    inline void setQExtensionManager_MetaObject_Callback(QExtensionManager_MetaObject_Callback cb) { qextensionmanager_metaobject_callback = cb; }
    inline void setQExtensionManager_Metacast_Callback(QExtensionManager_Metacast_Callback cb) { qextensionmanager_metacast_callback = cb; }
    inline void setQExtensionManager_Metacall_Callback(QExtensionManager_Metacall_Callback cb) { qextensionmanager_metacall_callback = cb; }
    inline void setQExtensionManager_RegisterExtensions_Callback(QExtensionManager_RegisterExtensions_Callback cb) { qextensionmanager_registerextensions_callback = cb; }
    inline void setQExtensionManager_UnregisterExtensions_Callback(QExtensionManager_UnregisterExtensions_Callback cb) { qextensionmanager_unregisterextensions_callback = cb; }
    inline void setQExtensionManager_Extension_Callback(QExtensionManager_Extension_Callback cb) { qextensionmanager_extension_callback = cb; }
    inline void setQExtensionManager_Event_Callback(QExtensionManager_Event_Callback cb) { qextensionmanager_event_callback = cb; }
    inline void setQExtensionManager_EventFilter_Callback(QExtensionManager_EventFilter_Callback cb) { qextensionmanager_eventfilter_callback = cb; }
    inline void setQExtensionManager_TimerEvent_Callback(QExtensionManager_TimerEvent_Callback cb) { qextensionmanager_timerevent_callback = cb; }
    inline void setQExtensionManager_ChildEvent_Callback(QExtensionManager_ChildEvent_Callback cb) { qextensionmanager_childevent_callback = cb; }
    inline void setQExtensionManager_CustomEvent_Callback(QExtensionManager_CustomEvent_Callback cb) { qextensionmanager_customevent_callback = cb; }
    inline void setQExtensionManager_ConnectNotify_Callback(QExtensionManager_ConnectNotify_Callback cb) { qextensionmanager_connectnotify_callback = cb; }
    inline void setQExtensionManager_DisconnectNotify_Callback(QExtensionManager_DisconnectNotify_Callback cb) { qextensionmanager_disconnectnotify_callback = cb; }
    inline void setQExtensionManager_Sender_Callback(QExtensionManager_Sender_Callback cb) { qextensionmanager_sender_callback = cb; }
    inline void setQExtensionManager_SenderSignalIndex_Callback(QExtensionManager_SenderSignalIndex_Callback cb) { qextensionmanager_sendersignalindex_callback = cb; }
    inline void setQExtensionManager_Receivers_Callback(QExtensionManager_Receivers_Callback cb) { qextensionmanager_receivers_callback = cb; }
    inline void setQExtensionManager_IsSignalConnected_Callback(QExtensionManager_IsSignalConnected_Callback cb) { qextensionmanager_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQExtensionManager_MetaObject_IsBase(bool value) const { qextensionmanager_metaobject_isbase = value; }
    inline void setQExtensionManager_Metacast_IsBase(bool value) const { qextensionmanager_metacast_isbase = value; }
    inline void setQExtensionManager_Metacall_IsBase(bool value) const { qextensionmanager_metacall_isbase = value; }
    inline void setQExtensionManager_RegisterExtensions_IsBase(bool value) const { qextensionmanager_registerextensions_isbase = value; }
    inline void setQExtensionManager_UnregisterExtensions_IsBase(bool value) const { qextensionmanager_unregisterextensions_isbase = value; }
    inline void setQExtensionManager_Extension_IsBase(bool value) const { qextensionmanager_extension_isbase = value; }
    inline void setQExtensionManager_Event_IsBase(bool value) const { qextensionmanager_event_isbase = value; }
    inline void setQExtensionManager_EventFilter_IsBase(bool value) const { qextensionmanager_eventfilter_isbase = value; }
    inline void setQExtensionManager_TimerEvent_IsBase(bool value) const { qextensionmanager_timerevent_isbase = value; }
    inline void setQExtensionManager_ChildEvent_IsBase(bool value) const { qextensionmanager_childevent_isbase = value; }
    inline void setQExtensionManager_CustomEvent_IsBase(bool value) const { qextensionmanager_customevent_isbase = value; }
    inline void setQExtensionManager_ConnectNotify_IsBase(bool value) const { qextensionmanager_connectnotify_isbase = value; }
    inline void setQExtensionManager_DisconnectNotify_IsBase(bool value) const { qextensionmanager_disconnectnotify_isbase = value; }
    inline void setQExtensionManager_Sender_IsBase(bool value) const { qextensionmanager_sender_isbase = value; }
    inline void setQExtensionManager_SenderSignalIndex_IsBase(bool value) const { qextensionmanager_sendersignalindex_isbase = value; }
    inline void setQExtensionManager_Receivers_IsBase(bool value) const { qextensionmanager_receivers_isbase = value; }
    inline void setQExtensionManager_IsSignalConnected_IsBase(bool value) const { qextensionmanager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qextensionmanager_metaobject_isbase) {
            qextensionmanager_metaobject_isbase = false;
            return QExtensionManager::metaObject();
        }
        auto metaobject_cb = qextensionmanager_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QExtensionManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qextensionmanager_metacast_isbase) {
            qextensionmanager_metacast_isbase = false;
            return QExtensionManager::qt_metacast(param1);
        }
        auto metacast_cb = qextensionmanager_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QExtensionManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qextensionmanager_metacall_isbase) {
            qextensionmanager_metacall_isbase = false;
            return QExtensionManager::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qextensionmanager_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QExtensionManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void registerExtensions(QAbstractExtensionFactory* factory, const QString& iid) override {
        if (qextensionmanager_registerextensions_isbase) {
            qextensionmanager_registerextensions_isbase = false;
            QExtensionManager::registerExtensions(factory, iid);
            return;
        }
        auto registerextensions_cb = qextensionmanager_registerextensions_callback;
        if (registerextensions_cb) {
            QAbstractExtensionFactory* cbval1 = factory;
            const QString iid_ret = iid;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray iid_b = iid_ret.toUtf8();
            auto iid_str_len = iid_b.length();
            const char* iid_str = static_cast<const char*>(malloc(iid_str_len + 1));
            memcpy((void*)iid_str, iid_b.data(), iid_str_len);
            ((char*)iid_str)[iid_str_len] = '\0';
            const char* cbval2 = iid_str;

            registerextensions_cb(this, cbval1, cbval2);
            libqt_free(iid_str);
            return;
        }
        QExtensionManager::registerExtensions(factory, iid);
    }

    // Virtual method for C ABI access and custom callback
    virtual void unregisterExtensions(QAbstractExtensionFactory* factory, const QString& iid) override {
        if (qextensionmanager_unregisterextensions_isbase) {
            qextensionmanager_unregisterextensions_isbase = false;
            QExtensionManager::unregisterExtensions(factory, iid);
            return;
        }
        auto unregisterextensions_cb = qextensionmanager_unregisterextensions_callback;
        if (unregisterextensions_cb) {
            QAbstractExtensionFactory* cbval1 = factory;
            const QString iid_ret = iid;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray iid_b = iid_ret.toUtf8();
            auto iid_str_len = iid_b.length();
            const char* iid_str = static_cast<const char*>(malloc(iid_str_len + 1));
            memcpy((void*)iid_str, iid_b.data(), iid_str_len);
            ((char*)iid_str)[iid_str_len] = '\0';
            const char* cbval2 = iid_str;

            unregisterextensions_cb(this, cbval1, cbval2);
            libqt_free(iid_str);
            return;
        }
        QExtensionManager::unregisterExtensions(factory, iid);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* extension(QObject* object, const QString& iid) const override {
        if (qextensionmanager_extension_isbase) {
            qextensionmanager_extension_isbase = false;
            return QExtensionManager::extension(object, iid);
        }
        auto extension_cb = qextensionmanager_extension_callback;
        if (extension_cb) {
            QObject* cbval1 = object;
            const QString iid_ret = iid;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray iid_b = iid_ret.toUtf8();
            auto iid_str_len = iid_b.length();
            const char* iid_str = static_cast<const char*>(malloc(iid_str_len + 1));
            memcpy((void*)iid_str, iid_b.data(), iid_str_len);
            ((char*)iid_str)[iid_str_len] = '\0';
            const char* cbval2 = iid_str;

            QObject* callback_ret = extension_cb(this, cbval1, cbval2);
            libqt_free(iid_str);
            return callback_ret;
        }
        return QExtensionManager::extension(object, iid);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qextensionmanager_event_isbase) {
            qextensionmanager_event_isbase = false;
            return QExtensionManager::event(event);
        }
        auto event_cb = qextensionmanager_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QExtensionManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qextensionmanager_eventfilter_isbase) {
            qextensionmanager_eventfilter_isbase = false;
            return QExtensionManager::eventFilter(watched, event);
        }
        auto eventfilter_cb = qextensionmanager_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QExtensionManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qextensionmanager_timerevent_isbase) {
            qextensionmanager_timerevent_isbase = false;
            QExtensionManager::timerEvent(event);
            return;
        }
        auto timerevent_cb = qextensionmanager_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QExtensionManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qextensionmanager_childevent_isbase) {
            qextensionmanager_childevent_isbase = false;
            QExtensionManager::childEvent(event);
            return;
        }
        auto childevent_cb = qextensionmanager_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QExtensionManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qextensionmanager_customevent_isbase) {
            qextensionmanager_customevent_isbase = false;
            QExtensionManager::customEvent(event);
            return;
        }
        auto customevent_cb = qextensionmanager_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QExtensionManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qextensionmanager_connectnotify_isbase) {
            qextensionmanager_connectnotify_isbase = false;
            QExtensionManager::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qextensionmanager_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QExtensionManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qextensionmanager_disconnectnotify_isbase) {
            qextensionmanager_disconnectnotify_isbase = false;
            QExtensionManager::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qextensionmanager_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QExtensionManager::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qextensionmanager_sender_isbase) {
            qextensionmanager_sender_isbase = false;
            return QExtensionManager::sender();
        }
        auto sender_cb = qextensionmanager_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QExtensionManager::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qextensionmanager_sendersignalindex_isbase) {
            qextensionmanager_sendersignalindex_isbase = false;
            return QExtensionManager::senderSignalIndex();
        }
        auto sendersignalindex_cb = qextensionmanager_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QExtensionManager::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qextensionmanager_receivers_isbase) {
            qextensionmanager_receivers_isbase = false;
            return QExtensionManager::receivers(signal);
        }
        auto receivers_cb = qextensionmanager_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QExtensionManager::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qextensionmanager_issignalconnected_isbase) {
            qextensionmanager_issignalconnected_isbase = false;
            return QExtensionManager::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qextensionmanager_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QExtensionManager::isSignalConnected(signal);
    }

    // Friend functions
    friend void QExtensionManager_TimerEvent(QExtensionManager* self, QTimerEvent* event);
    friend void QExtensionManager_SuperTimerEvent(QExtensionManager* self, QTimerEvent* event);
    friend void QExtensionManager_ChildEvent(QExtensionManager* self, QChildEvent* event);
    friend void QExtensionManager_SuperChildEvent(QExtensionManager* self, QChildEvent* event);
    friend void QExtensionManager_CustomEvent(QExtensionManager* self, QEvent* event);
    friend void QExtensionManager_SuperCustomEvent(QExtensionManager* self, QEvent* event);
    friend void QExtensionManager_ConnectNotify(QExtensionManager* self, const QMetaMethod* signal);
    friend void QExtensionManager_SuperConnectNotify(QExtensionManager* self, const QMetaMethod* signal);
    friend void QExtensionManager_DisconnectNotify(QExtensionManager* self, const QMetaMethod* signal);
    friend void QExtensionManager_SuperDisconnectNotify(QExtensionManager* self, const QMetaMethod* signal);
    friend QObject* QExtensionManager_Sender(const QExtensionManager* self);
    friend QObject* QExtensionManager_SuperSender(const QExtensionManager* self);
    friend int QExtensionManager_SenderSignalIndex(const QExtensionManager* self);
    friend int QExtensionManager_SuperSenderSignalIndex(const QExtensionManager* self);
    friend int QExtensionManager_Receivers(const QExtensionManager* self, const char* signal);
    friend int QExtensionManager_SuperReceivers(const QExtensionManager* self, const char* signal);
    friend bool QExtensionManager_IsSignalConnected(const QExtensionManager* self, const QMetaMethod* signal);
    friend bool QExtensionManager_SuperIsSignalConnected(const QExtensionManager* self, const QMetaMethod* signal);
};

#endif
