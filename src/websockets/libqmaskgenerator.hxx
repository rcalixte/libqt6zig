#pragma once
#ifndef SRC_WEBSOCKETSC_LIBVIRTUALQMASKGENERATOR_H
#define SRC_WEBSOCKETSC_LIBVIRTUALQMASKGENERATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMaskGenerator so that we can call protected methods
class VirtualQMaskGenerator : public QMaskGenerator {

  public:
    // Virtual class boolean flag
    bool isVirtualQMaskGenerator = true;

    // Virtual class public types (including callbacks)
    using QMaskGenerator_Seed_Callback = bool (*)();
    using QMaskGenerator_NextMask_Callback = unsigned int (*)();
    using QMaskGenerator_MetaObject_Callback = QMetaObject* (*)();
    using QMaskGenerator_Metacast_Callback = void* (*)(QMaskGenerator*, const char*);
    using QMaskGenerator_Metacall_Callback = int (*)(QMaskGenerator*, int, int, void**);
    using QMaskGenerator_Event_Callback = bool (*)(QMaskGenerator*, QEvent*);
    using QMaskGenerator_EventFilter_Callback = bool (*)(QMaskGenerator*, QObject*, QEvent*);
    using QMaskGenerator_TimerEvent_Callback = void (*)(QMaskGenerator*, QTimerEvent*);
    using QMaskGenerator_ChildEvent_Callback = void (*)(QMaskGenerator*, QChildEvent*);
    using QMaskGenerator_CustomEvent_Callback = void (*)(QMaskGenerator*, QEvent*);
    using QMaskGenerator_ConnectNotify_Callback = void (*)(QMaskGenerator*, QMetaMethod*);
    using QMaskGenerator_DisconnectNotify_Callback = void (*)(QMaskGenerator*, QMetaMethod*);
    using QMaskGenerator_Sender_Callback = QObject* (*)();
    using QMaskGenerator_SenderSignalIndex_Callback = int (*)();
    using QMaskGenerator_Receivers_Callback = int (*)(const QMaskGenerator*, const char*);
    using QMaskGenerator_IsSignalConnected_Callback = bool (*)(const QMaskGenerator*, QMetaMethod*);

  protected:
    // Instance callback storage
    QMaskGenerator_Seed_Callback qmaskgenerator_seed_callback = nullptr;
    QMaskGenerator_NextMask_Callback qmaskgenerator_nextmask_callback = nullptr;
    QMaskGenerator_MetaObject_Callback qmaskgenerator_metaobject_callback = nullptr;
    QMaskGenerator_Metacast_Callback qmaskgenerator_metacast_callback = nullptr;
    QMaskGenerator_Metacall_Callback qmaskgenerator_metacall_callback = nullptr;
    QMaskGenerator_Event_Callback qmaskgenerator_event_callback = nullptr;
    QMaskGenerator_EventFilter_Callback qmaskgenerator_eventfilter_callback = nullptr;
    QMaskGenerator_TimerEvent_Callback qmaskgenerator_timerevent_callback = nullptr;
    QMaskGenerator_ChildEvent_Callback qmaskgenerator_childevent_callback = nullptr;
    QMaskGenerator_CustomEvent_Callback qmaskgenerator_customevent_callback = nullptr;
    QMaskGenerator_ConnectNotify_Callback qmaskgenerator_connectnotify_callback = nullptr;
    QMaskGenerator_DisconnectNotify_Callback qmaskgenerator_disconnectnotify_callback = nullptr;
    QMaskGenerator_Sender_Callback qmaskgenerator_sender_callback = nullptr;
    QMaskGenerator_SenderSignalIndex_Callback qmaskgenerator_sendersignalindex_callback = nullptr;
    QMaskGenerator_Receivers_Callback qmaskgenerator_receivers_callback = nullptr;
    QMaskGenerator_IsSignalConnected_Callback qmaskgenerator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmaskgenerator_seed_isbase = false;
    mutable bool qmaskgenerator_nextmask_isbase = false;
    mutable bool qmaskgenerator_metaobject_isbase = false;
    mutable bool qmaskgenerator_metacast_isbase = false;
    mutable bool qmaskgenerator_metacall_isbase = false;
    mutable bool qmaskgenerator_event_isbase = false;
    mutable bool qmaskgenerator_eventfilter_isbase = false;
    mutable bool qmaskgenerator_timerevent_isbase = false;
    mutable bool qmaskgenerator_childevent_isbase = false;
    mutable bool qmaskgenerator_customevent_isbase = false;
    mutable bool qmaskgenerator_connectnotify_isbase = false;
    mutable bool qmaskgenerator_disconnectnotify_isbase = false;
    mutable bool qmaskgenerator_sender_isbase = false;
    mutable bool qmaskgenerator_sendersignalindex_isbase = false;
    mutable bool qmaskgenerator_receivers_isbase = false;
    mutable bool qmaskgenerator_issignalconnected_isbase = false;

  public:
    VirtualQMaskGenerator() : QMaskGenerator() {};
    VirtualQMaskGenerator(QObject* parent) : QMaskGenerator(parent) {};

