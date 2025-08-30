#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKHAMBURGERMENU_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKHAMBURGERMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KHamburgerMenu so that we can call protected methods
class VirtualKHamburgerMenu final : public KHamburgerMenu {

  public:
    // Virtual class boolean flag
    bool isVirtualKHamburgerMenu = true;

    // Virtual class public types (including callbacks)
    using KHamburgerMenu_Metacall_Callback = int (*)(KHamburgerMenu*, int, int, void**);
    using KHamburgerMenu_CreateWidget_Callback = QWidget* (*)(KHamburgerMenu*, QWidget*);
    using KHamburgerMenu_Event_Callback = bool (*)(KHamburgerMenu*, QEvent*);
    using KHamburgerMenu_EventFilter_Callback = bool (*)(KHamburgerMenu*, QObject*, QEvent*);
    using KHamburgerMenu_DeleteWidget_Callback = void (*)(KHamburgerMenu*, QWidget*);
    using KHamburgerMenu_TimerEvent_Callback = void (*)(KHamburgerMenu*, QTimerEvent*);
    using KHamburgerMenu_ChildEvent_Callback = void (*)(KHamburgerMenu*, QChildEvent*);
    using KHamburgerMenu_CustomEvent_Callback = void (*)(KHamburgerMenu*, QEvent*);
    using KHamburgerMenu_ConnectNotify_Callback = void (*)(KHamburgerMenu*, QMetaMethod*);
    using KHamburgerMenu_DisconnectNotify_Callback = void (*)(KHamburgerMenu*, QMetaMethod*);
    using KHamburgerMenu_CreatedWidgets_Callback = QWidget** (*)();
    using KHamburgerMenu_Sender_Callback = QObject* (*)();
    using KHamburgerMenu_SenderSignalIndex_Callback = int (*)();
    using KHamburgerMenu_Receivers_Callback = int (*)(const KHamburgerMenu*, const char*);
    using KHamburgerMenu_IsSignalConnected_Callback = bool (*)(const KHamburgerMenu*, QMetaMethod*);

  protected:
    // Instance callback storage
    KHamburgerMenu_Metacall_Callback khamburgermenu_metacall_callback = nullptr;
    KHamburgerMenu_CreateWidget_Callback khamburgermenu_createwidget_callback = nullptr;
    KHamburgerMenu_Event_Callback khamburgermenu_event_callback = nullptr;
    KHamburgerMenu_EventFilter_Callback khamburgermenu_eventfilter_callback = nullptr;
    KHamburgerMenu_DeleteWidget_Callback khamburgermenu_deletewidget_callback = nullptr;
    KHamburgerMenu_TimerEvent_Callback khamburgermenu_timerevent_callback = nullptr;
    KHamburgerMenu_ChildEvent_Callback khamburgermenu_childevent_callback = nullptr;
    KHamburgerMenu_CustomEvent_Callback khamburgermenu_customevent_callback = nullptr;
    KHamburgerMenu_ConnectNotify_Callback khamburgermenu_connectnotify_callback = nullptr;
    KHamburgerMenu_DisconnectNotify_Callback khamburgermenu_disconnectnotify_callback = nullptr;
    KHamburgerMenu_CreatedWidgets_Callback khamburgermenu_createdwidgets_callback = nullptr;
    KHamburgerMenu_Sender_Callback khamburgermenu_sender_callback = nullptr;
    KHamburgerMenu_SenderSignalIndex_Callback khamburgermenu_sendersignalindex_callback = nullptr;
    KHamburgerMenu_Receivers_Callback khamburgermenu_receivers_callback = nullptr;
    KHamburgerMenu_IsSignalConnected_Callback khamburgermenu_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool khamburgermenu_metacall_isbase = false;
    mutable bool khamburgermenu_createwidget_isbase = false;
    mutable bool khamburgermenu_event_isbase = false;
    mutable bool khamburgermenu_eventfilter_isbase = false;
    mutable bool khamburgermenu_deletewidget_isbase = false;
    mutable bool khamburgermenu_timerevent_isbase = false;
    mutable bool khamburgermenu_childevent_isbase = false;
    mutable bool khamburgermenu_customevent_isbase = false;
    mutable bool khamburgermenu_connectnotify_isbase = false;
    mutable bool khamburgermenu_disconnectnotify_isbase = false;
    mutable bool khamburgermenu_createdwidgets_isbase = false;
    mutable bool khamburgermenu_sender_isbase = false;
    mutable bool khamburgermenu_sendersignalindex_isbase = false;
    mutable bool khamburgermenu_receivers_isbase = false;
    mutable bool khamburgermenu_issignalconnected_isbase = false;

