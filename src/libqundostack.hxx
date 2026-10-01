#pragma once
#ifndef LIBQUNDOSTACK_HXX
#define LIBQUNDOSTACK_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QUndoCommand
class VirtualQUndoCommand final : public QUndoCommand {
  public:
    // Virtual class public types (including callbacks and access types)
    using QUndoCommand_Undo_Callback = void (*)(QUndoCommand*);
    using QUndoCommand_Redo_Callback = void (*)(QUndoCommand*);
    using QUndoCommand_Id_Callback = int (*)(const QUndoCommand*);
    using QUndoCommand_MergeWith_Callback = bool (*)(QUndoCommand*, QUndoCommand*);

    // Instance callback storage
    QUndoCommand_Undo_Callback qundocommand_undo_callback = nullptr;
    QUndoCommand_Redo_Callback qundocommand_redo_callback = nullptr;
    QUndoCommand_Id_Callback qundocommand_id_callback = nullptr;
    QUndoCommand_MergeWith_Callback qundocommand_mergewith_callback = nullptr;

    VirtualQUndoCommand() : QUndoCommand() {};
    VirtualQUndoCommand(const QString& text) : QUndoCommand(text) {};
    VirtualQUndoCommand(QUndoCommand* parent) : QUndoCommand(parent) {};
    VirtualQUndoCommand(const QString& text, QUndoCommand* parent) : QUndoCommand(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual void undo() override {
        if (qundocommand_undo_callback) {
            qundocommand_undo_callback(this);
            return;
        }
        QUndoCommand::undo();
    }

    // Virtual method for C ABI access and custom callback
    virtual void redo() override {
        if (qundocommand_redo_callback) {
            qundocommand_redo_callback(this);
            return;
        }
        QUndoCommand::redo();
    }

    // Virtual method for C ABI access and custom callback
    virtual int id() const override {
        if (qundocommand_id_callback) {
            int callback_ret = qundocommand_id_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QUndoCommand::id();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool mergeWith(const QUndoCommand* other) override {
        if (qundocommand_mergewith_callback) {
            QUndoCommand* cbval1 = (QUndoCommand*)other;
            bool callback_ret = qundocommand_mergewith_callback(this, cbval1);
            return callback_ret;
        }
        return QUndoCommand::mergeWith(other);
    }
};

// This class is a subclass of QUndoStack
class VirtualQUndoStack final : public QUndoStack {
  public:
    // Virtual class public types (including callbacks and access types)
    using QUndoStack_MetaObject_Callback = QMetaObject* (*)(const QUndoStack*);
    using QUndoStack_Metacast_Callback = void* (*)(QUndoStack*, const char*);
    using QUndoStack_Metacall_Callback = int (*)(QUndoStack*, int, int, void**);
    using QUndoStack_Event_Callback = bool (*)(QUndoStack*, QEvent*);
    using QUndoStack_EventFilter_Callback = bool (*)(QUndoStack*, QObject*, QEvent*);
    using QUndoStack_TimerEvent_Callback = void (*)(QUndoStack*, QTimerEvent*);
    using QUndoStack_ChildEvent_Callback = void (*)(QUndoStack*, QChildEvent*);
    using QUndoStack_CustomEvent_Callback = void (*)(QUndoStack*, QEvent*);
    using QUndoStack_ConnectNotify_Callback = void (*)(QUndoStack*, QMetaMethod*);
    using QUndoStack_DisconnectNotify_Callback = void (*)(QUndoStack*, QMetaMethod*);
    using QUndoStack::isSignalConnected;
    using QUndoStack::receivers;
    using QUndoStack::sender;
    using QUndoStack::senderSignalIndex;

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

    // Access struct
    struct Base : QUndoStack {
        using QUndoStack::childEvent;
        using QUndoStack::connectNotify;
        using QUndoStack::customEvent;
        using QUndoStack::disconnectNotify;
        using QUndoStack::timerEvent;
    };

    VirtualQUndoStack() : QUndoStack() {};
    VirtualQUndoStack(QObject* parent) : QUndoStack(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qundostack_metaobject_callback) {
            QMetaObject* callback_ret = qundostack_metaobject_callback(this);
            return callback_ret;
        }
        return QUndoStack::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qundostack_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qundostack_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QUndoStack::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qundostack_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qundostack_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QUndoStack::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qundostack_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qundostack_event_callback(this, cbval1);
            return callback_ret;
        }
        return QUndoStack::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qundostack_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qundostack_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QUndoStack::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qundostack_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qundostack_timerevent_callback(this, cbval1);
            return;
        }
        QUndoStack::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qundostack_childevent_callback) {
            QChildEvent* cbval1 = event;
            qundostack_childevent_callback(this, cbval1);
            return;
        }
        QUndoStack::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qundostack_customevent_callback) {
            QEvent* cbval1 = event;
            qundostack_customevent_callback(this, cbval1);
            return;
        }
        QUndoStack::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qundostack_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qundostack_connectnotify_callback(this, cbval1);
            return;
        }
        QUndoStack::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qundostack_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qundostack_disconnectnotify_callback(this, cbval1);
            return;
        }
        QUndoStack::disconnectNotify(signal);
    }

    // Friend functions
    friend void QUndoStack_SuperTimerEvent(QUndoStack* self, QTimerEvent* event);
    friend void QUndoStack_SuperChildEvent(QUndoStack* self, QChildEvent* event);
    friend void QUndoStack_SuperCustomEvent(QUndoStack* self, QEvent* event);
    friend void QUndoStack_SuperConnectNotify(QUndoStack* self, const QMetaMethod* signal);
    friend void QUndoStack_SuperDisconnectNotify(QUndoStack* self, const QMetaMethod* signal);
};

#endif
