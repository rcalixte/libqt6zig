#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKSELECTACTION_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKSELECTACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSelectAction
class VirtualKSelectAction final : public KSelectAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSelectAction_MetaObject_Callback = QMetaObject* (*)(const KSelectAction*);
    using KSelectAction_Metacast_Callback = void* (*)(KSelectAction*, const char*);
    using KSelectAction_Metacall_Callback = int (*)(KSelectAction*, int, int, void**);
    using KSelectAction_RemoveAction_Callback = QAction* (*)(KSelectAction*, QAction*);
    using KSelectAction_InsertAction_Callback = void (*)(KSelectAction*, QAction*, QAction*);
    using KSelectAction_SlotActionTriggered_Callback = void (*)(KSelectAction*, QAction*);
    using KSelectAction_CreateWidget_Callback = QWidget* (*)(KSelectAction*, QWidget*);
    using KSelectAction_DeleteWidget_Callback = void (*)(KSelectAction*, QWidget*);
    using KSelectAction_Event_Callback = bool (*)(KSelectAction*, QEvent*);
    using KSelectAction_EventFilter_Callback = bool (*)(KSelectAction*, QObject*, QEvent*);
    using KSelectAction_TimerEvent_Callback = void (*)(KSelectAction*, QTimerEvent*);
    using KSelectAction_ChildEvent_Callback = void (*)(KSelectAction*, QChildEvent*);
    using KSelectAction_CustomEvent_Callback = void (*)(KSelectAction*, QEvent*);
    using KSelectAction_ConnectNotify_Callback = void (*)(KSelectAction*, QMetaMethod*);
    using KSelectAction_DisconnectNotify_Callback = void (*)(KSelectAction*, QMetaMethod*);
    using KSelectAction::createdWidgets;
    using KSelectAction::isSignalConnected;
    using KSelectAction::receivers;
    using KSelectAction::sender;
    using KSelectAction::senderSignalIndex;
    using KSelectAction::slotToggled;

    // Instance callback storage
    KSelectAction_MetaObject_Callback kselectaction_metaobject_callback = nullptr;
    KSelectAction_Metacast_Callback kselectaction_metacast_callback = nullptr;
    KSelectAction_Metacall_Callback kselectaction_metacall_callback = nullptr;
    KSelectAction_RemoveAction_Callback kselectaction_removeaction_callback = nullptr;
    KSelectAction_InsertAction_Callback kselectaction_insertaction_callback = nullptr;
    KSelectAction_SlotActionTriggered_Callback kselectaction_slotactiontriggered_callback = nullptr;
    KSelectAction_CreateWidget_Callback kselectaction_createwidget_callback = nullptr;
    KSelectAction_DeleteWidget_Callback kselectaction_deletewidget_callback = nullptr;
    KSelectAction_Event_Callback kselectaction_event_callback = nullptr;
    KSelectAction_EventFilter_Callback kselectaction_eventfilter_callback = nullptr;
    KSelectAction_TimerEvent_Callback kselectaction_timerevent_callback = nullptr;
    KSelectAction_ChildEvent_Callback kselectaction_childevent_callback = nullptr;
    KSelectAction_CustomEvent_Callback kselectaction_customevent_callback = nullptr;
    KSelectAction_ConnectNotify_Callback kselectaction_connectnotify_callback = nullptr;
    KSelectAction_DisconnectNotify_Callback kselectaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSelectAction {
        using KSelectAction::childEvent;
        using KSelectAction::connectNotify;
        using KSelectAction::createWidget;
        using KSelectAction::customEvent;
        using KSelectAction::deleteWidget;
        using KSelectAction::disconnectNotify;
        using KSelectAction::event;
        using KSelectAction::eventFilter;
        using KSelectAction::slotActionTriggered;
        using KSelectAction::timerEvent;
    };

    VirtualKSelectAction(QObject* parent) : KSelectAction(parent) {};
    VirtualKSelectAction(const QString& text, QObject* parent) : KSelectAction(text, parent) {};
    VirtualKSelectAction(const QIcon& icon, const QString& text, QObject* parent) : KSelectAction(icon, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kselectaction_metaobject_callback) {
            QMetaObject* callback_ret = kselectaction_metaobject_callback(this);
            return callback_ret;
        }
        return KSelectAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kselectaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kselectaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSelectAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kselectaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kselectaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSelectAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* removeAction(QAction* action) override {
        if (kselectaction_removeaction_callback) {
            QAction* cbval1 = action;
            QAction* callback_ret = kselectaction_removeaction_callback(this, cbval1);
            return callback_ret;
        }
        return KSelectAction::removeAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAction(QAction* before, QAction* action) override {
        if (kselectaction_insertaction_callback) {
            QAction* cbval1 = before;
            QAction* cbval2 = action;
            kselectaction_insertaction_callback(this, cbval1, cbval2);
            return;
        }
        KSelectAction::insertAction(before, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered(QAction* action) override {
        if (kselectaction_slotactiontriggered_callback) {
            QAction* cbval1 = action;
            kselectaction_slotactiontriggered_callback(this, cbval1);
            return;
        }
        KSelectAction::slotActionTriggered(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kselectaction_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = kselectaction_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return KSelectAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kselectaction_deletewidget_callback) {
            QWidget* cbval1 = widget;
            kselectaction_deletewidget_callback(this, cbval1);
            return;
        }
        KSelectAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kselectaction_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kselectaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSelectAction::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kselectaction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kselectaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSelectAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kselectaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kselectaction_timerevent_callback(this, cbval1);
            return;
        }
        KSelectAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kselectaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            kselectaction_childevent_callback(this, cbval1);
            return;
        }
        KSelectAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kselectaction_customevent_callback) {
            QEvent* cbval1 = event;
            kselectaction_customevent_callback(this, cbval1);
            return;
        }
        KSelectAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kselectaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kselectaction_connectnotify_callback(this, cbval1);
            return;
        }
        KSelectAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kselectaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kselectaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSelectAction::disconnectNotify(signal);
    }

    // Friend functions
    friend void KSelectAction_SuperSlotActionTriggered(KSelectAction* self, QAction* action);
    friend QWidget* KSelectAction_SuperCreateWidget(KSelectAction* self, QWidget* parent);
    friend void KSelectAction_SuperDeleteWidget(KSelectAction* self, QWidget* widget);
    friend bool KSelectAction_SuperEvent(KSelectAction* self, QEvent* event);
    friend bool KSelectAction_SuperEventFilter(KSelectAction* self, QObject* watched, QEvent* event);
    friend void KSelectAction_SuperTimerEvent(KSelectAction* self, QTimerEvent* event);
    friend void KSelectAction_SuperChildEvent(KSelectAction* self, QChildEvent* event);
    friend void KSelectAction_SuperCustomEvent(KSelectAction* self, QEvent* event);
    friend void KSelectAction_SuperConnectNotify(KSelectAction* self, const QMetaMethod* signal);
    friend void KSelectAction_SuperDisconnectNotify(KSelectAction* self, const QMetaMethod* signal);
};

#endif
