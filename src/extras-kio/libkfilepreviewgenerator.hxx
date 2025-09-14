#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKFILEPREVIEWGENERATOR_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKFILEPREVIEWGENERATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFilePreviewGenerator so that we can call protected methods
class VirtualKFilePreviewGenerator final : public KFilePreviewGenerator {

  public:
    // Virtual class boolean flag
    bool isVirtualKFilePreviewGenerator = true;

    // Virtual class public types (including callbacks)
    using KFilePreviewGenerator_Metacall_Callback = int (*)(KFilePreviewGenerator*, int, int, void**);
    using KFilePreviewGenerator_Event_Callback = bool (*)(KFilePreviewGenerator*, QEvent*);
    using KFilePreviewGenerator_EventFilter_Callback = bool (*)(KFilePreviewGenerator*, QObject*, QEvent*);
    using KFilePreviewGenerator_TimerEvent_Callback = void (*)(KFilePreviewGenerator*, QTimerEvent*);
    using KFilePreviewGenerator_ChildEvent_Callback = void (*)(KFilePreviewGenerator*, QChildEvent*);
    using KFilePreviewGenerator_CustomEvent_Callback = void (*)(KFilePreviewGenerator*, QEvent*);
    using KFilePreviewGenerator_ConnectNotify_Callback = void (*)(KFilePreviewGenerator*, QMetaMethod*);
    using KFilePreviewGenerator_DisconnectNotify_Callback = void (*)(KFilePreviewGenerator*, QMetaMethod*);
    using KFilePreviewGenerator_Sender_Callback = QObject* (*)();
    using KFilePreviewGenerator_SenderSignalIndex_Callback = int (*)();
    using KFilePreviewGenerator_Receivers_Callback = int (*)(const KFilePreviewGenerator*, const char*);
    using KFilePreviewGenerator_IsSignalConnected_Callback = bool (*)(const KFilePreviewGenerator*, QMetaMethod*);

  protected:
    // Instance callback storage
    KFilePreviewGenerator_Metacall_Callback kfilepreviewgenerator_metacall_callback = nullptr;
    KFilePreviewGenerator_Event_Callback kfilepreviewgenerator_event_callback = nullptr;
    KFilePreviewGenerator_EventFilter_Callback kfilepreviewgenerator_eventfilter_callback = nullptr;
    KFilePreviewGenerator_TimerEvent_Callback kfilepreviewgenerator_timerevent_callback = nullptr;
    KFilePreviewGenerator_ChildEvent_Callback kfilepreviewgenerator_childevent_callback = nullptr;
    KFilePreviewGenerator_CustomEvent_Callback kfilepreviewgenerator_customevent_callback = nullptr;
    KFilePreviewGenerator_ConnectNotify_Callback kfilepreviewgenerator_connectnotify_callback = nullptr;
    KFilePreviewGenerator_DisconnectNotify_Callback kfilepreviewgenerator_disconnectnotify_callback = nullptr;
    KFilePreviewGenerator_Sender_Callback kfilepreviewgenerator_sender_callback = nullptr;
    KFilePreviewGenerator_SenderSignalIndex_Callback kfilepreviewgenerator_sendersignalindex_callback = nullptr;
    KFilePreviewGenerator_Receivers_Callback kfilepreviewgenerator_receivers_callback = nullptr;
    KFilePreviewGenerator_IsSignalConnected_Callback kfilepreviewgenerator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kfilepreviewgenerator_metacall_isbase = false;
    mutable bool kfilepreviewgenerator_event_isbase = false;
    mutable bool kfilepreviewgenerator_eventfilter_isbase = false;
    mutable bool kfilepreviewgenerator_timerevent_isbase = false;
    mutable bool kfilepreviewgenerator_childevent_isbase = false;
    mutable bool kfilepreviewgenerator_customevent_isbase = false;
    mutable bool kfilepreviewgenerator_connectnotify_isbase = false;
    mutable bool kfilepreviewgenerator_disconnectnotify_isbase = false;
    mutable bool kfilepreviewgenerator_sender_isbase = false;
    mutable bool kfilepreviewgenerator_sendersignalindex_isbase = false;
    mutable bool kfilepreviewgenerator_receivers_isbase = false;
    mutable bool kfilepreviewgenerator_issignalconnected_isbase = false;

  public:
    VirtualKFilePreviewGenerator(QAbstractItemView* parent) : KFilePreviewGenerator(parent) {};
    VirtualKFilePreviewGenerator(KAbstractViewAdapter* parent, QAbstractProxyModel* model) : KFilePreviewGenerator(parent, model) {};

