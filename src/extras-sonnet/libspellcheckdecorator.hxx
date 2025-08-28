#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBVIRTUALSPELLCHECKDECORATOR_H
#define SRC_EXTRAS_SONNETC_LIBVIRTUALSPELLCHECKDECORATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::SpellCheckDecorator so that we can call protected methods
class VirtualSonnetSpellCheckDecorator final : public Sonnet::SpellCheckDecorator {

  public:
    // Virtual class boolean flag
    bool isVirtualSonnetSpellCheckDecorator = true;

    // Virtual class public types (including callbacks)
    using Sonnet__SpellCheckDecorator_Metacall_Callback = int (*)(Sonnet__SpellCheckDecorator*, int, int, void**);
    using Sonnet__SpellCheckDecorator_EventFilter_Callback = bool (*)(Sonnet__SpellCheckDecorator*, QObject*, QEvent*);
    using Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock_Callback = bool (*)(const Sonnet__SpellCheckDecorator*, libqt_string);
    using Sonnet__SpellCheckDecorator_Event_Callback = bool (*)(Sonnet__SpellCheckDecorator*, QEvent*);
    using Sonnet__SpellCheckDecorator_TimerEvent_Callback = void (*)(Sonnet__SpellCheckDecorator*, QTimerEvent*);
    using Sonnet__SpellCheckDecorator_ChildEvent_Callback = void (*)(Sonnet__SpellCheckDecorator*, QChildEvent*);
    using Sonnet__SpellCheckDecorator_CustomEvent_Callback = void (*)(Sonnet__SpellCheckDecorator*, QEvent*);
    using Sonnet__SpellCheckDecorator_ConnectNotify_Callback = void (*)(Sonnet__SpellCheckDecorator*, QMetaMethod*);
    using Sonnet__SpellCheckDecorator_DisconnectNotify_Callback = void (*)(Sonnet__SpellCheckDecorator*, QMetaMethod*);
    using Sonnet__SpellCheckDecorator_Sender_Callback = QObject* (*)();
    using Sonnet__SpellCheckDecorator_SenderSignalIndex_Callback = int (*)();
    using Sonnet__SpellCheckDecorator_Receivers_Callback = int (*)(const Sonnet__SpellCheckDecorator*, const char*);
    using Sonnet__SpellCheckDecorator_IsSignalConnected_Callback = bool (*)(const Sonnet__SpellCheckDecorator*, QMetaMethod*);

  protected:
    // Instance callback storage
    Sonnet__SpellCheckDecorator_Metacall_Callback sonnet__spellcheckdecorator_metacall_callback = nullptr;
    Sonnet__SpellCheckDecorator_EventFilter_Callback sonnet__spellcheckdecorator_eventfilter_callback = nullptr;
    Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock_Callback sonnet__spellcheckdecorator_isspellcheckingenabledforblock_callback = nullptr;
    Sonnet__SpellCheckDecorator_Event_Callback sonnet__spellcheckdecorator_event_callback = nullptr;
    Sonnet__SpellCheckDecorator_TimerEvent_Callback sonnet__spellcheckdecorator_timerevent_callback = nullptr;
    Sonnet__SpellCheckDecorator_ChildEvent_Callback sonnet__spellcheckdecorator_childevent_callback = nullptr;
    Sonnet__SpellCheckDecorator_CustomEvent_Callback sonnet__spellcheckdecorator_customevent_callback = nullptr;
    Sonnet__SpellCheckDecorator_ConnectNotify_Callback sonnet__spellcheckdecorator_connectnotify_callback = nullptr;
    Sonnet__SpellCheckDecorator_DisconnectNotify_Callback sonnet__spellcheckdecorator_disconnectnotify_callback = nullptr;
    Sonnet__SpellCheckDecorator_Sender_Callback sonnet__spellcheckdecorator_sender_callback = nullptr;
    Sonnet__SpellCheckDecorator_SenderSignalIndex_Callback sonnet__spellcheckdecorator_sendersignalindex_callback = nullptr;
    Sonnet__SpellCheckDecorator_Receivers_Callback sonnet__spellcheckdecorator_receivers_callback = nullptr;
    Sonnet__SpellCheckDecorator_IsSignalConnected_Callback sonnet__spellcheckdecorator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool sonnet__spellcheckdecorator_metacall_isbase = false;
    mutable bool sonnet__spellcheckdecorator_eventfilter_isbase = false;
    mutable bool sonnet__spellcheckdecorator_isspellcheckingenabledforblock_isbase = false;
    mutable bool sonnet__spellcheckdecorator_event_isbase = false;
    mutable bool sonnet__spellcheckdecorator_timerevent_isbase = false;
    mutable bool sonnet__spellcheckdecorator_childevent_isbase = false;
    mutable bool sonnet__spellcheckdecorator_customevent_isbase = false;
    mutable bool sonnet__spellcheckdecorator_connectnotify_isbase = false;
    mutable bool sonnet__spellcheckdecorator_disconnectnotify_isbase = false;
    mutable bool sonnet__spellcheckdecorator_sender_isbase = false;
    mutable bool sonnet__spellcheckdecorator_sendersignalindex_isbase = false;
    mutable bool sonnet__spellcheckdecorator_receivers_isbase = false;
    mutable bool sonnet__spellcheckdecorator_issignalconnected_isbase = false;

