#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKVIEWSTATESERIALIZER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKVIEWSTATESERIALIZER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KViewStateSerializer so that we can call protected methods
class VirtualKViewStateSerializer : public KViewStateSerializer {

  public:
    // Virtual class boolean flag
    bool isVirtualKViewStateSerializer = true;

    // Virtual class public types (including callbacks)
    using KViewStateSerializer_Metacall_Callback = int (*)(KViewStateSerializer*, int, int, void**);
    using KViewStateSerializer_IndexFromConfigString_Callback = QModelIndex* (*)(const KViewStateSerializer*, QAbstractItemModel*, libqt_string);
    using KViewStateSerializer_IndexToConfigString_Callback = const char* (*)(const KViewStateSerializer*, QModelIndex*);
    using KViewStateSerializer_Event_Callback = bool (*)(KViewStateSerializer*, QEvent*);
    using KViewStateSerializer_EventFilter_Callback = bool (*)(KViewStateSerializer*, QObject*, QEvent*);
    using KViewStateSerializer_TimerEvent_Callback = void (*)(KViewStateSerializer*, QTimerEvent*);
    using KViewStateSerializer_ChildEvent_Callback = void (*)(KViewStateSerializer*, QChildEvent*);
    using KViewStateSerializer_CustomEvent_Callback = void (*)(KViewStateSerializer*, QEvent*);
    using KViewStateSerializer_ConnectNotify_Callback = void (*)(KViewStateSerializer*, QMetaMethod*);
    using KViewStateSerializer_DisconnectNotify_Callback = void (*)(KViewStateSerializer*, QMetaMethod*);
    using KViewStateSerializer_RestoreState_Callback = void (*)();
    using KViewStateSerializer_Sender_Callback = QObject* (*)();
    using KViewStateSerializer_SenderSignalIndex_Callback = int (*)();
    using KViewStateSerializer_Receivers_Callback = int (*)(const KViewStateSerializer*, const char*);
    using KViewStateSerializer_IsSignalConnected_Callback = bool (*)(const KViewStateSerializer*, QMetaMethod*);

  protected:
    // Instance callback storage
    KViewStateSerializer_Metacall_Callback kviewstateserializer_metacall_callback = nullptr;
    KViewStateSerializer_IndexFromConfigString_Callback kviewstateserializer_indexfromconfigstring_callback = nullptr;
    KViewStateSerializer_IndexToConfigString_Callback kviewstateserializer_indextoconfigstring_callback = nullptr;
    KViewStateSerializer_Event_Callback kviewstateserializer_event_callback = nullptr;
    KViewStateSerializer_EventFilter_Callback kviewstateserializer_eventfilter_callback = nullptr;
    KViewStateSerializer_TimerEvent_Callback kviewstateserializer_timerevent_callback = nullptr;
    KViewStateSerializer_ChildEvent_Callback kviewstateserializer_childevent_callback = nullptr;
    KViewStateSerializer_CustomEvent_Callback kviewstateserializer_customevent_callback = nullptr;
    KViewStateSerializer_ConnectNotify_Callback kviewstateserializer_connectnotify_callback = nullptr;
    KViewStateSerializer_DisconnectNotify_Callback kviewstateserializer_disconnectnotify_callback = nullptr;
    KViewStateSerializer_RestoreState_Callback kviewstateserializer_restorestate_callback = nullptr;
    KViewStateSerializer_Sender_Callback kviewstateserializer_sender_callback = nullptr;
    KViewStateSerializer_SenderSignalIndex_Callback kviewstateserializer_sendersignalindex_callback = nullptr;
    KViewStateSerializer_Receivers_Callback kviewstateserializer_receivers_callback = nullptr;
    KViewStateSerializer_IsSignalConnected_Callback kviewstateserializer_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kviewstateserializer_metacall_isbase = false;
    mutable bool kviewstateserializer_indexfromconfigstring_isbase = false;
    mutable bool kviewstateserializer_indextoconfigstring_isbase = false;
    mutable bool kviewstateserializer_event_isbase = false;
    mutable bool kviewstateserializer_eventfilter_isbase = false;
    mutable bool kviewstateserializer_timerevent_isbase = false;
    mutable bool kviewstateserializer_childevent_isbase = false;
    mutable bool kviewstateserializer_customevent_isbase = false;
    mutable bool kviewstateserializer_connectnotify_isbase = false;
    mutable bool kviewstateserializer_disconnectnotify_isbase = false;
    mutable bool kviewstateserializer_restorestate_isbase = false;
    mutable bool kviewstateserializer_sender_isbase = false;
    mutable bool kviewstateserializer_sendersignalindex_isbase = false;
    mutable bool kviewstateserializer_receivers_isbase = false;
    mutable bool kviewstateserializer_issignalconnected_isbase = false;

