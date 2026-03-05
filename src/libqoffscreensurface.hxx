#pragma once
#ifndef SRCC_LIBVIRTUALQOFFSCREENSURFACE_H
#define SRCC_LIBVIRTUALQOFFSCREENSURFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QOffscreenSurface so that we can call protected methods
class VirtualQOffscreenSurface final : public QOffscreenSurface {

  public:
    // Virtual class boolean flag
    bool isVirtualQOffscreenSurface = true;

    // Virtual class public types (including callbacks)
    using QOffscreenSurface_MetaObject_Callback = QMetaObject* (*)();
    using QOffscreenSurface_Metacast_Callback = void* (*)(QOffscreenSurface*, const char*);
    using QOffscreenSurface_Metacall_Callback = int (*)(QOffscreenSurface*, int, int, void**);
    using QOffscreenSurface_SurfaceType_Callback = int (*)();
    using QOffscreenSurface_Format_Callback = QSurfaceFormat* (*)();
    using QOffscreenSurface_Size_Callback = QSize* (*)();
    using QOffscreenSurface_Event_Callback = bool (*)(QOffscreenSurface*, QEvent*);
    using QOffscreenSurface_EventFilter_Callback = bool (*)(QOffscreenSurface*, QObject*, QEvent*);
    using QOffscreenSurface_TimerEvent_Callback = void (*)(QOffscreenSurface*, QTimerEvent*);
    using QOffscreenSurface_ChildEvent_Callback = void (*)(QOffscreenSurface*, QChildEvent*);
    using QOffscreenSurface_CustomEvent_Callback = void (*)(QOffscreenSurface*, QEvent*);
    using QOffscreenSurface_ConnectNotify_Callback = void (*)(QOffscreenSurface*, QMetaMethod*);
    using QOffscreenSurface_DisconnectNotify_Callback = void (*)(QOffscreenSurface*, QMetaMethod*);
    using QOffscreenSurface_ResolveInterface_Callback = void* (*)(const QOffscreenSurface*, const char*, int);
    using QOffscreenSurface_Sender_Callback = QObject* (*)();
    using QOffscreenSurface_SenderSignalIndex_Callback = int (*)();
    using QOffscreenSurface_Receivers_Callback = int (*)(const QOffscreenSurface*, const char*);
    using QOffscreenSurface_IsSignalConnected_Callback = bool (*)(const QOffscreenSurface*, QMetaMethod*);

  protected:
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
    QOffscreenSurface_ResolveInterface_Callback qoffscreensurface_resolveinterface_callback = nullptr;
    QOffscreenSurface_Sender_Callback qoffscreensurface_sender_callback = nullptr;
    QOffscreenSurface_SenderSignalIndex_Callback qoffscreensurface_sendersignalindex_callback = nullptr;
    QOffscreenSurface_Receivers_Callback qoffscreensurface_receivers_callback = nullptr;
    QOffscreenSurface_IsSignalConnected_Callback qoffscreensurface_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qoffscreensurface_metaobject_isbase = false;
    mutable bool qoffscreensurface_metacast_isbase = false;
    mutable bool qoffscreensurface_metacall_isbase = false;
    mutable bool qoffscreensurface_surfacetype_isbase = false;
    mutable bool qoffscreensurface_format_isbase = false;
    mutable bool qoffscreensurface_size_isbase = false;
    mutable bool qoffscreensurface_event_isbase = false;
    mutable bool qoffscreensurface_eventfilter_isbase = false;
    mutable bool qoffscreensurface_timerevent_isbase = false;
    mutable bool qoffscreensurface_childevent_isbase = false;
    mutable bool qoffscreensurface_customevent_isbase = false;
    mutable bool qoffscreensurface_connectnotify_isbase = false;
    mutable bool qoffscreensurface_disconnectnotify_isbase = false;
    mutable bool qoffscreensurface_resolveinterface_isbase = false;
    mutable bool qoffscreensurface_sender_isbase = false;
    mutable bool qoffscreensurface_sendersignalindex_isbase = false;
    mutable bool qoffscreensurface_receivers_isbase = false;
    mutable bool qoffscreensurface_issignalconnected_isbase = false;

