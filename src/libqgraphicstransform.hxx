#pragma once
#ifndef LIBQGRAPHICSTRANSFORM_HXX
#define LIBQGRAPHICSTRANSFORM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsTransform
class VirtualQGraphicsTransform : public QGraphicsTransform {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsTransform_MetaObject_Callback = QMetaObject* (*)(const QGraphicsTransform*);
    using QGraphicsTransform_Metacast_Callback = void* (*)(QGraphicsTransform*, const char*);
    using QGraphicsTransform_Metacall_Callback = int (*)(QGraphicsTransform*, int, int, void**);
    using QGraphicsTransform_ApplyTo_Callback = void (*)(const QGraphicsTransform*, QMatrix4x4*);
    using QGraphicsTransform_Event_Callback = bool (*)(QGraphicsTransform*, QEvent*);
    using QGraphicsTransform_EventFilter_Callback = bool (*)(QGraphicsTransform*, QObject*, QEvent*);
    using QGraphicsTransform_TimerEvent_Callback = void (*)(QGraphicsTransform*, QTimerEvent*);
    using QGraphicsTransform_ChildEvent_Callback = void (*)(QGraphicsTransform*, QChildEvent*);
    using QGraphicsTransform_CustomEvent_Callback = void (*)(QGraphicsTransform*, QEvent*);
    using QGraphicsTransform_ConnectNotify_Callback = void (*)(QGraphicsTransform*, QMetaMethod*);
    using QGraphicsTransform_DisconnectNotify_Callback = void (*)(QGraphicsTransform*, QMetaMethod*);
    using QGraphicsTransform::isSignalConnected;
    using QGraphicsTransform::receivers;
    using QGraphicsTransform::sender;
    using QGraphicsTransform::senderSignalIndex;
    using QGraphicsTransform::update;

    // Instance callback storage
    QGraphicsTransform_MetaObject_Callback qgraphicstransform_metaobject_callback = nullptr;
    QGraphicsTransform_Metacast_Callback qgraphicstransform_metacast_callback = nullptr;
    QGraphicsTransform_Metacall_Callback qgraphicstransform_metacall_callback = nullptr;
    QGraphicsTransform_ApplyTo_Callback qgraphicstransform_applyto_callback = nullptr;
    QGraphicsTransform_Event_Callback qgraphicstransform_event_callback = nullptr;
    QGraphicsTransform_EventFilter_Callback qgraphicstransform_eventfilter_callback = nullptr;
    QGraphicsTransform_TimerEvent_Callback qgraphicstransform_timerevent_callback = nullptr;
    QGraphicsTransform_ChildEvent_Callback qgraphicstransform_childevent_callback = nullptr;
    QGraphicsTransform_CustomEvent_Callback qgraphicstransform_customevent_callback = nullptr;
    QGraphicsTransform_ConnectNotify_Callback qgraphicstransform_connectnotify_callback = nullptr;
    QGraphicsTransform_DisconnectNotify_Callback qgraphicstransform_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGraphicsTransform {
        using QGraphicsTransform::childEvent;
        using QGraphicsTransform::connectNotify;
        using QGraphicsTransform::customEvent;
        using QGraphicsTransform::disconnectNotify;
        using QGraphicsTransform::timerEvent;
    };

