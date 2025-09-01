#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKEMAILVALIDATOR_H
#define SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKEMAILVALIDATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KEmailValidator so that we can call protected methods
class VirtualKEmailValidator final : public KEmailValidator {

  public:
    // Virtual class boolean flag
    bool isVirtualKEmailValidator = true;

    // Virtual class public types (including callbacks)
    using KEmailValidator_Metacall_Callback = int (*)(KEmailValidator*, int, int, void**);
    using KEmailValidator_Validate_Callback = int (*)(const KEmailValidator*, libqt_string, int*);
    using KEmailValidator_Fixup_Callback = void (*)(const KEmailValidator*, libqt_string);
    using KEmailValidator_Event_Callback = bool (*)(KEmailValidator*, QEvent*);
    using KEmailValidator_EventFilter_Callback = bool (*)(KEmailValidator*, QObject*, QEvent*);
    using KEmailValidator_TimerEvent_Callback = void (*)(KEmailValidator*, QTimerEvent*);
    using KEmailValidator_ChildEvent_Callback = void (*)(KEmailValidator*, QChildEvent*);
    using KEmailValidator_CustomEvent_Callback = void (*)(KEmailValidator*, QEvent*);
    using KEmailValidator_ConnectNotify_Callback = void (*)(KEmailValidator*, QMetaMethod*);
    using KEmailValidator_DisconnectNotify_Callback = void (*)(KEmailValidator*, QMetaMethod*);
    using KEmailValidator_Sender_Callback = QObject* (*)();
    using KEmailValidator_SenderSignalIndex_Callback = int (*)();
    using KEmailValidator_Receivers_Callback = int (*)(const KEmailValidator*, const char*);
    using KEmailValidator_IsSignalConnected_Callback = bool (*)(const KEmailValidator*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KEmailValidator_Sender_Callback kemailvalidator_sender_callback = nullptr;
    KEmailValidator_SenderSignalIndex_Callback kemailvalidator_sendersignalindex_callback = nullptr;
    KEmailValidator_Receivers_Callback kemailvalidator_receivers_callback = nullptr;
    KEmailValidator_IsSignalConnected_Callback kemailvalidator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kemailvalidator_metacall_isbase = false;
    mutable bool kemailvalidator_validate_isbase = false;
    mutable bool kemailvalidator_fixup_isbase = false;
    mutable bool kemailvalidator_event_isbase = false;
    mutable bool kemailvalidator_eventfilter_isbase = false;
    mutable bool kemailvalidator_timerevent_isbase = false;
    mutable bool kemailvalidator_childevent_isbase = false;
    mutable bool kemailvalidator_customevent_isbase = false;
    mutable bool kemailvalidator_connectnotify_isbase = false;
    mutable bool kemailvalidator_disconnectnotify_isbase = false;
    mutable bool kemailvalidator_sender_isbase = false;
    mutable bool kemailvalidator_sendersignalindex_isbase = false;
    mutable bool kemailvalidator_receivers_isbase = false;
    mutable bool kemailvalidator_issignalconnected_isbase = false;

  public:
    VirtualKEmailValidator() : KEmailValidator() {};
    VirtualKEmailValidator(QObject* parent) : KEmailValidator(parent) {};

    ~VirtualKEmailValidator() {
        kemailvalidator_metacall_callback = nullptr;
        kemailvalidator_validate_callback = nullptr;
        kemailvalidator_fixup_callback = nullptr;
        kemailvalidator_event_callback = nullptr;
        kemailvalidator_eventfilter_callback = nullptr;
        kemailvalidator_timerevent_callback = nullptr;
        kemailvalidator_childevent_callback = nullptr;
        kemailvalidator_customevent_callback = nullptr;
        kemailvalidator_connectnotify_callback = nullptr;
        kemailvalidator_disconnectnotify_callback = nullptr;
        kemailvalidator_sender_callback = nullptr;
        kemailvalidator_sendersignalindex_callback = nullptr;
        kemailvalidator_receivers_callback = nullptr;
        kemailvalidator_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKEmailValidator_Metacall_Callback(KEmailValidator_Metacall_Callback cb) { kemailvalidator_metacall_callback = cb; }
    inline void setKEmailValidator_Validate_Callback(KEmailValidator_Validate_Callback cb) { kemailvalidator_validate_callback = cb; }
    inline void setKEmailValidator_Fixup_Callback(KEmailValidator_Fixup_Callback cb) { kemailvalidator_fixup_callback = cb; }
    inline void setKEmailValidator_Event_Callback(KEmailValidator_Event_Callback cb) { kemailvalidator_event_callback = cb; }
    inline void setKEmailValidator_EventFilter_Callback(KEmailValidator_EventFilter_Callback cb) { kemailvalidator_eventfilter_callback = cb; }
    inline void setKEmailValidator_TimerEvent_Callback(KEmailValidator_TimerEvent_Callback cb) { kemailvalidator_timerevent_callback = cb; }
    inline void setKEmailValidator_ChildEvent_Callback(KEmailValidator_ChildEvent_Callback cb) { kemailvalidator_childevent_callback = cb; }
    inline void setKEmailValidator_CustomEvent_Callback(KEmailValidator_CustomEvent_Callback cb) { kemailvalidator_customevent_callback = cb; }
    inline void setKEmailValidator_ConnectNotify_Callback(KEmailValidator_ConnectNotify_Callback cb) { kemailvalidator_connectnotify_callback = cb; }
    inline void setKEmailValidator_DisconnectNotify_Callback(KEmailValidator_DisconnectNotify_Callback cb) { kemailvalidator_disconnectnotify_callback = cb; }
    inline void setKEmailValidator_Sender_Callback(KEmailValidator_Sender_Callback cb) { kemailvalidator_sender_callback = cb; }
    inline void setKEmailValidator_SenderSignalIndex_Callback(KEmailValidator_SenderSignalIndex_Callback cb) { kemailvalidator_sendersignalindex_callback = cb; }
    inline void setKEmailValidator_Receivers_Callback(KEmailValidator_Receivers_Callback cb) { kemailvalidator_receivers_callback = cb; }
    inline void setKEmailValidator_IsSignalConnected_Callback(KEmailValidator_IsSignalConnected_Callback cb) { kemailvalidator_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKEmailValidator_Metacall_IsBase(bool value) const { kemailvalidator_metacall_isbase = value; }
    inline void setKEmailValidator_Validate_IsBase(bool value) const { kemailvalidator_validate_isbase = value; }
    inline void setKEmailValidator_Fixup_IsBase(bool value) const { kemailvalidator_fixup_isbase = value; }
    inline void setKEmailValidator_Event_IsBase(bool value) const { kemailvalidator_event_isbase = value; }
    inline void setKEmailValidator_EventFilter_IsBase(bool value) const { kemailvalidator_eventfilter_isbase = value; }
    inline void setKEmailValidator_TimerEvent_IsBase(bool value) const { kemailvalidator_timerevent_isbase = value; }
    inline void setKEmailValidator_ChildEvent_IsBase(bool value) const { kemailvalidator_childevent_isbase = value; }
    inline void setKEmailValidator_CustomEvent_IsBase(bool value) const { kemailvalidator_customevent_isbase = value; }
    inline void setKEmailValidator_ConnectNotify_IsBase(bool value) const { kemailvalidator_connectnotify_isbase = value; }
    inline void setKEmailValidator_DisconnectNotify_IsBase(bool value) const { kemailvalidator_disconnectnotify_isbase = value; }
    inline void setKEmailValidator_Sender_IsBase(bool value) const { kemailvalidator_sender_isbase = value; }
    inline void setKEmailValidator_SenderSignalIndex_IsBase(bool value) const { kemailvalidator_sendersignalindex_isbase = value; }
    inline void setKEmailValidator_Receivers_IsBase(bool value) const { kemailvalidator_receivers_isbase = value; }
    inline void setKEmailValidator_IsSignalConnected_IsBase(bool value) const { kemailvalidator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kemailvalidator_metacall_isbase) {
            kemailvalidator_metacall_isbase = false;
            return KEmailValidator::qt_metacall(param1, param2, param3);
        } else if (kemailvalidator_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kemailvalidator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KEmailValidator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& str, int& pos) const override {
        if (kemailvalidator_validate_isbase) {
            kemailvalidator_validate_isbase = false;
            return KEmailValidator::validate(str, pos);
        } else if (kemailvalidator_validate_callback != nullptr) {
            QString str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            libqt_string str_str;
            str_str.len = str_b.length();
            str_str.data = static_cast<const char*>(malloc(str_str.len + 1));
            memcpy((void*)str_str.data, str_b.data(), str_str.len);
            ((char*)str_str.data)[str_str.len] = '\0';
            libqt_string cbval1 = str_str;
            int* cbval2 = &pos;

            int callback_ret = kemailvalidator_validate_callback(this, cbval1, cbval2);
            return static_cast<QValidator::State>(callback_ret);
        } else {
            return KEmailValidator::validate(str, pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& str) const override {
        if (kemailvalidator_fixup_isbase) {
            kemailvalidator_fixup_isbase = false;
            KEmailValidator::fixup(str);
        } else if (kemailvalidator_fixup_callback != nullptr) {
            QString str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            libqt_string str_str;
            str_str.len = str_b.length();
            str_str.data = static_cast<const char*>(malloc(str_str.len + 1));
            memcpy((void*)str_str.data, str_b.data(), str_str.len);
            ((char*)str_str.data)[str_str.len] = '\0';
            libqt_string cbval1 = str_str;

            kemailvalidator_fixup_callback(this, cbval1);
        } else {
            KEmailValidator::fixup(str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kemailvalidator_event_isbase) {
            kemailvalidator_event_isbase = false;
            return KEmailValidator::event(event);
        } else if (kemailvalidator_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kemailvalidator_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KEmailValidator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kemailvalidator_eventfilter_isbase) {
            kemailvalidator_eventfilter_isbase = false;
            return KEmailValidator::eventFilter(watched, event);
        } else if (kemailvalidator_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kemailvalidator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KEmailValidator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kemailvalidator_timerevent_isbase) {
            kemailvalidator_timerevent_isbase = false;
            KEmailValidator::timerEvent(event);
        } else if (kemailvalidator_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kemailvalidator_timerevent_callback(this, cbval1);
        } else {
            KEmailValidator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kemailvalidator_childevent_isbase) {
            kemailvalidator_childevent_isbase = false;
            KEmailValidator::childEvent(event);
        } else if (kemailvalidator_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kemailvalidator_childevent_callback(this, cbval1);
        } else {
            KEmailValidator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kemailvalidator_customevent_isbase) {
            kemailvalidator_customevent_isbase = false;
            KEmailValidator::customEvent(event);
        } else if (kemailvalidator_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kemailvalidator_customevent_callback(this, cbval1);
        } else {
            KEmailValidator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kemailvalidator_connectnotify_isbase) {
            kemailvalidator_connectnotify_isbase = false;
            KEmailValidator::connectNotify(signal);
        } else if (kemailvalidator_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kemailvalidator_connectnotify_callback(this, cbval1);
        } else {
            KEmailValidator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kemailvalidator_disconnectnotify_isbase) {
            kemailvalidator_disconnectnotify_isbase = false;
            KEmailValidator::disconnectNotify(signal);
        } else if (kemailvalidator_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kemailvalidator_disconnectnotify_callback(this, cbval1);
        } else {
            KEmailValidator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kemailvalidator_sender_isbase) {
            kemailvalidator_sender_isbase = false;
            return KEmailValidator::sender();
        } else if (kemailvalidator_sender_callback != nullptr) {
            QObject* callback_ret = kemailvalidator_sender_callback();
            return callback_ret;
        } else {
            return KEmailValidator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kemailvalidator_sendersignalindex_isbase) {
            kemailvalidator_sendersignalindex_isbase = false;
            return KEmailValidator::senderSignalIndex();
        } else if (kemailvalidator_sendersignalindex_callback != nullptr) {
            int callback_ret = kemailvalidator_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KEmailValidator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kemailvalidator_receivers_isbase) {
            kemailvalidator_receivers_isbase = false;
            return KEmailValidator::receivers(signal);
        } else if (kemailvalidator_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kemailvalidator_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KEmailValidator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kemailvalidator_issignalconnected_isbase) {
            kemailvalidator_issignalconnected_isbase = false;
            return KEmailValidator::isSignalConnected(signal);
        } else if (kemailvalidator_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kemailvalidator_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KEmailValidator::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KEmailValidator_TimerEvent(KEmailValidator* self, QTimerEvent* event);
    friend void KEmailValidator_QBaseTimerEvent(KEmailValidator* self, QTimerEvent* event);
    friend void KEmailValidator_ChildEvent(KEmailValidator* self, QChildEvent* event);
    friend void KEmailValidator_QBaseChildEvent(KEmailValidator* self, QChildEvent* event);
    friend void KEmailValidator_CustomEvent(KEmailValidator* self, QEvent* event);
    friend void KEmailValidator_QBaseCustomEvent(KEmailValidator* self, QEvent* event);
    friend void KEmailValidator_ConnectNotify(KEmailValidator* self, const QMetaMethod* signal);
    friend void KEmailValidator_QBaseConnectNotify(KEmailValidator* self, const QMetaMethod* signal);
    friend void KEmailValidator_DisconnectNotify(KEmailValidator* self, const QMetaMethod* signal);
    friend void KEmailValidator_QBaseDisconnectNotify(KEmailValidator* self, const QMetaMethod* signal);
    friend QObject* KEmailValidator_Sender(const KEmailValidator* self);
    friend QObject* KEmailValidator_QBaseSender(const KEmailValidator* self);
    friend int KEmailValidator_SenderSignalIndex(const KEmailValidator* self);
    friend int KEmailValidator_QBaseSenderSignalIndex(const KEmailValidator* self);
    friend int KEmailValidator_Receivers(const KEmailValidator* self, const char* signal);
    friend int KEmailValidator_QBaseReceivers(const KEmailValidator* self, const char* signal);
    friend bool KEmailValidator_IsSignalConnected(const KEmailValidator* self, const QMetaMethod* signal);
    friend bool KEmailValidator_QBaseIsSignalConnected(const KEmailValidator* self, const QMetaMethod* signal);
};

#endif
