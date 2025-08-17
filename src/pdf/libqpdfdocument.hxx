#pragma once
#ifndef SRC_PDFC_LIBVIRTUALQPDFDOCUMENT_H
#define SRC_PDFC_LIBVIRTUALQPDFDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfDocument so that we can call protected methods
class VirtualQPdfDocument final : public QPdfDocument {

  public:
    // Virtual class boolean flag
    bool isVirtualQPdfDocument = true;

    // Virtual class public types (including callbacks)
    using QPdfDocument_Metacall_Callback = int (*)(QPdfDocument*, int, int, void**);
    using QPdfDocument_Event_Callback = bool (*)(QPdfDocument*, QEvent*);
    using QPdfDocument_EventFilter_Callback = bool (*)(QPdfDocument*, QObject*, QEvent*);
    using QPdfDocument_TimerEvent_Callback = void (*)(QPdfDocument*, QTimerEvent*);
    using QPdfDocument_ChildEvent_Callback = void (*)(QPdfDocument*, QChildEvent*);
    using QPdfDocument_CustomEvent_Callback = void (*)(QPdfDocument*, QEvent*);
    using QPdfDocument_ConnectNotify_Callback = void (*)(QPdfDocument*, QMetaMethod*);
    using QPdfDocument_DisconnectNotify_Callback = void (*)(QPdfDocument*, QMetaMethod*);
    using QPdfDocument_Sender_Callback = QObject* (*)();
    using QPdfDocument_SenderSignalIndex_Callback = int (*)();
    using QPdfDocument_Receivers_Callback = int (*)(const QPdfDocument*, const char*);
    using QPdfDocument_IsSignalConnected_Callback = bool (*)(const QPdfDocument*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPdfDocument_Metacall_Callback qpdfdocument_metacall_callback = nullptr;
    QPdfDocument_Event_Callback qpdfdocument_event_callback = nullptr;
    QPdfDocument_EventFilter_Callback qpdfdocument_eventfilter_callback = nullptr;
    QPdfDocument_TimerEvent_Callback qpdfdocument_timerevent_callback = nullptr;
    QPdfDocument_ChildEvent_Callback qpdfdocument_childevent_callback = nullptr;
    QPdfDocument_CustomEvent_Callback qpdfdocument_customevent_callback = nullptr;
    QPdfDocument_ConnectNotify_Callback qpdfdocument_connectnotify_callback = nullptr;
    QPdfDocument_DisconnectNotify_Callback qpdfdocument_disconnectnotify_callback = nullptr;
    QPdfDocument_Sender_Callback qpdfdocument_sender_callback = nullptr;
    QPdfDocument_SenderSignalIndex_Callback qpdfdocument_sendersignalindex_callback = nullptr;
    QPdfDocument_Receivers_Callback qpdfdocument_receivers_callback = nullptr;
    QPdfDocument_IsSignalConnected_Callback qpdfdocument_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpdfdocument_metacall_isbase = false;
    mutable bool qpdfdocument_event_isbase = false;
    mutable bool qpdfdocument_eventfilter_isbase = false;
    mutable bool qpdfdocument_timerevent_isbase = false;
    mutable bool qpdfdocument_childevent_isbase = false;
    mutable bool qpdfdocument_customevent_isbase = false;
    mutable bool qpdfdocument_connectnotify_isbase = false;
    mutable bool qpdfdocument_disconnectnotify_isbase = false;
    mutable bool qpdfdocument_sender_isbase = false;
    mutable bool qpdfdocument_sendersignalindex_isbase = false;
    mutable bool qpdfdocument_receivers_isbase = false;
    mutable bool qpdfdocument_issignalconnected_isbase = false;

  public:
    VirtualQPdfDocument() : QPdfDocument() {};
    VirtualQPdfDocument(QObject* parent) : QPdfDocument(parent) {};

    ~VirtualQPdfDocument() {
        qpdfdocument_metacall_callback = nullptr;
        qpdfdocument_event_callback = nullptr;
        qpdfdocument_eventfilter_callback = nullptr;
        qpdfdocument_timerevent_callback = nullptr;
        qpdfdocument_childevent_callback = nullptr;
        qpdfdocument_customevent_callback = nullptr;
        qpdfdocument_connectnotify_callback = nullptr;
        qpdfdocument_disconnectnotify_callback = nullptr;
        qpdfdocument_sender_callback = nullptr;
        qpdfdocument_sendersignalindex_callback = nullptr;
        qpdfdocument_receivers_callback = nullptr;
        qpdfdocument_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPdfDocument_Metacall_Callback(QPdfDocument_Metacall_Callback cb) { qpdfdocument_metacall_callback = cb; }
    inline void setQPdfDocument_Event_Callback(QPdfDocument_Event_Callback cb) { qpdfdocument_event_callback = cb; }
    inline void setQPdfDocument_EventFilter_Callback(QPdfDocument_EventFilter_Callback cb) { qpdfdocument_eventfilter_callback = cb; }
    inline void setQPdfDocument_TimerEvent_Callback(QPdfDocument_TimerEvent_Callback cb) { qpdfdocument_timerevent_callback = cb; }
    inline void setQPdfDocument_ChildEvent_Callback(QPdfDocument_ChildEvent_Callback cb) { qpdfdocument_childevent_callback = cb; }
    inline void setQPdfDocument_CustomEvent_Callback(QPdfDocument_CustomEvent_Callback cb) { qpdfdocument_customevent_callback = cb; }
    inline void setQPdfDocument_ConnectNotify_Callback(QPdfDocument_ConnectNotify_Callback cb) { qpdfdocument_connectnotify_callback = cb; }
    inline void setQPdfDocument_DisconnectNotify_Callback(QPdfDocument_DisconnectNotify_Callback cb) { qpdfdocument_disconnectnotify_callback = cb; }
    inline void setQPdfDocument_Sender_Callback(QPdfDocument_Sender_Callback cb) { qpdfdocument_sender_callback = cb; }
    inline void setQPdfDocument_SenderSignalIndex_Callback(QPdfDocument_SenderSignalIndex_Callback cb) { qpdfdocument_sendersignalindex_callback = cb; }
    inline void setQPdfDocument_Receivers_Callback(QPdfDocument_Receivers_Callback cb) { qpdfdocument_receivers_callback = cb; }
    inline void setQPdfDocument_IsSignalConnected_Callback(QPdfDocument_IsSignalConnected_Callback cb) { qpdfdocument_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPdfDocument_Metacall_IsBase(bool value) const { qpdfdocument_metacall_isbase = value; }
    inline void setQPdfDocument_Event_IsBase(bool value) const { qpdfdocument_event_isbase = value; }
    inline void setQPdfDocument_EventFilter_IsBase(bool value) const { qpdfdocument_eventfilter_isbase = value; }
    inline void setQPdfDocument_TimerEvent_IsBase(bool value) const { qpdfdocument_timerevent_isbase = value; }
    inline void setQPdfDocument_ChildEvent_IsBase(bool value) const { qpdfdocument_childevent_isbase = value; }
    inline void setQPdfDocument_CustomEvent_IsBase(bool value) const { qpdfdocument_customevent_isbase = value; }
    inline void setQPdfDocument_ConnectNotify_IsBase(bool value) const { qpdfdocument_connectnotify_isbase = value; }
    inline void setQPdfDocument_DisconnectNotify_IsBase(bool value) const { qpdfdocument_disconnectnotify_isbase = value; }
    inline void setQPdfDocument_Sender_IsBase(bool value) const { qpdfdocument_sender_isbase = value; }
    inline void setQPdfDocument_SenderSignalIndex_IsBase(bool value) const { qpdfdocument_sendersignalindex_isbase = value; }
    inline void setQPdfDocument_Receivers_IsBase(bool value) const { qpdfdocument_receivers_isbase = value; }
    inline void setQPdfDocument_IsSignalConnected_IsBase(bool value) const { qpdfdocument_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfdocument_metacall_isbase) {
            qpdfdocument_metacall_isbase = false;
            return QPdfDocument::qt_metacall(param1, param2, param3);
        } else if (qpdfdocument_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qpdfdocument_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfDocument::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfdocument_event_isbase) {
            qpdfdocument_event_isbase = false;
            return QPdfDocument::event(event);
        } else if (qpdfdocument_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qpdfdocument_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfDocument::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfdocument_eventfilter_isbase) {
            qpdfdocument_eventfilter_isbase = false;
            return QPdfDocument::eventFilter(watched, event);
        } else if (qpdfdocument_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qpdfdocument_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPdfDocument::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfdocument_timerevent_isbase) {
            qpdfdocument_timerevent_isbase = false;
            QPdfDocument::timerEvent(event);
        } else if (qpdfdocument_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qpdfdocument_timerevent_callback(this, cbval1);
        } else {
            QPdfDocument::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfdocument_childevent_isbase) {
            qpdfdocument_childevent_isbase = false;
            QPdfDocument::childEvent(event);
        } else if (qpdfdocument_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qpdfdocument_childevent_callback(this, cbval1);
        } else {
            QPdfDocument::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfdocument_customevent_isbase) {
            qpdfdocument_customevent_isbase = false;
            QPdfDocument::customEvent(event);
        } else if (qpdfdocument_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpdfdocument_customevent_callback(this, cbval1);
        } else {
            QPdfDocument::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfdocument_connectnotify_isbase) {
            qpdfdocument_connectnotify_isbase = false;
            QPdfDocument::connectNotify(signal);
        } else if (qpdfdocument_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpdfdocument_connectnotify_callback(this, cbval1);
        } else {
            QPdfDocument::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfdocument_disconnectnotify_isbase) {
            qpdfdocument_disconnectnotify_isbase = false;
            QPdfDocument::disconnectNotify(signal);
        } else if (qpdfdocument_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpdfdocument_disconnectnotify_callback(this, cbval1);
        } else {
            QPdfDocument::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpdfdocument_sender_isbase) {
            qpdfdocument_sender_isbase = false;
            return QPdfDocument::sender();
        } else if (qpdfdocument_sender_callback != nullptr) {
            QObject* callback_ret = qpdfdocument_sender_callback();
            return callback_ret;
        } else {
            return QPdfDocument::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpdfdocument_sendersignalindex_isbase) {
            qpdfdocument_sendersignalindex_isbase = false;
            return QPdfDocument::senderSignalIndex();
        } else if (qpdfdocument_sendersignalindex_callback != nullptr) {
            int callback_ret = qpdfdocument_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPdfDocument::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpdfdocument_receivers_isbase) {
            qpdfdocument_receivers_isbase = false;
            return QPdfDocument::receivers(signal);
        } else if (qpdfdocument_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qpdfdocument_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfDocument::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpdfdocument_issignalconnected_isbase) {
            qpdfdocument_issignalconnected_isbase = false;
            return QPdfDocument::isSignalConnected(signal);
        } else if (qpdfdocument_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qpdfdocument_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfDocument::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPdfDocument_TimerEvent(QPdfDocument* self, QTimerEvent* event);
    friend void QPdfDocument_QBaseTimerEvent(QPdfDocument* self, QTimerEvent* event);
    friend void QPdfDocument_ChildEvent(QPdfDocument* self, QChildEvent* event);
    friend void QPdfDocument_QBaseChildEvent(QPdfDocument* self, QChildEvent* event);
    friend void QPdfDocument_CustomEvent(QPdfDocument* self, QEvent* event);
    friend void QPdfDocument_QBaseCustomEvent(QPdfDocument* self, QEvent* event);
    friend void QPdfDocument_ConnectNotify(QPdfDocument* self, const QMetaMethod* signal);
    friend void QPdfDocument_QBaseConnectNotify(QPdfDocument* self, const QMetaMethod* signal);
    friend void QPdfDocument_DisconnectNotify(QPdfDocument* self, const QMetaMethod* signal);
    friend void QPdfDocument_QBaseDisconnectNotify(QPdfDocument* self, const QMetaMethod* signal);
    friend QObject* QPdfDocument_Sender(const QPdfDocument* self);
    friend QObject* QPdfDocument_QBaseSender(const QPdfDocument* self);
    friend int QPdfDocument_SenderSignalIndex(const QPdfDocument* self);
    friend int QPdfDocument_QBaseSenderSignalIndex(const QPdfDocument* self);
    friend int QPdfDocument_Receivers(const QPdfDocument* self, const char* signal);
    friend int QPdfDocument_QBaseReceivers(const QPdfDocument* self, const char* signal);
    friend bool QPdfDocument_IsSignalConnected(const QPdfDocument* self, const QMetaMethod* signal);
    friend bool QPdfDocument_QBaseIsSignalConnected(const QPdfDocument* self, const QMetaMethod* signal);
};

#endif
