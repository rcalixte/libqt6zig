#pragma once
#ifndef EXTRAS_KNEWSTUFF_LIBENGINEBASE_HXX
#define EXTRAS_KNEWSTUFF_LIBENGINEBASE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSCore::EngineBase
class VirtualKNSCoreEngineBase final : public KNSCore::EngineBase {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNSCore__EngineBase_MetaObject_Callback = QMetaObject* (*)(const KNSCore__EngineBase*);
    using KNSCore__EngineBase_Metacast_Callback = void* (*)(KNSCore__EngineBase*, const char*);
    using KNSCore__EngineBase_Metacall_Callback = int (*)(KNSCore__EngineBase*, int, int, void**);
    using KNSCore__EngineBase_Init_Callback = bool (*)(KNSCore__EngineBase*, const char*);
    using KNSCore__EngineBase_UpdateStatus_Callback = void (*)(KNSCore__EngineBase*);
    using KNSCore__EngineBase_Event_Callback = bool (*)(KNSCore__EngineBase*, QEvent*);
    using KNSCore__EngineBase_EventFilter_Callback = bool (*)(KNSCore__EngineBase*, QObject*, QEvent*);
    using KNSCore__EngineBase_TimerEvent_Callback = void (*)(KNSCore__EngineBase*, QTimerEvent*);
    using KNSCore__EngineBase_ChildEvent_Callback = void (*)(KNSCore__EngineBase*, QChildEvent*);
    using KNSCore__EngineBase_CustomEvent_Callback = void (*)(KNSCore__EngineBase*, QEvent*);
    using KNSCore__EngineBase_ConnectNotify_Callback = void (*)(KNSCore__EngineBase*, QMetaMethod*);
    using KNSCore__EngineBase_DisconnectNotify_Callback = void (*)(KNSCore__EngineBase*, QMetaMethod*);
    using KNSCore::EngineBase::isSignalConnected;
    using KNSCore::EngineBase::receivers;
    using KNSCore::EngineBase::sender;
    using KNSCore::EngineBase::senderSignalIndex;

    // Instance callback storage
    KNSCore__EngineBase_MetaObject_Callback knscore__enginebase_metaobject_callback = nullptr;
    KNSCore__EngineBase_Metacast_Callback knscore__enginebase_metacast_callback = nullptr;
    KNSCore__EngineBase_Metacall_Callback knscore__enginebase_metacall_callback = nullptr;
    KNSCore__EngineBase_Init_Callback knscore__enginebase_init_callback = nullptr;
    KNSCore__EngineBase_UpdateStatus_Callback knscore__enginebase_updatestatus_callback = nullptr;
    KNSCore__EngineBase_Event_Callback knscore__enginebase_event_callback = nullptr;
    KNSCore__EngineBase_EventFilter_Callback knscore__enginebase_eventfilter_callback = nullptr;
    KNSCore__EngineBase_TimerEvent_Callback knscore__enginebase_timerevent_callback = nullptr;
    KNSCore__EngineBase_ChildEvent_Callback knscore__enginebase_childevent_callback = nullptr;
    KNSCore__EngineBase_CustomEvent_Callback knscore__enginebase_customevent_callback = nullptr;
    KNSCore__EngineBase_ConnectNotify_Callback knscore__enginebase_connectnotify_callback = nullptr;
    KNSCore__EngineBase_DisconnectNotify_Callback knscore__enginebase_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNSCore::EngineBase {
        using KNSCore::EngineBase::childEvent;
        using KNSCore::EngineBase::connectNotify;
        using KNSCore::EngineBase::customEvent;
        using KNSCore::EngineBase::disconnectNotify;
        using KNSCore::EngineBase::timerEvent;
        using KNSCore::EngineBase::updateStatus;
    };

    VirtualKNSCoreEngineBase() : KNSCore::EngineBase() {};
    VirtualKNSCoreEngineBase(QObject* parent) : KNSCore::EngineBase(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knscore__enginebase_metaobject_callback) {
            QMetaObject* callback_ret = knscore__enginebase_metaobject_callback(this);
            return callback_ret;
        }
        return KNSCore__EngineBase::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knscore__enginebase_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knscore__enginebase_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__EngineBase::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knscore__enginebase_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knscore__enginebase_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__EngineBase::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool init(const QString& configfile) override {
        if (knscore__enginebase_init_callback) {
            const auto configfile_ret = configfile;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray configfile_b = configfile_ret.toUtf8();
            auto configfile_str_len = configfile_b.length();
            const char* configfile_str = static_cast<const char*>(malloc(configfile_str_len + 1));
            memcpy((void*)configfile_str, configfile_b.data(), configfile_str_len);
            ((char*)configfile_str)[configfile_str_len] = '\0';
            const char* cbval1 = configfile_str;
            bool callback_ret = knscore__enginebase_init_callback(this, cbval1);
            libqt_free(configfile_str);
            return callback_ret;
        }
        return KNSCore__EngineBase::init(configfile);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateStatus() override {
        if (knscore__enginebase_updatestatus_callback) {
            knscore__enginebase_updatestatus_callback(this);
            return;
        }
        KNSCore__EngineBase::updateStatus();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knscore__enginebase_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knscore__enginebase_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__EngineBase::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knscore__enginebase_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = knscore__enginebase_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSCore__EngineBase::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knscore__enginebase_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knscore__enginebase_timerevent_callback(this, cbval1);
            return;
        }
        KNSCore__EngineBase::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knscore__enginebase_childevent_callback) {
            QChildEvent* cbval1 = event;
            knscore__enginebase_childevent_callback(this, cbval1);
            return;
        }
        KNSCore__EngineBase::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knscore__enginebase_customevent_callback) {
            QEvent* cbval1 = event;
            knscore__enginebase_customevent_callback(this, cbval1);
            return;
        }
        KNSCore__EngineBase::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knscore__enginebase_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knscore__enginebase_connectnotify_callback(this, cbval1);
            return;
        }
        KNSCore__EngineBase::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knscore__enginebase_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knscore__enginebase_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNSCore__EngineBase::disconnectNotify(signal);
    }

    // Friend functions
    friend void KNSCore__EngineBase_SuperUpdateStatus(KNSCore::EngineBase* self);
    friend void KNSCore__EngineBase_SuperTimerEvent(KNSCore::EngineBase* self, QTimerEvent* event);
    friend void KNSCore__EngineBase_SuperChildEvent(KNSCore::EngineBase* self, QChildEvent* event);
    friend void KNSCore__EngineBase_SuperCustomEvent(KNSCore::EngineBase* self, QEvent* event);
    friend void KNSCore__EngineBase_SuperConnectNotify(KNSCore::EngineBase* self, const QMetaMethod* signal);
    friend void KNSCore__EngineBase_SuperDisconnectNotify(KNSCore::EngineBase* self, const QMetaMethod* signal);
};

#endif
