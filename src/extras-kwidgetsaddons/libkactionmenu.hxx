#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKACTIONMENU_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKACTIONMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KActionMenu so that we can call protected methods
class VirtualKActionMenu final : public KActionMenu {

  public:
    // Virtual class boolean flag
    bool isVirtualKActionMenu = true;

    // Virtual class public types (including callbacks)
    using KActionMenu_Metacall_Callback = int (*)(KActionMenu*, int, int, void**);
    using KActionMenu_CreateWidget_Callback = QWidget* (*)(KActionMenu*, QWidget*);
    using KActionMenu_Event_Callback = bool (*)(KActionMenu*, QEvent*);
    using KActionMenu_EventFilter_Callback = bool (*)(KActionMenu*, QObject*, QEvent*);
    using KActionMenu_DeleteWidget_Callback = void (*)(KActionMenu*, QWidget*);
    using KActionMenu_TimerEvent_Callback = void (*)(KActionMenu*, QTimerEvent*);
    using KActionMenu_ChildEvent_Callback = void (*)(KActionMenu*, QChildEvent*);
    using KActionMenu_CustomEvent_Callback = void (*)(KActionMenu*, QEvent*);
    using KActionMenu_ConnectNotify_Callback = void (*)(KActionMenu*, QMetaMethod*);
    using KActionMenu_DisconnectNotify_Callback = void (*)(KActionMenu*, QMetaMethod*);
    using KActionMenu_CreatedWidgets_Callback = QWidget** (*)();
    using KActionMenu_Sender_Callback = QObject* (*)();
    using KActionMenu_SenderSignalIndex_Callback = int (*)();
    using KActionMenu_Receivers_Callback = int (*)(const KActionMenu*, const char*);
    using KActionMenu_IsSignalConnected_Callback = bool (*)(const KActionMenu*, QMetaMethod*);

  protected:
    // Instance callback storage
    KActionMenu_Metacall_Callback kactionmenu_metacall_callback = nullptr;
    KActionMenu_CreateWidget_Callback kactionmenu_createwidget_callback = nullptr;
    KActionMenu_Event_Callback kactionmenu_event_callback = nullptr;
    KActionMenu_EventFilter_Callback kactionmenu_eventfilter_callback = nullptr;
    KActionMenu_DeleteWidget_Callback kactionmenu_deletewidget_callback = nullptr;
    KActionMenu_TimerEvent_Callback kactionmenu_timerevent_callback = nullptr;
    KActionMenu_ChildEvent_Callback kactionmenu_childevent_callback = nullptr;
    KActionMenu_CustomEvent_Callback kactionmenu_customevent_callback = nullptr;
    KActionMenu_ConnectNotify_Callback kactionmenu_connectnotify_callback = nullptr;
    KActionMenu_DisconnectNotify_Callback kactionmenu_disconnectnotify_callback = nullptr;
    KActionMenu_CreatedWidgets_Callback kactionmenu_createdwidgets_callback = nullptr;
    KActionMenu_Sender_Callback kactionmenu_sender_callback = nullptr;
    KActionMenu_SenderSignalIndex_Callback kactionmenu_sendersignalindex_callback = nullptr;
    KActionMenu_Receivers_Callback kactionmenu_receivers_callback = nullptr;
    KActionMenu_IsSignalConnected_Callback kactionmenu_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kactionmenu_metacall_isbase = false;
    mutable bool kactionmenu_createwidget_isbase = false;
    mutable bool kactionmenu_event_isbase = false;
    mutable bool kactionmenu_eventfilter_isbase = false;
    mutable bool kactionmenu_deletewidget_isbase = false;
    mutable bool kactionmenu_timerevent_isbase = false;
    mutable bool kactionmenu_childevent_isbase = false;
    mutable bool kactionmenu_customevent_isbase = false;
    mutable bool kactionmenu_connectnotify_isbase = false;
    mutable bool kactionmenu_disconnectnotify_isbase = false;
    mutable bool kactionmenu_createdwidgets_isbase = false;
    mutable bool kactionmenu_sender_isbase = false;
    mutable bool kactionmenu_sendersignalindex_isbase = false;
    mutable bool kactionmenu_receivers_isbase = false;
    mutable bool kactionmenu_issignalconnected_isbase = false;

