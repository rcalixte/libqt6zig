#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELSURFACEDATAPROXY_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELSURFACEDATAPROXY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QItemModelSurfaceDataProxy
class VirtualQItemModelSurfaceDataProxy final : public QItemModelSurfaceDataProxy {
  public:
    // Virtual class public types (including callbacks and access types)
    using QItemModelSurfaceDataProxy_MetaObject_Callback = QMetaObject* (*)(const QItemModelSurfaceDataProxy*);
    using QItemModelSurfaceDataProxy_Metacast_Callback = void* (*)(QItemModelSurfaceDataProxy*, const char*);
    using QItemModelSurfaceDataProxy_Metacall_Callback = int (*)(QItemModelSurfaceDataProxy*, int, int, void**);
    using QItemModelSurfaceDataProxy_Event_Callback = bool (*)(QItemModelSurfaceDataProxy*, QEvent*);
    using QItemModelSurfaceDataProxy_EventFilter_Callback = bool (*)(QItemModelSurfaceDataProxy*, QObject*, QEvent*);
    using QItemModelSurfaceDataProxy_TimerEvent_Callback = void (*)(QItemModelSurfaceDataProxy*, QTimerEvent*);
    using QItemModelSurfaceDataProxy_ChildEvent_Callback = void (*)(QItemModelSurfaceDataProxy*, QChildEvent*);
    using QItemModelSurfaceDataProxy_CustomEvent_Callback = void (*)(QItemModelSurfaceDataProxy*, QEvent*);
    using QItemModelSurfaceDataProxy_ConnectNotify_Callback = void (*)(QItemModelSurfaceDataProxy*, QMetaMethod*);
    using QItemModelSurfaceDataProxy_DisconnectNotify_Callback = void (*)(QItemModelSurfaceDataProxy*, QMetaMethod*);
    using QItemModelSurfaceDataProxy::isSignalConnected;
    using QItemModelSurfaceDataProxy::receivers;
    using QItemModelSurfaceDataProxy::sender;
    using QItemModelSurfaceDataProxy::senderSignalIndex;

    // Instance callback storage
    QItemModelSurfaceDataProxy_MetaObject_Callback qitemmodelsurfacedataproxy_metaobject_callback = nullptr;
    QItemModelSurfaceDataProxy_Metacast_Callback qitemmodelsurfacedataproxy_metacast_callback = nullptr;
    QItemModelSurfaceDataProxy_Metacall_Callback qitemmodelsurfacedataproxy_metacall_callback = nullptr;
    QItemModelSurfaceDataProxy_Event_Callback qitemmodelsurfacedataproxy_event_callback = nullptr;
    QItemModelSurfaceDataProxy_EventFilter_Callback qitemmodelsurfacedataproxy_eventfilter_callback = nullptr;
    QItemModelSurfaceDataProxy_TimerEvent_Callback qitemmodelsurfacedataproxy_timerevent_callback = nullptr;
    QItemModelSurfaceDataProxy_ChildEvent_Callback qitemmodelsurfacedataproxy_childevent_callback = nullptr;
    QItemModelSurfaceDataProxy_CustomEvent_Callback qitemmodelsurfacedataproxy_customevent_callback = nullptr;
    QItemModelSurfaceDataProxy_ConnectNotify_Callback qitemmodelsurfacedataproxy_connectnotify_callback = nullptr;
    QItemModelSurfaceDataProxy_DisconnectNotify_Callback qitemmodelsurfacedataproxy_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QItemModelSurfaceDataProxy {
        using QItemModelSurfaceDataProxy::childEvent;
        using QItemModelSurfaceDataProxy::connectNotify;
        using QItemModelSurfaceDataProxy::customEvent;
        using QItemModelSurfaceDataProxy::disconnectNotify;
        using QItemModelSurfaceDataProxy::timerEvent;
    };

