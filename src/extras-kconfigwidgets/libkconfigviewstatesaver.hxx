#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKCONFIGVIEWSTATESAVER_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKCONFIGVIEWSTATESAVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigViewStateSaver so that we can call protected methods
class VirtualKConfigViewStateSaver : public KConfigViewStateSaver {

  public:
    // Virtual class boolean flag
    bool isVirtualKConfigViewStateSaver = true;

    // Virtual class public types (including callbacks)
    using KConfigViewStateSaver_Metacall_Callback = int (*)(KConfigViewStateSaver*, int, int, void**);
    using KConfigViewStateSaver_IndexFromConfigString_Callback = QModelIndex* (*)(const KConfigViewStateSaver*, QAbstractItemModel*, libqt_string);
    using KConfigViewStateSaver_IndexToConfigString_Callback = const char* (*)(const KConfigViewStateSaver*, QModelIndex*);
    using KConfigViewStateSaver_Event_Callback = bool (*)(KConfigViewStateSaver*, QEvent*);
    using KConfigViewStateSaver_EventFilter_Callback = bool (*)(KConfigViewStateSaver*, QObject*, QEvent*);
    using KConfigViewStateSaver_TimerEvent_Callback = void (*)(KConfigViewStateSaver*, QTimerEvent*);
    using KConfigViewStateSaver_ChildEvent_Callback = void (*)(KConfigViewStateSaver*, QChildEvent*);
    using KConfigViewStateSaver_CustomEvent_Callback = void (*)(KConfigViewStateSaver*, QEvent*);
    using KConfigViewStateSaver_ConnectNotify_Callback = void (*)(KConfigViewStateSaver*, QMetaMethod*);
    using KConfigViewStateSaver_DisconnectNotify_Callback = void (*)(KConfigViewStateSaver*, QMetaMethod*);
    using KConfigViewStateSaver_Sender_Callback = QObject* (*)();
    using KConfigViewStateSaver_SenderSignalIndex_Callback = int (*)();
    using KConfigViewStateSaver_Receivers_Callback = int (*)(const KConfigViewStateSaver*, const char*);
    using KConfigViewStateSaver_IsSignalConnected_Callback = bool (*)(const KConfigViewStateSaver*, QMetaMethod*);

  protected:
    // Instance callback storage
    KConfigViewStateSaver_Metacall_Callback kconfigviewstatesaver_metacall_callback = nullptr;
    KConfigViewStateSaver_IndexFromConfigString_Callback kconfigviewstatesaver_indexfromconfigstring_callback = nullptr;
    KConfigViewStateSaver_IndexToConfigString_Callback kconfigviewstatesaver_indextoconfigstring_callback = nullptr;
    KConfigViewStateSaver_Event_Callback kconfigviewstatesaver_event_callback = nullptr;
    KConfigViewStateSaver_EventFilter_Callback kconfigviewstatesaver_eventfilter_callback = nullptr;
    KConfigViewStateSaver_TimerEvent_Callback kconfigviewstatesaver_timerevent_callback = nullptr;
    KConfigViewStateSaver_ChildEvent_Callback kconfigviewstatesaver_childevent_callback = nullptr;
    KConfigViewStateSaver_CustomEvent_Callback kconfigviewstatesaver_customevent_callback = nullptr;
    KConfigViewStateSaver_ConnectNotify_Callback kconfigviewstatesaver_connectnotify_callback = nullptr;
    KConfigViewStateSaver_DisconnectNotify_Callback kconfigviewstatesaver_disconnectnotify_callback = nullptr;
    KConfigViewStateSaver_Sender_Callback kconfigviewstatesaver_sender_callback = nullptr;
    KConfigViewStateSaver_SenderSignalIndex_Callback kconfigviewstatesaver_sendersignalindex_callback = nullptr;
    KConfigViewStateSaver_Receivers_Callback kconfigviewstatesaver_receivers_callback = nullptr;
    KConfigViewStateSaver_IsSignalConnected_Callback kconfigviewstatesaver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kconfigviewstatesaver_metacall_isbase = false;
    mutable bool kconfigviewstatesaver_indexfromconfigstring_isbase = false;
    mutable bool kconfigviewstatesaver_indextoconfigstring_isbase = false;
    mutable bool kconfigviewstatesaver_event_isbase = false;
    mutable bool kconfigviewstatesaver_eventfilter_isbase = false;
    mutable bool kconfigviewstatesaver_timerevent_isbase = false;
    mutable bool kconfigviewstatesaver_childevent_isbase = false;
    mutable bool kconfigviewstatesaver_customevent_isbase = false;
    mutable bool kconfigviewstatesaver_connectnotify_isbase = false;
    mutable bool kconfigviewstatesaver_disconnectnotify_isbase = false;
    mutable bool kconfigviewstatesaver_sender_isbase = false;
    mutable bool kconfigviewstatesaver_sendersignalindex_isbase = false;
    mutable bool kconfigviewstatesaver_receivers_isbase = false;
    mutable bool kconfigviewstatesaver_issignalconnected_isbase = false;

