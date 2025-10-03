#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALMESSAGE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALMESSAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::Message so that we can call protected methods
class VirtualKTextEditorMessage final : public KTextEditor::Message {

  public:
    // Virtual class boolean flag
    bool isVirtualKTextEditorMessage = true;

    // Virtual class public types (including callbacks)
    using KTextEditor__Message_Metacall_Callback = int (*)(KTextEditor__Message*, int, int, void**);
    using KTextEditor__Message_Event_Callback = bool (*)(KTextEditor__Message*, QEvent*);
    using KTextEditor__Message_EventFilter_Callback = bool (*)(KTextEditor__Message*, QObject*, QEvent*);
    using KTextEditor__Message_TimerEvent_Callback = void (*)(KTextEditor__Message*, QTimerEvent*);
    using KTextEditor__Message_ChildEvent_Callback = void (*)(KTextEditor__Message*, QChildEvent*);
    using KTextEditor__Message_CustomEvent_Callback = void (*)(KTextEditor__Message*, QEvent*);
    using KTextEditor__Message_ConnectNotify_Callback = void (*)(KTextEditor__Message*, QMetaMethod*);
    using KTextEditor__Message_DisconnectNotify_Callback = void (*)(KTextEditor__Message*, QMetaMethod*);
    using KTextEditor__Message_Sender_Callback = QObject* (*)();
    using KTextEditor__Message_SenderSignalIndex_Callback = int (*)();
    using KTextEditor__Message_Receivers_Callback = int (*)(const KTextEditor__Message*, const char*);
    using KTextEditor__Message_IsSignalConnected_Callback = bool (*)(const KTextEditor__Message*, QMetaMethod*);

  protected:
    // Instance callback storage
    KTextEditor__Message_Metacall_Callback ktexteditor__message_metacall_callback = nullptr;
    KTextEditor__Message_Event_Callback ktexteditor__message_event_callback = nullptr;
    KTextEditor__Message_EventFilter_Callback ktexteditor__message_eventfilter_callback = nullptr;
    KTextEditor__Message_TimerEvent_Callback ktexteditor__message_timerevent_callback = nullptr;
    KTextEditor__Message_ChildEvent_Callback ktexteditor__message_childevent_callback = nullptr;
    KTextEditor__Message_CustomEvent_Callback ktexteditor__message_customevent_callback = nullptr;
    KTextEditor__Message_ConnectNotify_Callback ktexteditor__message_connectnotify_callback = nullptr;
    KTextEditor__Message_DisconnectNotify_Callback ktexteditor__message_disconnectnotify_callback = nullptr;
    KTextEditor__Message_Sender_Callback ktexteditor__message_sender_callback = nullptr;
    KTextEditor__Message_SenderSignalIndex_Callback ktexteditor__message_sendersignalindex_callback = nullptr;
    KTextEditor__Message_Receivers_Callback ktexteditor__message_receivers_callback = nullptr;
    KTextEditor__Message_IsSignalConnected_Callback ktexteditor__message_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktexteditor__message_metacall_isbase = false;
    mutable bool ktexteditor__message_event_isbase = false;
    mutable bool ktexteditor__message_eventfilter_isbase = false;
    mutable bool ktexteditor__message_timerevent_isbase = false;
    mutable bool ktexteditor__message_childevent_isbase = false;
    mutable bool ktexteditor__message_customevent_isbase = false;
    mutable bool ktexteditor__message_connectnotify_isbase = false;
    mutable bool ktexteditor__message_disconnectnotify_isbase = false;
    mutable bool ktexteditor__message_sender_isbase = false;
    mutable bool ktexteditor__message_sendersignalindex_isbase = false;
    mutable bool ktexteditor__message_receivers_isbase = false;
    mutable bool ktexteditor__message_issignalconnected_isbase = false;

  public:
    VirtualKTextEditorMessage(const QString& richtext) : KTextEditor::Message(richtext) {};
    VirtualKTextEditorMessage(const QString& richtext, KTextEditor::Message::MessageType typeVal) : KTextEditor::Message(richtext, typeVal) {};

