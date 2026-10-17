#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQCATEGORY3DAXIS_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQCATEGORY3DAXIS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCategory3DAxis
class VirtualQCategory3DAxis final : public QCategory3DAxis {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCategory3DAxis_MetaObject_Callback = QMetaObject* (*)(const QCategory3DAxis*);
    using QCategory3DAxis_Metacast_Callback = void* (*)(QCategory3DAxis*, const char*);
    using QCategory3DAxis_Metacall_Callback = int (*)(QCategory3DAxis*, int, int, void**);
    using QCategory3DAxis_Event_Callback = bool (*)(QCategory3DAxis*, QEvent*);
    using QCategory3DAxis_EventFilter_Callback = bool (*)(QCategory3DAxis*, QObject*, QEvent*);
    using QCategory3DAxis_TimerEvent_Callback = void (*)(QCategory3DAxis*, QTimerEvent*);
    using QCategory3DAxis_ChildEvent_Callback = void (*)(QCategory3DAxis*, QChildEvent*);
    using QCategory3DAxis_CustomEvent_Callback = void (*)(QCategory3DAxis*, QEvent*);
    using QCategory3DAxis_ConnectNotify_Callback = void (*)(QCategory3DAxis*, QMetaMethod*);
    using QCategory3DAxis_DisconnectNotify_Callback = void (*)(QCategory3DAxis*, QMetaMethod*);
    using QCategory3DAxis::isSignalConnected;
    using QCategory3DAxis::receivers;
    using QCategory3DAxis::sender;
    using QCategory3DAxis::senderSignalIndex;

    // Instance callback storage
    QCategory3DAxis_MetaObject_Callback qcategory3daxis_metaobject_callback = nullptr;
    QCategory3DAxis_Metacast_Callback qcategory3daxis_metacast_callback = nullptr;
    QCategory3DAxis_Metacall_Callback qcategory3daxis_metacall_callback = nullptr;
    QCategory3DAxis_Event_Callback qcategory3daxis_event_callback = nullptr;
    QCategory3DAxis_EventFilter_Callback qcategory3daxis_eventfilter_callback = nullptr;
    QCategory3DAxis_TimerEvent_Callback qcategory3daxis_timerevent_callback = nullptr;
    QCategory3DAxis_ChildEvent_Callback qcategory3daxis_childevent_callback = nullptr;
    QCategory3DAxis_CustomEvent_Callback qcategory3daxis_customevent_callback = nullptr;
    QCategory3DAxis_ConnectNotify_Callback qcategory3daxis_connectnotify_callback = nullptr;
    QCategory3DAxis_DisconnectNotify_Callback qcategory3daxis_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCategory3DAxis {
        using QCategory3DAxis::childEvent;
        using QCategory3DAxis::connectNotify;
        using QCategory3DAxis::customEvent;
        using QCategory3DAxis::disconnectNotify;
        using QCategory3DAxis::timerEvent;
    };

    VirtualQCategory3DAxis() : QCategory3DAxis() {};
    VirtualQCategory3DAxis(QObject* parent) : QCategory3DAxis(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcategory3daxis_metaobject_callback) {
            QMetaObject* callback_ret = qcategory3daxis_metaobject_callback(this);
            return callback_ret;
        }
        return QCategory3DAxis::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcategory3daxis_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcategory3daxis_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCategory3DAxis::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcategory3daxis_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcategory3daxis_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCategory3DAxis::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcategory3daxis_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcategory3daxis_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCategory3DAxis::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcategory3daxis_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcategory3daxis_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCategory3DAxis::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcategory3daxis_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcategory3daxis_timerevent_callback(this, cbval1);
            return;
        }
        QCategory3DAxis::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcategory3daxis_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcategory3daxis_childevent_callback(this, cbval1);
            return;
        }
        QCategory3DAxis::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcategory3daxis_customevent_callback) {
            QEvent* cbval1 = event;
            qcategory3daxis_customevent_callback(this, cbval1);
            return;
        }
        QCategory3DAxis::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcategory3daxis_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcategory3daxis_connectnotify_callback(this, cbval1);
            return;
        }
        QCategory3DAxis::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcategory3daxis_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcategory3daxis_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCategory3DAxis::disconnectNotify(signal);
    }

    // Friend functions
    friend void QCategory3DAxis_SuperTimerEvent(QCategory3DAxis* self, QTimerEvent* event);
    friend void QCategory3DAxis_SuperChildEvent(QCategory3DAxis* self, QChildEvent* event);
    friend void QCategory3DAxis_SuperCustomEvent(QCategory3DAxis* self, QEvent* event);
    friend void QCategory3DAxis_SuperConnectNotify(QCategory3DAxis* self, const QMetaMethod* signal);
    friend void QCategory3DAxis_SuperDisconnectNotify(QCategory3DAxis* self, const QMetaMethod* signal);
};

#endif
