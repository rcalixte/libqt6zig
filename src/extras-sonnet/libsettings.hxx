#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBVIRTUALSETTINGS_H
#define SRC_EXTRAS_SONNETC_LIBVIRTUALSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::Settings so that we can call protected methods
class VirtualSonnetSettings final : public Sonnet::Settings {

  public:
    // Virtual class boolean flag
    bool isVirtualSonnetSettings = true;

    // Virtual class public types (including callbacks)
    using Sonnet__Settings_Metacall_Callback = int (*)(Sonnet__Settings*, int, int, void**);
    using Sonnet__Settings_Event_Callback = bool (*)(Sonnet__Settings*, QEvent*);
    using Sonnet__Settings_EventFilter_Callback = bool (*)(Sonnet__Settings*, QObject*, QEvent*);
    using Sonnet__Settings_TimerEvent_Callback = void (*)(Sonnet__Settings*, QTimerEvent*);
    using Sonnet__Settings_ChildEvent_Callback = void (*)(Sonnet__Settings*, QChildEvent*);
    using Sonnet__Settings_CustomEvent_Callback = void (*)(Sonnet__Settings*, QEvent*);
    using Sonnet__Settings_ConnectNotify_Callback = void (*)(Sonnet__Settings*, QMetaMethod*);
    using Sonnet__Settings_DisconnectNotify_Callback = void (*)(Sonnet__Settings*, QMetaMethod*);
    using Sonnet__Settings_Sender_Callback = QObject* (*)();
    using Sonnet__Settings_SenderSignalIndex_Callback = int (*)();
    using Sonnet__Settings_Receivers_Callback = int (*)(const Sonnet__Settings*, const char*);
    using Sonnet__Settings_IsSignalConnected_Callback = bool (*)(const Sonnet__Settings*, QMetaMethod*);

  protected:
    // Instance callback storage
    Sonnet__Settings_Metacall_Callback sonnet__settings_metacall_callback = nullptr;
    Sonnet__Settings_Event_Callback sonnet__settings_event_callback = nullptr;
    Sonnet__Settings_EventFilter_Callback sonnet__settings_eventfilter_callback = nullptr;
    Sonnet__Settings_TimerEvent_Callback sonnet__settings_timerevent_callback = nullptr;
    Sonnet__Settings_ChildEvent_Callback sonnet__settings_childevent_callback = nullptr;
    Sonnet__Settings_CustomEvent_Callback sonnet__settings_customevent_callback = nullptr;
    Sonnet__Settings_ConnectNotify_Callback sonnet__settings_connectnotify_callback = nullptr;
    Sonnet__Settings_DisconnectNotify_Callback sonnet__settings_disconnectnotify_callback = nullptr;
    Sonnet__Settings_Sender_Callback sonnet__settings_sender_callback = nullptr;
    Sonnet__Settings_SenderSignalIndex_Callback sonnet__settings_sendersignalindex_callback = nullptr;
    Sonnet__Settings_Receivers_Callback sonnet__settings_receivers_callback = nullptr;
    Sonnet__Settings_IsSignalConnected_Callback sonnet__settings_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool sonnet__settings_metacall_isbase = false;
    mutable bool sonnet__settings_event_isbase = false;
    mutable bool sonnet__settings_eventfilter_isbase = false;
    mutable bool sonnet__settings_timerevent_isbase = false;
    mutable bool sonnet__settings_childevent_isbase = false;
    mutable bool sonnet__settings_customevent_isbase = false;
    mutable bool sonnet__settings_connectnotify_isbase = false;
    mutable bool sonnet__settings_disconnectnotify_isbase = false;
    mutable bool sonnet__settings_sender_isbase = false;
    mutable bool sonnet__settings_sendersignalindex_isbase = false;
    mutable bool sonnet__settings_receivers_isbase = false;
    mutable bool sonnet__settings_issignalconnected_isbase = false;

  public:
    VirtualSonnetSettings() : Sonnet::Settings() {};
    VirtualSonnetSettings(QObject* parent) : Sonnet::Settings(parent) {};

