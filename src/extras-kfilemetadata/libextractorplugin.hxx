#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBVIRTUALEXTRACTORPLUGIN_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBVIRTUALEXTRACTORPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileMetaData::ExtractorPlugin so that we can call protected methods
class VirtualKFileMetaDataExtractorPlugin : public KFileMetaData::ExtractorPlugin {

  public:
    // Virtual class boolean flag
    bool isVirtualKFileMetaDataExtractorPlugin = true;

    // Virtual class public types (including callbacks)
    using KFileMetaData__ExtractorPlugin_MetaObject_Callback = QMetaObject* (*)();
    using KFileMetaData__ExtractorPlugin_Metacast_Callback = void* (*)(KFileMetaData__ExtractorPlugin*, const char*);
    using KFileMetaData__ExtractorPlugin_Metacall_Callback = int (*)(KFileMetaData__ExtractorPlugin*, int, int, void**);
    using KFileMetaData__ExtractorPlugin_Mimetypes_Callback = const char** (*)();
    using KFileMetaData__ExtractorPlugin_Extract_Callback = void (*)(KFileMetaData__ExtractorPlugin*, KFileMetaData__ExtractionResult*);
    using KFileMetaData__ExtractorPlugin_Event_Callback = bool (*)(KFileMetaData__ExtractorPlugin*, QEvent*);
    using KFileMetaData__ExtractorPlugin_EventFilter_Callback = bool (*)(KFileMetaData__ExtractorPlugin*, QObject*, QEvent*);
    using KFileMetaData__ExtractorPlugin_TimerEvent_Callback = void (*)(KFileMetaData__ExtractorPlugin*, QTimerEvent*);
    using KFileMetaData__ExtractorPlugin_ChildEvent_Callback = void (*)(KFileMetaData__ExtractorPlugin*, QChildEvent*);
    using KFileMetaData__ExtractorPlugin_CustomEvent_Callback = void (*)(KFileMetaData__ExtractorPlugin*, QEvent*);
    using KFileMetaData__ExtractorPlugin_ConnectNotify_Callback = void (*)(KFileMetaData__ExtractorPlugin*, QMetaMethod*);
    using KFileMetaData__ExtractorPlugin_DisconnectNotify_Callback = void (*)(KFileMetaData__ExtractorPlugin*, QMetaMethod*);
    using KFileMetaData__ExtractorPlugin_GetSupportedMimeType_Callback = const char* (*)(const KFileMetaData__ExtractorPlugin*, const char*);
    using KFileMetaData__ExtractorPlugin_Sender_Callback = QObject* (*)();
    using KFileMetaData__ExtractorPlugin_SenderSignalIndex_Callback = int (*)();
    using KFileMetaData__ExtractorPlugin_Receivers_Callback = int (*)(const KFileMetaData__ExtractorPlugin*, const char*);
    using KFileMetaData__ExtractorPlugin_IsSignalConnected_Callback = bool (*)(const KFileMetaData__ExtractorPlugin*, QMetaMethod*);

