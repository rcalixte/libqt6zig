#pragma once
#ifndef SRCC_LIBVIRTUALQUNDOSTACK_H
#define SRCC_LIBVIRTUALQUNDOSTACK_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QUndoCommand so that we can call protected methods
class VirtualQUndoCommand final : public QUndoCommand {

  public:
    // Virtual class boolean flag
    bool isVirtualQUndoCommand = true;

    // Virtual class public types (including callbacks)
    using QUndoCommand_Undo_Callback = void (*)();
    using QUndoCommand_Redo_Callback = void (*)();
    using QUndoCommand_Id_Callback = int (*)();
    using QUndoCommand_MergeWith_Callback = bool (*)(QUndoCommand*, QUndoCommand*);

  protected:
    // Instance callback storage
    QUndoCommand_Undo_Callback qundocommand_undo_callback = nullptr;
    QUndoCommand_Redo_Callback qundocommand_redo_callback = nullptr;
    QUndoCommand_Id_Callback qundocommand_id_callback = nullptr;
    QUndoCommand_MergeWith_Callback qundocommand_mergewith_callback = nullptr;

    // Instance base flags
    mutable bool qundocommand_undo_isbase = false;
    mutable bool qundocommand_redo_isbase = false;
    mutable bool qundocommand_id_isbase = false;
    mutable bool qundocommand_mergewith_isbase = false;

  public:
    VirtualQUndoCommand() : QUndoCommand() {};
    VirtualQUndoCommand(const QString& text) : QUndoCommand(text) {};
    VirtualQUndoCommand(QUndoCommand* parent) : QUndoCommand(parent) {};
    VirtualQUndoCommand(const QString& text, QUndoCommand* parent) : QUndoCommand(text, parent) {};

    // Callback setters
    inline void setQUndoCommand_Undo_Callback(QUndoCommand_Undo_Callback cb) { qundocommand_undo_callback = cb; }
    inline void setQUndoCommand_Redo_Callback(QUndoCommand_Redo_Callback cb) { qundocommand_redo_callback = cb; }
    inline void setQUndoCommand_Id_Callback(QUndoCommand_Id_Callback cb) { qundocommand_id_callback = cb; }
    inline void setQUndoCommand_MergeWith_Callback(QUndoCommand_MergeWith_Callback cb) { qundocommand_mergewith_callback = cb; }

