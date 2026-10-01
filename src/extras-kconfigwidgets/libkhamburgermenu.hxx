#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKHAMBURGERMENU_HXX
#define EXTRAS_KCONFIGWIDGETS_LIBKHAMBURGERMENU_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KHamburgerMenu
class VirtualKHamburgerMenu final : public KHamburgerMenu {
  public:
    // Virtual class public types (including callbacks and access types)
    using KHamburgerMenu_MetaObject_Callback = QMetaObject* (*)(const KHamburgerMenu*);
    using KHamburgerMenu_Metacast_Callback = void* (*)(KHamburgerMenu*, const char*);
    using KHamburgerMenu_Metacall_Callback = int (*)(KHamburgerMenu*, int, int, void**);
    using KHamburgerMenu_CreateWidget_Callback = QWidget* (*)(KHamburgerMenu*, QWidget*);
    using KHamburgerMenu_Event_Callback = bool (*)(KHamburgerMenu*, QEvent*);
    using KHamburgerMenu_EventFilter_Callback = bool (*)(KHamburgerMenu*, QObject*, QEvent*);
    using KHamburgerMenu_DeleteWidget_Callback = void (*)(KHamburgerMenu*, QWidget*);
    using KHamburgerMenu_TimerEvent_Callback = void (*)(KHamburgerMenu*, QTimerEvent*);
    using KHamburgerMenu_ChildEvent_Callback = void (*)(KHamburgerMenu*, QChildEvent*);
    using KHamburgerMenu_CustomEvent_Callback = void (*)(KHamburgerMenu*, QEvent*);
    using KHamburgerMenu_ConnectNotify_Callback = void (*)(KHamburgerMenu*, QMetaMethod*);
    using KHamburgerMenu_DisconnectNotify_Callback = void (*)(KHamburgerMenu*, QMetaMethod*);
    using KHamburgerMenu::createdWidgets;
    using KHamburgerMenu::isSignalConnected;
    using KHamburgerMenu::receivers;
    using KHamburgerMenu::sender;
    using KHamburgerMenu::senderSignalIndex;

    // Instance callback storage
    KHamburgerMenu_MetaObject_Callback khamburgermenu_metaobject_callback = nullptr;
    KHamburgerMenu_Metacast_Callback khamburgermenu_metacast_callback = nullptr;
    KHamburgerMenu_Metacall_Callback khamburgermenu_metacall_callback = nullptr;
    KHamburgerMenu_CreateWidget_Callback khamburgermenu_createwidget_callback = nullptr;
    KHamburgerMenu_Event_Callback khamburgermenu_event_callback = nullptr;
    KHamburgerMenu_EventFilter_Callback khamburgermenu_eventfilter_callback = nullptr;
    KHamburgerMenu_DeleteWidget_Callback khamburgermenu_deletewidget_callback = nullptr;
    KHamburgerMenu_TimerEvent_Callback khamburgermenu_timerevent_callback = nullptr;
    KHamburgerMenu_ChildEvent_Callback khamburgermenu_childevent_callback = nullptr;
    KHamburgerMenu_CustomEvent_Callback khamburgermenu_customevent_callback = nullptr;
    KHamburgerMenu_ConnectNotify_Callback khamburgermenu_connectnotify_callback = nullptr;
    KHamburgerMenu_DisconnectNotify_Callback khamburgermenu_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KHamburgerMenu {
        using KHamburgerMenu::childEvent;
        using KHamburgerMenu::connectNotify;
        using KHamburgerMenu::createWidget;
        using KHamburgerMenu::customEvent;
        using KHamburgerMenu::deleteWidget;
        using KHamburgerMenu::disconnectNotify;
        using KHamburgerMenu::event;
        using KHamburgerMenu::eventFilter;
        using KHamburgerMenu::timerEvent;
    };

    VirtualKHamburgerMenu(QObject* parent) : KHamburgerMenu(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (khamburgermenu_metaobject_callback) {
            QMetaObject* callback_ret = khamburgermenu_metaobject_callback(this);
            return callback_ret;
        }
        return KHamburgerMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (khamburgermenu_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = khamburgermenu_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KHamburgerMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (khamburgermenu_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = khamburgermenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KHamburgerMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (khamburgermenu_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = khamburgermenu_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return KHamburgerMenu::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (khamburgermenu_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = khamburgermenu_event_callback(this, cbval1);
            return callback_ret;
        }
        return KHamburgerMenu::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (khamburgermenu_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = khamburgermenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KHamburgerMenu::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (khamburgermenu_deletewidget_callback) {
            QWidget* cbval1 = widget;
            khamburgermenu_deletewidget_callback(this, cbval1);
            return;
        }
        KHamburgerMenu::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (khamburgermenu_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            khamburgermenu_timerevent_callback(this, cbval1);
            return;
        }
        KHamburgerMenu::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (khamburgermenu_childevent_callback) {
            QChildEvent* cbval1 = event;
            khamburgermenu_childevent_callback(this, cbval1);
            return;
        }
        KHamburgerMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (khamburgermenu_customevent_callback) {
            QEvent* cbval1 = event;
            khamburgermenu_customevent_callback(this, cbval1);
            return;
        }
        KHamburgerMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (khamburgermenu_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            khamburgermenu_connectnotify_callback(this, cbval1);
            return;
        }
        KHamburgerMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (khamburgermenu_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            khamburgermenu_disconnectnotify_callback(this, cbval1);
            return;
        }
        KHamburgerMenu::disconnectNotify(signal);
    }

    // Friend functions
    friend QWidget* KHamburgerMenu_SuperCreateWidget(KHamburgerMenu* self, QWidget* parent);
    friend bool KHamburgerMenu_SuperEvent(KHamburgerMenu* self, QEvent* param1);
    friend bool KHamburgerMenu_SuperEventFilter(KHamburgerMenu* self, QObject* param1, QEvent* param2);
    friend void KHamburgerMenu_SuperDeleteWidget(KHamburgerMenu* self, QWidget* widget);
    friend void KHamburgerMenu_SuperTimerEvent(KHamburgerMenu* self, QTimerEvent* event);
    friend void KHamburgerMenu_SuperChildEvent(KHamburgerMenu* self, QChildEvent* event);
    friend void KHamburgerMenu_SuperCustomEvent(KHamburgerMenu* self, QEvent* event);
    friend void KHamburgerMenu_SuperConnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
    friend void KHamburgerMenu_SuperDisconnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
};

#endif
