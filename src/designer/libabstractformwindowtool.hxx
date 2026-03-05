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
    using QDesignerFormWindowToolInterface_MetaObject_Callback = QMetaObject* (*)();
    using QDesignerFormWindowToolInterface_Metacast_Callback = void* (*)(QDesignerFormWindowToolInterface*, const char*);
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
    QDesignerFormWindowToolInterface_MetaObject_Callback qdesignerformwindowtoolinterface_metaobject_callback = nullptr;
    QDesignerFormWindowToolInterface_Metacast_Callback qdesignerformwindowtoolinterface_metacast_callback = nullptr;
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
    mutable bool qdesignerformwindowtoolinterface_metaobject_isbase = false;
    mutable bool qdesignerformwindowtoolinterface_metacast_isbase = false;
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

    // Callback setters
    inline void setQDesignerFormWindowToolInterface_MetaObject_Callback(QDesignerFormWindowToolInterface_MetaObject_Callback cb) { qdesignerformwindowtoolinterface_metaobject_callback = cb; }
    inline void setQDesignerFormWindowToolInterface_Metacast_Callback(QDesignerFormWindowToolInterface_Metacast_Callback cb) { qdesignerformwindowtoolinterface_metacast_callback = cb; }
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
    inline void setQDesignerFormWindowToolInterface_MetaObject_IsBase(bool value) const { qdesignerformwindowtoolinterface_metaobject_isbase = value; }
    inline void setQDesignerFormWindowToolInterface_Metacast_IsBase(bool value) const { qdesignerformwindowtoolinterface_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerformwindowtoolinterface_metaobject_isbase) {
            qdesignerformwindowtoolinterface_metaobject_isbase = false;
            return QDesignerFormWindowToolInterface::metaObject();
        }
        auto metaobject_cb = qdesignerformwindowtoolinterface_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDesignerFormWindowToolInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerformwindowtoolinterface_metacast_isbase) {
            qdesignerformwindowtoolinterface_metacast_isbase = false;
            return QDesignerFormWindowToolInterface::qt_metacast(param1);
        }
        auto metacast_cb = qdesignerformwindowtoolinterface_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerFormWindowToolInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerformwindowtoolinterface_metacall_isbase) {
            qdesignerformwindowtoolinterface_metacall_isbase = false;
            return QDesignerFormWindowToolInterface::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdesignerformwindowtoolinterface_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerFormWindowToolInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        auto core_cb = qdesignerformwindowtoolinterface_core_callback;
        if (core_cb) {
            QDesignerFormEditorInterface* callback_ret = core_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormWindowInterface* formWindow() const override {
        auto formwindow_cb = qdesignerformwindowtoolinterface_formwindow_callback;
        if (formwindow_cb) {
            QDesignerFormWindowInterface* callback_ret = formwindow_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* editor() const override {
        auto editor_cb = qdesignerformwindowtoolinterface_editor_callback;
        if (editor_cb) {
            QWidget* callback_ret = editor_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action() const override {
        auto action_cb = qdesignerformwindowtoolinterface_action_callback;
        if (action_cb) {
            QAction* callback_ret = action_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void activated() override {
        auto activated_cb = qdesignerformwindowtoolinterface_activated_callback;
        if (activated_cb) {
            activated_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deactivated() override {
        auto deactivated_cb = qdesignerformwindowtoolinterface_deactivated_callback;
        if (deactivated_cb) {
            deactivated_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool handleEvent(QWidget* widget, QWidget* managedWidget, QEvent* event) override {
        auto handleevent_cb = qdesignerformwindowtoolinterface_handleevent_callback;
        if (handleevent_cb) {
            QWidget* cbval1 = widget;
            QWidget* cbval2 = managedWidget;
            QEvent* cbval3 = event;

            bool callback_ret = handleevent_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerformwindowtoolinterface_event_isbase) {
            qdesignerformwindowtoolinterface_event_isbase = false;
            return QDesignerFormWindowToolInterface::event(event);
        }
        auto event_cb = qdesignerformwindowtoolinterface_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerFormWindowToolInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerformwindowtoolinterface_eventfilter_isbase) {
            qdesignerformwindowtoolinterface_eventfilter_isbase = false;
            return QDesignerFormWindowToolInterface::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdesignerformwindowtoolinterface_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerFormWindowToolInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerformwindowtoolinterface_timerevent_isbase) {
            qdesignerformwindowtoolinterface_timerevent_isbase = false;
            QDesignerFormWindowToolInterface::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdesignerformwindowtoolinterface_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDesignerFormWindowToolInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerformwindowtoolinterface_childevent_isbase) {
            qdesignerformwindowtoolinterface_childevent_isbase = false;
            QDesignerFormWindowToolInterface::childEvent(event);
            return;
        }
        auto childevent_cb = qdesignerformwindowtoolinterface_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDesignerFormWindowToolInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerformwindowtoolinterface_customevent_isbase) {
            qdesignerformwindowtoolinterface_customevent_isbase = false;
            QDesignerFormWindowToolInterface::customEvent(event);
            return;
        }
        auto customevent_cb = qdesignerformwindowtoolinterface_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDesignerFormWindowToolInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerformwindowtoolinterface_connectnotify_isbase) {
            qdesignerformwindowtoolinterface_connectnotify_isbase = false;
            QDesignerFormWindowToolInterface::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdesignerformwindowtoolinterface_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDesignerFormWindowToolInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerformwindowtoolinterface_disconnectnotify_isbase) {
            qdesignerformwindowtoolinterface_disconnectnotify_isbase = false;
            QDesignerFormWindowToolInterface::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdesignerformwindowtoolinterface_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDesignerFormWindowToolInterface::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesignerformwindowtoolinterface_sender_isbase) {
            qdesignerformwindowtoolinterface_sender_isbase = false;
            return QDesignerFormWindowToolInterface::sender();
        }
        auto sender_cb = qdesignerformwindowtoolinterface_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDesignerFormWindowToolInterface::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesignerformwindowtoolinterface_sendersignalindex_isbase) {
            qdesignerformwindowtoolinterface_sendersignalindex_isbase = false;
            return QDesignerFormWindowToolInterface::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdesignerformwindowtoolinterface_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDesignerFormWindowToolInterface::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesignerformwindowtoolinterface_receivers_isbase) {
            qdesignerformwindowtoolinterface_receivers_isbase = false;
            return QDesignerFormWindowToolInterface::receivers(signal);
        }
        auto receivers_cb = qdesignerformwindowtoolinterface_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerFormWindowToolInterface::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesignerformwindowtoolinterface_issignalconnected_isbase) {
            qdesignerformwindowtoolinterface_issignalconnected_isbase = false;
            return QDesignerFormWindowToolInterface::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdesignerformwindowtoolinterface_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerFormWindowToolInterface::isSignalConnected(signal);
    }

    // Friend functions
    friend void QDesignerFormWindowToolInterface_TimerEvent(QDesignerFormWindowToolInterface* self, QTimerEvent* event);
    friend void QDesignerFormWindowToolInterface_SuperTimerEvent(QDesignerFormWindowToolInterface* self, QTimerEvent* event);
    friend void QDesignerFormWindowToolInterface_ChildEvent(QDesignerFormWindowToolInterface* self, QChildEvent* event);
    friend void QDesignerFormWindowToolInterface_SuperChildEvent(QDesignerFormWindowToolInterface* self, QChildEvent* event);
    friend void QDesignerFormWindowToolInterface_CustomEvent(QDesignerFormWindowToolInterface* self, QEvent* event);
    friend void QDesignerFormWindowToolInterface_SuperCustomEvent(QDesignerFormWindowToolInterface* self, QEvent* event);
    friend void QDesignerFormWindowToolInterface_ConnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormWindowToolInterface_SuperConnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormWindowToolInterface_DisconnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormWindowToolInterface_SuperDisconnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
    friend QObject* QDesignerFormWindowToolInterface_Sender(const QDesignerFormWindowToolInterface* self);
    friend QObject* QDesignerFormWindowToolInterface_SuperSender(const QDesignerFormWindowToolInterface* self);
    friend int QDesignerFormWindowToolInterface_SenderSignalIndex(const QDesignerFormWindowToolInterface* self);
    friend int QDesignerFormWindowToolInterface_SuperSenderSignalIndex(const QDesignerFormWindowToolInterface* self);
    friend int QDesignerFormWindowToolInterface_Receivers(const QDesignerFormWindowToolInterface* self, const char* signal);
    friend int QDesignerFormWindowToolInterface_SuperReceivers(const QDesignerFormWindowToolInterface* self, const char* signal);
    friend bool QDesignerFormWindowToolInterface_IsSignalConnected(const QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
    friend bool QDesignerFormWindowToolInterface_SuperIsSignalConnected(const QDesignerFormWindowToolInterface* self, const QMetaMethod* signal);
};

#endif
