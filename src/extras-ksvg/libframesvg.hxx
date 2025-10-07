#pragma once
#ifndef SRC_EXTRAS_KSVGC_LIBVIRTUALFRAMESVG_H
#define SRC_EXTRAS_KSVGC_LIBVIRTUALFRAMESVG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSvg::FrameSvg so that we can call protected methods
class VirtualKSvgFrameSvg final : public KSvg::FrameSvg {

  public:
    // Virtual class boolean flag
    bool isVirtualKSvgFrameSvg = true;

    // Virtual class public types (including callbacks)
    using KSvg__FrameSvg_Metacall_Callback = int (*)(KSvg__FrameSvg*, int, int, void**);
    using KSvg__FrameSvg_SetImagePath_Callback = void (*)(KSvg__FrameSvg*, libqt_string);
    using KSvg__FrameSvg_Event_Callback = bool (*)(KSvg__FrameSvg*, QEvent*);
    using KSvg__FrameSvg_TimerEvent_Callback = void (*)(KSvg__FrameSvg*, QTimerEvent*);
    using KSvg__FrameSvg_ChildEvent_Callback = void (*)(KSvg__FrameSvg*, QChildEvent*);
    using KSvg__FrameSvg_CustomEvent_Callback = void (*)(KSvg__FrameSvg*, QEvent*);
    using KSvg__FrameSvg_ConnectNotify_Callback = void (*)(KSvg__FrameSvg*, QMetaMethod*);
    using KSvg__FrameSvg_DisconnectNotify_Callback = void (*)(KSvg__FrameSvg*, QMetaMethod*);
    using KSvg__FrameSvg_Sender_Callback = QObject* (*)();
    using KSvg__FrameSvg_SenderSignalIndex_Callback = int (*)();
    using KSvg__FrameSvg_Receivers_Callback = int (*)(const KSvg__FrameSvg*, const char*);
    using KSvg__FrameSvg_IsSignalConnected_Callback = bool (*)(const KSvg__FrameSvg*, QMetaMethod*);

  protected:
    // Instance callback storage
    KSvg__FrameSvg_Metacall_Callback ksvg__framesvg_metacall_callback = nullptr;
    KSvg__FrameSvg_SetImagePath_Callback ksvg__framesvg_setimagepath_callback = nullptr;
    KSvg__FrameSvg_Event_Callback ksvg__framesvg_event_callback = nullptr;
    KSvg__FrameSvg_TimerEvent_Callback ksvg__framesvg_timerevent_callback = nullptr;
    KSvg__FrameSvg_ChildEvent_Callback ksvg__framesvg_childevent_callback = nullptr;
    KSvg__FrameSvg_CustomEvent_Callback ksvg__framesvg_customevent_callback = nullptr;
    KSvg__FrameSvg_ConnectNotify_Callback ksvg__framesvg_connectnotify_callback = nullptr;
    KSvg__FrameSvg_DisconnectNotify_Callback ksvg__framesvg_disconnectnotify_callback = nullptr;
    KSvg__FrameSvg_Sender_Callback ksvg__framesvg_sender_callback = nullptr;
    KSvg__FrameSvg_SenderSignalIndex_Callback ksvg__framesvg_sendersignalindex_callback = nullptr;
    KSvg__FrameSvg_Receivers_Callback ksvg__framesvg_receivers_callback = nullptr;
    KSvg__FrameSvg_IsSignalConnected_Callback ksvg__framesvg_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ksvg__framesvg_metacall_isbase = false;
    mutable bool ksvg__framesvg_setimagepath_isbase = false;
    mutable bool ksvg__framesvg_event_isbase = false;
    mutable bool ksvg__framesvg_timerevent_isbase = false;
    mutable bool ksvg__framesvg_childevent_isbase = false;
    mutable bool ksvg__framesvg_customevent_isbase = false;
    mutable bool ksvg__framesvg_connectnotify_isbase = false;
    mutable bool ksvg__framesvg_disconnectnotify_isbase = false;
    mutable bool ksvg__framesvg_sender_isbase = false;
    mutable bool ksvg__framesvg_sendersignalindex_isbase = false;
    mutable bool ksvg__framesvg_receivers_isbase = false;
    mutable bool ksvg__framesvg_issignalconnected_isbase = false;