    // Callback setters
    inline void setQMaskGenerator_Seed_Callback(QMaskGenerator_Seed_Callback cb) { qmaskgenerator_seed_callback = cb; }
    inline void setQMaskGenerator_NextMask_Callback(QMaskGenerator_NextMask_Callback cb) { qmaskgenerator_nextmask_callback = cb; }
    inline void setQMaskGenerator_MetaObject_Callback(QMaskGenerator_MetaObject_Callback cb) { qmaskgenerator_metaobject_callback = cb; }
    inline void setQMaskGenerator_Metacast_Callback(QMaskGenerator_Metacast_Callback cb) { qmaskgenerator_metacast_callback = cb; }
    inline void setQMaskGenerator_Metacall_Callback(QMaskGenerator_Metacall_Callback cb) { qmaskgenerator_metacall_callback = cb; }
    inline void setQMaskGenerator_Event_Callback(QMaskGenerator_Event_Callback cb) { qmaskgenerator_event_callback = cb; }
    inline void setQMaskGenerator_EventFilter_Callback(QMaskGenerator_EventFilter_Callback cb) { qmaskgenerator_eventfilter_callback = cb; }
    inline void setQMaskGenerator_TimerEvent_Callback(QMaskGenerator_TimerEvent_Callback cb) { qmaskgenerator_timerevent_callback = cb; }
    inline void setQMaskGenerator_ChildEvent_Callback(QMaskGenerator_ChildEvent_Callback cb) { qmaskgenerator_childevent_callback = cb; }
    inline void setQMaskGenerator_CustomEvent_Callback(QMaskGenerator_CustomEvent_Callback cb) { qmaskgenerator_customevent_callback = cb; }
    inline void setQMaskGenerator_ConnectNotify_Callback(QMaskGenerator_ConnectNotify_Callback cb) { qmaskgenerator_connectnotify_callback = cb; }
    inline void setQMaskGenerator_DisconnectNotify_Callback(QMaskGenerator_DisconnectNotify_Callback cb) { qmaskgenerator_disconnectnotify_callback = cb; }
    inline void setQMaskGenerator_Sender_Callback(QMaskGenerator_Sender_Callback cb) { qmaskgenerator_sender_callback = cb; }
    inline void setQMaskGenerator_SenderSignalIndex_Callback(QMaskGenerator_SenderSignalIndex_Callback cb) { qmaskgenerator_sendersignalindex_callback = cb; }
    inline void setQMaskGenerator_Receivers_Callback(QMaskGenerator_Receivers_Callback cb) { qmaskgenerator_receivers_callback = cb; }
    inline void setQMaskGenerator_IsSignalConnected_Callback(QMaskGenerator_IsSignalConnected_Callback cb) { qmaskgenerator_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQMaskGenerator_Seed_IsBase(bool value) const { qmaskgenerator_seed_isbase = value; }
    inline void setQMaskGenerator_NextMask_IsBase(bool value) const { qmaskgenerator_nextmask_isbase = value; }
    inline void setQMaskGenerator_MetaObject_IsBase(bool value) const { qmaskgenerator_metaobject_isbase = value; }
    inline void setQMaskGenerator_Metacast_IsBase(bool value) const { qmaskgenerator_metacast_isbase = value; }
    inline void setQMaskGenerator_Metacall_IsBase(bool value) const { qmaskgenerator_metacall_isbase = value; }
    inline void setQMaskGenerator_Event_IsBase(bool value) const { qmaskgenerator_event_isbase = value; }
    inline void setQMaskGenerator_EventFilter_IsBase(bool value) const { qmaskgenerator_eventfilter_isbase = value; }
    inline void setQMaskGenerator_TimerEvent_IsBase(bool value) const { qmaskgenerator_timerevent_isbase = value; }
    inline void setQMaskGenerator_ChildEvent_IsBase(bool value) const { qmaskgenerator_childevent_isbase = value; }
    inline void setQMaskGenerator_CustomEvent_IsBase(bool value) const { qmaskgenerator_customevent_isbase = value; }
    inline void setQMaskGenerator_ConnectNotify_IsBase(bool value) const { qmaskgenerator_connectnotify_isbase = value; }
    inline void setQMaskGenerator_DisconnectNotify_IsBase(bool value) const { qmaskgenerator_disconnectnotify_isbase = value; }
    inline void setQMaskGenerator_Sender_IsBase(bool value) const { qmaskgenerator_sender_isbase = value; }
    inline void setQMaskGenerator_SenderSignalIndex_IsBase(bool value) const { qmaskgenerator_sendersignalindex_isbase = value; }
    inline void setQMaskGenerator_Receivers_IsBase(bool value) const { qmaskgenerator_receivers_isbase = value; }
    inline void setQMaskGenerator_IsSignalConnected_IsBase(bool value) const { qmaskgenerator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool seed() override {
        auto seed_cb = qmaskgenerator_seed_callback;
        if (seed_cb) {
            bool callback_ret = seed_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual quint32 nextMask() override {
        auto nextmask_cb = qmaskgenerator_nextmask_callback;
        if (nextmask_cb) {
            unsigned int callback_ret = nextmask_cb();
            return static_cast<quint32>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmaskgenerator_metaobject_isbase) {
            qmaskgenerator_metaobject_isbase = false;
            return QMaskGenerator::metaObject();
        }
        auto metaobject_cb = qmaskgenerator_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QMaskGenerator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmaskgenerator_metacast_isbase) {
            qmaskgenerator_metacast_isbase = false;
            return QMaskGenerator::qt_metacast(param1);
        }
        auto metacast_cb = qmaskgenerator_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QMaskGenerator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmaskgenerator_metacall_isbase) {
            qmaskgenerator_metacall_isbase = false;
            return QMaskGenerator::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qmaskgenerator_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMaskGenerator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmaskgenerator_event_isbase) {
            qmaskgenerator_event_isbase = false;
            return QMaskGenerator::event(event);
        }
        auto event_cb = qmaskgenerator_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QMaskGenerator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmaskgenerator_eventfilter_isbase) {
            qmaskgenerator_eventfilter_isbase = false;
            return QMaskGenerator::eventFilter(watched, event);
        }
        auto eventfilter_cb = qmaskgenerator_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMaskGenerator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmaskgenerator_timerevent_isbase) {
            qmaskgenerator_timerevent_isbase = false;
            QMaskGenerator::timerEvent(event);
            return;
        }
        auto timerevent_cb = qmaskgenerator_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QMaskGenerator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmaskgenerator_childevent_isbase) {
            qmaskgenerator_childevent_isbase = false;
            QMaskGenerator::childEvent(event);
            return;
        }
        auto childevent_cb = qmaskgenerator_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QMaskGenerator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmaskgenerator_customevent_isbase) {
            qmaskgenerator_customevent_isbase = false;
            QMaskGenerator::customEvent(event);
            return;
        }
        auto customevent_cb = qmaskgenerator_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QMaskGenerator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmaskgenerator_connectnotify_isbase) {
            qmaskgenerator_connectnotify_isbase = false;
            QMaskGenerator::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qmaskgenerator_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QMaskGenerator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmaskgenerator_disconnectnotify_isbase) {
            qmaskgenerator_disconnectnotify_isbase = false;
            QMaskGenerator::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qmaskgenerator_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QMaskGenerator::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmaskgenerator_sender_isbase) {
            qmaskgenerator_sender_isbase = false;
            return QMaskGenerator::sender();
        }
        auto sender_cb = qmaskgenerator_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QMaskGenerator::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmaskgenerator_sendersignalindex_isbase) {
            qmaskgenerator_sendersignalindex_isbase = false;
            return QMaskGenerator::senderSignalIndex();
        }
        auto sendersignalindex_cb = qmaskgenerator_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QMaskGenerator::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmaskgenerator_receivers_isbase) {
            qmaskgenerator_receivers_isbase = false;
            return QMaskGenerator::receivers(signal);
        }
        auto receivers_cb = qmaskgenerator_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMaskGenerator::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmaskgenerator_issignalconnected_isbase) {
            qmaskgenerator_issignalconnected_isbase = false;
            return QMaskGenerator::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qmaskgenerator_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QMaskGenerator::isSignalConnected(signal);
    }

    // Friend functions
    friend void QMaskGenerator_TimerEvent(QMaskGenerator* self, QTimerEvent* event);
    friend void QMaskGenerator_SuperTimerEvent(QMaskGenerator* self, QTimerEvent* event);
    friend void QMaskGenerator_ChildEvent(QMaskGenerator* self, QChildEvent* event);
    friend void QMaskGenerator_SuperChildEvent(QMaskGenerator* self, QChildEvent* event);
    friend void QMaskGenerator_CustomEvent(QMaskGenerator* self, QEvent* event);
    friend void QMaskGenerator_SuperCustomEvent(QMaskGenerator* self, QEvent* event);
    friend void QMaskGenerator_ConnectNotify(QMaskGenerator* self, const QMetaMethod* signal);
    friend void QMaskGenerator_SuperConnectNotify(QMaskGenerator* self, const QMetaMethod* signal);
    friend void QMaskGenerator_DisconnectNotify(QMaskGenerator* self, const QMetaMethod* signal);
    friend void QMaskGenerator_SuperDisconnectNotify(QMaskGenerator* self, const QMetaMethod* signal);
    friend QObject* QMaskGenerator_Sender(const QMaskGenerator* self);
    friend QObject* QMaskGenerator_SuperSender(const QMaskGenerator* self);
    friend int QMaskGenerator_SenderSignalIndex(const QMaskGenerator* self);
    friend int QMaskGenerator_SuperSenderSignalIndex(const QMaskGenerator* self);
    friend int QMaskGenerator_Receivers(const QMaskGenerator* self, const char* signal);
    friend int QMaskGenerator_SuperReceivers(const QMaskGenerator* self, const char* signal);
    friend bool QMaskGenerator_IsSignalConnected(const QMaskGenerator* self, const QMetaMethod* signal);
    friend bool QMaskGenerator_SuperIsSignalConnected(const QMaskGenerator* self, const QMetaMethod* signal);
};

#endif
