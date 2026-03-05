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
    using Sonnet__SpellCheckDecorator_MetaObject_Callback = QMetaObject* (*)();
    using Sonnet__SpellCheckDecorator_Metacast_Callback = void* (*)(Sonnet__SpellCheckDecorator*, const char*);
    using Sonnet__SpellCheckDecorator_Metacall_Callback = int (*)(Sonnet__SpellCheckDecorator*, int, int, void**);
    using Sonnet__SpellCheckDecorator_EventFilter_Callback = bool (*)(Sonnet__SpellCheckDecorator*, QObject*, QEvent*);
    using Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock_Callback = bool (*)(const Sonnet__SpellCheckDecorator*, const char*);
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
    Sonnet__SpellCheckDecorator_MetaObject_Callback sonnet__spellcheckdecorator_metaobject_callback = nullptr;
    Sonnet__SpellCheckDecorator_Metacast_Callback sonnet__spellcheckdecorator_metacast_callback = nullptr;
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
    mutable bool sonnet__spellcheckdecorator_metaobject_isbase = false;
    mutable bool sonnet__spellcheckdecorator_metacast_isbase = false;
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

    // Callback setters
    inline void setSonnet__SpellCheckDecorator_MetaObject_Callback(Sonnet__SpellCheckDecorator_MetaObject_Callback cb) { sonnet__spellcheckdecorator_metaobject_callback = cb; }
    inline void setSonnet__SpellCheckDecorator_Metacast_Callback(Sonnet__SpellCheckDecorator_Metacast_Callback cb) { sonnet__spellcheckdecorator_metacast_callback = cb; }
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
    inline void setSonnet__SpellCheckDecorator_MetaObject_IsBase(bool value) const { sonnet__spellcheckdecorator_metaobject_isbase = value; }
    inline void setSonnet__SpellCheckDecorator_Metacast_IsBase(bool value) const { sonnet__spellcheckdecorator_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (sonnet__spellcheckdecorator_metaobject_isbase) {
            sonnet__spellcheckdecorator_metaobject_isbase = false;
            return Sonnet__SpellCheckDecorator::metaObject();
        }
        auto metaobject_cb = sonnet__spellcheckdecorator_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return Sonnet__SpellCheckDecorator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (sonnet__spellcheckdecorator_metacast_isbase) {
            sonnet__spellcheckdecorator_metacast_isbase = false;
            return Sonnet__SpellCheckDecorator::qt_metacast(param1);
        }
        auto metacast_cb = sonnet__spellcheckdecorator_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return Sonnet__SpellCheckDecorator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__spellcheckdecorator_metacall_isbase) {
            sonnet__spellcheckdecorator_metacall_isbase = false;
            return Sonnet__SpellCheckDecorator::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = sonnet__spellcheckdecorator_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__SpellCheckDecorator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* event) override {
        if (sonnet__spellcheckdecorator_eventfilter_isbase) {
            sonnet__spellcheckdecorator_eventfilter_isbase = false;
            return Sonnet__SpellCheckDecorator::eventFilter(obj, event);
        }
        auto eventfilter_cb = sonnet__spellcheckdecorator_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return Sonnet__SpellCheckDecorator::eventFilter(obj, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSpellCheckingEnabledForBlock(const QString& textBlock) const override {
        if (sonnet__spellcheckdecorator_isspellcheckingenabledforblock_isbase) {
            sonnet__spellcheckdecorator_isspellcheckingenabledforblock_isbase = false;
            return Sonnet__SpellCheckDecorator::isSpellCheckingEnabledForBlock(textBlock);
        }
        auto isspellcheckingenabledforblock_cb = sonnet__spellcheckdecorator_isspellcheckingenabledforblock_callback;
        if (isspellcheckingenabledforblock_cb) {
            const QString textBlock_ret = textBlock;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray textBlock_b = textBlock_ret.toUtf8();
            auto textBlock_str_len = textBlock_b.length();
            const char* textBlock_str = static_cast<const char*>(malloc(textBlock_str_len + 1));
            memcpy((void*)textBlock_str, textBlock_b.data(), textBlock_str_len);
            ((char*)textBlock_str)[textBlock_str_len] = '\0';
            const char* cbval1 = textBlock_str;

            bool callback_ret = isspellcheckingenabledforblock_cb(this, cbval1);
            libqt_free(textBlock_str);
            return callback_ret;
        }
        return Sonnet__SpellCheckDecorator::isSpellCheckingEnabledForBlock(textBlock);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__spellcheckdecorator_event_isbase) {
            sonnet__spellcheckdecorator_event_isbase = false;
            return Sonnet__SpellCheckDecorator::event(event);
        }
        auto event_cb = sonnet__spellcheckdecorator_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return Sonnet__SpellCheckDecorator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__spellcheckdecorator_timerevent_isbase) {
            sonnet__spellcheckdecorator_timerevent_isbase = false;
            Sonnet__SpellCheckDecorator::timerEvent(event);
            return;
        }
        auto timerevent_cb = sonnet__spellcheckdecorator_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        Sonnet__SpellCheckDecorator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__spellcheckdecorator_childevent_isbase) {
            sonnet__spellcheckdecorator_childevent_isbase = false;
            Sonnet__SpellCheckDecorator::childEvent(event);
            return;
        }
        auto childevent_cb = sonnet__spellcheckdecorator_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        Sonnet__SpellCheckDecorator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__spellcheckdecorator_customevent_isbase) {
            sonnet__spellcheckdecorator_customevent_isbase = false;
            Sonnet__SpellCheckDecorator::customEvent(event);
            return;
        }
        auto customevent_cb = sonnet__spellcheckdecorator_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        Sonnet__SpellCheckDecorator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__spellcheckdecorator_connectnotify_isbase) {
            sonnet__spellcheckdecorator_connectnotify_isbase = false;
            Sonnet__SpellCheckDecorator::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = sonnet__spellcheckdecorator_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        Sonnet__SpellCheckDecorator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__spellcheckdecorator_disconnectnotify_isbase) {
            sonnet__spellcheckdecorator_disconnectnotify_isbase = false;
            Sonnet__SpellCheckDecorator::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = sonnet__spellcheckdecorator_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        Sonnet__SpellCheckDecorator::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (sonnet__spellcheckdecorator_sender_isbase) {
            sonnet__spellcheckdecorator_sender_isbase = false;
            return Sonnet__SpellCheckDecorator::sender();
        }
        auto sender_cb = sonnet__spellcheckdecorator_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return Sonnet__SpellCheckDecorator::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (sonnet__spellcheckdecorator_sendersignalindex_isbase) {
            sonnet__spellcheckdecorator_sendersignalindex_isbase = false;
            return Sonnet__SpellCheckDecorator::senderSignalIndex();
        }
        auto sendersignalindex_cb = sonnet__spellcheckdecorator_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return Sonnet__SpellCheckDecorator::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (sonnet__spellcheckdecorator_receivers_isbase) {
            sonnet__spellcheckdecorator_receivers_isbase = false;
            return Sonnet__SpellCheckDecorator::receivers(signal);
        }
        auto receivers_cb = sonnet__spellcheckdecorator_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Sonnet__SpellCheckDecorator::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (sonnet__spellcheckdecorator_issignalconnected_isbase) {
            sonnet__spellcheckdecorator_issignalconnected_isbase = false;
            return Sonnet__SpellCheckDecorator::isSignalConnected(signal);
        }
        auto issignalconnected_cb = sonnet__spellcheckdecorator_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return Sonnet__SpellCheckDecorator::isSignalConnected(signal);
    }

    // Friend functions
    friend bool Sonnet__SpellCheckDecorator_EventFilter(Sonnet::SpellCheckDecorator* self, QObject* obj, QEvent* event);
    friend bool Sonnet__SpellCheckDecorator_SuperEventFilter(Sonnet::SpellCheckDecorator* self, QObject* obj, QEvent* event);
    friend bool Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock(const Sonnet::SpellCheckDecorator* self, const libqt_string textBlock);
    friend bool Sonnet__SpellCheckDecorator_SuperIsSpellCheckingEnabledForBlock(const Sonnet::SpellCheckDecorator* self, const libqt_string textBlock);
    friend void Sonnet__SpellCheckDecorator_TimerEvent(Sonnet::SpellCheckDecorator* self, QTimerEvent* event);
    friend void Sonnet__SpellCheckDecorator_SuperTimerEvent(Sonnet::SpellCheckDecorator* self, QTimerEvent* event);
    friend void Sonnet__SpellCheckDecorator_ChildEvent(Sonnet::SpellCheckDecorator* self, QChildEvent* event);
    friend void Sonnet__SpellCheckDecorator_SuperChildEvent(Sonnet::SpellCheckDecorator* self, QChildEvent* event);
    friend void Sonnet__SpellCheckDecorator_CustomEvent(Sonnet::SpellCheckDecorator* self, QEvent* event);
    friend void Sonnet__SpellCheckDecorator_SuperCustomEvent(Sonnet::SpellCheckDecorator* self, QEvent* event);
    friend void Sonnet__SpellCheckDecorator_ConnectNotify(Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
    friend void Sonnet__SpellCheckDecorator_SuperConnectNotify(Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
    friend void Sonnet__SpellCheckDecorator_DisconnectNotify(Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
    friend void Sonnet__SpellCheckDecorator_SuperDisconnectNotify(Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
    friend QObject* Sonnet__SpellCheckDecorator_Sender(const Sonnet::SpellCheckDecorator* self);
    friend QObject* Sonnet__SpellCheckDecorator_SuperSender(const Sonnet::SpellCheckDecorator* self);
    friend int Sonnet__SpellCheckDecorator_SenderSignalIndex(const Sonnet::SpellCheckDecorator* self);
    friend int Sonnet__SpellCheckDecorator_SuperSenderSignalIndex(const Sonnet::SpellCheckDecorator* self);
    friend int Sonnet__SpellCheckDecorator_Receivers(const Sonnet::SpellCheckDecorator* self, const char* signal);
    friend int Sonnet__SpellCheckDecorator_SuperReceivers(const Sonnet::SpellCheckDecorator* self, const char* signal);
    friend bool Sonnet__SpellCheckDecorator_IsSignalConnected(const Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
    friend bool Sonnet__SpellCheckDecorator_SuperIsSignalConnected(const Sonnet::SpellCheckDecorator* self, const QMetaMethod* signal);
};

#endif
