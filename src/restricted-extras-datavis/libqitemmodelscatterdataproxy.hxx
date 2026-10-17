#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELSCATTERDATAPROXY_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELSCATTERDATAPROXY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QItemModelScatterDataProxy
class VirtualQItemModelScatterDataProxy final : public QItemModelScatterDataProxy {
  public:
    // Virtual class public types (including callbacks and access types)
    using QItemModelScatterDataProxy_MetaObject_Callback = QMetaObject* (*)(const QItemModelScatterDataProxy*);
    using QItemModelScatterDataProxy_Metacast_Callback = void* (*)(QItemModelScatterDataProxy*, const char*);
    using QItemModelScatterDataProxy_Metacall_Callback = int (*)(QItemModelScatterDataProxy*, int, int, void**);
    using QItemModelScatterDataProxy_Event_Callback = bool (*)(QItemModelScatterDataProxy*, QEvent*);
    using QItemModelScatterDataProxy_EventFilter_Callback = bool (*)(QItemModelScatterDataProxy*, QObject*, QEvent*);
    using QItemModelScatterDataProxy_TimerEvent_Callback = void (*)(QItemModelScatterDataProxy*, QTimerEvent*);
    using QItemModelScatterDataProxy_ChildEvent_Callback = void (*)(QItemModelScatterDataProxy*, QChildEvent*);
    using QItemModelScatterDataProxy_CustomEvent_Callback = void (*)(QItemModelScatterDataProxy*, QEvent*);
    using QItemModelScatterDataProxy_ConnectNotify_Callback = void (*)(QItemModelScatterDataProxy*, QMetaMethod*);
    using QItemModelScatterDataProxy_DisconnectNotify_Callback = void (*)(QItemModelScatterDataProxy*, QMetaMethod*);
    using QItemModelScatterDataProxy::isSignalConnected;
    using QItemModelScatterDataProxy::receivers;
    using QItemModelScatterDataProxy::sender;
    using QItemModelScatterDataProxy::senderSignalIndex;

    // Instance callback storage
    QItemModelScatterDataProxy_MetaObject_Callback qitemmodelscatterdataproxy_metaobject_callback = nullptr;
    QItemModelScatterDataProxy_Metacast_Callback qitemmodelscatterdataproxy_metacast_callback = nullptr;
    QItemModelScatterDataProxy_Metacall_Callback qitemmodelscatterdataproxy_metacall_callback = nullptr;
    QItemModelScatterDataProxy_Event_Callback qitemmodelscatterdataproxy_event_callback = nullptr;
    QItemModelScatterDataProxy_EventFilter_Callback qitemmodelscatterdataproxy_eventfilter_callback = nullptr;
    QItemModelScatterDataProxy_TimerEvent_Callback qitemmodelscatterdataproxy_timerevent_callback = nullptr;
    QItemModelScatterDataProxy_ChildEvent_Callback qitemmodelscatterdataproxy_childevent_callback = nullptr;
    QItemModelScatterDataProxy_CustomEvent_Callback qitemmodelscatterdataproxy_customevent_callback = nullptr;
    QItemModelScatterDataProxy_ConnectNotify_Callback qitemmodelscatterdataproxy_connectnotify_callback = nullptr;
    QItemModelScatterDataProxy_DisconnectNotify_Callback qitemmodelscatterdataproxy_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QItemModelScatterDataProxy {
        using QItemModelScatterDataProxy::childEvent;
        using QItemModelScatterDataProxy::connectNotify;
        using QItemModelScatterDataProxy::customEvent;
        using QItemModelScatterDataProxy::disconnectNotify;
        using QItemModelScatterDataProxy::timerEvent;
    };

