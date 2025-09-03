#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESC_LIBVIRTUALKICONLOADER_H
#define SRC_EXTRAS_KICONTHEMESC_LIBVIRTUALKICONLOADER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIconLoader so that we can call protected methods
class VirtualKIconLoader final : public KIconLoader {

  public:
    // Virtual class boolean flag
    bool isVirtualKIconLoader = true;

    // Virtual class public types (including callbacks)
    using KIconLoader_Metacall_Callback = int (*)(KIconLoader*, int, int, void**);
    using KIconLoader_Event_Callback = bool (*)(KIconLoader*, QEvent*);
    using KIconLoader_EventFilter_Callback = bool (*)(KIconLoader*, QObject*, QEvent*);
    using KIconLoader_TimerEvent_Callback = void (*)(KIconLoader*, QTimerEvent*);
    using KIconLoader_ChildEvent_Callback = void (*)(KIconLoader*, QChildEvent*);
    using KIconLoader_CustomEvent_Callback = void (*)(KIconLoader*, QEvent*);
    using KIconLoader_ConnectNotify_Callback = void (*)(KIconLoader*, QMetaMethod*);
    using KIconLoader_DisconnectNotify_Callback = void (*)(KIconLoader*, QMetaMethod*);
    using KIconLoader_Sender_Callback = QObject* (*)();
    using KIconLoader_SenderSignalIndex_Callback = int (*)();
    using KIconLoader_Receivers_Callback = int (*)(const KIconLoader*, const char*);
    using KIconLoader_IsSignalConnected_Callback = bool (*)(const KIconLoader*, QMetaMethod*);

  protected:
    // Instance callback storage
    KIconLoader_Metacall_Callback kiconloader_metacall_callback = nullptr;
    KIconLoader_Event_Callback kiconloader_event_callback = nullptr;
    KIconLoader_EventFilter_Callback kiconloader_eventfilter_callback = nullptr;
    KIconLoader_TimerEvent_Callback kiconloader_timerevent_callback = nullptr;
    KIconLoader_ChildEvent_Callback kiconloader_childevent_callback = nullptr;
    KIconLoader_CustomEvent_Callback kiconloader_customevent_callback = nullptr;
    KIconLoader_ConnectNotify_Callback kiconloader_connectnotify_callback = nullptr;
    KIconLoader_DisconnectNotify_Callback kiconloader_disconnectnotify_callback = nullptr;
    KIconLoader_Sender_Callback kiconloader_sender_callback = nullptr;
    KIconLoader_SenderSignalIndex_Callback kiconloader_sendersignalindex_callback = nullptr;
    KIconLoader_Receivers_Callback kiconloader_receivers_callback = nullptr;
    KIconLoader_IsSignalConnected_Callback kiconloader_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kiconloader_metacall_isbase = false;
    mutable bool kiconloader_event_isbase = false;
    mutable bool kiconloader_eventfilter_isbase = false;
    mutable bool kiconloader_timerevent_isbase = false;
    mutable bool kiconloader_childevent_isbase = false;
    mutable bool kiconloader_customevent_isbase = false;
    mutable bool kiconloader_connectnotify_isbase = false;
    mutable bool kiconloader_disconnectnotify_isbase = false;
    mutable bool kiconloader_sender_isbase = false;
    mutable bool kiconloader_sendersignalindex_isbase = false;
    mutable bool kiconloader_receivers_isbase = false;
    mutable bool kiconloader_issignalconnected_isbase = false;

  public:
    VirtualKIconLoader() : KIconLoader() {};
    VirtualKIconLoader(const QString& appname) : KIconLoader(appname) {};
    VirtualKIconLoader(const QString& appname, const QList<QString>& extraSearchPaths) : KIconLoader(appname, extraSearchPaths) {};
    VirtualKIconLoader(const QString& appname, const QList<QString>& extraSearchPaths, QObject* parent) : KIconLoader(appname, extraSearchPaths, parent) {};

