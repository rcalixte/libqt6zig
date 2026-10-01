#pragma once
#ifndef EXTRAS_QTKEYCHAIN_LIBKEYCHAIN_HXX
#define EXTRAS_QTKEYCHAIN_LIBKEYCHAIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QKeychain::ReadPasswordJob
class VirtualQKeychainReadPasswordJob final : public QKeychain::ReadPasswordJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using QKeychain__ReadPasswordJob_MetaObject_Callback = QMetaObject* (*)(const QKeychain__ReadPasswordJob*);
    using QKeychain__ReadPasswordJob_Metacast_Callback = void* (*)(QKeychain__ReadPasswordJob*, const char*);
    using QKeychain__ReadPasswordJob_Metacall_Callback = int (*)(QKeychain__ReadPasswordJob*, int, int, void**);
    using QKeychain__ReadPasswordJob_Event_Callback = bool (*)(QKeychain__ReadPasswordJob*, QEvent*);
    using QKeychain__ReadPasswordJob_EventFilter_Callback = bool (*)(QKeychain__ReadPasswordJob*, QObject*, QEvent*);
    using QKeychain__ReadPasswordJob_TimerEvent_Callback = void (*)(QKeychain__ReadPasswordJob*, QTimerEvent*);
    using QKeychain__ReadPasswordJob_ChildEvent_Callback = void (*)(QKeychain__ReadPasswordJob*, QChildEvent*);
    using QKeychain__ReadPasswordJob_CustomEvent_Callback = void (*)(QKeychain__ReadPasswordJob*, QEvent*);
    using QKeychain__ReadPasswordJob_ConnectNotify_Callback = void (*)(QKeychain__ReadPasswordJob*, QMetaMethod*);
    using QKeychain__ReadPasswordJob_DisconnectNotify_Callback = void (*)(QKeychain__ReadPasswordJob*, QMetaMethod*);
    using QKeychain::ReadPasswordJob::doStart;
    using QKeychain::ReadPasswordJob::isSignalConnected;
    using QKeychain::ReadPasswordJob::receivers;
    using QKeychain::ReadPasswordJob::sender;
    using QKeychain::ReadPasswordJob::senderSignalIndex;

    // Instance callback storage
    QKeychain__ReadPasswordJob_MetaObject_Callback qkeychain__readpasswordjob_metaobject_callback = nullptr;
    QKeychain__ReadPasswordJob_Metacast_Callback qkeychain__readpasswordjob_metacast_callback = nullptr;
    QKeychain__ReadPasswordJob_Metacall_Callback qkeychain__readpasswordjob_metacall_callback = nullptr;
    QKeychain__ReadPasswordJob_Event_Callback qkeychain__readpasswordjob_event_callback = nullptr;
    QKeychain__ReadPasswordJob_EventFilter_Callback qkeychain__readpasswordjob_eventfilter_callback = nullptr;
    QKeychain__ReadPasswordJob_TimerEvent_Callback qkeychain__readpasswordjob_timerevent_callback = nullptr;
    QKeychain__ReadPasswordJob_ChildEvent_Callback qkeychain__readpasswordjob_childevent_callback = nullptr;
    QKeychain__ReadPasswordJob_CustomEvent_Callback qkeychain__readpasswordjob_customevent_callback = nullptr;
    QKeychain__ReadPasswordJob_ConnectNotify_Callback qkeychain__readpasswordjob_connectnotify_callback = nullptr;
    QKeychain__ReadPasswordJob_DisconnectNotify_Callback qkeychain__readpasswordjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QKeychain::ReadPasswordJob {
        using QKeychain::ReadPasswordJob::childEvent;
        using QKeychain::ReadPasswordJob::connectNotify;
        using QKeychain::ReadPasswordJob::customEvent;
        using QKeychain::ReadPasswordJob::disconnectNotify;
        using QKeychain::ReadPasswordJob::timerEvent;
    };

    VirtualQKeychainReadPasswordJob(const QString& service) : QKeychain::ReadPasswordJob(service) {};
    VirtualQKeychainReadPasswordJob(const QString& service, QObject* parent) : QKeychain::ReadPasswordJob(service, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qkeychain__readpasswordjob_metaobject_callback) {
            QMetaObject* callback_ret = qkeychain__readpasswordjob_metaobject_callback(this);
            return callback_ret;
        }
        return QKeychain__ReadPasswordJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qkeychain__readpasswordjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qkeychain__readpasswordjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QKeychain__ReadPasswordJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qkeychain__readpasswordjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qkeychain__readpasswordjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QKeychain__ReadPasswordJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qkeychain__readpasswordjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qkeychain__readpasswordjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return QKeychain__ReadPasswordJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qkeychain__readpasswordjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qkeychain__readpasswordjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QKeychain__ReadPasswordJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qkeychain__readpasswordjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qkeychain__readpasswordjob_timerevent_callback(this, cbval1);
            return;
        }
        QKeychain__ReadPasswordJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qkeychain__readpasswordjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            qkeychain__readpasswordjob_childevent_callback(this, cbval1);
            return;
        }
        QKeychain__ReadPasswordJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qkeychain__readpasswordjob_customevent_callback) {
            QEvent* cbval1 = event;
            qkeychain__readpasswordjob_customevent_callback(this, cbval1);
            return;
        }
        QKeychain__ReadPasswordJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qkeychain__readpasswordjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qkeychain__readpasswordjob_connectnotify_callback(this, cbval1);
            return;
        }
        QKeychain__ReadPasswordJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qkeychain__readpasswordjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qkeychain__readpasswordjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        QKeychain__ReadPasswordJob::disconnectNotify(signal);
    }

    // Friend functions
    friend void QKeychain__ReadPasswordJob_SuperTimerEvent(QKeychain::ReadPasswordJob* self, QTimerEvent* event);
    friend void QKeychain__ReadPasswordJob_SuperChildEvent(QKeychain::ReadPasswordJob* self, QChildEvent* event);
    friend void QKeychain__ReadPasswordJob_SuperCustomEvent(QKeychain::ReadPasswordJob* self, QEvent* event);
    friend void QKeychain__ReadPasswordJob_SuperConnectNotify(QKeychain::ReadPasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__ReadPasswordJob_SuperDisconnectNotify(QKeychain::ReadPasswordJob* self, const QMetaMethod* signal);
};

