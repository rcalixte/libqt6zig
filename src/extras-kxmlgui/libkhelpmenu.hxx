#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKHELPMENU_HXX
#define EXTRAS_KXMLGUI_LIBKHELPMENU_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KHelpMenu
class VirtualKHelpMenu final : public KHelpMenu {
  public:
    // Virtual class public types (including callbacks and access types)
    using KHelpMenu_MetaObject_Callback = QMetaObject* (*)(const KHelpMenu*);
    using KHelpMenu_Metacast_Callback = void* (*)(KHelpMenu*, const char*);
    using KHelpMenu_Metacall_Callback = int (*)(KHelpMenu*, int, int, void**);
    using KHelpMenu_Event_Callback = bool (*)(KHelpMenu*, QEvent*);
    using KHelpMenu_EventFilter_Callback = bool (*)(KHelpMenu*, QObject*, QEvent*);
    using KHelpMenu_TimerEvent_Callback = void (*)(KHelpMenu*, QTimerEvent*);
    using KHelpMenu_ChildEvent_Callback = void (*)(KHelpMenu*, QChildEvent*);
    using KHelpMenu_CustomEvent_Callback = void (*)(KHelpMenu*, QEvent*);
    using KHelpMenu_ConnectNotify_Callback = void (*)(KHelpMenu*, QMetaMethod*);
    using KHelpMenu_DisconnectNotify_Callback = void (*)(KHelpMenu*, QMetaMethod*);
    using KHelpMenu::isSignalConnected;
    using KHelpMenu::receivers;
    using KHelpMenu::sender;
    using KHelpMenu::senderSignalIndex;

    // Instance callback storage
    KHelpMenu_MetaObject_Callback khelpmenu_metaobject_callback = nullptr;
    KHelpMenu_Metacast_Callback khelpmenu_metacast_callback = nullptr;
    KHelpMenu_Metacall_Callback khelpmenu_metacall_callback = nullptr;
    KHelpMenu_Event_Callback khelpmenu_event_callback = nullptr;
    KHelpMenu_EventFilter_Callback khelpmenu_eventfilter_callback = nullptr;
    KHelpMenu_TimerEvent_Callback khelpmenu_timerevent_callback = nullptr;
    KHelpMenu_ChildEvent_Callback khelpmenu_childevent_callback = nullptr;
    KHelpMenu_CustomEvent_Callback khelpmenu_customevent_callback = nullptr;
    KHelpMenu_ConnectNotify_Callback khelpmenu_connectnotify_callback = nullptr;
    KHelpMenu_DisconnectNotify_Callback khelpmenu_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KHelpMenu {
        using KHelpMenu::childEvent;
        using KHelpMenu::connectNotify;
        using KHelpMenu::customEvent;
        using KHelpMenu::disconnectNotify;
        using KHelpMenu::timerEvent;
    };

    VirtualKHelpMenu(QWidget* parent) : KHelpMenu(parent) {};
    VirtualKHelpMenu(QWidget* parent, const QString& unused) : KHelpMenu(parent, unused) {};
    VirtualKHelpMenu() : KHelpMenu() {};
    VirtualKHelpMenu(QWidget* parent, const KAboutData& aboutData, bool showWhatsThis) : KHelpMenu(parent, aboutData, showWhatsThis) {};
    VirtualKHelpMenu(QWidget* parent, const KAboutData& aboutData) : KHelpMenu(parent, aboutData) {};
    VirtualKHelpMenu(QWidget* parent, const QString& unused, bool showWhatsThis) : KHelpMenu(parent, unused, showWhatsThis) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (khelpmenu_metaobject_callback) {
            QMetaObject* callback_ret = khelpmenu_metaobject_callback(this);
            return callback_ret;
        }
        return KHelpMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (khelpmenu_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = khelpmenu_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KHelpMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (khelpmenu_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = khelpmenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KHelpMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (khelpmenu_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = khelpmenu_event_callback(this, cbval1);
            return callback_ret;
        }
        return KHelpMenu::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (khelpmenu_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = khelpmenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KHelpMenu::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (khelpmenu_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            khelpmenu_timerevent_callback(this, cbval1);
            return;
        }
        KHelpMenu::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (khelpmenu_childevent_callback) {
            QChildEvent* cbval1 = event;
            khelpmenu_childevent_callback(this, cbval1);
            return;
        }
        KHelpMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (khelpmenu_customevent_callback) {
            QEvent* cbval1 = event;
            khelpmenu_customevent_callback(this, cbval1);
            return;
        }
        KHelpMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (khelpmenu_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            khelpmenu_connectnotify_callback(this, cbval1);
            return;
        }
        KHelpMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (khelpmenu_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            khelpmenu_disconnectnotify_callback(this, cbval1);
            return;
        }
        KHelpMenu::disconnectNotify(signal);
    }

    // Friend functions
    friend void KHelpMenu_SuperTimerEvent(KHelpMenu* self, QTimerEvent* event);
    friend void KHelpMenu_SuperChildEvent(KHelpMenu* self, QChildEvent* event);
    friend void KHelpMenu_SuperCustomEvent(KHelpMenu* self, QEvent* event);
    friend void KHelpMenu_SuperConnectNotify(KHelpMenu* self, const QMetaMethod* signal);
    friend void KHelpMenu_SuperDisconnectNotify(KHelpMenu* self, const QMetaMethod* signal);
};

#endif
