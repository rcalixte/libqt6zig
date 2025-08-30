#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKRECENTFILESACTION_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKRECENTFILESACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRecentFilesAction so that we can call protected methods
class VirtualKRecentFilesAction final : public KRecentFilesAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKRecentFilesAction = true;

    // Virtual class public types (including callbacks)
    using KRecentFilesAction_Metacall_Callback = int (*)(KRecentFilesAction*, int, int, void**);
    using KRecentFilesAction_RemoveAction_Callback = QAction* (*)(KRecentFilesAction*, QAction*);
    using KRecentFilesAction_Clear_Callback = void (*)();
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
    using KRecentFilesAction_SlotToggled_Callback = void (*)(KRecentFilesAction*, bool);
    using KRecentFilesAction_CreatedWidgets_Callback = QWidget** (*)();
    using KRecentFilesAction_Sender_Callback = QObject* (*)();
    using KRecentFilesAction_SenderSignalIndex_Callback = int (*)();
    using KRecentFilesAction_Receivers_Callback = int (*)(const KRecentFilesAction*, const char*);
    using KRecentFilesAction_IsSignalConnected_Callback = bool (*)(const KRecentFilesAction*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KRecentFilesAction_SlotToggled_Callback krecentfilesaction_slottoggled_callback = nullptr;
    KRecentFilesAction_CreatedWidgets_Callback krecentfilesaction_createdwidgets_callback = nullptr;
    KRecentFilesAction_Sender_Callback krecentfilesaction_sender_callback = nullptr;
    KRecentFilesAction_SenderSignalIndex_Callback krecentfilesaction_sendersignalindex_callback = nullptr;
    KRecentFilesAction_Receivers_Callback krecentfilesaction_receivers_callback = nullptr;
    KRecentFilesAction_IsSignalConnected_Callback krecentfilesaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool krecentfilesaction_metacall_isbase = false;
    mutable bool krecentfilesaction_removeaction_isbase = false;
    mutable bool krecentfilesaction_clear_isbase = false;
    mutable bool krecentfilesaction_insertaction_isbase = false;
    mutable bool krecentfilesaction_slotactiontriggered_isbase = false;
    mutable bool krecentfilesaction_createwidget_isbase = false;
    mutable bool krecentfilesaction_deletewidget_isbase = false;
    mutable bool krecentfilesaction_event_isbase = false;
    mutable bool krecentfilesaction_eventfilter_isbase = false;
    mutable bool krecentfilesaction_timerevent_isbase = false;
    mutable bool krecentfilesaction_childevent_isbase = false;
    mutable bool krecentfilesaction_customevent_isbase = false;
    mutable bool krecentfilesaction_connectnotify_isbase = false;
    mutable bool krecentfilesaction_disconnectnotify_isbase = false;
    mutable bool krecentfilesaction_slottoggled_isbase = false;
    mutable bool krecentfilesaction_createdwidgets_isbase = false;
    mutable bool krecentfilesaction_sender_isbase = false;
    mutable bool krecentfilesaction_sendersignalindex_isbase = false;
    mutable bool krecentfilesaction_receivers_isbase = false;
    mutable bool krecentfilesaction_issignalconnected_isbase = false;

  public:
    VirtualKRecentFilesAction(QObject* parent) : KRecentFilesAction(parent) {};
    VirtualKRecentFilesAction(const QString& text, QObject* parent) : KRecentFilesAction(text, parent) {};
    VirtualKRecentFilesAction(const QIcon& icon, const QString& text, QObject* parent) : KRecentFilesAction(icon, text, parent) {};

    ~VirtualKRecentFilesAction() {
        krecentfilesaction_metacall_callback = nullptr;
        krecentfilesaction_removeaction_callback = nullptr;
        krecentfilesaction_clear_callback = nullptr;
        krecentfilesaction_insertaction_callback = nullptr;
        krecentfilesaction_slotactiontriggered_callback = nullptr;
        krecentfilesaction_createwidget_callback = nullptr;
        krecentfilesaction_deletewidget_callback = nullptr;
        krecentfilesaction_event_callback = nullptr;
        krecentfilesaction_eventfilter_callback = nullptr;
        krecentfilesaction_timerevent_callback = nullptr;
        krecentfilesaction_childevent_callback = nullptr;
        krecentfilesaction_customevent_callback = nullptr;
        krecentfilesaction_connectnotify_callback = nullptr;
        krecentfilesaction_disconnectnotify_callback = nullptr;
        krecentfilesaction_slottoggled_callback = nullptr;
        krecentfilesaction_createdwidgets_callback = nullptr;
        krecentfilesaction_sender_callback = nullptr;
        krecentfilesaction_sendersignalindex_callback = nullptr;
        krecentfilesaction_receivers_callback = nullptr;
        krecentfilesaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKRecentFilesAction_Metacall_Callback(KRecentFilesAction_Metacall_Callback cb) { krecentfilesaction_metacall_callback = cb; }
    inline void setKRecentFilesAction_RemoveAction_Callback(KRecentFilesAction_RemoveAction_Callback cb) { krecentfilesaction_removeaction_callback = cb; }
    inline void setKRecentFilesAction_Clear_Callback(KRecentFilesAction_Clear_Callback cb) { krecentfilesaction_clear_callback = cb; }
    inline void setKRecentFilesAction_InsertAction_Callback(KRecentFilesAction_InsertAction_Callback cb) { krecentfilesaction_insertaction_callback = cb; }
    inline void setKRecentFilesAction_SlotActionTriggered_Callback(KRecentFilesAction_SlotActionTriggered_Callback cb) { krecentfilesaction_slotactiontriggered_callback = cb; }
    inline void setKRecentFilesAction_CreateWidget_Callback(KRecentFilesAction_CreateWidget_Callback cb) { krecentfilesaction_createwidget_callback = cb; }
    inline void setKRecentFilesAction_DeleteWidget_Callback(KRecentFilesAction_DeleteWidget_Callback cb) { krecentfilesaction_deletewidget_callback = cb; }
    inline void setKRecentFilesAction_Event_Callback(KRecentFilesAction_Event_Callback cb) { krecentfilesaction_event_callback = cb; }
    inline void setKRecentFilesAction_EventFilter_Callback(KRecentFilesAction_EventFilter_Callback cb) { krecentfilesaction_eventfilter_callback = cb; }
    inline void setKRecentFilesAction_TimerEvent_Callback(KRecentFilesAction_TimerEvent_Callback cb) { krecentfilesaction_timerevent_callback = cb; }
    inline void setKRecentFilesAction_ChildEvent_Callback(KRecentFilesAction_ChildEvent_Callback cb) { krecentfilesaction_childevent_callback = cb; }
    inline void setKRecentFilesAction_CustomEvent_Callback(KRecentFilesAction_CustomEvent_Callback cb) { krecentfilesaction_customevent_callback = cb; }
    inline void setKRecentFilesAction_ConnectNotify_Callback(KRecentFilesAction_ConnectNotify_Callback cb) { krecentfilesaction_connectnotify_callback = cb; }
    inline void setKRecentFilesAction_DisconnectNotify_Callback(KRecentFilesAction_DisconnectNotify_Callback cb) { krecentfilesaction_disconnectnotify_callback = cb; }
    inline void setKRecentFilesAction_SlotToggled_Callback(KRecentFilesAction_SlotToggled_Callback cb) { krecentfilesaction_slottoggled_callback = cb; }
    inline void setKRecentFilesAction_CreatedWidgets_Callback(KRecentFilesAction_CreatedWidgets_Callback cb) { krecentfilesaction_createdwidgets_callback = cb; }
    inline void setKRecentFilesAction_Sender_Callback(KRecentFilesAction_Sender_Callback cb) { krecentfilesaction_sender_callback = cb; }
    inline void setKRecentFilesAction_SenderSignalIndex_Callback(KRecentFilesAction_SenderSignalIndex_Callback cb) { krecentfilesaction_sendersignalindex_callback = cb; }
    inline void setKRecentFilesAction_Receivers_Callback(KRecentFilesAction_Receivers_Callback cb) { krecentfilesaction_receivers_callback = cb; }
    inline void setKRecentFilesAction_IsSignalConnected_Callback(KRecentFilesAction_IsSignalConnected_Callback cb) { krecentfilesaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKRecentFilesAction_Metacall_IsBase(bool value) const { krecentfilesaction_metacall_isbase = value; }
    inline void setKRecentFilesAction_RemoveAction_IsBase(bool value) const { krecentfilesaction_removeaction_isbase = value; }
    inline void setKRecentFilesAction_Clear_IsBase(bool value) const { krecentfilesaction_clear_isbase = value; }
    inline void setKRecentFilesAction_InsertAction_IsBase(bool value) const { krecentfilesaction_insertaction_isbase = value; }
    inline void setKRecentFilesAction_SlotActionTriggered_IsBase(bool value) const { krecentfilesaction_slotactiontriggered_isbase = value; }
    inline void setKRecentFilesAction_CreateWidget_IsBase(bool value) const { krecentfilesaction_createwidget_isbase = value; }
    inline void setKRecentFilesAction_DeleteWidget_IsBase(bool value) const { krecentfilesaction_deletewidget_isbase = value; }
    inline void setKRecentFilesAction_Event_IsBase(bool value) const { krecentfilesaction_event_isbase = value; }
    inline void setKRecentFilesAction_EventFilter_IsBase(bool value) const { krecentfilesaction_eventfilter_isbase = value; }
    inline void setKRecentFilesAction_TimerEvent_IsBase(bool value) const { krecentfilesaction_timerevent_isbase = value; }
    inline void setKRecentFilesAction_ChildEvent_IsBase(bool value) const { krecentfilesaction_childevent_isbase = value; }
    inline void setKRecentFilesAction_CustomEvent_IsBase(bool value) const { krecentfilesaction_customevent_isbase = value; }
    inline void setKRecentFilesAction_ConnectNotify_IsBase(bool value) const { krecentfilesaction_connectnotify_isbase = value; }
    inline void setKRecentFilesAction_DisconnectNotify_IsBase(bool value) const { krecentfilesaction_disconnectnotify_isbase = value; }
    inline void setKRecentFilesAction_SlotToggled_IsBase(bool value) const { krecentfilesaction_slottoggled_isbase = value; }
    inline void setKRecentFilesAction_CreatedWidgets_IsBase(bool value) const { krecentfilesaction_createdwidgets_isbase = value; }
    inline void setKRecentFilesAction_Sender_IsBase(bool value) const { krecentfilesaction_sender_isbase = value; }
    inline void setKRecentFilesAction_SenderSignalIndex_IsBase(bool value) const { krecentfilesaction_sendersignalindex_isbase = value; }
    inline void setKRecentFilesAction_Receivers_IsBase(bool value) const { krecentfilesaction_receivers_isbase = value; }
    inline void setKRecentFilesAction_IsSignalConnected_IsBase(bool value) const { krecentfilesaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (krecentfilesaction_metacall_isbase) {
            krecentfilesaction_metacall_isbase = false;
            return KRecentFilesAction::qt_metacall(param1, param2, param3);
        } else if (krecentfilesaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = krecentfilesaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KRecentFilesAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* removeAction(QAction* action) override {
        if (krecentfilesaction_removeaction_isbase) {
            krecentfilesaction_removeaction_isbase = false;
            return KRecentFilesAction::removeAction(action);
        } else if (krecentfilesaction_removeaction_callback != nullptr) {
            QAction* cbval1 = action;

            QAction* callback_ret = krecentfilesaction_removeaction_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRecentFilesAction::removeAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (krecentfilesaction_clear_isbase) {
            krecentfilesaction_clear_isbase = false;
            KRecentFilesAction::clear();
        } else if (krecentfilesaction_clear_callback != nullptr) {
            krecentfilesaction_clear_callback();
        } else {
            KRecentFilesAction::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAction(QAction* before, QAction* action) override {
        if (krecentfilesaction_insertaction_isbase) {
            krecentfilesaction_insertaction_isbase = false;
            KRecentFilesAction::insertAction(before, action);
        } else if (krecentfilesaction_insertaction_callback != nullptr) {
            QAction* cbval1 = before;
            QAction* cbval2 = action;

            krecentfilesaction_insertaction_callback(this, cbval1, cbval2);
        } else {
            KRecentFilesAction::insertAction(before, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered(QAction* action) override {
        if (krecentfilesaction_slotactiontriggered_isbase) {
            krecentfilesaction_slotactiontriggered_isbase = false;
            KRecentFilesAction::slotActionTriggered(action);
        } else if (krecentfilesaction_slotactiontriggered_callback != nullptr) {
            QAction* cbval1 = action;

            krecentfilesaction_slotactiontriggered_callback(this, cbval1);
        } else {
            KRecentFilesAction::slotActionTriggered(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (krecentfilesaction_createwidget_isbase) {
            krecentfilesaction_createwidget_isbase = false;
            return KRecentFilesAction::createWidget(parent);
        } else if (krecentfilesaction_createwidget_callback != nullptr) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = krecentfilesaction_createwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRecentFilesAction::createWidget(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (krecentfilesaction_deletewidget_isbase) {
            krecentfilesaction_deletewidget_isbase = false;
            KRecentFilesAction::deleteWidget(widget);
        } else if (krecentfilesaction_deletewidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            krecentfilesaction_deletewidget_callback(this, cbval1);
        } else {
            KRecentFilesAction::deleteWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (krecentfilesaction_event_isbase) {
            krecentfilesaction_event_isbase = false;
            return KRecentFilesAction::event(event);
        } else if (krecentfilesaction_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = krecentfilesaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRecentFilesAction::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (krecentfilesaction_eventfilter_isbase) {
            krecentfilesaction_eventfilter_isbase = false;
            return KRecentFilesAction::eventFilter(watched, event);
        } else if (krecentfilesaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = krecentfilesaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KRecentFilesAction::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (krecentfilesaction_timerevent_isbase) {
            krecentfilesaction_timerevent_isbase = false;
            KRecentFilesAction::timerEvent(event);
        } else if (krecentfilesaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            krecentfilesaction_timerevent_callback(this, cbval1);
        } else {
            KRecentFilesAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (krecentfilesaction_childevent_isbase) {
            krecentfilesaction_childevent_isbase = false;
            KRecentFilesAction::childEvent(event);
        } else if (krecentfilesaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            krecentfilesaction_childevent_callback(this, cbval1);
        } else {
            KRecentFilesAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (krecentfilesaction_customevent_isbase) {
            krecentfilesaction_customevent_isbase = false;
            KRecentFilesAction::customEvent(event);
        } else if (krecentfilesaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            krecentfilesaction_customevent_callback(this, cbval1);
        } else {
            KRecentFilesAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (krecentfilesaction_connectnotify_isbase) {
            krecentfilesaction_connectnotify_isbase = false;
            KRecentFilesAction::connectNotify(signal);
        } else if (krecentfilesaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            krecentfilesaction_connectnotify_callback(this, cbval1);
        } else {
            KRecentFilesAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (krecentfilesaction_disconnectnotify_isbase) {
            krecentfilesaction_disconnectnotify_isbase = false;
            KRecentFilesAction::disconnectNotify(signal);
        } else if (krecentfilesaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            krecentfilesaction_disconnectnotify_callback(this, cbval1);
        } else {
            KRecentFilesAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotToggled(bool param1) {
        if (krecentfilesaction_slottoggled_isbase) {
            krecentfilesaction_slottoggled_isbase = false;
            KRecentFilesAction::slotToggled(param1);
        } else if (krecentfilesaction_slottoggled_callback != nullptr) {
            bool cbval1 = param1;

            krecentfilesaction_slottoggled_callback(this, cbval1);
        } else {
            KRecentFilesAction::slotToggled(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (krecentfilesaction_createdwidgets_isbase) {
            krecentfilesaction_createdwidgets_isbase = false;
            return KRecentFilesAction::createdWidgets();
        } else if (krecentfilesaction_createdwidgets_callback != nullptr) {
            QWidget** callback_ret = krecentfilesaction_createdwidgets_callback();
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KRecentFilesAction::createdWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (krecentfilesaction_sender_isbase) {
            krecentfilesaction_sender_isbase = false;
            return KRecentFilesAction::sender();
        } else if (krecentfilesaction_sender_callback != nullptr) {
            QObject* callback_ret = krecentfilesaction_sender_callback();
            return callback_ret;
        } else {
            return KRecentFilesAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (krecentfilesaction_sendersignalindex_isbase) {
            krecentfilesaction_sendersignalindex_isbase = false;
            return KRecentFilesAction::senderSignalIndex();
        } else if (krecentfilesaction_sendersignalindex_callback != nullptr) {
            int callback_ret = krecentfilesaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KRecentFilesAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (krecentfilesaction_receivers_isbase) {
            krecentfilesaction_receivers_isbase = false;
            return KRecentFilesAction::receivers(signal);
        } else if (krecentfilesaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = krecentfilesaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRecentFilesAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (krecentfilesaction_issignalconnected_isbase) {
            krecentfilesaction_issignalconnected_isbase = false;
            return KRecentFilesAction::isSignalConnected(signal);
        } else if (krecentfilesaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = krecentfilesaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRecentFilesAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KRecentFilesAction_SlotActionTriggered(KRecentFilesAction* self, QAction* action);
    friend void KRecentFilesAction_QBaseSlotActionTriggered(KRecentFilesAction* self, QAction* action);
    friend QWidget* KRecentFilesAction_CreateWidget(KRecentFilesAction* self, QWidget* parent);
    friend QWidget* KRecentFilesAction_QBaseCreateWidget(KRecentFilesAction* self, QWidget* parent);
    friend void KRecentFilesAction_DeleteWidget(KRecentFilesAction* self, QWidget* widget);
    friend void KRecentFilesAction_QBaseDeleteWidget(KRecentFilesAction* self, QWidget* widget);
    friend bool KRecentFilesAction_Event(KRecentFilesAction* self, QEvent* event);
    friend bool KRecentFilesAction_QBaseEvent(KRecentFilesAction* self, QEvent* event);
    friend bool KRecentFilesAction_EventFilter(KRecentFilesAction* self, QObject* watched, QEvent* event);
    friend bool KRecentFilesAction_QBaseEventFilter(KRecentFilesAction* self, QObject* watched, QEvent* event);
    friend void KRecentFilesAction_TimerEvent(KRecentFilesAction* self, QTimerEvent* event);
    friend void KRecentFilesAction_QBaseTimerEvent(KRecentFilesAction* self, QTimerEvent* event);
    friend void KRecentFilesAction_ChildEvent(KRecentFilesAction* self, QChildEvent* event);
    friend void KRecentFilesAction_QBaseChildEvent(KRecentFilesAction* self, QChildEvent* event);
    friend void KRecentFilesAction_CustomEvent(KRecentFilesAction* self, QEvent* event);
    friend void KRecentFilesAction_QBaseCustomEvent(KRecentFilesAction* self, QEvent* event);
    friend void KRecentFilesAction_ConnectNotify(KRecentFilesAction* self, const QMetaMethod* signal);
    friend void KRecentFilesAction_QBaseConnectNotify(KRecentFilesAction* self, const QMetaMethod* signal);
    friend void KRecentFilesAction_DisconnectNotify(KRecentFilesAction* self, const QMetaMethod* signal);
    friend void KRecentFilesAction_QBaseDisconnectNotify(KRecentFilesAction* self, const QMetaMethod* signal);
    friend void KRecentFilesAction_SlotToggled(KRecentFilesAction* self, bool param1);
    friend void KRecentFilesAction_QBaseSlotToggled(KRecentFilesAction* self, bool param1);
    friend libqt_list /* of QWidget* */ KRecentFilesAction_CreatedWidgets(const KRecentFilesAction* self);
    friend libqt_list /* of QWidget* */ KRecentFilesAction_QBaseCreatedWidgets(const KRecentFilesAction* self);
    friend QObject* KRecentFilesAction_Sender(const KRecentFilesAction* self);
    friend QObject* KRecentFilesAction_QBaseSender(const KRecentFilesAction* self);
    friend int KRecentFilesAction_SenderSignalIndex(const KRecentFilesAction* self);
    friend int KRecentFilesAction_QBaseSenderSignalIndex(const KRecentFilesAction* self);
    friend int KRecentFilesAction_Receivers(const KRecentFilesAction* self, const char* signal);
    friend int KRecentFilesAction_QBaseReceivers(const KRecentFilesAction* self, const char* signal);
    friend bool KRecentFilesAction_IsSignalConnected(const KRecentFilesAction* self, const QMetaMethod* signal);
    friend bool KRecentFilesAction_QBaseIsSignalConnected(const KRecentFilesAction* self, const QMetaMethod* signal);
};

#endif
