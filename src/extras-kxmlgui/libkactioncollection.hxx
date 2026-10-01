#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKACTIONCOLLECTION_HXX
#define EXTRAS_KXMLGUI_LIBKACTIONCOLLECTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KActionCollection
class VirtualKActionCollection final : public KActionCollection {
  public:
    // Virtual class public types (including callbacks and access types)
    using KActionCollection_MetaObject_Callback = QMetaObject* (*)(const KActionCollection*);
    using KActionCollection_Metacast_Callback = void* (*)(KActionCollection*, const char*);
    using KActionCollection_Metacall_Callback = int (*)(KActionCollection*, int, int, void**);
    using KActionCollection_ConnectNotify_Callback = void (*)(KActionCollection*, QMetaMethod*);
    using KActionCollection_SlotActionTriggered_Callback = void (*)(KActionCollection*);
    using KActionCollection_Event_Callback = bool (*)(KActionCollection*, QEvent*);
    using KActionCollection_EventFilter_Callback = bool (*)(KActionCollection*, QObject*, QEvent*);
    using KActionCollection_TimerEvent_Callback = void (*)(KActionCollection*, QTimerEvent*);
    using KActionCollection_ChildEvent_Callback = void (*)(KActionCollection*, QChildEvent*);
    using KActionCollection_CustomEvent_Callback = void (*)(KActionCollection*, QEvent*);
    using KActionCollection_DisconnectNotify_Callback = void (*)(KActionCollection*, QMetaMethod*);
    using KActionCollection::isSignalConnected;
    using KActionCollection::receivers;
    using KActionCollection::sender;
    using KActionCollection::senderSignalIndex;

    // Instance callback storage
    KActionCollection_MetaObject_Callback kactioncollection_metaobject_callback = nullptr;
    KActionCollection_Metacast_Callback kactioncollection_metacast_callback = nullptr;
    KActionCollection_Metacall_Callback kactioncollection_metacall_callback = nullptr;
    KActionCollection_ConnectNotify_Callback kactioncollection_connectnotify_callback = nullptr;
    KActionCollection_SlotActionTriggered_Callback kactioncollection_slotactiontriggered_callback = nullptr;
    KActionCollection_Event_Callback kactioncollection_event_callback = nullptr;
    KActionCollection_EventFilter_Callback kactioncollection_eventfilter_callback = nullptr;
    KActionCollection_TimerEvent_Callback kactioncollection_timerevent_callback = nullptr;
    KActionCollection_ChildEvent_Callback kactioncollection_childevent_callback = nullptr;
    KActionCollection_CustomEvent_Callback kactioncollection_customevent_callback = nullptr;
    KActionCollection_DisconnectNotify_Callback kactioncollection_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KActionCollection {
        using KActionCollection::childEvent;
        using KActionCollection::connectNotify;
        using KActionCollection::customEvent;
        using KActionCollection::disconnectNotify;
        using KActionCollection::slotActionTriggered;
        using KActionCollection::timerEvent;
    };

    VirtualKActionCollection(QObject* parent) : KActionCollection(parent) {};
    VirtualKActionCollection(QObject* parent, const QString& cName) : KActionCollection(parent, cName) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kactioncollection_metaobject_callback) {
            QMetaObject* callback_ret = kactioncollection_metaobject_callback(this);
            return callback_ret;
        }
        return KActionCollection::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kactioncollection_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kactioncollection_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KActionCollection::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kactioncollection_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kactioncollection_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KActionCollection::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kactioncollection_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kactioncollection_connectnotify_callback(this, cbval1);
            return;
        }
        KActionCollection::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered() override {
        if (kactioncollection_slotactiontriggered_callback) {
            kactioncollection_slotactiontriggered_callback(this);
            return;
        }
        KActionCollection::slotActionTriggered();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kactioncollection_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kactioncollection_event_callback(this, cbval1);
            return callback_ret;
        }
        return KActionCollection::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kactioncollection_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kactioncollection_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KActionCollection::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kactioncollection_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kactioncollection_timerevent_callback(this, cbval1);
            return;
        }
        KActionCollection::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kactioncollection_childevent_callback) {
            QChildEvent* cbval1 = event;
            kactioncollection_childevent_callback(this, cbval1);
            return;
        }
        KActionCollection::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kactioncollection_customevent_callback) {
            QEvent* cbval1 = event;
            kactioncollection_customevent_callback(this, cbval1);
            return;
        }
        KActionCollection::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kactioncollection_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kactioncollection_disconnectnotify_callback(this, cbval1);
            return;
        }
        KActionCollection::disconnectNotify(signal);
    }

    // Friend functions
    friend void KActionCollection_SuperConnectNotify(KActionCollection* self, const QMetaMethod* signal);
    friend void KActionCollection_SuperSlotActionTriggered(KActionCollection* self);
    friend void KActionCollection_SuperTimerEvent(KActionCollection* self, QTimerEvent* event);
    friend void KActionCollection_SuperChildEvent(KActionCollection* self, QChildEvent* event);
    friend void KActionCollection_SuperCustomEvent(KActionCollection* self, QEvent* event);
    friend void KActionCollection_SuperDisconnectNotify(KActionCollection* self, const QMetaMethod* signal);
};

#endif
