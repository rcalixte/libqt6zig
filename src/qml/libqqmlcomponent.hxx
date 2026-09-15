#pragma once
#ifndef QML_LIBQQMLCOMPONENT_HXX
#define QML_LIBQQMLCOMPONENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlComponent so that we can call protected methods
class VirtualQQmlComponent final : public QQmlComponent {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlComponent = true;

    // Virtual class public types (including callbacks)
    using QQmlComponent_MetaObject_Callback = QMetaObject* (*)();
    using QQmlComponent_Metacast_Callback = void* (*)(QQmlComponent*, const char*);
    using QQmlComponent_Metacall_Callback = int (*)(QQmlComponent*, int, int, void**);
    using QQmlComponent_Create_Callback = QObject* (*)(QQmlComponent*, QQmlContext*);
    using QQmlComponent_BeginCreate_Callback = QObject* (*)(QQmlComponent*, QQmlContext*);
    using QQmlComponent_CompleteCreate_Callback = void (*)();
    using QQmlComponent_Event_Callback = bool (*)(QQmlComponent*, QEvent*);
    using QQmlComponent_EventFilter_Callback = bool (*)(QQmlComponent*, QObject*, QEvent*);
    using QQmlComponent_TimerEvent_Callback = void (*)(QQmlComponent*, QTimerEvent*);
    using QQmlComponent_ChildEvent_Callback = void (*)(QQmlComponent*, QChildEvent*);
    using QQmlComponent_CustomEvent_Callback = void (*)(QQmlComponent*, QEvent*);
    using QQmlComponent_ConnectNotify_Callback = void (*)(QQmlComponent*, QMetaMethod*);
    using QQmlComponent_DisconnectNotify_Callback = void (*)(QQmlComponent*, QMetaMethod*);
    using QQmlComponent_CreateObject2_Callback = QObject* (*)();
    using QQmlComponent_CreateObject1_Callback = QObject* (*)(QQmlComponent*, QObject*);
    using QQmlComponent_CreateObject22_Callback = QObject* (*)(QQmlComponent*, QObject*, libqt_map /* of libqt_string to QVariant* */);
    using QQmlComponent_Sender_Callback = QObject* (*)();
    using QQmlComponent_SenderSignalIndex_Callback = int (*)();
    using QQmlComponent_Receivers_Callback = int (*)(const QQmlComponent*, const char*);
    using QQmlComponent_IsSignalConnected_Callback = bool (*)(const QQmlComponent*, QMetaMethod*);

  protected:
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
    QQmlComponent_CreateObject2_Callback qqmlcomponent_createobject2_callback = nullptr;
    QQmlComponent_CreateObject1_Callback qqmlcomponent_createobject1_callback = nullptr;
    QQmlComponent_CreateObject22_Callback qqmlcomponent_createobject22_callback = nullptr;
    QQmlComponent_Sender_Callback qqmlcomponent_sender_callback = nullptr;
    QQmlComponent_SenderSignalIndex_Callback qqmlcomponent_sendersignalindex_callback = nullptr;
    QQmlComponent_Receivers_Callback qqmlcomponent_receivers_callback = nullptr;
    QQmlComponent_IsSignalConnected_Callback qqmlcomponent_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qqmlcomponent_metaobject_isbase = false;
    mutable bool qqmlcomponent_metacast_isbase = false;
    mutable bool qqmlcomponent_metacall_isbase = false;
    mutable bool qqmlcomponent_create_isbase = false;
    mutable bool qqmlcomponent_begincreate_isbase = false;
    mutable bool qqmlcomponent_completecreate_isbase = false;
    mutable bool qqmlcomponent_event_isbase = false;
    mutable bool qqmlcomponent_eventfilter_isbase = false;
    mutable bool qqmlcomponent_timerevent_isbase = false;
    mutable bool qqmlcomponent_childevent_isbase = false;
    mutable bool qqmlcomponent_customevent_isbase = false;
    mutable bool qqmlcomponent_connectnotify_isbase = false;
    mutable bool qqmlcomponent_disconnectnotify_isbase = false;
    mutable bool qqmlcomponent_createobject2_isbase = false;
    mutable bool qqmlcomponent_createobject1_isbase = false;
    mutable bool qqmlcomponent_createobject22_isbase = false;
    mutable bool qqmlcomponent_sender_isbase = false;
    mutable bool qqmlcomponent_sendersignalindex_isbase = false;
    mutable bool qqmlcomponent_receivers_isbase = false;
    mutable bool qqmlcomponent_issignalconnected_isbase = false;

