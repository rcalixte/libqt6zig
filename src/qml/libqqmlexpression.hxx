#pragma once
#ifndef QML_LIBQQMLEXPRESSION_HXX
#define QML_LIBQQMLEXPRESSION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlExpression
class VirtualQQmlExpression final : public QQmlExpression {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlExpression_MetaObject_Callback = QMetaObject* (*)(const QQmlExpression*);
    using QQmlExpression_Metacast_Callback = void* (*)(QQmlExpression*, const char*);
    using QQmlExpression_Metacall_Callback = int (*)(QQmlExpression*, int, int, void**);
    using QQmlExpression_Event_Callback = bool (*)(QQmlExpression*, QEvent*);
    using QQmlExpression_EventFilter_Callback = bool (*)(QQmlExpression*, QObject*, QEvent*);
    using QQmlExpression_TimerEvent_Callback = void (*)(QQmlExpression*, QTimerEvent*);
    using QQmlExpression_ChildEvent_Callback = void (*)(QQmlExpression*, QChildEvent*);
    using QQmlExpression_CustomEvent_Callback = void (*)(QQmlExpression*, QEvent*);
    using QQmlExpression_ConnectNotify_Callback = void (*)(QQmlExpression*, QMetaMethod*);
    using QQmlExpression_DisconnectNotify_Callback = void (*)(QQmlExpression*, QMetaMethod*);
    using QQmlExpression::isSignalConnected;
    using QQmlExpression::receivers;
    using QQmlExpression::sender;
    using QQmlExpression::senderSignalIndex;

    // Instance callback storage
    QQmlExpression_MetaObject_Callback qqmlexpression_metaobject_callback = nullptr;
    QQmlExpression_Metacast_Callback qqmlexpression_metacast_callback = nullptr;
    QQmlExpression_Metacall_Callback qqmlexpression_metacall_callback = nullptr;
    QQmlExpression_Event_Callback qqmlexpression_event_callback = nullptr;
    QQmlExpression_EventFilter_Callback qqmlexpression_eventfilter_callback = nullptr;
    QQmlExpression_TimerEvent_Callback qqmlexpression_timerevent_callback = nullptr;
    QQmlExpression_ChildEvent_Callback qqmlexpression_childevent_callback = nullptr;
    QQmlExpression_CustomEvent_Callback qqmlexpression_customevent_callback = nullptr;
    QQmlExpression_ConnectNotify_Callback qqmlexpression_connectnotify_callback = nullptr;
    QQmlExpression_DisconnectNotify_Callback qqmlexpression_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQmlExpression {
        using QQmlExpression::childEvent;
        using QQmlExpression::connectNotify;
        using QQmlExpression::customEvent;
        using QQmlExpression::disconnectNotify;
        using QQmlExpression::timerEvent;
    };

    VirtualQQmlExpression() : QQmlExpression() {};
    VirtualQQmlExpression(QQmlContext* param1, QObject* param2, const QString& param3) : QQmlExpression(param1, param2, param3) {};
    VirtualQQmlExpression(const QQmlScriptString& param1) : QQmlExpression(param1) {};
    VirtualQQmlExpression(QQmlContext* param1, QObject* param2, const QString& param3, QObject* param4) : QQmlExpression(param1, param2, param3, param4) {};
    VirtualQQmlExpression(const QQmlScriptString& param1, QQmlContext* param2) : QQmlExpression(param1, param2) {};
    VirtualQQmlExpression(const QQmlScriptString& param1, QQmlContext* param2, QObject* param3) : QQmlExpression(param1, param2, param3) {};
    VirtualQQmlExpression(const QQmlScriptString& param1, QQmlContext* param2, QObject* param3, QObject* param4) : QQmlExpression(param1, param2, param3, param4) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlexpression_metaobject_callback) {
            QMetaObject* callback_ret = qqmlexpression_metaobject_callback(this);
            return callback_ret;
        }
        return QQmlExpression::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlexpression_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qqmlexpression_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlExpression::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlexpression_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qqmlexpression_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlExpression::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlexpression_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qqmlexpression_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlExpression::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlexpression_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qqmlexpression_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlExpression::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlexpression_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qqmlexpression_timerevent_callback(this, cbval1);
            return;
        }
        QQmlExpression::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlexpression_childevent_callback) {
            QChildEvent* cbval1 = event;
            qqmlexpression_childevent_callback(this, cbval1);
            return;
        }
        QQmlExpression::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlexpression_customevent_callback) {
            QEvent* cbval1 = event;
            qqmlexpression_customevent_callback(this, cbval1);
            return;
        }
        QQmlExpression::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlexpression_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlexpression_connectnotify_callback(this, cbval1);
            return;
        }
        QQmlExpression::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlexpression_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlexpression_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQmlExpression::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQmlExpression_SuperTimerEvent(QQmlExpression* self, QTimerEvent* event);
    friend void QQmlExpression_SuperChildEvent(QQmlExpression* self, QChildEvent* event);
    friend void QQmlExpression_SuperCustomEvent(QQmlExpression* self, QEvent* event);
    friend void QQmlExpression_SuperConnectNotify(QQmlExpression* self, const QMetaMethod* signal);
    friend void QQmlExpression_SuperDisconnectNotify(QQmlExpression* self, const QMetaMethod* signal);
};

#endif
