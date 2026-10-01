#pragma once
#ifndef EXTRAS_KSYNTAXHIGHLIGHTING_LIBREPOSITORY_HXX
#define EXTRAS_KSYNTAXHIGHLIGHTING_LIBREPOSITORY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSyntaxHighlighting::Repository
class VirtualKSyntaxHighlightingRepository final : public KSyntaxHighlighting::Repository {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSyntaxHighlighting__Repository_MetaObject_Callback = QMetaObject* (*)(const KSyntaxHighlighting__Repository*);
    using KSyntaxHighlighting__Repository_Metacast_Callback = void* (*)(KSyntaxHighlighting__Repository*, const char*);
    using KSyntaxHighlighting__Repository_Metacall_Callback = int (*)(KSyntaxHighlighting__Repository*, int, int, void**);
    using KSyntaxHighlighting__Repository_Event_Callback = bool (*)(KSyntaxHighlighting__Repository*, QEvent*);
    using KSyntaxHighlighting__Repository_EventFilter_Callback = bool (*)(KSyntaxHighlighting__Repository*, QObject*, QEvent*);
    using KSyntaxHighlighting__Repository_TimerEvent_Callback = void (*)(KSyntaxHighlighting__Repository*, QTimerEvent*);
    using KSyntaxHighlighting__Repository_ChildEvent_Callback = void (*)(KSyntaxHighlighting__Repository*, QChildEvent*);
    using KSyntaxHighlighting__Repository_CustomEvent_Callback = void (*)(KSyntaxHighlighting__Repository*, QEvent*);
    using KSyntaxHighlighting__Repository_ConnectNotify_Callback = void (*)(KSyntaxHighlighting__Repository*, QMetaMethod*);
    using KSyntaxHighlighting__Repository_DisconnectNotify_Callback = void (*)(KSyntaxHighlighting__Repository*, QMetaMethod*);
    using KSyntaxHighlighting::Repository::isSignalConnected;
    using KSyntaxHighlighting::Repository::receivers;
    using KSyntaxHighlighting::Repository::sender;
    using KSyntaxHighlighting::Repository::senderSignalIndex;

    // Instance callback storage
    KSyntaxHighlighting__Repository_MetaObject_Callback ksyntaxhighlighting__repository_metaobject_callback = nullptr;
    KSyntaxHighlighting__Repository_Metacast_Callback ksyntaxhighlighting__repository_metacast_callback = nullptr;
    KSyntaxHighlighting__Repository_Metacall_Callback ksyntaxhighlighting__repository_metacall_callback = nullptr;
    KSyntaxHighlighting__Repository_Event_Callback ksyntaxhighlighting__repository_event_callback = nullptr;
    KSyntaxHighlighting__Repository_EventFilter_Callback ksyntaxhighlighting__repository_eventfilter_callback = nullptr;
    KSyntaxHighlighting__Repository_TimerEvent_Callback ksyntaxhighlighting__repository_timerevent_callback = nullptr;
    KSyntaxHighlighting__Repository_ChildEvent_Callback ksyntaxhighlighting__repository_childevent_callback = nullptr;
    KSyntaxHighlighting__Repository_CustomEvent_Callback ksyntaxhighlighting__repository_customevent_callback = nullptr;
    KSyntaxHighlighting__Repository_ConnectNotify_Callback ksyntaxhighlighting__repository_connectnotify_callback = nullptr;
    KSyntaxHighlighting__Repository_DisconnectNotify_Callback ksyntaxhighlighting__repository_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSyntaxHighlighting::Repository {
        using KSyntaxHighlighting::Repository::childEvent;
        using KSyntaxHighlighting::Repository::connectNotify;
        using KSyntaxHighlighting::Repository::customEvent;
        using KSyntaxHighlighting::Repository::disconnectNotify;
        using KSyntaxHighlighting::Repository::timerEvent;
    };

    VirtualKSyntaxHighlightingRepository() : KSyntaxHighlighting::Repository() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksyntaxhighlighting__repository_metaobject_callback) {
            QMetaObject* callback_ret = ksyntaxhighlighting__repository_metaobject_callback(this);
            return callback_ret;
        }
        return KSyntaxHighlighting__Repository::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksyntaxhighlighting__repository_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ksyntaxhighlighting__repository_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSyntaxHighlighting__Repository::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksyntaxhighlighting__repository_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ksyntaxhighlighting__repository_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSyntaxHighlighting__Repository::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksyntaxhighlighting__repository_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ksyntaxhighlighting__repository_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSyntaxHighlighting__Repository::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksyntaxhighlighting__repository_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ksyntaxhighlighting__repository_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSyntaxHighlighting__Repository::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksyntaxhighlighting__repository_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ksyntaxhighlighting__repository_timerevent_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__Repository::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksyntaxhighlighting__repository_childevent_callback) {
            QChildEvent* cbval1 = event;
            ksyntaxhighlighting__repository_childevent_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__Repository::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksyntaxhighlighting__repository_customevent_callback) {
            QEvent* cbval1 = event;
            ksyntaxhighlighting__repository_customevent_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__Repository::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__repository_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksyntaxhighlighting__repository_connectnotify_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__Repository::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__repository_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksyntaxhighlighting__repository_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__Repository::disconnectNotify(signal);
    }

    // Friend functions
    friend void KSyntaxHighlighting__Repository_SuperTimerEvent(KSyntaxHighlighting::Repository* self, QTimerEvent* event);
    friend void KSyntaxHighlighting__Repository_SuperChildEvent(KSyntaxHighlighting::Repository* self, QChildEvent* event);
    friend void KSyntaxHighlighting__Repository_SuperCustomEvent(KSyntaxHighlighting::Repository* self, QEvent* event);
    friend void KSyntaxHighlighting__Repository_SuperConnectNotify(KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__Repository_SuperDisconnectNotify(KSyntaxHighlighting::Repository* self, const QMetaMethod* signal);
};

#endif