  public:
    VirtualKActionMenu(QObject* parent) : KActionMenu(parent) {};
    VirtualKActionMenu(const QString& text, QObject* parent) : KActionMenu(text, parent) {};
    VirtualKActionMenu(const QIcon& icon, const QString& text, QObject* parent) : KActionMenu(icon, text, parent) {};

    ~VirtualKActionMenu() {
        kactionmenu_metacall_callback = nullptr;
        kactionmenu_createwidget_callback = nullptr;
        kactionmenu_event_callback = nullptr;
        kactionmenu_eventfilter_callback = nullptr;
        kactionmenu_deletewidget_callback = nullptr;
        kactionmenu_timerevent_callback = nullptr;
        kactionmenu_childevent_callback = nullptr;
        kactionmenu_customevent_callback = nullptr;
        kactionmenu_connectnotify_callback = nullptr;
        kactionmenu_disconnectnotify_callback = nullptr;
        kactionmenu_createdwidgets_callback = nullptr;
        kactionmenu_sender_callback = nullptr;
        kactionmenu_sendersignalindex_callback = nullptr;
        kactionmenu_receivers_callback = nullptr;
        kactionmenu_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKActionMenu_Metacall_Callback(KActionMenu_Metacall_Callback cb) { kactionmenu_metacall_callback = cb; }
    inline void setKActionMenu_CreateWidget_Callback(KActionMenu_CreateWidget_Callback cb) { kactionmenu_createwidget_callback = cb; }
    inline void setKActionMenu_Event_Callback(KActionMenu_Event_Callback cb) { kactionmenu_event_callback = cb; }
    inline void setKActionMenu_EventFilter_Callback(KActionMenu_EventFilter_Callback cb) { kactionmenu_eventfilter_callback = cb; }
    inline void setKActionMenu_DeleteWidget_Callback(KActionMenu_DeleteWidget_Callback cb) { kactionmenu_deletewidget_callback = cb; }
    inline void setKActionMenu_TimerEvent_Callback(KActionMenu_TimerEvent_Callback cb) { kactionmenu_timerevent_callback = cb; }
    inline void setKActionMenu_ChildEvent_Callback(KActionMenu_ChildEvent_Callback cb) { kactionmenu_childevent_callback = cb; }
    inline void setKActionMenu_CustomEvent_Callback(KActionMenu_CustomEvent_Callback cb) { kactionmenu_customevent_callback = cb; }
    inline void setKActionMenu_ConnectNotify_Callback(KActionMenu_ConnectNotify_Callback cb) { kactionmenu_connectnotify_callback = cb; }
    inline void setKActionMenu_DisconnectNotify_Callback(KActionMenu_DisconnectNotify_Callback cb) { kactionmenu_disconnectnotify_callback = cb; }
    inline void setKActionMenu_CreatedWidgets_Callback(KActionMenu_CreatedWidgets_Callback cb) { kactionmenu_createdwidgets_callback = cb; }
    inline void setKActionMenu_Sender_Callback(KActionMenu_Sender_Callback cb) { kactionmenu_sender_callback = cb; }
    inline void setKActionMenu_SenderSignalIndex_Callback(KActionMenu_SenderSignalIndex_Callback cb) { kactionmenu_sendersignalindex_callback = cb; }
    inline void setKActionMenu_Receivers_Callback(KActionMenu_Receivers_Callback cb) { kactionmenu_receivers_callback = cb; }
    inline void setKActionMenu_IsSignalConnected_Callback(KActionMenu_IsSignalConnected_Callback cb) { kactionmenu_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKActionMenu_Metacall_IsBase(bool value) const { kactionmenu_metacall_isbase = value; }
    inline void setKActionMenu_CreateWidget_IsBase(bool value) const { kactionmenu_createwidget_isbase = value; }
    inline void setKActionMenu_Event_IsBase(bool value) const { kactionmenu_event_isbase = value; }
    inline void setKActionMenu_EventFilter_IsBase(bool value) const { kactionmenu_eventfilter_isbase = value; }
    inline void setKActionMenu_DeleteWidget_IsBase(bool value) const { kactionmenu_deletewidget_isbase = value; }
    inline void setKActionMenu_TimerEvent_IsBase(bool value) const { kactionmenu_timerevent_isbase = value; }
    inline void setKActionMenu_ChildEvent_IsBase(bool value) const { kactionmenu_childevent_isbase = value; }
    inline void setKActionMenu_CustomEvent_IsBase(bool value) const { kactionmenu_customevent_isbase = value; }
    inline void setKActionMenu_ConnectNotify_IsBase(bool value) const { kactionmenu_connectnotify_isbase = value; }
    inline void setKActionMenu_DisconnectNotify_IsBase(bool value) const { kactionmenu_disconnectnotify_isbase = value; }
    inline void setKActionMenu_CreatedWidgets_IsBase(bool value) const { kactionmenu_createdwidgets_isbase = value; }
    inline void setKActionMenu_Sender_IsBase(bool value) const { kactionmenu_sender_isbase = value; }
    inline void setKActionMenu_SenderSignalIndex_IsBase(bool value) const { kactionmenu_sendersignalindex_isbase = value; }
    inline void setKActionMenu_Receivers_IsBase(bool value) const { kactionmenu_receivers_isbase = value; }
    inline void setKActionMenu_IsSignalConnected_IsBase(bool value) const { kactionmenu_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kactionmenu_metacall_isbase) {
            kactionmenu_metacall_isbase = false;
            return KActionMenu::qt_metacall(param1, param2, param3);
        } else if (kactionmenu_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kactionmenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KActionMenu::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kactionmenu_createwidget_isbase) {
            kactionmenu_createwidget_isbase = false;
            return KActionMenu::createWidget(parent);
        } else if (kactionmenu_createwidget_callback != nullptr) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = kactionmenu_createwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KActionMenu::createWidget(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kactionmenu_event_isbase) {
            kactionmenu_event_isbase = false;
            return KActionMenu::event(param1);
        } else if (kactionmenu_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = kactionmenu_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KActionMenu::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kactionmenu_eventfilter_isbase) {
            kactionmenu_eventfilter_isbase = false;
            return KActionMenu::eventFilter(param1, param2);
        } else if (kactionmenu_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kactionmenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KActionMenu::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kactionmenu_deletewidget_isbase) {
            kactionmenu_deletewidget_isbase = false;
            KActionMenu::deleteWidget(widget);
        } else if (kactionmenu_deletewidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            kactionmenu_deletewidget_callback(this, cbval1);
        } else {
            KActionMenu::deleteWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kactionmenu_timerevent_isbase) {
            kactionmenu_timerevent_isbase = false;
            KActionMenu::timerEvent(event);
        } else if (kactionmenu_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kactionmenu_timerevent_callback(this, cbval1);
        } else {
            KActionMenu::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kactionmenu_childevent_isbase) {
            kactionmenu_childevent_isbase = false;
            KActionMenu::childEvent(event);
        } else if (kactionmenu_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kactionmenu_childevent_callback(this, cbval1);
        } else {
            KActionMenu::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kactionmenu_customevent_isbase) {
            kactionmenu_customevent_isbase = false;
            KActionMenu::customEvent(event);
        } else if (kactionmenu_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kactionmenu_customevent_callback(this, cbval1);
        } else {
            KActionMenu::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kactionmenu_connectnotify_isbase) {
            kactionmenu_connectnotify_isbase = false;
            KActionMenu::connectNotify(signal);
        } else if (kactionmenu_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kactionmenu_connectnotify_callback(this, cbval1);
        } else {
            KActionMenu::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kactionmenu_disconnectnotify_isbase) {
            kactionmenu_disconnectnotify_isbase = false;
            KActionMenu::disconnectNotify(signal);
        } else if (kactionmenu_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kactionmenu_disconnectnotify_callback(this, cbval1);
        } else {
            KActionMenu::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (kactionmenu_createdwidgets_isbase) {
            kactionmenu_createdwidgets_isbase = false;
            return KActionMenu::createdWidgets();
        } else if (kactionmenu_createdwidgets_callback != nullptr) {
            QWidget** callback_ret = kactionmenu_createdwidgets_callback();
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KActionMenu::createdWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kactionmenu_sender_isbase) {
            kactionmenu_sender_isbase = false;
            return KActionMenu::sender();
        } else if (kactionmenu_sender_callback != nullptr) {
            QObject* callback_ret = kactionmenu_sender_callback();
            return callback_ret;
        } else {
            return KActionMenu::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kactionmenu_sendersignalindex_isbase) {
            kactionmenu_sendersignalindex_isbase = false;
            return KActionMenu::senderSignalIndex();
        } else if (kactionmenu_sendersignalindex_callback != nullptr) {
            int callback_ret = kactionmenu_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KActionMenu::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kactionmenu_receivers_isbase) {
            kactionmenu_receivers_isbase = false;
            return KActionMenu::receivers(signal);
        } else if (kactionmenu_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kactionmenu_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KActionMenu::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kactionmenu_issignalconnected_isbase) {
            kactionmenu_issignalconnected_isbase = false;
            return KActionMenu::isSignalConnected(signal);
        } else if (kactionmenu_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kactionmenu_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KActionMenu::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KActionMenu_Event(KActionMenu* self, QEvent* param1);
    friend bool KActionMenu_QBaseEvent(KActionMenu* self, QEvent* param1);
    friend bool KActionMenu_EventFilter(KActionMenu* self, QObject* param1, QEvent* param2);
    friend bool KActionMenu_QBaseEventFilter(KActionMenu* self, QObject* param1, QEvent* param2);
    friend void KActionMenu_DeleteWidget(KActionMenu* self, QWidget* widget);
    friend void KActionMenu_QBaseDeleteWidget(KActionMenu* self, QWidget* widget);
    friend void KActionMenu_TimerEvent(KActionMenu* self, QTimerEvent* event);
    friend void KActionMenu_QBaseTimerEvent(KActionMenu* self, QTimerEvent* event);
    friend void KActionMenu_ChildEvent(KActionMenu* self, QChildEvent* event);
    friend void KActionMenu_QBaseChildEvent(KActionMenu* self, QChildEvent* event);
    friend void KActionMenu_CustomEvent(KActionMenu* self, QEvent* event);
    friend void KActionMenu_QBaseCustomEvent(KActionMenu* self, QEvent* event);
    friend void KActionMenu_ConnectNotify(KActionMenu* self, const QMetaMethod* signal);
    friend void KActionMenu_QBaseConnectNotify(KActionMenu* self, const QMetaMethod* signal);
    friend void KActionMenu_DisconnectNotify(KActionMenu* self, const QMetaMethod* signal);
    friend void KActionMenu_QBaseDisconnectNotify(KActionMenu* self, const QMetaMethod* signal);
    friend libqt_list /* of QWidget* */ KActionMenu_CreatedWidgets(const KActionMenu* self);
    friend libqt_list /* of QWidget* */ KActionMenu_QBaseCreatedWidgets(const KActionMenu* self);
    friend QObject* KActionMenu_Sender(const KActionMenu* self);
    friend QObject* KActionMenu_QBaseSender(const KActionMenu* self);
    friend int KActionMenu_SenderSignalIndex(const KActionMenu* self);
    friend int KActionMenu_QBaseSenderSignalIndex(const KActionMenu* self);
    friend int KActionMenu_Receivers(const KActionMenu* self, const char* signal);
    friend int KActionMenu_QBaseReceivers(const KActionMenu* self, const char* signal);
    friend bool KActionMenu_IsSignalConnected(const KActionMenu* self, const QMetaMethod* signal);
    friend bool KActionMenu_QBaseIsSignalConnected(const KActionMenu* self, const QMetaMethod* signal);
};

#endif
