#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTEXTTOSPEECHACTIONS_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTEXTTOSPEECHACTIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEditTextToSpeech::TextToSpeechActions so that we can call protected methods
class VirtualTextEditTextToSpeechTextToSpeechActions final : public TextEditTextToSpeech::TextToSpeechActions {

  public:
    // Virtual class boolean flag
    bool isVirtualTextEditTextToSpeechTextToSpeechActions = true;

    // Virtual class public types (including callbacks)
    using TextEditTextToSpeech__TextToSpeechActions_MetaObject_Callback = QMetaObject* (*)();
    using TextEditTextToSpeech__TextToSpeechActions_Metacast_Callback = void* (*)(TextEditTextToSpeech__TextToSpeechActions*, const char*);
    using TextEditTextToSpeech__TextToSpeechActions_Metacall_Callback = int (*)(TextEditTextToSpeech__TextToSpeechActions*, int, int, void**);
    using TextEditTextToSpeech__TextToSpeechActions_Event_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechActions*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechActions_EventFilter_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechActions*, QObject*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechActions_TimerEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechActions*, QTimerEvent*);
    using TextEditTextToSpeech__TextToSpeechActions_ChildEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechActions*, QChildEvent*);
    using TextEditTextToSpeech__TextToSpeechActions_CustomEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechActions*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechActions_ConnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechActions*, QMetaMethod*);
    using TextEditTextToSpeech__TextToSpeechActions_DisconnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechActions*, QMetaMethod*);
    using TextEditTextToSpeech__TextToSpeechActions_Sender_Callback = QObject* (*)();
    using TextEditTextToSpeech__TextToSpeechActions_SenderSignalIndex_Callback = int (*)();
    using TextEditTextToSpeech__TextToSpeechActions_Receivers_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechActions*, const char*);
    using TextEditTextToSpeech__TextToSpeechActions_IsSignalConnected_Callback = bool (*)(const TextEditTextToSpeech__TextToSpeechActions*, QMetaMethod*);

  protected:
    // Instance callback storage
    TextEditTextToSpeech__TextToSpeechActions_MetaObject_Callback textedittexttospeech__texttospeechactions_metaobject_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_Metacast_Callback textedittexttospeech__texttospeechactions_metacast_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_Metacall_Callback textedittexttospeech__texttospeechactions_metacall_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_Event_Callback textedittexttospeech__texttospeechactions_event_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_EventFilter_Callback textedittexttospeech__texttospeechactions_eventfilter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_TimerEvent_Callback textedittexttospeech__texttospeechactions_timerevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_ChildEvent_Callback textedittexttospeech__texttospeechactions_childevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_CustomEvent_Callback textedittexttospeech__texttospeechactions_customevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_ConnectNotify_Callback textedittexttospeech__texttospeechactions_connectnotify_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_DisconnectNotify_Callback textedittexttospeech__texttospeechactions_disconnectnotify_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_Sender_Callback textedittexttospeech__texttospeechactions_sender_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_SenderSignalIndex_Callback textedittexttospeech__texttospeechactions_sendersignalindex_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_Receivers_Callback textedittexttospeech__texttospeechactions_receivers_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechActions_IsSignalConnected_Callback textedittexttospeech__texttospeechactions_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool textedittexttospeech__texttospeechactions_metaobject_isbase = false;
    mutable bool textedittexttospeech__texttospeechactions_metacast_isbase = false;
    mutable bool textedittexttospeech__texttospeechactions_metacall_isbase = false;
    mutable bool textedittexttospeech__texttospeechactions_event_isbase = false;
    mutable bool textedittexttospeech__texttospeechactions_eventfilter_isbase = false;
    mutable bool textedittexttospeech__texttospeechactions_timerevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechactions_childevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechactions_customevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechactions_connectnotify_isbase = false;
    mutable bool textedittexttospeech__texttospeechactions_disconnectnotify_isbase = false;
    mutable bool textedittexttospeech__texttospeechactions_sender_isbase = false;
    mutable bool textedittexttospeech__texttospeechactions_sendersignalindex_isbase = false;
    mutable bool textedittexttospeech__texttospeechactions_receivers_isbase = false;
    mutable bool textedittexttospeech__texttospeechactions_issignalconnected_isbase = false;

  public:
    VirtualTextEditTextToSpeechTextToSpeechActions() : TextEditTextToSpeech::TextToSpeechActions() {};
    VirtualTextEditTextToSpeechTextToSpeechActions(QObject* parent) : TextEditTextToSpeech::TextToSpeechActions(parent) {};

    // Callback setters
    inline void setTextEditTextToSpeech__TextToSpeechActions_MetaObject_Callback(TextEditTextToSpeech__TextToSpeechActions_MetaObject_Callback cb) { textedittexttospeech__texttospeechactions_metaobject_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_Metacast_Callback(TextEditTextToSpeech__TextToSpeechActions_Metacast_Callback cb) { textedittexttospeech__texttospeechactions_metacast_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_Metacall_Callback(TextEditTextToSpeech__TextToSpeechActions_Metacall_Callback cb) { textedittexttospeech__texttospeechactions_metacall_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_Event_Callback(TextEditTextToSpeech__TextToSpeechActions_Event_Callback cb) { textedittexttospeech__texttospeechactions_event_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_EventFilter_Callback(TextEditTextToSpeech__TextToSpeechActions_EventFilter_Callback cb) { textedittexttospeech__texttospeechactions_eventfilter_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_TimerEvent_Callback(TextEditTextToSpeech__TextToSpeechActions_TimerEvent_Callback cb) { textedittexttospeech__texttospeechactions_timerevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_ChildEvent_Callback(TextEditTextToSpeech__TextToSpeechActions_ChildEvent_Callback cb) { textedittexttospeech__texttospeechactions_childevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_CustomEvent_Callback(TextEditTextToSpeech__TextToSpeechActions_CustomEvent_Callback cb) { textedittexttospeech__texttospeechactions_customevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_ConnectNotify_Callback(TextEditTextToSpeech__TextToSpeechActions_ConnectNotify_Callback cb) { textedittexttospeech__texttospeechactions_connectnotify_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_DisconnectNotify_Callback(TextEditTextToSpeech__TextToSpeechActions_DisconnectNotify_Callback cb) { textedittexttospeech__texttospeechactions_disconnectnotify_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_Sender_Callback(TextEditTextToSpeech__TextToSpeechActions_Sender_Callback cb) { textedittexttospeech__texttospeechactions_sender_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_SenderSignalIndex_Callback(TextEditTextToSpeech__TextToSpeechActions_SenderSignalIndex_Callback cb) { textedittexttospeech__texttospeechactions_sendersignalindex_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_Receivers_Callback(TextEditTextToSpeech__TextToSpeechActions_Receivers_Callback cb) { textedittexttospeech__texttospeechactions_receivers_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_IsSignalConnected_Callback(TextEditTextToSpeech__TextToSpeechActions_IsSignalConnected_Callback cb) { textedittexttospeech__texttospeechactions_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextEditTextToSpeech__TextToSpeechActions_MetaObject_IsBase(bool value) const { textedittexttospeech__texttospeechactions_metaobject_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_Metacast_IsBase(bool value) const { textedittexttospeech__texttospeechactions_metacast_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_Metacall_IsBase(bool value) const { textedittexttospeech__texttospeechactions_metacall_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_Event_IsBase(bool value) const { textedittexttospeech__texttospeechactions_event_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_EventFilter_IsBase(bool value) const { textedittexttospeech__texttospeechactions_eventfilter_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_TimerEvent_IsBase(bool value) const { textedittexttospeech__texttospeechactions_timerevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_ChildEvent_IsBase(bool value) const { textedittexttospeech__texttospeechactions_childevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_CustomEvent_IsBase(bool value) const { textedittexttospeech__texttospeechactions_customevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_ConnectNotify_IsBase(bool value) const { textedittexttospeech__texttospeechactions_connectnotify_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_DisconnectNotify_IsBase(bool value) const { textedittexttospeech__texttospeechactions_disconnectnotify_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_Sender_IsBase(bool value) const { textedittexttospeech__texttospeechactions_sender_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_SenderSignalIndex_IsBase(bool value) const { textedittexttospeech__texttospeechactions_sendersignalindex_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_Receivers_IsBase(bool value) const { textedittexttospeech__texttospeechactions_receivers_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechActions_IsSignalConnected_IsBase(bool value) const { textedittexttospeech__texttospeechactions_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textedittexttospeech__texttospeechactions_metaobject_isbase) {
            textedittexttospeech__texttospeechactions_metaobject_isbase = false;
            return TextEditTextToSpeech__TextToSpeechActions::metaObject();
        }
        auto metaobject_cb = textedittexttospeech__texttospeechactions_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechActions::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textedittexttospeech__texttospeechactions_metacast_isbase) {
            textedittexttospeech__texttospeechactions_metacast_isbase = false;
            return TextEditTextToSpeech__TextToSpeechActions::qt_metacast(param1);
        }
        auto metacast_cb = textedittexttospeech__texttospeechactions_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechActions::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textedittexttospeech__texttospeechactions_metacall_isbase) {
            textedittexttospeech__texttospeechactions_metacall_isbase = false;
            return TextEditTextToSpeech__TextToSpeechActions::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textedittexttospeech__texttospeechactions_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechActions::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textedittexttospeech__texttospeechactions_event_isbase) {
            textedittexttospeech__texttospeechactions_event_isbase = false;
            return TextEditTextToSpeech__TextToSpeechActions::event(event);
        }
        auto event_cb = textedittexttospeech__texttospeechactions_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechActions::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textedittexttospeech__texttospeechactions_eventfilter_isbase) {
            textedittexttospeech__texttospeechactions_eventfilter_isbase = false;
            return TextEditTextToSpeech__TextToSpeechActions::eventFilter(watched, event);
        }
        auto eventfilter_cb = textedittexttospeech__texttospeechactions_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechActions::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textedittexttospeech__texttospeechactions_timerevent_isbase) {
            textedittexttospeech__texttospeechactions_timerevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechActions::timerEvent(event);
            return;
        }
        auto timerevent_cb = textedittexttospeech__texttospeechactions_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechActions::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textedittexttospeech__texttospeechactions_childevent_isbase) {
            textedittexttospeech__texttospeechactions_childevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechActions::childEvent(event);
            return;
        }
        auto childevent_cb = textedittexttospeech__texttospeechactions_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechActions::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechactions_customevent_isbase) {
            textedittexttospeech__texttospeechactions_customevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechActions::customEvent(event);
            return;
        }
        auto customevent_cb = textedittexttospeech__texttospeechactions_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechActions::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechactions_connectnotify_isbase) {
            textedittexttospeech__texttospeechactions_connectnotify_isbase = false;
            TextEditTextToSpeech__TextToSpeechActions::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textedittexttospeech__texttospeechactions_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechActions::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechactions_disconnectnotify_isbase) {
            textedittexttospeech__texttospeechactions_disconnectnotify_isbase = false;
            TextEditTextToSpeech__TextToSpeechActions::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textedittexttospeech__texttospeechactions_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechActions::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textedittexttospeech__texttospeechactions_sender_isbase) {
            textedittexttospeech__texttospeechactions_sender_isbase = false;
            return TextEditTextToSpeech__TextToSpeechActions::sender();
        }
        auto sender_cb = textedittexttospeech__texttospeechactions_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechActions::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textedittexttospeech__texttospeechactions_sendersignalindex_isbase) {
            textedittexttospeech__texttospeechactions_sendersignalindex_isbase = false;
            return TextEditTextToSpeech__TextToSpeechActions::senderSignalIndex();
        }
        auto sendersignalindex_cb = textedittexttospeech__texttospeechactions_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechActions::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textedittexttospeech__texttospeechactions_receivers_isbase) {
            textedittexttospeech__texttospeechactions_receivers_isbase = false;
            return TextEditTextToSpeech__TextToSpeechActions::receivers(signal);
        }
        auto receivers_cb = textedittexttospeech__texttospeechactions_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechActions::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textedittexttospeech__texttospeechactions_issignalconnected_isbase) {
            textedittexttospeech__texttospeechactions_issignalconnected_isbase = false;
            return TextEditTextToSpeech__TextToSpeechActions::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textedittexttospeech__texttospeechactions_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechActions::isSignalConnected(signal);
    }

    // Friend functions
    friend void TextEditTextToSpeech__TextToSpeechActions_TimerEvent(TextEditTextToSpeech::TextToSpeechActions* self, QTimerEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechActions_SuperTimerEvent(TextEditTextToSpeech::TextToSpeechActions* self, QTimerEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechActions_ChildEvent(TextEditTextToSpeech::TextToSpeechActions* self, QChildEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechActions_SuperChildEvent(TextEditTextToSpeech::TextToSpeechActions* self, QChildEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechActions_CustomEvent(TextEditTextToSpeech::TextToSpeechActions* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechActions_SuperCustomEvent(TextEditTextToSpeech::TextToSpeechActions* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechActions_ConnectNotify(TextEditTextToSpeech::TextToSpeechActions* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechActions_SuperConnectNotify(TextEditTextToSpeech::TextToSpeechActions* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechActions_DisconnectNotify(TextEditTextToSpeech::TextToSpeechActions* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechActions_SuperDisconnectNotify(TextEditTextToSpeech::TextToSpeechActions* self, const QMetaMethod* signal);
    friend QObject* TextEditTextToSpeech__TextToSpeechActions_Sender(const TextEditTextToSpeech::TextToSpeechActions* self);
    friend QObject* TextEditTextToSpeech__TextToSpeechActions_SuperSender(const TextEditTextToSpeech::TextToSpeechActions* self);
    friend int TextEditTextToSpeech__TextToSpeechActions_SenderSignalIndex(const TextEditTextToSpeech::TextToSpeechActions* self);
    friend int TextEditTextToSpeech__TextToSpeechActions_SuperSenderSignalIndex(const TextEditTextToSpeech::TextToSpeechActions* self);
    friend int TextEditTextToSpeech__TextToSpeechActions_Receivers(const TextEditTextToSpeech::TextToSpeechActions* self, const char* signal);
    friend int TextEditTextToSpeech__TextToSpeechActions_SuperReceivers(const TextEditTextToSpeech::TextToSpeechActions* self, const char* signal);
    friend bool TextEditTextToSpeech__TextToSpeechActions_IsSignalConnected(const TextEditTextToSpeech::TextToSpeechActions* self, const QMetaMethod* signal);
    friend bool TextEditTextToSpeech__TextToSpeechActions_SuperIsSignalConnected(const TextEditTextToSpeech::TextToSpeechActions* self, const QMetaMethod* signal);
};

#endif
