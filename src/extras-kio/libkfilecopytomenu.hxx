#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKFILECOPYTOMENU_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKFILECOPYTOMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileCopyToMenu so that we can call protected methods
class VirtualKFileCopyToMenu final : public KFileCopyToMenu {

  public:
    // Virtual class boolean flag
    bool isVirtualKFileCopyToMenu = true;

    // Virtual class public types (including callbacks)
    using KFileCopyToMenu_Metacall_Callback = int (*)(KFileCopyToMenu*, int, int, void**);
    using KFileCopyToMenu_Event_Callback = bool (*)(KFileCopyToMenu*, QEvent*);
    using KFileCopyToMenu_EventFilter_Callback = bool (*)(KFileCopyToMenu*, QObject*, QEvent*);
    using KFileCopyToMenu_TimerEvent_Callback = void (*)(KFileCopyToMenu*, QTimerEvent*);
    using KFileCopyToMenu_ChildEvent_Callback = void (*)(KFileCopyToMenu*, QChildEvent*);
    using KFileCopyToMenu_CustomEvent_Callback = void (*)(KFileCopyToMenu*, QEvent*);
    using KFileCopyToMenu_ConnectNotify_Callback = void (*)(KFileCopyToMenu*, QMetaMethod*);
    using KFileCopyToMenu_DisconnectNotify_Callback = void (*)(KFileCopyToMenu*, QMetaMethod*);
    using KFileCopyToMenu_Sender_Callback = QObject* (*)();
    using KFileCopyToMenu_SenderSignalIndex_Callback = int (*)();
    using KFileCopyToMenu_Receivers_Callback = int (*)(const KFileCopyToMenu*, const char*);
    using KFileCopyToMenu_IsSignalConnected_Callback = bool (*)(const KFileCopyToMenu*, QMetaMethod*);

  protected:
    // Instance callback storage
    KFileCopyToMenu_Metacall_Callback kfilecopytomenu_metacall_callback = nullptr;
    KFileCopyToMenu_Event_Callback kfilecopytomenu_event_callback = nullptr;
    KFileCopyToMenu_EventFilter_Callback kfilecopytomenu_eventfilter_callback = nullptr;
    KFileCopyToMenu_TimerEvent_Callback kfilecopytomenu_timerevent_callback = nullptr;
    KFileCopyToMenu_ChildEvent_Callback kfilecopytomenu_childevent_callback = nullptr;
    KFileCopyToMenu_CustomEvent_Callback kfilecopytomenu_customevent_callback = nullptr;
    KFileCopyToMenu_ConnectNotify_Callback kfilecopytomenu_connectnotify_callback = nullptr;
    KFileCopyToMenu_DisconnectNotify_Callback kfilecopytomenu_disconnectnotify_callback = nullptr;
    KFileCopyToMenu_Sender_Callback kfilecopytomenu_sender_callback = nullptr;
    KFileCopyToMenu_SenderSignalIndex_Callback kfilecopytomenu_sendersignalindex_callback = nullptr;
    KFileCopyToMenu_Receivers_Callback kfilecopytomenu_receivers_callback = nullptr;
    KFileCopyToMenu_IsSignalConnected_Callback kfilecopytomenu_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kfilecopytomenu_metacall_isbase = false;
    mutable bool kfilecopytomenu_event_isbase = false;
    mutable bool kfilecopytomenu_eventfilter_isbase = false;
    mutable bool kfilecopytomenu_timerevent_isbase = false;
    mutable bool kfilecopytomenu_childevent_isbase = false;
    mutable bool kfilecopytomenu_customevent_isbase = false;
    mutable bool kfilecopytomenu_connectnotify_isbase = false;
    mutable bool kfilecopytomenu_disconnectnotify_isbase = false;
    mutable bool kfilecopytomenu_sender_isbase = false;
    mutable bool kfilecopytomenu_sendersignalindex_isbase = false;
    mutable bool kfilecopytomenu_receivers_isbase = false;
    mutable bool kfilecopytomenu_issignalconnected_isbase = false;

  public:
    VirtualKFileCopyToMenu(QWidget* parentWidget) : KFileCopyToMenu(parentWidget) {};