    VirtualQGraphicsTransform() : QGraphicsTransform() {};
    VirtualQGraphicsTransform(QObject* parent) : QGraphicsTransform(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicstransform_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicstransform_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsTransform::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicstransform_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicstransform_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTransform::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicstransform_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicstransform_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsTransform::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyTo(QMatrix4x4* matrix) const override {
        if (qgraphicstransform_applyto_callback) {
            QMatrix4x4* cbval1 = matrix;
            qgraphicstransform_applyto_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QGraphicsTransform::applyTo called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicstransform_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicstransform_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsTransform::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicstransform_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicstransform_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsTransform::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicstransform_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicstransform_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsTransform::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicstransform_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicstransform_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsTransform::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicstransform_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicstransform_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsTransform::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicstransform_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicstransform_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsTransform::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicstransform_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicstransform_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsTransform::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGraphicsTransform_SuperTimerEvent(QGraphicsTransform* self, QTimerEvent* event);
    friend void QGraphicsTransform_SuperChildEvent(QGraphicsTransform* self, QChildEvent* event);
    friend void QGraphicsTransform_SuperCustomEvent(QGraphicsTransform* self, QEvent* event);
    friend void QGraphicsTransform_SuperConnectNotify(QGraphicsTransform* self, const QMetaMethod* signal);
    friend void QGraphicsTransform_SuperDisconnectNotify(QGraphicsTransform* self, const QMetaMethod* signal);
};

// This class is a subclass of QGraphicsScale
class VirtualQGraphicsScale final : public QGraphicsScale {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsScale_MetaObject_Callback = QMetaObject* (*)(const QGraphicsScale*);
    using QGraphicsScale_Metacast_Callback = void* (*)(QGraphicsScale*, const char*);
    using QGraphicsScale_Metacall_Callback = int (*)(QGraphicsScale*, int, int, void**);
    using QGraphicsScale_ApplyTo_Callback = void (*)(const QGraphicsScale*, QMatrix4x4*);
    using QGraphicsScale_Event_Callback = bool (*)(QGraphicsScale*, QEvent*);
    using QGraphicsScale_EventFilter_Callback = bool (*)(QGraphicsScale*, QObject*, QEvent*);
    using QGraphicsScale_TimerEvent_Callback = void (*)(QGraphicsScale*, QTimerEvent*);
    using QGraphicsScale_ChildEvent_Callback = void (*)(QGraphicsScale*, QChildEvent*);
    using QGraphicsScale_CustomEvent_Callback = void (*)(QGraphicsScale*, QEvent*);
    using QGraphicsScale_ConnectNotify_Callback = void (*)(QGraphicsScale*, QMetaMethod*);
    using QGraphicsScale_DisconnectNotify_Callback = void (*)(QGraphicsScale*, QMetaMethod*);
    using QGraphicsScale::isSignalConnected;
    using QGraphicsScale::receivers;
    using QGraphicsScale::sender;
    using QGraphicsScale::senderSignalIndex;
    using QGraphicsScale::update;

    // Instance callback storage
    QGraphicsScale_MetaObject_Callback qgraphicsscale_metaobject_callback = nullptr;
    QGraphicsScale_Metacast_Callback qgraphicsscale_metacast_callback = nullptr;
    QGraphicsScale_Metacall_Callback qgraphicsscale_metacall_callback = nullptr;
    QGraphicsScale_ApplyTo_Callback qgraphicsscale_applyto_callback = nullptr;
    QGraphicsScale_Event_Callback qgraphicsscale_event_callback = nullptr;
    QGraphicsScale_EventFilter_Callback qgraphicsscale_eventfilter_callback = nullptr;
    QGraphicsScale_TimerEvent_Callback qgraphicsscale_timerevent_callback = nullptr;
    QGraphicsScale_ChildEvent_Callback qgraphicsscale_childevent_callback = nullptr;
    QGraphicsScale_CustomEvent_Callback qgraphicsscale_customevent_callback = nullptr;
    QGraphicsScale_ConnectNotify_Callback qgraphicsscale_connectnotify_callback = nullptr;
    QGraphicsScale_DisconnectNotify_Callback qgraphicsscale_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGraphicsScale {
        using QGraphicsScale::childEvent;
        using QGraphicsScale::connectNotify;
        using QGraphicsScale::customEvent;
        using QGraphicsScale::disconnectNotify;
        using QGraphicsScale::timerEvent;
    };

    VirtualQGraphicsScale() : QGraphicsScale() {};
    VirtualQGraphicsScale(QObject* parent) : QGraphicsScale(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicsscale_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicsscale_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsScale::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicsscale_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicsscale_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsScale::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsscale_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicsscale_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsScale::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyTo(QMatrix4x4* matrix) const override {
        if (qgraphicsscale_applyto_callback) {
            QMatrix4x4* cbval1 = matrix;
            qgraphicsscale_applyto_callback(this, cbval1);
            return;
        }
        QGraphicsScale::applyTo(matrix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsscale_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsscale_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsScale::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsscale_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsscale_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsScale::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsscale_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicsscale_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsScale::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsscale_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicsscale_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsScale::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsscale_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsscale_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsScale::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsscale_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsscale_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsScale::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsscale_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsscale_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsScale::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGraphicsScale_SuperTimerEvent(QGraphicsScale* self, QTimerEvent* event);
    friend void QGraphicsScale_SuperChildEvent(QGraphicsScale* self, QChildEvent* event);
    friend void QGraphicsScale_SuperCustomEvent(QGraphicsScale* self, QEvent* event);
    friend void QGraphicsScale_SuperConnectNotify(QGraphicsScale* self, const QMetaMethod* signal);
    friend void QGraphicsScale_SuperDisconnectNotify(QGraphicsScale* self, const QMetaMethod* signal);
};

// This class is a subclass of QGraphicsRotation
class VirtualQGraphicsRotation final : public QGraphicsRotation {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsRotation_MetaObject_Callback = QMetaObject* (*)(const QGraphicsRotation*);
    using QGraphicsRotation_Metacast_Callback = void* (*)(QGraphicsRotation*, const char*);
    using QGraphicsRotation_Metacall_Callback = int (*)(QGraphicsRotation*, int, int, void**);
    using QGraphicsRotation_ApplyTo_Callback = void (*)(const QGraphicsRotation*, QMatrix4x4*);
    using QGraphicsRotation_Event_Callback = bool (*)(QGraphicsRotation*, QEvent*);
    using QGraphicsRotation_EventFilter_Callback = bool (*)(QGraphicsRotation*, QObject*, QEvent*);
    using QGraphicsRotation_TimerEvent_Callback = void (*)(QGraphicsRotation*, QTimerEvent*);
    using QGraphicsRotation_ChildEvent_Callback = void (*)(QGraphicsRotation*, QChildEvent*);
    using QGraphicsRotation_CustomEvent_Callback = void (*)(QGraphicsRotation*, QEvent*);
    using QGraphicsRotation_ConnectNotify_Callback = void (*)(QGraphicsRotation*, QMetaMethod*);
    using QGraphicsRotation_DisconnectNotify_Callback = void (*)(QGraphicsRotation*, QMetaMethod*);
    using QGraphicsRotation::isSignalConnected;
    using QGraphicsRotation::receivers;
    using QGraphicsRotation::sender;
    using QGraphicsRotation::senderSignalIndex;
    using QGraphicsRotation::update;

    // Instance callback storage
    QGraphicsRotation_MetaObject_Callback qgraphicsrotation_metaobject_callback = nullptr;
    QGraphicsRotation_Metacast_Callback qgraphicsrotation_metacast_callback = nullptr;
    QGraphicsRotation_Metacall_Callback qgraphicsrotation_metacall_callback = nullptr;
    QGraphicsRotation_ApplyTo_Callback qgraphicsrotation_applyto_callback = nullptr;
    QGraphicsRotation_Event_Callback qgraphicsrotation_event_callback = nullptr;
    QGraphicsRotation_EventFilter_Callback qgraphicsrotation_eventfilter_callback = nullptr;
    QGraphicsRotation_TimerEvent_Callback qgraphicsrotation_timerevent_callback = nullptr;
    QGraphicsRotation_ChildEvent_Callback qgraphicsrotation_childevent_callback = nullptr;
    QGraphicsRotation_CustomEvent_Callback qgraphicsrotation_customevent_callback = nullptr;
    QGraphicsRotation_ConnectNotify_Callback qgraphicsrotation_connectnotify_callback = nullptr;
    QGraphicsRotation_DisconnectNotify_Callback qgraphicsrotation_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGraphicsRotation {
        using QGraphicsRotation::childEvent;
        using QGraphicsRotation::connectNotify;
        using QGraphicsRotation::customEvent;
        using QGraphicsRotation::disconnectNotify;
        using QGraphicsRotation::timerEvent;
    };

    VirtualQGraphicsRotation() : QGraphicsRotation() {};
    VirtualQGraphicsRotation(QObject* parent) : QGraphicsRotation(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicsrotation_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicsrotation_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsRotation::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicsrotation_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicsrotation_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsRotation::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsrotation_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicsrotation_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsRotation::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyTo(QMatrix4x4* matrix) const override {
        if (qgraphicsrotation_applyto_callback) {
            QMatrix4x4* cbval1 = matrix;
            qgraphicsrotation_applyto_callback(this, cbval1);
            return;
        }
        QGraphicsRotation::applyTo(matrix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsrotation_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsrotation_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsRotation::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsrotation_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsrotation_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsRotation::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsrotation_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicsrotation_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsRotation::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsrotation_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicsrotation_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsRotation::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsrotation_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsrotation_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsRotation::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsrotation_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsrotation_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsRotation::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsrotation_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsrotation_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsRotation::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGraphicsRotation_SuperTimerEvent(QGraphicsRotation* self, QTimerEvent* event);
    friend void QGraphicsRotation_SuperChildEvent(QGraphicsRotation* self, QChildEvent* event);
    friend void QGraphicsRotation_SuperCustomEvent(QGraphicsRotation* self, QEvent* event);
    friend void QGraphicsRotation_SuperConnectNotify(QGraphicsRotation* self, const QMetaMethod* signal);
    friend void QGraphicsRotation_SuperDisconnectNotify(QGraphicsRotation* self, const QMetaMethod* signal);
};

#endif
