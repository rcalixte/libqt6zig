#pragma once
#ifndef EXTRAS_KGUIADDONS_LIBKDATEVALIDATOR_HXX
#define EXTRAS_KGUIADDONS_LIBKDATEVALIDATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDateValidator
class VirtualKDateValidator final : public KDateValidator {
  public:
    // Virtual class public types (including callbacks and access types)
    using KDateValidator_MetaObject_Callback = QMetaObject* (*)(const KDateValidator*);
    using KDateValidator_Metacast_Callback = void* (*)(KDateValidator*, const char*);
    using KDateValidator_Metacall_Callback = int (*)(KDateValidator*, int, int, void**);
    using KDateValidator_Validate_Callback = int (*)(const KDateValidator*, const char*, int*);
    using KDateValidator_Fixup_Callback = void (*)(const KDateValidator*, const char*);
    using KDateValidator_Event_Callback = bool (*)(KDateValidator*, QEvent*);
    using KDateValidator_EventFilter_Callback = bool (*)(KDateValidator*, QObject*, QEvent*);
    using KDateValidator_TimerEvent_Callback = void (*)(KDateValidator*, QTimerEvent*);
    using KDateValidator_ChildEvent_Callback = void (*)(KDateValidator*, QChildEvent*);
    using KDateValidator_CustomEvent_Callback = void (*)(KDateValidator*, QEvent*);
    using KDateValidator_ConnectNotify_Callback = void (*)(KDateValidator*, QMetaMethod*);
    using KDateValidator_DisconnectNotify_Callback = void (*)(KDateValidator*, QMetaMethod*);
    using KDateValidator::isSignalConnected;
    using KDateValidator::receivers;
    using KDateValidator::sender;
    using KDateValidator::senderSignalIndex;

    // Instance callback storage
    KDateValidator_MetaObject_Callback kdatevalidator_metaobject_callback = nullptr;
    KDateValidator_Metacast_Callback kdatevalidator_metacast_callback = nullptr;
    KDateValidator_Metacall_Callback kdatevalidator_metacall_callback = nullptr;
    KDateValidator_Validate_Callback kdatevalidator_validate_callback = nullptr;
    KDateValidator_Fixup_Callback kdatevalidator_fixup_callback = nullptr;
    KDateValidator_Event_Callback kdatevalidator_event_callback = nullptr;
    KDateValidator_EventFilter_Callback kdatevalidator_eventfilter_callback = nullptr;
    KDateValidator_TimerEvent_Callback kdatevalidator_timerevent_callback = nullptr;
    KDateValidator_ChildEvent_Callback kdatevalidator_childevent_callback = nullptr;
    KDateValidator_CustomEvent_Callback kdatevalidator_customevent_callback = nullptr;
    KDateValidator_ConnectNotify_Callback kdatevalidator_connectnotify_callback = nullptr;
    KDateValidator_DisconnectNotify_Callback kdatevalidator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KDateValidator {
        using KDateValidator::childEvent;
        using KDateValidator::connectNotify;
        using KDateValidator::customEvent;
        using KDateValidator::disconnectNotify;
        using KDateValidator::timerEvent;
    };

    VirtualKDateValidator() : KDateValidator() {};
    VirtualKDateValidator(QObject* parent) : KDateValidator(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdatevalidator_metaobject_callback) {
            QMetaObject* callback_ret = kdatevalidator_metaobject_callback(this);
            return callback_ret;
        }
        return KDateValidator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdatevalidator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kdatevalidator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KDateValidator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdatevalidator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kdatevalidator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDateValidator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& text, int& e) const override {
        if (kdatevalidator_validate_callback) {
            auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            int* cbval2 = &e;
            int callback_ret = kdatevalidator_validate_callback(this, cbval1, cbval2);
            libqt_free(text_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return KDateValidator::validate(text, e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (kdatevalidator_fixup_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            kdatevalidator_fixup_callback(this, cbval1);
            libqt_free(input_str);
            return;
        }
        KDateValidator::fixup(input);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdatevalidator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kdatevalidator_event_callback(this, cbval1);
            return callback_ret;
        }
        return KDateValidator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdatevalidator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kdatevalidator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDateValidator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdatevalidator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kdatevalidator_timerevent_callback(this, cbval1);
            return;
        }
        KDateValidator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdatevalidator_childevent_callback) {
            QChildEvent* cbval1 = event;
            kdatevalidator_childevent_callback(this, cbval1);
            return;
        }
        KDateValidator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdatevalidator_customevent_callback) {
            QEvent* cbval1 = event;
            kdatevalidator_customevent_callback(this, cbval1);
            return;
        }
        KDateValidator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdatevalidator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdatevalidator_connectnotify_callback(this, cbval1);
            return;
        }
        KDateValidator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdatevalidator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kdatevalidator_disconnectnotify_callback(this, cbval1);
            return;
        }
        KDateValidator::disconnectNotify(signal);
    }

    // Friend functions
    friend void KDateValidator_SuperTimerEvent(KDateValidator* self, QTimerEvent* event);
    friend void KDateValidator_SuperChildEvent(KDateValidator* self, QChildEvent* event);
    friend void KDateValidator_SuperCustomEvent(KDateValidator* self, QEvent* event);
    friend void KDateValidator_SuperConnectNotify(KDateValidator* self, const QMetaMethod* signal);
    friend void KDateValidator_SuperDisconnectNotify(KDateValidator* self, const QMetaMethod* signal);
};

#endif
