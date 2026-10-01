#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DOBJECT_HXX
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DOBJECT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuick3DObject
class VirtualQQuick3DObject final : public QQuick3DObject {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuick3DObject_MetaObject_Callback = QMetaObject* (*)(const QQuick3DObject*);
    using QQuick3DObject_Metacast_Callback = void* (*)(QQuick3DObject*, const char*);
    using QQuick3DObject_Metacall_Callback = int (*)(QQuick3DObject*, int, int, void**);
    using QQuick3DObject_MarkAllDirty_Callback = void (*)(QQuick3DObject*);
    using QQuick3DObject_ItemChange_Callback = void (*)(QQuick3DObject*, int, QQuick3DObject__ItemChangeData*);
    using QQuick3DObject_ClassBegin_Callback = void (*)(QQuick3DObject*);
    using QQuick3DObject_ComponentComplete_Callback = void (*)(QQuick3DObject*);
    using QQuick3DObject_PreSync_Callback = void (*)(QQuick3DObject*);
    using QQuick3DObject_Event_Callback = bool (*)(QQuick3DObject*, QEvent*);
    using QQuick3DObject_EventFilter_Callback = bool (*)(QQuick3DObject*, QObject*, QEvent*);
    using QQuick3DObject_TimerEvent_Callback = void (*)(QQuick3DObject*, QTimerEvent*);
    using QQuick3DObject_ChildEvent_Callback = void (*)(QQuick3DObject*, QChildEvent*);
    using QQuick3DObject_CustomEvent_Callback = void (*)(QQuick3DObject*, QEvent*);
    using QQuick3DObject_ConnectNotify_Callback = void (*)(QQuick3DObject*, QMetaMethod*);
    using QQuick3DObject_DisconnectNotify_Callback = void (*)(QQuick3DObject*, QMetaMethod*);
    using QQuick3DObject::isComponentComplete;
    using QQuick3DObject::isSignalConnected;
    using QQuick3DObject::receivers;
    using QQuick3DObject::sender;
    using QQuick3DObject::senderSignalIndex;

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

    // Access struct
    struct Base : QQuick3DObject {
        using QQuick3DObject::childEvent;
        using QQuick3DObject::classBegin;
        using QQuick3DObject::componentComplete;
        using QQuick3DObject::connectNotify;
        using QQuick3DObject::customEvent;
        using QQuick3DObject::disconnectNotify;
        using QQuick3DObject::itemChange;
        using QQuick3DObject::markAllDirty;
        using QQuick3DObject::preSync;
        using QQuick3DObject::timerEvent;
    };

    VirtualQQuick3DObject() : QQuick3DObject() {};
    VirtualQQuick3DObject(QQuick3DObject* parent) : QQuick3DObject(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquick3dobject_metaobject_callback) {
            QMetaObject* callback_ret = qquick3dobject_metaobject_callback(this);
            return callback_ret;
        }
        return QQuick3DObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquick3dobject_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquick3dobject_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuick3DObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquick3dobject_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquick3dobject_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuick3DObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAllDirty() override {
        if (qquick3dobject_markalldirty_callback) {
            qquick3dobject_markalldirty_callback(this);
            return;
        }
        QQuick3DObject::markAllDirty();
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuick3DObject::ItemChange param1, const QQuick3DObject::ItemChangeData& param2) override {
        if (qquick3dobject_itemchange_callback) {
            int cbval1 = static_cast<int>(param1);
            const QQuick3DObject::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuick3DObject__ItemChangeData* cbval2 = const_cast<QQuick3DObject::ItemChangeData*>(&param2_ret);
            qquick3dobject_itemchange_callback(this, cbval1, cbval2);
            return;
        }
        QQuick3DObject::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquick3dobject_classbegin_callback) {
            qquick3dobject_classbegin_callback(this);
            return;
        }
        QQuick3DObject::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquick3dobject_componentcomplete_callback) {
            qquick3dobject_componentcomplete_callback(this);
            return;
        }
        QQuick3DObject::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preSync() override {
        if (qquick3dobject_presync_callback) {
            qquick3dobject_presync_callback(this);
            return;
        }
        QQuick3DObject::preSync();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquick3dobject_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquick3dobject_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuick3DObject::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquick3dobject_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquick3dobject_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuick3DObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquick3dobject_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquick3dobject_timerevent_callback(this, cbval1);
            return;
        }
        QQuick3DObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquick3dobject_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquick3dobject_childevent_callback(this, cbval1);
            return;
        }
        QQuick3DObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquick3dobject_customevent_callback) {
            QEvent* cbval1 = event;
            qquick3dobject_customevent_callback(this, cbval1);
            return;
        }
        QQuick3DObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquick3dobject_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquick3dobject_connectnotify_callback(this, cbval1);
            return;
        }
        QQuick3DObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquick3dobject_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquick3dobject_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuick3DObject::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuick3DObject_SuperMarkAllDirty(QQuick3DObject* self);
    friend void QQuick3DObject_SuperItemChange(QQuick3DObject* self, int param1, const QQuick3DObject__ItemChangeData* param2);
    friend void QQuick3DObject_SuperClassBegin(QQuick3DObject* self);
    friend void QQuick3DObject_SuperComponentComplete(QQuick3DObject* self);
    friend void QQuick3DObject_SuperPreSync(QQuick3DObject* self);
    friend void QQuick3DObject_SuperTimerEvent(QQuick3DObject* self, QTimerEvent* event);
    friend void QQuick3DObject_SuperChildEvent(QQuick3DObject* self, QChildEvent* event);
    friend void QQuick3DObject_SuperCustomEvent(QQuick3DObject* self, QEvent* event);
    friend void QQuick3DObject_SuperConnectNotify(QQuick3DObject* self, const QMetaMethod* signal);
    friend void QQuick3DObject_SuperDisconnectNotify(QQuick3DObject* self, const QMetaMethod* signal);
};

#endif
