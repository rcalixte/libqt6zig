#pragma once
#ifndef LIBQDATAWIDGETMAPPER_HXX
#define LIBQDATAWIDGETMAPPER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDataWidgetMapper
class VirtualQDataWidgetMapper final : public QDataWidgetMapper {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDataWidgetMapper_MetaObject_Callback = QMetaObject* (*)(const QDataWidgetMapper*);
    using QDataWidgetMapper_Metacast_Callback = void* (*)(QDataWidgetMapper*, const char*);
    using QDataWidgetMapper_Metacall_Callback = int (*)(QDataWidgetMapper*, int, int, void**);
    using QDataWidgetMapper_SetCurrentIndex_Callback = void (*)(QDataWidgetMapper*, int);
    using QDataWidgetMapper_Event_Callback = bool (*)(QDataWidgetMapper*, QEvent*);
    using QDataWidgetMapper_EventFilter_Callback = bool (*)(QDataWidgetMapper*, QObject*, QEvent*);
    using QDataWidgetMapper_TimerEvent_Callback = void (*)(QDataWidgetMapper*, QTimerEvent*);
    using QDataWidgetMapper_ChildEvent_Callback = void (*)(QDataWidgetMapper*, QChildEvent*);
    using QDataWidgetMapper_CustomEvent_Callback = void (*)(QDataWidgetMapper*, QEvent*);
    using QDataWidgetMapper_ConnectNotify_Callback = void (*)(QDataWidgetMapper*, QMetaMethod*);
    using QDataWidgetMapper_DisconnectNotify_Callback = void (*)(QDataWidgetMapper*, QMetaMethod*);
    using QDataWidgetMapper::isSignalConnected;
    using QDataWidgetMapper::receivers;
    using QDataWidgetMapper::sender;
    using QDataWidgetMapper::senderSignalIndex;

    // Instance callback storage
    QDataWidgetMapper_MetaObject_Callback qdatawidgetmapper_metaobject_callback = nullptr;
    QDataWidgetMapper_Metacast_Callback qdatawidgetmapper_metacast_callback = nullptr;
    QDataWidgetMapper_Metacall_Callback qdatawidgetmapper_metacall_callback = nullptr;
    QDataWidgetMapper_SetCurrentIndex_Callback qdatawidgetmapper_setcurrentindex_callback = nullptr;
    QDataWidgetMapper_Event_Callback qdatawidgetmapper_event_callback = nullptr;
    QDataWidgetMapper_EventFilter_Callback qdatawidgetmapper_eventfilter_callback = nullptr;
    QDataWidgetMapper_TimerEvent_Callback qdatawidgetmapper_timerevent_callback = nullptr;
    QDataWidgetMapper_ChildEvent_Callback qdatawidgetmapper_childevent_callback = nullptr;
    QDataWidgetMapper_CustomEvent_Callback qdatawidgetmapper_customevent_callback = nullptr;
    QDataWidgetMapper_ConnectNotify_Callback qdatawidgetmapper_connectnotify_callback = nullptr;
    QDataWidgetMapper_DisconnectNotify_Callback qdatawidgetmapper_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDataWidgetMapper {
        using QDataWidgetMapper::childEvent;
        using QDataWidgetMapper::connectNotify;
        using QDataWidgetMapper::customEvent;
        using QDataWidgetMapper::disconnectNotify;
        using QDataWidgetMapper::timerEvent;
    };

    VirtualQDataWidgetMapper() : QDataWidgetMapper() {};
    VirtualQDataWidgetMapper(QObject* parent) : QDataWidgetMapper(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdatawidgetmapper_metaobject_callback) {
            QMetaObject* callback_ret = qdatawidgetmapper_metaobject_callback(this);
            return callback_ret;
        }
        return QDataWidgetMapper::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdatawidgetmapper_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdatawidgetmapper_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDataWidgetMapper::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdatawidgetmapper_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdatawidgetmapper_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDataWidgetMapper::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentIndex(int index) override {
        if (qdatawidgetmapper_setcurrentindex_callback) {
            int cbval1 = index;
            qdatawidgetmapper_setcurrentindex_callback(this, cbval1);
            return;
        }
        QDataWidgetMapper::setCurrentIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdatawidgetmapper_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdatawidgetmapper_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDataWidgetMapper::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdatawidgetmapper_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdatawidgetmapper_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDataWidgetMapper::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdatawidgetmapper_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdatawidgetmapper_timerevent_callback(this, cbval1);
            return;
        }
        QDataWidgetMapper::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdatawidgetmapper_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdatawidgetmapper_childevent_callback(this, cbval1);
            return;
        }
        QDataWidgetMapper::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdatawidgetmapper_customevent_callback) {
            QEvent* cbval1 = event;
            qdatawidgetmapper_customevent_callback(this, cbval1);
            return;
        }
        QDataWidgetMapper::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdatawidgetmapper_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdatawidgetmapper_connectnotify_callback(this, cbval1);
            return;
        }
        QDataWidgetMapper::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdatawidgetmapper_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdatawidgetmapper_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDataWidgetMapper::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDataWidgetMapper_SuperTimerEvent(QDataWidgetMapper* self, QTimerEvent* event);
    friend void QDataWidgetMapper_SuperChildEvent(QDataWidgetMapper* self, QChildEvent* event);
    friend void QDataWidgetMapper_SuperCustomEvent(QDataWidgetMapper* self, QEvent* event);
    friend void QDataWidgetMapper_SuperConnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal);
    friend void QDataWidgetMapper_SuperDisconnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal);
};

#endif
