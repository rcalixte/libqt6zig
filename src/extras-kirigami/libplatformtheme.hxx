#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBPLATFORMTHEME_HXX
#define EXTRAS_KIRIGAMI_LIBPLATFORMTHEME_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Kirigami::Platform::PlatformTheme
class VirtualKirigamiPlatformPlatformTheme final : public Kirigami::Platform::PlatformTheme {
  public:
    // Virtual class public types (including callbacks and access types)
    using Kirigami__Platform__PlatformTheme_MetaObject_Callback = QMetaObject* (*)(const Kirigami__Platform__PlatformTheme*);
    using Kirigami__Platform__PlatformTheme_Metacast_Callback = void* (*)(Kirigami__Platform__PlatformTheme*, const char*);
    using Kirigami__Platform__PlatformTheme_Metacall_Callback = int (*)(Kirigami__Platform__PlatformTheme*, int, int, void**);
    using Kirigami__Platform__PlatformTheme_IconFromTheme_Callback = QIcon* (*)(Kirigami__Platform__PlatformTheme*, const char*, QColor*);
    using Kirigami__Platform__PlatformTheme_Event_Callback = bool (*)(Kirigami__Platform__PlatformTheme*, QEvent*);
    using Kirigami__Platform__PlatformTheme_EventFilter_Callback = bool (*)(Kirigami__Platform__PlatformTheme*, QObject*, QEvent*);
    using Kirigami__Platform__PlatformTheme_TimerEvent_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QTimerEvent*);
    using Kirigami__Platform__PlatformTheme_ChildEvent_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QChildEvent*);
    using Kirigami__Platform__PlatformTheme_CustomEvent_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QEvent*);
    using Kirigami__Platform__PlatformTheme_ConnectNotify_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QMetaMethod*);
    using Kirigami__Platform__PlatformTheme_DisconnectNotify_Callback = void (*)(Kirigami__Platform__PlatformTheme*, QMetaMethod*);
    using Kirigami::Platform::PlatformTheme::isSignalConnected;
    using Kirigami::Platform::PlatformTheme::receivers;
    using Kirigami::Platform::PlatformTheme::sender;
    using Kirigami::Platform::PlatformTheme::senderSignalIndex;
    using Kirigami::Platform::PlatformTheme::setActiveBackgroundColor;
    using Kirigami::Platform::PlatformTheme::setActiveTextColor;
    using Kirigami::Platform::PlatformTheme::setAlternateBackgroundColor;
    using Kirigami::Platform::PlatformTheme::setBackgroundColor;
    using Kirigami::Platform::PlatformTheme::setDefaultFont;
    using Kirigami::Platform::PlatformTheme::setDisabledTextColor;
    using Kirigami::Platform::PlatformTheme::setFocusColor;
    using Kirigami::Platform::PlatformTheme::setHighlightColor;
    using Kirigami::Platform::PlatformTheme::setHighlightedTextColor;
    using Kirigami::Platform::PlatformTheme::setHoverColor;
    using Kirigami::Platform::PlatformTheme::setLinkBackgroundColor;
    using Kirigami::Platform::PlatformTheme::setLinkColor;
    using Kirigami::Platform::PlatformTheme::setNegativeBackgroundColor;
    using Kirigami::Platform::PlatformTheme::setNegativeTextColor;
    using Kirigami::Platform::PlatformTheme::setNeutralBackgroundColor;
    using Kirigami::Platform::PlatformTheme::setNeutralTextColor;
    using Kirigami::Platform::PlatformTheme::setPositiveBackgroundColor;
    using Kirigami::Platform::PlatformTheme::setPositiveTextColor;
    using Kirigami::Platform::PlatformTheme::setSmallFont;
    using Kirigami::Platform::PlatformTheme::setSupportsIconColoring;
    using Kirigami::Platform::PlatformTheme::setTextColor;
    using Kirigami::Platform::PlatformTheme::setVisitedLinkBackgroundColor;
    using Kirigami::Platform::PlatformTheme::setVisitedLinkColor;

    // Instance callback storage
    Kirigami__Platform__PlatformTheme_MetaObject_Callback kirigami__platform__platformtheme_metaobject_callback = nullptr;
    Kirigami__Platform__PlatformTheme_Metacast_Callback kirigami__platform__platformtheme_metacast_callback = nullptr;
    Kirigami__Platform__PlatformTheme_Metacall_Callback kirigami__platform__platformtheme_metacall_callback = nullptr;
    Kirigami__Platform__PlatformTheme_IconFromTheme_Callback kirigami__platform__platformtheme_iconfromtheme_callback = nullptr;
    Kirigami__Platform__PlatformTheme_Event_Callback kirigami__platform__platformtheme_event_callback = nullptr;
    Kirigami__Platform__PlatformTheme_EventFilter_Callback kirigami__platform__platformtheme_eventfilter_callback = nullptr;
    Kirigami__Platform__PlatformTheme_TimerEvent_Callback kirigami__platform__platformtheme_timerevent_callback = nullptr;
    Kirigami__Platform__PlatformTheme_ChildEvent_Callback kirigami__platform__platformtheme_childevent_callback = nullptr;
    Kirigami__Platform__PlatformTheme_CustomEvent_Callback kirigami__platform__platformtheme_customevent_callback = nullptr;
    Kirigami__Platform__PlatformTheme_ConnectNotify_Callback kirigami__platform__platformtheme_connectnotify_callback = nullptr;
    Kirigami__Platform__PlatformTheme_DisconnectNotify_Callback kirigami__platform__platformtheme_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Kirigami::Platform::PlatformTheme {
        using Kirigami::Platform::PlatformTheme::childEvent;
        using Kirigami::Platform::PlatformTheme::connectNotify;
        using Kirigami::Platform::PlatformTheme::customEvent;
        using Kirigami::Platform::PlatformTheme::disconnectNotify;
        using Kirigami::Platform::PlatformTheme::event;
        using Kirigami::Platform::PlatformTheme::timerEvent;
    };

    VirtualKirigamiPlatformPlatformTheme() : Kirigami::Platform::PlatformTheme() {};
    VirtualKirigamiPlatformPlatformTheme(QObject* parent) : Kirigami::Platform::PlatformTheme(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kirigami__platform__platformtheme_metaobject_callback) {
            QMetaObject* callback_ret = kirigami__platform__platformtheme_metaobject_callback(this);
            return callback_ret;
        }
        return Kirigami__Platform__PlatformTheme::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kirigami__platform__platformtheme_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kirigami__platform__platformtheme_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__PlatformTheme::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kirigami__platform__platformtheme_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kirigami__platform__platformtheme_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Kirigami__Platform__PlatformTheme::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon iconFromTheme(const QString& name, const QColor& customColor) override {
        if (kirigami__platform__platformtheme_iconfromtheme_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QColor& customColor_ret = customColor;
            // Cast returned reference into pointer
            QColor* cbval2 = const_cast<QColor*>(&customColor_ret);
            QIcon* callback_ret = kirigami__platform__platformtheme_iconfromtheme_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(name_str);
            return callback_ret_Value;
        }
        return Kirigami__Platform__PlatformTheme::iconFromTheme(name, customColor);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kirigami__platform__platformtheme_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kirigami__platform__platformtheme_event_callback(this, cbval1);
            return callback_ret;
        }
        return Kirigami__Platform__PlatformTheme::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kirigami__platform__platformtheme_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kirigami__platform__platformtheme_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Kirigami__Platform__PlatformTheme::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kirigami__platform__platformtheme_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kirigami__platform__platformtheme_timerevent_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kirigami__platform__platformtheme_childevent_callback) {
            QChildEvent* cbval1 = event;
            kirigami__platform__platformtheme_childevent_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kirigami__platform__platformtheme_customevent_callback) {
            QEvent* cbval1 = event;
            kirigami__platform__platformtheme_customevent_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__platformtheme_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kirigami__platform__platformtheme_connectnotify_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kirigami__platform__platformtheme_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kirigami__platform__platformtheme_disconnectnotify_callback(this, cbval1);
            return;
        }
        Kirigami__Platform__PlatformTheme::disconnectNotify(signal);
    }

    // Friend functions
    friend bool Kirigami__Platform__PlatformTheme_SuperEvent(Kirigami::Platform::PlatformTheme* self, QEvent* event);
    friend void Kirigami__Platform__PlatformTheme_SuperTimerEvent(Kirigami::Platform::PlatformTheme* self, QTimerEvent* event);
    friend void Kirigami__Platform__PlatformTheme_SuperChildEvent(Kirigami::Platform::PlatformTheme* self, QChildEvent* event);
    friend void Kirigami__Platform__PlatformTheme_SuperCustomEvent(Kirigami::Platform::PlatformTheme* self, QEvent* event);
    friend void Kirigami__Platform__PlatformTheme_SuperConnectNotify(Kirigami::Platform::PlatformTheme* self, const QMetaMethod* signal);
    friend void Kirigami__Platform__PlatformTheme_SuperDisconnectNotify(Kirigami::Platform::PlatformTheme* self, const QMetaMethod* signal);
};

#endif
