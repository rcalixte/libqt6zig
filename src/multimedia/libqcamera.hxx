#pragma once
#ifndef MULTIMEDIA_LIBQCAMERA_HXX
#define MULTIMEDIA_LIBQCAMERA_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCamera
class VirtualQCamera final : public QCamera {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCamera_MetaObject_Callback = QMetaObject* (*)(const QCamera*);
    using QCamera_Metacast_Callback = void* (*)(QCamera*, const char*);
    using QCamera_Metacall_Callback = int (*)(QCamera*, int, int, void**);
    using QCamera_Event_Callback = bool (*)(QCamera*, QEvent*);
    using QCamera_EventFilter_Callback = bool (*)(QCamera*, QObject*, QEvent*);
    using QCamera_TimerEvent_Callback = void (*)(QCamera*, QTimerEvent*);
    using QCamera_ChildEvent_Callback = void (*)(QCamera*, QChildEvent*);
    using QCamera_CustomEvent_Callback = void (*)(QCamera*, QEvent*);
    using QCamera_ConnectNotify_Callback = void (*)(QCamera*, QMetaMethod*);
    using QCamera_DisconnectNotify_Callback = void (*)(QCamera*, QMetaMethod*);
    using QCamera::isSignalConnected;
    using QCamera::receivers;
    using QCamera::sender;
    using QCamera::senderSignalIndex;

    // Instance callback storage
    QCamera_MetaObject_Callback qcamera_metaobject_callback = nullptr;
    QCamera_Metacast_Callback qcamera_metacast_callback = nullptr;
    QCamera_Metacall_Callback qcamera_metacall_callback = nullptr;
    QCamera_Event_Callback qcamera_event_callback = nullptr;
    QCamera_EventFilter_Callback qcamera_eventfilter_callback = nullptr;
    QCamera_TimerEvent_Callback qcamera_timerevent_callback = nullptr;
    QCamera_ChildEvent_Callback qcamera_childevent_callback = nullptr;
    QCamera_CustomEvent_Callback qcamera_customevent_callback = nullptr;
    QCamera_ConnectNotify_Callback qcamera_connectnotify_callback = nullptr;
    QCamera_DisconnectNotify_Callback qcamera_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCamera {
        using QCamera::childEvent;
        using QCamera::connectNotify;
        using QCamera::customEvent;
        using QCamera::disconnectNotify;
        using QCamera::timerEvent;
    };

    VirtualQCamera() : QCamera() {};
    VirtualQCamera(const QCameraDevice& cameraDevice) : QCamera(cameraDevice) {};
    VirtualQCamera(QCameraDevice::Position position) : QCamera(position) {};
    VirtualQCamera(QObject* parent) : QCamera(parent) {};
    VirtualQCamera(const QCameraDevice& cameraDevice, QObject* parent) : QCamera(cameraDevice, parent) {};
    VirtualQCamera(QCameraDevice::Position position, QObject* parent) : QCamera(position, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcamera_metaobject_callback) {
            QMetaObject* callback_ret = qcamera_metaobject_callback(this);
            return callback_ret;
        }
        return QCamera::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcamera_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcamera_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCamera::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcamera_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcamera_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCamera::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcamera_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcamera_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCamera::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcamera_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcamera_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCamera::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcamera_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcamera_timerevent_callback(this, cbval1);
            return;
        }
        QCamera::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcamera_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcamera_childevent_callback(this, cbval1);
            return;
        }
        QCamera::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcamera_customevent_callback) {
            QEvent* cbval1 = event;
            qcamera_customevent_callback(this, cbval1);
            return;
        }
        QCamera::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcamera_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcamera_connectnotify_callback(this, cbval1);
            return;
        }
        QCamera::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcamera_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcamera_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCamera::disconnectNotify(signal);
    }

    // Friend functions
    friend void QCamera_SuperTimerEvent(QCamera* self, QTimerEvent* event);
    friend void QCamera_SuperChildEvent(QCamera* self, QChildEvent* event);
    friend void QCamera_SuperCustomEvent(QCamera* self, QEvent* event);
    friend void QCamera_SuperConnectNotify(QCamera* self, const QMetaMethod* signal);
    friend void QCamera_SuperDisconnectNotify(QCamera* self, const QMetaMethod* signal);
};

#endif
