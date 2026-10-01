#pragma once
#ifndef LIBQGESTURE_HXX
#define LIBQGESTURE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGesture
class VirtualQGesture final : public QGesture {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGesture_MetaObject_Callback = QMetaObject* (*)(const QGesture*);
    using QGesture_Metacast_Callback = void* (*)(QGesture*, const char*);
    using QGesture_Metacall_Callback = int (*)(QGesture*, int, int, void**);
    using QGesture_Event_Callback = bool (*)(QGesture*, QEvent*);
    using QGesture_EventFilter_Callback = bool (*)(QGesture*, QObject*, QEvent*);
    using QGesture_TimerEvent_Callback = void (*)(QGesture*, QTimerEvent*);
    using QGesture_ChildEvent_Callback = void (*)(QGesture*, QChildEvent*);
    using QGesture_CustomEvent_Callback = void (*)(QGesture*, QEvent*);
    using QGesture_ConnectNotify_Callback = void (*)(QGesture*, QMetaMethod*);
    using QGesture_DisconnectNotify_Callback = void (*)(QGesture*, QMetaMethod*);
    using QGesture::isSignalConnected;
    using QGesture::receivers;
    using QGesture::sender;
    using QGesture::senderSignalIndex;

    // Instance callback storage
    QGesture_MetaObject_Callback qgesture_metaobject_callback = nullptr;
    QGesture_Metacast_Callback qgesture_metacast_callback = nullptr;
    QGesture_Metacall_Callback qgesture_metacall_callback = nullptr;
    QGesture_Event_Callback qgesture_event_callback = nullptr;
    QGesture_EventFilter_Callback qgesture_eventfilter_callback = nullptr;
    QGesture_TimerEvent_Callback qgesture_timerevent_callback = nullptr;
    QGesture_ChildEvent_Callback qgesture_childevent_callback = nullptr;
    QGesture_CustomEvent_Callback qgesture_customevent_callback = nullptr;
    QGesture_ConnectNotify_Callback qgesture_connectnotify_callback = nullptr;
    QGesture_DisconnectNotify_Callback qgesture_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGesture {
        using QGesture::childEvent;
        using QGesture::connectNotify;
        using QGesture::customEvent;
        using QGesture::disconnectNotify;
        using QGesture::timerEvent;
    };

    VirtualQGesture() : QGesture() {};
    VirtualQGesture(QObject* parent) : QGesture(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgesture_metaobject_callback) {
            QMetaObject* callback_ret = qgesture_metaobject_callback(this);
            return callback_ret;
        }
        return QGesture::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgesture_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgesture_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGesture::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgesture_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgesture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGesture::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgesture_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgesture_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGesture::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgesture_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgesture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGesture::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgesture_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgesture_timerevent_callback(this, cbval1);
            return;
        }
        QGesture::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgesture_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgesture_childevent_callback(this, cbval1);
            return;
        }
        QGesture::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgesture_customevent_callback) {
            QEvent* cbval1 = event;
            qgesture_customevent_callback(this, cbval1);
            return;
        }
        QGesture::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgesture_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgesture_connectnotify_callback(this, cbval1);
            return;
        }
        QGesture::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgesture_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgesture_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGesture::disconnectNotify(signal);
    }

    // Friend functions
    friend void QGesture_SuperTimerEvent(QGesture* self, QTimerEvent* event);
    friend void QGesture_SuperChildEvent(QGesture* self, QChildEvent* event);
    friend void QGesture_SuperCustomEvent(QGesture* self, QEvent* event);
    friend void QGesture_SuperConnectNotify(QGesture* self, const QMetaMethod* signal);
    friend void QGesture_SuperDisconnectNotify(QGesture* self, const QMetaMethod* signal);
};

// This class is a subclass of QPanGesture
class VirtualQPanGesture final : public QPanGesture {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPanGesture_MetaObject_Callback = QMetaObject* (*)(const QPanGesture*);
    using QPanGesture_Metacast_Callback = void* (*)(QPanGesture*, const char*);
    using QPanGesture_Metacall_Callback = int (*)(QPanGesture*, int, int, void**);
    using QPanGesture_Event_Callback = bool (*)(QPanGesture*, QEvent*);
    using QPanGesture_EventFilter_Callback = bool (*)(QPanGesture*, QObject*, QEvent*);
    using QPanGesture_TimerEvent_Callback = void (*)(QPanGesture*, QTimerEvent*);
    using QPanGesture_ChildEvent_Callback = void (*)(QPanGesture*, QChildEvent*);
    using QPanGesture_CustomEvent_Callback = void (*)(QPanGesture*, QEvent*);
    using QPanGesture_ConnectNotify_Callback = void (*)(QPanGesture*, QMetaMethod*);
    using QPanGesture_DisconnectNotify_Callback = void (*)(QPanGesture*, QMetaMethod*);
    using QPanGesture::isSignalConnected;
    using QPanGesture::receivers;
    using QPanGesture::sender;
    using QPanGesture::senderSignalIndex;

