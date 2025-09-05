#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKHELPMENU_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKHELPMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KHelpMenu so that we can call protected methods
class VirtualKHelpMenu final : public KHelpMenu {

  public:
    // Virtual class boolean flag
    bool isVirtualKHelpMenu = true;

    // Virtual class public types (including callbacks)
    using KHelpMenu_Metacall_Callback = int (*)(KHelpMenu*, int, int, void**);
    using KHelpMenu_Event_Callback = bool (*)(KHelpMenu*, QEvent*);
    using KHelpMenu_EventFilter_Callback = bool (*)(KHelpMenu*, QObject*, QEvent*);
    using KHelpMenu_TimerEvent_Callback = void (*)(KHelpMenu*, QTimerEvent*);
    using KHelpMenu_ChildEvent_Callback = void (*)(KHelpMenu*, QChildEvent*);
    using KHelpMenu_CustomEvent_Callback = void (*)(KHelpMenu*, QEvent*);
    using KHelpMenu_ConnectNotify_Callback = void (*)(KHelpMenu*, QMetaMethod*);
    using KHelpMenu_DisconnectNotify_Callback = void (*)(KHelpMenu*, QMetaMethod*);
    using KHelpMenu_Sender_Callback = QObject* (*)();
    using KHelpMenu_SenderSignalIndex_Callback = int (*)();
    using KHelpMenu_Receivers_Callback = int (*)(const KHelpMenu*, const char*);
    using KHelpMenu_IsSignalConnected_Callback = bool (*)(const KHelpMenu*, QMetaMethod*);

  protected:
    // Instance callback storage
    KHelpMenu_Metacall_Callback khelpmenu_metacall_callback = nullptr;
    KHelpMenu_Event_Callback khelpmenu_event_callback = nullptr;
    KHelpMenu_EventFilter_Callback khelpmenu_eventfilter_callback = nullptr;
    KHelpMenu_TimerEvent_Callback khelpmenu_timerevent_callback = nullptr;
    KHelpMenu_ChildEvent_Callback khelpmenu_childevent_callback = nullptr;
    KHelpMenu_CustomEvent_Callback khelpmenu_customevent_callback = nullptr;
    KHelpMenu_ConnectNotify_Callback khelpmenu_connectnotify_callback = nullptr;
    KHelpMenu_DisconnectNotify_Callback khelpmenu_disconnectnotify_callback = nullptr;
    KHelpMenu_Sender_Callback khelpmenu_sender_callback = nullptr;
    KHelpMenu_SenderSignalIndex_Callback khelpmenu_sendersignalindex_callback = nullptr;
    KHelpMenu_Receivers_Callback khelpmenu_receivers_callback = nullptr;
    KHelpMenu_IsSignalConnected_Callback khelpmenu_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool khelpmenu_metacall_isbase = false;
    mutable bool khelpmenu_event_isbase = false;
    mutable bool khelpmenu_eventfilter_isbase = false;
    mutable bool khelpmenu_timerevent_isbase = false;
    mutable bool khelpmenu_childevent_isbase = false;
    mutable bool khelpmenu_customevent_isbase = false;
    mutable bool khelpmenu_connectnotify_isbase = false;
    mutable bool khelpmenu_disconnectnotify_isbase = false;
    mutable bool khelpmenu_sender_isbase = false;
    mutable bool khelpmenu_sendersignalindex_isbase = false;
    mutable bool khelpmenu_receivers_isbase = false;
    mutable bool khelpmenu_issignalconnected_isbase = false;

  public:
    VirtualKHelpMenu(QWidget* parent) : KHelpMenu(parent) {};
    VirtualKHelpMenu(QWidget* parent, const QString& unused) : KHelpMenu(parent, unused) {};
    VirtualKHelpMenu() : KHelpMenu() {};
    VirtualKHelpMenu(QWidget* parent, const KAboutData& aboutData, bool showWhatsThis) : KHelpMenu(parent, aboutData, showWhatsThis) {};
    VirtualKHelpMenu(QWidget* parent, const KAboutData& aboutData) : KHelpMenu(parent, aboutData) {};
    VirtualKHelpMenu(QWidget* parent, const QString& unused, bool showWhatsThis) : KHelpMenu(parent, unused, showWhatsThis) {};