    ~VirtualKTextEditorMessage() {
        ktexteditor__message_metacall_callback = nullptr;
        ktexteditor__message_event_callback = nullptr;
        ktexteditor__message_eventfilter_callback = nullptr;
        ktexteditor__message_timerevent_callback = nullptr;
        ktexteditor__message_childevent_callback = nullptr;
        ktexteditor__message_customevent_callback = nullptr;
        ktexteditor__message_connectnotify_callback = nullptr;
        ktexteditor__message_disconnectnotify_callback = nullptr;
        ktexteditor__message_sender_callback = nullptr;
        ktexteditor__message_sendersignalindex_callback = nullptr;
        ktexteditor__message_receivers_callback = nullptr;
        ktexteditor__message_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKTextEditor__Message_Metacall_Callback(KTextEditor__Message_Metacall_Callback cb) { ktexteditor__message_metacall_callback = cb; }
    inline void setKTextEditor__Message_Event_Callback(KTextEditor__Message_Event_Callback cb) { ktexteditor__message_event_callback = cb; }
    inline void setKTextEditor__Message_EventFilter_Callback(KTextEditor__Message_EventFilter_Callback cb) { ktexteditor__message_eventfilter_callback = cb; }
    inline void setKTextEditor__Message_TimerEvent_Callback(KTextEditor__Message_TimerEvent_Callback cb) { ktexteditor__message_timerevent_callback = cb; }
    inline void setKTextEditor__Message_ChildEvent_Callback(KTextEditor__Message_ChildEvent_Callback cb) { ktexteditor__message_childevent_callback = cb; }
    inline void setKTextEditor__Message_CustomEvent_Callback(KTextEditor__Message_CustomEvent_Callback cb) { ktexteditor__message_customevent_callback = cb; }
    inline void setKTextEditor__Message_ConnectNotify_Callback(KTextEditor__Message_ConnectNotify_Callback cb) { ktexteditor__message_connectnotify_callback = cb; }
    inline void setKTextEditor__Message_DisconnectNotify_Callback(KTextEditor__Message_DisconnectNotify_Callback cb) { ktexteditor__message_disconnectnotify_callback = cb; }
    inline void setKTextEditor__Message_Sender_Callback(KTextEditor__Message_Sender_Callback cb) { ktexteditor__message_sender_callback = cb; }
    inline void setKTextEditor__Message_SenderSignalIndex_Callback(KTextEditor__Message_SenderSignalIndex_Callback cb) { ktexteditor__message_sendersignalindex_callback = cb; }
    inline void setKTextEditor__Message_Receivers_Callback(KTextEditor__Message_Receivers_Callback cb) { ktexteditor__message_receivers_callback = cb; }
    inline void setKTextEditor__Message_IsSignalConnected_Callback(KTextEditor__Message_IsSignalConnected_Callback cb) { ktexteditor__message_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKTextEditor__Message_Metacall_IsBase(bool value) const { ktexteditor__message_metacall_isbase = value; }
    inline void setKTextEditor__Message_Event_IsBase(bool value) const { ktexteditor__message_event_isbase = value; }
    inline void setKTextEditor__Message_EventFilter_IsBase(bool value) const { ktexteditor__message_eventfilter_isbase = value; }
    inline void setKTextEditor__Message_TimerEvent_IsBase(bool value) const { ktexteditor__message_timerevent_isbase = value; }
    inline void setKTextEditor__Message_ChildEvent_IsBase(bool value) const { ktexteditor__message_childevent_isbase = value; }
    inline void setKTextEditor__Message_CustomEvent_IsBase(bool value) const { ktexteditor__message_customevent_isbase = value; }
    inline void setKTextEditor__Message_ConnectNotify_IsBase(bool value) const { ktexteditor__message_connectnotify_isbase = value; }
    inline void setKTextEditor__Message_DisconnectNotify_IsBase(bool value) const { ktexteditor__message_disconnectnotify_isbase = value; }
    inline void setKTextEditor__Message_Sender_IsBase(bool value) const { ktexteditor__message_sender_isbase = value; }
    inline void setKTextEditor__Message_SenderSignalIndex_IsBase(bool value) const { ktexteditor__message_sendersignalindex_isbase = value; }
    inline void setKTextEditor__Message_Receivers_IsBase(bool value) const { ktexteditor__message_receivers_isbase = value; }
    inline void setKTextEditor__Message_IsSignalConnected_IsBase(bool value) const { ktexteditor__message_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__message_metacall_isbase) {
            ktexteditor__message_metacall_isbase = false;
            return KTextEditor__Message::qt_metacall(param1, param2, param3);
        } else if (ktexteditor__message_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktexteditor__message_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__Message::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__message_event_isbase) {
            ktexteditor__message_event_isbase = false;
            return KTextEditor__Message::event(event);
        } else if (ktexteditor__message_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktexteditor__message_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__Message::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__message_eventfilter_isbase) {
            ktexteditor__message_eventfilter_isbase = false;
            return KTextEditor__Message::eventFilter(watched, event);
        } else if (ktexteditor__message_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktexteditor__message_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTextEditor__Message::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__message_timerevent_isbase) {
            ktexteditor__message_timerevent_isbase = false;
            KTextEditor__Message::timerEvent(event);
        } else if (ktexteditor__message_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktexteditor__message_timerevent_callback(this, cbval1);
        } else {
            KTextEditor__Message::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__message_childevent_isbase) {
            ktexteditor__message_childevent_isbase = false;
            KTextEditor__Message::childEvent(event);
        } else if (ktexteditor__message_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktexteditor__message_childevent_callback(this, cbval1);
        } else {
            KTextEditor__Message::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__message_customevent_isbase) {
            ktexteditor__message_customevent_isbase = false;
            KTextEditor__Message::customEvent(event);
        } else if (ktexteditor__message_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktexteditor__message_customevent_callback(this, cbval1);
        } else {
            KTextEditor__Message::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__message_connectnotify_isbase) {
            ktexteditor__message_connectnotify_isbase = false;
            KTextEditor__Message::connectNotify(signal);
        } else if (ktexteditor__message_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__message_connectnotify_callback(this, cbval1);
        } else {
            KTextEditor__Message::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__message_disconnectnotify_isbase) {
            ktexteditor__message_disconnectnotify_isbase = false;
            KTextEditor__Message::disconnectNotify(signal);
        } else if (ktexteditor__message_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__message_disconnectnotify_callback(this, cbval1);
        } else {
            KTextEditor__Message::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktexteditor__message_sender_isbase) {
            ktexteditor__message_sender_isbase = false;
            return KTextEditor__Message::sender();
        } else if (ktexteditor__message_sender_callback != nullptr) {
            QObject* callback_ret = ktexteditor__message_sender_callback();
            return callback_ret;
        } else {
            return KTextEditor__Message::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktexteditor__message_sendersignalindex_isbase) {
            ktexteditor__message_sendersignalindex_isbase = false;
            return KTextEditor__Message::senderSignalIndex();
        } else if (ktexteditor__message_sendersignalindex_callback != nullptr) {
            int callback_ret = ktexteditor__message_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__Message::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktexteditor__message_receivers_isbase) {
            ktexteditor__message_receivers_isbase = false;
            return KTextEditor__Message::receivers(signal);
        } else if (ktexteditor__message_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktexteditor__message_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__Message::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktexteditor__message_issignalconnected_isbase) {
            ktexteditor__message_issignalconnected_isbase = false;
            return KTextEditor__Message::isSignalConnected(signal);
        } else if (ktexteditor__message_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktexteditor__message_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__Message::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KTextEditor__Message_TimerEvent(KTextEditor::Message* self, QTimerEvent* event);
    friend void KTextEditor__Message_QBaseTimerEvent(KTextEditor::Message* self, QTimerEvent* event);
    friend void KTextEditor__Message_ChildEvent(KTextEditor::Message* self, QChildEvent* event);
    friend void KTextEditor__Message_QBaseChildEvent(KTextEditor::Message* self, QChildEvent* event);
    friend void KTextEditor__Message_CustomEvent(KTextEditor::Message* self, QEvent* event);
    friend void KTextEditor__Message_QBaseCustomEvent(KTextEditor::Message* self, QEvent* event);
    friend void KTextEditor__Message_ConnectNotify(KTextEditor::Message* self, const QMetaMethod* signal);
    friend void KTextEditor__Message_QBaseConnectNotify(KTextEditor::Message* self, const QMetaMethod* signal);
    friend void KTextEditor__Message_DisconnectNotify(KTextEditor::Message* self, const QMetaMethod* signal);
    friend void KTextEditor__Message_QBaseDisconnectNotify(KTextEditor::Message* self, const QMetaMethod* signal);
    friend QObject* KTextEditor__Message_Sender(const KTextEditor::Message* self);
    friend QObject* KTextEditor__Message_QBaseSender(const KTextEditor::Message* self);
    friend int KTextEditor__Message_SenderSignalIndex(const KTextEditor::Message* self);
    friend int KTextEditor__Message_QBaseSenderSignalIndex(const KTextEditor::Message* self);
    friend int KTextEditor__Message_Receivers(const KTextEditor::Message* self, const char* signal);
    friend int KTextEditor__Message_QBaseReceivers(const KTextEditor::Message* self, const char* signal);
    friend bool KTextEditor__Message_IsSignalConnected(const KTextEditor::Message* self, const QMetaMethod* signal);
    friend bool KTextEditor__Message_QBaseIsSignalConnected(const KTextEditor::Message* self, const QMetaMethod* signal);
};

#endif
