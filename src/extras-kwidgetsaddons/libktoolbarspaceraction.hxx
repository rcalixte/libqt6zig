#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKTOOLBARSPACERACTION_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKTOOLBARSPACERACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToolBarSpacerAction
class VirtualKToolBarSpacerAction final : public KToolBarSpacerAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KToolBarSpacerAction_MetaObject_Callback = QMetaObject* (*)(const KToolBarSpacerAction*);
    using KToolBarSpacerAction_Metacast_Callback = void* (*)(KToolBarSpacerAction*, const char*);
    using KToolBarSpacerAction_Metacall_Callback = int (*)(KToolBarSpacerAction*, int, int, void**);
    using KToolBarSpacerAction_CreateWidget_Callback = QWidget* (*)(KToolBarSpacerAction*, QWidget*);
    using KToolBarSpacerAction_Event_Callback = bool (*)(KToolBarSpacerAction*, QEvent*);
    using KToolBarSpacerAction_EventFilter_Callback = bool (*)(KToolBarSpacerAction*, QObject*, QEvent*);
    using KToolBarSpacerAction_DeleteWidget_Callback = void (*)(KToolBarSpacerAction*, QWidget*);
    using KToolBarSpacerAction_TimerEvent_Callback = void (*)(KToolBarSpacerAction*, QTimerEvent*);
    using KToolBarSpacerAction_ChildEvent_Callback = void (*)(KToolBarSpacerAction*, QChildEvent*);
    using KToolBarSpacerAction_CustomEvent_Callback = void (*)(KToolBarSpacerAction*, QEvent*);
    using KToolBarSpacerAction_ConnectNotify_Callback = void (*)(KToolBarSpacerAction*, QMetaMethod*);
    using KToolBarSpacerAction_DisconnectNotify_Callback = void (*)(KToolBarSpacerAction*, QMetaMethod*);
    using KToolBarSpacerAction::createdWidgets;
    using KToolBarSpacerAction::isSignalConnected;
    using KToolBarSpacerAction::receivers;
    using KToolBarSpacerAction::sender;
    using KToolBarSpacerAction::senderSignalIndex;

    // Instance callback storage
    KToolBarSpacerAction_MetaObject_Callback ktoolbarspaceraction_metaobject_callback = nullptr;
    KToolBarSpacerAction_Metacast_Callback ktoolbarspaceraction_metacast_callback = nullptr;
    KToolBarSpacerAction_Metacall_Callback ktoolbarspaceraction_metacall_callback = nullptr;
    KToolBarSpacerAction_CreateWidget_Callback ktoolbarspaceraction_createwidget_callback = nullptr;
    KToolBarSpacerAction_Event_Callback ktoolbarspaceraction_event_callback = nullptr;
    KToolBarSpacerAction_EventFilter_Callback ktoolbarspaceraction_eventfilter_callback = nullptr;
    KToolBarSpacerAction_DeleteWidget_Callback ktoolbarspaceraction_deletewidget_callback = nullptr;
    KToolBarSpacerAction_TimerEvent_Callback ktoolbarspaceraction_timerevent_callback = nullptr;
    KToolBarSpacerAction_ChildEvent_Callback ktoolbarspaceraction_childevent_callback = nullptr;
    KToolBarSpacerAction_CustomEvent_Callback ktoolbarspaceraction_customevent_callback = nullptr;
    KToolBarSpacerAction_ConnectNotify_Callback ktoolbarspaceraction_connectnotify_callback = nullptr;
    KToolBarSpacerAction_DisconnectNotify_Callback ktoolbarspaceraction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KToolBarSpacerAction {
        using KToolBarSpacerAction::childEvent;
        using KToolBarSpacerAction::connectNotify;
        using KToolBarSpacerAction::customEvent;
        using KToolBarSpacerAction::deleteWidget;
        using KToolBarSpacerAction::disconnectNotify;
        using KToolBarSpacerAction::event;
        using KToolBarSpacerAction::eventFilter;
        using KToolBarSpacerAction::timerEvent;
    };

    VirtualKToolBarSpacerAction(QObject* parent) : KToolBarSpacerAction(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktoolbarspaceraction_metaobject_callback) {
            QMetaObject* callback_ret = ktoolbarspaceraction_metaobject_callback(this);
            return callback_ret;
        }
        return KToolBarSpacerAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktoolbarspaceraction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktoolbarspaceraction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KToolBarSpacerAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktoolbarspaceraction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktoolbarspaceraction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KToolBarSpacerAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (ktoolbarspaceraction_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = ktoolbarspaceraction_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return KToolBarSpacerAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktoolbarspaceraction_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = ktoolbarspaceraction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KToolBarSpacerAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (ktoolbarspaceraction_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = ktoolbarspaceraction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KToolBarSpacerAction::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (ktoolbarspaceraction_deletewidget_callback) {
            QWidget* cbval1 = widget;
            ktoolbarspaceraction_deletewidget_callback(this, cbval1);
            return;
        }
        KToolBarSpacerAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktoolbarspaceraction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktoolbarspaceraction_timerevent_callback(this, cbval1);
            return;
        }
        KToolBarSpacerAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktoolbarspaceraction_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktoolbarspaceraction_childevent_callback(this, cbval1);
            return;
        }
        KToolBarSpacerAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktoolbarspaceraction_customevent_callback) {
            QEvent* cbval1 = event;
            ktoolbarspaceraction_customevent_callback(this, cbval1);
            return;
        }
        KToolBarSpacerAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktoolbarspaceraction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktoolbarspaceraction_connectnotify_callback(this, cbval1);
            return;
        }
        KToolBarSpacerAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktoolbarspaceraction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktoolbarspaceraction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KToolBarSpacerAction::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KToolBarSpacerAction_SuperEvent(KToolBarSpacerAction* self, QEvent* param1);
    friend bool KToolBarSpacerAction_SuperEventFilter(KToolBarSpacerAction* self, QObject* param1, QEvent* param2);
    friend void KToolBarSpacerAction_SuperDeleteWidget(KToolBarSpacerAction* self, QWidget* widget);
    friend void KToolBarSpacerAction_SuperTimerEvent(KToolBarSpacerAction* self, QTimerEvent* event);
    friend void KToolBarSpacerAction_SuperChildEvent(KToolBarSpacerAction* self, QChildEvent* event);
    friend void KToolBarSpacerAction_SuperCustomEvent(KToolBarSpacerAction* self, QEvent* event);
    friend void KToolBarSpacerAction_SuperConnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal);
    friend void KToolBarSpacerAction_SuperDisconnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal);
};

#endif
