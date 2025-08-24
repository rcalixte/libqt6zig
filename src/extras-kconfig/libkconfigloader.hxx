#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBVIRTUALKCONFIGLOADER_H
#define SRC_EXTRAS_KCONFIGC_LIBVIRTUALKCONFIGLOADER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigLoader so that we can call protected methods
class VirtualKConfigLoader final : public KConfigLoader {

  public:
    // Virtual class boolean flag
    bool isVirtualKConfigLoader = true;

    // Virtual class public types (including callbacks)
    using KConfigLoader_UsrSave_Callback = bool (*)();
    using KConfigLoader_Metacall_Callback = int (*)(KConfigLoader*, int, int, void**);
    using KConfigLoader_SetDefaults_Callback = void (*)();
    using KConfigLoader_UseDefaults_Callback = bool (*)(KConfigLoader*, bool);
    using KConfigLoader_UsrUseDefaults_Callback = bool (*)(KConfigLoader*, bool);
    using KConfigLoader_UsrSetDefaults_Callback = void (*)();
    using KConfigLoader_UsrRead_Callback = void (*)();
    using KConfigLoader_Event_Callback = bool (*)(KConfigLoader*, QEvent*);
    using KConfigLoader_EventFilter_Callback = bool (*)(KConfigLoader*, QObject*, QEvent*);
    using KConfigLoader_TimerEvent_Callback = void (*)(KConfigLoader*, QTimerEvent*);
    using KConfigLoader_ChildEvent_Callback = void (*)(KConfigLoader*, QChildEvent*);
    using KConfigLoader_CustomEvent_Callback = void (*)(KConfigLoader*, QEvent*);
    using KConfigLoader_ConnectNotify_Callback = void (*)(KConfigLoader*, QMetaMethod*);
    using KConfigLoader_DisconnectNotify_Callback = void (*)(KConfigLoader*, QMetaMethod*);
    using KConfigLoader_Sender_Callback = QObject* (*)();
    using KConfigLoader_SenderSignalIndex_Callback = int (*)();
    using KConfigLoader_Receivers_Callback = int (*)(const KConfigLoader*, const char*);
    using KConfigLoader_IsSignalConnected_Callback = bool (*)(const KConfigLoader*, QMetaMethod*);

  protected:
    // Instance callback storage
    KConfigLoader_UsrSave_Callback kconfigloader_usrsave_callback = nullptr;
    KConfigLoader_Metacall_Callback kconfigloader_metacall_callback = nullptr;
    KConfigLoader_SetDefaults_Callback kconfigloader_setdefaults_callback = nullptr;
    KConfigLoader_UseDefaults_Callback kconfigloader_usedefaults_callback = nullptr;
    KConfigLoader_UsrUseDefaults_Callback kconfigloader_usrusedefaults_callback = nullptr;
    KConfigLoader_UsrSetDefaults_Callback kconfigloader_usrsetdefaults_callback = nullptr;
    KConfigLoader_UsrRead_Callback kconfigloader_usrread_callback = nullptr;
    KConfigLoader_Event_Callback kconfigloader_event_callback = nullptr;
    KConfigLoader_EventFilter_Callback kconfigloader_eventfilter_callback = nullptr;
    KConfigLoader_TimerEvent_Callback kconfigloader_timerevent_callback = nullptr;
    KConfigLoader_ChildEvent_Callback kconfigloader_childevent_callback = nullptr;
    KConfigLoader_CustomEvent_Callback kconfigloader_customevent_callback = nullptr;
    KConfigLoader_ConnectNotify_Callback kconfigloader_connectnotify_callback = nullptr;
    KConfigLoader_DisconnectNotify_Callback kconfigloader_disconnectnotify_callback = nullptr;
    KConfigLoader_Sender_Callback kconfigloader_sender_callback = nullptr;
    KConfigLoader_SenderSignalIndex_Callback kconfigloader_sendersignalindex_callback = nullptr;
    KConfigLoader_Receivers_Callback kconfigloader_receivers_callback = nullptr;
    KConfigLoader_IsSignalConnected_Callback kconfigloader_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kconfigloader_usrsave_isbase = false;
    mutable bool kconfigloader_metacall_isbase = false;
    mutable bool kconfigloader_setdefaults_isbase = false;
    mutable bool kconfigloader_usedefaults_isbase = false;
    mutable bool kconfigloader_usrusedefaults_isbase = false;
    mutable bool kconfigloader_usrsetdefaults_isbase = false;
    mutable bool kconfigloader_usrread_isbase = false;
    mutable bool kconfigloader_event_isbase = false;
    mutable bool kconfigloader_eventfilter_isbase = false;
    mutable bool kconfigloader_timerevent_isbase = false;
    mutable bool kconfigloader_childevent_isbase = false;
    mutable bool kconfigloader_customevent_isbase = false;
    mutable bool kconfigloader_connectnotify_isbase = false;
    mutable bool kconfigloader_disconnectnotify_isbase = false;
    mutable bool kconfigloader_sender_isbase = false;
    mutable bool kconfigloader_sendersignalindex_isbase = false;
    mutable bool kconfigloader_receivers_isbase = false;
    mutable bool kconfigloader_issignalconnected_isbase = false;