  public:
    VirtualQOffscreenSurface() : QOffscreenSurface() {};
    VirtualQOffscreenSurface(QScreen* screen) : QOffscreenSurface(screen) {};
    VirtualQOffscreenSurface(QScreen* screen, QObject* parent) : QOffscreenSurface(screen, parent) {};

    // Callback setters
    inline void setQOffscreenSurface_MetaObject_Callback(QOffscreenSurface_MetaObject_Callback cb) { qoffscreensurface_metaobject_callback = cb; }
    inline void setQOffscreenSurface_Metacast_Callback(QOffscreenSurface_Metacast_Callback cb) { qoffscreensurface_metacast_callback = cb; }
    inline void setQOffscreenSurface_Metacall_Callback(QOffscreenSurface_Metacall_Callback cb) { qoffscreensurface_metacall_callback = cb; }
    inline void setQOffscreenSurface_SurfaceType_Callback(QOffscreenSurface_SurfaceType_Callback cb) { qoffscreensurface_surfacetype_callback = cb; }
    inline void setQOffscreenSurface_Format_Callback(QOffscreenSurface_Format_Callback cb) { qoffscreensurface_format_callback = cb; }
    inline void setQOffscreenSurface_Size_Callback(QOffscreenSurface_Size_Callback cb) { qoffscreensurface_size_callback = cb; }
    inline void setQOffscreenSurface_Event_Callback(QOffscreenSurface_Event_Callback cb) { qoffscreensurface_event_callback = cb; }
    inline void setQOffscreenSurface_EventFilter_Callback(QOffscreenSurface_EventFilter_Callback cb) { qoffscreensurface_eventfilter_callback = cb; }
    inline void setQOffscreenSurface_TimerEvent_Callback(QOffscreenSurface_TimerEvent_Callback cb) { qoffscreensurface_timerevent_callback = cb; }
    inline void setQOffscreenSurface_ChildEvent_Callback(QOffscreenSurface_ChildEvent_Callback cb) { qoffscreensurface_childevent_callback = cb; }
    inline void setQOffscreenSurface_CustomEvent_Callback(QOffscreenSurface_CustomEvent_Callback cb) { qoffscreensurface_customevent_callback = cb; }
    inline void setQOffscreenSurface_ConnectNotify_Callback(QOffscreenSurface_ConnectNotify_Callback cb) { qoffscreensurface_connectnotify_callback = cb; }
    inline void setQOffscreenSurface_DisconnectNotify_Callback(QOffscreenSurface_DisconnectNotify_Callback cb) { qoffscreensurface_disconnectnotify_callback = cb; }
    inline void setQOffscreenSurface_ResolveInterface_Callback(QOffscreenSurface_ResolveInterface_Callback cb) { qoffscreensurface_resolveinterface_callback = cb; }
    inline void setQOffscreenSurface_Sender_Callback(QOffscreenSurface_Sender_Callback cb) { qoffscreensurface_sender_callback = cb; }
    inline void setQOffscreenSurface_SenderSignalIndex_Callback(QOffscreenSurface_SenderSignalIndex_Callback cb) { qoffscreensurface_sendersignalindex_callback = cb; }
    inline void setQOffscreenSurface_Receivers_Callback(QOffscreenSurface_Receivers_Callback cb) { qoffscreensurface_receivers_callback = cb; }
    inline void setQOffscreenSurface_IsSignalConnected_Callback(QOffscreenSurface_IsSignalConnected_Callback cb) { qoffscreensurface_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQOffscreenSurface_MetaObject_IsBase(bool value) const { qoffscreensurface_metaobject_isbase = value; }
    inline void setQOffscreenSurface_Metacast_IsBase(bool value) const { qoffscreensurface_metacast_isbase = value; }
    inline void setQOffscreenSurface_Metacall_IsBase(bool value) const { qoffscreensurface_metacall_isbase = value; }
    inline void setQOffscreenSurface_SurfaceType_IsBase(bool value) const { qoffscreensurface_surfacetype_isbase = value; }
    inline void setQOffscreenSurface_Format_IsBase(bool value) const { qoffscreensurface_format_isbase = value; }
    inline void setQOffscreenSurface_Size_IsBase(bool value) const { qoffscreensurface_size_isbase = value; }
    inline void setQOffscreenSurface_Event_IsBase(bool value) const { qoffscreensurface_event_isbase = value; }
    inline void setQOffscreenSurface_EventFilter_IsBase(bool value) const { qoffscreensurface_eventfilter_isbase = value; }
    inline void setQOffscreenSurface_TimerEvent_IsBase(bool value) const { qoffscreensurface_timerevent_isbase = value; }
    inline void setQOffscreenSurface_ChildEvent_IsBase(bool value) const { qoffscreensurface_childevent_isbase = value; }
    inline void setQOffscreenSurface_CustomEvent_IsBase(bool value) const { qoffscreensurface_customevent_isbase = value; }
    inline void setQOffscreenSurface_ConnectNotify_IsBase(bool value) const { qoffscreensurface_connectnotify_isbase = value; }
    inline void setQOffscreenSurface_DisconnectNotify_IsBase(bool value) const { qoffscreensurface_disconnectnotify_isbase = value; }
    inline void setQOffscreenSurface_ResolveInterface_IsBase(bool value) const { qoffscreensurface_resolveinterface_isbase = value; }
    inline void setQOffscreenSurface_Sender_IsBase(bool value) const { qoffscreensurface_sender_isbase = value; }
    inline void setQOffscreenSurface_SenderSignalIndex_IsBase(bool value) const { qoffscreensurface_sendersignalindex_isbase = value; }
    inline void setQOffscreenSurface_Receivers_IsBase(bool value) const { qoffscreensurface_receivers_isbase = value; }
    inline void setQOffscreenSurface_IsSignalConnected_IsBase(bool value) const { qoffscreensurface_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qoffscreensurface_metaobject_isbase) {
            qoffscreensurface_metaobject_isbase = false;
            return QOffscreenSurface::metaObject();
        }
        auto metaobject_cb = qoffscreensurface_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QOffscreenSurface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qoffscreensurface_metacast_isbase) {
            qoffscreensurface_metacast_isbase = false;
            return QOffscreenSurface::qt_metacast(param1);
        }
        auto metacast_cb = qoffscreensurface_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QOffscreenSurface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qoffscreensurface_metacall_isbase) {
            qoffscreensurface_metacall_isbase = false;
            return QOffscreenSurface::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qoffscreensurface_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QOffscreenSurface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qoffscreensurface_surfacetype_isbase) {
            qoffscreensurface_surfacetype_isbase = false;
            return QOffscreenSurface::surfaceType();
        }
        auto surfacetype_cb = qoffscreensurface_surfacetype_callback;
        if (surfacetype_cb) {
            int callback_ret = surfacetype_cb();
            return static_cast<QSurface::SurfaceType>(callback_ret);
        }
        return QOffscreenSurface::surfaceType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qoffscreensurface_format_isbase) {
            qoffscreensurface_format_isbase = false;
            return QOffscreenSurface::format();
        }
        auto format_cb = qoffscreensurface_format_callback;
        if (format_cb) {
            QSurfaceFormat* callback_ret = format_cb();
            return *callback_ret;
        }
        return QOffscreenSurface::format();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qoffscreensurface_size_isbase) {
            qoffscreensurface_size_isbase = false;
            return QOffscreenSurface::size();
        }
        auto size_cb = qoffscreensurface_size_callback;
        if (size_cb) {
            QSize* callback_ret = size_cb();
            return *callback_ret;
        }
        return QOffscreenSurface::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qoffscreensurface_event_isbase) {
            qoffscreensurface_event_isbase = false;
            return QOffscreenSurface::event(event);
        }
        auto event_cb = qoffscreensurface_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QOffscreenSurface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qoffscreensurface_eventfilter_isbase) {
            qoffscreensurface_eventfilter_isbase = false;
            return QOffscreenSurface::eventFilter(watched, event);
        }
        auto eventfilter_cb = qoffscreensurface_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QOffscreenSurface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qoffscreensurface_timerevent_isbase) {
            qoffscreensurface_timerevent_isbase = false;
            QOffscreenSurface::timerEvent(event);
            return;
        }
        auto timerevent_cb = qoffscreensurface_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QOffscreenSurface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qoffscreensurface_childevent_isbase) {
            qoffscreensurface_childevent_isbase = false;
            QOffscreenSurface::childEvent(event);
            return;
        }
        auto childevent_cb = qoffscreensurface_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QOffscreenSurface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qoffscreensurface_customevent_isbase) {
            qoffscreensurface_customevent_isbase = false;
            QOffscreenSurface::customEvent(event);
            return;
        }
        auto customevent_cb = qoffscreensurface_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QOffscreenSurface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qoffscreensurface_connectnotify_isbase) {
            qoffscreensurface_connectnotify_isbase = false;
            QOffscreenSurface::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qoffscreensurface_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QOffscreenSurface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qoffscreensurface_disconnectnotify_isbase) {
            qoffscreensurface_disconnectnotify_isbase = false;
            QOffscreenSurface::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qoffscreensurface_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QOffscreenSurface::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qoffscreensurface_resolveinterface_isbase) {
            qoffscreensurface_resolveinterface_isbase = false;
            return QOffscreenSurface::resolveInterface(name, revision);
        }
        auto resolveinterface_cb = qoffscreensurface_resolveinterface_callback;
        if (resolveinterface_cb) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;

            void* callback_ret = resolveinterface_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QOffscreenSurface::resolveInterface(name, revision);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qoffscreensurface_sender_isbase) {
            qoffscreensurface_sender_isbase = false;
            return QOffscreenSurface::sender();
        }
        auto sender_cb = qoffscreensurface_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QOffscreenSurface::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qoffscreensurface_sendersignalindex_isbase) {
            qoffscreensurface_sendersignalindex_isbase = false;
            return QOffscreenSurface::senderSignalIndex();
        }
        auto sendersignalindex_cb = qoffscreensurface_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QOffscreenSurface::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qoffscreensurface_receivers_isbase) {
            qoffscreensurface_receivers_isbase = false;
            return QOffscreenSurface::receivers(signal);
        }
        auto receivers_cb = qoffscreensurface_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QOffscreenSurface::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qoffscreensurface_issignalconnected_isbase) {
            qoffscreensurface_issignalconnected_isbase = false;
            return QOffscreenSurface::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qoffscreensurface_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QOffscreenSurface::isSignalConnected(signal);
    }

    // Friend functions
    friend void QOffscreenSurface_TimerEvent(QOffscreenSurface* self, QTimerEvent* event);
    friend void QOffscreenSurface_SuperTimerEvent(QOffscreenSurface* self, QTimerEvent* event);
    friend void QOffscreenSurface_ChildEvent(QOffscreenSurface* self, QChildEvent* event);
    friend void QOffscreenSurface_SuperChildEvent(QOffscreenSurface* self, QChildEvent* event);
    friend void QOffscreenSurface_CustomEvent(QOffscreenSurface* self, QEvent* event);
    friend void QOffscreenSurface_SuperCustomEvent(QOffscreenSurface* self, QEvent* event);
    friend void QOffscreenSurface_ConnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
    friend void QOffscreenSurface_SuperConnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
    friend void QOffscreenSurface_DisconnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
    friend void QOffscreenSurface_SuperDisconnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
    friend void* QOffscreenSurface_ResolveInterface(const QOffscreenSurface* self, const char* name, int revision);
    friend void* QOffscreenSurface_SuperResolveInterface(const QOffscreenSurface* self, const char* name, int revision);
    friend QObject* QOffscreenSurface_Sender(const QOffscreenSurface* self);
    friend QObject* QOffscreenSurface_SuperSender(const QOffscreenSurface* self);
    friend int QOffscreenSurface_SenderSignalIndex(const QOffscreenSurface* self);
    friend int QOffscreenSurface_SuperSenderSignalIndex(const QOffscreenSurface* self);
    friend int QOffscreenSurface_Receivers(const QOffscreenSurface* self, const char* signal);
    friend int QOffscreenSurface_SuperReceivers(const QOffscreenSurface* self, const char* signal);
    friend bool QOffscreenSurface_IsSignalConnected(const QOffscreenSurface* self, const QMetaMethod* signal);
    friend bool QOffscreenSurface_SuperIsSignalConnected(const QOffscreenSurface* self, const QMetaMethod* signal);
};

#endif
