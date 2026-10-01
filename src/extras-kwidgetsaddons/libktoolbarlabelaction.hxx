#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKTOOLBARLABELACTION_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKTOOLBARLABELACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToolBarLabelAction
class VirtualKToolBarLabelAction final : public KToolBarLabelAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KToolBarLabelAction_MetaObject_Callback = QMetaObject* (*)(const KToolBarLabelAction*);
    using KToolBarLabelAction_Metacast_Callback = void* (*)(KToolBarLabelAction*, const char*);
    using KToolBarLabelAction_Metacall_Callback = int (*)(KToolBarLabelAction*, int, int, void**);
    using KToolBarLabelAction_CreateWidget_Callback = QWidget* (*)(KToolBarLabelAction*, QWidget*);
    using KToolBarLabelAction_Event_Callback = bool (*)(KToolBarLabelAction*, QEvent*);
    using KToolBarLabelAction_EventFilter_Callback = bool (*)(KToolBarLabelAction*, QObject*, QEvent*);
    using KToolBarLabelAction_DeleteWidget_Callback = void (*)(KToolBarLabelAction*, QWidget*);
    using KToolBarLabelAction_TimerEvent_Callback = void (*)(KToolBarLabelAction*, QTimerEvent*);
    using KToolBarLabelAction_ChildEvent_Callback = void (*)(KToolBarLabelAction*, QChildEvent*);
    using KToolBarLabelAction_CustomEvent_Callback = void (*)(KToolBarLabelAction*, QEvent*);
    using KToolBarLabelAction_ConnectNotify_Callback = void (*)(KToolBarLabelAction*, QMetaMethod*);
    using KToolBarLabelAction_DisconnectNotify_Callback = void (*)(KToolBarLabelAction*, QMetaMethod*);
    using KToolBarLabelAction::createdWidgets;
    using KToolBarLabelAction::isSignalConnected;
    using KToolBarLabelAction::receivers;
    using KToolBarLabelAction::sender;
    using KToolBarLabelAction::senderSignalIndex;

    // Instance callback storage
    KToolBarLabelAction_MetaObject_Callback ktoolbarlabelaction_metaobject_callback = nullptr;
    KToolBarLabelAction_Metacast_Callback ktoolbarlabelaction_metacast_callback = nullptr;
    KToolBarLabelAction_Metacall_Callback ktoolbarlabelaction_metacall_callback = nullptr;
    KToolBarLabelAction_CreateWidget_Callback ktoolbarlabelaction_createwidget_callback = nullptr;
    KToolBarLabelAction_Event_Callback ktoolbarlabelaction_event_callback = nullptr;
    KToolBarLabelAction_EventFilter_Callback ktoolbarlabelaction_eventfilter_callback = nullptr;
    KToolBarLabelAction_DeleteWidget_Callback ktoolbarlabelaction_deletewidget_callback = nullptr;
    KToolBarLabelAction_TimerEvent_Callback ktoolbarlabelaction_timerevent_callback = nullptr;
    KToolBarLabelAction_ChildEvent_Callback ktoolbarlabelaction_childevent_callback = nullptr;
    KToolBarLabelAction_CustomEvent_Callback ktoolbarlabelaction_customevent_callback = nullptr;
    KToolBarLabelAction_ConnectNotify_Callback ktoolbarlabelaction_connectnotify_callback = nullptr;
    KToolBarLabelAction_DisconnectNotify_Callback ktoolbarlabelaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KToolBarLabelAction {
        using KToolBarLabelAction::childEvent;
        using KToolBarLabelAction::connectNotify;
        using KToolBarLabelAction::customEvent;
        using KToolBarLabelAction::deleteWidget;
        using KToolBarLabelAction::disconnectNotify;
        using KToolBarLabelAction::event;
        using KToolBarLabelAction::eventFilter;
        using KToolBarLabelAction::timerEvent;
    };

    VirtualKToolBarLabelAction(const QString& text, QObject* parent) : KToolBarLabelAction(text, parent) {};
    VirtualKToolBarLabelAction(QAction* buddy, const QString& text, QObject* parent) : KToolBarLabelAction(buddy, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktoolbarlabelaction_metaobject_callback) {
            QMetaObject* callback_ret = ktoolbarlabelaction_metaobject_callback(this);
            return callback_ret;
        }
        return KToolBarLabelAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktoolbarlabelaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktoolbarlabelaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KToolBarLabelAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktoolbarlabelaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktoolbarlabelaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KToolBarLabelAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (ktoolbarlabelaction_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = ktoolbarlabelaction_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return KToolBarLabelAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktoolbarlabelaction_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = ktoolbarlabelaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KToolBarLabelAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktoolbarlabelaction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktoolbarlabelaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KToolBarLabelAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (ktoolbarlabelaction_deletewidget_callback) {
            QWidget* cbval1 = widget;
            ktoolbarlabelaction_deletewidget_callback(this, cbval1);
            return;
        }
        KToolBarLabelAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktoolbarlabelaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktoolbarlabelaction_timerevent_callback(this, cbval1);
            return;
        }
        KToolBarLabelAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktoolbarlabelaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktoolbarlabelaction_childevent_callback(this, cbval1);
            return;
        }
        KToolBarLabelAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktoolbarlabelaction_customevent_callback) {
            QEvent* cbval1 = event;
            ktoolbarlabelaction_customevent_callback(this, cbval1);
            return;
        }
        KToolBarLabelAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktoolbarlabelaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktoolbarlabelaction_connectnotify_callback(this, cbval1);
            return;
        }
        KToolBarLabelAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktoolbarlabelaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktoolbarlabelaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KToolBarLabelAction::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KToolBarLabelAction_SuperEvent(KToolBarLabelAction* self, QEvent* param1);
    friend bool KToolBarLabelAction_SuperEventFilter(KToolBarLabelAction* self, QObject* watched, QEvent* event);
    friend void KToolBarLabelAction_SuperDeleteWidget(KToolBarLabelAction* self, QWidget* widget);
    friend void KToolBarLabelAction_SuperTimerEvent(KToolBarLabelAction* self, QTimerEvent* event);
    friend void KToolBarLabelAction_SuperChildEvent(KToolBarLabelAction* self, QChildEvent* event);
    friend void KToolBarLabelAction_SuperCustomEvent(KToolBarLabelAction* self, QEvent* event);
    friend void KToolBarLabelAction_SuperConnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
    friend void KToolBarLabelAction_SuperDisconnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
};

#endif
