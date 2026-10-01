#pragma once
#ifndef EXTRAS_KIO_LIBKNEWFILEMENU_HXX
#define EXTRAS_KIO_LIBKNEWFILEMENU_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNewFileMenu
class VirtualKNewFileMenu final : public KNewFileMenu {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNewFileMenu_MetaObject_Callback = QMetaObject* (*)(const KNewFileMenu*);
    using KNewFileMenu_Metacast_Callback = void* (*)(KNewFileMenu*, const char*);
    using KNewFileMenu_Metacall_Callback = int (*)(KNewFileMenu*, int, int, void**);
    using KNewFileMenu_SlotResult_Callback = void (*)(KNewFileMenu*, KJob*);
    using KNewFileMenu_CreateWidget_Callback = QWidget* (*)(KNewFileMenu*, QWidget*);
    using KNewFileMenu_Event_Callback = bool (*)(KNewFileMenu*, QEvent*);
    using KNewFileMenu_EventFilter_Callback = bool (*)(KNewFileMenu*, QObject*, QEvent*);
    using KNewFileMenu_DeleteWidget_Callback = void (*)(KNewFileMenu*, QWidget*);
    using KNewFileMenu_TimerEvent_Callback = void (*)(KNewFileMenu*, QTimerEvent*);
    using KNewFileMenu_ChildEvent_Callback = void (*)(KNewFileMenu*, QChildEvent*);
    using KNewFileMenu_CustomEvent_Callback = void (*)(KNewFileMenu*, QEvent*);
    using KNewFileMenu_ConnectNotify_Callback = void (*)(KNewFileMenu*, QMetaMethod*);
    using KNewFileMenu_DisconnectNotify_Callback = void (*)(KNewFileMenu*, QMetaMethod*);
    using KNewFileMenu::createdWidgets;
    using KNewFileMenu::isSignalConnected;
    using KNewFileMenu::receivers;
    using KNewFileMenu::sender;
    using KNewFileMenu::senderSignalIndex;

    // Instance callback storage
    KNewFileMenu_MetaObject_Callback knewfilemenu_metaobject_callback = nullptr;
    KNewFileMenu_Metacast_Callback knewfilemenu_metacast_callback = nullptr;
    KNewFileMenu_Metacall_Callback knewfilemenu_metacall_callback = nullptr;
    KNewFileMenu_SlotResult_Callback knewfilemenu_slotresult_callback = nullptr;
    KNewFileMenu_CreateWidget_Callback knewfilemenu_createwidget_callback = nullptr;
    KNewFileMenu_Event_Callback knewfilemenu_event_callback = nullptr;
    KNewFileMenu_EventFilter_Callback knewfilemenu_eventfilter_callback = nullptr;
    KNewFileMenu_DeleteWidget_Callback knewfilemenu_deletewidget_callback = nullptr;
    KNewFileMenu_TimerEvent_Callback knewfilemenu_timerevent_callback = nullptr;
    KNewFileMenu_ChildEvent_Callback knewfilemenu_childevent_callback = nullptr;
    KNewFileMenu_CustomEvent_Callback knewfilemenu_customevent_callback = nullptr;
    KNewFileMenu_ConnectNotify_Callback knewfilemenu_connectnotify_callback = nullptr;
    KNewFileMenu_DisconnectNotify_Callback knewfilemenu_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNewFileMenu {
        using KNewFileMenu::childEvent;
        using KNewFileMenu::connectNotify;
        using KNewFileMenu::customEvent;
        using KNewFileMenu::deleteWidget;
        using KNewFileMenu::disconnectNotify;
        using KNewFileMenu::event;
        using KNewFileMenu::eventFilter;
        using KNewFileMenu::slotResult;
        using KNewFileMenu::timerEvent;
    };

    VirtualKNewFileMenu(QObject* parent) : KNewFileMenu(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knewfilemenu_metaobject_callback) {
            QMetaObject* callback_ret = knewfilemenu_metaobject_callback(this);
            return callback_ret;
        }
        return KNewFileMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knewfilemenu_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knewfilemenu_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNewFileMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knewfilemenu_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knewfilemenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNewFileMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResult(KJob* job) override {
        if (knewfilemenu_slotresult_callback) {
            KJob* cbval1 = job;
            knewfilemenu_slotresult_callback(this, cbval1);
            return;
        }
        KNewFileMenu::slotResult(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (knewfilemenu_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = knewfilemenu_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return KNewFileMenu::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (knewfilemenu_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = knewfilemenu_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNewFileMenu::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (knewfilemenu_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = knewfilemenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNewFileMenu::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (knewfilemenu_deletewidget_callback) {
            QWidget* cbval1 = widget;
            knewfilemenu_deletewidget_callback(this, cbval1);
            return;
        }
        KNewFileMenu::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knewfilemenu_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knewfilemenu_timerevent_callback(this, cbval1);
            return;
        }
        KNewFileMenu::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knewfilemenu_childevent_callback) {
            QChildEvent* cbval1 = event;
            knewfilemenu_childevent_callback(this, cbval1);
            return;
        }
        KNewFileMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knewfilemenu_customevent_callback) {
            QEvent* cbval1 = event;
            knewfilemenu_customevent_callback(this, cbval1);
            return;
        }
        KNewFileMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knewfilemenu_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knewfilemenu_connectnotify_callback(this, cbval1);
            return;
        }
        KNewFileMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knewfilemenu_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knewfilemenu_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNewFileMenu::disconnectNotify(signal);
    }

    // Friend functions
    friend void KNewFileMenu_SuperSlotResult(KNewFileMenu* self, KJob* job);
    friend bool KNewFileMenu_SuperEvent(KNewFileMenu* self, QEvent* param1);
    friend bool KNewFileMenu_SuperEventFilter(KNewFileMenu* self, QObject* param1, QEvent* param2);
    friend void KNewFileMenu_SuperDeleteWidget(KNewFileMenu* self, QWidget* widget);
    friend void KNewFileMenu_SuperTimerEvent(KNewFileMenu* self, QTimerEvent* event);
    friend void KNewFileMenu_SuperChildEvent(KNewFileMenu* self, QChildEvent* event);
    friend void KNewFileMenu_SuperCustomEvent(KNewFileMenu* self, QEvent* event);
    friend void KNewFileMenu_SuperConnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
    friend void KNewFileMenu_SuperDisconnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
};

#endif
