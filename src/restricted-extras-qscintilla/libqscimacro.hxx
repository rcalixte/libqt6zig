#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIMACRO_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIMACRO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciMacro so that we can call protected methods
class VirtualQsciMacro final : public QsciMacro {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciMacro = true;

    // Virtual class public types (including callbacks)
    using QsciMacro_Metacall_Callback = int (*)(QsciMacro*, int, int, void**);
    using QsciMacro_Play_Callback = void (*)();
    using QsciMacro_StartRecording_Callback = void (*)();
    using QsciMacro_EndRecording_Callback = void (*)();
    using QsciMacro_Event_Callback = bool (*)(QsciMacro*, QEvent*);
    using QsciMacro_EventFilter_Callback = bool (*)(QsciMacro*, QObject*, QEvent*);
    using QsciMacro_TimerEvent_Callback = void (*)(QsciMacro*, QTimerEvent*);
    using QsciMacro_ChildEvent_Callback = void (*)(QsciMacro*, QChildEvent*);
    using QsciMacro_CustomEvent_Callback = void (*)(QsciMacro*, QEvent*);
    using QsciMacro_ConnectNotify_Callback = void (*)(QsciMacro*, QMetaMethod*);
    using QsciMacro_DisconnectNotify_Callback = void (*)(QsciMacro*, QMetaMethod*);
    using QsciMacro_Sender_Callback = QObject* (*)();
    using QsciMacro_SenderSignalIndex_Callback = int (*)();
    using QsciMacro_Receivers_Callback = int (*)(const QsciMacro*, const char*);
    using QsciMacro_IsSignalConnected_Callback = bool (*)(const QsciMacro*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciMacro_Metacall_Callback qscimacro_metacall_callback = nullptr;
    QsciMacro_Play_Callback qscimacro_play_callback = nullptr;
    QsciMacro_StartRecording_Callback qscimacro_startrecording_callback = nullptr;
    QsciMacro_EndRecording_Callback qscimacro_endrecording_callback = nullptr;
    QsciMacro_Event_Callback qscimacro_event_callback = nullptr;
    QsciMacro_EventFilter_Callback qscimacro_eventfilter_callback = nullptr;
    QsciMacro_TimerEvent_Callback qscimacro_timerevent_callback = nullptr;
    QsciMacro_ChildEvent_Callback qscimacro_childevent_callback = nullptr;
    QsciMacro_CustomEvent_Callback qscimacro_customevent_callback = nullptr;
    QsciMacro_ConnectNotify_Callback qscimacro_connectnotify_callback = nullptr;
    QsciMacro_DisconnectNotify_Callback qscimacro_disconnectnotify_callback = nullptr;
    QsciMacro_Sender_Callback qscimacro_sender_callback = nullptr;
    QsciMacro_SenderSignalIndex_Callback qscimacro_sendersignalindex_callback = nullptr;
    QsciMacro_Receivers_Callback qscimacro_receivers_callback = nullptr;
    QsciMacro_IsSignalConnected_Callback qscimacro_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscimacro_metacall_isbase = false;
    mutable bool qscimacro_play_isbase = false;
    mutable bool qscimacro_startrecording_isbase = false;
    mutable bool qscimacro_endrecording_isbase = false;
    mutable bool qscimacro_event_isbase = false;
    mutable bool qscimacro_eventfilter_isbase = false;
    mutable bool qscimacro_timerevent_isbase = false;
    mutable bool qscimacro_childevent_isbase = false;
    mutable bool qscimacro_customevent_isbase = false;
    mutable bool qscimacro_connectnotify_isbase = false;
    mutable bool qscimacro_disconnectnotify_isbase = false;
    mutable bool qscimacro_sender_isbase = false;
    mutable bool qscimacro_sendersignalindex_isbase = false;
    mutable bool qscimacro_receivers_isbase = false;
    mutable bool qscimacro_issignalconnected_isbase = false;

  public:
    VirtualQsciMacro(QsciScintilla* parent) : QsciMacro(parent) {};
    VirtualQsciMacro(const QString& asc, QsciScintilla* parent) : QsciMacro(asc, parent) {};

    ~VirtualQsciMacro() {
        qscimacro_metacall_callback = nullptr;
        qscimacro_play_callback = nullptr;
        qscimacro_startrecording_callback = nullptr;
        qscimacro_endrecording_callback = nullptr;
        qscimacro_event_callback = nullptr;
        qscimacro_eventfilter_callback = nullptr;
        qscimacro_timerevent_callback = nullptr;
        qscimacro_childevent_callback = nullptr;
        qscimacro_customevent_callback = nullptr;
        qscimacro_connectnotify_callback = nullptr;
        qscimacro_disconnectnotify_callback = nullptr;
        qscimacro_sender_callback = nullptr;
        qscimacro_sendersignalindex_callback = nullptr;
        qscimacro_receivers_callback = nullptr;
        qscimacro_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciMacro_Metacall_Callback(QsciMacro_Metacall_Callback cb) { qscimacro_metacall_callback = cb; }
    inline void setQsciMacro_Play_Callback(QsciMacro_Play_Callback cb) { qscimacro_play_callback = cb; }
    inline void setQsciMacro_StartRecording_Callback(QsciMacro_StartRecording_Callback cb) { qscimacro_startrecording_callback = cb; }
    inline void setQsciMacro_EndRecording_Callback(QsciMacro_EndRecording_Callback cb) { qscimacro_endrecording_callback = cb; }
    inline void setQsciMacro_Event_Callback(QsciMacro_Event_Callback cb) { qscimacro_event_callback = cb; }
    inline void setQsciMacro_EventFilter_Callback(QsciMacro_EventFilter_Callback cb) { qscimacro_eventfilter_callback = cb; }
    inline void setQsciMacro_TimerEvent_Callback(QsciMacro_TimerEvent_Callback cb) { qscimacro_timerevent_callback = cb; }
    inline void setQsciMacro_ChildEvent_Callback(QsciMacro_ChildEvent_Callback cb) { qscimacro_childevent_callback = cb; }
    inline void setQsciMacro_CustomEvent_Callback(QsciMacro_CustomEvent_Callback cb) { qscimacro_customevent_callback = cb; }
    inline void setQsciMacro_ConnectNotify_Callback(QsciMacro_ConnectNotify_Callback cb) { qscimacro_connectnotify_callback = cb; }
    inline void setQsciMacro_DisconnectNotify_Callback(QsciMacro_DisconnectNotify_Callback cb) { qscimacro_disconnectnotify_callback = cb; }
    inline void setQsciMacro_Sender_Callback(QsciMacro_Sender_Callback cb) { qscimacro_sender_callback = cb; }
    inline void setQsciMacro_SenderSignalIndex_Callback(QsciMacro_SenderSignalIndex_Callback cb) { qscimacro_sendersignalindex_callback = cb; }
    inline void setQsciMacro_Receivers_Callback(QsciMacro_Receivers_Callback cb) { qscimacro_receivers_callback = cb; }
    inline void setQsciMacro_IsSignalConnected_Callback(QsciMacro_IsSignalConnected_Callback cb) { qscimacro_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciMacro_Metacall_IsBase(bool value) const { qscimacro_metacall_isbase = value; }
    inline void setQsciMacro_Play_IsBase(bool value) const { qscimacro_play_isbase = value; }
    inline void setQsciMacro_StartRecording_IsBase(bool value) const { qscimacro_startrecording_isbase = value; }
    inline void setQsciMacro_EndRecording_IsBase(bool value) const { qscimacro_endrecording_isbase = value; }
    inline void setQsciMacro_Event_IsBase(bool value) const { qscimacro_event_isbase = value; }
    inline void setQsciMacro_EventFilter_IsBase(bool value) const { qscimacro_eventfilter_isbase = value; }
    inline void setQsciMacro_TimerEvent_IsBase(bool value) const { qscimacro_timerevent_isbase = value; }
    inline void setQsciMacro_ChildEvent_IsBase(bool value) const { qscimacro_childevent_isbase = value; }
    inline void setQsciMacro_CustomEvent_IsBase(bool value) const { qscimacro_customevent_isbase = value; }
    inline void setQsciMacro_ConnectNotify_IsBase(bool value) const { qscimacro_connectnotify_isbase = value; }
    inline void setQsciMacro_DisconnectNotify_IsBase(bool value) const { qscimacro_disconnectnotify_isbase = value; }
    inline void setQsciMacro_Sender_IsBase(bool value) const { qscimacro_sender_isbase = value; }
    inline void setQsciMacro_SenderSignalIndex_IsBase(bool value) const { qscimacro_sendersignalindex_isbase = value; }
    inline void setQsciMacro_Receivers_IsBase(bool value) const { qscimacro_receivers_isbase = value; }
    inline void setQsciMacro_IsSignalConnected_IsBase(bool value) const { qscimacro_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscimacro_metacall_isbase) {
            qscimacro_metacall_isbase = false;
            return QsciMacro::qt_metacall(param1, param2, param3);
        } else if (qscimacro_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscimacro_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciMacro::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void play() override {
        if (qscimacro_play_isbase) {
            qscimacro_play_isbase = false;
            QsciMacro::play();
        } else if (qscimacro_play_callback != nullptr) {
            qscimacro_play_callback();
        } else {
            QsciMacro::play();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startRecording() override {
        if (qscimacro_startrecording_isbase) {
            qscimacro_startrecording_isbase = false;
            QsciMacro::startRecording();
        } else if (qscimacro_startrecording_callback != nullptr) {
            qscimacro_startrecording_callback();
        } else {
            QsciMacro::startRecording();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void endRecording() override {
        if (qscimacro_endrecording_isbase) {
            qscimacro_endrecording_isbase = false;
            QsciMacro::endRecording();
        } else if (qscimacro_endrecording_callback != nullptr) {
            qscimacro_endrecording_callback();
        } else {
            QsciMacro::endRecording();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscimacro_event_isbase) {
            qscimacro_event_isbase = false;
            return QsciMacro::event(event);
        } else if (qscimacro_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscimacro_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciMacro::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscimacro_eventfilter_isbase) {
            qscimacro_eventfilter_isbase = false;
            return QsciMacro::eventFilter(watched, event);
        } else if (qscimacro_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscimacro_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciMacro::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscimacro_timerevent_isbase) {
            qscimacro_timerevent_isbase = false;
            QsciMacro::timerEvent(event);
        } else if (qscimacro_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscimacro_timerevent_callback(this, cbval1);
        } else {
            QsciMacro::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscimacro_childevent_isbase) {
            qscimacro_childevent_isbase = false;
            QsciMacro::childEvent(event);
        } else if (qscimacro_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscimacro_childevent_callback(this, cbval1);
        } else {
            QsciMacro::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscimacro_customevent_isbase) {
            qscimacro_customevent_isbase = false;
            QsciMacro::customEvent(event);
        } else if (qscimacro_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscimacro_customevent_callback(this, cbval1);
        } else {
            QsciMacro::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscimacro_connectnotify_isbase) {
            qscimacro_connectnotify_isbase = false;
            QsciMacro::connectNotify(signal);
        } else if (qscimacro_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscimacro_connectnotify_callback(this, cbval1);
        } else {
            QsciMacro::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscimacro_disconnectnotify_isbase) {
            qscimacro_disconnectnotify_isbase = false;
            QsciMacro::disconnectNotify(signal);
        } else if (qscimacro_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscimacro_disconnectnotify_callback(this, cbval1);
        } else {
            QsciMacro::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscimacro_sender_isbase) {
            qscimacro_sender_isbase = false;
            return QsciMacro::sender();
        } else if (qscimacro_sender_callback != nullptr) {
            QObject* callback_ret = qscimacro_sender_callback();
            return callback_ret;
        } else {
            return QsciMacro::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscimacro_sendersignalindex_isbase) {
            qscimacro_sendersignalindex_isbase = false;
            return QsciMacro::senderSignalIndex();
        } else if (qscimacro_sendersignalindex_callback != nullptr) {
            int callback_ret = qscimacro_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciMacro::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscimacro_receivers_isbase) {
            qscimacro_receivers_isbase = false;
            return QsciMacro::receivers(signal);
        } else if (qscimacro_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscimacro_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciMacro::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscimacro_issignalconnected_isbase) {
            qscimacro_issignalconnected_isbase = false;
            return QsciMacro::isSignalConnected(signal);
        } else if (qscimacro_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscimacro_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciMacro::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QsciMacro_TimerEvent(QsciMacro* self, QTimerEvent* event);
    friend void QsciMacro_QBaseTimerEvent(QsciMacro* self, QTimerEvent* event);
    friend void QsciMacro_ChildEvent(QsciMacro* self, QChildEvent* event);
    friend void QsciMacro_QBaseChildEvent(QsciMacro* self, QChildEvent* event);
    friend void QsciMacro_CustomEvent(QsciMacro* self, QEvent* event);
    friend void QsciMacro_QBaseCustomEvent(QsciMacro* self, QEvent* event);
    friend void QsciMacro_ConnectNotify(QsciMacro* self, const QMetaMethod* signal);
    friend void QsciMacro_QBaseConnectNotify(QsciMacro* self, const QMetaMethod* signal);
    friend void QsciMacro_DisconnectNotify(QsciMacro* self, const QMetaMethod* signal);
    friend void QsciMacro_QBaseDisconnectNotify(QsciMacro* self, const QMetaMethod* signal);
    friend QObject* QsciMacro_Sender(const QsciMacro* self);
    friend QObject* QsciMacro_QBaseSender(const QsciMacro* self);
    friend int QsciMacro_SenderSignalIndex(const QsciMacro* self);
    friend int QsciMacro_QBaseSenderSignalIndex(const QsciMacro* self);
    friend int QsciMacro_Receivers(const QsciMacro* self, const char* signal);
    friend int QsciMacro_QBaseReceivers(const QsciMacro* self, const char* signal);
    friend bool QsciMacro_IsSignalConnected(const QsciMacro* self, const QMetaMethod* signal);
    friend bool QsciMacro_QBaseIsSignalConnected(const QsciMacro* self, const QMetaMethod* signal);
};

#endif
