#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBVIRTUALKCONFIGSKELETON_H
#define SRC_EXTRAS_KCONFIGC_LIBVIRTUALKCONFIGSKELETON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigSkeleton so that we can call protected methods
class VirtualKConfigSkeleton final : public KConfigSkeleton {

  public:
    // Virtual class boolean flag
    bool isVirtualKConfigSkeleton = true;

    // Virtual class public types (including callbacks)
    using KConfigSkeleton_Metacall_Callback = int (*)(KConfigSkeleton*, int, int, void**);
    using KConfigSkeleton_SetDefaults_Callback = void (*)();
    using KConfigSkeleton_UseDefaults_Callback = bool (*)(KConfigSkeleton*, bool);
    using KConfigSkeleton_UsrUseDefaults_Callback = bool (*)(KConfigSkeleton*, bool);
    using KConfigSkeleton_UsrSetDefaults_Callback = void (*)();
    using KConfigSkeleton_UsrRead_Callback = void (*)();
    using KConfigSkeleton_UsrSave_Callback = bool (*)();
    using KConfigSkeleton_Event_Callback = bool (*)(KConfigSkeleton*, QEvent*);
    using KConfigSkeleton_EventFilter_Callback = bool (*)(KConfigSkeleton*, QObject*, QEvent*);
    using KConfigSkeleton_TimerEvent_Callback = void (*)(KConfigSkeleton*, QTimerEvent*);
    using KConfigSkeleton_ChildEvent_Callback = void (*)(KConfigSkeleton*, QChildEvent*);
    using KConfigSkeleton_CustomEvent_Callback = void (*)(KConfigSkeleton*, QEvent*);
    using KConfigSkeleton_ConnectNotify_Callback = void (*)(KConfigSkeleton*, QMetaMethod*);
    using KConfigSkeleton_DisconnectNotify_Callback = void (*)(KConfigSkeleton*, QMetaMethod*);
    using KConfigSkeleton_Sender_Callback = QObject* (*)();
    using KConfigSkeleton_SenderSignalIndex_Callback = int (*)();
    using KConfigSkeleton_Receivers_Callback = int (*)(const KConfigSkeleton*, const char*);
    using KConfigSkeleton_IsSignalConnected_Callback = bool (*)(const KConfigSkeleton*, QMetaMethod*);

  protected:
    // Instance callback storage
    KConfigSkeleton_Metacall_Callback kconfigskeleton_metacall_callback = nullptr;
    KConfigSkeleton_SetDefaults_Callback kconfigskeleton_setdefaults_callback = nullptr;
    KConfigSkeleton_UseDefaults_Callback kconfigskeleton_usedefaults_callback = nullptr;
    KConfigSkeleton_UsrUseDefaults_Callback kconfigskeleton_usrusedefaults_callback = nullptr;
    KConfigSkeleton_UsrSetDefaults_Callback kconfigskeleton_usrsetdefaults_callback = nullptr;
    KConfigSkeleton_UsrRead_Callback kconfigskeleton_usrread_callback = nullptr;
    KConfigSkeleton_UsrSave_Callback kconfigskeleton_usrsave_callback = nullptr;
    KConfigSkeleton_Event_Callback kconfigskeleton_event_callback = nullptr;
    KConfigSkeleton_EventFilter_Callback kconfigskeleton_eventfilter_callback = nullptr;
    KConfigSkeleton_TimerEvent_Callback kconfigskeleton_timerevent_callback = nullptr;
    KConfigSkeleton_ChildEvent_Callback kconfigskeleton_childevent_callback = nullptr;
    KConfigSkeleton_CustomEvent_Callback kconfigskeleton_customevent_callback = nullptr;
    KConfigSkeleton_ConnectNotify_Callback kconfigskeleton_connectnotify_callback = nullptr;
    KConfigSkeleton_DisconnectNotify_Callback kconfigskeleton_disconnectnotify_callback = nullptr;
    KConfigSkeleton_Sender_Callback kconfigskeleton_sender_callback = nullptr;
    KConfigSkeleton_SenderSignalIndex_Callback kconfigskeleton_sendersignalindex_callback = nullptr;
    KConfigSkeleton_Receivers_Callback kconfigskeleton_receivers_callback = nullptr;
    KConfigSkeleton_IsSignalConnected_Callback kconfigskeleton_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kconfigskeleton_metacall_isbase = false;
    mutable bool kconfigskeleton_setdefaults_isbase = false;
    mutable bool kconfigskeleton_usedefaults_isbase = false;
    mutable bool kconfigskeleton_usrusedefaults_isbase = false;
    mutable bool kconfigskeleton_usrsetdefaults_isbase = false;
    mutable bool kconfigskeleton_usrread_isbase = false;
    mutable bool kconfigskeleton_usrsave_isbase = false;
    mutable bool kconfigskeleton_event_isbase = false;
    mutable bool kconfigskeleton_eventfilter_isbase = false;
    mutable bool kconfigskeleton_timerevent_isbase = false;
    mutable bool kconfigskeleton_childevent_isbase = false;
    mutable bool kconfigskeleton_customevent_isbase = false;
    mutable bool kconfigskeleton_connectnotify_isbase = false;
    mutable bool kconfigskeleton_disconnectnotify_isbase = false;
    mutable bool kconfigskeleton_sender_isbase = false;
    mutable bool kconfigskeleton_sendersignalindex_isbase = false;
    mutable bool kconfigskeleton_receivers_isbase = false;
    mutable bool kconfigskeleton_issignalconnected_isbase = false;

