#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKFONTSIZEACTION_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKFONTSIZEACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFontSizeAction
class VirtualKFontSizeAction final : public KFontSizeAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFontSizeAction_MetaObject_Callback = QMetaObject* (*)(const KFontSizeAction*);
    using KFontSizeAction_Metacast_Callback = void* (*)(KFontSizeAction*, const char*);
    using KFontSizeAction_Metacall_Callback = int (*)(KFontSizeAction*, int, int, void**);
    using KFontSizeAction_SlotActionTriggered_Callback = void (*)(KFontSizeAction*, QAction*);
    using KFontSizeAction_RemoveAction_Callback = QAction* (*)(KFontSizeAction*, QAction*);
    using KFontSizeAction_InsertAction_Callback = void (*)(KFontSizeAction*, QAction*, QAction*);
    using KFontSizeAction_CreateWidget_Callback = QWidget* (*)(KFontSizeAction*, QWidget*);
    using KFontSizeAction_DeleteWidget_Callback = void (*)(KFontSizeAction*, QWidget*);
    using KFontSizeAction_Event_Callback = bool (*)(KFontSizeAction*, QEvent*);
    using KFontSizeAction_EventFilter_Callback = bool (*)(KFontSizeAction*, QObject*, QEvent*);
    using KFontSizeAction_TimerEvent_Callback = void (*)(KFontSizeAction*, QTimerEvent*);
    using KFontSizeAction_ChildEvent_Callback = void (*)(KFontSizeAction*, QChildEvent*);
    using KFontSizeAction_CustomEvent_Callback = void (*)(KFontSizeAction*, QEvent*);
    using KFontSizeAction_ConnectNotify_Callback = void (*)(KFontSizeAction*, QMetaMethod*);
    using KFontSizeAction_DisconnectNotify_Callback = void (*)(KFontSizeAction*, QMetaMethod*);
    using KFontSizeAction::createdWidgets;
    using KFontSizeAction::isSignalConnected;
    using KFontSizeAction::receivers;
    using KFontSizeAction::sender;
    using KFontSizeAction::senderSignalIndex;
    using KFontSizeAction::slotToggled;

    // Instance callback storage
    KFontSizeAction_MetaObject_Callback kfontsizeaction_metaobject_callback = nullptr;
    KFontSizeAction_Metacast_Callback kfontsizeaction_metacast_callback = nullptr;
    KFontSizeAction_Metacall_Callback kfontsizeaction_metacall_callback = nullptr;
    KFontSizeAction_SlotActionTriggered_Callback kfontsizeaction_slotactiontriggered_callback = nullptr;
    KFontSizeAction_RemoveAction_Callback kfontsizeaction_removeaction_callback = nullptr;
    KFontSizeAction_InsertAction_Callback kfontsizeaction_insertaction_callback = nullptr;
    KFontSizeAction_CreateWidget_Callback kfontsizeaction_createwidget_callback = nullptr;
    KFontSizeAction_DeleteWidget_Callback kfontsizeaction_deletewidget_callback = nullptr;
    KFontSizeAction_Event_Callback kfontsizeaction_event_callback = nullptr;
    KFontSizeAction_EventFilter_Callback kfontsizeaction_eventfilter_callback = nullptr;
    KFontSizeAction_TimerEvent_Callback kfontsizeaction_timerevent_callback = nullptr;
    KFontSizeAction_ChildEvent_Callback kfontsizeaction_childevent_callback = nullptr;
    KFontSizeAction_CustomEvent_Callback kfontsizeaction_customevent_callback = nullptr;
    KFontSizeAction_ConnectNotify_Callback kfontsizeaction_connectnotify_callback = nullptr;
    KFontSizeAction_DisconnectNotify_Callback kfontsizeaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFontSizeAction {
        using KFontSizeAction::childEvent;
        using KFontSizeAction::connectNotify;
        using KFontSizeAction::createWidget;
        using KFontSizeAction::customEvent;
        using KFontSizeAction::deleteWidget;
        using KFontSizeAction::disconnectNotify;
        using KFontSizeAction::event;
        using KFontSizeAction::eventFilter;
        using KFontSizeAction::slotActionTriggered;
        using KFontSizeAction::timerEvent;
    };

    VirtualKFontSizeAction(QObject* parent) : KFontSizeAction(parent) {};
    VirtualKFontSizeAction(const QString& text, QObject* parent) : KFontSizeAction(text, parent) {};
    VirtualKFontSizeAction(const QIcon& icon, const QString& text, QObject* parent) : KFontSizeAction(icon, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfontsizeaction_metaobject_callback) {
            QMetaObject* callback_ret = kfontsizeaction_metaobject_callback(this);
            return callback_ret;
        }
        return KFontSizeAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfontsizeaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfontsizeaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFontSizeAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfontsizeaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfontsizeaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFontSizeAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered(QAction* action) override {
        if (kfontsizeaction_slotactiontriggered_callback) {
            QAction* cbval1 = action;
            kfontsizeaction_slotactiontriggered_callback(this, cbval1);
            return;
        }
        KFontSizeAction::slotActionTriggered(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* removeAction(QAction* action) override {
        if (kfontsizeaction_removeaction_callback) {
            QAction* cbval1 = action;
            QAction* callback_ret = kfontsizeaction_removeaction_callback(this, cbval1);
            return callback_ret;
        }
        return KFontSizeAction::removeAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAction(QAction* before, QAction* action) override {
        if (kfontsizeaction_insertaction_callback) {
            QAction* cbval1 = before;
            QAction* cbval2 = action;
            kfontsizeaction_insertaction_callback(this, cbval1, cbval2);
            return;
        }
        KFontSizeAction::insertAction(before, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kfontsizeaction_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = kfontsizeaction_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return KFontSizeAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kfontsizeaction_deletewidget_callback) {
            QWidget* cbval1 = widget;
            kfontsizeaction_deletewidget_callback(this, cbval1);
            return;
        }
        KFontSizeAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfontsizeaction_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfontsizeaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFontSizeAction::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfontsizeaction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kfontsizeaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFontSizeAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfontsizeaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfontsizeaction_timerevent_callback(this, cbval1);
            return;
        }
        KFontSizeAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfontsizeaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfontsizeaction_childevent_callback(this, cbval1);
            return;
        }
        KFontSizeAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfontsizeaction_customevent_callback) {
            QEvent* cbval1 = event;
            kfontsizeaction_customevent_callback(this, cbval1);
            return;
        }
        KFontSizeAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfontsizeaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfontsizeaction_connectnotify_callback(this, cbval1);
            return;
        }
        KFontSizeAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfontsizeaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfontsizeaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFontSizeAction::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFontSizeAction_SuperSlotActionTriggered(KFontSizeAction* self, QAction* action);
    friend QWidget* KFontSizeAction_SuperCreateWidget(KFontSizeAction* self, QWidget* parent);
    friend void KFontSizeAction_SuperDeleteWidget(KFontSizeAction* self, QWidget* widget);
    friend bool KFontSizeAction_SuperEvent(KFontSizeAction* self, QEvent* event);
    friend bool KFontSizeAction_SuperEventFilter(KFontSizeAction* self, QObject* watched, QEvent* event);
    friend void KFontSizeAction_SuperTimerEvent(KFontSizeAction* self, QTimerEvent* event);
    friend void KFontSizeAction_SuperChildEvent(KFontSizeAction* self, QChildEvent* event);
    friend void KFontSizeAction_SuperCustomEvent(KFontSizeAction* self, QEvent* event);
    friend void KFontSizeAction_SuperConnectNotify(KFontSizeAction* self, const QMetaMethod* signal);
    friend void KFontSizeAction_SuperDisconnectNotify(KFontSizeAction* self, const QMetaMethod* signal);
};

#endif
