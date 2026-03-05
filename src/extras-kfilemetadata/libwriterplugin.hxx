#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBVIRTUALWRITERPLUGIN_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBVIRTUALWRITERPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileMetaData::WriterPlugin so that we can call protected methods
class VirtualKFileMetaDataWriterPlugin : public KFileMetaData::WriterPlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualKFileMetaDataWriterPlugin = true;

    // Virtual class public types (including callbacks)
    using KFileMetaData__WriterPlugin_MetaObject_Callback = QMetaObject* (*)();
    using KFileMetaData__WriterPlugin_Metacast_Callback = void* (*)(KFileMetaData__WriterPlugin*, const char*);
    using KFileMetaData__WriterPlugin_Metacall_Callback = int (*)(KFileMetaData__WriterPlugin*, int, int, void**);
    using KFileMetaData__WriterPlugin_WriteMimetypes_Callback = const char** (*)();
    using KFileMetaData__WriterPlugin_Write_Callback = void (*)(KFileMetaData__WriterPlugin*, KFileMetaData__WriteData*);
    using KFileMetaData__WriterPlugin_Event_Callback = bool (*)(KFileMetaData__WriterPlugin*, QEvent*);
    using KFileMetaData__WriterPlugin_EventFilter_Callback = bool (*)(KFileMetaData__WriterPlugin*, QObject*, QEvent*);
    using KFileMetaData__WriterPlugin_TimerEvent_Callback = void (*)(KFileMetaData__WriterPlugin*, QTimerEvent*);
    using KFileMetaData__WriterPlugin_ChildEvent_Callback = void (*)(KFileMetaData__WriterPlugin*, QChildEvent*);
    using KFileMetaData__WriterPlugin_CustomEvent_Callback = void (*)(KFileMetaData__WriterPlugin*, QEvent*);
    using KFileMetaData__WriterPlugin_ConnectNotify_Callback = void (*)(KFileMetaData__WriterPlugin*, QMetaMethod*);
    using KFileMetaData__WriterPlugin_DisconnectNotify_Callback = void (*)(KFileMetaData__WriterPlugin*, QMetaMethod*);
    using KFileMetaData__WriterPlugin_Sender_Callback = QObject* (*)();
    using KFileMetaData__WriterPlugin_SenderSignalIndex_Callback = int (*)();
    using KFileMetaData__WriterPlugin_Receivers_Callback = int (*)(const KFileMetaData__WriterPlugin*, const char*);
    using KFileMetaData__WriterPlugin_IsSignalConnected_Callback = bool (*)(const KFileMetaData__WriterPlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    KFileMetaData__WriterPlugin_MetaObject_Callback kfilemetadata__writerplugin_metaobject_callback = nullptr;
    KFileMetaData__WriterPlugin_Metacast_Callback kfilemetadata__writerplugin_metacast_callback = nullptr;
    KFileMetaData__WriterPlugin_Metacall_Callback kfilemetadata__writerplugin_metacall_callback = nullptr;
    KFileMetaData__WriterPlugin_WriteMimetypes_Callback kfilemetadata__writerplugin_writemimetypes_callback = nullptr;
    KFileMetaData__WriterPlugin_Write_Callback kfilemetadata__writerplugin_write_callback = nullptr;
    KFileMetaData__WriterPlugin_Event_Callback kfilemetadata__writerplugin_event_callback = nullptr;
    KFileMetaData__WriterPlugin_EventFilter_Callback kfilemetadata__writerplugin_eventfilter_callback = nullptr;
    KFileMetaData__WriterPlugin_TimerEvent_Callback kfilemetadata__writerplugin_timerevent_callback = nullptr;
    KFileMetaData__WriterPlugin_ChildEvent_Callback kfilemetadata__writerplugin_childevent_callback = nullptr;
    KFileMetaData__WriterPlugin_CustomEvent_Callback kfilemetadata__writerplugin_customevent_callback = nullptr;
    KFileMetaData__WriterPlugin_ConnectNotify_Callback kfilemetadata__writerplugin_connectnotify_callback = nullptr;
    KFileMetaData__WriterPlugin_DisconnectNotify_Callback kfilemetadata__writerplugin_disconnectnotify_callback = nullptr;
    KFileMetaData__WriterPlugin_Sender_Callback kfilemetadata__writerplugin_sender_callback = nullptr;
    KFileMetaData__WriterPlugin_SenderSignalIndex_Callback kfilemetadata__writerplugin_sendersignalindex_callback = nullptr;
    KFileMetaData__WriterPlugin_Receivers_Callback kfilemetadata__writerplugin_receivers_callback = nullptr;
    KFileMetaData__WriterPlugin_IsSignalConnected_Callback kfilemetadata__writerplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kfilemetadata__writerplugin_metaobject_isbase = false;
    mutable bool kfilemetadata__writerplugin_metacast_isbase = false;
    mutable bool kfilemetadata__writerplugin_metacall_isbase = false;
    mutable bool kfilemetadata__writerplugin_writemimetypes_isbase = false;
    mutable bool kfilemetadata__writerplugin_write_isbase = false;
    mutable bool kfilemetadata__writerplugin_event_isbase = false;
    mutable bool kfilemetadata__writerplugin_eventfilter_isbase = false;
    mutable bool kfilemetadata__writerplugin_timerevent_isbase = false;
    mutable bool kfilemetadata__writerplugin_childevent_isbase = false;
    mutable bool kfilemetadata__writerplugin_customevent_isbase = false;
    mutable bool kfilemetadata__writerplugin_connectnotify_isbase = false;
    mutable bool kfilemetadata__writerplugin_disconnectnotify_isbase = false;
    mutable bool kfilemetadata__writerplugin_sender_isbase = false;
    mutable bool kfilemetadata__writerplugin_sendersignalindex_isbase = false;
    mutable bool kfilemetadata__writerplugin_receivers_isbase = false;
    mutable bool kfilemetadata__writerplugin_issignalconnected_isbase = false;

  public:
    VirtualKFileMetaDataWriterPlugin(QObject* parent) : KFileMetaData::WriterPlugin(parent) {};

    // Callback setters
    inline void setKFileMetaData__WriterPlugin_MetaObject_Callback(KFileMetaData__WriterPlugin_MetaObject_Callback cb) { kfilemetadata__writerplugin_metaobject_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_Metacast_Callback(KFileMetaData__WriterPlugin_Metacast_Callback cb) { kfilemetadata__writerplugin_metacast_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_Metacall_Callback(KFileMetaData__WriterPlugin_Metacall_Callback cb) { kfilemetadata__writerplugin_metacall_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_WriteMimetypes_Callback(KFileMetaData__WriterPlugin_WriteMimetypes_Callback cb) { kfilemetadata__writerplugin_writemimetypes_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_Write_Callback(KFileMetaData__WriterPlugin_Write_Callback cb) { kfilemetadata__writerplugin_write_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_Event_Callback(KFileMetaData__WriterPlugin_Event_Callback cb) { kfilemetadata__writerplugin_event_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_EventFilter_Callback(KFileMetaData__WriterPlugin_EventFilter_Callback cb) { kfilemetadata__writerplugin_eventfilter_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_TimerEvent_Callback(KFileMetaData__WriterPlugin_TimerEvent_Callback cb) { kfilemetadata__writerplugin_timerevent_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_ChildEvent_Callback(KFileMetaData__WriterPlugin_ChildEvent_Callback cb) { kfilemetadata__writerplugin_childevent_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_CustomEvent_Callback(KFileMetaData__WriterPlugin_CustomEvent_Callback cb) { kfilemetadata__writerplugin_customevent_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_ConnectNotify_Callback(KFileMetaData__WriterPlugin_ConnectNotify_Callback cb) { kfilemetadata__writerplugin_connectnotify_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_DisconnectNotify_Callback(KFileMetaData__WriterPlugin_DisconnectNotify_Callback cb) { kfilemetadata__writerplugin_disconnectnotify_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_Sender_Callback(KFileMetaData__WriterPlugin_Sender_Callback cb) { kfilemetadata__writerplugin_sender_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_SenderSignalIndex_Callback(KFileMetaData__WriterPlugin_SenderSignalIndex_Callback cb) { kfilemetadata__writerplugin_sendersignalindex_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_Receivers_Callback(KFileMetaData__WriterPlugin_Receivers_Callback cb) { kfilemetadata__writerplugin_receivers_callback = cb; }
    inline void setKFileMetaData__WriterPlugin_IsSignalConnected_Callback(KFileMetaData__WriterPlugin_IsSignalConnected_Callback cb) { kfilemetadata__writerplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKFileMetaData__WriterPlugin_MetaObject_IsBase(bool value) const { kfilemetadata__writerplugin_metaobject_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_Metacast_IsBase(bool value) const { kfilemetadata__writerplugin_metacast_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_Metacall_IsBase(bool value) const { kfilemetadata__writerplugin_metacall_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_WriteMimetypes_IsBase(bool value) const { kfilemetadata__writerplugin_writemimetypes_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_Write_IsBase(bool value) const { kfilemetadata__writerplugin_write_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_Event_IsBase(bool value) const { kfilemetadata__writerplugin_event_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_EventFilter_IsBase(bool value) const { kfilemetadata__writerplugin_eventfilter_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_TimerEvent_IsBase(bool value) const { kfilemetadata__writerplugin_timerevent_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_ChildEvent_IsBase(bool value) const { kfilemetadata__writerplugin_childevent_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_CustomEvent_IsBase(bool value) const { kfilemetadata__writerplugin_customevent_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_ConnectNotify_IsBase(bool value) const { kfilemetadata__writerplugin_connectnotify_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_DisconnectNotify_IsBase(bool value) const { kfilemetadata__writerplugin_disconnectnotify_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_Sender_IsBase(bool value) const { kfilemetadata__writerplugin_sender_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_SenderSignalIndex_IsBase(bool value) const { kfilemetadata__writerplugin_sendersignalindex_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_Receivers_IsBase(bool value) const { kfilemetadata__writerplugin_receivers_isbase = value; }
    inline void setKFileMetaData__WriterPlugin_IsSignalConnected_IsBase(bool value) const { kfilemetadata__writerplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfilemetadata__writerplugin_metaobject_isbase) {
            kfilemetadata__writerplugin_metaobject_isbase = false;
            return KFileMetaData__WriterPlugin::metaObject();
        }
        auto metaobject_cb = kfilemetadata__writerplugin_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KFileMetaData__WriterPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfilemetadata__writerplugin_metacast_isbase) {
            kfilemetadata__writerplugin_metacast_isbase = false;
            return KFileMetaData__WriterPlugin::qt_metacast(param1);
        }
        auto metacast_cb = kfilemetadata__writerplugin_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KFileMetaData__WriterPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilemetadata__writerplugin_metacall_isbase) {
            kfilemetadata__writerplugin_metacall_isbase = false;
            return KFileMetaData__WriterPlugin::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kfilemetadata__writerplugin_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFileMetaData__WriterPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> writeMimetypes() const override {
        auto writemimetypes_cb = kfilemetadata__writerplugin_writemimetypes_callback;
        if (writemimetypes_cb) {
            const char** callback_ret = writemimetypes_cb();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void write(const KFileMetaData::WriteData& data) override {
        auto write_cb = kfilemetadata__writerplugin_write_callback;
        if (write_cb) {
            const KFileMetaData::WriteData& data_ret = data;
            // Cast returned reference into pointer
            KFileMetaData__WriteData* cbval1 = const_cast<KFileMetaData::WriteData*>(&data_ret);

            write_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilemetadata__writerplugin_event_isbase) {
            kfilemetadata__writerplugin_event_isbase = false;
            return KFileMetaData__WriterPlugin::event(event);
        }
        auto event_cb = kfilemetadata__writerplugin_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KFileMetaData__WriterPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfilemetadata__writerplugin_eventfilter_isbase) {
            kfilemetadata__writerplugin_eventfilter_isbase = false;
            return KFileMetaData__WriterPlugin::eventFilter(watched, event);
        }
        auto eventfilter_cb = kfilemetadata__writerplugin_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFileMetaData__WriterPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilemetadata__writerplugin_timerevent_isbase) {
            kfilemetadata__writerplugin_timerevent_isbase = false;
            KFileMetaData__WriterPlugin::timerEvent(event);
            return;
        }
        auto timerevent_cb = kfilemetadata__writerplugin_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KFileMetaData__WriterPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilemetadata__writerplugin_childevent_isbase) {
            kfilemetadata__writerplugin_childevent_isbase = false;
            KFileMetaData__WriterPlugin::childEvent(event);
            return;
        }
        auto childevent_cb = kfilemetadata__writerplugin_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KFileMetaData__WriterPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilemetadata__writerplugin_customevent_isbase) {
            kfilemetadata__writerplugin_customevent_isbase = false;
            KFileMetaData__WriterPlugin::customEvent(event);
            return;
        }
        auto customevent_cb = kfilemetadata__writerplugin_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KFileMetaData__WriterPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilemetadata__writerplugin_connectnotify_isbase) {
            kfilemetadata__writerplugin_connectnotify_isbase = false;
            KFileMetaData__WriterPlugin::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kfilemetadata__writerplugin_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KFileMetaData__WriterPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilemetadata__writerplugin_disconnectnotify_isbase) {
            kfilemetadata__writerplugin_disconnectnotify_isbase = false;
            KFileMetaData__WriterPlugin::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kfilemetadata__writerplugin_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KFileMetaData__WriterPlugin::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfilemetadata__writerplugin_sender_isbase) {
            kfilemetadata__writerplugin_sender_isbase = false;
            return KFileMetaData__WriterPlugin::sender();
        }
        auto sender_cb = kfilemetadata__writerplugin_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KFileMetaData__WriterPlugin::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfilemetadata__writerplugin_sendersignalindex_isbase) {
            kfilemetadata__writerplugin_sendersignalindex_isbase = false;
            return KFileMetaData__WriterPlugin::senderSignalIndex();
        }
        auto sendersignalindex_cb = kfilemetadata__writerplugin_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KFileMetaData__WriterPlugin::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfilemetadata__writerplugin_receivers_isbase) {
            kfilemetadata__writerplugin_receivers_isbase = false;
            return KFileMetaData__WriterPlugin::receivers(signal);
        }
        auto receivers_cb = kfilemetadata__writerplugin_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFileMetaData__WriterPlugin::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfilemetadata__writerplugin_issignalconnected_isbase) {
            kfilemetadata__writerplugin_issignalconnected_isbase = false;
            return KFileMetaData__WriterPlugin::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kfilemetadata__writerplugin_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KFileMetaData__WriterPlugin::isSignalConnected(signal);
    }

    // Friend functions
    friend void KFileMetaData__WriterPlugin_TimerEvent(KFileMetaData::WriterPlugin* self, QTimerEvent* event);
    friend void KFileMetaData__WriterPlugin_SuperTimerEvent(KFileMetaData::WriterPlugin* self, QTimerEvent* event);
    friend void KFileMetaData__WriterPlugin_ChildEvent(KFileMetaData::WriterPlugin* self, QChildEvent* event);
    friend void KFileMetaData__WriterPlugin_SuperChildEvent(KFileMetaData::WriterPlugin* self, QChildEvent* event);
    friend void KFileMetaData__WriterPlugin_CustomEvent(KFileMetaData::WriterPlugin* self, QEvent* event);
    friend void KFileMetaData__WriterPlugin_SuperCustomEvent(KFileMetaData::WriterPlugin* self, QEvent* event);
    friend void KFileMetaData__WriterPlugin_ConnectNotify(KFileMetaData::WriterPlugin* self, const QMetaMethod* signal);
    friend void KFileMetaData__WriterPlugin_SuperConnectNotify(KFileMetaData::WriterPlugin* self, const QMetaMethod* signal);
    friend void KFileMetaData__WriterPlugin_DisconnectNotify(KFileMetaData::WriterPlugin* self, const QMetaMethod* signal);
    friend void KFileMetaData__WriterPlugin_SuperDisconnectNotify(KFileMetaData::WriterPlugin* self, const QMetaMethod* signal);
    friend QObject* KFileMetaData__WriterPlugin_Sender(const KFileMetaData::WriterPlugin* self);
    friend QObject* KFileMetaData__WriterPlugin_SuperSender(const KFileMetaData::WriterPlugin* self);
    friend int KFileMetaData__WriterPlugin_SenderSignalIndex(const KFileMetaData::WriterPlugin* self);
    friend int KFileMetaData__WriterPlugin_SuperSenderSignalIndex(const KFileMetaData::WriterPlugin* self);
    friend int KFileMetaData__WriterPlugin_Receivers(const KFileMetaData::WriterPlugin* self, const char* signal);
    friend int KFileMetaData__WriterPlugin_SuperReceivers(const KFileMetaData::WriterPlugin* self, const char* signal);
    friend bool KFileMetaData__WriterPlugin_IsSignalConnected(const KFileMetaData::WriterPlugin* self, const QMetaMethod* signal);
    friend bool KFileMetaData__WriterPlugin_SuperIsSignalConnected(const KFileMetaData::WriterPlugin* self, const QMetaMethod* signal);
};

#endif
