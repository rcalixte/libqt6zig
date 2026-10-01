#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DTEXTUREDATA_HXX
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DTEXTUREDATA_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuick3DTextureData
class VirtualQQuick3DTextureData final : public QQuick3DTextureData {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuick3DTextureData_MetaObject_Callback = QMetaObject* (*)(const QQuick3DTextureData*);
    using QQuick3DTextureData_Metacast_Callback = void* (*)(QQuick3DTextureData*, const char*);
    using QQuick3DTextureData_Metacall_Callback = int (*)(QQuick3DTextureData*, int, int, void**);
    using QQuick3DTextureData_MarkAllDirty_Callback = void (*)(QQuick3DTextureData*);
    using QQuick3DTextureData_ItemChange_Callback = void (*)(QQuick3DTextureData*, int, QQuick3DObject__ItemChangeData*);
    using QQuick3DTextureData_ClassBegin_Callback = void (*)(QQuick3DTextureData*);
    using QQuick3DTextureData_ComponentComplete_Callback = void (*)(QQuick3DTextureData*);
    using QQuick3DTextureData_PreSync_Callback = void (*)(QQuick3DTextureData*);
    using QQuick3DTextureData_Event_Callback = bool (*)(QQuick3DTextureData*, QEvent*);
    using QQuick3DTextureData_EventFilter_Callback = bool (*)(QQuick3DTextureData*, QObject*, QEvent*);
    using QQuick3DTextureData_TimerEvent_Callback = void (*)(QQuick3DTextureData*, QTimerEvent*);
    using QQuick3DTextureData_ChildEvent_Callback = void (*)(QQuick3DTextureData*, QChildEvent*);
    using QQuick3DTextureData_CustomEvent_Callback = void (*)(QQuick3DTextureData*, QEvent*);
    using QQuick3DTextureData_ConnectNotify_Callback = void (*)(QQuick3DTextureData*, QMetaMethod*);
    using QQuick3DTextureData_DisconnectNotify_Callback = void (*)(QQuick3DTextureData*, QMetaMethod*);
    using QQuick3DTextureData::isComponentComplete;
    using QQuick3DTextureData::isSignalConnected;
    using QQuick3DTextureData::receivers;
    using QQuick3DTextureData::sender;
    using QQuick3DTextureData::senderSignalIndex;

    // Instance callback storage
    QQuick3DTextureData_MetaObject_Callback qquick3dtexturedata_metaobject_callback = nullptr;
    QQuick3DTextureData_Metacast_Callback qquick3dtexturedata_metacast_callback = nullptr;
    QQuick3DTextureData_Metacall_Callback qquick3dtexturedata_metacall_callback = nullptr;
    QQuick3DTextureData_MarkAllDirty_Callback qquick3dtexturedata_markalldirty_callback = nullptr;
    QQuick3DTextureData_ItemChange_Callback qquick3dtexturedata_itemchange_callback = nullptr;
    QQuick3DTextureData_ClassBegin_Callback qquick3dtexturedata_classbegin_callback = nullptr;
    QQuick3DTextureData_ComponentComplete_Callback qquick3dtexturedata_componentcomplete_callback = nullptr;
    QQuick3DTextureData_PreSync_Callback qquick3dtexturedata_presync_callback = nullptr;
    QQuick3DTextureData_Event_Callback qquick3dtexturedata_event_callback = nullptr;
    QQuick3DTextureData_EventFilter_Callback qquick3dtexturedata_eventfilter_callback = nullptr;
    QQuick3DTextureData_TimerEvent_Callback qquick3dtexturedata_timerevent_callback = nullptr;
    QQuick3DTextureData_ChildEvent_Callback qquick3dtexturedata_childevent_callback = nullptr;
    QQuick3DTextureData_CustomEvent_Callback qquick3dtexturedata_customevent_callback = nullptr;
    QQuick3DTextureData_ConnectNotify_Callback qquick3dtexturedata_connectnotify_callback = nullptr;
    QQuick3DTextureData_DisconnectNotify_Callback qquick3dtexturedata_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuick3DTextureData {
        using QQuick3DTextureData::childEvent;
        using QQuick3DTextureData::classBegin;
        using QQuick3DTextureData::componentComplete;
        using QQuick3DTextureData::connectNotify;
        using QQuick3DTextureData::customEvent;
        using QQuick3DTextureData::disconnectNotify;
        using QQuick3DTextureData::itemChange;
        using QQuick3DTextureData::markAllDirty;
        using QQuick3DTextureData::preSync;
        using QQuick3DTextureData::timerEvent;
    };