// This class is a subclass of QKeychain::WritePasswordJob
class VirtualQKeychainWritePasswordJob final : public QKeychain::WritePasswordJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using QKeychain__WritePasswordJob_MetaObject_Callback = QMetaObject* (*)(const QKeychain__WritePasswordJob*);
    using QKeychain__WritePasswordJob_Metacast_Callback = void* (*)(QKeychain__WritePasswordJob*, const char*);
    using QKeychain__WritePasswordJob_Metacall_Callback = int (*)(QKeychain__WritePasswordJob*, int, int, void**);
    using QKeychain__WritePasswordJob_Event_Callback = bool (*)(QKeychain__WritePasswordJob*, QEvent*);
    using QKeychain__WritePasswordJob_EventFilter_Callback = bool (*)(QKeychain__WritePasswordJob*, QObject*, QEvent*);
    using QKeychain__WritePasswordJob_TimerEvent_Callback = void (*)(QKeychain__WritePasswordJob*, QTimerEvent*);
    using QKeychain__WritePasswordJob_ChildEvent_Callback = void (*)(QKeychain__WritePasswordJob*, QChildEvent*);
    using QKeychain__WritePasswordJob_CustomEvent_Callback = void (*)(QKeychain__WritePasswordJob*, QEvent*);
    using QKeychain__WritePasswordJob_ConnectNotify_Callback = void (*)(QKeychain__WritePasswordJob*, QMetaMethod*);
    using QKeychain__WritePasswordJob_DisconnectNotify_Callback = void (*)(QKeychain__WritePasswordJob*, QMetaMethod*);
    using QKeychain::WritePasswordJob::doStart;
    using QKeychain::WritePasswordJob::isSignalConnected;
    using QKeychain::WritePasswordJob::receivers;
    using QKeychain::WritePasswordJob::sender;
    using QKeychain::WritePasswordJob::senderSignalIndex;

    // Instance callback storage
    QKeychain__WritePasswordJob_MetaObject_Callback qkeychain__writepasswordjob_metaobject_callback = nullptr;
    QKeychain__WritePasswordJob_Metacast_Callback qkeychain__writepasswordjob_metacast_callback = nullptr;
    QKeychain__WritePasswordJob_Metacall_Callback qkeychain__writepasswordjob_metacall_callback = nullptr;
    QKeychain__WritePasswordJob_Event_Callback qkeychain__writepasswordjob_event_callback = nullptr;
    QKeychain__WritePasswordJob_EventFilter_Callback qkeychain__writepasswordjob_eventfilter_callback = nullptr;
    QKeychain__WritePasswordJob_TimerEvent_Callback qkeychain__writepasswordjob_timerevent_callback = nullptr;
    QKeychain__WritePasswordJob_ChildEvent_Callback qkeychain__writepasswordjob_childevent_callback = nullptr;
    QKeychain__WritePasswordJob_CustomEvent_Callback qkeychain__writepasswordjob_customevent_callback = nullptr;
    QKeychain__WritePasswordJob_ConnectNotify_Callback qkeychain__writepasswordjob_connectnotify_callback = nullptr;
    QKeychain__WritePasswordJob_DisconnectNotify_Callback qkeychain__writepasswordjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QKeychain::WritePasswordJob {
        using QKeychain::WritePasswordJob::childEvent;
        using QKeychain::WritePasswordJob::connectNotify;
        using QKeychain::WritePasswordJob::customEvent;
        using QKeychain::WritePasswordJob::disconnectNotify;
        using QKeychain::WritePasswordJob::timerEvent;
    };

    VirtualQKeychainWritePasswordJob(const QString& service) : QKeychain::WritePasswordJob(service) {};
    VirtualQKeychainWritePasswordJob(const QString& service, QObject* parent) : QKeychain::WritePasswordJob(service, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qkeychain__writepasswordjob_metaobject_callback) {
            QMetaObject* callback_ret = qkeychain__writepasswordjob_metaobject_callback(this);
            return callback_ret;
        }
        return QKeychain__WritePasswordJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qkeychain__writepasswordjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qkeychain__writepasswordjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QKeychain__WritePasswordJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qkeychain__writepasswordjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qkeychain__writepasswordjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QKeychain__WritePasswordJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qkeychain__writepasswordjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qkeychain__writepasswordjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return QKeychain__WritePasswordJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qkeychain__writepasswordjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qkeychain__writepasswordjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QKeychain__WritePasswordJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qkeychain__writepasswordjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qkeychain__writepasswordjob_timerevent_callback(this, cbval1);
            return;
        }
        QKeychain__WritePasswordJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qkeychain__writepasswordjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            qkeychain__writepasswordjob_childevent_callback(this, cbval1);
            return;
        }
        QKeychain__WritePasswordJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qkeychain__writepasswordjob_customevent_callback) {
            QEvent* cbval1 = event;
            qkeychain__writepasswordjob_customevent_callback(this, cbval1);
            return;
        }
        QKeychain__WritePasswordJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qkeychain__writepasswordjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qkeychain__writepasswordjob_connectnotify_callback(this, cbval1);
            return;
        }
        QKeychain__WritePasswordJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qkeychain__writepasswordjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qkeychain__writepasswordjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        QKeychain__WritePasswordJob::disconnectNotify(signal);
    }

    // Friend functions
    friend void QKeychain__WritePasswordJob_SuperTimerEvent(QKeychain::WritePasswordJob* self, QTimerEvent* event);
    friend void QKeychain__WritePasswordJob_SuperChildEvent(QKeychain::WritePasswordJob* self, QChildEvent* event);
    friend void QKeychain__WritePasswordJob_SuperCustomEvent(QKeychain::WritePasswordJob* self, QEvent* event);
    friend void QKeychain__WritePasswordJob_SuperConnectNotify(QKeychain::WritePasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__WritePasswordJob_SuperDisconnectNotify(QKeychain::WritePasswordJob* self, const QMetaMethod* signal);
};

