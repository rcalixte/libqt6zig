#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBKIRIGAMIACTIONCOLLECTION_HXX
#define EXTRAS_KIRIGAMI_LIBKIRIGAMIACTIONCOLLECTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KirigamiActionCollection
class VirtualKirigamiActionCollection final : public KirigamiActionCollection {
  public:
    // Virtual class public types (including callbacks and access types)
    using KirigamiActionCollection_MetaObject_Callback = QMetaObject* (*)(const KirigamiActionCollection*);
    using KirigamiActionCollection_Metacast_Callback = void* (*)(KirigamiActionCollection*, const char*);
    using KirigamiActionCollection_Metacall_Callback = int (*)(KirigamiActionCollection*, int, int, void**);
    using KirigamiActionCollection_ConnectNotify_Callback = void (*)(KirigamiActionCollection*, QMetaMethod*);
    using KirigamiActionCollection_SlotActionTriggered_Callback = void (*)(KirigamiActionCollection*);
    using KirigamiActionCollection_Event_Callback = bool (*)(KirigamiActionCollection*, QEvent*);
    using KirigamiActionCollection_EventFilter_Callback = bool (*)(KirigamiActionCollection*, QObject*, QEvent*);
    using KirigamiActionCollection_TimerEvent_Callback = void (*)(KirigamiActionCollection*, QTimerEvent*);
    using KirigamiActionCollection_ChildEvent_Callback = void (*)(KirigamiActionCollection*, QChildEvent*);
    using KirigamiActionCollection_CustomEvent_Callback = void (*)(KirigamiActionCollection*, QEvent*);
    using KirigamiActionCollection_DisconnectNotify_Callback = void (*)(KirigamiActionCollection*, QMetaMethod*);
    using KirigamiActionCollection::isSignalConnected;
    using KirigamiActionCollection::receivers;
    using KirigamiActionCollection::sender;
    using KirigamiActionCollection::senderSignalIndex;

    // Instance callback storage
    KirigamiActionCollection_MetaObject_Callback kirigamiactioncollection_metaobject_callback = nullptr;
    KirigamiActionCollection_Metacast_Callback kirigamiactioncollection_metacast_callback = nullptr;
    KirigamiActionCollection_Metacall_Callback kirigamiactioncollection_metacall_callback = nullptr;
    KirigamiActionCollection_ConnectNotify_Callback kirigamiactioncollection_connectnotify_callback = nullptr;
    KirigamiActionCollection_SlotActionTriggered_Callback kirigamiactioncollection_slotactiontriggered_callback = nullptr;
    KirigamiActionCollection_Event_Callback kirigamiactioncollection_event_callback = nullptr;
    KirigamiActionCollection_EventFilter_Callback kirigamiactioncollection_eventfilter_callback = nullptr;
    KirigamiActionCollection_TimerEvent_Callback kirigamiactioncollection_timerevent_callback = nullptr;
    KirigamiActionCollection_ChildEvent_Callback kirigamiactioncollection_childevent_callback = nullptr;
    KirigamiActionCollection_CustomEvent_Callback kirigamiactioncollection_customevent_callback = nullptr;
    KirigamiActionCollection_DisconnectNotify_Callback kirigamiactioncollection_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KirigamiActionCollection {
        using KirigamiActionCollection::childEvent;
        using KirigamiActionCollection::connectNotify;
        using KirigamiActionCollection::customEvent;
        using KirigamiActionCollection::disconnectNotify;
        using KirigamiActionCollection::slotActionTriggered;
        using KirigamiActionCollection::timerEvent;
    };

    VirtualKirigamiActionCollection(QObject* parent) : KirigamiActionCollection(parent) {};
    VirtualKirigamiActionCollection(QObject* parent, const QString& cName) : KirigamiActionCollection(parent, cName) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kirigamiactioncollection_metaobject_callback) {
            QMetaObject* callback_ret = kirigamiactioncollection_metaobject_callback(this);
            return callback_ret;
        }
        return KirigamiActionCollection::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kirigamiactioncollection_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kirigamiactioncollection_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KirigamiActionCollection::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kirigamiactioncollection_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kirigamiactioncollection_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KirigamiActionCollection::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kirigamiactioncollection_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kirigamiactioncollection_connectnotify_callback(this, cbval1);
            return;
        }
        KirigamiActionCollection::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered() override {
        if (kirigamiactioncollection_slotactiontriggered_callback) {
            kirigamiactioncollection_slotactiontriggered_callback(this);
            return;
        }
        KirigamiActionCollection::slotActionTriggered();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kirigamiactioncollection_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kirigamiactioncollection_event_callback(this, cbval1);
            return callback_ret;
        }
        return KirigamiActionCollection::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kirigamiactioncollection_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kirigamiactioncollection_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KirigamiActionCollection::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kirigamiactioncollection_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kirigamiactioncollection_timerevent_callback(this, cbval1);
            return;
        }
        KirigamiActionCollection::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kirigamiactioncollection_childevent_callback) {
            QChildEvent* cbval1 = event;
            kirigamiactioncollection_childevent_callback(this, cbval1);
            return;
        }
        KirigamiActionCollection::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kirigamiactioncollection_customevent_callback) {
            QEvent* cbval1 = event;
            kirigamiactioncollection_customevent_callback(this, cbval1);
            return;
        }
        KirigamiActionCollection::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kirigamiactioncollection_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kirigamiactioncollection_disconnectnotify_callback(this, cbval1);
            return;
        }
        KirigamiActionCollection::disconnectNotify(signal);
    }

    // Friend functions
    friend void KirigamiActionCollection_SuperConnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal);
    friend void KirigamiActionCollection_SuperSlotActionTriggered(KirigamiActionCollection* self);
    friend void KirigamiActionCollection_SuperTimerEvent(KirigamiActionCollection* self, QTimerEvent* event);
    friend void KirigamiActionCollection_SuperChildEvent(KirigamiActionCollection* self, QChildEvent* event);
    friend void KirigamiActionCollection_SuperCustomEvent(KirigamiActionCollection* self, QEvent* event);
    friend void KirigamiActionCollection_SuperDisconnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal);
};

#endif