    VirtualQItemModelSurfaceDataProxy() : QItemModelSurfaceDataProxy() {};
    VirtualQItemModelSurfaceDataProxy(QAbstractItemModel* itemModel) : QItemModelSurfaceDataProxy(itemModel) {};
    VirtualQItemModelSurfaceDataProxy(QAbstractItemModel* itemModel, const QString& yPosRole) : QItemModelSurfaceDataProxy(itemModel, yPosRole) {};
    VirtualQItemModelSurfaceDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& yPosRole) : QItemModelSurfaceDataProxy(itemModel, rowRole, columnRole, yPosRole) {};
    VirtualQItemModelSurfaceDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& xPosRole, const QString& yPosRole, const QString& zPosRole) : QItemModelSurfaceDataProxy(itemModel, rowRole, columnRole, xPosRole, yPosRole, zPosRole) {};
    VirtualQItemModelSurfaceDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& yPosRole, const QList<QString>& rowCategories, const QList<QString>& columnCategories) : QItemModelSurfaceDataProxy(itemModel, rowRole, columnRole, yPosRole, rowCategories, columnCategories) {};
    VirtualQItemModelSurfaceDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& xPosRole, const QString& yPosRole, const QString& zPosRole, const QList<QString>& rowCategories, const QList<QString>& columnCategories) : QItemModelSurfaceDataProxy(itemModel, rowRole, columnRole, xPosRole, yPosRole, zPosRole, rowCategories, columnCategories) {};
    VirtualQItemModelSurfaceDataProxy(QObject* parent) : QItemModelSurfaceDataProxy(parent) {};
    VirtualQItemModelSurfaceDataProxy(QAbstractItemModel* itemModel, QObject* parent) : QItemModelSurfaceDataProxy(itemModel, parent) {};
    VirtualQItemModelSurfaceDataProxy(QAbstractItemModel* itemModel, const QString& yPosRole, QObject* parent) : QItemModelSurfaceDataProxy(itemModel, yPosRole, parent) {};
    VirtualQItemModelSurfaceDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& yPosRole, QObject* parent) : QItemModelSurfaceDataProxy(itemModel, rowRole, columnRole, yPosRole, parent) {};
    VirtualQItemModelSurfaceDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& xPosRole, const QString& yPosRole, const QString& zPosRole, QObject* parent) : QItemModelSurfaceDataProxy(itemModel, rowRole, columnRole, xPosRole, yPosRole, zPosRole, parent) {};
    VirtualQItemModelSurfaceDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& yPosRole, const QList<QString>& rowCategories, const QList<QString>& columnCategories, QObject* parent) : QItemModelSurfaceDataProxy(itemModel, rowRole, columnRole, yPosRole, rowCategories, columnCategories, parent) {};
    VirtualQItemModelSurfaceDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& xPosRole, const QString& yPosRole, const QString& zPosRole, const QList<QString>& rowCategories, const QList<QString>& columnCategories, QObject* parent) : QItemModelSurfaceDataProxy(itemModel, rowRole, columnRole, xPosRole, yPosRole, zPosRole, rowCategories, columnCategories, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qitemmodelsurfacedataproxy_metaobject_callback) {
            QMetaObject* callback_ret = qitemmodelsurfacedataproxy_metaobject_callback(this);
            return callback_ret;
        }
        return QItemModelSurfaceDataProxy::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qitemmodelsurfacedataproxy_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qitemmodelsurfacedataproxy_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QItemModelSurfaceDataProxy::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qitemmodelsurfacedataproxy_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qitemmodelsurfacedataproxy_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QItemModelSurfaceDataProxy::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qitemmodelsurfacedataproxy_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qitemmodelsurfacedataproxy_event_callback(this, cbval1);
            return callback_ret;
        }
        return QItemModelSurfaceDataProxy::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qitemmodelsurfacedataproxy_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qitemmodelsurfacedataproxy_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QItemModelSurfaceDataProxy::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qitemmodelsurfacedataproxy_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qitemmodelsurfacedataproxy_timerevent_callback(this, cbval1);
            return;
        }
        QItemModelSurfaceDataProxy::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qitemmodelsurfacedataproxy_childevent_callback) {
            QChildEvent* cbval1 = event;
            qitemmodelsurfacedataproxy_childevent_callback(this, cbval1);
            return;
        }
        QItemModelSurfaceDataProxy::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qitemmodelsurfacedataproxy_customevent_callback) {
            QEvent* cbval1 = event;
            qitemmodelsurfacedataproxy_customevent_callback(this, cbval1);
            return;
        }
        QItemModelSurfaceDataProxy::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qitemmodelsurfacedataproxy_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qitemmodelsurfacedataproxy_connectnotify_callback(this, cbval1);
            return;
        }
        QItemModelSurfaceDataProxy::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qitemmodelsurfacedataproxy_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qitemmodelsurfacedataproxy_disconnectnotify_callback(this, cbval1);
            return;
        }
        QItemModelSurfaceDataProxy::disconnectNotify(signal);
    }

    // Friend functions
    friend void QItemModelSurfaceDataProxy_SuperTimerEvent(QItemModelSurfaceDataProxy* self, QTimerEvent* event);
    friend void QItemModelSurfaceDataProxy_SuperChildEvent(QItemModelSurfaceDataProxy* self, QChildEvent* event);
    friend void QItemModelSurfaceDataProxy_SuperCustomEvent(QItemModelSurfaceDataProxy* self, QEvent* event);
    friend void QItemModelSurfaceDataProxy_SuperConnectNotify(QItemModelSurfaceDataProxy* self, const QMetaMethod* signal);
    friend void QItemModelSurfaceDataProxy_SuperDisconnectNotify(QItemModelSurfaceDataProxy* self, const QMetaMethod* signal);
};

#endif