  public:
    VirtualKSvgFrameSvg() : KSvg::FrameSvg() {};
    VirtualKSvgFrameSvg(QObject* parent) : KSvg::FrameSvg(parent) {};

    ~VirtualKSvgFrameSvg() {
        ksvg__framesvg_metacall_callback = nullptr;
        ksvg__framesvg_setimagepath_callback = nullptr;
        ksvg__framesvg_event_callback = nullptr;
        ksvg__framesvg_timerevent_callback = nullptr;
        ksvg__framesvg_childevent_callback = nullptr;
        ksvg__framesvg_customevent_callback = nullptr;
        ksvg__framesvg_connectnotify_callback = nullptr;
        ksvg__framesvg_disconnectnotify_callback = nullptr;
        ksvg__framesvg_sender_callback = nullptr;
        ksvg__framesvg_sendersignalindex_callback = nullptr;
        ksvg__framesvg_receivers_callback = nullptr;
        ksvg__framesvg_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKSvg__FrameSvg_Metacall_Callback(KSvg__FrameSvg_Metacall_Callback cb) { ksvg__framesvg_metacall_callback = cb; }
    inline void setKSvg__FrameSvg_SetImagePath_Callback(KSvg__FrameSvg_SetImagePath_Callback cb) { ksvg__framesvg_setimagepath_callback = cb; }
    inline void setKSvg__FrameSvg_Event_Callback(KSvg__FrameSvg_Event_Callback cb) { ksvg__framesvg_event_callback = cb; }
    inline void setKSvg__FrameSvg_TimerEvent_Callback(KSvg__FrameSvg_TimerEvent_Callback cb) { ksvg__framesvg_timerevent_callback = cb; }
    inline void setKSvg__FrameSvg_ChildEvent_Callback(KSvg__FrameSvg_ChildEvent_Callback cb) { ksvg__framesvg_childevent_callback = cb; }
    inline void setKSvg__FrameSvg_CustomEvent_Callback(KSvg__FrameSvg_CustomEvent_Callback cb) { ksvg__framesvg_customevent_callback = cb; }
    inline void setKSvg__FrameSvg_ConnectNotify_Callback(KSvg__FrameSvg_ConnectNotify_Callback cb) { ksvg__framesvg_connectnotify_callback = cb; }
    inline void setKSvg__FrameSvg_DisconnectNotify_Callback(KSvg__FrameSvg_DisconnectNotify_Callback cb) { ksvg__framesvg_disconnectnotify_callback = cb; }
    inline void setKSvg__FrameSvg_Sender_Callback(KSvg__FrameSvg_Sender_Callback cb) { ksvg__framesvg_sender_callback = cb; }
    inline void setKSvg__FrameSvg_SenderSignalIndex_Callback(KSvg__FrameSvg_SenderSignalIndex_Callback cb) { ksvg__framesvg_sendersignalindex_callback = cb; }
    inline void setKSvg__FrameSvg_Receivers_Callback(KSvg__FrameSvg_Receivers_Callback cb) { ksvg__framesvg_receivers_callback = cb; }
    inline void setKSvg__FrameSvg_IsSignalConnected_Callback(KSvg__FrameSvg_IsSignalConnected_Callback cb) { ksvg__framesvg_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKSvg__FrameSvg_Metacall_IsBase(bool value) const { ksvg__framesvg_metacall_isbase = value; }
    inline void setKSvg__FrameSvg_SetImagePath_IsBase(bool value) const { ksvg__framesvg_setimagepath_isbase = value; }
    inline void setKSvg__FrameSvg_Event_IsBase(bool value) const { ksvg__framesvg_event_isbase = value; }
    inline void setKSvg__FrameSvg_TimerEvent_IsBase(bool value) const { ksvg__framesvg_timerevent_isbase = value; }
    inline void setKSvg__FrameSvg_ChildEvent_IsBase(bool value) const { ksvg__framesvg_childevent_isbase = value; }
    inline void setKSvg__FrameSvg_CustomEvent_IsBase(bool value) const { ksvg__framesvg_customevent_isbase = value; }
    inline void setKSvg__FrameSvg_ConnectNotify_IsBase(bool value) const { ksvg__framesvg_connectnotify_isbase = value; }
    inline void setKSvg__FrameSvg_DisconnectNotify_IsBase(bool value) const { ksvg__framesvg_disconnectnotify_isbase = value; }
    inline void setKSvg__FrameSvg_Sender_IsBase(bool value) const { ksvg__framesvg_sender_isbase = value; }
    inline void setKSvg__FrameSvg_SenderSignalIndex_IsBase(bool value) const { ksvg__framesvg_sendersignalindex_isbase = value; }
    inline void setKSvg__FrameSvg_Receivers_IsBase(bool value) const { ksvg__framesvg_receivers_isbase = value; }
    inline void setKSvg__FrameSvg_IsSignalConnected_IsBase(bool value) const { ksvg__framesvg_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksvg__framesvg_metacall_isbase) {
            ksvg__framesvg_metacall_isbase = false;
            return KSvg__FrameSvg::qt_metacall(param1, param2, param3);
        } else if (ksvg__framesvg_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ksvg__framesvg_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KSvg__FrameSvg::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setImagePath(const QString& path) override {
        if (ksvg__framesvg_setimagepath_isbase) {
            ksvg__framesvg_setimagepath_isbase = false;
            KSvg__FrameSvg::setImagePath(path);
        } else if (ksvg__framesvg_setimagepath_callback != nullptr) {
            const QString path_ret = path;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray path_b = path_ret.toUtf8();
            libqt_string path_str;
            path_str.len = path_b.length();
            path_str.data = static_cast<const char*>(malloc(path_str.len + 1));
            memcpy((void*)path_str.data, path_b.data(), path_str.len);
            ((char*)path_str.data)[path_str.len] = '\0';
            libqt_string cbval1 = path_str;

            ksvg__framesvg_setimagepath_callback(this, cbval1);
        } else {
            KSvg__FrameSvg::setImagePath(path);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksvg__framesvg_event_isbase) {
            ksvg__framesvg_event_isbase = false;
            return KSvg__FrameSvg::event(event);
        } else if (ksvg__framesvg_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ksvg__framesvg_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSvg__FrameSvg::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksvg__framesvg_timerevent_isbase) {
            ksvg__framesvg_timerevent_isbase = false;
            KSvg__FrameSvg::timerEvent(event);
        } else if (ksvg__framesvg_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ksvg__framesvg_timerevent_callback(this, cbval1);
        } else {
            KSvg__FrameSvg::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksvg__framesvg_childevent_isbase) {
            ksvg__framesvg_childevent_isbase = false;
            KSvg__FrameSvg::childEvent(event);
        } else if (ksvg__framesvg_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ksvg__framesvg_childevent_callback(this, cbval1);
        } else {
            KSvg__FrameSvg::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksvg__framesvg_customevent_isbase) {
            ksvg__framesvg_customevent_isbase = false;
            KSvg__FrameSvg::customEvent(event);
        } else if (ksvg__framesvg_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ksvg__framesvg_customevent_callback(this, cbval1);
        } else {
            KSvg__FrameSvg::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksvg__framesvg_connectnotify_isbase) {
            ksvg__framesvg_connectnotify_isbase = false;
            KSvg__FrameSvg::connectNotify(signal);
        } else if (ksvg__framesvg_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksvg__framesvg_connectnotify_callback(this, cbval1);
        } else {
            KSvg__FrameSvg::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksvg__framesvg_disconnectnotify_isbase) {
            ksvg__framesvg_disconnectnotify_isbase = false;
            KSvg__FrameSvg::disconnectNotify(signal);
        } else if (ksvg__framesvg_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksvg__framesvg_disconnectnotify_callback(this, cbval1);
        } else {
            KSvg__FrameSvg::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksvg__framesvg_sender_isbase) {
            ksvg__framesvg_sender_isbase = false;
            return KSvg__FrameSvg::sender();
        } else if (ksvg__framesvg_sender_callback != nullptr) {
            QObject* callback_ret = ksvg__framesvg_sender_callback();
            return callback_ret;
        } else {
            return KSvg__FrameSvg::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksvg__framesvg_sendersignalindex_isbase) {
            ksvg__framesvg_sendersignalindex_isbase = false;
            return KSvg__FrameSvg::senderSignalIndex();
        } else if (ksvg__framesvg_sendersignalindex_callback != nullptr) {
            int callback_ret = ksvg__framesvg_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSvg__FrameSvg::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksvg__framesvg_receivers_isbase) {
            ksvg__framesvg_receivers_isbase = false;
            return KSvg__FrameSvg::receivers(signal);
        } else if (ksvg__framesvg_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ksvg__framesvg_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSvg__FrameSvg::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksvg__framesvg_issignalconnected_isbase) {
            ksvg__framesvg_issignalconnected_isbase = false;
            return KSvg__FrameSvg::isSignalConnected(signal);
        } else if (ksvg__framesvg_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ksvg__framesvg_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSvg__FrameSvg::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KSvg__FrameSvg_TimerEvent(KSvg::FrameSvg* self, QTimerEvent* event);
    friend void KSvg__FrameSvg_QBaseTimerEvent(KSvg::FrameSvg* self, QTimerEvent* event);
    friend void KSvg__FrameSvg_ChildEvent(KSvg::FrameSvg* self, QChildEvent* event);
    friend void KSvg__FrameSvg_QBaseChildEvent(KSvg::FrameSvg* self, QChildEvent* event);
    friend void KSvg__FrameSvg_CustomEvent(KSvg::FrameSvg* self, QEvent* event);
    friend void KSvg__FrameSvg_QBaseCustomEvent(KSvg::FrameSvg* self, QEvent* event);
    friend void KSvg__FrameSvg_ConnectNotify(KSvg::FrameSvg* self, const QMetaMethod* signal);
    friend void KSvg__FrameSvg_QBaseConnectNotify(KSvg::FrameSvg* self, const QMetaMethod* signal);
    friend void KSvg__FrameSvg_DisconnectNotify(KSvg::FrameSvg* self, const QMetaMethod* signal);
    friend void KSvg__FrameSvg_QBaseDisconnectNotify(KSvg::FrameSvg* self, const QMetaMethod* signal);
    friend QObject* KSvg__FrameSvg_Sender(const KSvg::FrameSvg* self);
    friend QObject* KSvg__FrameSvg_QBaseSender(const KSvg::FrameSvg* self);
    friend int KSvg__FrameSvg_SenderSignalIndex(const KSvg::FrameSvg* self);
    friend int KSvg__FrameSvg_QBaseSenderSignalIndex(const KSvg::FrameSvg* self);
    friend int KSvg__FrameSvg_Receivers(const KSvg::FrameSvg* self, const char* signal);
    friend int KSvg__FrameSvg_QBaseReceivers(const KSvg::FrameSvg* self, const char* signal);
    friend bool KSvg__FrameSvg_IsSignalConnected(const KSvg::FrameSvg* self, const QMetaMethod* signal);
    friend bool KSvg__FrameSvg_QBaseIsSignalConnected(const KSvg::FrameSvg* self, const QMetaMethod* signal);
};

#endif
