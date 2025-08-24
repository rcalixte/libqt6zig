#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKFONTSIZEACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKFONTSIZEACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFontSizeAction so that we can call protected methods
class VirtualKFontSizeAction final : public KFontSizeAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKFontSizeAction = true;

    // Virtual class public types (including callbacks)
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
    using KFontSizeAction_SlotToggled_Callback = void (*)(KFontSizeAction*, bool);
    using KFontSizeAction_CreatedWidgets_Callback = QWidget** (*)();
    using KFontSizeAction_Sender_Callback = QObject* (*)();
    using KFontSizeAction_SenderSignalIndex_Callback = int (*)();
    using KFontSizeAction_Receivers_Callback = int (*)(const KFontSizeAction*, const char*);
    using KFontSizeAction_IsSignalConnected_Callback = bool (*)(const KFontSizeAction*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KFontSizeAction_SlotToggled_Callback kfontsizeaction_slottoggled_callback = nullptr;
    KFontSizeAction_CreatedWidgets_Callback kfontsizeaction_createdwidgets_callback = nullptr;
    KFontSizeAction_Sender_Callback kfontsizeaction_sender_callback = nullptr;
    KFontSizeAction_SenderSignalIndex_Callback kfontsizeaction_sendersignalindex_callback = nullptr;
    KFontSizeAction_Receivers_Callback kfontsizeaction_receivers_callback = nullptr;
    KFontSizeAction_IsSignalConnected_Callback kfontsizeaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kfontsizeaction_metacall_isbase = false;
    mutable bool kfontsizeaction_slotactiontriggered_isbase = false;
    mutable bool kfontsizeaction_removeaction_isbase = false;
    mutable bool kfontsizeaction_insertaction_isbase = false;
    mutable bool kfontsizeaction_createwidget_isbase = false;
    mutable bool kfontsizeaction_deletewidget_isbase = false;
    mutable bool kfontsizeaction_event_isbase = false;
    mutable bool kfontsizeaction_eventfilter_isbase = false;
    mutable bool kfontsizeaction_timerevent_isbase = false;
    mutable bool kfontsizeaction_childevent_isbase = false;
    mutable bool kfontsizeaction_customevent_isbase = false;
    mutable bool kfontsizeaction_connectnotify_isbase = false;
    mutable bool kfontsizeaction_disconnectnotify_isbase = false;
    mutable bool kfontsizeaction_slottoggled_isbase = false;
    mutable bool kfontsizeaction_createdwidgets_isbase = false;
    mutable bool kfontsizeaction_sender_isbase = false;
    mutable bool kfontsizeaction_sendersignalindex_isbase = false;
    mutable bool kfontsizeaction_receivers_isbase = false;
    mutable bool kfontsizeaction_issignalconnected_isbase = false;

  public:
    VirtualKFontSizeAction(QObject* parent) : KFontSizeAction(parent) {};
    VirtualKFontSizeAction(const QString& text, QObject* parent) : KFontSizeAction(text, parent) {};
    VirtualKFontSizeAction(const QIcon& icon, const QString& text, QObject* parent) : KFontSizeAction(icon, text, parent) {};

    ~VirtualKFontSizeAction() {
        kfontsizeaction_metacall_callback = nullptr;
        kfontsizeaction_slotactiontriggered_callback = nullptr;
        kfontsizeaction_removeaction_callback = nullptr;
        kfontsizeaction_insertaction_callback = nullptr;
        kfontsizeaction_createwidget_callback = nullptr;
        kfontsizeaction_deletewidget_callback = nullptr;
        kfontsizeaction_event_callback = nullptr;
        kfontsizeaction_eventfilter_callback = nullptr;
        kfontsizeaction_timerevent_callback = nullptr;
        kfontsizeaction_childevent_callback = nullptr;
        kfontsizeaction_customevent_callback = nullptr;
        kfontsizeaction_connectnotify_callback = nullptr;
        kfontsizeaction_disconnectnotify_callback = nullptr;
        kfontsizeaction_slottoggled_callback = nullptr;
        kfontsizeaction_createdwidgets_callback = nullptr;
        kfontsizeaction_sender_callback = nullptr;
        kfontsizeaction_sendersignalindex_callback = nullptr;
        kfontsizeaction_receivers_callback = nullptr;
        kfontsizeaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKFontSizeAction_Metacall_Callback(KFontSizeAction_Metacall_Callback cb) { kfontsizeaction_metacall_callback = cb; }
    inline void setKFontSizeAction_SlotActionTriggered_Callback(KFontSizeAction_SlotActionTriggered_Callback cb) { kfontsizeaction_slotactiontriggered_callback = cb; }
    inline void setKFontSizeAction_RemoveAction_Callback(KFontSizeAction_RemoveAction_Callback cb) { kfontsizeaction_removeaction_callback = cb; }
    inline void setKFontSizeAction_InsertAction_Callback(KFontSizeAction_InsertAction_Callback cb) { kfontsizeaction_insertaction_callback = cb; }
    inline void setKFontSizeAction_CreateWidget_Callback(KFontSizeAction_CreateWidget_Callback cb) { kfontsizeaction_createwidget_callback = cb; }
    inline void setKFontSizeAction_DeleteWidget_Callback(KFontSizeAction_DeleteWidget_Callback cb) { kfontsizeaction_deletewidget_callback = cb; }
    inline void setKFontSizeAction_Event_Callback(KFontSizeAction_Event_Callback cb) { kfontsizeaction_event_callback = cb; }
    inline void setKFontSizeAction_EventFilter_Callback(KFontSizeAction_EventFilter_Callback cb) { kfontsizeaction_eventfilter_callback = cb; }
    inline void setKFontSizeAction_TimerEvent_Callback(KFontSizeAction_TimerEvent_Callback cb) { kfontsizeaction_timerevent_callback = cb; }
    inline void setKFontSizeAction_ChildEvent_Callback(KFontSizeAction_ChildEvent_Callback cb) { kfontsizeaction_childevent_callback = cb; }
    inline void setKFontSizeAction_CustomEvent_Callback(KFontSizeAction_CustomEvent_Callback cb) { kfontsizeaction_customevent_callback = cb; }
    inline void setKFontSizeAction_ConnectNotify_Callback(KFontSizeAction_ConnectNotify_Callback cb) { kfontsizeaction_connectnotify_callback = cb; }
    inline void setKFontSizeAction_DisconnectNotify_Callback(KFontSizeAction_DisconnectNotify_Callback cb) { kfontsizeaction_disconnectnotify_callback = cb; }
    inline void setKFontSizeAction_SlotToggled_Callback(KFontSizeAction_SlotToggled_Callback cb) { kfontsizeaction_slottoggled_callback = cb; }
    inline void setKFontSizeAction_CreatedWidgets_Callback(KFontSizeAction_CreatedWidgets_Callback cb) { kfontsizeaction_createdwidgets_callback = cb; }
    inline void setKFontSizeAction_Sender_Callback(KFontSizeAction_Sender_Callback cb) { kfontsizeaction_sender_callback = cb; }
    inline void setKFontSizeAction_SenderSignalIndex_Callback(KFontSizeAction_SenderSignalIndex_Callback cb) { kfontsizeaction_sendersignalindex_callback = cb; }
    inline void setKFontSizeAction_Receivers_Callback(KFontSizeAction_Receivers_Callback cb) { kfontsizeaction_receivers_callback = cb; }
    inline void setKFontSizeAction_IsSignalConnected_Callback(KFontSizeAction_IsSignalConnected_Callback cb) { kfontsizeaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKFontSizeAction_Metacall_IsBase(bool value) const { kfontsizeaction_metacall_isbase = value; }
    inline void setKFontSizeAction_SlotActionTriggered_IsBase(bool value) const { kfontsizeaction_slotactiontriggered_isbase = value; }
    inline void setKFontSizeAction_RemoveAction_IsBase(bool value) const { kfontsizeaction_removeaction_isbase = value; }
    inline void setKFontSizeAction_InsertAction_IsBase(bool value) const { kfontsizeaction_insertaction_isbase = value; }
    inline void setKFontSizeAction_CreateWidget_IsBase(bool value) const { kfontsizeaction_createwidget_isbase = value; }
    inline void setKFontSizeAction_DeleteWidget_IsBase(bool value) const { kfontsizeaction_deletewidget_isbase = value; }
    inline void setKFontSizeAction_Event_IsBase(bool value) const { kfontsizeaction_event_isbase = value; }
    inline void setKFontSizeAction_EventFilter_IsBase(bool value) const { kfontsizeaction_eventfilter_isbase = value; }
    inline void setKFontSizeAction_TimerEvent_IsBase(bool value) const { kfontsizeaction_timerevent_isbase = value; }
    inline void setKFontSizeAction_ChildEvent_IsBase(bool value) const { kfontsizeaction_childevent_isbase = value; }
    inline void setKFontSizeAction_CustomEvent_IsBase(bool value) const { kfontsizeaction_customevent_isbase = value; }
    inline void setKFontSizeAction_ConnectNotify_IsBase(bool value) const { kfontsizeaction_connectnotify_isbase = value; }
    inline void setKFontSizeAction_DisconnectNotify_IsBase(bool value) const { kfontsizeaction_disconnectnotify_isbase = value; }
    inline void setKFontSizeAction_SlotToggled_IsBase(bool value) const { kfontsizeaction_slottoggled_isbase = value; }
    inline void setKFontSizeAction_CreatedWidgets_IsBase(bool value) const { kfontsizeaction_createdwidgets_isbase = value; }
    inline void setKFontSizeAction_Sender_IsBase(bool value) const { kfontsizeaction_sender_isbase = value; }
    inline void setKFontSizeAction_SenderSignalIndex_IsBase(bool value) const { kfontsizeaction_sendersignalindex_isbase = value; }
    inline void setKFontSizeAction_Receivers_IsBase(bool value) const { kfontsizeaction_receivers_isbase = value; }
    inline void setKFontSizeAction_IsSignalConnected_IsBase(bool value) const { kfontsizeaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfontsizeaction_metacall_isbase) {
            kfontsizeaction_metacall_isbase = false;
            return KFontSizeAction::qt_metacall(param1, param2, param3);
        } else if (kfontsizeaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfontsizeaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFontSizeAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered(QAction* action) override {
        if (kfontsizeaction_slotactiontriggered_isbase) {
            kfontsizeaction_slotactiontriggered_isbase = false;
            KFontSizeAction::slotActionTriggered(action);
        } else if (kfontsizeaction_slotactiontriggered_callback != nullptr) {
            QAction* cbval1 = action;

            kfontsizeaction_slotactiontriggered_callback(this, cbval1);
        } else {
            KFontSizeAction::slotActionTriggered(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* removeAction(QAction* action) override {
        if (kfontsizeaction_removeaction_isbase) {
            kfontsizeaction_removeaction_isbase = false;
            return KFontSizeAction::removeAction(action);
        } else if (kfontsizeaction_removeaction_callback != nullptr) {
            QAction* cbval1 = action;

            QAction* callback_ret = kfontsizeaction_removeaction_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontSizeAction::removeAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAction(QAction* before, QAction* action) override {
        if (kfontsizeaction_insertaction_isbase) {
            kfontsizeaction_insertaction_isbase = false;
            KFontSizeAction::insertAction(before, action);
        } else if (kfontsizeaction_insertaction_callback != nullptr) {
            QAction* cbval1 = before;
            QAction* cbval2 = action;

            kfontsizeaction_insertaction_callback(this, cbval1, cbval2);
        } else {
            KFontSizeAction::insertAction(before, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kfontsizeaction_createwidget_isbase) {
            kfontsizeaction_createwidget_isbase = false;
            return KFontSizeAction::createWidget(parent);
        } else if (kfontsizeaction_createwidget_callback != nullptr) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = kfontsizeaction_createwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontSizeAction::createWidget(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kfontsizeaction_deletewidget_isbase) {
            kfontsizeaction_deletewidget_isbase = false;
            KFontSizeAction::deleteWidget(widget);
        } else if (kfontsizeaction_deletewidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            kfontsizeaction_deletewidget_callback(this, cbval1);
        } else {
            KFontSizeAction::deleteWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfontsizeaction_event_isbase) {
            kfontsizeaction_event_isbase = false;
            return KFontSizeAction::event(event);
        } else if (kfontsizeaction_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfontsizeaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontSizeAction::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfontsizeaction_eventfilter_isbase) {
            kfontsizeaction_eventfilter_isbase = false;
            return KFontSizeAction::eventFilter(watched, event);
        } else if (kfontsizeaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kfontsizeaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFontSizeAction::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfontsizeaction_timerevent_isbase) {
            kfontsizeaction_timerevent_isbase = false;
            KFontSizeAction::timerEvent(event);
        } else if (kfontsizeaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfontsizeaction_timerevent_callback(this, cbval1);
        } else {
            KFontSizeAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfontsizeaction_childevent_isbase) {
            kfontsizeaction_childevent_isbase = false;
            KFontSizeAction::childEvent(event);
        } else if (kfontsizeaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfontsizeaction_childevent_callback(this, cbval1);
        } else {
            KFontSizeAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfontsizeaction_customevent_isbase) {
            kfontsizeaction_customevent_isbase = false;
            KFontSizeAction::customEvent(event);
        } else if (kfontsizeaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfontsizeaction_customevent_callback(this, cbval1);
        } else {
            KFontSizeAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfontsizeaction_connectnotify_isbase) {
            kfontsizeaction_connectnotify_isbase = false;
            KFontSizeAction::connectNotify(signal);
        } else if (kfontsizeaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfontsizeaction_connectnotify_callback(this, cbval1);
        } else {
            KFontSizeAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfontsizeaction_disconnectnotify_isbase) {
            kfontsizeaction_disconnectnotify_isbase = false;
            KFontSizeAction::disconnectNotify(signal);
        } else if (kfontsizeaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfontsizeaction_disconnectnotify_callback(this, cbval1);
        } else {
            KFontSizeAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotToggled(bool param1) {
        if (kfontsizeaction_slottoggled_isbase) {
            kfontsizeaction_slottoggled_isbase = false;
            KFontSizeAction::slotToggled(param1);
        } else if (kfontsizeaction_slottoggled_callback != nullptr) {
            bool cbval1 = param1;

            kfontsizeaction_slottoggled_callback(this, cbval1);
        } else {
            KFontSizeAction::slotToggled(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (kfontsizeaction_createdwidgets_isbase) {
            kfontsizeaction_createdwidgets_isbase = false;
            return KFontSizeAction::createdWidgets();
        } else if (kfontsizeaction_createdwidgets_callback != nullptr) {
            QWidget** callback_ret = kfontsizeaction_createdwidgets_callback();
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KFontSizeAction::createdWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfontsizeaction_sender_isbase) {
            kfontsizeaction_sender_isbase = false;
            return KFontSizeAction::sender();
        } else if (kfontsizeaction_sender_callback != nullptr) {
            QObject* callback_ret = kfontsizeaction_sender_callback();
            return callback_ret;
        } else {
            return KFontSizeAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfontsizeaction_sendersignalindex_isbase) {
            kfontsizeaction_sendersignalindex_isbase = false;
            return KFontSizeAction::senderSignalIndex();
        } else if (kfontsizeaction_sendersignalindex_callback != nullptr) {
            int callback_ret = kfontsizeaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFontSizeAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfontsizeaction_receivers_isbase) {
            kfontsizeaction_receivers_isbase = false;
            return KFontSizeAction::receivers(signal);
        } else if (kfontsizeaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfontsizeaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFontSizeAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfontsizeaction_issignalconnected_isbase) {
            kfontsizeaction_issignalconnected_isbase = false;
            return KFontSizeAction::isSignalConnected(signal);
        } else if (kfontsizeaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfontsizeaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontSizeAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KFontSizeAction_SlotActionTriggered(KFontSizeAction* self, QAction* action);
    friend void KFontSizeAction_QBaseSlotActionTriggered(KFontSizeAction* self, QAction* action);
    friend QWidget* KFontSizeAction_CreateWidget(KFontSizeAction* self, QWidget* parent);
    friend QWidget* KFontSizeAction_QBaseCreateWidget(KFontSizeAction* self, QWidget* parent);
    friend void KFontSizeAction_DeleteWidget(KFontSizeAction* self, QWidget* widget);
    friend void KFontSizeAction_QBaseDeleteWidget(KFontSizeAction* self, QWidget* widget);
    friend bool KFontSizeAction_Event(KFontSizeAction* self, QEvent* event);
    friend bool KFontSizeAction_QBaseEvent(KFontSizeAction* self, QEvent* event);
    friend bool KFontSizeAction_EventFilter(KFontSizeAction* self, QObject* watched, QEvent* event);
    friend bool KFontSizeAction_QBaseEventFilter(KFontSizeAction* self, QObject* watched, QEvent* event);
    friend void KFontSizeAction_TimerEvent(KFontSizeAction* self, QTimerEvent* event);
    friend void KFontSizeAction_QBaseTimerEvent(KFontSizeAction* self, QTimerEvent* event);
    friend void KFontSizeAction_ChildEvent(KFontSizeAction* self, QChildEvent* event);
    friend void KFontSizeAction_QBaseChildEvent(KFontSizeAction* self, QChildEvent* event);
    friend void KFontSizeAction_CustomEvent(KFontSizeAction* self, QEvent* event);
    friend void KFontSizeAction_QBaseCustomEvent(KFontSizeAction* self, QEvent* event);
    friend void KFontSizeAction_ConnectNotify(KFontSizeAction* self, const QMetaMethod* signal);
    friend void KFontSizeAction_QBaseConnectNotify(KFontSizeAction* self, const QMetaMethod* signal);
    friend void KFontSizeAction_DisconnectNotify(KFontSizeAction* self, const QMetaMethod* signal);
    friend void KFontSizeAction_QBaseDisconnectNotify(KFontSizeAction* self, const QMetaMethod* signal);
    friend void KFontSizeAction_SlotToggled(KFontSizeAction* self, bool param1);
    friend void KFontSizeAction_QBaseSlotToggled(KFontSizeAction* self, bool param1);
    friend libqt_list /* of QWidget* */ KFontSizeAction_CreatedWidgets(const KFontSizeAction* self);
    friend libqt_list /* of QWidget* */ KFontSizeAction_QBaseCreatedWidgets(const KFontSizeAction* self);
    friend QObject* KFontSizeAction_Sender(const KFontSizeAction* self);
    friend QObject* KFontSizeAction_QBaseSender(const KFontSizeAction* self);
    friend int KFontSizeAction_SenderSignalIndex(const KFontSizeAction* self);
    friend int KFontSizeAction_QBaseSenderSignalIndex(const KFontSizeAction* self);
    friend int KFontSizeAction_Receivers(const KFontSizeAction* self, const char* signal);
    friend int KFontSizeAction_QBaseReceivers(const KFontSizeAction* self, const char* signal);
    friend bool KFontSizeAction_IsSignalConnected(const KFontSizeAction* self, const QMetaMethod* signal);
    friend bool KFontSizeAction_QBaseIsSignalConnected(const KFontSizeAction* self, const QMetaMethod* signal);
};

#endif