    VirtualQQuick3DTextureData() : QQuick3DTextureData() {};
    VirtualQQuick3DTextureData(QQuick3DObject* parent) : QQuick3DTextureData(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquick3dtexturedata_metaobject_callback) {
            QMetaObject* callback_ret = qquick3dtexturedata_metaobject_callback(this);
            return callback_ret;
        }
        return QQuick3DTextureData::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquick3dtexturedata_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquick3dtexturedata_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuick3DTextureData::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquick3dtexturedata_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquick3dtexturedata_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuick3DTextureData::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void markAllDirty() override {
        if (qquick3dtexturedata_markalldirty_callback) {
            qquick3dtexturedata_markalldirty_callback(this);
            return;
        }
        QQuick3DTextureData::markAllDirty();
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuick3DObject::ItemChange param1, const QQuick3DObject::ItemChangeData& param2) override {
        if (qquick3dtexturedata_itemchange_callback) {
            int cbval1 = static_cast<int>(param1);
            const QQuick3DObject::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuick3DObject__ItemChangeData* cbval2 = const_cast<QQuick3DObject::ItemChangeData*>(&param2_ret);
            qquick3dtexturedata_itemchange_callback(this, cbval1, cbval2);
            return;
        }
        QQuick3DTextureData::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquick3dtexturedata_classbegin_callback) {
            qquick3dtexturedata_classbegin_callback(this);
            return;
        }
        QQuick3DTextureData::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquick3dtexturedata_componentcomplete_callback) {
            qquick3dtexturedata_componentcomplete_callback(this);
            return;
        }
        QQuick3DTextureData::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void preSync() override {
        if (qquick3dtexturedata_presync_callback) {
            qquick3dtexturedata_presync_callback(this);
            return;
        }
        QQuick3DTextureData::preSync();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquick3dtexturedata_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquick3dtexturedata_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuick3DTextureData::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquick3dtexturedata_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquick3dtexturedata_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuick3DTextureData::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquick3dtexturedata_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquick3dtexturedata_timerevent_callback(this, cbval1);
            return;
        }
        QQuick3DTextureData::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquick3dtexturedata_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquick3dtexturedata_childevent_callback(this, cbval1);
            return;
        }
        QQuick3DTextureData::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquick3dtexturedata_customevent_callback) {
            QEvent* cbval1 = event;
            qquick3dtexturedata_customevent_callback(this, cbval1);
            return;
        }
        QQuick3DTextureData::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquick3dtexturedata_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquick3dtexturedata_connectnotify_callback(this, cbval1);
            return;
        }
        QQuick3DTextureData::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquick3dtexturedata_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquick3dtexturedata_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuick3DTextureData::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuick3DTextureData_SuperMarkAllDirty(QQuick3DTextureData* self);
    friend void QQuick3DTextureData_SuperItemChange(QQuick3DTextureData* self, int param1, const QQuick3DObject__ItemChangeData* param2);
    friend void QQuick3DTextureData_SuperClassBegin(QQuick3DTextureData* self);
    friend void QQuick3DTextureData_SuperComponentComplete(QQuick3DTextureData* self);
    friend void QQuick3DTextureData_SuperPreSync(QQuick3DTextureData* self);
    friend void QQuick3DTextureData_SuperTimerEvent(QQuick3DTextureData* self, QTimerEvent* event);
    friend void QQuick3DTextureData_SuperChildEvent(QQuick3DTextureData* self, QChildEvent* event);
    friend void QQuick3DTextureData_SuperCustomEvent(QQuick3DTextureData* self, QEvent* event);
    friend void QQuick3DTextureData_SuperConnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal);
    friend void QQuick3DTextureData_SuperDisconnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal);
};

#endif
