#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALDEFAULT_EXTENSIONFACTORY_H
#define SRC_DESIGNERC_LIBVIRTUALDEFAULT_EXTENSIONFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QExtensionFactory so that we can call protected methods
class VirtualQExtensionFactory final : public QExtensionFactory {

  public:
    // Virtual class boolean flag
    bool isVirtualQExtensionFactory = true;

    // Virtual class public types (including callbacks)
    using QExtensionFactory_MetaObject_Callback = QMetaObject* (*)();
    using QExtensionFactory_Metacast_Callback = void* (*)(QExtensionFactory*, const char*);
    using QExtensionFactory_Metacall_Callback = int (*)(QExtensionFactory*, int, int, void**);
    using QExtensionFactory_Extension_Callback = QObject* (*)(const QExtensionFactory*, QObject*, libqt_string);
    using QExtensionFactory_CreateExtension_Callback = QObject* (*)(const QExtensionFactory*, QObject*, libqt_string, QObject*);
    using QExtensionFactory_Event_Callback = bool (*)(QExtensionFactory*, QEvent*);
    using QExtensionFactory_EventFilter_Callback = bool (*)(QExtensionFactory*, QObject*, QEvent*);
    using QExtensionFactory_TimerEvent_Callback = void (*)(QExtensionFactory*, QTimerEvent*);
    using QExtensionFactory_ChildEvent_Callback = void (*)(QExtensionFactory*, QChildEvent*);
    using QExtensionFactory_CustomEvent_Callback = void (*)(QExtensionFactory*, QEvent*);
    using QExtensionFactory_ConnectNotify_Callback = void (*)(QExtensionFactory*, QMetaMethod*);
    using QExtensionFactory_DisconnectNotify_Callback = void (*)(QExtensionFactory*, QMetaMethod*);
    using QExtensionFactory_Sender_Callback = QObject* (*)();
    using QExtensionFactory_SenderSignalIndex_Callback = int (*)();
    using QExtensionFactory_Receivers_Callback = int (*)(const QExtensionFactory*, const char*);
    using QExtensionFactory_IsSignalConnected_Callback = bool (*)(const QExtensionFactory*, QMetaMethod*);

  protected:
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
    QExtensionFactory_Sender_Callback qextensionfactory_sender_callback = nullptr;
    QExtensionFactory_SenderSignalIndex_Callback qextensionfactory_sendersignalindex_callback = nullptr;
    QExtensionFactory_Receivers_Callback qextensionfactory_receivers_callback = nullptr;
    QExtensionFactory_IsSignalConnected_Callback qextensionfactory_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qextensionfactory_metaobject_isbase = false;
    mutable bool qextensionfactory_metacast_isbase = false;
    mutable bool qextensionfactory_metacall_isbase = false;
    mutable bool qextensionfactory_extension_isbase = false;
    mutable bool qextensionfactory_createextension_isbase = false;
    mutable bool qextensionfactory_event_isbase = false;
    mutable bool qextensionfactory_eventfilter_isbase = false;
    mutable bool qextensionfactory_timerevent_isbase = false;
    mutable bool qextensionfactory_childevent_isbase = false;
    mutable bool qextensionfactory_customevent_isbase = false;
    mutable bool qextensionfactory_connectnotify_isbase = false;
    mutable bool qextensionfactory_disconnectnotify_isbase = false;
    mutable bool qextensionfactory_sender_isbase = false;
    mutable bool qextensionfactory_sendersignalindex_isbase = false;
    mutable bool qextensionfactory_receivers_isbase = false;
    mutable bool qextensionfactory_issignalconnected_isbase = false;

  public:
    VirtualQExtensionFactory() : QExtensionFactory() {};
    VirtualQExtensionFactory(QExtensionManager* parent) : QExtensionFactory(parent) {};