  public:
    VirtualKViewStateSerializer() : KViewStateSerializer() {};
    VirtualKViewStateSerializer(QObject* parent) : KViewStateSerializer(parent) {};

    ~VirtualKViewStateSerializer() {
        kviewstateserializer_metacall_callback = nullptr;
        kviewstateserializer_indexfromconfigstring_callback = nullptr;
        kviewstateserializer_indextoconfigstring_callback = nullptr;
        kviewstateserializer_event_callback = nullptr;
        kviewstateserializer_eventfilter_callback = nullptr;
        kviewstateserializer_timerevent_callback = nullptr;
        kviewstateserializer_childevent_callback = nullptr;
        kviewstateserializer_customevent_callback = nullptr;
        kviewstateserializer_connectnotify_callback = nullptr;
        kviewstateserializer_disconnectnotify_callback = nullptr;
        kviewstateserializer_restorestate_callback = nullptr;
        kviewstateserializer_sender_callback = nullptr;
        kviewstateserializer_sendersignalindex_callback = nullptr;
        kviewstateserializer_receivers_callback = nullptr;
        kviewstateserializer_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKViewStateSerializer_Metacall_Callback(KViewStateSerializer_Metacall_Callback cb) { kviewstateserializer_metacall_callback = cb; }
    inline void setKViewStateSerializer_IndexFromConfigString_Callback(KViewStateSerializer_IndexFromConfigString_Callback cb) { kviewstateserializer_indexfromconfigstring_callback = cb; }
    inline void setKViewStateSerializer_IndexToConfigString_Callback(KViewStateSerializer_IndexToConfigString_Callback cb) { kviewstateserializer_indextoconfigstring_callback = cb; }
    inline void setKViewStateSerializer_Event_Callback(KViewStateSerializer_Event_Callback cb) { kviewstateserializer_event_callback = cb; }
    inline void setKViewStateSerializer_EventFilter_Callback(KViewStateSerializer_EventFilter_Callback cb) { kviewstateserializer_eventfilter_callback = cb; }
    inline void setKViewStateSerializer_TimerEvent_Callback(KViewStateSerializer_TimerEvent_Callback cb) { kviewstateserializer_timerevent_callback = cb; }
    inline void setKViewStateSerializer_ChildEvent_Callback(KViewStateSerializer_ChildEvent_Callback cb) { kviewstateserializer_childevent_callback = cb; }
    inline void setKViewStateSerializer_CustomEvent_Callback(KViewStateSerializer_CustomEvent_Callback cb) { kviewstateserializer_customevent_callback = cb; }
    inline void setKViewStateSerializer_ConnectNotify_Callback(KViewStateSerializer_ConnectNotify_Callback cb) { kviewstateserializer_connectnotify_callback = cb; }
    inline void setKViewStateSerializer_DisconnectNotify_Callback(KViewStateSerializer_DisconnectNotify_Callback cb) { kviewstateserializer_disconnectnotify_callback = cb; }
    inline void setKViewStateSerializer_RestoreState_Callback(KViewStateSerializer_RestoreState_Callback cb) { kviewstateserializer_restorestate_callback = cb; }
    inline void setKViewStateSerializer_Sender_Callback(KViewStateSerializer_Sender_Callback cb) { kviewstateserializer_sender_callback = cb; }
    inline void setKViewStateSerializer_SenderSignalIndex_Callback(KViewStateSerializer_SenderSignalIndex_Callback cb) { kviewstateserializer_sendersignalindex_callback = cb; }
    inline void setKViewStateSerializer_Receivers_Callback(KViewStateSerializer_Receivers_Callback cb) { kviewstateserializer_receivers_callback = cb; }
    inline void setKViewStateSerializer_IsSignalConnected_Callback(KViewStateSerializer_IsSignalConnected_Callback cb) { kviewstateserializer_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKViewStateSerializer_Metacall_IsBase(bool value) const { kviewstateserializer_metacall_isbase = value; }
    inline void setKViewStateSerializer_IndexFromConfigString_IsBase(bool value) const { kviewstateserializer_indexfromconfigstring_isbase = value; }
    inline void setKViewStateSerializer_IndexToConfigString_IsBase(bool value) const { kviewstateserializer_indextoconfigstring_isbase = value; }
    inline void setKViewStateSerializer_Event_IsBase(bool value) const { kviewstateserializer_event_isbase = value; }
    inline void setKViewStateSerializer_EventFilter_IsBase(bool value) const { kviewstateserializer_eventfilter_isbase = value; }
    inline void setKViewStateSerializer_TimerEvent_IsBase(bool value) const { kviewstateserializer_timerevent_isbase = value; }
    inline void setKViewStateSerializer_ChildEvent_IsBase(bool value) const { kviewstateserializer_childevent_isbase = value; }
    inline void setKViewStateSerializer_CustomEvent_IsBase(bool value) const { kviewstateserializer_customevent_isbase = value; }
    inline void setKViewStateSerializer_ConnectNotify_IsBase(bool value) const { kviewstateserializer_connectnotify_isbase = value; }
    inline void setKViewStateSerializer_DisconnectNotify_IsBase(bool value) const { kviewstateserializer_disconnectnotify_isbase = value; }
    inline void setKViewStateSerializer_RestoreState_IsBase(bool value) const { kviewstateserializer_restorestate_isbase = value; }
    inline void setKViewStateSerializer_Sender_IsBase(bool value) const { kviewstateserializer_sender_isbase = value; }
    inline void setKViewStateSerializer_SenderSignalIndex_IsBase(bool value) const { kviewstateserializer_sendersignalindex_isbase = value; }
    inline void setKViewStateSerializer_Receivers_IsBase(bool value) const { kviewstateserializer_receivers_isbase = value; }
    inline void setKViewStateSerializer_IsSignalConnected_IsBase(bool value) const { kviewstateserializer_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kviewstateserializer_metacall_isbase) {
            kviewstateserializer_metacall_isbase = false;
            return KViewStateSerializer::qt_metacall(param1, param2, param3);
        } else if (kviewstateserializer_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kviewstateserializer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KViewStateSerializer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexFromConfigString(const QAbstractItemModel* model, const QString& key) const override {
        if (kviewstateserializer_indexfromconfigstring_callback != nullptr) {
            QAbstractItemModel* cbval1 = (QAbstractItemModel*)model;
            const QString key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            libqt_string key_str;
            key_str.len = key_b.length();
            key_str.data = static_cast<const char*>(malloc(key_str.len + 1));
            memcpy((void*)key_str.data, key_b.data(), key_str.len);
            ((char*)key_str.data)[key_str.len] = '\0';
            libqt_string cbval2 = key_str;

            QModelIndex* callback_ret = kviewstateserializer_indexfromconfigstring_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString indexToConfigString(const QModelIndex& index) const override {
        if (kviewstateserializer_indextoconfigstring_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            const char* callback_ret = kviewstateserializer_indextoconfigstring_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kviewstateserializer_event_isbase) {
            kviewstateserializer_event_isbase = false;
            return KViewStateSerializer::event(event);
        } else if (kviewstateserializer_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kviewstateserializer_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KViewStateSerializer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kviewstateserializer_eventfilter_isbase) {
            kviewstateserializer_eventfilter_isbase = false;
            return KViewStateSerializer::eventFilter(watched, event);
        } else if (kviewstateserializer_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kviewstateserializer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KViewStateSerializer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kviewstateserializer_timerevent_isbase) {
            kviewstateserializer_timerevent_isbase = false;
            KViewStateSerializer::timerEvent(event);
        } else if (kviewstateserializer_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kviewstateserializer_timerevent_callback(this, cbval1);
        } else {
            KViewStateSerializer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kviewstateserializer_childevent_isbase) {
            kviewstateserializer_childevent_isbase = false;
            KViewStateSerializer::childEvent(event);
        } else if (kviewstateserializer_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kviewstateserializer_childevent_callback(this, cbval1);
        } else {
            KViewStateSerializer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kviewstateserializer_customevent_isbase) {
            kviewstateserializer_customevent_isbase = false;
            KViewStateSerializer::customEvent(event);
        } else if (kviewstateserializer_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kviewstateserializer_customevent_callback(this, cbval1);
        } else {
            KViewStateSerializer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kviewstateserializer_connectnotify_isbase) {
            kviewstateserializer_connectnotify_isbase = false;
            KViewStateSerializer::connectNotify(signal);
        } else if (kviewstateserializer_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kviewstateserializer_connectnotify_callback(this, cbval1);
        } else {
            KViewStateSerializer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kviewstateserializer_disconnectnotify_isbase) {
            kviewstateserializer_disconnectnotify_isbase = false;
            KViewStateSerializer::disconnectNotify(signal);
        } else if (kviewstateserializer_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kviewstateserializer_disconnectnotify_callback(this, cbval1);
        } else {
            KViewStateSerializer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void restoreState() {
        if (kviewstateserializer_restorestate_isbase) {
            kviewstateserializer_restorestate_isbase = false;
            KViewStateSerializer::restoreState();
        } else if (kviewstateserializer_restorestate_callback != nullptr) {
            kviewstateserializer_restorestate_callback();
        } else {
            KViewStateSerializer::restoreState();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kviewstateserializer_sender_isbase) {
            kviewstateserializer_sender_isbase = false;
            return KViewStateSerializer::sender();
        } else if (kviewstateserializer_sender_callback != nullptr) {
            QObject* callback_ret = kviewstateserializer_sender_callback();
            return callback_ret;
        } else {
            return KViewStateSerializer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kviewstateserializer_sendersignalindex_isbase) {
            kviewstateserializer_sendersignalindex_isbase = false;
            return KViewStateSerializer::senderSignalIndex();
        } else if (kviewstateserializer_sendersignalindex_callback != nullptr) {
            int callback_ret = kviewstateserializer_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KViewStateSerializer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kviewstateserializer_receivers_isbase) {
            kviewstateserializer_receivers_isbase = false;
            return KViewStateSerializer::receivers(signal);
        } else if (kviewstateserializer_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kviewstateserializer_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KViewStateSerializer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kviewstateserializer_issignalconnected_isbase) {
            kviewstateserializer_issignalconnected_isbase = false;
            return KViewStateSerializer::isSignalConnected(signal);
        } else if (kviewstateserializer_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kviewstateserializer_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KViewStateSerializer::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend QModelIndex* KViewStateSerializer_IndexFromConfigString(const KViewStateSerializer* self, const QAbstractItemModel* model, const libqt_string key);
    friend QModelIndex* KViewStateSerializer_QBaseIndexFromConfigString(const KViewStateSerializer* self, const QAbstractItemModel* model, const libqt_string key);
    friend libqt_string KViewStateSerializer_IndexToConfigString(const KViewStateSerializer* self, const QModelIndex* index);
    friend libqt_string KViewStateSerializer_QBaseIndexToConfigString(const KViewStateSerializer* self, const QModelIndex* index);
    friend void KViewStateSerializer_TimerEvent(KViewStateSerializer* self, QTimerEvent* event);
    friend void KViewStateSerializer_QBaseTimerEvent(KViewStateSerializer* self, QTimerEvent* event);
    friend void KViewStateSerializer_ChildEvent(KViewStateSerializer* self, QChildEvent* event);
    friend void KViewStateSerializer_QBaseChildEvent(KViewStateSerializer* self, QChildEvent* event);
    friend void KViewStateSerializer_CustomEvent(KViewStateSerializer* self, QEvent* event);
    friend void KViewStateSerializer_QBaseCustomEvent(KViewStateSerializer* self, QEvent* event);
    friend void KViewStateSerializer_ConnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
    friend void KViewStateSerializer_QBaseConnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
    friend void KViewStateSerializer_DisconnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
    friend void KViewStateSerializer_QBaseDisconnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
    friend void KViewStateSerializer_RestoreState(KViewStateSerializer* self);
    friend void KViewStateSerializer_QBaseRestoreState(KViewStateSerializer* self);
    friend QObject* KViewStateSerializer_Sender(const KViewStateSerializer* self);
    friend QObject* KViewStateSerializer_QBaseSender(const KViewStateSerializer* self);
    friend int KViewStateSerializer_SenderSignalIndex(const KViewStateSerializer* self);
    friend int KViewStateSerializer_QBaseSenderSignalIndex(const KViewStateSerializer* self);
    friend int KViewStateSerializer_Receivers(const KViewStateSerializer* self, const char* signal);
    friend int KViewStateSerializer_QBaseReceivers(const KViewStateSerializer* self, const char* signal);
    friend bool KViewStateSerializer_IsSignalConnected(const KViewStateSerializer* self, const QMetaMethod* signal);
    friend bool KViewStateSerializer_QBaseIsSignalConnected(const KViewStateSerializer* self, const QMetaMethod* signal);
};

#endif