    ~VirtualKFilePreviewGenerator() {
        kfilepreviewgenerator_metacall_callback = nullptr;
        kfilepreviewgenerator_event_callback = nullptr;
        kfilepreviewgenerator_eventfilter_callback = nullptr;
        kfilepreviewgenerator_timerevent_callback = nullptr;
        kfilepreviewgenerator_childevent_callback = nullptr;
        kfilepreviewgenerator_customevent_callback = nullptr;
        kfilepreviewgenerator_connectnotify_callback = nullptr;
        kfilepreviewgenerator_disconnectnotify_callback = nullptr;
        kfilepreviewgenerator_sender_callback = nullptr;
        kfilepreviewgenerator_sendersignalindex_callback = nullptr;
        kfilepreviewgenerator_receivers_callback = nullptr;
        kfilepreviewgenerator_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKFilePreviewGenerator_Metacall_Callback(KFilePreviewGenerator_Metacall_Callback cb) { kfilepreviewgenerator_metacall_callback = cb; }
    inline void setKFilePreviewGenerator_Event_Callback(KFilePreviewGenerator_Event_Callback cb) { kfilepreviewgenerator_event_callback = cb; }
    inline void setKFilePreviewGenerator_EventFilter_Callback(KFilePreviewGenerator_EventFilter_Callback cb) { kfilepreviewgenerator_eventfilter_callback = cb; }
    inline void setKFilePreviewGenerator_TimerEvent_Callback(KFilePreviewGenerator_TimerEvent_Callback cb) { kfilepreviewgenerator_timerevent_callback = cb; }
    inline void setKFilePreviewGenerator_ChildEvent_Callback(KFilePreviewGenerator_ChildEvent_Callback cb) { kfilepreviewgenerator_childevent_callback = cb; }
    inline void setKFilePreviewGenerator_CustomEvent_Callback(KFilePreviewGenerator_CustomEvent_Callback cb) { kfilepreviewgenerator_customevent_callback = cb; }
    inline void setKFilePreviewGenerator_ConnectNotify_Callback(KFilePreviewGenerator_ConnectNotify_Callback cb) { kfilepreviewgenerator_connectnotify_callback = cb; }
    inline void setKFilePreviewGenerator_DisconnectNotify_Callback(KFilePreviewGenerator_DisconnectNotify_Callback cb) { kfilepreviewgenerator_disconnectnotify_callback = cb; }
    inline void setKFilePreviewGenerator_Sender_Callback(KFilePreviewGenerator_Sender_Callback cb) { kfilepreviewgenerator_sender_callback = cb; }
    inline void setKFilePreviewGenerator_SenderSignalIndex_Callback(KFilePreviewGenerator_SenderSignalIndex_Callback cb) { kfilepreviewgenerator_sendersignalindex_callback = cb; }
    inline void setKFilePreviewGenerator_Receivers_Callback(KFilePreviewGenerator_Receivers_Callback cb) { kfilepreviewgenerator_receivers_callback = cb; }
    inline void setKFilePreviewGenerator_IsSignalConnected_Callback(KFilePreviewGenerator_IsSignalConnected_Callback cb) { kfilepreviewgenerator_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKFilePreviewGenerator_Metacall_IsBase(bool value) const { kfilepreviewgenerator_metacall_isbase = value; }
    inline void setKFilePreviewGenerator_Event_IsBase(bool value) const { kfilepreviewgenerator_event_isbase = value; }
    inline void setKFilePreviewGenerator_EventFilter_IsBase(bool value) const { kfilepreviewgenerator_eventfilter_isbase = value; }
    inline void setKFilePreviewGenerator_TimerEvent_IsBase(bool value) const { kfilepreviewgenerator_timerevent_isbase = value; }
    inline void setKFilePreviewGenerator_ChildEvent_IsBase(bool value) const { kfilepreviewgenerator_childevent_isbase = value; }
    inline void setKFilePreviewGenerator_CustomEvent_IsBase(bool value) const { kfilepreviewgenerator_customevent_isbase = value; }
    inline void setKFilePreviewGenerator_ConnectNotify_IsBase(bool value) const { kfilepreviewgenerator_connectnotify_isbase = value; }
    inline void setKFilePreviewGenerator_DisconnectNotify_IsBase(bool value) const { kfilepreviewgenerator_disconnectnotify_isbase = value; }
    inline void setKFilePreviewGenerator_Sender_IsBase(bool value) const { kfilepreviewgenerator_sender_isbase = value; }
    inline void setKFilePreviewGenerator_SenderSignalIndex_IsBase(bool value) const { kfilepreviewgenerator_sendersignalindex_isbase = value; }
    inline void setKFilePreviewGenerator_Receivers_IsBase(bool value) const { kfilepreviewgenerator_receivers_isbase = value; }
    inline void setKFilePreviewGenerator_IsSignalConnected_IsBase(bool value) const { kfilepreviewgenerator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilepreviewgenerator_metacall_isbase) {
            kfilepreviewgenerator_metacall_isbase = false;
            return KFilePreviewGenerator::qt_metacall(param1, param2, param3);
        } else if (kfilepreviewgenerator_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfilepreviewgenerator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePreviewGenerator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilepreviewgenerator_event_isbase) {
            kfilepreviewgenerator_event_isbase = false;
            return KFilePreviewGenerator::event(event);
        } else if (kfilepreviewgenerator_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfilepreviewgenerator_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePreviewGenerator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfilepreviewgenerator_eventfilter_isbase) {
            kfilepreviewgenerator_eventfilter_isbase = false;
            return KFilePreviewGenerator::eventFilter(watched, event);
        } else if (kfilepreviewgenerator_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kfilepreviewgenerator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFilePreviewGenerator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilepreviewgenerator_timerevent_isbase) {
            kfilepreviewgenerator_timerevent_isbase = false;
            KFilePreviewGenerator::timerEvent(event);
        } else if (kfilepreviewgenerator_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfilepreviewgenerator_timerevent_callback(this, cbval1);
        } else {
            KFilePreviewGenerator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilepreviewgenerator_childevent_isbase) {
            kfilepreviewgenerator_childevent_isbase = false;
            KFilePreviewGenerator::childEvent(event);
        } else if (kfilepreviewgenerator_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfilepreviewgenerator_childevent_callback(this, cbval1);
        } else {
            KFilePreviewGenerator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilepreviewgenerator_customevent_isbase) {
            kfilepreviewgenerator_customevent_isbase = false;
            KFilePreviewGenerator::customEvent(event);
        } else if (kfilepreviewgenerator_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfilepreviewgenerator_customevent_callback(this, cbval1);
        } else {
            KFilePreviewGenerator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilepreviewgenerator_connectnotify_isbase) {
            kfilepreviewgenerator_connectnotify_isbase = false;
            KFilePreviewGenerator::connectNotify(signal);
        } else if (kfilepreviewgenerator_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfilepreviewgenerator_connectnotify_callback(this, cbval1);
        } else {
            KFilePreviewGenerator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilepreviewgenerator_disconnectnotify_isbase) {
            kfilepreviewgenerator_disconnectnotify_isbase = false;
            KFilePreviewGenerator::disconnectNotify(signal);
        } else if (kfilepreviewgenerator_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfilepreviewgenerator_disconnectnotify_callback(this, cbval1);
        } else {
            KFilePreviewGenerator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfilepreviewgenerator_sender_isbase) {
            kfilepreviewgenerator_sender_isbase = false;
            return KFilePreviewGenerator::sender();
        } else if (kfilepreviewgenerator_sender_callback != nullptr) {
            QObject* callback_ret = kfilepreviewgenerator_sender_callback();
            return callback_ret;
        } else {
            return KFilePreviewGenerator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfilepreviewgenerator_sendersignalindex_isbase) {
            kfilepreviewgenerator_sendersignalindex_isbase = false;
            return KFilePreviewGenerator::senderSignalIndex();
        } else if (kfilepreviewgenerator_sendersignalindex_callback != nullptr) {
            int callback_ret = kfilepreviewgenerator_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFilePreviewGenerator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfilepreviewgenerator_receivers_isbase) {
            kfilepreviewgenerator_receivers_isbase = false;
            return KFilePreviewGenerator::receivers(signal);
        } else if (kfilepreviewgenerator_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfilepreviewgenerator_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePreviewGenerator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfilepreviewgenerator_issignalconnected_isbase) {
            kfilepreviewgenerator_issignalconnected_isbase = false;
            return KFilePreviewGenerator::isSignalConnected(signal);
        } else if (kfilepreviewgenerator_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfilepreviewgenerator_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePreviewGenerator::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KFilePreviewGenerator_TimerEvent(KFilePreviewGenerator* self, QTimerEvent* event);
    friend void KFilePreviewGenerator_QBaseTimerEvent(KFilePreviewGenerator* self, QTimerEvent* event);
    friend void KFilePreviewGenerator_ChildEvent(KFilePreviewGenerator* self, QChildEvent* event);
    friend void KFilePreviewGenerator_QBaseChildEvent(KFilePreviewGenerator* self, QChildEvent* event);
    friend void KFilePreviewGenerator_CustomEvent(KFilePreviewGenerator* self, QEvent* event);
    friend void KFilePreviewGenerator_QBaseCustomEvent(KFilePreviewGenerator* self, QEvent* event);
    friend void KFilePreviewGenerator_ConnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal);
    friend void KFilePreviewGenerator_QBaseConnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal);
    friend void KFilePreviewGenerator_DisconnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal);
    friend void KFilePreviewGenerator_QBaseDisconnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal);
    friend QObject* KFilePreviewGenerator_Sender(const KFilePreviewGenerator* self);
    friend QObject* KFilePreviewGenerator_QBaseSender(const KFilePreviewGenerator* self);
    friend int KFilePreviewGenerator_SenderSignalIndex(const KFilePreviewGenerator* self);
    friend int KFilePreviewGenerator_QBaseSenderSignalIndex(const KFilePreviewGenerator* self);
    friend int KFilePreviewGenerator_Receivers(const KFilePreviewGenerator* self, const char* signal);
    friend int KFilePreviewGenerator_QBaseReceivers(const KFilePreviewGenerator* self, const char* signal);
    friend bool KFilePreviewGenerator_IsSignalConnected(const KFilePreviewGenerator* self, const QMetaMethod* signal);
    friend bool KFilePreviewGenerator_QBaseIsSignalConnected(const KFilePreviewGenerator* self, const QMetaMethod* signal);
};

#endif
