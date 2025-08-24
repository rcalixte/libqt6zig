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

    ~VirtualKPixmapSequenceOverlayPainter() {
        kpixmapsequenceoverlaypainter_metacall_callback = nullptr;
        kpixmapsequenceoverlaypainter_eventfilter_callback = nullptr;
        kpixmapsequenceoverlaypainter_event_callback = nullptr;
        kpixmapsequenceoverlaypainter_timerevent_callback = nullptr;
        kpixmapsequenceoverlaypainter_childevent_callback = nullptr;
        kpixmapsequenceoverlaypainter_customevent_callback = nullptr;
        kpixmapsequenceoverlaypainter_connectnotify_callback = nullptr;
        kpixmapsequenceoverlaypainter_disconnectnotify_callback = nullptr;
        kpixmapsequenceoverlaypainter_sender_callback = nullptr;
        kpixmapsequenceoverlaypainter_sendersignalindex_callback = nullptr;
        kpixmapsequenceoverlaypainter_receivers_callback = nullptr;
        kpixmapsequenceoverlaypainter_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpixmapsequenceoverlaypainter_metacall_isbase) {
            kpixmapsequenceoverlaypainter_metacall_isbase = false;
            return KPixmapSequenceOverlayPainter::qt_metacall(param1, param2, param3);
        } else if (kpixmapsequenceoverlaypainter_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kpixmapsequenceoverlaypainter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapSequenceOverlayPainter::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* event) override {
        if (kpixmapsequenceoverlaypainter_eventfilter_isbase) {
            kpixmapsequenceoverlaypainter_eventfilter_isbase = false;
            return KPixmapSequenceOverlayPainter::eventFilter(obj, event);
        } else if (kpixmapsequenceoverlaypainter_eventfilter_callback != nullptr) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = event;

            bool callback_ret = kpixmapsequenceoverlaypainter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KPixmapSequenceOverlayPainter::eventFilter(obj, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpixmapsequenceoverlaypainter_event_isbase) {
            kpixmapsequenceoverlaypainter_event_isbase = false;
            return KPixmapSequenceOverlayPainter::event(event);
        } else if (kpixmapsequenceoverlaypainter_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kpixmapsequenceoverlaypainter_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapSequenceOverlayPainter::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpixmapsequenceoverlaypainter_timerevent_isbase) {
            kpixmapsequenceoverlaypainter_timerevent_isbase = false;
            KPixmapSequenceOverlayPainter::timerEvent(event);
        } else if (kpixmapsequenceoverlaypainter_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kpixmapsequenceoverlaypainter_timerevent_callback(this, cbval1);
        } else {
            KPixmapSequenceOverlayPainter::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpixmapsequenceoverlaypainter_childevent_isbase) {
            kpixmapsequenceoverlaypainter_childevent_isbase = false;
            KPixmapSequenceOverlayPainter::childEvent(event);
        } else if (kpixmapsequenceoverlaypainter_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kpixmapsequenceoverlaypainter_childevent_callback(this, cbval1);
        } else {
            KPixmapSequenceOverlayPainter::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpixmapsequenceoverlaypainter_customevent_isbase) {
            kpixmapsequenceoverlaypainter_customevent_isbase = false;
            KPixmapSequenceOverlayPainter::customEvent(event);
        } else if (kpixmapsequenceoverlaypainter_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpixmapsequenceoverlaypainter_customevent_callback(this, cbval1);
        } else {
            KPixmapSequenceOverlayPainter::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpixmapsequenceoverlaypainter_connectnotify_isbase) {
            kpixmapsequenceoverlaypainter_connectnotify_isbase = false;
            KPixmapSequenceOverlayPainter::connectNotify(signal);
        } else if (kpixmapsequenceoverlaypainter_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpixmapsequenceoverlaypainter_connectnotify_callback(this, cbval1);
        } else {
            KPixmapSequenceOverlayPainter::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpixmapsequenceoverlaypainter_disconnectnotify_isbase) {
            kpixmapsequenceoverlaypainter_disconnectnotify_isbase = false;
            KPixmapSequenceOverlayPainter::disconnectNotify(signal);
        } else if (kpixmapsequenceoverlaypainter_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpixmapsequenceoverlaypainter_disconnectnotify_callback(this, cbval1);
        } else {
            KPixmapSequenceOverlayPainter::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpixmapsequenceoverlaypainter_sender_isbase) {
            kpixmapsequenceoverlaypainter_sender_isbase = false;
            return KPixmapSequenceOverlayPainter::sender();
        } else if (kpixmapsequenceoverlaypainter_sender_callback != nullptr) {
            QObject* callback_ret = kpixmapsequenceoverlaypainter_sender_callback();
            return callback_ret;
        } else {
            return KPixmapSequenceOverlayPainter::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpixmapsequenceoverlaypainter_sendersignalindex_isbase) {
            kpixmapsequenceoverlaypainter_sendersignalindex_isbase = false;
            return KPixmapSequenceOverlayPainter::senderSignalIndex();
        } else if (kpixmapsequenceoverlaypainter_sendersignalindex_callback != nullptr) {
            int callback_ret = kpixmapsequenceoverlaypainter_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapSequenceOverlayPainter::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpixmapsequenceoverlaypainter_receivers_isbase) {
            kpixmapsequenceoverlaypainter_receivers_isbase = false;
            return KPixmapSequenceOverlayPainter::receivers(signal);
        } else if (kpixmapsequenceoverlaypainter_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kpixmapsequenceoverlaypainter_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapSequenceOverlayPainter::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpixmapsequenceoverlaypainter_issignalconnected_isbase) {
            kpixmapsequenceoverlaypainter_issignalconnected_isbase = false;
            return KPixmapSequenceOverlayPainter::isSignalConnected(signal);
        } else if (kpixmapsequenceoverlaypainter_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kpixmapsequenceoverlaypainter_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapSequenceOverlayPainter::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KPixmapSequenceOverlayPainter_EventFilter(KPixmapSequenceOverlayPainter* self, QObject* obj, QEvent* event);
    friend bool KPixmapSequenceOverlayPainter_QBaseEventFilter(KPixmapSequenceOverlayPainter* self, QObject* obj, QEvent* event);
    friend void KPixmapSequenceOverlayPainter_TimerEvent(KPixmapSequenceOverlayPainter* self, QTimerEvent* event);
    friend void KPixmapSequenceOverlayPainter_QBaseTimerEvent(KPixmapSequenceOverlayPainter* self, QTimerEvent* event);
    friend void KPixmapSequenceOverlayPainter_ChildEvent(KPixmapSequenceOverlayPainter* self, QChildEvent* event);
    friend void KPixmapSequenceOverlayPainter_QBaseChildEvent(KPixmapSequenceOverlayPainter* self, QChildEvent* event);
    friend void KPixmapSequenceOverlayPainter_CustomEvent(KPixmapSequenceOverlayPainter* self, QEvent* event);
    friend void KPixmapSequenceOverlayPainter_QBaseCustomEvent(KPixmapSequenceOverlayPainter* self, QEvent* event);
    friend void KPixmapSequenceOverlayPainter_ConnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
    friend void KPixmapSequenceOverlayPainter_QBaseConnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
    friend void KPixmapSequenceOverlayPainter_DisconnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
    friend void KPixmapSequenceOverlayPainter_QBaseDisconnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
    friend QObject* KPixmapSequenceOverlayPainter_Sender(const KPixmapSequenceOverlayPainter* self);
    friend QObject* KPixmapSequenceOverlayPainter_QBaseSender(const KPixmapSequenceOverlayPainter* self);
    friend int KPixmapSequenceOverlayPainter_SenderSignalIndex(const KPixmapSequenceOverlayPainter* self);
    friend int KPixmapSequenceOverlayPainter_QBaseSenderSignalIndex(const KPixmapSequenceOverlayPainter* self);
    friend int KPixmapSequenceOverlayPainter_Receivers(const KPixmapSequenceOverlayPainter* self, const char* signal);
    friend int KPixmapSequenceOverlayPainter_QBaseReceivers(const KPixmapSequenceOverlayPainter* self, const char* signal);
    friend bool KPixmapSequenceOverlayPainter_IsSignalConnected(const KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
    friend bool KPixmapSequenceOverlayPainter_QBaseIsSignalConnected(const KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal);
};

#endif
