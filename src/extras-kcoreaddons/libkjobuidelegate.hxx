#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKJOBUIDELEGATE_HXX
#define EXTRAS_KCOREADDONS_LIBKJOBUIDELEGATE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KJobUiDelegate
class VirtualKJobUiDelegate final : public KJobUiDelegate {
  public:
    // Virtual class public types (including callbacks and access types)
    using KJobUiDelegate_MetaObject_Callback = QMetaObject* (*)(const KJobUiDelegate*);
    using KJobUiDelegate_Metacast_Callback = void* (*)(KJobUiDelegate*, const char*);
    using KJobUiDelegate_Metacall_Callback = int (*)(KJobUiDelegate*, int, int, void**);
    using KJobUiDelegate_SetJob_Callback = bool (*)(KJobUiDelegate*, KJob*);
    using KJobUiDelegate_ShowErrorMessage_Callback = void (*)(KJobUiDelegate*);
    using KJobUiDelegate_SlotWarning_Callback = void (*)(KJobUiDelegate*, KJob*, const char*);
    using KJobUiDelegate_Event_Callback = bool (*)(KJobUiDelegate*, QEvent*);
    using KJobUiDelegate_EventFilter_Callback = bool (*)(KJobUiDelegate*, QObject*, QEvent*);
    using KJobUiDelegate_TimerEvent_Callback = void (*)(KJobUiDelegate*, QTimerEvent*);
    using KJobUiDelegate_ChildEvent_Callback = void (*)(KJobUiDelegate*, QChildEvent*);
    using KJobUiDelegate_CustomEvent_Callback = void (*)(KJobUiDelegate*, QEvent*);
    using KJobUiDelegate_ConnectNotify_Callback = void (*)(KJobUiDelegate*, QMetaMethod*);
    using KJobUiDelegate_DisconnectNotify_Callback = void (*)(KJobUiDelegate*, QMetaMethod*);
    using KJobUiDelegate::isSignalConnected;
    using KJobUiDelegate::job;
    using KJobUiDelegate::receivers;
    using KJobUiDelegate::sender;
    using KJobUiDelegate::senderSignalIndex;

    // Instance callback storage
    KJobUiDelegate_MetaObject_Callback kjobuidelegate_metaobject_callback = nullptr;
    KJobUiDelegate_Metacast_Callback kjobuidelegate_metacast_callback = nullptr;
    KJobUiDelegate_Metacall_Callback kjobuidelegate_metacall_callback = nullptr;
    KJobUiDelegate_SetJob_Callback kjobuidelegate_setjob_callback = nullptr;
    KJobUiDelegate_ShowErrorMessage_Callback kjobuidelegate_showerrormessage_callback = nullptr;
    KJobUiDelegate_SlotWarning_Callback kjobuidelegate_slotwarning_callback = nullptr;
    KJobUiDelegate_Event_Callback kjobuidelegate_event_callback = nullptr;
    KJobUiDelegate_EventFilter_Callback kjobuidelegate_eventfilter_callback = nullptr;
    KJobUiDelegate_TimerEvent_Callback kjobuidelegate_timerevent_callback = nullptr;
    KJobUiDelegate_ChildEvent_Callback kjobuidelegate_childevent_callback = nullptr;
    KJobUiDelegate_CustomEvent_Callback kjobuidelegate_customevent_callback = nullptr;
    KJobUiDelegate_ConnectNotify_Callback kjobuidelegate_connectnotify_callback = nullptr;
    KJobUiDelegate_DisconnectNotify_Callback kjobuidelegate_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KJobUiDelegate {
        using KJobUiDelegate::childEvent;
        using KJobUiDelegate::connectNotify;
        using KJobUiDelegate::customEvent;
        using KJobUiDelegate::disconnectNotify;
        using KJobUiDelegate::setJob;
        using KJobUiDelegate::slotWarning;
        using KJobUiDelegate::timerEvent;
    };

    VirtualKJobUiDelegate() : KJobUiDelegate() {};
    VirtualKJobUiDelegate(KJobUiDelegate::Flags flags) : KJobUiDelegate(flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kjobuidelegate_metaobject_callback) {
            QMetaObject* callback_ret = kjobuidelegate_metaobject_callback(this);
            return callback_ret;
        }
        return KJobUiDelegate::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kjobuidelegate_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kjobuidelegate_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KJobUiDelegate::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kjobuidelegate_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kjobuidelegate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KJobUiDelegate::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setJob(KJob* job) override {
        if (kjobuidelegate_setjob_callback) {
            KJob* cbval1 = job;
            bool callback_ret = kjobuidelegate_setjob_callback(this, cbval1);
            return callback_ret;
        }
        return KJobUiDelegate::setJob(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showErrorMessage() override {
        if (kjobuidelegate_showerrormessage_callback) {
            kjobuidelegate_showerrormessage_callback(this);
            return;
        }
        KJobUiDelegate::showErrorMessage();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotWarning(KJob* job, const QString& message) override {
        if (kjobuidelegate_slotwarning_callback) {
            KJob* cbval1 = job;
            const auto message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            auto message_str_len = message_b.length();
            const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
            memcpy((void*)message_str, message_b.data(), message_str_len);
            ((char*)message_str)[message_str_len] = '\0';
            const char* cbval2 = message_str;
            kjobuidelegate_slotwarning_callback(this, cbval1, cbval2);
            libqt_free(message_str);
            return;
        }
        KJobUiDelegate::slotWarning(job, message);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kjobuidelegate_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kjobuidelegate_event_callback(this, cbval1);
            return callback_ret;
        }
        return KJobUiDelegate::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kjobuidelegate_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kjobuidelegate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KJobUiDelegate::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kjobuidelegate_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kjobuidelegate_timerevent_callback(this, cbval1);
            return;
        }
        KJobUiDelegate::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kjobuidelegate_childevent_callback) {
            QChildEvent* cbval1 = event;
            kjobuidelegate_childevent_callback(this, cbval1);
            return;
        }
        KJobUiDelegate::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kjobuidelegate_customevent_callback) {
            QEvent* cbval1 = event;
            kjobuidelegate_customevent_callback(this, cbval1);
            return;
        }
        KJobUiDelegate::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kjobuidelegate_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kjobuidelegate_connectnotify_callback(this, cbval1);
            return;
        }
        KJobUiDelegate::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kjobuidelegate_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kjobuidelegate_disconnectnotify_callback(this, cbval1);
            return;
        }
        KJobUiDelegate::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KJobUiDelegate_SuperSetJob(KJobUiDelegate* self, KJob* job);
    friend void KJobUiDelegate_SuperSlotWarning(KJobUiDelegate* self, KJob* job, const libqt_string message);
    friend void KJobUiDelegate_SuperTimerEvent(KJobUiDelegate* self, QTimerEvent* event);
    friend void KJobUiDelegate_SuperChildEvent(KJobUiDelegate* self, QChildEvent* event);
    friend void KJobUiDelegate_SuperCustomEvent(KJobUiDelegate* self, QEvent* event);
    friend void KJobUiDelegate_SuperConnectNotify(KJobUiDelegate* self, const QMetaMethod* signal);
    friend void KJobUiDelegate_SuperDisconnectNotify(KJobUiDelegate* self, const QMetaMethod* signal);
};

#endif
