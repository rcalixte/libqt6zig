#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKABSTRACTVIEWADAPTER_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKABSTRACTVIEWADAPTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAbstractViewAdapter so that we can call protected methods
class VirtualKAbstractViewAdapter : public KAbstractViewAdapter {

  public:
    // Virtual class boolean flag
    bool isVirtualKAbstractViewAdapter = true;

    // Virtual class public types (including callbacks)
    using KAbstractViewAdapter_Model_Callback = QAbstractItemModel* (*)();
    using KAbstractViewAdapter_IconSize_Callback = QSize* (*)();
    using KAbstractViewAdapter_Palette_Callback = QPalette* (*)();
    using KAbstractViewAdapter_VisibleArea_Callback = QRect* (*)();
    using KAbstractViewAdapter_VisualRect_Callback = QRect* (*)(const KAbstractViewAdapter*, QModelIndex*);
    using KAbstractViewAdapter_Connect_Callback = void (*)(KAbstractViewAdapter*, int, QObject*, const char*);
    using KAbstractViewAdapter_Metacall_Callback = int (*)(KAbstractViewAdapter*, int, int, void**);
    using KAbstractViewAdapter_Event_Callback = bool (*)(KAbstractViewAdapter*, QEvent*);
    using KAbstractViewAdapter_EventFilter_Callback = bool (*)(KAbstractViewAdapter*, QObject*, QEvent*);
    using KAbstractViewAdapter_TimerEvent_Callback = void (*)(KAbstractViewAdapter*, QTimerEvent*);
    using KAbstractViewAdapter_ChildEvent_Callback = void (*)(KAbstractViewAdapter*, QChildEvent*);
    using KAbstractViewAdapter_CustomEvent_Callback = void (*)(KAbstractViewAdapter*, QEvent*);
    using KAbstractViewAdapter_ConnectNotify_Callback = void (*)(KAbstractViewAdapter*, QMetaMethod*);
    using KAbstractViewAdapter_DisconnectNotify_Callback = void (*)(KAbstractViewAdapter*, QMetaMethod*);
    using KAbstractViewAdapter_Sender_Callback = QObject* (*)();
    using KAbstractViewAdapter_SenderSignalIndex_Callback = int (*)();
    using KAbstractViewAdapter_Receivers_Callback = int (*)(const KAbstractViewAdapter*, const char*);
    using KAbstractViewAdapter_IsSignalConnected_Callback = bool (*)(const KAbstractViewAdapter*, QMetaMethod*);