    ~VirtualKIconLoader() {
        kiconloader_metacall_callback = nullptr;
        kiconloader_event_callback = nullptr;
        kiconloader_eventfilter_callback = nullptr;
        kiconloader_timerevent_callback = nullptr;
        kiconloader_childevent_callback = nullptr;
        kiconloader_customevent_callback = nullptr;
        kiconloader_connectnotify_callback = nullptr;
        kiconloader_disconnectnotify_callback = nullptr;
        kiconloader_sender_callback = nullptr;
        kiconloader_sendersignalindex_callback = nullptr;
        kiconloader_receivers_callback = nullptr;
        kiconloader_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKIconLoader_Metacall_Callback(KIconLoader_Metacall_Callback cb) { kiconloader_metacall_callback = cb; }
    inline void setKIconLoader_Event_Callback(KIconLoader_Event_Callback cb) { kiconloader_event_callback = cb; }
    inline void setKIconLoader_EventFilter_Callback(KIconLoader_EventFilter_Callback cb) { kiconloader_eventfilter_callback = cb; }
    inline void setKIconLoader_TimerEvent_Callback(KIconLoader_TimerEvent_Callback cb) { kiconloader_timerevent_callback = cb; }
    inline void setKIconLoader_ChildEvent_Callback(KIconLoader_ChildEvent_Callback cb) { kiconloader_childevent_callback = cb; }
    inline void setKIconLoader_CustomEvent_Callback(KIconLoader_CustomEvent_Callback cb) { kiconloader_customevent_callback = cb; }
    inline void setKIconLoader_ConnectNotify_Callback(KIconLoader_ConnectNotify_Callback cb) { kiconloader_connectnotify_callback = cb; }
    inline void setKIconLoader_DisconnectNotify_Callback(KIconLoader_DisconnectNotify_Callback cb) { kiconloader_disconnectnotify_callback = cb; }
    inline void setKIconLoader_Sender_Callback(KIconLoader_Sender_Callback cb) { kiconloader_sender_callback = cb; }
    inline void setKIconLoader_SenderSignalIndex_Callback(KIconLoader_SenderSignalIndex_Callback cb) { kiconloader_sendersignalindex_callback = cb; }
    inline void setKIconLoader_Receivers_Callback(KIconLoader_Receivers_Callback cb) { kiconloader_receivers_callback = cb; }
    inline void setKIconLoader_IsSignalConnected_Callback(KIconLoader_IsSignalConnected_Callback cb) { kiconloader_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIconLoader_Metacall_IsBase(bool value) const { kiconloader_metacall_isbase = value; }
    inline void setKIconLoader_Event_IsBase(bool value) const { kiconloader_event_isbase = value; }
    inline void setKIconLoader_EventFilter_IsBase(bool value) const { kiconloader_eventfilter_isbase = value; }
    inline void setKIconLoader_TimerEvent_IsBase(bool value) const { kiconloader_timerevent_isbase = value; }
    inline void setKIconLoader_ChildEvent_IsBase(bool value) const { kiconloader_childevent_isbase = value; }
    inline void setKIconLoader_CustomEvent_IsBase(bool value) const { kiconloader_customevent_isbase = value; }
    inline void setKIconLoader_ConnectNotify_IsBase(bool value) const { kiconloader_connectnotify_isbase = value; }
    inline void setKIconLoader_DisconnectNotify_IsBase(bool value) const { kiconloader_disconnectnotify_isbase = value; }
    inline void setKIconLoader_Sender_IsBase(bool value) const { kiconloader_sender_isbase = value; }
    inline void setKIconLoader_SenderSignalIndex_IsBase(bool value) const { kiconloader_sendersignalindex_isbase = value; }
    inline void setKIconLoader_Receivers_IsBase(bool value) const { kiconloader_receivers_isbase = value; }
    inline void setKIconLoader_IsSignalConnected_IsBase(bool value) const { kiconloader_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kiconloader_metacall_isbase) {
            kiconloader_metacall_isbase = false;
            return KIconLoader::qt_metacall(param1, param2, param3);
        } else if (kiconloader_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kiconloader_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIconLoader::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kiconloader_event_isbase) {
            kiconloader_event_isbase = false;
            return KIconLoader::event(event);
        } else if (kiconloader_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kiconloader_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIconLoader::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kiconloader_eventfilter_isbase) {
            kiconloader_eventfilter_isbase = false;
            return KIconLoader::eventFilter(watched, event);
        } else if (kiconloader_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kiconloader_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIconLoader::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kiconloader_timerevent_isbase) {
            kiconloader_timerevent_isbase = false;
            KIconLoader::timerEvent(event);
        } else if (kiconloader_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kiconloader_timerevent_callback(this, cbval1);
        } else {
            KIconLoader::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kiconloader_childevent_isbase) {
            kiconloader_childevent_isbase = false;
            KIconLoader::childEvent(event);
        } else if (kiconloader_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kiconloader_childevent_callback(this, cbval1);
        } else {
            KIconLoader::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kiconloader_customevent_isbase) {
            kiconloader_customevent_isbase = false;
            KIconLoader::customEvent(event);
        } else if (kiconloader_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kiconloader_customevent_callback(this, cbval1);
        } else {
            KIconLoader::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kiconloader_connectnotify_isbase) {
            kiconloader_connectnotify_isbase = false;
            KIconLoader::connectNotify(signal);
        } else if (kiconloader_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kiconloader_connectnotify_callback(this, cbval1);
        } else {
            KIconLoader::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kiconloader_disconnectnotify_isbase) {
            kiconloader_disconnectnotify_isbase = false;
            KIconLoader::disconnectNotify(signal);
        } else if (kiconloader_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kiconloader_disconnectnotify_callback(this, cbval1);
        } else {
            KIconLoader::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kiconloader_sender_isbase) {
            kiconloader_sender_isbase = false;
            return KIconLoader::sender();
        } else if (kiconloader_sender_callback != nullptr) {
            QObject* callback_ret = kiconloader_sender_callback();
            return callback_ret;
        } else {
            return KIconLoader::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kiconloader_sendersignalindex_isbase) {
            kiconloader_sendersignalindex_isbase = false;
            return KIconLoader::senderSignalIndex();
        } else if (kiconloader_sendersignalindex_callback != nullptr) {
            int callback_ret = kiconloader_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIconLoader::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kiconloader_receivers_isbase) {
            kiconloader_receivers_isbase = false;
            return KIconLoader::receivers(signal);
        } else if (kiconloader_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kiconloader_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIconLoader::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kiconloader_issignalconnected_isbase) {
            kiconloader_issignalconnected_isbase = false;
            return KIconLoader::isSignalConnected(signal);
        } else if (kiconloader_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kiconloader_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIconLoader::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KIconLoader_TimerEvent(KIconLoader* self, QTimerEvent* event);
    friend void KIconLoader_QBaseTimerEvent(KIconLoader* self, QTimerEvent* event);
    friend void KIconLoader_ChildEvent(KIconLoader* self, QChildEvent* event);
    friend void KIconLoader_QBaseChildEvent(KIconLoader* self, QChildEvent* event);
    friend void KIconLoader_CustomEvent(KIconLoader* self, QEvent* event);
    friend void KIconLoader_QBaseCustomEvent(KIconLoader* self, QEvent* event);
    friend void KIconLoader_ConnectNotify(KIconLoader* self, const QMetaMethod* signal);
    friend void KIconLoader_QBaseConnectNotify(KIconLoader* self, const QMetaMethod* signal);
    friend void KIconLoader_DisconnectNotify(KIconLoader* self, const QMetaMethod* signal);
    friend void KIconLoader_QBaseDisconnectNotify(KIconLoader* self, const QMetaMethod* signal);
    friend QObject* KIconLoader_Sender(const KIconLoader* self);
    friend QObject* KIconLoader_QBaseSender(const KIconLoader* self);
    friend int KIconLoader_SenderSignalIndex(const KIconLoader* self);
    friend int KIconLoader_QBaseSenderSignalIndex(const KIconLoader* self);
    friend int KIconLoader_Receivers(const KIconLoader* self, const char* signal);
    friend int KIconLoader_QBaseReceivers(const KIconLoader* self, const char* signal);
    friend bool KIconLoader_IsSignalConnected(const KIconLoader* self, const QMetaMethod* signal);
    friend bool KIconLoader_QBaseIsSignalConnected(const KIconLoader* self, const QMetaMethod* signal);
};

#endif
