#pragma once
#ifndef LIBQTEXTTABLE_HXX
#define LIBQTEXTTABLE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextTable
class VirtualQTextTable final : public QTextTable {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTextTable_MetaObject_Callback = QMetaObject* (*)(const QTextTable*);
    using QTextTable_Metacast_Callback = void* (*)(QTextTable*, const char*);
    using QTextTable_Metacall_Callback = int (*)(QTextTable*, int, int, void**);
    using QTextTable_Event_Callback = bool (*)(QTextTable*, QEvent*);
    using QTextTable_EventFilter_Callback = bool (*)(QTextTable*, QObject*, QEvent*);
    using QTextTable_TimerEvent_Callback = void (*)(QTextTable*, QTimerEvent*);
    using QTextTable_ChildEvent_Callback = void (*)(QTextTable*, QChildEvent*);
    using QTextTable_CustomEvent_Callback = void (*)(QTextTable*, QEvent*);
    using QTextTable_ConnectNotify_Callback = void (*)(QTextTable*, QMetaMethod*);
    using QTextTable_DisconnectNotify_Callback = void (*)(QTextTable*, QMetaMethod*);
    using QTextTable::isSignalConnected;
    using QTextTable::receivers;
    using QTextTable::sender;
    using QTextTable::senderSignalIndex;

    // Instance callback storage
    QTextTable_MetaObject_Callback qtexttable_metaobject_callback = nullptr;
    QTextTable_Metacast_Callback qtexttable_metacast_callback = nullptr;
    QTextTable_Metacall_Callback qtexttable_metacall_callback = nullptr;
    QTextTable_Event_Callback qtexttable_event_callback = nullptr;
    QTextTable_EventFilter_Callback qtexttable_eventfilter_callback = nullptr;
    QTextTable_TimerEvent_Callback qtexttable_timerevent_callback = nullptr;
    QTextTable_ChildEvent_Callback qtexttable_childevent_callback = nullptr;
    QTextTable_CustomEvent_Callback qtexttable_customevent_callback = nullptr;
    QTextTable_ConnectNotify_Callback qtexttable_connectnotify_callback = nullptr;
    QTextTable_DisconnectNotify_Callback qtexttable_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTextTable {
        using QTextTable::childEvent;
        using QTextTable::connectNotify;
        using QTextTable::customEvent;
        using QTextTable::disconnectNotify;
        using QTextTable::timerEvent;
    };

    VirtualQTextTable(QTextDocument* doc) : QTextTable(doc) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtexttable_metaobject_callback) {
            QMetaObject* callback_ret = qtexttable_metaobject_callback(this);
            return callback_ret;
        }
        return QTextTable::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtexttable_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtexttable_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTextTable::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtexttable_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtexttable_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTextTable::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtexttable_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtexttable_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTextTable::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtexttable_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtexttable_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTextTable::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtexttable_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtexttable_timerevent_callback(this, cbval1);
            return;
        }
        QTextTable::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtexttable_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtexttable_childevent_callback(this, cbval1);
            return;
        }
        QTextTable::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtexttable_customevent_callback) {
            QEvent* cbval1 = event;
            qtexttable_customevent_callback(this, cbval1);
            return;
        }
        QTextTable::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtexttable_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtexttable_connectnotify_callback(this, cbval1);
            return;
        }
        QTextTable::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtexttable_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtexttable_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTextTable::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTextTable_SuperTimerEvent(QTextTable* self, QTimerEvent* event);
    friend void QTextTable_SuperChildEvent(QTextTable* self, QChildEvent* event);
    friend void QTextTable_SuperCustomEvent(QTextTable* self, QEvent* event);
    friend void QTextTable_SuperConnectNotify(QTextTable* self, const QMetaMethod* signal);
    friend void QTextTable_SuperDisconnectNotify(QTextTable* self, const QMetaMethod* signal);
};

#endif
