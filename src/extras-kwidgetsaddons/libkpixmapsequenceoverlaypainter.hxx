#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPIXMAPSEQUENCEOVERLAYPAINTER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPIXMAPSEQUENCEOVERLAYPAINTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPixmapSequenceOverlayPainter so that we can call protected methods
class VirtualKPixmapSequenceOverlayPainter final : public KPixmapSequenceOverlayPainter {

  public:
    // Virtual class boolean flag
    bool isVirtualKPixmapSequenceOverlayPainter = true;

    // Virtual class public types (including callbacks)
    using KPixmapSequenceOverlayPainter_MetaObject_Callback = QMetaObject* (*)();
    using KPixmapSequenceOverlayPainter_Metacast_Callback = void* (*)(KPixmapSequenceOverlayPainter*, const char*);
    using KPixmapSequenceOverlayPainter_Metacall_Callback = int (*)(KPixmapSequenceOverlayPainter*, int, int, void**);
    using KPixmapSequenceOverlayPainter_EventFilter_Callback = bool (*)(KPixmapSequenceOverlayPainter*, QObject*, QEvent*);
    using KPixmapSequenceOverlayPainter_Event_Callback = bool (*)(KPixmapSequenceOverlayPainter*, QEvent*);
    using KPixmapSequenceOverlayPainter_TimerEvent_Callback = void (*)(KPixmapSequenceOverlayPainter*, QTimerEvent*);
    using KPixmapSequenceOverlayPainter_ChildEvent_Callback = void (*)(KPixmapSequenceOverlayPainter*, QChildEvent*);
    using KPixmapSequenceOverlayPainter_CustomEvent_Callback = void (*)(KPixmapSequenceOverlayPainter*, QEvent*);
    using KPixmapSequenceOverlayPainter_ConnectNotify_Callback = void (*)(KPixmapSequenceOverlayPainter*, QMetaMethod*);
    using KPixmapSequenceOverlayPainter_DisconnectNotify_Callback = void (*)(KPixmapSequenceOverlayPainter*, QMetaMethod*);
    using KPixmapSequenceOverlayPainter_Sender_Callback = QObject* (*)();
    using KPixmapSequenceOverlayPainter_SenderSignalIndex_Callback = int (*)();
    using KPixmapSequenceOverlayPainter_Receivers_Callback = int (*)(const KPixmapSequenceOverlayPainter*, const char*);
    using KPixmapSequenceOverlayPainter_IsSignalConnected_Callback = bool (*)(const KPixmapSequenceOverlayPainter*, QMetaMethod*);

  protected:
    // Instance callback storage
    KPixmapSequenceOverlayPainter_MetaObject_Callback kpixmapsequenceoverlaypainter_metaobject_callback = nullptr;
    KPixmapSequenceOverlayPainter_Metacast_Callback kpixmapsequenceoverlaypainter_metacast_callback = nullptr;
    KPixmapSequenceOverlayPainter_Metacall_Callback kpixmapsequenceoverlaypainter_metacall_callback = nullptr;
    KPixmapSequenceOverlayPainter_EventFilter_Callback kpixmapsequenceoverlaypainter_eventfilter_callback = nullptr;
    KPixmapSequenceOverlayPainter_Event_Callback kpixmapsequenceoverlaypainter_event_callback = nullptr;
    KPixmapSequenceOverlayPainter_TimerEvent_Callback kpixmapsequenceoverlaypainter_timerevent_callback = nullptr;
    KPixmapSequenceOverlayPainter_ChildEvent_Callback kpixmapsequenceoverlaypainter_childevent_callback = nullptr;
    KPixmapSequenceOverlayPainter_CustomEvent_Callback kpixmapsequenceoverlaypainter_customevent_callback = nullptr;
    KPixmapSequenceOverlayPainter_ConnectNotify_Callback kpixmapsequenceoverlaypainter_connectnotify_callback = nullptr;
    KPixmapSequenceOverlayPainter_DisconnectNotify_Callback kpixmapsequenceoverlaypainter_disconnectnotify_callback = nullptr;
    KPixmapSequenceOverlayPainter_Sender_Callback kpixmapsequenceoverlaypainter_sender_callback = nullptr;
    KPixmapSequenceOverlayPainter_SenderSignalIndex_Callback kpixmapsequenceoverlaypainter_sendersignalindex_callback = nullptr;
    KPixmapSequenceOverlayPainter_Receivers_Callback kpixmapsequenceoverlaypainter_receivers_callback = nullptr;
    KPixmapSequenceOverlayPainter_IsSignalConnected_Callback kpixmapsequenceoverlaypainter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kpixmapsequenceoverlaypainter_metaobject_isbase = false;
    mutable bool kpixmapsequenceoverlaypainter_metacast_isbase = false;
    mutable bool kpixmapsequenceoverlaypainter_metacall_isbase = false;
    mutable bool kpixmapsequenceoverlaypainter_eventfilter_isbase = false;
    mutable bool kpixmapsequenceoverlaypainter_event_isbase = false;
    mutable bool kpixmapsequenceoverlaypainter_timerevent_isbase = false;
    mutable bool kpixmapsequenceoverlaypainter_childevent_isbase = false;
    mutable bool kpixmapsequenceoverlaypainter_customevent_isbase = false;
    mutable bool kpixmapsequenceoverlaypainter_connectnotify_isbase = false;
    mutable bool kpixmapsequenceoverlaypainter_disconnectnotify_isbase = false;
    mutable bool kpixmapsequenceoverlaypainter_sender_isbase = false;
    mutable bool kpixmapsequenceoverlaypainter_sendersignalindex_isbase = false;
    mutable bool kpixmapsequenceoverlaypainter_receivers_isbase = false;
    mutable bool kpixmapsequenceoverlaypainter_issignalconnected_isbase = false;