    ~VirtualKHelpMenu() {
        khelpmenu_metacall_callback = nullptr;
        khelpmenu_event_callback = nullptr;
        khelpmenu_eventfilter_callback = nullptr;
        khelpmenu_timerevent_callback = nullptr;
        khelpmenu_childevent_callback = nullptr;
        khelpmenu_customevent_callback = nullptr;
        khelpmenu_connectnotify_callback = nullptr;
        khelpmenu_disconnectnotify_callback = nullptr;
        khelpmenu_sender_callback = nullptr;
        khelpmenu_sendersignalindex_callback = nullptr;
        khelpmenu_receivers_callback = nullptr;
        khelpmenu_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKHelpMenu_Metacall_Callback(KHelpMenu_Metacall_Callback cb) { khelpmenu_metacall_callback = cb; }
    inline void setKHelpMenu_Event_Callback(KHelpMenu_Event_Callback cb) { khelpmenu_event_callback = cb; }
    inline void setKHelpMenu_EventFilter_Callback(KHelpMenu_EventFilter_Callback cb) { khelpmenu_eventfilter_callback = cb; }
    inline void setKHelpMenu_TimerEvent_Callback(KHelpMenu_TimerEvent_Callback cb) { khelpmenu_timerevent_callback = cb; }
    inline void setKHelpMenu_ChildEvent_Callback(KHelpMenu_ChildEvent_Callback cb) { khelpmenu_childevent_callback = cb; }
    inline void setKHelpMenu_CustomEvent_Callback(KHelpMenu_CustomEvent_Callback cb) { khelpmenu_customevent_callback = cb; }
    inline void setKHelpMenu_ConnectNotify_Callback(KHelpMenu_ConnectNotify_Callback cb) { khelpmenu_connectnotify_callback = cb; }
    inline void setKHelpMenu_DisconnectNotify_Callback(KHelpMenu_DisconnectNotify_Callback cb) { khelpmenu_disconnectnotify_callback = cb; }
    inline void setKHelpMenu_Sender_Callback(KHelpMenu_Sender_Callback cb) { khelpmenu_sender_callback = cb; }
    inline void setKHelpMenu_SenderSignalIndex_Callback(KHelpMenu_SenderSignalIndex_Callback cb) { khelpmenu_sendersignalindex_callback = cb; }
    inline void setKHelpMenu_Receivers_Callback(KHelpMenu_Receivers_Callback cb) { khelpmenu_receivers_callback = cb; }
    inline void setKHelpMenu_IsSignalConnected_Callback(KHelpMenu_IsSignalConnected_Callback cb) { khelpmenu_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKHelpMenu_Metacall_IsBase(bool value) const { khelpmenu_metacall_isbase = value; }
    inline void setKHelpMenu_Event_IsBase(bool value) const { khelpmenu_event_isbase = value; }
    inline void setKHelpMenu_EventFilter_IsBase(bool value) const { khelpmenu_eventfilter_isbase = value; }
    inline void setKHelpMenu_TimerEvent_IsBase(bool value) const { khelpmenu_timerevent_isbase = value; }
    inline void setKHelpMenu_ChildEvent_IsBase(bool value) const { khelpmenu_childevent_isbase = value; }
    inline void setKHelpMenu_CustomEvent_IsBase(bool value) const { khelpmenu_customevent_isbase = value; }
    inline void setKHelpMenu_ConnectNotify_IsBase(bool value) const { khelpmenu_connectnotify_isbase = value; }
    inline void setKHelpMenu_DisconnectNotify_IsBase(bool value) const { khelpmenu_disconnectnotify_isbase = value; }
    inline void setKHelpMenu_Sender_IsBase(bool value) const { khelpmenu_sender_isbase = value; }
    inline void setKHelpMenu_SenderSignalIndex_IsBase(bool value) const { khelpmenu_sendersignalindex_isbase = value; }
    inline void setKHelpMenu_Receivers_IsBase(bool value) const { khelpmenu_receivers_isbase = value; }
    inline void setKHelpMenu_IsSignalConnected_IsBase(bool value) const { khelpmenu_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (khelpmenu_metacall_isbase) {
            khelpmenu_metacall_isbase = false;
            return KHelpMenu::qt_metacall(param1, param2, param3);
        } else if (khelpmenu_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = khelpmenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KHelpMenu::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (khelpmenu_event_isbase) {
            khelpmenu_event_isbase = false;
            return KHelpMenu::event(event);
        } else if (khelpmenu_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = khelpmenu_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KHelpMenu::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (khelpmenu_eventfilter_isbase) {
            khelpmenu_eventfilter_isbase = false;
            return KHelpMenu::eventFilter(watched, event);
        } else if (khelpmenu_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = khelpmenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KHelpMenu::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (khelpmenu_timerevent_isbase) {
            khelpmenu_timerevent_isbase = false;
            KHelpMenu::timerEvent(event);
        } else if (khelpmenu_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            khelpmenu_timerevent_callback(this, cbval1);
        } else {
            KHelpMenu::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (khelpmenu_childevent_isbase) {
            khelpmenu_childevent_isbase = false;
            KHelpMenu::childEvent(event);
        } else if (khelpmenu_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            khelpmenu_childevent_callback(this, cbval1);
        } else {
            KHelpMenu::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (khelpmenu_customevent_isbase) {
            khelpmenu_customevent_isbase = false;
            KHelpMenu::customEvent(event);
        } else if (khelpmenu_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            khelpmenu_customevent_callback(this, cbval1);
        } else {
            KHelpMenu::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (khelpmenu_connectnotify_isbase) {
            khelpmenu_connectnotify_isbase = false;
            KHelpMenu::connectNotify(signal);
        } else if (khelpmenu_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            khelpmenu_connectnotify_callback(this, cbval1);
        } else {
            KHelpMenu::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (khelpmenu_disconnectnotify_isbase) {
            khelpmenu_disconnectnotify_isbase = false;
            KHelpMenu::disconnectNotify(signal);
        } else if (khelpmenu_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            khelpmenu_disconnectnotify_callback(this, cbval1);
        } else {
            KHelpMenu::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (khelpmenu_sender_isbase) {
            khelpmenu_sender_isbase = false;
            return KHelpMenu::sender();
        } else if (khelpmenu_sender_callback != nullptr) {
            QObject* callback_ret = khelpmenu_sender_callback();
            return callback_ret;
        } else {
            return KHelpMenu::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (khelpmenu_sendersignalindex_isbase) {
            khelpmenu_sendersignalindex_isbase = false;
            return KHelpMenu::senderSignalIndex();
        } else if (khelpmenu_sendersignalindex_callback != nullptr) {
            int callback_ret = khelpmenu_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KHelpMenu::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (khelpmenu_receivers_isbase) {
            khelpmenu_receivers_isbase = false;
            return KHelpMenu::receivers(signal);
        } else if (khelpmenu_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = khelpmenu_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KHelpMenu::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (khelpmenu_issignalconnected_isbase) {
            khelpmenu_issignalconnected_isbase = false;
            return KHelpMenu::isSignalConnected(signal);
        } else if (khelpmenu_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = khelpmenu_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KHelpMenu::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KHelpMenu_TimerEvent(KHelpMenu* self, QTimerEvent* event);
    friend void KHelpMenu_QBaseTimerEvent(KHelpMenu* self, QTimerEvent* event);
    friend void KHelpMenu_ChildEvent(KHelpMenu* self, QChildEvent* event);
    friend void KHelpMenu_QBaseChildEvent(KHelpMenu* self, QChildEvent* event);
    friend void KHelpMenu_CustomEvent(KHelpMenu* self, QEvent* event);
    friend void KHelpMenu_QBaseCustomEvent(KHelpMenu* self, QEvent* event);
    friend void KHelpMenu_ConnectNotify(KHelpMenu* self, const QMetaMethod* signal);
    friend void KHelpMenu_QBaseConnectNotify(KHelpMenu* self, const QMetaMethod* signal);
    friend void KHelpMenu_DisconnectNotify(KHelpMenu* self, const QMetaMethod* signal);
    friend void KHelpMenu_QBaseDisconnectNotify(KHelpMenu* self, const QMetaMethod* signal);
    friend QObject* KHelpMenu_Sender(const KHelpMenu* self);
    friend QObject* KHelpMenu_QBaseSender(const KHelpMenu* self);
    friend int KHelpMenu_SenderSignalIndex(const KHelpMenu* self);
    friend int KHelpMenu_QBaseSenderSignalIndex(const KHelpMenu* self);
    friend int KHelpMenu_Receivers(const KHelpMenu* self, const char* signal);
    friend int KHelpMenu_QBaseReceivers(const KHelpMenu* self, const char* signal);
    friend bool KHelpMenu_IsSignalConnected(const KHelpMenu* self, const QMetaMethod* signal);
    friend bool KHelpMenu_QBaseIsSignalConnected(const KHelpMenu* self, const QMetaMethod* signal);
};

#endif
