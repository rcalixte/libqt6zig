#pragma once
#ifndef SRC_SPATIALAUDIOC_LIBVIRTUALQSPATIALSOUND_H
#define SRC_SPATIALAUDIOC_LIBVIRTUALQSPATIALSOUND_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSpatialSound so that we can call protected methods
class VirtualQSpatialSound final : public QSpatialSound {

  public:
    // Virtual class boolean flag
    bool isVirtualQSpatialSound = true;

    // Virtual class public types (including callbacks)
    using QSpatialSound_Metacall_Callback = int (*)(QSpatialSound*, int, int, void**);
    using QSpatialSound_Event_Callback = bool (*)(QSpatialSound*, QEvent*);
    using QSpatialSound_EventFilter_Callback = bool (*)(QSpatialSound*, QObject*, QEvent*);
    using QSpatialSound_TimerEvent_Callback = void (*)(QSpatialSound*, QTimerEvent*);
    using QSpatialSound_ChildEvent_Callback = void (*)(QSpatialSound*, QChildEvent*);
    using QSpatialSound_CustomEvent_Callback = void (*)(QSpatialSound*, QEvent*);
    using QSpatialSound_ConnectNotify_Callback = void (*)(QSpatialSound*, QMetaMethod*);
    using QSpatialSound_DisconnectNotify_Callback = void (*)(QSpatialSound*, QMetaMethod*);
    using QSpatialSound_Sender_Callback = QObject* (*)();
    using QSpatialSound_SenderSignalIndex_Callback = int (*)();
    using QSpatialSound_Receivers_Callback = int (*)(const QSpatialSound*, const char*);
    using QSpatialSound_IsSignalConnected_Callback = bool (*)(const QSpatialSound*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSpatialSound_Metacall_Callback qspatialsound_metacall_callback = nullptr;
    QSpatialSound_Event_Callback qspatialsound_event_callback = nullptr;
    QSpatialSound_EventFilter_Callback qspatialsound_eventfilter_callback = nullptr;
    QSpatialSound_TimerEvent_Callback qspatialsound_timerevent_callback = nullptr;
    QSpatialSound_ChildEvent_Callback qspatialsound_childevent_callback = nullptr;
    QSpatialSound_CustomEvent_Callback qspatialsound_customevent_callback = nullptr;
    QSpatialSound_ConnectNotify_Callback qspatialsound_connectnotify_callback = nullptr;
    QSpatialSound_DisconnectNotify_Callback qspatialsound_disconnectnotify_callback = nullptr;
    QSpatialSound_Sender_Callback qspatialsound_sender_callback = nullptr;
    QSpatialSound_SenderSignalIndex_Callback qspatialsound_sendersignalindex_callback = nullptr;
    QSpatialSound_Receivers_Callback qspatialsound_receivers_callback = nullptr;
    QSpatialSound_IsSignalConnected_Callback qspatialsound_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qspatialsound_metacall_isbase = false;
    mutable bool qspatialsound_event_isbase = false;
    mutable bool qspatialsound_eventfilter_isbase = false;
    mutable bool qspatialsound_timerevent_isbase = false;
    mutable bool qspatialsound_childevent_isbase = false;
    mutable bool qspatialsound_customevent_isbase = false;
    mutable bool qspatialsound_connectnotify_isbase = false;
    mutable bool qspatialsound_disconnectnotify_isbase = false;
    mutable bool qspatialsound_sender_isbase = false;
    mutable bool qspatialsound_sendersignalindex_isbase = false;
    mutable bool qspatialsound_receivers_isbase = false;
    mutable bool qspatialsound_issignalconnected_isbase = false;

  public:
    VirtualQSpatialSound(QAudioEngine* engine) : QSpatialSound(engine) {};

    ~VirtualQSpatialSound() {
        qspatialsound_metacall_callback = nullptr;
        qspatialsound_event_callback = nullptr;
        qspatialsound_eventfilter_callback = nullptr;
        qspatialsound_timerevent_callback = nullptr;
        qspatialsound_childevent_callback = nullptr;
        qspatialsound_customevent_callback = nullptr;
        qspatialsound_connectnotify_callback = nullptr;
        qspatialsound_disconnectnotify_callback = nullptr;
        qspatialsound_sender_callback = nullptr;
        qspatialsound_sendersignalindex_callback = nullptr;
        qspatialsound_receivers_callback = nullptr;
        qspatialsound_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSpatialSound_Metacall_Callback(QSpatialSound_Metacall_Callback cb) { qspatialsound_metacall_callback = cb; }
    inline void setQSpatialSound_Event_Callback(QSpatialSound_Event_Callback cb) { qspatialsound_event_callback = cb; }
    inline void setQSpatialSound_EventFilter_Callback(QSpatialSound_EventFilter_Callback cb) { qspatialsound_eventfilter_callback = cb; }
    inline void setQSpatialSound_TimerEvent_Callback(QSpatialSound_TimerEvent_Callback cb) { qspatialsound_timerevent_callback = cb; }
    inline void setQSpatialSound_ChildEvent_Callback(QSpatialSound_ChildEvent_Callback cb) { qspatialsound_childevent_callback = cb; }
    inline void setQSpatialSound_CustomEvent_Callback(QSpatialSound_CustomEvent_Callback cb) { qspatialsound_customevent_callback = cb; }
    inline void setQSpatialSound_ConnectNotify_Callback(QSpatialSound_ConnectNotify_Callback cb) { qspatialsound_connectnotify_callback = cb; }
    inline void setQSpatialSound_DisconnectNotify_Callback(QSpatialSound_DisconnectNotify_Callback cb) { qspatialsound_disconnectnotify_callback = cb; }
    inline void setQSpatialSound_Sender_Callback(QSpatialSound_Sender_Callback cb) { qspatialsound_sender_callback = cb; }
    inline void setQSpatialSound_SenderSignalIndex_Callback(QSpatialSound_SenderSignalIndex_Callback cb) { qspatialsound_sendersignalindex_callback = cb; }
    inline void setQSpatialSound_Receivers_Callback(QSpatialSound_Receivers_Callback cb) { qspatialsound_receivers_callback = cb; }
    inline void setQSpatialSound_IsSignalConnected_Callback(QSpatialSound_IsSignalConnected_Callback cb) { qspatialsound_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSpatialSound_Metacall_IsBase(bool value) const { qspatialsound_metacall_isbase = value; }
    inline void setQSpatialSound_Event_IsBase(bool value) const { qspatialsound_event_isbase = value; }
    inline void setQSpatialSound_EventFilter_IsBase(bool value) const { qspatialsound_eventfilter_isbase = value; }
    inline void setQSpatialSound_TimerEvent_IsBase(bool value) const { qspatialsound_timerevent_isbase = value; }
    inline void setQSpatialSound_ChildEvent_IsBase(bool value) const { qspatialsound_childevent_isbase = value; }
    inline void setQSpatialSound_CustomEvent_IsBase(bool value) const { qspatialsound_customevent_isbase = value; }
    inline void setQSpatialSound_ConnectNotify_IsBase(bool value) const { qspatialsound_connectnotify_isbase = value; }
    inline void setQSpatialSound_DisconnectNotify_IsBase(bool value) const { qspatialsound_disconnectnotify_isbase = value; }
    inline void setQSpatialSound_Sender_IsBase(bool value) const { qspatialsound_sender_isbase = value; }
    inline void setQSpatialSound_SenderSignalIndex_IsBase(bool value) const { qspatialsound_sendersignalindex_isbase = value; }
    inline void setQSpatialSound_Receivers_IsBase(bool value) const { qspatialsound_receivers_isbase = value; }
    inline void setQSpatialSound_IsSignalConnected_IsBase(bool value) const { qspatialsound_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qspatialsound_metacall_isbase) {
            qspatialsound_metacall_isbase = false;
            return QSpatialSound::qt_metacall(param1, param2, param3);
        } else if (qspatialsound_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qspatialsound_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSpatialSound::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qspatialsound_event_isbase) {
            qspatialsound_event_isbase = false;
            return QSpatialSound::event(event);
        } else if (qspatialsound_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qspatialsound_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSpatialSound::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qspatialsound_eventfilter_isbase) {
            qspatialsound_eventfilter_isbase = false;
            return QSpatialSound::eventFilter(watched, event);
        } else if (qspatialsound_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qspatialsound_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSpatialSound::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qspatialsound_timerevent_isbase) {
            qspatialsound_timerevent_isbase = false;
            QSpatialSound::timerEvent(event);
        } else if (qspatialsound_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qspatialsound_timerevent_callback(this, cbval1);
        } else {
            QSpatialSound::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qspatialsound_childevent_isbase) {
            qspatialsound_childevent_isbase = false;
            QSpatialSound::childEvent(event);
        } else if (qspatialsound_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qspatialsound_childevent_callback(this, cbval1);
        } else {
            QSpatialSound::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qspatialsound_customevent_isbase) {
            qspatialsound_customevent_isbase = false;
            QSpatialSound::customEvent(event);
        } else if (qspatialsound_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qspatialsound_customevent_callback(this, cbval1);
        } else {
            QSpatialSound::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qspatialsound_connectnotify_isbase) {
            qspatialsound_connectnotify_isbase = false;
            QSpatialSound::connectNotify(signal);
        } else if (qspatialsound_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qspatialsound_connectnotify_callback(this, cbval1);
        } else {
            QSpatialSound::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qspatialsound_disconnectnotify_isbase) {
            qspatialsound_disconnectnotify_isbase = false;
            QSpatialSound::disconnectNotify(signal);
        } else if (qspatialsound_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qspatialsound_disconnectnotify_callback(this, cbval1);
        } else {
            QSpatialSound::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qspatialsound_sender_isbase) {
            qspatialsound_sender_isbase = false;
            return QSpatialSound::sender();
        } else if (qspatialsound_sender_callback != nullptr) {
            QObject* callback_ret = qspatialsound_sender_callback();
            return callback_ret;
        } else {
            return QSpatialSound::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qspatialsound_sendersignalindex_isbase) {
            qspatialsound_sendersignalindex_isbase = false;
            return QSpatialSound::senderSignalIndex();
        } else if (qspatialsound_sendersignalindex_callback != nullptr) {
            int callback_ret = qspatialsound_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSpatialSound::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qspatialsound_receivers_isbase) {
            qspatialsound_receivers_isbase = false;
            return QSpatialSound::receivers(signal);
        } else if (qspatialsound_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qspatialsound_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSpatialSound::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qspatialsound_issignalconnected_isbase) {
            qspatialsound_issignalconnected_isbase = false;
            return QSpatialSound::isSignalConnected(signal);
        } else if (qspatialsound_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qspatialsound_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSpatialSound::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QSpatialSound_TimerEvent(QSpatialSound* self, QTimerEvent* event);
    friend void QSpatialSound_QBaseTimerEvent(QSpatialSound* self, QTimerEvent* event);
    friend void QSpatialSound_ChildEvent(QSpatialSound* self, QChildEvent* event);
    friend void QSpatialSound_QBaseChildEvent(QSpatialSound* self, QChildEvent* event);
    friend void QSpatialSound_CustomEvent(QSpatialSound* self, QEvent* event);
    friend void QSpatialSound_QBaseCustomEvent(QSpatialSound* self, QEvent* event);
    friend void QSpatialSound_ConnectNotify(QSpatialSound* self, const QMetaMethod* signal);
    friend void QSpatialSound_QBaseConnectNotify(QSpatialSound* self, const QMetaMethod* signal);
    friend void QSpatialSound_DisconnectNotify(QSpatialSound* self, const QMetaMethod* signal);
    friend void QSpatialSound_QBaseDisconnectNotify(QSpatialSound* self, const QMetaMethod* signal);
    friend QObject* QSpatialSound_Sender(const QSpatialSound* self);
    friend QObject* QSpatialSound_QBaseSender(const QSpatialSound* self);
    friend int QSpatialSound_SenderSignalIndex(const QSpatialSound* self);
    friend int QSpatialSound_QBaseSenderSignalIndex(const QSpatialSound* self);
    friend int QSpatialSound_Receivers(const QSpatialSound* self, const char* signal);
    friend int QSpatialSound_QBaseReceivers(const QSpatialSound* self, const char* signal);
    friend bool QSpatialSound_IsSignalConnected(const QSpatialSound* self, const QMetaMethod* signal);
    friend bool QSpatialSound_QBaseIsSignalConnected(const QSpatialSound* self, const QMetaMethod* signal);
};

#endif
