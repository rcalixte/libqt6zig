#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEURLREQUESTINTERCEPTOR_HXX
#define WEBENGINE_LIBQWEBENGINEURLREQUESTINTERCEPTOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebEngineUrlRequestInterceptor
class VirtualQWebEngineUrlRequestInterceptor : public QWebEngineUrlRequestInterceptor {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWebEngineUrlRequestInterceptor_MetaObject_Callback = QMetaObject* (*)(const QWebEngineUrlRequestInterceptor*);
    using QWebEngineUrlRequestInterceptor_Metacast_Callback = void* (*)(QWebEngineUrlRequestInterceptor*, const char*);
    using QWebEngineUrlRequestInterceptor_Metacall_Callback = int (*)(QWebEngineUrlRequestInterceptor*, int, int, void**);
    using QWebEngineUrlRequestInterceptor_InterceptRequest_Callback = void (*)(QWebEngineUrlRequestInterceptor*, QWebEngineUrlRequestInfo*);
    using QWebEngineUrlRequestInterceptor_Event_Callback = bool (*)(QWebEngineUrlRequestInterceptor*, QEvent*);
    using QWebEngineUrlRequestInterceptor_EventFilter_Callback = bool (*)(QWebEngineUrlRequestInterceptor*, QObject*, QEvent*);
    using QWebEngineUrlRequestInterceptor_TimerEvent_Callback = void (*)(QWebEngineUrlRequestInterceptor*, QTimerEvent*);
    using QWebEngineUrlRequestInterceptor_ChildEvent_Callback = void (*)(QWebEngineUrlRequestInterceptor*, QChildEvent*);
    using QWebEngineUrlRequestInterceptor_CustomEvent_Callback = void (*)(QWebEngineUrlRequestInterceptor*, QEvent*);
    using QWebEngineUrlRequestInterceptor_ConnectNotify_Callback = void (*)(QWebEngineUrlRequestInterceptor*, QMetaMethod*);
    using QWebEngineUrlRequestInterceptor_DisconnectNotify_Callback = void (*)(QWebEngineUrlRequestInterceptor*, QMetaMethod*);
    using QWebEngineUrlRequestInterceptor::isSignalConnected;
    using QWebEngineUrlRequestInterceptor::receivers;
    using QWebEngineUrlRequestInterceptor::sender;
    using QWebEngineUrlRequestInterceptor::senderSignalIndex;

    // Instance callback storage
    QWebEngineUrlRequestInterceptor_MetaObject_Callback qwebengineurlrequestinterceptor_metaobject_callback = nullptr;
    QWebEngineUrlRequestInterceptor_Metacast_Callback qwebengineurlrequestinterceptor_metacast_callback = nullptr;
    QWebEngineUrlRequestInterceptor_Metacall_Callback qwebengineurlrequestinterceptor_metacall_callback = nullptr;
    QWebEngineUrlRequestInterceptor_InterceptRequest_Callback qwebengineurlrequestinterceptor_interceptrequest_callback = nullptr;
    QWebEngineUrlRequestInterceptor_Event_Callback qwebengineurlrequestinterceptor_event_callback = nullptr;
    QWebEngineUrlRequestInterceptor_EventFilter_Callback qwebengineurlrequestinterceptor_eventfilter_callback = nullptr;
    QWebEngineUrlRequestInterceptor_TimerEvent_Callback qwebengineurlrequestinterceptor_timerevent_callback = nullptr;
    QWebEngineUrlRequestInterceptor_ChildEvent_Callback qwebengineurlrequestinterceptor_childevent_callback = nullptr;
    QWebEngineUrlRequestInterceptor_CustomEvent_Callback qwebengineurlrequestinterceptor_customevent_callback = nullptr;
    QWebEngineUrlRequestInterceptor_ConnectNotify_Callback qwebengineurlrequestinterceptor_connectnotify_callback = nullptr;
    QWebEngineUrlRequestInterceptor_DisconnectNotify_Callback qwebengineurlrequestinterceptor_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWebEngineUrlRequestInterceptor {
        using QWebEngineUrlRequestInterceptor::childEvent;
        using QWebEngineUrlRequestInterceptor::connectNotify;
        using QWebEngineUrlRequestInterceptor::customEvent;
        using QWebEngineUrlRequestInterceptor::disconnectNotify;
        using QWebEngineUrlRequestInterceptor::timerEvent;
    };

    VirtualQWebEngineUrlRequestInterceptor() : QWebEngineUrlRequestInterceptor() {};
    VirtualQWebEngineUrlRequestInterceptor(QObject* p) : QWebEngineUrlRequestInterceptor(p) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebengineurlrequestinterceptor_metaobject_callback) {
            QMetaObject* callback_ret = qwebengineurlrequestinterceptor_metaobject_callback(this);
            return callback_ret;
        }
        return QWebEngineUrlRequestInterceptor::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebengineurlrequestinterceptor_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwebengineurlrequestinterceptor_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEngineUrlRequestInterceptor::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebengineurlrequestinterceptor_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwebengineurlrequestinterceptor_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebEngineUrlRequestInterceptor::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void interceptRequest(QWebEngineUrlRequestInfo& info) override {
        if (qwebengineurlrequestinterceptor_interceptrequest_callback) {
            QWebEngineUrlRequestInfo& info_ret = info;
            // Cast returned reference into pointer
            QWebEngineUrlRequestInfo* cbval1 = &info_ret;
            qwebengineurlrequestinterceptor_interceptrequest_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QWebEngineUrlRequestInterceptor::interceptRequest called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebengineurlrequestinterceptor_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qwebengineurlrequestinterceptor_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEngineUrlRequestInterceptor::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebengineurlrequestinterceptor_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwebengineurlrequestinterceptor_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebEngineUrlRequestInterceptor::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebengineurlrequestinterceptor_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwebengineurlrequestinterceptor_timerevent_callback(this, cbval1);
            return;
        }
        QWebEngineUrlRequestInterceptor::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebengineurlrequestinterceptor_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwebengineurlrequestinterceptor_childevent_callback(this, cbval1);
            return;
        }
        QWebEngineUrlRequestInterceptor::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebengineurlrequestinterceptor_customevent_callback) {
            QEvent* cbval1 = event;
            qwebengineurlrequestinterceptor_customevent_callback(this, cbval1);
            return;
        }
        QWebEngineUrlRequestInterceptor::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebengineurlrequestinterceptor_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebengineurlrequestinterceptor_connectnotify_callback(this, cbval1);
            return;
        }
        QWebEngineUrlRequestInterceptor::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebengineurlrequestinterceptor_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebengineurlrequestinterceptor_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWebEngineUrlRequestInterceptor::disconnectNotify(signal);
    }

    // Friend functions
    friend void QWebEngineUrlRequestInterceptor_SuperTimerEvent(QWebEngineUrlRequestInterceptor* self, QTimerEvent* event);
    friend void QWebEngineUrlRequestInterceptor_SuperChildEvent(QWebEngineUrlRequestInterceptor* self, QChildEvent* event);
    friend void QWebEngineUrlRequestInterceptor_SuperCustomEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event);
    friend void QWebEngineUrlRequestInterceptor_SuperConnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
    friend void QWebEngineUrlRequestInterceptor_SuperDisconnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal);
};

#endif