  public:
    VirtualKConfigSkeleton() : KConfigSkeleton() {};
    VirtualKConfigSkeleton(const QString& configname) : KConfigSkeleton(configname) {};
    VirtualKConfigSkeleton(const QString& configname, QObject* parent) : KConfigSkeleton(configname, parent) {};

    ~VirtualKConfigSkeleton() {
        kconfigskeleton_metacall_callback = nullptr;
        kconfigskeleton_setdefaults_callback = nullptr;
        kconfigskeleton_usedefaults_callback = nullptr;
        kconfigskeleton_usrusedefaults_callback = nullptr;
        kconfigskeleton_usrsetdefaults_callback = nullptr;
        kconfigskeleton_usrread_callback = nullptr;
        kconfigskeleton_usrsave_callback = nullptr;
        kconfigskeleton_event_callback = nullptr;
        kconfigskeleton_eventfilter_callback = nullptr;
        kconfigskeleton_timerevent_callback = nullptr;
        kconfigskeleton_childevent_callback = nullptr;
        kconfigskeleton_customevent_callback = nullptr;
        kconfigskeleton_connectnotify_callback = nullptr;
        kconfigskeleton_disconnectnotify_callback = nullptr;
        kconfigskeleton_sender_callback = nullptr;
        kconfigskeleton_sendersignalindex_callback = nullptr;
        kconfigskeleton_receivers_callback = nullptr;
        kconfigskeleton_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKConfigSkeleton_Metacall_Callback(KConfigSkeleton_Metacall_Callback cb) { kconfigskeleton_metacall_callback = cb; }
    inline void setKConfigSkeleton_SetDefaults_Callback(KConfigSkeleton_SetDefaults_Callback cb) { kconfigskeleton_setdefaults_callback = cb; }
    inline void setKConfigSkeleton_UseDefaults_Callback(KConfigSkeleton_UseDefaults_Callback cb) { kconfigskeleton_usedefaults_callback = cb; }
    inline void setKConfigSkeleton_UsrUseDefaults_Callback(KConfigSkeleton_UsrUseDefaults_Callback cb) { kconfigskeleton_usrusedefaults_callback = cb; }
    inline void setKConfigSkeleton_UsrSetDefaults_Callback(KConfigSkeleton_UsrSetDefaults_Callback cb) { kconfigskeleton_usrsetdefaults_callback = cb; }
    inline void setKConfigSkeleton_UsrRead_Callback(KConfigSkeleton_UsrRead_Callback cb) { kconfigskeleton_usrread_callback = cb; }
    inline void setKConfigSkeleton_UsrSave_Callback(KConfigSkeleton_UsrSave_Callback cb) { kconfigskeleton_usrsave_callback = cb; }
    inline void setKConfigSkeleton_Event_Callback(KConfigSkeleton_Event_Callback cb) { kconfigskeleton_event_callback = cb; }
    inline void setKConfigSkeleton_EventFilter_Callback(KConfigSkeleton_EventFilter_Callback cb) { kconfigskeleton_eventfilter_callback = cb; }
    inline void setKConfigSkeleton_TimerEvent_Callback(KConfigSkeleton_TimerEvent_Callback cb) { kconfigskeleton_timerevent_callback = cb; }
    inline void setKConfigSkeleton_ChildEvent_Callback(KConfigSkeleton_ChildEvent_Callback cb) { kconfigskeleton_childevent_callback = cb; }
    inline void setKConfigSkeleton_CustomEvent_Callback(KConfigSkeleton_CustomEvent_Callback cb) { kconfigskeleton_customevent_callback = cb; }
    inline void setKConfigSkeleton_ConnectNotify_Callback(KConfigSkeleton_ConnectNotify_Callback cb) { kconfigskeleton_connectnotify_callback = cb; }
    inline void setKConfigSkeleton_DisconnectNotify_Callback(KConfigSkeleton_DisconnectNotify_Callback cb) { kconfigskeleton_disconnectnotify_callback = cb; }
    inline void setKConfigSkeleton_Sender_Callback(KConfigSkeleton_Sender_Callback cb) { kconfigskeleton_sender_callback = cb; }
    inline void setKConfigSkeleton_SenderSignalIndex_Callback(KConfigSkeleton_SenderSignalIndex_Callback cb) { kconfigskeleton_sendersignalindex_callback = cb; }
    inline void setKConfigSkeleton_Receivers_Callback(KConfigSkeleton_Receivers_Callback cb) { kconfigskeleton_receivers_callback = cb; }
    inline void setKConfigSkeleton_IsSignalConnected_Callback(KConfigSkeleton_IsSignalConnected_Callback cb) { kconfigskeleton_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKConfigSkeleton_Metacall_IsBase(bool value) const { kconfigskeleton_metacall_isbase = value; }
    inline void setKConfigSkeleton_SetDefaults_IsBase(bool value) const { kconfigskeleton_setdefaults_isbase = value; }
    inline void setKConfigSkeleton_UseDefaults_IsBase(bool value) const { kconfigskeleton_usedefaults_isbase = value; }
    inline void setKConfigSkeleton_UsrUseDefaults_IsBase(bool value) const { kconfigskeleton_usrusedefaults_isbase = value; }
    inline void setKConfigSkeleton_UsrSetDefaults_IsBase(bool value) const { kconfigskeleton_usrsetdefaults_isbase = value; }
    inline void setKConfigSkeleton_UsrRead_IsBase(bool value) const { kconfigskeleton_usrread_isbase = value; }
    inline void setKConfigSkeleton_UsrSave_IsBase(bool value) const { kconfigskeleton_usrsave_isbase = value; }
    inline void setKConfigSkeleton_Event_IsBase(bool value) const { kconfigskeleton_event_isbase = value; }
    inline void setKConfigSkeleton_EventFilter_IsBase(bool value) const { kconfigskeleton_eventfilter_isbase = value; }
    inline void setKConfigSkeleton_TimerEvent_IsBase(bool value) const { kconfigskeleton_timerevent_isbase = value; }
    inline void setKConfigSkeleton_ChildEvent_IsBase(bool value) const { kconfigskeleton_childevent_isbase = value; }
    inline void setKConfigSkeleton_CustomEvent_IsBase(bool value) const { kconfigskeleton_customevent_isbase = value; }
    inline void setKConfigSkeleton_ConnectNotify_IsBase(bool value) const { kconfigskeleton_connectnotify_isbase = value; }
    inline void setKConfigSkeleton_DisconnectNotify_IsBase(bool value) const { kconfigskeleton_disconnectnotify_isbase = value; }
    inline void setKConfigSkeleton_Sender_IsBase(bool value) const { kconfigskeleton_sender_isbase = value; }
    inline void setKConfigSkeleton_SenderSignalIndex_IsBase(bool value) const { kconfigskeleton_sendersignalindex_isbase = value; }
    inline void setKConfigSkeleton_Receivers_IsBase(bool value) const { kconfigskeleton_receivers_isbase = value; }
    inline void setKConfigSkeleton_IsSignalConnected_IsBase(bool value) const { kconfigskeleton_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kconfigskeleton_metacall_isbase) {
            kconfigskeleton_metacall_isbase = false;
            return KConfigSkeleton::qt_metacall(param1, param2, param3);
        } else if (kconfigskeleton_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kconfigskeleton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KConfigSkeleton::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefaults() override {
        if (kconfigskeleton_setdefaults_isbase) {
            kconfigskeleton_setdefaults_isbase = false;
            KConfigSkeleton::setDefaults();
        } else if (kconfigskeleton_setdefaults_callback != nullptr) {
            kconfigskeleton_setdefaults_callback();
        } else {
            KConfigSkeleton::setDefaults();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool useDefaults(bool b) override {
        if (kconfigskeleton_usedefaults_isbase) {
            kconfigskeleton_usedefaults_isbase = false;
            return KConfigSkeleton::useDefaults(b);
        } else if (kconfigskeleton_usedefaults_callback != nullptr) {
            bool cbval1 = b;

            bool callback_ret = kconfigskeleton_usedefaults_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigSkeleton::useDefaults(b);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool usrUseDefaults(bool b) override {
        if (kconfigskeleton_usrusedefaults_isbase) {
            kconfigskeleton_usrusedefaults_isbase = false;
            return KConfigSkeleton::usrUseDefaults(b);
        } else if (kconfigskeleton_usrusedefaults_callback != nullptr) {
            bool cbval1 = b;

            bool callback_ret = kconfigskeleton_usrusedefaults_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigSkeleton::usrUseDefaults(b);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrSetDefaults() override {
        if (kconfigskeleton_usrsetdefaults_isbase) {
            kconfigskeleton_usrsetdefaults_isbase = false;
            KConfigSkeleton::usrSetDefaults();
        } else if (kconfigskeleton_usrsetdefaults_callback != nullptr) {
            kconfigskeleton_usrsetdefaults_callback();
        } else {
            KConfigSkeleton::usrSetDefaults();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void usrRead() override {
        if (kconfigskeleton_usrread_isbase) {
            kconfigskeleton_usrread_isbase = false;
            KConfigSkeleton::usrRead();
        } else if (kconfigskeleton_usrread_callback != nullptr) {
            kconfigskeleton_usrread_callback();
        } else {
            KConfigSkeleton::usrRead();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool usrSave() override {
        if (kconfigskeleton_usrsave_isbase) {
            kconfigskeleton_usrsave_isbase = false;
            return KConfigSkeleton::usrSave();
        } else if (kconfigskeleton_usrsave_callback != nullptr) {
            bool callback_ret = kconfigskeleton_usrsave_callback();
            return callback_ret;
        } else {
            return KConfigSkeleton::usrSave();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kconfigskeleton_event_isbase) {
            kconfigskeleton_event_isbase = false;
            return KConfigSkeleton::event(event);
        } else if (kconfigskeleton_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kconfigskeleton_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigSkeleton::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kconfigskeleton_eventfilter_isbase) {
            kconfigskeleton_eventfilter_isbase = false;
            return KConfigSkeleton::eventFilter(watched, event);
        } else if (kconfigskeleton_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kconfigskeleton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KConfigSkeleton::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kconfigskeleton_timerevent_isbase) {
            kconfigskeleton_timerevent_isbase = false;
            KConfigSkeleton::timerEvent(event);
        } else if (kconfigskeleton_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kconfigskeleton_timerevent_callback(this, cbval1);
        } else {
            KConfigSkeleton::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kconfigskeleton_childevent_isbase) {
            kconfigskeleton_childevent_isbase = false;
            KConfigSkeleton::childEvent(event);
        } else if (kconfigskeleton_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kconfigskeleton_childevent_callback(this, cbval1);
        } else {
            KConfigSkeleton::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kconfigskeleton_customevent_isbase) {
            kconfigskeleton_customevent_isbase = false;
            KConfigSkeleton::customEvent(event);
        } else if (kconfigskeleton_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kconfigskeleton_customevent_callback(this, cbval1);
        } else {
            KConfigSkeleton::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kconfigskeleton_connectnotify_isbase) {
            kconfigskeleton_connectnotify_isbase = false;
            KConfigSkeleton::connectNotify(signal);
        } else if (kconfigskeleton_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kconfigskeleton_connectnotify_callback(this, cbval1);
        } else {
            KConfigSkeleton::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kconfigskeleton_disconnectnotify_isbase) {
            kconfigskeleton_disconnectnotify_isbase = false;
            KConfigSkeleton::disconnectNotify(signal);
        } else if (kconfigskeleton_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kconfigskeleton_disconnectnotify_callback(this, cbval1);
        } else {
            KConfigSkeleton::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kconfigskeleton_sender_isbase) {
            kconfigskeleton_sender_isbase = false;
            return KConfigSkeleton::sender();
        } else if (kconfigskeleton_sender_callback != nullptr) {
            QObject* callback_ret = kconfigskeleton_sender_callback();
            return callback_ret;
        } else {
            return KConfigSkeleton::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kconfigskeleton_sendersignalindex_isbase) {
            kconfigskeleton_sendersignalindex_isbase = false;
            return KConfigSkeleton::senderSignalIndex();
        } else if (kconfigskeleton_sendersignalindex_callback != nullptr) {
            int callback_ret = kconfigskeleton_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KConfigSkeleton::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kconfigskeleton_receivers_isbase) {
            kconfigskeleton_receivers_isbase = false;
            return KConfigSkeleton::receivers(signal);
        } else if (kconfigskeleton_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kconfigskeleton_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KConfigSkeleton::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kconfigskeleton_issignalconnected_isbase) {
            kconfigskeleton_issignalconnected_isbase = false;
            return KConfigSkeleton::isSignalConnected(signal);
        } else if (kconfigskeleton_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kconfigskeleton_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigSkeleton::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KConfigSkeleton_UsrUseDefaults(KConfigSkeleton* self, bool b);
    friend bool KConfigSkeleton_QBaseUsrUseDefaults(KConfigSkeleton* self, bool b);
    friend void KConfigSkeleton_UsrSetDefaults(KConfigSkeleton* self);
    friend void KConfigSkeleton_QBaseUsrSetDefaults(KConfigSkeleton* self);
    friend void KConfigSkeleton_UsrRead(KConfigSkeleton* self);
    friend void KConfigSkeleton_QBaseUsrRead(KConfigSkeleton* self);
    friend bool KConfigSkeleton_UsrSave(KConfigSkeleton* self);
    friend bool KConfigSkeleton_QBaseUsrSave(KConfigSkeleton* self);
    friend void KConfigSkeleton_TimerEvent(KConfigSkeleton* self, QTimerEvent* event);
    friend void KConfigSkeleton_QBaseTimerEvent(KConfigSkeleton* self, QTimerEvent* event);
    friend void KConfigSkeleton_ChildEvent(KConfigSkeleton* self, QChildEvent* event);
    friend void KConfigSkeleton_QBaseChildEvent(KConfigSkeleton* self, QChildEvent* event);
    friend void KConfigSkeleton_CustomEvent(KConfigSkeleton* self, QEvent* event);
    friend void KConfigSkeleton_QBaseCustomEvent(KConfigSkeleton* self, QEvent* event);
    friend void KConfigSkeleton_ConnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
    friend void KConfigSkeleton_QBaseConnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
    friend void KConfigSkeleton_DisconnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
    friend void KConfigSkeleton_QBaseDisconnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
    friend QObject* KConfigSkeleton_Sender(const KConfigSkeleton* self);
    friend QObject* KConfigSkeleton_QBaseSender(const KConfigSkeleton* self);
    friend int KConfigSkeleton_SenderSignalIndex(const KConfigSkeleton* self);
    friend int KConfigSkeleton_QBaseSenderSignalIndex(const KConfigSkeleton* self);
    friend int KConfigSkeleton_Receivers(const KConfigSkeleton* self, const char* signal);
    friend int KConfigSkeleton_QBaseReceivers(const KConfigSkeleton* self, const char* signal);
    friend bool KConfigSkeleton_IsSignalConnected(const KConfigSkeleton* self, const QMetaMethod* signal);
    friend bool KConfigSkeleton_QBaseIsSignalConnected(const KConfigSkeleton* self, const QMetaMethod* signal);
};

#endif
