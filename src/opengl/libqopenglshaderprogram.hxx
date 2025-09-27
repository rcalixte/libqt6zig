#pragma once
#ifndef SRC_OPENGLC_LIBVIRTUALQOPENGLSHADERPROGRAM_H
#define SRC_OPENGLC_LIBVIRTUALQOPENGLSHADERPROGRAM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLShader so that we can call protected methods
class VirtualQOpenGLShader final : public QOpenGLShader {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLShader = true;

    // Virtual class public types (including callbacks)
    using QOpenGLShader_Metacall_Callback = int (*)(QOpenGLShader*, int, int, void**);
    using QOpenGLShader_Event_Callback = bool (*)(QOpenGLShader*, QEvent*);
    using QOpenGLShader_EventFilter_Callback = bool (*)(QOpenGLShader*, QObject*, QEvent*);
    using QOpenGLShader_TimerEvent_Callback = void (*)(QOpenGLShader*, QTimerEvent*);
    using QOpenGLShader_ChildEvent_Callback = void (*)(QOpenGLShader*, QChildEvent*);
    using QOpenGLShader_CustomEvent_Callback = void (*)(QOpenGLShader*, QEvent*);
    using QOpenGLShader_ConnectNotify_Callback = void (*)(QOpenGLShader*, QMetaMethod*);
    using QOpenGLShader_DisconnectNotify_Callback = void (*)(QOpenGLShader*, QMetaMethod*);
    using QOpenGLShader_Sender_Callback = QObject* (*)();
    using QOpenGLShader_SenderSignalIndex_Callback = int (*)();
    using QOpenGLShader_Receivers_Callback = int (*)(const QOpenGLShader*, const char*);
    using QOpenGLShader_IsSignalConnected_Callback = bool (*)(const QOpenGLShader*, QMetaMethod*);

  protected:
    // Instance callback storage
    QOpenGLShader_Metacall_Callback qopenglshader_metacall_callback = nullptr;
    QOpenGLShader_Event_Callback qopenglshader_event_callback = nullptr;
    QOpenGLShader_EventFilter_Callback qopenglshader_eventfilter_callback = nullptr;
    QOpenGLShader_TimerEvent_Callback qopenglshader_timerevent_callback = nullptr;
    QOpenGLShader_ChildEvent_Callback qopenglshader_childevent_callback = nullptr;
    QOpenGLShader_CustomEvent_Callback qopenglshader_customevent_callback = nullptr;
    QOpenGLShader_ConnectNotify_Callback qopenglshader_connectnotify_callback = nullptr;
    QOpenGLShader_DisconnectNotify_Callback qopenglshader_disconnectnotify_callback = nullptr;
    QOpenGLShader_Sender_Callback qopenglshader_sender_callback = nullptr;
    QOpenGLShader_SenderSignalIndex_Callback qopenglshader_sendersignalindex_callback = nullptr;
    QOpenGLShader_Receivers_Callback qopenglshader_receivers_callback = nullptr;
    QOpenGLShader_IsSignalConnected_Callback qopenglshader_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qopenglshader_metacall_isbase = false;
    mutable bool qopenglshader_event_isbase = false;
    mutable bool qopenglshader_eventfilter_isbase = false;
    mutable bool qopenglshader_timerevent_isbase = false;
    mutable bool qopenglshader_childevent_isbase = false;
    mutable bool qopenglshader_customevent_isbase = false;
    mutable bool qopenglshader_connectnotify_isbase = false;
    mutable bool qopenglshader_disconnectnotify_isbase = false;
    mutable bool qopenglshader_sender_isbase = false;
    mutable bool qopenglshader_sendersignalindex_isbase = false;
    mutable bool qopenglshader_receivers_isbase = false;
    mutable bool qopenglshader_issignalconnected_isbase = false;

  public:
    VirtualQOpenGLShader(QOpenGLShader::ShaderType typeVal) : QOpenGLShader(typeVal) {};
    VirtualQOpenGLShader(QOpenGLShader::ShaderType typeVal, QObject* parent) : QOpenGLShader(typeVal, parent) {};

