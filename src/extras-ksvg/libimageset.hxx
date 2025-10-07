#pragma once
#ifndef SRC_EXTRAS_KSVGC_LIBVIRTUALIMAGESET_H
#define SRC_EXTRAS_KSVGC_LIBVIRTUALIMAGESET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSvg::ImageSet so that we can call protected methods
class VirtualKSvgImageSet final : public KSvg::ImageSet {

  public:
    // Virtual class boolean flag
    bool isVirtualKSvgImageSet = true;

    // Virtual class public types (including callbacks)
    using KSvg__ImageSet_Metacall_Callback = int (*)(KSvg__ImageSet*, int, int, void**);
    using KSvg__ImageSet_Event_Callback = bool (*)(KSvg__ImageSet*, QEvent*);
    using KSvg__ImageSet_EventFilter_Callback = bool (*)(KSvg__ImageSet*, QObject*, QEvent*);
    using KSvg__ImageSet_TimerEvent_Callback = void (*)(KSvg__ImageSet*, QTimerEvent*);
    using KSvg__ImageSet_ChildEvent_Callback = void (*)(KSvg__ImageSet*, QChildEvent*);
    using KSvg__ImageSet_CustomEvent_Callback = void (*)(KSvg__ImageSet*, QEvent*);
    using KSvg__ImageSet_ConnectNotify_Callback = void (*)(KSvg__ImageSet*, QMetaMethod*);
    using KSvg__ImageSet_DisconnectNotify_Callback = void (*)(KSvg__ImageSet*, QMetaMethod*);
    using KSvg__ImageSet_Sender_Callback = QObject* (*)();
    using KSvg__ImageSet_SenderSignalIndex_Callback = int (*)();
    using KSvg__ImageSet_Receivers_Callback = int (*)(const KSvg__ImageSet*, const char*);
    using KSvg__ImageSet_IsSignalConnected_Callback = bool (*)(const KSvg__ImageSet*, QMetaMethod*);

  protected:
    // Instance callback storage
    KSvg__ImageSet_Metacall_Callback ksvg__imageset_metacall_callback = nullptr;
    KSvg__ImageSet_Event_Callback ksvg__imageset_event_callback = nullptr;
    KSvg__ImageSet_EventFilter_Callback ksvg__imageset_eventfilter_callback = nullptr;
    KSvg__ImageSet_TimerEvent_Callback ksvg__imageset_timerevent_callback = nullptr;
    KSvg__ImageSet_ChildEvent_Callback ksvg__imageset_childevent_callback = nullptr;
    KSvg__ImageSet_CustomEvent_Callback ksvg__imageset_customevent_callback = nullptr;
    KSvg__ImageSet_ConnectNotify_Callback ksvg__imageset_connectnotify_callback = nullptr;
    KSvg__ImageSet_DisconnectNotify_Callback ksvg__imageset_disconnectnotify_callback = nullptr;
    KSvg__ImageSet_Sender_Callback ksvg__imageset_sender_callback = nullptr;
    KSvg__ImageSet_SenderSignalIndex_Callback ksvg__imageset_sendersignalindex_callback = nullptr;
    KSvg__ImageSet_Receivers_Callback ksvg__imageset_receivers_callback = nullptr;
    KSvg__ImageSet_IsSignalConnected_Callback ksvg__imageset_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ksvg__imageset_metacall_isbase = false;
    mutable bool ksvg__imageset_event_isbase = false;
    mutable bool ksvg__imageset_eventfilter_isbase = false;
    mutable bool ksvg__imageset_timerevent_isbase = false;
    mutable bool ksvg__imageset_childevent_isbase = false;
    mutable bool ksvg__imageset_customevent_isbase = false;
    mutable bool ksvg__imageset_connectnotify_isbase = false;
    mutable bool ksvg__imageset_disconnectnotify_isbase = false;
    mutable bool ksvg__imageset_sender_isbase = false;
    mutable bool ksvg__imageset_sendersignalindex_isbase = false;
    mutable bool ksvg__imageset_receivers_isbase = false;
    mutable bool ksvg__imageset_issignalconnected_isbase = false;

  public:
    VirtualKSvgImageSet() : KSvg::ImageSet() {};
    VirtualKSvgImageSet(const QString& imageSetName) : KSvg::ImageSet(imageSetName) {};
    VirtualKSvgImageSet(QObject* parent) : KSvg::ImageSet(parent) {};
    VirtualKSvgImageSet(const QString& imageSetName, const QString& basePath) : KSvg::ImageSet(imageSetName, basePath) {};
    VirtualKSvgImageSet(const QString& imageSetName, const QString& basePath, QObject* parent) : KSvg::ImageSet(imageSetName, basePath, parent) {};

