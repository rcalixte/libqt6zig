#pragma once
#ifndef SRC_EXTRAS_KI18NC_LIBVIRTUALKLOCALIZEDTRANSLATOR_H
#define SRC_EXTRAS_KI18NC_LIBVIRTUALKLOCALIZEDTRANSLATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLocalizedTranslator so that we can call protected methods
class VirtualKLocalizedTranslator final : public KLocalizedTranslator {

  public:
    // Virtual class boolean flag
    bool isVirtualKLocalizedTranslator = true;

    // Virtual class public types (including callbacks)
    using KLocalizedTranslator_Metacall_Callback = int (*)(KLocalizedTranslator*, int, int, void**);
    using KLocalizedTranslator_Translate_Callback = const char* (*)(const KLocalizedTranslator*, const char*, const char*, const char*, int);
    using KLocalizedTranslator_IsEmpty_Callback = bool (*)();
    using KLocalizedTranslator_Event_Callback = bool (*)(KLocalizedTranslator*, QEvent*);
    using KLocalizedTranslator_EventFilter_Callback = bool (*)(KLocalizedTranslator*, QObject*, QEvent*);
    using KLocalizedTranslator_TimerEvent_Callback = void (*)(KLocalizedTranslator*, QTimerEvent*);
    using KLocalizedTranslator_ChildEvent_Callback = void (*)(KLocalizedTranslator*, QChildEvent*);
    using KLocalizedTranslator_CustomEvent_Callback = void (*)(KLocalizedTranslator*, QEvent*);
    using KLocalizedTranslator_ConnectNotify_Callback = void (*)(KLocalizedTranslator*, QMetaMethod*);
    using KLocalizedTranslator_DisconnectNotify_Callback = void (*)(KLocalizedTranslator*, QMetaMethod*);
    using KLocalizedTranslator_Sender_Callback = QObject* (*)();
    using KLocalizedTranslator_SenderSignalIndex_Callback = int (*)();
    using KLocalizedTranslator_Receivers_Callback = int (*)(const KLocalizedTranslator*, const char*);
    using KLocalizedTranslator_IsSignalConnected_Callback = bool (*)(const KLocalizedTranslator*, QMetaMethod*);

  protected:
    // Instance callback storage
    KLocalizedTranslator_Metacall_Callback klocalizedtranslator_metacall_callback = nullptr;
    KLocalizedTranslator_Translate_Callback klocalizedtranslator_translate_callback = nullptr;
    KLocalizedTranslator_IsEmpty_Callback klocalizedtranslator_isempty_callback = nullptr;
    KLocalizedTranslator_Event_Callback klocalizedtranslator_event_callback = nullptr;
    KLocalizedTranslator_EventFilter_Callback klocalizedtranslator_eventfilter_callback = nullptr;
    KLocalizedTranslator_TimerEvent_Callback klocalizedtranslator_timerevent_callback = nullptr;
    KLocalizedTranslator_ChildEvent_Callback klocalizedtranslator_childevent_callback = nullptr;
    KLocalizedTranslator_CustomEvent_Callback klocalizedtranslator_customevent_callback = nullptr;
    KLocalizedTranslator_ConnectNotify_Callback klocalizedtranslator_connectnotify_callback = nullptr;
    KLocalizedTranslator_DisconnectNotify_Callback klocalizedtranslator_disconnectnotify_callback = nullptr;
    KLocalizedTranslator_Sender_Callback klocalizedtranslator_sender_callback = nullptr;
    KLocalizedTranslator_SenderSignalIndex_Callback klocalizedtranslator_sendersignalindex_callback = nullptr;
    KLocalizedTranslator_Receivers_Callback klocalizedtranslator_receivers_callback = nullptr;
    KLocalizedTranslator_IsSignalConnected_Callback klocalizedtranslator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool klocalizedtranslator_metacall_isbase = false;
    mutable bool klocalizedtranslator_translate_isbase = false;
    mutable bool klocalizedtranslator_isempty_isbase = false;
    mutable bool klocalizedtranslator_event_isbase = false;
    mutable bool klocalizedtranslator_eventfilter_isbase = false;
    mutable bool klocalizedtranslator_timerevent_isbase = false;
    mutable bool klocalizedtranslator_childevent_isbase = false;
    mutable bool klocalizedtranslator_customevent_isbase = false;
    mutable bool klocalizedtranslator_connectnotify_isbase = false;
    mutable bool klocalizedtranslator_disconnectnotify_isbase = false;
    mutable bool klocalizedtranslator_sender_isbase = false;
    mutable bool klocalizedtranslator_sendersignalindex_isbase = false;
    mutable bool klocalizedtranslator_receivers_isbase = false;
    mutable bool klocalizedtranslator_issignalconnected_isbase = false;

