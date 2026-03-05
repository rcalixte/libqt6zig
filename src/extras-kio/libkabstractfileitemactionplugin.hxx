#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKABSTRACTFILEITEMACTIONPLUGIN_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKABSTRACTFILEITEMACTIONPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAbstractFileItemActionPlugin so that we can call protected methods
class VirtualKAbstractFileItemActionPlugin : public KAbstractFileItemActionPlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualKAbstractFileItemActionPlugin = true;

    // Virtual class public types (including callbacks)
    using KAbstractFileItemActionPlugin_MetaObject_Callback = QMetaObject* (*)();
    using KAbstractFileItemActionPlugin_Metacast_Callback = void* (*)(KAbstractFileItemActionPlugin*, const char*);
    using KAbstractFileItemActionPlugin_Metacall_Callback = int (*)(KAbstractFileItemActionPlugin*, int, int, void**);
    using KAbstractFileItemActionPlugin_Actions_Callback = libqt_list /* of QAction* */ (*)(KAbstractFileItemActionPlugin*, KFileItemListProperties*, QWidget*);
    using KAbstractFileItemActionPlugin_Event_Callback = bool (*)(KAbstractFileItemActionPlugin*, QEvent*);
    using KAbstractFileItemActionPlugin_EventFilter_Callback = bool (*)(KAbstractFileItemActionPlugin*, QObject*, QEvent*);
    using KAbstractFileItemActionPlugin_TimerEvent_Callback = void (*)(KAbstractFileItemActionPlugin*, QTimerEvent*);
    using KAbstractFileItemActionPlugin_ChildEvent_Callback = void (*)(KAbstractFileItemActionPlugin*, QChildEvent*);
    using KAbstractFileItemActionPlugin_CustomEvent_Callback = void (*)(KAbstractFileItemActionPlugin*, QEvent*);
    using KAbstractFileItemActionPlugin_ConnectNotify_Callback = void (*)(KAbstractFileItemActionPlugin*, QMetaMethod*);
    using KAbstractFileItemActionPlugin_DisconnectNotify_Callback = void (*)(KAbstractFileItemActionPlugin*, QMetaMethod*);
    using KAbstractFileItemActionPlugin_Sender_Callback = QObject* (*)();
    using KAbstractFileItemActionPlugin_SenderSignalIndex_Callback = int (*)();
    using KAbstractFileItemActionPlugin_Receivers_Callback = int (*)(const KAbstractFileItemActionPlugin*, const char*);
    using KAbstractFileItemActionPlugin_IsSignalConnected_Callback = bool (*)(const KAbstractFileItemActionPlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    KAbstractFileItemActionPlugin_MetaObject_Callback kabstractfileitemactionplugin_metaobject_callback = nullptr;
    KAbstractFileItemActionPlugin_Metacast_Callback kabstractfileitemactionplugin_metacast_callback = nullptr;
    KAbstractFileItemActionPlugin_Metacall_Callback kabstractfileitemactionplugin_metacall_callback = nullptr;
    KAbstractFileItemActionPlugin_Actions_Callback kabstractfileitemactionplugin_actions_callback = nullptr;
    KAbstractFileItemActionPlugin_Event_Callback kabstractfileitemactionplugin_event_callback = nullptr;
    KAbstractFileItemActionPlugin_EventFilter_Callback kabstractfileitemactionplugin_eventfilter_callback = nullptr;
    KAbstractFileItemActionPlugin_TimerEvent_Callback kabstractfileitemactionplugin_timerevent_callback = nullptr;
    KAbstractFileItemActionPlugin_ChildEvent_Callback kabstractfileitemactionplugin_childevent_callback = nullptr;
    KAbstractFileItemActionPlugin_CustomEvent_Callback kabstractfileitemactionplugin_customevent_callback = nullptr;
    KAbstractFileItemActionPlugin_ConnectNotify_Callback kabstractfileitemactionplugin_connectnotify_callback = nullptr;
    KAbstractFileItemActionPlugin_DisconnectNotify_Callback kabstractfileitemactionplugin_disconnectnotify_callback = nullptr;
    KAbstractFileItemActionPlugin_Sender_Callback kabstractfileitemactionplugin_sender_callback = nullptr;
    KAbstractFileItemActionPlugin_SenderSignalIndex_Callback kabstractfileitemactionplugin_sendersignalindex_callback = nullptr;
    KAbstractFileItemActionPlugin_Receivers_Callback kabstractfileitemactionplugin_receivers_callback = nullptr;
    KAbstractFileItemActionPlugin_IsSignalConnected_Callback kabstractfileitemactionplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kabstractfileitemactionplugin_metaobject_isbase = false;
    mutable bool kabstractfileitemactionplugin_metacast_isbase = false;
    mutable bool kabstractfileitemactionplugin_metacall_isbase = false;
    mutable bool kabstractfileitemactionplugin_actions_isbase = false;
    mutable bool kabstractfileitemactionplugin_event_isbase = false;
    mutable bool kabstractfileitemactionplugin_eventfilter_isbase = false;
    mutable bool kabstractfileitemactionplugin_timerevent_isbase = false;
    mutable bool kabstractfileitemactionplugin_childevent_isbase = false;
    mutable bool kabstractfileitemactionplugin_customevent_isbase = false;
    mutable bool kabstractfileitemactionplugin_connectnotify_isbase = false;
    mutable bool kabstractfileitemactionplugin_disconnectnotify_isbase = false;
    mutable bool kabstractfileitemactionplugin_sender_isbase = false;
    mutable bool kabstractfileitemactionplugin_sendersignalindex_isbase = false;
    mutable bool kabstractfileitemactionplugin_receivers_isbase = false;
    mutable bool kabstractfileitemactionplugin_issignalconnected_isbase = false;

  public:
    VirtualKAbstractFileItemActionPlugin(QObject* parent) : KAbstractFileItemActionPlugin(parent) {};

    // Callback setters
    inline void setKAbstractFileItemActionPlugin_MetaObject_Callback(KAbstractFileItemActionPlugin_MetaObject_Callback cb) { kabstractfileitemactionplugin_metaobject_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_Metacast_Callback(KAbstractFileItemActionPlugin_Metacast_Callback cb) { kabstractfileitemactionplugin_metacast_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_Metacall_Callback(KAbstractFileItemActionPlugin_Metacall_Callback cb) { kabstractfileitemactionplugin_metacall_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_Actions_Callback(KAbstractFileItemActionPlugin_Actions_Callback cb) { kabstractfileitemactionplugin_actions_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_Event_Callback(KAbstractFileItemActionPlugin_Event_Callback cb) { kabstractfileitemactionplugin_event_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_EventFilter_Callback(KAbstractFileItemActionPlugin_EventFilter_Callback cb) { kabstractfileitemactionplugin_eventfilter_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_TimerEvent_Callback(KAbstractFileItemActionPlugin_TimerEvent_Callback cb) { kabstractfileitemactionplugin_timerevent_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_ChildEvent_Callback(KAbstractFileItemActionPlugin_ChildEvent_Callback cb) { kabstractfileitemactionplugin_childevent_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_CustomEvent_Callback(KAbstractFileItemActionPlugin_CustomEvent_Callback cb) { kabstractfileitemactionplugin_customevent_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_ConnectNotify_Callback(KAbstractFileItemActionPlugin_ConnectNotify_Callback cb) { kabstractfileitemactionplugin_connectnotify_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_DisconnectNotify_Callback(KAbstractFileItemActionPlugin_DisconnectNotify_Callback cb) { kabstractfileitemactionplugin_disconnectnotify_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_Sender_Callback(KAbstractFileItemActionPlugin_Sender_Callback cb) { kabstractfileitemactionplugin_sender_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_SenderSignalIndex_Callback(KAbstractFileItemActionPlugin_SenderSignalIndex_Callback cb) { kabstractfileitemactionplugin_sendersignalindex_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_Receivers_Callback(KAbstractFileItemActionPlugin_Receivers_Callback cb) { kabstractfileitemactionplugin_receivers_callback = cb; }
    inline void setKAbstractFileItemActionPlugin_IsSignalConnected_Callback(KAbstractFileItemActionPlugin_IsSignalConnected_Callback cb) { kabstractfileitemactionplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKAbstractFileItemActionPlugin_MetaObject_IsBase(bool value) const { kabstractfileitemactionplugin_metaobject_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_Metacast_IsBase(bool value) const { kabstractfileitemactionplugin_metacast_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_Metacall_IsBase(bool value) const { kabstractfileitemactionplugin_metacall_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_Actions_IsBase(bool value) const { kabstractfileitemactionplugin_actions_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_Event_IsBase(bool value) const { kabstractfileitemactionplugin_event_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_EventFilter_IsBase(bool value) const { kabstractfileitemactionplugin_eventfilter_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_TimerEvent_IsBase(bool value) const { kabstractfileitemactionplugin_timerevent_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_ChildEvent_IsBase(bool value) const { kabstractfileitemactionplugin_childevent_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_CustomEvent_IsBase(bool value) const { kabstractfileitemactionplugin_customevent_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_ConnectNotify_IsBase(bool value) const { kabstractfileitemactionplugin_connectnotify_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_DisconnectNotify_IsBase(bool value) const { kabstractfileitemactionplugin_disconnectnotify_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_Sender_IsBase(bool value) const { kabstractfileitemactionplugin_sender_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_SenderSignalIndex_IsBase(bool value) const { kabstractfileitemactionplugin_sendersignalindex_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_Receivers_IsBase(bool value) const { kabstractfileitemactionplugin_receivers_isbase = value; }
    inline void setKAbstractFileItemActionPlugin_IsSignalConnected_IsBase(bool value) const { kabstractfileitemactionplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kabstractfileitemactionplugin_metaobject_isbase) {
            kabstractfileitemactionplugin_metaobject_isbase = false;
            return KAbstractFileItemActionPlugin::metaObject();
        }
        auto metaobject_cb = kabstractfileitemactionplugin_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KAbstractFileItemActionPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kabstractfileitemactionplugin_metacast_isbase) {
            kabstractfileitemactionplugin_metacast_isbase = false;
            return KAbstractFileItemActionPlugin::qt_metacast(param1);
        }
        auto metacast_cb = kabstractfileitemactionplugin_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KAbstractFileItemActionPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kabstractfileitemactionplugin_metacall_isbase) {
            kabstractfileitemactionplugin_metacall_isbase = false;
            return KAbstractFileItemActionPlugin::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kabstractfileitemactionplugin_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KAbstractFileItemActionPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> actions(const KFileItemListProperties& fileItemInfos, QWidget* parentWidget) override {
        auto actions_cb = kabstractfileitemactionplugin_actions_callback;
        if (actions_cb) {
            const KFileItemListProperties& fileItemInfos_ret = fileItemInfos;
            // Cast returned reference into pointer
            KFileItemListProperties* cbval1 = const_cast<KFileItemListProperties*>(&fileItemInfos_ret);
            QWidget* cbval2 = parentWidget;

            libqt_list /* of QAction* */ callback_ret = actions_cb(this, cbval1, cbval2);
            QList<QAction*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QAction** callback_ret_arr = static_cast<QAction**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kabstractfileitemactionplugin_event_isbase) {
            kabstractfileitemactionplugin_event_isbase = false;
            return KAbstractFileItemActionPlugin::event(event);
        }
        auto event_cb = kabstractfileitemactionplugin_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KAbstractFileItemActionPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kabstractfileitemactionplugin_eventfilter_isbase) {
            kabstractfileitemactionplugin_eventfilter_isbase = false;
            return KAbstractFileItemActionPlugin::eventFilter(watched, event);
        }
        auto eventfilter_cb = kabstractfileitemactionplugin_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KAbstractFileItemActionPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kabstractfileitemactionplugin_timerevent_isbase) {
            kabstractfileitemactionplugin_timerevent_isbase = false;
            KAbstractFileItemActionPlugin::timerEvent(event);
            return;
        }
        auto timerevent_cb = kabstractfileitemactionplugin_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KAbstractFileItemActionPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kabstractfileitemactionplugin_childevent_isbase) {
            kabstractfileitemactionplugin_childevent_isbase = false;
            KAbstractFileItemActionPlugin::childEvent(event);
            return;
        }
        auto childevent_cb = kabstractfileitemactionplugin_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KAbstractFileItemActionPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kabstractfileitemactionplugin_customevent_isbase) {
            kabstractfileitemactionplugin_customevent_isbase = false;
            KAbstractFileItemActionPlugin::customEvent(event);
            return;
        }
        auto customevent_cb = kabstractfileitemactionplugin_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KAbstractFileItemActionPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kabstractfileitemactionplugin_connectnotify_isbase) {
            kabstractfileitemactionplugin_connectnotify_isbase = false;
            KAbstractFileItemActionPlugin::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kabstractfileitemactionplugin_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KAbstractFileItemActionPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kabstractfileitemactionplugin_disconnectnotify_isbase) {
            kabstractfileitemactionplugin_disconnectnotify_isbase = false;
            KAbstractFileItemActionPlugin::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kabstractfileitemactionplugin_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KAbstractFileItemActionPlugin::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kabstractfileitemactionplugin_sender_isbase) {
            kabstractfileitemactionplugin_sender_isbase = false;
            return KAbstractFileItemActionPlugin::sender();
        }
        auto sender_cb = kabstractfileitemactionplugin_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KAbstractFileItemActionPlugin::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kabstractfileitemactionplugin_sendersignalindex_isbase) {
            kabstractfileitemactionplugin_sendersignalindex_isbase = false;
            return KAbstractFileItemActionPlugin::senderSignalIndex();
        }
        auto sendersignalindex_cb = kabstractfileitemactionplugin_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KAbstractFileItemActionPlugin::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kabstractfileitemactionplugin_receivers_isbase) {
            kabstractfileitemactionplugin_receivers_isbase = false;
            return KAbstractFileItemActionPlugin::receivers(signal);
        }
        auto receivers_cb = kabstractfileitemactionplugin_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAbstractFileItemActionPlugin::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kabstractfileitemactionplugin_issignalconnected_isbase) {
            kabstractfileitemactionplugin_issignalconnected_isbase = false;
            return KAbstractFileItemActionPlugin::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kabstractfileitemactionplugin_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KAbstractFileItemActionPlugin::isSignalConnected(signal);
    }

    // Friend functions
    friend void KAbstractFileItemActionPlugin_TimerEvent(KAbstractFileItemActionPlugin* self, QTimerEvent* event);
    friend void KAbstractFileItemActionPlugin_SuperTimerEvent(KAbstractFileItemActionPlugin* self, QTimerEvent* event);
    friend void KAbstractFileItemActionPlugin_ChildEvent(KAbstractFileItemActionPlugin* self, QChildEvent* event);
    friend void KAbstractFileItemActionPlugin_SuperChildEvent(KAbstractFileItemActionPlugin* self, QChildEvent* event);
    friend void KAbstractFileItemActionPlugin_CustomEvent(KAbstractFileItemActionPlugin* self, QEvent* event);
    friend void KAbstractFileItemActionPlugin_SuperCustomEvent(KAbstractFileItemActionPlugin* self, QEvent* event);
    friend void KAbstractFileItemActionPlugin_ConnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
    friend void KAbstractFileItemActionPlugin_SuperConnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
    friend void KAbstractFileItemActionPlugin_DisconnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
    friend void KAbstractFileItemActionPlugin_SuperDisconnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
    friend QObject* KAbstractFileItemActionPlugin_Sender(const KAbstractFileItemActionPlugin* self);
    friend QObject* KAbstractFileItemActionPlugin_SuperSender(const KAbstractFileItemActionPlugin* self);
    friend int KAbstractFileItemActionPlugin_SenderSignalIndex(const KAbstractFileItemActionPlugin* self);
    friend int KAbstractFileItemActionPlugin_SuperSenderSignalIndex(const KAbstractFileItemActionPlugin* self);
    friend int KAbstractFileItemActionPlugin_Receivers(const KAbstractFileItemActionPlugin* self, const char* signal);
    friend int KAbstractFileItemActionPlugin_SuperReceivers(const KAbstractFileItemActionPlugin* self, const char* signal);
    friend bool KAbstractFileItemActionPlugin_IsSignalConnected(const KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
    friend bool KAbstractFileItemActionPlugin_SuperIsSignalConnected(const KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
};

#endif
