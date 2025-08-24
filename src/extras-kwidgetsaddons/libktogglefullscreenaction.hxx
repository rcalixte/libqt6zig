#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOGGLEFULLSCREENACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOGGLEFULLSCREENACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToggleFullScreenAction so that we can call protected methods
class VirtualKToggleFullScreenAction final : public KToggleFullScreenAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKToggleFullScreenAction = true;

    // Virtual class public types (including callbacks)
    using KToggleFullScreenAction_Metacall_Callback = int (*)(KToggleFullScreenAction*, int, int, void**);
    using KToggleFullScreenAction_EventFilter_Callback = bool (*)(KToggleFullScreenAction*, QObject*, QEvent*);
    using KToggleFullScreenAction_SlotToggled_Callback = void (*)(KToggleFullScreenAction*, bool);
    using KToggleFullScreenAction_Event_Callback = bool (*)(KToggleFullScreenAction*, QEvent*);
    using KToggleFullScreenAction_TimerEvent_Callback = void (*)(KToggleFullScreenAction*, QTimerEvent*);
    using KToggleFullScreenAction_ChildEvent_Callback = void (*)(KToggleFullScreenAction*, QChildEvent*);
    using KToggleFullScreenAction_CustomEvent_Callback = void (*)(KToggleFullScreenAction*, QEvent*);
    using KToggleFullScreenAction_ConnectNotify_Callback = void (*)(KToggleFullScreenAction*, QMetaMethod*);
    using KToggleFullScreenAction_DisconnectNotify_Callback = void (*)(KToggleFullScreenAction*, QMetaMethod*);
    using KToggleFullScreenAction_Sender_Callback = QObject* (*)();
    using KToggleFullScreenAction_SenderSignalIndex_Callback = int (*)();
    using KToggleFullScreenAction_Receivers_Callback = int (*)(const KToggleFullScreenAction*, const char*);
    using KToggleFullScreenAction_IsSignalConnected_Callback = bool (*)(const KToggleFullScreenAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    KToggleFullScreenAction_Metacall_Callback ktogglefullscreenaction_metacall_callback = nullptr;
    KToggleFullScreenAction_EventFilter_Callback ktogglefullscreenaction_eventfilter_callback = nullptr;
    KToggleFullScreenAction_SlotToggled_Callback ktogglefullscreenaction_slottoggled_callback = nullptr;
    KToggleFullScreenAction_Event_Callback ktogglefullscreenaction_event_callback = nullptr;
    KToggleFullScreenAction_TimerEvent_Callback ktogglefullscreenaction_timerevent_callback = nullptr;
    KToggleFullScreenAction_ChildEvent_Callback ktogglefullscreenaction_childevent_callback = nullptr;
    KToggleFullScreenAction_CustomEvent_Callback ktogglefullscreenaction_customevent_callback = nullptr;
    KToggleFullScreenAction_ConnectNotify_Callback ktogglefullscreenaction_connectnotify_callback = nullptr;
    KToggleFullScreenAction_DisconnectNotify_Callback ktogglefullscreenaction_disconnectnotify_callback = nullptr;
    KToggleFullScreenAction_Sender_Callback ktogglefullscreenaction_sender_callback = nullptr;
    KToggleFullScreenAction_SenderSignalIndex_Callback ktogglefullscreenaction_sendersignalindex_callback = nullptr;
    KToggleFullScreenAction_Receivers_Callback ktogglefullscreenaction_receivers_callback = nullptr;
    KToggleFullScreenAction_IsSignalConnected_Callback ktogglefullscreenaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktogglefullscreenaction_metacall_isbase = false;
    mutable bool ktogglefullscreenaction_eventfilter_isbase = false;
    mutable bool ktogglefullscreenaction_slottoggled_isbase = false;
    mutable bool ktogglefullscreenaction_event_isbase = false;
    mutable bool ktogglefullscreenaction_timerevent_isbase = false;
    mutable bool ktogglefullscreenaction_childevent_isbase = false;
    mutable bool ktogglefullscreenaction_customevent_isbase = false;
    mutable bool ktogglefullscreenaction_connectnotify_isbase = false;
    mutable bool ktogglefullscreenaction_disconnectnotify_isbase = false;
    mutable bool ktogglefullscreenaction_sender_isbase = false;
    mutable bool ktogglefullscreenaction_sendersignalindex_isbase = false;
    mutable bool ktogglefullscreenaction_receivers_isbase = false;
    mutable bool ktogglefullscreenaction_issignalconnected_isbase = false;

  public:
    VirtualKToggleFullScreenAction(QObject* parent) : KToggleFullScreenAction(parent) {};
    VirtualKToggleFullScreenAction(QWidget* window, QObject* parent) : KToggleFullScreenAction(window, parent) {};

    ~VirtualKToggleFullScreenAction() {
        ktogglefullscreenaction_metacall_callback = nullptr;
        ktogglefullscreenaction_eventfilter_callback = nullptr;
        ktogglefullscreenaction_slottoggled_callback = nullptr;
        ktogglefullscreenaction_event_callback = nullptr;
        ktogglefullscreenaction_timerevent_callback = nullptr;
        ktogglefullscreenaction_childevent_callback = nullptr;
        ktogglefullscreenaction_customevent_callback = nullptr;
        ktogglefullscreenaction_connectnotify_callback = nullptr;
        ktogglefullscreenaction_disconnectnotify_callback = nullptr;
        ktogglefullscreenaction_sender_callback = nullptr;
        ktogglefullscreenaction_sendersignalindex_callback = nullptr;
        ktogglefullscreenaction_receivers_callback = nullptr;
        ktogglefullscreenaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKToggleFullScreenAction_Metacall_Callback(KToggleFullScreenAction_Metacall_Callback cb) { ktogglefullscreenaction_metacall_callback = cb; }
    inline void setKToggleFullScreenAction_EventFilter_Callback(KToggleFullScreenAction_EventFilter_Callback cb) { ktogglefullscreenaction_eventfilter_callback = cb; }
    inline void setKToggleFullScreenAction_SlotToggled_Callback(KToggleFullScreenAction_SlotToggled_Callback cb) { ktogglefullscreenaction_slottoggled_callback = cb; }
    inline void setKToggleFullScreenAction_Event_Callback(KToggleFullScreenAction_Event_Callback cb) { ktogglefullscreenaction_event_callback = cb; }
    inline void setKToggleFullScreenAction_TimerEvent_Callback(KToggleFullScreenAction_TimerEvent_Callback cb) { ktogglefullscreenaction_timerevent_callback = cb; }
    inline void setKToggleFullScreenAction_ChildEvent_Callback(KToggleFullScreenAction_ChildEvent_Callback cb) { ktogglefullscreenaction_childevent_callback = cb; }
    inline void setKToggleFullScreenAction_CustomEvent_Callback(KToggleFullScreenAction_CustomEvent_Callback cb) { ktogglefullscreenaction_customevent_callback = cb; }
    inline void setKToggleFullScreenAction_ConnectNotify_Callback(KToggleFullScreenAction_ConnectNotify_Callback cb) { ktogglefullscreenaction_connectnotify_callback = cb; }
    inline void setKToggleFullScreenAction_DisconnectNotify_Callback(KToggleFullScreenAction_DisconnectNotify_Callback cb) { ktogglefullscreenaction_disconnectnotify_callback = cb; }
    inline void setKToggleFullScreenAction_Sender_Callback(KToggleFullScreenAction_Sender_Callback cb) { ktogglefullscreenaction_sender_callback = cb; }
    inline void setKToggleFullScreenAction_SenderSignalIndex_Callback(KToggleFullScreenAction_SenderSignalIndex_Callback cb) { ktogglefullscreenaction_sendersignalindex_callback = cb; }
    inline void setKToggleFullScreenAction_Receivers_Callback(KToggleFullScreenAction_Receivers_Callback cb) { ktogglefullscreenaction_receivers_callback = cb; }
    inline void setKToggleFullScreenAction_IsSignalConnected_Callback(KToggleFullScreenAction_IsSignalConnected_Callback cb) { ktogglefullscreenaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKToggleFullScreenAction_Metacall_IsBase(bool value) const { ktogglefullscreenaction_metacall_isbase = value; }
    inline void setKToggleFullScreenAction_EventFilter_IsBase(bool value) const { ktogglefullscreenaction_eventfilter_isbase = value; }
    inline void setKToggleFullScreenAction_SlotToggled_IsBase(bool value) const { ktogglefullscreenaction_slottoggled_isbase = value; }
    inline void setKToggleFullScreenAction_Event_IsBase(bool value) const { ktogglefullscreenaction_event_isbase = value; }
    inline void setKToggleFullScreenAction_TimerEvent_IsBase(bool value) const { ktogglefullscreenaction_timerevent_isbase = value; }
    inline void setKToggleFullScreenAction_ChildEvent_IsBase(bool value) const { ktogglefullscreenaction_childevent_isbase = value; }
    inline void setKToggleFullScreenAction_CustomEvent_IsBase(bool value) const { ktogglefullscreenaction_customevent_isbase = value; }
    inline void setKToggleFullScreenAction_ConnectNotify_IsBase(bool value) const { ktogglefullscreenaction_connectnotify_isbase = value; }
    inline void setKToggleFullScreenAction_DisconnectNotify_IsBase(bool value) const { ktogglefullscreenaction_disconnectnotify_isbase = value; }
    inline void setKToggleFullScreenAction_Sender_IsBase(bool value) const { ktogglefullscreenaction_sender_isbase = value; }
    inline void setKToggleFullScreenAction_SenderSignalIndex_IsBase(bool value) const { ktogglefullscreenaction_sendersignalindex_isbase = value; }
    inline void setKToggleFullScreenAction_Receivers_IsBase(bool value) const { ktogglefullscreenaction_receivers_isbase = value; }
    inline void setKToggleFullScreenAction_IsSignalConnected_IsBase(bool value) const { ktogglefullscreenaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktogglefullscreenaction_metacall_isbase) {
            ktogglefullscreenaction_metacall_isbase = false;
            return KToggleFullScreenAction::qt_metacall(param1, param2, param3);
        } else if (ktogglefullscreenaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktogglefullscreenaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KToggleFullScreenAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (ktogglefullscreenaction_eventfilter_isbase) {
            ktogglefullscreenaction_eventfilter_isbase = false;
            return KToggleFullScreenAction::eventFilter(object, event);
        } else if (ktogglefullscreenaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = ktogglefullscreenaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KToggleFullScreenAction::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotToggled(bool checked) override {
        if (ktogglefullscreenaction_slottoggled_isbase) {
            ktogglefullscreenaction_slottoggled_isbase = false;
            KToggleFullScreenAction::slotToggled(checked);
        } else if (ktogglefullscreenaction_slottoggled_callback != nullptr) {
            bool cbval1 = checked;

            ktogglefullscreenaction_slottoggled_callback(this, cbval1);
        } else {
            KToggleFullScreenAction::slotToggled(checked);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktogglefullscreenaction_event_isbase) {
            ktogglefullscreenaction_event_isbase = false;
            return KToggleFullScreenAction::event(param1);
        } else if (ktogglefullscreenaction_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = ktogglefullscreenaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToggleFullScreenAction::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktogglefullscreenaction_timerevent_isbase) {
            ktogglefullscreenaction_timerevent_isbase = false;
            KToggleFullScreenAction::timerEvent(event);
        } else if (ktogglefullscreenaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktogglefullscreenaction_timerevent_callback(this, cbval1);
        } else {
            KToggleFullScreenAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktogglefullscreenaction_childevent_isbase) {
            ktogglefullscreenaction_childevent_isbase = false;
            KToggleFullScreenAction::childEvent(event);
        } else if (ktogglefullscreenaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktogglefullscreenaction_childevent_callback(this, cbval1);
        } else {
            KToggleFullScreenAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktogglefullscreenaction_customevent_isbase) {
            ktogglefullscreenaction_customevent_isbase = false;
            KToggleFullScreenAction::customEvent(event);
        } else if (ktogglefullscreenaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktogglefullscreenaction_customevent_callback(this, cbval1);
        } else {
            KToggleFullScreenAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktogglefullscreenaction_connectnotify_isbase) {
            ktogglefullscreenaction_connectnotify_isbase = false;
            KToggleFullScreenAction::connectNotify(signal);
        } else if (ktogglefullscreenaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktogglefullscreenaction_connectnotify_callback(this, cbval1);
        } else {
            KToggleFullScreenAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktogglefullscreenaction_disconnectnotify_isbase) {
            ktogglefullscreenaction_disconnectnotify_isbase = false;
            KToggleFullScreenAction::disconnectNotify(signal);
        } else if (ktogglefullscreenaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktogglefullscreenaction_disconnectnotify_callback(this, cbval1);
        } else {
            KToggleFullScreenAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktogglefullscreenaction_sender_isbase) {
            ktogglefullscreenaction_sender_isbase = false;
            return KToggleFullScreenAction::sender();
        } else if (ktogglefullscreenaction_sender_callback != nullptr) {
            QObject* callback_ret = ktogglefullscreenaction_sender_callback();
            return callback_ret;
        } else {
            return KToggleFullScreenAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktogglefullscreenaction_sendersignalindex_isbase) {
            ktogglefullscreenaction_sendersignalindex_isbase = false;
            return KToggleFullScreenAction::senderSignalIndex();
        } else if (ktogglefullscreenaction_sendersignalindex_callback != nullptr) {
            int callback_ret = ktogglefullscreenaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KToggleFullScreenAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktogglefullscreenaction_receivers_isbase) {
            ktogglefullscreenaction_receivers_isbase = false;
            return KToggleFullScreenAction::receivers(signal);
        } else if (ktogglefullscreenaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktogglefullscreenaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KToggleFullScreenAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktogglefullscreenaction_issignalconnected_isbase) {
            ktogglefullscreenaction_issignalconnected_isbase = false;
            return KToggleFullScreenAction::isSignalConnected(signal);
        } else if (ktogglefullscreenaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktogglefullscreenaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToggleFullScreenAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KToggleFullScreenAction_EventFilter(KToggleFullScreenAction* self, QObject* object, QEvent* event);
    friend bool KToggleFullScreenAction_QBaseEventFilter(KToggleFullScreenAction* self, QObject* object, QEvent* event);
    friend void KToggleFullScreenAction_SlotToggled(KToggleFullScreenAction* self, bool checked);
    friend void KToggleFullScreenAction_QBaseSlotToggled(KToggleFullScreenAction* self, bool checked);
    friend bool KToggleFullScreenAction_Event(KToggleFullScreenAction* self, QEvent* param1);
    friend bool KToggleFullScreenAction_QBaseEvent(KToggleFullScreenAction* self, QEvent* param1);
    friend void KToggleFullScreenAction_TimerEvent(KToggleFullScreenAction* self, QTimerEvent* event);
    friend void KToggleFullScreenAction_QBaseTimerEvent(KToggleFullScreenAction* self, QTimerEvent* event);
    friend void KToggleFullScreenAction_ChildEvent(KToggleFullScreenAction* self, QChildEvent* event);
    friend void KToggleFullScreenAction_QBaseChildEvent(KToggleFullScreenAction* self, QChildEvent* event);
    friend void KToggleFullScreenAction_CustomEvent(KToggleFullScreenAction* self, QEvent* event);
    friend void KToggleFullScreenAction_QBaseCustomEvent(KToggleFullScreenAction* self, QEvent* event);
    friend void KToggleFullScreenAction_ConnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal);
    friend void KToggleFullScreenAction_QBaseConnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal);
    friend void KToggleFullScreenAction_DisconnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal);
    friend void KToggleFullScreenAction_QBaseDisconnectNotify(KToggleFullScreenAction* self, const QMetaMethod* signal);
    friend QObject* KToggleFullScreenAction_Sender(const KToggleFullScreenAction* self);
    friend QObject* KToggleFullScreenAction_QBaseSender(const KToggleFullScreenAction* self);
    friend int KToggleFullScreenAction_SenderSignalIndex(const KToggleFullScreenAction* self);
    friend int KToggleFullScreenAction_QBaseSenderSignalIndex(const KToggleFullScreenAction* self);
    friend int KToggleFullScreenAction_Receivers(const KToggleFullScreenAction* self, const char* signal);
    friend int KToggleFullScreenAction_QBaseReceivers(const KToggleFullScreenAction* self, const char* signal);
    friend bool KToggleFullScreenAction_IsSignalConnected(const KToggleFullScreenAction* self, const QMetaMethod* signal);
    friend bool KToggleFullScreenAction_QBaseIsSignalConnected(const KToggleFullScreenAction* self, const QMetaMethod* signal);
};

#endif
