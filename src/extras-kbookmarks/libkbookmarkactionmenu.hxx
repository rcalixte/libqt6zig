#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKACTIONMENU_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKACTIONMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkActionMenu so that we can call protected methods
class VirtualKBookmarkActionMenu final : public KBookmarkActionMenu {

  public:
    // Virtual class boolean flag
    bool isVirtualKBookmarkActionMenu = true;

    // Virtual class public types (including callbacks)
    using KBookmarkActionMenu_Metacall_Callback = int (*)(KBookmarkActionMenu*, int, int, void**);
    using KBookmarkActionMenu_CreateWidget_Callback = QWidget* (*)(KBookmarkActionMenu*, QWidget*);
    using KBookmarkActionMenu_Event_Callback = bool (*)(KBookmarkActionMenu*, QEvent*);
    using KBookmarkActionMenu_EventFilter_Callback = bool (*)(KBookmarkActionMenu*, QObject*, QEvent*);
    using KBookmarkActionMenu_DeleteWidget_Callback = void (*)(KBookmarkActionMenu*, QWidget*);
    using KBookmarkActionMenu_TimerEvent_Callback = void (*)(KBookmarkActionMenu*, QTimerEvent*);
    using KBookmarkActionMenu_ChildEvent_Callback = void (*)(KBookmarkActionMenu*, QChildEvent*);
    using KBookmarkActionMenu_CustomEvent_Callback = void (*)(KBookmarkActionMenu*, QEvent*);
    using KBookmarkActionMenu_ConnectNotify_Callback = void (*)(KBookmarkActionMenu*, QMetaMethod*);
    using KBookmarkActionMenu_DisconnectNotify_Callback = void (*)(KBookmarkActionMenu*, QMetaMethod*);
    using KBookmarkActionMenu_CreatedWidgets_Callback = QWidget** (*)();
    using KBookmarkActionMenu_Sender_Callback = QObject* (*)();
    using KBookmarkActionMenu_SenderSignalIndex_Callback = int (*)();
    using KBookmarkActionMenu_Receivers_Callback = int (*)(const KBookmarkActionMenu*, const char*);
    using KBookmarkActionMenu_IsSignalConnected_Callback = bool (*)(const KBookmarkActionMenu*, QMetaMethod*);

  protected:
    // Instance callback storage
    KBookmarkActionMenu_Metacall_Callback kbookmarkactionmenu_metacall_callback = nullptr;
    KBookmarkActionMenu_CreateWidget_Callback kbookmarkactionmenu_createwidget_callback = nullptr;
    KBookmarkActionMenu_Event_Callback kbookmarkactionmenu_event_callback = nullptr;
    KBookmarkActionMenu_EventFilter_Callback kbookmarkactionmenu_eventfilter_callback = nullptr;
    KBookmarkActionMenu_DeleteWidget_Callback kbookmarkactionmenu_deletewidget_callback = nullptr;
    KBookmarkActionMenu_TimerEvent_Callback kbookmarkactionmenu_timerevent_callback = nullptr;
    KBookmarkActionMenu_ChildEvent_Callback kbookmarkactionmenu_childevent_callback = nullptr;
    KBookmarkActionMenu_CustomEvent_Callback kbookmarkactionmenu_customevent_callback = nullptr;
    KBookmarkActionMenu_ConnectNotify_Callback kbookmarkactionmenu_connectnotify_callback = nullptr;
    KBookmarkActionMenu_DisconnectNotify_Callback kbookmarkactionmenu_disconnectnotify_callback = nullptr;
    KBookmarkActionMenu_CreatedWidgets_Callback kbookmarkactionmenu_createdwidgets_callback = nullptr;
    KBookmarkActionMenu_Sender_Callback kbookmarkactionmenu_sender_callback = nullptr;
    KBookmarkActionMenu_SenderSignalIndex_Callback kbookmarkactionmenu_sendersignalindex_callback = nullptr;
    KBookmarkActionMenu_Receivers_Callback kbookmarkactionmenu_receivers_callback = nullptr;
    KBookmarkActionMenu_IsSignalConnected_Callback kbookmarkactionmenu_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kbookmarkactionmenu_metacall_isbase = false;
    mutable bool kbookmarkactionmenu_createwidget_isbase = false;
    mutable bool kbookmarkactionmenu_event_isbase = false;
    mutable bool kbookmarkactionmenu_eventfilter_isbase = false;
    mutable bool kbookmarkactionmenu_deletewidget_isbase = false;
    mutable bool kbookmarkactionmenu_timerevent_isbase = false;
    mutable bool kbookmarkactionmenu_childevent_isbase = false;
    mutable bool kbookmarkactionmenu_customevent_isbase = false;
    mutable bool kbookmarkactionmenu_connectnotify_isbase = false;
    mutable bool kbookmarkactionmenu_disconnectnotify_isbase = false;
    mutable bool kbookmarkactionmenu_createdwidgets_isbase = false;
    mutable bool kbookmarkactionmenu_sender_isbase = false;
    mutable bool kbookmarkactionmenu_sendersignalindex_isbase = false;
    mutable bool kbookmarkactionmenu_receivers_isbase = false;
    mutable bool kbookmarkactionmenu_issignalconnected_isbase = false;

