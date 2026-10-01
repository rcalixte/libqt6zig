#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DGEOMETRY_HXX
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DGEOMETRY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuick3DGeometry
class VirtualQQuick3DGeometry final : public QQuick3DGeometry {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuick3DGeometry_MetaObject_Callback = QMetaObject* (*)(const QQuick3DGeometry*);
    using QQuick3DGeometry_Metacast_Callback = void* (*)(QQuick3DGeometry*, const char*);
    using QQuick3DGeometry_Metacall_Callback = int (*)(QQuick3DGeometry*, int, int, void**);
    using QQuick3DGeometry_MarkAllDirty_Callback = void (*)(QQuick3DGeometry*);
    using QQuick3DGeometry_ItemChange_Callback = void (*)(QQuick3DGeometry*, int, QQuick3DObject__ItemChangeData*);
    using QQuick3DGeometry_ClassBegin_Callback = void (*)(QQuick3DGeometry*);
    using QQuick3DGeometry_ComponentComplete_Callback = void (*)(QQuick3DGeometry*);
    using QQuick3DGeometry_PreSync_Callback = void (*)(QQuick3DGeometry*);
    using QQuick3DGeometry_Event_Callback = bool (*)(QQuick3DGeometry*, QEvent*);
    using QQuick3DGeometry_EventFilter_Callback = bool (*)(QQuick3DGeometry*, QObject*, QEvent*);
    using QQuick3DGeometry_TimerEvent_Callback = void (*)(QQuick3DGeometry*, QTimerEvent*);
    using QQuick3DGeometry_ChildEvent_Callback = void (*)(QQuick3DGeometry*, QChildEvent*);
    using QQuick3DGeometry_CustomEvent_Callback = void (*)(QQuick3DGeometry*, QEvent*);
    using QQuick3DGeometry_ConnectNotify_Callback = void (*)(QQuick3DGeometry*, QMetaMethod*);
    using QQuick3DGeometry_DisconnectNotify_Callback = void (*)(QQuick3DGeometry*, QMetaMethod*);
    using QQuick3DGeometry::isComponentComplete;
    using QQuick3DGeometry::isSignalConnected;
    using QQuick3DGeometry::receivers;
    using QQuick3DGeometry::sender;
    using QQuick3DGeometry::senderSignalIndex;

    // Instance callback storage
    QQuick3DGeometry_MetaObject_Callback qquick3dgeometry_metaobject_callback = nullptr;
    QQuick3DGeometry_Metacast_Callback qquick3dgeometry_metacast_callback = nullptr;
    QQuick3DGeometry_Metacall_Callback qquick3dgeometry_metacall_callback = nullptr;
    QQuick3DGeometry_MarkAllDirty_Callback qquick3dgeometry_markalldirty_callback = nullptr;
    QQuick3DGeometry_ItemChange_Callback qquick3dgeometry_itemchange_callback = nullptr;
    QQuick3DGeometry_ClassBegin_Callback qquick3dgeometry_classbegin_callback = nullptr;
    QQuick3DGeometry_ComponentComplete_Callback qquick3dgeometry_componentcomplete_callback = nullptr;
    QQuick3DGeometry_PreSync_Callback qquick3dgeometry_presync_callback = nullptr;
    QQuick3DGeometry_Event_Callback qquick3dgeometry_event_callback = nullptr;
    QQuick3DGeometry_EventFilter_Callback qquick3dgeometry_eventfilter_callback = nullptr;
    QQuick3DGeometry_TimerEvent_Callback qquick3dgeometry_timerevent_callback = nullptr;
    QQuick3DGeometry_ChildEvent_Callback qquick3dgeometry_childevent_callback = nullptr;
    QQuick3DGeometry_CustomEvent_Callback qquick3dgeometry_customevent_callback = nullptr;
    QQuick3DGeometry_ConnectNotify_Callback qquick3dgeometry_connectnotify_callback = nullptr;
    QQuick3DGeometry_DisconnectNotify_Callback qquick3dgeometry_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuick3DGeometry {
        using QQuick3DGeometry::childEvent;
        using QQuick3DGeometry::classBegin;
        using QQuick3DGeometry::componentComplete;
        using QQuick3DGeometry::connectNotify;
        using QQuick3DGeometry::customEvent;
        using QQuick3DGeometry::disconnectNotify;
        using QQuick3DGeometry::itemChange;
        using QQuick3DGeometry::markAllDirty;
        using QQuick3DGeometry::preSync;
        using QQuick3DGeometry::timerEvent;
    };