    ~VirtualKSvgImageSet() {
        ksvg__imageset_metacall_callback = nullptr;
        ksvg__imageset_event_callback = nullptr;
        ksvg__imageset_eventfilter_callback = nullptr;
        ksvg__imageset_timerevent_callback = nullptr;
        ksvg__imageset_childevent_callback = nullptr;
        ksvg__imageset_customevent_callback = nullptr;
        ksvg__imageset_connectnotify_callback = nullptr;
        ksvg__imageset_disconnectnotify_callback = nullptr;
        ksvg__imageset_sender_callback = nullptr;
        ksvg__imageset_sendersignalindex_callback = nullptr;
        ksvg__imageset_receivers_callback = nullptr;
        ksvg__imageset_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKSvg__ImageSet_Metacall_Callback(KSvg__ImageSet_Metacall_Callback cb) { ksvg__imageset_metacall_callback = cb; }
    inline void setKSvg__ImageSet_Event_Callback(KSvg__ImageSet_Event_Callback cb) { ksvg__imageset_event_callback = cb; }
    inline void setKSvg__ImageSet_EventFilter_Callback(KSvg__ImageSet_EventFilter_Callback cb) { ksvg__imageset_eventfilter_callback = cb; }
    inline void setKSvg__ImageSet_TimerEvent_Callback(KSvg__ImageSet_TimerEvent_Callback cb) { ksvg__imageset_timerevent_callback = cb; }
    inline void setKSvg__ImageSet_ChildEvent_Callback(KSvg__ImageSet_ChildEvent_Callback cb) { ksvg__imageset_childevent_callback = cb; }
    inline void setKSvg__ImageSet_CustomEvent_Callback(KSvg__ImageSet_CustomEvent_Callback cb) { ksvg__imageset_customevent_callback = cb; }
    inline void setKSvg__ImageSet_ConnectNotify_Callback(KSvg__ImageSet_ConnectNotify_Callback cb) { ksvg__imageset_connectnotify_callback = cb; }
    inline void setKSvg__ImageSet_DisconnectNotify_Callback(KSvg__ImageSet_DisconnectNotify_Callback cb) { ksvg__imageset_disconnectnotify_callback = cb; }
    inline void setKSvg__ImageSet_Sender_Callback(KSvg__ImageSet_Sender_Callback cb) { ksvg__imageset_sender_callback = cb; }
    inline void setKSvg__ImageSet_SenderSignalIndex_Callback(KSvg__ImageSet_SenderSignalIndex_Callback cb) { ksvg__imageset_sendersignalindex_callback = cb; }
    inline void setKSvg__ImageSet_Receivers_Callback(KSvg__ImageSet_Receivers_Callback cb) { ksvg__imageset_receivers_callback = cb; }
    inline void setKSvg__ImageSet_IsSignalConnected_Callback(KSvg__ImageSet_IsSignalConnected_Callback cb) { ksvg__imageset_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKSvg__ImageSet_Metacall_IsBase(bool value) const { ksvg__imageset_metacall_isbase = value; }
    inline void setKSvg__ImageSet_Event_IsBase(bool value) const { ksvg__imageset_event_isbase = value; }
    inline void setKSvg__ImageSet_EventFilter_IsBase(bool value) const { ksvg__imageset_eventfilter_isbase = value; }
    inline void setKSvg__ImageSet_TimerEvent_IsBase(bool value) const { ksvg__imageset_timerevent_isbase = value; }
    inline void setKSvg__ImageSet_ChildEvent_IsBase(bool value) const { ksvg__imageset_childevent_isbase = value; }
    inline void setKSvg__ImageSet_CustomEvent_IsBase(bool value) const { ksvg__imageset_customevent_isbase = value; }
    inline void setKSvg__ImageSet_ConnectNotify_IsBase(bool value) const { ksvg__imageset_connectnotify_isbase = value; }
    inline void setKSvg__ImageSet_DisconnectNotify_IsBase(bool value) const { ksvg__imageset_disconnectnotify_isbase = value; }
    inline void setKSvg__ImageSet_Sender_IsBase(bool value) const { ksvg__imageset_sender_isbase = value; }
    inline void setKSvg__ImageSet_SenderSignalIndex_IsBase(bool value) const { ksvg__imageset_sendersignalindex_isbase = value; }
    inline void setKSvg__ImageSet_Receivers_IsBase(bool value) const { ksvg__imageset_receivers_isbase = value; }
    inline void setKSvg__ImageSet_IsSignalConnected_IsBase(bool value) const { ksvg__imageset_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksvg__imageset_metacall_isbase) {
            ksvg__imageset_metacall_isbase = false;
            return KSvg__ImageSet::qt_metacall(param1, param2, param3);
        } else if (ksvg__imageset_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ksvg__imageset_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KSvg__ImageSet::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksvg__imageset_event_isbase) {
            ksvg__imageset_event_isbase = false;
            return KSvg__ImageSet::event(event);
        } else if (ksvg__imageset_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ksvg__imageset_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSvg__ImageSet::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksvg__imageset_eventfilter_isbase) {
            ksvg__imageset_eventfilter_isbase = false;
            return KSvg__ImageSet::eventFilter(watched, event);
        } else if (ksvg__imageset_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ksvg__imageset_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KSvg__ImageSet::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksvg__imageset_timerevent_isbase) {
            ksvg__imageset_timerevent_isbase = false;
            KSvg__ImageSet::timerEvent(event);
        } else if (ksvg__imageset_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ksvg__imageset_timerevent_callback(this, cbval1);
        } else {
            KSvg__ImageSet::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksvg__imageset_childevent_isbase) {
            ksvg__imageset_childevent_isbase = false;
            KSvg__ImageSet::childEvent(event);
        } else if (ksvg__imageset_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ksvg__imageset_childevent_callback(this, cbval1);
        } else {
            KSvg__ImageSet::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksvg__imageset_customevent_isbase) {
            ksvg__imageset_customevent_isbase = false;
            KSvg__ImageSet::customEvent(event);
        } else if (ksvg__imageset_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ksvg__imageset_customevent_callback(this, cbval1);
        } else {
            KSvg__ImageSet::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksvg__imageset_connectnotify_isbase) {
            ksvg__imageset_connectnotify_isbase = false;
            KSvg__ImageSet::connectNotify(signal);
        } else if (ksvg__imageset_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksvg__imageset_connectnotify_callback(this, cbval1);
        } else {
            KSvg__ImageSet::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksvg__imageset_disconnectnotify_isbase) {
            ksvg__imageset_disconnectnotify_isbase = false;
            KSvg__ImageSet::disconnectNotify(signal);
        } else if (ksvg__imageset_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksvg__imageset_disconnectnotify_callback(this, cbval1);
        } else {
            KSvg__ImageSet::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksvg__imageset_sender_isbase) {
            ksvg__imageset_sender_isbase = false;
            return KSvg__ImageSet::sender();
        } else if (ksvg__imageset_sender_callback != nullptr) {
            QObject* callback_ret = ksvg__imageset_sender_callback();
            return callback_ret;
        } else {
            return KSvg__ImageSet::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksvg__imageset_sendersignalindex_isbase) {
            ksvg__imageset_sendersignalindex_isbase = false;
            return KSvg__ImageSet::senderSignalIndex();
        } else if (ksvg__imageset_sendersignalindex_callback != nullptr) {
            int callback_ret = ksvg__imageset_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSvg__ImageSet::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksvg__imageset_receivers_isbase) {
            ksvg__imageset_receivers_isbase = false;
            return KSvg__ImageSet::receivers(signal);
        } else if (ksvg__imageset_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ksvg__imageset_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSvg__ImageSet::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksvg__imageset_issignalconnected_isbase) {
            ksvg__imageset_issignalconnected_isbase = false;
            return KSvg__ImageSet::isSignalConnected(signal);
        } else if (ksvg__imageset_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ksvg__imageset_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSvg__ImageSet::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KSvg__ImageSet_TimerEvent(KSvg::ImageSet* self, QTimerEvent* event);
    friend void KSvg__ImageSet_QBaseTimerEvent(KSvg::ImageSet* self, QTimerEvent* event);
    friend void KSvg__ImageSet_ChildEvent(KSvg::ImageSet* self, QChildEvent* event);
    friend void KSvg__ImageSet_QBaseChildEvent(KSvg::ImageSet* self, QChildEvent* event);
    friend void KSvg__ImageSet_CustomEvent(KSvg::ImageSet* self, QEvent* event);
    friend void KSvg__ImageSet_QBaseCustomEvent(KSvg::ImageSet* self, QEvent* event);
    friend void KSvg__ImageSet_ConnectNotify(KSvg::ImageSet* self, const QMetaMethod* signal);
    friend void KSvg__ImageSet_QBaseConnectNotify(KSvg::ImageSet* self, const QMetaMethod* signal);
    friend void KSvg__ImageSet_DisconnectNotify(KSvg::ImageSet* self, const QMetaMethod* signal);
    friend void KSvg__ImageSet_QBaseDisconnectNotify(KSvg::ImageSet* self, const QMetaMethod* signal);
    friend QObject* KSvg__ImageSet_Sender(const KSvg::ImageSet* self);
    friend QObject* KSvg__ImageSet_QBaseSender(const KSvg::ImageSet* self);
    friend int KSvg__ImageSet_SenderSignalIndex(const KSvg::ImageSet* self);
    friend int KSvg__ImageSet_QBaseSenderSignalIndex(const KSvg::ImageSet* self);
    friend int KSvg__ImageSet_Receivers(const KSvg::ImageSet* self, const char* signal);
    friend int KSvg__ImageSet_QBaseReceivers(const KSvg::ImageSet* self, const char* signal);
    friend bool KSvg__ImageSet_IsSignalConnected(const KSvg::ImageSet* self, const QMetaMethod* signal);
    friend bool KSvg__ImageSet_QBaseIsSignalConnected(const KSvg::ImageSet* self, const QMetaMethod* signal);
};

#endif
