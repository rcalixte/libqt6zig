#pragma once
#ifndef LIBQOFFSCREENSURFACE_HXX
#define LIBQOFFSCREENSURFACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QOffscreenSurface
class VirtualQOffscreenSurface final : public QOffscreenSurface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOffscreenSurface_MetaObject_Callback = QMetaObject* (*)(const QOffscreenSurface*);
    using QOffscreenSurface_Metacast_Callback = void* (*)(QOffscreenSurface*, const char*);
    using QOffscreenSurface_Metacall_Callback = int (*)(QOffscreenSurface*, int, int, void**);
    using QOffscreenSurface_SurfaceType_Callback = int (*)(const QOffscreenSurface*);
    using QOffscreenSurface_Format_Callback = QSurfaceFormat* (*)(const QOffscreenSurface*);
    using QOffscreenSurface_Size_Callback = QSize* (*)(const QOffscreenSurface*);
    using QOffscreenSurface_Event_Callback = bool (*)(QOffscreenSurface*, QEvent*);
    using QOffscreenSurface_EventFilter_Callback = bool (*)(QOffscreenSurface*, QObject*, QEvent*);
    using QOffscreenSurface_TimerEvent_Callback = void (*)(QOffscreenSurface*, QTimerEvent*);
    using QOffscreenSurface_ChildEvent_Callback = void (*)(QOffscreenSurface*, QChildEvent*);
    using QOffscreenSurface_CustomEvent_Callback = void (*)(QOffscreenSurface*, QEvent*);
    using QOffscreenSurface_ConnectNotify_Callback = void (*)(QOffscreenSurface*, QMetaMethod*);
    using QOffscreenSurface_DisconnectNotify_Callback = void (*)(QOffscreenSurface*, QMetaMethod*);
    using QOffscreenSurface::isSignalConnected;
    using QOffscreenSurface::receivers;
    using QOffscreenSurface::resolveInterface;
    using QOffscreenSurface::sender;
    using QOffscreenSurface::senderSignalIndex;

    // Instance callback storage
    QOffscreenSurface_MetaObject_Callback qoffscreensurface_metaobject_callback = nullptr;
    QOffscreenSurface_Metacast_Callback qoffscreensurface_metacast_callback = nullptr;
    QOffscreenSurface_Metacall_Callback qoffscreensurface_metacall_callback = nullptr;
    QOffscreenSurface_SurfaceType_Callback qoffscreensurface_surfacetype_callback = nullptr;
    QOffscreenSurface_Format_Callback qoffscreensurface_format_callback = nullptr;
    QOffscreenSurface_Size_Callback qoffscreensurface_size_callback = nullptr;
    QOffscreenSurface_Event_Callback qoffscreensurface_event_callback = nullptr;
    QOffscreenSurface_EventFilter_Callback qoffscreensurface_eventfilter_callback = nullptr;
    QOffscreenSurface_TimerEvent_Callback qoffscreensurface_timerevent_callback = nullptr;
    QOffscreenSurface_ChildEvent_Callback qoffscreensurface_childevent_callback = nullptr;
    QOffscreenSurface_CustomEvent_Callback qoffscreensurface_customevent_callback = nullptr;
    QOffscreenSurface_ConnectNotify_Callback qoffscreensurface_connectnotify_callback = nullptr;
    QOffscreenSurface_DisconnectNotify_Callback qoffscreensurface_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QOffscreenSurface {
        using QOffscreenSurface::childEvent;
        using QOffscreenSurface::connectNotify;
        using QOffscreenSurface::customEvent;
        using QOffscreenSurface::disconnectNotify;
        using QOffscreenSurface::timerEvent;
    };

    VirtualQOffscreenSurface() : QOffscreenSurface() {};
    VirtualQOffscreenSurface(QScreen* screen) : QOffscreenSurface(screen) {};
    VirtualQOffscreenSurface(QScreen* screen, QObject* parent) : QOffscreenSurface(screen, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qoffscreensurface_metaobject_callback) {
            QMetaObject* callback_ret = qoffscreensurface_metaobject_callback(this);
            return callback_ret;
        }
        return QOffscreenSurface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qoffscreensurface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qoffscreensurface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QOffscreenSurface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qoffscreensurface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qoffscreensurface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QOffscreenSurface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qoffscreensurface_surfacetype_callback) {
            int callback_ret = qoffscreensurface_surfacetype_callback(this);
            return static_cast<QSurface::SurfaceType>(callback_ret);
        }
        return QOffscreenSurface::surfaceType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qoffscreensurface_format_callback) {
            QSurfaceFormat* callback_ret = qoffscreensurface_format_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QOffscreenSurface::format();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qoffscreensurface_size_callback) {
            QSize* callback_ret = qoffscreensurface_size_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QOffscreenSurface::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qoffscreensurface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qoffscreensurface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QOffscreenSurface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qoffscreensurface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qoffscreensurface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QOffscreenSurface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qoffscreensurface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qoffscreensurface_timerevent_callback(this, cbval1);
            return;
        }
        QOffscreenSurface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qoffscreensurface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qoffscreensurface_childevent_callback(this, cbval1);
            return;
        }
        QOffscreenSurface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qoffscreensurface_customevent_callback) {
            QEvent* cbval1 = event;
            qoffscreensurface_customevent_callback(this, cbval1);
            return;
        }
        QOffscreenSurface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qoffscreensurface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qoffscreensurface_connectnotify_callback(this, cbval1);
            return;
        }
        QOffscreenSurface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qoffscreensurface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qoffscreensurface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QOffscreenSurface::disconnectNotify(signal);
    }

    // Friend functions
    friend void QOffscreenSurface_SuperTimerEvent(QOffscreenSurface* self, QTimerEvent* event);
    friend void QOffscreenSurface_SuperChildEvent(QOffscreenSurface* self, QChildEvent* event);
    friend void QOffscreenSurface_SuperCustomEvent(QOffscreenSurface* self, QEvent* event);
    friend void QOffscreenSurface_SuperConnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
    friend void QOffscreenSurface_SuperDisconnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
};

#endif
