#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELBARDATAPROXY_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELBARDATAPROXY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QItemModelBarDataProxy
class VirtualQItemModelBarDataProxy final : public QItemModelBarDataProxy {
  public:
    // Virtual class public types (including callbacks and access types)
    using QItemModelBarDataProxy_MetaObject_Callback = QMetaObject* (*)(const QItemModelBarDataProxy*);
    using QItemModelBarDataProxy_Metacast_Callback = void* (*)(QItemModelBarDataProxy*, const char*);
    using QItemModelBarDataProxy_Metacall_Callback = int (*)(QItemModelBarDataProxy*, int, int, void**);
    using QItemModelBarDataProxy_Event_Callback = bool (*)(QItemModelBarDataProxy*, QEvent*);
    using QItemModelBarDataProxy_EventFilter_Callback = bool (*)(QItemModelBarDataProxy*, QObject*, QEvent*);
    using QItemModelBarDataProxy_TimerEvent_Callback = void (*)(QItemModelBarDataProxy*, QTimerEvent*);
    using QItemModelBarDataProxy_ChildEvent_Callback = void (*)(QItemModelBarDataProxy*, QChildEvent*);
    using QItemModelBarDataProxy_CustomEvent_Callback = void (*)(QItemModelBarDataProxy*, QEvent*);
    using QItemModelBarDataProxy_ConnectNotify_Callback = void (*)(QItemModelBarDataProxy*, QMetaMethod*);
    using QItemModelBarDataProxy_DisconnectNotify_Callback = void (*)(QItemModelBarDataProxy*, QMetaMethod*);
    using QItemModelBarDataProxy::isSignalConnected;
    using QItemModelBarDataProxy::receivers;
    using QItemModelBarDataProxy::sender;
    using QItemModelBarDataProxy::senderSignalIndex;

    // Instance callback storage
    QItemModelBarDataProxy_MetaObject_Callback qitemmodelbardataproxy_metaobject_callback = nullptr;
    QItemModelBarDataProxy_Metacast_Callback qitemmodelbardataproxy_metacast_callback = nullptr;
    QItemModelBarDataProxy_Metacall_Callback qitemmodelbardataproxy_metacall_callback = nullptr;
    QItemModelBarDataProxy_Event_Callback qitemmodelbardataproxy_event_callback = nullptr;
    QItemModelBarDataProxy_EventFilter_Callback qitemmodelbardataproxy_eventfilter_callback = nullptr;
    QItemModelBarDataProxy_TimerEvent_Callback qitemmodelbardataproxy_timerevent_callback = nullptr;
    QItemModelBarDataProxy_ChildEvent_Callback qitemmodelbardataproxy_childevent_callback = nullptr;
    QItemModelBarDataProxy_CustomEvent_Callback qitemmodelbardataproxy_customevent_callback = nullptr;
    QItemModelBarDataProxy_ConnectNotify_Callback qitemmodelbardataproxy_connectnotify_callback = nullptr;
    QItemModelBarDataProxy_DisconnectNotify_Callback qitemmodelbardataproxy_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QItemModelBarDataProxy {
        using QItemModelBarDataProxy::childEvent;
        using QItemModelBarDataProxy::connectNotify;
        using QItemModelBarDataProxy::customEvent;
        using QItemModelBarDataProxy::disconnectNotify;
        using QItemModelBarDataProxy::timerEvent;
    };

