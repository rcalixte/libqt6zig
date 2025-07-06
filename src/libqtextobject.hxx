#pragma once
#ifndef SRCC_LIBVIRTUALQTEXTOBJECT_H
#define SRCC_LIBVIRTUALQTEXTOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextFrame so that we can call protected methods
class VirtualQTextFrame final : public QTextFrame {

  public:
    // Virtual class boolean flag
    bool isVirtualQTextFrame = true;

    // Virtual class public types (including callbacks)
    using QTextFrame_Metacall_Callback = int (*)(QTextFrame*, int, int, void**);
    using QTextFrame_Event_Callback = bool (*)(QTextFrame*, QEvent*);
    using QTextFrame_EventFilter_Callback = bool (*)(QTextFrame*, QObject*, QEvent*);
    using QTextFrame_TimerEvent_Callback = void (*)(QTextFrame*, QTimerEvent*);
    using QTextFrame_ChildEvent_Callback = void (*)(QTextFrame*, QChildEvent*);
    using QTextFrame_CustomEvent_Callback = void (*)(QTextFrame*, QEvent*);
    using QTextFrame_ConnectNotify_Callback = void (*)(QTextFrame*, QMetaMethod*);
    using QTextFrame_DisconnectNotify_Callback = void (*)(QTextFrame*, QMetaMethod*);
    using QTextFrame_SetFormat_Callback = void (*)(QTextFrame*, QTextFormat*);
    using QTextFrame_Sender_Callback = QObject* (*)();
    using QTextFrame_SenderSignalIndex_Callback = int (*)();
    using QTextFrame_Receivers_Callback = int (*)(const QTextFrame*, const char*);
    using QTextFrame_IsSignalConnected_Callback = bool (*)(const QTextFrame*, QMetaMethod*);

  protected:
    // Instance callback storage
    QTextFrame_Metacall_Callback qtextframe_metacall_callback = nullptr;
    QTextFrame_Event_Callback qtextframe_event_callback = nullptr;
    QTextFrame_EventFilter_Callback qtextframe_eventfilter_callback = nullptr;
    QTextFrame_TimerEvent_Callback qtextframe_timerevent_callback = nullptr;
    QTextFrame_ChildEvent_Callback qtextframe_childevent_callback = nullptr;
    QTextFrame_CustomEvent_Callback qtextframe_customevent_callback = nullptr;
    QTextFrame_ConnectNotify_Callback qtextframe_connectnotify_callback = nullptr;
    QTextFrame_DisconnectNotify_Callback qtextframe_disconnectnotify_callback = nullptr;
    QTextFrame_SetFormat_Callback qtextframe_setformat_callback = nullptr;
    QTextFrame_Sender_Callback qtextframe_sender_callback = nullptr;
    QTextFrame_SenderSignalIndex_Callback qtextframe_sendersignalindex_callback = nullptr;
    QTextFrame_Receivers_Callback qtextframe_receivers_callback = nullptr;
    QTextFrame_IsSignalConnected_Callback qtextframe_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtextframe_metacall_isbase = false;
    mutable bool qtextframe_event_isbase = false;
    mutable bool qtextframe_eventfilter_isbase = false;
    mutable bool qtextframe_timerevent_isbase = false;
    mutable bool qtextframe_childevent_isbase = false;
    mutable bool qtextframe_customevent_isbase = false;
    mutable bool qtextframe_connectnotify_isbase = false;
    mutable bool qtextframe_disconnectnotify_isbase = false;
    mutable bool qtextframe_setformat_isbase = false;
    mutable bool qtextframe_sender_isbase = false;
    mutable bool qtextframe_sendersignalindex_isbase = false;
    mutable bool qtextframe_receivers_isbase = false;
    mutable bool qtextframe_issignalconnected_isbase = false;

  public:
    VirtualQTextFrame(QTextDocument* doc) : QTextFrame(doc) {};

