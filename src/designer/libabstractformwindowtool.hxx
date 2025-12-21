#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTFORMWINDOWTOOL_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTFORMWINDOWTOOL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerFormWindowToolInterface so that we can call protected methods
class VirtualQDesignerFormWindowToolInterface : public QDesignerFormWindowToolInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerFormWindowToolInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerFormWindowToolInterface_Metacall_Callback = int (*)(QDesignerFormWindowToolInterface*, int, int, void**);
    using QDesignerFormWindowToolInterface_Core_Callback = QDesignerFormEditorInterface* (*)();
    using QDesignerFormWindowToolInterface_FormWindow_Callback = QDesignerFormWindowInterface* (*)();
    using QDesignerFormWindowToolInterface_Editor_Callback = QWidget* (*)();
    using QDesignerFormWindowToolInterface_Action_Callback = QAction* (*)();
    using QDesignerFormWindowToolInterface_Activated_Callback = void (*)();
    using QDesignerFormWindowToolInterface_Deactivated_Callback = void (*)();
    using QDesignerFormWindowToolInterface_HandleEvent_Callback = bool (*)(QDesignerFormWindowToolInterface*, QWidget*, QWidget*, QEvent*);
    using QDesignerFormWindowToolInterface_Event_Callback = bool (*)(QDesignerFormWindowToolInterface*, QEvent*);
    using QDesignerFormWindowToolInterface_EventFilter_Callback = bool (*)(QDesignerFormWindowToolInterface*, QObject*, QEvent*);
    using QDesignerFormWindowToolInterface_TimerEvent_Callback = void (*)(QDesignerFormWindowToolInterface*, QTimerEvent*);
    using QDesignerFormWindowToolInterface_ChildEvent_Callback = void (*)(QDesignerFormWindowToolInterface*, QChildEvent*);
    using QDesignerFormWindowToolInterface_CustomEvent_Callback = void (*)(QDesignerFormWindowToolInterface*, QEvent*);
    using QDesignerFormWindowToolInterface_ConnectNotify_Callback = void (*)(QDesignerFormWindowToolInterface*, QMetaMethod*);
    using QDesignerFormWindowToolInterface_DisconnectNotify_Callback = void (*)(QDesignerFormWindowToolInterface*, QMetaMethod*);
    using QDesignerFormWindowToolInterface_Sender_Callback = QObject* (*)();
    using QDesignerFormWindowToolInterface_SenderSignalIndex_Callback = int (*)();
    using QDesignerFormWindowToolInterface_Receivers_Callback = int (*)(const QDesignerFormWindowToolInterface*, const char*);
    using QDesignerFormWindowToolInterface_IsSignalConnected_Callback = bool (*)(const QDesignerFormWindowToolInterface*, QMetaMethod*);

  protected:
    // Instance callback storage
    QDesignerFormWindowToolInterface_Metacall_Callback qdesignerformwindowtoolinterface_metacall_callback = nullptr;
    QDesignerFormWindowToolInterface_Core_Callback qdesignerformwindowtoolinterface_core_callback = nullptr;
    QDesignerFormWindowToolInterface_FormWindow_Callback qdesignerformwindowtoolinterface_formwindow_callback = nullptr;
    QDesignerFormWindowToolInterface_Editor_Callback qdesignerformwindowtoolinterface_editor_callback = nullptr;
    QDesignerFormWindowToolInterface_Action_Callback qdesignerformwindowtoolinterface_action_callback = nullptr;
    QDesignerFormWindowToolInterface_Activated_Callback qdesignerformwindowtoolinterface_activated_callback = nullptr;
    QDesignerFormWindowToolInterface_Deactivated_Callback qdesignerformwindowtoolinterface_deactivated_callback = nullptr;
    QDesignerFormWindowToolInterface_HandleEvent_Callback qdesignerformwindowtoolinterface_handleevent_callback = nullptr;
    QDesignerFormWindowToolInterface_Event_Callback qdesignerformwindowtoolinterface_event_callback = nullptr;
    QDesignerFormWindowToolInterface_EventFilter_Callback qdesignerformwindowtoolinterface_eventfilter_callback = nullptr;
    QDesignerFormWindowToolInterface_TimerEvent_Callback qdesignerformwindowtoolinterface_timerevent_callback = nullptr;
    QDesignerFormWindowToolInterface_ChildEvent_Callback qdesignerformwindowtoolinterface_childevent_callback = nullptr;
    QDesignerFormWindowToolInterface_CustomEvent_Callback qdesignerformwindowtoolinterface_customevent_callback = nullptr;
    QDesignerFormWindowToolInterface_ConnectNotify_Callback qdesignerformwindowtoolinterface_connectnotify_callback = nullptr;
    QDesignerFormWindowToolInterface_DisconnectNotify_Callback qdesignerformwindowtoolinterface_disconnectnotify_callback = nullptr;
    QDesignerFormWindowToolInterface_Sender_Callback qdesignerformwindowtoolinterface_sender_callback = nullptr;
    QDesignerFormWindowToolInterface_SenderSignalIndex_Callback qdesignerformwindowtoolinterface_sendersignalindex_callback = nullptr;
    QDesignerFormWindowToolInterface_Receivers_Callback qdesignerformwindowtoolinterface_receivers_callback = nullptr;
    QDesignerFormWindowToolInterface_IsSignalConnected_Callback qdesignerformwindowtoolinterface_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerformwindowtoolinterface_metacall_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_core_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_formwindow_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_editor_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_action_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_activated_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_deactivated_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_handleevent_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_event_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_eventfilter_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_timerevent_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_childevent_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_customevent_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_connectnotify_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_disconnectnotify_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_sender_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_sendersignalindex_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_receivers_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_issignalconnected_isbase = false;

  public:
    VirtualQDesignerFormWindowToolInterface() : QDesignerFormWindowToolInterface() {};
    VirtualQDesignerFormWindowToolInterface(QObject* parent) : QDesignerFormWindowToolInterface(parent) {};

    ~VirtualQDesignerFormWindowToolInterface() {
        qdesignerformwindowtoolinterface_metacall_callback = nullptr;
        qdesignerformwindowtoolinterface_core_callback = nullptr;
        qdesignerformwindowtoolinterface_formwindow_callback = nullptr;
        qdesignerformwindowtoolinterface_editor_callback = nullptr;
        qdesignerformwindowtoolinterface_action_callback = nullptr;
        qdesignerformwindowtoolinterface_activated_callback = nullptr;
        qdesignerformwindowtoolinterface_deactivated_callback = nullptr;
        qdesignerformwindowtoolinterface_handleevent_callback = nullptr;
        qdesignerformwindowtoolinterface_event_callback = nullptr;
        qdesignerformwindowtoolinterface_eventfilter_callback = nullptr;
        qdesignerformwindowtoolinterface_timerevent_callback = nullptr;
        qdesignerformwindowtoolinterface_childevent_callback = nullptr;
        qdesignerformwindowtoolinterface_customevent_callback = nullptr;
        qdesignerformwindowtoolinterface_connectnotify_callback = nullptr;
        qdesignerformwindowtoolinterface_disconnectnotify_callback = nullptr;
        qdesignerformwindowtoolinterface_sender_callback = nullptr;
        qdesignerformwindowtoolinterface_sendersignalindex_callback = nullptr;
        qdesignerformwindowtoolinterface_receivers_callback = nullptr;
        qdesignerformwindowtoolinterface_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerFormWindowToolInterface_Metacall_Callback(QDesignerFormWindowToolInterface_Metacall_Callback cb) { qdesignerformwindowtoolinterface_metacall_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_Core_Callback(QDesignerFormWindowToolInterface_Core_Callback cb) { qdesignerformwindowtoolinterface_core_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_FormWindow_Callback(QDesignerFormWindowToolInterface_FormWindow_Callback cb) { qdesignerformwindowtoolinterface_formwindow_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_Editor_Callback(QDesignerFormWindowToolInterface_Editor_Callback cb) { qdesignerformwindowtoolinterface_editor_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_Action_Callback(QDesignerFormWindowToolInterface_Action_Callback cb) { qdesignerformwindowtoolinterface_action_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_Activated_Callback(QDesignerFormWindowToolInterface_Activated_Callback cb) { qdesignerformwindowtoolinterface_activated_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_Deactivated_Callback(QDesignerFormWindowToolInterface_Deactivated_Callback cb) { qdesignerformwindowtoolinterface_deactivated_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_HandleEvent_Callback(QDesignerFormWindowToolInterface_HandleEvent_Callback cb) { qdesignerformwindowtoolinterface_handleevent_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_Event_Callback(QDesignerFormWindowToolInterface_Event_Callback cb) { qdesignerformwindowtoolinterface_event_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_EventFilter_Callback(QDesignerFormWindowToolInterface_EventFilter_Callback cb) { qdesignerformwindowtoolinterface_eventfilter_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_TimerEvent_Callback(QDesignerFormWindowToolInterface_TimerEvent_Callback cb) { qdesignerformwindowtoolinterface_timerevent_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_ChildEvent_Callback(QDesignerFormWindowToolInterface_ChildEvent_Callback cb) { qdesignerformwindowtoolinterface_childevent_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_CustomEvent_Callback(QDesignerFormWindowToolInterface_CustomEvent_Callback cb) { qdesignerformwindowtoolinterface_customevent_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_ConnectNotify_Callback(QDesignerFormWindowToolInterface_ConnectNotify_Callback cb) { qdesignerformwindowtoolinterface_connectnotify_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_DisconnectNotify_Callback(QDesignerFormWindowToolInterface_DisconnectNotify_Callback cb) { qdesignerformwindowtoolinterface_disconnectnotify_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_Sender_Callback(QDesignerFormWindowToolInterface_Sender_Callback cb) { qdesignerformwindowtoolinterface_sender_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_SenderSignalIndex_Callback(QDesignerFormWindowToolInterface_SenderSignalIndex_Callback cb) { qdesignerformwindowtoolinterface_sendersignalindex_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_Receivers_Callback(QDesignerFormWindowToolInterface_Receivers_Callback cb) { qdesignerformwindowtoolinterface_receivers_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_IsSignalConnected_Callback(QDesignerFormWindowToolInterface_IsSignalConnected_Callback cb) { qdesignerformwindowtoolinterface_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDesignerFormWindowToolInterface_Metacall_IsBase(bool value) const { qdesignerformwindowtoolinterface_metacall_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_Core_IsBase(bool value) const { qdesignerformwindowtoolinterface_core_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_FormWindow_IsBase(bool value) const { qdesignerformwindowtoolinterface_formwindow_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_Editor_IsBase(bool value) const { qdesignerformwindowtoolinterface_editor_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_Action_IsBase(bool value) const { qdesignerformwindowtoolinterface_action_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_Activated_IsBase(bool value) const { qdesignerformwindowtoolinterface_activated_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_Deactivated_IsBase(bool value) const { qdesignerformwindowtoolinterface_deactivated_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_HandleEvent_IsBase(bool value) const { qdesignerformwindowtoolinterface_handleevent_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_Event_IsBase(bool value) const { qdesignerformwindowtoolinterface_event_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_EventFilter_IsBase(bool value) const { qdesignerformwindowtoolinterface_eventfilter_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_TimerEvent_IsBase(bool value) const { qdesignerformwindowtoolinterface_timerevent_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_ChildEvent_IsBase(bool value) const { qdesignerformwindowtoolinterface_childevent_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_CustomEvent_IsBase(bool value) const { qdesignerformwindowtoolinterface_customevent_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_ConnectNotify_IsBase(bool value) const { qdesignerformwindowtoolinterface_connectnotify_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_DisconnectNotify_IsBase(bool value) const { qdesignerformwindowtoolinterface_disconnectnotify_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_Sender_IsBase(bool value) const { qdesignerformwindowtoolinterface_sender_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_SenderSignalIndex_IsBase(bool value) const { qdesignerformwindowtoolinterface_sendersignalindex_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_Receivers_IsBase(bool value) const { qdesignerformwindowtoolinterface_receivers_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_IsSignalConnected_IsBase(bool value) const { qdesignerformwindowtoolinterface_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerformwindowtoolinterface_metacall_isbase) {
            qdesignerformwindowtoolinterface_metacall_isbase = false;
            return QDesignerFormWindowToolInterface::qt_metacall(param1, param2, param3);
        } else if (qdesignerformwindowtoolinterface_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qdesignerformwindowtoolinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerFormWindowToolInterface::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignerformwindowtoolinterface_core_callback != nullptr) {
            QDesignerFormEditorInterface* callback_ret = qdesignerformwindowtoolinterface_core_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormWindowInterface* formWindow() const override {
        if (qdesignerformwindowtoolinterface_formwindow_callback != nullptr) {
            QDesignerFormWindowInterface* callback_ret = qdesignerformwindowtoolinterface_formwindow_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* editor() const override {
        if (qdesignerformwindowtoolinterface_editor_callback != nullptr) {
            QWidget* callback_ret = qdesignerformwindowtoolinterface_editor_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action() const override {
        if (qdesignerformwindowtoolinterface_action_callback != nullptr) {
            QAction* callback_ret = qdesignerformwindowtoolinterface_action_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void activated() override {
        if (qdesignerformwindowtoolinterface_activated_callback != nullptr) {
            qdesignerformwindowtoolinterface_activated_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deactivated() override {
        if (qdesignerformwindowtoolinterface_deactivated_callback != nullptr) {
            qdesignerformwindowtoolinterface_deactivated_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool handleEvent(QWidget* widget, QWidget* managedWidget, QEvent* event) override {
        if (qdesignerformwindowtoolinterface_handleevent_callback != nullptr) {
            QWidget* cbval1 = widget;
            QWidget* cbval2 = managedWidget;
            QEvent* cbval3 = event;

            bool callback_ret = qdesignerformwindowtoolinterface_handleevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerformwindowtoolinterface_event_isbase) {
            qdesignerformwindowtoolinterface_event_isbase = false;
            return QDesignerFormWindowToolInterface::event(event);
        } else if (qdesignerformwindowtoolinterface_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qdesignerformwindowtoolinterface_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerFormWindowToolInterface::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerformwindowtoolinterface_eventfilter_isbase) {
            qdesignerformwindowtoolinterface_eventfilter_isbase = false;
            return QDesignerFormWindowToolInterface::eventFilter(watched, event);
        } else if (qdesignerformwindowtoolinterface_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qdesignerformwindowtoolinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QDesignerFormWindowToolInterface::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerformwindowtoolinterface_timerevent_isbase) {
            qdesignerformwindowtoolinterface_timerevent_isbase = false;
            QDesignerFormWindowToolInterface::timerEvent(event);
        } else if (qdesignerformwindowtoolinterface_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qdesignerformwindowtoolinterface_timerevent_callback(this, cbval1);
        } else {
            QDesignerFormWindowToolInterface::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerformwindowtoolinterface_childevent_isbase) {
            qdesignerformwindowtoolinterface_childevent_isbase = false;
            QDesignerFormWindowToolInterface::childEvent(event);
        } else if (qdesignerformwindowtoolinterface_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qdesignerformwindowtoolinterface_childevent_callback(this, cbval1);
        } else {
            QDesignerFormWindowToolInterface::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerformwindowtoolinterface_customevent_isbase) {
            qdesignerformwindowtoolinterface_customevent_isbase = false;
            QDesignerFormWindowToolInterface::customEvent(event);
        } else if (qdesignerformwindowtoolinterface_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdesignerformwindowtoolinterface_customevent_callback(this, cbval1);
        } else {
            QDesignerFormWindowToolInterface::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerformwindowtoolinterface_connectnotify_isbase) {
            qdesignerformwindowtoolinterface_connectnotify_isbase = false;
            QDesignerFormWindowToolInterface::connectNotify(signal);
        } else if (qdesignerformwindowtoolinterface_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignerformwindowtoolinterface_connectnotify_callback(this, cbval1);
        } else {
            QDesignerFormWindowToolInterface::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerformwindowtoolinterface_disconnectnotify_isbase) {
            qdesignerformwindowtoolinterface_disconnectnotify_isbase = false;
            QDesignerFormWindowToolInterface::disconnectNotify(signal);
        } else if (qdesignerformwindowtoolinterface_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignerformwindowtoolinterface_disconnectnotify_callback(this, cbval1);
        } else {
            QDesignerFormWindowToolInterface::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesignerformwindowtoolinterface_sender_isbase) {
            qdesignerformwindowtoolinterface_sender_isbase = false;
            return QDesignerFormWindowToolInterface::sender();
        } else if (qdesignerformwindowtoolinterface_sender_callback != nullptr) {
            QObject* callback_ret = qdesignerformwindowtoolinterface_sender_callback();
            return callback_ret;
        } else {
            return QDesignerFormWindowToolInterface::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesignerformwindowtoolinterface_sendersignalindex_isbase) {
            qdesignerformwindowtoolinterface_sendersignalindex_isbase = false;
            return QDesignerFormWindowToolInterface::senderSignalIndex();
        } else if (qdesignerformwindowtoolinterface_sendersignalindex_callback != nullptr) {
            int callback_ret = qdesignerformwindowtoolinterface_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerFormWindowToolInterface::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesignerformwindowtoolinterface_receivers_isbase) {
            qdesignerformwindowtoolinterface_receivers_isbase = false;
            return QDesignerFormWindowToolInterface::receivers(signal);
        } else if (qdesignerformwindowtoolinterface_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qdesignerformwindowtoolinterface_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerFormWindowToolInterface::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesignerformwindowtoolinterface_issignalconnected_isbase) {
            qdesignerformwindowtoolinterface_issignalconnected_isbase = false;
            return QDesignerFormWindowToolInterface::isSignalConnected(signal);
        } else if (qdesignerformwindowtoolinterface_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qdesignerformwindowtoolinterface_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerFormWindowToolInterface::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QDesignerFormWindowToolInterface_TimerEvent(QDesignerFormWindowToolInterface* self, QTimerEvent* event);
    friend void QDesignerFormWindowToolInterface_QBaseTimerEvent(QDesignerFormWindowToolInterface* self, QTimerEvent* event);
    friend void QDesignerFormWindowToolInterface_ChildEvent(QDesignerFormWindowToolInterface* self, QChildEvent* event);
    friend void QDesignerFormWindowToolInterface_QBaseChildEvent(QDesignerFormWindowToolInterface* self, QChildEvent* event);
    friend void QDesignerFormWindowToolInterface_CustomEvent(QDesignerFormWindowToolInterface* self, QEvent* event);
    friend void QDesignerFormWindowToolInterface_QBaseCustomEvent(QDesignerFormWindowToolInterface* self, QEvent* event);
    friend void QDesignerFormWindowToolInterface_ConnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormWindowToolInterface_QBaseConnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormWindowToolInterface_DisconnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormWindowToolInterface_QBaseDisconnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
    friend QObject* QDesignerFormWindowToolInterface_Sender(const QDesignerFormWindowToolInterface* self);
    friend QObject* QDesignerFormWindowToolInterface_QBaseSender(const QDesignerFormWindowToolInterface* self);
    friend int QDesignerFormWindowToolInterface_SenderSignalIndex(const QDesignerFormWindowToolInterface* self);
    friend int QDesignerFormWindowToolInterface_QBaseSenderSignalIndex(const QDesignerFormWindowToolInterface* self);
    friend int QDesignerFormWindowToolInterface_Receivers(const QDesignerFormWindowToolInterface* self, const char* signal);
    friend int QDesignerFormWindowToolInterface_QBaseReceivers(const QDesignerFormWindowToolInterface* self, const char* signal);
    friend bool QDesignerFormWindowToolInterface_IsSignalConnected(const QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
    friend bool QDesignerFormWindowToolInterface_QBaseIsSignalConnected(const QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
};

#endif
