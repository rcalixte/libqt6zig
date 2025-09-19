#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKOVERLAYICONPLUGIN_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKOVERLAYICONPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KOverlayIconPlugin so that we can call protected methods
class VirtualKOverlayIconPlugin : public KOverlayIconPlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualKOverlayIconPlugin = true;

    // Virtual class public types (including callbacks)
    using KOverlayIconPlugin_Metacall_Callback = int (*)(KOverlayIconPlugin*, int, int, void**);
    using KOverlayIconPlugin_GetOverlays_Callback = const char** (*)(KOverlayIconPlugin*, QUrl*);
    using KOverlayIconPlugin_Event_Callback = bool (*)(KOverlayIconPlugin*, QEvent*);
    using KOverlayIconPlugin_EventFilter_Callback = bool (*)(KOverlayIconPlugin*, QObject*, QEvent*);
    using KOverlayIconPlugin_TimerEvent_Callback = void (*)(KOverlayIconPlugin*, QTimerEvent*);
    using KOverlayIconPlugin_ChildEvent_Callback = void (*)(KOverlayIconPlugin*, QChildEvent*);
    using KOverlayIconPlugin_CustomEvent_Callback = void (*)(KOverlayIconPlugin*, QEvent*);
    using KOverlayIconPlugin_ConnectNotify_Callback = void (*)(KOverlayIconPlugin*, QMetaMethod*);
    using KOverlayIconPlugin_DisconnectNotify_Callback = void (*)(KOverlayIconPlugin*, QMetaMethod*);
    using KOverlayIconPlugin_Sender_Callback = QObject* (*)();
    using KOverlayIconPlugin_SenderSignalIndex_Callback = int (*)();
    using KOverlayIconPlugin_Receivers_Callback = int (*)(const KOverlayIconPlugin*, const char*);
    using KOverlayIconPlugin_IsSignalConnected_Callback = bool (*)(const KOverlayIconPlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    KOverlayIconPlugin_Metacall_Callback koverlayiconplugin_metacall_callback = nullptr;
    KOverlayIconPlugin_GetOverlays_Callback koverlayiconplugin_getoverlays_callback = nullptr;
    KOverlayIconPlugin_Event_Callback koverlayiconplugin_event_callback = nullptr;
    KOverlayIconPlugin_EventFilter_Callback koverlayiconplugin_eventfilter_callback = nullptr;
    KOverlayIconPlugin_TimerEvent_Callback koverlayiconplugin_timerevent_callback = nullptr;
    KOverlayIconPlugin_ChildEvent_Callback koverlayiconplugin_childevent_callback = nullptr;
    KOverlayIconPlugin_CustomEvent_Callback koverlayiconplugin_customevent_callback = nullptr;
    KOverlayIconPlugin_ConnectNotify_Callback koverlayiconplugin_connectnotify_callback = nullptr;
    KOverlayIconPlugin_DisconnectNotify_Callback koverlayiconplugin_disconnectnotify_callback = nullptr;
    KOverlayIconPlugin_Sender_Callback koverlayiconplugin_sender_callback = nullptr;
    KOverlayIconPlugin_SenderSignalIndex_Callback koverlayiconplugin_sendersignalindex_callback = nullptr;
    KOverlayIconPlugin_Receivers_Callback koverlayiconplugin_receivers_callback = nullptr;
    KOverlayIconPlugin_IsSignalConnected_Callback koverlayiconplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool koverlayiconplugin_metacall_isbase = false;
    mutable bool koverlayiconplugin_getoverlays_isbase = false;
    mutable bool koverlayiconplugin_event_isbase = false;
    mutable bool koverlayiconplugin_eventfilter_isbase = false;
    mutable bool koverlayiconplugin_timerevent_isbase = false;
    mutable bool koverlayiconplugin_childevent_isbase = false;
    mutable bool koverlayiconplugin_customevent_isbase = false;
    mutable bool koverlayiconplugin_connectnotify_isbase = false;
    mutable bool koverlayiconplugin_disconnectnotify_isbase = false;
    mutable bool koverlayiconplugin_sender_isbase = false;
    mutable bool koverlayiconplugin_sendersignalindex_isbase = false;
    mutable bool koverlayiconplugin_receivers_isbase = false;
    mutable bool koverlayiconplugin_issignalconnected_isbase = false;

  public:
    VirtualKOverlayIconPlugin() : KOverlayIconPlugin() {};
    VirtualKOverlayIconPlugin(QObject* parent) : KOverlayIconPlugin(parent) {};

    ~VirtualKOverlayIconPlugin() {
        koverlayiconplugin_metacall_callback = nullptr;
        koverlayiconplugin_getoverlays_callback = nullptr;
        koverlayiconplugin_event_callback = nullptr;
        koverlayiconplugin_eventfilter_callback = nullptr;
        koverlayiconplugin_timerevent_callback = nullptr;
        koverlayiconplugin_childevent_callback = nullptr;
        koverlayiconplugin_customevent_callback = nullptr;
        koverlayiconplugin_connectnotify_callback = nullptr;
        koverlayiconplugin_disconnectnotify_callback = nullptr;
        koverlayiconplugin_sender_callback = nullptr;
        koverlayiconplugin_sendersignalindex_callback = nullptr;
        koverlayiconplugin_receivers_callback = nullptr;
        koverlayiconplugin_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKOverlayIconPlugin_Metacall_Callback(KOverlayIconPlugin_Metacall_Callback cb) { koverlayiconplugin_metacall_callback = cb; }
    inline void setKOverlayIconPlugin_GetOverlays_Callback(KOverlayIconPlugin_GetOverlays_Callback cb) { koverlayiconplugin_getoverlays_callback = cb; }
    inline void setKOverlayIconPlugin_Event_Callback(KOverlayIconPlugin_Event_Callback cb) { koverlayiconplugin_event_callback = cb; }
    inline void setKOverlayIconPlugin_EventFilter_Callback(KOverlayIconPlugin_EventFilter_Callback cb) { koverlayiconplugin_eventfilter_callback = cb; }
    inline void setKOverlayIconPlugin_TimerEvent_Callback(KOverlayIconPlugin_TimerEvent_Callback cb) { koverlayiconplugin_timerevent_callback = cb; }
    inline void setKOverlayIconPlugin_ChildEvent_Callback(KOverlayIconPlugin_ChildEvent_Callback cb) { koverlayiconplugin_childevent_callback = cb; }
    inline void setKOverlayIconPlugin_CustomEvent_Callback(KOverlayIconPlugin_CustomEvent_Callback cb) { koverlayiconplugin_customevent_callback = cb; }
    inline void setKOverlayIconPlugin_ConnectNotify_Callback(KOverlayIconPlugin_ConnectNotify_Callback cb) { koverlayiconplugin_connectnotify_callback = cb; }
    inline void setKOverlayIconPlugin_DisconnectNotify_Callback(KOverlayIconPlugin_DisconnectNotify_Callback cb) { koverlayiconplugin_disconnectnotify_callback = cb; }
    inline void setKOverlayIconPlugin_Sender_Callback(KOverlayIconPlugin_Sender_Callback cb) { koverlayiconplugin_sender_callback = cb; }
    inline void setKOverlayIconPlugin_SenderSignalIndex_Callback(KOverlayIconPlugin_SenderSignalIndex_Callback cb) { koverlayiconplugin_sendersignalindex_callback = cb; }
    inline void setKOverlayIconPlugin_Receivers_Callback(KOverlayIconPlugin_Receivers_Callback cb) { koverlayiconplugin_receivers_callback = cb; }
    inline void setKOverlayIconPlugin_IsSignalConnected_Callback(KOverlayIconPlugin_IsSignalConnected_Callback cb) { koverlayiconplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKOverlayIconPlugin_Metacall_IsBase(bool value) const { koverlayiconplugin_metacall_isbase = value; }
    inline void setKOverlayIconPlugin_GetOverlays_IsBase(bool value) const { koverlayiconplugin_getoverlays_isbase = value; }
    inline void setKOverlayIconPlugin_Event_IsBase(bool value) const { koverlayiconplugin_event_isbase = value; }
    inline void setKOverlayIconPlugin_EventFilter_IsBase(bool value) const { koverlayiconplugin_eventfilter_isbase = value; }
    inline void setKOverlayIconPlugin_TimerEvent_IsBase(bool value) const { koverlayiconplugin_timerevent_isbase = value; }
    inline void setKOverlayIconPlugin_ChildEvent_IsBase(bool value) const { koverlayiconplugin_childevent_isbase = value; }
    inline void setKOverlayIconPlugin_CustomEvent_IsBase(bool value) const { koverlayiconplugin_customevent_isbase = value; }
    inline void setKOverlayIconPlugin_ConnectNotify_IsBase(bool value) const { koverlayiconplugin_connectnotify_isbase = value; }
    inline void setKOverlayIconPlugin_DisconnectNotify_IsBase(bool value) const { koverlayiconplugin_disconnectnotify_isbase = value; }
    inline void setKOverlayIconPlugin_Sender_IsBase(bool value) const { koverlayiconplugin_sender_isbase = value; }
    inline void setKOverlayIconPlugin_SenderSignalIndex_IsBase(bool value) const { koverlayiconplugin_sendersignalindex_isbase = value; }
    inline void setKOverlayIconPlugin_Receivers_IsBase(bool value) const { koverlayiconplugin_receivers_isbase = value; }
    inline void setKOverlayIconPlugin_IsSignalConnected_IsBase(bool value) const { koverlayiconplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (koverlayiconplugin_metacall_isbase) {
            koverlayiconplugin_metacall_isbase = false;
            return KOverlayIconPlugin::qt_metacall(param1, param2, param3);
        } else if (koverlayiconplugin_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = koverlayiconplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KOverlayIconPlugin::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> getOverlays(const QUrl& item) override {
        if (koverlayiconplugin_getoverlays_callback != nullptr) {
            const QUrl& item_ret = item;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&item_ret);

            const char** callback_ret = koverlayiconplugin_getoverlays_callback(this, cbval1);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (koverlayiconplugin_event_isbase) {
            koverlayiconplugin_event_isbase = false;
            return KOverlayIconPlugin::event(event);
        } else if (koverlayiconplugin_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = koverlayiconplugin_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KOverlayIconPlugin::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (koverlayiconplugin_eventfilter_isbase) {
            koverlayiconplugin_eventfilter_isbase = false;
            return KOverlayIconPlugin::eventFilter(watched, event);
        } else if (koverlayiconplugin_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = koverlayiconplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KOverlayIconPlugin::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (koverlayiconplugin_timerevent_isbase) {
            koverlayiconplugin_timerevent_isbase = false;
            KOverlayIconPlugin::timerEvent(event);
        } else if (koverlayiconplugin_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            koverlayiconplugin_timerevent_callback(this, cbval1);
        } else {
            KOverlayIconPlugin::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (koverlayiconplugin_childevent_isbase) {
            koverlayiconplugin_childevent_isbase = false;
            KOverlayIconPlugin::childEvent(event);
        } else if (koverlayiconplugin_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            koverlayiconplugin_childevent_callback(this, cbval1);
        } else {
            KOverlayIconPlugin::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (koverlayiconplugin_customevent_isbase) {
            koverlayiconplugin_customevent_isbase = false;
            KOverlayIconPlugin::customEvent(event);
        } else if (koverlayiconplugin_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            koverlayiconplugin_customevent_callback(this, cbval1);
        } else {
            KOverlayIconPlugin::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (koverlayiconplugin_connectnotify_isbase) {
            koverlayiconplugin_connectnotify_isbase = false;
            KOverlayIconPlugin::connectNotify(signal);
        } else if (koverlayiconplugin_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            koverlayiconplugin_connectnotify_callback(this, cbval1);
        } else {
            KOverlayIconPlugin::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (koverlayiconplugin_disconnectnotify_isbase) {
            koverlayiconplugin_disconnectnotify_isbase = false;
            KOverlayIconPlugin::disconnectNotify(signal);
        } else if (koverlayiconplugin_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            koverlayiconplugin_disconnectnotify_callback(this, cbval1);
        } else {
            KOverlayIconPlugin::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (koverlayiconplugin_sender_isbase) {
            koverlayiconplugin_sender_isbase = false;
            return KOverlayIconPlugin::sender();
        } else if (koverlayiconplugin_sender_callback != nullptr) {
            QObject* callback_ret = koverlayiconplugin_sender_callback();
            return callback_ret;
        } else {
            return KOverlayIconPlugin::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (koverlayiconplugin_sendersignalindex_isbase) {
            koverlayiconplugin_sendersignalindex_isbase = false;
            return KOverlayIconPlugin::senderSignalIndex();
        } else if (koverlayiconplugin_sendersignalindex_callback != nullptr) {
            int callback_ret = koverlayiconplugin_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KOverlayIconPlugin::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (koverlayiconplugin_receivers_isbase) {
            koverlayiconplugin_receivers_isbase = false;
            return KOverlayIconPlugin::receivers(signal);
        } else if (koverlayiconplugin_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = koverlayiconplugin_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KOverlayIconPlugin::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (koverlayiconplugin_issignalconnected_isbase) {
            koverlayiconplugin_issignalconnected_isbase = false;
            return KOverlayIconPlugin::isSignalConnected(signal);
        } else if (koverlayiconplugin_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = koverlayiconplugin_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KOverlayIconPlugin::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KOverlayIconPlugin_TimerEvent(KOverlayIconPlugin* self, QTimerEvent* event);
    friend void KOverlayIconPlugin_QBaseTimerEvent(KOverlayIconPlugin* self, QTimerEvent* event);
    friend void KOverlayIconPlugin_ChildEvent(KOverlayIconPlugin* self, QChildEvent* event);
    friend void KOverlayIconPlugin_QBaseChildEvent(KOverlayIconPlugin* self, QChildEvent* event);
    friend void KOverlayIconPlugin_CustomEvent(KOverlayIconPlugin* self, QEvent* event);
    friend void KOverlayIconPlugin_QBaseCustomEvent(KOverlayIconPlugin* self, QEvent* event);
    friend void KOverlayIconPlugin_ConnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal);
    friend void KOverlayIconPlugin_QBaseConnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal);
    friend void KOverlayIconPlugin_DisconnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal);
    friend void KOverlayIconPlugin_QBaseDisconnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal);
    friend QObject* KOverlayIconPlugin_Sender(const KOverlayIconPlugin* self);
    friend QObject* KOverlayIconPlugin_QBaseSender(const KOverlayIconPlugin* self);
    friend int KOverlayIconPlugin_SenderSignalIndex(const KOverlayIconPlugin* self);
    friend int KOverlayIconPlugin_QBaseSenderSignalIndex(const KOverlayIconPlugin* self);
    friend int KOverlayIconPlugin_Receivers(const KOverlayIconPlugin* self, const char* signal);
    friend int KOverlayIconPlugin_QBaseReceivers(const KOverlayIconPlugin* self, const char* signal);
    friend bool KOverlayIconPlugin_IsSignalConnected(const KOverlayIconPlugin* self, const QMetaMethod* signal);
    friend bool KOverlayIconPlugin_QBaseIsSignalConnected(const KOverlayIconPlugin* self, const QMetaMethod* signal);
};

#endif
