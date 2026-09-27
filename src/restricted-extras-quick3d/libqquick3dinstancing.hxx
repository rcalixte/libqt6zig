#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DINSTANCING_HXX
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DINSTANCING_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuick3DInstancing so that we can call protected methods
class VirtualQQuick3DInstancing : public QQuick3DInstancing {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuick3DInstancing = true;

    // Virtual class public types (including callbacks)
    using QQuick3DInstancing_MetaObject_Callback = QMetaObject* (*)();
    using QQuick3DInstancing_Metacast_Callback = void* (*)(QQuick3DInstancing*, const char*);
    using QQuick3DInstancing_Metacall_Callback = int (*)(QQuick3DInstancing*, int, int, void**);
    using QQuick3DInstancing_GetInstanceBuffer_Callback = libqt_string (*)(QQuick3DInstancing*, int*);
    using QQuick3DInstancing_MarkAllDirty_Callback = void (*)();
    using QQuick3DInstancing_ItemChange_Callback = void (*)(QQuick3DInstancing*, int, QQuick3DObject__ItemChangeData*);
    using QQuick3DInstancing_ClassBegin_Callback = void (*)();
    using QQuick3DInstancing_ComponentComplete_Callback = void (*)();
    using QQuick3DInstancing_PreSync_Callback = void (*)();
    using QQuick3DInstancing_Event_Callback = bool (*)(QQuick3DInstancing*, QEvent*);
    using QQuick3DInstancing_EventFilter_Callback = bool (*)(QQuick3DInstancing*, QObject*, QEvent*);
    using QQuick3DInstancing_TimerEvent_Callback = void (*)(QQuick3DInstancing*, QTimerEvent*);
    using QQuick3DInstancing_ChildEvent_Callback = void (*)(QQuick3DInstancing*, QChildEvent*);
    using QQuick3DInstancing_CustomEvent_Callback = void (*)(QQuick3DInstancing*, QEvent*);
    using QQuick3DInstancing_ConnectNotify_Callback = void (*)(QQuick3DInstancing*, QMetaMethod*);
    using QQuick3DInstancing_DisconnectNotify_Callback = void (*)(QQuick3DInstancing*, QMetaMethod*);
    using QQuick3DInstancing_MarkDirty_Callback = void (*)();
    using QQuick3DInstancing_CalculateTableEntry_Callback = QQuick3DInstancing__InstanceTableEntry* (*)(QQuick3DInstancing*, QVector3D*, QVector3D*, QVector3D*, QColor*);
    using QQuick3DInstancing_CalculateTableEntryFromQuaternion_Callback = QQuick3DInstancing__InstanceTableEntry* (*)(QQuick3DInstancing*, QVector3D*, QVector3D*, QQuaternion*, QColor*);
    using QQuick3DInstancing_CalculateTableEntry5_Callback = QQuick3DInstancing__InstanceTableEntry* (*)(QQuick3DInstancing*, QVector3D*, QVector3D*, QVector3D*, QColor*, QVector4D*);
    using QQuick3DInstancing_CalculateTableEntryFromQuaternion5_Callback = QQuick3DInstancing__InstanceTableEntry* (*)(QQuick3DInstancing*, QVector3D*, QVector3D*, QQuaternion*, QColor*, QVector4D*);
    using QQuick3DInstancing_IsComponentComplete_Callback = bool (*)();
    using QQuick3DInstancing_Sender_Callback = QObject* (*)();
    using QQuick3DInstancing_SenderSignalIndex_Callback = int (*)();
    using QQuick3DInstancing_Receivers_Callback = int (*)(const QQuick3DInstancing*, const char*);
    using QQuick3DInstancing_IsSignalConnected_Callback = bool (*)(const QQuick3DInstancing*, QMetaMethod*);

