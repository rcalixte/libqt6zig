#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKFONTACTION_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKFONTACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFontAction
class VirtualKFontAction final : public KFontAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFontAction_MetaObject_Callback = QMetaObject* (*)(const KFontAction*);
    using KFontAction_Metacast_Callback = void* (*)(KFontAction*, const char*);
    using KFontAction_Metacall_Callback = int (*)(KFontAction*, int, int, void**);
    using KFontAction_CreateWidget_Callback = QWidget* (*)(KFontAction*, QWidget*);
    using KFontAction_RemoveAction_Callback = QAction* (*)(KFontAction*, QAction*);
    using KFontAction_InsertAction_Callback = void (*)(KFontAction*, QAction*, QAction*);
    using KFontAction_SlotActionTriggered_Callback = void (*)(KFontAction*, QAction*);
    using KFontAction_DeleteWidget_Callback = void (*)(KFontAction*, QWidget*);
    using KFontAction_Event_Callback = bool (*)(KFontAction*, QEvent*);
    using KFontAction_EventFilter_Callback = bool (*)(KFontAction*, QObject*, QEvent*);
    using KFontAction_TimerEvent_Callback = void (*)(KFontAction*, QTimerEvent*);
    using KFontAction_ChildEvent_Callback = void (*)(KFontAction*, QChildEvent*);
    using KFontAction_CustomEvent_Callback = void (*)(KFontAction*, QEvent*);
    using KFontAction_ConnectNotify_Callback = void (*)(KFontAction*, QMetaMethod*);
    using KFontAction_DisconnectNotify_Callback = void (*)(KFontAction*, QMetaMethod*);
    using KFontAction::createdWidgets;
    using KFontAction::isSignalConnected;
    using KFontAction::receivers;
    using KFontAction::sender;
    using KFontAction::senderSignalIndex;
    using KFontAction::slotToggled;

    // Instance callback storage
    KFontAction_MetaObject_Callback kfontaction_metaobject_callback = nullptr;
    KFontAction_Metacast_Callback kfontaction_metacast_callback = nullptr;
    KFontAction_Metacall_Callback kfontaction_metacall_callback = nullptr;
    KFontAction_CreateWidget_Callback kfontaction_createwidget_callback = nullptr;
    KFontAction_RemoveAction_Callback kfontaction_removeaction_callback = nullptr;
    KFontAction_InsertAction_Callback kfontaction_insertaction_callback = nullptr;
    KFontAction_SlotActionTriggered_Callback kfontaction_slotactiontriggered_callback = nullptr;
    KFontAction_DeleteWidget_Callback kfontaction_deletewidget_callback = nullptr;
    KFontAction_Event_Callback kfontaction_event_callback = nullptr;
    KFontAction_EventFilter_Callback kfontaction_eventfilter_callback = nullptr;
    KFontAction_TimerEvent_Callback kfontaction_timerevent_callback = nullptr;
    KFontAction_ChildEvent_Callback kfontaction_childevent_callback = nullptr;
    KFontAction_CustomEvent_Callback kfontaction_customevent_callback = nullptr;
    KFontAction_ConnectNotify_Callback kfontaction_connectnotify_callback = nullptr;
    KFontAction_DisconnectNotify_Callback kfontaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFontAction {
        using KFontAction::childEvent;
        using KFontAction::connectNotify;
        using KFontAction::customEvent;
        using KFontAction::deleteWidget;
        using KFontAction::disconnectNotify;
        using KFontAction::event;
        using KFontAction::eventFilter;
        using KFontAction::slotActionTriggered;
        using KFontAction::timerEvent;
    };

    VirtualKFontAction(uint fontListCriteria, QObject* parent) : KFontAction(fontListCriteria, parent) {};
    VirtualKFontAction(QObject* parent) : KFontAction(parent) {};
    VirtualKFontAction(const QString& text, QObject* parent) : KFontAction(text, parent) {};
    VirtualKFontAction(const QIcon& icon, const QString& text, QObject* parent) : KFontAction(icon, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfontaction_metaobject_callback) {
            QMetaObject* callback_ret = kfontaction_metaobject_callback(this);
            return callback_ret;
        }
        return KFontAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfontaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfontaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFontAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfontaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfontaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFontAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kfontaction_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = kfontaction_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return KFontAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* removeAction(QAction* action) override {
        if (kfontaction_removeaction_callback) {
            QAction* cbval1 = action;
            QAction* callback_ret = kfontaction_removeaction_callback(this, cbval1);
            return callback_ret;
        }
        return KFontAction::removeAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAction(QAction* before, QAction* action) override {
        if (kfontaction_insertaction_callback) {
            QAction* cbval1 = before;
            QAction* cbval2 = action;
            kfontaction_insertaction_callback(this, cbval1, cbval2);
            return;
        }
        KFontAction::insertAction(before, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered(QAction* action) override {
        if (kfontaction_slotactiontriggered_callback) {
            QAction* cbval1 = action;
            kfontaction_slotactiontriggered_callback(this, cbval1);
            return;
        }
        KFontAction::slotActionTriggered(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kfontaction_deletewidget_callback) {
            QWidget* cbval1 = widget;
            kfontaction_deletewidget_callback(this, cbval1);
            return;
        }
        KFontAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfontaction_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfontaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFontAction::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfontaction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kfontaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFontAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfontaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfontaction_timerevent_callback(this, cbval1);
            return;
        }
        KFontAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfontaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfontaction_childevent_callback(this, cbval1);
            return;
        }
        KFontAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfontaction_customevent_callback) {
            QEvent* cbval1 = event;
            kfontaction_customevent_callback(this, cbval1);
            return;
        }
        KFontAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfontaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfontaction_connectnotify_callback(this, cbval1);
            return;
        }
        KFontAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfontaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfontaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFontAction::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFontAction_SuperSlotActionTriggered(KFontAction* self, QAction* action);
    friend void KFontAction_SuperDeleteWidget(KFontAction* self, QWidget* widget);
    friend bool KFontAction_SuperEvent(KFontAction* self, QEvent* event);
    friend bool KFontAction_SuperEventFilter(KFontAction* self, QObject* watched, QEvent* event);
    friend void KFontAction_SuperTimerEvent(KFontAction* self, QTimerEvent* event);
    friend void KFontAction_SuperChildEvent(KFontAction* self, QChildEvent* event);
    friend void KFontAction_SuperCustomEvent(KFontAction* self, QEvent* event);
    friend void KFontAction_SuperConnectNotify(KFontAction* self, const QMetaMethod* signal);
    friend void KFontAction_SuperDisconnectNotify(KFontAction* self, const QMetaMethod* signal);
};

#endif
