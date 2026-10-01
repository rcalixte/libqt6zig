#pragma once
#ifndef QML_LIBQQMLCOMPONENT_HXX
#define QML_LIBQQMLCOMPONENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlComponent
class VirtualQQmlComponent final : public QQmlComponent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlComponent_MetaObject_Callback = QMetaObject* (*)(const QQmlComponent*);
    using QQmlComponent_Metacast_Callback = void* (*)(QQmlComponent*, const char*);
    using QQmlComponent_Metacall_Callback = int (*)(QQmlComponent*, int, int, void**);
    using QQmlComponent_Create_Callback = QObject* (*)(QQmlComponent*, QQmlContext*);
    using QQmlComponent_BeginCreate_Callback = QObject* (*)(QQmlComponent*, QQmlContext*);
    using QQmlComponent_CompleteCreate_Callback = void (*)(QQmlComponent*);
    using QQmlComponent_Event_Callback = bool (*)(QQmlComponent*, QEvent*);
    using QQmlComponent_EventFilter_Callback = bool (*)(QQmlComponent*, QObject*, QEvent*);
    using QQmlComponent_TimerEvent_Callback = void (*)(QQmlComponent*, QTimerEvent*);
    using QQmlComponent_ChildEvent_Callback = void (*)(QQmlComponent*, QChildEvent*);
    using QQmlComponent_CustomEvent_Callback = void (*)(QQmlComponent*, QEvent*);
    using QQmlComponent_ConnectNotify_Callback = void (*)(QQmlComponent*, QMetaMethod*);
    using QQmlComponent_DisconnectNotify_Callback = void (*)(QQmlComponent*, QMetaMethod*);
    using QQmlComponent::createObject;
    using QQmlComponent::isSignalConnected;
    using QQmlComponent::receivers;
    using QQmlComponent::sender;
    using QQmlComponent::senderSignalIndex;

    // Instance callback storage
    QQmlComponent_MetaObject_Callback qqmlcomponent_metaobject_callback = nullptr;
    QQmlComponent_Metacast_Callback qqmlcomponent_metacast_callback = nullptr;
    QQmlComponent_Metacall_Callback qqmlcomponent_metacall_callback = nullptr;
    QQmlComponent_Create_Callback qqmlcomponent_create_callback = nullptr;
    QQmlComponent_BeginCreate_Callback qqmlcomponent_begincreate_callback = nullptr;
    QQmlComponent_CompleteCreate_Callback qqmlcomponent_completecreate_callback = nullptr;
    QQmlComponent_Event_Callback qqmlcomponent_event_callback = nullptr;
    QQmlComponent_EventFilter_Callback qqmlcomponent_eventfilter_callback = nullptr;
    QQmlComponent_TimerEvent_Callback qqmlcomponent_timerevent_callback = nullptr;
    QQmlComponent_ChildEvent_Callback qqmlcomponent_childevent_callback = nullptr;
    QQmlComponent_CustomEvent_Callback qqmlcomponent_customevent_callback = nullptr;
    QQmlComponent_ConnectNotify_Callback qqmlcomponent_connectnotify_callback = nullptr;
    QQmlComponent_DisconnectNotify_Callback qqmlcomponent_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQmlComponent {
        using QQmlComponent::childEvent;
        using QQmlComponent::connectNotify;
        using QQmlComponent::customEvent;
        using QQmlComponent::disconnectNotify;
        using QQmlComponent::timerEvent;
    };

    VirtualQQmlComponent() : QQmlComponent() {};
    VirtualQQmlComponent(QQmlEngine* param1) : QQmlComponent(param1) {};
    VirtualQQmlComponent(QQmlEngine* param1, const QString& fileName) : QQmlComponent(param1, fileName) {};
    VirtualQQmlComponent(QQmlEngine* param1, const QString& fileName, QQmlComponent::CompilationMode mode) : QQmlComponent(param1, fileName, mode) {};
    VirtualQQmlComponent(QQmlEngine* param1, const QUrl& url) : QQmlComponent(param1, url) {};
    VirtualQQmlComponent(QQmlEngine* param1, const QUrl& url, QQmlComponent::CompilationMode mode) : QQmlComponent(param1, url, mode) {};
    VirtualQQmlComponent(QQmlEngine* engine, QAnyStringView uri, QAnyStringView typeName) : QQmlComponent(engine, uri, typeName) {};
    VirtualQQmlComponent(QQmlEngine* engine, QAnyStringView uri, QAnyStringView typeName, QQmlComponent::CompilationMode mode) : QQmlComponent(engine, uri, typeName, mode) {};
    VirtualQQmlComponent(QObject* parent) : QQmlComponent(parent) {};
    VirtualQQmlComponent(QQmlEngine* param1, QObject* parent) : QQmlComponent(param1, parent) {};
    VirtualQQmlComponent(QQmlEngine* param1, const QString& fileName, QObject* parent) : QQmlComponent(param1, fileName, parent) {};
    VirtualQQmlComponent(QQmlEngine* param1, const QString& fileName, QQmlComponent::CompilationMode mode, QObject* parent) : QQmlComponent(param1, fileName, mode, parent) {};
    VirtualQQmlComponent(QQmlEngine* param1, const QUrl& url, QObject* parent) : QQmlComponent(param1, url, parent) {};
    VirtualQQmlComponent(QQmlEngine* param1, const QUrl& url, QQmlComponent::CompilationMode mode, QObject* parent) : QQmlComponent(param1, url, mode, parent) {};
    VirtualQQmlComponent(QQmlEngine* engine, QAnyStringView uri, QAnyStringView typeName, QObject* parent) : QQmlComponent(engine, uri, typeName, parent) {};
    VirtualQQmlComponent(QQmlEngine* engine, QAnyStringView uri, QAnyStringView typeName, QQmlComponent::CompilationMode mode, QObject* parent) : QQmlComponent(engine, uri, typeName, mode, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlcomponent_metaobject_callback) {
            QMetaObject* callback_ret = qqmlcomponent_metaobject_callback(this);
            return callback_ret;
        }
        return QQmlComponent::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlcomponent_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qqmlcomponent_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlComponent::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlcomponent_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qqmlcomponent_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlComponent::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* create(QQmlContext* context) override {
        if (qqmlcomponent_create_callback) {
            QQmlContext* cbval1 = context;
            QObject* callback_ret = qqmlcomponent_create_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlComponent::create(context);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* beginCreate(QQmlContext* param1) override {
        if (qqmlcomponent_begincreate_callback) {
            QQmlContext* cbval1 = param1;
            QObject* callback_ret = qqmlcomponent_begincreate_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlComponent::beginCreate(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void completeCreate() override {
        if (qqmlcomponent_completecreate_callback) {
            qqmlcomponent_completecreate_callback(this);
            return;
        }
        QQmlComponent::completeCreate();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlcomponent_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qqmlcomponent_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlComponent::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlcomponent_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qqmlcomponent_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlComponent::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlcomponent_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qqmlcomponent_timerevent_callback(this, cbval1);
            return;
        }
        QQmlComponent::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlcomponent_childevent_callback) {
            QChildEvent* cbval1 = event;
            qqmlcomponent_childevent_callback(this, cbval1);
            return;
        }
        QQmlComponent::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlcomponent_customevent_callback) {
            QEvent* cbval1 = event;
            qqmlcomponent_customevent_callback(this, cbval1);
            return;
        }
        QQmlComponent::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlcomponent_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlcomponent_connectnotify_callback(this, cbval1);
            return;
        }
        QQmlComponent::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlcomponent_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlcomponent_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQmlComponent::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQmlComponent_SuperTimerEvent(QQmlComponent* self, QTimerEvent* event);
    friend void QQmlComponent_SuperChildEvent(QQmlComponent* self, QChildEvent* event);
    friend void QQmlComponent_SuperCustomEvent(QQmlComponent* self, QEvent* event);
    friend void QQmlComponent_SuperConnectNotify(QQmlComponent* self, const QMetaMethod* signal);
    friend void QQmlComponent_SuperDisconnectNotify(QQmlComponent* self, const QMetaMethod* signal);
};

#endif