  public:
    VirtualKLocalizedTranslator() : KLocalizedTranslator() {};
    VirtualKLocalizedTranslator(QObject* parent) : KLocalizedTranslator(parent) {};

    ~VirtualKLocalizedTranslator() {
        klocalizedtranslator_metacall_callback = nullptr;
        klocalizedtranslator_translate_callback = nullptr;
        klocalizedtranslator_isempty_callback = nullptr;
        klocalizedtranslator_event_callback = nullptr;
        klocalizedtranslator_eventfilter_callback = nullptr;
        klocalizedtranslator_timerevent_callback = nullptr;
        klocalizedtranslator_childevent_callback = nullptr;
        klocalizedtranslator_customevent_callback = nullptr;
        klocalizedtranslator_connectnotify_callback = nullptr;
        klocalizedtranslator_disconnectnotify_callback = nullptr;
        klocalizedtranslator_sender_callback = nullptr;
        klocalizedtranslator_sendersignalindex_callback = nullptr;
        klocalizedtranslator_receivers_callback = nullptr;
        klocalizedtranslator_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKLocalizedTranslator_Metacall_Callback(KLocalizedTranslator_Metacall_Callback cb) { klocalizedtranslator_metacall_callback = cb; }
    inline void setKLocalizedTranslator_Translate_Callback(KLocalizedTranslator_Translate_Callback cb) { klocalizedtranslator_translate_callback = cb; }
    inline void setKLocalizedTranslator_IsEmpty_Callback(KLocalizedTranslator_IsEmpty_Callback cb) { klocalizedtranslator_isempty_callback = cb; }
    inline void setKLocalizedTranslator_Event_Callback(KLocalizedTranslator_Event_Callback cb) { klocalizedtranslator_event_callback = cb; }
    inline void setKLocalizedTranslator_EventFilter_Callback(KLocalizedTranslator_EventFilter_Callback cb) { klocalizedtranslator_eventfilter_callback = cb; }
    inline void setKLocalizedTranslator_TimerEvent_Callback(KLocalizedTranslator_TimerEvent_Callback cb) { klocalizedtranslator_timerevent_callback = cb; }
    inline void setKLocalizedTranslator_ChildEvent_Callback(KLocalizedTranslator_ChildEvent_Callback cb) { klocalizedtranslator_childevent_callback = cb; }
    inline void setKLocalizedTranslator_CustomEvent_Callback(KLocalizedTranslator_CustomEvent_Callback cb) { klocalizedtranslator_customevent_callback = cb; }
    inline void setKLocalizedTranslator_ConnectNotify_Callback(KLocalizedTranslator_ConnectNotify_Callback cb) { klocalizedtranslator_connectnotify_callback = cb; }
    inline void setKLocalizedTranslator_DisconnectNotify_Callback(KLocalizedTranslator_DisconnectNotify_Callback cb) { klocalizedtranslator_disconnectnotify_callback = cb; }
    inline void setKLocalizedTranslator_Sender_Callback(KLocalizedTranslator_Sender_Callback cb) { klocalizedtranslator_sender_callback = cb; }
    inline void setKLocalizedTranslator_SenderSignalIndex_Callback(KLocalizedTranslator_SenderSignalIndex_Callback cb) { klocalizedtranslator_sendersignalindex_callback = cb; }
    inline void setKLocalizedTranslator_Receivers_Callback(KLocalizedTranslator_Receivers_Callback cb) { klocalizedtranslator_receivers_callback = cb; }
    inline void setKLocalizedTranslator_IsSignalConnected_Callback(KLocalizedTranslator_IsSignalConnected_Callback cb) { klocalizedtranslator_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKLocalizedTranslator_Metacall_IsBase(bool value) const { klocalizedtranslator_metacall_isbase = value; }
    inline void setKLocalizedTranslator_Translate_IsBase(bool value) const { klocalizedtranslator_translate_isbase = value; }
    inline void setKLocalizedTranslator_IsEmpty_IsBase(bool value) const { klocalizedtranslator_isempty_isbase = value; }
    inline void setKLocalizedTranslator_Event_IsBase(bool value) const { klocalizedtranslator_event_isbase = value; }
    inline void setKLocalizedTranslator_EventFilter_IsBase(bool value) const { klocalizedtranslator_eventfilter_isbase = value; }
    inline void setKLocalizedTranslator_TimerEvent_IsBase(bool value) const { klocalizedtranslator_timerevent_isbase = value; }
    inline void setKLocalizedTranslator_ChildEvent_IsBase(bool value) const { klocalizedtranslator_childevent_isbase = value; }
    inline void setKLocalizedTranslator_CustomEvent_IsBase(bool value) const { klocalizedtranslator_customevent_isbase = value; }
    inline void setKLocalizedTranslator_ConnectNotify_IsBase(bool value) const { klocalizedtranslator_connectnotify_isbase = value; }
    inline void setKLocalizedTranslator_DisconnectNotify_IsBase(bool value) const { klocalizedtranslator_disconnectnotify_isbase = value; }
    inline void setKLocalizedTranslator_Sender_IsBase(bool value) const { klocalizedtranslator_sender_isbase = value; }
    inline void setKLocalizedTranslator_SenderSignalIndex_IsBase(bool value) const { klocalizedtranslator_sendersignalindex_isbase = value; }
    inline void setKLocalizedTranslator_Receivers_IsBase(bool value) const { klocalizedtranslator_receivers_isbase = value; }
    inline void setKLocalizedTranslator_IsSignalConnected_IsBase(bool value) const { klocalizedtranslator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klocalizedtranslator_metacall_isbase) {
            klocalizedtranslator_metacall_isbase = false;
            return KLocalizedTranslator::qt_metacall(param1, param2, param3);
        } else if (klocalizedtranslator_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = klocalizedtranslator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KLocalizedTranslator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString translate(const char* context, const char* sourceText, const char* disambiguation, int n) const override {
        if (klocalizedtranslator_translate_isbase) {
            klocalizedtranslator_translate_isbase = false;
            return KLocalizedTranslator::translate(context, sourceText, disambiguation, n);
        } else if (klocalizedtranslator_translate_callback != nullptr) {
            const char* cbval1 = (const char*)context;
            const char* cbval2 = (const char*)sourceText;
            const char* cbval3 = (const char*)disambiguation;
            int cbval4 = n;

            const char* callback_ret = klocalizedtranslator_translate_callback(this, cbval1, cbval2, cbval3, cbval4);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KLocalizedTranslator::translate(context, sourceText, disambiguation, n);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (klocalizedtranslator_isempty_isbase) {
            klocalizedtranslator_isempty_isbase = false;
            return KLocalizedTranslator::isEmpty();
        } else if (klocalizedtranslator_isempty_callback != nullptr) {
            bool callback_ret = klocalizedtranslator_isempty_callback();
            return callback_ret;
        } else {
            return KLocalizedTranslator::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klocalizedtranslator_event_isbase) {
            klocalizedtranslator_event_isbase = false;
            return KLocalizedTranslator::event(event);
        } else if (klocalizedtranslator_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = klocalizedtranslator_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLocalizedTranslator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klocalizedtranslator_eventfilter_isbase) {
            klocalizedtranslator_eventfilter_isbase = false;
            return KLocalizedTranslator::eventFilter(watched, event);
        } else if (klocalizedtranslator_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = klocalizedtranslator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KLocalizedTranslator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klocalizedtranslator_timerevent_isbase) {
            klocalizedtranslator_timerevent_isbase = false;
            KLocalizedTranslator::timerEvent(event);
        } else if (klocalizedtranslator_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            klocalizedtranslator_timerevent_callback(this, cbval1);
        } else {
            KLocalizedTranslator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klocalizedtranslator_childevent_isbase) {
            klocalizedtranslator_childevent_isbase = false;
            KLocalizedTranslator::childEvent(event);
        } else if (klocalizedtranslator_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            klocalizedtranslator_childevent_callback(this, cbval1);
        } else {
            KLocalizedTranslator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klocalizedtranslator_customevent_isbase) {
            klocalizedtranslator_customevent_isbase = false;
            KLocalizedTranslator::customEvent(event);
        } else if (klocalizedtranslator_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            klocalizedtranslator_customevent_callback(this, cbval1);
        } else {
            KLocalizedTranslator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klocalizedtranslator_connectnotify_isbase) {
            klocalizedtranslator_connectnotify_isbase = false;
            KLocalizedTranslator::connectNotify(signal);
        } else if (klocalizedtranslator_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klocalizedtranslator_connectnotify_callback(this, cbval1);
        } else {
            KLocalizedTranslator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klocalizedtranslator_disconnectnotify_isbase) {
            klocalizedtranslator_disconnectnotify_isbase = false;
            KLocalizedTranslator::disconnectNotify(signal);
        } else if (klocalizedtranslator_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klocalizedtranslator_disconnectnotify_callback(this, cbval1);
        } else {
            KLocalizedTranslator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (klocalizedtranslator_sender_isbase) {
            klocalizedtranslator_sender_isbase = false;
            return KLocalizedTranslator::sender();
        } else if (klocalizedtranslator_sender_callback != nullptr) {
            QObject* callback_ret = klocalizedtranslator_sender_callback();
            return callback_ret;
        } else {
            return KLocalizedTranslator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (klocalizedtranslator_sendersignalindex_isbase) {
            klocalizedtranslator_sendersignalindex_isbase = false;
            return KLocalizedTranslator::senderSignalIndex();
        } else if (klocalizedtranslator_sendersignalindex_callback != nullptr) {
            int callback_ret = klocalizedtranslator_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KLocalizedTranslator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (klocalizedtranslator_receivers_isbase) {
            klocalizedtranslator_receivers_isbase = false;
            return KLocalizedTranslator::receivers(signal);
        } else if (klocalizedtranslator_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = klocalizedtranslator_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KLocalizedTranslator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (klocalizedtranslator_issignalconnected_isbase) {
            klocalizedtranslator_issignalconnected_isbase = false;
            return KLocalizedTranslator::isSignalConnected(signal);
        } else if (klocalizedtranslator_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = klocalizedtranslator_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLocalizedTranslator::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KLocalizedTranslator_TimerEvent(KLocalizedTranslator* self, QTimerEvent* event);
    friend void KLocalizedTranslator_QBaseTimerEvent(KLocalizedTranslator* self, QTimerEvent* event);
    friend void KLocalizedTranslator_ChildEvent(KLocalizedTranslator* self, QChildEvent* event);
    friend void KLocalizedTranslator_QBaseChildEvent(KLocalizedTranslator* self, QChildEvent* event);
    friend void KLocalizedTranslator_CustomEvent(KLocalizedTranslator* self, QEvent* event);
    friend void KLocalizedTranslator_QBaseCustomEvent(KLocalizedTranslator* self, QEvent* event);
    friend void KLocalizedTranslator_ConnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal);
    friend void KLocalizedTranslator_QBaseConnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal);
    friend void KLocalizedTranslator_DisconnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal);
    friend void KLocalizedTranslator_QBaseDisconnectNotify(KLocalizedTranslator* self, const QMetaMethod* signal);
    friend QObject* KLocalizedTranslator_Sender(const KLocalizedTranslator* self);
    friend QObject* KLocalizedTranslator_QBaseSender(const KLocalizedTranslator* self);
    friend int KLocalizedTranslator_SenderSignalIndex(const KLocalizedTranslator* self);
    friend int KLocalizedTranslator_QBaseSenderSignalIndex(const KLocalizedTranslator* self);
    friend int KLocalizedTranslator_Receivers(const KLocalizedTranslator* self, const char* signal);
    friend int KLocalizedTranslator_QBaseReceivers(const KLocalizedTranslator* self, const char* signal);
    friend bool KLocalizedTranslator_IsSignalConnected(const KLocalizedTranslator* self, const QMetaMethod* signal);
    friend bool KLocalizedTranslator_QBaseIsSignalConnected(const KLocalizedTranslator* self, const QMetaMethod* signal);
};

#endif
