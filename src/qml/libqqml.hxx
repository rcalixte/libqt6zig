#pragma once
#ifndef QML_LIBQQML_HXX
#define QML_LIBQQML_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlTypeNotAvailable
class VirtualQQmlTypeNotAvailable final : public QQmlTypeNotAvailable {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlTypeNotAvailable_MetaObject_Callback = QMetaObject* (*)(const QQmlTypeNotAvailable*);
    using QQmlTypeNotAvailable_Metacast_Callback = void* (*)(QQmlTypeNotAvailable*, const char*);
    using QQmlTypeNotAvailable_Metacall_Callback = int (*)(QQmlTypeNotAvailable*, int, int, void**);
    using QQmlTypeNotAvailable_Event_Callback = bool (*)(QQmlTypeNotAvailable*, QEvent*);
    using QQmlTypeNotAvailable_EventFilter_Callback = bool (*)(QQmlTypeNotAvailable*, QObject*, QEvent*);
    using QQmlTypeNotAvailable_TimerEvent_Callback = void (*)(QQmlTypeNotAvailable*, QTimerEvent*);
    using QQmlTypeNotAvailable_ChildEvent_Callback = void (*)(QQmlTypeNotAvailable*, QChildEvent*);
    using QQmlTypeNotAvailable_CustomEvent_Callback = void (*)(QQmlTypeNotAvailable*, QEvent*);
    using QQmlTypeNotAvailable_ConnectNotify_Callback = void (*)(QQmlTypeNotAvailable*, QMetaMethod*);
    using QQmlTypeNotAvailable_DisconnectNotify_Callback = void (*)(QQmlTypeNotAvailable*, QMetaMethod*);
    using QQmlTypeNotAvailable::isSignalConnected;
    using QQmlTypeNotAvailable::receivers;
    using QQmlTypeNotAvailable::sender;
    using QQmlTypeNotAvailable::senderSignalIndex;

    // Instance callback storage
    QQmlTypeNotAvailable_MetaObject_Callback qqmltypenotavailable_metaobject_callback = nullptr;
    QQmlTypeNotAvailable_Metacast_Callback qqmltypenotavailable_metacast_callback = nullptr;
    QQmlTypeNotAvailable_Metacall_Callback qqmltypenotavailable_metacall_callback = nullptr;
    QQmlTypeNotAvailable_Event_Callback qqmltypenotavailable_event_callback = nullptr;
    QQmlTypeNotAvailable_EventFilter_Callback qqmltypenotavailable_eventfilter_callback = nullptr;
    QQmlTypeNotAvailable_TimerEvent_Callback qqmltypenotavailable_timerevent_callback = nullptr;
    QQmlTypeNotAvailable_ChildEvent_Callback qqmltypenotavailable_childevent_callback = nullptr;
    QQmlTypeNotAvailable_CustomEvent_Callback qqmltypenotavailable_customevent_callback = nullptr;
    QQmlTypeNotAvailable_ConnectNotify_Callback qqmltypenotavailable_connectnotify_callback = nullptr;
    QQmlTypeNotAvailable_DisconnectNotify_Callback qqmltypenotavailable_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQmlTypeNotAvailable {
        using QQmlTypeNotAvailable::childEvent;
        using QQmlTypeNotAvailable::connectNotify;
        using QQmlTypeNotAvailable::customEvent;
        using QQmlTypeNotAvailable::disconnectNotify;
        using QQmlTypeNotAvailable::timerEvent;
    };

    VirtualQQmlTypeNotAvailable() : QQmlTypeNotAvailable() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmltypenotavailable_metaobject_callback) {
            QMetaObject* callback_ret = qqmltypenotavailable_metaobject_callback(this);
            return callback_ret;
        }
        return QQmlTypeNotAvailable::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmltypenotavailable_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qqmltypenotavailable_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlTypeNotAvailable::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmltypenotavailable_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qqmltypenotavailable_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlTypeNotAvailable::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmltypenotavailable_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qqmltypenotavailable_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlTypeNotAvailable::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmltypenotavailable_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qqmltypenotavailable_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlTypeNotAvailable::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmltypenotavailable_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qqmltypenotavailable_timerevent_callback(this, cbval1);
            return;
        }
        QQmlTypeNotAvailable::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmltypenotavailable_childevent_callback) {
            QChildEvent* cbval1 = event;
            qqmltypenotavailable_childevent_callback(this, cbval1);
            return;
        }
        QQmlTypeNotAvailable::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmltypenotavailable_customevent_callback) {
            QEvent* cbval1 = event;
            qqmltypenotavailable_customevent_callback(this, cbval1);
            return;
        }
        QQmlTypeNotAvailable::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmltypenotavailable_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmltypenotavailable_connectnotify_callback(this, cbval1);
            return;
        }
        QQmlTypeNotAvailable::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmltypenotavailable_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmltypenotavailable_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQmlTypeNotAvailable::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQmlTypeNotAvailable_SuperTimerEvent(QQmlTypeNotAvailable* self, QTimerEvent* event);
    friend void QQmlTypeNotAvailable_SuperChildEvent(QQmlTypeNotAvailable* self, QChildEvent* event);
    friend void QQmlTypeNotAvailable_SuperCustomEvent(QQmlTypeNotAvailable* self, QEvent* event);
    friend void QQmlTypeNotAvailable_SuperConnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal);
    friend void QQmlTypeNotAvailable_SuperDisconnectNotify(QQmlTypeNotAvailable* self, const QMetaMethod* signal);
};

#endif
