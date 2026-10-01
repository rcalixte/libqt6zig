#pragma once
#ifndef LIBQLIBRARY_HXX
#define LIBQLIBRARY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLibrary
class VirtualQLibrary final : public QLibrary {
  public:
    // Virtual class public types (including callbacks and access types)
    using QLibrary_MetaObject_Callback = QMetaObject* (*)(const QLibrary*);
    using QLibrary_Metacast_Callback = void* (*)(QLibrary*, const char*);
    using QLibrary_Metacall_Callback = int (*)(QLibrary*, int, int, void**);
    using QLibrary_Event_Callback = bool (*)(QLibrary*, QEvent*);
    using QLibrary_EventFilter_Callback = bool (*)(QLibrary*, QObject*, QEvent*);
    using QLibrary_TimerEvent_Callback = void (*)(QLibrary*, QTimerEvent*);
    using QLibrary_ChildEvent_Callback = void (*)(QLibrary*, QChildEvent*);
    using QLibrary_CustomEvent_Callback = void (*)(QLibrary*, QEvent*);
    using QLibrary_ConnectNotify_Callback = void (*)(QLibrary*, QMetaMethod*);
    using QLibrary_DisconnectNotify_Callback = void (*)(QLibrary*, QMetaMethod*);
    using QLibrary::isSignalConnected;
    using QLibrary::receivers;
    using QLibrary::sender;
    using QLibrary::senderSignalIndex;

    // Instance callback storage
    QLibrary_MetaObject_Callback qlibrary_metaobject_callback = nullptr;
    QLibrary_Metacast_Callback qlibrary_metacast_callback = nullptr;
    QLibrary_Metacall_Callback qlibrary_metacall_callback = nullptr;
    QLibrary_Event_Callback qlibrary_event_callback = nullptr;
    QLibrary_EventFilter_Callback qlibrary_eventfilter_callback = nullptr;
    QLibrary_TimerEvent_Callback qlibrary_timerevent_callback = nullptr;
    QLibrary_ChildEvent_Callback qlibrary_childevent_callback = nullptr;
    QLibrary_CustomEvent_Callback qlibrary_customevent_callback = nullptr;
    QLibrary_ConnectNotify_Callback qlibrary_connectnotify_callback = nullptr;
    QLibrary_DisconnectNotify_Callback qlibrary_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QLibrary {
        using QLibrary::childEvent;
        using QLibrary::connectNotify;
        using QLibrary::customEvent;
        using QLibrary::disconnectNotify;
        using QLibrary::timerEvent;
    };

    VirtualQLibrary() : QLibrary() {};
    VirtualQLibrary(const QString& fileName) : QLibrary(fileName) {};
    VirtualQLibrary(const QString& fileName, int verNum) : QLibrary(fileName, verNum) {};
    VirtualQLibrary(const QString& fileName, const QString& version) : QLibrary(fileName, version) {};
    VirtualQLibrary(QObject* parent) : QLibrary(parent) {};
    VirtualQLibrary(const QString& fileName, QObject* parent) : QLibrary(fileName, parent) {};
    VirtualQLibrary(const QString& fileName, int verNum, QObject* parent) : QLibrary(fileName, verNum, parent) {};
    VirtualQLibrary(const QString& fileName, const QString& version, QObject* parent) : QLibrary(fileName, version, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlibrary_metaobject_callback) {
            QMetaObject* callback_ret = qlibrary_metaobject_callback(this);
            return callback_ret;
        }
        return QLibrary::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlibrary_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qlibrary_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QLibrary::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlibrary_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qlibrary_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLibrary::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlibrary_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qlibrary_event_callback(this, cbval1);
            return callback_ret;
        }
        return QLibrary::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlibrary_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qlibrary_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLibrary::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlibrary_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qlibrary_timerevent_callback(this, cbval1);
            return;
        }
        QLibrary::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlibrary_childevent_callback) {
            QChildEvent* cbval1 = event;
            qlibrary_childevent_callback(this, cbval1);
            return;
        }
        QLibrary::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlibrary_customevent_callback) {
            QEvent* cbval1 = event;
            qlibrary_customevent_callback(this, cbval1);
            return;
        }
        QLibrary::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlibrary_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlibrary_connectnotify_callback(this, cbval1);
            return;
        }
        QLibrary::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlibrary_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlibrary_disconnectnotify_callback(this, cbval1);
            return;
        }
        QLibrary::disconnectNotify(signal);
    }

    // Friend functions
    friend void QLibrary_SuperTimerEvent(QLibrary* self, QTimerEvent* event);
    friend void QLibrary_SuperChildEvent(QLibrary* self, QChildEvent* event);
    friend void QLibrary_SuperCustomEvent(QLibrary* self, QEvent* event);
    friend void QLibrary_SuperConnectNotify(QLibrary* self, const QMetaMethod* signal);
    friend void QLibrary_SuperDisconnectNotify(QLibrary* self, const QMetaMethod* signal);
};

#endif
