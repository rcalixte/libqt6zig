#pragma once
#ifndef EXTRAS_KSVG_LIBFRAMESVG_HXX
#define EXTRAS_KSVG_LIBFRAMESVG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSvg::FrameSvg
class VirtualKSvgFrameSvg final : public KSvg::FrameSvg {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSvg__FrameSvg_MetaObject_Callback = QMetaObject* (*)(const KSvg__FrameSvg*);
    using KSvg__FrameSvg_Metacast_Callback = void* (*)(KSvg__FrameSvg*, const char*);
    using KSvg__FrameSvg_Metacall_Callback = int (*)(KSvg__FrameSvg*, int, int, void**);
    using KSvg__FrameSvg_SetImagePath_Callback = void (*)(KSvg__FrameSvg*, const char*);
    using KSvg__FrameSvg_Event_Callback = bool (*)(KSvg__FrameSvg*, QEvent*);
    using KSvg__FrameSvg_TimerEvent_Callback = void (*)(KSvg__FrameSvg*, QTimerEvent*);
    using KSvg__FrameSvg_ChildEvent_Callback = void (*)(KSvg__FrameSvg*, QChildEvent*);
    using KSvg__FrameSvg_CustomEvent_Callback = void (*)(KSvg__FrameSvg*, QEvent*);
    using KSvg__FrameSvg_ConnectNotify_Callback = void (*)(KSvg__FrameSvg*, QMetaMethod*);
    using KSvg__FrameSvg_DisconnectNotify_Callback = void (*)(KSvg__FrameSvg*, QMetaMethod*);
    using KSvg::FrameSvg::isSignalConnected;
    using KSvg::FrameSvg::receivers;
    using KSvg::FrameSvg::sender;
    using KSvg::FrameSvg::senderSignalIndex;

    // Instance callback storage
    KSvg__FrameSvg_MetaObject_Callback ksvg__framesvg_metaobject_callback = nullptr;
    KSvg__FrameSvg_Metacast_Callback ksvg__framesvg_metacast_callback = nullptr;
    KSvg__FrameSvg_Metacall_Callback ksvg__framesvg_metacall_callback = nullptr;
    KSvg__FrameSvg_SetImagePath_Callback ksvg__framesvg_setimagepath_callback = nullptr;
    KSvg__FrameSvg_Event_Callback ksvg__framesvg_event_callback = nullptr;
    KSvg__FrameSvg_TimerEvent_Callback ksvg__framesvg_timerevent_callback = nullptr;
    KSvg__FrameSvg_ChildEvent_Callback ksvg__framesvg_childevent_callback = nullptr;
    KSvg__FrameSvg_CustomEvent_Callback ksvg__framesvg_customevent_callback = nullptr;
    KSvg__FrameSvg_ConnectNotify_Callback ksvg__framesvg_connectnotify_callback = nullptr;
    KSvg__FrameSvg_DisconnectNotify_Callback ksvg__framesvg_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSvg::FrameSvg {
        using KSvg::FrameSvg::childEvent;
        using KSvg::FrameSvg::connectNotify;
        using KSvg::FrameSvg::customEvent;
        using KSvg::FrameSvg::disconnectNotify;
        using KSvg::FrameSvg::timerEvent;
    };

    VirtualKSvgFrameSvg() : KSvg::FrameSvg() {};
    VirtualKSvgFrameSvg(QObject* parent) : KSvg::FrameSvg(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksvg__framesvg_metaobject_callback) {
            QMetaObject* callback_ret = ksvg__framesvg_metaobject_callback(this);
            return callback_ret;
        }
        return KSvg__FrameSvg::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksvg__framesvg_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ksvg__framesvg_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSvg__FrameSvg::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksvg__framesvg_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ksvg__framesvg_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSvg__FrameSvg::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setImagePath(const QString& path) override {
        if (ksvg__framesvg_setimagepath_callback) {
            const auto path_ret = path;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray path_b = path_ret.toUtf8();
            auto path_str_len = path_b.length();
            const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
            memcpy((void*)path_str, path_b.data(), path_str_len);
            ((char*)path_str)[path_str_len] = '\0';
            const char* cbval1 = path_str;
            ksvg__framesvg_setimagepath_callback(this, cbval1);
            libqt_free(path_str);
            return;
        }
        KSvg__FrameSvg::setImagePath(path);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksvg__framesvg_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ksvg__framesvg_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSvg__FrameSvg::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksvg__framesvg_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ksvg__framesvg_timerevent_callback(this, cbval1);
            return;
        }
        KSvg__FrameSvg::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksvg__framesvg_childevent_callback) {
            QChildEvent* cbval1 = event;
            ksvg__framesvg_childevent_callback(this, cbval1);
            return;
        }
        KSvg__FrameSvg::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksvg__framesvg_customevent_callback) {
            QEvent* cbval1 = event;
            ksvg__framesvg_customevent_callback(this, cbval1);
            return;
        }
        KSvg__FrameSvg::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksvg__framesvg_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksvg__framesvg_connectnotify_callback(this, cbval1);
            return;
        }
        KSvg__FrameSvg::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksvg__framesvg_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksvg__framesvg_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSvg__FrameSvg::disconnectNotify(signal);
    }

    // Friend functions
    friend void KSvg__FrameSvg_SuperTimerEvent(KSvg::FrameSvg* self, QTimerEvent* event);
    friend void KSvg__FrameSvg_SuperChildEvent(KSvg::FrameSvg* self, QChildEvent* event);
    friend void KSvg__FrameSvg_SuperCustomEvent(KSvg::FrameSvg* self, QEvent* event);
    friend void KSvg__FrameSvg_SuperConnectNotify(KSvg::FrameSvg* self, const QMetaMethod* signal);
    friend void KSvg__FrameSvg_SuperDisconnectNotify(KSvg::FrameSvg* self, const QMetaMethod* signal);
};

#endif
