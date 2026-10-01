#pragma once
#ifndef EXTRAS_SONNET_LIBBACKGROUNDCHECKER_HXX
#define EXTRAS_SONNET_LIBBACKGROUNDCHECKER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::BackgroundChecker
class VirtualSonnetBackgroundChecker final : public Sonnet::BackgroundChecker {
  public:
    // Virtual class public types (including callbacks and access types)
    using Sonnet__BackgroundChecker_MetaObject_Callback = QMetaObject* (*)(const Sonnet__BackgroundChecker*);
    using Sonnet__BackgroundChecker_Metacast_Callback = void* (*)(Sonnet__BackgroundChecker*, const char*);
    using Sonnet__BackgroundChecker_Metacall_Callback = int (*)(Sonnet__BackgroundChecker*, int, int, void**);
    using Sonnet__BackgroundChecker_Start_Callback = void (*)(Sonnet__BackgroundChecker*);
    using Sonnet__BackgroundChecker_Stop_Callback = void (*)(Sonnet__BackgroundChecker*);
    using Sonnet__BackgroundChecker_ContinueChecking_Callback = void (*)(Sonnet__BackgroundChecker*);
    using Sonnet__BackgroundChecker_FetchMoreText_Callback = const char* (*)(Sonnet__BackgroundChecker*);
    using Sonnet__BackgroundChecker_FinishedCurrentFeed_Callback = void (*)(Sonnet__BackgroundChecker*);
    using Sonnet__BackgroundChecker_Event_Callback = bool (*)(Sonnet__BackgroundChecker*, QEvent*);
    using Sonnet__BackgroundChecker_EventFilter_Callback = bool (*)(Sonnet__BackgroundChecker*, QObject*, QEvent*);
    using Sonnet__BackgroundChecker_TimerEvent_Callback = void (*)(Sonnet__BackgroundChecker*, QTimerEvent*);
    using Sonnet__BackgroundChecker_ChildEvent_Callback = void (*)(Sonnet__BackgroundChecker*, QChildEvent*);
    using Sonnet__BackgroundChecker_CustomEvent_Callback = void (*)(Sonnet__BackgroundChecker*, QEvent*);
    using Sonnet__BackgroundChecker_ConnectNotify_Callback = void (*)(Sonnet__BackgroundChecker*, QMetaMethod*);
    using Sonnet__BackgroundChecker_DisconnectNotify_Callback = void (*)(Sonnet__BackgroundChecker*, QMetaMethod*);
    using Sonnet::BackgroundChecker::isSignalConnected;
    using Sonnet::BackgroundChecker::receivers;
    using Sonnet::BackgroundChecker::sender;
    using Sonnet::BackgroundChecker::senderSignalIndex;
    using Sonnet::BackgroundChecker::slotEngineDone;

    // Instance callback storage
    Sonnet__BackgroundChecker_MetaObject_Callback sonnet__backgroundchecker_metaobject_callback = nullptr;
    Sonnet__BackgroundChecker_Metacast_Callback sonnet__backgroundchecker_metacast_callback = nullptr;
    Sonnet__BackgroundChecker_Metacall_Callback sonnet__backgroundchecker_metacall_callback = nullptr;
    Sonnet__BackgroundChecker_Start_Callback sonnet__backgroundchecker_start_callback = nullptr;
    Sonnet__BackgroundChecker_Stop_Callback sonnet__backgroundchecker_stop_callback = nullptr;
    Sonnet__BackgroundChecker_ContinueChecking_Callback sonnet__backgroundchecker_continuechecking_callback = nullptr;
    Sonnet__BackgroundChecker_FetchMoreText_Callback sonnet__backgroundchecker_fetchmoretext_callback = nullptr;
    Sonnet__BackgroundChecker_FinishedCurrentFeed_Callback sonnet__backgroundchecker_finishedcurrentfeed_callback = nullptr;
    Sonnet__BackgroundChecker_Event_Callback sonnet__backgroundchecker_event_callback = nullptr;
    Sonnet__BackgroundChecker_EventFilter_Callback sonnet__backgroundchecker_eventfilter_callback = nullptr;
    Sonnet__BackgroundChecker_TimerEvent_Callback sonnet__backgroundchecker_timerevent_callback = nullptr;
    Sonnet__BackgroundChecker_ChildEvent_Callback sonnet__backgroundchecker_childevent_callback = nullptr;
    Sonnet__BackgroundChecker_CustomEvent_Callback sonnet__backgroundchecker_customevent_callback = nullptr;
    Sonnet__BackgroundChecker_ConnectNotify_Callback sonnet__backgroundchecker_connectnotify_callback = nullptr;
    Sonnet__BackgroundChecker_DisconnectNotify_Callback sonnet__backgroundchecker_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Sonnet::BackgroundChecker {
        using Sonnet::BackgroundChecker::childEvent;
        using Sonnet::BackgroundChecker::connectNotify;
        using Sonnet::BackgroundChecker::customEvent;
        using Sonnet::BackgroundChecker::disconnectNotify;
        using Sonnet::BackgroundChecker::fetchMoreText;
        using Sonnet::BackgroundChecker::finishedCurrentFeed;
        using Sonnet::BackgroundChecker::timerEvent;
    };

