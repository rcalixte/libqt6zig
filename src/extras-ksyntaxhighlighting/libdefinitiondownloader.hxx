#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBVIRTUALDEFINITIONDOWNLOADER_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBVIRTUALDEFINITIONDOWNLOADER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSyntaxHighlighting::DefinitionDownloader so that we can call protected methods
class VirtualKSyntaxHighlightingDefinitionDownloader final : public KSyntaxHighlighting::DefinitionDownloader {

  public:
    // Virtual class boolean flag
    bool isVirtualKSyntaxHighlightingDefinitionDownloader = true;

    // Virtual class public types (including callbacks)
    using KSyntaxHighlighting__DefinitionDownloader_Metacall_Callback = int (*)(KSyntaxHighlighting__DefinitionDownloader*, int, int, void**);
    using KSyntaxHighlighting__DefinitionDownloader_Event_Callback = bool (*)(KSyntaxHighlighting__DefinitionDownloader*, QEvent*);
    using KSyntaxHighlighting__DefinitionDownloader_EventFilter_Callback = bool (*)(KSyntaxHighlighting__DefinitionDownloader*, QObject*, QEvent*);
    using KSyntaxHighlighting__DefinitionDownloader_TimerEvent_Callback = void (*)(KSyntaxHighlighting__DefinitionDownloader*, QTimerEvent*);
    using KSyntaxHighlighting__DefinitionDownloader_ChildEvent_Callback = void (*)(KSyntaxHighlighting__DefinitionDownloader*, QChildEvent*);
    using KSyntaxHighlighting__DefinitionDownloader_CustomEvent_Callback = void (*)(KSyntaxHighlighting__DefinitionDownloader*, QEvent*);
    using KSyntaxHighlighting__DefinitionDownloader_ConnectNotify_Callback = void (*)(KSyntaxHighlighting__DefinitionDownloader*, QMetaMethod*);
    using KSyntaxHighlighting__DefinitionDownloader_DisconnectNotify_Callback = void (*)(KSyntaxHighlighting__DefinitionDownloader*, QMetaMethod*);
    using KSyntaxHighlighting__DefinitionDownloader_Sender_Callback = QObject* (*)();
    using KSyntaxHighlighting__DefinitionDownloader_SenderSignalIndex_Callback = int (*)();
    using KSyntaxHighlighting__DefinitionDownloader_Receivers_Callback = int (*)(const KSyntaxHighlighting__DefinitionDownloader*, const char*);
    using KSyntaxHighlighting__DefinitionDownloader_IsSignalConnected_Callback = bool (*)(const KSyntaxHighlighting__DefinitionDownloader*, QMetaMethod*);

  protected:
    // Instance callback storage
    KSyntaxHighlighting__DefinitionDownloader_Metacall_Callback ksyntaxhighlighting__definitiondownloader_metacall_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_Event_Callback ksyntaxhighlighting__definitiondownloader_event_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_EventFilter_Callback ksyntaxhighlighting__definitiondownloader_eventfilter_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_TimerEvent_Callback ksyntaxhighlighting__definitiondownloader_timerevent_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_ChildEvent_Callback ksyntaxhighlighting__definitiondownloader_childevent_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_CustomEvent_Callback ksyntaxhighlighting__definitiondownloader_customevent_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_ConnectNotify_Callback ksyntaxhighlighting__definitiondownloader_connectnotify_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_DisconnectNotify_Callback ksyntaxhighlighting__definitiondownloader_disconnectnotify_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_Sender_Callback ksyntaxhighlighting__definitiondownloader_sender_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_SenderSignalIndex_Callback ksyntaxhighlighting__definitiondownloader_sendersignalindex_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_Receivers_Callback ksyntaxhighlighting__definitiondownloader_receivers_callback = nullptr;
    KSyntaxHighlighting__DefinitionDownloader_IsSignalConnected_Callback ksyntaxhighlighting__definitiondownloader_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ksyntaxhighlighting__definitiondownloader_metacall_isbase = false;
    mutable bool ksyntaxhighlighting__definitiondownloader_event_isbase = false;
    mutable bool ksyntaxhighlighting__definitiondownloader_eventfilter_isbase = false;
    mutable bool ksyntaxhighlighting__definitiondownloader_timerevent_isbase = false;
    mutable bool ksyntaxhighlighting__definitiondownloader_childevent_isbase = false;
    mutable bool ksyntaxhighlighting__definitiondownloader_customevent_isbase = false;
    mutable bool ksyntaxhighlighting__definitiondownloader_connectnotify_isbase = false;
    mutable bool ksyntaxhighlighting__definitiondownloader_disconnectnotify_isbase = false;
    mutable bool ksyntaxhighlighting__definitiondownloader_sender_isbase = false;
    mutable bool ksyntaxhighlighting__definitiondownloader_sendersignalindex_isbase = false;
    mutable bool ksyntaxhighlighting__definitiondownloader_receivers_isbase = false;
    mutable bool ksyntaxhighlighting__definitiondownloader_issignalconnected_isbase = false;

