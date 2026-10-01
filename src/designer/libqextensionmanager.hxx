#pragma once
#ifndef DESIGNER_LIBQEXTENSIONMANAGER_HXX
#define DESIGNER_LIBQEXTENSIONMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QExtensionManager
class VirtualQExtensionManager final : public QExtensionManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using QExtensionManager_MetaObject_Callback = QMetaObject* (*)(const QExtensionManager*);
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
    using QExtensionManager::isSignalConnected;
    using QExtensionManager::receivers;
    using QExtensionManager::sender;
    using QExtensionManager::senderSignalIndex;

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

    // Access struct
    struct Base : QExtensionManager {
        using QExtensionManager::childEvent;
        using QExtensionManager::connectNotify;
        using QExtensionManager::customEvent;
        using QExtensionManager::disconnectNotify;
        using QExtensionManager::timerEvent;
    };

    VirtualQExtensionManager() : QExtensionManager() {};
    VirtualQExtensionManager(QObject* parent) : QExtensionManager(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qextensionmanager_metaobject_callback) {
            QMetaObject* callback_ret = qextensionmanager_metaobject_callback(this);
            return callback_ret;
        }
        return QExtensionManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qextensionmanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qextensionmanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QExtensionManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qextensionmanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qextensionmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QExtensionManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void registerExtensions(QAbstractExtensionFactory* factory, const QString& iid) override {
        if (qextensionmanager_registerextensions_callback) {
            QAbstractExtensionFactory* cbval1 = factory;
            const auto iid_ret = iid;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray iid_b = iid_ret.toUtf8();
            auto iid_str_len = iid_b.length();
            const char* iid_str = static_cast<const char*>(malloc(iid_str_len + 1));
            memcpy((void*)iid_str, iid_b.data(), iid_str_len);
            ((char*)iid_str)[iid_str_len] = '\0';
            const char* cbval2 = iid_str;
            qextensionmanager_registerextensions_callback(this, cbval1, cbval2);
            libqt_free(iid_str);
            return;
        }
        QExtensionManager::registerExtensions(factory, iid);
    }

    // Virtual method for C ABI access and custom callback
    virtual void unregisterExtensions(QAbstractExtensionFactory* factory, const QString& iid) override {
        if (qextensionmanager_unregisterextensions_callback) {
            QAbstractExtensionFactory* cbval1 = factory;
            const auto iid_ret = iid;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray iid_b = iid_ret.toUtf8();
            auto iid_str_len = iid_b.length();
            const char* iid_str = static_cast<const char*>(malloc(iid_str_len + 1));
            memcpy((void*)iid_str, iid_b.data(), iid_str_len);
            ((char*)iid_str)[iid_str_len] = '\0';
            const char* cbval2 = iid_str;
            qextensionmanager_unregisterextensions_callback(this, cbval1, cbval2);
            libqt_free(iid_str);
            return;
        }
        QExtensionManager::unregisterExtensions(factory, iid);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* extension(QObject* object, const QString& iid) const override {
        if (qextensionmanager_extension_callback) {
            QObject* cbval1 = object;
            const auto iid_ret = iid;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray iid_b = iid_ret.toUtf8();
            auto iid_str_len = iid_b.length();
            const char* iid_str = static_cast<const char*>(malloc(iid_str_len + 1));
            memcpy((void*)iid_str, iid_b.data(), iid_str_len);
            ((char*)iid_str)[iid_str_len] = '\0';
            const char* cbval2 = iid_str;
            QObject* callback_ret = qextensionmanager_extension_callback(this, cbval1, cbval2);
            libqt_free(iid_str);
            return callback_ret;
        }
        return QExtensionManager::extension(object, iid);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qextensionmanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qextensionmanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return QExtensionManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qextensionmanager_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qextensionmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QExtensionManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qextensionmanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qextensionmanager_timerevent_callback(this, cbval1);
            return;
        }
        QExtensionManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qextensionmanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            qextensionmanager_childevent_callback(this, cbval1);
            return;
        }
        QExtensionManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qextensionmanager_customevent_callback) {
            QEvent* cbval1 = event;
            qextensionmanager_customevent_callback(this, cbval1);
            return;
        }
        QExtensionManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qextensionmanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qextensionmanager_connectnotify_callback(this, cbval1);
            return;
        }
        QExtensionManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qextensionmanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qextensionmanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        QExtensionManager::disconnectNotify(signal);
    }

    // Friend functions
    friend void QExtensionManager_SuperTimerEvent(QExtensionManager* self, QTimerEvent* event);
    friend void QExtensionManager_SuperChildEvent(QExtensionManager* self, QChildEvent* event);
    friend void QExtensionManager_SuperCustomEvent(QExtensionManager* self, QEvent* event);
    friend void QExtensionManager_SuperConnectNotify(QExtensionManager* self, const QMetaMethod* signal);
    friend void QExtensionManager_SuperDisconnectNotify(QExtensionManager* self, const QMetaMethod* signal);
};

#endif
