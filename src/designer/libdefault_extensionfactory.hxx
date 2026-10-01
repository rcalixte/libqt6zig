#pragma once
#ifndef DESIGNER_LIBDEFAULT_EXTENSIONFACTORY_HXX
#define DESIGNER_LIBDEFAULT_EXTENSIONFACTORY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QExtensionFactory
class VirtualQExtensionFactory final : public QExtensionFactory {
  public:
    // Virtual class public types (including callbacks and access types)
    using QExtensionFactory_MetaObject_Callback = QMetaObject* (*)(const QExtensionFactory*);
    using QExtensionFactory_Metacast_Callback = void* (*)(QExtensionFactory*, const char*);
    using QExtensionFactory_Metacall_Callback = int (*)(QExtensionFactory*, int, int, void**);
    using QExtensionFactory_Extension_Callback = QObject* (*)(const QExtensionFactory*, QObject*, const char*);
    using QExtensionFactory_CreateExtension_Callback = QObject* (*)(const QExtensionFactory*, QObject*, const char*, QObject*);
    using QExtensionFactory_Event_Callback = bool (*)(QExtensionFactory*, QEvent*);
    using QExtensionFactory_EventFilter_Callback = bool (*)(QExtensionFactory*, QObject*, QEvent*);
    using QExtensionFactory_TimerEvent_Callback = void (*)(QExtensionFactory*, QTimerEvent*);
    using QExtensionFactory_ChildEvent_Callback = void (*)(QExtensionFactory*, QChildEvent*);
    using QExtensionFactory_CustomEvent_Callback = void (*)(QExtensionFactory*, QEvent*);
    using QExtensionFactory_ConnectNotify_Callback = void (*)(QExtensionFactory*, QMetaMethod*);
    using QExtensionFactory_DisconnectNotify_Callback = void (*)(QExtensionFactory*, QMetaMethod*);
    using QExtensionFactory::isSignalConnected;
    using QExtensionFactory::receivers;
    using QExtensionFactory::sender;
    using QExtensionFactory::senderSignalIndex;

    // Instance callback storage
    QExtensionFactory_MetaObject_Callback qextensionfactory_metaobject_callback = nullptr;
    QExtensionFactory_Metacast_Callback qextensionfactory_metacast_callback = nullptr;
    QExtensionFactory_Metacall_Callback qextensionfactory_metacall_callback = nullptr;
    QExtensionFactory_Extension_Callback qextensionfactory_extension_callback = nullptr;
    QExtensionFactory_CreateExtension_Callback qextensionfactory_createextension_callback = nullptr;
    QExtensionFactory_Event_Callback qextensionfactory_event_callback = nullptr;
    QExtensionFactory_EventFilter_Callback qextensionfactory_eventfilter_callback = nullptr;
    QExtensionFactory_TimerEvent_Callback qextensionfactory_timerevent_callback = nullptr;
    QExtensionFactory_ChildEvent_Callback qextensionfactory_childevent_callback = nullptr;
    QExtensionFactory_CustomEvent_Callback qextensionfactory_customevent_callback = nullptr;
    QExtensionFactory_ConnectNotify_Callback qextensionfactory_connectnotify_callback = nullptr;
    QExtensionFactory_DisconnectNotify_Callback qextensionfactory_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QExtensionFactory {
        using QExtensionFactory::childEvent;
        using QExtensionFactory::connectNotify;
        using QExtensionFactory::createExtension;
        using QExtensionFactory::customEvent;
        using QExtensionFactory::disconnectNotify;
        using QExtensionFactory::timerEvent;
    };

    VirtualQExtensionFactory() : QExtensionFactory() {};
    VirtualQExtensionFactory(QExtensionManager* parent) : QExtensionFactory(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qextensionfactory_metaobject_callback) {
            QMetaObject* callback_ret = qextensionfactory_metaobject_callback(this);
            return callback_ret;
        }
        return QExtensionFactory::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qextensionfactory_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qextensionfactory_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QExtensionFactory::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qextensionfactory_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qextensionfactory_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QExtensionFactory::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* extension(QObject* object, const QString& iid) const override {
        if (qextensionfactory_extension_callback) {
            QObject* cbval1 = object;
            const auto iid_ret = iid;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray iid_b = iid_ret.toUtf8();
            auto iid_str_len = iid_b.length();
            const char* iid_str = static_cast<const char*>(malloc(iid_str_len + 1));
            memcpy((void*)iid_str, iid_b.data(), iid_str_len);
            ((char*)iid_str)[iid_str_len] = '\0';
            const char* cbval2 = iid_str;
            QObject* callback_ret = qextensionfactory_extension_callback(this, cbval1, cbval2);
            libqt_free(iid_str);
            return callback_ret;
        }
        return QExtensionFactory::extension(object, iid);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* createExtension(QObject* object, const QString& iid, QObject* parent) const override {
        if (qextensionfactory_createextension_callback) {
            QObject* cbval1 = object;
            const auto iid_ret = iid;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray iid_b = iid_ret.toUtf8();
            auto iid_str_len = iid_b.length();
            const char* iid_str = static_cast<const char*>(malloc(iid_str_len + 1));
            memcpy((void*)iid_str, iid_b.data(), iid_str_len);
            ((char*)iid_str)[iid_str_len] = '\0';
            const char* cbval2 = iid_str;
            QObject* cbval3 = parent;
            QObject* callback_ret = qextensionfactory_createextension_callback(this, cbval1, cbval2, cbval3);
            libqt_free(iid_str);
            return callback_ret;
        }
        return QExtensionFactory::createExtension(object, iid, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qextensionfactory_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qextensionfactory_event_callback(this, cbval1);
            return callback_ret;
        }
        return QExtensionFactory::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qextensionfactory_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qextensionfactory_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QExtensionFactory::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qextensionfactory_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qextensionfactory_timerevent_callback(this, cbval1);
            return;
        }
        QExtensionFactory::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qextensionfactory_childevent_callback) {
            QChildEvent* cbval1 = event;
            qextensionfactory_childevent_callback(this, cbval1);
            return;
        }
        QExtensionFactory::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qextensionfactory_customevent_callback) {
            QEvent* cbval1 = event;
            qextensionfactory_customevent_callback(this, cbval1);
            return;
        }
        QExtensionFactory::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qextensionfactory_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qextensionfactory_connectnotify_callback(this, cbval1);
            return;
        }
        QExtensionFactory::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qextensionfactory_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qextensionfactory_disconnectnotify_callback(this, cbval1);
            return;
        }
        QExtensionFactory::disconnectNotify(signal);
    }

    // Friend functions
    friend QObject* QExtensionFactory_SuperCreateExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid, QObject* parent);
    friend void QExtensionFactory_SuperTimerEvent(QExtensionFactory* self, QTimerEvent* event);
    friend void QExtensionFactory_SuperChildEvent(QExtensionFactory* self, QChildEvent* event);
    friend void QExtensionFactory_SuperCustomEvent(QExtensionFactory* self, QEvent* event);
    friend void QExtensionFactory_SuperConnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
    friend void QExtensionFactory_SuperDisconnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
};

#endif
