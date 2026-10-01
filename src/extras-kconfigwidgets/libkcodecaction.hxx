#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKCODECACTION_HXX
#define EXTRAS_KCONFIGWIDGETS_LIBKCODECACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCodecAction
class VirtualKCodecAction final : public KCodecAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCodecAction_MetaObject_Callback = QMetaObject* (*)(const KCodecAction*);
    using KCodecAction_Metacast_Callback = void* (*)(KCodecAction*, const char*);
    using KCodecAction_Metacall_Callback = int (*)(KCodecAction*, int, int, void**);
    using KCodecAction_SlotActionTriggered_Callback = void (*)(KCodecAction*, QAction*);
    using KCodecAction_RemoveAction_Callback = QAction* (*)(KCodecAction*, QAction*);
    using KCodecAction_InsertAction_Callback = void (*)(KCodecAction*, QAction*, QAction*);
    using KCodecAction_CreateWidget_Callback = QWidget* (*)(KCodecAction*, QWidget*);
    using KCodecAction_DeleteWidget_Callback = void (*)(KCodecAction*, QWidget*);
    using KCodecAction_Event_Callback = bool (*)(KCodecAction*, QEvent*);
    using KCodecAction_EventFilter_Callback = bool (*)(KCodecAction*, QObject*, QEvent*);
    using KCodecAction_TimerEvent_Callback = void (*)(KCodecAction*, QTimerEvent*);
    using KCodecAction_ChildEvent_Callback = void (*)(KCodecAction*, QChildEvent*);
    using KCodecAction_CustomEvent_Callback = void (*)(KCodecAction*, QEvent*);
    using KCodecAction_ConnectNotify_Callback = void (*)(KCodecAction*, QMetaMethod*);
    using KCodecAction_DisconnectNotify_Callback = void (*)(KCodecAction*, QMetaMethod*);
    using KCodecAction::createdWidgets;
    using KCodecAction::isSignalConnected;
    using KCodecAction::receivers;
    using KCodecAction::sender;
    using KCodecAction::senderSignalIndex;
    using KCodecAction::slotToggled;

    // Instance callback storage
    KCodecAction_MetaObject_Callback kcodecaction_metaobject_callback = nullptr;
    KCodecAction_Metacast_Callback kcodecaction_metacast_callback = nullptr;
    KCodecAction_Metacall_Callback kcodecaction_metacall_callback = nullptr;
    KCodecAction_SlotActionTriggered_Callback kcodecaction_slotactiontriggered_callback = nullptr;
    KCodecAction_RemoveAction_Callback kcodecaction_removeaction_callback = nullptr;
    KCodecAction_InsertAction_Callback kcodecaction_insertaction_callback = nullptr;
    KCodecAction_CreateWidget_Callback kcodecaction_createwidget_callback = nullptr;
    KCodecAction_DeleteWidget_Callback kcodecaction_deletewidget_callback = nullptr;
    KCodecAction_Event_Callback kcodecaction_event_callback = nullptr;
    KCodecAction_EventFilter_Callback kcodecaction_eventfilter_callback = nullptr;
    KCodecAction_TimerEvent_Callback kcodecaction_timerevent_callback = nullptr;
    KCodecAction_ChildEvent_Callback kcodecaction_childevent_callback = nullptr;
    KCodecAction_CustomEvent_Callback kcodecaction_customevent_callback = nullptr;
    KCodecAction_ConnectNotify_Callback kcodecaction_connectnotify_callback = nullptr;
    KCodecAction_DisconnectNotify_Callback kcodecaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KCodecAction {
        using KCodecAction::childEvent;
        using KCodecAction::connectNotify;
        using KCodecAction::createWidget;
        using KCodecAction::customEvent;
        using KCodecAction::deleteWidget;
        using KCodecAction::disconnectNotify;
        using KCodecAction::event;
        using KCodecAction::eventFilter;
        using KCodecAction::slotActionTriggered;
        using KCodecAction::timerEvent;
    };

    VirtualKCodecAction(QObject* parent) : KCodecAction(parent) {};
    VirtualKCodecAction(const QString& text, QObject* parent) : KCodecAction(text, parent) {};
    VirtualKCodecAction(const QIcon& icon, const QString& text, QObject* parent) : KCodecAction(icon, text, parent) {};
    VirtualKCodecAction(QObject* parent, bool showAutoOptions) : KCodecAction(parent, showAutoOptions) {};
    VirtualKCodecAction(const QString& text, QObject* parent, bool showAutoOptions) : KCodecAction(text, parent, showAutoOptions) {};
    VirtualKCodecAction(const QIcon& icon, const QString& text, QObject* parent, bool showAutoOptions) : KCodecAction(icon, text, parent, showAutoOptions) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcodecaction_metaobject_callback) {
            QMetaObject* callback_ret = kcodecaction_metaobject_callback(this);
            return callback_ret;
        }
        return KCodecAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcodecaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcodecaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCodecAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcodecaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcodecaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCodecAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered(QAction* param1) override {
        if (kcodecaction_slotactiontriggered_callback) {
            QAction* cbval1 = param1;
            kcodecaction_slotactiontriggered_callback(this, cbval1);
            return;
        }
        KCodecAction::slotActionTriggered(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* removeAction(QAction* action) override {
        if (kcodecaction_removeaction_callback) {
            QAction* cbval1 = action;
            QAction* callback_ret = kcodecaction_removeaction_callback(this, cbval1);
            return callback_ret;
        }
        return KCodecAction::removeAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAction(QAction* before, QAction* action) override {
        if (kcodecaction_insertaction_callback) {
            QAction* cbval1 = before;
            QAction* cbval2 = action;
            kcodecaction_insertaction_callback(this, cbval1, cbval2);
            return;
        }
        KCodecAction::insertAction(before, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kcodecaction_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = kcodecaction_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return KCodecAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kcodecaction_deletewidget_callback) {
            QWidget* cbval1 = widget;
            kcodecaction_deletewidget_callback(this, cbval1);
            return;
        }
        KCodecAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcodecaction_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcodecaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCodecAction::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcodecaction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcodecaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCodecAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcodecaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcodecaction_timerevent_callback(this, cbval1);
            return;
        }
        KCodecAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcodecaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcodecaction_childevent_callback(this, cbval1);
            return;
        }
        KCodecAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcodecaction_customevent_callback) {
            QEvent* cbval1 = event;
            kcodecaction_customevent_callback(this, cbval1);
            return;
        }
        KCodecAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcodecaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcodecaction_connectnotify_callback(this, cbval1);
            return;
        }
        KCodecAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcodecaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcodecaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCodecAction::disconnectNotify(signal);
    }

    // Friend functions
    friend void KCodecAction_SuperSlotActionTriggered(KCodecAction* self, QAction* param1);
    friend QWidget* KCodecAction_SuperCreateWidget(KCodecAction* self, QWidget* parent);
    friend void KCodecAction_SuperDeleteWidget(KCodecAction* self, QWidget* widget);
    friend bool KCodecAction_SuperEvent(KCodecAction* self, QEvent* event);
    friend bool KCodecAction_SuperEventFilter(KCodecAction* self, QObject* watched, QEvent* event);
    friend void KCodecAction_SuperTimerEvent(KCodecAction* self, QTimerEvent* event);
    friend void KCodecAction_SuperChildEvent(KCodecAction* self, QChildEvent* event);
    friend void KCodecAction_SuperCustomEvent(KCodecAction* self, QEvent* event);
    friend void KCodecAction_SuperConnectNotify(KCodecAction* self, const QMetaMethod* signal);
    friend void KCodecAction_SuperDisconnectNotify(KCodecAction* self, const QMetaMethod* signal);
};

#endif