  public:
    VirtualKPixmapSequenceOverlayPainter() : KPixmapSequenceOverlayPainter() {};
    VirtualKPixmapSequenceOverlayPainter(const KPixmapSequence& seq) : KPixmapSequenceOverlayPainter(seq) {};
    VirtualKPixmapSequenceOverlayPainter(QObject* parent) : KPixmapSequenceOverlayPainter(parent) {};
    VirtualKPixmapSequenceOverlayPainter(const KPixmapSequence& seq, QObject* parent) : KPixmapSequenceOverlayPainter(seq, parent) {};

    // Callback setters
    inline void setKPixmapSequenceOverlayPainter_MetaObject_Callback(KPixmapSequenceOverlayPainter_MetaObject_Callback cb) { kpixmapsequenceoverlaypainter_metaobject_callback = cb; }
    inline void setKPixmapSequenceOverlayPainter_Metacast_Callback(KPixmapSequenceOverlayPainter_Metacast_Callback cb) { kpixmapsequenceoverlaypainter_metacast_callback = cb; }
    inline void setKPixmapSequenceOverlayPainter_Metacall_Callback(KPixmapSequenceOverlayPainter_Metacall_Callback cb) { kpixmapsequenceoverlaypainter_metacall_callback = cb; }
    inline void setKPixmapSequenceOverlayPainter_EventFilter_Callback(KPixmapSequenceOverlayPainter_EventFilter_Callback cb) { kpixmapsequenceoverlaypainter_eventfilter_callback = cb; }
    inline void setKPixmapSequenceOverlayPainter_Event_Callback(KPixmapSequenceOverlayPainter_Event_Callback cb) { kpixmapsequenceoverlaypainter_event_callback = cb; }
    inline void setKPixmapSequenceOverlayPainter_TimerEvent_Callback(KPixmapSequenceOverlayPainter_TimerEvent_Callback cb) { kpixmapsequenceoverlaypainter_timerevent_callback = cb; }
    inline void setKPixmapSequenceOverlayPainter_ChildEvent_Callback(KPixmapSequenceOverlayPainter_ChildEvent_Callback cb) { kpixmapsequenceoverlaypainter_childevent_callback = cb; }
    inline void setKPixmapSequenceOverlayPainter_CustomEvent_Callback(KPixmapSequenceOverlayPainter_CustomEvent_Callback cb) { kpixmapsequenceoverlaypainter_customevent_callback = cb; }
    inline void setKPixmapSequenceOverlayPainter_ConnectNotify_Callback(KPixmapSequenceOverlayPainter_ConnectNotify_Callback cb) { kpixmapsequenceoverlaypainter_connectnotify_callback = cb; }
    inline void setKPixmapSequenceOverlayPainter_DisconnectNotify_Callback(KPixmapSequenceOverlayPainter_DisconnectNotify_Callback cb) { kpixmapsequenceoverlaypainter_disconnectnotify_callback = cb; }
    inline void setKPixmapSequenceOverlayPainter_Sender_Callback(KPixmapSequenceOverlayPainter_Sender_Callback cb) { kpixmapsequenceoverlaypainter_sender_callback = cb; }
    inline void setKPixmapSequenceOverlayPainter_SenderSignalIndex_Callback(KPixmapSequenceOverlayPainter_SenderSignalIndex_Callback cb) { kpixmapsequenceoverlaypainter_sendersignalindex_callback = cb; }
    inline void setKPixmapSequenceOverlayPainter_Receivers_Callback(KPixmapSequenceOverlayPainter_Receivers_Callback cb) { kpixmapsequenceoverlaypainter_receivers_callback = cb; }
    inline void setKPixmapSequenceOverlayPainter_IsSignalConnected_Callback(KPixmapSequenceOverlayPainter_IsSignalConnected_Callback cb) { kpixmapsequenceoverlaypainter_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKPixmapSequenceOverlayPainter_MetaObject_IsBase(bool value) const { kpixmapsequenceoverlaypainter_metaobject_isbase = value; }
    inline void setKPixmapSequenceOverlayPainter_Metacast_IsBase(bool value) const { kpixmapsequenceoverlaypainter_metacast_isbase = value; }
    inline void setKPixmapSequenceOverlayPainter_Metacall_IsBase(bool value) const { kpixmapsequenceoverlaypainter_metacall_isbase = value; }
    inline void setKPixmapSequenceOverlayPainter_EventFilter_IsBase(bool value) const { kpixmapsequenceoverlaypainter_eventfilter_isbase = value; }
    inline void setKPixmapSequenceOverlayPainter_Event_IsBase(bool value) const { kpixmapsequenceoverlaypainter_event_isbase = value; }
    inline void setKPixmapSequenceOverlayPainter_TimerEvent_IsBase(bool value) const { kpixmapsequenceoverlaypainter_timerevent_isbase = value; }
    inline void setKPixmapSequenceOverlayPainter_ChildEvent_IsBase(bool value) const { kpixmapsequenceoverlaypainter_childevent_isbase = value; }
    inline void setKPixmapSequenceOverlayPainter_CustomEvent_IsBase(bool value) const { kpixmapsequenceoverlaypainter_customevent_isbase = value; }
    inline void setKPixmapSequenceOverlayPainter_ConnectNotify_IsBase(bool value) const { kpixmapsequenceoverlaypainter_connectnotify_isbase = value; }
    inline void setKPixmapSequenceOverlayPainter_DisconnectNotify_IsBase(bool value) const { kpixmapsequenceoverlaypainter_disconnectnotify_isbase = value; }
    inline void setKPixmapSequenceOverlayPainter_Sender_IsBase(bool value) const { kpixmapsequenceoverlaypainter_sender_isbase = value; }
    inline void setKPixmapSequenceOverlayPainter_SenderSignalIndex_IsBase(bool value) const { kpixmapsequenceoverlaypainter_sendersignalindex_isbase = value; }
    inline void setKPixmapSequenceOverlayPainter_Receivers_IsBase(bool value) const { kpixmapsequenceoverlaypainter_receivers_isbase = value; }
    inline void setKPixmapSequenceOverlayPainter_IsSignalConnected_IsBase(bool value) const { kpixmapsequenceoverlaypainter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpixmapsequenceoverlaypainter_metaobject_isbase) {
            kpixmapsequenceoverlaypainter_metaobject_isbase = false;
            return KPixmapSequenceOverlayPainter::metaObject();
        }
        auto metaobject_cb = kpixmapsequenceoverlaypainter_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KPixmapSequenceOverlayPainter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpixmapsequenceoverlaypainter_metacast_isbase) {
            kpixmapsequenceoverlaypainter_metacast_isbase = false;
            return KPixmapSequenceOverlayPainter::qt_metacast(param1);
        }
        auto metacast_cb = kpixmapsequenceoverlaypainter_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KPixmapSequenceOverlayPainter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpixmapsequenceoverlaypainter_metacall_isbase) {
            kpixmapsequenceoverlaypainter_metacall_isbase = false;
            return KPixmapSequenceOverlayPainter::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kpixmapsequenceoverlaypainter_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPixmapSequenceOverlayPainter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* event) override {
        if (kpixmapsequenceoverlaypainter_eventfilter_isbase) {
            kpixmapsequenceoverlaypainter_eventfilter_isbase = false;
            return KPixmapSequenceOverlayPainter::eventFilter(obj, event);
        }
        auto eventfilter_cb = kpixmapsequenceoverlaypainter_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPixmapSequenceOverlayPainter::eventFilter(obj, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpixmapsequenceoverlaypainter_event_isbase) {
            kpixmapsequenceoverlaypainter_event_isbase = false;
            return KPixmapSequenceOverlayPainter::event(event);
        }
        auto event_cb = kpixmapsequenceoverlaypainter_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KPixmapSequenceOverlayPainter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpixmapsequenceoverlaypainter_timerevent_isbase) {
            kpixmapsequenceoverlaypainter_timerevent_isbase = false;
            KPixmapSequenceOverlayPainter::timerEvent(event);
            return;
        }
        auto timerevent_cb = kpixmapsequenceoverlaypainter_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KPixmapSequenceOverlayPainter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpixmapsequenceoverlaypainter_childevent_isbase) {
            kpixmapsequenceoverlaypainter_childevent_isbase = false;
            KPixmapSequenceOverlayPainter::childEvent(event);
            return;
        }
        auto childevent_cb = kpixmapsequenceoverlaypainter_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KPixmapSequenceOverlayPainter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpixmapsequenceoverlaypainter_customevent_isbase) {
            kpixmapsequenceoverlaypainter_customevent_isbase = false;
            KPixmapSequenceOverlayPainter::customEvent(event);
            return;
        }
        auto customevent_cb = kpixmapsequenceoverlaypainter_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KPixmapSequenceOverlayPainter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpixmapsequenceoverlaypainter_connectnotify_isbase) {
            kpixmapsequenceoverlaypainter_connectnotify_isbase = false;
            KPixmapSequenceOverlayPainter::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kpixmapsequenceoverlaypainter_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KPixmapSequenceOverlayPainter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpixmapsequenceoverlaypainter_disconnectnotify_isbase) {
            kpixmapsequenceoverlaypainter_disconnectnotify_isbase = false;
            KPixmapSequenceOverlayPainter::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kpixmapsequenceoverlaypainter_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KPixmapSequenceOverlayPainter::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpixmapsequenceoverlaypainter_sender_isbase) {
            kpixmapsequenceoverlaypainter_sender_isbase = false;
            return KPixmapSequenceOverlayPainter::sender();
        }
        auto sender_cb = kpixmapsequenceoverlaypainter_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KPixmapSequenceOverlayPainter::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpixmapsequenceoverlaypainter_sendersignalindex_isbase) {
            kpixmapsequenceoverlaypainter_sendersignalindex_isbase = false;
            return KPixmapSequenceOverlayPainter::senderSignalIndex();
        }
        auto sendersignalindex_cb = kpixmapsequenceoverlaypainter_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KPixmapSequenceOverlayPainter::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpixmapsequenceoverlaypainter_receivers_isbase) {
            kpixmapsequenceoverlaypainter_receivers_isbase = false;
            return KPixmapSequenceOverlayPainter::receivers(signal);
        }
        auto receivers_cb = kpixmapsequenceoverlaypainter_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPixmapSequenceOverlayPainter::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpixmapsequenceoverlaypainter_issignalconnected_isbase) {
            kpixmapsequenceoverlaypainter_issignalconnected_isbase = false;
            return KPixmapSequenceOverlayPainter::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kpixmapsequenceoverlaypainter_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KPixmapSequenceOverlayPainter::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KPixmapSequenceOverlayPainter_EventFilter(KPixmapSequenceOverlayPainter* self, QObject* obj, QEvent* event);
    friend bool KPixmapSequenceOverlayPainter_SuperEventFilter(KPixmapSequenceOverlayPainter* self, QObject* obj, QEvent* event);
    friend void KPixmapSequenceOverlayPainter_TimerEvent(KPixmapSequenceOverlayPainter* self, QTimerEvent* event);
    friend void KPixmapSequenceOverlayPainter_SuperTimerEvent(KPixmapSequenceOverlayPainter* self, QTimerEvent* event);
    friend void KPixmapSequenceOverlayPainter_ChildEvent(KPixmapSequenceOverlayPainter* self, QChildEvent* event);
    friend void KPixmapSequenceOverlayPainter_SuperChildEvent(KPixmapSequenceOverlayPainter* self, QChildEvent* event);
    friend void KPixmapSequenceOverlayPainter_CustomEvent(KPixmapSequenceOverlayPainter* self, QEvent* event);
    friend void KPixmapSequenceOverlayPainter_SuperCustomEvent(KPixmapSequenceOverlayPainter* self, QEvent* event);
    friend void KPixmapSequenceOverlayPainter_ConnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
    friend void KPixmapSequenceOverlayPainter_SuperConnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
    friend void KPixmapSequenceOverlayPainter_DisconnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
    friend void KPixmapSequenceOverlayPainter_SuperDisconnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
    friend QObject* KPixmapSequenceOverlayPainter_Sender(const KPixmapSequenceOverlayPainter* self);
    friend QObject* KPixmapSequenceOverlayPainter_SuperSender(const KPixmapSequenceOverlayPainter* self);
    friend int KPixmapSequenceOverlayPainter_SenderSignalIndex(const KPixmapSequenceOverlayPainter* self);
    friend int KPixmapSequenceOverlayPainter_SuperSenderSignalIndex(const KPixmapSequenceOverlayPainter* self);
    friend int KPixmapSequenceOverlayPainter_Receivers(const KPixmapSequenceOverlayPainter* self, const char* signal);
    friend int KPixmapSequenceOverlayPainter_SuperReceivers(const KPixmapSequenceOverlayPainter* self, const char* signal);
    friend bool KPixmapSequenceOverlayPainter_IsSignalConnected(const KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
    friend bool KPixmapSequenceOverlayPainter_SuperIsSignalConnected(const KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
};

#endif
