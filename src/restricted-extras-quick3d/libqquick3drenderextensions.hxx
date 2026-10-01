#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DRENDEREXTENSIONS_HXX
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DRENDEREXTENSIONS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuick3DRenderExtension
class VirtualQQuick3DRenderExtension final : public QQuick3DRenderExtension {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuick3DRenderExtension_MetaObject_Callback = QMetaObject* (*)(const QQuick3DRenderExtension*);
    using QQuick3DRenderExtension_Metacast_Callback = void* (*)(QQuick3DRenderExtension*, const char*);
    using QQuick3DRenderExtension_Metacall_Callback = int (*)(QQuick3DRenderExtension*, int, int, void**);
    using QQuick3DRenderExtension_MarkAllDirty_Callback = void (*)(QQuick3DRenderExtension*);
    using QQuick3DRenderExtension_ItemChange_Callback = void (*)(QQuick3DRenderExtension*, int, QQuick3DObject__ItemChangeData*);
    using QQuick3DRenderExtension_ClassBegin_Callback = void (*)(QQuick3DRenderExtension*);
    using QQuick3DRenderExtension_ComponentComplete_Callback = void (*)(QQuick3DRenderExtension*);
    using QQuick3DRenderExtension_PreSync_Callback = void (*)(QQuick3DRenderExtension*);
    using QQuick3DRenderExtension_Event_Callback = bool (*)(QQuick3DRenderExtension*, QEvent*);
    using QQuick3DRenderExtension_EventFilter_Callback = bool (*)(QQuick3DRenderExtension*, QObject*, QEvent*);
    using QQuick3DRenderExtension_TimerEvent_Callback = void (*)(QQuick3DRenderExtension*, QTimerEvent*);
    using QQuick3DRenderExtension_ChildEvent_Callback = void (*)(QQuick3DRenderExtension*, QChildEvent*);
    using QQuick3DRenderExtension_CustomEvent_Callback = void (*)(QQuick3DRenderExtension*, QEvent*);
    using QQuick3DRenderExtension_ConnectNotify_Callback = void (*)(QQuick3DRenderExtension*, QMetaMethod*);
    using QQuick3DRenderExtension_DisconnectNotify_Callback = void (*)(QQuick3DRenderExtension*, QMetaMethod*);
    using QQuick3DRenderExtension::isComponentComplete;
    using QQuick3DRenderExtension::isSignalConnected;
    using QQuick3DRenderExtension::receivers;
    using QQuick3DRenderExtension::sender;
    using QQuick3DRenderExtension::senderSignalIndex;

    // Instance callback storage
    QQuick3DRenderExtension_MetaObject_Callback qquick3drenderextension_metaobject_callback = nullptr;
    QQuick3DRenderExtension_Metacast_Callback qquick3drenderextension_metacast_callback = nullptr;
    QQuick3DRenderExtension_Metacall_Callback qquick3drenderextension_metacall_callback = nullptr;
    QQuick3DRenderExtension_MarkAllDirty_Callback qquick3drenderextension_markalldirty_callback = nullptr;
    QQuick3DRenderExtension_ItemChange_Callback qquick3drenderextension_itemchange_callback = nullptr;
    QQuick3DRenderExtension_ClassBegin_Callback qquick3drenderextension_classbegin_callback = nullptr;
    QQuick3DRenderExtension_ComponentComplete_Callback qquick3drenderextension_componentcomplete_callback = nullptr;
    QQuick3DRenderExtension_PreSync_Callback qquick3drenderextension_presync_callback = nullptr;
    QQuick3DRenderExtension_Event_Callback qquick3drenderextension_event_callback = nullptr;
    QQuick3DRenderExtension_EventFilter_Callback qquick3drenderextension_eventfilter_callback = nullptr;
    QQuick3DRenderExtension_TimerEvent_Callback qquick3drenderextension_timerevent_callback = nullptr;
    QQuick3DRenderExtension_ChildEvent_Callback qquick3drenderextension_childevent_callback = nullptr;
    QQuick3DRenderExtension_CustomEvent_Callback qquick3drenderextension_customevent_callback = nullptr;
    QQuick3DRenderExtension_ConnectNotify_Callback qquick3drenderextension_connectnotify_callback = nullptr;
    QQuick3DRenderExtension_DisconnectNotify_Callback qquick3drenderextension_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuick3DRenderExtension {
        using QQuick3DRenderExtension::childEvent;
        using QQuick3DRenderExtension::classBegin;
        using QQuick3DRenderExtension::componentComplete;
        using QQuick3DRenderExtension::connectNotify;
        using QQuick3DRenderExtension::customEvent;
        using QQuick3DRenderExtension::disconnectNotify;
        using QQuick3DRenderExtension::itemChange;
        using QQuick3DRenderExtension::markAllDirty;
        using QQuick3DRenderExtension::preSync;
        using QQuick3DRenderExtension::timerEvent;
    };

