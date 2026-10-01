#pragma once
#ifndef EXTRAS_KIO_LIBKURIFILTERSEARCHPROVIDERACTIONS_HXX
#define EXTRAS_KIO_LIBKURIFILTERSEARCHPROVIDERACTIONS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::KUriFilterSearchProviderActions
class VirtualKIOKUriFilterSearchProviderActions final : public KIO::KUriFilterSearchProviderActions {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__KUriFilterSearchProviderActions_MetaObject_Callback = QMetaObject* (*)(const KIO__KUriFilterSearchProviderActions*);
    using KIO__KUriFilterSearchProviderActions_Metacast_Callback = void* (*)(KIO__KUriFilterSearchProviderActions*, const char*);
    using KIO__KUriFilterSearchProviderActions_Metacall_Callback = int (*)(KIO__KUriFilterSearchProviderActions*, int, int, void**);
    using KIO__KUriFilterSearchProviderActions_Event_Callback = bool (*)(KIO__KUriFilterSearchProviderActions*, QEvent*);
    using KIO__KUriFilterSearchProviderActions_EventFilter_Callback = bool (*)(KIO__KUriFilterSearchProviderActions*, QObject*, QEvent*);
    using KIO__KUriFilterSearchProviderActions_TimerEvent_Callback = void (*)(KIO__KUriFilterSearchProviderActions*, QTimerEvent*);
    using KIO__KUriFilterSearchProviderActions_ChildEvent_Callback = void (*)(KIO__KUriFilterSearchProviderActions*, QChildEvent*);
    using KIO__KUriFilterSearchProviderActions_CustomEvent_Callback = void (*)(KIO__KUriFilterSearchProviderActions*, QEvent*);
    using KIO__KUriFilterSearchProviderActions_ConnectNotify_Callback = void (*)(KIO__KUriFilterSearchProviderActions*, QMetaMethod*);
    using KIO__KUriFilterSearchProviderActions_DisconnectNotify_Callback = void (*)(KIO__KUriFilterSearchProviderActions*, QMetaMethod*);
    using KIO::KUriFilterSearchProviderActions::isSignalConnected;
    using KIO::KUriFilterSearchProviderActions::receivers;
    using KIO::KUriFilterSearchProviderActions::sender;
    using KIO::KUriFilterSearchProviderActions::senderSignalIndex;

    // Instance callback storage
    KIO__KUriFilterSearchProviderActions_MetaObject_Callback kio__kurifiltersearchprovideractions_metaobject_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_Metacast_Callback kio__kurifiltersearchprovideractions_metacast_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_Metacall_Callback kio__kurifiltersearchprovideractions_metacall_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_Event_Callback kio__kurifiltersearchprovideractions_event_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_EventFilter_Callback kio__kurifiltersearchprovideractions_eventfilter_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_TimerEvent_Callback kio__kurifiltersearchprovideractions_timerevent_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_ChildEvent_Callback kio__kurifiltersearchprovideractions_childevent_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_CustomEvent_Callback kio__kurifiltersearchprovideractions_customevent_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_ConnectNotify_Callback kio__kurifiltersearchprovideractions_connectnotify_callback = nullptr;
    KIO__KUriFilterSearchProviderActions_DisconnectNotify_Callback kio__kurifiltersearchprovideractions_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::KUriFilterSearchProviderActions {
        using KIO::KUriFilterSearchProviderActions::childEvent;
        using KIO::KUriFilterSearchProviderActions::connectNotify;
        using KIO::KUriFilterSearchProviderActions::customEvent;
        using KIO::KUriFilterSearchProviderActions::disconnectNotify;
        using KIO::KUriFilterSearchProviderActions::timerEvent;
    };

    VirtualKIOKUriFilterSearchProviderActions() : KIO::KUriFilterSearchProviderActions() {};
    VirtualKIOKUriFilterSearchProviderActions(QObject* parent) : KIO::KUriFilterSearchProviderActions(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__kurifiltersearchprovideractions_metaobject_callback) {
            QMetaObject* callback_ret = kio__kurifiltersearchprovideractions_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__KUriFilterSearchProviderActions::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__kurifiltersearchprovideractions_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__kurifiltersearchprovideractions_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__KUriFilterSearchProviderActions::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__kurifiltersearchprovideractions_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__kurifiltersearchprovideractions_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__KUriFilterSearchProviderActions::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__kurifiltersearchprovideractions_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__kurifiltersearchprovideractions_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__KUriFilterSearchProviderActions::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__kurifiltersearchprovideractions_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__kurifiltersearchprovideractions_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__KUriFilterSearchProviderActions::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__kurifiltersearchprovideractions_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__kurifiltersearchprovideractions_timerevent_callback(this, cbval1);
            return;
        }
        KIO__KUriFilterSearchProviderActions::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__kurifiltersearchprovideractions_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__kurifiltersearchprovideractions_childevent_callback(this, cbval1);
            return;
        }
        KIO__KUriFilterSearchProviderActions::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__kurifiltersearchprovideractions_customevent_callback) {
            QEvent* cbval1 = event;
            kio__kurifiltersearchprovideractions_customevent_callback(this, cbval1);
            return;
        }
        KIO__KUriFilterSearchProviderActions::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__kurifiltersearchprovideractions_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__kurifiltersearchprovideractions_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__KUriFilterSearchProviderActions::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__kurifiltersearchprovideractions_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__kurifiltersearchprovideractions_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__KUriFilterSearchProviderActions::disconnectNotify(signal);
    }

    // Friend functions
    friend void KIO__KUriFilterSearchProviderActions_SuperTimerEvent(KIO::KUriFilterSearchProviderActions* self, QTimerEvent* event);
    friend void KIO__KUriFilterSearchProviderActions_SuperChildEvent(KIO::KUriFilterSearchProviderActions* self, QChildEvent* event);
    friend void KIO__KUriFilterSearchProviderActions_SuperCustomEvent(KIO::KUriFilterSearchProviderActions* self, QEvent* event);
    friend void KIO__KUriFilterSearchProviderActions_SuperConnectNotify(KIO::KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
    friend void KIO__KUriFilterSearchProviderActions_SuperDisconnectNotify(KIO::KUriFilterSearchProviderActions* self, const QMetaMethod* signal);
};

#endif