    VirtualQItemModelScatterDataProxy() : QItemModelScatterDataProxy() {};
    VirtualQItemModelScatterDataProxy(QAbstractItemModel* itemModel) : QItemModelScatterDataProxy(itemModel) {};
    VirtualQItemModelScatterDataProxy(QAbstractItemModel* itemModel, const QString& xPosRole, const QString& yPosRole, const QString& zPosRole) : QItemModelScatterDataProxy(itemModel, xPosRole, yPosRole, zPosRole) {};
    VirtualQItemModelScatterDataProxy(QAbstractItemModel* itemModel, const QString& xPosRole, const QString& yPosRole, const QString& zPosRole, const QString& rotationRole) : QItemModelScatterDataProxy(itemModel, xPosRole, yPosRole, zPosRole, rotationRole) {};
    VirtualQItemModelScatterDataProxy(QObject* parent) : QItemModelScatterDataProxy(parent) {};
    VirtualQItemModelScatterDataProxy(QAbstractItemModel* itemModel, QObject* parent) : QItemModelScatterDataProxy(itemModel, parent) {};
    VirtualQItemModelScatterDataProxy(QAbstractItemModel* itemModel, const QString& xPosRole, const QString& yPosRole, const QString& zPosRole, QObject* parent) : QItemModelScatterDataProxy(itemModel, xPosRole, yPosRole, zPosRole, parent) {};
    VirtualQItemModelScatterDataProxy(QAbstractItemModel* itemModel, const QString& xPosRole, const QString& yPosRole, const QString& zPosRole, const QString& rotationRole, QObject* parent) : QItemModelScatterDataProxy(itemModel, xPosRole, yPosRole, zPosRole, rotationRole, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qitemmodelscatterdataproxy_metaobject_callback) {
            QMetaObject* callback_ret = qitemmodelscatterdataproxy_metaobject_callback(this);
            return callback_ret;
        }
        return QItemModelScatterDataProxy::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qitemmodelscatterdataproxy_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qitemmodelscatterdataproxy_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QItemModelScatterDataProxy::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qitemmodelscatterdataproxy_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qitemmodelscatterdataproxy_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QItemModelScatterDataProxy::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qitemmodelscatterdataproxy_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qitemmodelscatterdataproxy_event_callback(this, cbval1);
            return callback_ret;
        }
        return QItemModelScatterDataProxy::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qitemmodelscatterdataproxy_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qitemmodelscatterdataproxy_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QItemModelScatterDataProxy::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qitemmodelscatterdataproxy_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qitemmodelscatterdataproxy_timerevent_callback(this, cbval1);
            return;
        }
        QItemModelScatterDataProxy::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qitemmodelscatterdataproxy_childevent_callback) {
            QChildEvent* cbval1 = event;
            qitemmodelscatterdataproxy_childevent_callback(this, cbval1);
            return;
        }
        QItemModelScatterDataProxy::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qitemmodelscatterdataproxy_customevent_callback) {
            QEvent* cbval1 = event;
            qitemmodelscatterdataproxy_customevent_callback(this, cbval1);
            return;
        }
        QItemModelScatterDataProxy::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qitemmodelscatterdataproxy_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qitemmodelscatterdataproxy_connectnotify_callback(this, cbval1);
            return;
        }
        QItemModelScatterDataProxy::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qitemmodelscatterdataproxy_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qitemmodelscatterdataproxy_disconnectnotify_callback(this, cbval1);
            return;
        }
        QItemModelScatterDataProxy::disconnectNotify(signal);
    }

    // Friend functions
    friend void QItemModelScatterDataProxy_SuperTimerEvent(QItemModelScatterDataProxy* self, QTimerEvent* event);
    friend void QItemModelScatterDataProxy_SuperChildEvent(QItemModelScatterDataProxy* self, QChildEvent* event);
    friend void QItemModelScatterDataProxy_SuperCustomEvent(QItemModelScatterDataProxy* self, QEvent* event);
    friend void QItemModelScatterDataProxy_SuperConnectNotify(QItemModelScatterDataProxy* self, const QMetaMethod* signal);
    friend void QItemModelScatterDataProxy_SuperDisconnectNotify(QItemModelScatterDataProxy* self, const QMetaMethod* signal);
};

#endif
