#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKDATEVALIDATOR_H
#define SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKDATEVALIDATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDateValidator so that we can call protected methods
class VirtualKDateValidator final : public KDateValidator {

  public:
    // Virtual class boolean flag
    bool isVirtualKDateValidator = true;

    // Virtual class public types (including callbacks)
    using KDateValidator_MetaObject_Callback = QMetaObject* (*)();
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
    using KDateValidator_Sender_Callback = QObject* (*)();
    using KDateValidator_SenderSignalIndex_Callback = int (*)();
    using KDateValidator_Receivers_Callback = int (*)(const KDateValidator*, const char*);
    using KDateValidator_IsSignalConnected_Callback = bool (*)(const KDateValidator*, QMetaMethod*);

  protected:
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
    KDateValidator_Sender_Callback kdatevalidator_sender_callback = nullptr;
    KDateValidator_SenderSignalIndex_Callback kdatevalidator_sendersignalindex_callback = nullptr;
    KDateValidator_Receivers_Callback kdatevalidator_receivers_callback = nullptr;
    KDateValidator_IsSignalConnected_Callback kdatevalidator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kdatevalidator_metaobject_isbase = false;
    mutable bool kdatevalidator_metacast_isbase = false;
    mutable bool kdatevalidator_metacall_isbase = false;
    mutable bool kdatevalidator_validate_isbase = false;
    mutable bool kdatevalidator_fixup_isbase = false;
    mutable bool kdatevalidator_event_isbase = false;
    mutable bool kdatevalidator_eventfilter_isbase = false;
    mutable bool kdatevalidator_timerevent_isbase = false;
    mutable bool kdatevalidator_childevent_isbase = false;
    mutable bool kdatevalidator_customevent_isbase = false;
    mutable bool kdatevalidator_connectnotify_isbase = false;
    mutable bool kdatevalidator_disconnectnotify_isbase = false;
    mutable bool kdatevalidator_sender_isbase = false;
    mutable bool kdatevalidator_sendersignalindex_isbase = false;
    mutable bool kdatevalidator_receivers_isbase = false;
    mutable bool kdatevalidator_issignalconnected_isbase = false;

  public:
    VirtualKDateValidator() : KDateValidator() {};
    VirtualKDateValidator(QObject* parent) : KDateValidator(parent) {};