  protected:
    // Instance callback storage
    KFileMetaData__ExtractorPlugin_MetaObject_Callback kfilemetadata__extractorplugin_metaobject_callback = nullptr;
    KFileMetaData__ExtractorPlugin_Metacast_Callback kfilemetadata__extractorplugin_metacast_callback = nullptr;
    KFileMetaData__ExtractorPlugin_Metacall_Callback kfilemetadata__extractorplugin_metacall_callback = nullptr;
    KFileMetaData__ExtractorPlugin_Mimetypes_Callback kfilemetadata__extractorplugin_mimetypes_callback = nullptr;
    KFileMetaData__ExtractorPlugin_Extract_Callback kfilemetadata__extractorplugin_extract_callback = nullptr;
    KFileMetaData__ExtractorPlugin_Event_Callback kfilemetadata__extractorplugin_event_callback = nullptr;
    KFileMetaData__ExtractorPlugin_EventFilter_Callback kfilemetadata__extractorplugin_eventfilter_callback = nullptr;
    KFileMetaData__ExtractorPlugin_TimerEvent_Callback kfilemetadata__extractorplugin_timerevent_callback = nullptr;
    KFileMetaData__ExtractorPlugin_ChildEvent_Callback kfilemetadata__extractorplugin_childevent_callback = nullptr;
    KFileMetaData__ExtractorPlugin_CustomEvent_Callback kfilemetadata__extractorplugin_customevent_callback = nullptr;
    KFileMetaData__ExtractorPlugin_ConnectNotify_Callback kfilemetadata__extractorplugin_connectnotify_callback = nullptr;
    KFileMetaData__ExtractorPlugin_DisconnectNotify_Callback kfilemetadata__extractorplugin_disconnectnotify_callback = nullptr;
    KFileMetaData__ExtractorPlugin_GetSupportedMimeType_Callback kfilemetadata__extractorplugin_getsupportedmimetype_callback = nullptr;
    KFileMetaData__ExtractorPlugin_Sender_Callback kfilemetadata__extractorplugin_sender_callback = nullptr;
    KFileMetaData__ExtractorPlugin_SenderSignalIndex_Callback kfilemetadata__extractorplugin_sendersignalindex_callback = nullptr;
    KFileMetaData__ExtractorPlugin_Receivers_Callback kfilemetadata__extractorplugin_receivers_callback = nullptr;
    KFileMetaData__ExtractorPlugin_IsSignalConnected_Callback kfilemetadata__extractorplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kfilemetadata__extractorplugin_metaobject_isbase = false;
    mutable bool kfilemetadata__extractorplugin_metacast_isbase = false;
    mutable bool kfilemetadata__extractorplugin_metacall_isbase = false;
    mutable bool kfilemetadata__extractorplugin_mimetypes_isbase = false;
    mutable bool kfilemetadata__extractorplugin_extract_isbase = false;
    mutable bool kfilemetadata__extractorplugin_event_isbase = false;
    mutable bool kfilemetadata__extractorplugin_eventfilter_isbase = false;
    mutable bool kfilemetadata__extractorplugin_timerevent_isbase = false;
    mutable bool kfilemetadata__extractorplugin_childevent_isbase = false;
    mutable bool kfilemetadata__extractorplugin_customevent_isbase = false;
    mutable bool kfilemetadata__extractorplugin_connectnotify_isbase = false;
    mutable bool kfilemetadata__extractorplugin_disconnectnotify_isbase = false;
    mutable bool kfilemetadata__extractorplugin_getsupportedmimetype_isbase = false;
    mutable bool kfilemetadata__extractorplugin_sender_isbase = false;
    mutable bool kfilemetadata__extractorplugin_sendersignalindex_isbase = false;
    mutable bool kfilemetadata__extractorplugin_receivers_isbase = false;
    mutable bool kfilemetadata__extractorplugin_issignalconnected_isbase = false;

  public:
    VirtualKFileMetaDataExtractorPlugin(QObject* parent) : KFileMetaData::ExtractorPlugin(parent) {};

