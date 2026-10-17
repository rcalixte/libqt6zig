#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DITEM_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DITEM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCustom3DItem
class VirtualQCustom3DItem final : public QCustom3DItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCustom3DItem_MetaObject_Callback = QMetaObject* (*)(const QCustom3DItem*);
    using QCustom3DItem_Metacast_Callback = void* (*)(QCustom3DItem*, const char*);
    using QCustom3DItem_Metacall_Callback = int (*)(QCustom3DItem*, int, int, void**);
    using QCustom3DItem_Event_Callback = bool (*)(QCustom3DItem*, QEvent*);
    using QCustom3DItem_EventFilter_Callback = bool (*)(QCustom3DItem*, QObject*, QEvent*);
    using QCustom3DItem_TimerEvent_Callback = void (*)(QCustom3DItem*, QTimerEvent*);
    using QCustom3DItem_ChildEvent_Callback = void (*)(QCustom3DItem*, QChildEvent*);
    using QCustom3DItem_CustomEvent_Callback = void (*)(QCustom3DItem*, QEvent*);
    using QCustom3DItem_ConnectNotify_Callback = void (*)(QCustom3DItem*, QMetaMethod*);
    using QCustom3DItem_DisconnectNotify_Callback = void (*)(QCustom3DItem*, QMetaMethod*);
    using QCustom3DItem::isSignalConnected;
    using QCustom3DItem::receivers;
    using QCustom3DItem::sender;
    using QCustom3DItem::senderSignalIndex;

    // Instance callback storage
    QCustom3DItem_MetaObject_Callback qcustom3ditem_metaobject_callback = nullptr;
    QCustom3DItem_Metacast_Callback qcustom3ditem_metacast_callback = nullptr;
    QCustom3DItem_Metacall_Callback qcustom3ditem_metacall_callback = nullptr;
    QCustom3DItem_Event_Callback qcustom3ditem_event_callback = nullptr;
    QCustom3DItem_EventFilter_Callback qcustom3ditem_eventfilter_callback = nullptr;
    QCustom3DItem_TimerEvent_Callback qcustom3ditem_timerevent_callback = nullptr;
    QCustom3DItem_ChildEvent_Callback qcustom3ditem_childevent_callback = nullptr;
    QCustom3DItem_CustomEvent_Callback qcustom3ditem_customevent_callback = nullptr;
    QCustom3DItem_ConnectNotify_Callback qcustom3ditem_connectnotify_callback = nullptr;
    QCustom3DItem_DisconnectNotify_Callback qcustom3ditem_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCustom3DItem {
        using QCustom3DItem::childEvent;
        using QCustom3DItem::connectNotify;
        using QCustom3DItem::customEvent;
        using QCustom3DItem::disconnectNotify;
        using QCustom3DItem::timerEvent;
    };

    VirtualQCustom3DItem() : QCustom3DItem() {};
    VirtualQCustom3DItem(const QString& meshFile, const QVector3D& position, const QVector3D& scaling, const QQuaternion& rotation, const QImage& texture) : QCustom3DItem(meshFile, position, scaling, rotation, texture) {};
    VirtualQCustom3DItem(QObject* parent) : QCustom3DItem(parent) {};
    VirtualQCustom3DItem(const QString& meshFile, const QVector3D& position, const QVector3D& scaling, const QQuaternion& rotation, const QImage& texture, QObject* parent) : QCustom3DItem(meshFile, position, scaling, rotation, texture, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcustom3ditem_metaobject_callback) {
            QMetaObject* callback_ret = qcustom3ditem_metaobject_callback(this);
            return callback_ret;
        }
        return QCustom3DItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcustom3ditem_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcustom3ditem_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCustom3DItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcustom3ditem_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcustom3ditem_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCustom3DItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcustom3ditem_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcustom3ditem_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCustom3DItem::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcustom3ditem_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcustom3ditem_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCustom3DItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcustom3ditem_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcustom3ditem_timerevent_callback(this, cbval1);
            return;
        }
        QCustom3DItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcustom3ditem_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcustom3ditem_childevent_callback(this, cbval1);
            return;
        }
        QCustom3DItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcustom3ditem_customevent_callback) {
            QEvent* cbval1 = event;
            qcustom3ditem_customevent_callback(this, cbval1);
            return;
        }
        QCustom3DItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcustom3ditem_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcustom3ditem_connectnotify_callback(this, cbval1);
            return;
        }
        QCustom3DItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcustom3ditem_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcustom3ditem_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCustom3DItem::disconnectNotify(signal);
    }

    // Friend functions
    friend void QCustom3DItem_SuperTimerEvent(QCustom3DItem* self, QTimerEvent* event);
    friend void QCustom3DItem_SuperChildEvent(QCustom3DItem* self, QChildEvent* event);
    friend void QCustom3DItem_SuperCustomEvent(QCustom3DItem* self, QEvent* event);
    friend void QCustom3DItem_SuperConnectNotify(QCustom3DItem* self, const QMetaMethod* signal);
    friend void QCustom3DItem_SuperDisconnectNotify(QCustom3DItem* self, const QMetaMethod* signal);
};

#endif
