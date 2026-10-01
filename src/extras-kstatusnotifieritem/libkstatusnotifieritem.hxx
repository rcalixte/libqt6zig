#pragma once
#ifndef EXTRAS_KSTATUSNOTIFIERITEM_LIBKSTATUSNOTIFIERITEM_HXX
#define EXTRAS_KSTATUSNOTIFIERITEM_LIBKSTATUSNOTIFIERITEM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KStatusNotifierItem
class VirtualKStatusNotifierItem final : public KStatusNotifierItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using KStatusNotifierItem_MetaObject_Callback = QMetaObject* (*)(const KStatusNotifierItem*);
    using KStatusNotifierItem_Metacast_Callback = void* (*)(KStatusNotifierItem*, const char*);
    using KStatusNotifierItem_Metacall_Callback = int (*)(KStatusNotifierItem*, int, int, void**);
    using KStatusNotifierItem_Activate_Callback = void (*)(KStatusNotifierItem*, QPoint*);
    using KStatusNotifierItem_EventFilter_Callback = bool (*)(KStatusNotifierItem*, QObject*, QEvent*);
    using KStatusNotifierItem_Event_Callback = bool (*)(KStatusNotifierItem*, QEvent*);
    using KStatusNotifierItem_TimerEvent_Callback = void (*)(KStatusNotifierItem*, QTimerEvent*);
    using KStatusNotifierItem_ChildEvent_Callback = void (*)(KStatusNotifierItem*, QChildEvent*);
    using KStatusNotifierItem_CustomEvent_Callback = void (*)(KStatusNotifierItem*, QEvent*);
    using KStatusNotifierItem_ConnectNotify_Callback = void (*)(KStatusNotifierItem*, QMetaMethod*);
    using KStatusNotifierItem_DisconnectNotify_Callback = void (*)(KStatusNotifierItem*, QMetaMethod*);
    using KStatusNotifierItem::isSignalConnected;
    using KStatusNotifierItem::receivers;
    using KStatusNotifierItem::sender;
    using KStatusNotifierItem::senderSignalIndex;

    // Instance callback storage
    KStatusNotifierItem_MetaObject_Callback kstatusnotifieritem_metaobject_callback = nullptr;
    KStatusNotifierItem_Metacast_Callback kstatusnotifieritem_metacast_callback = nullptr;
    KStatusNotifierItem_Metacall_Callback kstatusnotifieritem_metacall_callback = nullptr;
    KStatusNotifierItem_Activate_Callback kstatusnotifieritem_activate_callback = nullptr;
    KStatusNotifierItem_EventFilter_Callback kstatusnotifieritem_eventfilter_callback = nullptr;
    KStatusNotifierItem_Event_Callback kstatusnotifieritem_event_callback = nullptr;
    KStatusNotifierItem_TimerEvent_Callback kstatusnotifieritem_timerevent_callback = nullptr;
    KStatusNotifierItem_ChildEvent_Callback kstatusnotifieritem_childevent_callback = nullptr;
    KStatusNotifierItem_CustomEvent_Callback kstatusnotifieritem_customevent_callback = nullptr;
    KStatusNotifierItem_ConnectNotify_Callback kstatusnotifieritem_connectnotify_callback = nullptr;
    KStatusNotifierItem_DisconnectNotify_Callback kstatusnotifieritem_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KStatusNotifierItem {
        using KStatusNotifierItem::childEvent;
        using KStatusNotifierItem::connectNotify;
        using KStatusNotifierItem::customEvent;
        using KStatusNotifierItem::disconnectNotify;
        using KStatusNotifierItem::eventFilter;
        using KStatusNotifierItem::timerEvent;
    };

    VirtualKStatusNotifierItem() : KStatusNotifierItem() {};
    VirtualKStatusNotifierItem(const QString& id) : KStatusNotifierItem(id) {};
    VirtualKStatusNotifierItem(QObject* parent) : KStatusNotifierItem(parent) {};
    VirtualKStatusNotifierItem(const QString& id, QObject* parent) : KStatusNotifierItem(id, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kstatusnotifieritem_metaobject_callback) {
            QMetaObject* callback_ret = kstatusnotifieritem_metaobject_callback(this);
            return callback_ret;
        }
        return KStatusNotifierItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kstatusnotifieritem_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kstatusnotifieritem_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KStatusNotifierItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kstatusnotifieritem_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kstatusnotifieritem_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KStatusNotifierItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void activate(const QPoint& pos) override {
        if (kstatusnotifieritem_activate_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            kstatusnotifieritem_activate_callback(this, cbval1);
            return;
        }
        KStatusNotifierItem::activate(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kstatusnotifieritem_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kstatusnotifieritem_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KStatusNotifierItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kstatusnotifieritem_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kstatusnotifieritem_event_callback(this, cbval1);
            return callback_ret;
        }
        return KStatusNotifierItem::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kstatusnotifieritem_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kstatusnotifieritem_timerevent_callback(this, cbval1);
            return;
        }
        KStatusNotifierItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kstatusnotifieritem_childevent_callback) {
            QChildEvent* cbval1 = event;
            kstatusnotifieritem_childevent_callback(this, cbval1);
            return;
        }
        KStatusNotifierItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kstatusnotifieritem_customevent_callback) {
            QEvent* cbval1 = event;
            kstatusnotifieritem_customevent_callback(this, cbval1);
            return;
        }
        KStatusNotifierItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kstatusnotifieritem_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kstatusnotifieritem_connectnotify_callback(this, cbval1);
            return;
        }
        KStatusNotifierItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kstatusnotifieritem_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kstatusnotifieritem_disconnectnotify_callback(this, cbval1);
            return;
        }
        KStatusNotifierItem::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KStatusNotifierItem_SuperEventFilter(KStatusNotifierItem* self, QObject* watched, QEvent* event);
    friend void KStatusNotifierItem_SuperTimerEvent(KStatusNotifierItem* self, QTimerEvent* event);
    friend void KStatusNotifierItem_SuperChildEvent(KStatusNotifierItem* self, QChildEvent* event);
    friend void KStatusNotifierItem_SuperCustomEvent(KStatusNotifierItem* self, QEvent* event);
    friend void KStatusNotifierItem_SuperConnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal);
    friend void KStatusNotifierItem_SuperDisconnectNotify(KStatusNotifierItem* self, const QMetaMethod* signal);
};

#endif
