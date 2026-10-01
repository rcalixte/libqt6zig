#pragma once
#ifndef FOSS_EXTRAS_KWINDOWSYSTEM_LIBKSELECTIONOWNER_HXX
#define FOSS_EXTRAS_KWINDOWSYSTEM_LIBKSELECTIONOWNER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSelectionOwner
class VirtualKSelectionOwner final : public KSelectionOwner {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSelectionOwner_MetaObject_Callback = QMetaObject* (*)(const KSelectionOwner*);
    using KSelectionOwner_Metacast_Callback = void* (*)(KSelectionOwner*, const char*);
    using KSelectionOwner_Metacall_Callback = int (*)(KSelectionOwner*, int, int, void**);
    using KSelectionOwner_TimerEvent_Callback = void (*)(KSelectionOwner*, QTimerEvent*);
    using KSelectionOwner_GenericReply_Callback = bool (*)(KSelectionOwner*, uint32_t, uint32_t, uint32_t);
    using KSelectionOwner_ReplyTargets_Callback = void (*)(KSelectionOwner*, uint32_t, uint32_t);
    using KSelectionOwner_GetAtoms_Callback = void (*)(KSelectionOwner*);
    using KSelectionOwner_Event_Callback = bool (*)(KSelectionOwner*, QEvent*);
    using KSelectionOwner_EventFilter_Callback = bool (*)(KSelectionOwner*, QObject*, QEvent*);
    using KSelectionOwner_ChildEvent_Callback = void (*)(KSelectionOwner*, QChildEvent*);
    using KSelectionOwner_CustomEvent_Callback = void (*)(KSelectionOwner*, QEvent*);
    using KSelectionOwner_ConnectNotify_Callback = void (*)(KSelectionOwner*, QMetaMethod*);
    using KSelectionOwner_DisconnectNotify_Callback = void (*)(KSelectionOwner*, QMetaMethod*);
    using KSelectionOwner::isSignalConnected;
    using KSelectionOwner::receivers;
    using KSelectionOwner::sender;
    using KSelectionOwner::senderSignalIndex;
    using KSelectionOwner::setData;

    // Instance callback storage
    KSelectionOwner_MetaObject_Callback kselectionowner_metaobject_callback = nullptr;
    KSelectionOwner_Metacast_Callback kselectionowner_metacast_callback = nullptr;
    KSelectionOwner_Metacall_Callback kselectionowner_metacall_callback = nullptr;
    KSelectionOwner_TimerEvent_Callback kselectionowner_timerevent_callback = nullptr;
    KSelectionOwner_GenericReply_Callback kselectionowner_genericreply_callback = nullptr;
    KSelectionOwner_ReplyTargets_Callback kselectionowner_replytargets_callback = nullptr;
    KSelectionOwner_GetAtoms_Callback kselectionowner_getatoms_callback = nullptr;
    KSelectionOwner_Event_Callback kselectionowner_event_callback = nullptr;
    KSelectionOwner_EventFilter_Callback kselectionowner_eventfilter_callback = nullptr;
    KSelectionOwner_ChildEvent_Callback kselectionowner_childevent_callback = nullptr;
    KSelectionOwner_CustomEvent_Callback kselectionowner_customevent_callback = nullptr;
    KSelectionOwner_ConnectNotify_Callback kselectionowner_connectnotify_callback = nullptr;
    KSelectionOwner_DisconnectNotify_Callback kselectionowner_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSelectionOwner {
        using KSelectionOwner::childEvent;
        using KSelectionOwner::connectNotify;
        using KSelectionOwner::customEvent;
        using KSelectionOwner::disconnectNotify;
        using KSelectionOwner::genericReply;
        using KSelectionOwner::getAtoms;
        using KSelectionOwner::replyTargets;
    };

