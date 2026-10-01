#pragma once
#ifndef EXTRAS_KIO_LIBKFILEPREVIEWGENERATOR_HXX
#define EXTRAS_KIO_LIBKFILEPREVIEWGENERATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFilePreviewGenerator
class VirtualKFilePreviewGenerator final : public KFilePreviewGenerator {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFilePreviewGenerator_MetaObject_Callback = QMetaObject* (*)(const KFilePreviewGenerator*);
    using KFilePreviewGenerator_Metacast_Callback = void* (*)(KFilePreviewGenerator*, const char*);
    using KFilePreviewGenerator_Metacall_Callback = int (*)(KFilePreviewGenerator*, int, int, void**);
    using KFilePreviewGenerator_Event_Callback = bool (*)(KFilePreviewGenerator*, QEvent*);
    using KFilePreviewGenerator_EventFilter_Callback = bool (*)(KFilePreviewGenerator*, QObject*, QEvent*);
    using KFilePreviewGenerator_TimerEvent_Callback = void (*)(KFilePreviewGenerator*, QTimerEvent*);
    using KFilePreviewGenerator_ChildEvent_Callback = void (*)(KFilePreviewGenerator*, QChildEvent*);
    using KFilePreviewGenerator_CustomEvent_Callback = void (*)(KFilePreviewGenerator*, QEvent*);
    using KFilePreviewGenerator_ConnectNotify_Callback = void (*)(KFilePreviewGenerator*, QMetaMethod*);
    using KFilePreviewGenerator_DisconnectNotify_Callback = void (*)(KFilePreviewGenerator*, QMetaMethod*);
    using KFilePreviewGenerator::isSignalConnected;
    using KFilePreviewGenerator::receivers;
    using KFilePreviewGenerator::sender;
    using KFilePreviewGenerator::senderSignalIndex;

    // Instance callback storage
    KFilePreviewGenerator_MetaObject_Callback kfilepreviewgenerator_metaobject_callback = nullptr;
    KFilePreviewGenerator_Metacast_Callback kfilepreviewgenerator_metacast_callback = nullptr;
    KFilePreviewGenerator_Metacall_Callback kfilepreviewgenerator_metacall_callback = nullptr;
    KFilePreviewGenerator_Event_Callback kfilepreviewgenerator_event_callback = nullptr;
    KFilePreviewGenerator_EventFilter_Callback kfilepreviewgenerator_eventfilter_callback = nullptr;
    KFilePreviewGenerator_TimerEvent_Callback kfilepreviewgenerator_timerevent_callback = nullptr;
    KFilePreviewGenerator_ChildEvent_Callback kfilepreviewgenerator_childevent_callback = nullptr;
    KFilePreviewGenerator_CustomEvent_Callback kfilepreviewgenerator_customevent_callback = nullptr;
    KFilePreviewGenerator_ConnectNotify_Callback kfilepreviewgenerator_connectnotify_callback = nullptr;
    KFilePreviewGenerator_DisconnectNotify_Callback kfilepreviewgenerator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFilePreviewGenerator {
        using KFilePreviewGenerator::childEvent;
        using KFilePreviewGenerator::connectNotify;
        using KFilePreviewGenerator::customEvent;
        using KFilePreviewGenerator::disconnectNotify;
        using KFilePreviewGenerator::timerEvent;
    };

    VirtualKFilePreviewGenerator(QAbstractItemView* parent) : KFilePreviewGenerator(parent) {};
    VirtualKFilePreviewGenerator(KAbstractViewAdapter* parent, QAbstractProxyModel* model) : KFilePreviewGenerator(parent, model) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfilepreviewgenerator_metaobject_callback) {
            QMetaObject* callback_ret = kfilepreviewgenerator_metaobject_callback(this);
            return callback_ret;
        }
        return KFilePreviewGenerator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfilepreviewgenerator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfilepreviewgenerator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePreviewGenerator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilepreviewgenerator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfilepreviewgenerator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFilePreviewGenerator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilepreviewgenerator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfilepreviewgenerator_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePreviewGenerator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfilepreviewgenerator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kfilepreviewgenerator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFilePreviewGenerator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilepreviewgenerator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfilepreviewgenerator_timerevent_callback(this, cbval1);
            return;
        }
        KFilePreviewGenerator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilepreviewgenerator_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfilepreviewgenerator_childevent_callback(this, cbval1);
            return;
        }
        KFilePreviewGenerator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilepreviewgenerator_customevent_callback) {
            QEvent* cbval1 = event;
            kfilepreviewgenerator_customevent_callback(this, cbval1);
            return;
        }
        KFilePreviewGenerator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilepreviewgenerator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilepreviewgenerator_connectnotify_callback(this, cbval1);
            return;
        }
        KFilePreviewGenerator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilepreviewgenerator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilepreviewgenerator_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFilePreviewGenerator::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFilePreviewGenerator_SuperTimerEvent(KFilePreviewGenerator* self, QTimerEvent* event);
    friend void KFilePreviewGenerator_SuperChildEvent(KFilePreviewGenerator* self, QChildEvent* event);
    friend void KFilePreviewGenerator_SuperCustomEvent(KFilePreviewGenerator* self, QEvent* event);
    friend void KFilePreviewGenerator_SuperConnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal);
    friend void KFilePreviewGenerator_SuperDisconnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal);
};

#endif