  protected:
    // Instance callback storage
    KAbstractViewAdapter_Model_Callback kabstractviewadapter_model_callback = nullptr;
    KAbstractViewAdapter_IconSize_Callback kabstractviewadapter_iconsize_callback = nullptr;
    KAbstractViewAdapter_Palette_Callback kabstractviewadapter_palette_callback = nullptr;
    KAbstractViewAdapter_VisibleArea_Callback kabstractviewadapter_visiblearea_callback = nullptr;
    KAbstractViewAdapter_VisualRect_Callback kabstractviewadapter_visualrect_callback = nullptr;
    KAbstractViewAdapter_Connect_Callback kabstractviewadapter_connect_callback = nullptr;
    KAbstractViewAdapter_Metacall_Callback kabstractviewadapter_metacall_callback = nullptr;
    KAbstractViewAdapter_Event_Callback kabstractviewadapter_event_callback = nullptr;
    KAbstractViewAdapter_EventFilter_Callback kabstractviewadapter_eventfilter_callback = nullptr;
    KAbstractViewAdapter_TimerEvent_Callback kabstractviewadapter_timerevent_callback = nullptr;
    KAbstractViewAdapter_ChildEvent_Callback kabstractviewadapter_childevent_callback = nullptr;
    KAbstractViewAdapter_CustomEvent_Callback kabstractviewadapter_customevent_callback = nullptr;
    KAbstractViewAdapter_ConnectNotify_Callback kabstractviewadapter_connectnotify_callback = nullptr;
    KAbstractViewAdapter_DisconnectNotify_Callback kabstractviewadapter_disconnectnotify_callback = nullptr;
    KAbstractViewAdapter_Sender_Callback kabstractviewadapter_sender_callback = nullptr;
    KAbstractViewAdapter_SenderSignalIndex_Callback kabstractviewadapter_sendersignalindex_callback = nullptr;
    KAbstractViewAdapter_Receivers_Callback kabstractviewadapter_receivers_callback = nullptr;
    KAbstractViewAdapter_IsSignalConnected_Callback kabstractviewadapter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kabstractviewadapter_model_isbase = false;
    mutable bool kabstractviewadapter_iconsize_isbase = false;
    mutable bool kabstractviewadapter_palette_isbase = false;
    mutable bool kabstractviewadapter_visiblearea_isbase = false;
    mutable bool kabstractviewadapter_visualrect_isbase = false;
    mutable bool kabstractviewadapter_connect_isbase = false;
    mutable bool kabstractviewadapter_metacall_isbase = false;
    mutable bool kabstractviewadapter_event_isbase = false;
    mutable bool kabstractviewadapter_eventfilter_isbase = false;
    mutable bool kabstractviewadapter_timerevent_isbase = false;
    mutable bool kabstractviewadapter_childevent_isbase = false;
    mutable bool kabstractviewadapter_customevent_isbase = false;
    mutable bool kabstractviewadapter_connectnotify_isbase = false;
    mutable bool kabstractviewadapter_disconnectnotify_isbase = false;
    mutable bool kabstractviewadapter_sender_isbase = false;
    mutable bool kabstractviewadapter_sendersignalindex_isbase = false;
    mutable bool kabstractviewadapter_receivers_isbase = false;
    mutable bool kabstractviewadapter_issignalconnected_isbase = false;

  public:
    VirtualKAbstractViewAdapter(QObject* parent) : KAbstractViewAdapter(parent) {};