    ~VirtualSonnetSettings() {
        sonnet__settings_metacall_callback = nullptr;
        sonnet__settings_event_callback = nullptr;
        sonnet__settings_eventfilter_callback = nullptr;
        sonnet__settings_timerevent_callback = nullptr;
        sonnet__settings_childevent_callback = nullptr;
        sonnet__settings_customevent_callback = nullptr;
        sonnet__settings_connectnotify_callback = nullptr;
        sonnet__settings_disconnectnotify_callback = nullptr;
        sonnet__settings_sender_callback = nullptr;
        sonnet__settings_sendersignalindex_callback = nullptr;
        sonnet__settings_receivers_callback = nullptr;
        sonnet__settings_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setSonnet__Settings_Metacall_Callback(Sonnet__Settings_Metacall_Callback cb) { sonnet__settings_metacall_callback = cb; }
    inline void setSonnet__Settings_Event_Callback(Sonnet__Settings_Event_Callback cb) { sonnet__settings_event_callback = cb; }
    inline void setSonnet__Settings_EventFilter_Callback(Sonnet__Settings_EventFilter_Callback cb) { sonnet__settings_eventfilter_callback = cb; }
    inline void setSonnet__Settings_TimerEvent_Callback(Sonnet__Settings_TimerEvent_Callback cb) { sonnet__settings_timerevent_callback = cb; }
    inline void setSonnet__Settings_ChildEvent_Callback(Sonnet__Settings_ChildEvent_Callback cb) { sonnet__settings_childevent_callback = cb; }
    inline void setSonnet__Settings_CustomEvent_Callback(Sonnet__Settings_CustomEvent_Callback cb) { sonnet__settings_customevent_callback = cb; }
    inline void setSonnet__Settings_ConnectNotify_Callback(Sonnet__Settings_ConnectNotify_Callback cb) { sonnet__settings_connectnotify_callback = cb; }
    inline void setSonnet__Settings_DisconnectNotify_Callback(Sonnet__Settings_DisconnectNotify_Callback cb) { sonnet__settings_disconnectnotify_callback = cb; }
    inline void setSonnet__Settings_Sender_Callback(Sonnet__Settings_Sender_Callback cb) { sonnet__settings_sender_callback = cb; }
    inline void setSonnet__Settings_SenderSignalIndex_Callback(Sonnet__Settings_SenderSignalIndex_Callback cb) { sonnet__settings_sendersignalindex_callback = cb; }
    inline void setSonnet__Settings_Receivers_Callback(Sonnet__Settings_Receivers_Callback cb) { sonnet__settings_receivers_callback = cb; }
    inline void setSonnet__Settings_IsSignalConnected_Callback(Sonnet__Settings_IsSignalConnected_Callback cb) { sonnet__settings_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setSonnet__Settings_Metacall_IsBase(bool value) const { sonnet__settings_metacall_isbase = value; }
    inline void setSonnet__Settings_Event_IsBase(bool value) const { sonnet__settings_event_isbase = value; }
    inline void setSonnet__Settings_EventFilter_IsBase(bool value) const { sonnet__settings_eventfilter_isbase = value; }
    inline void setSonnet__Settings_TimerEvent_IsBase(bool value) const { sonnet__settings_timerevent_isbase = value; }
    inline void setSonnet__Settings_ChildEvent_IsBase(bool value) const { sonnet__settings_childevent_isbase = value; }
    inline void setSonnet__Settings_CustomEvent_IsBase(bool value) const { sonnet__settings_customevent_isbase = value; }
    inline void setSonnet__Settings_ConnectNotify_IsBase(bool value) const { sonnet__settings_connectnotify_isbase = value; }
    inline void setSonnet__Settings_DisconnectNotify_IsBase(bool value) const { sonnet__settings_disconnectnotify_isbase = value; }
    inline void setSonnet__Settings_Sender_IsBase(bool value) const { sonnet__settings_sender_isbase = value; }
    inline void setSonnet__Settings_SenderSignalIndex_IsBase(bool value) const { sonnet__settings_sendersignalindex_isbase = value; }
    inline void setSonnet__Settings_Receivers_IsBase(bool value) const { sonnet__settings_receivers_isbase = value; }
    inline void setSonnet__Settings_IsSignalConnected_IsBase(bool value) const { sonnet__settings_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__settings_metacall_isbase) {
            sonnet__settings_metacall_isbase = false;
            return Sonnet__Settings::qt_metacall(param1, param2, param3);
        } else if (sonnet__settings_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = sonnet__settings_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Settings::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__settings_event_isbase) {
            sonnet__settings_event_isbase = false;
            return Sonnet__Settings::event(event);
        } else if (sonnet__settings_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = sonnet__settings_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__Settings::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (sonnet__settings_eventfilter_isbase) {
            sonnet__settings_eventfilter_isbase = false;
            return Sonnet__Settings::eventFilter(watched, event);
        } else if (sonnet__settings_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sonnet__settings_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Sonnet__Settings::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__settings_timerevent_isbase) {
            sonnet__settings_timerevent_isbase = false;
            Sonnet__Settings::timerEvent(event);
        } else if (sonnet__settings_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            sonnet__settings_timerevent_callback(this, cbval1);
        } else {
            Sonnet__Settings::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__settings_childevent_isbase) {
            sonnet__settings_childevent_isbase = false;
            Sonnet__Settings::childEvent(event);
        } else if (sonnet__settings_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            sonnet__settings_childevent_callback(this, cbval1);
        } else {
            Sonnet__Settings::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__settings_customevent_isbase) {
            sonnet__settings_customevent_isbase = false;
            Sonnet__Settings::customEvent(event);
        } else if (sonnet__settings_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__settings_customevent_callback(this, cbval1);
        } else {
            Sonnet__Settings::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__settings_connectnotify_isbase) {
            sonnet__settings_connectnotify_isbase = false;
            Sonnet__Settings::connectNotify(signal);
        } else if (sonnet__settings_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__settings_connectnotify_callback(this, cbval1);
        } else {
            Sonnet__Settings::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__settings_disconnectnotify_isbase) {
            sonnet__settings_disconnectnotify_isbase = false;
            Sonnet__Settings::disconnectNotify(signal);
        } else if (sonnet__settings_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__settings_disconnectnotify_callback(this, cbval1);
        } else {
            Sonnet__Settings::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (sonnet__settings_sender_isbase) {
            sonnet__settings_sender_isbase = false;
            return Sonnet__Settings::sender();
        } else if (sonnet__settings_sender_callback != nullptr) {
            QObject* callback_ret = sonnet__settings_sender_callback();
            return callback_ret;
        } else {
            return Sonnet__Settings::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (sonnet__settings_sendersignalindex_isbase) {
            sonnet__settings_sendersignalindex_isbase = false;
            return Sonnet__Settings::senderSignalIndex();
        } else if (sonnet__settings_sendersignalindex_callback != nullptr) {
            int callback_ret = sonnet__settings_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Settings::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (sonnet__settings_receivers_isbase) {
            sonnet__settings_receivers_isbase = false;
            return Sonnet__Settings::receivers(signal);
        } else if (sonnet__settings_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = sonnet__settings_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Settings::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (sonnet__settings_issignalconnected_isbase) {
            sonnet__settings_issignalconnected_isbase = false;
            return Sonnet__Settings::isSignalConnected(signal);
        } else if (sonnet__settings_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = sonnet__settings_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__Settings::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void Sonnet__Settings_TimerEvent(Sonnet::Settings* self, QTimerEvent* event);
    friend void Sonnet__Settings_QBaseTimerEvent(Sonnet::Settings* self, QTimerEvent* event);
    friend void Sonnet__Settings_ChildEvent(Sonnet::Settings* self, QChildEvent* event);
    friend void Sonnet__Settings_QBaseChildEvent(Sonnet::Settings* self, QChildEvent* event);
    friend void Sonnet__Settings_CustomEvent(Sonnet::Settings* self, QEvent* event);
    friend void Sonnet__Settings_QBaseCustomEvent(Sonnet::Settings* self, QEvent* event);
    friend void Sonnet__Settings_ConnectNotify(Sonnet::Settings* self, const QMetaMethod* signal);
    friend void Sonnet__Settings_QBaseConnectNotify(Sonnet::Settings* self, const QMetaMethod* signal);
    friend void Sonnet__Settings_DisconnectNotify(Sonnet::Settings* self, const QMetaMethod* signal);
    friend void Sonnet__Settings_QBaseDisconnectNotify(Sonnet::Settings* self, const QMetaMethod* signal);
    friend QObject* Sonnet__Settings_Sender(const Sonnet::Settings* self);
    friend QObject* Sonnet__Settings_QBaseSender(const Sonnet::Settings* self);
    friend int Sonnet__Settings_SenderSignalIndex(const Sonnet::Settings* self);
    friend int Sonnet__Settings_QBaseSenderSignalIndex(const Sonnet::Settings* self);
    friend int Sonnet__Settings_Receivers(const Sonnet::Settings* self, const char* signal);
    friend int Sonnet__Settings_QBaseReceivers(const Sonnet::Settings* self, const char* signal);
    friend bool Sonnet__Settings_IsSignalConnected(const Sonnet::Settings* self, const QMetaMethod* signal);
    friend bool Sonnet__Settings_QBaseIsSignalConnected(const Sonnet::Settings* self, const QMetaMethod* signal);
};

#endif
