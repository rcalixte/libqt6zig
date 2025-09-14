#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALTHUMBNAILCREATOR_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALTHUMBNAILCREATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::ThumbnailCreator so that we can call protected methods
class VirtualKIOThumbnailCreator final : public KIO::ThumbnailCreator {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOThumbnailCreator = true;

    // Virtual class public types (including callbacks)
    using KIO__ThumbnailCreator_Metacall_Callback = int (*)(KIO__ThumbnailCreator*, int, int, void**);
    using KIO__ThumbnailCreator_Create_Callback = KIO__ThumbnailResult* (*)(KIO__ThumbnailCreator*, KIO__ThumbnailRequest*);
    using KIO__ThumbnailCreator_Event_Callback = bool (*)(KIO__ThumbnailCreator*, QEvent*);
    using KIO__ThumbnailCreator_EventFilter_Callback = bool (*)(KIO__ThumbnailCreator*, QObject*, QEvent*);
    using KIO__ThumbnailCreator_TimerEvent_Callback = void (*)(KIO__ThumbnailCreator*, QTimerEvent*);
    using KIO__ThumbnailCreator_ChildEvent_Callback = void (*)(KIO__ThumbnailCreator*, QChildEvent*);
    using KIO__ThumbnailCreator_CustomEvent_Callback = void (*)(KIO__ThumbnailCreator*, QEvent*);
    using KIO__ThumbnailCreator_ConnectNotify_Callback = void (*)(KIO__ThumbnailCreator*, QMetaMethod*);
    using KIO__ThumbnailCreator_DisconnectNotify_Callback = void (*)(KIO__ThumbnailCreator*, QMetaMethod*);
    using KIO__ThumbnailCreator_Sender_Callback = QObject* (*)();
    using KIO__ThumbnailCreator_SenderSignalIndex_Callback = int (*)();
    using KIO__ThumbnailCreator_Receivers_Callback = int (*)(const KIO__ThumbnailCreator*, const char*);
    using KIO__ThumbnailCreator_IsSignalConnected_Callback = bool (*)(const KIO__ThumbnailCreator*, QMetaMethod*);

  protected:
    // Instance callback storage
    KIO__ThumbnailCreator_Metacall_Callback kio__thumbnailcreator_metacall_callback = nullptr;
    KIO__ThumbnailCreator_Create_Callback kio__thumbnailcreator_create_callback = nullptr;
    KIO__ThumbnailCreator_Event_Callback kio__thumbnailcreator_event_callback = nullptr;
    KIO__ThumbnailCreator_EventFilter_Callback kio__thumbnailcreator_eventfilter_callback = nullptr;
    KIO__ThumbnailCreator_TimerEvent_Callback kio__thumbnailcreator_timerevent_callback = nullptr;
    KIO__ThumbnailCreator_ChildEvent_Callback kio__thumbnailcreator_childevent_callback = nullptr;
    KIO__ThumbnailCreator_CustomEvent_Callback kio__thumbnailcreator_customevent_callback = nullptr;
    KIO__ThumbnailCreator_ConnectNotify_Callback kio__thumbnailcreator_connectnotify_callback = nullptr;
    KIO__ThumbnailCreator_DisconnectNotify_Callback kio__thumbnailcreator_disconnectnotify_callback = nullptr;
    KIO__ThumbnailCreator_Sender_Callback kio__thumbnailcreator_sender_callback = nullptr;
    KIO__ThumbnailCreator_SenderSignalIndex_Callback kio__thumbnailcreator_sendersignalindex_callback = nullptr;
    KIO__ThumbnailCreator_Receivers_Callback kio__thumbnailcreator_receivers_callback = nullptr;
    KIO__ThumbnailCreator_IsSignalConnected_Callback kio__thumbnailcreator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__thumbnailcreator_metacall_isbase = false;
    mutable bool kio__thumbnailcreator_create_isbase = false;
    mutable bool kio__thumbnailcreator_event_isbase = false;
    mutable bool kio__thumbnailcreator_eventfilter_isbase = false;
    mutable bool kio__thumbnailcreator_timerevent_isbase = false;
    mutable bool kio__thumbnailcreator_childevent_isbase = false;
    mutable bool kio__thumbnailcreator_customevent_isbase = false;
    mutable bool kio__thumbnailcreator_connectnotify_isbase = false;
    mutable bool kio__thumbnailcreator_disconnectnotify_isbase = false;
    mutable bool kio__thumbnailcreator_sender_isbase = false;
    mutable bool kio__thumbnailcreator_sendersignalindex_isbase = false;
    mutable bool kio__thumbnailcreator_receivers_isbase = false;
    mutable bool kio__thumbnailcreator_issignalconnected_isbase = false;