  public:
    VirtualKBookmarkActionMenu(const KBookmark& bm, QObject* parent) : KBookmarkActionMenu(bm, parent) {};
    VirtualKBookmarkActionMenu(const KBookmark& bm, const QString& text, QObject* parent) : KBookmarkActionMenu(bm, text, parent) {};

    ~VirtualKBookmarkActionMenu() {
        kbookmarkactionmenu_metacall_callback = nullptr;
        kbookmarkactionmenu_createwidget_callback = nullptr;
        kbookmarkactionmenu_event_callback = nullptr;
        kbookmarkactionmenu_eventfilter_callback = nullptr;
        kbookmarkactionmenu_deletewidget_callback = nullptr;
        kbookmarkactionmenu_timerevent_callback = nullptr;
        kbookmarkactionmenu_childevent_callback = nullptr;
        kbookmarkactionmenu_customevent_callback = nullptr;
        kbookmarkactionmenu_connectnotify_callback = nullptr;
        kbookmarkactionmenu_disconnectnotify_callback = nullptr;
        kbookmarkactionmenu_createdwidgets_callback = nullptr;
        kbookmarkactionmenu_sender_callback = nullptr;
        kbookmarkactionmenu_sendersignalindex_callback = nullptr;
        kbookmarkactionmenu_receivers_callback = nullptr;
        kbookmarkactionmenu_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKBookmarkActionMenu_Metacall_Callback(KBookmarkActionMenu_Metacall_Callback cb) { kbookmarkactionmenu_metacall_callback = cb; }
    inline void setKBookmarkActionMenu_CreateWidget_Callback(KBookmarkActionMenu_CreateWidget_Callback cb) { kbookmarkactionmenu_createwidget_callback = cb; }
    inline void setKBookmarkActionMenu_Event_Callback(KBookmarkActionMenu_Event_Callback cb) { kbookmarkactionmenu_event_callback = cb; }
    inline void setKBookmarkActionMenu_EventFilter_Callback(KBookmarkActionMenu_EventFilter_Callback cb) { kbookmarkactionmenu_eventfilter_callback = cb; }
    inline void setKBookmarkActionMenu_DeleteWidget_Callback(KBookmarkActionMenu_DeleteWidget_Callback cb) { kbookmarkactionmenu_deletewidget_callback = cb; }
    inline void setKBookmarkActionMenu_TimerEvent_Callback(KBookmarkActionMenu_TimerEvent_Callback cb) { kbookmarkactionmenu_timerevent_callback = cb; }
    inline void setKBookmarkActionMenu_ChildEvent_Callback(KBookmarkActionMenu_ChildEvent_Callback cb) { kbookmarkactionmenu_childevent_callback = cb; }
    inline void setKBookmarkActionMenu_CustomEvent_Callback(KBookmarkActionMenu_CustomEvent_Callback cb) { kbookmarkactionmenu_customevent_callback = cb; }
    inline void setKBookmarkActionMenu_ConnectNotify_Callback(KBookmarkActionMenu_ConnectNotify_Callback cb) { kbookmarkactionmenu_connectnotify_callback = cb; }
    inline void setKBookmarkActionMenu_DisconnectNotify_Callback(KBookmarkActionMenu_DisconnectNotify_Callback cb) { kbookmarkactionmenu_disconnectnotify_callback = cb; }
    inline void setKBookmarkActionMenu_CreatedWidgets_Callback(KBookmarkActionMenu_CreatedWidgets_Callback cb) { kbookmarkactionmenu_createdwidgets_callback = cb; }
    inline void setKBookmarkActionMenu_Sender_Callback(KBookmarkActionMenu_Sender_Callback cb) { kbookmarkactionmenu_sender_callback = cb; }
    inline void setKBookmarkActionMenu_SenderSignalIndex_Callback(KBookmarkActionMenu_SenderSignalIndex_Callback cb) { kbookmarkactionmenu_sendersignalindex_callback = cb; }
    inline void setKBookmarkActionMenu_Receivers_Callback(KBookmarkActionMenu_Receivers_Callback cb) { kbookmarkactionmenu_receivers_callback = cb; }
    inline void setKBookmarkActionMenu_IsSignalConnected_Callback(KBookmarkActionMenu_IsSignalConnected_Callback cb) { kbookmarkactionmenu_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKBookmarkActionMenu_Metacall_IsBase(bool value) const { kbookmarkactionmenu_metacall_isbase = value; }
    inline void setKBookmarkActionMenu_CreateWidget_IsBase(bool value) const { kbookmarkactionmenu_createwidget_isbase = value; }
    inline void setKBookmarkActionMenu_Event_IsBase(bool value) const { kbookmarkactionmenu_event_isbase = value; }
    inline void setKBookmarkActionMenu_EventFilter_IsBase(bool value) const { kbookmarkactionmenu_eventfilter_isbase = value; }
    inline void setKBookmarkActionMenu_DeleteWidget_IsBase(bool value) const { kbookmarkactionmenu_deletewidget_isbase = value; }
    inline void setKBookmarkActionMenu_TimerEvent_IsBase(bool value) const { kbookmarkactionmenu_timerevent_isbase = value; }
    inline void setKBookmarkActionMenu_ChildEvent_IsBase(bool value) const { kbookmarkactionmenu_childevent_isbase = value; }
    inline void setKBookmarkActionMenu_CustomEvent_IsBase(bool value) const { kbookmarkactionmenu_customevent_isbase = value; }
    inline void setKBookmarkActionMenu_ConnectNotify_IsBase(bool value) const { kbookmarkactionmenu_connectnotify_isbase = value; }
    inline void setKBookmarkActionMenu_DisconnectNotify_IsBase(bool value) const { kbookmarkactionmenu_disconnectnotify_isbase = value; }
    inline void setKBookmarkActionMenu_CreatedWidgets_IsBase(bool value) const { kbookmarkactionmenu_createdwidgets_isbase = value; }
    inline void setKBookmarkActionMenu_Sender_IsBase(bool value) const { kbookmarkactionmenu_sender_isbase = value; }
    inline void setKBookmarkActionMenu_SenderSignalIndex_IsBase(bool value) const { kbookmarkactionmenu_sendersignalindex_isbase = value; }
    inline void setKBookmarkActionMenu_Receivers_IsBase(bool value) const { kbookmarkactionmenu_receivers_isbase = value; }
    inline void setKBookmarkActionMenu_IsSignalConnected_IsBase(bool value) const { kbookmarkactionmenu_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbookmarkactionmenu_metacall_isbase) {
            kbookmarkactionmenu_metacall_isbase = false;
            return KBookmarkActionMenu::qt_metacall(param1, param2, param3);
        } else if (kbookmarkactionmenu_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kbookmarkactionmenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkActionMenu::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kbookmarkactionmenu_createwidget_isbase) {
            kbookmarkactionmenu_createwidget_isbase = false;
            return KBookmarkActionMenu::createWidget(parent);
        } else if (kbookmarkactionmenu_createwidget_callback != nullptr) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = kbookmarkactionmenu_createwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkActionMenu::createWidget(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kbookmarkactionmenu_event_isbase) {
            kbookmarkactionmenu_event_isbase = false;
            return KBookmarkActionMenu::event(param1);
        } else if (kbookmarkactionmenu_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = kbookmarkactionmenu_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkActionMenu::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kbookmarkactionmenu_eventfilter_isbase) {
            kbookmarkactionmenu_eventfilter_isbase = false;
            return KBookmarkActionMenu::eventFilter(param1, param2);
        } else if (kbookmarkactionmenu_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kbookmarkactionmenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KBookmarkActionMenu::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kbookmarkactionmenu_deletewidget_isbase) {
            kbookmarkactionmenu_deletewidget_isbase = false;
            KBookmarkActionMenu::deleteWidget(widget);
        } else if (kbookmarkactionmenu_deletewidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            kbookmarkactionmenu_deletewidget_callback(this, cbval1);
        } else {
            KBookmarkActionMenu::deleteWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbookmarkactionmenu_timerevent_isbase) {
            kbookmarkactionmenu_timerevent_isbase = false;
            KBookmarkActionMenu::timerEvent(event);
        } else if (kbookmarkactionmenu_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kbookmarkactionmenu_timerevent_callback(this, cbval1);
        } else {
            KBookmarkActionMenu::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbookmarkactionmenu_childevent_isbase) {
            kbookmarkactionmenu_childevent_isbase = false;
            KBookmarkActionMenu::childEvent(event);
        } else if (kbookmarkactionmenu_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kbookmarkactionmenu_childevent_callback(this, cbval1);
        } else {
            KBookmarkActionMenu::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbookmarkactionmenu_customevent_isbase) {
            kbookmarkactionmenu_customevent_isbase = false;
            KBookmarkActionMenu::customEvent(event);
        } else if (kbookmarkactionmenu_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kbookmarkactionmenu_customevent_callback(this, cbval1);
        } else {
            KBookmarkActionMenu::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbookmarkactionmenu_connectnotify_isbase) {
            kbookmarkactionmenu_connectnotify_isbase = false;
            KBookmarkActionMenu::connectNotify(signal);
        } else if (kbookmarkactionmenu_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbookmarkactionmenu_connectnotify_callback(this, cbval1);
        } else {
            KBookmarkActionMenu::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbookmarkactionmenu_disconnectnotify_isbase) {
            kbookmarkactionmenu_disconnectnotify_isbase = false;
            KBookmarkActionMenu::disconnectNotify(signal);
        } else if (kbookmarkactionmenu_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbookmarkactionmenu_disconnectnotify_callback(this, cbval1);
        } else {
            KBookmarkActionMenu::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (kbookmarkactionmenu_createdwidgets_isbase) {
            kbookmarkactionmenu_createdwidgets_isbase = false;
            return KBookmarkActionMenu::createdWidgets();
        } else if (kbookmarkactionmenu_createdwidgets_callback != nullptr) {
            QWidget** callback_ret = kbookmarkactionmenu_createdwidgets_callback();
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KBookmarkActionMenu::createdWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kbookmarkactionmenu_sender_isbase) {
            kbookmarkactionmenu_sender_isbase = false;
            return KBookmarkActionMenu::sender();
        } else if (kbookmarkactionmenu_sender_callback != nullptr) {
            QObject* callback_ret = kbookmarkactionmenu_sender_callback();
            return callback_ret;
        } else {
            return KBookmarkActionMenu::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kbookmarkactionmenu_sendersignalindex_isbase) {
            kbookmarkactionmenu_sendersignalindex_isbase = false;
            return KBookmarkActionMenu::senderSignalIndex();
        } else if (kbookmarkactionmenu_sendersignalindex_callback != nullptr) {
            int callback_ret = kbookmarkactionmenu_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkActionMenu::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kbookmarkactionmenu_receivers_isbase) {
            kbookmarkactionmenu_receivers_isbase = false;
            return KBookmarkActionMenu::receivers(signal);
        } else if (kbookmarkactionmenu_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kbookmarkactionmenu_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkActionMenu::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kbookmarkactionmenu_issignalconnected_isbase) {
            kbookmarkactionmenu_issignalconnected_isbase = false;
            return KBookmarkActionMenu::isSignalConnected(signal);
        } else if (kbookmarkactionmenu_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kbookmarkactionmenu_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkActionMenu::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KBookmarkActionMenu_Event(KBookmarkActionMenu* self, QEvent* param1);
    friend bool KBookmarkActionMenu_QBaseEvent(KBookmarkActionMenu* self, QEvent* param1);
    friend bool KBookmarkActionMenu_EventFilter(KBookmarkActionMenu* self, QObject* param1, QEvent* param2);
    friend bool KBookmarkActionMenu_QBaseEventFilter(KBookmarkActionMenu* self, QObject* param1, QEvent* param2);
    friend void KBookmarkActionMenu_DeleteWidget(KBookmarkActionMenu* self, QWidget* widget);
    friend void KBookmarkActionMenu_QBaseDeleteWidget(KBookmarkActionMenu* self, QWidget* widget);
    friend void KBookmarkActionMenu_TimerEvent(KBookmarkActionMenu* self, QTimerEvent* event);
    friend void KBookmarkActionMenu_QBaseTimerEvent(KBookmarkActionMenu* self, QTimerEvent* event);
    friend void KBookmarkActionMenu_ChildEvent(KBookmarkActionMenu* self, QChildEvent* event);
    friend void KBookmarkActionMenu_QBaseChildEvent(KBookmarkActionMenu* self, QChildEvent* event);
    friend void KBookmarkActionMenu_CustomEvent(KBookmarkActionMenu* self, QEvent* event);
    friend void KBookmarkActionMenu_QBaseCustomEvent(KBookmarkActionMenu* self, QEvent* event);
    friend void KBookmarkActionMenu_ConnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
    friend void KBookmarkActionMenu_QBaseConnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
    friend void KBookmarkActionMenu_DisconnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
    friend void KBookmarkActionMenu_QBaseDisconnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
    friend libqt_list /* of QWidget* */ KBookmarkActionMenu_CreatedWidgets(const KBookmarkActionMenu* self);
    friend libqt_list /* of QWidget* */ KBookmarkActionMenu_QBaseCreatedWidgets(const KBookmarkActionMenu* self);
    friend QObject* KBookmarkActionMenu_Sender(const KBookmarkActionMenu* self);
    friend QObject* KBookmarkActionMenu_QBaseSender(const KBookmarkActionMenu* self);
    friend int KBookmarkActionMenu_SenderSignalIndex(const KBookmarkActionMenu* self);
    friend int KBookmarkActionMenu_QBaseSenderSignalIndex(const KBookmarkActionMenu* self);
    friend int KBookmarkActionMenu_Receivers(const KBookmarkActionMenu* self, const char* signal);
    friend int KBookmarkActionMenu_QBaseReceivers(const KBookmarkActionMenu* self, const char* signal);
    friend bool KBookmarkActionMenu_IsSignalConnected(const KBookmarkActionMenu* self, const QMetaMethod* signal);
    friend bool KBookmarkActionMenu_QBaseIsSignalConnected(const KBookmarkActionMenu* self, const QMetaMethod* signal);
};

#endif