    VirtualKSelectionOwner(xcb_atom_t selection) : KSelectionOwner(selection) {};
    VirtualKSelectionOwner(const char* selection) : KSelectionOwner(selection) {};
    VirtualKSelectionOwner(xcb_atom_t selection, xcb_connection_t* c, xcb_window_t root) : KSelectionOwner(selection, c, root) {};
    VirtualKSelectionOwner(const char* selection, xcb_connection_t* c, xcb_window_t root) : KSelectionOwner(selection, c, root) {};
    VirtualKSelectionOwner(xcb_atom_t selection, int screen) : KSelectionOwner(selection, screen) {};
    VirtualKSelectionOwner(xcb_atom_t selection, int screen, QObject* parent) : KSelectionOwner(selection, screen, parent) {};
    VirtualKSelectionOwner(const char* selection, int screen) : KSelectionOwner(selection, screen) {};
    VirtualKSelectionOwner(const char* selection, int screen, QObject* parent) : KSelectionOwner(selection, screen, parent) {};
    VirtualKSelectionOwner(xcb_atom_t selection, xcb_connection_t* c, xcb_window_t root, QObject* parent) : KSelectionOwner(selection, c, root, parent) {};
    VirtualKSelectionOwner(const char* selection, xcb_connection_t* c, xcb_window_t root, QObject* parent) : KSelectionOwner(selection, c, root, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kselectionowner_metaobject_callback) {
            QMetaObject* callback_ret = kselectionowner_metaobject_callback(this);
            return callback_ret;
        }
        return KSelectionOwner::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kselectionowner_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kselectionowner_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSelectionOwner::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kselectionowner_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kselectionowner_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSelectionOwner::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kselectionowner_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kselectionowner_timerevent_callback(this, cbval1);
            return;
        }
        KSelectionOwner::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool genericReply(xcb_atom_t target, xcb_atom_t property, xcb_window_t requestor) override {
        if (kselectionowner_genericreply_callback) {
            uint32_t cbval1 = target;
            uint32_t cbval2 = property;
            uint32_t cbval3 = requestor;
            bool callback_ret = kselectionowner_genericreply_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KSelectionOwner::genericReply(target, property, requestor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void replyTargets(xcb_atom_t property, xcb_window_t requestor) override {
        if (kselectionowner_replytargets_callback) {
            uint32_t cbval1 = property;
            uint32_t cbval2 = requestor;
            kselectionowner_replytargets_callback(this, cbval1, cbval2);
            return;
        }
        KSelectionOwner::replyTargets(property, requestor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getAtoms() override {
        if (kselectionowner_getatoms_callback) {
            kselectionowner_getatoms_callback(this);
            return;
        }
        KSelectionOwner::getAtoms();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kselectionowner_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kselectionowner_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSelectionOwner::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kselectionowner_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kselectionowner_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSelectionOwner::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kselectionowner_childevent_callback) {
            QChildEvent* cbval1 = event;
            kselectionowner_childevent_callback(this, cbval1);
            return;
        }
        KSelectionOwner::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kselectionowner_customevent_callback) {
            QEvent* cbval1 = event;
            kselectionowner_customevent_callback(this, cbval1);
            return;
        }
        KSelectionOwner::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kselectionowner_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kselectionowner_connectnotify_callback(this, cbval1);
            return;
        }
        KSelectionOwner::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kselectionowner_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kselectionowner_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSelectionOwner::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KSelectionOwner_SuperGenericReply(KSelectionOwner* self, uint32_t target, uint32_t property, uint32_t requestor);
    friend void KSelectionOwner_SuperReplyTargets(KSelectionOwner* self, uint32_t property, uint32_t requestor);
    friend void KSelectionOwner_SuperGetAtoms(KSelectionOwner* self);
    friend void KSelectionOwner_SuperChildEvent(KSelectionOwner* self, QChildEvent* event);
    friend void KSelectionOwner_SuperCustomEvent(KSelectionOwner* self, QEvent* event);
    friend void KSelectionOwner_SuperConnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
    friend void KSelectionOwner_SuperDisconnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
};

#endif