  public:
    VirtualKSyntaxHighlightingDefinitionDownloader(KSyntaxHighlighting::Repository* repo) : KSyntaxHighlighting::DefinitionDownloader(repo) {};
    VirtualKSyntaxHighlightingDefinitionDownloader(KSyntaxHighlighting::Repository* repo, QObject* parent) : KSyntaxHighlighting::DefinitionDownloader(repo, parent) {};

    ~VirtualKSyntaxHighlightingDefinitionDownloader() {
        ksyntaxhighlighting__definitiondownloader_metacall_callback = nullptr;
        ksyntaxhighlighting__definitiondownloader_event_callback = nullptr;
        ksyntaxhighlighting__definitiondownloader_eventfilter_callback = nullptr;
        ksyntaxhighlighting__definitiondownloader_timerevent_callback = nullptr;
        ksyntaxhighlighting__definitiondownloader_childevent_callback = nullptr;
        ksyntaxhighlighting__definitiondownloader_customevent_callback = nullptr;
        ksyntaxhighlighting__definitiondownloader_connectnotify_callback = nullptr;
        ksyntaxhighlighting__definitiondownloader_disconnectnotify_callback = nullptr;
        ksyntaxhighlighting__definitiondownloader_sender_callback = nullptr;
        ksyntaxhighlighting__definitiondownloader_sendersignalindex_callback = nullptr;
        ksyntaxhighlighting__definitiondownloader_receivers_callback = nullptr;
        ksyntaxhighlighting__definitiondownloader_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKSyntaxHighlighting__DefinitionDownloader_Metacall_Callback(KSyntaxHighlighting__DefinitionDownloader_Metacall_Callback cb) { ksyntaxhighlighting__definitiondownloader_metacall_callback = cb; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_Event_Callback(KSyntaxHighlighting__DefinitionDownloader_Event_Callback cb) { ksyntaxhighlighting__definitiondownloader_event_callback = cb; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_EventFilter_Callback(KSyntaxHighlighting__DefinitionDownloader_EventFilter_Callback cb) { ksyntaxhighlighting__definitiondownloader_eventfilter_callback = cb; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_TimerEvent_Callback(KSyntaxHighlighting__DefinitionDownloader_TimerEvent_Callback cb) { ksyntaxhighlighting__definitiondownloader_timerevent_callback = cb; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_ChildEvent_Callback(KSyntaxHighlighting__DefinitionDownloader_ChildEvent_Callback cb) { ksyntaxhighlighting__definitiondownloader_childevent_callback = cb; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_CustomEvent_Callback(KSyntaxHighlighting__DefinitionDownloader_CustomEvent_Callback cb) { ksyntaxhighlighting__definitiondownloader_customevent_callback = cb; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_ConnectNotify_Callback(KSyntaxHighlighting__DefinitionDownloader_ConnectNotify_Callback cb) { ksyntaxhighlighting__definitiondownloader_connectnotify_callback = cb; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_DisconnectNotify_Callback(KSyntaxHighlighting__DefinitionDownloader_DisconnectNotify_Callback cb) { ksyntaxhighlighting__definitiondownloader_disconnectnotify_callback = cb; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_Sender_Callback(KSyntaxHighlighting__DefinitionDownloader_Sender_Callback cb) { ksyntaxhighlighting__definitiondownloader_sender_callback = cb; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_SenderSignalIndex_Callback(KSyntaxHighlighting__DefinitionDownloader_SenderSignalIndex_Callback cb) { ksyntaxhighlighting__definitiondownloader_sendersignalindex_callback = cb; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_Receivers_Callback(KSyntaxHighlighting__DefinitionDownloader_Receivers_Callback cb) { ksyntaxhighlighting__definitiondownloader_receivers_callback = cb; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_IsSignalConnected_Callback(KSyntaxHighlighting__DefinitionDownloader_IsSignalConnected_Callback cb) { ksyntaxhighlighting__definitiondownloader_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKSyntaxHighlighting__DefinitionDownloader_Metacall_IsBase(bool value) const { ksyntaxhighlighting__definitiondownloader_metacall_isbase = value; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_Event_IsBase(bool value) const { ksyntaxhighlighting__definitiondownloader_event_isbase = value; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_EventFilter_IsBase(bool value) const { ksyntaxhighlighting__definitiondownloader_eventfilter_isbase = value; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_TimerEvent_IsBase(bool value) const { ksyntaxhighlighting__definitiondownloader_timerevent_isbase = value; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_ChildEvent_IsBase(bool value) const { ksyntaxhighlighting__definitiondownloader_childevent_isbase = value; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_CustomEvent_IsBase(bool value) const { ksyntaxhighlighting__definitiondownloader_customevent_isbase = value; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_ConnectNotify_IsBase(bool value) const { ksyntaxhighlighting__definitiondownloader_connectnotify_isbase = value; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_DisconnectNotify_IsBase(bool value) const { ksyntaxhighlighting__definitiondownloader_disconnectnotify_isbase = value; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_Sender_IsBase(bool value) const { ksyntaxhighlighting__definitiondownloader_sender_isbase = value; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_SenderSignalIndex_IsBase(bool value) const { ksyntaxhighlighting__definitiondownloader_sendersignalindex_isbase = value; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_Receivers_IsBase(bool value) const { ksyntaxhighlighting__definitiondownloader_receivers_isbase = value; }
    inline void setKSyntaxHighlighting__DefinitionDownloader_IsSignalConnected_IsBase(bool value) const { ksyntaxhighlighting__definitiondownloader_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksyntaxhighlighting__definitiondownloader_metacall_isbase) {
            ksyntaxhighlighting__definitiondownloader_metacall_isbase = false;
            return KSyntaxHighlighting__DefinitionDownloader::qt_metacall(param1, param2, param3);
        } else if (ksyntaxhighlighting__definitiondownloader_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ksyntaxhighlighting__definitiondownloader_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KSyntaxHighlighting__DefinitionDownloader::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksyntaxhighlighting__definitiondownloader_event_isbase) {
            ksyntaxhighlighting__definitiondownloader_event_isbase = false;
            return KSyntaxHighlighting__DefinitionDownloader::event(event);
        } else if (ksyntaxhighlighting__definitiondownloader_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ksyntaxhighlighting__definitiondownloader_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSyntaxHighlighting__DefinitionDownloader::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksyntaxhighlighting__definitiondownloader_eventfilter_isbase) {
            ksyntaxhighlighting__definitiondownloader_eventfilter_isbase = false;
            return KSyntaxHighlighting__DefinitionDownloader::eventFilter(watched, event);
        } else if (ksyntaxhighlighting__definitiondownloader_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ksyntaxhighlighting__definitiondownloader_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KSyntaxHighlighting__DefinitionDownloader::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksyntaxhighlighting__definitiondownloader_timerevent_isbase) {
            ksyntaxhighlighting__definitiondownloader_timerevent_isbase = false;
            KSyntaxHighlighting__DefinitionDownloader::timerEvent(event);
        } else if (ksyntaxhighlighting__definitiondownloader_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ksyntaxhighlighting__definitiondownloader_timerevent_callback(this, cbval1);
        } else {
            KSyntaxHighlighting__DefinitionDownloader::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksyntaxhighlighting__definitiondownloader_childevent_isbase) {
            ksyntaxhighlighting__definitiondownloader_childevent_isbase = false;
            KSyntaxHighlighting__DefinitionDownloader::childEvent(event);
        } else if (ksyntaxhighlighting__definitiondownloader_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ksyntaxhighlighting__definitiondownloader_childevent_callback(this, cbval1);
        } else {
            KSyntaxHighlighting__DefinitionDownloader::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksyntaxhighlighting__definitiondownloader_customevent_isbase) {
            ksyntaxhighlighting__definitiondownloader_customevent_isbase = false;
            KSyntaxHighlighting__DefinitionDownloader::customEvent(event);
        } else if (ksyntaxhighlighting__definitiondownloader_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ksyntaxhighlighting__definitiondownloader_customevent_callback(this, cbval1);
        } else {
            KSyntaxHighlighting__DefinitionDownloader::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__definitiondownloader_connectnotify_isbase) {
            ksyntaxhighlighting__definitiondownloader_connectnotify_isbase = false;
            KSyntaxHighlighting__DefinitionDownloader::connectNotify(signal);
        } else if (ksyntaxhighlighting__definitiondownloader_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksyntaxhighlighting__definitiondownloader_connectnotify_callback(this, cbval1);
        } else {
            KSyntaxHighlighting__DefinitionDownloader::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__definitiondownloader_disconnectnotify_isbase) {
            ksyntaxhighlighting__definitiondownloader_disconnectnotify_isbase = false;
            KSyntaxHighlighting__DefinitionDownloader::disconnectNotify(signal);
        } else if (ksyntaxhighlighting__definitiondownloader_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksyntaxhighlighting__definitiondownloader_disconnectnotify_callback(this, cbval1);
        } else {
            KSyntaxHighlighting__DefinitionDownloader::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksyntaxhighlighting__definitiondownloader_sender_isbase) {
            ksyntaxhighlighting__definitiondownloader_sender_isbase = false;
            return KSyntaxHighlighting__DefinitionDownloader::sender();
        } else if (ksyntaxhighlighting__definitiondownloader_sender_callback != nullptr) {
            QObject* callback_ret = ksyntaxhighlighting__definitiondownloader_sender_callback();
            return callback_ret;
        } else {
            return KSyntaxHighlighting__DefinitionDownloader::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksyntaxhighlighting__definitiondownloader_sendersignalindex_isbase) {
            ksyntaxhighlighting__definitiondownloader_sendersignalindex_isbase = false;
            return KSyntaxHighlighting__DefinitionDownloader::senderSignalIndex();
        } else if (ksyntaxhighlighting__definitiondownloader_sendersignalindex_callback != nullptr) {
            int callback_ret = ksyntaxhighlighting__definitiondownloader_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSyntaxHighlighting__DefinitionDownloader::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksyntaxhighlighting__definitiondownloader_receivers_isbase) {
            ksyntaxhighlighting__definitiondownloader_receivers_isbase = false;
            return KSyntaxHighlighting__DefinitionDownloader::receivers(signal);
        } else if (ksyntaxhighlighting__definitiondownloader_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ksyntaxhighlighting__definitiondownloader_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSyntaxHighlighting__DefinitionDownloader::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksyntaxhighlighting__definitiondownloader_issignalconnected_isbase) {
            ksyntaxhighlighting__definitiondownloader_issignalconnected_isbase = false;
            return KSyntaxHighlighting__DefinitionDownloader::isSignalConnected(signal);
        } else if (ksyntaxhighlighting__definitiondownloader_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ksyntaxhighlighting__definitiondownloader_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSyntaxHighlighting__DefinitionDownloader::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KSyntaxHighlighting__DefinitionDownloader_TimerEvent(KSyntaxHighlighting::DefinitionDownloader* self, QTimerEvent* event);
    friend void KSyntaxHighlighting__DefinitionDownloader_QBaseTimerEvent(KSyntaxHighlighting::DefinitionDownloader* self, QTimerEvent* event);
    friend void KSyntaxHighlighting__DefinitionDownloader_ChildEvent(KSyntaxHighlighting::DefinitionDownloader* self, QChildEvent* event);
    friend void KSyntaxHighlighting__DefinitionDownloader_QBaseChildEvent(KSyntaxHighlighting::DefinitionDownloader* self, QChildEvent* event);
    friend void KSyntaxHighlighting__DefinitionDownloader_CustomEvent(KSyntaxHighlighting::DefinitionDownloader* self, QEvent* event);
    friend void KSyntaxHighlighting__DefinitionDownloader_QBaseCustomEvent(KSyntaxHighlighting::DefinitionDownloader* self, QEvent* event);
    friend void KSyntaxHighlighting__DefinitionDownloader_ConnectNotify(KSyntaxHighlighting::DefinitionDownloader* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__DefinitionDownloader_QBaseConnectNotify(KSyntaxHighlighting::DefinitionDownloader* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__DefinitionDownloader_DisconnectNotify(KSyntaxHighlighting::DefinitionDownloader* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__DefinitionDownloader_QBaseDisconnectNotify(KSyntaxHighlighting::DefinitionDownloader* self, const QMetaMethod* signal);
    friend QObject* KSyntaxHighlighting__DefinitionDownloader_Sender(const KSyntaxHighlighting::DefinitionDownloader* self);
    friend QObject* KSyntaxHighlighting__DefinitionDownloader_QBaseSender(const KSyntaxHighlighting::DefinitionDownloader* self);
    friend int KSyntaxHighlighting__DefinitionDownloader_SenderSignalIndex(const KSyntaxHighlighting::DefinitionDownloader* self);
    friend int KSyntaxHighlighting__DefinitionDownloader_QBaseSenderSignalIndex(const KSyntaxHighlighting::DefinitionDownloader* self);
    friend int KSyntaxHighlighting__DefinitionDownloader_Receivers(const KSyntaxHighlighting::DefinitionDownloader* self, const char* signal);
    friend int KSyntaxHighlighting__DefinitionDownloader_QBaseReceivers(const KSyntaxHighlighting::DefinitionDownloader* self, const char* signal);
    friend bool KSyntaxHighlighting__DefinitionDownloader_IsSignalConnected(const KSyntaxHighlighting::DefinitionDownloader* self, const QMetaMethod* signal);
    friend bool KSyntaxHighlighting__DefinitionDownloader_QBaseIsSignalConnected(const KSyntaxHighlighting::DefinitionDownloader* self, const QMetaMethod* signal);
};

#endif
