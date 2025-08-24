#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOGGLEACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOGGLEACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToggleAction so that we can call protected methods
class VirtualKToggleAction final : public KToggleAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKToggleAction = true;

    // Virtual class public types (including callbacks)
    using KToggleAction_Metacall_Callback = int (*)(KToggleAction*, int, int, void**);
    using KToggleAction_SlotToggled_Callback = void (*)(KToggleAction*, bool);
    using KToggleAction_Event_Callback = bool (*)(KToggleAction*, QEvent*);
    using KToggleAction_EventFilter_Callback = bool (*)(KToggleAction*, QObject*, QEvent*);
    using KToggleAction_TimerEvent_Callback = void (*)(KToggleAction*, QTimerEvent*);
    using KToggleAction_ChildEvent_Callback = void (*)(KToggleAction*, QChildEvent*);
    using KToggleAction_CustomEvent_Callback = void (*)(KToggleAction*, QEvent*);
    using KToggleAction_ConnectNotify_Callback = void (*)(KToggleAction*, QMetaMethod*);
    using KToggleAction_DisconnectNotify_Callback = void (*)(KToggleAction*, QMetaMethod*);
    using KToggleAction_Sender_Callback = QObject* (*)();
    using KToggleAction_SenderSignalIndex_Callback = int (*)();
    using KToggleAction_Receivers_Callback = int (*)(const KToggleAction*, const char*);
    using KToggleAction_IsSignalConnected_Callback = bool (*)(const KToggleAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    KToggleAction_Metacall_Callback ktoggleaction_metacall_callback = nullptr;
    KToggleAction_SlotToggled_Callback ktoggleaction_slottoggled_callback = nullptr;
    KToggleAction_Event_Callback ktoggleaction_event_callback = nullptr;
    KToggleAction_EventFilter_Callback ktoggleaction_eventfilter_callback = nullptr;
    KToggleAction_TimerEvent_Callback ktoggleaction_timerevent_callback = nullptr;
    KToggleAction_ChildEvent_Callback ktoggleaction_childevent_callback = nullptr;
    KToggleAction_CustomEvent_Callback ktoggleaction_customevent_callback = nullptr;
    KToggleAction_ConnectNotify_Callback ktoggleaction_connectnotify_callback = nullptr;
    KToggleAction_DisconnectNotify_Callback ktoggleaction_disconnectnotify_callback = nullptr;
    KToggleAction_Sender_Callback ktoggleaction_sender_callback = nullptr;
    KToggleAction_SenderSignalIndex_Callback ktoggleaction_sendersignalindex_callback = nullptr;
    KToggleAction_Receivers_Callback ktoggleaction_receivers_callback = nullptr;
    KToggleAction_IsSignalConnected_Callback ktoggleaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktoggleaction_metacall_isbase = false;
    mutable bool ktoggleaction_slottoggled_isbase = false;
    mutable bool ktoggleaction_event_isbase = false;
    mutable bool ktoggleaction_eventfilter_isbase = false;
    mutable bool ktoggleaction_timerevent_isbase = false;
    mutable bool ktoggleaction_childevent_isbase = false;
    mutable bool ktoggleaction_customevent_isbase = false;
    mutable bool ktoggleaction_connectnotify_isbase = false;
    mutable bool ktoggleaction_disconnectnotify_isbase = false;
    mutable bool ktoggleaction_sender_isbase = false;
    mutable bool ktoggleaction_sendersignalindex_isbase = false;
    mutable bool ktoggleaction_receivers_isbase = false;
    mutable bool ktoggleaction_issignalconnected_isbase = false;

  public:
    VirtualKToggleAction(QObject* parent) : KToggleAction(parent) {};
    VirtualKToggleAction(const QString& text, QObject* parent) : KToggleAction(text, parent) {};
    VirtualKToggleAction(const QIcon& icon, const QString& text, QObject* parent) : KToggleAction(icon, text, parent) {};

    ~VirtualKToggleAction() {
        ktoggleaction_metacall_callback = nullptr;
        ktoggleaction_slottoggled_callback = nullptr;
        ktoggleaction_event_callback = nullptr;
        ktoggleaction_eventfilter_callback = nullptr;
        ktoggleaction_timerevent_callback = nullptr;
        ktoggleaction_childevent_callback = nullptr;
        ktoggleaction_customevent_callback = nullptr;
        ktoggleaction_connectnotify_callback = nullptr;
        ktoggleaction_disconnectnotify_callback = nullptr;
        ktoggleaction_sender_callback = nullptr;
        ktoggleaction_sendersignalindex_callback = nullptr;
        ktoggleaction_receivers_callback = nullptr;
        ktoggleaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKToggleAction_Metacall_Callback(KToggleAction_Metacall_Callback cb) { ktoggleaction_metacall_callback = cb; }
    inline void setKToggleAction_SlotToggled_Callback(KToggleAction_SlotToggled_Callback cb) { ktoggleaction_slottoggled_callback = cb; }
    inline void setKToggleAction_Event_Callback(KToggleAction_Event_Callback cb) { ktoggleaction_event_callback = cb; }
    inline void setKToggleAction_EventFilter_Callback(KToggleAction_EventFilter_Callback cb) { ktoggleaction_eventfilter_callback = cb; }
    inline void setKToggleAction_TimerEvent_Callback(KToggleAction_TimerEvent_Callback cb) { ktoggleaction_timerevent_callback = cb; }
    inline void setKToggleAction_ChildEvent_Callback(KToggleAction_ChildEvent_Callback cb) { ktoggleaction_childevent_callback = cb; }
    inline void setKToggleAction_CustomEvent_Callback(KToggleAction_CustomEvent_Callback cb) { ktoggleaction_customevent_callback = cb; }
    inline void setKToggleAction_ConnectNotify_Callback(KToggleAction_ConnectNotify_Callback cb) { ktoggleaction_connectnotify_callback = cb; }
    inline void setKToggleAction_DisconnectNotify_Callback(KToggleAction_DisconnectNotify_Callback cb) { ktoggleaction_disconnectnotify_callback = cb; }
    inline void setKToggleAction_Sender_Callback(KToggleAction_Sender_Callback cb) { ktoggleaction_sender_callback = cb; }
    inline void setKToggleAction_SenderSignalIndex_Callback(KToggleAction_SenderSignalIndex_Callback cb) { ktoggleaction_sendersignalindex_callback = cb; }
    inline void setKToggleAction_Receivers_Callback(KToggleAction_Receivers_Callback cb) { ktoggleaction_receivers_callback = cb; }
    inline void setKToggleAction_IsSignalConnected_Callback(KToggleAction_IsSignalConnected_Callback cb) { ktoggleaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKToggleAction_Metacall_IsBase(bool value) const { ktoggleaction_metacall_isbase = value; }
    inline void setKToggleAction_SlotToggled_IsBase(bool value) const { ktoggleaction_slottoggled_isbase = value; }
    inline void setKToggleAction_Event_IsBase(bool value) const { ktoggleaction_event_isbase = value; }
    inline void setKToggleAction_EventFilter_IsBase(bool value) const { ktoggleaction_eventfilter_isbase = value; }
    inline void setKToggleAction_TimerEvent_IsBase(bool value) const { ktoggleaction_timerevent_isbase = value; }
    inline void setKToggleAction_ChildEvent_IsBase(bool value) const { ktoggleaction_childevent_isbase = value; }
    inline void setKToggleAction_CustomEvent_IsBase(bool value) const { ktoggleaction_customevent_isbase = value; }
    inline void setKToggleAction_ConnectNotify_IsBase(bool value) const { ktoggleaction_connectnotify_isbase = value; }
    inline void setKToggleAction_DisconnectNotify_IsBase(bool value) const { ktoggleaction_disconnectnotify_isbase = value; }
    inline void setKToggleAction_Sender_IsBase(bool value) const { ktoggleaction_sender_isbase = value; }
    inline void setKToggleAction_SenderSignalIndex_IsBase(bool value) const { ktoggleaction_sendersignalindex_isbase = value; }
    inline void setKToggleAction_Receivers_IsBase(bool value) const { ktoggleaction_receivers_isbase = value; }
    inline void setKToggleAction_IsSignalConnected_IsBase(bool value) const { ktoggleaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktoggleaction_metacall_isbase) {
            ktoggleaction_metacall_isbase = false;
            return KToggleAction::qt_metacall(param1, param2, param3);
        } else if (ktoggleaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktoggleaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KToggleAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotToggled(bool checked) override {
        if (ktoggleaction_slottoggled_isbase) {
            ktoggleaction_slottoggled_isbase = false;
            KToggleAction::slotToggled(checked);
        } else if (ktoggleaction_slottoggled_callback != nullptr) {
            bool cbval1 = checked;

            ktoggleaction_slottoggled_callback(this, cbval1);
        } else {
            KToggleAction::slotToggled(checked);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktoggleaction_event_isbase) {
            ktoggleaction_event_isbase = false;
            return KToggleAction::event(param1);
        } else if (ktoggleaction_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = ktoggleaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToggleAction::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktoggleaction_eventfilter_isbase) {
            ktoggleaction_eventfilter_isbase = false;
            return KToggleAction::eventFilter(watched, event);
        } else if (ktoggleaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktoggleaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KToggleAction::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktoggleaction_timerevent_isbase) {
            ktoggleaction_timerevent_isbase = false;
            KToggleAction::timerEvent(event);
        } else if (ktoggleaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktoggleaction_timerevent_callback(this, cbval1);
        } else {
            KToggleAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktoggleaction_childevent_isbase) {
            ktoggleaction_childevent_isbase = false;
            KToggleAction::childEvent(event);
        } else if (ktoggleaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktoggleaction_childevent_callback(this, cbval1);
        } else {
            KToggleAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktoggleaction_customevent_isbase) {
            ktoggleaction_customevent_isbase = false;
            KToggleAction::customEvent(event);
        } else if (ktoggleaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktoggleaction_customevent_callback(this, cbval1);
        } else {
            KToggleAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktoggleaction_connectnotify_isbase) {
            ktoggleaction_connectnotify_isbase = false;
            KToggleAction::connectNotify(signal);
        } else if (ktoggleaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktoggleaction_connectnotify_callback(this, cbval1);
        } else {
            KToggleAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktoggleaction_disconnectnotify_isbase) {
            ktoggleaction_disconnectnotify_isbase = false;
            KToggleAction::disconnectNotify(signal);
        } else if (ktoggleaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktoggleaction_disconnectnotify_callback(this, cbval1);
        } else {
            KToggleAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktoggleaction_sender_isbase) {
            ktoggleaction_sender_isbase = false;
            return KToggleAction::sender();
        } else if (ktoggleaction_sender_callback != nullptr) {
            QObject* callback_ret = ktoggleaction_sender_callback();
            return callback_ret;
        } else {
            return KToggleAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktoggleaction_sendersignalindex_isbase) {
            ktoggleaction_sendersignalindex_isbase = false;
            return KToggleAction::senderSignalIndex();
        } else if (ktoggleaction_sendersignalindex_callback != nullptr) {
            int callback_ret = ktoggleaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KToggleAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktoggleaction_receivers_isbase) {
            ktoggleaction_receivers_isbase = false;
            return KToggleAction::receivers(signal);
        } else if (ktoggleaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktoggleaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KToggleAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktoggleaction_issignalconnected_isbase) {
            ktoggleaction_issignalconnected_isbase = false;
            return KToggleAction::isSignalConnected(signal);
        } else if (ktoggleaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktoggleaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToggleAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KToggleAction_SlotToggled(KToggleAction* self, bool checked);
    friend void KToggleAction_QBaseSlotToggled(KToggleAction* self, bool checked);
    friend bool KToggleAction_Event(KToggleAction* self, QEvent* param1);
    friend bool KToggleAction_QBaseEvent(KToggleAction* self, QEvent* param1);
    friend void KToggleAction_TimerEvent(KToggleAction* self, QTimerEvent* event);
    friend void KToggleAction_QBaseTimerEvent(KToggleAction* self, QTimerEvent* event);
    friend void KToggleAction_ChildEvent(KToggleAction* self, QChildEvent* event);
    friend void KToggleAction_QBaseChildEvent(KToggleAction* self, QChildEvent* event);
    friend void KToggleAction_CustomEvent(KToggleAction* self, QEvent* event);
    friend void KToggleAction_QBaseCustomEvent(KToggleAction* self, QEvent* event);
    friend void KToggleAction_ConnectNotify(KToggleAction* self, const QMetaMethod* signal);
    friend void KToggleAction_QBaseConnectNotify(KToggleAction* self, const QMetaMethod* signal);
    friend void KToggleAction_DisconnectNotify(KToggleAction* self, const QMetaMethod* signal);
    friend void KToggleAction_QBaseDisconnectNotify(KToggleAction* self, const QMetaMethod* signal);
    friend QObject* KToggleAction_Sender(const KToggleAction* self);
    friend QObject* KToggleAction_QBaseSender(const KToggleAction* self);
    friend int KToggleAction_SenderSignalIndex(const KToggleAction* self);
    friend int KToggleAction_QBaseSenderSignalIndex(const KToggleAction* self);
    friend int KToggleAction_Receivers(const KToggleAction* self, const char* signal);
    friend int KToggleAction_QBaseReceivers(const KToggleAction* self, const char* signal);
    friend bool KToggleAction_IsSignalConnected(const KToggleAction* self, const QMetaMethod* signal);
    friend bool KToggleAction_QBaseIsSignalConnected(const KToggleAction* self, const QMetaMethod* signal);
};

#endif