  public:
    VirtualSonnetSpellCheckDecorator(QTextEdit* textEdit) : Sonnet::SpellCheckDecorator(textEdit) {};
    VirtualSonnetSpellCheckDecorator(QPlainTextEdit* textEdit) : Sonnet::SpellCheckDecorator(textEdit) {};

    ~VirtualSonnetSpellCheckDecorator() {
        sonnet__spellcheckdecorator_metacall_callback = nullptr;
        sonnet__spellcheckdecorator_eventfilter_callback = nullptr;
        sonnet__spellcheckdecorator_isspellcheckingenabledforblock_callback = nullptr;
        sonnet__spellcheckdecorator_event_callback = nullptr;
        sonnet__spellcheckdecorator_timerevent_callback = nullptr;
        sonnet__spellcheckdecorator_childevent_callback = nullptr;
        sonnet__spellcheckdecorator_customevent_callback = nullptr;
        sonnet__spellcheckdecorator_connectnotify_callback = nullptr;
        sonnet__spellcheckdecorator_disconnectnotify_callback = nullptr;
        sonnet__spellcheckdecorator_sender_callback = nullptr;
        sonnet__spellcheckdecorator_sendersignalindex_callback = nullptr;
        sonnet__spellcheckdecorator_receivers_callback = nullptr;
        sonnet__spellcheckdecorator_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setSonnet__SpellCheckDecorator_Metacall_Callback(Sonnet__SpellCheckDecorator_Metacall_Callback cb) { sonnet__spellcheckdecorator_metacall_callback = cb; }
    inline void setSonnet__SpellCheckDecorator_EventFilter_Callback(Sonnet__SpellCheckDecorator_EventFilter_Callback cb) { sonnet__spellcheckdecorator_eventfilter_callback = cb; }
    inline void setSonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock_Callback(Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock_Callback cb) { sonnet__spellcheckdecorator_isspellcheckingenabledforblock_callback = cb; }
    inline void setSonnet__SpellCheckDecorator_Event_Callback(Sonnet__SpellCheckDecorator_Event_Callback cb) { sonnet__spellcheckdecorator_event_callback = cb; }
    inline void setSonnet__SpellCheckDecorator_TimerEvent_Callback(Sonnet__SpellCheckDecorator_TimerEvent_Callback cb) { sonnet__spellcheckdecorator_timerevent_callback = cb; }
    inline void setSonnet__SpellCheckDecorator_ChildEvent_Callback(Sonnet__SpellCheckDecorator_ChildEvent_Callback cb) { sonnet__spellcheckdecorator_childevent_callback = cb; }
    inline void setSonnet__SpellCheckDecorator_CustomEvent_Callback(Sonnet__SpellCheckDecorator_CustomEvent_Callback cb) { sonnet__spellcheckdecorator_customevent_callback = cb; }
    inline void setSonnet__SpellCheckDecorator_ConnectNotify_Callback(Sonnet__SpellCheckDecorator_ConnectNotify_Callback cb) { sonnet__spellcheckdecorator_connectnotify_callback = cb; }
    inline void setSonnet__SpellCheckDecorator_DisconnectNotify_Callback(Sonnet__SpellCheckDecorator_DisconnectNotify_Callback cb) { sonnet__spellcheckdecorator_disconnectnotify_callback = cb; }
    inline void setSonnet__SpellCheckDecorator_Sender_Callback(Sonnet__SpellCheckDecorator_Sender_Callback cb) { sonnet__spellcheckdecorator_sender_callback = cb; }
    inline void setSonnet__SpellCheckDecorator_SenderSignalIndex_Callback(Sonnet__SpellCheckDecorator_SenderSignalIndex_Callback cb) { sonnet__spellcheckdecorator_sendersignalindex_callback = cb; }
    inline void setSonnet__SpellCheckDecorator_Receivers_Callback(Sonnet__SpellCheckDecorator_Receivers_Callback cb) { sonnet__spellcheckdecorator_receivers_callback = cb; }
    inline void setSonnet__SpellCheckDecorator_IsSignalConnected_Callback(Sonnet__SpellCheckDecorator_IsSignalConnected_Callback cb) { sonnet__spellcheckdecorator_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setSonnet__SpellCheckDecorator_Metacall_IsBase(bool value) const { sonnet__spellcheckdecorator_metacall_isbase = value; }
    inline void setSonnet__SpellCheckDecorator_EventFilter_IsBase(bool value) const { sonnet__spellcheckdecorator_eventfilter_isbase = value; }
    inline void setSonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock_IsBase(bool value) const { sonnet__spellcheckdecorator_isspellcheckingenabledforblock_isbase = value; }
    inline void setSonnet__SpellCheckDecorator_Event_IsBase(bool value) const { sonnet__spellcheckdecorator_event_isbase = value; }
    inline void setSonnet__SpellCheckDecorator_TimerEvent_IsBase(bool value) const { sonnet__spellcheckdecorator_timerevent_isbase = value; }
    inline void setSonnet__SpellCheckDecorator_ChildEvent_IsBase(bool value) const { sonnet__spellcheckdecorator_childevent_isbase = value; }
    inline void setSonnet__SpellCheckDecorator_CustomEvent_IsBase(bool value) const { sonnet__spellcheckdecorator_customevent_isbase = value; }
    inline void setSonnet__SpellCheckDecorator_ConnectNotify_IsBase(bool value) const { sonnet__spellcheckdecorator_connectnotify_isbase = value; }
    inline void setSonnet__SpellCheckDecorator_DisconnectNotify_IsBase(bool value) const { sonnet__spellcheckdecorator_disconnectnotify_isbase = value; }
    inline void setSonnet__SpellCheckDecorator_Sender_IsBase(bool value) const { sonnet__spellcheckdecorator_sender_isbase = value; }
    inline void setSonnet__SpellCheckDecorator_SenderSignalIndex_IsBase(bool value) const { sonnet__spellcheckdecorator_sendersignalindex_isbase = value; }
    inline void setSonnet__SpellCheckDecorator_Receivers_IsBase(bool value) const { sonnet__spellcheckdecorator_receivers_isbase = value; }
    inline void setSonnet__SpellCheckDecorator_IsSignalConnected_IsBase(bool value) const { sonnet__spellcheckdecorator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__spellcheckdecorator_metacall_isbase) {
            sonnet__spellcheckdecorator_metacall_isbase = false;
            return Sonnet__SpellCheckDecorator::qt_metacall(param1, param2, param3);
        } else if (sonnet__spellcheckdecorator_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = sonnet__spellcheckdecorator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__SpellCheckDecorator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* event) override {
        if (sonnet__spellcheckdecorator_eventfilter_isbase) {
            sonnet__spellcheckdecorator_eventfilter_isbase = false;
            return Sonnet__SpellCheckDecorator::eventFilter(obj, event);
        } else if (sonnet__spellcheckdecorator_eventfilter_callback != nullptr) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = event;

            bool callback_ret = sonnet__spellcheckdecorator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Sonnet__SpellCheckDecorator::eventFilter(obj, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSpellCheckingEnabledForBlock(const QString& textBlock) const override {
        if (sonnet__spellcheckdecorator_isspellcheckingenabledforblock_isbase) {
            sonnet__spellcheckdecorator_isspellcheckingenabledforblock_isbase = false;
            return Sonnet__SpellCheckDecorator::isSpellCheckingEnabledForBlock(textBlock);
        } else if (sonnet__spellcheckdecorator_isspellcheckingenabledforblock_callback != nullptr) {
            const QString textBlock_ret = textBlock;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray textBlock_b = textBlock_ret.toUtf8();
            libqt_string textBlock_str;
            textBlock_str.len = textBlock_b.length();
            textBlock_str.data = static_cast<const char*>(malloc(textBlock_str.len + 1));
            memcpy((void*)textBlock_str.data, textBlock_b.data(), textBlock_str.len);
            ((char*)textBlock_str.data)[textBlock_str.len] = '\0';
            libqt_string cbval1 = textBlock_str;

            bool callback_ret = sonnet__spellcheckdecorator_isspellcheckingenabledforblock_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__SpellCheckDecorator::isSpellCheckingEnabledForBlock(textBlock);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__spellcheckdecorator_event_isbase) {
            sonnet__spellcheckdecorator_event_isbase = false;
            return Sonnet__SpellCheckDecorator::event(event);
        } else if (sonnet__spellcheckdecorator_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = sonnet__spellcheckdecorator_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__SpellCheckDecorator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__spellcheckdecorator_timerevent_isbase) {
            sonnet__spellcheckdecorator_timerevent_isbase = false;
            Sonnet__SpellCheckDecorator::timerEvent(event);
        } else if (sonnet__spellcheckdecorator_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            sonnet__spellcheckdecorator_timerevent_callback(this, cbval1);
        } else {
            Sonnet__SpellCheckDecorator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__spellcheckdecorator_childevent_isbase) {
            sonnet__spellcheckdecorator_childevent_isbase = false;
            Sonnet__SpellCheckDecorator::childEvent(event);
        } else if (sonnet__spellcheckdecorator_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            sonnet__spellcheckdecorator_childevent_callback(this, cbval1);
        } else {
            Sonnet__SpellCheckDecorator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__spellcheckdecorator_customevent_isbase) {
            sonnet__spellcheckdecorator_customevent_isbase = false;
            Sonnet__SpellCheckDecorator::customEvent(event);
        } else if (sonnet__spellcheckdecorator_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__spellcheckdecorator_customevent_callback(this, cbval1);
        } else {
            Sonnet__SpellCheckDecorator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__spellcheckdecorator_connectnotify_isbase) {
            sonnet__spellcheckdecorator_connectnotify_isbase = false;
            Sonnet__SpellCheckDecorator::connectNotify(signal);
        } else if (sonnet__spellcheckdecorator_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__spellcheckdecorator_connectnotify_callback(this, cbval1);
        } else {
            Sonnet__SpellCheckDecorator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__spellcheckdecorator_disconnectnotify_isbase) {
            sonnet__spellcheckdecorator_disconnectnotify_isbase = false;
            Sonnet__SpellCheckDecorator::disconnectNotify(signal);
        } else if (sonnet__spellcheckdecorator_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__spellcheckdecorator_disconnectnotify_callback(this, cbval1);
        } else {
            Sonnet__SpellCheckDecorator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (sonnet__spellcheckdecorator_sender_isbase) {
            sonnet__spellcheckdecorator_sender_isbase = false;
            return Sonnet__SpellCheckDecorator::sender();
        } else if (sonnet__spellcheckdecorator_sender_callback != nullptr) {
            QObject* callback_ret = sonnet__spellcheckdecorator_sender_callback();
            return callback_ret;
        } else {
            return Sonnet__SpellCheckDecorator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (sonnet__spellcheckdecorator_sendersignalindex_isbase) {
            sonnet__spellcheckdecorator_sendersignalindex_isbase = false;
            return Sonnet__SpellCheckDecorator::senderSignalIndex();
        } else if (sonnet__spellcheckdecorator_sendersignalindex_callback != nullptr) {
            int callback_ret = sonnet__spellcheckdecorator_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__SpellCheckDecorator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (sonnet__spellcheckdecorator_receivers_isbase) {
            sonnet__spellcheckdecorator_receivers_isbase = false;
            return Sonnet__SpellCheckDecorator::receivers(signal);
        } else if (sonnet__spellcheckdecorator_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = sonnet__spellcheckdecorator_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__SpellCheckDecorator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (sonnet__spellcheckdecorator_issignalconnected_isbase) {
            sonnet__spellcheckdecorator_issignalconnected_isbase = false;
            return Sonnet__SpellCheckDecorator::isSignalConnected(signal);
        } else if (sonnet__spellcheckdecorator_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = sonnet__spellcheckdecorator_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__SpellCheckDecorator::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool Sonnet__SpellCheckDecorator_EventFilter(Sonnet::SpellCheckDecorator* self, QObject* obj, QEvent* event);
    friend bool Sonnet__SpellCheckDecorator_QBaseEventFilter(Sonnet::SpellCheckDecorator* self, QObject* obj, QEvent* event);
    friend bool Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock(const Sonnet::SpellCheckDecorator* self, const libqt_string textBlock);
    friend bool Sonnet__SpellCheckDecorator_QBaseIsSpellCheckingEnabledForBlock(const Sonnet::SpellCheckDecorator* self, const libqt_string textBlock);
    friend void Sonnet__SpellCheckDecorator_TimerEvent(Sonnet::SpellCheckDecorator* self, QTimerEvent* event);
    friend void Sonnet__SpellCheckDecorator_QBaseTimerEvent(Sonnet::SpellCheckDecorator* self, QTimerEvent* event);
    friend void Sonnet__SpellCheckDecorator_ChildEvent(Sonnet::SpellCheckDecorator* self, QChildEvent* event);
    friend void Sonnet__SpellCheckDecorator_QBaseChildEvent(Sonnet::SpellCheckDecorator* self, QChildEvent* event);
    friend void Sonnet__SpellCheckDecorator_CustomEvent(Sonnet::SpellCheckDecorator* self, QEvent* event);
    friend void Sonnet__SpellCheckDecorator_QBaseCustomEvent(Sonnet::SpellCheckDecorator* self, QEvent* event);
    friend void Sonnet__SpellCheckDecorator_ConnectNotify(Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
    friend void Sonnet__SpellCheckDecorator_QBaseConnectNotify(Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
    friend void Sonnet__SpellCheckDecorator_DisconnectNotify(Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
    friend void Sonnet__SpellCheckDecorator_QBaseDisconnectNotify(Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
    friend QObject* Sonnet__SpellCheckDecorator_Sender(const Sonnet::SpellCheckDecorator* self);
    friend QObject* Sonnet__SpellCheckDecorator_QBaseSender(const Sonnet::SpellCheckDecorator* self);
    friend int Sonnet__SpellCheckDecorator_SenderSignalIndex(const Sonnet::SpellCheckDecorator* self);
    friend int Sonnet__SpellCheckDecorator_QBaseSenderSignalIndex(const Sonnet::SpellCheckDecorator* self);
    friend int Sonnet__SpellCheckDecorator_Receivers(const Sonnet::SpellCheckDecorator* self, const char* signal);
    friend int Sonnet__SpellCheckDecorator_QBaseReceivers(const Sonnet::SpellCheckDecorator* self, const char* signal);
    friend bool Sonnet__SpellCheckDecorator_IsSignalConnected(const Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
    friend bool Sonnet__SpellCheckDecorator_QBaseIsSignalConnected(const Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
};

#endif