  public:
    VirtualKConfigLoader(const QString& configFile, QIODevice* xml) : KConfigLoader(configFile, xml) {};
    VirtualKConfigLoader(const KConfigGroup& config, QIODevice* xml) : KConfigLoader(config, xml) {};
    VirtualKConfigLoader(const QString& configFile, QIODevice* xml, QObject* parent) : KConfigLoader(configFile, xml, parent) {};
    VirtualKConfigLoader(const KConfigGroup& config, QIODevice* xml, QObject* parent) : KConfigLoader(config, xml, parent) {};

    ~VirtualKConfigLoader() {
        kconfigloader_usrsave_callback = nullptr;
        kconfigloader_metacall_callback = nullptr;
        kconfigloader_setdefaults_callback = nullptr;
        kconfigloader_usedefaults_callback = nullptr;
        kconfigloader_usrusedefaults_callback = nullptr;
        kconfigloader_usrsetdefaults_callback = nullptr;
        kconfigloader_usrread_callback = nullptr;
        kconfigloader_event_callback = nullptr;
        kconfigloader_eventfilter_callback = nullptr;
        kconfigloader_timerevent_callback = nullptr;
        kconfigloader_childevent_callback = nullptr;
        kconfigloader_customevent_callback = nullptr;
        kconfigloader_connectnotify_callback = nullptr;
        kconfigloader_disconnectnotify_callback = nullptr;
        kconfigloader_sender_callback = nullptr;
        kconfigloader_sendersignalindex_callback = nullptr;
        kconfigloader_receivers_callback = nullptr;
        kconfigloader_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKConfigLoader_UsrSave_Callback(KConfigLoader_UsrSave_Callback cb) { kconfigloader_usrsave_callback = cb; }
    inline void setKConfigLoader_Metacall_Callback(KConfigLoader_Metacall_Callback cb) { kconfigloader_metacall_callback = cb; }
    inline void setKConfigLoader_SetDefaults_Callback(KConfigLoader_SetDefaults_Callback cb) { kconfigloader_setdefaults_callback = cb; }
    inline void setKConfigLoader_UseDefaults_Callback(KConfigLoader_UseDefaults_Callback cb) { kconfigloader_usedefaults_callback = cb; }
    inline void setKConfigLoader_UsrUseDefaults_Callback(KConfigLoader_UsrUseDefaults_Callback cb) { kconfigloader_usrusedefaults_callback = cb; }
    inline void setKConfigLoader_UsrSetDefaults_Callback(KConfigLoader_UsrSetDefaults_Callback cb) { kconfigloader_usrsetdefaults_callback = cb; }
    inline void setKConfigLoader_UsrRead_Callback(KConfigLoader_UsrRead_Callback cb) { kconfigloader_usrread_callback = cb; }
    inline void setKConfigLoader_Event_Callback(KConfigLoader_Event_Callback cb) { kconfigloader_event_callback = cb; }
    inline void setKConfigLoader_EventFilter_Callback(KConfigLoader_EventFilter_Callback cb) { kconfigloader_eventfilter_callback = cb; }
    inline void setKConfigLoader_TimerEvent_Callback(KConfigLoader_TimerEvent_Callback cb) { kconfigloader_timerevent_callback = cb; }
    inline void setKConfigLoader_ChildEvent_Callback(KConfigLoader_ChildEvent_Callback cb) { kconfigloader_childevent_callback = cb; }
    inline void setKConfigLoader_CustomEvent_Callback(KConfigLoader_CustomEvent_Callback cb) { kconfigloader_customevent_callback = cb; }
    inline void setKConfigLoader_ConnectNotify_Callback(KConfigLoader_ConnectNotify_Callback cb) { kconfigloader_connectnotify_callback = cb; }
    inline void setKConfigLoader_DisconnectNotify_Callback(KConfigLoader_DisconnectNotify_Callback cb) { kconfigloader_disconnectnotify_callback = cb; }
    inline void setKConfigLoader_Sender_Callback(KConfigLoader_Sender_Callback cb) { kconfigloader_sender_callback = cb; }
    inline void setKConfigLoader_SenderSignalIndex_Callback(KConfigLoader_SenderSignalIndex_Callback cb) { kconfigloader_sendersignalindex_callback = cb; }
    inline void setKConfigLoader_Receivers_Callback(KConfigLoader_Receivers_Callback cb) { kconfigloader_receivers_callback = cb; }
    inline void setKConfigLoader_IsSignalConnected_Callback(KConfigLoader_IsSignalConnected_Callback cb) { kconfigloader_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKConfigLoader_UsrSave_IsBase(bool value) const { kconfigloader_usrsave_isbase = value; }
    inline void setKConfigLoader_Metacall_IsBase(bool value) const { kconfigloader_metacall_isbase = value; }
    inline void setKConfigLoader_SetDefaults_IsBase(bool value) const { kconfigloader_setdefaults_isbase = value; }
    inline void setKConfigLoader_UseDefaults_IsBase(bool value) const { kconfigloader_usedefaults_isbase = value; }
    inline void setKConfigLoader_UsrUseDefaults_IsBase(bool value) const { kconfigloader_usrusedefaults_isbase = value; }
    inline void setKConfigLoader_UsrSetDefaults_IsBase(bool value) const { kconfigloader_usrsetdefaults_isbase = value; }
    inline void setKConfigLoader_UsrRead_IsBase(bool value) const { kconfigloader_usrread_isbase = value; }
    inline void setKConfigLoader_Event_IsBase(bool value) const { kconfigloader_event_isbase = value; }
    inline void setKConfigLoader_EventFilter_IsBase(bool value) const { kconfigloader_eventfilter_isbase = value; }
    inline void setKConfigLoader_TimerEvent_IsBase(bool value) const { kconfigloader_timerevent_isbase = value; }
    inline void setKConfigLoader_ChildEvent_IsBase(bool value) const { kconfigloader_childevent_isbase = value; }
    inline void setKConfigLoader_CustomEvent_IsBase(bool value) const { kconfigloader_customevent_isbase = value; }
    inline void setKConfigLoader_ConnectNotify_IsBase(bool value) const { kconfigloader_connectnotify_isbase = value; }
    inline void setKConfigLoader_DisconnectNotify_IsBase(bool value) const { kconfigloader_disconnectnotify_isbase = value; }
    inline void setKConfigLoader_Sender_IsBase(bool value) const { kconfigloader_sender_isbase = value; }
    inline void setKConfigLoader_SenderSignalIndex_IsBase(bool value) const { kconfigloader_sendersignalindex_isbase = value; }
    inline void setKConfigLoader_Receivers_IsBase(bool value) const { kconfigloader_receivers_isbase = value; }
    inline void setKConfigLoader_IsSignalConnected_IsBase(bool value) const { kconfigloader_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool usrSave() override {
        if (kconfigloader_usrsave_isbase) {
            kconfigloader_usrsave_isbase = false;
            return KConfigLoader::usrSave();
        } else if (kconfigloader_usrsave_callback != nullptr) {
            bool callback_ret = kconfigloader_usrsave_callback();
            return callback_ret;
        } else {
            return KConfigLoader::usrSave();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kconfigloader_metacall_isbase) {
            kconfigloader_metacall_isbase = false;
            return KConfigLoader::qt_metacall(param1, param2, param3);
        } else if (kconfigloader_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kconfigloader_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KConfigLoader::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefaults() override {
        if (kconfigloader_setdefaults_isbase) {
            kconfigloader_setdefaults_isbase = false;
            KConfigLoader::setDefaults();
        } else if (kconfigloader_setdefaults_callback != nullptr) {
            kconfigloader_setdefaults_callback();
        } else {
            KConfigLoader::setDefaults();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool useDefaults(bool b) override {
        if (kconfigloader_usedefaults_isbase) {
            kconfigloader_usedefaults_isbase = false;
            return KConfigLoader::useDefaults(b);
        } else if (kconfigloader_usedefaults_callback != nullptr) {
            bool cbval1 = b;

            bool callback_ret = kconfigloader_usedefaults_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigLoader::useDefaults(b);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool usrUseDefaults(bool b) override {
        if (kconfigloader_usrusedefaults_isbase) {
            kconfigloader_usrusedefaults_isbase = false;
            return KConfigLoader::usrUseDefaults(b);
        } else if (kconfigloader_usrusedefaults_callback != nullptr) {
            bool cbval1 = b;

            bool callback_ret = kconfigloader_usrusedefaults_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigLoader::usrUseDefaults(b);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrSetDefaults() override {
        if (kconfigloader_usrsetdefaults_isbase) {
            kconfigloader_usrsetdefaults_isbase = false;
            KConfigLoader::usrSetDefaults();
        } else if (kconfigloader_usrsetdefaults_callback != nullptr) {
            kconfigloader_usrsetdefaults_callback();
        } else {
            KConfigLoader::usrSetDefaults();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrRead() override {
        if (kconfigloader_usrread_isbase) {
            kconfigloader_usrread_isbase = false;
            KConfigLoader::usrRead();
        } else if (kconfigloader_usrread_callback != nullptr) {
            kconfigloader_usrread_callback();
        } else {
            KConfigLoader::usrRead();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kconfigloader_event_isbase) {
            kconfigloader_event_isbase = false;
            return KConfigLoader::event(event);
        } else if (kconfigloader_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kconfigloader_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigLoader::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kconfigloader_eventfilter_isbase) {
            kconfigloader_eventfilter_isbase = false;
            return KConfigLoader::eventFilter(watched, event);
        } else if (kconfigloader_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kconfigloader_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KConfigLoader::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kconfigloader_timerevent_isbase) {
            kconfigloader_timerevent_isbase = false;
            KConfigLoader::timerEvent(event);
        } else if (kconfigloader_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kconfigloader_timerevent_callback(this, cbval1);
        } else {
            KConfigLoader::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kconfigloader_childevent_isbase) {
            kconfigloader_childevent_isbase = false;
            KConfigLoader::childEvent(event);
        } else if (kconfigloader_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kconfigloader_childevent_callback(this, cbval1);
        } else {
            KConfigLoader::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kconfigloader_customevent_isbase) {
            kconfigloader_customevent_isbase = false;
            KConfigLoader::customEvent(event);
        } else if (kconfigloader_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kconfigloader_customevent_callback(this, cbval1);
        } else {
            KConfigLoader::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kconfigloader_connectnotify_isbase) {
            kconfigloader_connectnotify_isbase = false;
            KConfigLoader::connectNotify(signal);
        } else if (kconfigloader_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kconfigloader_connectnotify_callback(this, cbval1);
        } else {
            KConfigLoader::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kconfigloader_disconnectnotify_isbase) {
            kconfigloader_disconnectnotify_isbase = false;
            KConfigLoader::disconnectNotify(signal);
        } else if (kconfigloader_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kconfigloader_disconnectnotify_callback(this, cbval1);
        } else {
            KConfigLoader::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kconfigloader_sender_isbase) {
            kconfigloader_sender_isbase = false;
            return KConfigLoader::sender();
        } else if (kconfigloader_sender_callback != nullptr) {
            QObject* callback_ret = kconfigloader_sender_callback();
            return callback_ret;
        } else {
            return KConfigLoader::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kconfigloader_sendersignalindex_isbase) {
            kconfigloader_sendersignalindex_isbase = false;
            return KConfigLoader::senderSignalIndex();
        } else if (kconfigloader_sendersignalindex_callback != nullptr) {
            int callback_ret = kconfigloader_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KConfigLoader::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kconfigloader_receivers_isbase) {
            kconfigloader_receivers_isbase = false;
            return KConfigLoader::receivers(signal);
        } else if (kconfigloader_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kconfigloader_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KConfigLoader::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kconfigloader_issignalconnected_isbase) {
            kconfigloader_issignalconnected_isbase = false;
            return KConfigLoader::isSignalConnected(signal);
        } else if (kconfigloader_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kconfigloader_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigLoader::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KConfigLoader_UsrSave(KConfigLoader* self);
    friend bool KConfigLoader_QBaseUsrSave(KConfigLoader* self);
    friend bool KConfigLoader_UsrUseDefaults(KConfigLoader* self, bool b);
    friend bool KConfigLoader_QBaseUsrUseDefaults(KConfigLoader* self, bool b);
    friend void KConfigLoader_UsrSetDefaults(KConfigLoader* self);
    friend void KConfigLoader_QBaseUsrSetDefaults(KConfigLoader* self);
    friend void KConfigLoader_UsrRead(KConfigLoader* self);
    friend void KConfigLoader_QBaseUsrRead(KConfigLoader* self);
    friend void KConfigLoader_TimerEvent(KConfigLoader* self, QTimerEvent* event);
    friend void KConfigLoader_QBaseTimerEvent(KConfigLoader* self, QTimerEvent* event);
    friend void KConfigLoader_ChildEvent(KConfigLoader* self, QChildEvent* event);
    friend void KConfigLoader_QBaseChildEvent(KConfigLoader* self, QChildEvent* event);
    friend void KConfigLoader_CustomEvent(KConfigLoader* self, QEvent* event);
    friend void KConfigLoader_QBaseCustomEvent(KConfigLoader* self, QEvent* event);
    friend void KConfigLoader_ConnectNotify(KConfigLoader* self, const QMetaMethod* signal);
    friend void KConfigLoader_QBaseConnectNotify(KConfigLoader* self, const QMetaMethod* signal);
    friend void KConfigLoader_DisconnectNotify(KConfigLoader* self, const QMetaMethod* signal);
    friend void KConfigLoader_QBaseDisconnectNotify(KConfigLoader* self, const QMetaMethod* signal);
    friend QObject* KConfigLoader_Sender(const KConfigLoader* self);
    friend QObject* KConfigLoader_QBaseSender(const KConfigLoader* self);
    friend int KConfigLoader_SenderSignalIndex(const KConfigLoader* self);
    friend int KConfigLoader_QBaseSenderSignalIndex(const KConfigLoader* self);
    friend int KConfigLoader_Receivers(const KConfigLoader* self, const char* signal);
    friend int KConfigLoader_QBaseReceivers(const KConfigLoader* self, const char* signal);
    friend bool KConfigLoader_IsSignalConnected(const KConfigLoader* self, const QMetaMethod* signal);
    friend bool KConfigLoader_QBaseIsSignalConnected(const KConfigLoader* self, const QMetaMethod* signal);
};

#endif
