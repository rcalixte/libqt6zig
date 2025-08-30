#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKCODECACTION_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKCODECACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCodecAction so that we can call protected methods
class VirtualKCodecAction final : public KCodecAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKCodecAction = true;

    // Virtual class public types (including callbacks)
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
    using KCodecAction_SlotToggled_Callback = void (*)(KCodecAction*, bool);
    using KCodecAction_CreatedWidgets_Callback = QWidget** (*)();
    using KCodecAction_Sender_Callback = QObject* (*)();
    using KCodecAction_SenderSignalIndex_Callback = int (*)();
    using KCodecAction_Receivers_Callback = int (*)(const KCodecAction*, const char*);
    using KCodecAction_IsSignalConnected_Callback = bool (*)(const KCodecAction*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KCodecAction_SlotToggled_Callback kcodecaction_slottoggled_callback = nullptr;
    KCodecAction_CreatedWidgets_Callback kcodecaction_createdwidgets_callback = nullptr;
    KCodecAction_Sender_Callback kcodecaction_sender_callback = nullptr;
    KCodecAction_SenderSignalIndex_Callback kcodecaction_sendersignalindex_callback = nullptr;
    KCodecAction_Receivers_Callback kcodecaction_receivers_callback = nullptr;
    KCodecAction_IsSignalConnected_Callback kcodecaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcodecaction_metacall_isbase = false;
    mutable bool kcodecaction_slotactiontriggered_isbase = false;
    mutable bool kcodecaction_removeaction_isbase = false;
    mutable bool kcodecaction_insertaction_isbase = false;
    mutable bool kcodecaction_createwidget_isbase = false;
    mutable bool kcodecaction_deletewidget_isbase = false;
    mutable bool kcodecaction_event_isbase = false;
    mutable bool kcodecaction_eventfilter_isbase = false;
    mutable bool kcodecaction_timerevent_isbase = false;
    mutable bool kcodecaction_childevent_isbase = false;
    mutable bool kcodecaction_customevent_isbase = false;
    mutable bool kcodecaction_connectnotify_isbase = false;
    mutable bool kcodecaction_disconnectnotify_isbase = false;
    mutable bool kcodecaction_slottoggled_isbase = false;
    mutable bool kcodecaction_createdwidgets_isbase = false;
    mutable bool kcodecaction_sender_isbase = false;
    mutable bool kcodecaction_sendersignalindex_isbase = false;
    mutable bool kcodecaction_receivers_isbase = false;
    mutable bool kcodecaction_issignalconnected_isbase = false;

  public:
    VirtualKCodecAction(QObject* parent) : KCodecAction(parent) {};
    VirtualKCodecAction(const QString& text, QObject* parent) : KCodecAction(text, parent) {};
    VirtualKCodecAction(const QIcon& icon, const QString& text, QObject* parent) : KCodecAction(icon, text, parent) {};
    VirtualKCodecAction(QObject* parent, bool showAutoOptions) : KCodecAction(parent, showAutoOptions) {};
    VirtualKCodecAction(const QString& text, QObject* parent, bool showAutoOptions) : KCodecAction(text, parent, showAutoOptions) {};
    VirtualKCodecAction(const QIcon& icon, const QString& text, QObject* parent, bool showAutoOptions) : KCodecAction(icon, text, parent, showAutoOptions) {};

    ~VirtualKCodecAction() {
        kcodecaction_metacall_callback = nullptr;
        kcodecaction_slotactiontriggered_callback = nullptr;
        kcodecaction_removeaction_callback = nullptr;
        kcodecaction_insertaction_callback = nullptr;
        kcodecaction_createwidget_callback = nullptr;
        kcodecaction_deletewidget_callback = nullptr;
        kcodecaction_event_callback = nullptr;
        kcodecaction_eventfilter_callback = nullptr;
        kcodecaction_timerevent_callback = nullptr;
        kcodecaction_childevent_callback = nullptr;
        kcodecaction_customevent_callback = nullptr;
        kcodecaction_connectnotify_callback = nullptr;
        kcodecaction_disconnectnotify_callback = nullptr;
        kcodecaction_slottoggled_callback = nullptr;
        kcodecaction_createdwidgets_callback = nullptr;
        kcodecaction_sender_callback = nullptr;
        kcodecaction_sendersignalindex_callback = nullptr;
        kcodecaction_receivers_callback = nullptr;
        kcodecaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKCodecAction_Metacall_Callback(KCodecAction_Metacall_Callback cb) { kcodecaction_metacall_callback = cb; }
    inline void setKCodecAction_SlotActionTriggered_Callback(KCodecAction_SlotActionTriggered_Callback cb) { kcodecaction_slotactiontriggered_callback = cb; }
    inline void setKCodecAction_RemoveAction_Callback(KCodecAction_RemoveAction_Callback cb) { kcodecaction_removeaction_callback = cb; }
    inline void setKCodecAction_InsertAction_Callback(KCodecAction_InsertAction_Callback cb) { kcodecaction_insertaction_callback = cb; }
    inline void setKCodecAction_CreateWidget_Callback(KCodecAction_CreateWidget_Callback cb) { kcodecaction_createwidget_callback = cb; }
    inline void setKCodecAction_DeleteWidget_Callback(KCodecAction_DeleteWidget_Callback cb) { kcodecaction_deletewidget_callback = cb; }
    inline void setKCodecAction_Event_Callback(KCodecAction_Event_Callback cb) { kcodecaction_event_callback = cb; }
    inline void setKCodecAction_EventFilter_Callback(KCodecAction_EventFilter_Callback cb) { kcodecaction_eventfilter_callback = cb; }
    inline void setKCodecAction_TimerEvent_Callback(KCodecAction_TimerEvent_Callback cb) { kcodecaction_timerevent_callback = cb; }
    inline void setKCodecAction_ChildEvent_Callback(KCodecAction_ChildEvent_Callback cb) { kcodecaction_childevent_callback = cb; }
    inline void setKCodecAction_CustomEvent_Callback(KCodecAction_CustomEvent_Callback cb) { kcodecaction_customevent_callback = cb; }
    inline void setKCodecAction_ConnectNotify_Callback(KCodecAction_ConnectNotify_Callback cb) { kcodecaction_connectnotify_callback = cb; }
    inline void setKCodecAction_DisconnectNotify_Callback(KCodecAction_DisconnectNotify_Callback cb) { kcodecaction_disconnectnotify_callback = cb; }
    inline void setKCodecAction_SlotToggled_Callback(KCodecAction_SlotToggled_Callback cb) { kcodecaction_slottoggled_callback = cb; }
    inline void setKCodecAction_CreatedWidgets_Callback(KCodecAction_CreatedWidgets_Callback cb) { kcodecaction_createdwidgets_callback = cb; }
    inline void setKCodecAction_Sender_Callback(KCodecAction_Sender_Callback cb) { kcodecaction_sender_callback = cb; }
    inline void setKCodecAction_SenderSignalIndex_Callback(KCodecAction_SenderSignalIndex_Callback cb) { kcodecaction_sendersignalindex_callback = cb; }
    inline void setKCodecAction_Receivers_Callback(KCodecAction_Receivers_Callback cb) { kcodecaction_receivers_callback = cb; }
    inline void setKCodecAction_IsSignalConnected_Callback(KCodecAction_IsSignalConnected_Callback cb) { kcodecaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKCodecAction_Metacall_IsBase(bool value) const { kcodecaction_metacall_isbase = value; }
    inline void setKCodecAction_SlotActionTriggered_IsBase(bool value) const { kcodecaction_slotactiontriggered_isbase = value; }
    inline void setKCodecAction_RemoveAction_IsBase(bool value) const { kcodecaction_removeaction_isbase = value; }
    inline void setKCodecAction_InsertAction_IsBase(bool value) const { kcodecaction_insertaction_isbase = value; }
    inline void setKCodecAction_CreateWidget_IsBase(bool value) const { kcodecaction_createwidget_isbase = value; }
    inline void setKCodecAction_DeleteWidget_IsBase(bool value) const { kcodecaction_deletewidget_isbase = value; }
    inline void setKCodecAction_Event_IsBase(bool value) const { kcodecaction_event_isbase = value; }
    inline void setKCodecAction_EventFilter_IsBase(bool value) const { kcodecaction_eventfilter_isbase = value; }
    inline void setKCodecAction_TimerEvent_IsBase(bool value) const { kcodecaction_timerevent_isbase = value; }
    inline void setKCodecAction_ChildEvent_IsBase(bool value) const { kcodecaction_childevent_isbase = value; }
    inline void setKCodecAction_CustomEvent_IsBase(bool value) const { kcodecaction_customevent_isbase = value; }
    inline void setKCodecAction_ConnectNotify_IsBase(bool value) const { kcodecaction_connectnotify_isbase = value; }
    inline void setKCodecAction_DisconnectNotify_IsBase(bool value) const { kcodecaction_disconnectnotify_isbase = value; }
    inline void setKCodecAction_SlotToggled_IsBase(bool value) const { kcodecaction_slottoggled_isbase = value; }
    inline void setKCodecAction_CreatedWidgets_IsBase(bool value) const { kcodecaction_createdwidgets_isbase = value; }
    inline void setKCodecAction_Sender_IsBase(bool value) const { kcodecaction_sender_isbase = value; }
    inline void setKCodecAction_SenderSignalIndex_IsBase(bool value) const { kcodecaction_sendersignalindex_isbase = value; }
    inline void setKCodecAction_Receivers_IsBase(bool value) const { kcodecaction_receivers_isbase = value; }
    inline void setKCodecAction_IsSignalConnected_IsBase(bool value) const { kcodecaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcodecaction_metacall_isbase) {
            kcodecaction_metacall_isbase = false;
            return KCodecAction::qt_metacall(param1, param2, param3);
        } else if (kcodecaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcodecaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCodecAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered(QAction* param1) override {
        if (kcodecaction_slotactiontriggered_isbase) {
            kcodecaction_slotactiontriggered_isbase = false;
            KCodecAction::slotActionTriggered(param1);
        } else if (kcodecaction_slotactiontriggered_callback != nullptr) {
            QAction* cbval1 = param1;

            kcodecaction_slotactiontriggered_callback(this, cbval1);
        } else {
            KCodecAction::slotActionTriggered(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* removeAction(QAction* action) override {
        if (kcodecaction_removeaction_isbase) {
            kcodecaction_removeaction_isbase = false;
            return KCodecAction::removeAction(action);
        } else if (kcodecaction_removeaction_callback != nullptr) {
            QAction* cbval1 = action;

            QAction* callback_ret = kcodecaction_removeaction_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCodecAction::removeAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAction(QAction* before, QAction* action) override {
        if (kcodecaction_insertaction_isbase) {
            kcodecaction_insertaction_isbase = false;
            KCodecAction::insertAction(before, action);
        } else if (kcodecaction_insertaction_callback != nullptr) {
            QAction* cbval1 = before;
            QAction* cbval2 = action;

            kcodecaction_insertaction_callback(this, cbval1, cbval2);
        } else {
            KCodecAction::insertAction(before, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kcodecaction_createwidget_isbase) {
            kcodecaction_createwidget_isbase = false;
            return KCodecAction::createWidget(parent);
        } else if (kcodecaction_createwidget_callback != nullptr) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = kcodecaction_createwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCodecAction::createWidget(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kcodecaction_deletewidget_isbase) {
            kcodecaction_deletewidget_isbase = false;
            KCodecAction::deleteWidget(widget);
        } else if (kcodecaction_deletewidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            kcodecaction_deletewidget_callback(this, cbval1);
        } else {
            KCodecAction::deleteWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcodecaction_event_isbase) {
            kcodecaction_event_isbase = false;
            return KCodecAction::event(event);
        } else if (kcodecaction_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcodecaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCodecAction::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcodecaction_eventfilter_isbase) {
            kcodecaction_eventfilter_isbase = false;
            return KCodecAction::eventFilter(watched, event);
        } else if (kcodecaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcodecaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCodecAction::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcodecaction_timerevent_isbase) {
            kcodecaction_timerevent_isbase = false;
            KCodecAction::timerEvent(event);
        } else if (kcodecaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcodecaction_timerevent_callback(this, cbval1);
        } else {
            KCodecAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcodecaction_childevent_isbase) {
            kcodecaction_childevent_isbase = false;
            KCodecAction::childEvent(event);
        } else if (kcodecaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcodecaction_childevent_callback(this, cbval1);
        } else {
            KCodecAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcodecaction_customevent_isbase) {
            kcodecaction_customevent_isbase = false;
            KCodecAction::customEvent(event);
        } else if (kcodecaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcodecaction_customevent_callback(this, cbval1);
        } else {
            KCodecAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcodecaction_connectnotify_isbase) {
            kcodecaction_connectnotify_isbase = false;
            KCodecAction::connectNotify(signal);
        } else if (kcodecaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcodecaction_connectnotify_callback(this, cbval1);
        } else {
            KCodecAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcodecaction_disconnectnotify_isbase) {
            kcodecaction_disconnectnotify_isbase = false;
            KCodecAction::disconnectNotify(signal);
        } else if (kcodecaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcodecaction_disconnectnotify_callback(this, cbval1);
        } else {
            KCodecAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotToggled(bool param1) {
        if (kcodecaction_slottoggled_isbase) {
            kcodecaction_slottoggled_isbase = false;
            KCodecAction::slotToggled(param1);
        } else if (kcodecaction_slottoggled_callback != nullptr) {
            bool cbval1 = param1;

            kcodecaction_slottoggled_callback(this, cbval1);
        } else {
            KCodecAction::slotToggled(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (kcodecaction_createdwidgets_isbase) {
            kcodecaction_createdwidgets_isbase = false;
            return KCodecAction::createdWidgets();
        } else if (kcodecaction_createdwidgets_callback != nullptr) {
            QWidget** callback_ret = kcodecaction_createdwidgets_callback();
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KCodecAction::createdWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcodecaction_sender_isbase) {
            kcodecaction_sender_isbase = false;
            return KCodecAction::sender();
        } else if (kcodecaction_sender_callback != nullptr) {
            QObject* callback_ret = kcodecaction_sender_callback();
            return callback_ret;
        } else {
            return KCodecAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcodecaction_sendersignalindex_isbase) {
            kcodecaction_sendersignalindex_isbase = false;
            return KCodecAction::senderSignalIndex();
        } else if (kcodecaction_sendersignalindex_callback != nullptr) {
            int callback_ret = kcodecaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCodecAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcodecaction_receivers_isbase) {
            kcodecaction_receivers_isbase = false;
            return KCodecAction::receivers(signal);
        } else if (kcodecaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcodecaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCodecAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcodecaction_issignalconnected_isbase) {
            kcodecaction_issignalconnected_isbase = false;
            return KCodecAction::isSignalConnected(signal);
        } else if (kcodecaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcodecaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCodecAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KCodecAction_SlotActionTriggered(KCodecAction* self, QAction* param1);
    friend void KCodecAction_QBaseSlotActionTriggered(KCodecAction* self, QAction* param1);
    friend QWidget* KCodecAction_CreateWidget(KCodecAction* self, QWidget* parent);
    friend QWidget* KCodecAction_QBaseCreateWidget(KCodecAction* self, QWidget* parent);
    friend void KCodecAction_DeleteWidget(KCodecAction* self, QWidget* widget);
    friend void KCodecAction_QBaseDeleteWidget(KCodecAction* self, QWidget* widget);
    friend bool KCodecAction_Event(KCodecAction* self, QEvent* event);
    friend bool KCodecAction_QBaseEvent(KCodecAction* self, QEvent* event);
    friend bool KCodecAction_EventFilter(KCodecAction* self, QObject* watched, QEvent* event);
    friend bool KCodecAction_QBaseEventFilter(KCodecAction* self, QObject* watched, QEvent* event);
    friend void KCodecAction_TimerEvent(KCodecAction* self, QTimerEvent* event);
    friend void KCodecAction_QBaseTimerEvent(KCodecAction* self, QTimerEvent* event);
    friend void KCodecAction_ChildEvent(KCodecAction* self, QChildEvent* event);
    friend void KCodecAction_QBaseChildEvent(KCodecAction* self, QChildEvent* event);
    friend void KCodecAction_CustomEvent(KCodecAction* self, QEvent* event);
    friend void KCodecAction_QBaseCustomEvent(KCodecAction* self, QEvent* event);
    friend void KCodecAction_ConnectNotify(KCodecAction* self, const QMetaMethod* signal);
    friend void KCodecAction_QBaseConnectNotify(KCodecAction* self, const QMetaMethod* signal);
    friend void KCodecAction_DisconnectNotify(KCodecAction* self, const QMetaMethod* signal);
    friend void KCodecAction_QBaseDisconnectNotify(KCodecAction* self, const QMetaMethod* signal);
    friend void KCodecAction_SlotToggled(KCodecAction* self, bool param1);
    friend void KCodecAction_QBaseSlotToggled(KCodecAction* self, bool param1);
    friend libqt_list /* of QWidget* */ KCodecAction_CreatedWidgets(const KCodecAction* self);
    friend libqt_list /* of QWidget* */ KCodecAction_QBaseCreatedWidgets(const KCodecAction* self);
    friend QObject* KCodecAction_Sender(const KCodecAction* self);
    friend QObject* KCodecAction_QBaseSender(const KCodecAction* self);
    friend int KCodecAction_SenderSignalIndex(const KCodecAction* self);
    friend int KCodecAction_QBaseSenderSignalIndex(const KCodecAction* self);
    friend int KCodecAction_Receivers(const KCodecAction* self, const char* signal);
    friend int KCodecAction_QBaseReceivers(const KCodecAction* self, const char* signal);
    friend bool KCodecAction_IsSignalConnected(const KCodecAction* self, const QMetaMethod* signal);
    friend bool KCodecAction_QBaseIsSignalConnected(const KCodecAction* self, const QMetaMethod* signal);
};

#endif
