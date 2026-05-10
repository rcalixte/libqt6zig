#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTEXTEDITORCOMPLETER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTEXTEDITORCOMPLETER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::TextEditorCompleter so that we can call protected methods
class VirtualTextCustomEditorTextEditorCompleter final : public TextCustomEditor::TextEditorCompleter {

  public:
    // Virtual class boolean flag
    bool isVirtualTextCustomEditorTextEditorCompleter = true;

    // Virtual class public types (including callbacks)
    using TextCustomEditor__TextEditorCompleter_MetaObject_Callback = QMetaObject* (*)();
    using TextCustomEditor__TextEditorCompleter_Metacast_Callback = void* (*)(TextCustomEditor__TextEditorCompleter*, const char*);
    using TextCustomEditor__TextEditorCompleter_Metacall_Callback = int (*)(TextCustomEditor__TextEditorCompleter*, int, int, void**);
    using TextCustomEditor__TextEditorCompleter_Event_Callback = bool (*)(TextCustomEditor__TextEditorCompleter*, QEvent*);
    using TextCustomEditor__TextEditorCompleter_EventFilter_Callback = bool (*)(TextCustomEditor__TextEditorCompleter*, QObject*, QEvent*);
    using TextCustomEditor__TextEditorCompleter_TimerEvent_Callback = void (*)(TextCustomEditor__TextEditorCompleter*, QTimerEvent*);
    using TextCustomEditor__TextEditorCompleter_ChildEvent_Callback = void (*)(TextCustomEditor__TextEditorCompleter*, QChildEvent*);
    using TextCustomEditor__TextEditorCompleter_CustomEvent_Callback = void (*)(TextCustomEditor__TextEditorCompleter*, QEvent*);
    using TextCustomEditor__TextEditorCompleter_ConnectNotify_Callback = void (*)(TextCustomEditor__TextEditorCompleter*, QMetaMethod*);
    using TextCustomEditor__TextEditorCompleter_DisconnectNotify_Callback = void (*)(TextCustomEditor__TextEditorCompleter*, QMetaMethod*);
    using TextCustomEditor__TextEditorCompleter_Sender_Callback = QObject* (*)();
    using TextCustomEditor__TextEditorCompleter_SenderSignalIndex_Callback = int (*)();
    using TextCustomEditor__TextEditorCompleter_Receivers_Callback = int (*)(const TextCustomEditor__TextEditorCompleter*, const char*);
    using TextCustomEditor__TextEditorCompleter_IsSignalConnected_Callback = bool (*)(const TextCustomEditor__TextEditorCompleter*, QMetaMethod*);

  protected:
    // Instance callback storage
    TextCustomEditor__TextEditorCompleter_MetaObject_Callback textcustomeditor__texteditorcompleter_metaobject_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_Metacast_Callback textcustomeditor__texteditorcompleter_metacast_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_Metacall_Callback textcustomeditor__texteditorcompleter_metacall_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_Event_Callback textcustomeditor__texteditorcompleter_event_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_EventFilter_Callback textcustomeditor__texteditorcompleter_eventfilter_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_TimerEvent_Callback textcustomeditor__texteditorcompleter_timerevent_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_ChildEvent_Callback textcustomeditor__texteditorcompleter_childevent_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_CustomEvent_Callback textcustomeditor__texteditorcompleter_customevent_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_ConnectNotify_Callback textcustomeditor__texteditorcompleter_connectnotify_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_DisconnectNotify_Callback textcustomeditor__texteditorcompleter_disconnectnotify_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_Sender_Callback textcustomeditor__texteditorcompleter_sender_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_SenderSignalIndex_Callback textcustomeditor__texteditorcompleter_sendersignalindex_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_Receivers_Callback textcustomeditor__texteditorcompleter_receivers_callback = nullptr;
    TextCustomEditor__TextEditorCompleter_IsSignalConnected_Callback textcustomeditor__texteditorcompleter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool textcustomeditor__texteditorcompleter_metaobject_isbase = false;
    mutable bool textcustomeditor__texteditorcompleter_metacast_isbase = false;
    mutable bool textcustomeditor__texteditorcompleter_metacall_isbase = false;
    mutable bool textcustomeditor__texteditorcompleter_event_isbase = false;
    mutable bool textcustomeditor__texteditorcompleter_eventfilter_isbase = false;
    mutable bool textcustomeditor__texteditorcompleter_timerevent_isbase = false;
    mutable bool textcustomeditor__texteditorcompleter_childevent_isbase = false;
    mutable bool textcustomeditor__texteditorcompleter_customevent_isbase = false;
    mutable bool textcustomeditor__texteditorcompleter_connectnotify_isbase = false;
    mutable bool textcustomeditor__texteditorcompleter_disconnectnotify_isbase = false;
    mutable bool textcustomeditor__texteditorcompleter_sender_isbase = false;
    mutable bool textcustomeditor__texteditorcompleter_sendersignalindex_isbase = false;
    mutable bool textcustomeditor__texteditorcompleter_receivers_isbase = false;
    mutable bool textcustomeditor__texteditorcompleter_issignalconnected_isbase = false;

