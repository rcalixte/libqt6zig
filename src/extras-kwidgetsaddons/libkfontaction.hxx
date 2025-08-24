#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKFONTACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKFONTACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFontAction so that we can call protected methods
class VirtualKFontAction final : public KFontAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKFontAction = true;

    // Virtual class public types (including callbacks)
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
    using KFontAction_SlotToggled_Callback = void (*)(KFontAction*, bool);
    using KFontAction_CreatedWidgets_Callback = QWidget** (*)();
    using KFontAction_Sender_Callback = QObject* (*)();
    using KFontAction_SenderSignalIndex_Callback = int (*)();
    using KFontAction_Receivers_Callback = int (*)(const KFontAction*, const char*);
    using KFontAction_IsSignalConnected_Callback = bool (*)(const KFontAction*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KFontAction_SlotToggled_Callback kfontaction_slottoggled_callback = nullptr;
    KFontAction_CreatedWidgets_Callback kfontaction_createdwidgets_callback = nullptr;
    KFontAction_Sender_Callback kfontaction_sender_callback = nullptr;
    KFontAction_SenderSignalIndex_Callback kfontaction_sendersignalindex_callback = nullptr;
    KFontAction_Receivers_Callback kfontaction_receivers_callback = nullptr;
    KFontAction_IsSignalConnected_Callback kfontaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kfontaction_metacall_isbase = false;
    mutable bool kfontaction_createwidget_isbase = false;
    mutable bool kfontaction_removeaction_isbase = false;
    mutable bool kfontaction_insertaction_isbase = false;
    mutable bool kfontaction_slotactiontriggered_isbase = false;
    mutable bool kfontaction_deletewidget_isbase = false;
    mutable bool kfontaction_event_isbase = false;
    mutable bool kfontaction_eventfilter_isbase = false;
    mutable bool kfontaction_timerevent_isbase = false;
    mutable bool kfontaction_childevent_isbase = false;
    mutable bool kfontaction_customevent_isbase = false;
    mutable bool kfontaction_connectnotify_isbase = false;
    mutable bool kfontaction_disconnectnotify_isbase = false;
    mutable bool kfontaction_slottoggled_isbase = false;
    mutable bool kfontaction_createdwidgets_isbase = false;
    mutable bool kfontaction_sender_isbase = false;
    mutable bool kfontaction_sendersignalindex_isbase = false;
    mutable bool kfontaction_receivers_isbase = false;
    mutable bool kfontaction_issignalconnected_isbase = false;

  public:
    VirtualKFontAction(uint fontListCriteria, QObject* parent) : KFontAction(fontListCriteria, parent) {};
    VirtualKFontAction(QObject* parent) : KFontAction(parent) {};
    VirtualKFontAction(const QString& text, QObject* parent) : KFontAction(text, parent) {};
    VirtualKFontAction(const QIcon& icon, const QString& text, QObject* parent) : KFontAction(icon, text, parent) {};

    ~VirtualKFontAction() {
        kfontaction_metacall_callback = nullptr;
        kfontaction_createwidget_callback = nullptr;
        kfontaction_removeaction_callback = nullptr;
        kfontaction_insertaction_callback = nullptr;
        kfontaction_slotactiontriggered_callback = nullptr;
        kfontaction_deletewidget_callback = nullptr;
        kfontaction_event_callback = nullptr;
        kfontaction_eventfilter_callback = nullptr;
        kfontaction_timerevent_callback = nullptr;
        kfontaction_childevent_callback = nullptr;
        kfontaction_customevent_callback = nullptr;
        kfontaction_connectnotify_callback = nullptr;
        kfontaction_disconnectnotify_callback = nullptr;
        kfontaction_slottoggled_callback = nullptr;
        kfontaction_createdwidgets_callback = nullptr;
        kfontaction_sender_callback = nullptr;
        kfontaction_sendersignalindex_callback = nullptr;
        kfontaction_receivers_callback = nullptr;
        kfontaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKFontAction_Metacall_Callback(KFontAction_Metacall_Callback cb) { kfontaction_metacall_callback = cb; }
    inline void setKFontAction_CreateWidget_Callback(KFontAction_CreateWidget_Callback cb) { kfontaction_createwidget_callback = cb; }
    inline void setKFontAction_RemoveAction_Callback(KFontAction_RemoveAction_Callback cb) { kfontaction_removeaction_callback = cb; }
    inline void setKFontAction_InsertAction_Callback(KFontAction_InsertAction_Callback cb) { kfontaction_insertaction_callback = cb; }
    inline void setKFontAction_SlotActionTriggered_Callback(KFontAction_SlotActionTriggered_Callback cb) { kfontaction_slotactiontriggered_callback = cb; }
    inline void setKFontAction_DeleteWidget_Callback(KFontAction_DeleteWidget_Callback cb) { kfontaction_deletewidget_callback = cb; }
    inline void setKFontAction_Event_Callback(KFontAction_Event_Callback cb) { kfontaction_event_callback = cb; }
    inline void setKFontAction_EventFilter_Callback(KFontAction_EventFilter_Callback cb) { kfontaction_eventfilter_callback = cb; }
    inline void setKFontAction_TimerEvent_Callback(KFontAction_TimerEvent_Callback cb) { kfontaction_timerevent_callback = cb; }
    inline void setKFontAction_ChildEvent_Callback(KFontAction_ChildEvent_Callback cb) { kfontaction_childevent_callback = cb; }
    inline void setKFontAction_CustomEvent_Callback(KFontAction_CustomEvent_Callback cb) { kfontaction_customevent_callback = cb; }
    inline void setKFontAction_ConnectNotify_Callback(KFontAction_ConnectNotify_Callback cb) { kfontaction_connectnotify_callback = cb; }
    inline void setKFontAction_DisconnectNotify_Callback(KFontAction_DisconnectNotify_Callback cb) { kfontaction_disconnectnotify_callback = cb; }
    inline void setKFontAction_SlotToggled_Callback(KFontAction_SlotToggled_Callback cb) { kfontaction_slottoggled_callback = cb; }
    inline void setKFontAction_CreatedWidgets_Callback(KFontAction_CreatedWidgets_Callback cb) { kfontaction_createdwidgets_callback = cb; }
    inline void setKFontAction_Sender_Callback(KFontAction_Sender_Callback cb) { kfontaction_sender_callback = cb; }
    inline void setKFontAction_SenderSignalIndex_Callback(KFontAction_SenderSignalIndex_Callback cb) { kfontaction_sendersignalindex_callback = cb; }
    inline void setKFontAction_Receivers_Callback(KFontAction_Receivers_Callback cb) { kfontaction_receivers_callback = cb; }
    inline void setKFontAction_IsSignalConnected_Callback(KFontAction_IsSignalConnected_Callback cb) { kfontaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKFontAction_Metacall_IsBase(bool value) const { kfontaction_metacall_isbase = value; }
    inline void setKFontAction_CreateWidget_IsBase(bool value) const { kfontaction_createwidget_isbase = value; }
    inline void setKFontAction_RemoveAction_IsBase(bool value) const { kfontaction_removeaction_isbase = value; }
    inline void setKFontAction_InsertAction_IsBase(bool value) const { kfontaction_insertaction_isbase = value; }
    inline void setKFontAction_SlotActionTriggered_IsBase(bool value) const { kfontaction_slotactiontriggered_isbase = value; }
    inline void setKFontAction_DeleteWidget_IsBase(bool value) const { kfontaction_deletewidget_isbase = value; }
    inline void setKFontAction_Event_IsBase(bool value) const { kfontaction_event_isbase = value; }
    inline void setKFontAction_EventFilter_IsBase(bool value) const { kfontaction_eventfilter_isbase = value; }
    inline void setKFontAction_TimerEvent_IsBase(bool value) const { kfontaction_timerevent_isbase = value; }
    inline void setKFontAction_ChildEvent_IsBase(bool value) const { kfontaction_childevent_isbase = value; }
    inline void setKFontAction_CustomEvent_IsBase(bool value) const { kfontaction_customevent_isbase = value; }
    inline void setKFontAction_ConnectNotify_IsBase(bool value) const { kfontaction_connectnotify_isbase = value; }
    inline void setKFontAction_DisconnectNotify_IsBase(bool value) const { kfontaction_disconnectnotify_isbase = value; }
    inline void setKFontAction_SlotToggled_IsBase(bool value) const { kfontaction_slottoggled_isbase = value; }
    inline void setKFontAction_CreatedWidgets_IsBase(bool value) const { kfontaction_createdwidgets_isbase = value; }
    inline void setKFontAction_Sender_IsBase(bool value) const { kfontaction_sender_isbase = value; }
    inline void setKFontAction_SenderSignalIndex_IsBase(bool value) const { kfontaction_sendersignalindex_isbase = value; }
    inline void setKFontAction_Receivers_IsBase(bool value) const { kfontaction_receivers_isbase = value; }
    inline void setKFontAction_IsSignalConnected_IsBase(bool value) const { kfontaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfontaction_metacall_isbase) {
            kfontaction_metacall_isbase = false;
            return KFontAction::qt_metacall(param1, param2, param3);
        } else if (kfontaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfontaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFontAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kfontaction_createwidget_isbase) {
            kfontaction_createwidget_isbase = false;
            return KFontAction::createWidget(parent);
        } else if (kfontaction_createwidget_callback != nullptr) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = kfontaction_createwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontAction::createWidget(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* removeAction(QAction* action) override {
        if (kfontaction_removeaction_isbase) {
            kfontaction_removeaction_isbase = false;
            return KFontAction::removeAction(action);
        } else if (kfontaction_removeaction_callback != nullptr) {
            QAction* cbval1 = action;

            QAction* callback_ret = kfontaction_removeaction_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontAction::removeAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAction(QAction* before, QAction* action) override {
        if (kfontaction_insertaction_isbase) {
            kfontaction_insertaction_isbase = false;
            KFontAction::insertAction(before, action);
        } else if (kfontaction_insertaction_callback != nullptr) {
            QAction* cbval1 = before;
            QAction* cbval2 = action;

            kfontaction_insertaction_callback(this, cbval1, cbval2);
        } else {
            KFontAction::insertAction(before, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered(QAction* action) override {
        if (kfontaction_slotactiontriggered_isbase) {
            kfontaction_slotactiontriggered_isbase = false;
            KFontAction::slotActionTriggered(action);
        } else if (kfontaction_slotactiontriggered_callback != nullptr) {
            QAction* cbval1 = action;

            kfontaction_slotactiontriggered_callback(this, cbval1);
        } else {
            KFontAction::slotActionTriggered(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kfontaction_deletewidget_isbase) {
            kfontaction_deletewidget_isbase = false;
            KFontAction::deleteWidget(widget);
        } else if (kfontaction_deletewidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            kfontaction_deletewidget_callback(this, cbval1);
        } else {
            KFontAction::deleteWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfontaction_event_isbase) {
            kfontaction_event_isbase = false;
            return KFontAction::event(event);
        } else if (kfontaction_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfontaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontAction::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfontaction_eventfilter_isbase) {
            kfontaction_eventfilter_isbase = false;
            return KFontAction::eventFilter(watched, event);
        } else if (kfontaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kfontaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFontAction::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfontaction_timerevent_isbase) {
            kfontaction_timerevent_isbase = false;
            KFontAction::timerEvent(event);
        } else if (kfontaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfontaction_timerevent_callback(this, cbval1);
        } else {
            KFontAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfontaction_childevent_isbase) {
            kfontaction_childevent_isbase = false;
            KFontAction::childEvent(event);
        } else if (kfontaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfontaction_childevent_callback(this, cbval1);
        } else {
            KFontAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfontaction_customevent_isbase) {
            kfontaction_customevent_isbase = false;
            KFontAction::customEvent(event);
        } else if (kfontaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfontaction_customevent_callback(this, cbval1);
        } else {
            KFontAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfontaction_connectnotify_isbase) {
            kfontaction_connectnotify_isbase = false;
            KFontAction::connectNotify(signal);
        } else if (kfontaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfontaction_connectnotify_callback(this, cbval1);
        } else {
            KFontAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfontaction_disconnectnotify_isbase) {
            kfontaction_disconnectnotify_isbase = false;
            KFontAction::disconnectNotify(signal);
        } else if (kfontaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfontaction_disconnectnotify_callback(this, cbval1);
        } else {
            KFontAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotToggled(bool param1) {
        if (kfontaction_slottoggled_isbase) {
            kfontaction_slottoggled_isbase = false;
            KFontAction::slotToggled(param1);
        } else if (kfontaction_slottoggled_callback != nullptr) {
            bool cbval1 = param1;

            kfontaction_slottoggled_callback(this, cbval1);
        } else {
            KFontAction::slotToggled(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (kfontaction_createdwidgets_isbase) {
            kfontaction_createdwidgets_isbase = false;
            return KFontAction::createdWidgets();
        } else if (kfontaction_createdwidgets_callback != nullptr) {
            QWidget** callback_ret = kfontaction_createdwidgets_callback();
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KFontAction::createdWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfontaction_sender_isbase) {
            kfontaction_sender_isbase = false;
            return KFontAction::sender();
        } else if (kfontaction_sender_callback != nullptr) {
            QObject* callback_ret = kfontaction_sender_callback();
            return callback_ret;
        } else {
            return KFontAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfontaction_sendersignalindex_isbase) {
            kfontaction_sendersignalindex_isbase = false;
            return KFontAction::senderSignalIndex();
        } else if (kfontaction_sendersignalindex_callback != nullptr) {
            int callback_ret = kfontaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFontAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfontaction_receivers_isbase) {
            kfontaction_receivers_isbase = false;
            return KFontAction::receivers(signal);
        } else if (kfontaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfontaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFontAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfontaction_issignalconnected_isbase) {
            kfontaction_issignalconnected_isbase = false;
            return KFontAction::isSignalConnected(signal);
        } else if (kfontaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfontaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KFontAction_SlotActionTriggered(KFontAction* self, QAction* action);
    friend void KFontAction_QBaseSlotActionTriggered(KFontAction* self, QAction* action);
    friend void KFontAction_DeleteWidget(KFontAction* self, QWidget* widget);
    friend void KFontAction_QBaseDeleteWidget(KFontAction* self, QWidget* widget);
    friend bool KFontAction_Event(KFontAction* self, QEvent* event);
    friend bool KFontAction_QBaseEvent(KFontAction* self, QEvent* event);
    friend bool KFontAction_EventFilter(KFontAction* self, QObject* watched, QEvent* event);
    friend bool KFontAction_QBaseEventFilter(KFontAction* self, QObject* watched, QEvent* event);
    friend void KFontAction_TimerEvent(KFontAction* self, QTimerEvent* event);
    friend void KFontAction_QBaseTimerEvent(KFontAction* self, QTimerEvent* event);
    friend void KFontAction_ChildEvent(KFontAction* self, QChildEvent* event);
    friend void KFontAction_QBaseChildEvent(KFontAction* self, QChildEvent* event);
    friend void KFontAction_CustomEvent(KFontAction* self, QEvent* event);
    friend void KFontAction_QBaseCustomEvent(KFontAction* self, QEvent* event);
    friend void KFontAction_ConnectNotify(KFontAction* self, const QMetaMethod* signal);
    friend void KFontAction_QBaseConnectNotify(KFontAction* self, const QMetaMethod* signal);
    friend void KFontAction_DisconnectNotify(KFontAction* self, const QMetaMethod* signal);
    friend void KFontAction_QBaseDisconnectNotify(KFontAction* self, const QMetaMethod* signal);
    friend void KFontAction_SlotToggled(KFontAction* self, bool param1);
    friend void KFontAction_QBaseSlotToggled(KFontAction* self, bool param1);
    friend libqt_list /* of QWidget* */ KFontAction_CreatedWidgets(const KFontAction* self);
    friend libqt_list /* of QWidget* */ KFontAction_QBaseCreatedWidgets(const KFontAction* self);
    friend QObject* KFontAction_Sender(const KFontAction* self);
    friend QObject* KFontAction_QBaseSender(const KFontAction* self);
    friend int KFontAction_SenderSignalIndex(const KFontAction* self);
    friend int KFontAction_QBaseSenderSignalIndex(const KFontAction* self);
    friend int KFontAction_Receivers(const KFontAction* self, const char* signal);
    friend int KFontAction_QBaseReceivers(const KFontAction* self, const char* signal);
    friend bool KFontAction_IsSignalConnected(const KFontAction* self, const QMetaMethod* signal);
    friend bool KFontAction_QBaseIsSignalConnected(const KFontAction* self, const QMetaMethod* signal);
};

#endif
