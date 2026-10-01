#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DINSTANCING_HXX
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DINSTANCING_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuick3DInstancing
class VirtualQQuick3DInstancing : public QQuick3DInstancing {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuick3DInstancing_MetaObject_Callback = QMetaObject* (*)(const QQuick3DInstancing*);
    using QQuick3DInstancing_Metacast_Callback = void* (*)(QQuick3DInstancing*, const char*);
    using QQuick3DInstancing_Metacall_Callback = int (*)(QQuick3DInstancing*, int, int, void**);
    using QQuick3DInstancing_GetInstanceBuffer_Callback = libqt_string (*)(QQuick3DInstancing*, int*);
    using QQuick3DInstancing_MarkAllDirty_Callback = void (*)(QQuick3DInstancing*);
    using QQuick3DInstancing_ItemChange_Callback = void (*)(QQuick3DInstancing*, int, QQuick3DObject__ItemChangeData*);
    using QQuick3DInstancing_ClassBegin_Callback = void (*)(QQuick3DInstancing*);
    using QQuick3DInstancing_ComponentComplete_Callback = void (*)(QQuick3DInstancing*);
    using QQuick3DInstancing_PreSync_Callback = void (*)(QQuick3DInstancing*);
    using QQuick3DInstancing_Event_Callback = bool (*)(QQuick3DInstancing*, QEvent*);
    using QQuick3DInstancing_EventFilter_Callback = bool (*)(QQuick3DInstancing*, QObject*, QEvent*);
    using QQuick3DInstancing_TimerEvent_Callback = void (*)(QQuick3DInstancing*, QTimerEvent*);
    using QQuick3DInstancing_ChildEvent_Callback = void (*)(QQuick3DInstancing*, QChildEvent*);
    using QQuick3DInstancing_CustomEvent_Callback = void (*)(QQuick3DInstancing*, QEvent*);
    using QQuick3DInstancing_ConnectNotify_Callback = void (*)(QQuick3DInstancing*, QMetaMethod*);
    using QQuick3DInstancing_DisconnectNotify_Callback = void (*)(QQuick3DInstancing*, QMetaMethod*);
    using QQuick3DInstancing::calculateTableEntry;
    using QQuick3DInstancing::calculateTableEntryFromQuaternion;
    using QQuick3DInstancing::isComponentComplete;
    using QQuick3DInstancing::isSignalConnected;
    using QQuick3DInstancing::markDirty;
    using QQuick3DInstancing::receivers;
    using QQuick3DInstancing::sender;
    using QQuick3DInstancing::senderSignalIndex;

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

    // Access struct
    struct Base : QQuick3DInstancing {
        using QQuick3DInstancing::childEvent;
        using QQuick3DInstancing::classBegin;
        using QQuick3DInstancing::componentComplete;
        using QQuick3DInstancing::connectNotify;
        using QQuick3DInstancing::customEvent;
        using QQuick3DInstancing::disconnectNotify;
        using QQuick3DInstancing::getInstanceBuffer;
        using QQuick3DInstancing::itemChange;
        using QQuick3DInstancing::markAllDirty;
        using QQuick3DInstancing::preSync;
        using QQuick3DInstancing::timerEvent;
    };

    VirtualQQuick3DInstancing() : QQuick3DInstancing() {};
    VirtualQQuick3DInstancing(QQuick3DObject* parent) : QQuick3DInstancing(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquick3dinstancing_metaobject_callback) {
            QMetaObject* callback_ret = qquick3dinstancing_metaobject_callback(this);
            return callback_ret;
        }
        return QQuick3DInstancing::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquick3dinstancing_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquick3dinstancing_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuick3DInstancing::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquick3dinstancing_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquick3dinstancing_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuick3DInstancing::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QByteArray getInstanceBuffer(int* instanceCount) override {
        if (qquick3dinstancing_getinstancebuffer_callback) {
            int* cbval1 = instanceCount;
            libqt_string callback_ret = qquick3dinstancing_getinstancebuffer_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQuick3DInstancing::getInstanceBuffer called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAllDirty() override {
        if (qquick3dinstancing_markalldirty_callback) {
            qquick3dinstancing_markalldirty_callback(this);
            return;
        }
        QQuick3DInstancing::markAllDirty();
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuick3DObject::ItemChange param1, const QQuick3DObject::ItemChangeData& param2) override {
        if (qquick3dinstancing_itemchange_callback) {
            int cbval1 = static_cast<int>(param1);
            const QQuick3DObject::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuick3DObject__ItemChangeData* cbval2 = const_cast<QQuick3DObject::ItemChangeData*>(&param2_ret);
            qquick3dinstancing_itemchange_callback(this, cbval1, cbval2);
            return;
        }
        QQuick3DInstancing::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquick3dinstancing_classbegin_callback) {
            qquick3dinstancing_classbegin_callback(this);
            return;
        }
        QQuick3DInstancing::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquick3dinstancing_componentcomplete_callback) {
            qquick3dinstancing_componentcomplete_callback(this);
            return;
        }
        QQuick3DInstancing::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preSync() override {
        if (qquick3dinstancing_presync_callback) {
            qquick3dinstancing_presync_callback(this);
            return;
        }
        QQuick3DInstancing::preSync();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquick3dinstancing_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquick3dinstancing_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuick3DInstancing::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquick3dinstancing_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquick3dinstancing_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuick3DInstancing::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquick3dinstancing_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquick3dinstancing_timerevent_callback(this, cbval1);
            return;
        }
        QQuick3DInstancing::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquick3dinstancing_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquick3dinstancing_childevent_callback(this, cbval1);
            return;
        }
        QQuick3DInstancing::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquick3dinstancing_customevent_callback) {
            QEvent* cbval1 = event;
            qquick3dinstancing_customevent_callback(this, cbval1);
            return;
        }
        QQuick3DInstancing::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquick3dinstancing_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquick3dinstancing_connectnotify_callback(this, cbval1);
            return;
        }
        QQuick3DInstancing::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquick3dinstancing_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquick3dinstancing_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuick3DInstancing::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuick3DInstancing_SuperMarkAllDirty(QQuick3DInstancing* self);
    friend void QQuick3DInstancing_SuperItemChange(QQuick3DInstancing* self, int param1, const QQuick3DObject__ItemChangeData* param2);
    friend void QQuick3DInstancing_SuperClassBegin(QQuick3DInstancing* self);
    friend void QQuick3DInstancing_SuperComponentComplete(QQuick3DInstancing* self);
    friend void QQuick3DInstancing_SuperPreSync(QQuick3DInstancing* self);
    friend void QQuick3DInstancing_SuperTimerEvent(QQuick3DInstancing* self, QTimerEvent* event);
    friend void QQuick3DInstancing_SuperChildEvent(QQuick3DInstancing* self, QChildEvent* event);
    friend void QQuick3DInstancing_SuperCustomEvent(QQuick3DInstancing* self, QEvent* event);
    friend void QQuick3DInstancing_SuperConnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal);
    friend void QQuick3DInstancing_SuperDisconnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal);
};

#endif
