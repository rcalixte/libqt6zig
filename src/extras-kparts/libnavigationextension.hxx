#pragma once
#ifndef EXTRAS_KPARTS_LIBNAVIGATIONEXTENSION_HXX
#define EXTRAS_KPARTS_LIBNAVIGATIONEXTENSION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::NavigationExtension
class VirtualKPartsNavigationExtension final : public KParts::NavigationExtension {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__NavigationExtension_MetaObject_Callback = QMetaObject* (*)(const KParts__NavigationExtension*);
    using KParts__NavigationExtension_Metacast_Callback = void* (*)(KParts__NavigationExtension*, const char*);
    using KParts__NavigationExtension_Metacall_Callback = int (*)(KParts__NavigationExtension*, int, int, void**);
    using KParts__NavigationExtension_XOffset_Callback = int (*)(KParts__NavigationExtension*);
    using KParts__NavigationExtension_YOffset_Callback = int (*)(KParts__NavigationExtension*);
    using KParts__NavigationExtension_SaveState_Callback = void (*)(KParts__NavigationExtension*, QDataStream*);
    using KParts__NavigationExtension_RestoreState_Callback = void (*)(KParts__NavigationExtension*, QDataStream*);
    using KParts__NavigationExtension_Event_Callback = bool (*)(KParts__NavigationExtension*, QEvent*);
    using KParts__NavigationExtension_EventFilter_Callback = bool (*)(KParts__NavigationExtension*, QObject*, QEvent*);
    using KParts__NavigationExtension_TimerEvent_Callback = void (*)(KParts__NavigationExtension*, QTimerEvent*);
    using KParts__NavigationExtension_ChildEvent_Callback = void (*)(KParts__NavigationExtension*, QChildEvent*);
    using KParts__NavigationExtension_CustomEvent_Callback = void (*)(KParts__NavigationExtension*, QEvent*);
    using KParts__NavigationExtension_ConnectNotify_Callback = void (*)(KParts__NavigationExtension*, QMetaMethod*);
    using KParts__NavigationExtension_DisconnectNotify_Callback = void (*)(KParts__NavigationExtension*, QMetaMethod*);
    using KParts::NavigationExtension::isSignalConnected;
    using KParts::NavigationExtension::receivers;
    using KParts::NavigationExtension::sender;
    using KParts::NavigationExtension::senderSignalIndex;

    // Instance callback storage
    KParts__NavigationExtension_MetaObject_Callback kparts__navigationextension_metaobject_callback = nullptr;
    KParts__NavigationExtension_Metacast_Callback kparts__navigationextension_metacast_callback = nullptr;
    KParts__NavigationExtension_Metacall_Callback kparts__navigationextension_metacall_callback = nullptr;
    KParts__NavigationExtension_XOffset_Callback kparts__navigationextension_xoffset_callback = nullptr;
    KParts__NavigationExtension_YOffset_Callback kparts__navigationextension_yoffset_callback = nullptr;
    KParts__NavigationExtension_SaveState_Callback kparts__navigationextension_savestate_callback = nullptr;
    KParts__NavigationExtension_RestoreState_Callback kparts__navigationextension_restorestate_callback = nullptr;
    KParts__NavigationExtension_Event_Callback kparts__navigationextension_event_callback = nullptr;
    KParts__NavigationExtension_EventFilter_Callback kparts__navigationextension_eventfilter_callback = nullptr;
    KParts__NavigationExtension_TimerEvent_Callback kparts__navigationextension_timerevent_callback = nullptr;
    KParts__NavigationExtension_ChildEvent_Callback kparts__navigationextension_childevent_callback = nullptr;
    KParts__NavigationExtension_CustomEvent_Callback kparts__navigationextension_customevent_callback = nullptr;
    KParts__NavigationExtension_ConnectNotify_Callback kparts__navigationextension_connectnotify_callback = nullptr;
    KParts__NavigationExtension_DisconnectNotify_Callback kparts__navigationextension_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KParts::NavigationExtension {
        using KParts::NavigationExtension::childEvent;
        using KParts::NavigationExtension::connectNotify;
        using KParts::NavigationExtension::customEvent;
        using KParts::NavigationExtension::disconnectNotify;
        using KParts::NavigationExtension::timerEvent;
    };

    VirtualKPartsNavigationExtension(KParts::ReadOnlyPart* parent) : KParts::NavigationExtension(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kparts__navigationextension_metaobject_callback) {
            QMetaObject* callback_ret = kparts__navigationextension_metaobject_callback(this);
            return callback_ret;
        }
        return KParts__NavigationExtension::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__navigationextension_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kparts__navigationextension_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__NavigationExtension::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__navigationextension_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kparts__navigationextension_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__NavigationExtension::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int xOffset() override {
        if (kparts__navigationextension_xoffset_callback) {
            int callback_ret = kparts__navigationextension_xoffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KParts__NavigationExtension::xOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual int yOffset() override {
        if (kparts__navigationextension_yoffset_callback) {
            int callback_ret = kparts__navigationextension_yoffset_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KParts__NavigationExtension::yOffset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveState(QDataStream& stream) override {
        if (kparts__navigationextension_savestate_callback) {
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &stream_ret;
            kparts__navigationextension_savestate_callback(this, cbval1);
            return;
        }
        KParts__NavigationExtension::saveState(stream);
    }

    // Virtual method for C ABI access and custom callback
    virtual void restoreState(QDataStream& stream) override {
        if (kparts__navigationextension_restorestate_callback) {
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &stream_ret;
            kparts__navigationextension_restorestate_callback(this, cbval1);
            return;
        }
        KParts__NavigationExtension::restoreState(stream);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__navigationextension_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kparts__navigationextension_event_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__NavigationExtension::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__navigationextension_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kparts__navigationextension_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__NavigationExtension::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__navigationextension_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kparts__navigationextension_timerevent_callback(this, cbval1);
            return;
        }
        KParts__NavigationExtension::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__navigationextension_childevent_callback) {
            QChildEvent* cbval1 = event;
            kparts__navigationextension_childevent_callback(this, cbval1);
            return;
        }
        KParts__NavigationExtension::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__navigationextension_customevent_callback) {
            QEvent* cbval1 = event;
            kparts__navigationextension_customevent_callback(this, cbval1);
            return;
        }
        KParts__NavigationExtension::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__navigationextension_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__navigationextension_connectnotify_callback(this, cbval1);
            return;
        }
        KParts__NavigationExtension::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__navigationextension_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__navigationextension_disconnectnotify_callback(this, cbval1);
            return;
        }
        KParts__NavigationExtension::disconnectNotify(signal);
    }

    // Friend functions
    friend void KParts__NavigationExtension_SuperTimerEvent(KParts::NavigationExtension* self, QTimerEvent* event);
    friend void KParts__NavigationExtension_SuperChildEvent(KParts::NavigationExtension* self, QChildEvent* event);
    friend void KParts__NavigationExtension_SuperCustomEvent(KParts::NavigationExtension* self, QEvent* event);
    friend void KParts__NavigationExtension_SuperConnectNotify(KParts::NavigationExtension* self, const QMetaMethod* signal);
    friend void KParts__NavigationExtension_SuperDisconnectNotify(KParts::NavigationExtension* self, const QMetaMethod* signal);
};

#endif
