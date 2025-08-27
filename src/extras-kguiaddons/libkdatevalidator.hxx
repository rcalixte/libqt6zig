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
    using KDateValidator_Metacall_Callback = int (*)(KDateValidator*, int, int, void**);
    using KDateValidator_Validate_Callback = int (*)(const KDateValidator*, libqt_string, int*);
    using KDateValidator_Fixup_Callback = void (*)(const KDateValidator*, libqt_string);
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

    ~VirtualKDateValidator() {
        kdatevalidator_metacall_callback = nullptr;
        kdatevalidator_validate_callback = nullptr;
        kdatevalidator_fixup_callback = nullptr;
        kdatevalidator_event_callback = nullptr;
        kdatevalidator_eventfilter_callback = nullptr;
        kdatevalidator_timerevent_callback = nullptr;
        kdatevalidator_childevent_callback = nullptr;
        kdatevalidator_customevent_callback = nullptr;
        kdatevalidator_connectnotify_callback = nullptr;
        kdatevalidator_disconnectnotify_callback = nullptr;
        kdatevalidator_sender_callback = nullptr;
        kdatevalidator_sendersignalindex_callback = nullptr;
        kdatevalidator_receivers_callback = nullptr;
        kdatevalidator_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdatevalidator_metacall_isbase) {
            kdatevalidator_metacall_isbase = false;
            return KDateValidator::qt_metacall(param1, param2, param3);
        } else if (kdatevalidator_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdatevalidator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDateValidator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& text, int& e) const override {
        if (kdatevalidator_validate_isbase) {
            kdatevalidator_validate_isbase = false;
            return KDateValidator::validate(text, e);
        } else if (kdatevalidator_validate_callback != nullptr) {
            QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;
            int* cbval2 = &e;

            int callback_ret = kdatevalidator_validate_callback(this, cbval1, cbval2);
            return static_cast<QValidator::State>(callback_ret);
        } else {
            return KDateValidator::validate(text, e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (kdatevalidator_fixup_isbase) {
            kdatevalidator_fixup_isbase = false;
            KDateValidator::fixup(input);
        } else if (kdatevalidator_fixup_callback != nullptr) {
            QString input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            libqt_string input_str;
            input_str.len = input_b.length();
            input_str.data = static_cast<const char*>(malloc(input_str.len + 1));
            memcpy((void*)input_str.data, input_b.data(), input_str.len);
            ((char*)input_str.data)[input_str.len] = '\0';
            libqt_string cbval1 = input_str;

            kdatevalidator_fixup_callback(this, cbval1);
        } else {
            KDateValidator::fixup(input);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdatevalidator_event_isbase) {
            kdatevalidator_event_isbase = false;
            return KDateValidator::event(event);
        } else if (kdatevalidator_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kdatevalidator_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDateValidator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdatevalidator_eventfilter_isbase) {
            kdatevalidator_eventfilter_isbase = false;
            return KDateValidator::eventFilter(watched, event);
        } else if (kdatevalidator_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kdatevalidator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDateValidator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdatevalidator_timerevent_isbase) {
            kdatevalidator_timerevent_isbase = false;
            KDateValidator::timerEvent(event);
        } else if (kdatevalidator_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kdatevalidator_timerevent_callback(this, cbval1);
        } else {
            KDateValidator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdatevalidator_childevent_isbase) {
            kdatevalidator_childevent_isbase = false;
            KDateValidator::childEvent(event);
        } else if (kdatevalidator_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdatevalidator_childevent_callback(this, cbval1);
        } else {
            KDateValidator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdatevalidator_customevent_isbase) {
            kdatevalidator_customevent_isbase = false;
            KDateValidator::customEvent(event);
        } else if (kdatevalidator_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdatevalidator_customevent_callback(this, cbval1);
        } else {
            KDateValidator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdatevalidator_connectnotify_isbase) {
            kdatevalidator_connectnotify_isbase = false;
            KDateValidator::connectNotify(signal);
        } else if (kdatevalidator_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdatevalidator_connectnotify_callback(this, cbval1);
        } else {
            KDateValidator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdatevalidator_disconnectnotify_isbase) {
            kdatevalidator_disconnectnotify_isbase = false;
            KDateValidator::disconnectNotify(signal);
        } else if (kdatevalidator_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdatevalidator_disconnectnotify_callback(this, cbval1);
        } else {
            KDateValidator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdatevalidator_sender_isbase) {
            kdatevalidator_sender_isbase = false;
            return KDateValidator::sender();
        } else if (kdatevalidator_sender_callback != nullptr) {
            QObject* callback_ret = kdatevalidator_sender_callback();
            return callback_ret;
        } else {
            return KDateValidator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdatevalidator_sendersignalindex_isbase) {
            kdatevalidator_sendersignalindex_isbase = false;
            return KDateValidator::senderSignalIndex();
        } else if (kdatevalidator_sendersignalindex_callback != nullptr) {
            int callback_ret = kdatevalidator_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDateValidator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdatevalidator_receivers_isbase) {
            kdatevalidator_receivers_isbase = false;
            return KDateValidator::receivers(signal);
        } else if (kdatevalidator_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdatevalidator_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDateValidator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdatevalidator_issignalconnected_isbase) {
            kdatevalidator_issignalconnected_isbase = false;
            return KDateValidator::isSignalConnected(signal);
        } else if (kdatevalidator_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdatevalidator_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDateValidator::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KDateValidator_TimerEvent(KDateValidator* self, QTimerEvent* event);
    friend void KDateValidator_QBaseTimerEvent(KDateValidator* self, QTimerEvent* event);
    friend void KDateValidator_ChildEvent(KDateValidator* self, QChildEvent* event);
    friend void KDateValidator_QBaseChildEvent(KDateValidator* self, QChildEvent* event);
    friend void KDateValidator_CustomEvent(KDateValidator* self, QEvent* event);
    friend void KDateValidator_QBaseCustomEvent(KDateValidator* self, QEvent* event);
    friend void KDateValidator_ConnectNotify(KDateValidator* self, const QMetaMethod* signal);
    friend void KDateValidator_QBaseConnectNotify(KDateValidator* self, const QMetaMethod* signal);
    friend void KDateValidator_DisconnectNotify(KDateValidator* self, const QMetaMethod* signal);
    friend void KDateValidator_QBaseDisconnectNotify(KDateValidator* self, const QMetaMethod* signal);
    friend QObject* KDateValidator_Sender(const KDateValidator* self);
    friend QObject* KDateValidator_QBaseSender(const KDateValidator* self);
    friend int KDateValidator_SenderSignalIndex(const KDateValidator* self);
    friend int KDateValidator_QBaseSenderSignalIndex(const KDateValidator* self);
    friend int KDateValidator_Receivers(const KDateValidator* self, const char* signal);
    friend int KDateValidator_QBaseReceivers(const KDateValidator* self, const char* signal);
    friend bool KDateValidator_IsSignalConnected(const KDateValidator* self, const QMetaMethod* signal);
    friend bool KDateValidator_QBaseIsSignalConnected(const KDateValidator* self, const QMetaMethod* signal);
};

#endif