    ~VirtualQTextFrame() {
        qtextframe_metacall_callback = nullptr;
        qtextframe_event_callback = nullptr;
        qtextframe_eventfilter_callback = nullptr;
        qtextframe_timerevent_callback = nullptr;
        qtextframe_childevent_callback = nullptr;
        qtextframe_customevent_callback = nullptr;
        qtextframe_connectnotify_callback = nullptr;
        qtextframe_disconnectnotify_callback = nullptr;
        qtextframe_setformat_callback = nullptr;
        qtextframe_sender_callback = nullptr;
        qtextframe_sendersignalindex_callback = nullptr;
        qtextframe_receivers_callback = nullptr;
        qtextframe_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQTextFrame_Metacall_Callback(QTextFrame_Metacall_Callback cb) { qtextframe_metacall_callback = cb; }
    inline void setQTextFrame_Event_Callback(QTextFrame_Event_Callback cb) { qtextframe_event_callback = cb; }
    inline void setQTextFrame_EventFilter_Callback(QTextFrame_EventFilter_Callback cb) { qtextframe_eventfilter_callback = cb; }
    inline void setQTextFrame_TimerEvent_Callback(QTextFrame_TimerEvent_Callback cb) { qtextframe_timerevent_callback = cb; }
    inline void setQTextFrame_ChildEvent_Callback(QTextFrame_ChildEvent_Callback cb) { qtextframe_childevent_callback = cb; }
    inline void setQTextFrame_CustomEvent_Callback(QTextFrame_CustomEvent_Callback cb) { qtextframe_customevent_callback = cb; }
    inline void setQTextFrame_ConnectNotify_Callback(QTextFrame_ConnectNotify_Callback cb) { qtextframe_connectnotify_callback = cb; }
    inline void setQTextFrame_DisconnectNotify_Callback(QTextFrame_DisconnectNotify_Callback cb) { qtextframe_disconnectnotify_callback = cb; }
    inline void setQTextFrame_SetFormat_Callback(QTextFrame_SetFormat_Callback cb) { qtextframe_setformat_callback = cb; }
    inline void setQTextFrame_Sender_Callback(QTextFrame_Sender_Callback cb) { qtextframe_sender_callback = cb; }
    inline void setQTextFrame_SenderSignalIndex_Callback(QTextFrame_SenderSignalIndex_Callback cb) { qtextframe_sendersignalindex_callback = cb; }
    inline void setQTextFrame_Receivers_Callback(QTextFrame_Receivers_Callback cb) { qtextframe_receivers_callback = cb; }
    inline void setQTextFrame_IsSignalConnected_Callback(QTextFrame_IsSignalConnected_Callback cb) { qtextframe_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQTextFrame_Metacall_IsBase(bool value) const { qtextframe_metacall_isbase = value; }
    inline void setQTextFrame_Event_IsBase(bool value) const { qtextframe_event_isbase = value; }
    inline void setQTextFrame_EventFilter_IsBase(bool value) const { qtextframe_eventfilter_isbase = value; }
    inline void setQTextFrame_TimerEvent_IsBase(bool value) const { qtextframe_timerevent_isbase = value; }
    inline void setQTextFrame_ChildEvent_IsBase(bool value) const { qtextframe_childevent_isbase = value; }
    inline void setQTextFrame_CustomEvent_IsBase(bool value) const { qtextframe_customevent_isbase = value; }
    inline void setQTextFrame_ConnectNotify_IsBase(bool value) const { qtextframe_connectnotify_isbase = value; }
    inline void setQTextFrame_DisconnectNotify_IsBase(bool value) const { qtextframe_disconnectnotify_isbase = value; }
    inline void setQTextFrame_SetFormat_IsBase(bool value) const { qtextframe_setformat_isbase = value; }
    inline void setQTextFrame_Sender_IsBase(bool value) const { qtextframe_sender_isbase = value; }
    inline void setQTextFrame_SenderSignalIndex_IsBase(bool value) const { qtextframe_sendersignalindex_isbase = value; }
    inline void setQTextFrame_Receivers_IsBase(bool value) const { qtextframe_receivers_isbase = value; }
    inline void setQTextFrame_IsSignalConnected_IsBase(bool value) const { qtextframe_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtextframe_metacall_isbase) {
            qtextframe_metacall_isbase = false;
            return QTextFrame::qt_metacall(param1, param2, param3);
        } else if (qtextframe_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qtextframe_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QTextFrame::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtextframe_event_isbase) {
            qtextframe_event_isbase = false;
            return QTextFrame::event(event);
        } else if (qtextframe_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qtextframe_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTextFrame::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtextframe_eventfilter_isbase) {
            qtextframe_eventfilter_isbase = false;
            return QTextFrame::eventFilter(watched, event);
        } else if (qtextframe_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qtextframe_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QTextFrame::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtextframe_timerevent_isbase) {
            qtextframe_timerevent_isbase = false;
            QTextFrame::timerEvent(event);
        } else if (qtextframe_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qtextframe_timerevent_callback(this, cbval1);
        } else {
            QTextFrame::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtextframe_childevent_isbase) {
            qtextframe_childevent_isbase = false;
            QTextFrame::childEvent(event);
        } else if (qtextframe_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qtextframe_childevent_callback(this, cbval1);
        } else {
            QTextFrame::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtextframe_customevent_isbase) {
            qtextframe_customevent_isbase = false;
            QTextFrame::customEvent(event);
        } else if (qtextframe_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtextframe_customevent_callback(this, cbval1);
        } else {
            QTextFrame::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtextframe_connectnotify_isbase) {
            qtextframe_connectnotify_isbase = false;
            QTextFrame::connectNotify(signal);
        } else if (qtextframe_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtextframe_connectnotify_callback(this, cbval1);
        } else {
            QTextFrame::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtextframe_disconnectnotify_isbase) {
            qtextframe_disconnectnotify_isbase = false;
            QTextFrame::disconnectNotify(signal);
        } else if (qtextframe_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtextframe_disconnectnotify_callback(this, cbval1);
        } else {
            QTextFrame::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFormat(const QTextFormat& format) {
        if (qtextframe_setformat_isbase) {
            qtextframe_setformat_isbase = false;
            QTextFrame::setFormat(format);
        } else if (qtextframe_setformat_callback != nullptr) {
            const QTextFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextFormat* cbval1 = const_cast<QTextFormat*>(&format_ret);

            qtextframe_setformat_callback(this, cbval1);
        } else {
            QTextFrame::setFormat(format);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtextframe_sender_isbase) {
            qtextframe_sender_isbase = false;
            return QTextFrame::sender();
        } else if (qtextframe_sender_callback != nullptr) {
            QObject* callback_ret = qtextframe_sender_callback();
            return callback_ret;
        } else {
            return QTextFrame::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtextframe_sendersignalindex_isbase) {
            qtextframe_sendersignalindex_isbase = false;
            return QTextFrame::senderSignalIndex();
        } else if (qtextframe_sendersignalindex_callback != nullptr) {
            int callback_ret = qtextframe_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTextFrame::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtextframe_receivers_isbase) {
            qtextframe_receivers_isbase = false;
            return QTextFrame::receivers(signal);
        } else if (qtextframe_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qtextframe_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTextFrame::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtextframe_issignalconnected_isbase) {
            qtextframe_issignalconnected_isbase = false;
            return QTextFrame::isSignalConnected(signal);
        } else if (qtextframe_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qtextframe_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTextFrame::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QTextFrame_TimerEvent(QTextFrame* self, QTimerEvent* event);
    friend void QTextFrame_QBaseTimerEvent(QTextFrame* self, QTimerEvent* event);
    friend void QTextFrame_ChildEvent(QTextFrame* self, QChildEvent* event);
    friend void QTextFrame_QBaseChildEvent(QTextFrame* self, QChildEvent* event);
    friend void QTextFrame_CustomEvent(QTextFrame* self, QEvent* event);
    friend void QTextFrame_QBaseCustomEvent(QTextFrame* self, QEvent* event);
    friend void QTextFrame_ConnectNotify(QTextFrame* self, const QMetaMethod* signal);
    friend void QTextFrame_QBaseConnectNotify(QTextFrame* self, const QMetaMethod* signal);
    friend void QTextFrame_DisconnectNotify(QTextFrame* self, const QMetaMethod* signal);
    friend void QTextFrame_QBaseDisconnectNotify(QTextFrame* self, const QMetaMethod* signal);
    friend void QTextFrame_SetFormat(QTextFrame* self, const QTextFormat* format);
    friend void QTextFrame_QBaseSetFormat(QTextFrame* self, const QTextFormat* format);
    friend QObject* QTextFrame_Sender(const QTextFrame* self);
    friend QObject* QTextFrame_QBaseSender(const QTextFrame* self);
    friend int QTextFrame_SenderSignalIndex(const QTextFrame* self);
    friend int QTextFrame_QBaseSenderSignalIndex(const QTextFrame* self);
    friend int QTextFrame_Receivers(const QTextFrame* self, const char* signal);
    friend int QTextFrame_QBaseReceivers(const QTextFrame* self, const char* signal);
    friend bool QTextFrame_IsSignalConnected(const QTextFrame* self, const QMetaMethod* signal);
    friend bool QTextFrame_QBaseIsSignalConnected(const QTextFrame* self, const QMetaMethod* signal);
};

#endif