    // Base flag setters
    inline void setQUndoCommand_Undo_IsBase(bool value) const { qundocommand_undo_isbase = value; }
    inline void setQUndoCommand_Redo_IsBase(bool value) const { qundocommand_redo_isbase = value; }
    inline void setQUndoCommand_Id_IsBase(bool value) const { qundocommand_id_isbase = value; }
    inline void setQUndoCommand_MergeWith_IsBase(bool value) const { qundocommand_mergewith_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void undo() override {
        if (qundocommand_undo_isbase) {
            qundocommand_undo_isbase = false;
            QUndoCommand::undo();
            return;
        }
        auto undo_cb = qundocommand_undo_callback;
        if (undo_cb) {
            undo_cb();
            return;
        }
        QUndoCommand::undo();
    }

    // Virtual method for C ABI access and custom callback
    virtual void redo() override {
        if (qundocommand_redo_isbase) {
            qundocommand_redo_isbase = false;
            QUndoCommand::redo();
            return;
        }
        auto redo_cb = qundocommand_redo_callback;
        if (redo_cb) {
            redo_cb();
            return;
        }
        QUndoCommand::redo();
    }

    // Virtual method for C ABI access and custom callback
    virtual int id() const override {
        if (qundocommand_id_isbase) {
            qundocommand_id_isbase = false;
            return QUndoCommand::id();
        }
        auto id_cb = qundocommand_id_callback;
        if (id_cb) {
            int callback_ret = id_cb();
            return static_cast<int>(callback_ret);
        }
        return QUndoCommand::id();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool mergeWith(const QUndoCommand* other) override {
        if (qundocommand_mergewith_isbase) {
            qundocommand_mergewith_isbase = false;
            return QUndoCommand::mergeWith(other);
        }
        auto mergewith_cb = qundocommand_mergewith_callback;
        if (mergewith_cb) {
            QUndoCommand* cbval1 = (QUndoCommand*)other;

            bool callback_ret = mergewith_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoCommand::mergeWith(other);
    }
};

// This class is a subclass of QUndoStack so that we can call protected methods
class VirtualQUndoStack final : public QUndoStack {

  public:
    // Virtual class boolean flag
    bool isVirtualQUndoStack = true;

    // Virtual class public types (including callbacks)
    using QUndoStack_MetaObject_Callback = QMetaObject* (*)();
    using QUndoStack_Metacast_Callback = void* (*)(QUndoStack*, const char*);
    using QUndoStack_Metacall_Callback = int (*)(QUndoStack*, int, int, void**);
    using QUndoStack_Event_Callback = bool (*)(QUndoStack*, QEvent*);
    using QUndoStack_EventFilter_Callback = bool (*)(QUndoStack*, QObject*, QEvent*);
    using QUndoStack_TimerEvent_Callback = void (*)(QUndoStack*, QTimerEvent*);
    using QUndoStack_ChildEvent_Callback = void (*)(QUndoStack*, QChildEvent*);
    using QUndoStack_CustomEvent_Callback = void (*)(QUndoStack*, QEvent*);
    using QUndoStack_ConnectNotify_Callback = void (*)(QUndoStack*, QMetaMethod*);
    using QUndoStack_DisconnectNotify_Callback = void (*)(QUndoStack*, QMetaMethod*);
    using QUndoStack_Sender_Callback = QObject* (*)();
    using QUndoStack_SenderSignalIndex_Callback = int (*)();
    using QUndoStack_Receivers_Callback = int (*)(const QUndoStack*, const char*);
    using QUndoStack_IsSignalConnected_Callback = bool (*)(const QUndoStack*, QMetaMethod*);

  protected:
    // Instance callback storage
    QUndoStack_MetaObject_Callback qundostack_metaobject_callback = nullptr;
    QUndoStack_Metacast_Callback qundostack_metacast_callback = nullptr;
    QUndoStack_Metacall_Callback qundostack_metacall_callback = nullptr;
    QUndoStack_Event_Callback qundostack_event_callback = nullptr;
    QUndoStack_EventFilter_Callback qundostack_eventfilter_callback = nullptr;
    QUndoStack_TimerEvent_Callback qundostack_timerevent_callback = nullptr;
    QUndoStack_ChildEvent_Callback qundostack_childevent_callback = nullptr;
    QUndoStack_CustomEvent_Callback qundostack_customevent_callback = nullptr;
    QUndoStack_ConnectNotify_Callback qundostack_connectnotify_callback = nullptr;
    QUndoStack_DisconnectNotify_Callback qundostack_disconnectnotify_callback = nullptr;
    QUndoStack_Sender_Callback qundostack_sender_callback = nullptr;
    QUndoStack_SenderSignalIndex_Callback qundostack_sendersignalindex_callback = nullptr;
    QUndoStack_Receivers_Callback qundostack_receivers_callback = nullptr;
    QUndoStack_IsSignalConnected_Callback qundostack_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qundostack_metaobject_isbase = false;
    mutable bool qundostack_metacast_isbase = false;
    mutable bool qundostack_metacall_isbase = false;
    mutable bool qundostack_event_isbase = false;
    mutable bool qundostack_eventfilter_isbase = false;
    mutable bool qundostack_timerevent_isbase = false;
    mutable bool qundostack_childevent_isbase = false;
    mutable bool qundostack_customevent_isbase = false;
    mutable bool qundostack_connectnotify_isbase = false;
    mutable bool qundostack_disconnectnotify_isbase = false;
    mutable bool qundostack_sender_isbase = false;
    mutable bool qundostack_sendersignalindex_isbase = false;
    mutable bool qundostack_receivers_isbase = false;
    mutable bool qundostack_issignalconnected_isbase = false;

  public:
    VirtualQUndoStack() : QUndoStack() {};
    VirtualQUndoStack(QObject* parent) : QUndoStack(parent) {};

    // Callback setters
    inline void setQUndoStack_MetaObject_Callback(QUndoStack_MetaObject_Callback cb) { qundostack_metaobject_callback = cb; }
    inline void setQUndoStack_Metacast_Callback(QUndoStack_Metacast_Callback cb) { qundostack_metacast_callback = cb; }
    inline void setQUndoStack_Metacall_Callback(QUndoStack_Metacall_Callback cb) { qundostack_metacall_callback = cb; }
    inline void setQUndoStack_Event_Callback(QUndoStack_Event_Callback cb) { qundostack_event_callback = cb; }
    inline void setQUndoStack_EventFilter_Callback(QUndoStack_EventFilter_Callback cb) { qundostack_eventfilter_callback = cb; }
    inline void setQUndoStack_TimerEvent_Callback(QUndoStack_TimerEvent_Callback cb) { qundostack_timerevent_callback = cb; }
    inline void setQUndoStack_ChildEvent_Callback(QUndoStack_ChildEvent_Callback cb) { qundostack_childevent_callback = cb; }
    inline void setQUndoStack_CustomEvent_Callback(QUndoStack_CustomEvent_Callback cb) { qundostack_customevent_callback = cb; }
    inline void setQUndoStack_ConnectNotify_Callback(QUndoStack_ConnectNotify_Callback cb) { qundostack_connectnotify_callback = cb; }
    inline void setQUndoStack_DisconnectNotify_Callback(QUndoStack_DisconnectNotify_Callback cb) { qundostack_disconnectnotify_callback = cb; }
    inline void setQUndoStack_Sender_Callback(QUndoStack_Sender_Callback cb) { qundostack_sender_callback = cb; }
    inline void setQUndoStack_SenderSignalIndex_Callback(QUndoStack_SenderSignalIndex_Callback cb) { qundostack_sendersignalindex_callback = cb; }
    inline void setQUndoStack_Receivers_Callback(QUndoStack_Receivers_Callback cb) { qundostack_receivers_callback = cb; }
    inline void setQUndoStack_IsSignalConnected_Callback(QUndoStack_IsSignalConnected_Callback cb) { qundostack_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQUndoStack_MetaObject_IsBase(bool value) const { qundostack_metaobject_isbase = value; }
    inline void setQUndoStack_Metacast_IsBase(bool value) const { qundostack_metacast_isbase = value; }
    inline void setQUndoStack_Metacall_IsBase(bool value) const { qundostack_metacall_isbase = value; }
    inline void setQUndoStack_Event_IsBase(bool value) const { qundostack_event_isbase = value; }
    inline void setQUndoStack_EventFilter_IsBase(bool value) const { qundostack_eventfilter_isbase = value; }
    inline void setQUndoStack_TimerEvent_IsBase(bool value) const { qundostack_timerevent_isbase = value; }
    inline void setQUndoStack_ChildEvent_IsBase(bool value) const { qundostack_childevent_isbase = value; }
    inline void setQUndoStack_CustomEvent_IsBase(bool value) const { qundostack_customevent_isbase = value; }
    inline void setQUndoStack_ConnectNotify_IsBase(bool value) const { qundostack_connectnotify_isbase = value; }
    inline void setQUndoStack_DisconnectNotify_IsBase(bool value) const { qundostack_disconnectnotify_isbase = value; }
    inline void setQUndoStack_Sender_IsBase(bool value) const { qundostack_sender_isbase = value; }
    inline void setQUndoStack_SenderSignalIndex_IsBase(bool value) const { qundostack_sendersignalindex_isbase = value; }
    inline void setQUndoStack_Receivers_IsBase(bool value) const { qundostack_receivers_isbase = value; }
    inline void setQUndoStack_IsSignalConnected_IsBase(bool value) const { qundostack_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qundostack_metaobject_isbase) {
            qundostack_metaobject_isbase = false;
            return QUndoStack::metaObject();
        }
        auto metaobject_cb = qundostack_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QUndoStack::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qundostack_metacast_isbase) {
            qundostack_metacast_isbase = false;
            return QUndoStack::qt_metacast(param1);
        }
        auto metacast_cb = qundostack_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoStack::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qundostack_metacall_isbase) {
            qundostack_metacall_isbase = false;
            return QUndoStack::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qundostack_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QUndoStack::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qundostack_event_isbase) {
            qundostack_event_isbase = false;
            return QUndoStack::event(event);
        }
        auto event_cb = qundostack_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoStack::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qundostack_eventfilter_isbase) {
            qundostack_eventfilter_isbase = false;
            return QUndoStack::eventFilter(watched, event);
        }
        auto eventfilter_cb = qundostack_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QUndoStack::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qundostack_timerevent_isbase) {
            qundostack_timerevent_isbase = false;
            QUndoStack::timerEvent(event);
            return;
        }
        auto timerevent_cb = qundostack_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QUndoStack::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qundostack_childevent_isbase) {
            qundostack_childevent_isbase = false;
            QUndoStack::childEvent(event);
            return;
        }
        auto childevent_cb = qundostack_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QUndoStack::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qundostack_customevent_isbase) {
            qundostack_customevent_isbase = false;
            QUndoStack::customEvent(event);
            return;
        }
        auto customevent_cb = qundostack_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QUndoStack::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qundostack_connectnotify_isbase) {
            qundostack_connectnotify_isbase = false;
            QUndoStack::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qundostack_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QUndoStack::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qundostack_disconnectnotify_isbase) {
            qundostack_disconnectnotify_isbase = false;
            QUndoStack::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qundostack_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QUndoStack::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qundostack_sender_isbase) {
            qundostack_sender_isbase = false;
            return QUndoStack::sender();
        }
        auto sender_cb = qundostack_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QUndoStack::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qundostack_sendersignalindex_isbase) {
            qundostack_sendersignalindex_isbase = false;
            return QUndoStack::senderSignalIndex();
        }
        auto sendersignalindex_cb = qundostack_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QUndoStack::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qundostack_receivers_isbase) {
            qundostack_receivers_isbase = false;
            return QUndoStack::receivers(signal);
        }
        auto receivers_cb = qundostack_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QUndoStack::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qundostack_issignalconnected_isbase) {
            qundostack_issignalconnected_isbase = false;
            return QUndoStack::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qundostack_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QUndoStack::isSignalConnected(signal);
    }

    // Friend functions
    friend void QUndoStack_TimerEvent(QUndoStack* self, QTimerEvent* event);
    friend void QUndoStack_SuperTimerEvent(QUndoStack* self, QTimerEvent* event);
    friend void QUndoStack_ChildEvent(QUndoStack* self, QChildEvent* event);
    friend void QUndoStack_SuperChildEvent(QUndoStack* self, QChildEvent* event);
    friend void QUndoStack_CustomEvent(QUndoStack* self, QEvent* event);
    friend void QUndoStack_SuperCustomEvent(QUndoStack* self, QEvent* event);
    friend void QUndoStack_ConnectNotify(QUndoStack* self, const QMetaMethod* signal);
    friend void QUndoStack_SuperConnectNotify(QUndoStack* self, const QMetaMethod* signal);
    friend void QUndoStack_DisconnectNotify(QUndoStack* self, const QMetaMethod* signal);
    friend void QUndoStack_SuperDisconnectNotify(QUndoStack* self, const QMetaMethod* signal);
    friend QObject* QUndoStack_Sender(const QUndoStack* self);
    friend QObject* QUndoStack_SuperSender(const QUndoStack* self);
    friend int QUndoStack_SenderSignalIndex(const QUndoStack* self);
    friend int QUndoStack_SuperSenderSignalIndex(const QUndoStack* self);
    friend int QUndoStack_Receivers(const QUndoStack* self, const char* signal);
    friend int QUndoStack_SuperReceivers(const QUndoStack* self, const char* signal);
    friend bool QUndoStack_IsSignalConnected(const QUndoStack* self, const QMetaMethod* signal);
    friend bool QUndoStack_SuperIsSignalConnected(const QUndoStack* self, const QMetaMethod* signal);
};

#endif
