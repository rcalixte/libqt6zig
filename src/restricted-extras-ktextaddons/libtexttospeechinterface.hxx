#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTEXTTOSPEECHINTERFACE_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTEXTTOSPEECHINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEditTextToSpeech::TextToSpeechInterface so that we can call protected methods
class VirtualTextEditTextToSpeechTextToSpeechInterface final : public TextEditTextToSpeech::TextToSpeechInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualTextEditTextToSpeechTextToSpeechInterface = true;

    // Virtual class public types (including callbacks)
    using TextEditTextToSpeech__TextToSpeechInterface_MetaObject_Callback = QMetaObject* (*)();
    using TextEditTextToSpeech__TextToSpeechInterface_Metacast_Callback = void* (*)(TextEditTextToSpeech__TextToSpeechInterface*, const char*);
    using TextEditTextToSpeech__TextToSpeechInterface_Metacall_Callback = int (*)(TextEditTextToSpeech__TextToSpeechInterface*, int, int, void**);
    using TextEditTextToSpeech__TextToSpeechInterface_Event_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechInterface*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechInterface_EventFilter_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechInterface*, QObject*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechInterface_TimerEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechInterface*, QTimerEvent*);
    using TextEditTextToSpeech__TextToSpeechInterface_ChildEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechInterface*, QChildEvent*);
    using TextEditTextToSpeech__TextToSpeechInterface_CustomEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechInterface*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechInterface_ConnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechInterface*, QMetaMethod*);
    using TextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechInterface*, QMetaMethod*);
    using TextEditTextToSpeech__TextToSpeechInterface_Sender_Callback = QObject* (*)();
    using TextEditTextToSpeech__TextToSpeechInterface_SenderSignalIndex_Callback = int (*)();
    using TextEditTextToSpeech__TextToSpeechInterface_Receivers_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechInterface*, const char*);
    using TextEditTextToSpeech__TextToSpeechInterface_IsSignalConnected_Callback = bool (*)(const TextEditTextToSpeech__TextToSpeechInterface*, QMetaMethod*);

  protected:
    // Instance callback storage
    TextEditTextToSpeech__TextToSpeechInterface_MetaObject_Callback textedittexttospeech__texttospeechinterface_metaobject_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_Metacast_Callback textedittexttospeech__texttospeechinterface_metacast_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_Metacall_Callback textedittexttospeech__texttospeechinterface_metacall_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_Event_Callback textedittexttospeech__texttospeechinterface_event_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_EventFilter_Callback textedittexttospeech__texttospeechinterface_eventfilter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_TimerEvent_Callback textedittexttospeech__texttospeechinterface_timerevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_ChildEvent_Callback textedittexttospeech__texttospeechinterface_childevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_CustomEvent_Callback textedittexttospeech__texttospeechinterface_customevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_ConnectNotify_Callback textedittexttospeech__texttospeechinterface_connectnotify_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify_Callback textedittexttospeech__texttospeechinterface_disconnectnotify_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_Sender_Callback textedittexttospeech__texttospeechinterface_sender_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_SenderSignalIndex_Callback textedittexttospeech__texttospeechinterface_sendersignalindex_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_Receivers_Callback textedittexttospeech__texttospeechinterface_receivers_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechInterface_IsSignalConnected_Callback textedittexttospeech__texttospeechinterface_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool textedittexttospeech__texttospeechinterface_metaobject_isbase = false;
    mutable bool textedittexttospeech__texttospeechinterface_metacast_isbase = false;
    mutable bool textedittexttospeech__texttospeechinterface_metacall_isbase = false;
    mutable bool textedittexttospeech__texttospeechinterface_event_isbase = false;
    mutable bool textedittexttospeech__texttospeechinterface_eventfilter_isbase = false;
    mutable bool textedittexttospeech__texttospeechinterface_timerevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechinterface_childevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechinterface_customevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechinterface_connectnotify_isbase = false;
    mutable bool textedittexttospeech__texttospeechinterface_disconnectnotify_isbase = false;
    mutable bool textedittexttospeech__texttospeechinterface_sender_isbase = false;
    mutable bool textedittexttospeech__texttospeechinterface_sendersignalindex_isbase = false;
    mutable bool textedittexttospeech__texttospeechinterface_receivers_isbase = false;
    mutable bool textedittexttospeech__texttospeechinterface_issignalconnected_isbase = false;

  public:
    VirtualTextEditTextToSpeechTextToSpeechInterface(TextEditTextToSpeech::TextToSpeechWidget* textToSpeechWidget) : TextEditTextToSpeech::TextToSpeechInterface(textToSpeechWidget) {};
    VirtualTextEditTextToSpeechTextToSpeechInterface(TextEditTextToSpeech::TextToSpeechWidget* textToSpeechWidget, QObject* parent) : TextEditTextToSpeech::TextToSpeechInterface(textToSpeechWidget, parent) {};

    // Callback setters
    inline void setTextEditTextToSpeech__TextToSpeechInterface_MetaObject_Callback(TextEditTextToSpeech__TextToSpeechInterface_MetaObject_Callback cb) { textedittexttospeech__texttospeechinterface_metaobject_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_Metacast_Callback(TextEditTextToSpeech__TextToSpeechInterface_Metacast_Callback cb) { textedittexttospeech__texttospeechinterface_metacast_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_Metacall_Callback(TextEditTextToSpeech__TextToSpeechInterface_Metacall_Callback cb) { textedittexttospeech__texttospeechinterface_metacall_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_Event_Callback(TextEditTextToSpeech__TextToSpeechInterface_Event_Callback cb) { textedittexttospeech__texttospeechinterface_event_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_EventFilter_Callback(TextEditTextToSpeech__TextToSpeechInterface_EventFilter_Callback cb) { textedittexttospeech__texttospeechinterface_eventfilter_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_TimerEvent_Callback(TextEditTextToSpeech__TextToSpeechInterface_TimerEvent_Callback cb) { textedittexttospeech__texttospeechinterface_timerevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_ChildEvent_Callback(TextEditTextToSpeech__TextToSpeechInterface_ChildEvent_Callback cb) { textedittexttospeech__texttospeechinterface_childevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_CustomEvent_Callback(TextEditTextToSpeech__TextToSpeechInterface_CustomEvent_Callback cb) { textedittexttospeech__texttospeechinterface_customevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_ConnectNotify_Callback(TextEditTextToSpeech__TextToSpeechInterface_ConnectNotify_Callback cb) { textedittexttospeech__texttospeechinterface_connectnotify_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify_Callback(TextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify_Callback cb) { textedittexttospeech__texttospeechinterface_disconnectnotify_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_Sender_Callback(TextEditTextToSpeech__TextToSpeechInterface_Sender_Callback cb) { textedittexttospeech__texttospeechinterface_sender_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_SenderSignalIndex_Callback(TextEditTextToSpeech__TextToSpeechInterface_SenderSignalIndex_Callback cb) { textedittexttospeech__texttospeechinterface_sendersignalindex_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_Receivers_Callback(TextEditTextToSpeech__TextToSpeechInterface_Receivers_Callback cb) { textedittexttospeech__texttospeechinterface_receivers_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_IsSignalConnected_Callback(TextEditTextToSpeech__TextToSpeechInterface_IsSignalConnected_Callback cb) { textedittexttospeech__texttospeechinterface_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextEditTextToSpeech__TextToSpeechInterface_MetaObject_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_metaobject_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_Metacast_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_metacast_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_Metacall_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_metacall_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_Event_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_event_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_EventFilter_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_eventfilter_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_TimerEvent_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_timerevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_ChildEvent_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_childevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_CustomEvent_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_customevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_ConnectNotify_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_connectnotify_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_disconnectnotify_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_Sender_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_sender_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_SenderSignalIndex_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_sendersignalindex_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_Receivers_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_receivers_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechInterface_IsSignalConnected_IsBase(bool value) const { textedittexttospeech__texttospeechinterface_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textedittexttospeech__texttospeechinterface_metaobject_isbase) {
            textedittexttospeech__texttospeechinterface_metaobject_isbase = false;
            return TextEditTextToSpeech__TextToSpeechInterface::metaObject();
        }
        auto metaobject_cb = textedittexttospeech__texttospeechinterface_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textedittexttospeech__texttospeechinterface_metacast_isbase) {
            textedittexttospeech__texttospeechinterface_metacast_isbase = false;
            return TextEditTextToSpeech__TextToSpeechInterface::qt_metacast(param1);
        }
        auto metacast_cb = textedittexttospeech__texttospeechinterface_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textedittexttospeech__texttospeechinterface_metacall_isbase) {
            textedittexttospeech__texttospeechinterface_metacall_isbase = false;
            return TextEditTextToSpeech__TextToSpeechInterface::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textedittexttospeech__texttospeechinterface_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textedittexttospeech__texttospeechinterface_event_isbase) {
            textedittexttospeech__texttospeechinterface_event_isbase = false;
            return TextEditTextToSpeech__TextToSpeechInterface::event(event);
        }
        auto event_cb = textedittexttospeech__texttospeechinterface_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textedittexttospeech__texttospeechinterface_eventfilter_isbase) {
            textedittexttospeech__texttospeechinterface_eventfilter_isbase = false;
            return TextEditTextToSpeech__TextToSpeechInterface::eventFilter(watched, event);
        }
        auto eventfilter_cb = textedittexttospeech__texttospeechinterface_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textedittexttospeech__texttospeechinterface_timerevent_isbase) {
            textedittexttospeech__texttospeechinterface_timerevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechInterface::timerEvent(event);
            return;
        }
        auto timerevent_cb = textedittexttospeech__texttospeechinterface_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textedittexttospeech__texttospeechinterface_childevent_isbase) {
            textedittexttospeech__texttospeechinterface_childevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechInterface::childEvent(event);
            return;
        }
        auto childevent_cb = textedittexttospeech__texttospeechinterface_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechinterface_customevent_isbase) {
            textedittexttospeech__texttospeechinterface_customevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechInterface::customEvent(event);
            return;
        }
        auto customevent_cb = textedittexttospeech__texttospeechinterface_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechinterface_connectnotify_isbase) {
            textedittexttospeech__texttospeechinterface_connectnotify_isbase = false;
            TextEditTextToSpeech__TextToSpeechInterface::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textedittexttospeech__texttospeechinterface_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechinterface_disconnectnotify_isbase) {
            textedittexttospeech__texttospeechinterface_disconnectnotify_isbase = false;
            TextEditTextToSpeech__TextToSpeechInterface::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textedittexttospeech__texttospeechinterface_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechInterface::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textedittexttospeech__texttospeechinterface_sender_isbase) {
            textedittexttospeech__texttospeechinterface_sender_isbase = false;
            return TextEditTextToSpeech__TextToSpeechInterface::sender();
        }
        auto sender_cb = textedittexttospeech__texttospeechinterface_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechInterface::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textedittexttospeech__texttospeechinterface_sendersignalindex_isbase) {
            textedittexttospeech__texttospeechinterface_sendersignalindex_isbase = false;
            return TextEditTextToSpeech__TextToSpeechInterface::senderSignalIndex();
        }
        auto sendersignalindex_cb = textedittexttospeech__texttospeechinterface_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechInterface::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textedittexttospeech__texttospeechinterface_receivers_isbase) {
            textedittexttospeech__texttospeechinterface_receivers_isbase = false;
            return TextEditTextToSpeech__TextToSpeechInterface::receivers(signal);
        }
        auto receivers_cb = textedittexttospeech__texttospeechinterface_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechInterface::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textedittexttospeech__texttospeechinterface_issignalconnected_isbase) {
            textedittexttospeech__texttospeechinterface_issignalconnected_isbase = false;
            return TextEditTextToSpeech__TextToSpeechInterface::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textedittexttospeech__texttospeechinterface_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechInterface::isSignalConnected(signal);
    }

    // Friend functions
    friend void TextEditTextToSpeech__TextToSpeechInterface_TimerEvent(TextEditTextToSpeech::TextToSpeechInterface* self, QTimerEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechInterface_SuperTimerEvent(TextEditTextToSpeech::TextToSpeechInterface* self, QTimerEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechInterface_ChildEvent(TextEditTextToSpeech::TextToSpeechInterface* self, QChildEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechInterface_SuperChildEvent(TextEditTextToSpeech::TextToSpeechInterface* self, QChildEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechInterface_CustomEvent(TextEditTextToSpeech::TextToSpeechInterface* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechInterface_SuperCustomEvent(TextEditTextToSpeech::TextToSpeechInterface* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechInterface_ConnectNotify(TextEditTextToSpeech::TextToSpeechInterface* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechInterface_SuperConnectNotify(TextEditTextToSpeech::TextToSpeechInterface* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify(TextEditTextToSpeech::TextToSpeechInterface* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechInterface_SuperDisconnectNotify(TextEditTextToSpeech::TextToSpeechInterface* self, const QMetaMethod* signal);
    friend QObject* TextEditTextToSpeech__TextToSpeechInterface_Sender(const TextEditTextToSpeech::TextToSpeechInterface* self);
    friend QObject* TextEditTextToSpeech__TextToSpeechInterface_SuperSender(const TextEditTextToSpeech::TextToSpeechInterface* self);
    friend int TextEditTextToSpeech__TextToSpeechInterface_SenderSignalIndex(const TextEditTextToSpeech::TextToSpeechInterface* self);
    friend int TextEditTextToSpeech__TextToSpeechInterface_SuperSenderSignalIndex(const TextEditTextToSpeech::TextToSpeechInterface* self);
    friend int TextEditTextToSpeech__TextToSpeechInterface_Receivers(const TextEditTextToSpeech::TextToSpeechInterface* self, const char* signal);
    friend int TextEditTextToSpeech__TextToSpeechInterface_SuperReceivers(const TextEditTextToSpeech::TextToSpeechInterface* self, const char* signal);
    friend bool TextEditTextToSpeech__TextToSpeechInterface_IsSignalConnected(const TextEditTextToSpeech::TextToSpeechInterface* self, const QMetaMethod* signal);
    friend bool TextEditTextToSpeech__TextToSpeechInterface_SuperIsSignalConnected(const TextEditTextToSpeech::TextToSpeechInterface* self, const QMetaMethod* signal);
};

#endif