  public:
    VirtualKConfigViewStateSaver() : KConfigViewStateSaver() {};
    VirtualKConfigViewStateSaver(QObject* parent) : KConfigViewStateSaver(parent) {};

    ~VirtualKConfigViewStateSaver() {
        kconfigviewstatesaver_metacall_callback = nullptr;
        kconfigviewstatesaver_indexfromconfigstring_callback = nullptr;
        kconfigviewstatesaver_indextoconfigstring_callback = nullptr;
        kconfigviewstatesaver_event_callback = nullptr;
        kconfigviewstatesaver_eventfilter_callback = nullptr;
        kconfigviewstatesaver_timerevent_callback = nullptr;
        kconfigviewstatesaver_childevent_callback = nullptr;
        kconfigviewstatesaver_customevent_callback = nullptr;
        kconfigviewstatesaver_connectnotify_callback = nullptr;
        kconfigviewstatesaver_disconnectnotify_callback = nullptr;
        kconfigviewstatesaver_sender_callback = nullptr;
        kconfigviewstatesaver_sendersignalindex_callback = nullptr;
        kconfigviewstatesaver_receivers_callback = nullptr;
        kconfigviewstatesaver_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKConfigViewStateSaver_Metacall_Callback(KConfigViewStateSaver_Metacall_Callback cb) { kconfigviewstatesaver_metacall_callback = cb; }
    inline void setKConfigViewStateSaver_IndexFromConfigString_Callback(KConfigViewStateSaver_IndexFromConfigString_Callback cb) { kconfigviewstatesaver_indexfromconfigstring_callback = cb; }
    inline void setKConfigViewStateSaver_IndexToConfigString_Callback(KConfigViewStateSaver_IndexToConfigString_Callback cb) { kconfigviewstatesaver_indextoconfigstring_callback = cb; }
    inline void setKConfigViewStateSaver_Event_Callback(KConfigViewStateSaver_Event_Callback cb) { kconfigviewstatesaver_event_callback = cb; }
    inline void setKConfigViewStateSaver_EventFilter_Callback(KConfigViewStateSaver_EventFilter_Callback cb) { kconfigviewstatesaver_eventfilter_callback = cb; }
    inline void setKConfigViewStateSaver_TimerEvent_Callback(KConfigViewStateSaver_TimerEvent_Callback cb) { kconfigviewstatesaver_timerevent_callback = cb; }
    inline void setKConfigViewStateSaver_ChildEvent_Callback(KConfigViewStateSaver_ChildEvent_Callback cb) { kconfigviewstatesaver_childevent_callback = cb; }
    inline void setKConfigViewStateSaver_CustomEvent_Callback(KConfigViewStateSaver_CustomEvent_Callback cb) { kconfigviewstatesaver_customevent_callback = cb; }
    inline void setKConfigViewStateSaver_ConnectNotify_Callback(KConfigViewStateSaver_ConnectNotify_Callback cb) { kconfigviewstatesaver_connectnotify_callback = cb; }
    inline void setKConfigViewStateSaver_DisconnectNotify_Callback(KConfigViewStateSaver_DisconnectNotify_Callback cb) { kconfigviewstatesaver_disconnectnotify_callback = cb; }
    inline void setKConfigViewStateSaver_Sender_Callback(KConfigViewStateSaver_Sender_Callback cb) { kconfigviewstatesaver_sender_callback = cb; }
    inline void setKConfigViewStateSaver_SenderSignalIndex_Callback(KConfigViewStateSaver_SenderSignalIndex_Callback cb) { kconfigviewstatesaver_sendersignalindex_callback = cb; }
    inline void setKConfigViewStateSaver_Receivers_Callback(KConfigViewStateSaver_Receivers_Callback cb) { kconfigviewstatesaver_receivers_callback = cb; }
    inline void setKConfigViewStateSaver_IsSignalConnected_Callback(KConfigViewStateSaver_IsSignalConnected_Callback cb) { kconfigviewstatesaver_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKConfigViewStateSaver_Metacall_IsBase(bool value) const { kconfigviewstatesaver_metacall_isbase = value; }
    inline void setKConfigViewStateSaver_IndexFromConfigString_IsBase(bool value) const { kconfigviewstatesaver_indexfromconfigstring_isbase = value; }
    inline void setKConfigViewStateSaver_IndexToConfigString_IsBase(bool value) const { kconfigviewstatesaver_indextoconfigstring_isbase = value; }
    inline void setKConfigViewStateSaver_Event_IsBase(bool value) const { kconfigviewstatesaver_event_isbase = value; }
    inline void setKConfigViewStateSaver_EventFilter_IsBase(bool value) const { kconfigviewstatesaver_eventfilter_isbase = value; }
    inline void setKConfigViewStateSaver_TimerEvent_IsBase(bool value) const { kconfigviewstatesaver_timerevent_isbase = value; }
    inline void setKConfigViewStateSaver_ChildEvent_IsBase(bool value) const { kconfigviewstatesaver_childevent_isbase = value; }
    inline void setKConfigViewStateSaver_CustomEvent_IsBase(bool value) const { kconfigviewstatesaver_customevent_isbase = value; }
    inline void setKConfigViewStateSaver_ConnectNotify_IsBase(bool value) const { kconfigviewstatesaver_connectnotify_isbase = value; }
    inline void setKConfigViewStateSaver_DisconnectNotify_IsBase(bool value) const { kconfigviewstatesaver_disconnectnotify_isbase = value; }
    inline void setKConfigViewStateSaver_Sender_IsBase(bool value) const { kconfigviewstatesaver_sender_isbase = value; }
    inline void setKConfigViewStateSaver_SenderSignalIndex_IsBase(bool value) const { kconfigviewstatesaver_sendersignalindex_isbase = value; }
    inline void setKConfigViewStateSaver_Receivers_IsBase(bool value) const { kconfigviewstatesaver_receivers_isbase = value; }
    inline void setKConfigViewStateSaver_IsSignalConnected_IsBase(bool value) const { kconfigviewstatesaver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kconfigviewstatesaver_metacall_isbase) {
            kconfigviewstatesaver_metacall_isbase = false;
            return KConfigViewStateSaver::qt_metacall(param1, param2, param3);
        } else if (kconfigviewstatesaver_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kconfigviewstatesaver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KConfigViewStateSaver::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexFromConfigString(const QAbstractItemModel* model, const QString& key) const override {
        if (kconfigviewstatesaver_indexfromconfigstring_callback != nullptr) {
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

            QModelIndex* callback_ret = kconfigviewstatesaver_indexfromconfigstring_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString indexToConfigString(const QModelIndex& index) const override {
        if (kconfigviewstatesaver_indextoconfigstring_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            const char* callback_ret = kconfigviewstatesaver_indextoconfigstring_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kconfigviewstatesaver_event_isbase) {
            kconfigviewstatesaver_event_isbase = false;
            return KConfigViewStateSaver::event(event);
        } else if (kconfigviewstatesaver_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kconfigviewstatesaver_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigViewStateSaver::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kconfigviewstatesaver_eventfilter_isbase) {
            kconfigviewstatesaver_eventfilter_isbase = false;
            return KConfigViewStateSaver::eventFilter(watched, event);
        } else if (kconfigviewstatesaver_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kconfigviewstatesaver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KConfigViewStateSaver::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kconfigviewstatesaver_timerevent_isbase) {
            kconfigviewstatesaver_timerevent_isbase = false;
            KConfigViewStateSaver::timerEvent(event);
        } else if (kconfigviewstatesaver_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kconfigviewstatesaver_timerevent_callback(this, cbval1);
        } else {
            KConfigViewStateSaver::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kconfigviewstatesaver_childevent_isbase) {
            kconfigviewstatesaver_childevent_isbase = false;
            KConfigViewStateSaver::childEvent(event);
        } else if (kconfigviewstatesaver_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kconfigviewstatesaver_childevent_callback(this, cbval1);
        } else {
            KConfigViewStateSaver::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kconfigviewstatesaver_customevent_isbase) {
            kconfigviewstatesaver_customevent_isbase = false;
            KConfigViewStateSaver::customEvent(event);
        } else if (kconfigviewstatesaver_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kconfigviewstatesaver_customevent_callback(this, cbval1);
        } else {
            KConfigViewStateSaver::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kconfigviewstatesaver_connectnotify_isbase) {
            kconfigviewstatesaver_connectnotify_isbase = false;
            KConfigViewStateSaver::connectNotify(signal);
        } else if (kconfigviewstatesaver_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kconfigviewstatesaver_connectnotify_callback(this, cbval1);
        } else {
            KConfigViewStateSaver::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kconfigviewstatesaver_disconnectnotify_isbase) {
            kconfigviewstatesaver_disconnectnotify_isbase = false;
            KConfigViewStateSaver::disconnectNotify(signal);
        } else if (kconfigviewstatesaver_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kconfigviewstatesaver_disconnectnotify_callback(this, cbval1);
        } else {
            KConfigViewStateSaver::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kconfigviewstatesaver_sender_isbase) {
            kconfigviewstatesaver_sender_isbase = false;
            return KConfigViewStateSaver::sender();
        } else if (kconfigviewstatesaver_sender_callback != nullptr) {
            QObject* callback_ret = kconfigviewstatesaver_sender_callback();
            return callback_ret;
        } else {
            return KConfigViewStateSaver::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kconfigviewstatesaver_sendersignalindex_isbase) {
            kconfigviewstatesaver_sendersignalindex_isbase = false;
            return KConfigViewStateSaver::senderSignalIndex();
        } else if (kconfigviewstatesaver_sendersignalindex_callback != nullptr) {
            int callback_ret = kconfigviewstatesaver_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KConfigViewStateSaver::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kconfigviewstatesaver_receivers_isbase) {
            kconfigviewstatesaver_receivers_isbase = false;
            return KConfigViewStateSaver::receivers(signal);
        } else if (kconfigviewstatesaver_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kconfigviewstatesaver_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KConfigViewStateSaver::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kconfigviewstatesaver_issignalconnected_isbase) {
            kconfigviewstatesaver_issignalconnected_isbase = false;
            return KConfigViewStateSaver::isSignalConnected(signal);
        } else if (kconfigviewstatesaver_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kconfigviewstatesaver_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigViewStateSaver::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend QModelIndex* KConfigViewStateSaver_IndexFromConfigString(const KConfigViewStateSaver* self, const QAbstractItemModel* model, const libqt_string key);
    friend QModelIndex* KConfigViewStateSaver_QBaseIndexFromConfigString(const KConfigViewStateSaver* self, const QAbstractItemModel* model, const libqt_string key);
    friend libqt_string KConfigViewStateSaver_IndexToConfigString(const KConfigViewStateSaver* self, const QModelIndex* index);
    friend libqt_string KConfigViewStateSaver_QBaseIndexToConfigString(const KConfigViewStateSaver* self, const QModelIndex* index);
    friend void KConfigViewStateSaver_TimerEvent(KConfigViewStateSaver* self, QTimerEvent* event);
    friend void KConfigViewStateSaver_QBaseTimerEvent(KConfigViewStateSaver* self, QTimerEvent* event);
    friend void KConfigViewStateSaver_ChildEvent(KConfigViewStateSaver* self, QChildEvent* event);
    friend void KConfigViewStateSaver_QBaseChildEvent(KConfigViewStateSaver* self, QChildEvent* event);
    friend void KConfigViewStateSaver_CustomEvent(KConfigViewStateSaver* self, QEvent* event);
    friend void KConfigViewStateSaver_QBaseCustomEvent(KConfigViewStateSaver* self, QEvent* event);
    friend void KConfigViewStateSaver_ConnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
    friend void KConfigViewStateSaver_QBaseConnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
    friend void KConfigViewStateSaver_DisconnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
    friend void KConfigViewStateSaver_QBaseDisconnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal);
    friend QObject* KConfigViewStateSaver_Sender(const KConfigViewStateSaver* self);
    friend QObject* KConfigViewStateSaver_QBaseSender(const KConfigViewStateSaver* self);
    friend int KConfigViewStateSaver_SenderSignalIndex(const KConfigViewStateSaver* self);
    friend int KConfigViewStateSaver_QBaseSenderSignalIndex(const KConfigViewStateSaver* self);
    friend int KConfigViewStateSaver_Receivers(const KConfigViewStateSaver* self, const char* signal);
    friend int KConfigViewStateSaver_QBaseReceivers(const KConfigViewStateSaver* self, const char* signal);
    friend bool KConfigViewStateSaver_IsSignalConnected(const KConfigViewStateSaver* self, const QMetaMethod* signal);
    friend bool KConfigViewStateSaver_QBaseIsSignalConnected(const KConfigViewStateSaver* self, const QMetaMethod* signal);
};

#endif
