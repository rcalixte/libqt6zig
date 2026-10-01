#pragma once
#ifndef OPENGL_LIBQOPENGLTIMERQUERY_HXX
#define OPENGL_LIBQOPENGLTIMERQUERY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLTimerQuery
class VirtualQOpenGLTimerQuery final : public QOpenGLTimerQuery {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLTimerQuery_MetaObject_Callback = QMetaObject* (*)(const QOpenGLTimerQuery*);
    using QOpenGLTimerQuery_Metacast_Callback = void* (*)(QOpenGLTimerQuery*, const char*);
    using QOpenGLTimerQuery_Metacall_Callback = int (*)(QOpenGLTimerQuery*, int, int, void**);
    using QOpenGLTimerQuery_Event_Callback = bool (*)(QOpenGLTimerQuery*, QEvent*);
    using QOpenGLTimerQuery_EventFilter_Callback = bool (*)(QOpenGLTimerQuery*, QObject*, QEvent*);
    using QOpenGLTimerQuery_TimerEvent_Callback = void (*)(QOpenGLTimerQuery*, QTimerEvent*);
    using QOpenGLTimerQuery_ChildEvent_Callback = void (*)(QOpenGLTimerQuery*, QChildEvent*);
    using QOpenGLTimerQuery_CustomEvent_Callback = void (*)(QOpenGLTimerQuery*, QEvent*);
    using QOpenGLTimerQuery_ConnectNotify_Callback = void (*)(QOpenGLTimerQuery*, QMetaMethod*);
    using QOpenGLTimerQuery_DisconnectNotify_Callback = void (*)(QOpenGLTimerQuery*, QMetaMethod*);
    using QOpenGLTimerQuery::isSignalConnected;
    using QOpenGLTimerQuery::receivers;
    using QOpenGLTimerQuery::sender;
    using QOpenGLTimerQuery::senderSignalIndex;

    // Instance callback storage
    QOpenGLTimerQuery_MetaObject_Callback qopengltimerquery_metaobject_callback = nullptr;
    QOpenGLTimerQuery_Metacast_Callback qopengltimerquery_metacast_callback = nullptr;
    QOpenGLTimerQuery_Metacall_Callback qopengltimerquery_metacall_callback = nullptr;
    QOpenGLTimerQuery_Event_Callback qopengltimerquery_event_callback = nullptr;
    QOpenGLTimerQuery_EventFilter_Callback qopengltimerquery_eventfilter_callback = nullptr;
    QOpenGLTimerQuery_TimerEvent_Callback qopengltimerquery_timerevent_callback = nullptr;
    QOpenGLTimerQuery_ChildEvent_Callback qopengltimerquery_childevent_callback = nullptr;
    QOpenGLTimerQuery_CustomEvent_Callback qopengltimerquery_customevent_callback = nullptr;
    QOpenGLTimerQuery_ConnectNotify_Callback qopengltimerquery_connectnotify_callback = nullptr;
    QOpenGLTimerQuery_DisconnectNotify_Callback qopengltimerquery_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QOpenGLTimerQuery {
        using QOpenGLTimerQuery::childEvent;
        using QOpenGLTimerQuery::connectNotify;
        using QOpenGLTimerQuery::customEvent;
        using QOpenGLTimerQuery::disconnectNotify;
        using QOpenGLTimerQuery::timerEvent;
    };

    VirtualQOpenGLTimerQuery() : QOpenGLTimerQuery() {};
    VirtualQOpenGLTimerQuery(QObject* parent) : QOpenGLTimerQuery(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qopengltimerquery_metaobject_callback) {
            QMetaObject* callback_ret = qopengltimerquery_metaobject_callback(this);
            return callback_ret;
        }
        return QOpenGLTimerQuery::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qopengltimerquery_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qopengltimerquery_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLTimerQuery::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopengltimerquery_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qopengltimerquery_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLTimerQuery::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopengltimerquery_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qopengltimerquery_event_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLTimerQuery::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopengltimerquery_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qopengltimerquery_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QOpenGLTimerQuery::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopengltimerquery_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qopengltimerquery_timerevent_callback(this, cbval1);
            return;
        }
        QOpenGLTimerQuery::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopengltimerquery_childevent_callback) {
            QChildEvent* cbval1 = event;
            qopengltimerquery_childevent_callback(this, cbval1);
            return;
        }
        QOpenGLTimerQuery::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopengltimerquery_customevent_callback) {
            QEvent* cbval1 = event;
            qopengltimerquery_customevent_callback(this, cbval1);
            return;
        }
        QOpenGLTimerQuery::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopengltimerquery_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopengltimerquery_connectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLTimerQuery::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopengltimerquery_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopengltimerquery_disconnectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLTimerQuery::disconnectNotify(signal);
    }

    // Friend functions
    friend void QOpenGLTimerQuery_SuperTimerEvent(QOpenGLTimerQuery* self, QTimerEvent* event);
    friend void QOpenGLTimerQuery_SuperChildEvent(QOpenGLTimerQuery* self, QChildEvent* event);
    friend void QOpenGLTimerQuery_SuperCustomEvent(QOpenGLTimerQuery* self, QEvent* event);
    friend void QOpenGLTimerQuery_SuperConnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
    friend void QOpenGLTimerQuery_SuperDisconnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal);
};