  public:
    VirtualKIOThumbnailCreator(QObject* parent, const QList<QVariant>& args) : KIO::ThumbnailCreator(parent, args) {};

    ~VirtualKIOThumbnailCreator() {
        kio__thumbnailcreator_metacall_callback = nullptr;
        kio__thumbnailcreator_create_callback = nullptr;
        kio__thumbnailcreator_event_callback = nullptr;
        kio__thumbnailcreator_eventfilter_callback = nullptr;
        kio__thumbnailcreator_timerevent_callback = nullptr;
        kio__thumbnailcreator_childevent_callback = nullptr;
        kio__thumbnailcreator_customevent_callback = nullptr;
        kio__thumbnailcreator_connectnotify_callback = nullptr;
        kio__thumbnailcreator_disconnectnotify_callback = nullptr;
        kio__thumbnailcreator_sender_callback = nullptr;
        kio__thumbnailcreator_sendersignalindex_callback = nullptr;
        kio__thumbnailcreator_receivers_callback = nullptr;
        kio__thumbnailcreator_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__ThumbnailCreator_Metacall_Callback(KIO__ThumbnailCreator_Metacall_Callback cb) { kio__thumbnailcreator_metacall_callback = cb; }
    inline void setKIO__ThumbnailCreator_Create_Callback(KIO__ThumbnailCreator_Create_Callback cb) { kio__thumbnailcreator_create_callback = cb; }
    inline void setKIO__ThumbnailCreator_Event_Callback(KIO__ThumbnailCreator_Event_Callback cb) { kio__thumbnailcreator_event_callback = cb; }
    inline void setKIO__ThumbnailCreator_EventFilter_Callback(KIO__ThumbnailCreator_EventFilter_Callback cb) { kio__thumbnailcreator_eventfilter_callback = cb; }
    inline void setKIO__ThumbnailCreator_TimerEvent_Callback(KIO__ThumbnailCreator_TimerEvent_Callback cb) { kio__thumbnailcreator_timerevent_callback = cb; }
    inline void setKIO__ThumbnailCreator_ChildEvent_Callback(KIO__ThumbnailCreator_ChildEvent_Callback cb) { kio__thumbnailcreator_childevent_callback = cb; }
    inline void setKIO__ThumbnailCreator_CustomEvent_Callback(KIO__ThumbnailCreator_CustomEvent_Callback cb) { kio__thumbnailcreator_customevent_callback = cb; }
    inline void setKIO__ThumbnailCreator_ConnectNotify_Callback(KIO__ThumbnailCreator_ConnectNotify_Callback cb) { kio__thumbnailcreator_connectnotify_callback = cb; }
    inline void setKIO__ThumbnailCreator_DisconnectNotify_Callback(KIO__ThumbnailCreator_DisconnectNotify_Callback cb) { kio__thumbnailcreator_disconnectnotify_callback = cb; }
    inline void setKIO__ThumbnailCreator_Sender_Callback(KIO__ThumbnailCreator_Sender_Callback cb) { kio__thumbnailcreator_sender_callback = cb; }
    inline void setKIO__ThumbnailCreator_SenderSignalIndex_Callback(KIO__ThumbnailCreator_SenderSignalIndex_Callback cb) { kio__thumbnailcreator_sendersignalindex_callback = cb; }
    inline void setKIO__ThumbnailCreator_Receivers_Callback(KIO__ThumbnailCreator_Receivers_Callback cb) { kio__thumbnailcreator_receivers_callback = cb; }
    inline void setKIO__ThumbnailCreator_IsSignalConnected_Callback(KIO__ThumbnailCreator_IsSignalConnected_Callback cb) { kio__thumbnailcreator_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__ThumbnailCreator_Metacall_IsBase(bool value) const { kio__thumbnailcreator_metacall_isbase = value; }
    inline void setKIO__ThumbnailCreator_Create_IsBase(bool value) const { kio__thumbnailcreator_create_isbase = value; }
    inline void setKIO__ThumbnailCreator_Event_IsBase(bool value) const { kio__thumbnailcreator_event_isbase = value; }
    inline void setKIO__ThumbnailCreator_EventFilter_IsBase(bool value) const { kio__thumbnailcreator_eventfilter_isbase = value; }
    inline void setKIO__ThumbnailCreator_TimerEvent_IsBase(bool value) const { kio__thumbnailcreator_timerevent_isbase = value; }
    inline void setKIO__ThumbnailCreator_ChildEvent_IsBase(bool value) const { kio__thumbnailcreator_childevent_isbase = value; }
    inline void setKIO__ThumbnailCreator_CustomEvent_IsBase(bool value) const { kio__thumbnailcreator_customevent_isbase = value; }
    inline void setKIO__ThumbnailCreator_ConnectNotify_IsBase(bool value) const { kio__thumbnailcreator_connectnotify_isbase = value; }
    inline void setKIO__ThumbnailCreator_DisconnectNotify_IsBase(bool value) const { kio__thumbnailcreator_disconnectnotify_isbase = value; }
    inline void setKIO__ThumbnailCreator_Sender_IsBase(bool value) const { kio__thumbnailcreator_sender_isbase = value; }
    inline void setKIO__ThumbnailCreator_SenderSignalIndex_IsBase(bool value) const { kio__thumbnailcreator_sendersignalindex_isbase = value; }
    inline void setKIO__ThumbnailCreator_Receivers_IsBase(bool value) const { kio__thumbnailcreator_receivers_isbase = value; }
    inline void setKIO__ThumbnailCreator_IsSignalConnected_IsBase(bool value) const { kio__thumbnailcreator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__thumbnailcreator_metacall_isbase) {
            kio__thumbnailcreator_metacall_isbase = false;
            return KIO__ThumbnailCreator::qt_metacall(param1, param2, param3);
        } else if (kio__thumbnailcreator_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__thumbnailcreator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__ThumbnailCreator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::ThumbnailResult create(const KIO::ThumbnailRequest& request) override {
        if (kio__thumbnailcreator_create_callback != nullptr) {
            const KIO::ThumbnailRequest& request_ret = request;
            // Cast returned reference into pointer
            KIO__ThumbnailRequest* cbval1 = const_cast<KIO::ThumbnailRequest*>(&request_ret);

            KIO__ThumbnailResult* callback_ret = kio__thumbnailcreator_create_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO::ThumbnailResult::fail();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__thumbnailcreator_event_isbase) {
            kio__thumbnailcreator_event_isbase = false;
            return KIO__ThumbnailCreator::event(event);
        } else if (kio__thumbnailcreator_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__thumbnailcreator_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__ThumbnailCreator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__thumbnailcreator_eventfilter_isbase) {
            kio__thumbnailcreator_eventfilter_isbase = false;
            return KIO__ThumbnailCreator::eventFilter(watched, event);
        } else if (kio__thumbnailcreator_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kio__thumbnailcreator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__ThumbnailCreator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__thumbnailcreator_timerevent_isbase) {
            kio__thumbnailcreator_timerevent_isbase = false;
            KIO__ThumbnailCreator::timerEvent(event);
        } else if (kio__thumbnailcreator_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__thumbnailcreator_timerevent_callback(this, cbval1);
        } else {
            KIO__ThumbnailCreator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__thumbnailcreator_childevent_isbase) {
            kio__thumbnailcreator_childevent_isbase = false;
            KIO__ThumbnailCreator::childEvent(event);
        } else if (kio__thumbnailcreator_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__thumbnailcreator_childevent_callback(this, cbval1);
        } else {
            KIO__ThumbnailCreator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__thumbnailcreator_customevent_isbase) {
            kio__thumbnailcreator_customevent_isbase = false;
            KIO__ThumbnailCreator::customEvent(event);
        } else if (kio__thumbnailcreator_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__thumbnailcreator_customevent_callback(this, cbval1);
        } else {
            KIO__ThumbnailCreator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__thumbnailcreator_connectnotify_isbase) {
            kio__thumbnailcreator_connectnotify_isbase = false;
            KIO__ThumbnailCreator::connectNotify(signal);
        } else if (kio__thumbnailcreator_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__thumbnailcreator_connectnotify_callback(this, cbval1);
        } else {
            KIO__ThumbnailCreator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__thumbnailcreator_disconnectnotify_isbase) {
            kio__thumbnailcreator_disconnectnotify_isbase = false;
            KIO__ThumbnailCreator::disconnectNotify(signal);
        } else if (kio__thumbnailcreator_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__thumbnailcreator_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__ThumbnailCreator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__thumbnailcreator_sender_isbase) {
            kio__thumbnailcreator_sender_isbase = false;
            return KIO__ThumbnailCreator::sender();
        } else if (kio__thumbnailcreator_sender_callback != nullptr) {
            QObject* callback_ret = kio__thumbnailcreator_sender_callback();
            return callback_ret;
        } else {
            return KIO__ThumbnailCreator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__thumbnailcreator_sendersignalindex_isbase) {
            kio__thumbnailcreator_sendersignalindex_isbase = false;
            return KIO__ThumbnailCreator::senderSignalIndex();
        } else if (kio__thumbnailcreator_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__thumbnailcreator_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__ThumbnailCreator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__thumbnailcreator_receivers_isbase) {
            kio__thumbnailcreator_receivers_isbase = false;
            return KIO__ThumbnailCreator::receivers(signal);
        } else if (kio__thumbnailcreator_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__thumbnailcreator_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__ThumbnailCreator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__thumbnailcreator_issignalconnected_isbase) {
            kio__thumbnailcreator_issignalconnected_isbase = false;
            return KIO__ThumbnailCreator::isSignalConnected(signal);
        } else if (kio__thumbnailcreator_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__thumbnailcreator_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__ThumbnailCreator::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KIO__ThumbnailCreator_TimerEvent(KIO::ThumbnailCreator* self, QTimerEvent* event);
    friend void KIO__ThumbnailCreator_QBaseTimerEvent(KIO::ThumbnailCreator* self, QTimerEvent* event);
    friend void KIO__ThumbnailCreator_ChildEvent(KIO::ThumbnailCreator* self, QChildEvent* event);
    friend void KIO__ThumbnailCreator_QBaseChildEvent(KIO::ThumbnailCreator* self, QChildEvent* event);
    friend void KIO__ThumbnailCreator_CustomEvent(KIO::ThumbnailCreator* self, QEvent* event);
    friend void KIO__ThumbnailCreator_QBaseCustomEvent(KIO::ThumbnailCreator* self, QEvent* event);
    friend void KIO__ThumbnailCreator_ConnectNotify(KIO::ThumbnailCreator* self, const QMetaMethod* signal);
    friend void KIO__ThumbnailCreator_QBaseConnectNotify(KIO::ThumbnailCreator* self, const QMetaMethod* signal);
    friend void KIO__ThumbnailCreator_DisconnectNotify(KIO::ThumbnailCreator* self, const QMetaMethod* signal);
    friend void KIO__ThumbnailCreator_QBaseDisconnectNotify(KIO::ThumbnailCreator* self, const QMetaMethod* signal);
    friend QObject* KIO__ThumbnailCreator_Sender(const KIO::ThumbnailCreator* self);
    friend QObject* KIO__ThumbnailCreator_QBaseSender(const KIO::ThumbnailCreator* self);
    friend int KIO__ThumbnailCreator_SenderSignalIndex(const KIO::ThumbnailCreator* self);
    friend int KIO__ThumbnailCreator_QBaseSenderSignalIndex(const KIO::ThumbnailCreator* self);
    friend int KIO__ThumbnailCreator_Receivers(const KIO::ThumbnailCreator* self, const char* signal);
    friend int KIO__ThumbnailCreator_QBaseReceivers(const KIO::ThumbnailCreator* self, const char* signal);
    friend bool KIO__ThumbnailCreator_IsSignalConnected(const KIO::ThumbnailCreator* self, const QMetaMethod* signal);
    friend bool KIO__ThumbnailCreator_QBaseIsSignalConnected(const KIO::ThumbnailCreator* self, const QMetaMethod* signal);
};

#endif
