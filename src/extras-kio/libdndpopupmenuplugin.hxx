#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALDNDPOPUPMENUPLUGIN_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALDNDPOPUPMENUPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::DndPopupMenuPlugin so that we can call protected methods
class VirtualKIODndPopupMenuPlugin : public KIO::DndPopupMenuPlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualKIODndPopupMenuPlugin = true;

    // Virtual class public types (including callbacks)
    using KIO__DndPopupMenuPlugin_MetaObject_Callback = QMetaObject* (*)();
    using KIO__DndPopupMenuPlugin_Metacast_Callback = void* (*)(KIO__DndPopupMenuPlugin*, const char*);
    using KIO__DndPopupMenuPlugin_Metacall_Callback = int (*)(KIO__DndPopupMenuPlugin*, int, int, void**);
    using KIO__DndPopupMenuPlugin_Setup_Callback = libqt_list /* of QAction* */ (*)(KIO__DndPopupMenuPlugin*, KFileItemListProperties*, QUrl*);
    using KIO__DndPopupMenuPlugin_Event_Callback = bool (*)(KIO__DndPopupMenuPlugin*, QEvent*);
    using KIO__DndPopupMenuPlugin_EventFilter_Callback = bool (*)(KIO__DndPopupMenuPlugin*, QObject*, QEvent*);
    using KIO__DndPopupMenuPlugin_TimerEvent_Callback = void (*)(KIO__DndPopupMenuPlugin*, QTimerEvent*);
    using KIO__DndPopupMenuPlugin_ChildEvent_Callback = void (*)(KIO__DndPopupMenuPlugin*, QChildEvent*);
    using KIO__DndPopupMenuPlugin_CustomEvent_Callback = void (*)(KIO__DndPopupMenuPlugin*, QEvent*);
    using KIO__DndPopupMenuPlugin_ConnectNotify_Callback = void (*)(KIO__DndPopupMenuPlugin*, QMetaMethod*);
    using KIO__DndPopupMenuPlugin_DisconnectNotify_Callback = void (*)(KIO__DndPopupMenuPlugin*, QMetaMethod*);
    using KIO__DndPopupMenuPlugin_Sender_Callback = QObject* (*)();
    using KIO__DndPopupMenuPlugin_SenderSignalIndex_Callback = int (*)();
    using KIO__DndPopupMenuPlugin_Receivers_Callback = int (*)(const KIO__DndPopupMenuPlugin*, const char*);
    using KIO__DndPopupMenuPlugin_IsSignalConnected_Callback = bool (*)(const KIO__DndPopupMenuPlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    KIO__DndPopupMenuPlugin_MetaObject_Callback kio__dndpopupmenuplugin_metaobject_callback = nullptr;
    KIO__DndPopupMenuPlugin_Metacast_Callback kio__dndpopupmenuplugin_metacast_callback = nullptr;
    KIO__DndPopupMenuPlugin_Metacall_Callback kio__dndpopupmenuplugin_metacall_callback = nullptr;
    KIO__DndPopupMenuPlugin_Setup_Callback kio__dndpopupmenuplugin_setup_callback = nullptr;
    KIO__DndPopupMenuPlugin_Event_Callback kio__dndpopupmenuplugin_event_callback = nullptr;
    KIO__DndPopupMenuPlugin_EventFilter_Callback kio__dndpopupmenuplugin_eventfilter_callback = nullptr;
    KIO__DndPopupMenuPlugin_TimerEvent_Callback kio__dndpopupmenuplugin_timerevent_callback = nullptr;
    KIO__DndPopupMenuPlugin_ChildEvent_Callback kio__dndpopupmenuplugin_childevent_callback = nullptr;
    KIO__DndPopupMenuPlugin_CustomEvent_Callback kio__dndpopupmenuplugin_customevent_callback = nullptr;
    KIO__DndPopupMenuPlugin_ConnectNotify_Callback kio__dndpopupmenuplugin_connectnotify_callback = nullptr;
    KIO__DndPopupMenuPlugin_DisconnectNotify_Callback kio__dndpopupmenuplugin_disconnectnotify_callback = nullptr;
    KIO__DndPopupMenuPlugin_Sender_Callback kio__dndpopupmenuplugin_sender_callback = nullptr;
    KIO__DndPopupMenuPlugin_SenderSignalIndex_Callback kio__dndpopupmenuplugin_sendersignalindex_callback = nullptr;
    KIO__DndPopupMenuPlugin_Receivers_Callback kio__dndpopupmenuplugin_receivers_callback = nullptr;
    KIO__DndPopupMenuPlugin_IsSignalConnected_Callback kio__dndpopupmenuplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__dndpopupmenuplugin_metaobject_isbase = false;
    mutable bool kio__dndpopupmenuplugin_metacast_isbase = false;
    mutable bool kio__dndpopupmenuplugin_metacall_isbase = false;
    mutable bool kio__dndpopupmenuplugin_setup_isbase = false;
    mutable bool kio__dndpopupmenuplugin_event_isbase = false;
    mutable bool kio__dndpopupmenuplugin_eventfilter_isbase = false;
    mutable bool kio__dndpopupmenuplugin_timerevent_isbase = false;
    mutable bool kio__dndpopupmenuplugin_childevent_isbase = false;
    mutable bool kio__dndpopupmenuplugin_customevent_isbase = false;
    mutable bool kio__dndpopupmenuplugin_connectnotify_isbase = false;
    mutable bool kio__dndpopupmenuplugin_disconnectnotify_isbase = false;
    mutable bool kio__dndpopupmenuplugin_sender_isbase = false;
    mutable bool kio__dndpopupmenuplugin_sendersignalindex_isbase = false;
    mutable bool kio__dndpopupmenuplugin_receivers_isbase = false;
    mutable bool kio__dndpopupmenuplugin_issignalconnected_isbase = false;

  public:
    VirtualKIODndPopupMenuPlugin(QObject* parent) : KIO::DndPopupMenuPlugin(parent) {};

    ~VirtualKIODndPopupMenuPlugin() {
        kio__dndpopupmenuplugin_metaobject_callback = nullptr;
        kio__dndpopupmenuplugin_metacast_callback = nullptr;
        kio__dndpopupmenuplugin_metacall_callback = nullptr;
        kio__dndpopupmenuplugin_setup_callback = nullptr;
        kio__dndpopupmenuplugin_event_callback = nullptr;
        kio__dndpopupmenuplugin_eventfilter_callback = nullptr;
        kio__dndpopupmenuplugin_timerevent_callback = nullptr;
        kio__dndpopupmenuplugin_childevent_callback = nullptr;
        kio__dndpopupmenuplugin_customevent_callback = nullptr;
        kio__dndpopupmenuplugin_connectnotify_callback = nullptr;
        kio__dndpopupmenuplugin_disconnectnotify_callback = nullptr;
        kio__dndpopupmenuplugin_sender_callback = nullptr;
        kio__dndpopupmenuplugin_sendersignalindex_callback = nullptr;
        kio__dndpopupmenuplugin_receivers_callback = nullptr;
        kio__dndpopupmenuplugin_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__DndPopupMenuPlugin_MetaObject_Callback(KIO__DndPopupMenuPlugin_MetaObject_Callback cb) { kio__dndpopupmenuplugin_metaobject_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_Metacast_Callback(KIO__DndPopupMenuPlugin_Metacast_Callback cb) { kio__dndpopupmenuplugin_metacast_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_Metacall_Callback(KIO__DndPopupMenuPlugin_Metacall_Callback cb) { kio__dndpopupmenuplugin_metacall_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_Setup_Callback(KIO__DndPopupMenuPlugin_Setup_Callback cb) { kio__dndpopupmenuplugin_setup_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_Event_Callback(KIO__DndPopupMenuPlugin_Event_Callback cb) { kio__dndpopupmenuplugin_event_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_EventFilter_Callback(KIO__DndPopupMenuPlugin_EventFilter_Callback cb) { kio__dndpopupmenuplugin_eventfilter_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_TimerEvent_Callback(KIO__DndPopupMenuPlugin_TimerEvent_Callback cb) { kio__dndpopupmenuplugin_timerevent_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_ChildEvent_Callback(KIO__DndPopupMenuPlugin_ChildEvent_Callback cb) { kio__dndpopupmenuplugin_childevent_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_CustomEvent_Callback(KIO__DndPopupMenuPlugin_CustomEvent_Callback cb) { kio__dndpopupmenuplugin_customevent_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_ConnectNotify_Callback(KIO__DndPopupMenuPlugin_ConnectNotify_Callback cb) { kio__dndpopupmenuplugin_connectnotify_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_DisconnectNotify_Callback(KIO__DndPopupMenuPlugin_DisconnectNotify_Callback cb) { kio__dndpopupmenuplugin_disconnectnotify_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_Sender_Callback(KIO__DndPopupMenuPlugin_Sender_Callback cb) { kio__dndpopupmenuplugin_sender_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_SenderSignalIndex_Callback(KIO__DndPopupMenuPlugin_SenderSignalIndex_Callback cb) { kio__dndpopupmenuplugin_sendersignalindex_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_Receivers_Callback(KIO__DndPopupMenuPlugin_Receivers_Callback cb) { kio__dndpopupmenuplugin_receivers_callback = cb; }
    inline void setKIO__DndPopupMenuPlugin_IsSignalConnected_Callback(KIO__DndPopupMenuPlugin_IsSignalConnected_Callback cb) { kio__dndpopupmenuplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__DndPopupMenuPlugin_MetaObject_IsBase(bool value) const { kio__dndpopupmenuplugin_metaobject_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_Metacast_IsBase(bool value) const { kio__dndpopupmenuplugin_metacast_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_Metacall_IsBase(bool value) const { kio__dndpopupmenuplugin_metacall_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_Setup_IsBase(bool value) const { kio__dndpopupmenuplugin_setup_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_Event_IsBase(bool value) const { kio__dndpopupmenuplugin_event_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_EventFilter_IsBase(bool value) const { kio__dndpopupmenuplugin_eventfilter_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_TimerEvent_IsBase(bool value) const { kio__dndpopupmenuplugin_timerevent_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_ChildEvent_IsBase(bool value) const { kio__dndpopupmenuplugin_childevent_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_CustomEvent_IsBase(bool value) const { kio__dndpopupmenuplugin_customevent_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_ConnectNotify_IsBase(bool value) const { kio__dndpopupmenuplugin_connectnotify_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_DisconnectNotify_IsBase(bool value) const { kio__dndpopupmenuplugin_disconnectnotify_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_Sender_IsBase(bool value) const { kio__dndpopupmenuplugin_sender_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_SenderSignalIndex_IsBase(bool value) const { kio__dndpopupmenuplugin_sendersignalindex_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_Receivers_IsBase(bool value) const { kio__dndpopupmenuplugin_receivers_isbase = value; }
    inline void setKIO__DndPopupMenuPlugin_IsSignalConnected_IsBase(bool value) const { kio__dndpopupmenuplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__dndpopupmenuplugin_metaobject_isbase) {
            kio__dndpopupmenuplugin_metaobject_isbase = false;
            return KIO__DndPopupMenuPlugin::metaObject();
        } else if (kio__dndpopupmenuplugin_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = kio__dndpopupmenuplugin_metaobject_callback();
            return callback_ret;
        } else {
            return KIO__DndPopupMenuPlugin::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__dndpopupmenuplugin_metacast_isbase) {
            kio__dndpopupmenuplugin_metacast_isbase = false;
            return KIO__DndPopupMenuPlugin::qt_metacast(param1);
        } else if (kio__dndpopupmenuplugin_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = kio__dndpopupmenuplugin_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__DndPopupMenuPlugin::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__dndpopupmenuplugin_metacall_isbase) {
            kio__dndpopupmenuplugin_metacall_isbase = false;
            return KIO__DndPopupMenuPlugin::qt_metacall(param1, param2, param3);
        } else if (kio__dndpopupmenuplugin_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__dndpopupmenuplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__DndPopupMenuPlugin::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> setup(const KFileItemListProperties& popupMenuInfo, const QUrl& destination) override {
        if (kio__dndpopupmenuplugin_setup_callback != nullptr) {
            const KFileItemListProperties& popupMenuInfo_ret = popupMenuInfo;
            // Cast returned reference into pointer
            KFileItemListProperties* cbval1 = const_cast<KFileItemListProperties*>(&popupMenuInfo_ret);
            const QUrl& destination_ret = destination;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&destination_ret);

            libqt_list /* of QAction* */ callback_ret = kio__dndpopupmenuplugin_setup_callback(this, cbval1, cbval2);
            QList<QAction*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QAction** callback_ret_arr = static_cast<QAction**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__dndpopupmenuplugin_event_isbase) {
            kio__dndpopupmenuplugin_event_isbase = false;
            return KIO__DndPopupMenuPlugin::event(event);
        } else if (kio__dndpopupmenuplugin_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__dndpopupmenuplugin_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__DndPopupMenuPlugin::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__dndpopupmenuplugin_eventfilter_isbase) {
            kio__dndpopupmenuplugin_eventfilter_isbase = false;
            return KIO__DndPopupMenuPlugin::eventFilter(watched, event);
        } else if (kio__dndpopupmenuplugin_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kio__dndpopupmenuplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__DndPopupMenuPlugin::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__dndpopupmenuplugin_timerevent_isbase) {
            kio__dndpopupmenuplugin_timerevent_isbase = false;
            KIO__DndPopupMenuPlugin::timerEvent(event);
        } else if (kio__dndpopupmenuplugin_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__dndpopupmenuplugin_timerevent_callback(this, cbval1);
        } else {
            KIO__DndPopupMenuPlugin::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__dndpopupmenuplugin_childevent_isbase) {
            kio__dndpopupmenuplugin_childevent_isbase = false;
            KIO__DndPopupMenuPlugin::childEvent(event);
        } else if (kio__dndpopupmenuplugin_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__dndpopupmenuplugin_childevent_callback(this, cbval1);
        } else {
            KIO__DndPopupMenuPlugin::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__dndpopupmenuplugin_customevent_isbase) {
            kio__dndpopupmenuplugin_customevent_isbase = false;
            KIO__DndPopupMenuPlugin::customEvent(event);
        } else if (kio__dndpopupmenuplugin_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__dndpopupmenuplugin_customevent_callback(this, cbval1);
        } else {
            KIO__DndPopupMenuPlugin::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__dndpopupmenuplugin_connectnotify_isbase) {
            kio__dndpopupmenuplugin_connectnotify_isbase = false;
            KIO__DndPopupMenuPlugin::connectNotify(signal);
        } else if (kio__dndpopupmenuplugin_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__dndpopupmenuplugin_connectnotify_callback(this, cbval1);
        } else {
            KIO__DndPopupMenuPlugin::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__dndpopupmenuplugin_disconnectnotify_isbase) {
            kio__dndpopupmenuplugin_disconnectnotify_isbase = false;
            KIO__DndPopupMenuPlugin::disconnectNotify(signal);
        } else if (kio__dndpopupmenuplugin_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__dndpopupmenuplugin_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__DndPopupMenuPlugin::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__dndpopupmenuplugin_sender_isbase) {
            kio__dndpopupmenuplugin_sender_isbase = false;
            return KIO__DndPopupMenuPlugin::sender();
        } else if (kio__dndpopupmenuplugin_sender_callback != nullptr) {
            QObject* callback_ret = kio__dndpopupmenuplugin_sender_callback();
            return callback_ret;
        } else {
            return KIO__DndPopupMenuPlugin::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__dndpopupmenuplugin_sendersignalindex_isbase) {
            kio__dndpopupmenuplugin_sendersignalindex_isbase = false;
            return KIO__DndPopupMenuPlugin::senderSignalIndex();
        } else if (kio__dndpopupmenuplugin_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__dndpopupmenuplugin_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__DndPopupMenuPlugin::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__dndpopupmenuplugin_receivers_isbase) {
            kio__dndpopupmenuplugin_receivers_isbase = false;
            return KIO__DndPopupMenuPlugin::receivers(signal);
        } else if (kio__dndpopupmenuplugin_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__dndpopupmenuplugin_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__DndPopupMenuPlugin::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__dndpopupmenuplugin_issignalconnected_isbase) {
            kio__dndpopupmenuplugin_issignalconnected_isbase = false;
            return KIO__DndPopupMenuPlugin::isSignalConnected(signal);
        } else if (kio__dndpopupmenuplugin_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__dndpopupmenuplugin_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__DndPopupMenuPlugin::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KIO__DndPopupMenuPlugin_TimerEvent(KIO::DndPopupMenuPlugin* self, QTimerEvent* event);
    friend void KIO__DndPopupMenuPlugin_SuperTimerEvent(KIO::DndPopupMenuPlugin* self, QTimerEvent* event);
    friend void KIO__DndPopupMenuPlugin_ChildEvent(KIO::DndPopupMenuPlugin* self, QChildEvent* event);
    friend void KIO__DndPopupMenuPlugin_SuperChildEvent(KIO::DndPopupMenuPlugin* self, QChildEvent* event);
    friend void KIO__DndPopupMenuPlugin_CustomEvent(KIO::DndPopupMenuPlugin* self, QEvent* event);
    friend void KIO__DndPopupMenuPlugin_SuperCustomEvent(KIO::DndPopupMenuPlugin* self, QEvent* event);
    friend void KIO__DndPopupMenuPlugin_ConnectNotify(KIO::DndPopupMenuPlugin* self, const QMetaMethod* signal);
    friend void KIO__DndPopupMenuPlugin_SuperConnectNotify(KIO::DndPopupMenuPlugin* self, const QMetaMethod* signal);
    friend void KIO__DndPopupMenuPlugin_DisconnectNotify(KIO::DndPopupMenuPlugin* self, const QMetaMethod* signal);
    friend void KIO__DndPopupMenuPlugin_SuperDisconnectNotify(KIO::DndPopupMenuPlugin* self, const QMetaMethod* signal);
    friend QObject* KIO__DndPopupMenuPlugin_Sender(const KIO::DndPopupMenuPlugin* self);
    friend QObject* KIO__DndPopupMenuPlugin_SuperSender(const KIO::DndPopupMenuPlugin* self);
    friend int KIO__DndPopupMenuPlugin_SenderSignalIndex(const KIO::DndPopupMenuPlugin* self);
    friend int KIO__DndPopupMenuPlugin_SuperSenderSignalIndex(const KIO::DndPopupMenuPlugin* self);
    friend int KIO__DndPopupMenuPlugin_Receivers(const KIO::DndPopupMenuPlugin* self, const char* signal);
    friend int KIO__DndPopupMenuPlugin_SuperReceivers(const KIO::DndPopupMenuPlugin* self, const char* signal);
    friend bool KIO__DndPopupMenuPlugin_IsSignalConnected(const KIO::DndPopupMenuPlugin* self, const QMetaMethod* signal);
    friend bool KIO__DndPopupMenuPlugin_SuperIsSignalConnected(const KIO::DndPopupMenuPlugin* self, const QMetaMethod* signal);
};

#endif