    VirtualQQuick3DRenderExtension() : QQuick3DRenderExtension() {};
    VirtualQQuick3DRenderExtension(QQuick3DObject* parent) : QQuick3DRenderExtension(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquick3drenderextension_metaobject_callback) {
            QMetaObject* callback_ret = qquick3drenderextension_metaobject_callback(this);
            return callback_ret;
        }
        return QQuick3DRenderExtension::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquick3drenderextension_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquick3drenderextension_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuick3DRenderExtension::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquick3drenderextension_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquick3drenderextension_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuick3DRenderExtension::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAllDirty() override {
        if (qquick3drenderextension_markalldirty_callback) {
            qquick3drenderextension_markalldirty_callback(this);
            return;
        }
        QQuick3DRenderExtension::markAllDirty();
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuick3DObject::ItemChange param1, const QQuick3DObject::ItemChangeData& param2) override {
        if (qquick3drenderextension_itemchange_callback) {
            int cbval1 = static_cast<int>(param1);
            const QQuick3DObject::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuick3DObject__ItemChangeData* cbval2 = const_cast<QQuick3DObject::ItemChangeData*>(&param2_ret);
            qquick3drenderextension_itemchange_callback(this, cbval1, cbval2);
            return;
        }
        QQuick3DRenderExtension::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquick3drenderextension_classbegin_callback) {
            qquick3drenderextension_classbegin_callback(this);
            return;
        }
        QQuick3DRenderExtension::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquick3drenderextension_componentcomplete_callback) {
            qquick3drenderextension_componentcomplete_callback(this);
            return;
        }
        QQuick3DRenderExtension::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preSync() override {
        if (qquick3drenderextension_presync_callback) {
            qquick3drenderextension_presync_callback(this);
            return;
        }
        QQuick3DRenderExtension::preSync();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquick3drenderextension_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquick3drenderextension_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuick3DRenderExtension::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquick3drenderextension_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquick3drenderextension_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuick3DRenderExtension::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquick3drenderextension_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquick3drenderextension_timerevent_callback(this, cbval1);
            return;
        }
        QQuick3DRenderExtension::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquick3drenderextension_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquick3drenderextension_childevent_callback(this, cbval1);
            return;
        }
        QQuick3DRenderExtension::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquick3drenderextension_customevent_callback) {
            QEvent* cbval1 = event;
            qquick3drenderextension_customevent_callback(this, cbval1);
            return;
        }
        QQuick3DRenderExtension::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquick3drenderextension_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquick3drenderextension_connectnotify_callback(this, cbval1);
            return;
        }
        QQuick3DRenderExtension::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquick3drenderextension_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquick3drenderextension_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuick3DRenderExtension::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuick3DRenderExtension_SuperMarkAllDirty(QQuick3DRenderExtension* self);
    friend void QQuick3DRenderExtension_SuperItemChange(QQuick3DRenderExtension* self, int param1, const QQuick3DObject__ItemChangeData* param2);
    friend void QQuick3DRenderExtension_SuperClassBegin(QQuick3DRenderExtension* self);
    friend void QQuick3DRenderExtension_SuperComponentComplete(QQuick3DRenderExtension* self);
    friend void QQuick3DRenderExtension_SuperPreSync(QQuick3DRenderExtension* self);
    friend void QQuick3DRenderExtension_SuperTimerEvent(QQuick3DRenderExtension* self, QTimerEvent* event);
    friend void QQuick3DRenderExtension_SuperChildEvent(QQuick3DRenderExtension* self, QChildEvent* event);
    friend void QQuick3DRenderExtension_SuperCustomEvent(QQuick3DRenderExtension* self, QEvent* event);
    friend void QQuick3DRenderExtension_SuperConnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal);
    friend void QQuick3DRenderExtension_SuperDisconnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal);
};

#endif
