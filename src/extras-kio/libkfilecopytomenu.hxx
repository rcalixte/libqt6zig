#pragma once
#ifndef EXTRAS_KIO_LIBKFILECOPYTOMENU_HXX
#define EXTRAS_KIO_LIBKFILECOPYTOMENU_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileCopyToMenu
class VirtualKFileCopyToMenu final : public KFileCopyToMenu {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFileCopyToMenu_MetaObject_Callback = QMetaObject* (*)(const KFileCopyToMenu*);
    using KFileCopyToMenu_Metacast_Callback = void* (*)(KFileCopyToMenu*, const char*);
    using KFileCopyToMenu_Metacall_Callback = int (*)(KFileCopyToMenu*, int, int, void**);
    using KFileCopyToMenu_Event_Callback = bool (*)(KFileCopyToMenu*, QEvent*);
    using KFileCopyToMenu_EventFilter_Callback = bool (*)(KFileCopyToMenu*, QObject*, QEvent*);
    using KFileCopyToMenu_TimerEvent_Callback = void (*)(KFileCopyToMenu*, QTimerEvent*);
    using KFileCopyToMenu_ChildEvent_Callback = void (*)(KFileCopyToMenu*, QChildEvent*);
    using KFileCopyToMenu_CustomEvent_Callback = void (*)(KFileCopyToMenu*, QEvent*);
    using KFileCopyToMenu_ConnectNotify_Callback = void (*)(KFileCopyToMenu*, QMetaMethod*);
    using KFileCopyToMenu_DisconnectNotify_Callback = void (*)(KFileCopyToMenu*, QMetaMethod*);
    using KFileCopyToMenu::isSignalConnected;
    using KFileCopyToMenu::receivers;
    using KFileCopyToMenu::sender;
    using KFileCopyToMenu::senderSignalIndex;

    // Instance callback storage
    KFileCopyToMenu_MetaObject_Callback kfilecopytomenu_metaobject_callback = nullptr;
    KFileCopyToMenu_Metacast_Callback kfilecopytomenu_metacast_callback = nullptr;
    KFileCopyToMenu_Metacall_Callback kfilecopytomenu_metacall_callback = nullptr;
    KFileCopyToMenu_Event_Callback kfilecopytomenu_event_callback = nullptr;
    KFileCopyToMenu_EventFilter_Callback kfilecopytomenu_eventfilter_callback = nullptr;
    KFileCopyToMenu_TimerEvent_Callback kfilecopytomenu_timerevent_callback = nullptr;
    KFileCopyToMenu_ChildEvent_Callback kfilecopytomenu_childevent_callback = nullptr;
    KFileCopyToMenu_CustomEvent_Callback kfilecopytomenu_customevent_callback = nullptr;
    KFileCopyToMenu_ConnectNotify_Callback kfilecopytomenu_connectnotify_callback = nullptr;
    KFileCopyToMenu_DisconnectNotify_Callback kfilecopytomenu_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFileCopyToMenu {
        using KFileCopyToMenu::childEvent;
        using KFileCopyToMenu::connectNotify;
        using KFileCopyToMenu::customEvent;
        using KFileCopyToMenu::disconnectNotify;
        using KFileCopyToMenu::timerEvent;
    };

    VirtualKFileCopyToMenu(QWidget* parentWidget) : KFileCopyToMenu(parentWidget) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfilecopytomenu_metaobject_callback) {
            QMetaObject* callback_ret = kfilecopytomenu_metaobject_callback(this);
            return callback_ret;
        }
        return KFileCopyToMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfilecopytomenu_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfilecopytomenu_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFileCopyToMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilecopytomenu_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfilecopytomenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFileCopyToMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilecopytomenu_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfilecopytomenu_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFileCopyToMenu::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfilecopytomenu_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kfilecopytomenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFileCopyToMenu::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilecopytomenu_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfilecopytomenu_timerevent_callback(this, cbval1);
            return;
        }
        KFileCopyToMenu::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilecopytomenu_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfilecopytomenu_childevent_callback(this, cbval1);
            return;
        }
        KFileCopyToMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilecopytomenu_customevent_callback) {
            QEvent* cbval1 = event;
            kfilecopytomenu_customevent_callback(this, cbval1);
            return;
        }
        KFileCopyToMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilecopytomenu_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilecopytomenu_connectnotify_callback(this, cbval1);
            return;
        }
        KFileCopyToMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilecopytomenu_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilecopytomenu_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFileCopyToMenu::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFileCopyToMenu_SuperTimerEvent(KFileCopyToMenu* self, QTimerEvent* event);
    friend void KFileCopyToMenu_SuperChildEvent(KFileCopyToMenu* self, QChildEvent* event);
    friend void KFileCopyToMenu_SuperCustomEvent(KFileCopyToMenu* self, QEvent* event);
    friend void KFileCopyToMenu_SuperConnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal);
    friend void KFileCopyToMenu_SuperDisconnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal);
};

#endif