    // Instance callback storage
    QPanGesture_MetaObject_Callback qpangesture_metaobject_callback = nullptr;
    QPanGesture_Metacast_Callback qpangesture_metacast_callback = nullptr;
    QPanGesture_Metacall_Callback qpangesture_metacall_callback = nullptr;
    QPanGesture_Event_Callback qpangesture_event_callback = nullptr;
    QPanGesture_EventFilter_Callback qpangesture_eventfilter_callback = nullptr;
    QPanGesture_TimerEvent_Callback qpangesture_timerevent_callback = nullptr;
    QPanGesture_ChildEvent_Callback qpangesture_childevent_callback = nullptr;
    QPanGesture_CustomEvent_Callback qpangesture_customevent_callback = nullptr;
    QPanGesture_ConnectNotify_Callback qpangesture_connectnotify_callback = nullptr;
    QPanGesture_DisconnectNotify_Callback qpangesture_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPanGesture {
        using QPanGesture::childEvent;
        using QPanGesture::connectNotify;
        using QPanGesture::customEvent;
        using QPanGesture::disconnectNotify;
        using QPanGesture::timerEvent;
    };

    VirtualQPanGesture() : QPanGesture() {};
    VirtualQPanGesture(QObject* parent) : QPanGesture(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpangesture_metaobject_callback) {
            QMetaObject* callback_ret = qpangesture_metaobject_callback(this);
            return callback_ret;
        }
        return QPanGesture::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpangesture_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpangesture_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPanGesture::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpangesture_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpangesture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPanGesture::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpangesture_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpangesture_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPanGesture::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpangesture_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpangesture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPanGesture::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpangesture_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpangesture_timerevent_callback(this, cbval1);
            return;
        }
        QPanGesture::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpangesture_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpangesture_childevent_callback(this, cbval1);
            return;
        }
        QPanGesture::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpangesture_customevent_callback) {
            QEvent* cbval1 = event;
            qpangesture_customevent_callback(this, cbval1);
            return;
        }
        QPanGesture::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpangesture_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpangesture_connectnotify_callback(this, cbval1);
            return;
        }
        QPanGesture::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpangesture_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpangesture_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPanGesture::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPanGesture_SuperTimerEvent(QPanGesture* self, QTimerEvent* event);
    friend void QPanGesture_SuperChildEvent(QPanGesture* self, QChildEvent* event);
    friend void QPanGesture_SuperCustomEvent(QPanGesture* self, QEvent* event);
    friend void QPanGesture_SuperConnectNotify(QPanGesture* self, const QMetaMethod* signal);
    friend void QPanGesture_SuperDisconnectNotify(QPanGesture* self, const QMetaMethod* signal);
};

// This class is a subclass of QPinchGesture
class VirtualQPinchGesture final : public QPinchGesture {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPinchGesture_MetaObject_Callback = QMetaObject* (*)(const QPinchGesture*);
    using QPinchGesture_Metacast_Callback = void* (*)(QPinchGesture*, const char*);
    using QPinchGesture_Metacall_Callback = int (*)(QPinchGesture*, int, int, void**);
    using QPinchGesture_Event_Callback = bool (*)(QPinchGesture*, QEvent*);
    using QPinchGesture_EventFilter_Callback = bool (*)(QPinchGesture*, QObject*, QEvent*);
    using QPinchGesture_TimerEvent_Callback = void (*)(QPinchGesture*, QTimerEvent*);
    using QPinchGesture_ChildEvent_Callback = void (*)(QPinchGesture*, QChildEvent*);
    using QPinchGesture_CustomEvent_Callback = void (*)(QPinchGesture*, QEvent*);
    using QPinchGesture_ConnectNotify_Callback = void (*)(QPinchGesture*, QMetaMethod*);
    using QPinchGesture_DisconnectNotify_Callback = void (*)(QPinchGesture*, QMetaMethod*);
    using QPinchGesture::isSignalConnected;
    using QPinchGesture::receivers;
    using QPinchGesture::sender;
    using QPinchGesture::senderSignalIndex;

