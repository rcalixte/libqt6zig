#pragma once
#ifndef SRCC_LIBVIRTUALQOFFSCREENSURFACE_H
#define SRCC_LIBVIRTUALQOFFSCREENSURFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QOffscreenSurface so that we can call protected methods
class VirtualQOffscreenSurface final : public QOffscreenSurface {

  public:
    // Virtual class boolean flag
    bool isVirtualQOffscreenSurface = true;

    // Virtual class public types (including callbacks)
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

    ~VirtualQOffscreenSurface() {
        qoffscreensurface_metacall_callback = nullptr;
        qoffscreensurface_surfacetype_callback = nullptr;
        qoffscreensurface_format_callback = nullptr;
        qoffscreensurface_size_callback = nullptr;
        qoffscreensurface_event_callback = nullptr;
        qoffscreensurface_eventfilter_callback = nullptr;
        qoffscreensurface_timerevent_callback = nullptr;
        qoffscreensurface_childevent_callback = nullptr;
        qoffscreensurface_customevent_callback = nullptr;
        qoffscreensurface_connectnotify_callback = nullptr;
        qoffscreensurface_disconnectnotify_callback = nullptr;
        qoffscreensurface_resolveinterface_callback = nullptr;
        qoffscreensurface_sender_callback = nullptr;
        qoffscreensurface_sendersignalindex_callback = nullptr;
        qoffscreensurface_receivers_callback = nullptr;
        qoffscreensurface_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qoffscreensurface_metacall_isbase) {
            qoffscreensurface_metacall_isbase = false;
            return QOffscreenSurface::qt_metacall(param1, param2, param3);
        } else if (qoffscreensurface_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qoffscreensurface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QOffscreenSurface::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qoffscreensurface_surfacetype_isbase) {
            qoffscreensurface_surfacetype_isbase = false;
            return QOffscreenSurface::surfaceType();
        } else if (qoffscreensurface_surfacetype_callback != nullptr) {
            int callback_ret = qoffscreensurface_surfacetype_callback();
            return static_cast<QSurface::SurfaceType>(callback_ret);
        } else {
            return QOffscreenSurface::surfaceType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qoffscreensurface_format_isbase) {
            qoffscreensurface_format_isbase = false;
            return QOffscreenSurface::format();
        } else if (qoffscreensurface_format_callback != nullptr) {
            QSurfaceFormat* callback_ret = qoffscreensurface_format_callback();
            return *callback_ret;
        } else {
            return QOffscreenSurface::format();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qoffscreensurface_size_isbase) {
            qoffscreensurface_size_isbase = false;
            return QOffscreenSurface::size();
        } else if (qoffscreensurface_size_callback != nullptr) {
            QSize* callback_ret = qoffscreensurface_size_callback();
            return *callback_ret;
        } else {
            return QOffscreenSurface::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qoffscreensurface_event_isbase) {
            qoffscreensurface_event_isbase = false;
            return QOffscreenSurface::event(event);
        } else if (qoffscreensurface_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qoffscreensurface_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOffscreenSurface::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qoffscreensurface_eventfilter_isbase) {
            qoffscreensurface_eventfilter_isbase = false;
            return QOffscreenSurface::eventFilter(watched, event);
        } else if (qoffscreensurface_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qoffscreensurface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QOffscreenSurface::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qoffscreensurface_timerevent_isbase) {
            qoffscreensurface_timerevent_isbase = false;
            QOffscreenSurface::timerEvent(event);
        } else if (qoffscreensurface_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qoffscreensurface_timerevent_callback(this, cbval1);
        } else {
            QOffscreenSurface::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qoffscreensurface_childevent_isbase) {
            qoffscreensurface_childevent_isbase = false;
            QOffscreenSurface::childEvent(event);
        } else if (qoffscreensurface_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qoffscreensurface_childevent_callback(this, cbval1);
        } else {
            QOffscreenSurface::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qoffscreensurface_customevent_isbase) {
            qoffscreensurface_customevent_isbase = false;
            QOffscreenSurface::customEvent(event);
        } else if (qoffscreensurface_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qoffscreensurface_customevent_callback(this, cbval1);
        } else {
            QOffscreenSurface::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qoffscreensurface_connectnotify_isbase) {
            qoffscreensurface_connectnotify_isbase = false;
            QOffscreenSurface::connectNotify(signal);
        } else if (qoffscreensurface_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qoffscreensurface_connectnotify_callback(this, cbval1);
        } else {
            QOffscreenSurface::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qoffscreensurface_disconnectnotify_isbase) {
            qoffscreensurface_disconnectnotify_isbase = false;
            QOffscreenSurface::disconnectNotify(signal);
        } else if (qoffscreensurface_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qoffscreensurface_disconnectnotify_callback(this, cbval1);
        } else {
            QOffscreenSurface::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qoffscreensurface_resolveinterface_isbase) {
            qoffscreensurface_resolveinterface_isbase = false;
            return QOffscreenSurface::resolveInterface(name, revision);
        } else if (qoffscreensurface_resolveinterface_callback != nullptr) {
            const char* cbval1 = (const char*)name;
            int cbval2 = revision;

            void* callback_ret = qoffscreensurface_resolveinterface_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QOffscreenSurface::resolveInterface(name, revision);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qoffscreensurface_sender_isbase) {
            qoffscreensurface_sender_isbase = false;
            return QOffscreenSurface::sender();
        } else if (qoffscreensurface_sender_callback != nullptr) {
            QObject* callback_ret = qoffscreensurface_sender_callback();
            return callback_ret;
        } else {
            return QOffscreenSurface::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qoffscreensurface_sendersignalindex_isbase) {
            qoffscreensurface_sendersignalindex_isbase = false;
            return QOffscreenSurface::senderSignalIndex();
        } else if (qoffscreensurface_sendersignalindex_callback != nullptr) {
            int callback_ret = qoffscreensurface_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QOffscreenSurface::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qoffscreensurface_receivers_isbase) {
            qoffscreensurface_receivers_isbase = false;
            return QOffscreenSurface::receivers(signal);
        } else if (qoffscreensurface_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qoffscreensurface_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOffscreenSurface::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qoffscreensurface_issignalconnected_isbase) {
            qoffscreensurface_issignalconnected_isbase = false;
            return QOffscreenSurface::isSignalConnected(signal);
        } else if (qoffscreensurface_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qoffscreensurface_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOffscreenSurface::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QOffscreenSurface_TimerEvent(QOffscreenSurface* self, QTimerEvent* event);
    friend void QOffscreenSurface_QBaseTimerEvent(QOffscreenSurface* self, QTimerEvent* event);
    friend void QOffscreenSurface_ChildEvent(QOffscreenSurface* self, QChildEvent* event);
    friend void QOffscreenSurface_QBaseChildEvent(QOffscreenSurface* self, QChildEvent* event);
    friend void QOffscreenSurface_CustomEvent(QOffscreenSurface* self, QEvent* event);
    friend void QOffscreenSurface_QBaseCustomEvent(QOffscreenSurface* self, QEvent* event);
    friend void QOffscreenSurface_ConnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
    friend void QOffscreenSurface_QBaseConnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
    friend void QOffscreenSurface_DisconnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
    friend void QOffscreenSurface_QBaseDisconnectNotify(QOffscreenSurface* self, const QMetaMethod* signal);
    friend void* QOffscreenSurface_ResolveInterface(const QOffscreenSurface* self, const char* name, int revision);
    friend void* QOffscreenSurface_QBaseResolveInterface(const QOffscreenSurface* self, const char* name, int revision);
    friend QObject* QOffscreenSurface_Sender(const QOffscreenSurface* self);
    friend QObject* QOffscreenSurface_QBaseSender(const QOffscreenSurface* self);
    friend int QOffscreenSurface_SenderSignalIndex(const QOffscreenSurface* self);
    friend int QOffscreenSurface_QBaseSenderSignalIndex(const QOffscreenSurface* self);
    friend int QOffscreenSurface_Receivers(const QOffscreenSurface* self, const char* signal);
    friend int QOffscreenSurface_QBaseReceivers(const QOffscreenSurface* self, const char* signal);
    friend bool QOffscreenSurface_IsSignalConnected(const QOffscreenSurface* self, const QMetaMethod* signal);
    friend bool QOffscreenSurface_QBaseIsSignalConnected(const QOffscreenSurface* self, const QMetaMethod* signal);
};

#endif