// This class is a subclass of QOpenGLTimeMonitor
class VirtualQOpenGLTimeMonitor final : public QOpenGLTimeMonitor {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLTimeMonitor_MetaObject_Callback = QMetaObject* (*)(const QOpenGLTimeMonitor*);
    using QOpenGLTimeMonitor_Metacast_Callback = void* (*)(QOpenGLTimeMonitor*, const char*);
    using QOpenGLTimeMonitor_Metacall_Callback = int (*)(QOpenGLTimeMonitor*, int, int, void**);
    using QOpenGLTimeMonitor_Event_Callback = bool (*)(QOpenGLTimeMonitor*, QEvent*);
    using QOpenGLTimeMonitor_EventFilter_Callback = bool (*)(QOpenGLTimeMonitor*, QObject*, QEvent*);
    using QOpenGLTimeMonitor_TimerEvent_Callback = void (*)(QOpenGLTimeMonitor*, QTimerEvent*);
    using QOpenGLTimeMonitor_ChildEvent_Callback = void (*)(QOpenGLTimeMonitor*, QChildEvent*);
    using QOpenGLTimeMonitor_CustomEvent_Callback = void (*)(QOpenGLTimeMonitor*, QEvent*);
    using QOpenGLTimeMonitor_ConnectNotify_Callback = void (*)(QOpenGLTimeMonitor*, QMetaMethod*);
    using QOpenGLTimeMonitor_DisconnectNotify_Callback = void (*)(QOpenGLTimeMonitor*, QMetaMethod*);
    using QOpenGLTimeMonitor::isSignalConnected;
    using QOpenGLTimeMonitor::receivers;
    using QOpenGLTimeMonitor::sender;
    using QOpenGLTimeMonitor::senderSignalIndex;

    // Instance callback storage
    QOpenGLTimeMonitor_MetaObject_Callback qopengltimemonitor_metaobject_callback = nullptr;
    QOpenGLTimeMonitor_Metacast_Callback qopengltimemonitor_metacast_callback = nullptr;
    QOpenGLTimeMonitor_Metacall_Callback qopengltimemonitor_metacall_callback = nullptr;
    QOpenGLTimeMonitor_Event_Callback qopengltimemonitor_event_callback = nullptr;
    QOpenGLTimeMonitor_EventFilter_Callback qopengltimemonitor_eventfilter_callback = nullptr;
    QOpenGLTimeMonitor_TimerEvent_Callback qopengltimemonitor_timerevent_callback = nullptr;
    QOpenGLTimeMonitor_ChildEvent_Callback qopengltimemonitor_childevent_callback = nullptr;
    QOpenGLTimeMonitor_CustomEvent_Callback qopengltimemonitor_customevent_callback = nullptr;
    QOpenGLTimeMonitor_ConnectNotify_Callback qopengltimemonitor_connectnotify_callback = nullptr;
    QOpenGLTimeMonitor_DisconnectNotify_Callback qopengltimemonitor_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QOpenGLTimeMonitor {
        using QOpenGLTimeMonitor::childEvent;
        using QOpenGLTimeMonitor::connectNotify;
        using QOpenGLTimeMonitor::customEvent;
        using QOpenGLTimeMonitor::disconnectNotify;
        using QOpenGLTimeMonitor::timerEvent;
    };

    VirtualQOpenGLTimeMonitor() : QOpenGLTimeMonitor() {};
    VirtualQOpenGLTimeMonitor(QObject* parent) : QOpenGLTimeMonitor(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qopengltimemonitor_metaobject_callback) {
            QMetaObject* callback_ret = qopengltimemonitor_metaobject_callback(this);
            return callback_ret;
        }
        return QOpenGLTimeMonitor::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qopengltimemonitor_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qopengltimemonitor_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLTimeMonitor::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopengltimemonitor_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qopengltimemonitor_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLTimeMonitor::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopengltimemonitor_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qopengltimemonitor_event_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLTimeMonitor::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopengltimemonitor_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qopengltimemonitor_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QOpenGLTimeMonitor::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopengltimemonitor_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qopengltimemonitor_timerevent_callback(this, cbval1);
            return;
        }
        QOpenGLTimeMonitor::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopengltimemonitor_childevent_callback) {
            QChildEvent* cbval1 = event;
            qopengltimemonitor_childevent_callback(this, cbval1);
            return;
        }
        QOpenGLTimeMonitor::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopengltimemonitor_customevent_callback) {
            QEvent* cbval1 = event;
            qopengltimemonitor_customevent_callback(this, cbval1);
            return;
        }
        QOpenGLTimeMonitor::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopengltimemonitor_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopengltimemonitor_connectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLTimeMonitor::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopengltimemonitor_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopengltimemonitor_disconnectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLTimeMonitor::disconnectNotify(signal);
    }

    // Friend functions
    friend void QOpenGLTimeMonitor_SuperTimerEvent(QOpenGLTimeMonitor* self, QTimerEvent* event);
    friend void QOpenGLTimeMonitor_SuperChildEvent(QOpenGLTimeMonitor* self, QChildEvent* event);
    friend void QOpenGLTimeMonitor_SuperCustomEvent(QOpenGLTimeMonitor* self, QEvent* event);
    friend void QOpenGLTimeMonitor_SuperConnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
    friend void QOpenGLTimeMonitor_SuperDisconnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal);
};

#endif