    VirtualSonnetBackgroundChecker() : Sonnet::BackgroundChecker() {};
    VirtualSonnetBackgroundChecker(const Sonnet::Speller& speller) : Sonnet::BackgroundChecker(speller) {};
    VirtualSonnetBackgroundChecker(QObject* parent) : Sonnet::BackgroundChecker(parent) {};
    VirtualSonnetBackgroundChecker(const Sonnet::Speller& speller, QObject* parent) : Sonnet::BackgroundChecker(speller, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (sonnet__backgroundchecker_metaobject_callback) {
            QMetaObject* callback_ret = sonnet__backgroundchecker_metaobject_callback(this);
            return callback_ret;
        }
        return Sonnet__BackgroundChecker::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (sonnet__backgroundchecker_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = sonnet__backgroundchecker_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__BackgroundChecker::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__backgroundchecker_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = sonnet__backgroundchecker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__BackgroundChecker::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (sonnet__backgroundchecker_start_callback) {
            sonnet__backgroundchecker_start_callback(this);
            return;
        }
        Sonnet__BackgroundChecker::start();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stop() override {
        if (sonnet__backgroundchecker_stop_callback) {
            sonnet__backgroundchecker_stop_callback(this);
            return;
        }
        Sonnet__BackgroundChecker::stop();
    }

    // Virtual method for C ABI access and custom callback
    virtual void continueChecking() override {
        if (sonnet__backgroundchecker_continuechecking_callback) {
            sonnet__backgroundchecker_continuechecking_callback(this);
            return;
        }
        Sonnet__BackgroundChecker::continueChecking();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fetchMoreText() override {
        if (sonnet__backgroundchecker_fetchmoretext_callback) {
            const char* callback_ret = sonnet__backgroundchecker_fetchmoretext_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return Sonnet__BackgroundChecker::fetchMoreText();
    }

    // Virtual method for C ABI access and custom callback
    virtual void finishedCurrentFeed() override {
        if (sonnet__backgroundchecker_finishedcurrentfeed_callback) {
            sonnet__backgroundchecker_finishedcurrentfeed_callback(this);
            return;
        }
        Sonnet__BackgroundChecker::finishedCurrentFeed();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__backgroundchecker_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = sonnet__backgroundchecker_event_callback(this, cbval1);
            return callback_ret;
        }
        return Sonnet__BackgroundChecker::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (sonnet__backgroundchecker_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = sonnet__backgroundchecker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Sonnet__BackgroundChecker::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__backgroundchecker_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            sonnet__backgroundchecker_timerevent_callback(this, cbval1);
            return;
        }
        Sonnet__BackgroundChecker::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__backgroundchecker_childevent_callback) {
            QChildEvent* cbval1 = event;
            sonnet__backgroundchecker_childevent_callback(this, cbval1);
            return;
        }
        Sonnet__BackgroundChecker::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__backgroundchecker_customevent_callback) {
            QEvent* cbval1 = event;
            sonnet__backgroundchecker_customevent_callback(this, cbval1);
            return;
        }
        Sonnet__BackgroundChecker::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__backgroundchecker_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__backgroundchecker_connectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__BackgroundChecker::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__backgroundchecker_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            sonnet__backgroundchecker_disconnectnotify_callback(this, cbval1);
            return;
        }
        Sonnet__BackgroundChecker::disconnectNotify(signal);
    }

    // Friend functions
    friend libqt_string Sonnet__BackgroundChecker_SuperFetchMoreText(Sonnet::BackgroundChecker* self);
    friend void Sonnet__BackgroundChecker_SuperFinishedCurrentFeed(Sonnet::BackgroundChecker* self);
    friend void Sonnet__BackgroundChecker_SuperTimerEvent(Sonnet::BackgroundChecker* self, QTimerEvent* event);
    friend void Sonnet__BackgroundChecker_SuperChildEvent(Sonnet::BackgroundChecker* self, QChildEvent* event);
    friend void Sonnet__BackgroundChecker_SuperCustomEvent(Sonnet::BackgroundChecker* self, QEvent* event);
    friend void Sonnet__BackgroundChecker_SuperConnectNotify(Sonnet::BackgroundChecker* self, const QMetaMethod* signal);
    friend void Sonnet__BackgroundChecker_SuperDisconnectNotify(Sonnet::BackgroundChecker* self, const QMetaMethod* signal);
};

#endif
