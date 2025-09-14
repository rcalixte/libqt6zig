#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKNEWFILEMENU_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKNEWFILEMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNewFileMenu so that we can call protected methods
class VirtualKNewFileMenu final : public KNewFileMenu {

  public:
    // Virtual class boolean flag
    bool isVirtualKNewFileMenu = true;

    // Virtual class public types (including callbacks)
    using KNewFileMenu_Metacall_Callback = int (*)(KNewFileMenu*, int, int, void**);
    using KNewFileMenu_SlotResult_Callback = void (*)(KNewFileMenu*, KJob*);
    using KNewFileMenu_CreateWidget_Callback = QWidget* (*)(KNewFileMenu*, QWidget*);
    using KNewFileMenu_Event_Callback = bool (*)(KNewFileMenu*, QEvent*);
    using KNewFileMenu_EventFilter_Callback = bool (*)(KNewFileMenu*, QObject*, QEvent*);
    using KNewFileMenu_DeleteWidget_Callback = void (*)(KNewFileMenu*, QWidget*);
    using KNewFileMenu_TimerEvent_Callback = void (*)(KNewFileMenu*, QTimerEvent*);
    using KNewFileMenu_ChildEvent_Callback = void (*)(KNewFileMenu*, QChildEvent*);
    using KNewFileMenu_CustomEvent_Callback = void (*)(KNewFileMenu*, QEvent*);
    using KNewFileMenu_ConnectNotify_Callback = void (*)(KNewFileMenu*, QMetaMethod*);
    using KNewFileMenu_DisconnectNotify_Callback = void (*)(KNewFileMenu*, QMetaMethod*);
    using KNewFileMenu_CreatedWidgets_Callback = QWidget** (*)();
    using KNewFileMenu_Sender_Callback = QObject* (*)();
    using KNewFileMenu_SenderSignalIndex_Callback = int (*)();
    using KNewFileMenu_Receivers_Callback = int (*)(const KNewFileMenu*, const char*);
    using KNewFileMenu_IsSignalConnected_Callback = bool (*)(const KNewFileMenu*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNewFileMenu_Metacall_Callback knewfilemenu_metacall_callback = nullptr;
    KNewFileMenu_SlotResult_Callback knewfilemenu_slotresult_callback = nullptr;
    KNewFileMenu_CreateWidget_Callback knewfilemenu_createwidget_callback = nullptr;
    KNewFileMenu_Event_Callback knewfilemenu_event_callback = nullptr;
    KNewFileMenu_EventFilter_Callback knewfilemenu_eventfilter_callback = nullptr;
    KNewFileMenu_DeleteWidget_Callback knewfilemenu_deletewidget_callback = nullptr;
    KNewFileMenu_TimerEvent_Callback knewfilemenu_timerevent_callback = nullptr;
    KNewFileMenu_ChildEvent_Callback knewfilemenu_childevent_callback = nullptr;
    KNewFileMenu_CustomEvent_Callback knewfilemenu_customevent_callback = nullptr;
    KNewFileMenu_ConnectNotify_Callback knewfilemenu_connectnotify_callback = nullptr;
    KNewFileMenu_DisconnectNotify_Callback knewfilemenu_disconnectnotify_callback = nullptr;
    KNewFileMenu_CreatedWidgets_Callback knewfilemenu_createdwidgets_callback = nullptr;
    KNewFileMenu_Sender_Callback knewfilemenu_sender_callback = nullptr;
    KNewFileMenu_SenderSignalIndex_Callback knewfilemenu_sendersignalindex_callback = nullptr;
    KNewFileMenu_Receivers_Callback knewfilemenu_receivers_callback = nullptr;
    KNewFileMenu_IsSignalConnected_Callback knewfilemenu_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knewfilemenu_metacall_isbase = false;
    mutable bool knewfilemenu_slotresult_isbase = false;
    mutable bool knewfilemenu_createwidget_isbase = false;
    mutable bool knewfilemenu_event_isbase = false;
    mutable bool knewfilemenu_eventfilter_isbase = false;
    mutable bool knewfilemenu_deletewidget_isbase = false;
    mutable bool knewfilemenu_timerevent_isbase = false;
    mutable bool knewfilemenu_childevent_isbase = false;
    mutable bool knewfilemenu_customevent_isbase = false;
    mutable bool knewfilemenu_connectnotify_isbase = false;
    mutable bool knewfilemenu_disconnectnotify_isbase = false;
    mutable bool knewfilemenu_createdwidgets_isbase = false;
    mutable bool knewfilemenu_sender_isbase = false;
    mutable bool knewfilemenu_sendersignalindex_isbase = false;
    mutable bool knewfilemenu_receivers_isbase = false;
    mutable bool knewfilemenu_issignalconnected_isbase = false;

  public:
    VirtualKNewFileMenu(QObject* parent) : KNewFileMenu(parent) {};

    ~VirtualKNewFileMenu() {
        knewfilemenu_metacall_callback = nullptr;
        knewfilemenu_slotresult_callback = nullptr;
        knewfilemenu_createwidget_callback = nullptr;
        knewfilemenu_event_callback = nullptr;
        knewfilemenu_eventfilter_callback = nullptr;
        knewfilemenu_deletewidget_callback = nullptr;
        knewfilemenu_timerevent_callback = nullptr;
        knewfilemenu_childevent_callback = nullptr;
        knewfilemenu_customevent_callback = nullptr;
        knewfilemenu_connectnotify_callback = nullptr;
        knewfilemenu_disconnectnotify_callback = nullptr;
        knewfilemenu_createdwidgets_callback = nullptr;
        knewfilemenu_sender_callback = nullptr;
        knewfilemenu_sendersignalindex_callback = nullptr;
        knewfilemenu_receivers_callback = nullptr;
        knewfilemenu_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKNewFileMenu_Metacall_Callback(KNewFileMenu_Metacall_Callback cb) { knewfilemenu_metacall_callback = cb; }
    inline void setKNewFileMenu_SlotResult_Callback(KNewFileMenu_SlotResult_Callback cb) { knewfilemenu_slotresult_callback = cb; }
    inline void setKNewFileMenu_CreateWidget_Callback(KNewFileMenu_CreateWidget_Callback cb) { knewfilemenu_createwidget_callback = cb; }
    inline void setKNewFileMenu_Event_Callback(KNewFileMenu_Event_Callback cb) { knewfilemenu_event_callback = cb; }
    inline void setKNewFileMenu_EventFilter_Callback(KNewFileMenu_EventFilter_Callback cb) { knewfilemenu_eventfilter_callback = cb; }
    inline void setKNewFileMenu_DeleteWidget_Callback(KNewFileMenu_DeleteWidget_Callback cb) { knewfilemenu_deletewidget_callback = cb; }
    inline void setKNewFileMenu_TimerEvent_Callback(KNewFileMenu_TimerEvent_Callback cb) { knewfilemenu_timerevent_callback = cb; }
    inline void setKNewFileMenu_ChildEvent_Callback(KNewFileMenu_ChildEvent_Callback cb) { knewfilemenu_childevent_callback = cb; }
    inline void setKNewFileMenu_CustomEvent_Callback(KNewFileMenu_CustomEvent_Callback cb) { knewfilemenu_customevent_callback = cb; }
    inline void setKNewFileMenu_ConnectNotify_Callback(KNewFileMenu_ConnectNotify_Callback cb) { knewfilemenu_connectnotify_callback = cb; }
    inline void setKNewFileMenu_DisconnectNotify_Callback(KNewFileMenu_DisconnectNotify_Callback cb) { knewfilemenu_disconnectnotify_callback = cb; }
    inline void setKNewFileMenu_CreatedWidgets_Callback(KNewFileMenu_CreatedWidgets_Callback cb) { knewfilemenu_createdwidgets_callback = cb; }
    inline void setKNewFileMenu_Sender_Callback(KNewFileMenu_Sender_Callback cb) { knewfilemenu_sender_callback = cb; }
    inline void setKNewFileMenu_SenderSignalIndex_Callback(KNewFileMenu_SenderSignalIndex_Callback cb) { knewfilemenu_sendersignalindex_callback = cb; }
    inline void setKNewFileMenu_Receivers_Callback(KNewFileMenu_Receivers_Callback cb) { knewfilemenu_receivers_callback = cb; }
    inline void setKNewFileMenu_IsSignalConnected_Callback(KNewFileMenu_IsSignalConnected_Callback cb) { knewfilemenu_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNewFileMenu_Metacall_IsBase(bool value) const { knewfilemenu_metacall_isbase = value; }
    inline void setKNewFileMenu_SlotResult_IsBase(bool value) const { knewfilemenu_slotresult_isbase = value; }
    inline void setKNewFileMenu_CreateWidget_IsBase(bool value) const { knewfilemenu_createwidget_isbase = value; }
    inline void setKNewFileMenu_Event_IsBase(bool value) const { knewfilemenu_event_isbase = value; }
    inline void setKNewFileMenu_EventFilter_IsBase(bool value) const { knewfilemenu_eventfilter_isbase = value; }
    inline void setKNewFileMenu_DeleteWidget_IsBase(bool value) const { knewfilemenu_deletewidget_isbase = value; }
    inline void setKNewFileMenu_TimerEvent_IsBase(bool value) const { knewfilemenu_timerevent_isbase = value; }
    inline void setKNewFileMenu_ChildEvent_IsBase(bool value) const { knewfilemenu_childevent_isbase = value; }
    inline void setKNewFileMenu_CustomEvent_IsBase(bool value) const { knewfilemenu_customevent_isbase = value; }
    inline void setKNewFileMenu_ConnectNotify_IsBase(bool value) const { knewfilemenu_connectnotify_isbase = value; }
    inline void setKNewFileMenu_DisconnectNotify_IsBase(bool value) const { knewfilemenu_disconnectnotify_isbase = value; }
    inline void setKNewFileMenu_CreatedWidgets_IsBase(bool value) const { knewfilemenu_createdwidgets_isbase = value; }
    inline void setKNewFileMenu_Sender_IsBase(bool value) const { knewfilemenu_sender_isbase = value; }
    inline void setKNewFileMenu_SenderSignalIndex_IsBase(bool value) const { knewfilemenu_sendersignalindex_isbase = value; }
    inline void setKNewFileMenu_Receivers_IsBase(bool value) const { knewfilemenu_receivers_isbase = value; }
    inline void setKNewFileMenu_IsSignalConnected_IsBase(bool value) const { knewfilemenu_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knewfilemenu_metacall_isbase) {
            knewfilemenu_metacall_isbase = false;
            return KNewFileMenu::qt_metacall(param1, param2, param3);
        } else if (knewfilemenu_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = knewfilemenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KNewFileMenu::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResult(KJob* job) override {
        if (knewfilemenu_slotresult_isbase) {
            knewfilemenu_slotresult_isbase = false;
            KNewFileMenu::slotResult(job);
        } else if (knewfilemenu_slotresult_callback != nullptr) {
            KJob* cbval1 = job;

            knewfilemenu_slotresult_callback(this, cbval1);
        } else {
            KNewFileMenu::slotResult(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (knewfilemenu_createwidget_isbase) {
            knewfilemenu_createwidget_isbase = false;
            return KNewFileMenu::createWidget(parent);
        } else if (knewfilemenu_createwidget_callback != nullptr) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = knewfilemenu_createwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNewFileMenu::createWidget(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (knewfilemenu_event_isbase) {
            knewfilemenu_event_isbase = false;
            return KNewFileMenu::event(param1);
        } else if (knewfilemenu_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = knewfilemenu_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNewFileMenu::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (knewfilemenu_eventfilter_isbase) {
            knewfilemenu_eventfilter_isbase = false;
            return KNewFileMenu::eventFilter(param1, param2);
        } else if (knewfilemenu_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = knewfilemenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNewFileMenu::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (knewfilemenu_deletewidget_isbase) {
            knewfilemenu_deletewidget_isbase = false;
            KNewFileMenu::deleteWidget(widget);
        } else if (knewfilemenu_deletewidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            knewfilemenu_deletewidget_callback(this, cbval1);
        } else {
            KNewFileMenu::deleteWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knewfilemenu_timerevent_isbase) {
            knewfilemenu_timerevent_isbase = false;
            KNewFileMenu::timerEvent(event);
        } else if (knewfilemenu_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            knewfilemenu_timerevent_callback(this, cbval1);
        } else {
            KNewFileMenu::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knewfilemenu_childevent_isbase) {
            knewfilemenu_childevent_isbase = false;
            KNewFileMenu::childEvent(event);
        } else if (knewfilemenu_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            knewfilemenu_childevent_callback(this, cbval1);
        } else {
            KNewFileMenu::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knewfilemenu_customevent_isbase) {
            knewfilemenu_customevent_isbase = false;
            KNewFileMenu::customEvent(event);
        } else if (knewfilemenu_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knewfilemenu_customevent_callback(this, cbval1);
        } else {
            KNewFileMenu::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knewfilemenu_connectnotify_isbase) {
            knewfilemenu_connectnotify_isbase = false;
            KNewFileMenu::connectNotify(signal);
        } else if (knewfilemenu_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knewfilemenu_connectnotify_callback(this, cbval1);
        } else {
            KNewFileMenu::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knewfilemenu_disconnectnotify_isbase) {
            knewfilemenu_disconnectnotify_isbase = false;
            KNewFileMenu::disconnectNotify(signal);
        } else if (knewfilemenu_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knewfilemenu_disconnectnotify_callback(this, cbval1);
        } else {
            KNewFileMenu::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (knewfilemenu_createdwidgets_isbase) {
            knewfilemenu_createdwidgets_isbase = false;
            return KNewFileMenu::createdWidgets();
        } else if (knewfilemenu_createdwidgets_callback != nullptr) {
            QWidget** callback_ret = knewfilemenu_createdwidgets_callback();
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KNewFileMenu::createdWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knewfilemenu_sender_isbase) {
            knewfilemenu_sender_isbase = false;
            return KNewFileMenu::sender();
        } else if (knewfilemenu_sender_callback != nullptr) {
            QObject* callback_ret = knewfilemenu_sender_callback();
            return callback_ret;
        } else {
            return KNewFileMenu::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knewfilemenu_sendersignalindex_isbase) {
            knewfilemenu_sendersignalindex_isbase = false;
            return KNewFileMenu::senderSignalIndex();
        } else if (knewfilemenu_sendersignalindex_callback != nullptr) {
            int callback_ret = knewfilemenu_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNewFileMenu::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knewfilemenu_receivers_isbase) {
            knewfilemenu_receivers_isbase = false;
            return KNewFileMenu::receivers(signal);
        } else if (knewfilemenu_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = knewfilemenu_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNewFileMenu::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knewfilemenu_issignalconnected_isbase) {
            knewfilemenu_issignalconnected_isbase = false;
            return KNewFileMenu::isSignalConnected(signal);
        } else if (knewfilemenu_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = knewfilemenu_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNewFileMenu::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KNewFileMenu_SlotResult(KNewFileMenu* self, KJob* job);
    friend void KNewFileMenu_QBaseSlotResult(KNewFileMenu* self, KJob* job);
    friend bool KNewFileMenu_Event(KNewFileMenu* self, QEvent* param1);
    friend bool KNewFileMenu_QBaseEvent(KNewFileMenu* self, QEvent* param1);
    friend bool KNewFileMenu_EventFilter(KNewFileMenu* self, QObject* param1, QEvent* param2);
    friend bool KNewFileMenu_QBaseEventFilter(KNewFileMenu* self, QObject* param1, QEvent* param2);
    friend void KNewFileMenu_DeleteWidget(KNewFileMenu* self, QWidget* widget);
    friend void KNewFileMenu_QBaseDeleteWidget(KNewFileMenu* self, QWidget* widget);
    friend void KNewFileMenu_TimerEvent(KNewFileMenu* self, QTimerEvent* event);
    friend void KNewFileMenu_QBaseTimerEvent(KNewFileMenu* self, QTimerEvent* event);
    friend void KNewFileMenu_ChildEvent(KNewFileMenu* self, QChildEvent* event);
    friend void KNewFileMenu_QBaseChildEvent(KNewFileMenu* self, QChildEvent* event);
    friend void KNewFileMenu_CustomEvent(KNewFileMenu* self, QEvent* event);
    friend void KNewFileMenu_QBaseCustomEvent(KNewFileMenu* self, QEvent* event);
    friend void KNewFileMenu_ConnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
    friend void KNewFileMenu_QBaseConnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
    friend void KNewFileMenu_DisconnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
    friend void KNewFileMenu_QBaseDisconnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
    friend libqt_list /* of QWidget* */ KNewFileMenu_CreatedWidgets(const KNewFileMenu* self);
    friend libqt_list /* of QWidget* */ KNewFileMenu_QBaseCreatedWidgets(const KNewFileMenu* self);
    friend QObject* KNewFileMenu_Sender(const KNewFileMenu* self);
    friend QObject* KNewFileMenu_QBaseSender(const KNewFileMenu* self);
    friend int KNewFileMenu_SenderSignalIndex(const KNewFileMenu* self);
    friend int KNewFileMenu_QBaseSenderSignalIndex(const KNewFileMenu* self);
    friend int KNewFileMenu_Receivers(const KNewFileMenu* self, const char* signal);
    friend int KNewFileMenu_QBaseReceivers(const KNewFileMenu* self, const char* signal);
    friend bool KNewFileMenu_IsSignalConnected(const KNewFileMenu* self, const QMetaMethod* signal);
    friend bool KNewFileMenu_QBaseIsSignalConnected(const KNewFileMenu* self, const QMetaMethod* signal);
};

#endif
