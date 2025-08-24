#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKSELECTACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKSELECTACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSelectAction so that we can call protected methods
class VirtualKSelectAction final : public KSelectAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKSelectAction = true;

    // Virtual class public types (including callbacks)
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
    using KSelectAction_SlotToggled_Callback = void (*)(KSelectAction*, bool);
    using KSelectAction_CreatedWidgets_Callback = QWidget** (*)();
    using KSelectAction_Sender_Callback = QObject* (*)();
    using KSelectAction_SenderSignalIndex_Callback = int (*)();
    using KSelectAction_Receivers_Callback = int (*)(const KSelectAction*, const char*);
    using KSelectAction_IsSignalConnected_Callback = bool (*)(const KSelectAction*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KSelectAction_SlotToggled_Callback kselectaction_slottoggled_callback = nullptr;
    KSelectAction_CreatedWidgets_Callback kselectaction_createdwidgets_callback = nullptr;
    KSelectAction_Sender_Callback kselectaction_sender_callback = nullptr;
    KSelectAction_SenderSignalIndex_Callback kselectaction_sendersignalindex_callback = nullptr;
    KSelectAction_Receivers_Callback kselectaction_receivers_callback = nullptr;
    KSelectAction_IsSignalConnected_Callback kselectaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kselectaction_metacall_isbase = false;
    mutable bool kselectaction_removeaction_isbase = false;
    mutable bool kselectaction_insertaction_isbase = false;
    mutable bool kselectaction_slotactiontriggered_isbase = false;
    mutable bool kselectaction_createwidget_isbase = false;
    mutable bool kselectaction_deletewidget_isbase = false;
    mutable bool kselectaction_event_isbase = false;
    mutable bool kselectaction_eventfilter_isbase = false;
    mutable bool kselectaction_timerevent_isbase = false;
    mutable bool kselectaction_childevent_isbase = false;
    mutable bool kselectaction_customevent_isbase = false;
    mutable bool kselectaction_connectnotify_isbase = false;
    mutable bool kselectaction_disconnectnotify_isbase = false;
    mutable bool kselectaction_slottoggled_isbase = false;
    mutable bool kselectaction_createdwidgets_isbase = false;
    mutable bool kselectaction_sender_isbase = false;
    mutable bool kselectaction_sendersignalindex_isbase = false;
    mutable bool kselectaction_receivers_isbase = false;
    mutable bool kselectaction_issignalconnected_isbase = false;

  public:
    VirtualKSelectAction(QObject* parent) : KSelectAction(parent) {};
    VirtualKSelectAction(const QString& text, QObject* parent) : KSelectAction(text, parent) {};
    VirtualKSelectAction(const QIcon& icon, const QString& text, QObject* parent) : KSelectAction(icon, text, parent) {};

    ~VirtualKSelectAction() {
        kselectaction_metacall_callback = nullptr;
        kselectaction_removeaction_callback = nullptr;
        kselectaction_insertaction_callback = nullptr;
        kselectaction_slotactiontriggered_callback = nullptr;
        kselectaction_createwidget_callback = nullptr;
        kselectaction_deletewidget_callback = nullptr;
        kselectaction_event_callback = nullptr;
        kselectaction_eventfilter_callback = nullptr;
        kselectaction_timerevent_callback = nullptr;
        kselectaction_childevent_callback = nullptr;
        kselectaction_customevent_callback = nullptr;
        kselectaction_connectnotify_callback = nullptr;
        kselectaction_disconnectnotify_callback = nullptr;
        kselectaction_slottoggled_callback = nullptr;
        kselectaction_createdwidgets_callback = nullptr;
        kselectaction_sender_callback = nullptr;
        kselectaction_sendersignalindex_callback = nullptr;
        kselectaction_receivers_callback = nullptr;
        kselectaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKSelectAction_Metacall_Callback(KSelectAction_Metacall_Callback cb) { kselectaction_metacall_callback = cb; }
    inline void setKSelectAction_RemoveAction_Callback(KSelectAction_RemoveAction_Callback cb) { kselectaction_removeaction_callback = cb; }
    inline void setKSelectAction_InsertAction_Callback(KSelectAction_InsertAction_Callback cb) { kselectaction_insertaction_callback = cb; }
    inline void setKSelectAction_SlotActionTriggered_Callback(KSelectAction_SlotActionTriggered_Callback cb) { kselectaction_slotactiontriggered_callback = cb; }
    inline void setKSelectAction_CreateWidget_Callback(KSelectAction_CreateWidget_Callback cb) { kselectaction_createwidget_callback = cb; }
    inline void setKSelectAction_DeleteWidget_Callback(KSelectAction_DeleteWidget_Callback cb) { kselectaction_deletewidget_callback = cb; }
    inline void setKSelectAction_Event_Callback(KSelectAction_Event_Callback cb) { kselectaction_event_callback = cb; }
    inline void setKSelectAction_EventFilter_Callback(KSelectAction_EventFilter_Callback cb) { kselectaction_eventfilter_callback = cb; }
    inline void setKSelectAction_TimerEvent_Callback(KSelectAction_TimerEvent_Callback cb) { kselectaction_timerevent_callback = cb; }
    inline void setKSelectAction_ChildEvent_Callback(KSelectAction_ChildEvent_Callback cb) { kselectaction_childevent_callback = cb; }
    inline void setKSelectAction_CustomEvent_Callback(KSelectAction_CustomEvent_Callback cb) { kselectaction_customevent_callback = cb; }
    inline void setKSelectAction_ConnectNotify_Callback(KSelectAction_ConnectNotify_Callback cb) { kselectaction_connectnotify_callback = cb; }
    inline void setKSelectAction_DisconnectNotify_Callback(KSelectAction_DisconnectNotify_Callback cb) { kselectaction_disconnectnotify_callback = cb; }
    inline void setKSelectAction_SlotToggled_Callback(KSelectAction_SlotToggled_Callback cb) { kselectaction_slottoggled_callback = cb; }
    inline void setKSelectAction_CreatedWidgets_Callback(KSelectAction_CreatedWidgets_Callback cb) { kselectaction_createdwidgets_callback = cb; }
    inline void setKSelectAction_Sender_Callback(KSelectAction_Sender_Callback cb) { kselectaction_sender_callback = cb; }
    inline void setKSelectAction_SenderSignalIndex_Callback(KSelectAction_SenderSignalIndex_Callback cb) { kselectaction_sendersignalindex_callback = cb; }
    inline void setKSelectAction_Receivers_Callback(KSelectAction_Receivers_Callback cb) { kselectaction_receivers_callback = cb; }
    inline void setKSelectAction_IsSignalConnected_Callback(KSelectAction_IsSignalConnected_Callback cb) { kselectaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKSelectAction_Metacall_IsBase(bool value) const { kselectaction_metacall_isbase = value; }
    inline void setKSelectAction_RemoveAction_IsBase(bool value) const { kselectaction_removeaction_isbase = value; }
    inline void setKSelectAction_InsertAction_IsBase(bool value) const { kselectaction_insertaction_isbase = value; }
    inline void setKSelectAction_SlotActionTriggered_IsBase(bool value) const { kselectaction_slotactiontriggered_isbase = value; }
    inline void setKSelectAction_CreateWidget_IsBase(bool value) const { kselectaction_createwidget_isbase = value; }
    inline void setKSelectAction_DeleteWidget_IsBase(bool value) const { kselectaction_deletewidget_isbase = value; }
    inline void setKSelectAction_Event_IsBase(bool value) const { kselectaction_event_isbase = value; }
    inline void setKSelectAction_EventFilter_IsBase(bool value) const { kselectaction_eventfilter_isbase = value; }
    inline void setKSelectAction_TimerEvent_IsBase(bool value) const { kselectaction_timerevent_isbase = value; }
    inline void setKSelectAction_ChildEvent_IsBase(bool value) const { kselectaction_childevent_isbase = value; }
    inline void setKSelectAction_CustomEvent_IsBase(bool value) const { kselectaction_customevent_isbase = value; }
    inline void setKSelectAction_ConnectNotify_IsBase(bool value) const { kselectaction_connectnotify_isbase = value; }
    inline void setKSelectAction_DisconnectNotify_IsBase(bool value) const { kselectaction_disconnectnotify_isbase = value; }
    inline void setKSelectAction_SlotToggled_IsBase(bool value) const { kselectaction_slottoggled_isbase = value; }
    inline void setKSelectAction_CreatedWidgets_IsBase(bool value) const { kselectaction_createdwidgets_isbase = value; }
    inline void setKSelectAction_Sender_IsBase(bool value) const { kselectaction_sender_isbase = value; }
    inline void setKSelectAction_SenderSignalIndex_IsBase(bool value) const { kselectaction_sendersignalindex_isbase = value; }
    inline void setKSelectAction_Receivers_IsBase(bool value) const { kselectaction_receivers_isbase = value; }
    inline void setKSelectAction_IsSignalConnected_IsBase(bool value) const { kselectaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kselectaction_metacall_isbase) {
            kselectaction_metacall_isbase = false;
            return KSelectAction::qt_metacall(param1, param2, param3);
        } else if (kselectaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kselectaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KSelectAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* removeAction(QAction* action) override {
        if (kselectaction_removeaction_isbase) {
            kselectaction_removeaction_isbase = false;
            return KSelectAction::removeAction(action);
        } else if (kselectaction_removeaction_callback != nullptr) {
            QAction* cbval1 = action;

            QAction* callback_ret = kselectaction_removeaction_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSelectAction::removeAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAction(QAction* before, QAction* action) override {
        if (kselectaction_insertaction_isbase) {
            kselectaction_insertaction_isbase = false;
            KSelectAction::insertAction(before, action);
        } else if (kselectaction_insertaction_callback != nullptr) {
            QAction* cbval1 = before;
            QAction* cbval2 = action;

            kselectaction_insertaction_callback(this, cbval1, cbval2);
        } else {
            KSelectAction::insertAction(before, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered(QAction* action) override {
        if (kselectaction_slotactiontriggered_isbase) {
            kselectaction_slotactiontriggered_isbase = false;
            KSelectAction::slotActionTriggered(action);
        } else if (kselectaction_slotactiontriggered_callback != nullptr) {
            QAction* cbval1 = action;

            kselectaction_slotactiontriggered_callback(this, cbval1);
        } else {
            KSelectAction::slotActionTriggered(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kselectaction_createwidget_isbase) {
            kselectaction_createwidget_isbase = false;
            return KSelectAction::createWidget(parent);
        } else if (kselectaction_createwidget_callback != nullptr) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = kselectaction_createwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSelectAction::createWidget(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kselectaction_deletewidget_isbase) {
            kselectaction_deletewidget_isbase = false;
            KSelectAction::deleteWidget(widget);
        } else if (kselectaction_deletewidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            kselectaction_deletewidget_callback(this, cbval1);
        } else {
            KSelectAction::deleteWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kselectaction_event_isbase) {
            kselectaction_event_isbase = false;
            return KSelectAction::event(event);
        } else if (kselectaction_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kselectaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSelectAction::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kselectaction_eventfilter_isbase) {
            kselectaction_eventfilter_isbase = false;
            return KSelectAction::eventFilter(watched, event);
        } else if (kselectaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kselectaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KSelectAction::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kselectaction_timerevent_isbase) {
            kselectaction_timerevent_isbase = false;
            KSelectAction::timerEvent(event);
        } else if (kselectaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kselectaction_timerevent_callback(this, cbval1);
        } else {
            KSelectAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kselectaction_childevent_isbase) {
            kselectaction_childevent_isbase = false;
            KSelectAction::childEvent(event);
        } else if (kselectaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kselectaction_childevent_callback(this, cbval1);
        } else {
            KSelectAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kselectaction_customevent_isbase) {
            kselectaction_customevent_isbase = false;
            KSelectAction::customEvent(event);
        } else if (kselectaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kselectaction_customevent_callback(this, cbval1);
        } else {
            KSelectAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kselectaction_connectnotify_isbase) {
            kselectaction_connectnotify_isbase = false;
            KSelectAction::connectNotify(signal);
        } else if (kselectaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kselectaction_connectnotify_callback(this, cbval1);
        } else {
            KSelectAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kselectaction_disconnectnotify_isbase) {
            kselectaction_disconnectnotify_isbase = false;
            KSelectAction::disconnectNotify(signal);
        } else if (kselectaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kselectaction_disconnectnotify_callback(this, cbval1);
        } else {
            KSelectAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotToggled(bool param1) {
        if (kselectaction_slottoggled_isbase) {
            kselectaction_slottoggled_isbase = false;
            KSelectAction::slotToggled(param1);
        } else if (kselectaction_slottoggled_callback != nullptr) {
            bool cbval1 = param1;

            kselectaction_slottoggled_callback(this, cbval1);
        } else {
            KSelectAction::slotToggled(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (kselectaction_createdwidgets_isbase) {
            kselectaction_createdwidgets_isbase = false;
            return KSelectAction::createdWidgets();
        } else if (kselectaction_createdwidgets_callback != nullptr) {
            QWidget** callback_ret = kselectaction_createdwidgets_callback();
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KSelectAction::createdWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kselectaction_sender_isbase) {
            kselectaction_sender_isbase = false;
            return KSelectAction::sender();
        } else if (kselectaction_sender_callback != nullptr) {
            QObject* callback_ret = kselectaction_sender_callback();
            return callback_ret;
        } else {
            return KSelectAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kselectaction_sendersignalindex_isbase) {
            kselectaction_sendersignalindex_isbase = false;
            return KSelectAction::senderSignalIndex();
        } else if (kselectaction_sendersignalindex_callback != nullptr) {
            int callback_ret = kselectaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSelectAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kselectaction_receivers_isbase) {
            kselectaction_receivers_isbase = false;
            return KSelectAction::receivers(signal);
        } else if (kselectaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kselectaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSelectAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kselectaction_issignalconnected_isbase) {
            kselectaction_issignalconnected_isbase = false;
            return KSelectAction::isSignalConnected(signal);
        } else if (kselectaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kselectaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSelectAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KSelectAction_SlotActionTriggered(KSelectAction* self, QAction* action);
    friend void KSelectAction_QBaseSlotActionTriggered(KSelectAction* self, QAction* action);
    friend QWidget* KSelectAction_CreateWidget(KSelectAction* self, QWidget* parent);
    friend QWidget* KSelectAction_QBaseCreateWidget(KSelectAction* self, QWidget* parent);
    friend void KSelectAction_DeleteWidget(KSelectAction* self, QWidget* widget);
    friend void KSelectAction_QBaseDeleteWidget(KSelectAction* self, QWidget* widget);
    friend bool KSelectAction_Event(KSelectAction* self, QEvent* event);
    friend bool KSelectAction_QBaseEvent(KSelectAction* self, QEvent* event);
    friend bool KSelectAction_EventFilter(KSelectAction* self, QObject* watched, QEvent* event);
    friend bool KSelectAction_QBaseEventFilter(KSelectAction* self, QObject* watched, QEvent* event);
    friend void KSelectAction_TimerEvent(KSelectAction* self, QTimerEvent* event);
    friend void KSelectAction_QBaseTimerEvent(KSelectAction* self, QTimerEvent* event);
    friend void KSelectAction_ChildEvent(KSelectAction* self, QChildEvent* event);
    friend void KSelectAction_QBaseChildEvent(KSelectAction* self, QChildEvent* event);
    friend void KSelectAction_CustomEvent(KSelectAction* self, QEvent* event);
    friend void KSelectAction_QBaseCustomEvent(KSelectAction* self, QEvent* event);
    friend void KSelectAction_ConnectNotify(KSelectAction* self, const QMetaMethod* signal);
    friend void KSelectAction_QBaseConnectNotify(KSelectAction* self, const QMetaMethod* signal);
    friend void KSelectAction_DisconnectNotify(KSelectAction* self, const QMetaMethod* signal);
    friend void KSelectAction_QBaseDisconnectNotify(KSelectAction* self, const QMetaMethod* signal);
    friend void KSelectAction_SlotToggled(KSelectAction* self, bool param1);
    friend void KSelectAction_QBaseSlotToggled(KSelectAction* self, bool param1);
    friend libqt_list /* of QWidget* */ KSelectAction_CreatedWidgets(const KSelectAction* self);
    friend libqt_list /* of QWidget* */ KSelectAction_QBaseCreatedWidgets(const KSelectAction* self);
    friend QObject* KSelectAction_Sender(const KSelectAction* self);
    friend QObject* KSelectAction_QBaseSender(const KSelectAction* self);
    friend int KSelectAction_SenderSignalIndex(const KSelectAction* self);
    friend int KSelectAction_QBaseSenderSignalIndex(const KSelectAction* self);
    friend int KSelectAction_Receivers(const KSelectAction* self, const char* signal);
    friend int KSelectAction_QBaseReceivers(const KSelectAction* self, const char* signal);
    friend bool KSelectAction_IsSignalConnected(const KSelectAction* self, const QMetaMethod* signal);
    friend bool KSelectAction_QBaseIsSignalConnected(const KSelectAction* self, const QMetaMethod* signal);
};

#endif
