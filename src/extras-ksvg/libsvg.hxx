#pragma once
#ifndef EXTRAS_KSVG_LIBSVG_HXX
#define EXTRAS_KSVG_LIBSVG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSvg::Svg
class VirtualKSvgSvg final : public KSvg::Svg {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSvg__Svg_MetaObject_Callback = QMetaObject* (*)(const KSvg__Svg*);
    using KSvg__Svg_Metacast_Callback = void* (*)(KSvg__Svg*, const char*);
    using KSvg__Svg_Metacall_Callback = int (*)(KSvg__Svg*, int, int, void**);
    using KSvg__Svg_SetImagePath_Callback = void (*)(KSvg__Svg*, const char*);
    using KSvg__Svg_Event_Callback = bool (*)(KSvg__Svg*, QEvent*);
    using KSvg__Svg_TimerEvent_Callback = void (*)(KSvg__Svg*, QTimerEvent*);
    using KSvg__Svg_ChildEvent_Callback = void (*)(KSvg__Svg*, QChildEvent*);
    using KSvg__Svg_CustomEvent_Callback = void (*)(KSvg__Svg*, QEvent*);
    using KSvg__Svg_ConnectNotify_Callback = void (*)(KSvg__Svg*, QMetaMethod*);
    using KSvg__Svg_DisconnectNotify_Callback = void (*)(KSvg__Svg*, QMetaMethod*);
    using KSvg::Svg::isSignalConnected;
    using KSvg::Svg::receivers;
    using KSvg::Svg::sender;
    using KSvg::Svg::senderSignalIndex;

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

    // Access struct
    struct Base : KSvg::Svg {
        using KSvg::Svg::childEvent;
        using KSvg::Svg::connectNotify;
        using KSvg::Svg::customEvent;
        using KSvg::Svg::disconnectNotify;
        using KSvg::Svg::timerEvent;
    };

    VirtualKSvgSvg() : KSvg::Svg() {};
    VirtualKSvgSvg(QObject* parent) : KSvg::Svg(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksvg__svg_metaobject_callback) {
            QMetaObject* callback_ret = ksvg__svg_metaobject_callback(this);
            return callback_ret;
        }
        return KSvg__Svg::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksvg__svg_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ksvg__svg_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSvg__Svg::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksvg__svg_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ksvg__svg_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSvg__Svg::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setImagePath(const QString& svgFilePath) override {
        if (ksvg__svg_setimagepath_callback) {
            const auto svgFilePath_ret = svgFilePath;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray svgFilePath_b = svgFilePath_ret.toUtf8();
            auto svgFilePath_str_len = svgFilePath_b.length();
            const char* svgFilePath_str = static_cast<const char*>(malloc(svgFilePath_str_len + 1));
            memcpy((void*)svgFilePath_str, svgFilePath_b.data(), svgFilePath_str_len);
            ((char*)svgFilePath_str)[svgFilePath_str_len] = '\0';
            const char* cbval1 = svgFilePath_str;
            ksvg__svg_setimagepath_callback(this, cbval1);
            libqt_free(svgFilePath_str);
            return;
        }
        KSvg__Svg::setImagePath(svgFilePath);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksvg__svg_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ksvg__svg_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSvg__Svg::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksvg__svg_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ksvg__svg_timerevent_callback(this, cbval1);
            return;
        }
        KSvg__Svg::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksvg__svg_childevent_callback) {
            QChildEvent* cbval1 = event;
            ksvg__svg_childevent_callback(this, cbval1);
            return;
        }
        KSvg__Svg::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksvg__svg_customevent_callback) {
            QEvent* cbval1 = event;
            ksvg__svg_customevent_callback(this, cbval1);
            return;
        }
        KSvg__Svg::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksvg__svg_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksvg__svg_connectnotify_callback(this, cbval1);
            return;
        }
        KSvg__Svg::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksvg__svg_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksvg__svg_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSvg__Svg::disconnectNotify(signal);
    }

    // Friend functions
    friend void KSvg__Svg_SuperTimerEvent(KSvg::Svg* self, QTimerEvent* event);
    friend void KSvg__Svg_SuperChildEvent(KSvg::Svg* self, QChildEvent* event);
    friend void KSvg__Svg_SuperCustomEvent(KSvg::Svg* self, QEvent* event);
    friend void KSvg__Svg_SuperConnectNotify(KSvg::Svg* self, const QMetaMethod* signal);
    friend void KSvg__Svg_SuperDisconnectNotify(KSvg::Svg* self, const QMetaMethod* signal);
};

#endif