    VirtualQItemModelBarDataProxy() : QItemModelBarDataProxy() {};
    VirtualQItemModelBarDataProxy(QAbstractItemModel* itemModel) : QItemModelBarDataProxy(itemModel) {};
    VirtualQItemModelBarDataProxy(QAbstractItemModel* itemModel, const QString& valueRole) : QItemModelBarDataProxy(itemModel, valueRole) {};
    VirtualQItemModelBarDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& valueRole) : QItemModelBarDataProxy(itemModel, rowRole, columnRole, valueRole) {};
    VirtualQItemModelBarDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& valueRole, const QString& rotationRole) : QItemModelBarDataProxy(itemModel, rowRole, columnRole, valueRole, rotationRole) {};
    VirtualQItemModelBarDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& valueRole, const QList<QString>& rowCategories, const QList<QString>& columnCategories) : QItemModelBarDataProxy(itemModel, rowRole, columnRole, valueRole, rowCategories, columnCategories) {};
    VirtualQItemModelBarDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& valueRole, const QString& rotationRole, const QList<QString>& rowCategories, const QList<QString>& columnCategories) : QItemModelBarDataProxy(itemModel, rowRole, columnRole, valueRole, rotationRole, rowCategories, columnCategories) {};
    VirtualQItemModelBarDataProxy(QObject* parent) : QItemModelBarDataProxy(parent) {};
    VirtualQItemModelBarDataProxy(QAbstractItemModel* itemModel, QObject* parent) : QItemModelBarDataProxy(itemModel, parent) {};
    VirtualQItemModelBarDataProxy(QAbstractItemModel* itemModel, const QString& valueRole, QObject* parent) : QItemModelBarDataProxy(itemModel, valueRole, parent) {};
    VirtualQItemModelBarDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& valueRole, QObject* parent) : QItemModelBarDataProxy(itemModel, rowRole, columnRole, valueRole, parent) {};
    VirtualQItemModelBarDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& valueRole, const QString& rotationRole, QObject* parent) : QItemModelBarDataProxy(itemModel, rowRole, columnRole, valueRole, rotationRole, parent) {};
    VirtualQItemModelBarDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& valueRole, const QList<QString>& rowCategories, const QList<QString>& columnCategories, QObject* parent) : QItemModelBarDataProxy(itemModel, rowRole, columnRole, valueRole, rowCategories, columnCategories, parent) {};
    VirtualQItemModelBarDataProxy(QAbstractItemModel* itemModel, const QString& rowRole, const QString& columnRole, const QString& valueRole, const QString& rotationRole, const QList<QString>& rowCategories, const QList<QString>& columnCategories, QObject* parent) : QItemModelBarDataProxy(itemModel, rowRole, columnRole, valueRole, rotationRole, rowCategories, columnCategories, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qitemmodelbardataproxy_metaobject_callback) {
            QMetaObject* callback_ret = qitemmodelbardataproxy_metaobject_callback(this);
            return callback_ret;
        }
        return QItemModelBarDataProxy::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qitemmodelbardataproxy_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qitemmodelbardataproxy_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QItemModelBarDataProxy::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qitemmodelbardataproxy_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qitemmodelbardataproxy_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QItemModelBarDataProxy::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qitemmodelbardataproxy_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qitemmodelbardataproxy_event_callback(this, cbval1);
            return callback_ret;
        }
        return QItemModelBarDataProxy::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qitemmodelbardataproxy_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qitemmodelbardataproxy_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QItemModelBarDataProxy::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qitemmodelbardataproxy_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qitemmodelbardataproxy_timerevent_callback(this, cbval1);
            return;
        }
        QItemModelBarDataProxy::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qitemmodelbardataproxy_childevent_callback) {
            QChildEvent* cbval1 = event;
            qitemmodelbardataproxy_childevent_callback(this, cbval1);
            return;
        }
        QItemModelBarDataProxy::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qitemmodelbardataproxy_customevent_callback) {
            QEvent* cbval1 = event;
            qitemmodelbardataproxy_customevent_callback(this, cbval1);
            return;
        }
        QItemModelBarDataProxy::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qitemmodelbardataproxy_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qitemmodelbardataproxy_connectnotify_callback(this, cbval1);
            return;
        }
        QItemModelBarDataProxy::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qitemmodelbardataproxy_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qitemmodelbardataproxy_disconnectnotify_callback(this, cbval1);
            return;
        }
        QItemModelBarDataProxy::disconnectNotify(signal);
    }

    // Friend functions
    friend void QItemModelBarDataProxy_SuperTimerEvent(QItemModelBarDataProxy* self, QTimerEvent* event);
    friend void QItemModelBarDataProxy_SuperChildEvent(QItemModelBarDataProxy* self, QChildEvent* event);
    friend void QItemModelBarDataProxy_SuperCustomEvent(QItemModelBarDataProxy* self, QEvent* event);
    friend void QItemModelBarDataProxy_SuperConnectNotify(QItemModelBarDataProxy* self, const QMetaMethod* signal);
    friend void QItemModelBarDataProxy_SuperDisconnectNotify(QItemModelBarDataProxy* self, const QMetaMethod* signal);
};

#endif