    // Instance callback storage
    QPinchGesture_MetaObject_Callback qpinchgesture_metaobject_callback = nullptr;
    QPinchGesture_Metacast_Callback qpinchgesture_metacast_callback = nullptr;
    QPinchGesture_Metacall_Callback qpinchgesture_metacall_callback = nullptr;
    QPinchGesture_Event_Callback qpinchgesture_event_callback = nullptr;
    QPinchGesture_EventFilter_Callback qpinchgesture_eventfilter_callback = nullptr;
    QPinchGesture_TimerEvent_Callback qpinchgesture_timerevent_callback = nullptr;
    QPinchGesture_ChildEvent_Callback qpinchgesture_childevent_callback = nullptr;
    QPinchGesture_CustomEvent_Callback qpinchgesture_customevent_callback = nullptr;
    QPinchGesture_ConnectNotify_Callback qpinchgesture_connectnotify_callback = nullptr;
    QPinchGesture_DisconnectNotify_Callback qpinchgesture_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPinchGesture {
        using QPinchGesture::childEvent;
        using QPinchGesture::connectNotify;
        using QPinchGesture::customEvent;
        using QPinchGesture::disconnectNotify;
        using QPinchGesture::timerEvent;
    };

    VirtualQPinchGesture() : QPinchGesture() {};
    VirtualQPinchGesture(QObject* parent) : QPinchGesture(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpinchgesture_metaobject_callback) {
            QMetaObject* callback_ret = qpinchgesture_metaobject_callback(this);
            return callback_ret;
        }
        return QPinchGesture::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpinchgesture_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpinchgesture_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPinchGesture::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpinchgesture_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpinchgesture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPinchGesture::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpinchgesture_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpinchgesture_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPinchGesture::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpinchgesture_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpinchgesture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPinchGesture::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpinchgesture_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpinchgesture_timerevent_callback(this, cbval1);
            return;
        }
        QPinchGesture::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpinchgesture_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpinchgesture_childevent_callback(this, cbval1);
            return;
        }
        QPinchGesture::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpinchgesture_customevent_callback) {
            QEvent* cbval1 = event;
            qpinchgesture_customevent_callback(this, cbval1);
            return;
        }
        QPinchGesture::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpinchgesture_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpinchgesture_connectnotify_callback(this, cbval1);
            return;
        }
        QPinchGesture::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpinchgesture_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpinchgesture_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPinchGesture::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPinchGesture_SuperTimerEvent(QPinchGesture* self, QTimerEvent* event);
    friend void QPinchGesture_SuperChildEvent(QPinchGesture* self, QChildEvent* event);
    friend void QPinchGesture_SuperCustomEvent(QPinchGesture* self, QEvent* event);
    friend void QPinchGesture_SuperConnectNotify(QPinchGesture* self, const QMetaMethod* signal);
    friend void QPinchGesture_SuperDisconnectNotify(QPinchGesture* self, const QMetaMethod* signal);
};

// This class is a subclass of QSwipeGesture
class VirtualQSwipeGesture final : public QSwipeGesture {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSwipeGesture_MetaObject_Callback = QMetaObject* (*)(const QSwipeGesture*);
    using QSwipeGesture_Metacast_Callback = void* (*)(QSwipeGesture*, const char*);
    using QSwipeGesture_Metacall_Callback = int (*)(QSwipeGesture*, int, int, void**);
    using QSwipeGesture_Event_Callback = bool (*)(QSwipeGesture*, QEvent*);
    using QSwipeGesture_EventFilter_Callback = bool (*)(QSwipeGesture*, QObject*, QEvent*);
    using QSwipeGesture_TimerEvent_Callback = void (*)(QSwipeGesture*, QTimerEvent*);
    using QSwipeGesture_ChildEvent_Callback = void (*)(QSwipeGesture*, QChildEvent*);
    using QSwipeGesture_CustomEvent_Callback = void (*)(QSwipeGesture*, QEvent*);
    using QSwipeGesture_ConnectNotify_Callback = void (*)(QSwipeGesture*, QMetaMethod*);
    using QSwipeGesture_DisconnectNotify_Callback = void (*)(QSwipeGesture*, QMetaMethod*);
    using QSwipeGesture::isSignalConnected;
    using QSwipeGesture::receivers;
    using QSwipeGesture::sender;
    using QSwipeGesture::senderSignalIndex;

