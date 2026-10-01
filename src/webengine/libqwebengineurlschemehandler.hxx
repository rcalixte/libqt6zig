#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEURLSCHEMEHANDLER_HXX
#define WEBENGINE_LIBQWEBENGINEURLSCHEMEHANDLER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebEngineUrlSchemeHandler
class VirtualQWebEngineUrlSchemeHandler : public QWebEngineUrlSchemeHandler {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWebEngineUrlSchemeHandler_MetaObject_Callback = QMetaObject* (*)(const QWebEngineUrlSchemeHandler*);
    using QWebEngineUrlSchemeHandler_Metacast_Callback = void* (*)(QWebEngineUrlSchemeHandler*, const char*);
    using QWebEngineUrlSchemeHandler_Metacall_Callback = int (*)(QWebEngineUrlSchemeHandler*, int, int, void**);
    using QWebEngineUrlSchemeHandler_RequestStarted_Callback = void (*)(QWebEngineUrlSchemeHandler*, QWebEngineUrlRequestJob*);
    using QWebEngineUrlSchemeHandler_Event_Callback = bool (*)(QWebEngineUrlSchemeHandler*, QEvent*);
    using QWebEngineUrlSchemeHandler_EventFilter_Callback = bool (*)(QWebEngineUrlSchemeHandler*, QObject*, QEvent*);
    using QWebEngineUrlSchemeHandler_TimerEvent_Callback = void (*)(QWebEngineUrlSchemeHandler*, QTimerEvent*);
    using QWebEngineUrlSchemeHandler_ChildEvent_Callback = void (*)(QWebEngineUrlSchemeHandler*, QChildEvent*);
    using QWebEngineUrlSchemeHandler_CustomEvent_Callback = void (*)(QWebEngineUrlSchemeHandler*, QEvent*);
    using QWebEngineUrlSchemeHandler_ConnectNotify_Callback = void (*)(QWebEngineUrlSchemeHandler*, QMetaMethod*);
    using QWebEngineUrlSchemeHandler_DisconnectNotify_Callback = void (*)(QWebEngineUrlSchemeHandler*, QMetaMethod*);
    using QWebEngineUrlSchemeHandler::isSignalConnected;
    using QWebEngineUrlSchemeHandler::receivers;
    using QWebEngineUrlSchemeHandler::sender;
    using QWebEngineUrlSchemeHandler::senderSignalIndex;

    // Instance callback storage
    QWebEngineUrlSchemeHandler_MetaObject_Callback qwebengineurlschemehandler_metaobject_callback = nullptr;
    QWebEngineUrlSchemeHandler_Metacast_Callback qwebengineurlschemehandler_metacast_callback = nullptr;
    QWebEngineUrlSchemeHandler_Metacall_Callback qwebengineurlschemehandler_metacall_callback = nullptr;
    QWebEngineUrlSchemeHandler_RequestStarted_Callback qwebengineurlschemehandler_requeststarted_callback = nullptr;
    QWebEngineUrlSchemeHandler_Event_Callback qwebengineurlschemehandler_event_callback = nullptr;
    QWebEngineUrlSchemeHandler_EventFilter_Callback qwebengineurlschemehandler_eventfilter_callback = nullptr;
    QWebEngineUrlSchemeHandler_TimerEvent_Callback qwebengineurlschemehandler_timerevent_callback = nullptr;
    QWebEngineUrlSchemeHandler_ChildEvent_Callback qwebengineurlschemehandler_childevent_callback = nullptr;
    QWebEngineUrlSchemeHandler_CustomEvent_Callback qwebengineurlschemehandler_customevent_callback = nullptr;
    QWebEngineUrlSchemeHandler_ConnectNotify_Callback qwebengineurlschemehandler_connectnotify_callback = nullptr;
    QWebEngineUrlSchemeHandler_DisconnectNotify_Callback qwebengineurlschemehandler_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWebEngineUrlSchemeHandler {
        using QWebEngineUrlSchemeHandler::childEvent;
        using QWebEngineUrlSchemeHandler::connectNotify;
        using QWebEngineUrlSchemeHandler::customEvent;
        using QWebEngineUrlSchemeHandler::disconnectNotify;
        using QWebEngineUrlSchemeHandler::timerEvent;
    };

    VirtualQWebEngineUrlSchemeHandler() : QWebEngineUrlSchemeHandler() {};
    VirtualQWebEngineUrlSchemeHandler(QObject* parent) : QWebEngineUrlSchemeHandler(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebengineurlschemehandler_metaobject_callback) {
            QMetaObject* callback_ret = qwebengineurlschemehandler_metaobject_callback(this);
            return callback_ret;
        }
        return QWebEngineUrlSchemeHandler::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebengineurlschemehandler_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwebengineurlschemehandler_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEngineUrlSchemeHandler::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebengineurlschemehandler_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwebengineurlschemehandler_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebEngineUrlSchemeHandler::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestStarted(QWebEngineUrlRequestJob* param1) override {
        if (qwebengineurlschemehandler_requeststarted_callback) {
            QWebEngineUrlRequestJob* cbval1 = param1;
            qwebengineurlschemehandler_requeststarted_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QWebEngineUrlSchemeHandler::requestStarted called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebengineurlschemehandler_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qwebengineurlschemehandler_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEngineUrlSchemeHandler::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebengineurlschemehandler_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwebengineurlschemehandler_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebEngineUrlSchemeHandler::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebengineurlschemehandler_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwebengineurlschemehandler_timerevent_callback(this, cbval1);
            return;
        }
        QWebEngineUrlSchemeHandler::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebengineurlschemehandler_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwebengineurlschemehandler_childevent_callback(this, cbval1);
            return;
        }
        QWebEngineUrlSchemeHandler::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebengineurlschemehandler_customevent_callback) {
            QEvent* cbval1 = event;
            qwebengineurlschemehandler_customevent_callback(this, cbval1);
            return;
        }
        QWebEngineUrlSchemeHandler::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebengineurlschemehandler_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebengineurlschemehandler_connectnotify_callback(this, cbval1);
            return;
        }
        QWebEngineUrlSchemeHandler::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebengineurlschemehandler_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebengineurlschemehandler_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWebEngineUrlSchemeHandler::disconnectNotify(signal);
    }

    // Friend functions
    friend void QWebEngineUrlSchemeHandler_SuperTimerEvent(QWebEngineUrlSchemeHandler* self, QTimerEvent* event);
    friend void QWebEngineUrlSchemeHandler_SuperChildEvent(QWebEngineUrlSchemeHandler* self, QChildEvent* event);
    friend void QWebEngineUrlSchemeHandler_SuperCustomEvent(QWebEngineUrlSchemeHandler* self, QEvent* event);
    friend void QWebEngineUrlSchemeHandler_SuperConnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
    friend void QWebEngineUrlSchemeHandler_SuperDisconnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal);
};

#endif
