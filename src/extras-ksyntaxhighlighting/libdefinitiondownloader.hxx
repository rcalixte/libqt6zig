#pragma once
#ifndef EXTRAS_KSYNTAXHIGHLIGHTING_LIBDEFINITIONDOWNLOADER_HXX
#define EXTRAS_KSYNTAXHIGHLIGHTING_LIBDEFINITIONDOWNLOADER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSyntaxHighlighting::DefinitionDownloader
class VirtualKSyntaxHighlightingDefinitionDownloader final : public KSyntaxHighlighting::DefinitionDownloader {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSyntaxHighlighting__DefinitionDownloader_MetaObject_Callback = QMetaObject* (*)(const KSyntaxHighlighting__DefinitionDownloader*);
    using KSyntaxHighlighting__DefinitionDownloader_Metacast_Callback = void* (*)(KSyntaxHighlighting__DefinitionDownloader*, const char*);
    using KSyntaxHighlighting__DefinitionDownloader_Metacall_Callback = int (*)(KSyntaxHighlighting__DefinitionDownloader*, int, int, void**);
    using KSyntaxHighlighting__DefinitionDownloader_Event_Callback = bool (*)(KSyntaxHighlighting__DefinitionDownloader*, QEvent*);
    using KSyntaxHighlighting__DefinitionDownloader_EventFilter_Callback = bool (*)(KSyntaxHighlighting__DefinitionDownloader*, QObject*, QEvent*);
    using KSyntaxHighlighting__DefinitionDownloader_TimerEvent_Callback = void (*)(KSyntaxHighlighting__DefinitionDownloader*, QTimerEvent*);
    using KSyntaxHighlighting__DefinitionDownloader_ChildEvent_Callback = void (*)(KSyntaxHighlighting__DefinitionDownloader*, QChildEvent*);
    using KSyntaxHighlighting__DefinitionDownloader_CustomEvent_Callback = void (*)(KSyntaxHighlighting__DefinitionDownloader*, QEvent*);
    using KSyntaxHighlighting__DefinitionDownloader_ConnectNotify_Callback = void (*)(KSyntaxHighlighting__DefinitionDownloader*, QMetaMethod*);
    using KSyntaxHighlighting__DefinitionDownloader_DisconnectNotify_Callback = void (*)(KSyntaxHighlighting__DefinitionDownloader*, QMetaMethod*);
    using KSyntaxHighlighting::DefinitionDownloader::isSignalConnected;
    using KSyntaxHighlighting::DefinitionDownloader::receivers;
    using KSyntaxHighlighting::DefinitionDownloader::sender;
    using KSyntaxHighlighting::DefinitionDownloader::senderSignalIndex;

    // Instance callback storage
    KSyntaxHighlighting__DefinitionDownloader_MetaObject_Callback ksyntaxhighlighting__definitiondownloader_metaobject_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_Metacast_Callback ksyntaxhighlighting__definitiondownloader_metacast_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_Metacall_Callback ksyntaxhighlighting__definitiondownloader_metacall_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_Event_Callback ksyntaxhighlighting__definitiondownloader_event_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_EventFilter_Callback ksyntaxhighlighting__definitiondownloader_eventfilter_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_TimerEvent_Callback ksyntaxhighlighting__definitiondownloader_timerevent_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_ChildEvent_Callback ksyntaxhighlighting__definitiondownloader_childevent_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_CustomEvent_Callback ksyntaxhighlighting__definitiondownloader_customevent_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_ConnectNotify_Callback ksyntaxhighlighting__definitiondownloader_connectnotify_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_DisconnectNotify_Callback ksyntaxhighlighting__definitiondownloader_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSyntaxHighlighting::DefinitionDownloader {
        using KSyntaxHighlighting::DefinitionDownloader::childEvent;
        using KSyntaxHighlighting::DefinitionDownloader::connectNotify;
        using KSyntaxHighlighting::DefinitionDownloader::customEvent;
        using KSyntaxHighlighting::DefinitionDownloader::disconnectNotify;
        using KSyntaxHighlighting::DefinitionDownloader::timerEvent;
    };

    VirtualKSyntaxHighlightingDefinitionDownloader(KSyntaxHighlighting::Repository* repo) : KSyntaxHighlighting::DefinitionDownloader(repo) {};
    VirtualKSyntaxHighlightingDefinitionDownloader(KSyntaxHighlighting::Repository* repo, QObject* parent) : KSyntaxHighlighting::DefinitionDownloader(repo, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksyntaxhighlighting__definitiondownloader_metaobject_callback) {
            QMetaObject* callback_ret = ksyntaxhighlighting__definitiondownloader_metaobject_callback(this);
            return callback_ret;
        }
        return KSyntaxHighlighting__DefinitionDownloader::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksyntaxhighlighting__definitiondownloader_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ksyntaxhighlighting__definitiondownloader_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSyntaxHighlighting__DefinitionDownloader::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksyntaxhighlighting__definitiondownloader_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ksyntaxhighlighting__definitiondownloader_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSyntaxHighlighting__DefinitionDownloader::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksyntaxhighlighting__definitiondownloader_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ksyntaxhighlighting__definitiondownloader_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSyntaxHighlighting__DefinitionDownloader::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksyntaxhighlighting__definitiondownloader_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ksyntaxhighlighting__definitiondownloader_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSyntaxHighlighting__DefinitionDownloader::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksyntaxhighlighting__definitiondownloader_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ksyntaxhighlighting__definitiondownloader_timerevent_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__DefinitionDownloader::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksyntaxhighlighting__definitiondownloader_childevent_callback) {
            QChildEvent* cbval1 = event;
            ksyntaxhighlighting__definitiondownloader_childevent_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__DefinitionDownloader::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksyntaxhighlighting__definitiondownloader_customevent_callback) {
            QEvent* cbval1 = event;
            ksyntaxhighlighting__definitiondownloader_customevent_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__DefinitionDownloader::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__definitiondownloader_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksyntaxhighlighting__definitiondownloader_connectnotify_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__DefinitionDownloader::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__definitiondownloader_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksyntaxhighlighting__definitiondownloader_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSyntaxHighlighting__DefinitionDownloader::disconnectNotify(signal);
    }

    // Friend functions
    friend void KSyntaxHighlighting__DefinitionDownloader_SuperTimerEvent(KSyntaxHighlighting::DefinitionDownloader* self, QTimerEvent* event);
    friend void KSyntaxHighlighting__DefinitionDownloader_SuperChildEvent(KSyntaxHighlighting::DefinitionDownloader* self, QChildEvent* event);
    friend void KSyntaxHighlighting__DefinitionDownloader_SuperCustomEvent(KSyntaxHighlighting::DefinitionDownloader* self, QEvent* event);
    friend void KSyntaxHighlighting__DefinitionDownloader_SuperConnectNotify(KSyntaxHighlighting::DefinitionDownloader* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__DefinitionDownloader_SuperDisconnectNotify(KSyntaxHighlighting::DefinitionDownloader* self, const QMetaMethod* signal);
};

#endif