  public:
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

    // Callback setters
    inline void setQQmlComponent_MetaObject_Callback(QQmlComponent_MetaObject_Callback cb) { qqmlcomponent_metaobject_callback = cb; }
    inline void setQQmlComponent_Metacast_Callback(QQmlComponent_Metacast_Callback cb) { qqmlcomponent_metacast_callback = cb; }
    inline void setQQmlComponent_Metacall_Callback(QQmlComponent_Metacall_Callback cb) { qqmlcomponent_metacall_callback = cb; }
    inline void setQQmlComponent_Create_Callback(QQmlComponent_Create_Callback cb) { qqmlcomponent_create_callback = cb; }
    inline void setQQmlComponent_BeginCreate_Callback(QQmlComponent_BeginCreate_Callback cb) { qqmlcomponent_begincreate_callback = cb; }
    inline void setQQmlComponent_CompleteCreate_Callback(QQmlComponent_CompleteCreate_Callback cb) { qqmlcomponent_completecreate_callback = cb; }
    inline void setQQmlComponent_Event_Callback(QQmlComponent_Event_Callback cb) { qqmlcomponent_event_callback = cb; }
    inline void setQQmlComponent_EventFilter_Callback(QQmlComponent_EventFilter_Callback cb) { qqmlcomponent_eventfilter_callback = cb; }
    inline void setQQmlComponent_TimerEvent_Callback(QQmlComponent_TimerEvent_Callback cb) { qqmlcomponent_timerevent_callback = cb; }
    inline void setQQmlComponent_ChildEvent_Callback(QQmlComponent_ChildEvent_Callback cb) { qqmlcomponent_childevent_callback = cb; }
    inline void setQQmlComponent_CustomEvent_Callback(QQmlComponent_CustomEvent_Callback cb) { qqmlcomponent_customevent_callback = cb; }
    inline void setQQmlComponent_ConnectNotify_Callback(QQmlComponent_ConnectNotify_Callback cb) { qqmlcomponent_connectnotify_callback = cb; }
    inline void setQQmlComponent_DisconnectNotify_Callback(QQmlComponent_DisconnectNotify_Callback cb) { qqmlcomponent_disconnectnotify_callback = cb; }
    inline void setQQmlComponent_CreateObject2_Callback(QQmlComponent_CreateObject2_Callback cb) { qqmlcomponent_createobject2_callback = cb; }
    inline void setQQmlComponent_CreateObject1_Callback(QQmlComponent_CreateObject1_Callback cb) { qqmlcomponent_createobject1_callback = cb; }
    inline void setQQmlComponent_CreateObject22_Callback(QQmlComponent_CreateObject22_Callback cb) { qqmlcomponent_createobject22_callback = cb; }
    inline void setQQmlComponent_Sender_Callback(QQmlComponent_Sender_Callback cb) { qqmlcomponent_sender_callback = cb; }
    inline void setQQmlComponent_SenderSignalIndex_Callback(QQmlComponent_SenderSignalIndex_Callback cb) { qqmlcomponent_sendersignalindex_callback = cb; }
    inline void setQQmlComponent_Receivers_Callback(QQmlComponent_Receivers_Callback cb) { qqmlcomponent_receivers_callback = cb; }
    inline void setQQmlComponent_IsSignalConnected_Callback(QQmlComponent_IsSignalConnected_Callback cb) { qqmlcomponent_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQmlComponent_MetaObject_IsBase(bool value) const { qqmlcomponent_metaobject_isbase = value; }
    inline void setQQmlComponent_Metacast_IsBase(bool value) const { qqmlcomponent_metacast_isbase = value; }
    inline void setQQmlComponent_Metacall_IsBase(bool value) const { qqmlcomponent_metacall_isbase = value; }
    inline void setQQmlComponent_Create_IsBase(bool value) const { qqmlcomponent_create_isbase = value; }
    inline void setQQmlComponent_BeginCreate_IsBase(bool value) const { qqmlcomponent_begincreate_isbase = value; }
    inline void setQQmlComponent_CompleteCreate_IsBase(bool value) const { qqmlcomponent_completecreate_isbase = value; }
    inline void setQQmlComponent_Event_IsBase(bool value) const { qqmlcomponent_event_isbase = value; }
    inline void setQQmlComponent_EventFilter_IsBase(bool value) const { qqmlcomponent_eventfilter_isbase = value; }
    inline void setQQmlComponent_TimerEvent_IsBase(bool value) const { qqmlcomponent_timerevent_isbase = value; }
    inline void setQQmlComponent_ChildEvent_IsBase(bool value) const { qqmlcomponent_childevent_isbase = value; }
    inline void setQQmlComponent_CustomEvent_IsBase(bool value) const { qqmlcomponent_customevent_isbase = value; }
    inline void setQQmlComponent_ConnectNotify_IsBase(bool value) const { qqmlcomponent_connectnotify_isbase = value; }
    inline void setQQmlComponent_DisconnectNotify_IsBase(bool value) const { qqmlcomponent_disconnectnotify_isbase = value; }
    inline void setQQmlComponent_CreateObject2_IsBase(bool value) const { qqmlcomponent_createobject2_isbase = value; }
    inline void setQQmlComponent_CreateObject1_IsBase(bool value) const { qqmlcomponent_createobject1_isbase = value; }
    inline void setQQmlComponent_CreateObject22_IsBase(bool value) const { qqmlcomponent_createobject22_isbase = value; }
    inline void setQQmlComponent_Sender_IsBase(bool value) const { qqmlcomponent_sender_isbase = value; }
    inline void setQQmlComponent_SenderSignalIndex_IsBase(bool value) const { qqmlcomponent_sendersignalindex_isbase = value; }
    inline void setQQmlComponent_Receivers_IsBase(bool value) const { qqmlcomponent_receivers_isbase = value; }
    inline void setQQmlComponent_IsSignalConnected_IsBase(bool value) const { qqmlcomponent_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlcomponent_metaobject_isbase) {
            qqmlcomponent_metaobject_isbase = false;
            return QQmlComponent::metaObject();
        }
        auto metaobject_cb = qqmlcomponent_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQmlComponent::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlcomponent_metacast_isbase) {
            qqmlcomponent_metacast_isbase = false;
            return QQmlComponent::qt_metacast(param1);
        }
        auto metacast_cb = qqmlcomponent_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlComponent::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlcomponent_metacall_isbase) {
            qqmlcomponent_metacall_isbase = false;
            return QQmlComponent::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qqmlcomponent_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlComponent::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* create(QQmlContext* context) override {
        if (qqmlcomponent_create_isbase) {
            qqmlcomponent_create_isbase = false;
            return QQmlComponent::create(context);
        }
        auto create_cb = qqmlcomponent_create_callback;
        if (create_cb) {
            QQmlContext* cbval1 = context;
            QObject* callback_ret = create_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlComponent::create(context);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* beginCreate(QQmlContext* param1) override {
        if (qqmlcomponent_begincreate_isbase) {
            qqmlcomponent_begincreate_isbase = false;
            return QQmlComponent::beginCreate(param1);
        }
        auto begincreate_cb = qqmlcomponent_begincreate_callback;
        if (begincreate_cb) {
            QQmlContext* cbval1 = param1;
            QObject* callback_ret = begincreate_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlComponent::beginCreate(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void completeCreate() override {
        if (qqmlcomponent_completecreate_isbase) {
            qqmlcomponent_completecreate_isbase = false;
            QQmlComponent::completeCreate();
            return;
        }
        auto completecreate_cb = qqmlcomponent_completecreate_callback;
        if (completecreate_cb) {
            completecreate_cb();
            return;
        }
        QQmlComponent::completeCreate();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlcomponent_event_isbase) {
            qqmlcomponent_event_isbase = false;
            return QQmlComponent::event(event);
        }
        auto event_cb = qqmlcomponent_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlComponent::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlcomponent_eventfilter_isbase) {
            qqmlcomponent_eventfilter_isbase = false;
            return QQmlComponent::eventFilter(watched, event);
        }
        auto eventfilter_cb = qqmlcomponent_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlComponent::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlcomponent_timerevent_isbase) {
            qqmlcomponent_timerevent_isbase = false;
            QQmlComponent::timerEvent(event);
            return;
        }
        auto timerevent_cb = qqmlcomponent_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQmlComponent::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlcomponent_childevent_isbase) {
            qqmlcomponent_childevent_isbase = false;
            QQmlComponent::childEvent(event);
            return;
        }
        auto childevent_cb = qqmlcomponent_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQmlComponent::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlcomponent_customevent_isbase) {
            qqmlcomponent_customevent_isbase = false;
            QQmlComponent::customEvent(event);
            return;
        }
        auto customevent_cb = qqmlcomponent_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQmlComponent::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlcomponent_connectnotify_isbase) {
            qqmlcomponent_connectnotify_isbase = false;
            QQmlComponent::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qqmlcomponent_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQmlComponent::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlcomponent_disconnectnotify_isbase) {
            qqmlcomponent_disconnectnotify_isbase = false;
            QQmlComponent::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qqmlcomponent_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQmlComponent::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* createObject() {
        if (qqmlcomponent_createobject2_isbase) {
            qqmlcomponent_createobject2_isbase = false;
            return QQmlComponent::createObject();
        }
        auto createobject2_cb = qqmlcomponent_createobject2_callback;
        if (createobject2_cb) {
            QObject* callback_ret = createobject2_cb();
            return callback_ret;
        }
        return QQmlComponent::createObject();
    }

    // Virtual method for C ABI access and custom callback
    QObject* createObject(QObject* parent) {
        if (qqmlcomponent_createobject1_isbase) {
            qqmlcomponent_createobject1_isbase = false;
            return QQmlComponent::createObject(parent);
        }
        auto createobject1_cb = qqmlcomponent_createobject1_callback;
        if (createobject1_cb) {
            QObject* cbval1 = parent;
            QObject* callback_ret = createobject1_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlComponent::createObject(parent);
    }

    // Virtual method for C ABI access and custom callback
    QObject* createObject(QObject* parent, const QMap<QString, QVariant>& properties) {
        if (qqmlcomponent_createobject22_isbase) {
            qqmlcomponent_createobject22_isbase = false;
            return QQmlComponent::createObject(parent, properties);
        }
        auto createobject22_cb = qqmlcomponent_createobject22_callback;
        if (createobject22_cb) {
            QObject* cbval1 = parent;
            const QMap<QString, QVariant>& properties_ret = properties;
            // Convert QMap<> from C++ memory to manually-managed C memory
            libqt_string* properties_karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * properties_ret.size()));
            QVariant** properties_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * properties_ret.size()));
            int properties_ctr = 0;
            for (auto properties_itr = properties_ret.keyValueBegin(); properties_itr != properties_ret.keyValueEnd(); ++properties_itr) {
                auto properties_mapkey_ret = properties_itr->first;
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray properties_mapkey_b = properties_mapkey_ret.toUtf8();
                libqt_string properties_mapkey_str;
                properties_mapkey_str.len = properties_mapkey_b.length();
                properties_mapkey_str.data = static_cast<const char*>(malloc(properties_mapkey_str.len + 1));
                memcpy((void*)properties_mapkey_str.data, properties_mapkey_b.data(), properties_mapkey_str.len);
                ((char*)properties_mapkey_str.data)[properties_mapkey_str.len] = '\0';
                properties_karr[properties_ctr] = properties_mapkey_str;
                properties_varr[properties_ctr] = new QVariant(properties_itr->second);
                properties_ctr++;
            }
            libqt_map properties_out;
            properties_out.len = properties_ret.size();
            properties_out.keys = static_cast<void*>(properties_karr);
            properties_out.values = static_cast<void*>(properties_varr);
            libqt_map /* of libqt_string to QVariant* */ cbval2 = properties_out;
            QObject* callback_ret = createobject22_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlComponent::createObject(parent, properties);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qqmlcomponent_sender_isbase) {
            qqmlcomponent_sender_isbase = false;
            return QQmlComponent::sender();
        }
        auto sender_cb = qqmlcomponent_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQmlComponent::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qqmlcomponent_sendersignalindex_isbase) {
            qqmlcomponent_sendersignalindex_isbase = false;
            return QQmlComponent::senderSignalIndex();
        }
        auto sendersignalindex_cb = qqmlcomponent_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQmlComponent::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qqmlcomponent_receivers_isbase) {
            qqmlcomponent_receivers_isbase = false;
            return QQmlComponent::receivers(signal);
        }
        auto receivers_cb = qqmlcomponent_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQmlComponent::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qqmlcomponent_issignalconnected_isbase) {
            qqmlcomponent_issignalconnected_isbase = false;
            return QQmlComponent::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qqmlcomponent_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQmlComponent::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQmlComponent_TimerEvent(QQmlComponent* self, QTimerEvent* event);
    friend void QQmlComponent_SuperTimerEvent(QQmlComponent* self, QTimerEvent* event);
    friend void QQmlComponent_ChildEvent(QQmlComponent* self, QChildEvent* event);
    friend void QQmlComponent_SuperChildEvent(QQmlComponent* self, QChildEvent* event);
    friend void QQmlComponent_CustomEvent(QQmlComponent* self, QEvent* event);
    friend void QQmlComponent_SuperCustomEvent(QQmlComponent* self, QEvent* event);
    friend void QQmlComponent_ConnectNotify(QQmlComponent* self, const QMetaMethod* signal);
    friend void QQmlComponent_SuperConnectNotify(QQmlComponent* self, const QMetaMethod* signal);
    friend void QQmlComponent_DisconnectNotify(QQmlComponent* self, const QMetaMethod* signal);
    friend void QQmlComponent_SuperDisconnectNotify(QQmlComponent* self, const QMetaMethod* signal);
    friend QObject* QQmlComponent_CreateObject2(QQmlComponent* self);
    friend QObject* QQmlComponent_SuperCreateObject2(QQmlComponent* self);
    friend QObject* QQmlComponent_CreateObject1(QQmlComponent* self, QObject* parent);
    friend QObject* QQmlComponent_SuperCreateObject1(QQmlComponent* self, QObject* parent);
    friend QObject* QQmlComponent_CreateObject22(QQmlComponent* self, QObject* parent, const libqt_map /* of libqt_string to QVariant* */ properties);
    friend QObject* QQmlComponent_SuperCreateObject22(QQmlComponent* self, QObject* parent, const libqt_map /* of libqt_string to QVariant* */ properties);
    friend QObject* QQmlComponent_Sender(const QQmlComponent* self);
    friend QObject* QQmlComponent_SuperSender(const QQmlComponent* self);
    friend int QQmlComponent_SenderSignalIndex(const QQmlComponent* self);
    friend int QQmlComponent_SuperSenderSignalIndex(const QQmlComponent* self);
    friend int QQmlComponent_Receivers(const QQmlComponent* self, const char* signal);
    friend int QQmlComponent_SuperReceivers(const QQmlComponent* self, const char* signal);
    friend bool QQmlComponent_IsSignalConnected(const QQmlComponent* self, const QMetaMethod* signal);
    friend bool QQmlComponent_SuperIsSignalConnected(const QQmlComponent* self, const QMetaMethod* signal);
};

#endif
