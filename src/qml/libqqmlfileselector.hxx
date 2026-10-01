#pragma once
#ifndef QML_LIBQQMLFILESELECTOR_HXX
#define QML_LIBQQMLFILESELECTOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlFileSelector
class VirtualQQmlFileSelector final : public QQmlFileSelector {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlFileSelector_MetaObject_Callback = QMetaObject* (*)(const QQmlFileSelector*);
    using QQmlFileSelector_Metacast_Callback = void* (*)(QQmlFileSelector*, const char*);
    using QQmlFileSelector_Metacall_Callback = int (*)(QQmlFileSelector*, int, int, void**);
    using QQmlFileSelector_Event_Callback = bool (*)(QQmlFileSelector*, QEvent*);
    using QQmlFileSelector_EventFilter_Callback = bool (*)(QQmlFileSelector*, QObject*, QEvent*);
    using QQmlFileSelector_TimerEvent_Callback = void (*)(QQmlFileSelector*, QTimerEvent*);
    using QQmlFileSelector_ChildEvent_Callback = void (*)(QQmlFileSelector*, QChildEvent*);
    using QQmlFileSelector_CustomEvent_Callback = void (*)(QQmlFileSelector*, QEvent*);
    using QQmlFileSelector_ConnectNotify_Callback = void (*)(QQmlFileSelector*, QMetaMethod*);
    using QQmlFileSelector_DisconnectNotify_Callback = void (*)(QQmlFileSelector*, QMetaMethod*);
    using QQmlFileSelector::isSignalConnected;
    using QQmlFileSelector::receivers;
    using QQmlFileSelector::sender;
    using QQmlFileSelector::senderSignalIndex;

    // Instance callback storage
    QQmlFileSelector_MetaObject_Callback qqmlfileselector_metaobject_callback = nullptr;
    QQmlFileSelector_Metacast_Callback qqmlfileselector_metacast_callback = nullptr;
    QQmlFileSelector_Metacall_Callback qqmlfileselector_metacall_callback = nullptr;
    QQmlFileSelector_Event_Callback qqmlfileselector_event_callback = nullptr;
    QQmlFileSelector_EventFilter_Callback qqmlfileselector_eventfilter_callback = nullptr;
    QQmlFileSelector_TimerEvent_Callback qqmlfileselector_timerevent_callback = nullptr;
    QQmlFileSelector_ChildEvent_Callback qqmlfileselector_childevent_callback = nullptr;
    QQmlFileSelector_CustomEvent_Callback qqmlfileselector_customevent_callback = nullptr;
    QQmlFileSelector_ConnectNotify_Callback qqmlfileselector_connectnotify_callback = nullptr;
    QQmlFileSelector_DisconnectNotify_Callback qqmlfileselector_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQmlFileSelector {
        using QQmlFileSelector::childEvent;
        using QQmlFileSelector::connectNotify;
        using QQmlFileSelector::customEvent;
        using QQmlFileSelector::disconnectNotify;
        using QQmlFileSelector::timerEvent;
    };

    VirtualQQmlFileSelector(QQmlEngine* engine) : QQmlFileSelector(engine) {};
    VirtualQQmlFileSelector(QQmlEngine* engine, QObject* parent) : QQmlFileSelector(engine, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qqmlfileselector_metaobject_callback) {
            QMetaObject* callback_ret = qqmlfileselector_metaobject_callback(this);
            return callback_ret;
        }
        return QQmlFileSelector::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qqmlfileselector_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qqmlfileselector_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlFileSelector::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qqmlfileselector_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qqmlfileselector_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQmlFileSelector::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qqmlfileselector_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qqmlfileselector_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQmlFileSelector::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qqmlfileselector_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qqmlfileselector_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQmlFileSelector::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qqmlfileselector_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qqmlfileselector_timerevent_callback(this, cbval1);
            return;
        }
        QQmlFileSelector::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qqmlfileselector_childevent_callback) {
            QChildEvent* cbval1 = event;
            qqmlfileselector_childevent_callback(this, cbval1);
            return;
        }
        QQmlFileSelector::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qqmlfileselector_customevent_callback) {
            QEvent* cbval1 = event;
            qqmlfileselector_customevent_callback(this, cbval1);
            return;
        }
        QQmlFileSelector::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qqmlfileselector_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlfileselector_connectnotify_callback(this, cbval1);
            return;
        }
        QQmlFileSelector::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qqmlfileselector_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qqmlfileselector_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQmlFileSelector::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQmlFileSelector_SuperTimerEvent(QQmlFileSelector* self, QTimerEvent* event);
    friend void QQmlFileSelector_SuperChildEvent(QQmlFileSelector* self, QChildEvent* event);
    friend void QQmlFileSelector_SuperCustomEvent(QQmlFileSelector* self, QEvent* event);
    friend void QQmlFileSelector_SuperConnectNotify(QQmlFileSelector* self, const QMetaMethod* signal);
    friend void QQmlFileSelector_SuperDisconnectNotify(QQmlFileSelector* self, const QMetaMethod* signal);
};

#endif
