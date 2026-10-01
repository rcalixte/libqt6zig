#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKRECENTFILESACTION_HXX
#define EXTRAS_KCONFIGWIDGETS_LIBKRECENTFILESACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRecentFilesAction
class VirtualKRecentFilesAction final : public KRecentFilesAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using KRecentFilesAction_MetaObject_Callback = QMetaObject* (*)(const KRecentFilesAction*);
    using KRecentFilesAction_Metacast_Callback = void* (*)(KRecentFilesAction*, const char*);
    using KRecentFilesAction_Metacall_Callback = int (*)(KRecentFilesAction*, int, int, void**);
    using KRecentFilesAction_RemoveAction_Callback = QAction* (*)(KRecentFilesAction*, QAction*);
    using KRecentFilesAction_Clear_Callback = void (*)(KRecentFilesAction*);
    using KRecentFilesAction_InsertAction_Callback = void (*)(KRecentFilesAction*, QAction*, QAction*);
    using KRecentFilesAction_SlotActionTriggered_Callback = void (*)(KRecentFilesAction*, QAction*);
    using KRecentFilesAction_CreateWidget_Callback = QWidget* (*)(KRecentFilesAction*, QWidget*);
    using KRecentFilesAction_DeleteWidget_Callback = void (*)(KRecentFilesAction*, QWidget*);
    using KRecentFilesAction_Event_Callback = bool (*)(KRecentFilesAction*, QEvent*);
    using KRecentFilesAction_EventFilter_Callback = bool (*)(KRecentFilesAction*, QObject*, QEvent*);
    using KRecentFilesAction_TimerEvent_Callback = void (*)(KRecentFilesAction*, QTimerEvent*);
    using KRecentFilesAction_ChildEvent_Callback = void (*)(KRecentFilesAction*, QChildEvent*);
    using KRecentFilesAction_CustomEvent_Callback = void (*)(KRecentFilesAction*, QEvent*);
    using KRecentFilesAction_ConnectNotify_Callback = void (*)(KRecentFilesAction*, QMetaMethod*);
    using KRecentFilesAction_DisconnectNotify_Callback = void (*)(KRecentFilesAction*, QMetaMethod*);
    using KRecentFilesAction::createdWidgets;
    using KRecentFilesAction::isSignalConnected;
    using KRecentFilesAction::receivers;
    using KRecentFilesAction::sender;
    using KRecentFilesAction::senderSignalIndex;
    using KRecentFilesAction::slotToggled;

    // Instance callback storage
    KRecentFilesAction_MetaObject_Callback krecentfilesaction_metaobject_callback = nullptr;
    KRecentFilesAction_Metacast_Callback krecentfilesaction_metacast_callback = nullptr;
    KRecentFilesAction_Metacall_Callback krecentfilesaction_metacall_callback = nullptr;
    KRecentFilesAction_RemoveAction_Callback krecentfilesaction_removeaction_callback = nullptr;
    KRecentFilesAction_Clear_Callback krecentfilesaction_clear_callback = nullptr;
    KRecentFilesAction_InsertAction_Callback krecentfilesaction_insertaction_callback = nullptr;
    KRecentFilesAction_SlotActionTriggered_Callback krecentfilesaction_slotactiontriggered_callback = nullptr;
    KRecentFilesAction_CreateWidget_Callback krecentfilesaction_createwidget_callback = nullptr;
    KRecentFilesAction_DeleteWidget_Callback krecentfilesaction_deletewidget_callback = nullptr;
    KRecentFilesAction_Event_Callback krecentfilesaction_event_callback = nullptr;
    KRecentFilesAction_EventFilter_Callback krecentfilesaction_eventfilter_callback = nullptr;
    KRecentFilesAction_TimerEvent_Callback krecentfilesaction_timerevent_callback = nullptr;
    KRecentFilesAction_ChildEvent_Callback krecentfilesaction_childevent_callback = nullptr;
    KRecentFilesAction_CustomEvent_Callback krecentfilesaction_customevent_callback = nullptr;
    KRecentFilesAction_ConnectNotify_Callback krecentfilesaction_connectnotify_callback = nullptr;
    KRecentFilesAction_DisconnectNotify_Callback krecentfilesaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KRecentFilesAction {
        using KRecentFilesAction::childEvent;
        using KRecentFilesAction::connectNotify;
        using KRecentFilesAction::createWidget;
        using KRecentFilesAction::customEvent;
        using KRecentFilesAction::deleteWidget;
        using KRecentFilesAction::disconnectNotify;
        using KRecentFilesAction::event;
        using KRecentFilesAction::eventFilter;
        using KRecentFilesAction::slotActionTriggered;
        using KRecentFilesAction::timerEvent;
    };

    VirtualKRecentFilesAction(QObject* parent) : KRecentFilesAction(parent) {};
    VirtualKRecentFilesAction(const QString& text, QObject* parent) : KRecentFilesAction(text, parent) {};
    VirtualKRecentFilesAction(const QIcon& icon, const QString& text, QObject* parent) : KRecentFilesAction(icon, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (krecentfilesaction_metaobject_callback) {
            QMetaObject* callback_ret = krecentfilesaction_metaobject_callback(this);
            return callback_ret;
        }
        return KRecentFilesAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (krecentfilesaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = krecentfilesaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KRecentFilesAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (krecentfilesaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = krecentfilesaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KRecentFilesAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* removeAction(QAction* action) override {
        if (krecentfilesaction_removeaction_callback) {
            QAction* cbval1 = action;
            QAction* callback_ret = krecentfilesaction_removeaction_callback(this, cbval1);
            return callback_ret;
        }
        return KRecentFilesAction::removeAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (krecentfilesaction_clear_callback) {
            krecentfilesaction_clear_callback(this);
            return;
        }
        KRecentFilesAction::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAction(QAction* before, QAction* action) override {
        if (krecentfilesaction_insertaction_callback) {
            QAction* cbval1 = before;
            QAction* cbval2 = action;
            krecentfilesaction_insertaction_callback(this, cbval1, cbval2);
            return;
        }
        KRecentFilesAction::insertAction(before, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered(QAction* action) override {
        if (krecentfilesaction_slotactiontriggered_callback) {
            QAction* cbval1 = action;
            krecentfilesaction_slotactiontriggered_callback(this, cbval1);
            return;
        }
        KRecentFilesAction::slotActionTriggered(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (krecentfilesaction_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = krecentfilesaction_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return KRecentFilesAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (krecentfilesaction_deletewidget_callback) {
            QWidget* cbval1 = widget;
            krecentfilesaction_deletewidget_callback(this, cbval1);
            return;
        }
        KRecentFilesAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (krecentfilesaction_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = krecentfilesaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return KRecentFilesAction::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (krecentfilesaction_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = krecentfilesaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KRecentFilesAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (krecentfilesaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            krecentfilesaction_timerevent_callback(this, cbval1);
            return;
        }
        KRecentFilesAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (krecentfilesaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            krecentfilesaction_childevent_callback(this, cbval1);
            return;
        }
        KRecentFilesAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (krecentfilesaction_customevent_callback) {
            QEvent* cbval1 = event;
            krecentfilesaction_customevent_callback(this, cbval1);
            return;
        }
        KRecentFilesAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (krecentfilesaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            krecentfilesaction_connectnotify_callback(this, cbval1);
            return;
        }
        KRecentFilesAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (krecentfilesaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            krecentfilesaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        KRecentFilesAction::disconnectNotify(signal);
    }

    // Friend functions
    friend void KRecentFilesAction_SuperSlotActionTriggered(KRecentFilesAction* self, QAction* action);
    friend QWidget* KRecentFilesAction_SuperCreateWidget(KRecentFilesAction* self, QWidget* parent);
    friend void KRecentFilesAction_SuperDeleteWidget(KRecentFilesAction* self, QWidget* widget);
    friend bool KRecentFilesAction_SuperEvent(KRecentFilesAction* self, QEvent* event);
    friend bool KRecentFilesAction_SuperEventFilter(KRecentFilesAction* self, QObject* watched, QEvent* event);
    friend void KRecentFilesAction_SuperTimerEvent(KRecentFilesAction* self, QTimerEvent* event);
    friend void KRecentFilesAction_SuperChildEvent(KRecentFilesAction* self, QChildEvent* event);
    friend void KRecentFilesAction_SuperCustomEvent(KRecentFilesAction* self, QEvent* event);
    friend void KRecentFilesAction_SuperConnectNotify(KRecentFilesAction* self, const QMetaMethod* signal);
    friend void KRecentFilesAction_SuperDisconnectNotify(KRecentFilesAction* self, const QMetaMethod* signal);
};

#endif
