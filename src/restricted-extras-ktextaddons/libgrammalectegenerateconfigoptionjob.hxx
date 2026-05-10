#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMALECTEGENERATECONFIGOPTIONJOB_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMALECTEGENERATECONFIGOPTIONJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammalecteGenerateConfigOptionJob so that we can call protected methods
class VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob final : public TextGrammarCheck::GrammalecteGenerateConfigOptionJob {

  public:
    // Virtual class boolean flag
    bool isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob = true;

    // Virtual class public types (including callbacks)
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_MetaObject_Callback = QMetaObject* (*)();
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacast_Callback = void* (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, const char*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacall_Callback = int (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, int, int, void**);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Event_Callback = bool (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QEvent*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QObject*, QEvent*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QTimerEvent*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QChildEvent*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QEvent*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Sender_Callback = QObject* (*)();
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SenderSignalIndex_Callback = int (*)();
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Receivers_Callback = int (*)(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, const char*);
    using TextGrammarCheck__GrammalecteGenerateConfigOptionJob_IsSignalConnected_Callback = bool (*)(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, QMetaMethod*);

  protected:
    // Instance callback storage
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_MetaObject_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_metaobject_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacast_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_metacast_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacall_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_metacall_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Event_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_event_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_EventFilter_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_TimerEvent_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_timerevent_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ChildEvent_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_childevent_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_CustomEvent_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_customevent_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ConnectNotify_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_DisconnectNotify_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_disconnectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Sender_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_sender_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SenderSignalIndex_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_sendersignalindex_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Receivers_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_receivers_callback = nullptr;
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob_IsSignalConnected_Callback textgrammarcheck__grammalectegenerateconfigoptionjob_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_metaobject_isbase = false;
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_metacast_isbase = false;
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_metacall_isbase = false;
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_event_isbase = false;
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_eventfilter_isbase = false;
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_timerevent_isbase = false;
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_childevent_isbase = false;
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_customevent_isbase = false;
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_connectnotify_isbase = false;
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_disconnectnotify_isbase = false;
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_sender_isbase = false;
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_sendersignalindex_isbase = false;
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_receivers_isbase = false;
    mutable bool textgrammarcheck__grammalectegenerateconfigoptionjob_issignalconnected_isbase = false;

  public:
    VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob() : TextGrammarCheck::GrammalecteGenerateConfigOptionJob() {};
    VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob(QObject* parent) : TextGrammarCheck::GrammalecteGenerateConfigOptionJob(parent) {};

    // Callback setters
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_MetaObject_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_MetaObject_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_metaobject_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacast_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacast_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_metacast_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacall_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacall_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_metacall_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Event_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Event_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_event_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_EventFilter_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_EventFilter_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_eventfilter_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_TimerEvent_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_TimerEvent_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_timerevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_ChildEvent_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ChildEvent_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_childevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_CustomEvent_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_CustomEvent_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_customevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_ConnectNotify_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ConnectNotify_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_connectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_DisconnectNotify_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_DisconnectNotify_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_disconnectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Sender_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Sender_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_sender_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_SenderSignalIndex_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SenderSignalIndex_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_sendersignalindex_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Receivers_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Receivers_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_receivers_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_IsSignalConnected_Callback(TextGrammarCheck__GrammalecteGenerateConfigOptionJob_IsSignalConnected_Callback cb) { textgrammarcheck__grammalectegenerateconfigoptionjob_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_MetaObject_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_metaobject_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacast_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_metacast_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacall_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_metacall_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Event_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_event_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_EventFilter_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_eventfilter_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_TimerEvent_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_timerevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_ChildEvent_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_childevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_CustomEvent_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_customevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_ConnectNotify_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_connectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_DisconnectNotify_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_disconnectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Sender_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_sender_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_SenderSignalIndex_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_sendersignalindex_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Receivers_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_receivers_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_IsSignalConnected_IsBase(bool value) const { textgrammarcheck__grammalectegenerateconfigoptionjob_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_metaobject_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_metaobject_isbase = false;
            return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::metaObject();
        }
        auto metaobject_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_metacast_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_metacast_isbase = false;
            return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::qt_metacast(param1);
        }
        auto metacast_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_metacall_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_metacall_isbase = false;
            return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_event_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_event_isbase = false;
            return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::event(event);
        }
        auto event_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_eventfilter_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_eventfilter_isbase = false;
            return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::eventFilter(watched, event);
        }
        auto eventfilter_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_timerevent_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_timerevent_isbase = false;
            TextGrammarCheck__GrammalecteGenerateConfigOptionJob::timerEvent(event);
            return;
        }
        auto timerevent_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteGenerateConfigOptionJob::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_childevent_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_childevent_isbase = false;
            TextGrammarCheck__GrammalecteGenerateConfigOptionJob::childEvent(event);
            return;
        }
        auto childevent_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteGenerateConfigOptionJob::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_customevent_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_customevent_isbase = false;
            TextGrammarCheck__GrammalecteGenerateConfigOptionJob::customEvent(event);
            return;
        }
        auto customevent_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteGenerateConfigOptionJob::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_connectnotify_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_connectnotify_isbase = false;
            TextGrammarCheck__GrammalecteGenerateConfigOptionJob::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteGenerateConfigOptionJob::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_disconnectnotify_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_disconnectnotify_isbase = false;
            TextGrammarCheck__GrammalecteGenerateConfigOptionJob::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteGenerateConfigOptionJob::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_sender_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_sender_isbase = false;
            return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::sender();
        }
        auto sender_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_sendersignalindex_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_sendersignalindex_isbase = false;
            return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::senderSignalIndex();
        }
        auto sendersignalindex_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_receivers_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_receivers_isbase = false;
            return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::receivers(signal);
        }
        auto receivers_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textgrammarcheck__grammalectegenerateconfigoptionjob_issignalconnected_isbase) {
            textgrammarcheck__grammalectegenerateconfigoptionjob_issignalconnected_isbase = false;
            return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textgrammarcheck__grammalectegenerateconfigoptionjob_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteGenerateConfigOptionJob::isSignalConnected(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_TimerEvent(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperTimerEvent(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ChildEvent(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperChildEvent(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_CustomEvent(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperCustomEvent(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ConnectNotify(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperConnectNotify(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_DisconnectNotify(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperDisconnectNotify(TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal);
    friend QObject* TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Sender(const TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self);
    friend QObject* TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperSender(const TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self);
    friend int TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SenderSignalIndex(const TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self);
    friend int TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperSenderSignalIndex(const TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self);
    friend int TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Receivers(const TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, const char* signal);
    friend int TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperReceivers(const TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, const char* signal);
    friend bool TextGrammarCheck__GrammalecteGenerateConfigOptionJob_IsSignalConnected(const TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal);
    friend bool TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperIsSignalConnected(const TextGrammarCheck::GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal);
};

#endif