    ~VirtualKFileCopyToMenu() {
        kfilecopytomenu_metacall_callback = nullptr;
        kfilecopytomenu_event_callback = nullptr;
        kfilecopytomenu_eventfilter_callback = nullptr;
        kfilecopytomenu_timerevent_callback = nullptr;
        kfilecopytomenu_childevent_callback = nullptr;
        kfilecopytomenu_customevent_callback = nullptr;
        kfilecopytomenu_connectnotify_callback = nullptr;
        kfilecopytomenu_disconnectnotify_callback = nullptr;
        kfilecopytomenu_sender_callback = nullptr;
        kfilecopytomenu_sendersignalindex_callback = nullptr;
        kfilecopytomenu_receivers_callback = nullptr;
        kfilecopytomenu_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKFileCopyToMenu_Metacall_Callback(KFileCopyToMenu_Metacall_Callback cb) { kfilecopytomenu_metacall_callback = cb; }
    inline void setKFileCopyToMenu_Event_Callback(KFileCopyToMenu_Event_Callback cb) { kfilecopytomenu_event_callback = cb; }
    inline void setKFileCopyToMenu_EventFilter_Callback(KFileCopyToMenu_EventFilter_Callback cb) { kfilecopytomenu_eventfilter_callback = cb; }
    inline void setKFileCopyToMenu_TimerEvent_Callback(KFileCopyToMenu_TimerEvent_Callback cb) { kfilecopytomenu_timerevent_callback = cb; }
    inline void setKFileCopyToMenu_ChildEvent_Callback(KFileCopyToMenu_ChildEvent_Callback cb) { kfilecopytomenu_childevent_callback = cb; }
    inline void setKFileCopyToMenu_CustomEvent_Callback(KFileCopyToMenu_CustomEvent_Callback cb) { kfilecopytomenu_customevent_callback = cb; }
    inline void setKFileCopyToMenu_ConnectNotify_Callback(KFileCopyToMenu_ConnectNotify_Callback cb) { kfilecopytomenu_connectnotify_callback = cb; }
    inline void setKFileCopyToMenu_DisconnectNotify_Callback(KFileCopyToMenu_DisconnectNotify_Callback cb) { kfilecopytomenu_disconnectnotify_callback = cb; }
    inline void setKFileCopyToMenu_Sender_Callback(KFileCopyToMenu_Sender_Callback cb) { kfilecopytomenu_sender_callback = cb; }
    inline void setKFileCopyToMenu_SenderSignalIndex_Callback(KFileCopyToMenu_SenderSignalIndex_Callback cb) { kfilecopytomenu_sendersignalindex_callback = cb; }
    inline void setKFileCopyToMenu_Receivers_Callback(KFileCopyToMenu_Receivers_Callback cb) { kfilecopytomenu_receivers_callback = cb; }
    inline void setKFileCopyToMenu_IsSignalConnected_Callback(KFileCopyToMenu_IsSignalConnected_Callback cb) { kfilecopytomenu_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKFileCopyToMenu_Metacall_IsBase(bool value) const { kfilecopytomenu_metacall_isbase = value; }
    inline void setKFileCopyToMenu_Event_IsBase(bool value) const { kfilecopytomenu_event_isbase = value; }
    inline void setKFileCopyToMenu_EventFilter_IsBase(bool value) const { kfilecopytomenu_eventfilter_isbase = value; }
    inline void setKFileCopyToMenu_TimerEvent_IsBase(bool value) const { kfilecopytomenu_timerevent_isbase = value; }
    inline void setKFileCopyToMenu_ChildEvent_IsBase(bool value) const { kfilecopytomenu_childevent_isbase = value; }
    inline void setKFileCopyToMenu_CustomEvent_IsBase(bool value) const { kfilecopytomenu_customevent_isbase = value; }
    inline void setKFileCopyToMenu_ConnectNotify_IsBase(bool value) const { kfilecopytomenu_connectnotify_isbase = value; }
    inline void setKFileCopyToMenu_DisconnectNotify_IsBase(bool value) const { kfilecopytomenu_disconnectnotify_isbase = value; }
    inline void setKFileCopyToMenu_Sender_IsBase(bool value) const { kfilecopytomenu_sender_isbase = value; }
    inline void setKFileCopyToMenu_SenderSignalIndex_IsBase(bool value) const { kfilecopytomenu_sendersignalindex_isbase = value; }
    inline void setKFileCopyToMenu_Receivers_IsBase(bool value) const { kfilecopytomenu_receivers_isbase = value; }
    inline void setKFileCopyToMenu_IsSignalConnected_IsBase(bool value) const { kfilecopytomenu_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilecopytomenu_metacall_isbase) {
            kfilecopytomenu_metacall_isbase = false;
            return KFileCopyToMenu::qt_metacall(param1, param2, param3);
        } else if (kfilecopytomenu_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfilecopytomenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFileCopyToMenu::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilecopytomenu_event_isbase) {
            kfilecopytomenu_event_isbase = false;
            return KFileCopyToMenu::event(event);
        } else if (kfilecopytomenu_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfilecopytomenu_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileCopyToMenu::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfilecopytomenu_eventfilter_isbase) {
            kfilecopytomenu_eventfilter_isbase = false;
            return KFileCopyToMenu::eventFilter(watched, event);
        } else if (kfilecopytomenu_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kfilecopytomenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFileCopyToMenu::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilecopytomenu_timerevent_isbase) {
            kfilecopytomenu_timerevent_isbase = false;
            KFileCopyToMenu::timerEvent(event);
        } else if (kfilecopytomenu_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfilecopytomenu_timerevent_callback(this, cbval1);
        } else {
            KFileCopyToMenu::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilecopytomenu_childevent_isbase) {
            kfilecopytomenu_childevent_isbase = false;
            KFileCopyToMenu::childEvent(event);
        } else if (kfilecopytomenu_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfilecopytomenu_childevent_callback(this, cbval1);
        } else {
            KFileCopyToMenu::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilecopytomenu_customevent_isbase) {
            kfilecopytomenu_customevent_isbase = false;
            KFileCopyToMenu::customEvent(event);
        } else if (kfilecopytomenu_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfilecopytomenu_customevent_callback(this, cbval1);
        } else {
            KFileCopyToMenu::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilecopytomenu_connectnotify_isbase) {
            kfilecopytomenu_connectnotify_isbase = false;
            KFileCopyToMenu::connectNotify(signal);
        } else if (kfilecopytomenu_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfilecopytomenu_connectnotify_callback(this, cbval1);
        } else {
            KFileCopyToMenu::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilecopytomenu_disconnectnotify_isbase) {
            kfilecopytomenu_disconnectnotify_isbase = false;
            KFileCopyToMenu::disconnectNotify(signal);
        } else if (kfilecopytomenu_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfilecopytomenu_disconnectnotify_callback(this, cbval1);
        } else {
            KFileCopyToMenu::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfilecopytomenu_sender_isbase) {
            kfilecopytomenu_sender_isbase = false;
            return KFileCopyToMenu::sender();
        } else if (kfilecopytomenu_sender_callback != nullptr) {
            QObject* callback_ret = kfilecopytomenu_sender_callback();
            return callback_ret;
        } else {
            return KFileCopyToMenu::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfilecopytomenu_sendersignalindex_isbase) {
            kfilecopytomenu_sendersignalindex_isbase = false;
            return KFileCopyToMenu::senderSignalIndex();
        } else if (kfilecopytomenu_sendersignalindex_callback != nullptr) {
            int callback_ret = kfilecopytomenu_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFileCopyToMenu::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfilecopytomenu_receivers_isbase) {
            kfilecopytomenu_receivers_isbase = false;
            return KFileCopyToMenu::receivers(signal);
        } else if (kfilecopytomenu_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfilecopytomenu_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFileCopyToMenu::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfilecopytomenu_issignalconnected_isbase) {
            kfilecopytomenu_issignalconnected_isbase = false;
            return KFileCopyToMenu::isSignalConnected(signal);
        } else if (kfilecopytomenu_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfilecopytomenu_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileCopyToMenu::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KFileCopyToMenu_TimerEvent(KFileCopyToMenu* self, QTimerEvent* event);
    friend void KFileCopyToMenu_QBaseTimerEvent(KFileCopyToMenu* self, QTimerEvent* event);
    friend void KFileCopyToMenu_ChildEvent(KFileCopyToMenu* self, QChildEvent* event);
    friend void KFileCopyToMenu_QBaseChildEvent(KFileCopyToMenu* self, QChildEvent* event);
    friend void KFileCopyToMenu_CustomEvent(KFileCopyToMenu* self, QEvent* event);
    friend void KFileCopyToMenu_QBaseCustomEvent(KFileCopyToMenu* self, QEvent* event);
    friend void KFileCopyToMenu_ConnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal);
    friend void KFileCopyToMenu_QBaseConnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal);
    friend void KFileCopyToMenu_DisconnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal);
    friend void KFileCopyToMenu_QBaseDisconnectNotify(KFileCopyToMenu* self, const QMetaMethod* signal);
    friend QObject* KFileCopyToMenu_Sender(const KFileCopyToMenu* self);
    friend QObject* KFileCopyToMenu_QBaseSender(const KFileCopyToMenu* self);
    friend int KFileCopyToMenu_SenderSignalIndex(const KFileCopyToMenu* self);
    friend int KFileCopyToMenu_QBaseSenderSignalIndex(const KFileCopyToMenu* self);
    friend int KFileCopyToMenu_Receivers(const KFileCopyToMenu* self, const char* signal);
    friend int KFileCopyToMenu_QBaseReceivers(const KFileCopyToMenu* self, const char* signal);
    friend bool KFileCopyToMenu_IsSignalConnected(const KFileCopyToMenu* self, const QMetaMethod* signal);
    friend bool KFileCopyToMenu_QBaseIsSignalConnected(const KFileCopyToMenu* self, const QMetaMethod* signal);
};

#endif
