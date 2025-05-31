#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQSOUNDEFFECT_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQSOUNDEFFECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSoundEffect so that we can call protected methods
class VirtualQSoundEffect final : public QSoundEffect {

  public:
    // Virtual class boolean flag
    bool isVirtualQSoundEffect = true;

    // Virtual class public types (including callbacks)
    using QSoundEffect_Metacall_Callback = int (*)(QSoundEffect*, int, int, void**);
    using QSoundEffect_Event_Callback = bool (*)(QSoundEffect*, QEvent*);
    using QSoundEffect_EventFilter_Callback = bool (*)(QSoundEffect*, QObject*, QEvent*);
    using QSoundEffect_TimerEvent_Callback = void (*)(QSoundEffect*, QTimerEvent*);
    using QSoundEffect_ChildEvent_Callback = void (*)(QSoundEffect*, QChildEvent*);
    using QSoundEffect_CustomEvent_Callback = void (*)(QSoundEffect*, QEvent*);
    using QSoundEffect_ConnectNotify_Callback = void (*)(QSoundEffect*, QMetaMethod*);
    using QSoundEffect_DisconnectNotify_Callback = void (*)(QSoundEffect*, QMetaMethod*);
    using QSoundEffect_Sender_Callback = QObject* (*)();
    using QSoundEffect_SenderSignalIndex_Callback = int (*)();
    using QSoundEffect_Receivers_Callback = int (*)(const QSoundEffect*, const char*);
    using QSoundEffect_IsSignalConnected_Callback = bool (*)(const QSoundEffect*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSoundEffect_Metacall_Callback qsoundeffect_metacall_callback = nullptr;
    QSoundEffect_Event_Callback qsoundeffect_event_callback = nullptr;
    QSoundEffect_EventFilter_Callback qsoundeffect_eventfilter_callback = nullptr;
    QSoundEffect_TimerEvent_Callback qsoundeffect_timerevent_callback = nullptr;
    QSoundEffect_ChildEvent_Callback qsoundeffect_childevent_callback = nullptr;
    QSoundEffect_CustomEvent_Callback qsoundeffect_customevent_callback = nullptr;
    QSoundEffect_ConnectNotify_Callback qsoundeffect_connectnotify_callback = nullptr;
    QSoundEffect_DisconnectNotify_Callback qsoundeffect_disconnectnotify_callback = nullptr;
    QSoundEffect_Sender_Callback qsoundeffect_sender_callback = nullptr;
    QSoundEffect_SenderSignalIndex_Callback qsoundeffect_sendersignalindex_callback = nullptr;
    QSoundEffect_Receivers_Callback qsoundeffect_receivers_callback = nullptr;
    QSoundEffect_IsSignalConnected_Callback qsoundeffect_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsoundeffect_metacall_isbase = false;
    mutable bool qsoundeffect_event_isbase = false;
    mutable bool qsoundeffect_eventfilter_isbase = false;
    mutable bool qsoundeffect_timerevent_isbase = false;
    mutable bool qsoundeffect_childevent_isbase = false;
    mutable bool qsoundeffect_customevent_isbase = false;
    mutable bool qsoundeffect_connectnotify_isbase = false;
    mutable bool qsoundeffect_disconnectnotify_isbase = false;
    mutable bool qsoundeffect_sender_isbase = false;
    mutable bool qsoundeffect_sendersignalindex_isbase = false;
    mutable bool qsoundeffect_receivers_isbase = false;
    mutable bool qsoundeffect_issignalconnected_isbase = false;

  public:
    VirtualQSoundEffect() : QSoundEffect(){};
    VirtualQSoundEffect(const QAudioDevice& audioDevice) : QSoundEffect(audioDevice){};
    VirtualQSoundEffect(QObject* parent) : QSoundEffect(parent){};
    VirtualQSoundEffect(const QAudioDevice& audioDevice, QObject* parent) : QSoundEffect(audioDevice, parent){};

    ~VirtualQSoundEffect() {
        qsoundeffect_metacall_callback = nullptr;
        qsoundeffect_event_callback = nullptr;
        qsoundeffect_eventfilter_callback = nullptr;
        qsoundeffect_timerevent_callback = nullptr;
        qsoundeffect_childevent_callback = nullptr;
        qsoundeffect_customevent_callback = nullptr;
        qsoundeffect_connectnotify_callback = nullptr;
        qsoundeffect_disconnectnotify_callback = nullptr;
        qsoundeffect_sender_callback = nullptr;
        qsoundeffect_sendersignalindex_callback = nullptr;
        qsoundeffect_receivers_callback = nullptr;
        qsoundeffect_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSoundEffect_Metacall_Callback(QSoundEffect_Metacall_Callback cb) { qsoundeffect_metacall_callback = cb; }
    inline void setQSoundEffect_Event_Callback(QSoundEffect_Event_Callback cb) { qsoundeffect_event_callback = cb; }
    inline void setQSoundEffect_EventFilter_Callback(QSoundEffect_EventFilter_Callback cb) { qsoundeffect_eventfilter_callback = cb; }
    inline void setQSoundEffect_TimerEvent_Callback(QSoundEffect_TimerEvent_Callback cb) { qsoundeffect_timerevent_callback = cb; }
    inline void setQSoundEffect_ChildEvent_Callback(QSoundEffect_ChildEvent_Callback cb) { qsoundeffect_childevent_callback = cb; }
    inline void setQSoundEffect_CustomEvent_Callback(QSoundEffect_CustomEvent_Callback cb) { qsoundeffect_customevent_callback = cb; }
    inline void setQSoundEffect_ConnectNotify_Callback(QSoundEffect_ConnectNotify_Callback cb) { qsoundeffect_connectnotify_callback = cb; }
    inline void setQSoundEffect_DisconnectNotify_Callback(QSoundEffect_DisconnectNotify_Callback cb) { qsoundeffect_disconnectnotify_callback = cb; }
    inline void setQSoundEffect_Sender_Callback(QSoundEffect_Sender_Callback cb) { qsoundeffect_sender_callback = cb; }
    inline void setQSoundEffect_SenderSignalIndex_Callback(QSoundEffect_SenderSignalIndex_Callback cb) { qsoundeffect_sendersignalindex_callback = cb; }
    inline void setQSoundEffect_Receivers_Callback(QSoundEffect_Receivers_Callback cb) { qsoundeffect_receivers_callback = cb; }
    inline void setQSoundEffect_IsSignalConnected_Callback(QSoundEffect_IsSignalConnected_Callback cb) { qsoundeffect_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSoundEffect_Metacall_IsBase(bool value) const { qsoundeffect_metacall_isbase = value; }
    inline void setQSoundEffect_Event_IsBase(bool value) const { qsoundeffect_event_isbase = value; }
    inline void setQSoundEffect_EventFilter_IsBase(bool value) const { qsoundeffect_eventfilter_isbase = value; }
    inline void setQSoundEffect_TimerEvent_IsBase(bool value) const { qsoundeffect_timerevent_isbase = value; }
    inline void setQSoundEffect_ChildEvent_IsBase(bool value) const { qsoundeffect_childevent_isbase = value; }
    inline void setQSoundEffect_CustomEvent_IsBase(bool value) const { qsoundeffect_customevent_isbase = value; }
    inline void setQSoundEffect_ConnectNotify_IsBase(bool value) const { qsoundeffect_connectnotify_isbase = value; }
    inline void setQSoundEffect_DisconnectNotify_IsBase(bool value) const { qsoundeffect_disconnectnotify_isbase = value; }
    inline void setQSoundEffect_Sender_IsBase(bool value) const { qsoundeffect_sender_isbase = value; }
    inline void setQSoundEffect_SenderSignalIndex_IsBase(bool value) const { qsoundeffect_sendersignalindex_isbase = value; }
    inline void setQSoundEffect_Receivers_IsBase(bool value) const { qsoundeffect_receivers_isbase = value; }
    inline void setQSoundEffect_IsSignalConnected_IsBase(bool value) const { qsoundeffect_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsoundeffect_metacall_isbase) {
            qsoundeffect_metacall_isbase = false;
            return QSoundEffect::qt_metacall(param1, param2, param3);
        } else if (qsoundeffect_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsoundeffect_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSoundEffect::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsoundeffect_event_isbase) {
            qsoundeffect_event_isbase = false;
            return QSoundEffect::event(event);
        } else if (qsoundeffect_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsoundeffect_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSoundEffect::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsoundeffect_eventfilter_isbase) {
            qsoundeffect_eventfilter_isbase = false;
            return QSoundEffect::eventFilter(watched, event);
        } else if (qsoundeffect_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsoundeffect_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSoundEffect::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsoundeffect_timerevent_isbase) {
            qsoundeffect_timerevent_isbase = false;
            QSoundEffect::timerEvent(event);
        } else if (qsoundeffect_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsoundeffect_timerevent_callback(this, cbval1);
        } else {
            QSoundEffect::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsoundeffect_childevent_isbase) {
            qsoundeffect_childevent_isbase = false;
            QSoundEffect::childEvent(event);
        } else if (qsoundeffect_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsoundeffect_childevent_callback(this, cbval1);
        } else {
            QSoundEffect::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsoundeffect_customevent_isbase) {
            qsoundeffect_customevent_isbase = false;
            QSoundEffect::customEvent(event);
        } else if (qsoundeffect_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsoundeffect_customevent_callback(this, cbval1);
        } else {
            QSoundEffect::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsoundeffect_connectnotify_isbase) {
            qsoundeffect_connectnotify_isbase = false;
            QSoundEffect::connectNotify(signal);
        } else if (qsoundeffect_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsoundeffect_connectnotify_callback(this, cbval1);
        } else {
            QSoundEffect::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsoundeffect_disconnectnotify_isbase) {
            qsoundeffect_disconnectnotify_isbase = false;
            QSoundEffect::disconnectNotify(signal);
        } else if (qsoundeffect_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsoundeffect_disconnectnotify_callback(this, cbval1);
        } else {
            QSoundEffect::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsoundeffect_sender_isbase) {
            qsoundeffect_sender_isbase = false;
            return QSoundEffect::sender();
        } else if (qsoundeffect_sender_callback != nullptr) {
            QObject* callback_ret = qsoundeffect_sender_callback();
            return callback_ret;
        } else {
            return QSoundEffect::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsoundeffect_sendersignalindex_isbase) {
            qsoundeffect_sendersignalindex_isbase = false;
            return QSoundEffect::senderSignalIndex();
        } else if (qsoundeffect_sendersignalindex_callback != nullptr) {
            int callback_ret = qsoundeffect_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSoundEffect::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsoundeffect_receivers_isbase) {
            qsoundeffect_receivers_isbase = false;
            return QSoundEffect::receivers(signal);
        } else if (qsoundeffect_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsoundeffect_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSoundEffect::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsoundeffect_issignalconnected_isbase) {
            qsoundeffect_issignalconnected_isbase = false;
            return QSoundEffect::isSignalConnected(signal);
        } else if (qsoundeffect_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsoundeffect_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSoundEffect::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QSoundEffect_TimerEvent(QSoundEffect* self, QTimerEvent* event);
    friend void QSoundEffect_QBaseTimerEvent(QSoundEffect* self, QTimerEvent* event);
    friend void QSoundEffect_ChildEvent(QSoundEffect* self, QChildEvent* event);
    friend void QSoundEffect_QBaseChildEvent(QSoundEffect* self, QChildEvent* event);
    friend void QSoundEffect_CustomEvent(QSoundEffect* self, QEvent* event);
    friend void QSoundEffect_QBaseCustomEvent(QSoundEffect* self, QEvent* event);
    friend void QSoundEffect_ConnectNotify(QSoundEffect* self, const QMetaMethod* signal);
    friend void QSoundEffect_QBaseConnectNotify(QSoundEffect* self, const QMetaMethod* signal);
    friend void QSoundEffect_DisconnectNotify(QSoundEffect* self, const QMetaMethod* signal);
    friend void QSoundEffect_QBaseDisconnectNotify(QSoundEffect* self, const QMetaMethod* signal);
    friend QObject* QSoundEffect_Sender(const QSoundEffect* self);
    friend QObject* QSoundEffect_QBaseSender(const QSoundEffect* self);
    friend int QSoundEffect_SenderSignalIndex(const QSoundEffect* self);
    friend int QSoundEffect_QBaseSenderSignalIndex(const QSoundEffect* self);
    friend int QSoundEffect_Receivers(const QSoundEffect* self, const char* signal);
    friend int QSoundEffect_QBaseReceivers(const QSoundEffect* self, const char* signal);
    friend bool QSoundEffect_IsSignalConnected(const QSoundEffect* self, const QMetaMethod* signal);
    friend bool QSoundEffect_QBaseIsSignalConnected(const QSoundEffect* self, const QMetaMethod* signal);
};

#endif