    // Callback setters
    inline void setKDateValidator_MetaObject_Callback(KDateValidator_MetaObject_Callback cb) { kdatevalidator_metaobject_callback = cb; }
    inline void setKDateValidator_Metacast_Callback(KDateValidator_Metacast_Callback cb) { kdatevalidator_metacast_callback = cb; }
    inline void setKDateValidator_Metacall_Callback(KDateValidator_Metacall_Callback cb) { kdatevalidator_metacall_callback = cb; }
    inline void setKDateValidator_Validate_Callback(KDateValidator_Validate_Callback cb) { kdatevalidator_validate_callback = cb; }
    inline void setKDateValidator_Fixup_Callback(KDateValidator_Fixup_Callback cb) { kdatevalidator_fixup_callback = cb; }
    inline void setKDateValidator_Event_Callback(KDateValidator_Event_Callback cb) { kdatevalidator_event_callback = cb; }
    inline void setKDateValidator_EventFilter_Callback(KDateValidator_EventFilter_Callback cb) { kdatevalidator_eventfilter_callback = cb; }
    inline void setKDateValidator_TimerEvent_Callback(KDateValidator_TimerEvent_Callback cb) { kdatevalidator_timerevent_callback = cb; }
    inline void setKDateValidator_ChildEvent_Callback(KDateValidator_ChildEvent_Callback cb) { kdatevalidator_childevent_callback = cb; }
    inline void setKDateValidator_CustomEvent_Callback(KDateValidator_CustomEvent_Callback cb) { kdatevalidator_customevent_callback = cb; }
    inline void setKDateValidator_ConnectNotify_Callback(KDateValidator_ConnectNotify_Callback cb) { kdatevalidator_connectnotify_callback = cb; }
    inline void setKDateValidator_DisconnectNotify_Callback(KDateValidator_DisconnectNotify_Callback cb) { kdatevalidator_disconnectnotify_callback = cb; }
    inline void setKDateValidator_Sender_Callback(KDateValidator_Sender_Callback cb) { kdatevalidator_sender_callback = cb; }
    inline void setKDateValidator_SenderSignalIndex_Callback(KDateValidator_SenderSignalIndex_Callback cb) { kdatevalidator_sendersignalindex_callback = cb; }
    inline void setKDateValidator_Receivers_Callback(KDateValidator_Receivers_Callback cb) { kdatevalidator_receivers_callback = cb; }
    inline void setKDateValidator_IsSignalConnected_Callback(KDateValidator_IsSignalConnected_Callback cb) { kdatevalidator_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKDateValidator_MetaObject_IsBase(bool value) const { kdatevalidator_metaobject_isbase = value; }
    inline void setKDateValidator_Metacast_IsBase(bool value) const { kdatevalidator_metacast_isbase = value; }
    inline void setKDateValidator_Metacall_IsBase(bool value) const { kdatevalidator_metacall_isbase = value; }
    inline void setKDateValidator_Validate_IsBase(bool value) const { kdatevalidator_validate_isbase = value; }
    inline void setKDateValidator_Fixup_IsBase(bool value) const { kdatevalidator_fixup_isbase = value; }
    inline void setKDateValidator_Event_IsBase(bool value) const { kdatevalidator_event_isbase = value; }
    inline void setKDateValidator_EventFilter_IsBase(bool value) const { kdatevalidator_eventfilter_isbase = value; }
    inline void setKDateValidator_TimerEvent_IsBase(bool value) const { kdatevalidator_timerevent_isbase = value; }
    inline void setKDateValidator_ChildEvent_IsBase(bool value) const { kdatevalidator_childevent_isbase = value; }
    inline void setKDateValidator_CustomEvent_IsBase(bool value) const { kdatevalidator_customevent_isbase = value; }
    inline void setKDateValidator_ConnectNotify_IsBase(bool value) const { kdatevalidator_connectnotify_isbase = value; }
    inline void setKDateValidator_DisconnectNotify_IsBase(bool value) const { kdatevalidator_disconnectnotify_isbase = value; }
    inline void setKDateValidator_Sender_IsBase(bool value) const { kdatevalidator_sender_isbase = value; }
    inline void setKDateValidator_SenderSignalIndex_IsBase(bool value) const { kdatevalidator_sendersignalindex_isbase = value; }
    inline void setKDateValidator_Receivers_IsBase(bool value) const { kdatevalidator_receivers_isbase = value; }
    inline void setKDateValidator_IsSignalConnected_IsBase(bool value) const { kdatevalidator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kdatevalidator_metaobject_isbase) {
            kdatevalidator_metaobject_isbase = false;
            return KDateValidator::metaObject();
        }
        auto metaobject_cb = kdatevalidator_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KDateValidator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdatevalidator_metacast_isbase) {
            kdatevalidator_metacast_isbase = false;
            return KDateValidator::qt_metacast(param1);
        }
        auto metacast_cb = kdatevalidator_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KDateValidator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdatevalidator_metacall_isbase) {
            kdatevalidator_metacall_isbase = false;
            return KDateValidator::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kdatevalidator_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDateValidator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& text, int& e) const override {
        if (kdatevalidator_validate_isbase) {
            kdatevalidator_validate_isbase = false;
            return KDateValidator::validate(text, e);
        }
        auto validate_cb = kdatevalidator_validate_callback;
        if (validate_cb) {
            QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            int* cbval2 = &e;

            int callback_ret = validate_cb(this, cbval1, cbval2);
            libqt_free(text_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return KDateValidator::validate(text, e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (kdatevalidator_fixup_isbase) {
            kdatevalidator_fixup_isbase = false;
            KDateValidator::fixup(input);
            return;
        }
        auto fixup_cb = kdatevalidator_fixup_callback;
        if (fixup_cb) {
            QString input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;

            fixup_cb(this, cbval1);
            libqt_free(input_str);
            return;
        }
        KDateValidator::fixup(input);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdatevalidator_event_isbase) {
            kdatevalidator_event_isbase = false;
            return KDateValidator::event(event);
        }
        auto event_cb = kdatevalidator_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KDateValidator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdatevalidator_eventfilter_isbase) {
            kdatevalidator_eventfilter_isbase = false;
            return KDateValidator::eventFilter(watched, event);
        }
        auto eventfilter_cb = kdatevalidator_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDateValidator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdatevalidator_timerevent_isbase) {
            kdatevalidator_timerevent_isbase = false;
            KDateValidator::timerEvent(event);
            return;
        }
        auto timerevent_cb = kdatevalidator_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KDateValidator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdatevalidator_childevent_isbase) {
            kdatevalidator_childevent_isbase = false;
            KDateValidator::childEvent(event);
            return;
        }
        auto childevent_cb = kdatevalidator_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KDateValidator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdatevalidator_customevent_isbase) {
            kdatevalidator_customevent_isbase = false;
            KDateValidator::customEvent(event);
            return;
        }
        auto customevent_cb = kdatevalidator_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KDateValidator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdatevalidator_connectnotify_isbase) {
            kdatevalidator_connectnotify_isbase = false;
            KDateValidator::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kdatevalidator_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KDateValidator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdatevalidator_disconnectnotify_isbase) {
            kdatevalidator_disconnectnotify_isbase = false;
            KDateValidator::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kdatevalidator_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KDateValidator::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdatevalidator_sender_isbase) {
            kdatevalidator_sender_isbase = false;
            return KDateValidator::sender();
        }
        auto sender_cb = kdatevalidator_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KDateValidator::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdatevalidator_sendersignalindex_isbase) {
            kdatevalidator_sendersignalindex_isbase = false;
            return KDateValidator::senderSignalIndex();
        }
        auto sendersignalindex_cb = kdatevalidator_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KDateValidator::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdatevalidator_receivers_isbase) {
            kdatevalidator_receivers_isbase = false;
            return KDateValidator::receivers(signal);
        }
        auto receivers_cb = kdatevalidator_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDateValidator::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdatevalidator_issignalconnected_isbase) {
            kdatevalidator_issignalconnected_isbase = false;
            return KDateValidator::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kdatevalidator_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KDateValidator::isSignalConnected(signal);
    }

    // Friend functions
    friend void KDateValidator_TimerEvent(KDateValidator* self, QTimerEvent* event);
    friend void KDateValidator_SuperTimerEvent(KDateValidator* self, QTimerEvent* event);
    friend void KDateValidator_ChildEvent(KDateValidator* self, QChildEvent* event);
    friend void KDateValidator_SuperChildEvent(KDateValidator* self, QChildEvent* event);
    friend void KDateValidator_CustomEvent(KDateValidator* self, QEvent* event);
    friend void KDateValidator_SuperCustomEvent(KDateValidator* self, QEvent* event);
    friend void KDateValidator_ConnectNotify(KDateValidator* self, const QMetaMethod* signal);
    friend void KDateValidator_SuperConnectNotify(KDateValidator* self, const QMetaMethod* signal);
    friend void KDateValidator_DisconnectNotify(KDateValidator* self, const QMetaMethod* signal);
    friend void KDateValidator_SuperDisconnectNotify(KDateValidator* self, const QMetaMethod* signal);
    friend QObject* KDateValidator_Sender(const KDateValidator* self);
    friend QObject* KDateValidator_SuperSender(const KDateValidator* self);
    friend int KDateValidator_SenderSignalIndex(const KDateValidator* self);
    friend int KDateValidator_SuperSenderSignalIndex(const KDateValidator* self);
    friend int KDateValidator_Receivers(const KDateValidator* self, const char* signal);
    friend int KDateValidator_SuperReceivers(const KDateValidator* self, const char* signal);
    friend bool KDateValidator_IsSignalConnected(const KDateValidator* self, const QMetaMethod* signal);
    friend bool KDateValidator_SuperIsSignalConnected(const KDateValidator* self, const QMetaMethod* signal);
};

#endif
