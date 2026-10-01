#pragma once
#ifndef EXTRAS_KBOOKMARKS_LIBKBOOKMARKACTIONMENU_HXX
#define EXTRAS_KBOOKMARKS_LIBKBOOKMARKACTIONMENU_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkActionMenu
class VirtualKBookmarkActionMenu final : public KBookmarkActionMenu {
  public:
    // Virtual class public types (including callbacks and access types)
    using KBookmarkActionMenu_MetaObject_Callback = QMetaObject* (*)(const KBookmarkActionMenu*);
    using KBookmarkActionMenu_Metacast_Callback = void* (*)(KBookmarkActionMenu*, const char*);
    using KBookmarkActionMenu_Metacall_Callback = int (*)(KBookmarkActionMenu*, int, int, void**);
    using KBookmarkActionMenu_CreateWidget_Callback = QWidget* (*)(KBookmarkActionMenu*, QWidget*);
    using KBookmarkActionMenu_Event_Callback = bool (*)(KBookmarkActionMenu*, QEvent*);
    using KBookmarkActionMenu_EventFilter_Callback = bool (*)(KBookmarkActionMenu*, QObject*, QEvent*);
    using KBookmarkActionMenu_DeleteWidget_Callback = void (*)(KBookmarkActionMenu*, QWidget*);
    using KBookmarkActionMenu_TimerEvent_Callback = void (*)(KBookmarkActionMenu*, QTimerEvent*);
    using KBookmarkActionMenu_ChildEvent_Callback = void (*)(KBookmarkActionMenu*, QChildEvent*);
    using KBookmarkActionMenu_CustomEvent_Callback = void (*)(KBookmarkActionMenu*, QEvent*);
    using KBookmarkActionMenu_ConnectNotify_Callback = void (*)(KBookmarkActionMenu*, QMetaMethod*);
    using KBookmarkActionMenu_DisconnectNotify_Callback = void (*)(KBookmarkActionMenu*, QMetaMethod*);
    using KBookmarkActionMenu::createdWidgets;
    using KBookmarkActionMenu::isSignalConnected;
    using KBookmarkActionMenu::receivers;
    using KBookmarkActionMenu::sender;
    using KBookmarkActionMenu::senderSignalIndex;

    // Instance callback storage
    KBookmarkActionMenu_MetaObject_Callback kbookmarkactionmenu_metaobject_callback = nullptr;
    KBookmarkActionMenu_Metacast_Callback kbookmarkactionmenu_metacast_callback = nullptr;
    KBookmarkActionMenu_Metacall_Callback kbookmarkactionmenu_metacall_callback = nullptr;
    KBookmarkActionMenu_CreateWidget_Callback kbookmarkactionmenu_createwidget_callback = nullptr;
    KBookmarkActionMenu_Event_Callback kbookmarkactionmenu_event_callback = nullptr;
    KBookmarkActionMenu_EventFilter_Callback kbookmarkactionmenu_eventfilter_callback = nullptr;
    KBookmarkActionMenu_DeleteWidget_Callback kbookmarkactionmenu_deletewidget_callback = nullptr;
    KBookmarkActionMenu_TimerEvent_Callback kbookmarkactionmenu_timerevent_callback = nullptr;
    KBookmarkActionMenu_ChildEvent_Callback kbookmarkactionmenu_childevent_callback = nullptr;
    KBookmarkActionMenu_CustomEvent_Callback kbookmarkactionmenu_customevent_callback = nullptr;
    KBookmarkActionMenu_ConnectNotify_Callback kbookmarkactionmenu_connectnotify_callback = nullptr;
    KBookmarkActionMenu_DisconnectNotify_Callback kbookmarkactionmenu_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KBookmarkActionMenu {
        using KBookmarkActionMenu::childEvent;
        using KBookmarkActionMenu::connectNotify;
        using KBookmarkActionMenu::customEvent;
        using KBookmarkActionMenu::deleteWidget;
        using KBookmarkActionMenu::disconnectNotify;
        using KBookmarkActionMenu::event;
        using KBookmarkActionMenu::eventFilter;
        using KBookmarkActionMenu::timerEvent;
    };

    VirtualKBookmarkActionMenu(const KBookmark& bm, QObject* parent) : KBookmarkActionMenu(bm, parent) {};
    VirtualKBookmarkActionMenu(const KBookmark& bm, const QString& text, QObject* parent) : KBookmarkActionMenu(bm, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kbookmarkactionmenu_metaobject_callback) {
            QMetaObject* callback_ret = kbookmarkactionmenu_metaobject_callback(this);
            return callback_ret;
        }
        return KBookmarkActionMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kbookmarkactionmenu_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kbookmarkactionmenu_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkActionMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbookmarkactionmenu_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kbookmarkactionmenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkActionMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kbookmarkactionmenu_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = kbookmarkactionmenu_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkActionMenu::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kbookmarkactionmenu_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = kbookmarkactionmenu_event_callback(this, cbval1);
            return callback_ret;
        }
        return KBookmarkActionMenu::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kbookmarkactionmenu_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kbookmarkactionmenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KBookmarkActionMenu::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kbookmarkactionmenu_deletewidget_callback) {
            QWidget* cbval1 = widget;
            kbookmarkactionmenu_deletewidget_callback(this, cbval1);
            return;
        }
        KBookmarkActionMenu::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbookmarkactionmenu_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kbookmarkactionmenu_timerevent_callback(this, cbval1);
            return;
        }
        KBookmarkActionMenu::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbookmarkactionmenu_childevent_callback) {
            QChildEvent* cbval1 = event;
            kbookmarkactionmenu_childevent_callback(this, cbval1);
            return;
        }
        KBookmarkActionMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbookmarkactionmenu_customevent_callback) {
            QEvent* cbval1 = event;
            kbookmarkactionmenu_customevent_callback(this, cbval1);
            return;
        }
        KBookmarkActionMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbookmarkactionmenu_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbookmarkactionmenu_connectnotify_callback(this, cbval1);
            return;
        }
        KBookmarkActionMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbookmarkactionmenu_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbookmarkactionmenu_disconnectnotify_callback(this, cbval1);
            return;
        }
        KBookmarkActionMenu::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KBookmarkActionMenu_SuperEvent(KBookmarkActionMenu* self, QEvent* param1);
    friend bool KBookmarkActionMenu_SuperEventFilter(KBookmarkActionMenu* self, QObject* param1, QEvent* param2);
    friend void KBookmarkActionMenu_SuperDeleteWidget(KBookmarkActionMenu* self, QWidget* widget);
    friend void KBookmarkActionMenu_SuperTimerEvent(KBookmarkActionMenu* self, QTimerEvent* event);
    friend void KBookmarkActionMenu_SuperChildEvent(KBookmarkActionMenu* self, QChildEvent* event);
    friend void KBookmarkActionMenu_SuperCustomEvent(KBookmarkActionMenu* self, QEvent* event);
    friend void KBookmarkActionMenu_SuperConnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
    friend void KBookmarkActionMenu_SuperDisconnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
};

#endif
