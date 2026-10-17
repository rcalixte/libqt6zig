#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DVOLUME_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQCUSTOM3DVOLUME_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCustom3DVolume
class VirtualQCustom3DVolume final : public QCustom3DVolume {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCustom3DVolume_MetaObject_Callback = QMetaObject* (*)(const QCustom3DVolume*);
    using QCustom3DVolume_Metacast_Callback = void* (*)(QCustom3DVolume*, const char*);
    using QCustom3DVolume_Metacall_Callback = int (*)(QCustom3DVolume*, int, int, void**);
    using QCustom3DVolume_Event_Callback = bool (*)(QCustom3DVolume*, QEvent*);
    using QCustom3DVolume_EventFilter_Callback = bool (*)(QCustom3DVolume*, QObject*, QEvent*);
    using QCustom3DVolume_TimerEvent_Callback = void (*)(QCustom3DVolume*, QTimerEvent*);
    using QCustom3DVolume_ChildEvent_Callback = void (*)(QCustom3DVolume*, QChildEvent*);
    using QCustom3DVolume_CustomEvent_Callback = void (*)(QCustom3DVolume*, QEvent*);
    using QCustom3DVolume_ConnectNotify_Callback = void (*)(QCustom3DVolume*, QMetaMethod*);
    using QCustom3DVolume_DisconnectNotify_Callback = void (*)(QCustom3DVolume*, QMetaMethod*);
    using QCustom3DVolume::isSignalConnected;
    using QCustom3DVolume::receivers;
    using QCustom3DVolume::sender;
    using QCustom3DVolume::senderSignalIndex;

    // Instance callback storage
    QCustom3DVolume_MetaObject_Callback qcustom3dvolume_metaobject_callback = nullptr;
    QCustom3DVolume_Metacast_Callback qcustom3dvolume_metacast_callback = nullptr;
    QCustom3DVolume_Metacall_Callback qcustom3dvolume_metacall_callback = nullptr;
    QCustom3DVolume_Event_Callback qcustom3dvolume_event_callback = nullptr;
    QCustom3DVolume_EventFilter_Callback qcustom3dvolume_eventfilter_callback = nullptr;
    QCustom3DVolume_TimerEvent_Callback qcustom3dvolume_timerevent_callback = nullptr;
    QCustom3DVolume_ChildEvent_Callback qcustom3dvolume_childevent_callback = nullptr;
    QCustom3DVolume_CustomEvent_Callback qcustom3dvolume_customevent_callback = nullptr;
    QCustom3DVolume_ConnectNotify_Callback qcustom3dvolume_connectnotify_callback = nullptr;
    QCustom3DVolume_DisconnectNotify_Callback qcustom3dvolume_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCustom3DVolume {
        using QCustom3DVolume::childEvent;
        using QCustom3DVolume::connectNotify;
        using QCustom3DVolume::customEvent;
        using QCustom3DVolume::disconnectNotify;
        using QCustom3DVolume::timerEvent;
    };

    VirtualQCustom3DVolume() : QCustom3DVolume() {};
    VirtualQCustom3DVolume(const QVector3D& position, const QVector3D& scaling, const QQuaternion& rotation, int textureWidth, int textureHeight, int textureDepth, QList<unsigned char>* textureData, QImage::Format textureFormat, const QList<unsigned int>& colorTable) : QCustom3DVolume(position, scaling, rotation, textureWidth, textureHeight, textureDepth, textureData, textureFormat, colorTable) {};
    VirtualQCustom3DVolume(QObject* parent) : QCustom3DVolume(parent) {};
    VirtualQCustom3DVolume(const QVector3D& position, const QVector3D& scaling, const QQuaternion& rotation, int textureWidth, int textureHeight, int textureDepth, QList<unsigned char>* textureData, QImage::Format textureFormat, const QList<unsigned int>& colorTable, QObject* parent) : QCustom3DVolume(position, scaling, rotation, textureWidth, textureHeight, textureDepth, textureData, textureFormat, colorTable, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcustom3dvolume_metaobject_callback) {
            QMetaObject* callback_ret = qcustom3dvolume_metaobject_callback(this);
            return callback_ret;
        }
        return QCustom3DVolume::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcustom3dvolume_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcustom3dvolume_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCustom3DVolume::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcustom3dvolume_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcustom3dvolume_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCustom3DVolume::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcustom3dvolume_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcustom3dvolume_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCustom3DVolume::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcustom3dvolume_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcustom3dvolume_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCustom3DVolume::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcustom3dvolume_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcustom3dvolume_timerevent_callback(this, cbval1);
            return;
        }
        QCustom3DVolume::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcustom3dvolume_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcustom3dvolume_childevent_callback(this, cbval1);
            return;
        }
        QCustom3DVolume::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcustom3dvolume_customevent_callback) {
            QEvent* cbval1 = event;
            qcustom3dvolume_customevent_callback(this, cbval1);
            return;
        }
        QCustom3DVolume::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcustom3dvolume_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcustom3dvolume_connectnotify_callback(this, cbval1);
            return;
        }
        QCustom3DVolume::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcustom3dvolume_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcustom3dvolume_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCustom3DVolume::disconnectNotify(signal);
    }

    // Friend functions
    friend void QCustom3DVolume_SuperTimerEvent(QCustom3DVolume* self, QTimerEvent* event);
    friend void QCustom3DVolume_SuperChildEvent(QCustom3DVolume* self, QChildEvent* event);
    friend void QCustom3DVolume_SuperCustomEvent(QCustom3DVolume* self, QEvent* event);
    friend void QCustom3DVolume_SuperConnectNotify(QCustom3DVolume* self, const QMetaMethod* signal);
    friend void QCustom3DVolume_SuperDisconnectNotify(QCustom3DVolume* self, const QMetaMethod* signal);
};

#endif