    // Instance callback storage
    QSwipeGesture_MetaObject_Callback qswipegesture_metaobject_callback = nullptr;
    QSwipeGesture_Metacast_Callback qswipegesture_metacast_callback = nullptr;
    QSwipeGesture_Metacall_Callback qswipegesture_metacall_callback = nullptr;
    QSwipeGesture_Event_Callback qswipegesture_event_callback = nullptr;
    QSwipeGesture_EventFilter_Callback qswipegesture_eventfilter_callback = nullptr;
    QSwipeGesture_TimerEvent_Callback qswipegesture_timerevent_callback = nullptr;
    QSwipeGesture_ChildEvent_Callback qswipegesture_childevent_callback = nullptr;
    QSwipeGesture_CustomEvent_Callback qswipegesture_customevent_callback = nullptr;
    QSwipeGesture_ConnectNotify_Callback qswipegesture_connectnotify_callback = nullptr;
    QSwipeGesture_DisconnectNotify_Callback qswipegesture_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSwipeGesture {
        using QSwipeGesture::childEvent;
        using QSwipeGesture::connectNotify;
        using QSwipeGesture::customEvent;
        using QSwipeGesture::disconnectNotify;
        using QSwipeGesture::timerEvent;
    };

    VirtualQSwipeGesture() : QSwipeGesture() {};
    VirtualQSwipeGesture(QObject* parent) : QSwipeGesture(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qswipegesture_metaobject_callback) {
            QMetaObject* callback_ret = qswipegesture_metaobject_callback(this);
            return callback_ret;
        }
        return QSwipeGesture::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qswipegesture_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qswipegesture_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSwipeGesture::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qswipegesture_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qswipegesture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSwipeGesture::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qswipegesture_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qswipegesture_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSwipeGesture::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qswipegesture_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qswipegesture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSwipeGesture::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qswipegesture_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qswipegesture_timerevent_callback(this, cbval1);
            return;
        }
        QSwipeGesture::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qswipegesture_childevent_callback) {
            QChildEvent* cbval1 = event;
            qswipegesture_childevent_callback(this, cbval1);
            return;
        }
        QSwipeGesture::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qswipegesture_customevent_callback) {
            QEvent* cbval1 = event;
            qswipegesture_customevent_callback(this, cbval1);
            return;
        }
        QSwipeGesture::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qswipegesture_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qswipegesture_connectnotify_callback(this, cbval1);
            return;
        }
        QSwipeGesture::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qswipegesture_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qswipegesture_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSwipeGesture::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSwipeGesture_SuperTimerEvent(QSwipeGesture* self, QTimerEvent* event);
    friend void QSwipeGesture_SuperChildEvent(QSwipeGesture* self, QChildEvent* event);
    friend void QSwipeGesture_SuperCustomEvent(QSwipeGesture* self, QEvent* event);
    friend void QSwipeGesture_SuperConnectNotify(QSwipeGesture* self, const QMetaMethod* signal);
    friend void QSwipeGesture_SuperDisconnectNotify(QSwipeGesture* self, const QMetaMethod* signal);
};

// This class is a subclass of QTapGesture
class VirtualQTapGesture final : public QTapGesture {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTapGesture_MetaObject_Callback = QMetaObject* (*)(const QTapGesture*);
    using QTapGesture_Metacast_Callback = void* (*)(QTapGesture*, const char*);
    using QTapGesture_Metacall_Callback = int (*)(QTapGesture*, int, int, void**);
    using QTapGesture_Event_Callback = bool (*)(QTapGesture*, QEvent*);
    using QTapGesture_EventFilter_Callback = bool (*)(QTapGesture*, QObject*, QEvent*);
    using QTapGesture_TimerEvent_Callback = void (*)(QTapGesture*, QTimerEvent*);
    using QTapGesture_ChildEvent_Callback = void (*)(QTapGesture*, QChildEvent*);
    using QTapGesture_CustomEvent_Callback = void (*)(QTapGesture*, QEvent*);
    using QTapGesture_ConnectNotify_Callback = void (*)(QTapGesture*, QMetaMethod*);
    using QTapGesture_DisconnectNotify_Callback = void (*)(QTapGesture*, QMetaMethod*);
    using QTapGesture::isSignalConnected;
    using QTapGesture::receivers;
    using QTapGesture::sender;
    using QTapGesture::senderSignalIndex;