  protected:
    // Instance callback storage
    QQuick3DInstancing_MetaObject_Callback qquick3dinstancing_metaobject_callback = nullptr;
    QQuick3DInstancing_Metacast_Callback qquick3dinstancing_metacast_callback = nullptr;
    QQuick3DInstancing_Metacall_Callback qquick3dinstancing_metacall_callback = nullptr;
    QQuick3DInstancing_GetInstanceBuffer_Callback qquick3dinstancing_getinstancebuffer_callback = nullptr;
    QQuick3DInstancing_MarkAllDirty_Callback qquick3dinstancing_markalldirty_callback = nullptr;
    QQuick3DInstancing_ItemChange_Callback qquick3dinstancing_itemchange_callback = nullptr;
    QQuick3DInstancing_ClassBegin_Callback qquick3dinstancing_classbegin_callback = nullptr;
    QQuick3DInstancing_ComponentComplete_Callback qquick3dinstancing_componentcomplete_callback = nullptr;
    QQuick3DInstancing_PreSync_Callback qquick3dinstancing_presync_callback = nullptr;
    QQuick3DInstancing_Event_Callback qquick3dinstancing_event_callback = nullptr;
    QQuick3DInstancing_EventFilter_Callback qquick3dinstancing_eventfilter_callback = nullptr;
    QQuick3DInstancing_TimerEvent_Callback qquick3dinstancing_timerevent_callback = nullptr;
    QQuick3DInstancing_ChildEvent_Callback qquick3dinstancing_childevent_callback = nullptr;
    QQuick3DInstancing_CustomEvent_Callback qquick3dinstancing_customevent_callback = nullptr;
    QQuick3DInstancing_ConnectNotify_Callback qquick3dinstancing_connectnotify_callback = nullptr;
    QQuick3DInstancing_DisconnectNotify_Callback qquick3dinstancing_disconnectnotify_callback = nullptr;
    QQuick3DInstancing_MarkDirty_Callback qquick3dinstancing_markdirty_callback = nullptr;
    QQuick3DInstancing_CalculateTableEntry_Callback qquick3dinstancing_calculatetableentry_callback = nullptr;
    QQuick3DInstancing_CalculateTableEntryFromQuaternion_Callback qquick3dinstancing_calculatetableentryfromquaternion_callback = nullptr;
    QQuick3DInstancing_CalculateTableEntry5_Callback qquick3dinstancing_calculatetableentry5_callback = nullptr;
    QQuick3DInstancing_CalculateTableEntryFromQuaternion5_Callback qquick3dinstancing_calculatetableentryfromquaternion5_callback = nullptr;
    QQuick3DInstancing_IsComponentComplete_Callback qquick3dinstancing_iscomponentcomplete_callback = nullptr;
    QQuick3DInstancing_Sender_Callback qquick3dinstancing_sender_callback = nullptr;
    QQuick3DInstancing_SenderSignalIndex_Callback qquick3dinstancing_sendersignalindex_callback = nullptr;
    QQuick3DInstancing_Receivers_Callback qquick3dinstancing_receivers_callback = nullptr;
    QQuick3DInstancing_IsSignalConnected_Callback qquick3dinstancing_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquick3dinstancing_metaobject_isbase = false;
    mutable bool qquick3dinstancing_metacast_isbase = false;
    mutable bool qquick3dinstancing_metacall_isbase = false;
    mutable bool qquick3dinstancing_getinstancebuffer_isbase = false;
    mutable bool qquick3dinstancing_markalldirty_isbase = false;
    mutable bool qquick3dinstancing_itemchange_isbase = false;
    mutable bool qquick3dinstancing_classbegin_isbase = false;
    mutable bool qquick3dinstancing_componentcomplete_isbase = false;
    mutable bool qquick3dinstancing_presync_isbase = false;
    mutable bool qquick3dinstancing_event_isbase = false;
    mutable bool qquick3dinstancing_eventfilter_isbase = false;
    mutable bool qquick3dinstancing_timerevent_isbase = false;
    mutable bool qquick3dinstancing_childevent_isbase = false;
    mutable bool qquick3dinstancing_customevent_isbase = false;
    mutable bool qquick3dinstancing_connectnotify_isbase = false;
    mutable bool qquick3dinstancing_disconnectnotify_isbase = false;
    mutable bool qquick3dinstancing_markdirty_isbase = false;
    mutable bool qquick3dinstancing_calculatetableentry_isbase = false;
    mutable bool qquick3dinstancing_calculatetableentryfromquaternion_isbase = false;
    mutable bool qquick3dinstancing_calculatetableentry5_isbase = false;
    mutable bool qquick3dinstancing_calculatetableentryfromquaternion5_isbase = false;
    mutable bool qquick3dinstancing_iscomponentcomplete_isbase = false;
    mutable bool qquick3dinstancing_sender_isbase = false;
    mutable bool qquick3dinstancing_sendersignalindex_isbase = false;
    mutable bool qquick3dinstancing_receivers_isbase = false;
    mutable bool qquick3dinstancing_issignalconnected_isbase = false;

