#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIMACRO_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIMACRO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciMacro so that we can call protected methods
class VirtualQsciMacro final : public QsciMacro {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciMacro = true;

    // Virtual class public types (including callbacks)
    using QsciMacro_MetaObject_Callback = QMetaObject* (*)();
    using QsciMacro_Metacast_Callback = void* (*)(QsciMacro*, const char*);
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
    QsciMacro_MetaObject_Callback qscimacro_metaobject_callback = nullptr;
    QsciMacro_Metacast_Callback qscimacro_metacast_callback = nullptr;
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
    mutable bool qscimacro_metaobject_isbase = false;
    mutable bool qscimacro_metacast_isbase = false;
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

    // Callback setters
    inline void setQsciMacro_MetaObject_Callback(QsciMacro_MetaObject_Callback cb) { qscimacro_metaobject_callback = cb; }
    inline void setQsciMacro_Metacast_Callback(QsciMacro_Metacast_Callback cb) { qscimacro_metacast_callback = cb; }
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
    inline void setQsciMacro_MetaObject_IsBase(bool value) const { qscimacro_metaobject_isbase = value; }
    inline void setQsciMacro_Metacast_IsBase(bool value) const { qscimacro_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qscimacro_metaobject_isbase) {
            qscimacro_metaobject_isbase = false;
            return QsciMacro::metaObject();
        }
        auto metaobject_cb = qscimacro_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciMacro::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscimacro_metacast_isbase) {
            qscimacro_metacast_isbase = false;
            return QsciMacro::qt_metacast(param1);
        }
        auto metacast_cb = qscimacro_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciMacro::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscimacro_metacall_isbase) {
            qscimacro_metacall_isbase = false;
            return QsciMacro::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscimacro_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciMacro::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void play() override {
        if (qscimacro_play_isbase) {
            qscimacro_play_isbase = false;
            QsciMacro::play();
            return;
        }
        auto play_cb = qscimacro_play_callback;
        if (play_cb) {
            play_cb();
            return;
        }
        QsciMacro::play();
    }

    // Virtual method for C ABI access and custom callback
    virtual void startRecording() override {
        if (qscimacro_startrecording_isbase) {
            qscimacro_startrecording_isbase = false;
            QsciMacro::startRecording();
            return;
        }
        auto startrecording_cb = qscimacro_startrecording_callback;
        if (startrecording_cb) {
            startrecording_cb();
            return;
        }
        QsciMacro::startRecording();
    }

    // Virtual method for C ABI access and custom callback
    virtual void endRecording() override {
        if (qscimacro_endrecording_isbase) {
            qscimacro_endrecording_isbase = false;
            QsciMacro::endRecording();
            return;
        }
        auto endrecording_cb = qscimacro_endrecording_callback;
        if (endrecording_cb) {
            endrecording_cb();
            return;
        }
        QsciMacro::endRecording();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscimacro_event_isbase) {
            qscimacro_event_isbase = false;
            return QsciMacro::event(event);
        }
        auto event_cb = qscimacro_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciMacro::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscimacro_eventfilter_isbase) {
            qscimacro_eventfilter_isbase = false;
            return QsciMacro::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscimacro_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciMacro::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscimacro_timerevent_isbase) {
            qscimacro_timerevent_isbase = false;
            QsciMacro::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscimacro_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciMacro::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscimacro_childevent_isbase) {
            qscimacro_childevent_isbase = false;
            QsciMacro::childEvent(event);
            return;
        }
        auto childevent_cb = qscimacro_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciMacro::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscimacro_customevent_isbase) {
            qscimacro_customevent_isbase = false;
            QsciMacro::customEvent(event);
            return;
        }
        auto customevent_cb = qscimacro_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciMacro::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscimacro_connectnotify_isbase) {
            qscimacro_connectnotify_isbase = false;
            QsciMacro::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscimacro_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciMacro::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscimacro_disconnectnotify_isbase) {
            qscimacro_disconnectnotify_isbase = false;
            QsciMacro::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscimacro_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciMacro::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscimacro_sender_isbase) {
            qscimacro_sender_isbase = false;
            return QsciMacro::sender();
        }
        auto sender_cb = qscimacro_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciMacro::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscimacro_sendersignalindex_isbase) {
            qscimacro_sendersignalindex_isbase = false;
            return QsciMacro::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscimacro_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciMacro::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscimacro_receivers_isbase) {
            qscimacro_receivers_isbase = false;
            return QsciMacro::receivers(signal);
        }
        auto receivers_cb = qscimacro_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciMacro::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscimacro_issignalconnected_isbase) {
            qscimacro_issignalconnected_isbase = false;
            return QsciMacro::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscimacro_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciMacro::isSignalConnected(signal);
    }

    // Friend functions
    friend void QsciMacro_TimerEvent(QsciMacro* self, QTimerEvent* event);
    friend void QsciMacro_SuperTimerEvent(QsciMacro* self, QTimerEvent* event);
    friend void QsciMacro_ChildEvent(QsciMacro* self, QChildEvent* event);
    friend void QsciMacro_SuperChildEvent(QsciMacro* self, QChildEvent* event);
    friend void QsciMacro_CustomEvent(QsciMacro* self, QEvent* event);
    friend void QsciMacro_SuperCustomEvent(QsciMacro* self, QEvent* event);
    friend void QsciMacro_ConnectNotify(QsciMacro* self, const QMetaMethod* signal);
    friend void QsciMacro_SuperConnectNotify(QsciMacro* self, const QMetaMethod* signal);
    friend void QsciMacro_DisconnectNotify(QsciMacro* self, const QMetaMethod* signal);
    friend void QsciMacro_SuperDisconnectNotify(QsciMacro* self, const QMetaMethod* signal);
    friend QObject* QsciMacro_Sender(const QsciMacro* self);
    friend QObject* QsciMacro_SuperSender(const QsciMacro* self);
    friend int QsciMacro_SenderSignalIndex(const QsciMacro* self);
    friend int QsciMacro_SuperSenderSignalIndex(const QsciMacro* self);
    friend int QsciMacro_Receivers(const QsciMacro* self, const char* signal);
    friend int QsciMacro_SuperReceivers(const QsciMacro* self, const char* signal);
    friend bool QsciMacro_IsSignalConnected(const QsciMacro* self, const QMetaMethod* signal);
    friend bool QsciMacro_SuperIsSignalConnected(const QsciMacro* self, const QMetaMethod* signal);
};

#endif
