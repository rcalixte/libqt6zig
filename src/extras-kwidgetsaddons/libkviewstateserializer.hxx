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
    using KViewStateSerializer_MetaObject_Callback = QMetaObject* (*)();
    using KViewStateSerializer_Metacast_Callback = void* (*)(KViewStateSerializer*, const char*);
    using KViewStateSerializer_Metacall_Callback = int (*)(KViewStateSerializer*, int, int, void**);
    using KViewStateSerializer_IndexFromConfigString_Callback = QModelIndex* (*)(const KViewStateSerializer*, QAbstractItemModel*, const char*);
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
    KViewStateSerializer_MetaObject_Callback kviewstateserializer_metaobject_callback = nullptr;
    KViewStateSerializer_Metacast_Callback kviewstateserializer_metacast_callback = nullptr;
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
    mutable bool kviewstateserializer_metaobject_isbase = false;
    mutable bool kviewstateserializer_metacast_isbase = false;
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

    // Callback setters
    inline void setKViewStateSerializer_MetaObject_Callback(KViewStateSerializer_MetaObject_Callback cb) { kviewstateserializer_metaobject_callback = cb; }
    inline void setKViewStateSerializer_Metacast_Callback(KViewStateSerializer_Metacast_Callback cb) { kviewstateserializer_metacast_callback = cb; }
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
    inline void setKViewStateSerializer_MetaObject_IsBase(bool value) const { kviewstateserializer_metaobject_isbase = value; }
    inline void setKViewStateSerializer_Metacast_IsBase(bool value) const { kviewstateserializer_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kviewstateserializer_metaobject_isbase) {
            kviewstateserializer_metaobject_isbase = false;
            return KViewStateSerializer::metaObject();
        }
        auto metaobject_cb = kviewstateserializer_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KViewStateSerializer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kviewstateserializer_metacast_isbase) {
            kviewstateserializer_metacast_isbase = false;
            return KViewStateSerializer::qt_metacast(param1);
        }
        auto metacast_cb = kviewstateserializer_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KViewStateSerializer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kviewstateserializer_metacall_isbase) {
            kviewstateserializer_metacall_isbase = false;
            return KViewStateSerializer::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kviewstateserializer_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KViewStateSerializer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexFromConfigString(const QAbstractItemModel* model, const QString& key) const override {
        auto indexfromconfigstring_cb = kviewstateserializer_indexfromconfigstring_callback;
        if (indexfromconfigstring_cb) {
            QAbstractItemModel* cbval1 = (QAbstractItemModel*)model;
            const QString key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval2 = key_str;

            QModelIndex* callback_ret = indexfromconfigstring_cb(this, cbval1, cbval2);
            libqt_free(key_str);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QString indexToConfigString(const QModelIndex& index) const override {
        auto indextoconfigstring_cb = kviewstateserializer_indextoconfigstring_callback;
        if (indextoconfigstring_cb) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            const char* callback_ret = indextoconfigstring_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kviewstateserializer_event_isbase) {
            kviewstateserializer_event_isbase = false;
            return KViewStateSerializer::event(event);
        }
        auto event_cb = kviewstateserializer_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KViewStateSerializer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kviewstateserializer_eventfilter_isbase) {
            kviewstateserializer_eventfilter_isbase = false;
            return KViewStateSerializer::eventFilter(watched, event);
        }
        auto eventfilter_cb = kviewstateserializer_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KViewStateSerializer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kviewstateserializer_timerevent_isbase) {
            kviewstateserializer_timerevent_isbase = false;
            KViewStateSerializer::timerEvent(event);
            return;
        }
        auto timerevent_cb = kviewstateserializer_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KViewStateSerializer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kviewstateserializer_childevent_isbase) {
            kviewstateserializer_childevent_isbase = false;
            KViewStateSerializer::childEvent(event);
            return;
        }
        auto childevent_cb = kviewstateserializer_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KViewStateSerializer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kviewstateserializer_customevent_isbase) {
            kviewstateserializer_customevent_isbase = false;
            KViewStateSerializer::customEvent(event);
            return;
        }
        auto customevent_cb = kviewstateserializer_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KViewStateSerializer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kviewstateserializer_connectnotify_isbase) {
            kviewstateserializer_connectnotify_isbase = false;
            KViewStateSerializer::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kviewstateserializer_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KViewStateSerializer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kviewstateserializer_disconnectnotify_isbase) {
            kviewstateserializer_disconnectnotify_isbase = false;
            KViewStateSerializer::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kviewstateserializer_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KViewStateSerializer::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void restoreState() {
        if (kviewstateserializer_restorestate_isbase) {
            kviewstateserializer_restorestate_isbase = false;
            KViewStateSerializer::restoreState();
            return;
        }
        auto restorestate_cb = kviewstateserializer_restorestate_callback;
        if (restorestate_cb) {
            restorestate_cb();
            return;
        }
        KViewStateSerializer::restoreState();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kviewstateserializer_sender_isbase) {
            kviewstateserializer_sender_isbase = false;
            return KViewStateSerializer::sender();
        }
        auto sender_cb = kviewstateserializer_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KViewStateSerializer::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kviewstateserializer_sendersignalindex_isbase) {
            kviewstateserializer_sendersignalindex_isbase = false;
            return KViewStateSerializer::senderSignalIndex();
        }
        auto sendersignalindex_cb = kviewstateserializer_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KViewStateSerializer::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kviewstateserializer_receivers_isbase) {
            kviewstateserializer_receivers_isbase = false;
            return KViewStateSerializer::receivers(signal);
        }
        auto receivers_cb = kviewstateserializer_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KViewStateSerializer::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kviewstateserializer_issignalconnected_isbase) {
            kviewstateserializer_issignalconnected_isbase = false;
            return KViewStateSerializer::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kviewstateserializer_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KViewStateSerializer::isSignalConnected(signal);
    }

    // Friend functions
    friend QModelIndex* KViewStateSerializer_IndexFromConfigString(const KViewStateSerializer* self, const QAbstractItemModel* model, const libqt_string key);
    friend QModelIndex* KViewStateSerializer_SuperIndexFromConfigString(const KViewStateSerializer* self, const QAbstractItemModel* model, const libqt_string key);
    friend libqt_string KViewStateSerializer_IndexToConfigString(const KViewStateSerializer* self, const QModelIndex* index);
    friend libqt_string KViewStateSerializer_SuperIndexToConfigString(const KViewStateSerializer* self, const QModelIndex* index);
    friend void KViewStateSerializer_TimerEvent(KViewStateSerializer* self, QTimerEvent* event);
    friend void KViewStateSerializer_SuperTimerEvent(KViewStateSerializer* self, QTimerEvent* event);
    friend void KViewStateSerializer_ChildEvent(KViewStateSerializer* self, QChildEvent* event);
    friend void KViewStateSerializer_SuperChildEvent(KViewStateSerializer* self, QChildEvent* event);
    friend void KViewStateSerializer_CustomEvent(KViewStateSerializer* self, QEvent* event);
    friend void KViewStateSerializer_SuperCustomEvent(KViewStateSerializer* self, QEvent* event);
    friend void KViewStateSerializer_ConnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
    friend void KViewStateSerializer_SuperConnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
    friend void KViewStateSerializer_DisconnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
    friend void KViewStateSerializer_SuperDisconnectNotify(KViewStateSerializer* self, const QMetaMethod* signal);
    friend void KViewStateSerializer_RestoreState(KViewStateSerializer* self);
    friend void KViewStateSerializer_SuperRestoreState(KViewStateSerializer* self);
    friend QObject* KViewStateSerializer_Sender(const KViewStateSerializer* self);
    friend QObject* KViewStateSerializer_SuperSender(const KViewStateSerializer* self);
    friend int KViewStateSerializer_SenderSignalIndex(const KViewStateSerializer* self);
    friend int KViewStateSerializer_SuperSenderSignalIndex(const KViewStateSerializer* self);
    friend int KViewStateSerializer_Receivers(const KViewStateSerializer* self, const char* signal);
    friend int KViewStateSerializer_SuperReceivers(const KViewStateSerializer* self, const char* signal);
    friend bool KViewStateSerializer_IsSignalConnected(const KViewStateSerializer* self, const QMetaMethod* signal);
    friend bool KViewStateSerializer_SuperIsSignalConnected(const KViewStateSerializer* self, const QMetaMethod* signal);
};

#endif
