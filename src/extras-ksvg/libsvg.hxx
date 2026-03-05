#pragma once
#ifndef SRC_EXTRAS_KSVGC_LIBVIRTUALSVG_H
#define SRC_EXTRAS_KSVGC_LIBVIRTUALSVG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSvg::Svg so that we can call protected methods
class VirtualKSvgSvg final : public KSvg::Svg {

  public:
    // Virtual class boolean flag
    bool isVirtualKSvgSvg = true;

    // Virtual class public types (including callbacks)
    using KSvg__Svg_MetaObject_Callback = QMetaObject* (*)();
    using KSvg__Svg_Metacast_Callback = void* (*)(KSvg__Svg*, const char*);
    using KSvg__Svg_Metacall_Callback = int (*)(KSvg__Svg*, int, int, void**);
    using KSvg__Svg_SetImagePath_Callback = void (*)(KSvg__Svg*, const char*);
    using KSvg__Svg_Event_Callback = bool (*)(KSvg__Svg*, QEvent*);
    using KSvg__Svg_TimerEvent_Callback = void (*)(KSvg__Svg*, QTimerEvent*);
    using KSvg__Svg_ChildEvent_Callback = void (*)(KSvg__Svg*, QChildEvent*);
    using KSvg__Svg_CustomEvent_Callback = void (*)(KSvg__Svg*, QEvent*);
    using KSvg__Svg_ConnectNotify_Callback = void (*)(KSvg__Svg*, QMetaMethod*);
    using KSvg__Svg_DisconnectNotify_Callback = void (*)(KSvg__Svg*, QMetaMethod*);
    using KSvg__Svg_Sender_Callback = QObject* (*)();
    using KSvg__Svg_SenderSignalIndex_Callback = int (*)();
    using KSvg__Svg_Receivers_Callback = int (*)(const KSvg__Svg*, const char*);
    using KSvg__Svg_IsSignalConnected_Callback = bool (*)(const KSvg__Svg*, QMetaMethod*);

  protected:
    // Instance callback storage
    KSvg__Svg_MetaObject_Callback ksvg__svg_metaobject_callback = nullptr;
    KSvg__Svg_Metacast_Callback ksvg__svg_metacast_callback = nullptr;
    KSvg__Svg_Metacall_Callback ksvg__svg_metacall_callback = nullptr;
    KSvg__Svg_SetImagePath_Callback ksvg__svg_setimagepath_callback = nullptr;
    KSvg__Svg_Event_Callback ksvg__svg_event_callback = nullptr;
    KSvg__Svg_TimerEvent_Callback ksvg__svg_timerevent_callback = nullptr;
    KSvg__Svg_ChildEvent_Callback ksvg__svg_childevent_callback = nullptr;
    KSvg__Svg_CustomEvent_Callback ksvg__svg_customevent_callback = nullptr;
    KSvg__Svg_ConnectNotify_Callback ksvg__svg_connectnotify_callback = nullptr;
    KSvg__Svg_DisconnectNotify_Callback ksvg__svg_disconnectnotify_callback = nullptr;
    KSvg__Svg_Sender_Callback ksvg__svg_sender_callback = nullptr;
    KSvg__Svg_SenderSignalIndex_Callback ksvg__svg_sendersignalindex_callback = nullptr;
    KSvg__Svg_Receivers_Callback ksvg__svg_receivers_callback = nullptr;
    KSvg__Svg_IsSignalConnected_Callback ksvg__svg_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ksvg__svg_metaobject_isbase = false;
    mutable bool ksvg__svg_metacast_isbase = false;
    mutable bool ksvg__svg_metacall_isbase = false;
    mutable bool ksvg__svg_setimagepath_isbase = false;
    mutable bool ksvg__svg_event_isbase = false;
    mutable bool ksvg__svg_timerevent_isbase = false;
    mutable bool ksvg__svg_childevent_isbase = false;
    mutable bool ksvg__svg_customevent_isbase = false;
    mutable bool ksvg__svg_connectnotify_isbase = false;
    mutable bool ksvg__svg_disconnectnotify_isbase = false;
    mutable bool ksvg__svg_sender_isbase = false;
    mutable bool ksvg__svg_sendersignalindex_isbase = false;
    mutable bool ksvg__svg_receivers_isbase = false;
    mutable bool ksvg__svg_issignalconnected_isbase = false;

  public:
    VirtualKSvgSvg() : KSvg::Svg() {};
    VirtualKSvgSvg(QObject* parent) : KSvg::Svg(parent) {};