  public:
    VirtualQQuick3DInstancing() : QQuick3DInstancing() {};
    VirtualQQuick3DInstancing(QQuick3DObject* parent) : QQuick3DInstancing(parent) {};

    // Callback setters
    inline void setQQuick3DInstancing_MetaObject_Callback(QQuick3DInstancing_MetaObject_Callback cb) { qquick3dinstancing_metaobject_callback = cb; }
    inline void setQQuick3DInstancing_Metacast_Callback(QQuick3DInstancing_Metacast_Callback cb) { qquick3dinstancing_metacast_callback = cb; }
    inline void setQQuick3DInstancing_Metacall_Callback(QQuick3DInstancing_Metacall_Callback cb) { qquick3dinstancing_metacall_callback = cb; }
    inline void setQQuick3DInstancing_GetInstanceBuffer_Callback(QQuick3DInstancing_GetInstanceBuffer_Callback cb) { qquick3dinstancing_getinstancebuffer_callback = cb; }
    inline void setQQuick3DInstancing_MarkAllDirty_Callback(QQuick3DInstancing_MarkAllDirty_Callback cb) { qquick3dinstancing_markalldirty_callback = cb; }
    inline void setQQuick3DInstancing_ItemChange_Callback(QQuick3DInstancing_ItemChange_Callback cb) { qquick3dinstancing_itemchange_callback = cb; }
    inline void setQQuick3DInstancing_ClassBegin_Callback(QQuick3DInstancing_ClassBegin_Callback cb) { qquick3dinstancing_classbegin_callback = cb; }
    inline void setQQuick3DInstancing_ComponentComplete_Callback(QQuick3DInstancing_ComponentComplete_Callback cb) { qquick3dinstancing_componentcomplete_callback = cb; }
    inline void setQQuick3DInstancing_PreSync_Callback(QQuick3DInstancing_PreSync_Callback cb) { qquick3dinstancing_presync_callback = cb; }
    inline void setQQuick3DInstancing_Event_Callback(QQuick3DInstancing_Event_Callback cb) { qquick3dinstancing_event_callback = cb; }
    inline void setQQuick3DInstancing_EventFilter_Callback(QQuick3DInstancing_EventFilter_Callback cb) { qquick3dinstancing_eventfilter_callback = cb; }
    inline void setQQuick3DInstancing_TimerEvent_Callback(QQuick3DInstancing_TimerEvent_Callback cb) { qquick3dinstancing_timerevent_callback = cb; }
    inline void setQQuick3DInstancing_ChildEvent_Callback(QQuick3DInstancing_ChildEvent_Callback cb) { qquick3dinstancing_childevent_callback = cb; }
    inline void setQQuick3DInstancing_CustomEvent_Callback(QQuick3DInstancing_CustomEvent_Callback cb) { qquick3dinstancing_customevent_callback = cb; }
    inline void setQQuick3DInstancing_ConnectNotify_Callback(QQuick3DInstancing_ConnectNotify_Callback cb) { qquick3dinstancing_connectnotify_callback = cb; }
    inline void setQQuick3DInstancing_DisconnectNotify_Callback(QQuick3DInstancing_DisconnectNotify_Callback cb) { qquick3dinstancing_disconnectnotify_callback = cb; }
    inline void setQQuick3DInstancing_MarkDirty_Callback(QQuick3DInstancing_MarkDirty_Callback cb) { qquick3dinstancing_markdirty_callback = cb; }
    inline void setQQuick3DInstancing_CalculateTableEntry_Callback(QQuick3DInstancing_CalculateTableEntry_Callback cb) { qquick3dinstancing_calculatetableentry_callback = cb; }
    inline void setQQuick3DInstancing_CalculateTableEntryFromQuaternion_Callback(QQuick3DInstancing_CalculateTableEntryFromQuaternion_Callback cb) { qquick3dinstancing_calculatetableentryfromquaternion_callback = cb; }
    inline void setQQuick3DInstancing_CalculateTableEntry5_Callback(QQuick3DInstancing_CalculateTableEntry5_Callback cb) { qquick3dinstancing_calculatetableentry5_callback = cb; }
    inline void setQQuick3DInstancing_CalculateTableEntryFromQuaternion5_Callback(QQuick3DInstancing_CalculateTableEntryFromQuaternion5_Callback cb) { qquick3dinstancing_calculatetableentryfromquaternion5_callback = cb; }
    inline void setQQuick3DInstancing_IsComponentComplete_Callback(QQuick3DInstancing_IsComponentComplete_Callback cb) { qquick3dinstancing_iscomponentcomplete_callback = cb; }
    inline void setQQuick3DInstancing_Sender_Callback(QQuick3DInstancing_Sender_Callback cb) { qquick3dinstancing_sender_callback = cb; }
    inline void setQQuick3DInstancing_SenderSignalIndex_Callback(QQuick3DInstancing_SenderSignalIndex_Callback cb) { qquick3dinstancing_sendersignalindex_callback = cb; }
    inline void setQQuick3DInstancing_Receivers_Callback(QQuick3DInstancing_Receivers_Callback cb) { qquick3dinstancing_receivers_callback = cb; }
    inline void setQQuick3DInstancing_IsSignalConnected_Callback(QQuick3DInstancing_IsSignalConnected_Callback cb) { qquick3dinstancing_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuick3DInstancing_MetaObject_IsBase(bool value) const { qquick3dinstancing_metaobject_isbase = value; }
    inline void setQQuick3DInstancing_Metacast_IsBase(bool value) const { qquick3dinstancing_metacast_isbase = value; }
    inline void setQQuick3DInstancing_Metacall_IsBase(bool value) const { qquick3dinstancing_metacall_isbase = value; }
    inline void setQQuick3DInstancing_GetInstanceBuffer_IsBase(bool value) const { qquick3dinstancing_getinstancebuffer_isbase = value; }
    inline void setQQuick3DInstancing_MarkAllDirty_IsBase(bool value) const { qquick3dinstancing_markalldirty_isbase = value; }
    inline void setQQuick3DInstancing_ItemChange_IsBase(bool value) const { qquick3dinstancing_itemchange_isbase = value; }
    inline void setQQuick3DInstancing_ClassBegin_IsBase(bool value) const { qquick3dinstancing_classbegin_isbase = value; }
    inline void setQQuick3DInstancing_ComponentComplete_IsBase(bool value) const { qquick3dinstancing_componentcomplete_isbase = value; }
    inline void setQQuick3DInstancing_PreSync_IsBase(bool value) const { qquick3dinstancing_presync_isbase = value; }
    inline void setQQuick3DInstancing_Event_IsBase(bool value) const { qquick3dinstancing_event_isbase = value; }
    inline void setQQuick3DInstancing_EventFilter_IsBase(bool value) const { qquick3dinstancing_eventfilter_isbase = value; }
    inline void setQQuick3DInstancing_TimerEvent_IsBase(bool value) const { qquick3dinstancing_timerevent_isbase = value; }
    inline void setQQuick3DInstancing_ChildEvent_IsBase(bool value) const { qquick3dinstancing_childevent_isbase = value; }
    inline void setQQuick3DInstancing_CustomEvent_IsBase(bool value) const { qquick3dinstancing_customevent_isbase = value; }
    inline void setQQuick3DInstancing_ConnectNotify_IsBase(bool value) const { qquick3dinstancing_connectnotify_isbase = value; }
    inline void setQQuick3DInstancing_DisconnectNotify_IsBase(bool value) const { qquick3dinstancing_disconnectnotify_isbase = value; }
    inline void setQQuick3DInstancing_MarkDirty_IsBase(bool value) const { qquick3dinstancing_markdirty_isbase = value; }
    inline void setQQuick3DInstancing_CalculateTableEntry_IsBase(bool value) const { qquick3dinstancing_calculatetableentry_isbase = value; }
    inline void setQQuick3DInstancing_CalculateTableEntryFromQuaternion_IsBase(bool value) const { qquick3dinstancing_calculatetableentryfromquaternion_isbase = value; }
    inline void setQQuick3DInstancing_CalculateTableEntry5_IsBase(bool value) const { qquick3dinstancing_calculatetableentry5_isbase = value; }
    inline void setQQuick3DInstancing_CalculateTableEntryFromQuaternion5_IsBase(bool value) const { qquick3dinstancing_calculatetableentryfromquaternion5_isbase = value; }
    inline void setQQuick3DInstancing_IsComponentComplete_IsBase(bool value) const { qquick3dinstancing_iscomponentcomplete_isbase = value; }
    inline void setQQuick3DInstancing_Sender_IsBase(bool value) const { qquick3dinstancing_sender_isbase = value; }
    inline void setQQuick3DInstancing_SenderSignalIndex_IsBase(bool value) const { qquick3dinstancing_sendersignalindex_isbase = value; }
    inline void setQQuick3DInstancing_Receivers_IsBase(bool value) const { qquick3dinstancing_receivers_isbase = value; }
    inline void setQQuick3DInstancing_IsSignalConnected_IsBase(bool value) const { qquick3dinstancing_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquick3dinstancing_metaobject_isbase) {
            qquick3dinstancing_metaobject_isbase = false;
            return QQuick3DInstancing::metaObject();
        }
        auto metaobject_cb = qquick3dinstancing_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuick3DInstancing::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquick3dinstancing_metacast_isbase) {
            qquick3dinstancing_metacast_isbase = false;
            return QQuick3DInstancing::qt_metacast(param1);
        }
        auto metacast_cb = qquick3dinstancing_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuick3DInstancing::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquick3dinstancing_metacall_isbase) {
            qquick3dinstancing_metacall_isbase = false;
            return QQuick3DInstancing::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquick3dinstancing_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuick3DInstancing::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QByteArray getInstanceBuffer(int* instanceCount) override {
        auto getinstancebuffer_cb = qquick3dinstancing_getinstancebuffer_callback;
        if (getinstancebuffer_cb) {
            int* cbval1 = instanceCount;
            libqt_string callback_ret = getinstancebuffer_cb(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAllDirty() override {
        if (qquick3dinstancing_markalldirty_isbase) {
            qquick3dinstancing_markalldirty_isbase = false;
            QQuick3DInstancing::markAllDirty();
            return;
        }
        auto markalldirty_cb = qquick3dinstancing_markalldirty_callback;
        if (markalldirty_cb) {
            markalldirty_cb();
            return;
        }
        QQuick3DInstancing::markAllDirty();
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuick3DObject::ItemChange param1, const QQuick3DObject::ItemChangeData& param2) override {
        if (qquick3dinstancing_itemchange_isbase) {
            qquick3dinstancing_itemchange_isbase = false;
            QQuick3DInstancing::itemChange(param1, param2);
            return;
        }
        auto itemchange_cb = qquick3dinstancing_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(param1);
            const QQuick3DObject::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuick3DObject__ItemChangeData* cbval2 = const_cast<QQuick3DObject::ItemChangeData*>(&param2_ret);
            itemchange_cb(this, cbval1, cbval2);
            return;
        }
        QQuick3DInstancing::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquick3dinstancing_classbegin_isbase) {
            qquick3dinstancing_classbegin_isbase = false;
            QQuick3DInstancing::classBegin();
            return;
        }
        auto classbegin_cb = qquick3dinstancing_classbegin_callback;
        if (classbegin_cb) {
            classbegin_cb();
            return;
        }
        QQuick3DInstancing::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquick3dinstancing_componentcomplete_isbase) {
            qquick3dinstancing_componentcomplete_isbase = false;
            QQuick3DInstancing::componentComplete();
            return;
        }
        auto componentcomplete_cb = qquick3dinstancing_componentcomplete_callback;
        if (componentcomplete_cb) {
            componentcomplete_cb();
            return;
        }
        QQuick3DInstancing::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preSync() override {
        if (qquick3dinstancing_presync_isbase) {
            qquick3dinstancing_presync_isbase = false;
            QQuick3DInstancing::preSync();
            return;
        }
        auto presync_cb = qquick3dinstancing_presync_callback;
        if (presync_cb) {
            presync_cb();
            return;
        }
        QQuick3DInstancing::preSync();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquick3dinstancing_event_isbase) {
            qquick3dinstancing_event_isbase = false;
            return QQuick3DInstancing::event(event);
        }
        auto event_cb = qquick3dinstancing_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuick3DInstancing::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquick3dinstancing_eventfilter_isbase) {
            qquick3dinstancing_eventfilter_isbase = false;
            return QQuick3DInstancing::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquick3dinstancing_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuick3DInstancing::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquick3dinstancing_timerevent_isbase) {
            qquick3dinstancing_timerevent_isbase = false;
            QQuick3DInstancing::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquick3dinstancing_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuick3DInstancing::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquick3dinstancing_childevent_isbase) {
            qquick3dinstancing_childevent_isbase = false;
            QQuick3DInstancing::childEvent(event);
            return;
        }
        auto childevent_cb = qquick3dinstancing_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuick3DInstancing::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquick3dinstancing_customevent_isbase) {
            qquick3dinstancing_customevent_isbase = false;
            QQuick3DInstancing::customEvent(event);
            return;
        }
        auto customevent_cb = qquick3dinstancing_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuick3DInstancing::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquick3dinstancing_connectnotify_isbase) {
            qquick3dinstancing_connectnotify_isbase = false;
            QQuick3DInstancing::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquick3dinstancing_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuick3DInstancing::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquick3dinstancing_disconnectnotify_isbase) {
            qquick3dinstancing_disconnectnotify_isbase = false;
            QQuick3DInstancing::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquick3dinstancing_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuick3DInstancing::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void markDirty() {
        if (qquick3dinstancing_markdirty_isbase) {
            qquick3dinstancing_markdirty_isbase = false;
            QQuick3DInstancing::markDirty();
            return;
        }
        auto markdirty_cb = qquick3dinstancing_markdirty_callback;
        if (markdirty_cb) {
            markdirty_cb();
            return;
        }
        QQuick3DInstancing::markDirty();
    }

    // Virtual method for C ABI access and custom callback
    QQuick3DInstancing::InstanceTableEntry calculateTableEntry(const QVector3D& position, const QVector3D& scale, const QVector3D& eulerRotation, const QColor& color) {
        if (qquick3dinstancing_calculatetableentry_isbase) {
            qquick3dinstancing_calculatetableentry_isbase = false;
            return QQuick3DInstancing::calculateTableEntry(position, scale, eulerRotation, color);
        }
        auto calculatetableentry_cb = qquick3dinstancing_calculatetableentry_callback;
        if (calculatetableentry_cb) {
            const QVector3D& position_ret = position;
            // Cast returned reference into pointer
            QVector3D* cbval1 = const_cast<QVector3D*>(&position_ret);
            const QVector3D& scale_ret = scale;
            // Cast returned reference into pointer
            QVector3D* cbval2 = const_cast<QVector3D*>(&scale_ret);
            const QVector3D& eulerRotation_ret = eulerRotation;
            // Cast returned reference into pointer
            QVector3D* cbval3 = const_cast<QVector3D*>(&eulerRotation_ret);
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval4 = const_cast<QColor*>(&color_ret);
            QQuick3DInstancing__InstanceTableEntry* callback_ret = calculatetableentry_cb(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuick3DInstancing::calculateTableEntry(position, scale, eulerRotation, color);
    }

    // Virtual method for C ABI access and custom callback
    QQuick3DInstancing::InstanceTableEntry calculateTableEntryFromQuaternion(const QVector3D& position, const QVector3D& scale, const QQuaternion& rotation, const QColor& color) {
        if (qquick3dinstancing_calculatetableentryfromquaternion_isbase) {
            qquick3dinstancing_calculatetableentryfromquaternion_isbase = false;
            return QQuick3DInstancing::calculateTableEntryFromQuaternion(position, scale, rotation, color);
        }
        auto calculatetableentryfromquaternion_cb = qquick3dinstancing_calculatetableentryfromquaternion_callback;
        if (calculatetableentryfromquaternion_cb) {
            const QVector3D& position_ret = position;
            // Cast returned reference into pointer
            QVector3D* cbval1 = const_cast<QVector3D*>(&position_ret);
            const QVector3D& scale_ret = scale;
            // Cast returned reference into pointer
            QVector3D* cbval2 = const_cast<QVector3D*>(&scale_ret);
            const QQuaternion& rotation_ret = rotation;
            // Cast returned reference into pointer
            QQuaternion* cbval3 = const_cast<QQuaternion*>(&rotation_ret);
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval4 = const_cast<QColor*>(&color_ret);
            QQuick3DInstancing__InstanceTableEntry* callback_ret = calculatetableentryfromquaternion_cb(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuick3DInstancing::calculateTableEntryFromQuaternion(position, scale, rotation, color);
    }

    // Virtual method for C ABI access and custom callback
    QQuick3DInstancing::InstanceTableEntry calculateTableEntry(const QVector3D& position, const QVector3D& scale, const QVector3D& eulerRotation, const QColor& color, const QVector4D& customData) {
        if (qquick3dinstancing_calculatetableentry5_isbase) {
            qquick3dinstancing_calculatetableentry5_isbase = false;
            return QQuick3DInstancing::calculateTableEntry(position, scale, eulerRotation, color, customData);
        }
        auto calculatetableentry5_cb = qquick3dinstancing_calculatetableentry5_callback;
        if (calculatetableentry5_cb) {
            const QVector3D& position_ret = position;
            // Cast returned reference into pointer
            QVector3D* cbval1 = const_cast<QVector3D*>(&position_ret);
            const QVector3D& scale_ret = scale;
            // Cast returned reference into pointer
            QVector3D* cbval2 = const_cast<QVector3D*>(&scale_ret);
            const QVector3D& eulerRotation_ret = eulerRotation;
            // Cast returned reference into pointer
            QVector3D* cbval3 = const_cast<QVector3D*>(&eulerRotation_ret);
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval4 = const_cast<QColor*>(&color_ret);
            const QVector4D& customData_ret = customData;
            // Cast returned reference into pointer
            QVector4D* cbval5 = const_cast<QVector4D*>(&customData_ret);
            QQuick3DInstancing__InstanceTableEntry* callback_ret = calculatetableentry5_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuick3DInstancing::calculateTableEntry(position, scale, eulerRotation, color, customData);
    }

    // Virtual method for C ABI access and custom callback
    QQuick3DInstancing::InstanceTableEntry calculateTableEntryFromQuaternion(const QVector3D& position, const QVector3D& scale, const QQuaternion& rotation, const QColor& color, const QVector4D& customData) {
        if (qquick3dinstancing_calculatetableentryfromquaternion5_isbase) {
            qquick3dinstancing_calculatetableentryfromquaternion5_isbase = false;
            return QQuick3DInstancing::calculateTableEntryFromQuaternion(position, scale, rotation, color, customData);
        }
        auto calculatetableentryfromquaternion5_cb = qquick3dinstancing_calculatetableentryfromquaternion5_callback;
        if (calculatetableentryfromquaternion5_cb) {
            const QVector3D& position_ret = position;
            // Cast returned reference into pointer
            QVector3D* cbval1 = const_cast<QVector3D*>(&position_ret);
            const QVector3D& scale_ret = scale;
            // Cast returned reference into pointer
            QVector3D* cbval2 = const_cast<QVector3D*>(&scale_ret);
            const QQuaternion& rotation_ret = rotation;
            // Cast returned reference into pointer
            QQuaternion* cbval3 = const_cast<QQuaternion*>(&rotation_ret);
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval4 = const_cast<QColor*>(&color_ret);
            const QVector4D& customData_ret = customData;
            // Cast returned reference into pointer
            QVector4D* cbval5 = const_cast<QVector4D*>(&customData_ret);
            QQuick3DInstancing__InstanceTableEntry* callback_ret = calculatetableentryfromquaternion5_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuick3DInstancing::calculateTableEntryFromQuaternion(position, scale, rotation, color, customData);
    }

    // Virtual method for C ABI access and custom callback
    bool isComponentComplete() const {
        if (qquick3dinstancing_iscomponentcomplete_isbase) {
            qquick3dinstancing_iscomponentcomplete_isbase = false;
            return QQuick3DInstancing::isComponentComplete();
        }
        auto iscomponentcomplete_cb = qquick3dinstancing_iscomponentcomplete_callback;
        if (iscomponentcomplete_cb) {
            bool callback_ret = iscomponentcomplete_cb();
            return callback_ret;
        }
        return QQuick3DInstancing::isComponentComplete();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquick3dinstancing_sender_isbase) {
            qquick3dinstancing_sender_isbase = false;
            return QQuick3DInstancing::sender();
        }
        auto sender_cb = qquick3dinstancing_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuick3DInstancing::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquick3dinstancing_sendersignalindex_isbase) {
            qquick3dinstancing_sendersignalindex_isbase = false;
            return QQuick3DInstancing::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquick3dinstancing_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuick3DInstancing::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquick3dinstancing_receivers_isbase) {
            qquick3dinstancing_receivers_isbase = false;
            return QQuick3DInstancing::receivers(signal);
        }
        auto receivers_cb = qquick3dinstancing_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuick3DInstancing::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquick3dinstancing_issignalconnected_isbase) {
            qquick3dinstancing_issignalconnected_isbase = false;
            return QQuick3DInstancing::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquick3dinstancing_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuick3DInstancing::isSignalConnected(signal);
    }

    // Friend functions
    friend libqt_string QQuick3DInstancing_GetInstanceBuffer(QQuick3DInstancing* self, int* instanceCount);
    friend libqt_string QQuick3DInstancing_SuperGetInstanceBuffer(QQuick3DInstancing* self, int* instanceCount);
    friend void QQuick3DInstancing_MarkAllDirty(QQuick3DInstancing* self);
    friend void QQuick3DInstancing_SuperMarkAllDirty(QQuick3DInstancing* self);
    friend void QQuick3DInstancing_ItemChange(QQuick3DInstancing* self, int param1, const QQuick3DObject__ItemChangeData* param2);
    friend void QQuick3DInstancing_SuperItemChange(QQuick3DInstancing* self, int param1, const QQuick3DObject__ItemChangeData* param2);
    friend void QQuick3DInstancing_ClassBegin(QQuick3DInstancing* self);
    friend void QQuick3DInstancing_SuperClassBegin(QQuick3DInstancing* self);
    friend void QQuick3DInstancing_ComponentComplete(QQuick3DInstancing* self);
    friend void QQuick3DInstancing_SuperComponentComplete(QQuick3DInstancing* self);
    friend void QQuick3DInstancing_PreSync(QQuick3DInstancing* self);
    friend void QQuick3DInstancing_SuperPreSync(QQuick3DInstancing* self);
    friend void QQuick3DInstancing_TimerEvent(QQuick3DInstancing* self, QTimerEvent* event);
    friend void QQuick3DInstancing_SuperTimerEvent(QQuick3DInstancing* self, QTimerEvent* event);
    friend void QQuick3DInstancing_ChildEvent(QQuick3DInstancing* self, QChildEvent* event);
    friend void QQuick3DInstancing_SuperChildEvent(QQuick3DInstancing* self, QChildEvent* event);
    friend void QQuick3DInstancing_CustomEvent(QQuick3DInstancing* self, QEvent* event);
    friend void QQuick3DInstancing_SuperCustomEvent(QQuick3DInstancing* self, QEvent* event);
    friend void QQuick3DInstancing_ConnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal);
    friend void QQuick3DInstancing_SuperConnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal);
    friend void QQuick3DInstancing_DisconnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal);
    friend void QQuick3DInstancing_SuperDisconnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal);
    friend void QQuick3DInstancing_MarkDirty(QQuick3DInstancing* self);
    friend void QQuick3DInstancing_SuperMarkDirty(QQuick3DInstancing* self);
    friend QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntry(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QVector3D* eulerRotation, const QColor* color);
    friend QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_SuperCalculateTableEntry(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QVector3D* eulerRotation, const QColor* color);
    friend QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntryFromQuaternion(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QQuaternion* rotation, const QColor* color);
    friend QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_SuperCalculateTableEntryFromQuaternion(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QQuaternion* rotation, const QColor* color);
    friend QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntry5(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QVector3D* eulerRotation, const QColor* color, const QVector4D* customData);
    friend QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_SuperCalculateTableEntry5(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QVector3D* eulerRotation, const QColor* color, const QVector4D* customData);
    friend QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntryFromQuaternion5(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QQuaternion* rotation, const QColor* color, const QVector4D* customData);
    friend QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_SuperCalculateTableEntryFromQuaternion5(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QQuaternion* rotation, const QColor* color, const QVector4D* customData);
    friend bool QQuick3DInstancing_IsComponentComplete(const QQuick3DInstancing* self);
    friend bool QQuick3DInstancing_SuperIsComponentComplete(const QQuick3DInstancing* self);
    friend QObject* QQuick3DInstancing_Sender(const QQuick3DInstancing* self);
    friend QObject* QQuick3DInstancing_SuperSender(const QQuick3DInstancing* self);
    friend int QQuick3DInstancing_SenderSignalIndex(const QQuick3DInstancing* self);
    friend int QQuick3DInstancing_SuperSenderSignalIndex(const QQuick3DInstancing* self);
    friend int QQuick3DInstancing_Receivers(const QQuick3DInstancing* self, const char* signal);
    friend int QQuick3DInstancing_SuperReceivers(const QQuick3DInstancing* self, const char* signal);
    friend bool QQuick3DInstancing_IsSignalConnected(const QQuick3DInstancing* self, const QMetaMethod* signal);
    friend bool QQuick3DInstancing_SuperIsSignalConnected(const QQuick3DInstancing* self, const QMetaMethod* signal);
};

#endif