// This class is a subclass of QKeychain::DeletePasswordJob
class VirtualQKeychainDeletePasswordJob final : public QKeychain::DeletePasswordJob {
  public:
    // Virtual class public types (including callbacks and access types)
    using QKeychain__DeletePasswordJob_MetaObject_Callback = QMetaObject* (*)(const QKeychain__DeletePasswordJob*);
    using QKeychain__DeletePasswordJob_Metacast_Callback = void* (*)(QKeychain__DeletePasswordJob*, const char*);
    using QKeychain__DeletePasswordJob_Metacall_Callback = int (*)(QKeychain__DeletePasswordJob*, int, int, void**);
    using QKeychain__DeletePasswordJob_Event_Callback = bool (*)(QKeychain__DeletePasswordJob*, QEvent*);
    using QKeychain__DeletePasswordJob_EventFilter_Callback = bool (*)(QKeychain__DeletePasswordJob*, QObject*, QEvent*);
    using QKeychain__DeletePasswordJob_TimerEvent_Callback = void (*)(QKeychain__DeletePasswordJob*, QTimerEvent*);
    using QKeychain__DeletePasswordJob_ChildEvent_Callback = void (*)(QKeychain__DeletePasswordJob*, QChildEvent*);
    using QKeychain__DeletePasswordJob_CustomEvent_Callback = void (*)(QKeychain__DeletePasswordJob*, QEvent*);
    using QKeychain__DeletePasswordJob_ConnectNotify_Callback = void (*)(QKeychain__DeletePasswordJob*, QMetaMethod*);
    using QKeychain__DeletePasswordJob_DisconnectNotify_Callback = void (*)(QKeychain__DeletePasswordJob*, QMetaMethod*);
    using QKeychain::DeletePasswordJob::doStart;
    using QKeychain::DeletePasswordJob::isSignalConnected;
    using QKeychain::DeletePasswordJob::receivers;
    using QKeychain::DeletePasswordJob::sender;
    using QKeychain::DeletePasswordJob::senderSignalIndex;

