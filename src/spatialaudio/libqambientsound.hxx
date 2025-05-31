#pragma once
#ifndef SRC_SPATIALAUDIOC_LIBVIRTUALQAMBIENTSOUND_H
#define SRC_SPATIALAUDIOC_LIBVIRTUALQAMBIENTSOUND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAmbientSound so that we can call protected methods
class VirtualQAmbientSound final : public QAmbientSound {

  public:
    // Virtual class boolean flag
    bool isVirtualQAmbientSound = true;

    // Virtual class public types (including callbacks)
    using QAmbientSound_Metacall_Callback = int (*)(QAmbientSound*, int, int, void**);
    using QAmbientSound_Event_Callback = bool (*)(QAmbientSound*, QEvent*);
    using QAmbientSound_EventFilter_Callback = bool (*)(QAmbientSound*, QObject*, QEvent*);
    using QAmbientSound_TimerEvent_Callback = void (*)(QAmbientSound*, QTimerEvent*);
    using QAmbientSound_ChildEvent_Callback = void (*)(QAmbientSound*, QChildEvent*);
    using QAmbientSound_CustomEvent_Callback = void (*)(QAmbientSound*, QEvent*);
    using QAmbientSound_ConnectNotify_Callback = void (*)(QAmbientSound*, QMetaMethod*);
    using QAmbientSound_DisconnectNotify_Callback = void (*)(QAmbientSound*, QMetaMethod*);
    using QAmbientSound_Sender_Callback = QObject* (*)();
    using QAmbientSound_SenderSignalIndex_Callback = int (*)();
    using QAmbientSound_Receivers_Callback = int (*)(const QAmbientSound*, const char*);
    using QAmbientSound_IsSignalConnected_Callback = bool (*)(const QAmbientSound*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAmbientSound_Metacall_Callback qambientsound_metacall_callback = nullptr;
    QAmbientSound_Event_Callback qambientsound_event_callback = nullptr;
    QAmbientSound_EventFilter_Callback qambientsound_eventfilter_callback = nullptr;
    QAmbientSound_TimerEvent_Callback qambientsound_timerevent_callback = nullptr;
    QAmbientSound_ChildEvent_Callback qambientsound_childevent_callback = nullptr;
    QAmbientSound_CustomEvent_Callback qambientsound_customevent_callback = nullptr;
    QAmbientSound_ConnectNotify_Callback qambientsound_connectnotify_callback = nullptr;
    QAmbientSound_DisconnectNotify_Callback qambientsound_disconnectnotify_callback = nullptr;
    QAmbientSound_Sender_Callback qambientsound_sender_callback = nullptr;
    QAmbientSound_SenderSignalIndex_Callback qambientsound_sendersignalindex_callback = nullptr;
    QAmbientSound_Receivers_Callback qambientsound_receivers_callback = nullptr;
    QAmbientSound_IsSignalConnected_Callback qambientsound_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qambientsound_metacall_isbase = false;
    mutable bool qambientsound_event_isbase = false;
    mutable bool qambientsound_eventfilter_isbase = false;
    mutable bool qambientsound_timerevent_isbase = false;
    mutable bool qambientsound_childevent_isbase = false;
    mutable bool qambientsound_customevent_isbase = false;
    mutable bool qambientsound_connectnotify_isbase = false;
    mutable bool qambientsound_disconnectnotify_isbase = false;
    mutable bool qambientsound_sender_isbase = false;
    mutable bool qambientsound_sendersignalindex_isbase = false;
    mutable bool qambientsound_receivers_isbase = false;
    mutable bool qambientsound_issignalconnected_isbase = false;

  public:
    VirtualQAmbientSound(QAudioEngine* engine) : QAmbientSound(engine){};

    ~VirtualQAmbientSound() {
        qambientsound_metacall_callback = nullptr;
        qambientsound_event_callback = nullptr;
        qambientsound_eventfilter_callback = nullptr;
        qambientsound_timerevent_callback = nullptr;
        qambientsound_childevent_callback = nullptr;
        qambientsound_customevent_callback = nullptr;
        qambientsound_connectnotify_callback = nullptr;
        qambientsound_disconnectnotify_callback = nullptr;
        qambientsound_sender_callback = nullptr;
        qambientsound_sendersignalindex_callback = nullptr;
        qambientsound_receivers_callback = nullptr;
        qambientsound_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAmbientSound_Metacall_Callback(QAmbientSound_Metacall_Callback cb) { qambientsound_metacall_callback = cb; }
    inline void setQAmbientSound_Event_Callback(QAmbientSound_Event_Callback cb) { qambientsound_event_callback = cb; }
    inline void setQAmbientSound_EventFilter_Callback(QAmbientSound_EventFilter_Callback cb) { qambientsound_eventfilter_callback = cb; }
    inline void setQAmbientSound_TimerEvent_Callback(QAmbientSound_TimerEvent_Callback cb) { qambientsound_timerevent_callback = cb; }
    inline void setQAmbientSound_ChildEvent_Callback(QAmbientSound_ChildEvent_Callback cb) { qambientsound_childevent_callback = cb; }
    inline void setQAmbientSound_CustomEvent_Callback(QAmbientSound_CustomEvent_Callback cb) { qambientsound_customevent_callback = cb; }
    inline void setQAmbientSound_ConnectNotify_Callback(QAmbientSound_ConnectNotify_Callback cb) { qambientsound_connectnotify_callback = cb; }
    inline void setQAmbientSound_DisconnectNotify_Callback(QAmbientSound_DisconnectNotify_Callback cb) { qambientsound_disconnectnotify_callback = cb; }
    inline void setQAmbientSound_Sender_Callback(QAmbientSound_Sender_Callback cb) { qambientsound_sender_callback = cb; }
    inline void setQAmbientSound_SenderSignalIndex_Callback(QAmbientSound_SenderSignalIndex_Callback cb) { qambientsound_sendersignalindex_callback = cb; }
    inline void setQAmbientSound_Receivers_Callback(QAmbientSound_Receivers_Callback cb) { qambientsound_receivers_callback = cb; }
    inline void setQAmbientSound_IsSignalConnected_Callback(QAmbientSound_IsSignalConnected_Callback cb) { qambientsound_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAmbientSound_Metacall_IsBase(bool value) const { qambientsound_metacall_isbase = value; }
    inline void setQAmbientSound_Event_IsBase(bool value) const { qambientsound_event_isbase = value; }
    inline void setQAmbientSound_EventFilter_IsBase(bool value) const { qambientsound_eventfilter_isbase = value; }
    inline void setQAmbientSound_TimerEvent_IsBase(bool value) const { qambientsound_timerevent_isbase = value; }
    inline void setQAmbientSound_ChildEvent_IsBase(bool value) const { qambientsound_childevent_isbase = value; }
    inline void setQAmbientSound_CustomEvent_IsBase(bool value) const { qambientsound_customevent_isbase = value; }
    inline void setQAmbientSound_ConnectNotify_IsBase(bool value) const { qambientsound_connectnotify_isbase = value; }
    inline void setQAmbientSound_DisconnectNotify_IsBase(bool value) const { qambientsound_disconnectnotify_isbase = value; }
    inline void setQAmbientSound_Sender_IsBase(bool value) const { qambientsound_sender_isbase = value; }
    inline void setQAmbientSound_SenderSignalIndex_IsBase(bool value) const { qambientsound_sendersignalindex_isbase = value; }
    inline void setQAmbientSound_Receivers_IsBase(bool value) const { qambientsound_receivers_isbase = value; }
    inline void setQAmbientSound_IsSignalConnected_IsBase(bool value) const { qambientsound_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qambientsound_metacall_isbase) {
            qambientsound_metacall_isbase = false;
            return QAmbientSound::qt_metacall(param1, param2, param3);
        } else if (qambientsound_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qambientsound_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAmbientSound::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qambientsound_event_isbase) {
            qambientsound_event_isbase = false;
            return QAmbientSound::event(event);
        } else if (qambientsound_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qambientsound_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAmbientSound::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qambientsound_eventfilter_isbase) {
            qambientsound_eventfilter_isbase = false;
            return QAmbientSound::eventFilter(watched, event);
        } else if (qambientsound_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qambientsound_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAmbientSound::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qambientsound_timerevent_isbase) {
            qambientsound_timerevent_isbase = false;
            QAmbientSound::timerEvent(event);
        } else if (qambientsound_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qambientsound_timerevent_callback(this, cbval1);
        } else {
            QAmbientSound::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qambientsound_childevent_isbase) {
            qambientsound_childevent_isbase = false;
            QAmbientSound::childEvent(event);
        } else if (qambientsound_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qambientsound_childevent_callback(this, cbval1);
        } else {
            QAmbientSound::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qambientsound_customevent_isbase) {
            qambientsound_customevent_isbase = false;
            QAmbientSound::customEvent(event);
        } else if (qambientsound_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qambientsound_customevent_callback(this, cbval1);
        } else {
            QAmbientSound::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qambientsound_connectnotify_isbase) {
            qambientsound_connectnotify_isbase = false;
            QAmbientSound::connectNotify(signal);
        } else if (qambientsound_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qambientsound_connectnotify_callback(this, cbval1);
        } else {
            QAmbientSound::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qambientsound_disconnectnotify_isbase) {
            qambientsound_disconnectnotify_isbase = false;
            QAmbientSound::disconnectNotify(signal);
        } else if (qambientsound_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qambientsound_disconnectnotify_callback(this, cbval1);
        } else {
            QAmbientSound::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qambientsound_sender_isbase) {
            qambientsound_sender_isbase = false;
            return QAmbientSound::sender();
        } else if (qambientsound_sender_callback != nullptr) {
            QObject* callback_ret = qambientsound_sender_callback();
            return callback_ret;
        } else {
            return QAmbientSound::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qambientsound_sendersignalindex_isbase) {
            qambientsound_sendersignalindex_isbase = false;
            return QAmbientSound::senderSignalIndex();
        } else if (qambientsound_sendersignalindex_callback != nullptr) {
            int callback_ret = qambientsound_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAmbientSound::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qambientsound_receivers_isbase) {
            qambientsound_receivers_isbase = false;
            return QAmbientSound::receivers(signal);
        } else if (qambientsound_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qambientsound_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAmbientSound::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qambientsound_issignalconnected_isbase) {
            qambientsound_issignalconnected_isbase = false;
            return QAmbientSound::isSignalConnected(signal);
        } else if (qambientsound_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qambientsound_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAmbientSound::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAmbientSound_TimerEvent(QAmbientSound* self, QTimerEvent* event);
    friend void QAmbientSound_QBaseTimerEvent(QAmbientSound* self, QTimerEvent* event);
    friend void QAmbientSound_ChildEvent(QAmbientSound* self, QChildEvent* event);
    friend void QAmbientSound_QBaseChildEvent(QAmbientSound* self, QChildEvent* event);
    friend void QAmbientSound_CustomEvent(QAmbientSound* self, QEvent* event);
    friend void QAmbientSound_QBaseCustomEvent(QAmbientSound* self, QEvent* event);
    friend void QAmbientSound_ConnectNotify(QAmbientSound* self, const QMetaMethod* signal);
    friend void QAmbientSound_QBaseConnectNotify(QAmbientSound* self, const QMetaMethod* signal);
    friend void QAmbientSound_DisconnectNotify(QAmbientSound* self, const QMetaMethod* signal);
    friend void QAmbientSound_QBaseDisconnectNotify(QAmbientSound* self, const QMetaMethod* signal);
    friend QObject* QAmbientSound_Sender(const QAmbientSound* self);
    friend QObject* QAmbientSound_QBaseSender(const QAmbientSound* self);
    friend int QAmbientSound_SenderSignalIndex(const QAmbientSound* self);
    friend int QAmbientSound_QBaseSenderSignalIndex(const QAmbientSound* self);
    friend int QAmbientSound_Receivers(const QAmbientSound* self, const char* signal);
    friend int QAmbientSound_QBaseReceivers(const QAmbientSound* self, const char* signal);
    friend bool QAmbientSound_IsSignalConnected(const QAmbientSound* self, const QMetaMethod* signal);
    friend bool QAmbientSound_QBaseIsSignalConnected(const QAmbientSound* self, const QMetaMethod* signal);
};

#endif
