#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOOLBARSPACERACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOOLBARSPACERACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToolBarSpacerAction so that we can call protected methods
class VirtualKToolBarSpacerAction final : public KToolBarSpacerAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKToolBarSpacerAction = true;

    // Virtual class public types (including callbacks)
    using KToolBarSpacerAction_Metacall_Callback = int (*)(KToolBarSpacerAction*, int, int, void**);
    using KToolBarSpacerAction_CreateWidget_Callback = QWidget* (*)(KToolBarSpacerAction*, QWidget*);
    using KToolBarSpacerAction_Event_Callback = bool (*)(KToolBarSpacerAction*, QEvent*);
    using KToolBarSpacerAction_EventFilter_Callback = bool (*)(KToolBarSpacerAction*, QObject*, QEvent*);
    using KToolBarSpacerAction_DeleteWidget_Callback = void (*)(KToolBarSpacerAction*, QWidget*);
    using KToolBarSpacerAction_TimerEvent_Callback = void (*)(KToolBarSpacerAction*, QTimerEvent*);
    using KToolBarSpacerAction_ChildEvent_Callback = void (*)(KToolBarSpacerAction*, QChildEvent*);
    using KToolBarSpacerAction_CustomEvent_Callback = void (*)(KToolBarSpacerAction*, QEvent*);
    using KToolBarSpacerAction_ConnectNotify_Callback = void (*)(KToolBarSpacerAction*, QMetaMethod*);
    using KToolBarSpacerAction_DisconnectNotify_Callback = void (*)(KToolBarSpacerAction*, QMetaMethod*);
    using KToolBarSpacerAction_CreatedWidgets_Callback = QWidget** (*)();
    using KToolBarSpacerAction_Sender_Callback = QObject* (*)();
    using KToolBarSpacerAction_SenderSignalIndex_Callback = int (*)();
    using KToolBarSpacerAction_Receivers_Callback = int (*)(const KToolBarSpacerAction*, const char*);
    using KToolBarSpacerAction_IsSignalConnected_Callback = bool (*)(const KToolBarSpacerAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    KToolBarSpacerAction_Metacall_Callback ktoolbarspaceraction_metacall_callback = nullptr;
    KToolBarSpacerAction_CreateWidget_Callback ktoolbarspaceraction_createwidget_callback = nullptr;
    KToolBarSpacerAction_Event_Callback ktoolbarspaceraction_event_callback = nullptr;
    KToolBarSpacerAction_EventFilter_Callback ktoolbarspaceraction_eventfilter_callback = nullptr;
    KToolBarSpacerAction_DeleteWidget_Callback ktoolbarspaceraction_deletewidget_callback = nullptr;
    KToolBarSpacerAction_TimerEvent_Callback ktoolbarspaceraction_timerevent_callback = nullptr;
    KToolBarSpacerAction_ChildEvent_Callback ktoolbarspaceraction_childevent_callback = nullptr;
    KToolBarSpacerAction_CustomEvent_Callback ktoolbarspaceraction_customevent_callback = nullptr;
    KToolBarSpacerAction_ConnectNotify_Callback ktoolbarspaceraction_connectnotify_callback = nullptr;
    KToolBarSpacerAction_DisconnectNotify_Callback ktoolbarspaceraction_disconnectnotify_callback = nullptr;
    KToolBarSpacerAction_CreatedWidgets_Callback ktoolbarspaceraction_createdwidgets_callback = nullptr;
    KToolBarSpacerAction_Sender_Callback ktoolbarspaceraction_sender_callback = nullptr;
    KToolBarSpacerAction_SenderSignalIndex_Callback ktoolbarspaceraction_sendersignalindex_callback = nullptr;
    KToolBarSpacerAction_Receivers_Callback ktoolbarspaceraction_receivers_callback = nullptr;
    KToolBarSpacerAction_IsSignalConnected_Callback ktoolbarspaceraction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktoolbarspaceraction_metacall_isbase = false;
    mutable bool ktoolbarspaceraction_createwidget_isbase = false;
    mutable bool ktoolbarspaceraction_event_isbase = false;
    mutable bool ktoolbarspaceraction_eventfilter_isbase = false;
    mutable bool ktoolbarspaceraction_deletewidget_isbase = false;
    mutable bool ktoolbarspaceraction_timerevent_isbase = false;
    mutable bool ktoolbarspaceraction_childevent_isbase = false;
    mutable bool ktoolbarspaceraction_customevent_isbase = false;
    mutable bool ktoolbarspaceraction_connectnotify_isbase = false;
    mutable bool ktoolbarspaceraction_disconnectnotify_isbase = false;
    mutable bool ktoolbarspaceraction_createdwidgets_isbase = false;
    mutable bool ktoolbarspaceraction_sender_isbase = false;
    mutable bool ktoolbarspaceraction_sendersignalindex_isbase = false;
    mutable bool ktoolbarspaceraction_receivers_isbase = false;
    mutable bool ktoolbarspaceraction_issignalconnected_isbase = false;

  public:
    VirtualKToolBarSpacerAction(QObject* parent) : KToolBarSpacerAction(parent) {};

    ~VirtualKToolBarSpacerAction() {
        ktoolbarspaceraction_metacall_callback = nullptr;
        ktoolbarspaceraction_createwidget_callback = nullptr;
        ktoolbarspaceraction_event_callback = nullptr;
        ktoolbarspaceraction_eventfilter_callback = nullptr;
        ktoolbarspaceraction_deletewidget_callback = nullptr;
        ktoolbarspaceraction_timerevent_callback = nullptr;
        ktoolbarspaceraction_childevent_callback = nullptr;
        ktoolbarspaceraction_customevent_callback = nullptr;
        ktoolbarspaceraction_connectnotify_callback = nullptr;
        ktoolbarspaceraction_disconnectnotify_callback = nullptr;
        ktoolbarspaceraction_createdwidgets_callback = nullptr;
        ktoolbarspaceraction_sender_callback = nullptr;
        ktoolbarspaceraction_sendersignalindex_callback = nullptr;
        ktoolbarspaceraction_receivers_callback = nullptr;
        ktoolbarspaceraction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKToolBarSpacerAction_Metacall_Callback(KToolBarSpacerAction_Metacall_Callback cb) { ktoolbarspaceraction_metacall_callback = cb; }
    inline void setKToolBarSpacerAction_CreateWidget_Callback(KToolBarSpacerAction_CreateWidget_Callback cb) { ktoolbarspaceraction_createwidget_callback = cb; }
    inline void setKToolBarSpacerAction_Event_Callback(KToolBarSpacerAction_Event_Callback cb) { ktoolbarspaceraction_event_callback = cb; }
    inline void setKToolBarSpacerAction_EventFilter_Callback(KToolBarSpacerAction_EventFilter_Callback cb) { ktoolbarspaceraction_eventfilter_callback = cb; }
    inline void setKToolBarSpacerAction_DeleteWidget_Callback(KToolBarSpacerAction_DeleteWidget_Callback cb) { ktoolbarspaceraction_deletewidget_callback = cb; }
    inline void setKToolBarSpacerAction_TimerEvent_Callback(KToolBarSpacerAction_TimerEvent_Callback cb) { ktoolbarspaceraction_timerevent_callback = cb; }
    inline void setKToolBarSpacerAction_ChildEvent_Callback(KToolBarSpacerAction_ChildEvent_Callback cb) { ktoolbarspaceraction_childevent_callback = cb; }
    inline void setKToolBarSpacerAction_CustomEvent_Callback(KToolBarSpacerAction_CustomEvent_Callback cb) { ktoolbarspaceraction_customevent_callback = cb; }
    inline void setKToolBarSpacerAction_ConnectNotify_Callback(KToolBarSpacerAction_ConnectNotify_Callback cb) { ktoolbarspaceraction_connectnotify_callback = cb; }
    inline void setKToolBarSpacerAction_DisconnectNotify_Callback(KToolBarSpacerAction_DisconnectNotify_Callback cb) { ktoolbarspaceraction_disconnectnotify_callback = cb; }
    inline void setKToolBarSpacerAction_CreatedWidgets_Callback(KToolBarSpacerAction_CreatedWidgets_Callback cb) { ktoolbarspaceraction_createdwidgets_callback = cb; }
    inline void setKToolBarSpacerAction_Sender_Callback(KToolBarSpacerAction_Sender_Callback cb) { ktoolbarspaceraction_sender_callback = cb; }
    inline void setKToolBarSpacerAction_SenderSignalIndex_Callback(KToolBarSpacerAction_SenderSignalIndex_Callback cb) { ktoolbarspaceraction_sendersignalindex_callback = cb; }
    inline void setKToolBarSpacerAction_Receivers_Callback(KToolBarSpacerAction_Receivers_Callback cb) { ktoolbarspaceraction_receivers_callback = cb; }
    inline void setKToolBarSpacerAction_IsSignalConnected_Callback(KToolBarSpacerAction_IsSignalConnected_Callback cb) { ktoolbarspaceraction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKToolBarSpacerAction_Metacall_IsBase(bool value) const { ktoolbarspaceraction_metacall_isbase = value; }
    inline void setKToolBarSpacerAction_CreateWidget_IsBase(bool value) const { ktoolbarspaceraction_createwidget_isbase = value; }
    inline void setKToolBarSpacerAction_Event_IsBase(bool value) const { ktoolbarspaceraction_event_isbase = value; }
    inline void setKToolBarSpacerAction_EventFilter_IsBase(bool value) const { ktoolbarspaceraction_eventfilter_isbase = value; }
    inline void setKToolBarSpacerAction_DeleteWidget_IsBase(bool value) const { ktoolbarspaceraction_deletewidget_isbase = value; }
    inline void setKToolBarSpacerAction_TimerEvent_IsBase(bool value) const { ktoolbarspaceraction_timerevent_isbase = value; }
    inline void setKToolBarSpacerAction_ChildEvent_IsBase(bool value) const { ktoolbarspaceraction_childevent_isbase = value; }
    inline void setKToolBarSpacerAction_CustomEvent_IsBase(bool value) const { ktoolbarspaceraction_customevent_isbase = value; }
    inline void setKToolBarSpacerAction_ConnectNotify_IsBase(bool value) const { ktoolbarspaceraction_connectnotify_isbase = value; }
    inline void setKToolBarSpacerAction_DisconnectNotify_IsBase(bool value) const { ktoolbarspaceraction_disconnectnotify_isbase = value; }
    inline void setKToolBarSpacerAction_CreatedWidgets_IsBase(bool value) const { ktoolbarspaceraction_createdwidgets_isbase = value; }
    inline void setKToolBarSpacerAction_Sender_IsBase(bool value) const { ktoolbarspaceraction_sender_isbase = value; }
    inline void setKToolBarSpacerAction_SenderSignalIndex_IsBase(bool value) const { ktoolbarspaceraction_sendersignalindex_isbase = value; }
    inline void setKToolBarSpacerAction_Receivers_IsBase(bool value) const { ktoolbarspaceraction_receivers_isbase = value; }
    inline void setKToolBarSpacerAction_IsSignalConnected_IsBase(bool value) const { ktoolbarspaceraction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktoolbarspaceraction_metacall_isbase) {
            ktoolbarspaceraction_metacall_isbase = false;
            return KToolBarSpacerAction::qt_metacall(param1, param2, param3);
        } else if (ktoolbarspaceraction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktoolbarspaceraction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KToolBarSpacerAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (ktoolbarspaceraction_createwidget_isbase) {
            ktoolbarspaceraction_createwidget_isbase = false;
            return KToolBarSpacerAction::createWidget(parent);
        } else if (ktoolbarspaceraction_createwidget_callback != nullptr) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = ktoolbarspaceraction_createwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolBarSpacerAction::createWidget(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktoolbarspaceraction_event_isbase) {
            ktoolbarspaceraction_event_isbase = false;
            return KToolBarSpacerAction::event(param1);
        } else if (ktoolbarspaceraction_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = ktoolbarspaceraction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolBarSpacerAction::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (ktoolbarspaceraction_eventfilter_isbase) {
            ktoolbarspaceraction_eventfilter_isbase = false;
            return KToolBarSpacerAction::eventFilter(param1, param2);
        } else if (ktoolbarspaceraction_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = ktoolbarspaceraction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KToolBarSpacerAction::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (ktoolbarspaceraction_deletewidget_isbase) {
            ktoolbarspaceraction_deletewidget_isbase = false;
            KToolBarSpacerAction::deleteWidget(widget);
        } else if (ktoolbarspaceraction_deletewidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            ktoolbarspaceraction_deletewidget_callback(this, cbval1);
        } else {
            KToolBarSpacerAction::deleteWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktoolbarspaceraction_timerevent_isbase) {
            ktoolbarspaceraction_timerevent_isbase = false;
            KToolBarSpacerAction::timerEvent(event);
        } else if (ktoolbarspaceraction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktoolbarspaceraction_timerevent_callback(this, cbval1);
        } else {
            KToolBarSpacerAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktoolbarspaceraction_childevent_isbase) {
            ktoolbarspaceraction_childevent_isbase = false;
            KToolBarSpacerAction::childEvent(event);
        } else if (ktoolbarspaceraction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktoolbarspaceraction_childevent_callback(this, cbval1);
        } else {
            KToolBarSpacerAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktoolbarspaceraction_customevent_isbase) {
            ktoolbarspaceraction_customevent_isbase = false;
            KToolBarSpacerAction::customEvent(event);
        } else if (ktoolbarspaceraction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktoolbarspaceraction_customevent_callback(this, cbval1);
        } else {
            KToolBarSpacerAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktoolbarspaceraction_connectnotify_isbase) {
            ktoolbarspaceraction_connectnotify_isbase = false;
            KToolBarSpacerAction::connectNotify(signal);
        } else if (ktoolbarspaceraction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktoolbarspaceraction_connectnotify_callback(this, cbval1);
        } else {
            KToolBarSpacerAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktoolbarspaceraction_disconnectnotify_isbase) {
            ktoolbarspaceraction_disconnectnotify_isbase = false;
            KToolBarSpacerAction::disconnectNotify(signal);
        } else if (ktoolbarspaceraction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktoolbarspaceraction_disconnectnotify_callback(this, cbval1);
        } else {
            KToolBarSpacerAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (ktoolbarspaceraction_createdwidgets_isbase) {
            ktoolbarspaceraction_createdwidgets_isbase = false;
            return KToolBarSpacerAction::createdWidgets();
        } else if (ktoolbarspaceraction_createdwidgets_callback != nullptr) {
            QWidget** callback_ret = ktoolbarspaceraction_createdwidgets_callback();
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KToolBarSpacerAction::createdWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktoolbarspaceraction_sender_isbase) {
            ktoolbarspaceraction_sender_isbase = false;
            return KToolBarSpacerAction::sender();
        } else if (ktoolbarspaceraction_sender_callback != nullptr) {
            QObject* callback_ret = ktoolbarspaceraction_sender_callback();
            return callback_ret;
        } else {
            return KToolBarSpacerAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktoolbarspaceraction_sendersignalindex_isbase) {
            ktoolbarspaceraction_sendersignalindex_isbase = false;
            return KToolBarSpacerAction::senderSignalIndex();
        } else if (ktoolbarspaceraction_sendersignalindex_callback != nullptr) {
            int callback_ret = ktoolbarspaceraction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KToolBarSpacerAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktoolbarspaceraction_receivers_isbase) {
            ktoolbarspaceraction_receivers_isbase = false;
            return KToolBarSpacerAction::receivers(signal);
        } else if (ktoolbarspaceraction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktoolbarspaceraction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KToolBarSpacerAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktoolbarspaceraction_issignalconnected_isbase) {
            ktoolbarspaceraction_issignalconnected_isbase = false;
            return KToolBarSpacerAction::isSignalConnected(signal);
        } else if (ktoolbarspaceraction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktoolbarspaceraction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolBarSpacerAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KToolBarSpacerAction_Event(KToolBarSpacerAction* self, QEvent* param1);
    friend bool KToolBarSpacerAction_QBaseEvent(KToolBarSpacerAction* self, QEvent* param1);
    friend bool KToolBarSpacerAction_EventFilter(KToolBarSpacerAction* self, QObject* param1, QEvent* param2);
    friend bool KToolBarSpacerAction_QBaseEventFilter(KToolBarSpacerAction* self, QObject* param1, QEvent* param2);
    friend void KToolBarSpacerAction_DeleteWidget(KToolBarSpacerAction* self, QWidget* widget);
    friend void KToolBarSpacerAction_QBaseDeleteWidget(KToolBarSpacerAction* self, QWidget* widget);
    friend void KToolBarSpacerAction_TimerEvent(KToolBarSpacerAction* self, QTimerEvent* event);
    friend void KToolBarSpacerAction_QBaseTimerEvent(KToolBarSpacerAction* self, QTimerEvent* event);
    friend void KToolBarSpacerAction_ChildEvent(KToolBarSpacerAction* self, QChildEvent* event);
    friend void KToolBarSpacerAction_QBaseChildEvent(KToolBarSpacerAction* self, QChildEvent* event);
    friend void KToolBarSpacerAction_CustomEvent(KToolBarSpacerAction* self, QEvent* event);
    friend void KToolBarSpacerAction_QBaseCustomEvent(KToolBarSpacerAction* self, QEvent* event);
    friend void KToolBarSpacerAction_ConnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal);
    friend void KToolBarSpacerAction_QBaseConnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal);
    friend void KToolBarSpacerAction_DisconnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal);
    friend void KToolBarSpacerAction_QBaseDisconnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal);
    friend libqt_list /* of QWidget* */ KToolBarSpacerAction_CreatedWidgets(const KToolBarSpacerAction* self);
    friend libqt_list /* of QWidget* */ KToolBarSpacerAction_QBaseCreatedWidgets(const KToolBarSpacerAction* self);
    friend QObject* KToolBarSpacerAction_Sender(const KToolBarSpacerAction* self);
    friend QObject* KToolBarSpacerAction_QBaseSender(const KToolBarSpacerAction* self);
    friend int KToolBarSpacerAction_SenderSignalIndex(const KToolBarSpacerAction* self);
    friend int KToolBarSpacerAction_QBaseSenderSignalIndex(const KToolBarSpacerAction* self);
    friend int KToolBarSpacerAction_Receivers(const KToolBarSpacerAction* self, const char* signal);
    friend int KToolBarSpacerAction_QBaseReceivers(const KToolBarSpacerAction* self, const char* signal);
    friend bool KToolBarSpacerAction_IsSignalConnected(const KToolBarSpacerAction* self, const QMetaMethod* signal);
    friend bool KToolBarSpacerAction_QBaseIsSignalConnected(const KToolBarSpacerAction* self, const QMetaMethod* signal);
};

#endif