    ~VirtualQExtensionFactory() {
        qextensionfactory_metaobject_callback = nullptr;
        qextensionfactory_metacast_callback = nullptr;
        qextensionfactory_metacall_callback = nullptr;
        qextensionfactory_extension_callback = nullptr;
        qextensionfactory_createextension_callback = nullptr;
        qextensionfactory_event_callback = nullptr;
        qextensionfactory_eventfilter_callback = nullptr;
        qextensionfactory_timerevent_callback = nullptr;
        qextensionfactory_childevent_callback = nullptr;
        qextensionfactory_customevent_callback = nullptr;
        qextensionfactory_connectnotify_callback = nullptr;
        qextensionfactory_disconnectnotify_callback = nullptr;
        qextensionfactory_sender_callback = nullptr;
        qextensionfactory_sendersignalindex_callback = nullptr;
        qextensionfactory_receivers_callback = nullptr;
        qextensionfactory_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQExtensionFactory_MetaObject_Callback(QExtensionFactory_MetaObject_Callback cb) { qextensionfactory_metaobject_callback = cb; }
    inline void setQExtensionFactory_Metacast_Callback(QExtensionFactory_Metacast_Callback cb) { qextensionfactory_metacast_callback = cb; }
    inline void setQExtensionFactory_Metacall_Callback(QExtensionFactory_Metacall_Callback cb) { qextensionfactory_metacall_callback = cb; }
    inline void setQExtensionFactory_Extension_Callback(QExtensionFactory_Extension_Callback cb) { qextensionfactory_extension_callback = cb; }
    inline void setQExtensionFactory_CreateExtension_Callback(QExtensionFactory_CreateExtension_Callback cb) { qextensionfactory_createextension_callback = cb; }
    inline void setQExtensionFactory_Event_Callback(QExtensionFactory_Event_Callback cb) { qextensionfactory_event_callback = cb; }
    inline void setQExtensionFactory_EventFilter_Callback(QExtensionFactory_EventFilter_Callback cb) { qextensionfactory_eventfilter_callback = cb; }
    inline void setQExtensionFactory_TimerEvent_Callback(QExtensionFactory_TimerEvent_Callback cb) { qextensionfactory_timerevent_callback = cb; }
    inline void setQExtensionFactory_ChildEvent_Callback(QExtensionFactory_ChildEvent_Callback cb) { qextensionfactory_childevent_callback = cb; }
    inline void setQExtensionFactory_CustomEvent_Callback(QExtensionFactory_CustomEvent_Callback cb) { qextensionfactory_customevent_callback = cb; }
    inline void setQExtensionFactory_ConnectNotify_Callback(QExtensionFactory_ConnectNotify_Callback cb) { qextensionfactory_connectnotify_callback = cb; }
    inline void setQExtensionFactory_DisconnectNotify_Callback(QExtensionFactory_DisconnectNotify_Callback cb) { qextensionfactory_disconnectnotify_callback = cb; }
    inline void setQExtensionFactory_Sender_Callback(QExtensionFactory_Sender_Callback cb) { qextensionfactory_sender_callback = cb; }
    inline void setQExtensionFactory_SenderSignalIndex_Callback(QExtensionFactory_SenderSignalIndex_Callback cb) { qextensionfactory_sendersignalindex_callback = cb; }
    inline void setQExtensionFactory_Receivers_Callback(QExtensionFactory_Receivers_Callback cb) { qextensionfactory_receivers_callback = cb; }
    inline void setQExtensionFactory_IsSignalConnected_Callback(QExtensionFactory_IsSignalConnected_Callback cb) { qextensionfactory_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQExtensionFactory_MetaObject_IsBase(bool value) const { qextensionfactory_metaobject_isbase = value; }
    inline void setQExtensionFactory_Metacast_IsBase(bool value) const { qextensionfactory_metacast_isbase = value; }
    inline void setQExtensionFactory_Metacall_IsBase(bool value) const { qextensionfactory_metacall_isbase = value; }
    inline void setQExtensionFactory_Extension_IsBase(bool value) const { qextensionfactory_extension_isbase = value; }
    inline void setQExtensionFactory_CreateExtension_IsBase(bool value) const { qextensionfactory_createextension_isbase = value; }
    inline void setQExtensionFactory_Event_IsBase(bool value) const { qextensionfactory_event_isbase = value; }
    inline void setQExtensionFactory_EventFilter_IsBase(bool value) const { qextensionfactory_eventfilter_isbase = value; }
    inline void setQExtensionFactory_TimerEvent_IsBase(bool value) const { qextensionfactory_timerevent_isbase = value; }
    inline void setQExtensionFactory_ChildEvent_IsBase(bool value) const { qextensionfactory_childevent_isbase = value; }
    inline void setQExtensionFactory_CustomEvent_IsBase(bool value) const { qextensionfactory_customevent_isbase = value; }
    inline void setQExtensionFactory_ConnectNotify_IsBase(bool value) const { qextensionfactory_connectnotify_isbase = value; }
    inline void setQExtensionFactory_DisconnectNotify_IsBase(bool value) const { qextensionfactory_disconnectnotify_isbase = value; }
    inline void setQExtensionFactory_Sender_IsBase(bool value) const { qextensionfactory_sender_isbase = value; }
    inline void setQExtensionFactory_SenderSignalIndex_IsBase(bool value) const { qextensionfactory_sendersignalindex_isbase = value; }
    inline void setQExtensionFactory_Receivers_IsBase(bool value) const { qextensionfactory_receivers_isbase = value; }
    inline void setQExtensionFactory_IsSignalConnected_IsBase(bool value) const { qextensionfactory_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qextensionfactory_metaobject_isbase) {
            qextensionfactory_metaobject_isbase = false;
            return QExtensionFactory::metaObject();
        } else if (qextensionfactory_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qextensionfactory_metaobject_callback();
            return callback_ret;
        } else {
            return QExtensionFactory::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qextensionfactory_metacast_isbase) {
            qextensionfactory_metacast_isbase = false;
            return QExtensionFactory::qt_metacast(param1);
        } else if (qextensionfactory_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qextensionfactory_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QExtensionFactory::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qextensionfactory_metacall_isbase) {
            qextensionfactory_metacall_isbase = false;
            return QExtensionFactory::qt_metacall(param1, param2, param3);
        } else if (qextensionfactory_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qextensionfactory_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QExtensionFactory::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* extension(QObject* object, const QString& iid) const override {
        if (qextensionfactory_extension_isbase) {
            qextensionfactory_extension_isbase = false;
            return QExtensionFactory::extension(object, iid);
        } else if (qextensionfactory_extension_callback != nullptr) {
            QObject* cbval1 = object;
            const QString iid_ret = iid;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray iid_b = iid_ret.toUtf8();
            libqt_string iid_str;
            iid_str.len = iid_b.length();
            iid_str.data = static_cast<const char*>(malloc(iid_str.len + 1));
            memcpy((void*)iid_str.data, iid_b.data(), iid_str.len);
            ((char*)iid_str.data)[iid_str.len] = '\0';
            libqt_string cbval2 = iid_str;

            QObject* callback_ret = qextensionfactory_extension_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QExtensionFactory::extension(object, iid);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* createExtension(QObject* object, const QString& iid, QObject* parent) const override {
        if (qextensionfactory_createextension_isbase) {
            qextensionfactory_createextension_isbase = false;
            return QExtensionFactory::createExtension(object, iid, parent);
        } else if (qextensionfactory_createextension_callback != nullptr) {
            QObject* cbval1 = object;
            const QString iid_ret = iid;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray iid_b = iid_ret.toUtf8();
            libqt_string iid_str;
            iid_str.len = iid_b.length();
            iid_str.data = static_cast<const char*>(malloc(iid_str.len + 1));
            memcpy((void*)iid_str.data, iid_b.data(), iid_str.len);
            ((char*)iid_str.data)[iid_str.len] = '\0';
            libqt_string cbval2 = iid_str;
            QObject* cbval3 = parent;

            QObject* callback_ret = qextensionfactory_createextension_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QExtensionFactory::createExtension(object, iid, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qextensionfactory_event_isbase) {
            qextensionfactory_event_isbase = false;
            return QExtensionFactory::event(event);
        } else if (qextensionfactory_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qextensionfactory_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QExtensionFactory::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qextensionfactory_eventfilter_isbase) {
            qextensionfactory_eventfilter_isbase = false;
            return QExtensionFactory::eventFilter(watched, event);
        } else if (qextensionfactory_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qextensionfactory_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QExtensionFactory::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qextensionfactory_timerevent_isbase) {
            qextensionfactory_timerevent_isbase = false;
            QExtensionFactory::timerEvent(event);
        } else if (qextensionfactory_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qextensionfactory_timerevent_callback(this, cbval1);
        } else {
            QExtensionFactory::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qextensionfactory_childevent_isbase) {
            qextensionfactory_childevent_isbase = false;
            QExtensionFactory::childEvent(event);
        } else if (qextensionfactory_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qextensionfactory_childevent_callback(this, cbval1);
        } else {
            QExtensionFactory::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qextensionfactory_customevent_isbase) {
            qextensionfactory_customevent_isbase = false;
            QExtensionFactory::customEvent(event);
        } else if (qextensionfactory_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qextensionfactory_customevent_callback(this, cbval1);
        } else {
            QExtensionFactory::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qextensionfactory_connectnotify_isbase) {
            qextensionfactory_connectnotify_isbase = false;
            QExtensionFactory::connectNotify(signal);
        } else if (qextensionfactory_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qextensionfactory_connectnotify_callback(this, cbval1);
        } else {
            QExtensionFactory::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qextensionfactory_disconnectnotify_isbase) {
            qextensionfactory_disconnectnotify_isbase = false;
            QExtensionFactory::disconnectNotify(signal);
        } else if (qextensionfactory_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qextensionfactory_disconnectnotify_callback(this, cbval1);
        } else {
            QExtensionFactory::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qextensionfactory_sender_isbase) {
            qextensionfactory_sender_isbase = false;
            return QExtensionFactory::sender();
        } else if (qextensionfactory_sender_callback != nullptr) {
            QObject* callback_ret = qextensionfactory_sender_callback();
            return callback_ret;
        } else {
            return QExtensionFactory::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qextensionfactory_sendersignalindex_isbase) {
            qextensionfactory_sendersignalindex_isbase = false;
            return QExtensionFactory::senderSignalIndex();
        } else if (qextensionfactory_sendersignalindex_callback != nullptr) {
            int callback_ret = qextensionfactory_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QExtensionFactory::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qextensionfactory_receivers_isbase) {
            qextensionfactory_receivers_isbase = false;
            return QExtensionFactory::receivers(signal);
        } else if (qextensionfactory_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qextensionfactory_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QExtensionFactory::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qextensionfactory_issignalconnected_isbase) {
            qextensionfactory_issignalconnected_isbase = false;
            return QExtensionFactory::isSignalConnected(signal);
        } else if (qextensionfactory_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qextensionfactory_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QExtensionFactory::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend QObject* QExtensionFactory_CreateExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid, QObject* parent);
    friend QObject* QExtensionFactory_QBaseCreateExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid, QObject* parent);
    friend void QExtensionFactory_TimerEvent(QExtensionFactory* self, QTimerEvent* event);
    friend void QExtensionFactory_QBaseTimerEvent(QExtensionFactory* self, QTimerEvent* event);
    friend void QExtensionFactory_ChildEvent(QExtensionFactory* self, QChildEvent* event);
    friend void QExtensionFactory_QBaseChildEvent(QExtensionFactory* self, QChildEvent* event);
    friend void QExtensionFactory_CustomEvent(QExtensionFactory* self, QEvent* event);
    friend void QExtensionFactory_QBaseCustomEvent(QExtensionFactory* self, QEvent* event);
    friend void QExtensionFactory_ConnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
    friend void QExtensionFactory_QBaseConnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
    friend void QExtensionFactory_DisconnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
    friend void QExtensionFactory_QBaseDisconnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
    friend QObject* QExtensionFactory_Sender(const QExtensionFactory* self);
    friend QObject* QExtensionFactory_QBaseSender(const QExtensionFactory* self);
    friend int QExtensionFactory_SenderSignalIndex(const QExtensionFactory* self);
    friend int QExtensionFactory_QBaseSenderSignalIndex(const QExtensionFactory* self);
    friend int QExtensionFactory_Receivers(const QExtensionFactory* self, const char* signal);
    friend int QExtensionFactory_QBaseReceivers(const QExtensionFactory* self, const char* signal);
    friend bool QExtensionFactory_IsSignalConnected(const QExtensionFactory* self, const QMetaMethod* signal);
    friend bool QExtensionFactory_QBaseIsSignalConnected(const QExtensionFactory* self, const QMetaMethod* signal);
};

#endif