    // Instance callback storage
    QTapGesture_MetaObject_Callback qtapgesture_metaobject_callback = nullptr;
    QTapGesture_Metacast_Callback qtapgesture_metacast_callback = nullptr;
    QTapGesture_Metacall_Callback qtapgesture_metacall_callback = nullptr;
    QTapGesture_Event_Callback qtapgesture_event_callback = nullptr;
    QTapGesture_EventFilter_Callback qtapgesture_eventfilter_callback = nullptr;
    QTapGesture_TimerEvent_Callback qtapgesture_timerevent_callback = nullptr;
    QTapGesture_ChildEvent_Callback qtapgesture_childevent_callback = nullptr;
    QTapGesture_CustomEvent_Callback qtapgesture_customevent_callback = nullptr;
    QTapGesture_ConnectNotify_Callback qtapgesture_connectnotify_callback = nullptr;
    QTapGesture_DisconnectNotify_Callback qtapgesture_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTapGesture {
        using QTapGesture::childEvent;
        using QTapGesture::connectNotify;
        using QTapGesture::customEvent;
        using QTapGesture::disconnectNotify;
        using QTapGesture::timerEvent;
    };

    VirtualQTapGesture() : QTapGesture() {};
    VirtualQTapGesture(QObject* parent) : QTapGesture(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtapgesture_metaobject_callback) {
            QMetaObject* callback_ret = qtapgesture_metaobject_callback(this);
            return callback_ret;
        }
        return QTapGesture::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtapgesture_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtapgesture_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTapGesture::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtapgesture_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtapgesture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTapGesture::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtapgesture_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtapgesture_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTapGesture::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtapgesture_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtapgesture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTapGesture::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtapgesture_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtapgesture_timerevent_callback(this, cbval1);
            return;
        }
        QTapGesture::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtapgesture_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtapgesture_childevent_callback(this, cbval1);
            return;
        }
        QTapGesture::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtapgesture_customevent_callback) {
            QEvent* cbval1 = event;
            qtapgesture_customevent_callback(this, cbval1);
            return;
        }
        QTapGesture::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtapgesture_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtapgesture_connectnotify_callback(this, cbval1);
            return;
        }
        QTapGesture::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtapgesture_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtapgesture_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTapGesture::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTapGesture_SuperTimerEvent(QTapGesture* self, QTimerEvent* event);
    friend void QTapGesture_SuperChildEvent(QTapGesture* self, QChildEvent* event);
    friend void QTapGesture_SuperCustomEvent(QTapGesture* self, QEvent* event);
    friend void QTapGesture_SuperConnectNotify(QTapGesture* self, const QMetaMethod* signal);
    friend void QTapGesture_SuperDisconnectNotify(QTapGesture* self, const QMetaMethod* signal);
};

// This class is a subclass of QTapAndHoldGesture
class VirtualQTapAndHoldGesture final : public QTapAndHoldGesture {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTapAndHoldGesture_MetaObject_Callback = QMetaObject* (*)(const QTapAndHoldGesture*);
    using QTapAndHoldGesture_Metacast_Callback = void* (*)(QTapAndHoldGesture*, const char*);
    using QTapAndHoldGesture_Metacall_Callback = int (*)(QTapAndHoldGesture*, int, int, void**);
    using QTapAndHoldGesture_Event_Callback = bool (*)(QTapAndHoldGesture*, QEvent*);
    using QTapAndHoldGesture_EventFilter_Callback = bool (*)(QTapAndHoldGesture*, QObject*, QEvent*);
    using QTapAndHoldGesture_TimerEvent_Callback = void (*)(QTapAndHoldGesture*, QTimerEvent*);
    using QTapAndHoldGesture_ChildEvent_Callback = void (*)(QTapAndHoldGesture*, QChildEvent*);
    using QTapAndHoldGesture_CustomEvent_Callback = void (*)(QTapAndHoldGesture*, QEvent*);
    using QTapAndHoldGesture_ConnectNotify_Callback = void (*)(QTapAndHoldGesture*, QMetaMethod*);
    using QTapAndHoldGesture_DisconnectNotify_Callback = void (*)(QTapAndHoldGesture*, QMetaMethod*);
    using QTapAndHoldGesture::isSignalConnected;
    using QTapAndHoldGesture::receivers;
    using QTapAndHoldGesture::sender;
    using QTapAndHoldGesture::senderSignalIndex;

