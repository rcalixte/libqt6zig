#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOOLBARPOPUPACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOOLBARPOPUPACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToolBarPopupAction so that we can call protected methods
class VirtualKToolBarPopupAction final : public KToolBarPopupAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKToolBarPopupAction = true;

    // Virtual class public types (including callbacks)
    using KToolBarPopupAction_Metacall_Callback = int (*)(KToolBarPopupAction*, int, int, void**);
    using KToolBarPopupAction_CreateWidget_Callback = QWidget* (*)(KToolBarPopupAction*, QWidget*);
    using KToolBarPopupAction_Event_Callback = bool (*)(KToolBarPopupAction*, QEvent*);
    using KToolBarPopupAction_EventFilter_Callback = bool (*)(KToolBarPopupAction*, QObject*, QEvent*);
    using KToolBarPopupAction_DeleteWidget_Callback = void (*)(KToolBarPopupAction*, QWidget*);
    using KToolBarPopupAction_TimerEvent_Callback = void (*)(KToolBarPopupAction*, QTimerEvent*);
    using KToolBarPopupAction_ChildEvent_Callback = void (*)(KToolBarPopupAction*, QChildEvent*);
    using KToolBarPopupAction_CustomEvent_Callback = void (*)(KToolBarPopupAction*, QEvent*);
    using KToolBarPopupAction_ConnectNotify_Callback = void (*)(KToolBarPopupAction*, QMetaMethod*);
    using KToolBarPopupAction_DisconnectNotify_Callback = void (*)(KToolBarPopupAction*, QMetaMethod*);
    using KToolBarPopupAction_CreatedWidgets_Callback = QWidget** (*)();
    using KToolBarPopupAction_Sender_Callback = QObject* (*)();
    using KToolBarPopupAction_SenderSignalIndex_Callback = int (*)();
    using KToolBarPopupAction_Receivers_Callback = int (*)(const KToolBarPopupAction*, const char*);
    using KToolBarPopupAction_IsSignalConnected_Callback = bool (*)(const KToolBarPopupAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    KToolBarPopupAction_Metacall_Callback ktoolbarpopupaction_metacall_callback = nullptr;
    KToolBarPopupAction_CreateWidget_Callback ktoolbarpopupaction_createwidget_callback = nullptr;
    KToolBarPopupAction_Event_Callback ktoolbarpopupaction_event_callback = nullptr;
    KToolBarPopupAction_EventFilter_Callback ktoolbarpopupaction_eventfilter_callback = nullptr;
    KToolBarPopupAction_DeleteWidget_Callback ktoolbarpopupaction_deletewidget_callback = nullptr;
    KToolBarPopupAction_TimerEvent_Callback ktoolbarpopupaction_timerevent_callback = nullptr;
    KToolBarPopupAction_ChildEvent_Callback ktoolbarpopupaction_childevent_callback = nullptr;
    KToolBarPopupAction_CustomEvent_Callback ktoolbarpopupaction_customevent_callback = nullptr;
    KToolBarPopupAction_ConnectNotify_Callback ktoolbarpopupaction_connectnotify_callback = nullptr;
    KToolBarPopupAction_DisconnectNotify_Callback ktoolbarpopupaction_disconnectnotify_callback = nullptr;
    KToolBarPopupAction_CreatedWidgets_Callback ktoolbarpopupaction_createdwidgets_callback = nullptr;
    KToolBarPopupAction_Sender_Callback ktoolbarpopupaction_sender_callback = nullptr;
    KToolBarPopupAction_SenderSignalIndex_Callback ktoolbarpopupaction_sendersignalindex_callback = nullptr;
    KToolBarPopupAction_Receivers_Callback ktoolbarpopupaction_receivers_callback = nullptr;
    KToolBarPopupAction_IsSignalConnected_Callback ktoolbarpopupaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktoolbarpopupaction_metacall_isbase = false;
    mutable bool ktoolbarpopupaction_createwidget_isbase = false;
    mutable bool ktoolbarpopupaction_event_isbase = false;
    mutable bool ktoolbarpopupaction_eventfilter_isbase = false;
    mutable bool ktoolbarpopupaction_deletewidget_isbase = false;
    mutable bool ktoolbarpopupaction_timerevent_isbase = false;
    mutable bool ktoolbarpopupaction_childevent_isbase = false;
    mutable bool ktoolbarpopupaction_customevent_isbase = false;
    mutable bool ktoolbarpopupaction_connectnotify_isbase = false;
    mutable bool ktoolbarpopupaction_disconnectnotify_isbase = false;
    mutable bool ktoolbarpopupaction_createdwidgets_isbase = false;
    mutable bool ktoolbarpopupaction_sender_isbase = false;
    mutable bool ktoolbarpopupaction_sendersignalindex_isbase = false;
    mutable bool ktoolbarpopupaction_receivers_isbase = false;
    mutable bool ktoolbarpopupaction_issignalconnected_isbase = false;

  public:
    VirtualKToolBarPopupAction(const QIcon& icon, const QString& text, QObject* parent) : KToolBarPopupAction(icon, text, parent) {};

    ~VirtualKToolBarPopupAction() {
        ktoolbarpopupaction_metacall_callback = nullptr;
        ktoolbarpopupaction_createwidget_callback = nullptr;
        ktoolbarpopupaction_event_callback = nullptr;
        ktoolbarpopupaction_eventfilter_callback = nullptr;
        ktoolbarpopupaction_deletewidget_callback = nullptr;
        ktoolbarpopupaction_timerevent_callback = nullptr;
        ktoolbarpopupaction_childevent_callback = nullptr;
        ktoolbarpopupaction_customevent_callback = nullptr;
        ktoolbarpopupaction_connectnotify_callback = nullptr;
        ktoolbarpopupaction_disconnectnotify_callback = nullptr;
        ktoolbarpopupaction_createdwidgets_callback = nullptr;
        ktoolbarpopupaction_sender_callback = nullptr;
        ktoolbarpopupaction_sendersignalindex_callback = nullptr;
        ktoolbarpopupaction_receivers_callback = nullptr;
        ktoolbarpopupaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKToolBarPopupAction_Metacall_Callback(KToolBarPopupAction_Metacall_Callback cb) { ktoolbarpopupaction_metacall_callback = cb; }
    inline void setKToolBarPopupAction_CreateWidget_Callback(KToolBarPopupAction_CreateWidget_Callback cb) { ktoolbarpopupaction_createwidget_callback = cb; }
    inline void setKToolBarPopupAction_Event_Callback(KToolBarPopupAction_Event_Callback cb) { ktoolbarpopupaction_event_callback = cb; }
    inline void setKToolBarPopupAction_EventFilter_Callback(KToolBarPopupAction_EventFilter_Callback cb) { ktoolbarpopupaction_eventfilter_callback = cb; }
    inline void setKToolBarPopupAction_DeleteWidget_Callback(KToolBarPopupAction_DeleteWidget_Callback cb) { ktoolbarpopupaction_deletewidget_callback = cb; }
    inline void setKToolBarPopupAction_TimerEvent_Callback(KToolBarPopupAction_TimerEvent_Callback cb) { ktoolbarpopupaction_timerevent_callback = cb; }
    inline void setKToolBarPopupAction_ChildEvent_Callback(KToolBarPopupAction_ChildEvent_Callback cb) { ktoolbarpopupaction_childevent_callback = cb; }
    inline void setKToolBarPopupAction_CustomEvent_Callback(KToolBarPopupAction_CustomEvent_Callback cb) { ktoolbarpopupaction_customevent_callback = cb; }
    inline void setKToolBarPopupAction_ConnectNotify_Callback(KToolBarPopupAction_ConnectNotify_Callback cb) { ktoolbarpopupaction_connectnotify_callback = cb; }
    inline void setKToolBarPopupAction_DisconnectNotify_Callback(KToolBarPopupAction_DisconnectNotify_Callback cb) { ktoolbarpopupaction_disconnectnotify_callback = cb; }
    inline void setKToolBarPopupAction_CreatedWidgets_Callback(KToolBarPopupAction_CreatedWidgets_Callback cb) { ktoolbarpopupaction_createdwidgets_callback = cb; }
    inline void setKToolBarPopupAction_Sender_Callback(KToolBarPopupAction_Sender_Callback cb) { ktoolbarpopupaction_sender_callback = cb; }
    inline void setKToolBarPopupAction_SenderSignalIndex_Callback(KToolBarPopupAction_SenderSignalIndex_Callback cb) { ktoolbarpopupaction_sendersignalindex_callback = cb; }
    inline void setKToolBarPopupAction_Receivers_Callback(KToolBarPopupAction_Receivers_Callback cb) { ktoolbarpopupaction_receivers_callback = cb; }
    inline void setKToolBarPopupAction_IsSignalConnected_Callback(KToolBarPopupAction_IsSignalConnected_Callback cb) { ktoolbarpopupaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKToolBarPopupAction_Metacall_IsBase(bool value) const { ktoolbarpopupaction_metacall_isbase = value; }
    inline void setKToolBarPopupAction_CreateWidget_IsBase(bool value) const { ktoolbarpopupaction_createwidget_isbase = value; }
    inline void setKToolBarPopupAction_Event_IsBase(bool value) const { ktoolbarpopupaction_event_isbase = value; }
    inline void setKToolBarPopupAction_EventFilter_IsBase(bool value) const { ktoolbarpopupaction_eventfilter_isbase = value; }
    inline void setKToolBarPopupAction_DeleteWidget_IsBase(bool value) const { ktoolbarpopupaction_deletewidget_isbase = value; }
    inline void setKToolBarPopupAction_TimerEvent_IsBase(bool value) const { ktoolbarpopupaction_timerevent_isbase = value; }
    inline void setKToolBarPopupAction_ChildEvent_IsBase(bool value) const { ktoolbarpopupaction_childevent_isbase = value; }
    inline void setKToolBarPopupAction_CustomEvent_IsBase(bool value) const { ktoolbarpopupaction_customevent_isbase = value; }
    inline void setKToolBarPopupAction_ConnectNotify_IsBase(bool value) const { ktoolbarpopupaction_connectnotify_isbase = value; }
    inline void setKToolBarPopupAction_DisconnectNotify_IsBase(bool value) const { ktoolbarpopupaction_disconnectnotify_isbase = value; }
    inline void setKToolBarPopupAction_CreatedWidgets_IsBase(bool value) const { ktoolbarpopupaction_createdwidgets_isbase = value; }
    inline void setKToolBarPopupAction_Sender_IsBase(bool value) const { ktoolbarpopupaction_sender_isbase = value; }
    inline void setKToolBarPopupAction_SenderSignalIndex_IsBase(bool value) const { ktoolbarpopupaction_sendersignalindex_isbase = value; }
    inline void setKToolBarPopupAction_Receivers_IsBase(bool value) const { ktoolbarpopupaction_receivers_isbase = value; }
    inline void setKToolBarPopupAction_IsSignalConnected_IsBase(bool value) const { ktoolbarpopupaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktoolbarpopupaction_metacall_isbase) {
            ktoolbarpopupaction_metacall_isbase = false;
            return KToolBarPopupAction::qt_metacall(param1, param2, param3);
        } else if (ktoolbarpopupaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktoolbarpopupaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KToolBarPopupAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (ktoolbarpopupaction_createwidget_isbase) {
            ktoolbarpopupaction_createwidget_isbase = false;
            return KToolBarPopupAction::createWidget(parent);
        } else if (ktoolbarpopupaction_createwidget_callback != nullptr) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = ktoolbarpopupaction_createwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolBarPopupAction::createWidget(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktoolbarpopupaction_event_isbase) {
            ktoolbarpopupaction_event_isbase = false;
            return KToolBarPopupAction::event(param1);
        } else if (ktoolbarpopupaction_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = ktoolbarpopupaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolBarPopupAction::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (ktoolbarpopupaction_eventfilter_isbase) {
            ktoolbarpopupaction_eventfilter_isbase = false;
            return KToolBarPopupAction::eventFilter(param1, param2);
        } else if (ktoolbarpopupaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = ktoolbarpopupaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KToolBarPopupAction::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (ktoolbarpopupaction_deletewidget_isbase) {
            ktoolbarpopupaction_deletewidget_isbase = false;
            KToolBarPopupAction::deleteWidget(widget);
        } else if (ktoolbarpopupaction_deletewidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            ktoolbarpopupaction_deletewidget_callback(this, cbval1);
        } else {
            KToolBarPopupAction::deleteWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktoolbarpopupaction_timerevent_isbase) {
            ktoolbarpopupaction_timerevent_isbase = false;
            KToolBarPopupAction::timerEvent(event);
        } else if (ktoolbarpopupaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktoolbarpopupaction_timerevent_callback(this, cbval1);
        } else {
            KToolBarPopupAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktoolbarpopupaction_childevent_isbase) {
            ktoolbarpopupaction_childevent_isbase = false;
            KToolBarPopupAction::childEvent(event);
        } else if (ktoolbarpopupaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktoolbarpopupaction_childevent_callback(this, cbval1);
        } else {
            KToolBarPopupAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktoolbarpopupaction_customevent_isbase) {
            ktoolbarpopupaction_customevent_isbase = false;
            KToolBarPopupAction::customEvent(event);
        } else if (ktoolbarpopupaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktoolbarpopupaction_customevent_callback(this, cbval1);
        } else {
            KToolBarPopupAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktoolbarpopupaction_connectnotify_isbase) {
            ktoolbarpopupaction_connectnotify_isbase = false;
            KToolBarPopupAction::connectNotify(signal);
        } else if (ktoolbarpopupaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktoolbarpopupaction_connectnotify_callback(this, cbval1);
        } else {
            KToolBarPopupAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktoolbarpopupaction_disconnectnotify_isbase) {
            ktoolbarpopupaction_disconnectnotify_isbase = false;
            KToolBarPopupAction::disconnectNotify(signal);
        } else if (ktoolbarpopupaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktoolbarpopupaction_disconnectnotify_callback(this, cbval1);
        } else {
            KToolBarPopupAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (ktoolbarpopupaction_createdwidgets_isbase) {
            ktoolbarpopupaction_createdwidgets_isbase = false;
            return KToolBarPopupAction::createdWidgets();
        } else if (ktoolbarpopupaction_createdwidgets_callback != nullptr) {
            QWidget** callback_ret = ktoolbarpopupaction_createdwidgets_callback();
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KToolBarPopupAction::createdWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktoolbarpopupaction_sender_isbase) {
            ktoolbarpopupaction_sender_isbase = false;
            return KToolBarPopupAction::sender();
        } else if (ktoolbarpopupaction_sender_callback != nullptr) {
            QObject* callback_ret = ktoolbarpopupaction_sender_callback();
            return callback_ret;
        } else {
            return KToolBarPopupAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktoolbarpopupaction_sendersignalindex_isbase) {
            ktoolbarpopupaction_sendersignalindex_isbase = false;
            return KToolBarPopupAction::senderSignalIndex();
        } else if (ktoolbarpopupaction_sendersignalindex_callback != nullptr) {
            int callback_ret = ktoolbarpopupaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KToolBarPopupAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktoolbarpopupaction_receivers_isbase) {
            ktoolbarpopupaction_receivers_isbase = false;
            return KToolBarPopupAction::receivers(signal);
        } else if (ktoolbarpopupaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktoolbarpopupaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KToolBarPopupAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktoolbarpopupaction_issignalconnected_isbase) {
            ktoolbarpopupaction_issignalconnected_isbase = false;
            return KToolBarPopupAction::isSignalConnected(signal);
        } else if (ktoolbarpopupaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktoolbarpopupaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolBarPopupAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KToolBarPopupAction_Event(KToolBarPopupAction* self, QEvent* param1);
    friend bool KToolBarPopupAction_QBaseEvent(KToolBarPopupAction* self, QEvent* param1);
    friend bool KToolBarPopupAction_EventFilter(KToolBarPopupAction* self, QObject* param1, QEvent* param2);
    friend bool KToolBarPopupAction_QBaseEventFilter(KToolBarPopupAction* self, QObject* param1, QEvent* param2);
    friend void KToolBarPopupAction_DeleteWidget(KToolBarPopupAction* self, QWidget* widget);
    friend void KToolBarPopupAction_QBaseDeleteWidget(KToolBarPopupAction* self, QWidget* widget);
    friend void KToolBarPopupAction_TimerEvent(KToolBarPopupAction* self, QTimerEvent* event);
    friend void KToolBarPopupAction_QBaseTimerEvent(KToolBarPopupAction* self, QTimerEvent* event);
    friend void KToolBarPopupAction_ChildEvent(KToolBarPopupAction* self, QChildEvent* event);
    friend void KToolBarPopupAction_QBaseChildEvent(KToolBarPopupAction* self, QChildEvent* event);
    friend void KToolBarPopupAction_CustomEvent(KToolBarPopupAction* self, QEvent* event);
    friend void KToolBarPopupAction_QBaseCustomEvent(KToolBarPopupAction* self, QEvent* event);
    friend void KToolBarPopupAction_ConnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal);
    friend void KToolBarPopupAction_QBaseConnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal);
    friend void KToolBarPopupAction_DisconnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal);
    friend void KToolBarPopupAction_QBaseDisconnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal);
    friend libqt_list /* of QWidget* */ KToolBarPopupAction_CreatedWidgets(const KToolBarPopupAction* self);
    friend libqt_list /* of QWidget* */ KToolBarPopupAction_QBaseCreatedWidgets(const KToolBarPopupAction* self);
    friend QObject* KToolBarPopupAction_Sender(const KToolBarPopupAction* self);
    friend QObject* KToolBarPopupAction_QBaseSender(const KToolBarPopupAction* self);
    friend int KToolBarPopupAction_SenderSignalIndex(const KToolBarPopupAction* self);
    friend int KToolBarPopupAction_QBaseSenderSignalIndex(const KToolBarPopupAction* self);
    friend int KToolBarPopupAction_Receivers(const KToolBarPopupAction* self, const char* signal);
    friend int KToolBarPopupAction_QBaseReceivers(const KToolBarPopupAction* self, const char* signal);
    friend bool KToolBarPopupAction_IsSignalConnected(const KToolBarPopupAction* self, const QMetaMethod* signal);
    friend bool KToolBarPopupAction_QBaseIsSignalConnected(const KToolBarPopupAction* self, const QMetaMethod* signal);
};

#endif