    // Instance callback storage
    QKeychain__DeletePasswordJob_MetaObject_Callback qkeychain__deletepasswordjob_metaobject_callback = nullptr;
    QKeychain__DeletePasswordJob_Metacast_Callback qkeychain__deletepasswordjob_metacast_callback = nullptr;
    QKeychain__DeletePasswordJob_Metacall_Callback qkeychain__deletepasswordjob_metacall_callback = nullptr;
    QKeychain__DeletePasswordJob_Event_Callback qkeychain__deletepasswordjob_event_callback = nullptr;
    QKeychain__DeletePasswordJob_EventFilter_Callback qkeychain__deletepasswordjob_eventfilter_callback = nullptr;
    QKeychain__DeletePasswordJob_TimerEvent_Callback qkeychain__deletepasswordjob_timerevent_callback = nullptr;
    QKeychain__DeletePasswordJob_ChildEvent_Callback qkeychain__deletepasswordjob_childevent_callback = nullptr;
    QKeychain__DeletePasswordJob_CustomEvent_Callback qkeychain__deletepasswordjob_customevent_callback = nullptr;
    QKeychain__DeletePasswordJob_ConnectNotify_Callback qkeychain__deletepasswordjob_connectnotify_callback = nullptr;
    QKeychain__DeletePasswordJob_DisconnectNotify_Callback qkeychain__deletepasswordjob_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QKeychain::DeletePasswordJob {
        using QKeychain::DeletePasswordJob::childEvent;
        using QKeychain::DeletePasswordJob::connectNotify;
        using QKeychain::DeletePasswordJob::customEvent;
        using QKeychain::DeletePasswordJob::disconnectNotify;
        using QKeychain::DeletePasswordJob::timerEvent;
    };

    VirtualQKeychainDeletePasswordJob(const QString& service) : QKeychain::DeletePasswordJob(service) {};
    VirtualQKeychainDeletePasswordJob(const QString& service, QObject* parent) : QKeychain::DeletePasswordJob(service, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qkeychain__deletepasswordjob_metaobject_callback) {
            QMetaObject* callback_ret = qkeychain__deletepasswordjob_metaobject_callback(this);
            return callback_ret;
        }
        return QKeychain__DeletePasswordJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qkeychain__deletepasswordjob_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qkeychain__deletepasswordjob_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QKeychain__DeletePasswordJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qkeychain__deletepasswordjob_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qkeychain__deletepasswordjob_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QKeychain__DeletePasswordJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qkeychain__deletepasswordjob_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qkeychain__deletepasswordjob_event_callback(this, cbval1);
            return callback_ret;
        }
        return QKeychain__DeletePasswordJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qkeychain__deletepasswordjob_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qkeychain__deletepasswordjob_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QKeychain__DeletePasswordJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qkeychain__deletepasswordjob_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qkeychain__deletepasswordjob_timerevent_callback(this, cbval1);
            return;
        }
        QKeychain__DeletePasswordJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qkeychain__deletepasswordjob_childevent_callback) {
            QChildEvent* cbval1 = event;
            qkeychain__deletepasswordjob_childevent_callback(this, cbval1);
            return;
        }
        QKeychain__DeletePasswordJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qkeychain__deletepasswordjob_customevent_callback) {
            QEvent* cbval1 = event;
            qkeychain__deletepasswordjob_customevent_callback(this, cbval1);
            return;
        }
        QKeychain__DeletePasswordJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qkeychain__deletepasswordjob_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qkeychain__deletepasswordjob_connectnotify_callback(this, cbval1);
            return;
        }
        QKeychain__DeletePasswordJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qkeychain__deletepasswordjob_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qkeychain__deletepasswordjob_disconnectnotify_callback(this, cbval1);
            return;
        }
        QKeychain__DeletePasswordJob::disconnectNotify(signal);
    }

    // Friend functions
    friend void QKeychain__DeletePasswordJob_SuperTimerEvent(QKeychain::DeletePasswordJob* self, QTimerEvent* event);
    friend void QKeychain__DeletePasswordJob_SuperChildEvent(QKeychain::DeletePasswordJob* self, QChildEvent* event);
    friend void QKeychain__DeletePasswordJob_SuperCustomEvent(QKeychain::DeletePasswordJob* self, QEvent* event);
    friend void QKeychain__DeletePasswordJob_SuperConnectNotify(QKeychain::DeletePasswordJob* self, const QMetaMethod* signal);
    friend void QKeychain__DeletePasswordJob_SuperDisconnectNotify(QKeychain::DeletePasswordJob* self, const QMetaMethod* signal);
};

#endif