    // Instance callback storage
    QTapAndHoldGesture_MetaObject_Callback qtapandholdgesture_metaobject_callback = nullptr;
    QTapAndHoldGesture_Metacast_Callback qtapandholdgesture_metacast_callback = nullptr;
    QTapAndHoldGesture_Metacall_Callback qtapandholdgesture_metacall_callback = nullptr;
    QTapAndHoldGesture_Event_Callback qtapandholdgesture_event_callback = nullptr;
    QTapAndHoldGesture_EventFilter_Callback qtapandholdgesture_eventfilter_callback = nullptr;
    QTapAndHoldGesture_TimerEvent_Callback qtapandholdgesture_timerevent_callback = nullptr;
    QTapAndHoldGesture_ChildEvent_Callback qtapandholdgesture_childevent_callback = nullptr;
    QTapAndHoldGesture_CustomEvent_Callback qtapandholdgesture_customevent_callback = nullptr;
    QTapAndHoldGesture_ConnectNotify_Callback qtapandholdgesture_connectnotify_callback = nullptr;
    QTapAndHoldGesture_DisconnectNotify_Callback qtapandholdgesture_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTapAndHoldGesture {
        using QTapAndHoldGesture::childEvent;
        using QTapAndHoldGesture::connectNotify;
        using QTapAndHoldGesture::customEvent;
        using QTapAndHoldGesture::disconnectNotify;
        using QTapAndHoldGesture::timerEvent;
    };

    VirtualQTapAndHoldGesture() : QTapAndHoldGesture() {};
    VirtualQTapAndHoldGesture(QObject* parent) : QTapAndHoldGesture(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtapandholdgesture_metaobject_callback) {
            QMetaObject* callback_ret = qtapandholdgesture_metaobject_callback(this);
            return callback_ret;
        }
        return QTapAndHoldGesture::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtapandholdgesture_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtapandholdgesture_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTapAndHoldGesture::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtapandholdgesture_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtapandholdgesture_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTapAndHoldGesture::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtapandholdgesture_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtapandholdgesture_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTapAndHoldGesture::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtapandholdgesture_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtapandholdgesture_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTapAndHoldGesture::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtapandholdgesture_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtapandholdgesture_timerevent_callback(this, cbval1);
            return;
        }
        QTapAndHoldGesture::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtapandholdgesture_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtapandholdgesture_childevent_callback(this, cbval1);
            return;
        }
        QTapAndHoldGesture::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtapandholdgesture_customevent_callback) {
            QEvent* cbval1 = event;
            qtapandholdgesture_customevent_callback(this, cbval1);
            return;
        }
        QTapAndHoldGesture::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtapandholdgesture_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtapandholdgesture_connectnotify_callback(this, cbval1);
            return;
        }
        QTapAndHoldGesture::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtapandholdgesture_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtapandholdgesture_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTapAndHoldGesture::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTapAndHoldGesture_SuperTimerEvent(QTapAndHoldGesture* self, QTimerEvent* event);
    friend void QTapAndHoldGesture_SuperChildEvent(QTapAndHoldGesture* self, QChildEvent* event);
    friend void QTapAndHoldGesture_SuperCustomEvent(QTapAndHoldGesture* self, QEvent* event);
    friend void QTapAndHoldGesture_SuperConnectNotify(QTapAndHoldGesture* self, const QMetaMethod* signal);
    friend void QTapAndHoldGesture_SuperDisconnectNotify(QTapAndHoldGesture* self, const QMetaMethod* signal);
};

// This class is a subclass of QGestureEvent
class VirtualQGestureEvent final : public QGestureEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGestureEvent_SetAccepted_Callback = void (*)(QGestureEvent*, bool);
    using QGestureEvent_Clone_Callback = QEvent* (*)(const QGestureEvent*);

    // Instance callback storage
    QGestureEvent_SetAccepted_Callback qgestureevent_setaccepted_callback = nullptr;
    QGestureEvent_Clone_Callback qgestureevent_clone_callback = nullptr;

    VirtualQGestureEvent(const QList<QGesture*>& gestures) : QGestureEvent(gestures) {};
    VirtualQGestureEvent(const QGestureEvent& param1) : QGestureEvent(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgestureevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qgestureevent_setaccepted_callback(this, cbval1);
            return;
        }
        QGestureEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgestureevent_clone_callback) {
            QEvent* callback_ret = qgestureevent_clone_callback(this);
            return callback_ret;
        }
        return QGestureEvent::clone();
    }
};

#endif
