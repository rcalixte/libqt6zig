#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DOBJECT_HXX
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DOBJECT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuick3DObject so that we can call protected methods
class VirtualQQuick3DObject final : public QQuick3DObject {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuick3DObject = true;

    // Virtual class public types (including callbacks)
    using QQuick3DObject_MetaObject_Callback = QMetaObject* (*)();
    using QQuick3DObject_Metacast_Callback = void* (*)(QQuick3DObject*, const char*);
    using QQuick3DObject_Metacall_Callback = int (*)(QQuick3DObject*, int, int, void**);
    using QQuick3DObject_MarkAllDirty_Callback = void (*)();
    using QQuick3DObject_ItemChange_Callback = void (*)(QQuick3DObject*, int, QQuick3DObject__ItemChangeData*);
    using QQuick3DObject_ClassBegin_Callback = void (*)();
    using QQuick3DObject_ComponentComplete_Callback = void (*)();
    using QQuick3DObject_PreSync_Callback = void (*)();
    using QQuick3DObject_Event_Callback = bool (*)(QQuick3DObject*, QEvent*);
    using QQuick3DObject_EventFilter_Callback = bool (*)(QQuick3DObject*, QObject*, QEvent*);
    using QQuick3DObject_TimerEvent_Callback = void (*)(QQuick3DObject*, QTimerEvent*);
    using QQuick3DObject_ChildEvent_Callback = void (*)(QQuick3DObject*, QChildEvent*);
    using QQuick3DObject_CustomEvent_Callback = void (*)(QQuick3DObject*, QEvent*);
    using QQuick3DObject_ConnectNotify_Callback = void (*)(QQuick3DObject*, QMetaMethod*);
    using QQuick3DObject_DisconnectNotify_Callback = void (*)(QQuick3DObject*, QMetaMethod*);
    using QQuick3DObject_IsComponentComplete_Callback = bool (*)();
    using QQuick3DObject_Sender_Callback = QObject* (*)();
    using QQuick3DObject_SenderSignalIndex_Callback = int (*)();
    using QQuick3DObject_Receivers_Callback = int (*)(const QQuick3DObject*, const char*);
    using QQuick3DObject_IsSignalConnected_Callback = bool (*)(const QQuick3DObject*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQuick3DObject_MetaObject_Callback qquick3dobject_metaobject_callback = nullptr;
    QQuick3DObject_Metacast_Callback qquick3dobject_metacast_callback = nullptr;
    QQuick3DObject_Metacall_Callback qquick3dobject_metacall_callback = nullptr;
    QQuick3DObject_MarkAllDirty_Callback qquick3dobject_markalldirty_callback = nullptr;
    QQuick3DObject_ItemChange_Callback qquick3dobject_itemchange_callback = nullptr;
    QQuick3DObject_ClassBegin_Callback qquick3dobject_classbegin_callback = nullptr;
    QQuick3DObject_ComponentComplete_Callback qquick3dobject_componentcomplete_callback = nullptr;
    QQuick3DObject_PreSync_Callback qquick3dobject_presync_callback = nullptr;
    QQuick3DObject_Event_Callback qquick3dobject_event_callback = nullptr;
    QQuick3DObject_EventFilter_Callback qquick3dobject_eventfilter_callback = nullptr;
    QQuick3DObject_TimerEvent_Callback qquick3dobject_timerevent_callback = nullptr;
    QQuick3DObject_ChildEvent_Callback qquick3dobject_childevent_callback = nullptr;
    QQuick3DObject_CustomEvent_Callback qquick3dobject_customevent_callback = nullptr;
    QQuick3DObject_ConnectNotify_Callback qquick3dobject_connectnotify_callback = nullptr;
    QQuick3DObject_DisconnectNotify_Callback qquick3dobject_disconnectnotify_callback = nullptr;
    QQuick3DObject_IsComponentComplete_Callback qquick3dobject_iscomponentcomplete_callback = nullptr;
    QQuick3DObject_Sender_Callback qquick3dobject_sender_callback = nullptr;
    QQuick3DObject_SenderSignalIndex_Callback qquick3dobject_sendersignalindex_callback = nullptr;
    QQuick3DObject_Receivers_Callback qquick3dobject_receivers_callback = nullptr;
    QQuick3DObject_IsSignalConnected_Callback qquick3dobject_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquick3dobject_metaobject_isbase = false;
    mutable bool qquick3dobject_metacast_isbase = false;
    mutable bool qquick3dobject_metacall_isbase = false;
    mutable bool qquick3dobject_markalldirty_isbase = false;
    mutable bool qquick3dobject_itemchange_isbase = false;
    mutable bool qquick3dobject_classbegin_isbase = false;
    mutable bool qquick3dobject_componentcomplete_isbase = false;
    mutable bool qquick3dobject_presync_isbase = false;
    mutable bool qquick3dobject_event_isbase = false;
    mutable bool qquick3dobject_eventfilter_isbase = false;
    mutable bool qquick3dobject_timerevent_isbase = false;
    mutable bool qquick3dobject_childevent_isbase = false;
    mutable bool qquick3dobject_customevent_isbase = false;
    mutable bool qquick3dobject_connectnotify_isbase = false;
    mutable bool qquick3dobject_disconnectnotify_isbase = false;
    mutable bool qquick3dobject_iscomponentcomplete_isbase = false;
    mutable bool qquick3dobject_sender_isbase = false;
    mutable bool qquick3dobject_sendersignalindex_isbase = false;
    mutable bool qquick3dobject_receivers_isbase = false;
    mutable bool qquick3dobject_issignalconnected_isbase = false;

  public:
    VirtualQQuick3DObject() : QQuick3DObject() {};
    VirtualQQuick3DObject(QQuick3DObject* parent) : QQuick3DObject(parent) {};

    // Callback setters
    inline void setQQuick3DObject_MetaObject_Callback(QQuick3DObject_MetaObject_Callback cb) { qquick3dobject_metaobject_callback = cb; }
    inline void setQQuick3DObject_Metacast_Callback(QQuick3DObject_Metacast_Callback cb) { qquick3dobject_metacast_callback = cb; }
    inline void setQQuick3DObject_Metacall_Callback(QQuick3DObject_Metacall_Callback cb) { qquick3dobject_metacall_callback = cb; }
    inline void setQQuick3DObject_MarkAllDirty_Callback(QQuick3DObject_MarkAllDirty_Callback cb) { qquick3dobject_markalldirty_callback = cb; }
    inline void setQQuick3DObject_ItemChange_Callback(QQuick3DObject_ItemChange_Callback cb) { qquick3dobject_itemchange_callback = cb; }
    inline void setQQuick3DObject_ClassBegin_Callback(QQuick3DObject_ClassBegin_Callback cb) { qquick3dobject_classbegin_callback = cb; }
    inline void setQQuick3DObject_ComponentComplete_Callback(QQuick3DObject_ComponentComplete_Callback cb) { qquick3dobject_componentcomplete_callback = cb; }
    inline void setQQuick3DObject_PreSync_Callback(QQuick3DObject_PreSync_Callback cb) { qquick3dobject_presync_callback = cb; }
    inline void setQQuick3DObject_Event_Callback(QQuick3DObject_Event_Callback cb) { qquick3dobject_event_callback = cb; }
    inline void setQQuick3DObject_EventFilter_Callback(QQuick3DObject_EventFilter_Callback cb) { qquick3dobject_eventfilter_callback = cb; }
    inline void setQQuick3DObject_TimerEvent_Callback(QQuick3DObject_TimerEvent_Callback cb) { qquick3dobject_timerevent_callback = cb; }
    inline void setQQuick3DObject_ChildEvent_Callback(QQuick3DObject_ChildEvent_Callback cb) { qquick3dobject_childevent_callback = cb; }
    inline void setQQuick3DObject_CustomEvent_Callback(QQuick3DObject_CustomEvent_Callback cb) { qquick3dobject_customevent_callback = cb; }
    inline void setQQuick3DObject_ConnectNotify_Callback(QQuick3DObject_ConnectNotify_Callback cb) { qquick3dobject_connectnotify_callback = cb; }
    inline void setQQuick3DObject_DisconnectNotify_Callback(QQuick3DObject_DisconnectNotify_Callback cb) { qquick3dobject_disconnectnotify_callback = cb; }
    inline void setQQuick3DObject_IsComponentComplete_Callback(QQuick3DObject_IsComponentComplete_Callback cb) { qquick3dobject_iscomponentcomplete_callback = cb; }
    inline void setQQuick3DObject_Sender_Callback(QQuick3DObject_Sender_Callback cb) { qquick3dobject_sender_callback = cb; }
    inline void setQQuick3DObject_SenderSignalIndex_Callback(QQuick3DObject_SenderSignalIndex_Callback cb) { qquick3dobject_sendersignalindex_callback = cb; }
    inline void setQQuick3DObject_Receivers_Callback(QQuick3DObject_Receivers_Callback cb) { qquick3dobject_receivers_callback = cb; }
    inline void setQQuick3DObject_IsSignalConnected_Callback(QQuick3DObject_IsSignalConnected_Callback cb) { qquick3dobject_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuick3DObject_MetaObject_IsBase(bool value) const { qquick3dobject_metaobject_isbase = value; }
    inline void setQQuick3DObject_Metacast_IsBase(bool value) const { qquick3dobject_metacast_isbase = value; }
    inline void setQQuick3DObject_Metacall_IsBase(bool value) const { qquick3dobject_metacall_isbase = value; }
    inline void setQQuick3DObject_MarkAllDirty_IsBase(bool value) const { qquick3dobject_markalldirty_isbase = value; }
    inline void setQQuick3DObject_ItemChange_IsBase(bool value) const { qquick3dobject_itemchange_isbase = value; }
    inline void setQQuick3DObject_ClassBegin_IsBase(bool value) const { qquick3dobject_classbegin_isbase = value; }
    inline void setQQuick3DObject_ComponentComplete_IsBase(bool value) const { qquick3dobject_componentcomplete_isbase = value; }
    inline void setQQuick3DObject_PreSync_IsBase(bool value) const { qquick3dobject_presync_isbase = value; }
    inline void setQQuick3DObject_Event_IsBase(bool value) const { qquick3dobject_event_isbase = value; }
    inline void setQQuick3DObject_EventFilter_IsBase(bool value) const { qquick3dobject_eventfilter_isbase = value; }
    inline void setQQuick3DObject_TimerEvent_IsBase(bool value) const { qquick3dobject_timerevent_isbase = value; }
    inline void setQQuick3DObject_ChildEvent_IsBase(bool value) const { qquick3dobject_childevent_isbase = value; }
    inline void setQQuick3DObject_CustomEvent_IsBase(bool value) const { qquick3dobject_customevent_isbase = value; }
    inline void setQQuick3DObject_ConnectNotify_IsBase(bool value) const { qquick3dobject_connectnotify_isbase = value; }
    inline void setQQuick3DObject_DisconnectNotify_IsBase(bool value) const { qquick3dobject_disconnectnotify_isbase = value; }
    inline void setQQuick3DObject_IsComponentComplete_IsBase(bool value) const { qquick3dobject_iscomponentcomplete_isbase = value; }
    inline void setQQuick3DObject_Sender_IsBase(bool value) const { qquick3dobject_sender_isbase = value; }
    inline void setQQuick3DObject_SenderSignalIndex_IsBase(bool value) const { qquick3dobject_sendersignalindex_isbase = value; }
    inline void setQQuick3DObject_Receivers_IsBase(bool value) const { qquick3dobject_receivers_isbase = value; }
    inline void setQQuick3DObject_IsSignalConnected_IsBase(bool value) const { qquick3dobject_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquick3dobject_metaobject_isbase) {
            qquick3dobject_metaobject_isbase = false;
            return QQuick3DObject::metaObject();
        }
        auto metaobject_cb = qquick3dobject_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuick3DObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquick3dobject_metacast_isbase) {
            qquick3dobject_metacast_isbase = false;
            return QQuick3DObject::qt_metacast(param1);
        }
        auto metacast_cb = qquick3dobject_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuick3DObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquick3dobject_metacall_isbase) {
            qquick3dobject_metacall_isbase = false;
            return QQuick3DObject::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquick3dobject_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuick3DObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAllDirty() override {
        if (qquick3dobject_markalldirty_isbase) {
            qquick3dobject_markalldirty_isbase = false;
            QQuick3DObject::markAllDirty();
            return;
        }
        auto markalldirty_cb = qquick3dobject_markalldirty_callback;
        if (markalldirty_cb) {
            markalldirty_cb();
            return;
        }
        QQuick3DObject::markAllDirty();
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuick3DObject::ItemChange param1, const QQuick3DObject::ItemChangeData& param2) override {
        if (qquick3dobject_itemchange_isbase) {
            qquick3dobject_itemchange_isbase = false;
            QQuick3DObject::itemChange(param1, param2);
            return;
        }
        auto itemchange_cb = qquick3dobject_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(param1);
            const QQuick3DObject::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuick3DObject__ItemChangeData* cbval2 = const_cast<QQuick3DObject::ItemChangeData*>(&param2_ret);
            itemchange_cb(this, cbval1, cbval2);
            return;
        }
        QQuick3DObject::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquick3dobject_classbegin_isbase) {
            qquick3dobject_classbegin_isbase = false;
            QQuick3DObject::classBegin();
            return;
        }
        auto classbegin_cb = qquick3dobject_classbegin_callback;
        if (classbegin_cb) {
            classbegin_cb();
            return;
        }
        QQuick3DObject::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquick3dobject_componentcomplete_isbase) {
            qquick3dobject_componentcomplete_isbase = false;
            QQuick3DObject::componentComplete();
            return;
        }
        auto componentcomplete_cb = qquick3dobject_componentcomplete_callback;
        if (componentcomplete_cb) {
            componentcomplete_cb();
            return;
        }
        QQuick3DObject::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preSync() override {
        if (qquick3dobject_presync_isbase) {
            qquick3dobject_presync_isbase = false;
            QQuick3DObject::preSync();
            return;
        }
        auto presync_cb = qquick3dobject_presync_callback;
        if (presync_cb) {
            presync_cb();
            return;
        }
        QQuick3DObject::preSync();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquick3dobject_event_isbase) {
            qquick3dobject_event_isbase = false;
            return QQuick3DObject::event(event);
        }
        auto event_cb = qquick3dobject_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuick3DObject::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquick3dobject_eventfilter_isbase) {
            qquick3dobject_eventfilter_isbase = false;
            return QQuick3DObject::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquick3dobject_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuick3DObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquick3dobject_timerevent_isbase) {
            qquick3dobject_timerevent_isbase = false;
            QQuick3DObject::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquick3dobject_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuick3DObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquick3dobject_childevent_isbase) {
            qquick3dobject_childevent_isbase = false;
            QQuick3DObject::childEvent(event);
            return;
        }
        auto childevent_cb = qquick3dobject_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuick3DObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquick3dobject_customevent_isbase) {
            qquick3dobject_customevent_isbase = false;
            QQuick3DObject::customEvent(event);
            return;
        }
        auto customevent_cb = qquick3dobject_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuick3DObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquick3dobject_connectnotify_isbase) {
            qquick3dobject_connectnotify_isbase = false;
            QQuick3DObject::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquick3dobject_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuick3DObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquick3dobject_disconnectnotify_isbase) {
            qquick3dobject_disconnectnotify_isbase = false;
            QQuick3DObject::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquick3dobject_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuick3DObject::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isComponentComplete() const {
        if (qquick3dobject_iscomponentcomplete_isbase) {
            qquick3dobject_iscomponentcomplete_isbase = false;
            return QQuick3DObject::isComponentComplete();
        }
        auto iscomponentcomplete_cb = qquick3dobject_iscomponentcomplete_callback;
        if (iscomponentcomplete_cb) {
            bool callback_ret = iscomponentcomplete_cb();
            return callback_ret;
        }
        return QQuick3DObject::isComponentComplete();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquick3dobject_sender_isbase) {
            qquick3dobject_sender_isbase = false;
            return QQuick3DObject::sender();
        }
        auto sender_cb = qquick3dobject_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuick3DObject::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquick3dobject_sendersignalindex_isbase) {
            qquick3dobject_sendersignalindex_isbase = false;
            return QQuick3DObject::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquick3dobject_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuick3DObject::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquick3dobject_receivers_isbase) {
            qquick3dobject_receivers_isbase = false;
            return QQuick3DObject::receivers(signal);
        }
        auto receivers_cb = qquick3dobject_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuick3DObject::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquick3dobject_issignalconnected_isbase) {
            qquick3dobject_issignalconnected_isbase = false;
            return QQuick3DObject::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquick3dobject_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuick3DObject::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQuick3DObject_MarkAllDirty(QQuick3DObject* self);
    friend void QQuick3DObject_SuperMarkAllDirty(QQuick3DObject* self);
    friend void QQuick3DObject_ItemChange(QQuick3DObject* self, int param1, const QQuick3DObject__ItemChangeData* param2);
    friend void QQuick3DObject_SuperItemChange(QQuick3DObject* self, int param1, const QQuick3DObject__ItemChangeData* param2);
    friend void QQuick3DObject_ClassBegin(QQuick3DObject* self);
    friend void QQuick3DObject_SuperClassBegin(QQuick3DObject* self);
    friend void QQuick3DObject_ComponentComplete(QQuick3DObject* self);
    friend void QQuick3DObject_SuperComponentComplete(QQuick3DObject* self);
    friend void QQuick3DObject_PreSync(QQuick3DObject* self);
    friend void QQuick3DObject_SuperPreSync(QQuick3DObject* self);
    friend void QQuick3DObject_TimerEvent(QQuick3DObject* self, QTimerEvent* event);
    friend void QQuick3DObject_SuperTimerEvent(QQuick3DObject* self, QTimerEvent* event);
    friend void QQuick3DObject_ChildEvent(QQuick3DObject* self, QChildEvent* event);
    friend void QQuick3DObject_SuperChildEvent(QQuick3DObject* self, QChildEvent* event);
    friend void QQuick3DObject_CustomEvent(QQuick3DObject* self, QEvent* event);
    friend void QQuick3DObject_SuperCustomEvent(QQuick3DObject* self, QEvent* event);
    friend void QQuick3DObject_ConnectNotify(QQuick3DObject* self, const QMetaMethod* signal);
    friend void QQuick3DObject_SuperConnectNotify(QQuick3DObject* self, const QMetaMethod* signal);
    friend void QQuick3DObject_DisconnectNotify(QQuick3DObject* self, const QMetaMethod* signal);
    friend void QQuick3DObject_SuperDisconnectNotify(QQuick3DObject* self, const QMetaMethod* signal);
    friend bool QQuick3DObject_IsComponentComplete(const QQuick3DObject* self);
    friend bool QQuick3DObject_SuperIsComponentComplete(const QQuick3DObject* self);
    friend QObject* QQuick3DObject_Sender(const QQuick3DObject* self);
    friend QObject* QQuick3DObject_SuperSender(const QQuick3DObject* self);
    friend int QQuick3DObject_SenderSignalIndex(const QQuick3DObject* self);
    friend int QQuick3DObject_SuperSenderSignalIndex(const QQuick3DObject* self);
    friend int QQuick3DObject_Receivers(const QQuick3DObject* self, const char* signal);
    friend int QQuick3DObject_SuperReceivers(const QQuick3DObject* self, const char* signal);
    friend bool QQuick3DObject_IsSignalConnected(const QQuick3DObject* self, const QMetaMethod* signal);
    friend bool QQuick3DObject_SuperIsSignalConnected(const QQuick3DObject* self, const QMetaMethod* signal);
};

#endif
