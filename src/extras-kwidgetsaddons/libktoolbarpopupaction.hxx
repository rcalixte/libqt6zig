#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKTOOLBARPOPUPACTION_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKTOOLBARPOPUPACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToolBarPopupAction
class VirtualKToolBarPopupAction final : public KToolBarPopupAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KToolBarPopupAction_MetaObject_Callback = QMetaObject* (*)(const KToolBarPopupAction*);
    using KToolBarPopupAction_Metacast_Callback = void* (*)(KToolBarPopupAction*, const char*);
    using KToolBarPopupAction_Metacall_Callback = int (*)(KToolBarPopupAction*, int, int, void**);
    using KToolBarPopupAction_CreateWidget_Callback = QWidget* (*)(KToolBarPopupAction*, QWidget*);
    using KToolBarPopupAction_Event_Callback = bool (*)(KToolBarPopupAction*, QEvent*);
    using KToolBarPopupAction_EventFilter_Callback = bool (*)(KToolBarPopupAction*, QObject*, QEvent*);
    using KToolBarPopupAction_DeleteWidget_Callback = void (*)(KToolBarPopupAction*, QWidget*);
    using KToolBarPopupAction_TimerEvent_Callback = void (*)(KToolBarPopupAction*, QTimerEvent*);
    using KToolBarPopupAction_ChildEvent_Callback = void (*)(KToolBarPopupAction*, QChildEvent*);
    using KToolBarPopupAction_CustomEvent_Callback = void (*)(KToolBarPopupAction*, QEvent*);
    using KToolBarPopupAction_ConnectNotify_Callback = void (*)(KToolBarPopupAction*, QMetaMethod*);
    using KToolBarPopupAction_DisconnectNotify_Callback = void (*)(KToolBarPopupAction*, QMetaMethod*);
    using KToolBarPopupAction::createdWidgets;
    using KToolBarPopupAction::isSignalConnected;
    using KToolBarPopupAction::receivers;
    using KToolBarPopupAction::sender;
    using KToolBarPopupAction::senderSignalIndex;

    // Instance callback storage
    KToolBarPopupAction_MetaObject_Callback ktoolbarpopupaction_metaobject_callback = nullptr;
    KToolBarPopupAction_Metacast_Callback ktoolbarpopupaction_metacast_callback = nullptr;
    KToolBarPopupAction_Metacall_Callback ktoolbarpopupaction_metacall_callback = nullptr;
    KToolBarPopupAction_CreateWidget_Callback ktoolbarpopupaction_createwidget_callback = nullptr;
    KToolBarPopupAction_Event_Callback ktoolbarpopupaction_event_callback = nullptr;
    KToolBarPopupAction_EventFilter_Callback ktoolbarpopupaction_eventfilter_callback = nullptr;
    KToolBarPopupAction_DeleteWidget_Callback ktoolbarpopupaction_deletewidget_callback = nullptr;
    KToolBarPopupAction_TimerEvent_Callback ktoolbarpopupaction_timerevent_callback = nullptr;
    KToolBarPopupAction_ChildEvent_Callback ktoolbarpopupaction_childevent_callback = nullptr;
    KToolBarPopupAction_CustomEvent_Callback ktoolbarpopupaction_customevent_callback = nullptr;
    KToolBarPopupAction_ConnectNotify_Callback ktoolbarpopupaction_connectnotify_callback = nullptr;
    KToolBarPopupAction_DisconnectNotify_Callback ktoolbarpopupaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KToolBarPopupAction {
        using KToolBarPopupAction::childEvent;
        using KToolBarPopupAction::connectNotify;
        using KToolBarPopupAction::customEvent;
        using KToolBarPopupAction::deleteWidget;
        using KToolBarPopupAction::disconnectNotify;
        using KToolBarPopupAction::event;
        using KToolBarPopupAction::eventFilter;
        using KToolBarPopupAction::timerEvent;
    };

    VirtualKToolBarPopupAction(const QIcon& icon, const QString& text, QObject* parent) : KToolBarPopupAction(icon, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktoolbarpopupaction_metaobject_callback) {
            QMetaObject* callback_ret = ktoolbarpopupaction_metaobject_callback(this);
            return callback_ret;
        }
        return KToolBarPopupAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktoolbarpopupaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktoolbarpopupaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KToolBarPopupAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktoolbarpopupaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktoolbarpopupaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KToolBarPopupAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (ktoolbarpopupaction_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = ktoolbarpopupaction_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return KToolBarPopupAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktoolbarpopupaction_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = ktoolbarpopupaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KToolBarPopupAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (ktoolbarpopupaction_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = ktoolbarpopupaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KToolBarPopupAction::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (ktoolbarpopupaction_deletewidget_callback) {
            QWidget* cbval1 = widget;
            ktoolbarpopupaction_deletewidget_callback(this, cbval1);
            return;
        }
        KToolBarPopupAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktoolbarpopupaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktoolbarpopupaction_timerevent_callback(this, cbval1);
            return;
        }
        KToolBarPopupAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktoolbarpopupaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktoolbarpopupaction_childevent_callback(this, cbval1);
            return;
        }
        KToolBarPopupAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktoolbarpopupaction_customevent_callback) {
            QEvent* cbval1 = event;
            ktoolbarpopupaction_customevent_callback(this, cbval1);
            return;
        }
        KToolBarPopupAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktoolbarpopupaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktoolbarpopupaction_connectnotify_callback(this, cbval1);
            return;
        }
        KToolBarPopupAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktoolbarpopupaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktoolbarpopupaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KToolBarPopupAction::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KToolBarPopupAction_SuperEvent(KToolBarPopupAction* self, QEvent* param1);
    friend bool KToolBarPopupAction_SuperEventFilter(KToolBarPopupAction* self, QObject* param1, QEvent* param2);
    friend void KToolBarPopupAction_SuperDeleteWidget(KToolBarPopupAction* self, QWidget* widget);
    friend void KToolBarPopupAction_SuperTimerEvent(KToolBarPopupAction* self, QTimerEvent* event);
    friend void KToolBarPopupAction_SuperChildEvent(KToolBarPopupAction* self, QChildEvent* event);
    friend void KToolBarPopupAction_SuperCustomEvent(KToolBarPopupAction* self, QEvent* event);
    friend void KToolBarPopupAction_SuperConnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal);
    friend void KToolBarPopupAction_SuperDisconnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal);
};

#endif