    ~VirtualKAbstractViewAdapter() {
        kabstractviewadapter_model_callback = nullptr;
        kabstractviewadapter_iconsize_callback = nullptr;
        kabstractviewadapter_palette_callback = nullptr;
        kabstractviewadapter_visiblearea_callback = nullptr;
        kabstractviewadapter_visualrect_callback = nullptr;
        kabstractviewadapter_connect_callback = nullptr;
        kabstractviewadapter_metacall_callback = nullptr;
        kabstractviewadapter_event_callback = nullptr;
        kabstractviewadapter_eventfilter_callback = nullptr;
        kabstractviewadapter_timerevent_callback = nullptr;
        kabstractviewadapter_childevent_callback = nullptr;
        kabstractviewadapter_customevent_callback = nullptr;
        kabstractviewadapter_connectnotify_callback = nullptr;
        kabstractviewadapter_disconnectnotify_callback = nullptr;
        kabstractviewadapter_sender_callback = nullptr;
        kabstractviewadapter_sendersignalindex_callback = nullptr;
        kabstractviewadapter_receivers_callback = nullptr;
        kabstractviewadapter_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKAbstractViewAdapter_Model_Callback(KAbstractViewAdapter_Model_Callback cb) { kabstractviewadapter_model_callback = cb; }
    inline void setKAbstractViewAdapter_IconSize_Callback(KAbstractViewAdapter_IconSize_Callback cb) { kabstractviewadapter_iconsize_callback = cb; }
    inline void setKAbstractViewAdapter_Palette_Callback(KAbstractViewAdapter_Palette_Callback cb) { kabstractviewadapter_palette_callback = cb; }
    inline void setKAbstractViewAdapter_VisibleArea_Callback(KAbstractViewAdapter_VisibleArea_Callback cb) { kabstractviewadapter_visiblearea_callback = cb; }
    inline void setKAbstractViewAdapter_VisualRect_Callback(KAbstractViewAdapter_VisualRect_Callback cb) { kabstractviewadapter_visualrect_callback = cb; }
    inline void setKAbstractViewAdapter_Connect_Callback(KAbstractViewAdapter_Connect_Callback cb) { kabstractviewadapter_connect_callback = cb; }
    inline void setKAbstractViewAdapter_Metacall_Callback(KAbstractViewAdapter_Metacall_Callback cb) { kabstractviewadapter_metacall_callback = cb; }
    inline void setKAbstractViewAdapter_Event_Callback(KAbstractViewAdapter_Event_Callback cb) { kabstractviewadapter_event_callback = cb; }
    inline void setKAbstractViewAdapter_EventFilter_Callback(KAbstractViewAdapter_EventFilter_Callback cb) { kabstractviewadapter_eventfilter_callback = cb; }
    inline void setKAbstractViewAdapter_TimerEvent_Callback(KAbstractViewAdapter_TimerEvent_Callback cb) { kabstractviewadapter_timerevent_callback = cb; }
    inline void setKAbstractViewAdapter_ChildEvent_Callback(KAbstractViewAdapter_ChildEvent_Callback cb) { kabstractviewadapter_childevent_callback = cb; }
    inline void setKAbstractViewAdapter_CustomEvent_Callback(KAbstractViewAdapter_CustomEvent_Callback cb) { kabstractviewadapter_customevent_callback = cb; }
    inline void setKAbstractViewAdapter_ConnectNotify_Callback(KAbstractViewAdapter_ConnectNotify_Callback cb) { kabstractviewadapter_connectnotify_callback = cb; }
    inline void setKAbstractViewAdapter_DisconnectNotify_Callback(KAbstractViewAdapter_DisconnectNotify_Callback cb) { kabstractviewadapter_disconnectnotify_callback = cb; }
    inline void setKAbstractViewAdapter_Sender_Callback(KAbstractViewAdapter_Sender_Callback cb) { kabstractviewadapter_sender_callback = cb; }
    inline void setKAbstractViewAdapter_SenderSignalIndex_Callback(KAbstractViewAdapter_SenderSignalIndex_Callback cb) { kabstractviewadapter_sendersignalindex_callback = cb; }
    inline void setKAbstractViewAdapter_Receivers_Callback(KAbstractViewAdapter_Receivers_Callback cb) { kabstractviewadapter_receivers_callback = cb; }
    inline void setKAbstractViewAdapter_IsSignalConnected_Callback(KAbstractViewAdapter_IsSignalConnected_Callback cb) { kabstractviewadapter_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKAbstractViewAdapter_Model_IsBase(bool value) const { kabstractviewadapter_model_isbase = value; }
    inline void setKAbstractViewAdapter_IconSize_IsBase(bool value) const { kabstractviewadapter_iconsize_isbase = value; }
    inline void setKAbstractViewAdapter_Palette_IsBase(bool value) const { kabstractviewadapter_palette_isbase = value; }
    inline void setKAbstractViewAdapter_VisibleArea_IsBase(bool value) const { kabstractviewadapter_visiblearea_isbase = value; }
    inline void setKAbstractViewAdapter_VisualRect_IsBase(bool value) const { kabstractviewadapter_visualrect_isbase = value; }
    inline void setKAbstractViewAdapter_Connect_IsBase(bool value) const { kabstractviewadapter_connect_isbase = value; }
    inline void setKAbstractViewAdapter_Metacall_IsBase(bool value) const { kabstractviewadapter_metacall_isbase = value; }
    inline void setKAbstractViewAdapter_Event_IsBase(bool value) const { kabstractviewadapter_event_isbase = value; }
    inline void setKAbstractViewAdapter_EventFilter_IsBase(bool value) const { kabstractviewadapter_eventfilter_isbase = value; }
    inline void setKAbstractViewAdapter_TimerEvent_IsBase(bool value) const { kabstractviewadapter_timerevent_isbase = value; }
    inline void setKAbstractViewAdapter_ChildEvent_IsBase(bool value) const { kabstractviewadapter_childevent_isbase = value; }
    inline void setKAbstractViewAdapter_CustomEvent_IsBase(bool value) const { kabstractviewadapter_customevent_isbase = value; }
    inline void setKAbstractViewAdapter_ConnectNotify_IsBase(bool value) const { kabstractviewadapter_connectnotify_isbase = value; }
    inline void setKAbstractViewAdapter_DisconnectNotify_IsBase(bool value) const { kabstractviewadapter_disconnectnotify_isbase = value; }
    inline void setKAbstractViewAdapter_Sender_IsBase(bool value) const { kabstractviewadapter_sender_isbase = value; }
    inline void setKAbstractViewAdapter_SenderSignalIndex_IsBase(bool value) const { kabstractviewadapter_sendersignalindex_isbase = value; }
    inline void setKAbstractViewAdapter_Receivers_IsBase(bool value) const { kabstractviewadapter_receivers_isbase = value; }
    inline void setKAbstractViewAdapter_IsSignalConnected_IsBase(bool value) const { kabstractviewadapter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemModel* model() const override {
        if (kabstractviewadapter_model_callback != nullptr) {
            QAbstractItemModel* callback_ret = kabstractviewadapter_model_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize iconSize() const override {
        if (kabstractviewadapter_iconsize_callback != nullptr) {
            QSize* callback_ret = kabstractviewadapter_iconsize_callback();
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPalette palette() const override {
        if (kabstractviewadapter_palette_callback != nullptr) {
            QPalette* callback_ret = kabstractviewadapter_palette_callback();
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visibleArea() const override {
        if (kabstractviewadapter_visiblearea_callback != nullptr) {
            QRect* callback_ret = kabstractviewadapter_visiblearea_callback();
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (kabstractviewadapter_visualrect_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QRect* callback_ret = kabstractviewadapter_visualrect_callback(this, cbval1);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connect(KAbstractViewAdapter::Signal signal, QObject* receiver, const char* slot) override {
        if (kabstractviewadapter_connect_callback != nullptr) {
            int cbval1 = static_cast<int>(signal);
            QObject* cbval2 = receiver;
            const char* cbval3 = (const char*)slot;

            kabstractviewadapter_connect_callback(this, cbval1, cbval2, cbval3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kabstractviewadapter_metacall_isbase) {
            kabstractviewadapter_metacall_isbase = false;
            return KAbstractViewAdapter::qt_metacall(param1, param2, param3);
        } else if (kabstractviewadapter_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kabstractviewadapter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KAbstractViewAdapter::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kabstractviewadapter_event_isbase) {
            kabstractviewadapter_event_isbase = false;
            return KAbstractViewAdapter::event(event);
        } else if (kabstractviewadapter_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kabstractviewadapter_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAbstractViewAdapter::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kabstractviewadapter_eventfilter_isbase) {
            kabstractviewadapter_eventfilter_isbase = false;
            return KAbstractViewAdapter::eventFilter(watched, event);
        } else if (kabstractviewadapter_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kabstractviewadapter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KAbstractViewAdapter::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kabstractviewadapter_timerevent_isbase) {
            kabstractviewadapter_timerevent_isbase = false;
            KAbstractViewAdapter::timerEvent(event);
        } else if (kabstractviewadapter_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kabstractviewadapter_timerevent_callback(this, cbval1);
        } else {
            KAbstractViewAdapter::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kabstractviewadapter_childevent_isbase) {
            kabstractviewadapter_childevent_isbase = false;
            KAbstractViewAdapter::childEvent(event);
        } else if (kabstractviewadapter_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kabstractviewadapter_childevent_callback(this, cbval1);
        } else {
            KAbstractViewAdapter::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kabstractviewadapter_customevent_isbase) {
            kabstractviewadapter_customevent_isbase = false;
            KAbstractViewAdapter::customEvent(event);
        } else if (kabstractviewadapter_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kabstractviewadapter_customevent_callback(this, cbval1);
        } else {
            KAbstractViewAdapter::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kabstractviewadapter_connectnotify_isbase) {
            kabstractviewadapter_connectnotify_isbase = false;
            KAbstractViewAdapter::connectNotify(signal);
        } else if (kabstractviewadapter_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kabstractviewadapter_connectnotify_callback(this, cbval1);
        } else {
            KAbstractViewAdapter::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kabstractviewadapter_disconnectnotify_isbase) {
            kabstractviewadapter_disconnectnotify_isbase = false;
            KAbstractViewAdapter::disconnectNotify(signal);
        } else if (kabstractviewadapter_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kabstractviewadapter_disconnectnotify_callback(this, cbval1);
        } else {
            KAbstractViewAdapter::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kabstractviewadapter_sender_isbase) {
            kabstractviewadapter_sender_isbase = false;
            return KAbstractViewAdapter::sender();
        } else if (kabstractviewadapter_sender_callback != nullptr) {
            QObject* callback_ret = kabstractviewadapter_sender_callback();
            return callback_ret;
        } else {
            return KAbstractViewAdapter::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kabstractviewadapter_sendersignalindex_isbase) {
            kabstractviewadapter_sendersignalindex_isbase = false;
            return KAbstractViewAdapter::senderSignalIndex();
        } else if (kabstractviewadapter_sendersignalindex_callback != nullptr) {
            int callback_ret = kabstractviewadapter_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KAbstractViewAdapter::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kabstractviewadapter_receivers_isbase) {
            kabstractviewadapter_receivers_isbase = false;
            return KAbstractViewAdapter::receivers(signal);
        } else if (kabstractviewadapter_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kabstractviewadapter_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KAbstractViewAdapter::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kabstractviewadapter_issignalconnected_isbase) {
            kabstractviewadapter_issignalconnected_isbase = false;
            return KAbstractViewAdapter::isSignalConnected(signal);
        } else if (kabstractviewadapter_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kabstractviewadapter_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAbstractViewAdapter::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KAbstractViewAdapter_TimerEvent(KAbstractViewAdapter* self, QTimerEvent* event);
    friend void KAbstractViewAdapter_QBaseTimerEvent(KAbstractViewAdapter* self, QTimerEvent* event);
    friend void KAbstractViewAdapter_ChildEvent(KAbstractViewAdapter* self, QChildEvent* event);
    friend void KAbstractViewAdapter_QBaseChildEvent(KAbstractViewAdapter* self, QChildEvent* event);
    friend void KAbstractViewAdapter_CustomEvent(KAbstractViewAdapter* self, QEvent* event);
    friend void KAbstractViewAdapter_QBaseCustomEvent(KAbstractViewAdapter* self, QEvent* event);
    friend void KAbstractViewAdapter_ConnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal);
    friend void KAbstractViewAdapter_QBaseConnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal);
    friend void KAbstractViewAdapter_DisconnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal);
    friend void KAbstractViewAdapter_QBaseDisconnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal);
    friend QObject* KAbstractViewAdapter_Sender(const KAbstractViewAdapter* self);
    friend QObject* KAbstractViewAdapter_QBaseSender(const KAbstractViewAdapter* self);
    friend int KAbstractViewAdapter_SenderSignalIndex(const KAbstractViewAdapter* self);
    friend int KAbstractViewAdapter_QBaseSenderSignalIndex(const KAbstractViewAdapter* self);
    friend int KAbstractViewAdapter_Receivers(const KAbstractViewAdapter* self, const char* signal);
    friend int KAbstractViewAdapter_QBaseReceivers(const KAbstractViewAdapter* self, const char* signal);
    friend bool KAbstractViewAdapter_IsSignalConnected(const KAbstractViewAdapter* self, const QMetaMethod* signal);
    friend bool KAbstractViewAdapter_QBaseIsSignalConnected(const KAbstractViewAdapter* self, const QMetaMethod* signal);
};

#endif
