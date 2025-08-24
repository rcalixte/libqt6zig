#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOOLBARLABELACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOOLBARLABELACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToolBarLabelAction so that we can call protected methods
class VirtualKToolBarLabelAction final : public KToolBarLabelAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKToolBarLabelAction = true;

    // Virtual class public types (including callbacks)
    using KToolBarLabelAction_Metacall_Callback = int (*)(KToolBarLabelAction*, int, int, void**);
    using KToolBarLabelAction_CreateWidget_Callback = QWidget* (*)(KToolBarLabelAction*, QWidget*);
    using KToolBarLabelAction_Event_Callback = bool (*)(KToolBarLabelAction*, QEvent*);
    using KToolBarLabelAction_EventFilter_Callback = bool (*)(KToolBarLabelAction*, QObject*, QEvent*);
    using KToolBarLabelAction_DeleteWidget_Callback = void (*)(KToolBarLabelAction*, QWidget*);
    using KToolBarLabelAction_TimerEvent_Callback = void (*)(KToolBarLabelAction*, QTimerEvent*);
    using KToolBarLabelAction_ChildEvent_Callback = void (*)(KToolBarLabelAction*, QChildEvent*);
    using KToolBarLabelAction_CustomEvent_Callback = void (*)(KToolBarLabelAction*, QEvent*);
    using KToolBarLabelAction_ConnectNotify_Callback = void (*)(KToolBarLabelAction*, QMetaMethod*);
    using KToolBarLabelAction_DisconnectNotify_Callback = void (*)(KToolBarLabelAction*, QMetaMethod*);
    using KToolBarLabelAction_CreatedWidgets_Callback = QWidget** (*)();
    using KToolBarLabelAction_Sender_Callback = QObject* (*)();
    using KToolBarLabelAction_SenderSignalIndex_Callback = int (*)();
    using KToolBarLabelAction_Receivers_Callback = int (*)(const KToolBarLabelAction*, const char*);
    using KToolBarLabelAction_IsSignalConnected_Callback = bool (*)(const KToolBarLabelAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    KToolBarLabelAction_Metacall_Callback ktoolbarlabelaction_metacall_callback = nullptr;
    KToolBarLabelAction_CreateWidget_Callback ktoolbarlabelaction_createwidget_callback = nullptr;
    KToolBarLabelAction_Event_Callback ktoolbarlabelaction_event_callback = nullptr;
    KToolBarLabelAction_EventFilter_Callback ktoolbarlabelaction_eventfilter_callback = nullptr;
    KToolBarLabelAction_DeleteWidget_Callback ktoolbarlabelaction_deletewidget_callback = nullptr;
    KToolBarLabelAction_TimerEvent_Callback ktoolbarlabelaction_timerevent_callback = nullptr;
    KToolBarLabelAction_ChildEvent_Callback ktoolbarlabelaction_childevent_callback = nullptr;
    KToolBarLabelAction_CustomEvent_Callback ktoolbarlabelaction_customevent_callback = nullptr;
    KToolBarLabelAction_ConnectNotify_Callback ktoolbarlabelaction_connectnotify_callback = nullptr;
    KToolBarLabelAction_DisconnectNotify_Callback ktoolbarlabelaction_disconnectnotify_callback = nullptr;
    KToolBarLabelAction_CreatedWidgets_Callback ktoolbarlabelaction_createdwidgets_callback = nullptr;
    KToolBarLabelAction_Sender_Callback ktoolbarlabelaction_sender_callback = nullptr;
    KToolBarLabelAction_SenderSignalIndex_Callback ktoolbarlabelaction_sendersignalindex_callback = nullptr;
    KToolBarLabelAction_Receivers_Callback ktoolbarlabelaction_receivers_callback = nullptr;
    KToolBarLabelAction_IsSignalConnected_Callback ktoolbarlabelaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktoolbarlabelaction_metacall_isbase = false;
    mutable bool ktoolbarlabelaction_createwidget_isbase = false;
    mutable bool ktoolbarlabelaction_event_isbase = false;
    mutable bool ktoolbarlabelaction_eventfilter_isbase = false;
    mutable bool ktoolbarlabelaction_deletewidget_isbase = false;
    mutable bool ktoolbarlabelaction_timerevent_isbase = false;
    mutable bool ktoolbarlabelaction_childevent_isbase = false;
    mutable bool ktoolbarlabelaction_customevent_isbase = false;
    mutable bool ktoolbarlabelaction_connectnotify_isbase = false;
    mutable bool ktoolbarlabelaction_disconnectnotify_isbase = false;
    mutable bool ktoolbarlabelaction_createdwidgets_isbase = false;
    mutable bool ktoolbarlabelaction_sender_isbase = false;
    mutable bool ktoolbarlabelaction_sendersignalindex_isbase = false;
    mutable bool ktoolbarlabelaction_receivers_isbase = false;
    mutable bool ktoolbarlabelaction_issignalconnected_isbase = false;

  public:
    VirtualKToolBarLabelAction(const QString& text, QObject* parent) : KToolBarLabelAction(text, parent) {};
    VirtualKToolBarLabelAction(QAction* buddy, const QString& text, QObject* parent) : KToolBarLabelAction(buddy, text, parent) {};

    ~VirtualKToolBarLabelAction() {
        ktoolbarlabelaction_metacall_callback = nullptr;
        ktoolbarlabelaction_createwidget_callback = nullptr;
        ktoolbarlabelaction_event_callback = nullptr;
        ktoolbarlabelaction_eventfilter_callback = nullptr;
        ktoolbarlabelaction_deletewidget_callback = nullptr;
        ktoolbarlabelaction_timerevent_callback = nullptr;
        ktoolbarlabelaction_childevent_callback = nullptr;
        ktoolbarlabelaction_customevent_callback = nullptr;
        ktoolbarlabelaction_connectnotify_callback = nullptr;
        ktoolbarlabelaction_disconnectnotify_callback = nullptr;
        ktoolbarlabelaction_createdwidgets_callback = nullptr;
        ktoolbarlabelaction_sender_callback = nullptr;
        ktoolbarlabelaction_sendersignalindex_callback = nullptr;
        ktoolbarlabelaction_receivers_callback = nullptr;
        ktoolbarlabelaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKToolBarLabelAction_Metacall_Callback(KToolBarLabelAction_Metacall_Callback cb) { ktoolbarlabelaction_metacall_callback = cb; }
    inline void setKToolBarLabelAction_CreateWidget_Callback(KToolBarLabelAction_CreateWidget_Callback cb) { ktoolbarlabelaction_createwidget_callback = cb; }
    inline void setKToolBarLabelAction_Event_Callback(KToolBarLabelAction_Event_Callback cb) { ktoolbarlabelaction_event_callback = cb; }
    inline void setKToolBarLabelAction_EventFilter_Callback(KToolBarLabelAction_EventFilter_Callback cb) { ktoolbarlabelaction_eventfilter_callback = cb; }
    inline void setKToolBarLabelAction_DeleteWidget_Callback(KToolBarLabelAction_DeleteWidget_Callback cb) { ktoolbarlabelaction_deletewidget_callback = cb; }
    inline void setKToolBarLabelAction_TimerEvent_Callback(KToolBarLabelAction_TimerEvent_Callback cb) { ktoolbarlabelaction_timerevent_callback = cb; }
    inline void setKToolBarLabelAction_ChildEvent_Callback(KToolBarLabelAction_ChildEvent_Callback cb) { ktoolbarlabelaction_childevent_callback = cb; }
    inline void setKToolBarLabelAction_CustomEvent_Callback(KToolBarLabelAction_CustomEvent_Callback cb) { ktoolbarlabelaction_customevent_callback = cb; }
    inline void setKToolBarLabelAction_ConnectNotify_Callback(KToolBarLabelAction_ConnectNotify_Callback cb) { ktoolbarlabelaction_connectnotify_callback = cb; }
    inline void setKToolBarLabelAction_DisconnectNotify_Callback(KToolBarLabelAction_DisconnectNotify_Callback cb) { ktoolbarlabelaction_disconnectnotify_callback = cb; }
    inline void setKToolBarLabelAction_CreatedWidgets_Callback(KToolBarLabelAction_CreatedWidgets_Callback cb) { ktoolbarlabelaction_createdwidgets_callback = cb; }
    inline void setKToolBarLabelAction_Sender_Callback(KToolBarLabelAction_Sender_Callback cb) { ktoolbarlabelaction_sender_callback = cb; }
    inline void setKToolBarLabelAction_SenderSignalIndex_Callback(KToolBarLabelAction_SenderSignalIndex_Callback cb) { ktoolbarlabelaction_sendersignalindex_callback = cb; }
    inline void setKToolBarLabelAction_Receivers_Callback(KToolBarLabelAction_Receivers_Callback cb) { ktoolbarlabelaction_receivers_callback = cb; }
    inline void setKToolBarLabelAction_IsSignalConnected_Callback(KToolBarLabelAction_IsSignalConnected_Callback cb) { ktoolbarlabelaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKToolBarLabelAction_Metacall_IsBase(bool value) const { ktoolbarlabelaction_metacall_isbase = value; }
    inline void setKToolBarLabelAction_CreateWidget_IsBase(bool value) const { ktoolbarlabelaction_createwidget_isbase = value; }
    inline void setKToolBarLabelAction_Event_IsBase(bool value) const { ktoolbarlabelaction_event_isbase = value; }
    inline void setKToolBarLabelAction_EventFilter_IsBase(bool value) const { ktoolbarlabelaction_eventfilter_isbase = value; }
    inline void setKToolBarLabelAction_DeleteWidget_IsBase(bool value) const { ktoolbarlabelaction_deletewidget_isbase = value; }
    inline void setKToolBarLabelAction_TimerEvent_IsBase(bool value) const { ktoolbarlabelaction_timerevent_isbase = value; }
    inline void setKToolBarLabelAction_ChildEvent_IsBase(bool value) const { ktoolbarlabelaction_childevent_isbase = value; }
    inline void setKToolBarLabelAction_CustomEvent_IsBase(bool value) const { ktoolbarlabelaction_customevent_isbase = value; }
    inline void setKToolBarLabelAction_ConnectNotify_IsBase(bool value) const { ktoolbarlabelaction_connectnotify_isbase = value; }
    inline void setKToolBarLabelAction_DisconnectNotify_IsBase(bool value) const { ktoolbarlabelaction_disconnectnotify_isbase = value; }
    inline void setKToolBarLabelAction_CreatedWidgets_IsBase(bool value) const { ktoolbarlabelaction_createdwidgets_isbase = value; }
    inline void setKToolBarLabelAction_Sender_IsBase(bool value) const { ktoolbarlabelaction_sender_isbase = value; }
    inline void setKToolBarLabelAction_SenderSignalIndex_IsBase(bool value) const { ktoolbarlabelaction_sendersignalindex_isbase = value; }
    inline void setKToolBarLabelAction_Receivers_IsBase(bool value) const { ktoolbarlabelaction_receivers_isbase = value; }
    inline void setKToolBarLabelAction_IsSignalConnected_IsBase(bool value) const { ktoolbarlabelaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktoolbarlabelaction_metacall_isbase) {
            ktoolbarlabelaction_metacall_isbase = false;
            return KToolBarLabelAction::qt_metacall(param1, param2, param3);
        } else if (ktoolbarlabelaction_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktoolbarlabelaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KToolBarLabelAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (ktoolbarlabelaction_createwidget_isbase) {
            ktoolbarlabelaction_createwidget_isbase = false;
            return KToolBarLabelAction::createWidget(parent);
        } else if (ktoolbarlabelaction_createwidget_callback != nullptr) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = ktoolbarlabelaction_createwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolBarLabelAction::createWidget(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktoolbarlabelaction_event_isbase) {
            ktoolbarlabelaction_event_isbase = false;
            return KToolBarLabelAction::event(param1);
        } else if (ktoolbarlabelaction_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = ktoolbarlabelaction_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolBarLabelAction::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktoolbarlabelaction_eventfilter_isbase) {
            ktoolbarlabelaction_eventfilter_isbase = false;
            return KToolBarLabelAction::eventFilter(watched, event);
        } else if (ktoolbarlabelaction_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktoolbarlabelaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KToolBarLabelAction::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (ktoolbarlabelaction_deletewidget_isbase) {
            ktoolbarlabelaction_deletewidget_isbase = false;
            KToolBarLabelAction::deleteWidget(widget);
        } else if (ktoolbarlabelaction_deletewidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            ktoolbarlabelaction_deletewidget_callback(this, cbval1);
        } else {
            KToolBarLabelAction::deleteWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktoolbarlabelaction_timerevent_isbase) {
            ktoolbarlabelaction_timerevent_isbase = false;
            KToolBarLabelAction::timerEvent(event);
        } else if (ktoolbarlabelaction_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktoolbarlabelaction_timerevent_callback(this, cbval1);
        } else {
            KToolBarLabelAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktoolbarlabelaction_childevent_isbase) {
            ktoolbarlabelaction_childevent_isbase = false;
            KToolBarLabelAction::childEvent(event);
        } else if (ktoolbarlabelaction_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktoolbarlabelaction_childevent_callback(this, cbval1);
        } else {
            KToolBarLabelAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktoolbarlabelaction_customevent_isbase) {
            ktoolbarlabelaction_customevent_isbase = false;
            KToolBarLabelAction::customEvent(event);
        } else if (ktoolbarlabelaction_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktoolbarlabelaction_customevent_callback(this, cbval1);
        } else {
            KToolBarLabelAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktoolbarlabelaction_connectnotify_isbase) {
            ktoolbarlabelaction_connectnotify_isbase = false;
            KToolBarLabelAction::connectNotify(signal);
        } else if (ktoolbarlabelaction_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktoolbarlabelaction_connectnotify_callback(this, cbval1);
        } else {
            KToolBarLabelAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktoolbarlabelaction_disconnectnotify_isbase) {
            ktoolbarlabelaction_disconnectnotify_isbase = false;
            KToolBarLabelAction::disconnectNotify(signal);
        } else if (ktoolbarlabelaction_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktoolbarlabelaction_disconnectnotify_callback(this, cbval1);
        } else {
            KToolBarLabelAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (ktoolbarlabelaction_createdwidgets_isbase) {
            ktoolbarlabelaction_createdwidgets_isbase = false;
            return KToolBarLabelAction::createdWidgets();
        } else if (ktoolbarlabelaction_createdwidgets_callback != nullptr) {
            QWidget** callback_ret = ktoolbarlabelaction_createdwidgets_callback();
            QList<QWidget*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QWidget** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KToolBarLabelAction::createdWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktoolbarlabelaction_sender_isbase) {
            ktoolbarlabelaction_sender_isbase = false;
            return KToolBarLabelAction::sender();
        } else if (ktoolbarlabelaction_sender_callback != nullptr) {
            QObject* callback_ret = ktoolbarlabelaction_sender_callback();
            return callback_ret;
        } else {
            return KToolBarLabelAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktoolbarlabelaction_sendersignalindex_isbase) {
            ktoolbarlabelaction_sendersignalindex_isbase = false;
            return KToolBarLabelAction::senderSignalIndex();
        } else if (ktoolbarlabelaction_sendersignalindex_callback != nullptr) {
            int callback_ret = ktoolbarlabelaction_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KToolBarLabelAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktoolbarlabelaction_receivers_isbase) {
            ktoolbarlabelaction_receivers_isbase = false;
            return KToolBarLabelAction::receivers(signal);
        } else if (ktoolbarlabelaction_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktoolbarlabelaction_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KToolBarLabelAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktoolbarlabelaction_issignalconnected_isbase) {
            ktoolbarlabelaction_issignalconnected_isbase = false;
            return KToolBarLabelAction::isSignalConnected(signal);
        } else if (ktoolbarlabelaction_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktoolbarlabelaction_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolBarLabelAction::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KToolBarLabelAction_Event(KToolBarLabelAction* self, QEvent* param1);
    friend bool KToolBarLabelAction_QBaseEvent(KToolBarLabelAction* self, QEvent* param1);
    friend bool KToolBarLabelAction_EventFilter(KToolBarLabelAction* self, QObject* watched, QEvent* event);
    friend bool KToolBarLabelAction_QBaseEventFilter(KToolBarLabelAction* self, QObject* watched, QEvent* event);
    friend void KToolBarLabelAction_DeleteWidget(KToolBarLabelAction* self, QWidget* widget);
    friend void KToolBarLabelAction_QBaseDeleteWidget(KToolBarLabelAction* self, QWidget* widget);
    friend void KToolBarLabelAction_TimerEvent(KToolBarLabelAction* self, QTimerEvent* event);
    friend void KToolBarLabelAction_QBaseTimerEvent(KToolBarLabelAction* self, QTimerEvent* event);
    friend void KToolBarLabelAction_ChildEvent(KToolBarLabelAction* self, QChildEvent* event);
    friend void KToolBarLabelAction_QBaseChildEvent(KToolBarLabelAction* self, QChildEvent* event);
    friend void KToolBarLabelAction_CustomEvent(KToolBarLabelAction* self, QEvent* event);
    friend void KToolBarLabelAction_QBaseCustomEvent(KToolBarLabelAction* self, QEvent* event);
    friend void KToolBarLabelAction_ConnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
    friend void KToolBarLabelAction_QBaseConnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
    friend void KToolBarLabelAction_DisconnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
    friend void KToolBarLabelAction_QBaseDisconnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
    friend libqt_list /* of QWidget* */ KToolBarLabelAction_CreatedWidgets(const KToolBarLabelAction* self);
    friend libqt_list /* of QWidget* */ KToolBarLabelAction_QBaseCreatedWidgets(const KToolBarLabelAction* self);
    friend QObject* KToolBarLabelAction_Sender(const KToolBarLabelAction* self);
    friend QObject* KToolBarLabelAction_QBaseSender(const KToolBarLabelAction* self);
    friend int KToolBarLabelAction_SenderSignalIndex(const KToolBarLabelAction* self);
    friend int KToolBarLabelAction_QBaseSenderSignalIndex(const KToolBarLabelAction* self);
    friend int KToolBarLabelAction_Receivers(const KToolBarLabelAction* self, const char* signal);
    friend int KToolBarLabelAction_QBaseReceivers(const KToolBarLabelAction* self, const char* signal);
    friend bool KToolBarLabelAction_IsSignalConnected(const KToolBarLabelAction* self, const QMetaMethod* signal);
    friend bool KToolBarLabelAction_QBaseIsSignalConnected(const KToolBarLabelAction* self, const QMetaMethod* signal);
};

#endif
