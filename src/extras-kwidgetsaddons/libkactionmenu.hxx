#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKACTIONMENU_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKACTIONMENU_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KActionMenu
class VirtualKActionMenu final : public KActionMenu {
  public:
    // Virtual class public types (including callbacks and access types)
    using KActionMenu_MetaObject_Callback = QMetaObject* (*)(const KActionMenu*);
    using KActionMenu_Metacast_Callback = void* (*)(KActionMenu*, const char*);
    using KActionMenu_Metacall_Callback = int (*)(KActionMenu*, int, int, void**);
    using KActionMenu_CreateWidget_Callback = QWidget* (*)(KActionMenu*, QWidget*);
    using KActionMenu_Event_Callback = bool (*)(KActionMenu*, QEvent*);
    using KActionMenu_EventFilter_Callback = bool (*)(KActionMenu*, QObject*, QEvent*);
    using KActionMenu_DeleteWidget_Callback = void (*)(KActionMenu*, QWidget*);
    using KActionMenu_TimerEvent_Callback = void (*)(KActionMenu*, QTimerEvent*);
    using KActionMenu_ChildEvent_Callback = void (*)(KActionMenu*, QChildEvent*);
    using KActionMenu_CustomEvent_Callback = void (*)(KActionMenu*, QEvent*);
    using KActionMenu_ConnectNotify_Callback = void (*)(KActionMenu*, QMetaMethod*);
    using KActionMenu_DisconnectNotify_Callback = void (*)(KActionMenu*, QMetaMethod*);
    using KActionMenu::createdWidgets;
    using KActionMenu::isSignalConnected;
    using KActionMenu::receivers;
    using KActionMenu::sender;
    using KActionMenu::senderSignalIndex;

    // Instance callback storage
    KActionMenu_MetaObject_Callback kactionmenu_metaobject_callback = nullptr;
    KActionMenu_Metacast_Callback kactionmenu_metacast_callback = nullptr;
    KActionMenu_Metacall_Callback kactionmenu_metacall_callback = nullptr;
    KActionMenu_CreateWidget_Callback kactionmenu_createwidget_callback = nullptr;
    KActionMenu_Event_Callback kactionmenu_event_callback = nullptr;
    KActionMenu_EventFilter_Callback kactionmenu_eventfilter_callback = nullptr;
    KActionMenu_DeleteWidget_Callback kactionmenu_deletewidget_callback = nullptr;
    KActionMenu_TimerEvent_Callback kactionmenu_timerevent_callback = nullptr;
    KActionMenu_ChildEvent_Callback kactionmenu_childevent_callback = nullptr;
    KActionMenu_CustomEvent_Callback kactionmenu_customevent_callback = nullptr;
    KActionMenu_ConnectNotify_Callback kactionmenu_connectnotify_callback = nullptr;
    KActionMenu_DisconnectNotify_Callback kactionmenu_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KActionMenu {
        using KActionMenu::childEvent;
        using KActionMenu::connectNotify;
        using KActionMenu::customEvent;
        using KActionMenu::deleteWidget;
        using KActionMenu::disconnectNotify;
        using KActionMenu::event;
        using KActionMenu::eventFilter;
        using KActionMenu::timerEvent;
    };

    VirtualKActionMenu(QObject* parent) : KActionMenu(parent) {};
    VirtualKActionMenu(const QString& text, QObject* parent) : KActionMenu(text, parent) {};
    VirtualKActionMenu(const QIcon& icon, const QString& text, QObject* parent) : KActionMenu(icon, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kactionmenu_metaobject_callback) {
            QMetaObject* callback_ret = kactionmenu_metaobject_callback(this);
            return callback_ret;
        }
        return KActionMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kactionmenu_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kactionmenu_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KActionMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kactionmenu_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kactionmenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KActionMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kactionmenu_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = kactionmenu_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return KActionMenu::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kactionmenu_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = kactionmenu_event_callback(this, cbval1);
            return callback_ret;
        }
        return KActionMenu::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kactionmenu_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kactionmenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KActionMenu::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kactionmenu_deletewidget_callback) {
            QWidget* cbval1 = widget;
            kactionmenu_deletewidget_callback(this, cbval1);
            return;
        }
        KActionMenu::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kactionmenu_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kactionmenu_timerevent_callback(this, cbval1);
            return;
        }
        KActionMenu::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kactionmenu_childevent_callback) {
            QChildEvent* cbval1 = event;
            kactionmenu_childevent_callback(this, cbval1);
            return;
        }
        KActionMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kactionmenu_customevent_callback) {
            QEvent* cbval1 = event;
            kactionmenu_customevent_callback(this, cbval1);
            return;
        }
        KActionMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kactionmenu_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kactionmenu_connectnotify_callback(this, cbval1);
            return;
        }
        KActionMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kactionmenu_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kactionmenu_disconnectnotify_callback(this, cbval1);
            return;
        }
        KActionMenu::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KActionMenu_SuperEvent(KActionMenu* self, QEvent* param1);
    friend bool KActionMenu_SuperEventFilter(KActionMenu* self, QObject* param1, QEvent* param2);
    friend void KActionMenu_SuperDeleteWidget(KActionMenu* self, QWidget* widget);
    friend void KActionMenu_SuperTimerEvent(KActionMenu* self, QTimerEvent* event);
    friend void KActionMenu_SuperChildEvent(KActionMenu* self, QChildEvent* event);
    friend void KActionMenu_SuperCustomEvent(KActionMenu* self, QEvent* event);
    friend void KActionMenu_SuperConnectNotify(KActionMenu* self, const QMetaMethod* signal);
    friend void KActionMenu_SuperDisconnectNotify(KActionMenu* self, const QMetaMethod* signal);
};

#endif
