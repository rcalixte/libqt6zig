#pragma once
#ifndef EXTRAS_KCOMPLETION_LIBKEMAILVALIDATOR_HXX
#define EXTRAS_KCOMPLETION_LIBKEMAILVALIDATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KEmailValidator
class VirtualKEmailValidator final : public KEmailValidator {
  public:
    // Virtual class public types (including callbacks and access types)
    using KEmailValidator_MetaObject_Callback = QMetaObject* (*)(const KEmailValidator*);
    using KEmailValidator_Metacast_Callback = void* (*)(KEmailValidator*, const char*);
    using KEmailValidator_Metacall_Callback = int (*)(KEmailValidator*, int, int, void**);
    using KEmailValidator_Validate_Callback = int (*)(const KEmailValidator*, const char*, int*);
    using KEmailValidator_Fixup_Callback = void (*)(const KEmailValidator*, const char*);
    using KEmailValidator_Event_Callback = bool (*)(KEmailValidator*, QEvent*);
    using KEmailValidator_EventFilter_Callback = bool (*)(KEmailValidator*, QObject*, QEvent*);
    using KEmailValidator_TimerEvent_Callback = void (*)(KEmailValidator*, QTimerEvent*);
    using KEmailValidator_ChildEvent_Callback = void (*)(KEmailValidator*, QChildEvent*);
    using KEmailValidator_CustomEvent_Callback = void (*)(KEmailValidator*, QEvent*);
    using KEmailValidator_ConnectNotify_Callback = void (*)(KEmailValidator*, QMetaMethod*);
    using KEmailValidator_DisconnectNotify_Callback = void (*)(KEmailValidator*, QMetaMethod*);
    using KEmailValidator::isSignalConnected;
    using KEmailValidator::receivers;
    using KEmailValidator::sender;
    using KEmailValidator::senderSignalIndex;

    // Instance callback storage
    KEmailValidator_MetaObject_Callback kemailvalidator_metaobject_callback = nullptr;
    KEmailValidator_Metacast_Callback kemailvalidator_metacast_callback = nullptr;
    KEmailValidator_Metacall_Callback kemailvalidator_metacall_callback = nullptr;
    KEmailValidator_Validate_Callback kemailvalidator_validate_callback = nullptr;
    KEmailValidator_Fixup_Callback kemailvalidator_fixup_callback = nullptr;
    KEmailValidator_Event_Callback kemailvalidator_event_callback = nullptr;
    KEmailValidator_EventFilter_Callback kemailvalidator_eventfilter_callback = nullptr;
    KEmailValidator_TimerEvent_Callback kemailvalidator_timerevent_callback = nullptr;
    KEmailValidator_ChildEvent_Callback kemailvalidator_childevent_callback = nullptr;
    KEmailValidator_CustomEvent_Callback kemailvalidator_customevent_callback = nullptr;
    KEmailValidator_ConnectNotify_Callback kemailvalidator_connectnotify_callback = nullptr;
    KEmailValidator_DisconnectNotify_Callback kemailvalidator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KEmailValidator {
        using KEmailValidator::childEvent;
        using KEmailValidator::connectNotify;
        using KEmailValidator::customEvent;
        using KEmailValidator::disconnectNotify;
        using KEmailValidator::timerEvent;
    };

    VirtualKEmailValidator() : KEmailValidator() {};
    VirtualKEmailValidator(QObject* parent) : KEmailValidator(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kemailvalidator_metaobject_callback) {
            QMetaObject* callback_ret = kemailvalidator_metaobject_callback(this);
            return callback_ret;
        }
        return KEmailValidator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kemailvalidator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kemailvalidator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KEmailValidator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kemailvalidator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kemailvalidator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KEmailValidator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& str, int& pos) const override {
        if (kemailvalidator_validate_callback) {
            auto str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            auto str_str_len = str_b.length();
            const char* str_str = static_cast<const char*>(malloc(str_str_len + 1));
            memcpy((void*)str_str, str_b.data(), str_str_len);
            ((char*)str_str)[str_str_len] = '\0';
            const char* cbval1 = str_str;
            int* cbval2 = &pos;
            int callback_ret = kemailvalidator_validate_callback(this, cbval1, cbval2);
            libqt_free(str_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return KEmailValidator::validate(str, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& str) const override {
        if (kemailvalidator_fixup_callback) {
            auto str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            auto str_str_len = str_b.length();
            const char* str_str = static_cast<const char*>(malloc(str_str_len + 1));
            memcpy((void*)str_str, str_b.data(), str_str_len);
            ((char*)str_str)[str_str_len] = '\0';
            const char* cbval1 = str_str;
            kemailvalidator_fixup_callback(this, cbval1);
            libqt_free(str_str);
            return;
        }
        KEmailValidator::fixup(str);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kemailvalidator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kemailvalidator_event_callback(this, cbval1);
            return callback_ret;
        }
        return KEmailValidator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kemailvalidator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kemailvalidator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KEmailValidator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kemailvalidator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kemailvalidator_timerevent_callback(this, cbval1);
            return;
        }
        KEmailValidator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kemailvalidator_childevent_callback) {
            QChildEvent* cbval1 = event;
            kemailvalidator_childevent_callback(this, cbval1);
            return;
        }
        KEmailValidator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kemailvalidator_customevent_callback) {
            QEvent* cbval1 = event;
            kemailvalidator_customevent_callback(this, cbval1);
            return;
        }
        KEmailValidator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kemailvalidator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kemailvalidator_connectnotify_callback(this, cbval1);
            return;
        }
        KEmailValidator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kemailvalidator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kemailvalidator_disconnectnotify_callback(this, cbval1);
            return;
        }
        KEmailValidator::disconnectNotify(signal);
    }

    // Friend functions
    friend void KEmailValidator_SuperTimerEvent(KEmailValidator* self, QTimerEvent* event);
    friend void KEmailValidator_SuperChildEvent(KEmailValidator* self, QChildEvent* event);
    friend void KEmailValidator_SuperCustomEvent(KEmailValidator* self, QEvent* event);
    friend void KEmailValidator_SuperConnectNotify(KEmailValidator* self, const QMetaMethod* signal);
    friend void KEmailValidator_SuperDisconnectNotify(KEmailValidator* self, const QMetaMethod* signal);
};

#endif