    // Callback setters
    inline void setKFileMetaData__ExtractorPlugin_MetaObject_Callback(KFileMetaData__ExtractorPlugin_MetaObject_Callback cb) { kfilemetadata__extractorplugin_metaobject_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_Metacast_Callback(KFileMetaData__ExtractorPlugin_Metacast_Callback cb) { kfilemetadata__extractorplugin_metacast_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_Metacall_Callback(KFileMetaData__ExtractorPlugin_Metacall_Callback cb) { kfilemetadata__extractorplugin_metacall_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_Mimetypes_Callback(KFileMetaData__ExtractorPlugin_Mimetypes_Callback cb) { kfilemetadata__extractorplugin_mimetypes_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_Extract_Callback(KFileMetaData__ExtractorPlugin_Extract_Callback cb) { kfilemetadata__extractorplugin_extract_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_Event_Callback(KFileMetaData__ExtractorPlugin_Event_Callback cb) { kfilemetadata__extractorplugin_event_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_EventFilter_Callback(KFileMetaData__ExtractorPlugin_EventFilter_Callback cb) { kfilemetadata__extractorplugin_eventfilter_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_TimerEvent_Callback(KFileMetaData__ExtractorPlugin_TimerEvent_Callback cb) { kfilemetadata__extractorplugin_timerevent_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_ChildEvent_Callback(KFileMetaData__ExtractorPlugin_ChildEvent_Callback cb) { kfilemetadata__extractorplugin_childevent_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_CustomEvent_Callback(KFileMetaData__ExtractorPlugin_CustomEvent_Callback cb) { kfilemetadata__extractorplugin_customevent_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_ConnectNotify_Callback(KFileMetaData__ExtractorPlugin_ConnectNotify_Callback cb) { kfilemetadata__extractorplugin_connectnotify_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_DisconnectNotify_Callback(KFileMetaData__ExtractorPlugin_DisconnectNotify_Callback cb) { kfilemetadata__extractorplugin_disconnectnotify_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_GetSupportedMimeType_Callback(KFileMetaData__ExtractorPlugin_GetSupportedMimeType_Callback cb) { kfilemetadata__extractorplugin_getsupportedmimetype_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_Sender_Callback(KFileMetaData__ExtractorPlugin_Sender_Callback cb) { kfilemetadata__extractorplugin_sender_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_SenderSignalIndex_Callback(KFileMetaData__ExtractorPlugin_SenderSignalIndex_Callback cb) { kfilemetadata__extractorplugin_sendersignalindex_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_Receivers_Callback(KFileMetaData__ExtractorPlugin_Receivers_Callback cb) { kfilemetadata__extractorplugin_receivers_callback = cb; }
    inline void setKFileMetaData__ExtractorPlugin_IsSignalConnected_Callback(KFileMetaData__ExtractorPlugin_IsSignalConnected_Callback cb) { kfilemetadata__extractorplugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKFileMetaData__ExtractorPlugin_MetaObject_IsBase(bool value) const { kfilemetadata__extractorplugin_metaobject_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_Metacast_IsBase(bool value) const { kfilemetadata__extractorplugin_metacast_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_Metacall_IsBase(bool value) const { kfilemetadata__extractorplugin_metacall_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_Mimetypes_IsBase(bool value) const { kfilemetadata__extractorplugin_mimetypes_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_Extract_IsBase(bool value) const { kfilemetadata__extractorplugin_extract_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_Event_IsBase(bool value) const { kfilemetadata__extractorplugin_event_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_EventFilter_IsBase(bool value) const { kfilemetadata__extractorplugin_eventfilter_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_TimerEvent_IsBase(bool value) const { kfilemetadata__extractorplugin_timerevent_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_ChildEvent_IsBase(bool value) const { kfilemetadata__extractorplugin_childevent_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_CustomEvent_IsBase(bool value) const { kfilemetadata__extractorplugin_customevent_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_ConnectNotify_IsBase(bool value) const { kfilemetadata__extractorplugin_connectnotify_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_DisconnectNotify_IsBase(bool value) const { kfilemetadata__extractorplugin_disconnectnotify_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_GetSupportedMimeType_IsBase(bool value) const { kfilemetadata__extractorplugin_getsupportedmimetype_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_Sender_IsBase(bool value) const { kfilemetadata__extractorplugin_sender_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_SenderSignalIndex_IsBase(bool value) const { kfilemetadata__extractorplugin_sendersignalindex_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_Receivers_IsBase(bool value) const { kfilemetadata__extractorplugin_receivers_isbase = value; }
    inline void setKFileMetaData__ExtractorPlugin_IsSignalConnected_IsBase(bool value) const { kfilemetadata__extractorplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfilemetadata__extractorplugin_metaobject_isbase) {
            kfilemetadata__extractorplugin_metaobject_isbase = false;
            return KFileMetaData__ExtractorPlugin::metaObject();
        }
        auto metaobject_cb = kfilemetadata__extractorplugin_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KFileMetaData__ExtractorPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfilemetadata__extractorplugin_metacast_isbase) {
            kfilemetadata__extractorplugin_metacast_isbase = false;
            return KFileMetaData__ExtractorPlugin::qt_metacast(param1);
        }
        auto metacast_cb = kfilemetadata__extractorplugin_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KFileMetaData__ExtractorPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilemetadata__extractorplugin_metacall_isbase) {
            kfilemetadata__extractorplugin_metacall_isbase = false;
            return KFileMetaData__ExtractorPlugin::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kfilemetadata__extractorplugin_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFileMetaData__ExtractorPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimetypes() const override {
        auto mimetypes_cb = kfilemetadata__extractorplugin_mimetypes_callback;
        if (mimetypes_cb) {
            const char** callback_ret = mimetypes_cb();
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
    virtual void extract(KFileMetaData::ExtractionResult* result) override {
        auto extract_cb = kfilemetadata__extractorplugin_extract_callback;
        if (extract_cb) {
            KFileMetaData__ExtractionResult* cbval1 = result;

            extract_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilemetadata__extractorplugin_event_isbase) {
            kfilemetadata__extractorplugin_event_isbase = false;
            return KFileMetaData__ExtractorPlugin::event(event);
        }
        auto event_cb = kfilemetadata__extractorplugin_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KFileMetaData__ExtractorPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfilemetadata__extractorplugin_eventfilter_isbase) {
            kfilemetadata__extractorplugin_eventfilter_isbase = false;
            return KFileMetaData__ExtractorPlugin::eventFilter(watched, event);
        }
        auto eventfilter_cb = kfilemetadata__extractorplugin_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFileMetaData__ExtractorPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilemetadata__extractorplugin_timerevent_isbase) {
            kfilemetadata__extractorplugin_timerevent_isbase = false;
            KFileMetaData__ExtractorPlugin::timerEvent(event);
            return;
        }
        auto timerevent_cb = kfilemetadata__extractorplugin_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KFileMetaData__ExtractorPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilemetadata__extractorplugin_childevent_isbase) {
            kfilemetadata__extractorplugin_childevent_isbase = false;
            KFileMetaData__ExtractorPlugin::childEvent(event);
            return;
        }
        auto childevent_cb = kfilemetadata__extractorplugin_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KFileMetaData__ExtractorPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilemetadata__extractorplugin_customevent_isbase) {
            kfilemetadata__extractorplugin_customevent_isbase = false;
            KFileMetaData__ExtractorPlugin::customEvent(event);
            return;
        }
        auto customevent_cb = kfilemetadata__extractorplugin_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KFileMetaData__ExtractorPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilemetadata__extractorplugin_connectnotify_isbase) {
            kfilemetadata__extractorplugin_connectnotify_isbase = false;
            KFileMetaData__ExtractorPlugin::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kfilemetadata__extractorplugin_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KFileMetaData__ExtractorPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilemetadata__extractorplugin_disconnectnotify_isbase) {
            kfilemetadata__extractorplugin_disconnectnotify_isbase = false;
            KFileMetaData__ExtractorPlugin::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kfilemetadata__extractorplugin_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KFileMetaData__ExtractorPlugin::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QString getSupportedMimeType(const QString& mimetype) const {
        if (kfilemetadata__extractorplugin_getsupportedmimetype_isbase) {
            kfilemetadata__extractorplugin_getsupportedmimetype_isbase = false;
            return KFileMetaData__ExtractorPlugin::getSupportedMimeType(mimetype);
        }
        auto getsupportedmimetype_cb = kfilemetadata__extractorplugin_getsupportedmimetype_callback;
        if (getsupportedmimetype_cb) {
            const QString mimetype_ret = mimetype;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray mimetype_b = mimetype_ret.toUtf8();
            auto mimetype_str_len = mimetype_b.length();
            const char* mimetype_str = static_cast<const char*>(malloc(mimetype_str_len + 1));
            memcpy((void*)mimetype_str, mimetype_b.data(), mimetype_str_len);
            ((char*)mimetype_str)[mimetype_str_len] = '\0';
            const char* cbval1 = mimetype_str;

            const char* callback_ret = getsupportedmimetype_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(mimetype_str);
            return callback_ret_QString;
        }
        return KFileMetaData__ExtractorPlugin::getSupportedMimeType(mimetype);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfilemetadata__extractorplugin_sender_isbase) {
            kfilemetadata__extractorplugin_sender_isbase = false;
            return KFileMetaData__ExtractorPlugin::sender();
        }
        auto sender_cb = kfilemetadata__extractorplugin_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KFileMetaData__ExtractorPlugin::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfilemetadata__extractorplugin_sendersignalindex_isbase) {
            kfilemetadata__extractorplugin_sendersignalindex_isbase = false;
            return KFileMetaData__ExtractorPlugin::senderSignalIndex();
        }
        auto sendersignalindex_cb = kfilemetadata__extractorplugin_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KFileMetaData__ExtractorPlugin::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfilemetadata__extractorplugin_receivers_isbase) {
            kfilemetadata__extractorplugin_receivers_isbase = false;
            return KFileMetaData__ExtractorPlugin::receivers(signal);
        }
        auto receivers_cb = kfilemetadata__extractorplugin_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFileMetaData__ExtractorPlugin::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfilemetadata__extractorplugin_issignalconnected_isbase) {
            kfilemetadata__extractorplugin_issignalconnected_isbase = false;
            return KFileMetaData__ExtractorPlugin::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kfilemetadata__extractorplugin_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KFileMetaData__ExtractorPlugin::isSignalConnected(signal);
    }

    // Friend functions
    friend void KFileMetaData__ExtractorPlugin_TimerEvent(KFileMetaData::ExtractorPlugin* self, QTimerEvent* event);
    friend void KFileMetaData__ExtractorPlugin_SuperTimerEvent(KFileMetaData::ExtractorPlugin* self, QTimerEvent* event);
    friend void KFileMetaData__ExtractorPlugin_ChildEvent(KFileMetaData::ExtractorPlugin* self, QChildEvent* event);
    friend void KFileMetaData__ExtractorPlugin_SuperChildEvent(KFileMetaData::ExtractorPlugin* self, QChildEvent* event);
    friend void KFileMetaData__ExtractorPlugin_CustomEvent(KFileMetaData::ExtractorPlugin* self, QEvent* event);
    friend void KFileMetaData__ExtractorPlugin_SuperCustomEvent(KFileMetaData::ExtractorPlugin* self, QEvent* event);
    friend void KFileMetaData__ExtractorPlugin_ConnectNotify(KFileMetaData::ExtractorPlugin* self, const QMetaMethod* signal);
    friend void KFileMetaData__ExtractorPlugin_SuperConnectNotify(KFileMetaData::ExtractorPlugin* self, const QMetaMethod* signal);
    friend void KFileMetaData__ExtractorPlugin_DisconnectNotify(KFileMetaData::ExtractorPlugin* self, const QMetaMethod* signal);
    friend void KFileMetaData__ExtractorPlugin_SuperDisconnectNotify(KFileMetaData::ExtractorPlugin* self, const QMetaMethod* signal);
    friend libqt_string KFileMetaData__ExtractorPlugin_GetSupportedMimeType(const KFileMetaData::ExtractorPlugin* self, const libqt_string mimetype);
    friend libqt_string KFileMetaData__ExtractorPlugin_SuperGetSupportedMimeType(const KFileMetaData::ExtractorPlugin* self, const libqt_string mimetype);
    friend QObject* KFileMetaData__ExtractorPlugin_Sender(const KFileMetaData::ExtractorPlugin* self);
    friend QObject* KFileMetaData__ExtractorPlugin_SuperSender(const KFileMetaData::ExtractorPlugin* self);
    friend int KFileMetaData__ExtractorPlugin_SenderSignalIndex(const KFileMetaData::ExtractorPlugin* self);
    friend int KFileMetaData__ExtractorPlugin_SuperSenderSignalIndex(const KFileMetaData::ExtractorPlugin* self);
    friend int KFileMetaData__ExtractorPlugin_Receivers(const KFileMetaData::ExtractorPlugin* self, const char* signal);
    friend int KFileMetaData__ExtractorPlugin_SuperReceivers(const KFileMetaData::ExtractorPlugin* self, const char* signal);
    friend bool KFileMetaData__ExtractorPlugin_IsSignalConnected(const KFileMetaData::ExtractorPlugin* self, const QMetaMethod* signal);
    friend bool KFileMetaData__ExtractorPlugin_SuperIsSignalConnected(const KFileMetaData::ExtractorPlugin* self, const QMetaMethod* signal);
};

#endif