  public:
    VirtualTextCustomEditorTextEditorCompleter(QTextEdit* editor, QObject* parent) : TextCustomEditor::TextEditorCompleter(editor, parent) {};
    VirtualTextCustomEditorTextEditorCompleter(QPlainTextEdit* editor, QObject* parent) : TextCustomEditor::TextEditorCompleter(editor, parent) {};

    // Callback setters
    inline void setTextCustomEditor__TextEditorCompleter_MetaObject_Callback(TextCustomEditor__TextEditorCompleter_MetaObject_Callback cb) { textcustomeditor__texteditorcompleter_metaobject_callback = cb; }
    inline void setTextCustomEditor__TextEditorCompleter_Metacast_Callback(TextCustomEditor__TextEditorCompleter_Metacast_Callback cb) { textcustomeditor__texteditorcompleter_metacast_callback = cb; }
    inline void setTextCustomEditor__TextEditorCompleter_Metacall_Callback(TextCustomEditor__TextEditorCompleter_Metacall_Callback cb) { textcustomeditor__texteditorcompleter_metacall_callback = cb; }
    inline void setTextCustomEditor__TextEditorCompleter_Event_Callback(TextCustomEditor__TextEditorCompleter_Event_Callback cb) { textcustomeditor__texteditorcompleter_event_callback = cb; }
    inline void setTextCustomEditor__TextEditorCompleter_EventFilter_Callback(TextCustomEditor__TextEditorCompleter_EventFilter_Callback cb) { textcustomeditor__texteditorcompleter_eventfilter_callback = cb; }
    inline void setTextCustomEditor__TextEditorCompleter_TimerEvent_Callback(TextCustomEditor__TextEditorCompleter_TimerEvent_Callback cb) { textcustomeditor__texteditorcompleter_timerevent_callback = cb; }
    inline void setTextCustomEditor__TextEditorCompleter_ChildEvent_Callback(TextCustomEditor__TextEditorCompleter_ChildEvent_Callback cb) { textcustomeditor__texteditorcompleter_childevent_callback = cb; }
    inline void setTextCustomEditor__TextEditorCompleter_CustomEvent_Callback(TextCustomEditor__TextEditorCompleter_CustomEvent_Callback cb) { textcustomeditor__texteditorcompleter_customevent_callback = cb; }
    inline void setTextCustomEditor__TextEditorCompleter_ConnectNotify_Callback(TextCustomEditor__TextEditorCompleter_ConnectNotify_Callback cb) { textcustomeditor__texteditorcompleter_connectnotify_callback = cb; }
    inline void setTextCustomEditor__TextEditorCompleter_DisconnectNotify_Callback(TextCustomEditor__TextEditorCompleter_DisconnectNotify_Callback cb) { textcustomeditor__texteditorcompleter_disconnectnotify_callback = cb; }
    inline void setTextCustomEditor__TextEditorCompleter_Sender_Callback(TextCustomEditor__TextEditorCompleter_Sender_Callback cb) { textcustomeditor__texteditorcompleter_sender_callback = cb; }
    inline void setTextCustomEditor__TextEditorCompleter_SenderSignalIndex_Callback(TextCustomEditor__TextEditorCompleter_SenderSignalIndex_Callback cb) { textcustomeditor__texteditorcompleter_sendersignalindex_callback = cb; }
    inline void setTextCustomEditor__TextEditorCompleter_Receivers_Callback(TextCustomEditor__TextEditorCompleter_Receivers_Callback cb) { textcustomeditor__texteditorcompleter_receivers_callback = cb; }
    inline void setTextCustomEditor__TextEditorCompleter_IsSignalConnected_Callback(TextCustomEditor__TextEditorCompleter_IsSignalConnected_Callback cb) { textcustomeditor__texteditorcompleter_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextCustomEditor__TextEditorCompleter_MetaObject_IsBase(bool value) const { textcustomeditor__texteditorcompleter_metaobject_isbase = value; }
    inline void setTextCustomEditor__TextEditorCompleter_Metacast_IsBase(bool value) const { textcustomeditor__texteditorcompleter_metacast_isbase = value; }
    inline void setTextCustomEditor__TextEditorCompleter_Metacall_IsBase(bool value) const { textcustomeditor__texteditorcompleter_metacall_isbase = value; }
    inline void setTextCustomEditor__TextEditorCompleter_Event_IsBase(bool value) const { textcustomeditor__texteditorcompleter_event_isbase = value; }
    inline void setTextCustomEditor__TextEditorCompleter_EventFilter_IsBase(bool value) const { textcustomeditor__texteditorcompleter_eventfilter_isbase = value; }
    inline void setTextCustomEditor__TextEditorCompleter_TimerEvent_IsBase(bool value) const { textcustomeditor__texteditorcompleter_timerevent_isbase = value; }
    inline void setTextCustomEditor__TextEditorCompleter_ChildEvent_IsBase(bool value) const { textcustomeditor__texteditorcompleter_childevent_isbase = value; }
    inline void setTextCustomEditor__TextEditorCompleter_CustomEvent_IsBase(bool value) const { textcustomeditor__texteditorcompleter_customevent_isbase = value; }
    inline void setTextCustomEditor__TextEditorCompleter_ConnectNotify_IsBase(bool value) const { textcustomeditor__texteditorcompleter_connectnotify_isbase = value; }
    inline void setTextCustomEditor__TextEditorCompleter_DisconnectNotify_IsBase(bool value) const { textcustomeditor__texteditorcompleter_disconnectnotify_isbase = value; }
    inline void setTextCustomEditor__TextEditorCompleter_Sender_IsBase(bool value) const { textcustomeditor__texteditorcompleter_sender_isbase = value; }
    inline void setTextCustomEditor__TextEditorCompleter_SenderSignalIndex_IsBase(bool value) const { textcustomeditor__texteditorcompleter_sendersignalindex_isbase = value; }
    inline void setTextCustomEditor__TextEditorCompleter_Receivers_IsBase(bool value) const { textcustomeditor__texteditorcompleter_receivers_isbase = value; }
    inline void setTextCustomEditor__TextEditorCompleter_IsSignalConnected_IsBase(bool value) const { textcustomeditor__texteditorcompleter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__texteditorcompleter_metaobject_isbase) {
            textcustomeditor__texteditorcompleter_metaobject_isbase = false;
            return TextCustomEditor__TextEditorCompleter::metaObject();
        }
        auto metaobject_cb = textcustomeditor__texteditorcompleter_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextEditorCompleter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__texteditorcompleter_metacast_isbase) {
            textcustomeditor__texteditorcompleter_metacast_isbase = false;
            return TextCustomEditor__TextEditorCompleter::qt_metacast(param1);
        }
        auto metacast_cb = textcustomeditor__texteditorcompleter_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditorCompleter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__texteditorcompleter_metacall_isbase) {
            textcustomeditor__texteditorcompleter_metacall_isbase = false;
            return TextCustomEditor__TextEditorCompleter::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textcustomeditor__texteditorcompleter_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditorCompleter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textcustomeditor__texteditorcompleter_event_isbase) {
            textcustomeditor__texteditorcompleter_event_isbase = false;
            return TextCustomEditor__TextEditorCompleter::event(event);
        }
        auto event_cb = textcustomeditor__texteditorcompleter_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditorCompleter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__texteditorcompleter_eventfilter_isbase) {
            textcustomeditor__texteditorcompleter_eventfilter_isbase = false;
            return TextCustomEditor__TextEditorCompleter::eventFilter(watched, event);
        }
        auto eventfilter_cb = textcustomeditor__texteditorcompleter_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__TextEditorCompleter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__texteditorcompleter_timerevent_isbase) {
            textcustomeditor__texteditorcompleter_timerevent_isbase = false;
            TextCustomEditor__TextEditorCompleter::timerEvent(event);
            return;
        }
        auto timerevent_cb = textcustomeditor__texteditorcompleter_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditorCompleter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__texteditorcompleter_childevent_isbase) {
            textcustomeditor__texteditorcompleter_childevent_isbase = false;
            TextCustomEditor__TextEditorCompleter::childEvent(event);
            return;
        }
        auto childevent_cb = textcustomeditor__texteditorcompleter_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditorCompleter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__texteditorcompleter_customevent_isbase) {
            textcustomeditor__texteditorcompleter_customevent_isbase = false;
            TextCustomEditor__TextEditorCompleter::customEvent(event);
            return;
        }
        auto customevent_cb = textcustomeditor__texteditorcompleter_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditorCompleter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__texteditorcompleter_connectnotify_isbase) {
            textcustomeditor__texteditorcompleter_connectnotify_isbase = false;
            TextCustomEditor__TextEditorCompleter::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textcustomeditor__texteditorcompleter_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditorCompleter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__texteditorcompleter_disconnectnotify_isbase) {
            textcustomeditor__texteditorcompleter_disconnectnotify_isbase = false;
            TextCustomEditor__TextEditorCompleter::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textcustomeditor__texteditorcompleter_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditorCompleter::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textcustomeditor__texteditorcompleter_sender_isbase) {
            textcustomeditor__texteditorcompleter_sender_isbase = false;
            return TextCustomEditor__TextEditorCompleter::sender();
        }
        auto sender_cb = textcustomeditor__texteditorcompleter_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextEditorCompleter::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textcustomeditor__texteditorcompleter_sendersignalindex_isbase) {
            textcustomeditor__texteditorcompleter_sendersignalindex_isbase = false;
            return TextCustomEditor__TextEditorCompleter::senderSignalIndex();
        }
        auto sendersignalindex_cb = textcustomeditor__texteditorcompleter_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditorCompleter::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textcustomeditor__texteditorcompleter_receivers_isbase) {
            textcustomeditor__texteditorcompleter_receivers_isbase = false;
            return TextCustomEditor__TextEditorCompleter::receivers(signal);
        }
        auto receivers_cb = textcustomeditor__texteditorcompleter_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditorCompleter::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textcustomeditor__texteditorcompleter_issignalconnected_isbase) {
            textcustomeditor__texteditorcompleter_issignalconnected_isbase = false;
            return TextCustomEditor__TextEditorCompleter::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textcustomeditor__texteditorcompleter_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditorCompleter::isSignalConnected(signal);
    }

    // Friend functions
    friend void TextCustomEditor__TextEditorCompleter_TimerEvent(TextCustomEditor::TextEditorCompleter* self, QTimerEvent* event);
    friend void TextCustomEditor__TextEditorCompleter_SuperTimerEvent(TextCustomEditor::TextEditorCompleter* self, QTimerEvent* event);
    friend void TextCustomEditor__TextEditorCompleter_ChildEvent(TextCustomEditor::TextEditorCompleter* self, QChildEvent* event);
    friend void TextCustomEditor__TextEditorCompleter_SuperChildEvent(TextCustomEditor::TextEditorCompleter* self, QChildEvent* event);
    friend void TextCustomEditor__TextEditorCompleter_CustomEvent(TextCustomEditor::TextEditorCompleter* self, QEvent* event);
    friend void TextCustomEditor__TextEditorCompleter_SuperCustomEvent(TextCustomEditor::TextEditorCompleter* self, QEvent* event);
    friend void TextCustomEditor__TextEditorCompleter_ConnectNotify(TextCustomEditor::TextEditorCompleter* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextEditorCompleter_SuperConnectNotify(TextCustomEditor::TextEditorCompleter* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextEditorCompleter_DisconnectNotify(TextCustomEditor::TextEditorCompleter* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextEditorCompleter_SuperDisconnectNotify(TextCustomEditor::TextEditorCompleter* self, const QMetaMethod* signal);
    friend QObject* TextCustomEditor__TextEditorCompleter_Sender(const TextCustomEditor::TextEditorCompleter* self);
    friend QObject* TextCustomEditor__TextEditorCompleter_SuperSender(const TextCustomEditor::TextEditorCompleter* self);
    friend int TextCustomEditor__TextEditorCompleter_SenderSignalIndex(const TextCustomEditor::TextEditorCompleter* self);
    friend int TextCustomEditor__TextEditorCompleter_SuperSenderSignalIndex(const TextCustomEditor::TextEditorCompleter* self);
    friend int TextCustomEditor__TextEditorCompleter_Receivers(const TextCustomEditor::TextEditorCompleter* self, const char* signal);
    friend int TextCustomEditor__TextEditorCompleter_SuperReceivers(const TextCustomEditor::TextEditorCompleter* self, const char* signal);
    friend bool TextCustomEditor__TextEditorCompleter_IsSignalConnected(const TextCustomEditor::TextEditorCompleter* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__TextEditorCompleter_SuperIsSignalConnected(const TextCustomEditor::TextEditorCompleter* self, const QMetaMethod* signal);
};

#endif