  public:
    VirtualKHamburgerMenu(QObject* parent) : KHamburgerMenu(parent) {};

    ~VirtualKHamburgerMenu() {
        khamburgermenu_metacall_callback = nullptr;
        khamburgermenu_createwidget_callback = nullptr;
        khamburgermenu_event_callback = nullptr;
        khamburgermenu_eventfilter_callback = nullptr;
        khamburgermenu_deletewidget_callback = nullptr;
        khamburgermenu_timerevent_callback = nullptr;
        khamburgermenu_childevent_callback = nullptr;
        khamburgermenu_customevent_callback = nullptr;
        khamburgermenu_connectnotify_callback = nullptr;
        khamburgermenu_disconnectnotify_callback = nullptr;
        khamburgermenu_createdwidgets_callback = nullptr;
        khamburgermenu_sender_callback = nullptr;
        khamburgermenu_sendersignalindex_callback = nullptr;
        khamburgermenu_receivers_callback = nullptr;
        khamburgermenu_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKHamburgerMenu_Metacall_Callback(KHamburgerMenu_Metacall_Callback cb) { khamburgermenu_metacall_callback = cb; }
    inline void setKHamburgerMenu_CreateWidget_Callback(KHamburgerMenu_CreateWidget_Callback cb) { khamburgermenu_createwidget_callback = cb; }
    inline void setKHamburgerMenu_Event_Callback(KHamburgerMenu_Event_Callback cb) { khamburgermenu_event_callback = cb; }
    inline void setKHamburgerMenu_EventFilter_Callback(KHamburgerMenu_EventFilter_Callback cb) { khamburgermenu_eventfilter_callback = cb; }
    inline void setKHamburgerMenu_DeleteWidget_Callback(KHamburgerMenu_DeleteWidget_Callback cb) { khamburgermenu_deletewidget_callback = cb; }
    inline void setKHamburgerMenu_TimerEvent_Callback(KHamburgerMenu_TimerEvent_Callback cb) { khamburgermenu_timerevent_callback = cb; }
    inline void setKHamburgerMenu_ChildEvent_Callback(KHamburgerMenu_ChildEvent_Callback cb) { khamburgermenu_childevent_callback = cb; }
    inline void setKHamburgerMenu_CustomEvent_Callback(KHamburgerMenu_CustomEvent_Callback cb) { khamburgermenu_customevent_callback = cb; }
    inline void setKHamburgerMenu_ConnectNotify_Callback(KHamburgerMenu_ConnectNotify_Callback cb) { khamburgermenu_connectnotify_callback = cb; }
    inline void setKHamburgerMenu_DisconnectNotify_Callback(KHamburgerMenu_DisconnectNotify_Callback cb) { khamburgermenu_disconnectnotify_callback = cb; }
    inline void setKHamburgerMenu_CreatedWidgets_Callback(KHamburgerMenu_CreatedWidgets_Callback cb) { khamburgermenu_createdwidgets_callback = cb; }
    inline void setKHamburgerMenu_Sender_Callback(KHamburgerMenu_Sender_Callback cb) { khamburgermenu_sender_callback = cb; }
    inline void setKHamburgerMenu_SenderSignalIndex_Callback(KHamburgerMenu_SenderSignalIndex_Callback cb) { khamburgermenu_sendersignalindex_callback = cb; }
    inline void setKHamburgerMenu_Receivers_Callback(KHamburgerMenu_Receivers_Callback cb) { khamburgermenu_receivers_callback = cb; }
    inline void setKHamburgerMenu_IsSignalConnected_Callback(KHamburgerMenu_IsSignalConnected_Callback cb) { khamburgermenu_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKHamburgerMenu_Metacall_IsBase(bool value) const { khamburgermenu_metacall_isbase = value; }
    inline void setKHamburgerMenu_CreateWidget_IsBase(bool value) const { khamburgermenu_createwidget_isbase = value; }
    inline void setKHamburgerMenu_Event_IsBase(bool value) const { khamburgermenu_event_isbase = value; }
    inline void setKHamburgerMenu_EventFilter_IsBase(bool value) const { khamburgermenu_eventfilter_isbase = value; }
    inline void setKHamburgerMenu_DeleteWidget_IsBase(bool value) const { khamburgermenu_deletewidget_isbase = value; }
    inline void setKHamburgerMenu_TimerEvent_IsBase(bool value) const { khamburgermenu_timerevent_isbase = value; }
    inline void setKHamburgerMenu_ChildEvent_IsBase(bool value) const { khamburgermenu_childevent_isbase = value; }
    inline void setKHamburgerMenu_CustomEvent_IsBase(bool value) const { khamburgermenu_customevent_isbase = value; }
    inline void setKHamburgerMenu_ConnectNotify_IsBase(bool value) const { khamburgermenu_connectnotify_isbase = value; }
    inline void setKHamburgerMenu_DisconnectNotify_IsBase(bool value) const { khamburgermenu_disconnectnotify_isbase = value; }
    inline void setKHamburgerMenu_CreatedWidgets_IsBase(bool value) const { khamburgermenu_createdwidgets_isbase = value; }
    inline void setKHamburgerMenu_Sender_IsBase(bool value) const { khamburgermenu_sender_isbase = value; }
    inline void setKHamburgerMenu_SenderSignalIndex_IsBase(bool value) const { khamburgermenu_sendersignalindex_isbase = value; }
    inline void setKHamburgerMenu_Receivers_IsBase(bool value) const { khamburgermenu_receivers_isbase = value; }
    inline void setKHamburgerMenu_IsSignalConnected_IsBase(bool value) const { khamburgermenu_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (khamburgermenu_metacall_isbase) {
            khamburgermenu_metacall_isbase = false;
            return KHamburgerMenu::qt_metacall(param1, param2, param3);
        } else if (khamburgermenu_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = khamburgermenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KHamburgerMenu::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (khamburgermenu_createwidget_isbase) {
            khamburgermenu_createwidget_isbase = false;
            return KHamburgerMenu::createWidget(parent);
        } else if (khamburgermenu_createwidget_callback != nullptr) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = khamburgermenu_createwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KHamburgerMenu::createWidget(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (khamburgermenu_event_isbase) {
            khamburgermenu_event_isbase = false;
            return KHamburgerMenu::event(param1);
        } else if (khamburgermenu_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = khamburgermenu_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KHamburgerMenu::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (khamburgermenu_eventfilter_isbase) {
            khamburgermenu_eventfilter_isbase = false;
            return KHamburgerMenu::eventFilter(param1, param2);
        } else if (khamburgermenu_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = khamburgermenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KHamburgerMenu::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (khamburgermenu_deletewidget_isbase) {
            khamburgermenu_deletewidget_isbase = false;
            KHamburgerMenu::deleteWidget(widget);
        } else if (khamburgermenu_deletewidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            khamburgermenu_deletewidget_callback(this, cbval1);
        } else {
            KHamburgerMenu::deleteWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (khamburgermenu_timerevent_isbase) {
            khamburgermenu_timerevent_isbase = false;
            KHamburgerMenu::timerEvent(event);
        } else if (khamburgermenu_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            khamburgermenu_timerevent_callback(this, cbval1);
        } else {
            KHamburgerMenu::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (khamburgermenu_childevent_isbase) {
            khamburgermenu_childevent_isbase = false;
            KHamburgerMenu::childEvent(event);
        } else if (khamburgermenu_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            khamburgermenu_childevent_callback(this, cbval1);
        } else {
            KHamburgerMenu::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (khamburgermenu_customevent_isbase) {
            khamburgermenu_customevent_isbase = false;
            KHamburgerMenu::customEvent(event);
        } else if (khamburgermenu_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            khamburgermenu_customevent_callback(this, cbval1);
        } else {
            KHamburgerMenu::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (khamburgermenu_connectnotify_isbase) {
            khamburgermenu_connectnotify_isbase = false;
            KHamburgerMenu::connectNotify(signal);
        } else if (khamburgermenu_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            khamburgermenu_connectnotify_callback(this, cbval1);
        } else {
            KHamburgerMenu::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (khamburgermenu_disconnectnotify_isbase) {
            khamburgermenu_disconnectnotify_isbase = false;
            KHamburgerMenu::disconnectNotify(signal);
        } else if (khamburgermenu_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            khamburgermenu_disconnectnotify_callback(this, cbval1);
        } else {
            KHamburgerMenu::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (khamburgermenu_createdwidgets_isbase) {
            khamburgermenu_createdwidgets_isbase = false;
            return KHamburgerMenu::createdWidgets();
        } else if (khamburgermenu_createdwidgets_callback != nullptr) {
            QWidget** callback_ret = khamburgermenu_createdwidgets_callback();
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KHamburgerMenu::createdWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (khamburgermenu_sender_isbase) {
            khamburgermenu_sender_isbase = false;
            return KHamburgerMenu::sender();
        } else if (khamburgermenu_sender_callback != nullptr) {
            QObject* callback_ret = khamburgermenu_sender_callback();
            return callback_ret;
        } else {
            return KHamburgerMenu::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (khamburgermenu_sendersignalindex_isbase) {
            khamburgermenu_sendersignalindex_isbase = false;
            return KHamburgerMenu::senderSignalIndex();
        } else if (khamburgermenu_sendersignalindex_callback != nullptr) {
            int callback_ret = khamburgermenu_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KHamburgerMenu::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (khamburgermenu_receivers_isbase) {
            khamburgermenu_receivers_isbase = false;
            return KHamburgerMenu::receivers(signal);
        } else if (khamburgermenu_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = khamburgermenu_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KHamburgerMenu::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (khamburgermenu_issignalconnected_isbase) {
            khamburgermenu_issignalconnected_isbase = false;
            return KHamburgerMenu::isSignalConnected(signal);
        } else if (khamburgermenu_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = khamburgermenu_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KHamburgerMenu::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend QWidget* KHamburgerMenu_CreateWidget(KHamburgerMenu* self, QWidget* parent);
    friend QWidget* KHamburgerMenu_QBaseCreateWidget(KHamburgerMenu* self, QWidget* parent);
    friend bool KHamburgerMenu_Event(KHamburgerMenu* self, QEvent* param1);
    friend bool KHamburgerMenu_QBaseEvent(KHamburgerMenu* self, QEvent* param1);
    friend bool KHamburgerMenu_EventFilter(KHamburgerMenu* self, QObject* param1, QEvent* param2);
    friend bool KHamburgerMenu_QBaseEventFilter(KHamburgerMenu* self, QObject* param1, QEvent* param2);
    friend void KHamburgerMenu_DeleteWidget(KHamburgerMenu* self, QWidget* widget);
    friend void KHamburgerMenu_QBaseDeleteWidget(KHamburgerMenu* self, QWidget* widget);
    friend void KHamburgerMenu_TimerEvent(KHamburgerMenu* self, QTimerEvent* event);
    friend void KHamburgerMenu_QBaseTimerEvent(KHamburgerMenu* self, QTimerEvent* event);
    friend void KHamburgerMenu_ChildEvent(KHamburgerMenu* self, QChildEvent* event);
    friend void KHamburgerMenu_QBaseChildEvent(KHamburgerMenu* self, QChildEvent* event);
    friend void KHamburgerMenu_CustomEvent(KHamburgerMenu* self, QEvent* event);
    friend void KHamburgerMenu_QBaseCustomEvent(KHamburgerMenu* self, QEvent* event);
    friend void KHamburgerMenu_ConnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
    friend void KHamburgerMenu_QBaseConnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
    friend void KHamburgerMenu_DisconnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
    friend void KHamburgerMenu_QBaseDisconnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
    friend libqt_list /* of QWidget* */ KHamburgerMenu_CreatedWidgets(const KHamburgerMenu* self);
    friend libqt_list /* of QWidget* */ KHamburgerMenu_QBaseCreatedWidgets(const KHamburgerMenu* self);
    friend QObject* KHamburgerMenu_Sender(const KHamburgerMenu* self);
    friend QObject* KHamburgerMenu_QBaseSender(const KHamburgerMenu* self);
    friend int KHamburgerMenu_SenderSignalIndex(const KHamburgerMenu* self);
    friend int KHamburgerMenu_QBaseSenderSignalIndex(const KHamburgerMenu* self);
    friend int KHamburgerMenu_Receivers(const KHamburgerMenu* self, const char* signal);
    friend int KHamburgerMenu_QBaseReceivers(const KHamburgerMenu* self, const char* signal);
    friend bool KHamburgerMenu_IsSignalConnected(const KHamburgerMenu* self, const QMetaMethod* signal);
    friend bool KHamburgerMenu_QBaseIsSignalConnected(const KHamburgerMenu* self, const QMetaMethod* signal);
};

#endif