    ~VirtualQOpenGLShader() {
        qopenglshader_metacall_callback = nullptr;
        qopenglshader_event_callback = nullptr;
        qopenglshader_eventfilter_callback = nullptr;
        qopenglshader_timerevent_callback = nullptr;
        qopenglshader_childevent_callback = nullptr;
        qopenglshader_customevent_callback = nullptr;
        qopenglshader_connectnotify_callback = nullptr;
        qopenglshader_disconnectnotify_callback = nullptr;
        qopenglshader_sender_callback = nullptr;
        qopenglshader_sendersignalindex_callback = nullptr;
        qopenglshader_receivers_callback = nullptr;
        qopenglshader_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQOpenGLShader_Metacall_Callback(QOpenGLShader_Metacall_Callback cb) { qopenglshader_metacall_callback = cb; }
    inline void setQOpenGLShader_Event_Callback(QOpenGLShader_Event_Callback cb) { qopenglshader_event_callback = cb; }
    inline void setQOpenGLShader_EventFilter_Callback(QOpenGLShader_EventFilter_Callback cb) { qopenglshader_eventfilter_callback = cb; }
    inline void setQOpenGLShader_TimerEvent_Callback(QOpenGLShader_TimerEvent_Callback cb) { qopenglshader_timerevent_callback = cb; }
    inline void setQOpenGLShader_ChildEvent_Callback(QOpenGLShader_ChildEvent_Callback cb) { qopenglshader_childevent_callback = cb; }
    inline void setQOpenGLShader_CustomEvent_Callback(QOpenGLShader_CustomEvent_Callback cb) { qopenglshader_customevent_callback = cb; }
    inline void setQOpenGLShader_ConnectNotify_Callback(QOpenGLShader_ConnectNotify_Callback cb) { qopenglshader_connectnotify_callback = cb; }
    inline void setQOpenGLShader_DisconnectNotify_Callback(QOpenGLShader_DisconnectNotify_Callback cb) { qopenglshader_disconnectnotify_callback = cb; }
    inline void setQOpenGLShader_Sender_Callback(QOpenGLShader_Sender_Callback cb) { qopenglshader_sender_callback = cb; }
    inline void setQOpenGLShader_SenderSignalIndex_Callback(QOpenGLShader_SenderSignalIndex_Callback cb) { qopenglshader_sendersignalindex_callback = cb; }
    inline void setQOpenGLShader_Receivers_Callback(QOpenGLShader_Receivers_Callback cb) { qopenglshader_receivers_callback = cb; }
    inline void setQOpenGLShader_IsSignalConnected_Callback(QOpenGLShader_IsSignalConnected_Callback cb) { qopenglshader_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQOpenGLShader_Metacall_IsBase(bool value) const { qopenglshader_metacall_isbase = value; }
    inline void setQOpenGLShader_Event_IsBase(bool value) const { qopenglshader_event_isbase = value; }
    inline void setQOpenGLShader_EventFilter_IsBase(bool value) const { qopenglshader_eventfilter_isbase = value; }
    inline void setQOpenGLShader_TimerEvent_IsBase(bool value) const { qopenglshader_timerevent_isbase = value; }
    inline void setQOpenGLShader_ChildEvent_IsBase(bool value) const { qopenglshader_childevent_isbase = value; }
    inline void setQOpenGLShader_CustomEvent_IsBase(bool value) const { qopenglshader_customevent_isbase = value; }
    inline void setQOpenGLShader_ConnectNotify_IsBase(bool value) const { qopenglshader_connectnotify_isbase = value; }
    inline void setQOpenGLShader_DisconnectNotify_IsBase(bool value) const { qopenglshader_disconnectnotify_isbase = value; }
    inline void setQOpenGLShader_Sender_IsBase(bool value) const { qopenglshader_sender_isbase = value; }
    inline void setQOpenGLShader_SenderSignalIndex_IsBase(bool value) const { qopenglshader_sendersignalindex_isbase = value; }
    inline void setQOpenGLShader_Receivers_IsBase(bool value) const { qopenglshader_receivers_isbase = value; }
    inline void setQOpenGLShader_IsSignalConnected_IsBase(bool value) const { qopenglshader_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopenglshader_metacall_isbase) {
            qopenglshader_metacall_isbase = false;
            return QOpenGLShader::qt_metacall(param1, param2, param3);
        } else if (qopenglshader_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qopenglshader_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLShader::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopenglshader_event_isbase) {
            qopenglshader_event_isbase = false;
            return QOpenGLShader::event(event);
        } else if (qopenglshader_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qopenglshader_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLShader::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopenglshader_eventfilter_isbase) {
            qopenglshader_eventfilter_isbase = false;
            return QOpenGLShader::eventFilter(watched, event);
        } else if (qopenglshader_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qopenglshader_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QOpenGLShader::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopenglshader_timerevent_isbase) {
            qopenglshader_timerevent_isbase = false;
            QOpenGLShader::timerEvent(event);
        } else if (qopenglshader_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qopenglshader_timerevent_callback(this, cbval1);
        } else {
            QOpenGLShader::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopenglshader_childevent_isbase) {
            qopenglshader_childevent_isbase = false;
            QOpenGLShader::childEvent(event);
        } else if (qopenglshader_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qopenglshader_childevent_callback(this, cbval1);
        } else {
            QOpenGLShader::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopenglshader_customevent_isbase) {
            qopenglshader_customevent_isbase = false;
            QOpenGLShader::customEvent(event);
        } else if (qopenglshader_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qopenglshader_customevent_callback(this, cbval1);
        } else {
            QOpenGLShader::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopenglshader_connectnotify_isbase) {
            qopenglshader_connectnotify_isbase = false;
            QOpenGLShader::connectNotify(signal);
        } else if (qopenglshader_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopenglshader_connectnotify_callback(this, cbval1);
        } else {
            QOpenGLShader::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopenglshader_disconnectnotify_isbase) {
            qopenglshader_disconnectnotify_isbase = false;
            QOpenGLShader::disconnectNotify(signal);
        } else if (qopenglshader_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopenglshader_disconnectnotify_callback(this, cbval1);
        } else {
            QOpenGLShader::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qopenglshader_sender_isbase) {
            qopenglshader_sender_isbase = false;
            return QOpenGLShader::sender();
        } else if (qopenglshader_sender_callback != nullptr) {
            QObject* callback_ret = qopenglshader_sender_callback();
            return callback_ret;
        } else {
            return QOpenGLShader::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qopenglshader_sendersignalindex_isbase) {
            qopenglshader_sendersignalindex_isbase = false;
            return QOpenGLShader::senderSignalIndex();
        } else if (qopenglshader_sendersignalindex_callback != nullptr) {
            int callback_ret = qopenglshader_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLShader::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qopenglshader_receivers_isbase) {
            qopenglshader_receivers_isbase = false;
            return QOpenGLShader::receivers(signal);
        } else if (qopenglshader_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qopenglshader_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLShader::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qopenglshader_issignalconnected_isbase) {
            qopenglshader_issignalconnected_isbase = false;
            return QOpenGLShader::isSignalConnected(signal);
        } else if (qopenglshader_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qopenglshader_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLShader::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QOpenGLShader_TimerEvent(QOpenGLShader* self, QTimerEvent* event);
    friend void QOpenGLShader_QBaseTimerEvent(QOpenGLShader* self, QTimerEvent* event);
    friend void QOpenGLShader_ChildEvent(QOpenGLShader* self, QChildEvent* event);
    friend void QOpenGLShader_QBaseChildEvent(QOpenGLShader* self, QChildEvent* event);
    friend void QOpenGLShader_CustomEvent(QOpenGLShader* self, QEvent* event);
    friend void QOpenGLShader_QBaseCustomEvent(QOpenGLShader* self, QEvent* event);
    friend void QOpenGLShader_ConnectNotify(QOpenGLShader* self, const QMetaMethod* signal);
    friend void QOpenGLShader_QBaseConnectNotify(QOpenGLShader* self, const QMetaMethod* signal);
    friend void QOpenGLShader_DisconnectNotify(QOpenGLShader* self, const QMetaMethod* signal);
    friend void QOpenGLShader_QBaseDisconnectNotify(QOpenGLShader* self, const QMetaMethod* signal);
    friend QObject* QOpenGLShader_Sender(const QOpenGLShader* self);
    friend QObject* QOpenGLShader_QBaseSender(const QOpenGLShader* self);
    friend int QOpenGLShader_SenderSignalIndex(const QOpenGLShader* self);
    friend int QOpenGLShader_QBaseSenderSignalIndex(const QOpenGLShader* self);
    friend int QOpenGLShader_Receivers(const QOpenGLShader* self, const char* signal);
    friend int QOpenGLShader_QBaseReceivers(const QOpenGLShader* self, const char* signal);
    friend bool QOpenGLShader_IsSignalConnected(const QOpenGLShader* self, const QMetaMethod* signal);
    friend bool QOpenGLShader_QBaseIsSignalConnected(const QOpenGLShader* self, const QMetaMethod* signal);
};

// This class is a subclass of QOpenGLShaderProgram so that we can call protected methods
class VirtualQOpenGLShaderProgram final : public QOpenGLShaderProgram {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLShaderProgram = true;

    // Virtual class public types (including callbacks)
    using QOpenGLShaderProgram_Metacall_Callback = int (*)(QOpenGLShaderProgram*, int, int, void**);
    using QOpenGLShaderProgram_Link_Callback = bool (*)();
    using QOpenGLShaderProgram_Event_Callback = bool (*)(QOpenGLShaderProgram*, QEvent*);
    using QOpenGLShaderProgram_EventFilter_Callback = bool (*)(QOpenGLShaderProgram*, QObject*, QEvent*);
    using QOpenGLShaderProgram_TimerEvent_Callback = void (*)(QOpenGLShaderProgram*, QTimerEvent*);
    using QOpenGLShaderProgram_ChildEvent_Callback = void (*)(QOpenGLShaderProgram*, QChildEvent*);
    using QOpenGLShaderProgram_CustomEvent_Callback = void (*)(QOpenGLShaderProgram*, QEvent*);
    using QOpenGLShaderProgram_ConnectNotify_Callback = void (*)(QOpenGLShaderProgram*, QMetaMethod*);
    using QOpenGLShaderProgram_DisconnectNotify_Callback = void (*)(QOpenGLShaderProgram*, QMetaMethod*);
    using QOpenGLShaderProgram_Sender_Callback = QObject* (*)();
    using QOpenGLShaderProgram_SenderSignalIndex_Callback = int (*)();
    using QOpenGLShaderProgram_Receivers_Callback = int (*)(const QOpenGLShaderProgram*, const char*);
    using QOpenGLShaderProgram_IsSignalConnected_Callback = bool (*)(const QOpenGLShaderProgram*, QMetaMethod*);

  protected:
    // Instance callback storage
    QOpenGLShaderProgram_Metacall_Callback qopenglshaderprogram_metacall_callback = nullptr;
    QOpenGLShaderProgram_Link_Callback qopenglshaderprogram_link_callback = nullptr;
    QOpenGLShaderProgram_Event_Callback qopenglshaderprogram_event_callback = nullptr;
    QOpenGLShaderProgram_EventFilter_Callback qopenglshaderprogram_eventfilter_callback = nullptr;
    QOpenGLShaderProgram_TimerEvent_Callback qopenglshaderprogram_timerevent_callback = nullptr;
    QOpenGLShaderProgram_ChildEvent_Callback qopenglshaderprogram_childevent_callback = nullptr;
    QOpenGLShaderProgram_CustomEvent_Callback qopenglshaderprogram_customevent_callback = nullptr;
    QOpenGLShaderProgram_ConnectNotify_Callback qopenglshaderprogram_connectnotify_callback = nullptr;
    QOpenGLShaderProgram_DisconnectNotify_Callback qopenglshaderprogram_disconnectnotify_callback = nullptr;
    QOpenGLShaderProgram_Sender_Callback qopenglshaderprogram_sender_callback = nullptr;
    QOpenGLShaderProgram_SenderSignalIndex_Callback qopenglshaderprogram_sendersignalindex_callback = nullptr;
    QOpenGLShaderProgram_Receivers_Callback qopenglshaderprogram_receivers_callback = nullptr;
    QOpenGLShaderProgram_IsSignalConnected_Callback qopenglshaderprogram_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qopenglshaderprogram_metacall_isbase = false;
    mutable bool qopenglshaderprogram_link_isbase = false;
    mutable bool qopenglshaderprogram_event_isbase = false;
    mutable bool qopenglshaderprogram_eventfilter_isbase = false;
    mutable bool qopenglshaderprogram_timerevent_isbase = false;
    mutable bool qopenglshaderprogram_childevent_isbase = false;
    mutable bool qopenglshaderprogram_customevent_isbase = false;
    mutable bool qopenglshaderprogram_connectnotify_isbase = false;
    mutable bool qopenglshaderprogram_disconnectnotify_isbase = false;
    mutable bool qopenglshaderprogram_sender_isbase = false;
    mutable bool qopenglshaderprogram_sendersignalindex_isbase = false;
    mutable bool qopenglshaderprogram_receivers_isbase = false;
    mutable bool qopenglshaderprogram_issignalconnected_isbase = false;

  public:
    VirtualQOpenGLShaderProgram() : QOpenGLShaderProgram() {};
    VirtualQOpenGLShaderProgram(QObject* parent) : QOpenGLShaderProgram(parent) {};

    ~VirtualQOpenGLShaderProgram() {
        qopenglshaderprogram_metacall_callback = nullptr;
        qopenglshaderprogram_link_callback = nullptr;
        qopenglshaderprogram_event_callback = nullptr;
        qopenglshaderprogram_eventfilter_callback = nullptr;
        qopenglshaderprogram_timerevent_callback = nullptr;
        qopenglshaderprogram_childevent_callback = nullptr;
        qopenglshaderprogram_customevent_callback = nullptr;
        qopenglshaderprogram_connectnotify_callback = nullptr;
        qopenglshaderprogram_disconnectnotify_callback = nullptr;
        qopenglshaderprogram_sender_callback = nullptr;
        qopenglshaderprogram_sendersignalindex_callback = nullptr;
        qopenglshaderprogram_receivers_callback = nullptr;
        qopenglshaderprogram_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQOpenGLShaderProgram_Metacall_Callback(QOpenGLShaderProgram_Metacall_Callback cb) { qopenglshaderprogram_metacall_callback = cb; }
    inline void setQOpenGLShaderProgram_Link_Callback(QOpenGLShaderProgram_Link_Callback cb) { qopenglshaderprogram_link_callback = cb; }
    inline void setQOpenGLShaderProgram_Event_Callback(QOpenGLShaderProgram_Event_Callback cb) { qopenglshaderprogram_event_callback = cb; }
    inline void setQOpenGLShaderProgram_EventFilter_Callback(QOpenGLShaderProgram_EventFilter_Callback cb) { qopenglshaderprogram_eventfilter_callback = cb; }
    inline void setQOpenGLShaderProgram_TimerEvent_Callback(QOpenGLShaderProgram_TimerEvent_Callback cb) { qopenglshaderprogram_timerevent_callback = cb; }
    inline void setQOpenGLShaderProgram_ChildEvent_Callback(QOpenGLShaderProgram_ChildEvent_Callback cb) { qopenglshaderprogram_childevent_callback = cb; }
    inline void setQOpenGLShaderProgram_CustomEvent_Callback(QOpenGLShaderProgram_CustomEvent_Callback cb) { qopenglshaderprogram_customevent_callback = cb; }
    inline void setQOpenGLShaderProgram_ConnectNotify_Callback(QOpenGLShaderProgram_ConnectNotify_Callback cb) { qopenglshaderprogram_connectnotify_callback = cb; }
    inline void setQOpenGLShaderProgram_DisconnectNotify_Callback(QOpenGLShaderProgram_DisconnectNotify_Callback cb) { qopenglshaderprogram_disconnectnotify_callback = cb; }
    inline void setQOpenGLShaderProgram_Sender_Callback(QOpenGLShaderProgram_Sender_Callback cb) { qopenglshaderprogram_sender_callback = cb; }
    inline void setQOpenGLShaderProgram_SenderSignalIndex_Callback(QOpenGLShaderProgram_SenderSignalIndex_Callback cb) { qopenglshaderprogram_sendersignalindex_callback = cb; }
    inline void setQOpenGLShaderProgram_Receivers_Callback(QOpenGLShaderProgram_Receivers_Callback cb) { qopenglshaderprogram_receivers_callback = cb; }
    inline void setQOpenGLShaderProgram_IsSignalConnected_Callback(QOpenGLShaderProgram_IsSignalConnected_Callback cb) { qopenglshaderprogram_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQOpenGLShaderProgram_Metacall_IsBase(bool value) const { qopenglshaderprogram_metacall_isbase = value; }
    inline void setQOpenGLShaderProgram_Link_IsBase(bool value) const { qopenglshaderprogram_link_isbase = value; }
    inline void setQOpenGLShaderProgram_Event_IsBase(bool value) const { qopenglshaderprogram_event_isbase = value; }
    inline void setQOpenGLShaderProgram_EventFilter_IsBase(bool value) const { qopenglshaderprogram_eventfilter_isbase = value; }
    inline void setQOpenGLShaderProgram_TimerEvent_IsBase(bool value) const { qopenglshaderprogram_timerevent_isbase = value; }
    inline void setQOpenGLShaderProgram_ChildEvent_IsBase(bool value) const { qopenglshaderprogram_childevent_isbase = value; }
    inline void setQOpenGLShaderProgram_CustomEvent_IsBase(bool value) const { qopenglshaderprogram_customevent_isbase = value; }
    inline void setQOpenGLShaderProgram_ConnectNotify_IsBase(bool value) const { qopenglshaderprogram_connectnotify_isbase = value; }
    inline void setQOpenGLShaderProgram_DisconnectNotify_IsBase(bool value) const { qopenglshaderprogram_disconnectnotify_isbase = value; }
    inline void setQOpenGLShaderProgram_Sender_IsBase(bool value) const { qopenglshaderprogram_sender_isbase = value; }
    inline void setQOpenGLShaderProgram_SenderSignalIndex_IsBase(bool value) const { qopenglshaderprogram_sendersignalindex_isbase = value; }
    inline void setQOpenGLShaderProgram_Receivers_IsBase(bool value) const { qopenglshaderprogram_receivers_isbase = value; }
    inline void setQOpenGLShaderProgram_IsSignalConnected_IsBase(bool value) const { qopenglshaderprogram_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopenglshaderprogram_metacall_isbase) {
            qopenglshaderprogram_metacall_isbase = false;
            return QOpenGLShaderProgram::qt_metacall(param1, param2, param3);
        } else if (qopenglshaderprogram_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qopenglshaderprogram_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLShaderProgram::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool link() override {
        if (qopenglshaderprogram_link_isbase) {
            qopenglshaderprogram_link_isbase = false;
            return QOpenGLShaderProgram::link();
        } else if (qopenglshaderprogram_link_callback != nullptr) {
            bool callback_ret = qopenglshaderprogram_link_callback();
            return callback_ret;
        } else {
            return QOpenGLShaderProgram::link();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopenglshaderprogram_event_isbase) {
            qopenglshaderprogram_event_isbase = false;
            return QOpenGLShaderProgram::event(event);
        } else if (qopenglshaderprogram_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qopenglshaderprogram_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLShaderProgram::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopenglshaderprogram_eventfilter_isbase) {
            qopenglshaderprogram_eventfilter_isbase = false;
            return QOpenGLShaderProgram::eventFilter(watched, event);
        } else if (qopenglshaderprogram_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qopenglshaderprogram_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QOpenGLShaderProgram::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopenglshaderprogram_timerevent_isbase) {
            qopenglshaderprogram_timerevent_isbase = false;
            QOpenGLShaderProgram::timerEvent(event);
        } else if (qopenglshaderprogram_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qopenglshaderprogram_timerevent_callback(this, cbval1);
        } else {
            QOpenGLShaderProgram::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopenglshaderprogram_childevent_isbase) {
            qopenglshaderprogram_childevent_isbase = false;
            QOpenGLShaderProgram::childEvent(event);
        } else if (qopenglshaderprogram_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qopenglshaderprogram_childevent_callback(this, cbval1);
        } else {
            QOpenGLShaderProgram::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopenglshaderprogram_customevent_isbase) {
            qopenglshaderprogram_customevent_isbase = false;
            QOpenGLShaderProgram::customEvent(event);
        } else if (qopenglshaderprogram_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qopenglshaderprogram_customevent_callback(this, cbval1);
        } else {
            QOpenGLShaderProgram::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopenglshaderprogram_connectnotify_isbase) {
            qopenglshaderprogram_connectnotify_isbase = false;
            QOpenGLShaderProgram::connectNotify(signal);
        } else if (qopenglshaderprogram_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopenglshaderprogram_connectnotify_callback(this, cbval1);
        } else {
            QOpenGLShaderProgram::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopenglshaderprogram_disconnectnotify_isbase) {
            qopenglshaderprogram_disconnectnotify_isbase = false;
            QOpenGLShaderProgram::disconnectNotify(signal);
        } else if (qopenglshaderprogram_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopenglshaderprogram_disconnectnotify_callback(this, cbval1);
        } else {
            QOpenGLShaderProgram::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qopenglshaderprogram_sender_isbase) {
            qopenglshaderprogram_sender_isbase = false;
            return QOpenGLShaderProgram::sender();
        } else if (qopenglshaderprogram_sender_callback != nullptr) {
            QObject* callback_ret = qopenglshaderprogram_sender_callback();
            return callback_ret;
        } else {
            return QOpenGLShaderProgram::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qopenglshaderprogram_sendersignalindex_isbase) {
            qopenglshaderprogram_sendersignalindex_isbase = false;
            return QOpenGLShaderProgram::senderSignalIndex();
        } else if (qopenglshaderprogram_sendersignalindex_callback != nullptr) {
            int callback_ret = qopenglshaderprogram_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLShaderProgram::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qopenglshaderprogram_receivers_isbase) {
            qopenglshaderprogram_receivers_isbase = false;
            return QOpenGLShaderProgram::receivers(signal);
        } else if (qopenglshaderprogram_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qopenglshaderprogram_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLShaderProgram::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qopenglshaderprogram_issignalconnected_isbase) {
            qopenglshaderprogram_issignalconnected_isbase = false;
            return QOpenGLShaderProgram::isSignalConnected(signal);
        } else if (qopenglshaderprogram_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qopenglshaderprogram_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLShaderProgram::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QOpenGLShaderProgram_TimerEvent(QOpenGLShaderProgram* self, QTimerEvent* event);
    friend void QOpenGLShaderProgram_QBaseTimerEvent(QOpenGLShaderProgram* self, QTimerEvent* event);
    friend void QOpenGLShaderProgram_ChildEvent(QOpenGLShaderProgram* self, QChildEvent* event);
    friend void QOpenGLShaderProgram_QBaseChildEvent(QOpenGLShaderProgram* self, QChildEvent* event);
    friend void QOpenGLShaderProgram_CustomEvent(QOpenGLShaderProgram* self, QEvent* event);
    friend void QOpenGLShaderProgram_QBaseCustomEvent(QOpenGLShaderProgram* self, QEvent* event);
    friend void QOpenGLShaderProgram_ConnectNotify(QOpenGLShaderProgram* self, const QMetaMethod* signal);
    friend void QOpenGLShaderProgram_QBaseConnectNotify(QOpenGLShaderProgram* self, const QMetaMethod* signal);
    friend void QOpenGLShaderProgram_DisconnectNotify(QOpenGLShaderProgram* self, const QMetaMethod* signal);
    friend void QOpenGLShaderProgram_QBaseDisconnectNotify(QOpenGLShaderProgram* self, const QMetaMethod* signal);
    friend QObject* QOpenGLShaderProgram_Sender(const QOpenGLShaderProgram* self);
    friend QObject* QOpenGLShaderProgram_QBaseSender(const QOpenGLShaderProgram* self);
    friend int QOpenGLShaderProgram_SenderSignalIndex(const QOpenGLShaderProgram* self);
    friend int QOpenGLShaderProgram_QBaseSenderSignalIndex(const QOpenGLShaderProgram* self);
    friend int QOpenGLShaderProgram_Receivers(const QOpenGLShaderProgram* self, const char* signal);
    friend int QOpenGLShaderProgram_QBaseReceivers(const QOpenGLShaderProgram* self, const char* signal);
    friend bool QOpenGLShaderProgram_IsSignalConnected(const QOpenGLShaderProgram* self, const QMetaMethod* signal);
    friend bool QOpenGLShaderProgram_QBaseIsSignalConnected(const QOpenGLShaderProgram* self, const QMetaMethod* signal);
};

#endif