    VirtualQQuick3DGeometry() : QQuick3DGeometry() {};
    VirtualQQuick3DGeometry(QQuick3DObject* parent) : QQuick3DGeometry(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquick3dgeometry_metaobject_callback) {
            QMetaObject* callback_ret = qquick3dgeometry_metaobject_callback(this);
            return callback_ret;
        }
        return QQuick3DGeometry::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquick3dgeometry_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquick3dgeometry_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuick3DGeometry::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquick3dgeometry_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquick3dgeometry_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuick3DGeometry::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAllDirty() override {
        if (qquick3dgeometry_markalldirty_callback) {
            qquick3dgeometry_markalldirty_callback(this);
            return;
        }
        QQuick3DGeometry::markAllDirty();
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuick3DObject::ItemChange param1, const QQuick3DObject::ItemChangeData& param2) override {
        if (qquick3dgeometry_itemchange_callback) {
            int cbval1 = static_cast<int>(param1);
            const QQuick3DObject::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuick3DObject__ItemChangeData* cbval2 = const_cast<QQuick3DObject::ItemChangeData*>(&param2_ret);
            qquick3dgeometry_itemchange_callback(this, cbval1, cbval2);
            return;
        }
        QQuick3DGeometry::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquick3dgeometry_classbegin_callback) {
            qquick3dgeometry_classbegin_callback(this);
            return;
        }
        QQuick3DGeometry::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquick3dgeometry_componentcomplete_callback) {
            qquick3dgeometry_componentcomplete_callback(this);
            return;
        }
        QQuick3DGeometry::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preSync() override {
        if (qquick3dgeometry_presync_callback) {
            qquick3dgeometry_presync_callback(this);
            return;
        }
        QQuick3DGeometry::preSync();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquick3dgeometry_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquick3dgeometry_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuick3DGeometry::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquick3dgeometry_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquick3dgeometry_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuick3DGeometry::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquick3dgeometry_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquick3dgeometry_timerevent_callback(this, cbval1);
            return;
        }
        QQuick3DGeometry::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquick3dgeometry_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquick3dgeometry_childevent_callback(this, cbval1);
            return;
        }
        QQuick3DGeometry::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquick3dgeometry_customevent_callback) {
            QEvent* cbval1 = event;
            qquick3dgeometry_customevent_callback(this, cbval1);
            return;
        }
        QQuick3DGeometry::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquick3dgeometry_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquick3dgeometry_connectnotify_callback(this, cbval1);
            return;
        }
        QQuick3DGeometry::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquick3dgeometry_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquick3dgeometry_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuick3DGeometry::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuick3DGeometry_SuperMarkAllDirty(QQuick3DGeometry* self);
    friend void QQuick3DGeometry_SuperItemChange(QQuick3DGeometry* self, int param1, const QQuick3DObject__ItemChangeData* param2);
    friend void QQuick3DGeometry_SuperClassBegin(QQuick3DGeometry* self);
    friend void QQuick3DGeometry_SuperComponentComplete(QQuick3DGeometry* self);
    friend void QQuick3DGeometry_SuperPreSync(QQuick3DGeometry* self);
    friend void QQuick3DGeometry_SuperTimerEvent(QQuick3DGeometry* self, QTimerEvent* event);
    friend void QQuick3DGeometry_SuperChildEvent(QQuick3DGeometry* self, QChildEvent* event);
    friend void QQuick3DGeometry_SuperCustomEvent(QQuick3DGeometry* self, QEvent* event);
    friend void QQuick3DGeometry_SuperConnectNotify(QQuick3DGeometry* self, const QMetaMethod* signal);
    friend void QQuick3DGeometry_SuperDisconnectNotify(QQuick3DGeometry* self, const QMetaMethod* signal);
};

#endif
