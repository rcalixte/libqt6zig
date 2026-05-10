#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMALECTERESULTJOB_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMALECTERESULTJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammalecteResultJob so that we can call protected methods
class VirtualTextGrammarCheckGrammalecteResultJob final : public TextGrammarCheck::GrammalecteResultJob {

  public:
    // Virtual class boolean flag
    bool isVirtualTextGrammarCheckGrammalecteResultJob = true;

    // Virtual class public types (including callbacks)
    using TextGrammarCheck__GrammalecteResultJob_MetaObject_Callback = QMetaObject* (*)();
    using TextGrammarCheck__GrammalecteResultJob_Metacast_Callback = void* (*)(TextGrammarCheck__GrammalecteResultJob*, const char*);
    using TextGrammarCheck__GrammalecteResultJob_Metacall_Callback = int (*)(TextGrammarCheck__GrammalecteResultJob*, int, int, void**);
    using TextGrammarCheck__GrammalecteResultJob_Event_Callback = bool (*)(TextGrammarCheck__GrammalecteResultJob*, QEvent*);
    using TextGrammarCheck__GrammalecteResultJob_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammalecteResultJob*, QObject*, QEvent*);
    using TextGrammarCheck__GrammalecteResultJob_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultJob*, QTimerEvent*);
    using TextGrammarCheck__GrammalecteResultJob_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultJob*, QChildEvent*);
    using TextGrammarCheck__GrammalecteResultJob_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultJob*, QEvent*);
    using TextGrammarCheck__GrammalecteResultJob_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteResultJob*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteResultJob_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteResultJob*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteResultJob_Sender_Callback = QObject* (*)();
    using TextGrammarCheck__GrammalecteResultJob_SenderSignalIndex_Callback = int (*)();
    using TextGrammarCheck__GrammalecteResultJob_Receivers_Callback = int (*)(const TextGrammarCheck__GrammalecteResultJob*, const char*);
    using TextGrammarCheck__GrammalecteResultJob_IsSignalConnected_Callback = bool (*)(const TextGrammarCheck__GrammalecteResultJob*, QMetaMethod*);

  protected:
    // Instance callback storage
    TextGrammarCheck__GrammalecteResultJob_MetaObject_Callback textgrammarcheck__grammalecteresultjob_metaobject_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_Metacast_Callback textgrammarcheck__grammalecteresultjob_metacast_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_Metacall_Callback textgrammarcheck__grammalecteresultjob_metacall_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_Event_Callback textgrammarcheck__grammalecteresultjob_event_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_EventFilter_Callback textgrammarcheck__grammalecteresultjob_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_TimerEvent_Callback textgrammarcheck__grammalecteresultjob_timerevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_ChildEvent_Callback textgrammarcheck__grammalecteresultjob_childevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_CustomEvent_Callback textgrammarcheck__grammalecteresultjob_customevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_ConnectNotify_Callback textgrammarcheck__grammalecteresultjob_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_DisconnectNotify_Callback textgrammarcheck__grammalecteresultjob_disconnectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_Sender_Callback textgrammarcheck__grammalecteresultjob_sender_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_SenderSignalIndex_Callback textgrammarcheck__grammalecteresultjob_sendersignalindex_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_Receivers_Callback textgrammarcheck__grammalecteresultjob_receivers_callback = nullptr;
    TextGrammarCheck__GrammalecteResultJob_IsSignalConnected_Callback textgrammarcheck__grammalecteresultjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool textgrammarcheck__grammalecteresultjob_metaobject_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultjob_metacast_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultjob_metacall_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultjob_event_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultjob_eventfilter_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultjob_timerevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultjob_childevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultjob_customevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultjob_connectnotify_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultjob_disconnectnotify_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultjob_sender_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultjob_sendersignalindex_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultjob_receivers_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultjob_issignalconnected_isbase = false;

  public:
    VirtualTextGrammarCheckGrammalecteResultJob() : TextGrammarCheck::GrammalecteResultJob() {};
    VirtualTextGrammarCheckGrammalecteResultJob(QObject* parent) : TextGrammarCheck::GrammalecteResultJob(parent) {};

    // Callback setters
    inline void setTextGrammarCheck__GrammalecteResultJob_MetaObject_Callback(TextGrammarCheck__GrammalecteResultJob_MetaObject_Callback cb) { textgrammarcheck__grammalecteresultjob_metaobject_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultJob_Metacast_Callback(TextGrammarCheck__GrammalecteResultJob_Metacast_Callback cb) { textgrammarcheck__grammalecteresultjob_metacast_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultJob_Metacall_Callback(TextGrammarCheck__GrammalecteResultJob_Metacall_Callback cb) { textgrammarcheck__grammalecteresultjob_metacall_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultJob_Event_Callback(TextGrammarCheck__GrammalecteResultJob_Event_Callback cb) { textgrammarcheck__grammalecteresultjob_event_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultJob_EventFilter_Callback(TextGrammarCheck__GrammalecteResultJob_EventFilter_Callback cb) { textgrammarcheck__grammalecteresultjob_eventfilter_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultJob_TimerEvent_Callback(TextGrammarCheck__GrammalecteResultJob_TimerEvent_Callback cb) { textgrammarcheck__grammalecteresultjob_timerevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultJob_ChildEvent_Callback(TextGrammarCheck__GrammalecteResultJob_ChildEvent_Callback cb) { textgrammarcheck__grammalecteresultjob_childevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultJob_CustomEvent_Callback(TextGrammarCheck__GrammalecteResultJob_CustomEvent_Callback cb) { textgrammarcheck__grammalecteresultjob_customevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultJob_ConnectNotify_Callback(TextGrammarCheck__GrammalecteResultJob_ConnectNotify_Callback cb) { textgrammarcheck__grammalecteresultjob_connectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultJob_DisconnectNotify_Callback(TextGrammarCheck__GrammalecteResultJob_DisconnectNotify_Callback cb) { textgrammarcheck__grammalecteresultjob_disconnectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultJob_Sender_Callback(TextGrammarCheck__GrammalecteResultJob_Sender_Callback cb) { textgrammarcheck__grammalecteresultjob_sender_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultJob_SenderSignalIndex_Callback(TextGrammarCheck__GrammalecteResultJob_SenderSignalIndex_Callback cb) { textgrammarcheck__grammalecteresultjob_sendersignalindex_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultJob_Receivers_Callback(TextGrammarCheck__GrammalecteResultJob_Receivers_Callback cb) { textgrammarcheck__grammalecteresultjob_receivers_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultJob_IsSignalConnected_Callback(TextGrammarCheck__GrammalecteResultJob_IsSignalConnected_Callback cb) { textgrammarcheck__grammalecteresultjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextGrammarCheck__GrammalecteResultJob_MetaObject_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_metaobject_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultJob_Metacast_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_metacast_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultJob_Metacall_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_metacall_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultJob_Event_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_event_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultJob_EventFilter_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_eventfilter_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultJob_TimerEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_timerevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultJob_ChildEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_childevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultJob_CustomEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_customevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultJob_ConnectNotify_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_connectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultJob_DisconnectNotify_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_disconnectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultJob_Sender_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_sender_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultJob_SenderSignalIndex_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_sendersignalindex_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultJob_Receivers_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_receivers_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultJob_IsSignalConnected_IsBase(bool value) const { textgrammarcheck__grammalecteresultjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammalecteresultjob_metaobject_isbase) {
            textgrammarcheck__grammalecteresultjob_metaobject_isbase = false;
            return TextGrammarCheck__GrammalecteResultJob::metaObject();
        }
        auto metaobject_cb = textgrammarcheck__grammalecteresultjob_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammalecteresultjob_metacast_isbase) {
            textgrammarcheck__grammalecteresultjob_metacast_isbase = false;
            return TextGrammarCheck__GrammalecteResultJob::qt_metacast(param1);
        }
        auto metacast_cb = textgrammarcheck__grammalecteresultjob_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammalecteresultjob_metacall_isbase) {
            textgrammarcheck__grammalecteresultjob_metacall_isbase = false;
            return TextGrammarCheck__GrammalecteResultJob::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textgrammarcheck__grammalecteresultjob_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__grammalecteresultjob_event_isbase) {
            textgrammarcheck__grammalecteresultjob_event_isbase = false;
            return TextGrammarCheck__GrammalecteResultJob::event(event);
        }
        auto event_cb = textgrammarcheck__grammalecteresultjob_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__grammalecteresultjob_eventfilter_isbase) {
            textgrammarcheck__grammalecteresultjob_eventfilter_isbase = false;
            return TextGrammarCheck__GrammalecteResultJob::eventFilter(watched, event);
        }
        auto eventfilter_cb = textgrammarcheck__grammalecteresultjob_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__grammalecteresultjob_timerevent_isbase) {
            textgrammarcheck__grammalecteresultjob_timerevent_isbase = false;
            TextGrammarCheck__GrammalecteResultJob::timerEvent(event);
            return;
        }
        auto timerevent_cb = textgrammarcheck__grammalecteresultjob_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammalecteresultjob_childevent_isbase) {
            textgrammarcheck__grammalecteresultjob_childevent_isbase = false;
            TextGrammarCheck__GrammalecteResultJob::childEvent(event);
            return;
        }
        auto childevent_cb = textgrammarcheck__grammalecteresultjob_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteresultjob_customevent_isbase) {
            textgrammarcheck__grammalecteresultjob_customevent_isbase = false;
            TextGrammarCheck__GrammalecteResultJob::customEvent(event);
            return;
        }
        auto customevent_cb = textgrammarcheck__grammalecteresultjob_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteresultjob_connectnotify_isbase) {
            textgrammarcheck__grammalecteresultjob_connectnotify_isbase = false;
            TextGrammarCheck__GrammalecteResultJob::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textgrammarcheck__grammalecteresultjob_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteresultjob_disconnectnotify_isbase) {
            textgrammarcheck__grammalecteresultjob_disconnectnotify_isbase = false;
            TextGrammarCheck__GrammalecteResultJob::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textgrammarcheck__grammalecteresultjob_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultJob::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textgrammarcheck__grammalecteresultjob_sender_isbase) {
            textgrammarcheck__grammalecteresultjob_sender_isbase = false;
            return TextGrammarCheck__GrammalecteResultJob::sender();
        }
        auto sender_cb = textgrammarcheck__grammalecteresultjob_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultJob::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textgrammarcheck__grammalecteresultjob_sendersignalindex_isbase) {
            textgrammarcheck__grammalecteresultjob_sendersignalindex_isbase = false;
            return TextGrammarCheck__GrammalecteResultJob::senderSignalIndex();
        }
        auto sendersignalindex_cb = textgrammarcheck__grammalecteresultjob_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultJob::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textgrammarcheck__grammalecteresultjob_receivers_isbase) {
            textgrammarcheck__grammalecteresultjob_receivers_isbase = false;
            return TextGrammarCheck__GrammalecteResultJob::receivers(signal);
        }
        auto receivers_cb = textgrammarcheck__grammalecteresultjob_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultJob::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textgrammarcheck__grammalecteresultjob_issignalconnected_isbase) {
            textgrammarcheck__grammalecteresultjob_issignalconnected_isbase = false;
            return TextGrammarCheck__GrammalecteResultJob::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textgrammarcheck__grammalecteresultjob_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultJob::isSignalConnected(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammalecteResultJob_TimerEvent(TextGrammarCheck::GrammalecteResultJob* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteResultJob_SuperTimerEvent(TextGrammarCheck::GrammalecteResultJob* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteResultJob_ChildEvent(TextGrammarCheck::GrammalecteResultJob* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteResultJob_SuperChildEvent(TextGrammarCheck::GrammalecteResultJob* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteResultJob_CustomEvent(TextGrammarCheck::GrammalecteResultJob* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteResultJob_SuperCustomEvent(TextGrammarCheck::GrammalecteResultJob* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteResultJob_ConnectNotify(TextGrammarCheck::GrammalecteResultJob* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteResultJob_SuperConnectNotify(TextGrammarCheck::GrammalecteResultJob* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteResultJob_DisconnectNotify(TextGrammarCheck::GrammalecteResultJob* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteResultJob_SuperDisconnectNotify(TextGrammarCheck::GrammalecteResultJob* self, const QMetaMethod* signal);
    friend QObject* TextGrammarCheck__GrammalecteResultJob_Sender(const TextGrammarCheck::GrammalecteResultJob* self);
    friend QObject* TextGrammarCheck__GrammalecteResultJob_SuperSender(const TextGrammarCheck::GrammalecteResultJob* self);
    friend int TextGrammarCheck__GrammalecteResultJob_SenderSignalIndex(const TextGrammarCheck::GrammalecteResultJob* self);
    friend int TextGrammarCheck__GrammalecteResultJob_SuperSenderSignalIndex(const TextGrammarCheck::GrammalecteResultJob* self);
    friend int TextGrammarCheck__GrammalecteResultJob_Receivers(const TextGrammarCheck::GrammalecteResultJob* self, const char* signal);
    friend int TextGrammarCheck__GrammalecteResultJob_SuperReceivers(const TextGrammarCheck::GrammalecteResultJob* self, const char* signal);
    friend bool TextGrammarCheck__GrammalecteResultJob_IsSignalConnected(const TextGrammarCheck::GrammalecteResultJob* self, const QMetaMethod* signal);
    friend bool TextGrammarCheck__GrammalecteResultJob_SuperIsSignalConnected(const TextGrammarCheck::GrammalecteResultJob* self, const QMetaMethod* signal);
};

#endif