    // Callback setters
    inline void setKSvg__Svg_MetaObject_Callback(KSvg__Svg_MetaObject_Callback cb) { ksvg__svg_metaobject_callback = cb; }
    inline void setKSvg__Svg_Metacast_Callback(KSvg__Svg_Metacast_Callback cb) { ksvg__svg_metacast_callback = cb; }
    inline void setKSvg__Svg_Metacall_Callback(KSvg__Svg_Metacall_Callback cb) { ksvg__svg_metacall_callback = cb; }
    inline void setKSvg__Svg_SetImagePath_Callback(KSvg__Svg_SetImagePath_Callback cb) { ksvg__svg_setimagepath_callback = cb; }
    inline void setKSvg__Svg_Event_Callback(KSvg__Svg_Event_Callback cb) { ksvg__svg_event_callback = cb; }
    inline void setKSvg__Svg_TimerEvent_Callback(KSvg__Svg_TimerEvent_Callback cb) { ksvg__svg_timerevent_callback = cb; }
    inline void setKSvg__Svg_ChildEvent_Callback(KSvg__Svg_ChildEvent_Callback cb) { ksvg__svg_childevent_callback = cb; }
    inline void setKSvg__Svg_CustomEvent_Callback(KSvg__Svg_CustomEvent_Callback cb) { ksvg__svg_customevent_callback = cb; }
    inline void setKSvg__Svg_ConnectNotify_Callback(KSvg__Svg_ConnectNotify_Callback cb) { ksvg__svg_connectnotify_callback = cb; }
    inline void setKSvg__Svg_DisconnectNotify_Callback(KSvg__Svg_DisconnectNotify_Callback cb) { ksvg__svg_disconnectnotify_callback = cb; }
    inline void setKSvg__Svg_Sender_Callback(KSvg__Svg_Sender_Callback cb) { ksvg__svg_sender_callback = cb; }
    inline void setKSvg__Svg_SenderSignalIndex_Callback(KSvg__Svg_SenderSignalIndex_Callback cb) { ksvg__svg_sendersignalindex_callback = cb; }
    inline void setKSvg__Svg_Receivers_Callback(KSvg__Svg_Receivers_Callback cb) { ksvg__svg_receivers_callback = cb; }
    inline void setKSvg__Svg_IsSignalConnected_Callback(KSvg__Svg_IsSignalConnected_Callback cb) { ksvg__svg_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKSvg__Svg_MetaObject_IsBase(bool value) const { ksvg__svg_metaobject_isbase = value; }
    inline void setKSvg__Svg_Metacast_IsBase(bool value) const { ksvg__svg_metacast_isbase = value; }
    inline void setKSvg__Svg_Metacall_IsBase(bool value) const { ksvg__svg_metacall_isbase = value; }
    inline void setKSvg__Svg_SetImagePath_IsBase(bool value) const { ksvg__svg_setimagepath_isbase = value; }
    inline void setKSvg__Svg_Event_IsBase(bool value) const { ksvg__svg_event_isbase = value; }
    inline void setKSvg__Svg_TimerEvent_IsBase(bool value) const { ksvg__svg_timerevent_isbase = value; }
    inline void setKSvg__Svg_ChildEvent_IsBase(bool value) const { ksvg__svg_childevent_isbase = value; }
    inline void setKSvg__Svg_CustomEvent_IsBase(bool value) const { ksvg__svg_customevent_isbase = value; }
    inline void setKSvg__Svg_ConnectNotify_IsBase(bool value) const { ksvg__svg_connectnotify_isbase = value; }
    inline void setKSvg__Svg_DisconnectNotify_IsBase(bool value) const { ksvg__svg_disconnectnotify_isbase = value; }
    inline void setKSvg__Svg_Sender_IsBase(bool value) const { ksvg__svg_sender_isbase = value; }
    inline void setKSvg__Svg_SenderSignalIndex_IsBase(bool value) const { ksvg__svg_sendersignalindex_isbase = value; }
    inline void setKSvg__Svg_Receivers_IsBase(bool value) const { ksvg__svg_receivers_isbase = value; }
    inline void setKSvg__Svg_IsSignalConnected_IsBase(bool value) const { ksvg__svg_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksvg__svg_metaobject_isbase) {
            ksvg__svg_metaobject_isbase = false;
            return KSvg__Svg::metaObject();
        }
        auto metaobject_cb = ksvg__svg_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KSvg__Svg::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksvg__svg_metacast_isbase) {
            ksvg__svg_metacast_isbase = false;
            return KSvg__Svg::qt_metacast(param1);
        }
        auto metacast_cb = ksvg__svg_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KSvg__Svg::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksvg__svg_metacall_isbase) {
            ksvg__svg_metacall_isbase = false;
            return KSvg__Svg::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ksvg__svg_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSvg__Svg::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setImagePath(const QString& svgFilePath) override {
        if (ksvg__svg_setimagepath_isbase) {
            ksvg__svg_setimagepath_isbase = false;
            KSvg__Svg::setImagePath(svgFilePath);
            return;
        }
        auto setimagepath_cb = ksvg__svg_setimagepath_callback;
        if (setimagepath_cb) {
            const QString svgFilePath_ret = svgFilePath;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray svgFilePath_b = svgFilePath_ret.toUtf8();
            auto svgFilePath_str_len = svgFilePath_b.length();
            const char* svgFilePath_str = static_cast<const char*>(malloc(svgFilePath_str_len + 1));
            memcpy((void*)svgFilePath_str, svgFilePath_b.data(), svgFilePath_str_len);
            ((char*)svgFilePath_str)[svgFilePath_str_len] = '\0';
            const char* cbval1 = svgFilePath_str;

            setimagepath_cb(this, cbval1);
            libqt_free(svgFilePath_str);
            return;
        }
        KSvg__Svg::setImagePath(svgFilePath);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksvg__svg_event_isbase) {
            ksvg__svg_event_isbase = false;
            return KSvg__Svg::event(event);
        }
        auto event_cb = ksvg__svg_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KSvg__Svg::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksvg__svg_timerevent_isbase) {
            ksvg__svg_timerevent_isbase = false;
            KSvg__Svg::timerEvent(event);
            return;
        }
        auto timerevent_cb = ksvg__svg_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KSvg__Svg::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksvg__svg_childevent_isbase) {
            ksvg__svg_childevent_isbase = false;
            KSvg__Svg::childEvent(event);
            return;
        }
        auto childevent_cb = ksvg__svg_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KSvg__Svg::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksvg__svg_customevent_isbase) {
            ksvg__svg_customevent_isbase = false;
            KSvg__Svg::customEvent(event);
            return;
        }
        auto customevent_cb = ksvg__svg_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KSvg__Svg::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksvg__svg_connectnotify_isbase) {
            ksvg__svg_connectnotify_isbase = false;
            KSvg__Svg::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ksvg__svg_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KSvg__Svg::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksvg__svg_disconnectnotify_isbase) {
            ksvg__svg_disconnectnotify_isbase = false;
            KSvg__Svg::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ksvg__svg_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KSvg__Svg::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksvg__svg_sender_isbase) {
            ksvg__svg_sender_isbase = false;
            return KSvg__Svg::sender();
        }
        auto sender_cb = ksvg__svg_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KSvg__Svg::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksvg__svg_sendersignalindex_isbase) {
            ksvg__svg_sendersignalindex_isbase = false;
            return KSvg__Svg::senderSignalIndex();
        }
        auto sendersignalindex_cb = ksvg__svg_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KSvg__Svg::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksvg__svg_receivers_isbase) {
            ksvg__svg_receivers_isbase = false;
            return KSvg__Svg::receivers(signal);
        }
        auto receivers_cb = ksvg__svg_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSvg__Svg::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksvg__svg_issignalconnected_isbase) {
            ksvg__svg_issignalconnected_isbase = false;
            return KSvg__Svg::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ksvg__svg_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KSvg__Svg::isSignalConnected(signal);
    }

    // Friend functions
    friend void KSvg__Svg_TimerEvent(KSvg::Svg* self, QTimerEvent* event);
    friend void KSvg__Svg_SuperTimerEvent(KSvg::Svg* self, QTimerEvent* event);
    friend void KSvg__Svg_ChildEvent(KSvg::Svg* self, QChildEvent* event);
    friend void KSvg__Svg_SuperChildEvent(KSvg::Svg* self, QChildEvent* event);
    friend void KSvg__Svg_CustomEvent(KSvg::Svg* self, QEvent* event);
    friend void KSvg__Svg_SuperCustomEvent(KSvg::Svg* self, QEvent* event);
    friend void KSvg__Svg_ConnectNotify(KSvg::Svg* self, const QMetaMethod* signal);
    friend void KSvg__Svg_SuperConnectNotify(KSvg::Svg* self, const QMetaMethod* signal);
    friend void KSvg__Svg_DisconnectNotify(KSvg::Svg* self, const QMetaMethod* signal);
    friend void KSvg__Svg_SuperDisconnectNotify(KSvg::Svg* self, const QMetaMethod* signal);
    friend QObject* KSvg__Svg_Sender(const KSvg::Svg* self);
    friend QObject* KSvg__Svg_SuperSender(const KSvg::Svg* self);
    friend int KSvg__Svg_SenderSignalIndex(const KSvg::Svg* self);
    friend int KSvg__Svg_SuperSenderSignalIndex(const KSvg::Svg* self);
    friend int KSvg__Svg_Receivers(const KSvg::Svg* self, const char* signal);
    friend int KSvg__Svg_SuperReceivers(const KSvg::Svg* self, const char* signal);
    friend bool KSvg__Svg_IsSignalConnected(const KSvg::Svg* self, const QMetaMethod* signal);
    friend bool KSvg__Svg_SuperIsSignalConnected(const KSvg::Svg* self, const QMetaMethod* signal);
};

#endif
